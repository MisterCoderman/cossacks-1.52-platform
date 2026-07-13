#include "recomp.h"

/* OnInit @ 0x117f1005 (5 bytes, 1 insns) */
void f_117f1005(void) {
  FTRACE(0x117f1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f1005 jmp 0x117f1030 */
  f_117f1030(); return;
}

/* thunk_FUN_10001db0 @ 0x117f100a (5 bytes, 1 insns) */
void f_117f100a(void) {
  FTRACE(0x117f100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f100a jmp 0x117f1db0 */
  f_117f1db0(); return;
}

/* ProcessScenary @ 0x117f100f (5 bytes, 1 insns) */
void f_117f100f(void) {
  FTRACE(0x117f100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f100f jmp 0x117f1e10 */
  f_117f1e10(); return;
}

/* FUN_10001030 @ 0x117f1030 (2759 bytes, 727 insns) */
void f_117f1030(void) {
  FTRACE(0x117f1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f1030 push ebp */
  push32((uint32_t)(EBP));
  /* 117f1031 mov ebp, esp */
  EBP = (ESP);
  /* 117f1033 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f1036 push ebx */
  push32((uint32_t)(EBX));
  /* 117f1037 push esi */
  push32((uint32_t)(ESI));
  /* 117f1038 push edi */
  push32((uint32_t)(EDI));
  /* 117f1039 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 117f103c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 117f1041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 117f1046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117f1048 mov esi, esp */
  ESI = (ESP);
  /* 117f104a push 0x1181d354 */
  push32((uint32_t)(0x1181d354u));
  /* 117f104f push 0x11822448 */
  push32((uint32_t)(0x11822448u));
  /* 117f1054 call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f105au);
  /* 117f105a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f105d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f105f call 0x117f5550 */
  push32(0x117f1064u); f_117f5550();
  /* 117f1064 mov esi, esp */
  ESI = (ESP);
  /* 117f1066 push 0x1181d34c */
  push32((uint32_t)(0x1181d34cu));
  /* 117f106b push 0x11822488 */
  push32((uint32_t)(0x11822488u));
  /* 117f1070 call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f1076u);
  /* 117f1076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1079 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f107b call 0x117f5550 */
  push32(0x117f1080u); f_117f5550();
  /* 117f1080 mov esi, esp */
  ESI = (ESP);
  /* 117f1082 push 0x1181d344 */
  push32((uint32_t)(0x1181d344u));
  /* 117f1087 push 0x11822480 */
  push32((uint32_t)(0x11822480u));
  /* 117f108c call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f1092u);
  /* 117f1092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1095 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1097 call 0x117f5550 */
  push32(0x117f109cu); f_117f5550();
  /* 117f109c mov esi, esp */
  ESI = (ESP);
  /* 117f109e push 0x1181d33c */
  push32((uint32_t)(0x1181d33cu));
  /* 117f10a3 push 0x11822490 */
  push32((uint32_t)(0x11822490u));
  /* 117f10a8 call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f10aeu);
  /* 117f10ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f10b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f10b3 call 0x117f5550 */
  push32(0x117f10b8u); f_117f5550();
  /* 117f10b8 mov esi, esp */
  ESI = (ESP);
  /* 117f10ba push 0x1181d330 */
  push32((uint32_t)(0x1181d330u));
  /* 117f10bf push 0x118224c8 */
  push32((uint32_t)(0x118224c8u));
  /* 117f10c4 call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f10cau);
  /* 117f10ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f10cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f10cf call 0x117f5550 */
  push32(0x117f10d4u); f_117f5550();
  /* 117f10d4 mov esi, esp */
  ESI = (ESP);
  /* 117f10d6 push 0x1181d324 */
  push32((uint32_t)(0x1181d324u));
  /* 117f10db push 0x118224c0 */
  push32((uint32_t)(0x118224c0u));
  /* 117f10e0 call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f10e6u);
  /* 117f10e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f10e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f10eb call 0x117f5550 */
  push32(0x117f10f0u); f_117f5550();
  /* 117f10f0 mov esi, esp */
  ESI = (ESP);
  /* 117f10f2 push 0x1181d318 */
  push32((uint32_t)(0x1181d318u));
  /* 117f10f7 push 0x118224b8 */
  push32((uint32_t)(0x118224b8u));
  /* 117f10fc call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f1102u);
  /* 117f1102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1107 call 0x117f5550 */
  push32(0x117f110cu); f_117f5550();
  /* 117f110c mov esi, esp */
  ESI = (ESP);
  /* 117f110e push 0x1181d30c */
  push32((uint32_t)(0x1181d30cu));
  /* 117f1113 push 0x118224b0 */
  push32((uint32_t)(0x118224b0u));
  /* 117f1118 call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f111eu);
  /* 117f111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1123 call 0x117f5550 */
  push32(0x117f1128u); f_117f5550();
  /* 117f1128 mov esi, esp */
  ESI = (ESP);
  /* 117f112a push 0x1181d300 */
  push32((uint32_t)(0x1181d300u));
  /* 117f112f push 0x118224a8 */
  push32((uint32_t)(0x118224a8u));
  /* 117f1134 call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f113au);
  /* 117f113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f113f call 0x117f5550 */
  push32(0x117f1144u); f_117f5550();
  /* 117f1144 mov esi, esp */
  ESI = (ESP);
  /* 117f1146 push 0x1181d2f4 */
  push32((uint32_t)(0x1181d2f4u));
  /* 117f114b push 0x118224d0 */
  push32((uint32_t)(0x118224d0u));
  /* 117f1150 call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f1156u);
  /* 117f1156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f115b call 0x117f5550 */
  push32(0x117f1160u); f_117f5550();
  /* 117f1160 mov esi, esp */
  ESI = (ESP);
  /* 117f1162 push 0x1181d2e8 */
  push32((uint32_t)(0x1181d2e8u));
  /* 117f1167 push 0x11822460 */
  push32((uint32_t)(0x11822460u));
  /* 117f116c call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f1172u);
  /* 117f1172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1177 call 0x117f5550 */
  push32(0x117f117cu); f_117f5550();
  /* 117f117c mov esi, esp */
  ESI = (ESP);
  /* 117f117e push 0x1181d2dc */
  push32((uint32_t)(0x1181d2dcu));
  /* 117f1183 push 0x11822540 */
  push32((uint32_t)(0x11822540u));
  /* 117f1188 call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f118eu);
  /* 117f118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1193 call 0x117f5550 */
  push32(0x117f1198u); f_117f5550();
  /* 117f1198 mov esi, esp */
  ESI = (ESP);
  /* 117f119a push 0x1181d2d4 */
  push32((uint32_t)(0x1181d2d4u));
  /* 117f119f push 0x11822560 */
  push32((uint32_t)(0x11822560u));
  /* 117f11a4 call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f11aau);
  /* 117f11aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f11ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f11af call 0x117f5550 */
  push32(0x117f11b4u); f_117f5550();
  /* 117f11b4 mov esi, esp */
  ESI = (ESP);
  /* 117f11b6 push 0x1181d2cc */
  push32((uint32_t)(0x1181d2ccu));
  /* 117f11bb push 0x11822568 */
  push32((uint32_t)(0x11822568u));
  /* 117f11c0 call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f11c6u);
  /* 117f11c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f11c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f11cb call 0x117f5550 */
  push32(0x117f11d0u); f_117f5550();
  /* 117f11d0 mov esi, esp */
  ESI = (ESP);
  /* 117f11d2 push 0x1181d2c4 */
  push32((uint32_t)(0x1181d2c4u));
  /* 117f11d7 push 0x11822578 */
  push32((uint32_t)(0x11822578u));
  /* 117f11dc call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f11e2u);
  /* 117f11e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f11e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f11e7 call 0x117f5550 */
  push32(0x117f11ecu); f_117f5550();
  /* 117f11ec mov esi, esp */
  ESI = (ESP);
  /* 117f11ee push 0x1181d2bc */
  push32((uint32_t)(0x1181d2bcu));
  /* 117f11f3 push 0x11822550 */
  push32((uint32_t)(0x11822550u));
  /* 117f11f8 call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f11feu);
  /* 117f11fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1203 call 0x117f5550 */
  push32(0x117f1208u); f_117f5550();
  /* 117f1208 mov esi, esp */
  ESI = (ESP);
  /* 117f120a push 0x1181d2b4 */
  push32((uint32_t)(0x1181d2b4u));
  /* 117f120f push 0x11822520 */
  push32((uint32_t)(0x11822520u));
  /* 117f1214 call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f121au);
  /* 117f121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f121f call 0x117f5550 */
  push32(0x117f1224u); f_117f5550();
  /* 117f1224 mov esi, esp */
  ESI = (ESP);
  /* 117f1226 push 0x1181d2a8 */
  push32((uint32_t)(0x1181d2a8u));
  /* 117f122b push 0x118224d8 */
  push32((uint32_t)(0x118224d8u));
  /* 117f1230 call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f1236u);
  /* 117f1236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f123b call 0x117f5550 */
  push32(0x117f1240u); f_117f5550();
  /* 117f1240 mov esi, esp */
  ESI = (ESP);
  /* 117f1242 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f1247 push 0x11822458 */
  push32((uint32_t)(0x11822458u));
  /* 117f124c call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f1252u);
  /* 117f1252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1257 call 0x117f5550 */
  push32(0x117f125cu); f_117f5550();
  /* 117f125c mov esi, esp */
  ESI = (ESP);
  /* 117f125e push 0x1181d294 */
  push32((uint32_t)(0x1181d294u));
  /* 117f1263 push 0x11822600 */
  push32((uint32_t)(0x11822600u));
  /* 117f1268 call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f126eu);
  /* 117f126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1273 call 0x117f5550 */
  push32(0x117f1278u); f_117f5550();
  /* 117f1278 mov esi, esp */
  ESI = (ESP);
  /* 117f127a push 0x1181d28c */
  push32((uint32_t)(0x1181d28cu));
  /* 117f127f push 0x11822498 */
  push32((uint32_t)(0x11822498u));
  /* 117f1284 call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f128au);
  /* 117f128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f128f call 0x117f5550 */
  push32(0x117f1294u); f_117f5550();
  /* 117f1294 mov esi, esp */
  ESI = (ESP);
  /* 117f1296 push 0x1181d284 */
  push32((uint32_t)(0x1181d284u));
  /* 117f129b push 0x11822558 */
  push32((uint32_t)(0x11822558u));
  /* 117f12a0 call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f12a6u);
  /* 117f12a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f12a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f12ab call 0x117f5550 */
  push32(0x117f12b0u); f_117f5550();
  /* 117f12b0 mov esi, esp */
  ESI = (ESP);
  /* 117f12b2 push 0x1181d27c */
  push32((uint32_t)(0x1181d27cu));
  /* 117f12b7 push 0x118225b8 */
  push32((uint32_t)(0x118225b8u));
  /* 117f12bc call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f12c2u);
  /* 117f12c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f12c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f12c7 call 0x117f5550 */
  push32(0x117f12ccu); f_117f5550();
  /* 117f12cc mov esi, esp */
  ESI = (ESP);
  /* 117f12ce push 0x1181d274 */
  push32((uint32_t)(0x1181d274u));
  /* 117f12d3 push 0x118224e0 */
  push32((uint32_t)(0x118224e0u));
  /* 117f12d8 call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f12deu);
  /* 117f12de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f12e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f12e3 call 0x117f5550 */
  push32(0x117f12e8u); f_117f5550();
  /* 117f12e8 mov esi, esp */
  ESI = (ESP);
  /* 117f12ea push 0x1181d26c */
  push32((uint32_t)(0x1181d26cu));
  /* 117f12ef push 0x11822548 */
  push32((uint32_t)(0x11822548u));
  /* 117f12f4 call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f12fau);
  /* 117f12fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f12fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f12ff call 0x117f5550 */
  push32(0x117f1304u); f_117f5550();
  /* 117f1304 mov esi, esp */
  ESI = (ESP);
  /* 117f1306 push 0x1181d264 */
  push32((uint32_t)(0x1181d264u));
  /* 117f130b push 0x11822640 */
  push32((uint32_t)(0x11822640u));
  /* 117f1310 call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f1316u);
  /* 117f1316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f131b call 0x117f5550 */
  push32(0x117f1320u); f_117f5550();
  /* 117f1320 mov esi, esp */
  ESI = (ESP);
  /* 117f1322 push 0x1181d25c */
  push32((uint32_t)(0x1181d25cu));
  /* 117f1327 push 0x11822648 */
  push32((uint32_t)(0x11822648u));
  /* 117f132c call dword ptr [0x11825504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825504))), 0x117f1332u);
  /* 117f1332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1337 call 0x117f5550 */
  push32(0x117f133cu); f_117f5550();
  /* 117f133c mov esi, esp */
  ESI = (ESP);
  /* 117f133e push 0x1181d254 */
  push32((uint32_t)(0x1181d254u));
  /* 117f1343 push 0x118225a0 */
  push32((uint32_t)(0x118225a0u));
  /* 117f1348 call dword ptr [0x11825508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825508))), 0x117f134eu);
  /* 117f134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1353 call 0x117f5550 */
  push32(0x117f1358u); f_117f5550();
  /* 117f1358 mov esi, esp */
  ESI = (ESP);
  /* 117f135a push 0x1181d248 */
  push32((uint32_t)(0x1181d248u));
  /* 117f135f push 0x11822620 */
  push32((uint32_t)(0x11822620u));
  /* 117f1364 call dword ptr [0x11825508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825508))), 0x117f136au);
  /* 117f136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f136f call 0x117f5550 */
  push32(0x117f1374u); f_117f5550();
  /* 117f1374 mov esi, esp */
  ESI = (ESP);
  /* 117f1376 push 0x1181d23c */
  push32((uint32_t)(0x1181d23cu));
  /* 117f137b push 0x11822628 */
  push32((uint32_t)(0x11822628u));
  /* 117f1380 call dword ptr [0x11825508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825508))), 0x117f1386u);
  /* 117f1386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f138b call 0x117f5550 */
  push32(0x117f1390u); f_117f5550();
  /* 117f1390 mov esi, esp */
  ESI = (ESP);
  /* 117f1392 push 0x1181d234 */
  push32((uint32_t)(0x1181d234u));
  /* 117f1397 push 0x118225a8 */
  push32((uint32_t)(0x118225a8u));
  /* 117f139c call dword ptr [0x11825508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825508))), 0x117f13a2u);
  /* 117f13a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f13a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f13a7 call 0x117f5550 */
  push32(0x117f13acu); f_117f5550();
  /* 117f13ac mov esi, esp */
  ESI = (ESP);
  /* 117f13ae push 0x1181d228 */
  push32((uint32_t)(0x1181d228u));
  /* 117f13b3 push 0x11822630 */
  push32((uint32_t)(0x11822630u));
  /* 117f13b8 call dword ptr [0x11825508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825508))), 0x117f13beu);
  /* 117f13be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f13c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f13c3 call 0x117f5550 */
  push32(0x117f13c8u); f_117f5550();
  /* 117f13c8 mov esi, esp */
  ESI = (ESP);
  /* 117f13ca push 0x1181d21c */
  push32((uint32_t)(0x1181d21cu));
  /* 117f13cf push 0x11822638 */
  push32((uint32_t)(0x11822638u));
  /* 117f13d4 call dword ptr [0x11825508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825508))), 0x117f13dau);
  /* 117f13da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f13dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f13df call 0x117f5550 */
  push32(0x117f13e4u); f_117f5550();
  /* 117f13e4 mov esi, esp */
  ESI = (ESP);
  /* 117f13e6 push 0x1181d214 */
  push32((uint32_t)(0x1181d214u));
  /* 117f13eb push 0x118225b0 */
  push32((uint32_t)(0x118225b0u));
  /* 117f13f0 call dword ptr [0x11825508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825508))), 0x117f13f6u);
  /* 117f13f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f13f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f13fb call 0x117f5550 */
  push32(0x117f1400u); f_117f5550();
  /* 117f1400 mov esi, esp */
  ESI = (ESP);
  /* 117f1402 push 0x1181d208 */
  push32((uint32_t)(0x1181d208u));
  /* 117f1407 push 0x11822608 */
  push32((uint32_t)(0x11822608u));
  /* 117f140c call dword ptr [0x11825508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825508))), 0x117f1412u);
  /* 117f1412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1417 call 0x117f5550 */
  push32(0x117f141cu); f_117f5550();
  /* 117f141c mov esi, esp */
  ESI = (ESP);
  /* 117f141e push 0x1181d1fc */
  push32((uint32_t)(0x1181d1fcu));
  /* 117f1423 push 0x11822610 */
  push32((uint32_t)(0x11822610u));
  /* 117f1428 call dword ptr [0x11825508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825508))), 0x117f142eu);
  /* 117f142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1433 call 0x117f5550 */
  push32(0x117f1438u); f_117f5550();
  /* 117f1438 mov esi, esp */
  ESI = (ESP);
  /* 117f143a push 0x1181d1f0 */
  push32((uint32_t)(0x1181d1f0u));
  /* 117f143f push 0x11822618 */
  push32((uint32_t)(0x11822618u));
  /* 117f1444 call dword ptr [0x11825508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825508))), 0x117f144au);
  /* 117f144a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f144d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f144f call 0x117f5550 */
  push32(0x117f1454u); f_117f5550();
  /* 117f1454 mov esi, esp */
  ESI = (ESP);
  /* 117f1456 push 0x1181d1e8 */
  push32((uint32_t)(0x1181d1e8u));
  /* 117f145b push 0x118225d0 */
  push32((uint32_t)(0x118225d0u));
  /* 117f1460 call dword ptr [0x11825508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825508))), 0x117f1466u);
  /* 117f1466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f146b call 0x117f5550 */
  push32(0x117f1470u); f_117f5550();
  /* 117f1470 mov esi, esp */
  ESI = (ESP);
  /* 117f1472 push 0x1181d1e0 */
  push32((uint32_t)(0x1181d1e0u));
  /* 117f1477 push 0x118225d8 */
  push32((uint32_t)(0x118225d8u));
  /* 117f147c call dword ptr [0x11825508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825508))), 0x117f1482u);
  /* 117f1482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1485 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1487 call 0x117f5550 */
  push32(0x117f148cu); f_117f5550();
  /* 117f148c mov esi, esp */
  ESI = (ESP);
  /* 117f148e push 0x1181d1d4 */
  push32((uint32_t)(0x1181d1d4u));
  /* 117f1493 push 0x118225c0 */
  push32((uint32_t)(0x118225c0u));
  /* 117f1498 call dword ptr [0x11825508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825508))), 0x117f149eu);
  /* 117f149e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f14a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f14a3 call 0x117f5550 */
  push32(0x117f14a8u); f_117f5550();
  /* 117f14a8 mov esi, esp */
  ESI = (ESP);
  /* 117f14aa push 0x1181d1c8 */
  push32((uint32_t)(0x1181d1c8u));
  /* 117f14af push 0x118225c8 */
  push32((uint32_t)(0x118225c8u));
  /* 117f14b4 call dword ptr [0x11825508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825508))), 0x117f14bau);
  /* 117f14ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f14bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f14bf call 0x117f5550 */
  push32(0x117f14c4u); f_117f5550();
  /* 117f14c4 mov esi, esp */
  ESI = (ESP);
  /* 117f14c6 push 0x1181d1c0 */
  push32((uint32_t)(0x1181d1c0u));
  /* 117f14cb push 0x118224a0 */
  push32((uint32_t)(0x118224a0u));
  /* 117f14d0 call dword ptr [0x11825508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825508))), 0x117f14d6u);
  /* 117f14d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f14d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f14db call 0x117f5550 */
  push32(0x117f14e0u); f_117f5550();
  /* 117f14e0 mov esi, esp */
  ESI = (ESP);
  /* 117f14e2 push 0x1181d1a0 */
  push32((uint32_t)(0x1181d1a0u));
  /* 117f14e7 push 0x11822450 */
  push32((uint32_t)(0x11822450u));
  /* 117f14ec call dword ptr [0x1182550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182550c))), 0x117f14f2u);
  /* 117f14f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f14f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f14f7 call 0x117f5550 */
  push32(0x117f14fcu); f_117f5550();
  /* 117f14fc mov esi, esp */
  ESI = (ESP);
  /* 117f14fe push 0x1181d18c */
  push32((uint32_t)(0x1181d18cu));
  /* 117f1503 push 0x11822508 */
  push32((uint32_t)(0x11822508u));
  /* 117f1508 call dword ptr [0x1182550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182550c))), 0x117f150eu);
  /* 117f150e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1511 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1513 call 0x117f5550 */
  push32(0x117f1518u); f_117f5550();
  /* 117f1518 mov esi, esp */
  ESI = (ESP);
  /* 117f151a push 0x1181d180 */
  push32((uint32_t)(0x1181d180u));
  /* 117f151f push 0x118224f0 */
  push32((uint32_t)(0x118224f0u));
  /* 117f1524 call dword ptr [0x1182550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182550c))), 0x117f152au);
  /* 117f152a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f152d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f152f call 0x117f5550 */
  push32(0x117f1534u); f_117f5550();
  /* 117f1534 mov esi, esp */
  ESI = (ESP);
  /* 117f1536 push 0x1181d170 */
  push32((uint32_t)(0x1181d170u));
  /* 117f153b push 0x11822410 */
  push32((uint32_t)(0x11822410u));
  /* 117f1540 call dword ptr [0x1182550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182550c))), 0x117f1546u);
  /* 117f1546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1549 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f154b call 0x117f5550 */
  push32(0x117f1550u); f_117f5550();
  /* 117f1550 mov esi, esp */
  ESI = (ESP);
  /* 117f1552 push 0x1181d15c */
  push32((uint32_t)(0x1181d15cu));
  /* 117f1557 push 0x11822570 */
  push32((uint32_t)(0x11822570u));
  /* 117f155c call dword ptr [0x1182550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182550c))), 0x117f1562u);
  /* 117f1562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1567 call 0x117f5550 */
  push32(0x117f156cu); f_117f5550();
  /* 117f156c mov esi, esp */
  ESI = (ESP);
  /* 117f156e push 0x1181d14c */
  push32((uint32_t)(0x1181d14cu));
  /* 117f1573 push 0x118224f8 */
  push32((uint32_t)(0x118224f8u));
  /* 117f1578 call dword ptr [0x1182550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182550c))), 0x117f157eu);
  /* 117f157e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1581 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1583 call 0x117f5550 */
  push32(0x117f1588u); f_117f5550();
  /* 117f1588 mov esi, esp */
  ESI = (ESP);
  /* 117f158a push 0x1181d13c */
  push32((uint32_t)(0x1181d13cu));
  /* 117f158f push 0x11822580 */
  push32((uint32_t)(0x11822580u));
  /* 117f1594 call dword ptr [0x1182550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182550c))), 0x117f159au);
  /* 117f159a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f159d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f159f call 0x117f5550 */
  push32(0x117f15a4u); f_117f5550();
  /* 117f15a4 mov esi, esp */
  ESI = (ESP);
  /* 117f15a6 push 0x1181d12c */
  push32((uint32_t)(0x1181d12cu));
  /* 117f15ab push 0x11822588 */
  push32((uint32_t)(0x11822588u));
  /* 117f15b0 call dword ptr [0x1182550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182550c))), 0x117f15b6u);
  /* 117f15b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f15b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f15bb call 0x117f5550 */
  push32(0x117f15c0u); f_117f5550();
  /* 117f15c0 mov esi, esp */
  ESI = (ESP);
  /* 117f15c2 push 0x1181d11c */
  push32((uint32_t)(0x1181d11cu));
  /* 117f15c7 push 0x11822538 */
  push32((uint32_t)(0x11822538u));
  /* 117f15cc call dword ptr [0x1182550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182550c))), 0x117f15d2u);
  /* 117f15d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f15d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f15d7 call 0x117f5550 */
  push32(0x117f15dcu); f_117f5550();
  /* 117f15dc mov esi, esp */
  ESI = (ESP);
  /* 117f15de push 0x1181d10c */
  push32((uint32_t)(0x1181d10cu));
  /* 117f15e3 push 0x11822590 */
  push32((uint32_t)(0x11822590u));
  /* 117f15e8 call dword ptr [0x1182550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182550c))), 0x117f15eeu);
  /* 117f15ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f15f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f15f3 call 0x117f5550 */
  push32(0x117f15f8u); f_117f5550();
  /* 117f15f8 mov esi, esp */
  ESI = (ESP);
  /* 117f15fa push 0x1181d0fc */
  push32((uint32_t)(0x1181d0fcu));
  /* 117f15ff push 0x11822598 */
  push32((uint32_t)(0x11822598u));
  /* 117f1604 call dword ptr [0x1182550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182550c))), 0x117f160au);
  /* 117f160a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f160d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f160f call 0x117f5550 */
  push32(0x117f1614u); f_117f5550();
  /* 117f1614 mov esi, esp */
  ESI = (ESP);
  /* 117f1616 push 0x1181d0e0 */
  push32((uint32_t)(0x1181d0e0u));
  /* 117f161b push 0x118225f8 */
  push32((uint32_t)(0x118225f8u));
  /* 117f1620 call dword ptr [0x1182550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182550c))), 0x117f1626u);
  /* 117f1626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1629 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f162b call 0x117f5550 */
  push32(0x117f1630u); f_117f5550();
  /* 117f1630 mov esi, esp */
  ESI = (ESP);
  /* 117f1632 push 0x1181d0c8 */
  push32((uint32_t)(0x1181d0c8u));
  /* 117f1637 push 0x11822468 */
  push32((uint32_t)(0x11822468u));
  /* 117f163c call dword ptr [0x1182550c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182550c))), 0x117f1642u);
  /* 117f1642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1645 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1647 call 0x117f5550 */
  push32(0x117f164cu); f_117f5550();
  /* 117f164c mov esi, esp */
  ESI = (ESP);
  /* 117f164e push 8 */
  push32((uint32_t)(0x8u));
  /* 117f1650 push 0x11822428 */
  push32((uint32_t)(0x11822428u));
  /* 117f1655 call dword ptr [0x11825510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825510))), 0x117f165bu);
  /* 117f165b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f165e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1660 call 0x117f5550 */
  push32(0x117f1665u); f_117f5550();
  /* 117f1665 mov esi, esp */
  ESI = (ESP);
  /* 117f1667 push 8 */
  push32((uint32_t)(0x8u));
  /* 117f1669 push 0x11822420 */
  push32((uint32_t)(0x11822420u));
  /* 117f166e call dword ptr [0x11825510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825510))), 0x117f1674u);
  /* 117f1674 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1677 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1679 call 0x117f5550 */
  push32(0x117f167eu); f_117f5550();
  /* 117f167e mov esi, esp */
  ESI = (ESP);
  /* 117f1680 push 8 */
  push32((uint32_t)(0x8u));
  /* 117f1682 push 0x11822438 */
  push32((uint32_t)(0x11822438u));
  /* 117f1687 call dword ptr [0x11825510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825510))), 0x117f168du);
  /* 117f168d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1690 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1692 call 0x117f5550 */
  push32(0x117f1697u); f_117f5550();
  /* 117f1697 mov esi, esp */
  ESI = (ESP);
  /* 117f1699 push 8 */
  push32((uint32_t)(0x8u));
  /* 117f169b push 0x11822430 */
  push32((uint32_t)(0x11822430u));
  /* 117f16a0 call dword ptr [0x11825510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825510))), 0x117f16a6u);
  /* 117f16a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f16a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f16ab call 0x117f5550 */
  push32(0x117f16b0u); f_117f5550();
  /* 117f16b0 mov esi, esp */
  ESI = (ESP);
  /* 117f16b2 push 8 */
  push32((uint32_t)(0x8u));
  /* 117f16b4 push 0x118223f8 */
  push32((uint32_t)(0x118223f8u));
  /* 117f16b9 call dword ptr [0x11825510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825510))), 0x117f16bfu);
  /* 117f16bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f16c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f16c4 call 0x117f5550 */
  push32(0x117f16c9u); f_117f5550();
  /* 117f16c9 mov esi, esp */
  ESI = (ESP);
  /* 117f16cb push 8 */
  push32((uint32_t)(0x8u));
  /* 117f16cd push 0x118223f0 */
  push32((uint32_t)(0x118223f0u));
  /* 117f16d2 call dword ptr [0x11825510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825510))), 0x117f16d8u);
  /* 117f16d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f16db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f16dd call 0x117f5550 */
  push32(0x117f16e2u); f_117f5550();
  /* 117f16e2 mov esi, esp */
  ESI = (ESP);
  /* 117f16e4 push 8 */
  push32((uint32_t)(0x8u));
  /* 117f16e6 push 0x11822408 */
  push32((uint32_t)(0x11822408u));
  /* 117f16eb call dword ptr [0x11825510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825510))), 0x117f16f1u);
  /* 117f16f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f16f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f16f6 call 0x117f5550 */
  push32(0x117f16fbu); f_117f5550();
  /* 117f16fb mov esi, esp */
  ESI = (ESP);
  /* 117f16fd push 8 */
  push32((uint32_t)(0x8u));
  /* 117f16ff push 0x11822400 */
  push32((uint32_t)(0x11822400u));
  /* 117f1704 call dword ptr [0x11825510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825510))), 0x117f170au);
  /* 117f170a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f170d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f170f call 0x117f5550 */
  push32(0x117f1714u); f_117f5550();
  /* 117f1714 mov esi, esp */
  ESI = (ESP);
  /* 117f1716 push 8 */
  push32((uint32_t)(0x8u));
  /* 117f1718 push 0x11822418 */
  push32((uint32_t)(0x11822418u));
  /* 117f171d call dword ptr [0x11825510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825510))), 0x117f1723u);
  /* 117f1723 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1726 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1728 call 0x117f5550 */
  push32(0x117f172du); f_117f5550();
  /* 117f172d mov esi, esp */
  ESI = (ESP);
  /* 117f172f push 8 */
  push32((uint32_t)(0x8u));
  /* 117f1731 push 0x118224e8 */
  push32((uint32_t)(0x118224e8u));
  /* 117f1736 call dword ptr [0x11825510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825510))), 0x117f173cu);
  /* 117f173c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f173f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1741 call 0x117f5550 */
  push32(0x117f1746u); f_117f5550();
  /* 117f1746 mov esi, esp */
  ESI = (ESP);
  /* 117f1748 push 4 */
  push32((uint32_t)(0x4u));
  /* 117f174a push 0x11822440 */
  push32((uint32_t)(0x11822440u));
  /* 117f174f call dword ptr [0x11825510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825510))), 0x117f1755u);
  /* 117f1755 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1758 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f175a call 0x117f5550 */
  push32(0x117f175fu); f_117f5550();
  /* 117f175f mov esi, esp */
  ESI = (ESP);
  /* 117f1761 push 4 */
  push32((uint32_t)(0x4u));
  /* 117f1763 push 0x11822478 */
  push32((uint32_t)(0x11822478u));
  /* 117f1768 call dword ptr [0x11825510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825510))), 0x117f176eu);
  /* 117f176e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1771 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1773 call 0x117f5550 */
  push32(0x117f1778u); f_117f5550();
  /* 117f1778 mov esi, esp */
  ESI = (ESP);
  /* 117f177a push 0x1181d0c0 */
  push32((uint32_t)(0x1181d0c0u));
  /* 117f177f push 0x118225f0 */
  push32((uint32_t)(0x118225f0u));
  /* 117f1784 call dword ptr [0x11825514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825514))), 0x117f178au);
  /* 117f178a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f178d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f178f call 0x117f5550 */
  push32(0x117f1794u); f_117f5550();
  /* 117f1794 mov esi, esp */
  ESI = (ESP);
  /* 117f1796 push 0x1181d0b0 */
  push32((uint32_t)(0x1181d0b0u));
  /* 117f179b push 0x11822510 */
  push32((uint32_t)(0x11822510u));
  /* 117f17a0 call dword ptr [0x11825514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825514))), 0x117f17a6u);
  /* 117f17a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f17a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f17ab call 0x117f5550 */
  push32(0x117f17b0u); f_117f5550();
  /* 117f17b0 mov esi, esp */
  ESI = (ESP);
  /* 117f17b2 push 0x1181d0a0 */
  push32((uint32_t)(0x1181d0a0u));
  /* 117f17b7 push 0x11822528 */
  push32((uint32_t)(0x11822528u));
  /* 117f17bc call dword ptr [0x11825514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825514))), 0x117f17c2u);
  /* 117f17c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f17c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f17c7 call 0x117f5550 */
  push32(0x117f17ccu); f_117f5550();
  /* 117f17cc mov esi, esp */
  ESI = (ESP);
  /* 117f17ce push 0x1181d090 */
  push32((uint32_t)(0x1181d090u));
  /* 117f17d3 push 0x11822530 */
  push32((uint32_t)(0x11822530u));
  /* 117f17d8 call dword ptr [0x11825514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825514))), 0x117f17deu);
  /* 117f17de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f17e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f17e3 call 0x117f5550 */
  push32(0x117f17e8u); f_117f5550();
  /* 117f17e8 mov esi, esp */
  ESI = (ESP);
  /* 117f17ea push 0x1181d080 */
  push32((uint32_t)(0x1181d080u));
  /* 117f17ef push 0x11822518 */
  push32((uint32_t)(0x11822518u));
  /* 117f17f4 call dword ptr [0x11825514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825514))), 0x117f17fau);
  /* 117f17fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f17fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f17ff call 0x117f5550 */
  push32(0x117f1804u); f_117f5550();
  /* 117f1804 mov esi, esp */
  ESI = (ESP);
  /* 117f1806 push 0x1181d070 */
  push32((uint32_t)(0x1181d070u));
  /* 117f180b push 0x11822500 */
  push32((uint32_t)(0x11822500u));
  /* 117f1810 call dword ptr [0x11825514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825514))), 0x117f1816u);
  /* 117f1816 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1819 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f181b call 0x117f5550 */
  push32(0x117f1820u); f_117f5550();
  /* 117f1820 mov esi, esp */
  ESI = (ESP);
  /* 117f1822 push 0x1181d068 */
  push32((uint32_t)(0x1181d068u));
  /* 117f1827 push 0x118225e8 */
  push32((uint32_t)(0x118225e8u));
  /* 117f182c call dword ptr [0x11825514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825514))), 0x117f1832u);
  /* 117f1832 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1835 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1837 call 0x117f5550 */
  push32(0x117f183cu); f_117f5550();
  /* 117f183c mov esi, esp */
  ESI = (ESP);
  /* 117f183e push 0x1181d05c */
  push32((uint32_t)(0x1181d05cu));
  /* 117f1843 push 0x118223e0 */
  push32((uint32_t)(0x118223e0u));
  /* 117f1848 call dword ptr [0x11825514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825514))), 0x117f184eu);
  /* 117f184e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1851 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1853 call 0x117f5550 */
  push32(0x117f1858u); f_117f5550();
  /* 117f1858 mov esi, esp */
  ESI = (ESP);
  /* 117f185a push 0x1181d050 */
  push32((uint32_t)(0x1181d050u));
  /* 117f185f push 0x118223e8 */
  push32((uint32_t)(0x118223e8u));
  /* 117f1864 call dword ptr [0x11825514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825514))), 0x117f186au);
  /* 117f186a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f186d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f186f call 0x117f5550 */
  push32(0x117f1874u); f_117f5550();
  /* 117f1874 mov esi, esp */
  ESI = (ESP);
  /* 117f1876 push 0x1181d048 */
  push32((uint32_t)(0x1181d048u));
  /* 117f187b push 0x11822470 */
  push32((uint32_t)(0x11822470u));
  /* 117f1880 call dword ptr [0x11825514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825514))), 0x117f1886u);
  /* 117f1886 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1889 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f188b call 0x117f5550 */
  push32(0x117f1890u); f_117f5550();
  /* 117f1890 mov esi, esp */
  ESI = (ESP);
  /* 117f1892 push 0x11822428 */
  push32((uint32_t)(0x11822428u));
  /* 117f1897 call dword ptr [0x11825518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825518))), 0x117f189du);
  /* 117f189d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f18a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f18a2 call 0x117f5550 */
  push32(0x117f18a7u); f_117f5550();
  /* 117f18a7 mov esi, esp */
  ESI = (ESP);
  /* 117f18a9 push 0x11822420 */
  push32((uint32_t)(0x11822420u));
  /* 117f18ae call dword ptr [0x11825518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825518))), 0x117f18b4u);
  /* 117f18b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f18b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f18b9 call 0x117f5550 */
  push32(0x117f18beu); f_117f5550();
  /* 117f18be mov esi, esp */
  ESI = (ESP);
  /* 117f18c0 push 0x11822438 */
  push32((uint32_t)(0x11822438u));
  /* 117f18c5 call dword ptr [0x11825518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825518))), 0x117f18cbu);
  /* 117f18cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f18ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f18d0 call 0x117f5550 */
  push32(0x117f18d5u); f_117f5550();
  /* 117f18d5 mov esi, esp */
  ESI = (ESP);
  /* 117f18d7 push 0x11822430 */
  push32((uint32_t)(0x11822430u));
  /* 117f18dc call dword ptr [0x11825518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825518))), 0x117f18e2u);
  /* 117f18e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f18e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f18e7 call 0x117f5550 */
  push32(0x117f18ecu); f_117f5550();
  /* 117f18ec mov esi, esp */
  ESI = (ESP);
  /* 117f18ee push 0x118223f8 */
  push32((uint32_t)(0x118223f8u));
  /* 117f18f3 call dword ptr [0x11825518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825518))), 0x117f18f9u);
  /* 117f18f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f18fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f18fe call 0x117f5550 */
  push32(0x117f1903u); f_117f5550();
  /* 117f1903 mov esi, esp */
  ESI = (ESP);
  /* 117f1905 push 0x118223f0 */
  push32((uint32_t)(0x118223f0u));
  /* 117f190a call dword ptr [0x11825518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825518))), 0x117f1910u);
  /* 117f1910 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1913 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1915 call 0x117f5550 */
  push32(0x117f191au); f_117f5550();
  /* 117f191a mov esi, esp */
  ESI = (ESP);
  /* 117f191c push 0x11822408 */
  push32((uint32_t)(0x11822408u));
  /* 117f1921 call dword ptr [0x11825518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825518))), 0x117f1927u);
  /* 117f1927 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f192a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f192c call 0x117f5550 */
  push32(0x117f1931u); f_117f5550();
  /* 117f1931 mov esi, esp */
  ESI = (ESP);
  /* 117f1933 push 0x11822400 */
  push32((uint32_t)(0x11822400u));
  /* 117f1938 call dword ptr [0x11825518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825518))), 0x117f193eu);
  /* 117f193e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1941 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1943 call 0x117f5550 */
  push32(0x117f1948u); f_117f5550();
  /* 117f1948 mov esi, esp */
  ESI = (ESP);
  /* 117f194a push 0x11822418 */
  push32((uint32_t)(0x11822418u));
  /* 117f194f call dword ptr [0x11825518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825518))), 0x117f1955u);
  /* 117f1955 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1958 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f195a call 0x117f5550 */
  push32(0x117f195fu); f_117f5550();
  /* 117f195f mov esi, esp */
  ESI = (ESP);
  /* 117f1961 push 0x118224e8 */
  push32((uint32_t)(0x118224e8u));
  /* 117f1966 call dword ptr [0x11825518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825518))), 0x117f196cu);
  /* 117f196c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f196f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1971 call 0x117f5550 */
  push32(0x117f1976u); f_117f5550();
  /* 117f1976 mov esi, esp */
  ESI = (ESP);
  /* 117f1978 push 0x118225e0 */
  push32((uint32_t)(0x118225e0u));
  /* 117f197d call dword ptr [0x11825518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825518))), 0x117f1983u);
  /* 117f1983 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1986 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1988 call 0x117f5550 */
  push32(0x117f198du); f_117f5550();
  /* 117f198d mov esi, esp */
  ESI = (ESP);
  /* 117f198f push 0x1181d03c */
  push32((uint32_t)(0x1181d03cu));
  /* 117f1994 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f1996 call dword ptr [0x1182551c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182551c))), 0x117f199cu);
  /* 117f199c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f199f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f19a1 call 0x117f5550 */
  push32(0x117f19a6u); f_117f5550();
  /* 117f19a6 mov esi, esp */
  ESI = (ESP);
  /* 117f19a8 push 0x1181d030 */
  push32((uint32_t)(0x1181d030u));
  /* 117f19ad push 2 */
  push32((uint32_t)(0x2u));
  /* 117f19af call dword ptr [0x1182551c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182551c))), 0x117f19b5u);
  /* 117f19b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f19b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f19ba call 0x117f5550 */
  push32(0x117f19bfu); f_117f5550();
  /* 117f19bf mov esi, esp */
  ESI = (ESP);
  /* 117f19c1 push 0x1181d028 */
  push32((uint32_t)(0x1181d028u));
  /* 117f19c6 push 3 */
  push32((uint32_t)(0x3u));
  /* 117f19c8 call dword ptr [0x1182551c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182551c))), 0x117f19ceu);
  /* 117f19ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f19d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f19d3 call 0x117f5550 */
  push32(0x117f19d8u); f_117f5550();
  /* 117f19d8 mov esi, esp */
  ESI = (ESP);
  /* 117f19da push 0x1181d01c */
  push32((uint32_t)(0x1181d01cu));
  /* 117f19df push 5 */
  push32((uint32_t)(0x5u));
  /* 117f19e1 call dword ptr [0x1182551c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182551c))), 0x117f19e7u);
  /* 117f19e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f19ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f19ec call 0x117f5550 */
  push32(0x117f19f1u); f_117f5550();
  /* 117f19f1 mov esi, esp */
  ESI = (ESP);
  /* 117f19f3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 117f19f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f19f7 call dword ptr [0x11825520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825520))), 0x117f19fdu);
  /* 117f19fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1a00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1a02 call 0x117f5550 */
  push32(0x117f1a07u); f_117f5550();
  /* 117f1a07 mov esi, esp */
  ESI = (ESP);
  /* 117f1a09 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 117f1a0b push 1 */
  push32((uint32_t)(0x1u));
  /* 117f1a0d call dword ptr [0x11825520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825520))), 0x117f1a13u);
  /* 117f1a13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1a16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1a18 call 0x117f5550 */
  push32(0x117f1a1du); f_117f5550();
  /* 117f1a1d mov esi, esp */
  ESI = (ESP);
  /* 117f1a1f push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 117f1a21 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f1a23 call dword ptr [0x11825520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825520))), 0x117f1a29u);
  /* 117f1a29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1a2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1a2e call 0x117f5550 */
  push32(0x117f1a33u); f_117f5550();
  /* 117f1a33 mov esi, esp */
  ESI = (ESP);
  /* 117f1a35 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 117f1a37 push 3 */
  push32((uint32_t)(0x3u));
  /* 117f1a39 call dword ptr [0x11825520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825520))), 0x117f1a3fu);
  /* 117f1a3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1a42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1a44 call 0x117f5550 */
  push32(0x117f1a49u); f_117f5550();
  /* 117f1a49 mov esi, esp */
  ESI = (ESP);
  /* 117f1a4b push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 117f1a4d push 5 */
  push32((uint32_t)(0x5u));
  /* 117f1a4f call dword ptr [0x11825520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825520))), 0x117f1a55u);
  /* 117f1a55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1a58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1a5a call 0x117f5550 */
  push32(0x117f1a5fu); f_117f5550();
  /* 117f1a5f mov esi, esp */
  ESI = (ESP);
  /* 117f1a61 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f1a63 push 0x11822588 */
  push32((uint32_t)(0x11822588u));
  /* 117f1a68 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f1a6a call dword ptr [0x11825524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825524))), 0x117f1a70u);
  /* 117f1a70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1a73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1a75 call 0x117f5550 */
  push32(0x117f1a7au); f_117f5550();
  /* 117f1a7a mov esi, esp */
  ESI = (ESP);
  /* 117f1a7c push 0 */
  push32((uint32_t)(0x0u));
  /* 117f1a7e push 0x11822580 */
  push32((uint32_t)(0x11822580u));
  /* 117f1a83 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f1a85 call dword ptr [0x11825524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825524))), 0x117f1a8bu);
  /* 117f1a8b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1a8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1a90 call 0x117f5550 */
  push32(0x117f1a95u); f_117f5550();
  /* 117f1a95 mov esi, esp */
  ESI = (ESP);
  /* 117f1a97 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f1a99 push 0x118225f8 */
  push32((uint32_t)(0x118225f8u));
  /* 117f1a9e push 0 */
  push32((uint32_t)(0x0u));
  /* 117f1aa0 call dword ptr [0x11825524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825524))), 0x117f1aa6u);
  /* 117f1aa6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1aa9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1aab call 0x117f5550 */
  push32(0x117f1ab0u); f_117f5550();
  /* 117f1ab0 mov esi, esp */
  ESI = (ESP);
  /* 117f1ab2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f1ab4 push 0x11822598 */
  push32((uint32_t)(0x11822598u));
  /* 117f1ab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f1abb call dword ptr [0x11825524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825524))), 0x117f1ac1u);
  /* 117f1ac1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1ac4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1ac6 call 0x117f5550 */
  push32(0x117f1acbu); f_117f5550();
  /* 117f1acb mov esi, esp */
  ESI = (ESP);
  /* 117f1acd push 0 */
  push32((uint32_t)(0x0u));
  /* 117f1acf push 0x11822590 */
  push32((uint32_t)(0x11822590u));
  /* 117f1ad4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f1ad6 call dword ptr [0x11825524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825524))), 0x117f1adcu);
  /* 117f1adc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1adf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1ae1 call 0x117f5550 */
  push32(0x117f1ae6u); f_117f5550();
  /* 117f1ae6 pop edi */
  EDI = (pop32());
  /* 117f1ae7 pop esi */
  ESI = (pop32());
  /* 117f1ae8 pop ebx */
  EBX = (pop32());
  /* 117f1ae9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1aec cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1aee call 0x117f5550 */
  push32(0x117f1af3u); f_117f5550();
  /* 117f1af3 mov esp, ebp */
  ESP = (EBP);
  /* 117f1af5 pop ebp */
  EBP = (pop32());
  /* 117f1af6 ret  */
  ESPCHK(0x117f1030u, _esp0);
  ESP += 4; return;
}

/* FUN_10001db0 @ 0x117f1db0 (67 bytes, 26 insns) */
void f_117f1db0(void) {
  FTRACE(0x117f1db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f1db0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f1db1 mov ebp, esp */
  EBP = (ESP);
  /* 117f1db3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f1db6 push ebx */
  push32((uint32_t)(EBX));
  /* 117f1db7 push esi */
  push32((uint32_t)(ESI));
  /* 117f1db8 push edi */
  push32((uint32_t)(EDI));
  /* 117f1db9 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 117f1dbc mov ecx, 0x11 */
  ECX = (0x11u);
  /* 117f1dc1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 117f1dc6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117f1dc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f1dcb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f1dce cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1dd2 je 0x117f1dd6 */
  if (C.zf) goto L_117f1dd6;
  /* 117f1dd4 jmp 0x117f1ddb */
  goto L_117f1ddb;
L_117f1dd6:;
  /* 117f1dd6 call 0x117f1005 */
  push32(0x117f1ddbu); f_117f1005();
L_117f1ddb:;
  /* 117f1ddb mov eax, 1 */
  EAX = (0x1u);
  /* 117f1de0 pop edi */
  EDI = (pop32());
  /* 117f1de1 pop esi */
  ESI = (pop32());
  /* 117f1de2 pop ebx */
  EBX = (pop32());
  /* 117f1de3 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1de6 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1de8 call 0x117f5550 */
  push32(0x117f1dedu); f_117f5550();
  /* 117f1ded mov esp, ebp */
  ESP = (EBP);
  /* 117f1def pop ebp */
  EBP = (pop32());
  /* 117f1df0 ret 0xc */
  ESPCHK(0x117f1db0u, _esp0);
  ESP += 16; return;
}

/* FUN_10001e10 @ 0x117f1e10 (11016 bytes, 3107 insns) [3 switch table(s)] */
void f_117f1e10(void) {
  FTRACE(0x117f1e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f1e10 push ebp */
  push32((uint32_t)(EBP));
  /* 117f1e11 mov ebp, esp */
  EBP = (ESP);
  /* 117f1e13 sub esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f1e16 push ebx */
  push32((uint32_t)(EBX));
  /* 117f1e17 push esi */
  push32((uint32_t)(ESI));
  /* 117f1e18 push edi */
  push32((uint32_t)(EDI));
  /* 117f1e19 lea edi, [ebp - 0x54] */
  EDI = ((uint32_t)(EBP + -0x54));
  /* 117f1e1c mov ecx, 0x15 */
  ECX = (0x15u);
  /* 117f1e21 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 117f1e26 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117f1e28 mov esi, esp */
  ESI = (ESP);
  /* 117f1e2a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 117f1e2c call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f1e32u);
  /* 117f1e32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1e35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1e37 call 0x117f5550 */
  push32(0x117f1e3cu); f_117f5550();
  /* 117f1e3c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f1e41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f1e43 je 0x117f2b15 */
  if (C.zf) goto L_117f2b15;
  /* 117f1e49 mov esi, esp */
  ESI = (ESP);
  /* 117f1e4b push 0 */
  push32((uint32_t)(0x0u));
  /* 117f1e4d push 0x63 */
  push32((uint32_t)(0x63u));
  /* 117f1e4f call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f1e55u);
  /* 117f1e55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1e58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1e5a call 0x117f5550 */
  push32(0x117f1e5fu); f_117f5550();
  /* 117f1e5f mov esi, esp */
  ESI = (ESP);
  /* 117f1e61 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 117f1e63 call dword ptr [0x11825468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825468))), 0x117f1e69u);
  /* 117f1e69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1e6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1e6e call 0x117f5550 */
  push32(0x117f1e73u); f_117f5550();
  /* 117f1e73 mov esi, esp */
  ESI = (ESP);
  /* 117f1e75 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 117f1e77 call dword ptr [0x1182546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182546c))), 0x117f1e7du);
  /* 117f1e7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1e80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1e82 call 0x117f5550 */
  push32(0x117f1e87u); f_117f5550();
  /* 117f1e87 mov esi, esp */
  ESI = (ESP);
  /* 117f1e89 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 117f1e8b call dword ptr [0x1182546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182546c))), 0x117f1e91u);
  /* 117f1e91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1e94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1e96 call 0x117f5550 */
  push32(0x117f1e9bu); f_117f5550();
  /* 117f1e9b mov esi, esp */
  ESI = (ESP);
  /* 117f1e9d push 0x45 */
  push32((uint32_t)(0x45u));
  /* 117f1e9f call dword ptr [0x1182546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182546c))), 0x117f1ea5u);
  /* 117f1ea5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1ea8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1eaa call 0x117f5550 */
  push32(0x117f1eafu); f_117f5550();
  /* 117f1eaf mov esi, esp */
  ESI = (ESP);
  /* 117f1eb1 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 117f1eb3 call dword ptr [0x1182546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182546c))), 0x117f1eb9u);
  /* 117f1eb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1ebc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1ebe call 0x117f5550 */
  push32(0x117f1ec3u); f_117f5550();
  /* 117f1ec3 mov esi, esp */
  ESI = (ESP);
  /* 117f1ec5 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 117f1ec7 call dword ptr [0x1182546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182546c))), 0x117f1ecdu);
  /* 117f1ecd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1ed0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1ed2 call 0x117f5550 */
  push32(0x117f1ed7u); f_117f5550();
  /* 117f1ed7 mov esi, esp */
  ESI = (ESP);
  /* 117f1ed9 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 117f1edb call dword ptr [0x1182546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182546c))), 0x117f1ee1u);
  /* 117f1ee1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1ee4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1ee6 call 0x117f5550 */
  push32(0x117f1eebu); f_117f5550();
  /* 117f1eeb mov esi, esp */
  ESI = (ESP);
  /* 117f1eed push 0x118224c8 */
  push32((uint32_t)(0x118224c8u));
  /* 117f1ef2 call dword ptr [0x11825470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825470))), 0x117f1ef8u);
  /* 117f1ef8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1efb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1efd call 0x117f5550 */
  push32(0x117f1f02u); f_117f5550();
  /* 117f1f02 mov esi, esp */
  ESI = (ESP);
  /* 117f1f04 push 0x118224c0 */
  push32((uint32_t)(0x118224c0u));
  /* 117f1f09 call dword ptr [0x11825470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825470))), 0x117f1f0fu);
  /* 117f1f0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1f12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1f14 call 0x117f5550 */
  push32(0x117f1f19u); f_117f5550();
  /* 117f1f19 mov esi, esp */
  ESI = (ESP);
  /* 117f1f1b push 0x118224b8 */
  push32((uint32_t)(0x118224b8u));
  /* 117f1f20 call dword ptr [0x11825474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825474))), 0x117f1f26u);
  /* 117f1f26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1f29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1f2b call 0x117f5550 */
  push32(0x117f1f30u); f_117f5550();
  /* 117f1f30 mov esi, esp */
  ESI = (ESP);
  /* 117f1f32 push 0x118224d0 */
  push32((uint32_t)(0x118224d0u));
  /* 117f1f37 call dword ptr [0x11825474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825474))), 0x117f1f3du);
  /* 117f1f3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1f40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1f42 call 0x117f5550 */
  push32(0x117f1f47u); f_117f5550();
  /* 117f1f47 mov esi, esp */
  ESI = (ESP);
  /* 117f1f49 push 0x118224b0 */
  push32((uint32_t)(0x118224b0u));
  /* 117f1f4e call dword ptr [0x11825478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825478))), 0x117f1f54u);
  /* 117f1f54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1f57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1f59 call 0x117f5550 */
  push32(0x117f1f5eu); f_117f5550();
  /* 117f1f5e mov esi, esp */
  ESI = (ESP);
  /* 117f1f60 push 0x118224a8 */
  push32((uint32_t)(0x118224a8u));
  /* 117f1f65 call dword ptr [0x11825478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825478))), 0x117f1f6bu);
  /* 117f1f6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1f6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1f70 call 0x117f5550 */
  push32(0x117f1f75u); f_117f5550();
  /* 117f1f75 mov esi, esp */
  ESI = (ESP);
  /* 117f1f77 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f1f79 push 0x11822600 */
  push32((uint32_t)(0x11822600u));
  /* 117f1f7e call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f1f84u);
  /* 117f1f84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1f87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1f89 call 0x117f5550 */
  push32(0x117f1f8eu); f_117f5550();
  /* 117f1f8e mov esi, esp */
  ESI = (ESP);
  /* 117f1f90 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f1f92 call dword ptr [0x11825480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825480))), 0x117f1f98u);
  /* 117f1f98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1f9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1f9d call 0x117f5550 */
  push32(0x117f1fa2u); f_117f5550();
  /* 117f1fa2 mov esi, esp */
  ESI = (ESP);
  /* 117f1fa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f1fa6 call dword ptr [0x11825484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825484))), 0x117f1facu);
  /* 117f1fac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1faf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1fb1 call 0x117f5550 */
  push32(0x117f1fb6u); f_117f5550();
  /* 117f1fb6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117f1fb9 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1fbd ja 0x117f2552 */
  if ((!C.cf&&!C.zf)) goto L_117f2552;
  /* 117f1fc3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f1fc6 jmp dword ptr [eax*4 + 0x117f4918] */
  switch (EAX) {
    case 0: goto L_117f1fcd;
    case 1: goto L_117f2191;
    case 2: goto L_117f233c;
    case 3: goto L_117f2483;
    case 4: goto L_117f3a9a;
    case 5: goto L_117f3af9;
    case 6: goto L_117f3b58;
    case 7: goto L_117f3bb4;
    case 8: goto L_117f41c7;
    case 9: goto L_117f41e5;
    case 10: goto L_117f4203;
    case 11: goto L_117f4223;
    default: x86_unimpl("switch@0x117f1fc6 out of table"); return;
  }
L_117f1fcd:;
  /* 117f1fcd mov esi, esp */
  ESI = (ESP);
  /* 117f1fcf push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 117f1fd4 push 3 */
  push32((uint32_t)(0x3u));
  /* 117f1fd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f1fd8 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f1fdeu);
  /* 117f1fde add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1fe1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1fe3 call 0x117f5550 */
  push32(0x117f1fe8u); f_117f5550();
  /* 117f1fe8 mov esi, esp */
  ESI = (ESP);
  /* 117f1fea push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 117f1fef push 0 */
  push32((uint32_t)(0x0u));
  /* 117f1ff1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f1ff3 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f1ff9u);
  /* 117f1ff9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f1ffc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f1ffe call 0x117f5550 */
  push32(0x117f2003u); f_117f5550();
  /* 117f2003 mov esi, esp */
  ESI = (ESP);
  /* 117f2005 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 117f200a push 2 */
  push32((uint32_t)(0x2u));
  /* 117f200c push 0 */
  push32((uint32_t)(0x0u));
  /* 117f200e call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f2014u);
  /* 117f2014 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2017 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2019 call 0x117f5550 */
  push32(0x117f201eu); f_117f5550();
  /* 117f201e mov esi, esp */
  ESI = (ESP);
  /* 117f2020 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 117f2025 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f2027 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f2029 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f202fu);
  /* 117f202f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2032 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2034 call 0x117f5550 */
  push32(0x117f2039u); f_117f5550();
  /* 117f2039 mov esi, esp */
  ESI = (ESP);
  /* 117f203b push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 117f2040 push 5 */
  push32((uint32_t)(0x5u));
  /* 117f2042 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f2044 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f204au);
  /* 117f204a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f204d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f204f call 0x117f5550 */
  push32(0x117f2054u); f_117f5550();
  /* 117f2054 mov esi, esp */
  ESI = (ESP);
  /* 117f2056 push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 117f205b push 4 */
  push32((uint32_t)(0x4u));
  /* 117f205d push 0 */
  push32((uint32_t)(0x0u));
  /* 117f205f call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f2065u);
  /* 117f2065 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2068 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f206a call 0x117f5550 */
  push32(0x117f206fu); f_117f5550();
  /* 117f206f mov esi, esp */
  ESI = (ESP);
  /* 117f2071 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f2073 push 0x11822560 */
  push32((uint32_t)(0x11822560u));
  /* 117f2078 call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f207eu);
  /* 117f207e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2081 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2083 call 0x117f5550 */
  push32(0x117f2088u); f_117f5550();
  /* 117f2088 mov esi, esp */
  ESI = (ESP);
  /* 117f208a push 1 */
  push32((uint32_t)(0x1u));
  /* 117f208c push 0x11822568 */
  push32((uint32_t)(0x11822568u));
  /* 117f2091 call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f2097u);
  /* 117f2097 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f209a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f209c call 0x117f5550 */
  push32(0x117f20a1u); f_117f5550();
  /* 117f20a1 mov esi, esp */
  ESI = (ESP);
  /* 117f20a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f20a5 push 0x11822578 */
  push32((uint32_t)(0x11822578u));
  /* 117f20aa call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f20b0u);
  /* 117f20b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f20b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f20b5 call 0x117f5550 */
  push32(0x117f20bau); f_117f5550();
  /* 117f20ba mov esi, esp */
  ESI = (ESP);
  /* 117f20bc push 1 */
  push32((uint32_t)(0x1u));
  /* 117f20be push 0x118224d8 */
  push32((uint32_t)(0x118224d8u));
  /* 117f20c3 call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f20c9u);
  /* 117f20c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f20cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f20ce call 0x117f5550 */
  push32(0x117f20d3u); f_117f5550();
  /* 117f20d3 mov esi, esp */
  ESI = (ESP);
  /* 117f20d5 push 5 */
  push32((uint32_t)(0x5u));
  /* 117f20d7 call dword ptr [0x1182548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182548c))), 0x117f20ddu);
  /* 117f20dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f20e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f20e2 call 0x117f5550 */
  push32(0x117f20e7u); f_117f5550();
  /* 117f20e7 mov esi, esp */
  ESI = (ESP);
  /* 117f20e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f20eb push 0x11822550 */
  push32((uint32_t)(0x11822550u));
  /* 117f20f0 call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f20f6u);
  /* 117f20f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f20f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f20fb call 0x117f5550 */
  push32(0x117f2100u); f_117f5550();
  /* 117f2100 mov esi, esp */
  ESI = (ESP);
  /* 117f2102 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f2104 push 0x11822558 */
  push32((uint32_t)(0x11822558u));
  /* 117f2109 call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f210fu);
  /* 117f210f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2112 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2114 call 0x117f5550 */
  push32(0x117f2119u); f_117f5550();
  /* 117f2119 mov esi, esp */
  ESI = (ESP);
  /* 117f211b push 1 */
  push32((uint32_t)(0x1u));
  /* 117f211d push 0x118225b8 */
  push32((uint32_t)(0x118225b8u));
  /* 117f2122 call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f2128u);
  /* 117f2128 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f212b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f212d call 0x117f5550 */
  push32(0x117f2132u); f_117f5550();
  /* 117f2132 mov esi, esp */
  ESI = (ESP);
  /* 117f2134 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f2136 push 0x118224e0 */
  push32((uint32_t)(0x118224e0u));
  /* 117f213b call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f2141u);
  /* 117f2141 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2144 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2146 call 0x117f5550 */
  push32(0x117f214bu); f_117f5550();
  /* 117f214b mov esi, esp */
  ESI = (ESP);
  /* 117f214d push 2 */
  push32((uint32_t)(0x2u));
  /* 117f214f call dword ptr [0x1182548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182548c))), 0x117f2155u);
  /* 117f2155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2158 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f215a call 0x117f5550 */
  push32(0x117f215fu); f_117f5550();
  /* 117f215f mov esi, esp */
  ESI = (ESP);
  /* 117f2161 push 0x3a980 */
  push32((uint32_t)(0x3a980u));
  /* 117f2166 push 7 */
  push32((uint32_t)(0x7u));
  /* 117f2168 call dword ptr [0x11825490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825490))), 0x117f216eu);
  /* 117f216e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2171 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2173 call 0x117f5550 */
  push32(0x117f2178u); f_117f5550();
  /* 117f2178 mov dword ptr [0x11822440], 1 */
  w32((uint32_t)(0x11822440), (0x1u));
  /* 117f2182 mov dword ptr [0x11822478], 1 */
  w32((uint32_t)(0x11822478), (0x1u));
  /* 117f218c jmp 0x117f2552 */
  goto L_117f2552;
L_117f2191:;
  /* 117f2191 mov esi, esp */
  ESI = (ESP);
  /* 117f2193 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 117f2198 push 3 */
  push32((uint32_t)(0x3u));
  /* 117f219a push 0 */
  push32((uint32_t)(0x0u));
  /* 117f219c call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f21a2u);
  /* 117f21a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f21a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f21a7 call 0x117f5550 */
  push32(0x117f21acu); f_117f5550();
  /* 117f21ac mov esi, esp */
  ESI = (ESP);
  /* 117f21ae push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 117f21b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f21b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f21b7 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f21bdu);
  /* 117f21bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f21c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f21c2 call 0x117f5550 */
  push32(0x117f21c7u); f_117f5550();
  /* 117f21c7 mov esi, esp */
  ESI = (ESP);
  /* 117f21c9 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 117f21ce push 2 */
  push32((uint32_t)(0x2u));
  /* 117f21d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f21d2 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f21d8u);
  /* 117f21d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f21db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f21dd call 0x117f5550 */
  push32(0x117f21e2u); f_117f5550();
  /* 117f21e2 mov esi, esp */
  ESI = (ESP);
  /* 117f21e4 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 117f21e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f21eb push 0 */
  push32((uint32_t)(0x0u));
  /* 117f21ed call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f21f3u);
  /* 117f21f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f21f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f21f8 call 0x117f5550 */
  push32(0x117f21fdu); f_117f5550();
  /* 117f21fd mov esi, esp */
  ESI = (ESP);
  /* 117f21ff push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 117f2204 push 5 */
  push32((uint32_t)(0x5u));
  /* 117f2206 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f2208 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f220eu);
  /* 117f220e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2211 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2213 call 0x117f5550 */
  push32(0x117f2218u); f_117f5550();
  /* 117f2218 mov esi, esp */
  ESI = (ESP);
  /* 117f221a push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 117f221f push 4 */
  push32((uint32_t)(0x4u));
  /* 117f2221 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f2223 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f2229u);
  /* 117f2229 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f222c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f222e call 0x117f5550 */
  push32(0x117f2233u); f_117f5550();
  /* 117f2233 mov esi, esp */
  ESI = (ESP);
  /* 117f2235 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f2237 push 0x11822568 */
  push32((uint32_t)(0x11822568u));
  /* 117f223c call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f2242u);
  /* 117f2242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2247 call 0x117f5550 */
  push32(0x117f224cu); f_117f5550();
  /* 117f224c mov esi, esp */
  ESI = (ESP);
  /* 117f224e push 1 */
  push32((uint32_t)(0x1u));
  /* 117f2250 push 0x11822578 */
  push32((uint32_t)(0x11822578u));
  /* 117f2255 call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f225bu);
  /* 117f225b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f225e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2260 call 0x117f5550 */
  push32(0x117f2265u); f_117f5550();
  /* 117f2265 mov esi, esp */
  ESI = (ESP);
  /* 117f2267 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f2269 push 0x118224d8 */
  push32((uint32_t)(0x118224d8u));
  /* 117f226e call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f2274u);
  /* 117f2274 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2277 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2279 call 0x117f5550 */
  push32(0x117f227eu); f_117f5550();
  /* 117f227e mov esi, esp */
  ESI = (ESP);
  /* 117f2280 push 5 */
  push32((uint32_t)(0x5u));
  /* 117f2282 call dword ptr [0x1182548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182548c))), 0x117f2288u);
  /* 117f2288 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f228b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f228d call 0x117f5550 */
  push32(0x117f2292u); f_117f5550();
  /* 117f2292 mov esi, esp */
  ESI = (ESP);
  /* 117f2294 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f2296 push 0x11822520 */
  push32((uint32_t)(0x11822520u));
  /* 117f229b call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f22a1u);
  /* 117f22a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f22a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f22a6 call 0x117f5550 */
  push32(0x117f22abu); f_117f5550();
  /* 117f22ab mov esi, esp */
  ESI = (ESP);
  /* 117f22ad push 1 */
  push32((uint32_t)(0x1u));
  /* 117f22af push 0x11822558 */
  push32((uint32_t)(0x11822558u));
  /* 117f22b4 call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f22bau);
  /* 117f22ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f22bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f22bf call 0x117f5550 */
  push32(0x117f22c4u); f_117f5550();
  /* 117f22c4 mov esi, esp */
  ESI = (ESP);
  /* 117f22c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f22c8 push 0x118225b8 */
  push32((uint32_t)(0x118225b8u));
  /* 117f22cd call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f22d3u);
  /* 117f22d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f22d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f22d8 call 0x117f5550 */
  push32(0x117f22ddu); f_117f5550();
  /* 117f22dd mov esi, esp */
  ESI = (ESP);
  /* 117f22df push 1 */
  push32((uint32_t)(0x1u));
  /* 117f22e1 push 0x118224e0 */
  push32((uint32_t)(0x118224e0u));
  /* 117f22e6 call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f22ecu);
  /* 117f22ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f22ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f22f1 call 0x117f5550 */
  push32(0x117f22f6u); f_117f5550();
  /* 117f22f6 mov esi, esp */
  ESI = (ESP);
  /* 117f22f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f22fa call dword ptr [0x1182548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182548c))), 0x117f2300u);
  /* 117f2300 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2303 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2305 call 0x117f5550 */
  push32(0x117f230au); f_117f5550();
  /* 117f230a mov esi, esp */
  ESI = (ESP);
  /* 117f230c push 0x249f0 */
  push32((uint32_t)(0x249f0u));
  /* 117f2311 push 7 */
  push32((uint32_t)(0x7u));
  /* 117f2313 call dword ptr [0x11825490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825490))), 0x117f2319u);
  /* 117f2319 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f231c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f231e call 0x117f5550 */
  push32(0x117f2323u); f_117f5550();
  /* 117f2323 mov dword ptr [0x11822440], 3 */
  w32((uint32_t)(0x11822440), (0x3u));
  /* 117f232d mov dword ptr [0x11822478], 3 */
  w32((uint32_t)(0x11822478), (0x3u));
  /* 117f2337 jmp 0x117f2552 */
  goto L_117f2552;
L_117f233c:;
  /* 117f233c mov esi, esp */
  ESI = (ESP);
  /* 117f233e push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 117f2343 push 3 */
  push32((uint32_t)(0x3u));
  /* 117f2345 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f2347 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f234du);
  /* 117f234d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2350 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2352 call 0x117f5550 */
  push32(0x117f2357u); f_117f5550();
  /* 117f2357 mov esi, esp */
  ESI = (ESP);
  /* 117f2359 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 117f235e push 0 */
  push32((uint32_t)(0x0u));
  /* 117f2360 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f2362 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f2368u);
  /* 117f2368 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f236b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f236d call 0x117f5550 */
  push32(0x117f2372u); f_117f5550();
  /* 117f2372 mov esi, esp */
  ESI = (ESP);
  /* 117f2374 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 117f2379 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f237b push 0 */
  push32((uint32_t)(0x0u));
  /* 117f237d call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f2383u);
  /* 117f2383 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2386 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2388 call 0x117f5550 */
  push32(0x117f238du); f_117f5550();
  /* 117f238d mov esi, esp */
  ESI = (ESP);
  /* 117f238f push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 117f2394 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f2396 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f2398 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f239eu);
  /* 117f239e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f23a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f23a3 call 0x117f5550 */
  push32(0x117f23a8u); f_117f5550();
  /* 117f23a8 mov esi, esp */
  ESI = (ESP);
  /* 117f23aa push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 117f23af push 5 */
  push32((uint32_t)(0x5u));
  /* 117f23b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f23b3 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f23b9u);
  /* 117f23b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f23bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f23be call 0x117f5550 */
  push32(0x117f23c3u); f_117f5550();
  /* 117f23c3 mov esi, esp */
  ESI = (ESP);
  /* 117f23c5 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 117f23ca push 4 */
  push32((uint32_t)(0x4u));
  /* 117f23cc push 0 */
  push32((uint32_t)(0x0u));
  /* 117f23ce call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f23d4u);
  /* 117f23d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f23d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f23d9 call 0x117f5550 */
  push32(0x117f23deu); f_117f5550();
  /* 117f23de mov esi, esp */
  ESI = (ESP);
  /* 117f23e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f23e2 push 0x11822578 */
  push32((uint32_t)(0x11822578u));
  /* 117f23e7 call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f23edu);
  /* 117f23ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f23f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f23f2 call 0x117f5550 */
  push32(0x117f23f7u); f_117f5550();
  /* 117f23f7 mov esi, esp */
  ESI = (ESP);
  /* 117f23f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f23fb push 0x118224d8 */
  push32((uint32_t)(0x118224d8u));
  /* 117f2400 call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f2406u);
  /* 117f2406 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2409 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f240b call 0x117f5550 */
  push32(0x117f2410u); f_117f5550();
  /* 117f2410 mov esi, esp */
  ESI = (ESP);
  /* 117f2412 push 5 */
  push32((uint32_t)(0x5u));
  /* 117f2414 call dword ptr [0x1182548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182548c))), 0x117f241au);
  /* 117f241a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f241d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f241f call 0x117f5550 */
  push32(0x117f2424u); f_117f5550();
  /* 117f2424 mov esi, esp */
  ESI = (ESP);
  /* 117f2426 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f2428 push 0x118225b8 */
  push32((uint32_t)(0x118225b8u));
  /* 117f242d call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f2433u);
  /* 117f2433 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2436 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2438 call 0x117f5550 */
  push32(0x117f243du); f_117f5550();
  /* 117f243d mov esi, esp */
  ESI = (ESP);
  /* 117f243f push 2 */
  push32((uint32_t)(0x2u));
  /* 117f2441 call dword ptr [0x1182548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182548c))), 0x117f2447u);
  /* 117f2447 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f244a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f244c call 0x117f5550 */
  push32(0x117f2451u); f_117f5550();
  /* 117f2451 mov esi, esp */
  ESI = (ESP);
  /* 117f2453 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 117f2458 push 7 */
  push32((uint32_t)(0x7u));
  /* 117f245a call dword ptr [0x11825490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825490))), 0x117f2460u);
  /* 117f2460 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2463 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2465 call 0x117f5550 */
  push32(0x117f246au); f_117f5550();
  /* 117f246a mov dword ptr [0x11822440], 5 */
  w32((uint32_t)(0x11822440), (0x5u));
  /* 117f2474 mov dword ptr [0x11822478], 5 */
  w32((uint32_t)(0x11822478), (0x5u));
  /* 117f247e jmp 0x117f2552 */
  goto L_117f2552;
L_117f2483:;
  /* 117f2483 mov esi, esp */
  ESI = (ESP);
  /* 117f2485 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117f248a push 3 */
  push32((uint32_t)(0x3u));
  /* 117f248c push 0 */
  push32((uint32_t)(0x0u));
  /* 117f248e call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f2494u);
  /* 117f2494 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2497 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2499 call 0x117f5550 */
  push32(0x117f249eu); f_117f5550();
  /* 117f249e mov esi, esp */
  ESI = (ESP);
  /* 117f24a0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117f24a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f24a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f24a9 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f24afu);
  /* 117f24af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f24b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f24b4 call 0x117f5550 */
  push32(0x117f24b9u); f_117f5550();
  /* 117f24b9 mov esi, esp */
  ESI = (ESP);
  /* 117f24bb push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117f24c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f24c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f24c4 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f24cau);
  /* 117f24ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f24cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f24cf call 0x117f5550 */
  push32(0x117f24d4u); f_117f5550();
  /* 117f24d4 mov esi, esp */
  ESI = (ESP);
  /* 117f24d6 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117f24db push 1 */
  push32((uint32_t)(0x1u));
  /* 117f24dd push 0 */
  push32((uint32_t)(0x0u));
  /* 117f24df call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f24e5u);
  /* 117f24e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f24e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f24ea call 0x117f5550 */
  push32(0x117f24efu); f_117f5550();
  /* 117f24ef mov esi, esp */
  ESI = (ESP);
  /* 117f24f1 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 117f24f6 push 5 */
  push32((uint32_t)(0x5u));
  /* 117f24f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f24fa call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f2500u);
  /* 117f2500 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2503 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2505 call 0x117f5550 */
  push32(0x117f250au); f_117f5550();
  /* 117f250a mov esi, esp */
  ESI = (ESP);
  /* 117f250c push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 117f2511 push 4 */
  push32((uint32_t)(0x4u));
  /* 117f2513 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f2515 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f251bu);
  /* 117f251b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f251e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2520 call 0x117f5550 */
  push32(0x117f2525u); f_117f5550();
  /* 117f2525 mov esi, esp */
  ESI = (ESP);
  /* 117f2527 push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 117f252c push 7 */
  push32((uint32_t)(0x7u));
  /* 117f252e call dword ptr [0x11825490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825490))), 0x117f2534u);
  /* 117f2534 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2537 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2539 call 0x117f5550 */
  push32(0x117f253eu); f_117f5550();
  /* 117f253e mov dword ptr [0x11822440], 0xa */
  w32((uint32_t)(0x11822440), (0xau));
  /* 117f2548 mov dword ptr [0x11822478], 0xa */
  w32((uint32_t)(0x11822478), (0xau));
L_117f2552:;
  /* 117f2552 mov esi, esp */
  ESI = (ESP);
  /* 117f2554 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 117f2559 push 6 */
  push32((uint32_t)(0x6u));
  /* 117f255b call dword ptr [0x11825490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825490))), 0x117f2561u);
  /* 117f2561 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2564 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2566 call 0x117f5550 */
  push32(0x117f256bu); f_117f5550();
  /* 117f256b mov esi, esp */
  ESI = (ESP);
  /* 117f256d push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 117f2572 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f2574 call dword ptr [0x11825490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825490))), 0x117f257au);
  /* 117f257a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f257d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f257f call 0x117f5550 */
  push32(0x117f2584u); f_117f5550();
  /* 117f2584 mov esi, esp */
  ESI = (ESP);
  /* 117f2586 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f2588 call dword ptr [0x11825484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825484))), 0x117f258eu);
  /* 117f258e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2591 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2593 call 0x117f5550 */
  push32(0x117f2598u); f_117f5550();
  /* 117f2598 mov ecx, 5 */
  ECX = (0x5u);
  /* 117f259d sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f259f imul ecx, ecx, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7d0u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117f25a5 mov esi, esp */
  ESI = (ESP);
  /* 117f25a7 push ecx */
  push32((uint32_t)(ECX));
  /* 117f25a8 push 0xb */
  push32((uint32_t)(0xbu));
  /* 117f25aa call dword ptr [0x11825490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825490))), 0x117f25b0u);
  /* 117f25b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f25b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f25b5 call 0x117f5550 */
  push32(0x117f25bau); f_117f5550();
  /* 117f25ba mov esi, esp */
  ESI = (ESP);
  /* 117f25bc push 0 */
  push32((uint32_t)(0x0u));
  /* 117f25be call dword ptr [0x11825484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825484))), 0x117f25c4u);
  /* 117f25c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f25c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f25c9 call 0x117f5550 */
  push32(0x117f25ceu); f_117f5550();
  /* 117f25ce mov edx, 5 */
  EDX = (0x5u);
  /* 117f25d3 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f25d5 imul edx, edx, 0xfa0 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xfa0u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117f25db mov esi, esp */
  ESI = (ESP);
  /* 117f25dd push edx */
  push32((uint32_t)(EDX));
  /* 117f25de push 0xc */
  push32((uint32_t)(0xcu));
  /* 117f25e0 call dword ptr [0x11825490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825490))), 0x117f25e6u);
  /* 117f25e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f25e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f25eb call 0x117f5550 */
  push32(0x117f25f0u); f_117f5550();
  /* 117f25f0 mov esi, esp */
  ESI = (ESP);
  /* 117f25f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f25f4 call dword ptr [0x11825484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825484))), 0x117f25fau);
  /* 117f25fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f25fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f25ff call 0x117f5550 */
  push32(0x117f2604u); f_117f5550();
  /* 117f2604 mov ecx, 5 */
  ECX = (0x5u);
  /* 117f2609 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f260b imul ecx, ecx, 0x1770 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1770u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117f2611 mov esi, esp */
  ESI = (ESP);
  /* 117f2613 push ecx */
  push32((uint32_t)(ECX));
  /* 117f2614 push 0xd */
  push32((uint32_t)(0xdu));
  /* 117f2616 call dword ptr [0x11825490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825490))), 0x117f261cu);
  /* 117f261c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f261f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2621 call 0x117f5550 */
  push32(0x117f2626u); f_117f5550();
  /* 117f2626 mov esi, esp */
  ESI = (ESP);
  /* 117f2628 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f262a call dword ptr [0x11825484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825484))), 0x117f2630u);
  /* 117f2630 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2633 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2635 call 0x117f5550 */
  push32(0x117f263au); f_117f5550();
  /* 117f263a mov edx, 5 */
  EDX = (0x5u);
  /* 117f263f sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f2641 imul edx, edx, 0x1f40 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x1f40u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117f2647 mov esi, esp */
  ESI = (ESP);
  /* 117f2649 push edx */
  push32((uint32_t)(EDX));
  /* 117f264a push 0xe */
  push32((uint32_t)(0xeu));
  /* 117f264c call dword ptr [0x11825490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825490))), 0x117f2652u);
  /* 117f2652 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2655 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2657 call 0x117f5550 */
  push32(0x117f265cu); f_117f5550();
  /* 117f265c mov esi, esp */
  ESI = (ESP);
  /* 117f265e push 0 */
  push32((uint32_t)(0x0u));
  /* 117f2660 call dword ptr [0x11825484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825484))), 0x117f2666u);
  /* 117f2666 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2669 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f266b call 0x117f5550 */
  push32(0x117f2670u); f_117f5550();
  /* 117f2670 mov ecx, 5 */
  ECX = (0x5u);
  /* 117f2675 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f2677 imul ecx, ecx, 0x2710 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2710u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117f267d mov esi, esp */
  ESI = (ESP);
  /* 117f267f push ecx */
  push32((uint32_t)(ECX));
  /* 117f2680 push 0xf */
  push32((uint32_t)(0xfu));
  /* 117f2682 call dword ptr [0x11825490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825490))), 0x117f2688u);
  /* 117f2688 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f268b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f268d call 0x117f5550 */
  push32(0x117f2692u); f_117f5550();
  /* 117f2692 mov esi, esp */
  ESI = (ESP);
  /* 117f2694 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f2696 call dword ptr [0x11825484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825484))), 0x117f269cu);
  /* 117f269c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f269f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f26a1 call 0x117f5550 */
  push32(0x117f26a6u); f_117f5550();
  /* 117f26a6 mov edx, 5 */
  EDX = (0x5u);
  /* 117f26ab sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f26ad imul edx, edx, 0x2ee0 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2ee0u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117f26b3 mov esi, esp */
  ESI = (ESP);
  /* 117f26b5 push edx */
  push32((uint32_t)(EDX));
  /* 117f26b6 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 117f26b8 call dword ptr [0x11825490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825490))), 0x117f26beu);
  /* 117f26be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f26c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f26c3 call 0x117f5550 */
  push32(0x117f26c8u); f_117f5550();
  /* 117f26c8 mov esi, esp */
  ESI = (ESP);
  /* 117f26ca push 0x1181d7d8 */
  push32((uint32_t)(0x1181d7d8u));
  /* 117f26cf push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f26d4 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f26dau);
  /* 117f26da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f26dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f26df call 0x117f5550 */
  push32(0x117f26e4u); f_117f5550();
  /* 117f26e4 mov esi, esp */
  ESI = (ESP);
  /* 117f26e6 push 0x1181d7cc */
  push32((uint32_t)(0x1181d7ccu));
  /* 117f26eb push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f26f0 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f26f6u);
  /* 117f26f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f26f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f26fb call 0x117f5550 */
  push32(0x117f2700u); f_117f5550();
  /* 117f2700 mov esi, esp */
  ESI = (ESP);
  /* 117f2702 push 0x1181d7c0 */
  push32((uint32_t)(0x1181d7c0u));
  /* 117f2707 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f270c call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2712u);
  /* 117f2712 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2715 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2717 call 0x117f5550 */
  push32(0x117f271cu); f_117f5550();
  /* 117f271c mov esi, esp */
  ESI = (ESP);
  /* 117f271e push 0x1181d7b4 */
  push32((uint32_t)(0x1181d7b4u));
  /* 117f2723 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2728 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f272eu);
  /* 117f272e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2731 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2733 call 0x117f5550 */
  push32(0x117f2738u); f_117f5550();
  /* 117f2738 mov esi, esp */
  ESI = (ESP);
  /* 117f273a push 0x1181d7a8 */
  push32((uint32_t)(0x1181d7a8u));
  /* 117f273f push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2744 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f274au);
  /* 117f274a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f274d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f274f call 0x117f5550 */
  push32(0x117f2754u); f_117f5550();
  /* 117f2754 mov esi, esp */
  ESI = (ESP);
  /* 117f2756 push 0x1181d79c */
  push32((uint32_t)(0x1181d79cu));
  /* 117f275b push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2760 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2766u);
  /* 117f2766 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2769 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f276b call 0x117f5550 */
  push32(0x117f2770u); f_117f5550();
  /* 117f2770 mov esi, esp */
  ESI = (ESP);
  /* 117f2772 push 0x1181d790 */
  push32((uint32_t)(0x1181d790u));
  /* 117f2777 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f277c call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2782u);
  /* 117f2782 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2785 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2787 call 0x117f5550 */
  push32(0x117f278cu); f_117f5550();
  /* 117f278c mov esi, esp */
  ESI = (ESP);
  /* 117f278e push 0x1181d784 */
  push32((uint32_t)(0x1181d784u));
  /* 117f2793 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2798 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f279eu);
  /* 117f279e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f27a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f27a3 call 0x117f5550 */
  push32(0x117f27a8u); f_117f5550();
  /* 117f27a8 mov esi, esp */
  ESI = (ESP);
  /* 117f27aa push 0x1181d778 */
  push32((uint32_t)(0x1181d778u));
  /* 117f27af push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f27b4 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f27bau);
  /* 117f27ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f27bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f27bf call 0x117f5550 */
  push32(0x117f27c4u); f_117f5550();
  /* 117f27c4 mov esi, esp */
  ESI = (ESP);
  /* 117f27c6 push 0x1181d76c */
  push32((uint32_t)(0x1181d76cu));
  /* 117f27cb push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f27d0 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f27d6u);
  /* 117f27d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f27d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f27db call 0x117f5550 */
  push32(0x117f27e0u); f_117f5550();
  /* 117f27e0 mov esi, esp */
  ESI = (ESP);
  /* 117f27e2 push 0x1181d760 */
  push32((uint32_t)(0x1181d760u));
  /* 117f27e7 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f27ec call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f27f2u);
  /* 117f27f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f27f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f27f7 call 0x117f5550 */
  push32(0x117f27fcu); f_117f5550();
  /* 117f27fc mov esi, esp */
  ESI = (ESP);
  /* 117f27fe push 0x1181d754 */
  push32((uint32_t)(0x1181d754u));
  /* 117f2803 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2808 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f280eu);
  /* 117f280e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2811 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2813 call 0x117f5550 */
  push32(0x117f2818u); f_117f5550();
  /* 117f2818 mov esi, esp */
  ESI = (ESP);
  /* 117f281a push 0x1181d748 */
  push32((uint32_t)(0x1181d748u));
  /* 117f281f push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2824 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f282au);
  /* 117f282a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f282d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f282f call 0x117f5550 */
  push32(0x117f2834u); f_117f5550();
  /* 117f2834 mov esi, esp */
  ESI = (ESP);
  /* 117f2836 push 0x1181d73c */
  push32((uint32_t)(0x1181d73cu));
  /* 117f283b push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2840 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2846u);
  /* 117f2846 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2849 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f284b call 0x117f5550 */
  push32(0x117f2850u); f_117f5550();
  /* 117f2850 mov esi, esp */
  ESI = (ESP);
  /* 117f2852 push 0x1181d724 */
  push32((uint32_t)(0x1181d724u));
  /* 117f2857 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f285c call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2862u);
  /* 117f2862 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2865 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2867 call 0x117f5550 */
  push32(0x117f286cu); f_117f5550();
  /* 117f286c mov esi, esp */
  ESI = (ESP);
  /* 117f286e push 0x1181d70c */
  push32((uint32_t)(0x1181d70cu));
  /* 117f2873 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2878 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f287eu);
  /* 117f287e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2881 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2883 call 0x117f5550 */
  push32(0x117f2888u); f_117f5550();
  /* 117f2888 mov esi, esp */
  ESI = (ESP);
  /* 117f288a push 0x1181d704 */
  push32((uint32_t)(0x1181d704u));
  /* 117f288f push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2894 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f289au);
  /* 117f289a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f289d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f289f call 0x117f5550 */
  push32(0x117f28a4u); f_117f5550();
  /* 117f28a4 mov esi, esp */
  ESI = (ESP);
  /* 117f28a6 push 0x1181d6fc */
  push32((uint32_t)(0x1181d6fcu));
  /* 117f28ab push 0x1181d354 */
  push32((uint32_t)(0x1181d354u));
  /* 117f28b0 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f28b6u);
  /* 117f28b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f28b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f28bb call 0x117f5550 */
  push32(0x117f28c0u); f_117f5550();
  /* 117f28c0 mov esi, esp */
  ESI = (ESP);
  /* 117f28c2 push 0x1181d6f4 */
  push32((uint32_t)(0x1181d6f4u));
  /* 117f28c7 push 0x1181d2e8 */
  push32((uint32_t)(0x1181d2e8u));
  /* 117f28cc call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f28d2u);
  /* 117f28d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f28d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f28d7 call 0x117f5550 */
  push32(0x117f28dcu); f_117f5550();
  /* 117f28dc mov esi, esp */
  ESI = (ESP);
  /* 117f28de push 0x1181d6ec */
  push32((uint32_t)(0x1181d6ecu));
  /* 117f28e3 push 0x1181d2dc */
  push32((uint32_t)(0x1181d2dcu));
  /* 117f28e8 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f28eeu);
  /* 117f28ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f28f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f28f3 call 0x117f5550 */
  push32(0x117f28f8u); f_117f5550();
  /* 117f28f8 mov esi, esp */
  ESI = (ESP);
  /* 117f28fa push 0x1181d6e0 */
  push32((uint32_t)(0x1181d6e0u));
  /* 117f28ff push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2904 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f290au);
  /* 117f290a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f290d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f290f call 0x117f5550 */
  push32(0x117f2914u); f_117f5550();
  /* 117f2914 mov esi, esp */
  ESI = (ESP);
  /* 117f2916 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f2918 call dword ptr [0x11825498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825498))), 0x117f291eu);
  /* 117f291e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2921 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2923 call 0x117f5550 */
  push32(0x117f2928u); f_117f5550();
  /* 117f2928 mov esi, esp */
  ESI = (ESP);
  /* 117f292a push 0 */
  push32((uint32_t)(0x0u));
  /* 117f292c push 0x118224d0 */
  push32((uint32_t)(0x118224d0u));
  /* 117f2931 call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f2937u);
  /* 117f2937 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f293a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f293c call 0x117f5550 */
  push32(0x117f2941u); f_117f5550();
  /* 117f2941 mov esi, esp */
  ESI = (ESP);
  /* 117f2943 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f2945 call dword ptr [0x1182549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182549c))), 0x117f294bu);
  /* 117f294b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f294e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2950 call 0x117f5550 */
  push32(0x117f2955u); f_117f5550();
  /* 117f2955 mov esi, esp */
  ESI = (ESP);
  /* 117f2957 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f2959 call dword ptr [0x11825498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825498))), 0x117f295fu);
  /* 117f295f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2962 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2964 call 0x117f5550 */
  push32(0x117f2969u); f_117f5550();
  /* 117f2969 mov esi, esp */
  ESI = (ESP);
  /* 117f296b push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 117f2970 push 3 */
  push32((uint32_t)(0x3u));
  /* 117f2972 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f2974 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f297au);
  /* 117f297a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f297d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f297f call 0x117f5550 */
  push32(0x117f2984u); f_117f5550();
  /* 117f2984 mov esi, esp */
  ESI = (ESP);
  /* 117f2986 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 117f298b push 0 */
  push32((uint32_t)(0x0u));
  /* 117f298d push 1 */
  push32((uint32_t)(0x1u));
  /* 117f298f call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f2995u);
  /* 117f2995 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2998 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f299a call 0x117f5550 */
  push32(0x117f299fu); f_117f5550();
  /* 117f299f mov esi, esp */
  ESI = (ESP);
  /* 117f29a1 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 117f29a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f29a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f29aa call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f29b0u);
  /* 117f29b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f29b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f29b5 call 0x117f5550 */
  push32(0x117f29bau); f_117f5550();
  /* 117f29ba mov esi, esp */
  ESI = (ESP);
  /* 117f29bc push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 117f29c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f29c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f29c5 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f29cbu);
  /* 117f29cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f29ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f29d0 call 0x117f5550 */
  push32(0x117f29d5u); f_117f5550();
  /* 117f29d5 mov esi, esp */
  ESI = (ESP);
  /* 117f29d7 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 117f29dc push 5 */
  push32((uint32_t)(0x5u));
  /* 117f29de push 1 */
  push32((uint32_t)(0x1u));
  /* 117f29e0 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f29e6u);
  /* 117f29e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f29e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f29eb call 0x117f5550 */
  push32(0x117f29f0u); f_117f5550();
  /* 117f29f0 mov esi, esp */
  ESI = (ESP);
  /* 117f29f2 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 117f29f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 117f29f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f29fb call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f2a01u);
  /* 117f2a01 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2a04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2a06 call 0x117f5550 */
  push32(0x117f2a0bu); f_117f5550();
  /* 117f2a0b mov esi, esp */
  ESI = (ESP);
  /* 117f2a0d push 0 */
  push32((uint32_t)(0x0u));
  /* 117f2a0f call dword ptr [0x11825484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825484))), 0x117f2a15u);
  /* 117f2a15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2a18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2a1a call 0x117f5550 */
  push32(0x117f2a1fu); f_117f5550();
  /* 117f2a1f mov esi, esp */
  ESI = (ESP);
  /* 117f2a21 push eax */
  push32((uint32_t)(EAX));
  /* 117f2a22 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f2a24 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f2a26 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f2a28 push 0x1181d6d4 */
  push32((uint32_t)(0x1181d6d4u));
  /* 117f2a2d push 1 */
  push32((uint32_t)(0x1u));
  /* 117f2a2f call dword ptr [0x118254a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a0))), 0x117f2a35u);
  /* 117f2a35 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2a38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2a3a call 0x117f5550 */
  push32(0x117f2a3fu); f_117f5550();
  /* 117f2a3f mov esi, esp */
  ESI = (ESP);
  /* 117f2a41 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117f2a46 push 3 */
  push32((uint32_t)(0x3u));
  /* 117f2a48 push 3 */
  push32((uint32_t)(0x3u));
  /* 117f2a4a call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f2a50u);
  /* 117f2a50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2a53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2a55 call 0x117f5550 */
  push32(0x117f2a5au); f_117f5550();
  /* 117f2a5a mov esi, esp */
  ESI = (ESP);
  /* 117f2a5c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117f2a61 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f2a63 push 3 */
  push32((uint32_t)(0x3u));
  /* 117f2a65 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f2a6bu);
  /* 117f2a6b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2a6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2a70 call 0x117f5550 */
  push32(0x117f2a75u); f_117f5550();
  /* 117f2a75 mov esi, esp */
  ESI = (ESP);
  /* 117f2a77 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117f2a7c push 2 */
  push32((uint32_t)(0x2u));
  /* 117f2a7e push 3 */
  push32((uint32_t)(0x3u));
  /* 117f2a80 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f2a86u);
  /* 117f2a86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2a89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2a8b call 0x117f5550 */
  push32(0x117f2a90u); f_117f5550();
  /* 117f2a90 mov esi, esp */
  ESI = (ESP);
  /* 117f2a92 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117f2a97 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f2a99 push 3 */
  push32((uint32_t)(0x3u));
  /* 117f2a9b call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f2aa1u);
  /* 117f2aa1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2aa4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2aa6 call 0x117f5550 */
  push32(0x117f2aabu); f_117f5550();
  /* 117f2aab mov esi, esp */
  ESI = (ESP);
  /* 117f2aad push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117f2ab2 push 5 */
  push32((uint32_t)(0x5u));
  /* 117f2ab4 push 3 */
  push32((uint32_t)(0x3u));
  /* 117f2ab6 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f2abcu);
  /* 117f2abc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2abf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2ac1 call 0x117f5550 */
  push32(0x117f2ac6u); f_117f5550();
  /* 117f2ac6 mov esi, esp */
  ESI = (ESP);
  /* 117f2ac8 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117f2acd push 4 */
  push32((uint32_t)(0x4u));
  /* 117f2acf push 3 */
  push32((uint32_t)(0x3u));
  /* 117f2ad1 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f2ad7u);
  /* 117f2ad7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2ada cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2adc call 0x117f5550 */
  push32(0x117f2ae1u); f_117f5550();
  /* 117f2ae1 mov esi, esp */
  ESI = (ESP);
  /* 117f2ae3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f2ae5 call dword ptr [0x11825484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825484))), 0x117f2aebu);
  /* 117f2aeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2aee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2af0 call 0x117f5550 */
  push32(0x117f2af5u); f_117f5550();
  /* 117f2af5 mov esi, esp */
  ESI = (ESP);
  /* 117f2af7 push eax */
  push32((uint32_t)(EAX));
  /* 117f2af8 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f2afa push 1 */
  push32((uint32_t)(0x1u));
  /* 117f2afc push 1 */
  push32((uint32_t)(0x1u));
  /* 117f2afe push 0x1181d6c8 */
  push32((uint32_t)(0x1181d6c8u));
  /* 117f2b03 push 3 */
  push32((uint32_t)(0x3u));
  /* 117f2b05 call dword ptr [0x118254a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a0))), 0x117f2b0bu);
  /* 117f2b0b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2b0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2b10 call 0x117f5550 */
  push32(0x117f2b15u); f_117f5550();
L_117f2b15:;
  /* 117f2b15 mov esi, esp */
  ESI = (ESP);
  /* 117f2b17 push 0xb */
  push32((uint32_t)(0xbu));
  /* 117f2b19 call dword ptr [0x118254a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a4))), 0x117f2b1fu);
  /* 117f2b1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2b22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2b24 call 0x117f5550 */
  push32(0x117f2b29u); f_117f5550();
  /* 117f2b29 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f2b2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f2b30 je 0x117f2ba2 */
  if (C.zf) goto L_117f2ba2;
  /* 117f2b32 mov esi, esp */
  ESI = (ESP);
  /* 117f2b34 push 0x1181d6ac */
  push32((uint32_t)(0x1181d6acu));
  /* 117f2b39 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2b3e call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2b44u);
  /* 117f2b44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2b47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2b49 call 0x117f5550 */
  push32(0x117f2b4eu); f_117f5550();
  /* 117f2b4e mov esi, esp */
  ESI = (ESP);
  /* 117f2b50 push 0x1181d690 */
  push32((uint32_t)(0x1181d690u));
  /* 117f2b55 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2b5a call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2b60u);
  /* 117f2b60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2b63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2b65 call 0x117f5550 */
  push32(0x117f2b6au); f_117f5550();
  /* 117f2b6a mov esi, esp */
  ESI = (ESP);
  /* 117f2b6c push 0x1181d678 */
  push32((uint32_t)(0x1181d678u));
  /* 117f2b71 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2b76 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2b7cu);
  /* 117f2b7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2b7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2b81 call 0x117f5550 */
  push32(0x117f2b86u); f_117f5550();
  /* 117f2b86 mov esi, esp */
  ESI = (ESP);
  /* 117f2b88 push 0x1181d660 */
  push32((uint32_t)(0x1181d660u));
  /* 117f2b8d push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2b92 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2b98u);
  /* 117f2b98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2b9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2b9d call 0x117f5550 */
  push32(0x117f2ba2u); f_117f5550();
L_117f2ba2:;
  /* 117f2ba2 mov esi, esp */
  ESI = (ESP);
  /* 117f2ba4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 117f2ba6 call dword ptr [0x118254a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a4))), 0x117f2bacu);
  /* 117f2bac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2baf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2bb1 call 0x117f5550 */
  push32(0x117f2bb6u); f_117f5550();
  /* 117f2bb6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f2bbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f2bbd je 0x117f2c2f */
  if (C.zf) goto L_117f2c2f;
  /* 117f2bbf mov esi, esp */
  ESI = (ESP);
  /* 117f2bc1 push 0x1181d644 */
  push32((uint32_t)(0x1181d644u));
  /* 117f2bc6 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2bcb call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2bd1u);
  /* 117f2bd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2bd4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2bd6 call 0x117f5550 */
  push32(0x117f2bdbu); f_117f5550();
  /* 117f2bdb mov esi, esp */
  ESI = (ESP);
  /* 117f2bdd push 0x1181d628 */
  push32((uint32_t)(0x1181d628u));
  /* 117f2be2 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2be7 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2bedu);
  /* 117f2bed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2bf0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2bf2 call 0x117f5550 */
  push32(0x117f2bf7u); f_117f5550();
  /* 117f2bf7 mov esi, esp */
  ESI = (ESP);
  /* 117f2bf9 push 0x1181d610 */
  push32((uint32_t)(0x1181d610u));
  /* 117f2bfe push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2c03 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2c09u);
  /* 117f2c09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2c0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2c0e call 0x117f5550 */
  push32(0x117f2c13u); f_117f5550();
  /* 117f2c13 mov esi, esp */
  ESI = (ESP);
  /* 117f2c15 push 0x1181d5f8 */
  push32((uint32_t)(0x1181d5f8u));
  /* 117f2c1a push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2c1f call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2c25u);
  /* 117f2c25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2c28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2c2a call 0x117f5550 */
  push32(0x117f2c2fu); f_117f5550();
L_117f2c2f:;
  /* 117f2c2f mov esi, esp */
  ESI = (ESP);
  /* 117f2c31 push 0xd */
  push32((uint32_t)(0xdu));
  /* 117f2c33 call dword ptr [0x118254a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a4))), 0x117f2c39u);
  /* 117f2c39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2c3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2c3e call 0x117f5550 */
  push32(0x117f2c43u); f_117f5550();
  /* 117f2c43 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f2c48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f2c4a je 0x117f2cbc */
  if (C.zf) goto L_117f2cbc;
  /* 117f2c4c mov esi, esp */
  ESI = (ESP);
  /* 117f2c4e push 0x1181d5dc */
  push32((uint32_t)(0x1181d5dcu));
  /* 117f2c53 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2c58 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2c5eu);
  /* 117f2c5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2c61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2c63 call 0x117f5550 */
  push32(0x117f2c68u); f_117f5550();
  /* 117f2c68 mov esi, esp */
  ESI = (ESP);
  /* 117f2c6a push 0x1181d5c0 */
  push32((uint32_t)(0x1181d5c0u));
  /* 117f2c6f push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2c74 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2c7au);
  /* 117f2c7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2c7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2c7f call 0x117f5550 */
  push32(0x117f2c84u); f_117f5550();
  /* 117f2c84 mov esi, esp */
  ESI = (ESP);
  /* 117f2c86 push 0x1181d5a8 */
  push32((uint32_t)(0x1181d5a8u));
  /* 117f2c8b push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2c90 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2c96u);
  /* 117f2c96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2c99 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2c9b call 0x117f5550 */
  push32(0x117f2ca0u); f_117f5550();
  /* 117f2ca0 mov esi, esp */
  ESI = (ESP);
  /* 117f2ca2 push 0x1181d590 */
  push32((uint32_t)(0x1181d590u));
  /* 117f2ca7 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2cac call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2cb2u);
  /* 117f2cb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2cb5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2cb7 call 0x117f5550 */
  push32(0x117f2cbcu); f_117f5550();
L_117f2cbc:;
  /* 117f2cbc mov esi, esp */
  ESI = (ESP);
  /* 117f2cbe push 0xe */
  push32((uint32_t)(0xeu));
  /* 117f2cc0 call dword ptr [0x118254a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a4))), 0x117f2cc6u);
  /* 117f2cc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2cc9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2ccb call 0x117f5550 */
  push32(0x117f2cd0u); f_117f5550();
  /* 117f2cd0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f2cd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f2cd7 je 0x117f2d49 */
  if (C.zf) goto L_117f2d49;
  /* 117f2cd9 mov esi, esp */
  ESI = (ESP);
  /* 117f2cdb push 0x1181d574 */
  push32((uint32_t)(0x1181d574u));
  /* 117f2ce0 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2ce5 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2cebu);
  /* 117f2ceb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2cee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2cf0 call 0x117f5550 */
  push32(0x117f2cf5u); f_117f5550();
  /* 117f2cf5 mov esi, esp */
  ESI = (ESP);
  /* 117f2cf7 push 0x1181d558 */
  push32((uint32_t)(0x1181d558u));
  /* 117f2cfc push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2d01 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2d07u);
  /* 117f2d07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2d0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2d0c call 0x117f5550 */
  push32(0x117f2d11u); f_117f5550();
  /* 117f2d11 mov esi, esp */
  ESI = (ESP);
  /* 117f2d13 push 0x1181d540 */
  push32((uint32_t)(0x1181d540u));
  /* 117f2d18 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2d1d call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2d23u);
  /* 117f2d23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2d26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2d28 call 0x117f5550 */
  push32(0x117f2d2du); f_117f5550();
  /* 117f2d2d mov esi, esp */
  ESI = (ESP);
  /* 117f2d2f push 0x1181d528 */
  push32((uint32_t)(0x1181d528u));
  /* 117f2d34 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2d39 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2d3fu);
  /* 117f2d3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2d42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2d44 call 0x117f5550 */
  push32(0x117f2d49u); f_117f5550();
L_117f2d49:;
  /* 117f2d49 mov esi, esp */
  ESI = (ESP);
  /* 117f2d4b push 0xf */
  push32((uint32_t)(0xfu));
  /* 117f2d4d call dword ptr [0x118254a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a4))), 0x117f2d53u);
  /* 117f2d53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2d56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2d58 call 0x117f5550 */
  push32(0x117f2d5du); f_117f5550();
  /* 117f2d5d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f2d62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f2d64 je 0x117f2dd6 */
  if (C.zf) goto L_117f2dd6;
  /* 117f2d66 mov esi, esp */
  ESI = (ESP);
  /* 117f2d68 push 0x1181d50c */
  push32((uint32_t)(0x1181d50cu));
  /* 117f2d6d push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2d72 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2d78u);
  /* 117f2d78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2d7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2d7d call 0x117f5550 */
  push32(0x117f2d82u); f_117f5550();
  /* 117f2d82 mov esi, esp */
  ESI = (ESP);
  /* 117f2d84 push 0x1181d4f0 */
  push32((uint32_t)(0x1181d4f0u));
  /* 117f2d89 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2d8e call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2d94u);
  /* 117f2d94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2d97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2d99 call 0x117f5550 */
  push32(0x117f2d9eu); f_117f5550();
  /* 117f2d9e mov esi, esp */
  ESI = (ESP);
  /* 117f2da0 push 0x1181d4d8 */
  push32((uint32_t)(0x1181d4d8u));
  /* 117f2da5 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2daa call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2db0u);
  /* 117f2db0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2db3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2db5 call 0x117f5550 */
  push32(0x117f2dbau); f_117f5550();
  /* 117f2dba mov esi, esp */
  ESI = (ESP);
  /* 117f2dbc push 0x1181d4c0 */
  push32((uint32_t)(0x1181d4c0u));
  /* 117f2dc1 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2dc6 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2dccu);
  /* 117f2dcc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2dcf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2dd1 call 0x117f5550 */
  push32(0x117f2dd6u); f_117f5550();
L_117f2dd6:;
  /* 117f2dd6 mov esi, esp */
  ESI = (ESP);
  /* 117f2dd8 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 117f2dda call dword ptr [0x118254a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a4))), 0x117f2de0u);
  /* 117f2de0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2de3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2de5 call 0x117f5550 */
  push32(0x117f2deau); f_117f5550();
  /* 117f2dea and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f2def test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f2df1 je 0x117f2f0f */
  if (C.zf) goto L_117f2f0f;
  /* 117f2df7 mov esi, esp */
  ESI = (ESP);
  /* 117f2df9 push 0x1181d4a4 */
  push32((uint32_t)(0x1181d4a4u));
  /* 117f2dfe push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2e03 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2e09u);
  /* 117f2e09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2e0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2e0e call 0x117f5550 */
  push32(0x117f2e13u); f_117f5550();
  /* 117f2e13 mov esi, esp */
  ESI = (ESP);
  /* 117f2e15 push 0x1181d488 */
  push32((uint32_t)(0x1181d488u));
  /* 117f2e1a push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2e1f call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2e25u);
  /* 117f2e25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2e28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2e2a call 0x117f5550 */
  push32(0x117f2e2fu); f_117f5550();
  /* 117f2e2f mov esi, esp */
  ESI = (ESP);
  /* 117f2e31 push 0x1181d470 */
  push32((uint32_t)(0x1181d470u));
  /* 117f2e36 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2e3b call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2e41u);
  /* 117f2e41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2e44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2e46 call 0x117f5550 */
  push32(0x117f2e4bu); f_117f5550();
  /* 117f2e4b mov esi, esp */
  ESI = (ESP);
  /* 117f2e4d push 0x1181d458 */
  push32((uint32_t)(0x1181d458u));
  /* 117f2e52 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2e57 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2e5du);
  /* 117f2e5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2e60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2e62 call 0x117f5550 */
  push32(0x117f2e67u); f_117f5550();
  /* 117f2e67 mov esi, esp */
  ESI = (ESP);
  /* 117f2e69 push 0x1181d44c */
  push32((uint32_t)(0x1181d44cu));
  /* 117f2e6e push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2e73 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2e79u);
  /* 117f2e79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2e7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2e7e call 0x117f5550 */
  push32(0x117f2e83u); f_117f5550();
  /* 117f2e83 mov esi, esp */
  ESI = (ESP);
  /* 117f2e85 push 0x1181d440 */
  push32((uint32_t)(0x1181d440u));
  /* 117f2e8a push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2e8f call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2e95u);
  /* 117f2e95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2e98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2e9a call 0x117f5550 */
  push32(0x117f2e9fu); f_117f5550();
  /* 117f2e9f mov esi, esp */
  ESI = (ESP);
  /* 117f2ea1 push 0x1181d434 */
  push32((uint32_t)(0x1181d434u));
  /* 117f2ea6 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2eab call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2eb1u);
  /* 117f2eb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2eb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2eb6 call 0x117f5550 */
  push32(0x117f2ebbu); f_117f5550();
  /* 117f2ebb mov esi, esp */
  ESI = (ESP);
  /* 117f2ebd push 0x1181d428 */
  push32((uint32_t)(0x1181d428u));
  /* 117f2ec2 push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2ec7 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2ecdu);
  /* 117f2ecd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2ed0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2ed2 call 0x117f5550 */
  push32(0x117f2ed7u); f_117f5550();
  /* 117f2ed7 mov esi, esp */
  ESI = (ESP);
  /* 117f2ed9 push 0x1181d41c */
  push32((uint32_t)(0x1181d41cu));
  /* 117f2ede push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2ee3 call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2ee9u);
  /* 117f2ee9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2eec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2eee call 0x117f5550 */
  push32(0x117f2ef3u); f_117f5550();
  /* 117f2ef3 mov esi, esp */
  ESI = (ESP);
  /* 117f2ef5 push 0x1181d410 */
  push32((uint32_t)(0x1181d410u));
  /* 117f2efa push 0x1181d2a0 */
  push32((uint32_t)(0x1181d2a0u));
  /* 117f2eff call dword ptr [0x11825494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825494))), 0x117f2f05u);
  /* 117f2f05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2f08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2f0a call 0x117f5550 */
  push32(0x117f2f0fu); f_117f5550();
L_117f2f0f:;
  /* 117f2f0f mov esi, esp */
  ESI = (ESP);
  /* 117f2f11 push 6 */
  push32((uint32_t)(0x6u));
  /* 117f2f13 call dword ptr [0x118254a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a4))), 0x117f2f19u);
  /* 117f2f19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2f1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2f1e call 0x117f5550 */
  push32(0x117f2f23u); f_117f5550();
  /* 117f2f23 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f2f28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f2f2a je 0x117f2f8a */
  if (C.zf) goto L_117f2f8a;
  /* 117f2f2c mov esi, esp */
  ESI = (ESP);
  /* 117f2f2e push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 117f2f30 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f2f36u);
  /* 117f2f36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2f39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2f3b call 0x117f5550 */
  push32(0x117f2f40u); f_117f5550();
  /* 117f2f40 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f2f45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f2f47 je 0x117f2f8a */
  if (C.zf) goto L_117f2f8a;
  /* 117f2f49 mov esi, esp */
  ESI = (ESP);
  /* 117f2f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 117f2f4d push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 117f2f4f call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f2f55u);
  /* 117f2f55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2f58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2f5a call 0x117f5550 */
  push32(0x117f2f5fu); f_117f5550();
  /* 117f2f5f mov esi, esp */
  ESI = (ESP);
  /* 117f2f61 push 0x1181d404 */
  push32((uint32_t)(0x1181d404u));
  /* 117f2f66 call dword ptr [0x118254a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a8))), 0x117f2f6cu);
  /* 117f2f6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2f6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2f71 call 0x117f5550 */
  push32(0x117f2f76u); f_117f5550();
  /* 117f2f76 mov esi, esp */
  ESI = (ESP);
  /* 117f2f78 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 117f2f7a call dword ptr [0x11825468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825468))), 0x117f2f80u);
  /* 117f2f80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2f83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2f85 call 0x117f5550 */
  push32(0x117f2f8au); f_117f5550();
L_117f2f8a:;
  /* 117f2f8a mov esi, esp */
  ESI = (ESP);
  /* 117f2f8c push 1 */
  push32((uint32_t)(0x1u));
  /* 117f2f8e call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f2f94u);
  /* 117f2f94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2f97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2f99 call 0x117f5550 */
  push32(0x117f2f9eu); f_117f5550();
  /* 117f2f9e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f2fa3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f2fa5 jne 0x117f3030 */
  if (!C.zf) goto L_117f3030;
  /* 117f2fab mov esi, esp */
  ESI = (ESP);
  /* 117f2fad push 0x11822488 */
  push32((uint32_t)(0x11822488u));
  /* 117f2fb2 push 0x118225a0 */
  push32((uint32_t)(0x118225a0u));
  /* 117f2fb7 call dword ptr [0x118254ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254ac))), 0x117f2fbdu);
  /* 117f2fbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2fc0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2fc2 call 0x117f5550 */
  push32(0x117f2fc7u); f_117f5550();
  /* 117f2fc7 mov esi, eax */
  ESI = (EAX);
  /* 117f2fc9 mov edi, esp */
  EDI = (ESP);
  /* 117f2fcb push 0x11822488 */
  push32((uint32_t)(0x11822488u));
  /* 117f2fd0 call dword ptr [0x118254b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b0))), 0x117f2fd6u);
  /* 117f2fd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2fd9 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2fdb call 0x117f5550 */
  push32(0x117f2fe0u); f_117f5550();
  /* 117f2fe0 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2fe2 jge 0x117f3030 */
  if ((C.sf==C.of)) goto L_117f3030;
  /* 117f2fe4 mov esi, esp */
  ESI = (ESP);
  /* 117f2fe6 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f2fe8 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f2fea call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f2ff0u);
  /* 117f2ff0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f2ff3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f2ff5 call 0x117f5550 */
  push32(0x117f2ffau); f_117f5550();
  /* 117f2ffa mov esi, esp */
  ESI = (ESP);
  /* 117f2ffc push 0 */
  push32((uint32_t)(0x0u));
  /* 117f2ffe push 0x11822488 */
  push32((uint32_t)(0x11822488u));
  /* 117f3003 call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f3009u);
  /* 117f3009 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f300c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f300e call 0x117f5550 */
  push32(0x117f3013u); f_117f5550();
  /* 117f3013 mov esi, esp */
  ESI = (ESP);
  /* 117f3015 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3017 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 117f3019 push 0x11822628 */
  push32((uint32_t)(0x11822628u));
  /* 117f301e push 5 */
  push32((uint32_t)(0x5u));
  /* 117f3020 call dword ptr [0x118254b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b4))), 0x117f3026u);
  /* 117f3026 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3029 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f302b call 0x117f5550 */
  push32(0x117f3030u); f_117f5550();
L_117f3030:;
  /* 117f3030 mov esi, esp */
  ESI = (ESP);
  /* 117f3032 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f3034 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f303au);
  /* 117f303a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f303d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f303f call 0x117f5550 */
  push32(0x117f3044u); f_117f5550();
  /* 117f3044 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f3049 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f304b je 0x117f30d4 */
  if (C.zf) goto L_117f30d4;
  /* 117f3051 mov esi, esp */
  ESI = (ESP);
  /* 117f3053 push 0x11822488 */
  push32((uint32_t)(0x11822488u));
  /* 117f3058 push 0x118225a0 */
  push32((uint32_t)(0x118225a0u));
  /* 117f305d call dword ptr [0x118254ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254ac))), 0x117f3063u);
  /* 117f3063 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3066 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3068 call 0x117f5550 */
  push32(0x117f306du); f_117f5550();
  /* 117f306d mov esi, eax */
  ESI = (EAX);
  /* 117f306f mov edi, esp */
  EDI = (ESP);
  /* 117f3071 push 0x11822488 */
  push32((uint32_t)(0x11822488u));
  /* 117f3076 call dword ptr [0x118254b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b0))), 0x117f307cu);
  /* 117f307c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f307f cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3081 call 0x117f5550 */
  push32(0x117f3086u); f_117f5550();
  /* 117f3086 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3088 jne 0x117f30d4 */
  if (!C.zf) goto L_117f30d4;
  /* 117f308a mov esi, esp */
  ESI = (ESP);
  /* 117f308c push 0 */
  push32((uint32_t)(0x0u));
  /* 117f308e push 1 */
  push32((uint32_t)(0x1u));
  /* 117f3090 call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f3096u);
  /* 117f3096 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3099 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f309b call 0x117f5550 */
  push32(0x117f30a0u); f_117f5550();
  /* 117f30a0 mov esi, esp */
  ESI = (ESP);
  /* 117f30a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f30a4 push 0x11822488 */
  push32((uint32_t)(0x11822488u));
  /* 117f30a9 call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f30afu);
  /* 117f30af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f30b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f30b4 call 0x117f5550 */
  push32(0x117f30b9u); f_117f5550();
  /* 117f30b9 mov esi, esp */
  ESI = (ESP);
  /* 117f30bb push 0 */
  push32((uint32_t)(0x0u));
  /* 117f30bd push 0x11822620 */
  push32((uint32_t)(0x11822620u));
  /* 117f30c2 push 5 */
  push32((uint32_t)(0x5u));
  /* 117f30c4 call dword ptr [0x118254b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b8))), 0x117f30cau);
  /* 117f30ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f30cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f30cf call 0x117f5550 */
  push32(0x117f30d4u); f_117f5550();
L_117f30d4:;
  /* 117f30d4 mov esi, esp */
  ESI = (ESP);
  /* 117f30d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f30d8 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f30deu);
  /* 117f30de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f30e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f30e3 call 0x117f5550 */
  push32(0x117f30e8u); f_117f5550();
  /* 117f30e8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f30ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f30ef je 0x117f31bc */
  if (C.zf) goto L_117f31bc;
  /* 117f30f5 mov esi, esp */
  ESI = (ESP);
  /* 117f30f7 push 0x11822488 */
  push32((uint32_t)(0x11822488u));
  /* 117f30fc call dword ptr [0x118254b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b0))), 0x117f3102u);
  /* 117f3102 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3107 call 0x117f5550 */
  push32(0x117f310cu); f_117f5550();
  /* 117f310c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f310e jne 0x117f31bc */
  if (!C.zf) goto L_117f31bc;
  /* 117f3114 mov esi, esp */
  ESI = (ESP);
  /* 117f3116 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3118 push 0x118225a0 */
  push32((uint32_t)(0x118225a0u));
  /* 117f311d call dword ptr [0x118254bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254bc))), 0x117f3123u);
  /* 117f3123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3126 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3128 call 0x117f5550 */
  push32(0x117f312du); f_117f5550();
  /* 117f312d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f312f jle 0x117f31bc */
  if ((C.zf||C.sf!=C.of)) goto L_117f31bc;
  /* 117f3135 mov esi, esp */
  ESI = (ESP);
  /* 117f3137 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3139 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f313b call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f3141u);
  /* 117f3141 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3144 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3146 call 0x117f5550 */
  push32(0x117f314bu); f_117f5550();
  /* 117f314b mov esi, esp */
  ESI = (ESP);
  /* 117f314d push 0 */
  push32((uint32_t)(0x0u));
  /* 117f314f call dword ptr [0x11825484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825484))), 0x117f3155u);
  /* 117f3155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3158 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f315a call 0x117f5550 */
  push32(0x117f315fu); f_117f5550();
  /* 117f315f imul eax, eax, 0x2710 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2710u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117f3165 mov ecx, 0x11170 */
  ECX = (0x11170u);
  /* 117f316a sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f316c mov esi, esp */
  ESI = (ESP);
  /* 117f316e push ecx */
  push32((uint32_t)(ECX));
  /* 117f316f push 0x1181d3fc */
  push32((uint32_t)(0x1181d3fcu));
  /* 117f3174 call dword ptr [0x118254c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254c0))), 0x117f317au);
  /* 117f317a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f317d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f317f call 0x117f5550 */
  push32(0x117f3184u); f_117f5550();
  /* 117f3184 mov esi, esp */
  ESI = (ESP);
  /* 117f3186 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3188 call dword ptr [0x11825484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825484))), 0x117f318eu);
  /* 117f318e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3193 call 0x117f5550 */
  push32(0x117f3198u); f_117f5550();
  /* 117f3198 imul eax, eax, 0x2710 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2710u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117f319e mov edx, 0x11170 */
  EDX = (0x11170u);
  /* 117f31a3 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f31a5 mov esi, esp */
  ESI = (ESP);
  /* 117f31a7 push edx */
  push32((uint32_t)(EDX));
  /* 117f31a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f31aa push 0 */
  push32((uint32_t)(0x0u));
  /* 117f31ac call dword ptr [0x118254c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254c4))), 0x117f31b2u);
  /* 117f31b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f31b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f31b7 call 0x117f5550 */
  push32(0x117f31bcu); f_117f5550();
L_117f31bc:;
  /* 117f31bc mov esi, esp */
  ESI = (ESP);
  /* 117f31be push 0x14 */
  push32((uint32_t)(0x14u));
  /* 117f31c0 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f31c6u);
  /* 117f31c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f31c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f31cb call 0x117f5550 */
  push32(0x117f31d0u); f_117f5550();
  /* 117f31d0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f31d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f31d7 jne 0x117f3262 */
  if (!C.zf) goto L_117f3262;
  /* 117f31dd mov esi, esp */
  ESI = (ESP);
  /* 117f31df push 0x11822480 */
  push32((uint32_t)(0x11822480u));
  /* 117f31e4 push 0x118225a8 */
  push32((uint32_t)(0x118225a8u));
  /* 117f31e9 call dword ptr [0x118254ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254ac))), 0x117f31efu);
  /* 117f31ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f31f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f31f4 call 0x117f5550 */
  push32(0x117f31f9u); f_117f5550();
  /* 117f31f9 mov esi, eax */
  ESI = (EAX);
  /* 117f31fb mov edi, esp */
  EDI = (ESP);
  /* 117f31fd push 0x11822480 */
  push32((uint32_t)(0x11822480u));
  /* 117f3202 call dword ptr [0x118254b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b0))), 0x117f3208u);
  /* 117f3208 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f320b cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f320d call 0x117f5550 */
  push32(0x117f3212u); f_117f5550();
  /* 117f3212 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3214 jge 0x117f3262 */
  if ((C.sf==C.of)) goto L_117f3262;
  /* 117f3216 mov esi, esp */
  ESI = (ESP);
  /* 117f3218 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f321a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 117f321c call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f3222u);
  /* 117f3222 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3225 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3227 call 0x117f5550 */
  push32(0x117f322cu); f_117f5550();
  /* 117f322c mov esi, esp */
  ESI = (ESP);
  /* 117f322e push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3230 push 0x11822480 */
  push32((uint32_t)(0x11822480u));
  /* 117f3235 call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f323bu);
  /* 117f323b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f323e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3240 call 0x117f5550 */
  push32(0x117f3245u); f_117f5550();
  /* 117f3245 mov esi, esp */
  ESI = (ESP);
  /* 117f3247 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3249 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 117f324b push 0x11822638 */
  push32((uint32_t)(0x11822638u));
  /* 117f3250 push 5 */
  push32((uint32_t)(0x5u));
  /* 117f3252 call dword ptr [0x118254b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b4))), 0x117f3258u);
  /* 117f3258 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f325b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f325d call 0x117f5550 */
  push32(0x117f3262u); f_117f5550();
L_117f3262:;
  /* 117f3262 mov esi, esp */
  ESI = (ESP);
  /* 117f3264 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 117f3266 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f326cu);
  /* 117f326c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f326f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3271 call 0x117f5550 */
  push32(0x117f3276u); f_117f5550();
  /* 117f3276 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f327b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f327d je 0x117f3306 */
  if (C.zf) goto L_117f3306;
  /* 117f3283 mov esi, esp */
  ESI = (ESP);
  /* 117f3285 push 0x11822480 */
  push32((uint32_t)(0x11822480u));
  /* 117f328a push 0x118225a8 */
  push32((uint32_t)(0x118225a8u));
  /* 117f328f call dword ptr [0x118254ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254ac))), 0x117f3295u);
  /* 117f3295 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3298 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f329a call 0x117f5550 */
  push32(0x117f329fu); f_117f5550();
  /* 117f329f mov esi, eax */
  ESI = (EAX);
  /* 117f32a1 mov edi, esp */
  EDI = (ESP);
  /* 117f32a3 push 0x11822480 */
  push32((uint32_t)(0x11822480u));
  /* 117f32a8 call dword ptr [0x118254b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b0))), 0x117f32aeu);
  /* 117f32ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f32b1 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f32b3 call 0x117f5550 */
  push32(0x117f32b8u); f_117f5550();
  /* 117f32b8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f32ba jne 0x117f3306 */
  if (!C.zf) goto L_117f3306;
  /* 117f32bc mov esi, esp */
  ESI = (ESP);
  /* 117f32be push 0 */
  push32((uint32_t)(0x0u));
  /* 117f32c0 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 117f32c2 call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f32c8u);
  /* 117f32c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f32cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f32cd call 0x117f5550 */
  push32(0x117f32d2u); f_117f5550();
  /* 117f32d2 mov esi, esp */
  ESI = (ESP);
  /* 117f32d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f32d6 push 0x11822480 */
  push32((uint32_t)(0x11822480u));
  /* 117f32db call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f32e1u);
  /* 117f32e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f32e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f32e6 call 0x117f5550 */
  push32(0x117f32ebu); f_117f5550();
  /* 117f32eb mov esi, esp */
  ESI = (ESP);
  /* 117f32ed push 0 */
  push32((uint32_t)(0x0u));
  /* 117f32ef push 0x11822630 */
  push32((uint32_t)(0x11822630u));
  /* 117f32f4 push 5 */
  push32((uint32_t)(0x5u));
  /* 117f32f6 call dword ptr [0x118254b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b8))), 0x117f32fcu);
  /* 117f32fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f32ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3301 call 0x117f5550 */
  push32(0x117f3306u); f_117f5550();
L_117f3306:;
  /* 117f3306 mov esi, esp */
  ESI = (ESP);
  /* 117f3308 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 117f330a call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f3310u);
  /* 117f3310 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3313 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3315 call 0x117f5550 */
  push32(0x117f331au); f_117f5550();
  /* 117f331a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f331f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3321 je 0x117f33ee */
  if (C.zf) goto L_117f33ee;
  /* 117f3327 mov esi, esp */
  ESI = (ESP);
  /* 117f3329 push 0x11822480 */
  push32((uint32_t)(0x11822480u));
  /* 117f332e call dword ptr [0x118254b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b0))), 0x117f3334u);
  /* 117f3334 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3337 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3339 call 0x117f5550 */
  push32(0x117f333eu); f_117f5550();
  /* 117f333e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3340 jne 0x117f33ee */
  if (!C.zf) goto L_117f33ee;
  /* 117f3346 mov esi, esp */
  ESI = (ESP);
  /* 117f3348 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f334a push 0x118225a8 */
  push32((uint32_t)(0x118225a8u));
  /* 117f334f call dword ptr [0x118254bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254bc))), 0x117f3355u);
  /* 117f3355 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3358 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f335a call 0x117f5550 */
  push32(0x117f335fu); f_117f5550();
  /* 117f335f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3361 jle 0x117f33ee */
  if ((C.zf||C.sf!=C.of)) goto L_117f33ee;
  /* 117f3367 mov esi, esp */
  ESI = (ESP);
  /* 117f3369 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f336b push 0x15 */
  push32((uint32_t)(0x15u));
  /* 117f336d call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f3373u);
  /* 117f3373 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3376 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3378 call 0x117f5550 */
  push32(0x117f337du); f_117f5550();
  /* 117f337d mov esi, esp */
  ESI = (ESP);
  /* 117f337f push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3381 call dword ptr [0x11825484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825484))), 0x117f3387u);
  /* 117f3387 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f338a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f338c call 0x117f5550 */
  push32(0x117f3391u); f_117f5550();
  /* 117f3391 imul eax, eax, 0x4e20 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4e20u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117f3397 mov ecx, 0x186a0 */
  ECX = (0x186a0u);
  /* 117f339c sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f339e mov esi, esp */
  ESI = (ESP);
  /* 117f33a0 push ecx */
  push32((uint32_t)(ECX));
  /* 117f33a1 push 0x1181d3fc */
  push32((uint32_t)(0x1181d3fcu));
  /* 117f33a6 call dword ptr [0x118254c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254c0))), 0x117f33acu);
  /* 117f33ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f33af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f33b1 call 0x117f5550 */
  push32(0x117f33b6u); f_117f5550();
  /* 117f33b6 mov esi, esp */
  ESI = (ESP);
  /* 117f33b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f33ba call dword ptr [0x11825484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825484))), 0x117f33c0u);
  /* 117f33c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f33c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f33c5 call 0x117f5550 */
  push32(0x117f33cau); f_117f5550();
  /* 117f33ca imul eax, eax, 0x4e20 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4e20u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117f33d0 mov edx, 0x186a0 */
  EDX = (0x186a0u);
  /* 117f33d5 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f33d7 mov esi, esp */
  ESI = (ESP);
  /* 117f33d9 push edx */
  push32((uint32_t)(EDX));
  /* 117f33da push 1 */
  push32((uint32_t)(0x1u));
  /* 117f33dc push 0 */
  push32((uint32_t)(0x0u));
  /* 117f33de call dword ptr [0x118254c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254c4))), 0x117f33e4u);
  /* 117f33e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f33e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f33e9 call 0x117f5550 */
  push32(0x117f33eeu); f_117f5550();
L_117f33ee:;
  /* 117f33ee mov esi, esp */
  ESI = (ESP);
  /* 117f33f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 117f33f2 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f33f8u);
  /* 117f33f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f33fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f33fd call 0x117f5550 */
  push32(0x117f3402u); f_117f5550();
  /* 117f3402 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f3407 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3409 jne 0x117f3494 */
  if (!C.zf) goto L_117f3494;
  /* 117f340f mov esi, esp */
  ESI = (ESP);
  /* 117f3411 push 0x11822490 */
  push32((uint32_t)(0x11822490u));
  /* 117f3416 push 0x118225b0 */
  push32((uint32_t)(0x118225b0u));
  /* 117f341b call dword ptr [0x118254ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254ac))), 0x117f3421u);
  /* 117f3421 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3424 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3426 call 0x117f5550 */
  push32(0x117f342bu); f_117f5550();
  /* 117f342b mov esi, eax */
  ESI = (EAX);
  /* 117f342d mov edi, esp */
  EDI = (ESP);
  /* 117f342f push 0x11822490 */
  push32((uint32_t)(0x11822490u));
  /* 117f3434 call dword ptr [0x118254b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b0))), 0x117f343au);
  /* 117f343a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f343d cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f343f call 0x117f5550 */
  push32(0x117f3444u); f_117f5550();
  /* 117f3444 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3446 jge 0x117f3494 */
  if ((C.sf==C.of)) goto L_117f3494;
  /* 117f3448 mov esi, esp */
  ESI = (ESP);
  /* 117f344a push 1 */
  push32((uint32_t)(0x1u));
  /* 117f344c push 4 */
  push32((uint32_t)(0x4u));
  /* 117f344e call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f3454u);
  /* 117f3454 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3457 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3459 call 0x117f5550 */
  push32(0x117f345eu); f_117f5550();
  /* 117f345e mov esi, esp */
  ESI = (ESP);
  /* 117f3460 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3462 push 0x11822490 */
  push32((uint32_t)(0x11822490u));
  /* 117f3467 call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f346du);
  /* 117f346d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3470 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3472 call 0x117f5550 */
  push32(0x117f3477u); f_117f5550();
  /* 117f3477 mov esi, esp */
  ESI = (ESP);
  /* 117f3479 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f347b push 0x41 */
  push32((uint32_t)(0x41u));
  /* 117f347d push 0x11822610 */
  push32((uint32_t)(0x11822610u));
  /* 117f3482 push 5 */
  push32((uint32_t)(0x5u));
  /* 117f3484 call dword ptr [0x118254b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b4))), 0x117f348au);
  /* 117f348a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f348d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f348f call 0x117f5550 */
  push32(0x117f3494u); f_117f5550();
L_117f3494:;
  /* 117f3494 mov esi, esp */
  ESI = (ESP);
  /* 117f3496 push 4 */
  push32((uint32_t)(0x4u));
  /* 117f3498 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f349eu);
  /* 117f349e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f34a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f34a3 call 0x117f5550 */
  push32(0x117f34a8u); f_117f5550();
  /* 117f34a8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f34ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f34af je 0x117f3538 */
  if (C.zf) goto L_117f3538;
  /* 117f34b5 mov esi, esp */
  ESI = (ESP);
  /* 117f34b7 push 0x11822490 */
  push32((uint32_t)(0x11822490u));
  /* 117f34bc push 0x118225b0 */
  push32((uint32_t)(0x118225b0u));
  /* 117f34c1 call dword ptr [0x118254ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254ac))), 0x117f34c7u);
  /* 117f34c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f34ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f34cc call 0x117f5550 */
  push32(0x117f34d1u); f_117f5550();
  /* 117f34d1 mov esi, eax */
  ESI = (EAX);
  /* 117f34d3 mov edi, esp */
  EDI = (ESP);
  /* 117f34d5 push 0x11822490 */
  push32((uint32_t)(0x11822490u));
  /* 117f34da call dword ptr [0x118254b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b0))), 0x117f34e0u);
  /* 117f34e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f34e3 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f34e5 call 0x117f5550 */
  push32(0x117f34eau); f_117f5550();
  /* 117f34ea cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f34ec jne 0x117f3538 */
  if (!C.zf) goto L_117f3538;
  /* 117f34ee mov esi, esp */
  ESI = (ESP);
  /* 117f34f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f34f2 push 4 */
  push32((uint32_t)(0x4u));
  /* 117f34f4 call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f34fau);
  /* 117f34fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f34fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f34ff call 0x117f5550 */
  push32(0x117f3504u); f_117f5550();
  /* 117f3504 mov esi, esp */
  ESI = (ESP);
  /* 117f3506 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3508 push 0x11822490 */
  push32((uint32_t)(0x11822490u));
  /* 117f350d call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f3513u);
  /* 117f3513 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3516 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3518 call 0x117f5550 */
  push32(0x117f351du); f_117f5550();
  /* 117f351d mov esi, esp */
  ESI = (ESP);
  /* 117f351f push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3521 push 0x11822608 */
  push32((uint32_t)(0x11822608u));
  /* 117f3526 push 5 */
  push32((uint32_t)(0x5u));
  /* 117f3528 call dword ptr [0x118254b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b8))), 0x117f352eu);
  /* 117f352e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3531 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3533 call 0x117f5550 */
  push32(0x117f3538u); f_117f5550();
L_117f3538:;
  /* 117f3538 mov esi, esp */
  ESI = (ESP);
  /* 117f353a push 5 */
  push32((uint32_t)(0x5u));
  /* 117f353c call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f3542u);
  /* 117f3542 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3545 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3547 call 0x117f5550 */
  push32(0x117f354cu); f_117f5550();
  /* 117f354c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f3551 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3553 je 0x117f3648 */
  if (C.zf) goto L_117f3648;
  /* 117f3559 mov esi, esp */
  ESI = (ESP);
  /* 117f355b push 0x11822490 */
  push32((uint32_t)(0x11822490u));
  /* 117f3560 call dword ptr [0x118254b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b0))), 0x117f3566u);
  /* 117f3566 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3569 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f356b call 0x117f5550 */
  push32(0x117f3570u); f_117f5550();
  /* 117f3570 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3572 jne 0x117f3648 */
  if (!C.zf) goto L_117f3648;
  /* 117f3578 mov esi, esp */
  ESI = (ESP);
  /* 117f357a push 0 */
  push32((uint32_t)(0x0u));
  /* 117f357c push 0x118225b0 */
  push32((uint32_t)(0x118225b0u));
  /* 117f3581 call dword ptr [0x118254bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254bc))), 0x117f3587u);
  /* 117f3587 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f358a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f358c call 0x117f5550 */
  push32(0x117f3591u); f_117f5550();
  /* 117f3591 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3593 jle 0x117f3648 */
  if ((C.zf||C.sf!=C.of)) goto L_117f3648;
  /* 117f3599 mov esi, esp */
  ESI = (ESP);
  /* 117f359b push 0 */
  push32((uint32_t)(0x0u));
  /* 117f359d push 5 */
  push32((uint32_t)(0x5u));
  /* 117f359f call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f35a5u);
  /* 117f35a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f35a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f35aa call 0x117f5550 */
  push32(0x117f35afu); f_117f5550();
  /* 117f35af mov esi, esp */
  ESI = (ESP);
  /* 117f35b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f35b3 call dword ptr [0x11825484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825484))), 0x117f35b9u);
  /* 117f35b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f35bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f35be call 0x117f5550 */
  push32(0x117f35c3u); f_117f5550();
  /* 117f35c3 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117f35c9 mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 117f35ce sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f35d0 mov esi, esp */
  ESI = (ESP);
  /* 117f35d2 push ecx */
  push32((uint32_t)(ECX));
  /* 117f35d3 push 0x1181d3fc */
  push32((uint32_t)(0x1181d3fcu));
  /* 117f35d8 call dword ptr [0x118254c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254c0))), 0x117f35deu);
  /* 117f35de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f35e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f35e3 call 0x117f5550 */
  push32(0x117f35e8u); f_117f5550();
  /* 117f35e8 mov esi, esp */
  ESI = (ESP);
  /* 117f35ea push 0 */
  push32((uint32_t)(0x0u));
  /* 117f35ec call dword ptr [0x11825484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825484))), 0x117f35f2u);
  /* 117f35f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f35f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f35f7 call 0x117f5550 */
  push32(0x117f35fcu); f_117f5550();
  /* 117f35fc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117f3602 mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 117f3607 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f3609 mov esi, esp */
  ESI = (ESP);
  /* 117f360b push edx */
  push32((uint32_t)(EDX));
  /* 117f360c push 1 */
  push32((uint32_t)(0x1u));
  /* 117f360e push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3610 call dword ptr [0x118254c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254c4))), 0x117f3616u);
  /* 117f3616 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3619 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f361b call 0x117f5550 */
  push32(0x117f3620u); f_117f5550();
  /* 117f3620 mov esi, esp */
  ESI = (ESP);
  /* 117f3622 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 117f3624 call dword ptr [0x1182546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182546c))), 0x117f362au);
  /* 117f362a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f362d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f362f call 0x117f5550 */
  push32(0x117f3634u); f_117f5550();
  /* 117f3634 mov esi, esp */
  ESI = (ESP);
  /* 117f3636 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 117f3638 call dword ptr [0x11825468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825468))), 0x117f363eu);
  /* 117f363e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3641 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3643 call 0x117f5550 */
  push32(0x117f3648u); f_117f5550();
L_117f3648:;
  /* 117f3648 mov esi, esp */
  ESI = (ESP);
  /* 117f364a push 5 */
  push32((uint32_t)(0x5u));
  /* 117f364c call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f3652u);
  /* 117f3652 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3655 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3657 call 0x117f5550 */
  push32(0x117f365cu); f_117f5550();
  /* 117f365c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f3661 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3663 je 0x117f3758 */
  if (C.zf) goto L_117f3758;
  /* 117f3669 mov esi, esp */
  ESI = (ESP);
  /* 117f366b push 0x11822490 */
  push32((uint32_t)(0x11822490u));
  /* 117f3670 call dword ptr [0x118254b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b0))), 0x117f3676u);
  /* 117f3676 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3679 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f367b call 0x117f5550 */
  push32(0x117f3680u); f_117f5550();
  /* 117f3680 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3682 jne 0x117f3758 */
  if (!C.zf) goto L_117f3758;
  /* 117f3688 mov esi, esp */
  ESI = (ESP);
  /* 117f368a push 1 */
  push32((uint32_t)(0x1u));
  /* 117f368c push 0x118225b0 */
  push32((uint32_t)(0x118225b0u));
  /* 117f3691 call dword ptr [0x118254bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254bc))), 0x117f3697u);
  /* 117f3697 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f369a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f369c call 0x117f5550 */
  push32(0x117f36a1u); f_117f5550();
  /* 117f36a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f36a3 jle 0x117f3758 */
  if ((C.zf||C.sf!=C.of)) goto L_117f3758;
  /* 117f36a9 mov esi, esp */
  ESI = (ESP);
  /* 117f36ab push 0 */
  push32((uint32_t)(0x0u));
  /* 117f36ad push 5 */
  push32((uint32_t)(0x5u));
  /* 117f36af call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f36b5u);
  /* 117f36b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f36b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f36ba call 0x117f5550 */
  push32(0x117f36bfu); f_117f5550();
  /* 117f36bf mov esi, esp */
  ESI = (ESP);
  /* 117f36c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f36c3 call dword ptr [0x11825484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825484))), 0x117f36c9u);
  /* 117f36c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f36cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f36ce call 0x117f5550 */
  push32(0x117f36d3u); f_117f5550();
  /* 117f36d3 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117f36d9 mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 117f36de sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f36e0 mov esi, esp */
  ESI = (ESP);
  /* 117f36e2 push ecx */
  push32((uint32_t)(ECX));
  /* 117f36e3 push 0x1181d3f0 */
  push32((uint32_t)(0x1181d3f0u));
  /* 117f36e8 call dword ptr [0x118254c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254c0))), 0x117f36eeu);
  /* 117f36ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f36f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f36f3 call 0x117f5550 */
  push32(0x117f36f8u); f_117f5550();
  /* 117f36f8 mov esi, esp */
  ESI = (ESP);
  /* 117f36fa push 0 */
  push32((uint32_t)(0x0u));
  /* 117f36fc call dword ptr [0x11825484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825484))), 0x117f3702u);
  /* 117f3702 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3705 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3707 call 0x117f5550 */
  push32(0x117f370cu); f_117f5550();
  /* 117f370c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117f3712 mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 117f3717 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f3719 mov esi, esp */
  ESI = (ESP);
  /* 117f371b push edx */
  push32((uint32_t)(EDX));
  /* 117f371c push 1 */
  push32((uint32_t)(0x1u));
  /* 117f371e push 1 */
  push32((uint32_t)(0x1u));
  /* 117f3720 call dword ptr [0x118254c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254c4))), 0x117f3726u);
  /* 117f3726 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3729 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f372b call 0x117f5550 */
  push32(0x117f3730u); f_117f5550();
  /* 117f3730 mov esi, esp */
  ESI = (ESP);
  /* 117f3732 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 117f3734 call dword ptr [0x1182546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182546c))), 0x117f373au);
  /* 117f373a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f373d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f373f call 0x117f5550 */
  push32(0x117f3744u); f_117f5550();
  /* 117f3744 mov esi, esp */
  ESI = (ESP);
  /* 117f3746 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 117f3748 call dword ptr [0x11825468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825468))), 0x117f374eu);
  /* 117f374e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3751 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3753 call 0x117f5550 */
  push32(0x117f3758u); f_117f5550();
L_117f3758:;
  /* 117f3758 mov esi, esp */
  ESI = (ESP);
  /* 117f375a push 1 */
  push32((uint32_t)(0x1u));
  /* 117f375c call dword ptr [0x118254a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a4))), 0x117f3762u);
  /* 117f3762 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3765 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3767 call 0x117f5550 */
  push32(0x117f376cu); f_117f5550();
  /* 117f376c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f3771 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3773 je 0x117f3806 */
  if (C.zf) goto L_117f3806;
  /* 117f3779 mov esi, esp */
  ESI = (ESP);
  /* 117f377b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 117f377d call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f3783u);
  /* 117f3783 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3786 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3788 call 0x117f5550 */
  push32(0x117f378du); f_117f5550();
  /* 117f378d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f3792 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3794 je 0x117f3806 */
  if (C.zf) goto L_117f3806;
  /* 117f3796 mov esi, esp */
  ESI = (ESP);
  /* 117f3798 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f379a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 117f379c call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f37a2u);
  /* 117f37a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f37a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f37a7 call 0x117f5550 */
  push32(0x117f37acu); f_117f5550();
  /* 117f37ac mov esi, esp */
  ESI = (ESP);
  /* 117f37ae push 0x1181d3e4 */
  push32((uint32_t)(0x1181d3e4u));
  /* 117f37b3 call dword ptr [0x118254a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a8))), 0x117f37b9u);
  /* 117f37b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f37bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f37be call 0x117f5550 */
  push32(0x117f37c3u); f_117f5550();
  /* 117f37c3 mov esi, esp */
  ESI = (ESP);
  /* 117f37c5 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 117f37c7 call dword ptr [0x11825468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825468))), 0x117f37cdu);
  /* 117f37cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f37d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f37d2 call 0x117f5550 */
  push32(0x117f37d7u); f_117f5550();
  /* 117f37d7 mov esi, esp */
  ESI = (ESP);
  /* 117f37d9 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 117f37db call dword ptr [0x11825468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825468))), 0x117f37e1u);
  /* 117f37e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f37e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f37e6 call 0x117f5550 */
  push32(0x117f37ebu); f_117f5550();
  /* 117f37eb mov esi, esp */
  ESI = (ESP);
  /* 117f37ed push 1 */
  push32((uint32_t)(0x1u));
  /* 117f37ef push 1 */
  push32((uint32_t)(0x1u));
  /* 117f37f1 push 0x118224a0 */
  push32((uint32_t)(0x118224a0u));
  /* 117f37f6 call dword ptr [0x118254c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254c8))), 0x117f37fcu);
  /* 117f37fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f37ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3801 call 0x117f5550 */
  push32(0x117f3806u); f_117f5550();
L_117f3806:;
  /* 117f3806 mov esi, esp */
  ESI = (ESP);
  /* 117f3808 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 117f380a call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f3810u);
  /* 117f3810 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3813 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3815 call 0x117f5550 */
  push32(0x117f381au); f_117f5550();
  /* 117f381a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f381f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3821 je 0x117f38b3 */
  if (C.zf) goto L_117f38b3;
  /* 117f3827 mov esi, esp */
  ESI = (ESP);
  /* 117f3829 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f382b call dword ptr [0x118254cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254cc))), 0x117f3831u);
  /* 117f3831 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3834 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3836 call 0x117f5550 */
  push32(0x117f383bu); f_117f5550();
  /* 117f383b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f3840 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3842 je 0x117f38b3 */
  if (C.zf) goto L_117f38b3;
  /* 117f3844 mov esi, esp */
  ESI = (ESP);
  /* 117f3846 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3848 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 117f384a call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f3850u);
  /* 117f3850 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3853 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3855 call 0x117f5550 */
  push32(0x117f385au); f_117f5550();
  /* 117f385a mov esi, esp */
  ESI = (ESP);
  /* 117f385c push 3 */
  push32((uint32_t)(0x3u));
  /* 117f385e push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3860 call dword ptr [0x118254d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254d0))), 0x117f3866u);
  /* 117f3866 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3869 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f386b call 0x117f5550 */
  push32(0x117f3870u); f_117f5550();
  /* 117f3870 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3872 jle 0x117f388d */
  if ((C.zf||C.sf!=C.of)) goto L_117f388d;
  /* 117f3874 mov esi, esp */
  ESI = (ESP);
  /* 117f3876 push 0x1181d3dc */
  push32((uint32_t)(0x1181d3dcu));
  /* 117f387b call dword ptr [0x118254a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a8))), 0x117f3881u);
  /* 117f3881 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3884 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3886 call 0x117f5550 */
  push32(0x117f388bu); f_117f5550();
  /* 117f388b jmp 0x117f38a4 */
  goto L_117f38a4;
L_117f388d:;
  /* 117f388d mov esi, esp */
  ESI = (ESP);
  /* 117f388f push 0x1181d3d0 */
  push32((uint32_t)(0x1181d3d0u));
  /* 117f3894 call dword ptr [0x118254a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a8))), 0x117f389au);
  /* 117f389a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f389d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f389f call 0x117f5550 */
  push32(0x117f38a4u); f_117f5550();
L_117f38a4:;
  /* 117f38a4 mov esi, esp */
  ESI = (ESP);
  /* 117f38a6 call dword ptr [0x118254d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254d4))), 0x117f38acu);
  /* 117f38ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f38ae call 0x117f5550 */
  push32(0x117f38b3u); f_117f5550();
L_117f38b3:;
  /* 117f38b3 mov esi, esp */
  ESI = (ESP);
  /* 117f38b5 push 8 */
  push32((uint32_t)(0x8u));
  /* 117f38b7 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f38bdu);
  /* 117f38bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f38c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f38c2 call 0x117f5550 */
  push32(0x117f38c7u); f_117f5550();
  /* 117f38c7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f38cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f38ce je 0x117f3929 */
  if (C.zf) goto L_117f3929;
  /* 117f38d0 mov esi, esp */
  ESI = (ESP);
  /* 117f38d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f38d4 call dword ptr [0x118254cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254cc))), 0x117f38dau);
  /* 117f38da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f38dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f38df call 0x117f5550 */
  push32(0x117f38e4u); f_117f5550();
  /* 117f38e4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f38e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f38eb je 0x117f3929 */
  if (C.zf) goto L_117f3929;
  /* 117f38ed mov esi, esp */
  ESI = (ESP);
  /* 117f38ef push 0 */
  push32((uint32_t)(0x0u));
  /* 117f38f1 push 8 */
  push32((uint32_t)(0x8u));
  /* 117f38f3 call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f38f9u);
  /* 117f38f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f38fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f38fe call 0x117f5550 */
  push32(0x117f3903u); f_117f5550();
  /* 117f3903 mov esi, esp */
  ESI = (ESP);
  /* 117f3905 push 0x1181d3c4 */
  push32((uint32_t)(0x1181d3c4u));
  /* 117f390a call dword ptr [0x118254a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a8))), 0x117f3910u);
  /* 117f3910 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3913 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3915 call 0x117f5550 */
  push32(0x117f391au); f_117f5550();
  /* 117f391a mov esi, esp */
  ESI = (ESP);
  /* 117f391c call dword ptr [0x118254d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254d4))), 0x117f3922u);
  /* 117f3922 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3924 call 0x117f5550 */
  push32(0x117f3929u); f_117f5550();
L_117f3929:;
  /* 117f3929 mov esi, esp */
  ESI = (ESP);
  /* 117f392b push 5 */
  push32((uint32_t)(0x5u));
  /* 117f392d call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f3933u);
  /* 117f3933 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3936 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3938 call 0x117f5550 */
  push32(0x117f393du); f_117f5550();
  /* 117f393d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f3942 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3944 jne 0x117f39bc */
  if (!C.zf) goto L_117f39bc;
  /* 117f3946 mov esi, esp */
  ESI = (ESP);
  /* 117f3948 push 0xf */
  push32((uint32_t)(0xfu));
  /* 117f394a call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f3950u);
  /* 117f3950 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3953 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3955 call 0x117f5550 */
  push32(0x117f395au); f_117f5550();
  /* 117f395a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f395f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3961 jne 0x117f39bc */
  if (!C.zf) goto L_117f39bc;
  /* 117f3963 mov esi, esp */
  ESI = (ESP);
  /* 117f3965 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 117f3967 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f396du);
  /* 117f396d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3970 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3972 call 0x117f5550 */
  push32(0x117f3977u); f_117f5550();
  /* 117f3977 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f397c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f397e je 0x117f39bc */
  if (C.zf) goto L_117f39bc;
  /* 117f3980 mov esi, esp */
  ESI = (ESP);
  /* 117f3982 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3984 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 117f3986 call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f398cu);
  /* 117f398c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f398f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3991 call 0x117f5550 */
  push32(0x117f3996u); f_117f5550();
  /* 117f3996 mov esi, esp */
  ESI = (ESP);
  /* 117f3998 push 0x1181d3bc */
  push32((uint32_t)(0x1181d3bcu));
  /* 117f399d call dword ptr [0x118254a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a8))), 0x117f39a3u);
  /* 117f39a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f39a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f39a8 call 0x117f5550 */
  push32(0x117f39adu); f_117f5550();
  /* 117f39ad mov esi, esp */
  ESI = (ESP);
  /* 117f39af call dword ptr [0x118254d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254d8))), 0x117f39b5u);
  /* 117f39b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f39b7 call 0x117f5550 */
  push32(0x117f39bcu); f_117f5550();
L_117f39bc:;
  /* 117f39bc mov esi, esp */
  ESI = (ESP);
  /* 117f39be push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 117f39c0 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f39c6u);
  /* 117f39c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f39c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f39cb call 0x117f5550 */
  push32(0x117f39d0u); f_117f5550();
  /* 117f39d0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f39d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f39d7 jne 0x117f3c71 */
  if (!C.zf) goto L_117f3c71;
  /* 117f39dd mov esi, esp */
  ESI = (ESP);
  /* 117f39df push 5 */
  push32((uint32_t)(0x5u));
  /* 117f39e1 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f39e7u);
  /* 117f39e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f39ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f39ec call 0x117f5550 */
  push32(0x117f39f1u); f_117f5550();
  /* 117f39f1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f39f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f39f8 je 0x117f3c71 */
  if (C.zf) goto L_117f3c71;
  /* 117f39fe mov esi, esp */
  ESI = (ESP);
  /* 117f3a00 push 0xa */
  push32((uint32_t)(0xau));
  /* 117f3a02 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f3a08u);
  /* 117f3a08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3a0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3a0d call 0x117f5550 */
  push32(0x117f3a12u); f_117f5550();
  /* 117f3a12 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f3a17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3a19 je 0x117f3c71 */
  if (C.zf) goto L_117f3c71;
  /* 117f3a1f mov esi, esp */
  ESI = (ESP);
  /* 117f3a21 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3a23 push 0x11822618 */
  push32((uint32_t)(0x11822618u));
  /* 117f3a28 call dword ptr [0x118254bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254bc))), 0x117f3a2eu);
  /* 117f3a2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3a31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3a33 call 0x117f5550 */
  push32(0x117f3a38u); f_117f5550();
  /* 117f3a38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3a3a jne 0x117f3c71 */
  if (!C.zf) goto L_117f3c71;
  /* 117f3a40 mov esi, esp */
  ESI = (ESP);
  /* 117f3a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3a44 push 0xa */
  push32((uint32_t)(0xau));
  /* 117f3a46 call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f3a4cu);
  /* 117f3a4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3a4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3a51 call 0x117f5550 */
  push32(0x117f3a56u); f_117f5550();
  /* 117f3a56 mov esi, esp */
  ESI = (ESP);
  /* 117f3a58 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 117f3a5d push 2 */
  push32((uint32_t)(0x2u));
  /* 117f3a5f call dword ptr [0x11825490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825490))), 0x117f3a65u);
  /* 117f3a65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3a68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3a6a call 0x117f5550 */
  push32(0x117f3a6fu); f_117f5550();
  /* 117f3a6f mov esi, esp */
  ESI = (ESP);
  /* 117f3a71 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3a73 call dword ptr [0x11825484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825484))), 0x117f3a79u);
  /* 117f3a79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3a7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3a7e call 0x117f5550 */
  push32(0x117f3a83u); f_117f5550();
  /* 117f3a83 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 117f3a86 cmp dword ptr [ebp - 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3a8a ja 0x117f3c0e */
  if ((!C.cf&&!C.zf)) goto L_117f3c0e;
  /* 117f3a90 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117f3a93 jmp dword ptr [eax*4 + 0x117f4928] */
  switch (EAX) {
    case 0: goto L_117f3a9a;
    case 1: goto L_117f3af9;
    case 2: goto L_117f3b58;
    case 3: goto L_117f3bb4;
    case 4: goto L_117f41c7;
    case 5: goto L_117f41e5;
    case 6: goto L_117f4203;
    case 7: goto L_117f4223;
    default: x86_unimpl("switch@0x117f3a93 out of table"); return;
  }
L_117f3a9a:;
  /* 117f3a9a mov esi, esp */
  ESI = (ESP);
  /* 117f3a9c push 0xc3 */
  push32((uint32_t)(0xc3u));
  /* 117f3aa1 push 0x118225d8 */
  push32((uint32_t)(0x118225d8u));
  /* 117f3aa6 push 5 */
  push32((uint32_t)(0x5u));
  /* 117f3aa8 push 0x11822450 */
  push32((uint32_t)(0x11822450u));
  /* 117f3aad push 0x11822470 */
  push32((uint32_t)(0x11822470u));
  /* 117f3ab2 push 0x11822428 */
  push32((uint32_t)(0x11822428u));
  /* 117f3ab7 call dword ptr [0x118254dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254dc))), 0x117f3abdu);
  /* 117f3abd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3ac0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3ac2 call 0x117f5550 */
  push32(0x117f3ac7u); f_117f5550();
  /* 117f3ac7 mov esi, esp */
  ESI = (ESP);
  /* 117f3ac9 push 0xc3 */
  push32((uint32_t)(0xc3u));
  /* 117f3ace push 0x118225d8 */
  push32((uint32_t)(0x118225d8u));
  /* 117f3ad3 push 5 */
  push32((uint32_t)(0x5u));
  /* 117f3ad5 push 0x11822508 */
  push32((uint32_t)(0x11822508u));
  /* 117f3ada push 0x11822470 */
  push32((uint32_t)(0x11822470u));
  /* 117f3adf push 0x11822420 */
  push32((uint32_t)(0x11822420u));
  /* 117f3ae4 call dword ptr [0x118254dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254dc))), 0x117f3aeau);
  /* 117f3aea add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3aed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3aef call 0x117f5550 */
  push32(0x117f3af4u); f_117f5550();
  /* 117f3af4 jmp 0x117f3c0e */
  goto L_117f3c0e;
L_117f3af9:;
  /* 117f3af9 mov esi, esp */
  ESI = (ESP);
  /* 117f3afb push 0xc3 */
  push32((uint32_t)(0xc3u));
  /* 117f3b00 push 0x118225d8 */
  push32((uint32_t)(0x118225d8u));
  /* 117f3b05 push 5 */
  push32((uint32_t)(0x5u));
  /* 117f3b07 push 0x11822450 */
  push32((uint32_t)(0x11822450u));
  /* 117f3b0c push 0x118225f0 */
  push32((uint32_t)(0x118225f0u));
  /* 117f3b11 push 0x11822428 */
  push32((uint32_t)(0x11822428u));
  /* 117f3b16 call dword ptr [0x118254dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254dc))), 0x117f3b1cu);
  /* 117f3b1c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3b1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3b21 call 0x117f5550 */
  push32(0x117f3b26u); f_117f5550();
  /* 117f3b26 mov esi, esp */
  ESI = (ESP);
  /* 117f3b28 push 0xc3 */
  push32((uint32_t)(0xc3u));
  /* 117f3b2d push 0x118225d8 */
  push32((uint32_t)(0x118225d8u));
  /* 117f3b32 push 5 */
  push32((uint32_t)(0x5u));
  /* 117f3b34 push 0x11822508 */
  push32((uint32_t)(0x11822508u));
  /* 117f3b39 push 0x118225f0 */
  push32((uint32_t)(0x118225f0u));
  /* 117f3b3e push 0x11822420 */
  push32((uint32_t)(0x11822420u));
  /* 117f3b43 call dword ptr [0x118254dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254dc))), 0x117f3b49u);
  /* 117f3b49 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3b4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3b4e call 0x117f5550 */
  push32(0x117f3b53u); f_117f5550();
  /* 117f3b53 jmp 0x117f3c0e */
  goto L_117f3c0e;
L_117f3b58:;
  /* 117f3b58 mov esi, esp */
  ESI = (ESP);
  /* 117f3b5a push 0xc3 */
  push32((uint32_t)(0xc3u));
  /* 117f3b5f push 0x118225d8 */
  push32((uint32_t)(0x118225d8u));
  /* 117f3b64 push 5 */
  push32((uint32_t)(0x5u));
  /* 117f3b66 push 0x11822450 */
  push32((uint32_t)(0x11822450u));
  /* 117f3b6b push 0x11822518 */
  push32((uint32_t)(0x11822518u));
  /* 117f3b70 push 0x11822428 */
  push32((uint32_t)(0x11822428u));
  /* 117f3b75 call dword ptr [0x118254dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254dc))), 0x117f3b7bu);
  /* 117f3b7b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3b7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3b80 call 0x117f5550 */
  push32(0x117f3b85u); f_117f5550();
  /* 117f3b85 mov esi, esp */
  ESI = (ESP);
  /* 117f3b87 push 0xc3 */
  push32((uint32_t)(0xc3u));
  /* 117f3b8c push 0x118225d8 */
  push32((uint32_t)(0x118225d8u));
  /* 117f3b91 push 5 */
  push32((uint32_t)(0x5u));
  /* 117f3b93 push 0x11822508 */
  push32((uint32_t)(0x11822508u));
  /* 117f3b98 push 0x11822500 */
  push32((uint32_t)(0x11822500u));
  /* 117f3b9d push 0x11822420 */
  push32((uint32_t)(0x11822420u));
  /* 117f3ba2 call dword ptr [0x118254dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254dc))), 0x117f3ba8u);
  /* 117f3ba8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3bab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3bad call 0x117f5550 */
  push32(0x117f3bb2u); f_117f5550();
  /* 117f3bb2 jmp 0x117f3c0e */
  goto L_117f3c0e;
L_117f3bb4:;
  /* 117f3bb4 mov esi, esp */
  ESI = (ESP);
  /* 117f3bb6 push 0xc3 */
  push32((uint32_t)(0xc3u));
  /* 117f3bbb push 0x118225d8 */
  push32((uint32_t)(0x118225d8u));
  /* 117f3bc0 push 5 */
  push32((uint32_t)(0x5u));
  /* 117f3bc2 push 0x11822450 */
  push32((uint32_t)(0x11822450u));
  /* 117f3bc7 push 0x11822510 */
  push32((uint32_t)(0x11822510u));
  /* 117f3bcc push 0x11822428 */
  push32((uint32_t)(0x11822428u));
  /* 117f3bd1 call dword ptr [0x118254dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254dc))), 0x117f3bd7u);
  /* 117f3bd7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3bda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3bdc call 0x117f5550 */
  push32(0x117f3be1u); f_117f5550();
  /* 117f3be1 mov esi, esp */
  ESI = (ESP);
  /* 117f3be3 push 0xc3 */
  push32((uint32_t)(0xc3u));
  /* 117f3be8 push 0x118225d8 */
  push32((uint32_t)(0x118225d8u));
  /* 117f3bed push 5 */
  push32((uint32_t)(0x5u));
  /* 117f3bef push 0x11822508 */
  push32((uint32_t)(0x11822508u));
  /* 117f3bf4 push 0x11822518 */
  push32((uint32_t)(0x11822518u));
  /* 117f3bf9 push 0x11822420 */
  push32((uint32_t)(0x11822420u));
  /* 117f3bfe call dword ptr [0x118254dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254dc))), 0x117f3c04u);
  /* 117f3c04 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3c07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3c09 call 0x117f5550 */
  push32(0x117f3c0eu); f_117f5550();
L_117f3c0e:;
  /* 117f3c0e mov esi, esp */
  ESI = (ESP);
  /* 117f3c10 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3c12 push 0x11822428 */
  push32((uint32_t)(0x11822428u));
  /* 117f3c17 call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f3c1du);
  /* 117f3c1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3c20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3c22 call 0x117f5550 */
  push32(0x117f3c27u); f_117f5550();
  /* 117f3c27 mov esi, esp */
  ESI = (ESP);
  /* 117f3c29 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f3c2b push 0x11822420 */
  push32((uint32_t)(0x11822420u));
  /* 117f3c30 call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f3c36u);
  /* 117f3c36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3c39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3c3b call 0x117f5550 */
  push32(0x117f3c40u); f_117f5550();
  /* 117f3c40 mov esi, esp */
  ESI = (ESP);
  /* 117f3c42 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3c44 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3c46 push 0x118225c0 */
  push32((uint32_t)(0x118225c0u));
  /* 117f3c4b push 5 */
  push32((uint32_t)(0x5u));
  /* 117f3c4d call dword ptr [0x118254e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254e0))), 0x117f3c53u);
  /* 117f3c53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3c56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3c58 call 0x117f5550 */
  push32(0x117f3c5du); f_117f5550();
  /* 117f3c5d mov esi, esp */
  ESI = (ESP);
  /* 117f3c5f push 5 */
  push32((uint32_t)(0x5u));
  /* 117f3c61 call dword ptr [0x11825498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825498))), 0x117f3c67u);
  /* 117f3c67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3c6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3c6c call 0x117f5550 */
  push32(0x117f3c71u); f_117f5550();
L_117f3c71:;
  /* 117f3c71 mov esi, esp */
  ESI = (ESP);
  /* 117f3c73 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 117f3c75 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f3c7bu);
  /* 117f3c7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3c7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3c80 call 0x117f5550 */
  push32(0x117f3c85u); f_117f5550();
  /* 117f3c85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f3c8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3c8c jne 0x117f3d1b */
  if (!C.zf) goto L_117f3d1b;
  /* 117f3c92 mov esi, esp */
  ESI = (ESP);
  /* 117f3c94 push 3 */
  push32((uint32_t)(0x3u));
  /* 117f3c96 call dword ptr [0x118254e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254e4))), 0x117f3c9cu);
  /* 117f3c9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3c9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3ca1 call 0x117f5550 */
  push32(0x117f3ca6u); f_117f5550();
  /* 117f3ca6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f3cab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3cad je 0x117f3d1b */
  if (C.zf) goto L_117f3d1b;
  /* 117f3caf mov esi, esp */
  ESI = (ESP);
  /* 117f3cb1 push 0x11822428 */
  push32((uint32_t)(0x11822428u));
  /* 117f3cb6 call dword ptr [0x118254b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b0))), 0x117f3cbcu);
  /* 117f3cbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3cbf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3cc1 call 0x117f5550 */
  push32(0x117f3cc6u); f_117f5550();
  /* 117f3cc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3cc8 jne 0x117f3ce5 */
  if (!C.zf) goto L_117f3ce5;
  /* 117f3cca mov esi, esp */
  ESI = (ESP);
  /* 117f3ccc push 0x11822420 */
  push32((uint32_t)(0x11822420u));
  /* 117f3cd1 call dword ptr [0x118254b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b0))), 0x117f3cd7u);
  /* 117f3cd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3cda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3cdc call 0x117f5550 */
  push32(0x117f3ce1u); f_117f5550();
  /* 117f3ce1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3ce3 je 0x117f3d02 */
  if (C.zf) goto L_117f3d02;
L_117f3ce5:;
  /* 117f3ce5 mov esi, esp */
  ESI = (ESP);
  /* 117f3ce7 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f3ce9 call dword ptr [0x118254a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a4))), 0x117f3cefu);
  /* 117f3cef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3cf2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3cf4 call 0x117f5550 */
  push32(0x117f3cf9u); f_117f5550();
  /* 117f3cf9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f3cfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3d00 je 0x117f3d1b */
  if (C.zf) goto L_117f3d1b;
L_117f3d02:;
  /* 117f3d02 mov esi, esp */
  ESI = (ESP);
  /* 117f3d04 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 117f3d09 push 3 */
  push32((uint32_t)(0x3u));
  /* 117f3d0b call dword ptr [0x11825490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825490))), 0x117f3d11u);
  /* 117f3d11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3d14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3d16 call 0x117f5550 */
  push32(0x117f3d1bu); f_117f5550();
L_117f3d1b:;
  /* 117f3d1b mov esi, esp */
  ESI = (ESP);
  /* 117f3d1d push 3 */
  push32((uint32_t)(0x3u));
  /* 117f3d1f call dword ptr [0x118254e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254e8))), 0x117f3d25u);
  /* 117f3d25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3d28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3d2a call 0x117f5550 */
  push32(0x117f3d2fu); f_117f5550();
  /* 117f3d2f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f3d34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3d36 je 0x117f3d76 */
  if (C.zf) goto L_117f3d76;
  /* 117f3d38 mov esi, esp */
  ESI = (ESP);
  /* 117f3d3a push 3 */
  push32((uint32_t)(0x3u));
  /* 117f3d3c call dword ptr [0x118254ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254ec))), 0x117f3d42u);
  /* 117f3d42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3d45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3d47 call 0x117f5550 */
  push32(0x117f3d4cu); f_117f5550();
  /* 117f3d4c mov esi, esp */
  ESI = (ESP);
  /* 117f3d4e push 2 */
  push32((uint32_t)(0x2u));
  /* 117f3d50 call dword ptr [0x118254ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254ec))), 0x117f3d56u);
  /* 117f3d56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3d59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3d5b call 0x117f5550 */
  push32(0x117f3d60u); f_117f5550();
  /* 117f3d60 mov esi, esp */
  ESI = (ESP);
  /* 117f3d62 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f3d64 push 0xa */
  push32((uint32_t)(0xau));
  /* 117f3d66 call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f3d6cu);
  /* 117f3d6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3d6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3d71 call 0x117f5550 */
  push32(0x117f3d76u); f_117f5550();
L_117f3d76:;
  /* 117f3d76 mov esi, esp */
  ESI = (ESP);
  /* 117f3d78 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117f3d7a call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f3d80u);
  /* 117f3d80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3d83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3d85 call 0x117f5550 */
  push32(0x117f3d8au); f_117f5550();
  /* 117f3d8a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f3d8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3d91 je 0x117f3e52 */
  if (C.zf) goto L_117f3e52;
  /* 117f3d97 mov esi, esp */
  ESI = (ESP);
  /* 117f3d99 push 9 */
  push32((uint32_t)(0x9u));
  /* 117f3d9b call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f3da1u);
  /* 117f3da1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3da4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3da6 call 0x117f5550 */
  push32(0x117f3dabu); f_117f5550();
  /* 117f3dab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f3db0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3db2 je 0x117f3e52 */
  if (C.zf) goto L_117f3e52;
  /* 117f3db8 mov esi, esp */
  ESI = (ESP);
  /* 117f3dba push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3dbc push 9 */
  push32((uint32_t)(0x9u));
  /* 117f3dbe call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f3dc4u);
  /* 117f3dc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3dc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3dc9 call 0x117f5550 */
  push32(0x117f3dceu); f_117f5550();
  /* 117f3dce mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117f3dd5 jmp 0x117f3de0 */
  goto L_117f3de0;
L_117f3dd7:;
  /* 117f3dd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f3dda add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3ddd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117f3de0:;
  /* 117f3de0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f3de3 cmp edx, dword ptr [0x11822440] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11822440))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3de9 jge 0x117f3e10 */
  if ((C.sf==C.of)) goto L_117f3e10;
  /* 117f3deb mov esi, esp */
  ESI = (ESP);
  /* 117f3ded push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3def push 0x118223f8 */
  push32((uint32_t)(0x118223f8u));
  /* 117f3df4 push 0x11822570 */
  push32((uint32_t)(0x11822570u));
  /* 117f3df9 push 0x11822640 */
  push32((uint32_t)(0x11822640u));
  /* 117f3dfe call dword ptr [0x118254f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254f0))), 0x117f3e04u);
  /* 117f3e04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3e07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3e09 call 0x117f5550 */
  push32(0x117f3e0eu); f_117f5550();
  /* 117f3e0e jmp 0x117f3dd7 */
  goto L_117f3dd7;
L_117f3e10:;
  /* 117f3e10 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 117f3e17 jmp 0x117f3e22 */
  goto L_117f3e22;
L_117f3e19:;
  /* 117f3e19 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f3e1c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3e1f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_117f3e22:;
  /* 117f3e22 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f3e25 cmp ecx, dword ptr [0x11822478] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11822478))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3e2b jge 0x117f3e52 */
  if ((C.sf==C.of)) goto L_117f3e52;
  /* 117f3e2d mov esi, esp */
  ESI = (ESP);
  /* 117f3e2f push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3e31 push 0x118223f0 */
  push32((uint32_t)(0x118223f0u));
  /* 117f3e36 push 0x11822410 */
  push32((uint32_t)(0x11822410u));
  /* 117f3e3b push 0x11822648 */
  push32((uint32_t)(0x11822648u));
  /* 117f3e40 call dword ptr [0x118254f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254f0))), 0x117f3e46u);
  /* 117f3e46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3e49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3e4b call 0x117f5550 */
  push32(0x117f3e50u); f_117f5550();
  /* 117f3e50 jmp 0x117f3e19 */
  goto L_117f3e19;
L_117f3e52:;
  /* 117f3e52 mov esi, esp */
  ESI = (ESP);
  /* 117f3e54 push 0x11822640 */
  push32((uint32_t)(0x11822640u));
  /* 117f3e59 call dword ptr [0x118254b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b0))), 0x117f3e5fu);
  /* 117f3e5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3e62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3e64 call 0x117f5550 */
  push32(0x117f3e69u); f_117f5550();
  /* 117f3e69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3e6b jle 0x117f3f19 */
  if ((C.zf||C.sf!=C.of)) goto L_117f3f19;
  /* 117f3e71 mov esi, esp */
  ESI = (ESP);
  /* 117f3e73 push 0x11822648 */
  push32((uint32_t)(0x11822648u));
  /* 117f3e78 call dword ptr [0x118254b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b0))), 0x117f3e7eu);
  /* 117f3e7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3e81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3e83 call 0x117f5550 */
  push32(0x117f3e88u); f_117f5550();
  /* 117f3e88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3e8a jle 0x117f3f19 */
  if ((C.zf||C.sf!=C.of)) goto L_117f3f19;
  /* 117f3e90 mov esi, esp */
  ESI = (ESP);
  /* 117f3e92 push 0xd */
  push32((uint32_t)(0xdu));
  /* 117f3e94 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f3e9au);
  /* 117f3e9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3e9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3e9f call 0x117f5550 */
  push32(0x117f3ea4u); f_117f5550();
  /* 117f3ea4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f3ea9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3eab je 0x117f3f19 */
  if (C.zf) goto L_117f3f19;
  /* 117f3ead mov esi, esp */
  ESI = (ESP);
  /* 117f3eaf push 0x11822640 */
  push32((uint32_t)(0x11822640u));
  /* 117f3eb4 call dword ptr [0x118254f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254f4))), 0x117f3ebau);
  /* 117f3eba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3ebd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3ebf call 0x117f5550 */
  push32(0x117f3ec4u); f_117f5550();
  /* 117f3ec4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f3ec9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3ecb je 0x117f3f19 */
  if (C.zf) goto L_117f3f19;
  /* 117f3ecd mov esi, esp */
  ESI = (ESP);
  /* 117f3ecf push 0x11822648 */
  push32((uint32_t)(0x11822648u));
  /* 117f3ed4 call dword ptr [0x118254f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254f4))), 0x117f3edau);
  /* 117f3eda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3edd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3edf call 0x117f5550 */
  push32(0x117f3ee4u); f_117f5550();
  /* 117f3ee4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f3ee9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3eeb je 0x117f3f19 */
  if (C.zf) goto L_117f3f19;
  /* 117f3eed mov esi, esp */
  ESI = (ESP);
  /* 117f3eef push 0x64 */
  push32((uint32_t)(0x64u));
  /* 117f3ef1 push 0xa */
  push32((uint32_t)(0xau));
  /* 117f3ef3 call dword ptr [0x11825490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825490))), 0x117f3ef9u);
  /* 117f3ef9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3efc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3efe call 0x117f5550 */
  push32(0x117f3f03u); f_117f5550();
  /* 117f3f03 mov esi, esp */
  ESI = (ESP);
  /* 117f3f05 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3f07 push 0xd */
  push32((uint32_t)(0xdu));
  /* 117f3f09 call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f3f0fu);
  /* 117f3f0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3f12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3f14 call 0x117f5550 */
  push32(0x117f3f19u); f_117f5550();
L_117f3f19:;
  /* 117f3f19 mov esi, esp */
  ESI = (ESP);
  /* 117f3f1b push 0x11822640 */
  push32((uint32_t)(0x11822640u));
  /* 117f3f20 call dword ptr [0x118254b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b0))), 0x117f3f26u);
  /* 117f3f26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3f29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3f2b call 0x117f5550 */
  push32(0x117f3f30u); f_117f5550();
  /* 117f3f30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3f32 jne 0x117f3f9d */
  if (!C.zf) goto L_117f3f9d;
  /* 117f3f34 mov esi, esp */
  ESI = (ESP);
  /* 117f3f36 push 0xd */
  push32((uint32_t)(0xdu));
  /* 117f3f38 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f3f3eu);
  /* 117f3f3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3f41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3f43 call 0x117f5550 */
  push32(0x117f3f48u); f_117f5550();
  /* 117f3f48 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f3f4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3f4f je 0x117f3f9d */
  if (C.zf) goto L_117f3f9d;
  /* 117f3f51 mov esi, esp */
  ESI = (ESP);
  /* 117f3f53 push 0x11822648 */
  push32((uint32_t)(0x11822648u));
  /* 117f3f58 call dword ptr [0x118254f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254f4))), 0x117f3f5eu);
  /* 117f3f5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3f61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3f63 call 0x117f5550 */
  push32(0x117f3f68u); f_117f5550();
  /* 117f3f68 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f3f6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3f6f je 0x117f3f9d */
  if (C.zf) goto L_117f3f9d;
  /* 117f3f71 mov esi, esp */
  ESI = (ESP);
  /* 117f3f73 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 117f3f75 push 0xa */
  push32((uint32_t)(0xau));
  /* 117f3f77 call dword ptr [0x11825490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825490))), 0x117f3f7du);
  /* 117f3f7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3f80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3f82 call 0x117f5550 */
  push32(0x117f3f87u); f_117f5550();
  /* 117f3f87 mov esi, esp */
  ESI = (ESP);
  /* 117f3f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f3f8b push 0xd */
  push32((uint32_t)(0xdu));
  /* 117f3f8d call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f3f93u);
  /* 117f3f93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3f96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3f98 call 0x117f5550 */
  push32(0x117f3f9du); f_117f5550();
L_117f3f9d:;
  /* 117f3f9d mov esi, esp */
  ESI = (ESP);
  /* 117f3f9f push 0x11822648 */
  push32((uint32_t)(0x11822648u));
  /* 117f3fa4 call dword ptr [0x118254b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b0))), 0x117f3faau);
  /* 117f3faa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3fad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3faf call 0x117f5550 */
  push32(0x117f3fb4u); f_117f5550();
  /* 117f3fb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3fb6 jne 0x117f4021 */
  if (!C.zf) goto L_117f4021;
  /* 117f3fb8 mov esi, esp */
  ESI = (ESP);
  /* 117f3fba push 0xd */
  push32((uint32_t)(0xdu));
  /* 117f3fbc call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f3fc2u);
  /* 117f3fc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3fc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3fc7 call 0x117f5550 */
  push32(0x117f3fccu); f_117f5550();
  /* 117f3fcc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f3fd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3fd3 je 0x117f4021 */
  if (C.zf) goto L_117f4021;
  /* 117f3fd5 mov esi, esp */
  ESI = (ESP);
  /* 117f3fd7 push 0x11822640 */
  push32((uint32_t)(0x11822640u));
  /* 117f3fdc call dword ptr [0x118254f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254f4))), 0x117f3fe2u);
  /* 117f3fe2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f3fe5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f3fe7 call 0x117f5550 */
  push32(0x117f3fecu); f_117f5550();
  /* 117f3fec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f3ff1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f3ff3 je 0x117f4021 */
  if (C.zf) goto L_117f4021;
  /* 117f3ff5 mov esi, esp */
  ESI = (ESP);
  /* 117f3ff7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 117f3ff9 push 0xa */
  push32((uint32_t)(0xau));
  /* 117f3ffb call dword ptr [0x11825490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825490))), 0x117f4001u);
  /* 117f4001 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4004 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4006 call 0x117f5550 */
  push32(0x117f400bu); f_117f5550();
  /* 117f400b mov esi, esp */
  ESI = (ESP);
  /* 117f400d push 0 */
  push32((uint32_t)(0x0u));
  /* 117f400f push 0xd */
  push32((uint32_t)(0xdu));
  /* 117f4011 call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f4017u);
  /* 117f4017 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f401a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f401c call 0x117f5550 */
  push32(0x117f4021u); f_117f5550();
L_117f4021:;
  /* 117f4021 mov esi, esp */
  ESI = (ESP);
  /* 117f4023 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 117f4025 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f402bu);
  /* 117f402b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f402e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4030 call 0x117f5550 */
  push32(0x117f4035u); f_117f5550();
  /* 117f4035 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f403a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f403c jne 0x117f4255 */
  if (!C.zf) goto L_117f4255;
  /* 117f4042 mov esi, esp */
  ESI = (ESP);
  /* 117f4044 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117f4046 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f404cu);
  /* 117f404c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f404f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4051 call 0x117f5550 */
  push32(0x117f4056u); f_117f5550();
  /* 117f4056 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f405b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f405d je 0x117f4255 */
  if (C.zf) goto L_117f4255;
  /* 117f4063 mov esi, esp */
  ESI = (ESP);
  /* 117f4065 push 7 */
  push32((uint32_t)(0x7u));
  /* 117f4067 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f406du);
  /* 117f406d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4070 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4072 call 0x117f5550 */
  push32(0x117f4077u); f_117f5550();
  /* 117f4077 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f407c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f407e je 0x117f4255 */
  if (C.zf) goto L_117f4255;
  /* 117f4084 mov esi, esp */
  ESI = (ESP);
  /* 117f4086 push 0xa */
  push32((uint32_t)(0xau));
  /* 117f4088 call dword ptr [0x118254e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254e8))), 0x117f408eu);
  /* 117f408e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4091 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4093 call 0x117f5550 */
  push32(0x117f4098u); f_117f5550();
  /* 117f4098 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f409d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f409f je 0x117f4255 */
  if (C.zf) goto L_117f4255;
  /* 117f40a5 mov esi, esp */
  ESI = (ESP);
  /* 117f40a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f40a9 push 7 */
  push32((uint32_t)(0x7u));
  /* 117f40ab call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f40b1u);
  /* 117f40b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f40b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f40b6 call 0x117f5550 */
  push32(0x117f40bbu); f_117f5550();
  /* 117f40bb mov esi, esp */
  ESI = (ESP);
  /* 117f40bd push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 117f40c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 117f40c4 call dword ptr [0x11825490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825490))), 0x117f40cau);
  /* 117f40ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f40cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f40cf call 0x117f5550 */
  push32(0x117f40d4u); f_117f5550();
  /* 117f40d4 mov esi, esp */
  ESI = (ESP);
  /* 117f40d6 push 0xa */
  push32((uint32_t)(0xau));
  /* 117f40d8 call dword ptr [0x118254ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254ec))), 0x117f40deu);
  /* 117f40de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f40e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f40e3 call 0x117f5550 */
  push32(0x117f40e8u); f_117f5550();
  /* 117f40e8 mov esi, esp */
  ESI = (ESP);
  /* 117f40ea push 1 */
  push32((uint32_t)(0x1u));
  /* 117f40ec push 0xd */
  push32((uint32_t)(0xdu));
  /* 117f40ee call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f40f4u);
  /* 117f40f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f40f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f40f9 call 0x117f5550 */
  push32(0x117f40feu); f_117f5550();
  /* 117f40fe mov esi, esp */
  ESI = (ESP);
  /* 117f4100 push 0x11822408 */
  push32((uint32_t)(0x11822408u));
  /* 117f4105 push 0x118223f8 */
  push32((uint32_t)(0x118223f8u));
  /* 117f410a call dword ptr [0x118254f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254f8))), 0x117f4110u);
  /* 117f4110 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4113 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4115 call 0x117f5550 */
  push32(0x117f411au); f_117f5550();
  /* 117f411a mov esi, esp */
  ESI = (ESP);
  /* 117f411c push 0x11822400 */
  push32((uint32_t)(0x11822400u));
  /* 117f4121 push 0x118223f0 */
  push32((uint32_t)(0x118223f0u));
  /* 117f4126 call dword ptr [0x118254f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254f8))), 0x117f412cu);
  /* 117f412c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f412f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4131 call 0x117f5550 */
  push32(0x117f4136u); f_117f5550();
  /* 117f4136 mov esi, esp */
  ESI = (ESP);
  /* 117f4138 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f413a push 0x11822408 */
  push32((uint32_t)(0x11822408u));
  /* 117f413f call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f4145u);
  /* 117f4145 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4148 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f414a call 0x117f5550 */
  push32(0x117f414fu); f_117f5550();
  /* 117f414f mov esi, esp */
  ESI = (ESP);
  /* 117f4151 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f4153 push 0x11822400 */
  push32((uint32_t)(0x11822400u));
  /* 117f4158 call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f415eu);
  /* 117f415e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4161 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4163 call 0x117f5550 */
  push32(0x117f4168u); f_117f5550();
  /* 117f4168 mov esi, esp */
  ESI = (ESP);
  /* 117f416a push 0 */
  push32((uint32_t)(0x0u));
  /* 117f416c push 0x82 */
  push32((uint32_t)(0x82u));
  /* 117f4171 push 0x118225c0 */
  push32((uint32_t)(0x118225c0u));
  /* 117f4176 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f4178 call dword ptr [0x118254e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254e0))), 0x117f417eu);
  /* 117f417e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4183 call 0x117f5550 */
  push32(0x117f4188u); f_117f5550();
  /* 117f4188 mov esi, esp */
  ESI = (ESP);
  /* 117f418a push 2 */
  push32((uint32_t)(0x2u));
  /* 117f418c call dword ptr [0x11825498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825498))), 0x117f4192u);
  /* 117f4192 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4195 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4197 call 0x117f5550 */
  push32(0x117f419cu); f_117f5550();
  /* 117f419c mov esi, esp */
  ESI = (ESP);
  /* 117f419e push 0 */
  push32((uint32_t)(0x0u));
  /* 117f41a0 call dword ptr [0x11825484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825484))), 0x117f41a6u);
  /* 117f41a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f41a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f41ab call 0x117f5550 */
  push32(0x117f41b0u); f_117f5550();
  /* 117f41b0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 117f41b3 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f41b7 ja 0x117f423f */
  if ((!C.cf&&!C.zf)) goto L_117f423f;
  /* 117f41bd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117f41c0 jmp dword ptr [edx*4 + 0x117f4938] */
  switch (EDX) {
    case 0: goto L_117f41c7;
    case 1: goto L_117f41e5;
    case 2: goto L_117f4203;
    case 3: goto L_117f4223;
    default: x86_unimpl("switch@0x117f41c0 out of table"); return;
  }
L_117f41c7:;
  /* 117f41c7 mov eax, dword ptr [0x11822440] */
  EAX = (r32((uint32_t)(0x11822440)));
  /* 117f41cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f41cf mov dword ptr [0x11822440], eax */
  w32((uint32_t)(0x11822440), (EAX));
  /* 117f41d4 mov ecx, dword ptr [0x11822478] */
  ECX = (r32((uint32_t)(0x11822478)));
  /* 117f41da add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f41dd mov dword ptr [0x11822478], ecx */
  w32((uint32_t)(0x11822478), (ECX));
  /* 117f41e3 jmp 0x117f423f */
  goto L_117f423f;
L_117f41e5:;
  /* 117f41e5 mov edx, dword ptr [0x11822440] */
  EDX = (r32((uint32_t)(0x11822440)));
  /* 117f41eb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f41ee mov dword ptr [0x11822440], edx */
  w32((uint32_t)(0x11822440), (EDX));
  /* 117f41f4 mov eax, dword ptr [0x11822478] */
  EAX = (r32((uint32_t)(0x11822478)));
  /* 117f41f9 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f41fc mov dword ptr [0x11822478], eax */
  w32((uint32_t)(0x11822478), (EAX));
  /* 117f4201 jmp 0x117f423f */
  goto L_117f423f;
L_117f4203:;
  /* 117f4203 mov ecx, dword ptr [0x11822440] */
  ECX = (r32((uint32_t)(0x11822440)));
  /* 117f4209 add ecx, 5 */
  { uint32_t _a=(ECX),_b=(0x5u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f420c mov dword ptr [0x11822440], ecx */
  w32((uint32_t)(0x11822440), (ECX));
  /* 117f4212 mov edx, dword ptr [0x11822478] */
  EDX = (r32((uint32_t)(0x11822478)));
  /* 117f4218 add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f421b mov dword ptr [0x11822478], edx */
  w32((uint32_t)(0x11822478), (EDX));
  /* 117f4221 jmp 0x117f423f */
  goto L_117f423f;
L_117f4223:;
  /* 117f4223 mov eax, dword ptr [0x11822440] */
  EAX = (r32((uint32_t)(0x11822440)));
  /* 117f4228 add eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f422b mov dword ptr [0x11822440], eax */
  w32((uint32_t)(0x11822440), (EAX));
  /* 117f4230 mov ecx, dword ptr [0x11822478] */
  ECX = (r32((uint32_t)(0x11822478)));
  /* 117f4236 add ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4239 mov dword ptr [0x11822478], ecx */
  w32((uint32_t)(0x11822478), (ECX));
L_117f423f:;
  /* 117f423f mov esi, esp */
  ESI = (ESP);
  /* 117f4241 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f4243 push 9 */
  push32((uint32_t)(0x9u));
  /* 117f4245 call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f424bu);
  /* 117f424b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f424e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4250 call 0x117f5550 */
  push32(0x117f4255u); f_117f5550();
L_117f4255:;
  /* 117f4255 mov esi, esp */
  ESI = (ESP);
  /* 117f4257 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 117f4259 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f425fu);
  /* 117f425f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4262 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4264 call 0x117f5550 */
  push32(0x117f4269u); f_117f5550();
  /* 117f4269 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f426e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f4270 jne 0x117f4310 */
  if (!C.zf) goto L_117f4310;
  /* 117f4276 mov esi, esp */
  ESI = (ESP);
  /* 117f4278 push 7 */
  push32((uint32_t)(0x7u));
  /* 117f427a call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f4280u);
  /* 117f4280 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4283 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4285 call 0x117f5550 */
  push32(0x117f428au); f_117f5550();
  /* 117f428a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f428f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f4291 jne 0x117f4310 */
  if (!C.zf) goto L_117f4310;
  /* 117f4293 mov esi, esp */
  ESI = (ESP);
  /* 117f4295 push 0x11822408 */
  push32((uint32_t)(0x11822408u));
  /* 117f429a call dword ptr [0x118254b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b0))), 0x117f42a0u);
  /* 117f42a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f42a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f42a5 call 0x117f5550 */
  push32(0x117f42aau); f_117f5550();
  /* 117f42aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f42ac jne 0x117f42c9 */
  if (!C.zf) goto L_117f42c9;
  /* 117f42ae mov esi, esp */
  ESI = (ESP);
  /* 117f42b0 push 0x11822400 */
  push32((uint32_t)(0x11822400u));
  /* 117f42b5 call dword ptr [0x118254b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b0))), 0x117f42bbu);
  /* 117f42bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f42be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f42c0 call 0x117f5550 */
  push32(0x117f42c5u); f_117f5550();
  /* 117f42c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f42c7 je 0x117f42e6 */
  if (C.zf) goto L_117f42e6;
L_117f42c9:;
  /* 117f42c9 mov esi, esp */
  ESI = (ESP);
  /* 117f42cb push 9 */
  push32((uint32_t)(0x9u));
  /* 117f42cd call dword ptr [0x118254a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a4))), 0x117f42d3u);
  /* 117f42d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f42d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f42d8 call 0x117f5550 */
  push32(0x117f42ddu); f_117f5550();
  /* 117f42dd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f42e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f42e4 je 0x117f4310 */
  if (C.zf) goto L_117f4310;
L_117f42e6:;
  /* 117f42e6 mov esi, esp */
  ESI = (ESP);
  /* 117f42e8 push 9 */
  push32((uint32_t)(0x9u));
  /* 117f42ea call dword ptr [0x118254ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254ec))), 0x117f42f0u);
  /* 117f42f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f42f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f42f5 call 0x117f5550 */
  push32(0x117f42fau); f_117f5550();
  /* 117f42fa mov esi, esp */
  ESI = (ESP);
  /* 117f42fc push 1 */
  push32((uint32_t)(0x1u));
  /* 117f42fe push 7 */
  push32((uint32_t)(0x7u));
  /* 117f4300 call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f4306u);
  /* 117f4306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f430b call 0x117f5550 */
  push32(0x117f4310u); f_117f5550();
L_117f4310:;
  /* 117f4310 mov esi, esp */
  ESI = (ESP);
  /* 117f4312 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 117f4314 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f431au);
  /* 117f431a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f431d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f431f call 0x117f5550 */
  push32(0x117f4324u); f_117f5550();
  /* 117f4324 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f4329 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f432b je 0x117f4377 */
  if (C.zf) goto L_117f4377;
  /* 117f432d mov esi, esp */
  ESI = (ESP);
  /* 117f432f push 0 */
  push32((uint32_t)(0x0u));
  /* 117f4331 push 0x118224f0 */
  push32((uint32_t)(0x118224f0u));
  /* 117f4336 call dword ptr [0x118254fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254fc))), 0x117f433cu);
  /* 117f433c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f433f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4341 call 0x117f5550 */
  push32(0x117f4346u); f_117f5550();
  /* 117f4346 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f4348 jne 0x117f4377 */
  if (!C.zf) goto L_117f4377;
  /* 117f434a mov esi, esp */
  ESI = (ESP);
  /* 117f434c push 0 */
  push32((uint32_t)(0x0u));
  /* 117f434e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 117f4350 call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f4356u);
  /* 117f4356 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4359 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f435b call 0x117f5550 */
  push32(0x117f4360u); f_117f5550();
  /* 117f4360 mov esi, esp */
  ESI = (ESP);
  /* 117f4362 push 0x1181d3b0 */
  push32((uint32_t)(0x1181d3b0u));
  /* 117f4367 call dword ptr [0x118254a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a8))), 0x117f436du);
  /* 117f436d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4370 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4372 call 0x117f5550 */
  push32(0x117f4377u); f_117f5550();
L_117f4377:;
  /* 117f4377 mov esi, esp */
  ESI = (ESP);
  /* 117f4379 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 117f437b call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f4381u);
  /* 117f4381 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4384 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4386 call 0x117f5550 */
  push32(0x117f438bu); f_117f5550();
  /* 117f438b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f4390 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f4392 jne 0x117f44f0 */
  if (!C.zf) goto L_117f44f0;
  /* 117f4398 mov esi, esp */
  ESI = (ESP);
  /* 117f439a push 0x13 */
  push32((uint32_t)(0x13u));
  /* 117f439c call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f43a2u);
  /* 117f43a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f43a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f43a7 call 0x117f5550 */
  push32(0x117f43acu); f_117f5550();
  /* 117f43ac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f43b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f43b3 je 0x117f44f0 */
  if (C.zf) goto L_117f44f0;
  /* 117f43b9 mov esi, esp */
  ESI = (ESP);
  /* 117f43bb push 0x11822498 */
  push32((uint32_t)(0x11822498u));
  /* 117f43c0 push 0x118224a0 */
  push32((uint32_t)(0x118224a0u));
  /* 117f43c5 call dword ptr [0x118254ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254ac))), 0x117f43cbu);
  /* 117f43cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f43ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f43d0 call 0x117f5550 */
  push32(0x117f43d5u); f_117f5550();
  /* 117f43d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f43d7 jle 0x117f44f0 */
  if ((C.zf||C.sf!=C.of)) goto L_117f44f0;
  /* 117f43dd mov esi, esp */
  ESI = (ESP);
  /* 117f43df push 0 */
  push32((uint32_t)(0x0u));
  /* 117f43e1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 117f43e3 call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f43e9u);
  /* 117f43e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f43ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f43ee call 0x117f5550 */
  push32(0x117f43f3u); f_117f5550();
  /* 117f43f3 mov esi, esp */
  ESI = (ESP);
  /* 117f43f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f43f7 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 117f43f9 call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f43ffu);
  /* 117f43ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4402 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4404 call 0x117f5550 */
  push32(0x117f4409u); f_117f5550();
  /* 117f4409 mov esi, esp */
  ESI = (ESP);
  /* 117f440b push 0x1181d3a4 */
  push32((uint32_t)(0x1181d3a4u));
  /* 117f4410 call dword ptr [0x118254a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a8))), 0x117f4416u);
  /* 117f4416 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4419 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f441b call 0x117f5550 */
  push32(0x117f4420u); f_117f5550();
  /* 117f4420 mov esi, esp */
  ESI = (ESP);
  /* 117f4422 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 117f4424 call dword ptr [0x1182546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182546c))), 0x117f442au);
  /* 117f442a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f442d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f442f call 0x117f5550 */
  push32(0x117f4434u); f_117f5550();
  /* 117f4434 mov esi, esp */
  ESI = (ESP);
  /* 117f4436 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 117f4438 call dword ptr [0x11825468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825468))), 0x117f443eu);
  /* 117f443e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4441 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4443 call 0x117f5550 */
  push32(0x117f4448u); f_117f5550();
  /* 117f4448 mov esi, esp */
  ESI = (ESP);
  /* 117f444a push 0 */
  push32((uint32_t)(0x0u));
  /* 117f444c push 0x11822498 */
  push32((uint32_t)(0x11822498u));
  /* 117f4451 call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f4457u);
  /* 117f4457 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f445a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f445c call 0x117f5550 */
  push32(0x117f4461u); f_117f5550();
  /* 117f4461 mov esi, esp */
  ESI = (ESP);
  /* 117f4463 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f4465 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f4467 call dword ptr [0x11825500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825500))), 0x117f446du);
  /* 117f446d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4470 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4472 call 0x117f5550 */
  push32(0x117f4477u); f_117f5550();
  /* 117f4477 mov esi, esp */
  ESI = (ESP);
  /* 117f4479 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f447b call dword ptr [0x11825498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825498))), 0x117f4481u);
  /* 117f4481 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4484 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4486 call 0x117f5550 */
  push32(0x117f448bu); f_117f5550();
  /* 117f448b mov esi, esp */
  ESI = (ESP);
  /* 117f448d push 0 */
  push32((uint32_t)(0x0u));
  /* 117f448f push 0x118224d0 */
  push32((uint32_t)(0x118224d0u));
  /* 117f4494 call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f449au);
  /* 117f449a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f449d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f449f call 0x117f5550 */
  push32(0x117f44a4u); f_117f5550();
  /* 117f44a4 mov esi, esp */
  ESI = (ESP);
  /* 117f44a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f44a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f44aa call dword ptr [0x11825500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825500))), 0x117f44b0u);
  /* 117f44b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f44b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f44b5 call 0x117f5550 */
  push32(0x117f44bau); f_117f5550();
  /* 117f44ba mov esi, esp */
  ESI = (ESP);
  /* 117f44bc push 0 */
  push32((uint32_t)(0x0u));
  /* 117f44be call dword ptr [0x11825484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825484))), 0x117f44c4u);
  /* 117f44c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f44c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f44c9 call 0x117f5550 */
  push32(0x117f44ceu); f_117f5550();
  /* 117f44ce imul eax, eax, 0xc8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xc8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117f44d4 mov edx, 0x3e8 */
  EDX = (0x3e8u);
  /* 117f44d9 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f44db mov esi, esp */
  ESI = (ESP);
  /* 117f44dd push edx */
  push32((uint32_t)(EDX));
  /* 117f44de push 8 */
  push32((uint32_t)(0x8u));
  /* 117f44e0 call dword ptr [0x11825490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825490))), 0x117f44e6u);
  /* 117f44e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f44e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f44eb call 0x117f5550 */
  push32(0x117f44f0u); f_117f5550();
L_117f44f0:;
  /* 117f44f0 mov esi, esp */
  ESI = (ESP);
  /* 117f44f2 push 8 */
  push32((uint32_t)(0x8u));
  /* 117f44f4 call dword ptr [0x118254a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a4))), 0x117f44fau);
  /* 117f44fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f44fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f44ff call 0x117f5550 */
  push32(0x117f4504u); f_117f5550();
  /* 117f4504 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f4509 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f450b je 0x117f45c0 */
  if (C.zf) goto L_117f45c0;
  /* 117f4511 mov esi, esp */
  ESI = (ESP);
  /* 117f4513 push 0x118224d0 */
  push32((uint32_t)(0x118224d0u));
  /* 117f4518 call dword ptr [0x118254b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254b0))), 0x117f451eu);
  /* 117f451e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4521 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4523 call 0x117f5550 */
  push32(0x117f4528u); f_117f5550();
  /* 117f4528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f452a jle 0x117f45c0 */
  if ((C.zf||C.sf!=C.of)) goto L_117f45c0;
  /* 117f4530 mov esi, esp */
  ESI = (ESP);
  /* 117f4532 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117f4534 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f453au);
  /* 117f453a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f453d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f453f call 0x117f5550 */
  push32(0x117f4544u); f_117f5550();
  /* 117f4544 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f4549 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f454b je 0x117f45c0 */
  if (C.zf) goto L_117f45c0;
  /* 117f454d mov esi, esp */
  ESI = (ESP);
  /* 117f454f push 0 */
  push32((uint32_t)(0x0u));
  /* 117f4551 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117f4553 call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f4559u);
  /* 117f4559 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f455c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f455e call 0x117f5550 */
  push32(0x117f4563u); f_117f5550();
  /* 117f4563 mov esi, esp */
  ESI = (ESP);
  /* 117f4565 push 0x1181d398 */
  push32((uint32_t)(0x1181d398u));
  /* 117f456a call dword ptr [0x118254a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a8))), 0x117f4570u);
  /* 117f4570 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4573 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4575 call 0x117f5550 */
  push32(0x117f457au); f_117f5550();
  /* 117f457a mov esi, esp */
  ESI = (ESP);
  /* 117f457c push 0 */
  push32((uint32_t)(0x0u));
  /* 117f457e push 0x118224d0 */
  push32((uint32_t)(0x118224d0u));
  /* 117f4583 call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f4589u);
  /* 117f4589 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f458c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f458e call 0x117f5550 */
  push32(0x117f4593u); f_117f5550();
  /* 117f4593 mov esi, esp */
  ESI = (ESP);
  /* 117f4595 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f4597 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f4599 call dword ptr [0x11825500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825500))), 0x117f459fu);
  /* 117f459f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f45a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f45a4 call 0x117f5550 */
  push32(0x117f45a9u); f_117f5550();
  /* 117f45a9 mov esi, esp */
  ESI = (ESP);
  /* 117f45ab push 0x118224d0 */
  push32((uint32_t)(0x118224d0u));
  /* 117f45b0 call dword ptr [0x11825474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825474))), 0x117f45b6u);
  /* 117f45b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f45b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f45bb call 0x117f5550 */
  push32(0x117f45c0u); f_117f5550();
L_117f45c0:;
  /* 117f45c0 mov esi, esp */
  ESI = (ESP);
  /* 117f45c2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 117f45c4 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f45cau);
  /* 117f45ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f45cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f45cf call 0x117f5550 */
  push32(0x117f45d4u); f_117f5550();
  /* 117f45d4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f45d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f45db je 0x117f4627 */
  if (C.zf) goto L_117f4627;
  /* 117f45dd mov esi, esp */
  ESI = (ESP);
  /* 117f45df push 2 */
  push32((uint32_t)(0x2u));
  /* 117f45e1 call dword ptr [0x118254cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254cc))), 0x117f45e7u);
  /* 117f45e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f45ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f45ec call 0x117f5550 */
  push32(0x117f45f1u); f_117f5550();
  /* 117f45f1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f45f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f45f8 je 0x117f4627 */
  if (C.zf) goto L_117f4627;
  /* 117f45fa mov esi, esp */
  ESI = (ESP);
  /* 117f45fc push 0 */
  push32((uint32_t)(0x0u));
  /* 117f45fe push 0xb */
  push32((uint32_t)(0xbu));
  /* 117f4600 call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f4606u);
  /* 117f4606 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4609 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f460b call 0x117f5550 */
  push32(0x117f4610u); f_117f5550();
  /* 117f4610 mov esi, esp */
  ESI = (ESP);
  /* 117f4612 push 0x1181d38c */
  push32((uint32_t)(0x1181d38cu));
  /* 117f4617 call dword ptr [0x118254a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a8))), 0x117f461du);
  /* 117f461d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4620 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4622 call 0x117f5550 */
  push32(0x117f4627u); f_117f5550();
L_117f4627:;
  /* 117f4627 mov esi, esp */
  ESI = (ESP);
  /* 117f4629 push 0xc */
  push32((uint32_t)(0xcu));
  /* 117f462b call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f4631u);
  /* 117f4631 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4634 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4636 call 0x117f5550 */
  push32(0x117f463bu); f_117f5550();
  /* 117f463b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f4640 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f4642 je 0x117f468e */
  if (C.zf) goto L_117f468e;
  /* 117f4644 mov esi, esp */
  ESI = (ESP);
  /* 117f4646 push 3 */
  push32((uint32_t)(0x3u));
  /* 117f4648 call dword ptr [0x118254cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254cc))), 0x117f464eu);
  /* 117f464e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4651 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4653 call 0x117f5550 */
  push32(0x117f4658u); f_117f5550();
  /* 117f4658 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f465d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f465f je 0x117f468e */
  if (C.zf) goto L_117f468e;
  /* 117f4661 mov esi, esp */
  ESI = (ESP);
  /* 117f4663 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f4665 push 0xc */
  push32((uint32_t)(0xcu));
  /* 117f4667 call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f466du);
  /* 117f466d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4670 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4672 call 0x117f5550 */
  push32(0x117f4677u); f_117f5550();
  /* 117f4677 mov esi, esp */
  ESI = (ESP);
  /* 117f4679 push 0x1181d380 */
  push32((uint32_t)(0x1181d380u));
  /* 117f467e call dword ptr [0x118254a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a8))), 0x117f4684u);
  /* 117f4684 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4687 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4689 call 0x117f5550 */
  push32(0x117f468eu); f_117f5550();
L_117f468e:;
  /* 117f468e mov esi, esp */
  ESI = (ESP);
  /* 117f4690 push 0xf */
  push32((uint32_t)(0xfu));
  /* 117f4692 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f4698u);
  /* 117f4698 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f469b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f469d call 0x117f5550 */
  push32(0x117f46a2u); f_117f5550();
  /* 117f46a2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f46a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f46a9 je 0x117f473e */
  if (C.zf) goto L_117f473e;
  /* 117f46af mov esi, esp */
  ESI = (ESP);
  /* 117f46b1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 117f46b3 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f46b9u);
  /* 117f46b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f46bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f46be call 0x117f5550 */
  push32(0x117f46c3u); f_117f5550();
  /* 117f46c3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f46c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f46ca jne 0x117f473e */
  if (!C.zf) goto L_117f473e;
  /* 117f46cc mov esi, esp */
  ESI = (ESP);
  /* 117f46ce push 0xc */
  push32((uint32_t)(0xcu));
  /* 117f46d0 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f46d6u);
  /* 117f46d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f46d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f46db call 0x117f5550 */
  push32(0x117f46e0u); f_117f5550();
  /* 117f46e0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f46e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f46e7 jne 0x117f473e */
  if (!C.zf) goto L_117f473e;
  /* 117f46e9 mov esi, esp */
  ESI = (ESP);
  /* 117f46eb push 0 */
  push32((uint32_t)(0x0u));
  /* 117f46ed push 0xf */
  push32((uint32_t)(0xfu));
  /* 117f46ef call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f46f5u);
  /* 117f46f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f46f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f46fa call 0x117f5550 */
  push32(0x117f46ffu); f_117f5550();
  /* 117f46ff mov esi, esp */
  ESI = (ESP);
  /* 117f4701 push 0x1181d378 */
  push32((uint32_t)(0x1181d378u));
  /* 117f4706 call dword ptr [0x118254a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a8))), 0x117f470cu);
  /* 117f470c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f470f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4711 call 0x117f5550 */
  push32(0x117f4716u); f_117f5550();
  /* 117f4716 mov esi, esp */
  ESI = (ESP);
  /* 117f4718 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 117f471a call dword ptr [0x1182546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182546c))), 0x117f4720u);
  /* 117f4720 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4723 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4725 call 0x117f5550 */
  push32(0x117f472au); f_117f5550();
  /* 117f472a mov esi, esp */
  ESI = (ESP);
  /* 117f472c push 0x43 */
  push32((uint32_t)(0x43u));
  /* 117f472e call dword ptr [0x11825468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825468))), 0x117f4734u);
  /* 117f4734 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4737 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4739 call 0x117f5550 */
  push32(0x117f473eu); f_117f5550();
L_117f473e:;
  /* 117f473e mov esi, esp */
  ESI = (ESP);
  /* 117f4740 push 7 */
  push32((uint32_t)(0x7u));
  /* 117f4742 call dword ptr [0x118254a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a4))), 0x117f4748u);
  /* 117f4748 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f474b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f474d call 0x117f5550 */
  push32(0x117f4752u); f_117f5550();
  /* 117f4752 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f4757 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f4759 je 0x117f4907 */
  if (C.zf) goto L_117f4907;
  /* 117f475f mov esi, esp */
  ESI = (ESP);
  /* 117f4761 push 0xb */
  push32((uint32_t)(0xbu));
  /* 117f4763 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f4769u);
  /* 117f4769 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f476c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f476e call 0x117f5550 */
  push32(0x117f4773u); f_117f5550();
  /* 117f4773 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f4778 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f477a je 0x117f4907 */
  if (C.zf) goto L_117f4907;
  /* 117f4780 mov esi, esp */
  ESI = (ESP);
  /* 117f4782 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117f4784 call dword ptr [0x11825460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825460))), 0x117f478au);
  /* 117f478a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f478d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f478f call 0x117f5550 */
  push32(0x117f4794u); f_117f5550();
  /* 117f4794 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f4799 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f479b je 0x117f4907 */
  if (C.zf) goto L_117f4907;
  /* 117f47a1 mov esi, esp */
  ESI = (ESP);
  /* 117f47a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f47a5 push 0x11822468 */
  push32((uint32_t)(0x11822468u));
  /* 117f47aa call dword ptr [0x118254fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254fc))), 0x117f47b0u);
  /* 117f47b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f47b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f47b5 call 0x117f5550 */
  push32(0x117f47bau); f_117f5550();
  /* 117f47ba cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f47bd jle 0x117f4907 */
  if ((C.zf||C.sf!=C.of)) goto L_117f4907;
  /* 117f47c3 mov esi, esp */
  ESI = (ESP);
  /* 117f47c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f47c7 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117f47c9 call dword ptr [0x11825464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825464))), 0x117f47cfu);
  /* 117f47cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f47d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f47d4 call 0x117f5550 */
  push32(0x117f47d9u); f_117f5550();
  /* 117f47d9 mov esi, esp */
  ESI = (ESP);
  /* 117f47db push 0x1181d36c */
  push32((uint32_t)(0x1181d36cu));
  /* 117f47e0 call dword ptr [0x118254a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a8))), 0x117f47e6u);
  /* 117f47e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f47e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f47eb call 0x117f5550 */
  push32(0x117f47f0u); f_117f5550();
  /* 117f47f0 mov esi, esp */
  ESI = (ESP);
  /* 117f47f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f47f4 push 0x11822548 */
  push32((uint32_t)(0x11822548u));
  /* 117f47f9 call dword ptr [0x1182547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182547c))), 0x117f47ffu);
  /* 117f47ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4802 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4804 call 0x117f5550 */
  push32(0x117f4809u); f_117f5550();
  /* 117f4809 mov esi, esp */
  ESI = (ESP);
  /* 117f480b push 2 */
  push32((uint32_t)(0x2u));
  /* 117f480d call dword ptr [0x1182548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182548c))), 0x117f4813u);
  /* 117f4813 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4816 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4818 call 0x117f5550 */
  push32(0x117f481du); f_117f5550();
  /* 117f481d mov esi, esp */
  ESI = (ESP);
  /* 117f481f push 2 */
  push32((uint32_t)(0x2u));
  /* 117f4821 call dword ptr [0x11825498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825498))), 0x117f4827u);
  /* 117f4827 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f482a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f482c call 0x117f5550 */
  push32(0x117f4831u); f_117f5550();
  /* 117f4831 mov esi, esp */
  ESI = (ESP);
  /* 117f4833 push 0x249f0 */
  push32((uint32_t)(0x249f0u));
  /* 117f4838 push 3 */
  push32((uint32_t)(0x3u));
  /* 117f483a push 2 */
  push32((uint32_t)(0x2u));
  /* 117f483c call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f4842u);
  /* 117f4842 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4845 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4847 call 0x117f5550 */
  push32(0x117f484cu); f_117f5550();
  /* 117f484c mov esi, esp */
  ESI = (ESP);
  /* 117f484e push 0x249f0 */
  push32((uint32_t)(0x249f0u));
  /* 117f4853 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f4855 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f4857 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f485du);
  /* 117f485d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4860 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4862 call 0x117f5550 */
  push32(0x117f4867u); f_117f5550();
  /* 117f4867 mov esi, esp */
  ESI = (ESP);
  /* 117f4869 push 0x249f0 */
  push32((uint32_t)(0x249f0u));
  /* 117f486e push 2 */
  push32((uint32_t)(0x2u));
  /* 117f4870 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f4872 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f4878u);
  /* 117f4878 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f487b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f487d call 0x117f5550 */
  push32(0x117f4882u); f_117f5550();
  /* 117f4882 mov esi, esp */
  ESI = (ESP);
  /* 117f4884 push 0x249f0 */
  push32((uint32_t)(0x249f0u));
  /* 117f4889 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f488b push 2 */
  push32((uint32_t)(0x2u));
  /* 117f488d call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f4893u);
  /* 117f4893 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4896 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4898 call 0x117f5550 */
  push32(0x117f489du); f_117f5550();
  /* 117f489d mov esi, esp */
  ESI = (ESP);
  /* 117f489f push 0x249f0 */
  push32((uint32_t)(0x249f0u));
  /* 117f48a4 push 5 */
  push32((uint32_t)(0x5u));
  /* 117f48a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f48a8 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f48aeu);
  /* 117f48ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f48b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f48b3 call 0x117f5550 */
  push32(0x117f48b8u); f_117f5550();
  /* 117f48b8 mov esi, esp */
  ESI = (ESP);
  /* 117f48ba push 0x249f0 */
  push32((uint32_t)(0x249f0u));
  /* 117f48bf push 4 */
  push32((uint32_t)(0x4u));
  /* 117f48c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f48c3 call dword ptr [0x11825488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825488))), 0x117f48c9u);
  /* 117f48c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f48cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f48ce call 0x117f5550 */
  push32(0x117f48d3u); f_117f5550();
  /* 117f48d3 mov esi, esp */
  ESI = (ESP);
  /* 117f48d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f48d7 call dword ptr [0x11825484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825484))), 0x117f48ddu);
  /* 117f48dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f48e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f48e2 call 0x117f5550 */
  push32(0x117f48e7u); f_117f5550();
  /* 117f48e7 mov esi, esp */
  ESI = (ESP);
  /* 117f48e9 push eax */
  push32((uint32_t)(EAX));
  /* 117f48ea push 2 */
  push32((uint32_t)(0x2u));
  /* 117f48ec push 1 */
  push32((uint32_t)(0x1u));
  /* 117f48ee push 1 */
  push32((uint32_t)(0x1u));
  /* 117f48f0 push 0x1181d360 */
  push32((uint32_t)(0x1181d360u));
  /* 117f48f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f48f7 call dword ptr [0x118254a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118254a0))), 0x117f48fdu);
  /* 117f48fd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f4900 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f4902 call 0x117f5550 */
  push32(0x117f4907u); f_117f5550();
L_117f4907:;
  /* 117f4907 pop edi */
  EDI = (pop32());
  /* 117f4908 pop esi */
  ESI = (pop32());
  /* 117f4909 pop ebx */
  EBX = (pop32());
  /* 117f490a add esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f490d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f490f call 0x117f5550 */
  push32(0x117f4914u); f_117f5550();
  /* 117f4914 mov esp, ebp */
  ESP = (EBP);
  /* 117f4916 pop ebp */
  EBP = (pop32());
  /* 117f4917 ret  */
  ESPCHK(0x117f1e10u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x117f5550 (56 bytes, 28 insns) */
void f_117f5550(void) {
  FTRACE(0x117f5550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f5550 jne 0x117f5553 */
  if (!C.zf) goto L_117f5553;
  /* 117f5552 ret  */
  ESPCHK(0x117f5550u, _esp0);
  ESP += 4; return;
L_117f5553:;
  /* 117f5553 push ebp */
  push32((uint32_t)(EBP));
  /* 117f5554 mov ebp, esp */
  EBP = (ESP);
  /* 117f5556 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f5559 push eax */
  push32((uint32_t)(EAX));
  /* 117f555a push edx */
  push32((uint32_t)(EDX));
  /* 117f555b push ebx */
  push32((uint32_t)(EBX));
  /* 117f555c push esi */
  push32((uint32_t)(ESI));
  /* 117f555d push edi */
  push32((uint32_t)(EDI));
  /* 117f555e push 0x1181d7f8 */
  push32((uint32_t)(0x1181d7f8u));
  /* 117f5563 push 0x1181d7f4 */
  push32((uint32_t)(0x1181d7f4u));
  /* 117f5568 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 117f556a push 0x1181d7e4 */
  push32((uint32_t)(0x1181d7e4u));
  /* 117f556f push 1 */
  push32((uint32_t)(0x1u));
  /* 117f5571 call 0x117f5920 */
  push32(0x117f5576u); f_117f5920();
  /* 117f5576 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f5579 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f557c jne 0x117f557f */
  if (!C.zf) goto L_117f557f;
  /* 117f557e int3  */
  x86_unimpl("int3 @ 0x117f557e");
L_117f557f:;
  /* 117f557f pop edi */
  EDI = (pop32());
  /* 117f5580 pop esi */
  ESI = (pop32());
  /* 117f5581 pop ebx */
  EBX = (pop32());
  /* 117f5582 pop edx */
  EDX = (pop32());
  /* 117f5583 pop eax */
  EAX = (pop32());
  /* 117f5584 mov esp, ebp */
  ESP = (EBP);
  /* 117f5586 pop ebp */
  EBP = (pop32());
  /* 117f5587 ret  */
  ESPCHK(0x117f5550u, _esp0);
  ESP += 4; return;
}

/* FUN_10005590 @ 0x117f5590 (313 bytes, 78 insns) */
void f_117f5590(void) {
  FTRACE(0x117f5590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f5590 push ebp */
  push32((uint32_t)(EBP));
  /* 117f5591 mov ebp, esp */
  EBP = (ESP);
  /* 117f5593 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5597 jne 0x117f5657 */
  if (!C.zf) goto L_117f5657;
  /* 117f559d call dword ptr [0x118253a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253a8))), 0x117f55a3u);
  /* 117f55a3 mov dword ptr [0x118226f0], eax */
  w32((uint32_t)(0x118226f0), (EAX));
  /* 117f55a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f55aa call 0x117f9050 */
  push32(0x117f55afu); f_117f9050();
  /* 117f55af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f55b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f55b4 jne 0x117f55bd */
  if (!C.zf) goto L_117f55bd;
  /* 117f55b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f55b8 jmp 0x117f56c5 */
  goto L_117f56c5;
L_117f55bd:;
  /* 117f55bd mov eax, dword ptr [0x118226f0] */
  EAX = (r32((uint32_t)(0x118226f0)));
  /* 117f55c2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 117f55c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f55ca mov dword ptr [0x118226fc], eax */
  w32((uint32_t)(0x118226fc), (EAX));
  /* 117f55cf mov ecx, dword ptr [0x118226f0] */
  ECX = (r32((uint32_t)(0x118226f0)));
  /* 117f55d5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 117f55db mov dword ptr [0x118226f8], ecx */
  w32((uint32_t)(0x118226f8), (ECX));
  /* 117f55e1 mov edx, dword ptr [0x118226f8] */
  EDX = (r32((uint32_t)(0x118226f8)));
  /* 117f55e7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 117f55ea add edx, dword ptr [0x118226fc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x118226fc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f55f0 mov dword ptr [0x118226f4], edx */
  w32((uint32_t)(0x118226f4), (EDX));
  /* 117f55f6 mov eax, dword ptr [0x118226f0] */
  EAX = (r32((uint32_t)(0x118226f0)));
  /* 117f55fb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 117f55fe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f5603 mov dword ptr [0x118226f0], eax */
  w32((uint32_t)(0x118226f0), (EAX));
  /* 117f5608 call 0x117f61c0 */
  push32(0x117f560du); f_117f61c0();
  /* 117f560d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f560f jne 0x117f561d */
  if (!C.zf) goto L_117f561d;
  /* 117f5611 call 0x117f90a0 */
  push32(0x117f5616u); f_117f90a0();
  /* 117f5616 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f5618 jmp 0x117f56c5 */
  goto L_117f56c5;
L_117f561d:;
  /* 117f561d call dword ptr [0x118253a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253a4))), 0x117f5623u);
  /* 117f5623 mov dword ptr [0x1182422c], eax */
  w32((uint32_t)(0x1182422c), (EAX));
  /* 117f5628 call 0x117f8e30 */
  push32(0x117f562du); f_117f8e30();
  /* 117f562d mov dword ptr [0x118226d8], eax */
  w32((uint32_t)(0x118226d8), (EAX));
  /* 117f5632 call 0x117f6470 */
  push32(0x117f5637u); f_117f6470();
  /* 117f5637 call 0x117f8920 */
  push32(0x117f563cu); f_117f8920();
  /* 117f563c call 0x117f87d0 */
  push32(0x117f5641u); f_117f87d0();
  /* 117f5641 call 0x117f5fc0 */
  push32(0x117f5646u); f_117f5fc0();
  /* 117f5646 mov ecx, dword ptr [0x118226d4] */
  ECX = (r32((uint32_t)(0x118226d4)));
  /* 117f564c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f564f mov dword ptr [0x118226d4], ecx */
  w32((uint32_t)(0x118226d4), (ECX));
  /* 117f5655 jmp 0x117f56c0 */
  goto L_117f56c0;
L_117f5657:;
  /* 117f5657 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f565b jne 0x117f56b0 */
  if (!C.zf) goto L_117f56b0;
  /* 117f565d cmp dword ptr [0x118226d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118226d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5664 jle 0x117f56aa */
  if ((C.zf||C.sf!=C.of)) goto L_117f56aa;
  /* 117f5666 mov edx, dword ptr [0x118226d4] */
  EDX = (r32((uint32_t)(0x118226d4)));
  /* 117f566c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f566f mov dword ptr [0x118226d4], edx */
  w32((uint32_t)(0x118226d4), (EDX));
  /* 117f5675 cmp dword ptr [0x11822728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f567c jne 0x117f5683 */
  if (!C.zf) goto L_117f5683;
  /* 117f567e call 0x117f6040 */
  push32(0x117f5683u); f_117f6040();
L_117f5683:;
  /* 117f5683 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117f5685 call 0x117f7d70 */
  push32(0x117f568au); f_117f7d70();
  /* 117f568a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f568d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 117f5690 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f5692 je 0x117f5699 */
  if (C.zf) goto L_117f5699;
  /* 117f5694 call 0x117f8680 */
  push32(0x117f5699u); f_117f8680();
L_117f5699:;
  /* 117f5699 call 0x117f67a0 */
  push32(0x117f569eu); f_117f67a0();
  /* 117f569e call 0x117f6250 */
  push32(0x117f56a3u); f_117f6250();
  /* 117f56a3 call 0x117f90a0 */
  push32(0x117f56a8u); f_117f90a0();
  /* 117f56a8 jmp 0x117f56ae */
  goto L_117f56ae;
L_117f56aa:;
  /* 117f56aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f56ac jmp 0x117f56c5 */
  goto L_117f56c5;
L_117f56ae:;
  /* 117f56ae jmp 0x117f56c0 */
  goto L_117f56c0;
L_117f56b0:;
  /* 117f56b0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f56b4 jne 0x117f56c0 */
  if (!C.zf) goto L_117f56c0;
  /* 117f56b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f56b8 call 0x117f6340 */
  push32(0x117f56bdu); f_117f6340();
  /* 117f56bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f56c0:;
  /* 117f56c0 mov eax, 1 */
  EAX = (0x1u);
L_117f56c5:;
  /* 117f56c5 pop ebp */
  EBP = (pop32());
  /* 117f56c6 ret 0xc */
  ESPCHK(0x117f5590u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x117f56d0 (243 bytes, 86 insns) */
void f_117f56d0(void) {
  FTRACE(0x117f56d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f56d0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f56d1 mov ebp, esp */
  EBP = (ESP);
  /* 117f56d3 push ecx */
  push32((uint32_t)(ECX));
  /* 117f56d4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 117f56db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f56df jne 0x117f56f1 */
  if (!C.zf) goto L_117f56f1;
  /* 117f56e1 cmp dword ptr [0x118226d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118226d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f56e8 jne 0x117f56f1 */
  if (!C.zf) goto L_117f56f1;
  /* 117f56ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f56ec jmp 0x117f57bd */
  goto L_117f57bd;
L_117f56f1:;
  /* 117f56f1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f56f5 je 0x117f56fd */
  if (C.zf) goto L_117f56fd;
  /* 117f56f7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f56fb jne 0x117f573f */
  if (!C.zf) goto L_117f573f;
L_117f56fd:;
  /* 117f56fd cmp dword ptr [0x1182423c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1182423c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5704 je 0x117f571b */
  if (C.zf) goto L_117f571b;
  /* 117f5706 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f5709 push eax */
  push32((uint32_t)(EAX));
  /* 117f570a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f570d push ecx */
  push32((uint32_t)(ECX));
  /* 117f570e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f5711 push edx */
  push32((uint32_t)(EDX));
  /* 117f5712 call dword ptr [0x1182423c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182423c))), 0x117f5718u);
  /* 117f5718 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117f571b:;
  /* 117f571b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f571f je 0x117f5735 */
  if (C.zf) goto L_117f5735;
  /* 117f5721 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f5724 push eax */
  push32((uint32_t)(EAX));
  /* 117f5725 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f5728 push ecx */
  push32((uint32_t)(ECX));
  /* 117f5729 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f572c push edx */
  push32((uint32_t)(EDX));
  /* 117f572d call 0x117f5590 */
  push32(0x117f5732u); f_117f5590();
  /* 117f5732 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117f5735:;
  /* 117f5735 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5739 jne 0x117f573f */
  if (!C.zf) goto L_117f573f;
  /* 117f573b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f573d jmp 0x117f57bd */
  goto L_117f57bd;
L_117f573f:;
  /* 117f573f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f5742 push eax */
  push32((uint32_t)(EAX));
  /* 117f5743 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f5746 push ecx */
  push32((uint32_t)(ECX));
  /* 117f5747 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f574a push edx */
  push32((uint32_t)(EDX));
  /* 117f574b call 0x117f100a */
  push32(0x117f5750u); f_117f100a();
  /* 117f5750 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f5753 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5757 jne 0x117f576e */
  if (!C.zf) goto L_117f576e;
  /* 117f5759 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f575d jne 0x117f576e */
  if (!C.zf) goto L_117f576e;
  /* 117f575f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f5762 push eax */
  push32((uint32_t)(EAX));
  /* 117f5763 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f5765 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f5768 push ecx */
  push32((uint32_t)(ECX));
  /* 117f5769 call 0x117f5590 */
  push32(0x117f576eu); f_117f5590();
L_117f576e:;
  /* 117f576e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5772 je 0x117f577a */
  if (C.zf) goto L_117f577a;
  /* 117f5774 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5778 jne 0x117f57ba */
  if (!C.zf) goto L_117f57ba;
L_117f577a:;
  /* 117f577a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f577d push edx */
  push32((uint32_t)(EDX));
  /* 117f577e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f5781 push eax */
  push32((uint32_t)(EAX));
  /* 117f5782 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f5785 push ecx */
  push32((uint32_t)(ECX));
  /* 117f5786 call 0x117f5590 */
  push32(0x117f578bu); f_117f5590();
  /* 117f578b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f578d jne 0x117f5796 */
  if (!C.zf) goto L_117f5796;
  /* 117f578f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_117f5796:;
  /* 117f5796 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f579a je 0x117f57ba */
  if (C.zf) goto L_117f57ba;
  /* 117f579c cmp dword ptr [0x1182423c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1182423c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f57a3 je 0x117f57ba */
  if (C.zf) goto L_117f57ba;
  /* 117f57a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f57a8 push edx */
  push32((uint32_t)(EDX));
  /* 117f57a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f57ac push eax */
  push32((uint32_t)(EAX));
  /* 117f57ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f57b0 push ecx */
  push32((uint32_t)(ECX));
  /* 117f57b1 call dword ptr [0x1182423c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182423c))), 0x117f57b7u);
  /* 117f57b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117f57ba:;
  /* 117f57ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_117f57bd:;
  /* 117f57bd mov esp, ebp */
  ESP = (EBP);
  /* 117f57bf pop ebp */
  EBP = (pop32());
  /* 117f57c0 ret 0xc */
  ESPCHK(0x117f56d0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x117f57d0 (58 bytes, 18 insns) */
void f_117f57d0(void) {
  FTRACE(0x117f57d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f57d0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f57d1 mov ebp, esp */
  EBP = (ESP);
  /* 117f57d3 cmp dword ptr [0x118226e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118226e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f57da je 0x117f57ee */
  if (C.zf) goto L_117f57ee;
  /* 117f57dc cmp dword ptr [0x118226e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118226e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f57e3 jne 0x117f57f3 */
  if (!C.zf) goto L_117f57f3;
  /* 117f57e5 cmp dword ptr [0x118226e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118226e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f57ec jne 0x117f57f3 */
  if (!C.zf) goto L_117f57f3;
L_117f57ee:;
  /* 117f57ee call 0x117f9140 */
  push32(0x117f57f3u); f_117f9140();
L_117f57f3:;
  /* 117f57f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f57f6 push eax */
  push32((uint32_t)(EAX));
  /* 117f57f7 call 0x117f9190 */
  push32(0x117f57fcu); f_117f9190();
  /* 117f57fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f57ff push 0xff */
  push32((uint32_t)(0xffu));
  /* 117f5804 call dword ptr [0x11820a30] */
  call_ind((uint32_t)(r32((uint32_t)(0x11820a30))), 0x117f580au);
  /* 117f580a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f580d pop ebp */
  EBP = (pop32());
  /* 117f580e ret  */
  ESPCHK(0x117f57d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005810 @ 0x117f5810 (11 bytes, 5 insns) */
void f_117f5810(void) {
  FTRACE(0x117f5810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f5810 push ebp */
  push32((uint32_t)(EBP));
  /* 117f5811 mov ebp, esp */
  EBP = (ESP);
  /* 117f5813 call dword ptr [0x118253ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253ac))), 0x117f5819u);
  /* 117f5819 pop ebp */
  EBP = (pop32());
  /* 117f581a ret  */
  ESPCHK(0x117f5810u, _esp0);
  ESP += 4; return;
}

/* FUN_10005820 @ 0x117f5820 (87 bytes, 30 insns) */
void f_117f5820(void) {
  FTRACE(0x117f5820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f5820 push ebp */
  push32((uint32_t)(EBP));
  /* 117f5821 mov ebp, esp */
  EBP = (ESP);
  /* 117f5823 push ecx */
  push32((uint32_t)(ECX));
  /* 117f5824 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5828 jl 0x117f5830 */
  if ((C.sf!=C.of)) goto L_117f5830;
  /* 117f582a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f582e jl 0x117f5835 */
  if ((C.sf!=C.of)) goto L_117f5835;
L_117f5830:;
  /* 117f5830 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f5833 jmp 0x117f5873 */
  goto L_117f5873;
L_117f5835:;
  /* 117f5835 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5839 jne 0x117f5847 */
  if (!C.zf) goto L_117f5847;
  /* 117f583b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f583e mov eax, dword ptr [eax*4 + 0x11820a38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11820a38)));
  /* 117f5845 jmp 0x117f5873 */
  goto L_117f5873;
L_117f5847:;
  /* 117f5847 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f584a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 117f584d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f584f je 0x117f5856 */
  if (C.zf) goto L_117f5856;
  /* 117f5851 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f5854 jmp 0x117f5873 */
  goto L_117f5873;
L_117f5856:;
  /* 117f5856 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f5859 mov eax, dword ptr [edx*4 + 0x11820a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11820a38)));
  /* 117f5860 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f5863 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f5866 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f5869 mov dword ptr [ecx*4 + 0x11820a38], edx */
  w32((uint32_t)(ECX*4 + 0x11820a38), (EDX));
  /* 117f5870 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_117f5873:;
  /* 117f5873 mov esp, ebp */
  ESP = (EBP);
  /* 117f5875 pop ebp */
  EBP = (pop32());
  /* 117f5876 ret  */
  ESPCHK(0x117f5820u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x117f5880 (126 bytes, 38 insns) */
void f_117f5880(void) {
  FTRACE(0x117f5880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f5880 push ebp */
  push32((uint32_t)(EBP));
  /* 117f5881 mov ebp, esp */
  EBP = (ESP);
  /* 117f5883 push ecx */
  push32((uint32_t)(ECX));
  /* 117f5884 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5888 jl 0x117f5890 */
  if ((C.sf!=C.of)) goto L_117f5890;
  /* 117f588a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f588e jl 0x117f5897 */
  if ((C.sf!=C.of)) goto L_117f5897;
L_117f5890:;
  /* 117f5890 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 117f5895 jmp 0x117f58fa */
  goto L_117f58fa;
L_117f5897:;
  /* 117f5897 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f589b jne 0x117f58a9 */
  if (!C.zf) goto L_117f58a9;
  /* 117f589d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f58a0 mov eax, dword ptr [eax*4 + 0x11820a44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11820a44)));
  /* 117f58a7 jmp 0x117f58fa */
  goto L_117f58fa;
L_117f58a9:;
  /* 117f58a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f58ac mov edx, dword ptr [ecx*4 + 0x11820a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11820a44)));
  /* 117f58b3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117f58b6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f58ba jne 0x117f58d0 */
  if (!C.zf) goto L_117f58d0;
  /* 117f58bc push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 117f58be call dword ptr [0x118253b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253b0))), 0x117f58c4u);
  /* 117f58c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f58c7 mov dword ptr [ecx*4 + 0x11820a44], eax */
  w32((uint32_t)(ECX*4 + 0x11820a44), (EAX));
  /* 117f58ce jmp 0x117f58f7 */
  goto L_117f58f7;
L_117f58d0:;
  /* 117f58d0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f58d4 jne 0x117f58ea */
  if (!C.zf) goto L_117f58ea;
  /* 117f58d6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 117f58d8 call dword ptr [0x118253b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253b0))), 0x117f58deu);
  /* 117f58de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f58e1 mov dword ptr [edx*4 + 0x11820a44], eax */
  w32((uint32_t)(EDX*4 + 0x11820a44), (EAX));
  /* 117f58e8 jmp 0x117f58f7 */
  goto L_117f58f7;
L_117f58ea:;
  /* 117f58ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f58ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f58f0 mov dword ptr [eax*4 + 0x11820a44], ecx */
  w32((uint32_t)(EAX*4 + 0x11820a44), (ECX));
L_117f58f7:;
  /* 117f58f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_117f58fa:;
  /* 117f58fa mov esp, ebp */
  ESP = (EBP);
  /* 117f58fc pop ebp */
  EBP = (pop32());
  /* 117f58fd ret  */
  ESPCHK(0x117f5880u, _esp0);
  ESP += 4; return;
}

/* FUN_10005900 @ 0x117f5900 (28 bytes, 11 insns) */
void f_117f5900(void) {
  FTRACE(0x117f5900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f5900 push ebp */
  push32((uint32_t)(EBP));
  /* 117f5901 mov ebp, esp */
  EBP = (ESP);
  /* 117f5903 push ecx */
  push32((uint32_t)(ECX));
  /* 117f5904 mov eax, dword ptr [0x11824220] */
  EAX = (r32((uint32_t)(0x11824220)));
  /* 117f5909 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f590c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f590f mov dword ptr [0x11824220], ecx */
  w32((uint32_t)(0x11824220), (ECX));
  /* 117f5915 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f5918 mov esp, ebp */
  ESP = (EBP);
  /* 117f591a pop ebp */
  EBP = (pop32());
  /* 117f591b ret  */
  ESPCHK(0x117f5900u, _esp0);
  ESP += 4; return;
}

/* FUN_10005920 @ 0x117f5920 (912 bytes, 248 insns) */
void f_117f5920(void) {
  FTRACE(0x117f5920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f5920 push ebp */
  push32((uint32_t)(EBP));
  /* 117f5921 mov ebp, esp */
  EBP = (ESP);
  /* 117f5923 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 117f5928 call 0x117f9a00 */
  push32(0x117f592du); f_117f9a00();
  /* 117f592d push edi */
  push32((uint32_t)(EDI));
  /* 117f592e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 117f5935 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 117f593a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f593c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 117f5942 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117f5944 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 117f5946 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 117f5947 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 117f594e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 117f5953 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f5955 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 117f595b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117f595d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 117f595f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 117f5960 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 117f5967 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 117f596c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f596e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 117f5974 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117f5976 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 117f5978 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 117f5979 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 117f597c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 117f5982 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5986 jl 0x117f598e */
  if ((C.sf!=C.of)) goto L_117f598e;
  /* 117f5988 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f598c jl 0x117f5996 */
  if ((C.sf!=C.of)) goto L_117f5996;
L_117f598e:;
  /* 117f598e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f5991 jmp 0x117f5cab */
  goto L_117f5cab;
L_117f5996:;
  /* 117f5996 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f599a jne 0x117f5a40 */
  if (!C.zf) goto L_117f5a40;
  /* 117f59a0 push 0x11820a34 */
  push32((uint32_t)(0x11820a34u));
  /* 117f59a5 call dword ptr [0x118253c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253c8))), 0x117f59abu);
  /* 117f59ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f59ad jle 0x117f5a40 */
  if ((C.zf||C.sf!=C.of)) goto L_117f5a40;
  /* 117f59b3 cmp dword ptr [0x118226e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118226e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f59ba jne 0x117f59fe */
  if (!C.zf) goto L_117f59fe;
  /* 117f59bc push 0x1181d9a0 */
  push32((uint32_t)(0x1181d9a0u));
  /* 117f59c1 call dword ptr [0x118253c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253c4))), 0x117f59c7u);
  /* 117f59c7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 117f59cd cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f59d4 je 0x117f59f6 */
  if (C.zf) goto L_117f59f6;
  /* 117f59d6 push 0x1181d994 */
  push32((uint32_t)(0x1181d994u));
  /* 117f59db mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 117f59e1 push ecx */
  push32((uint32_t)(ECX));
  /* 117f59e2 call dword ptr [0x118253c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253c0))), 0x117f59e8u);
  /* 117f59e8 mov dword ptr [0x118226e8], eax */
  w32((uint32_t)(0x118226e8), (EAX));
  /* 117f59ed cmp dword ptr [0x118226e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118226e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f59f4 jne 0x117f59fe */
  if (!C.zf) goto L_117f59fe;
L_117f59f6:;
  /* 117f59f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f59f9 jmp 0x117f5cab */
  goto L_117f5cab;
L_117f59fe:;
  /* 117f59fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f5a01 push edx */
  push32((uint32_t)(EDX));
  /* 117f5a02 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f5a05 push eax */
  push32((uint32_t)(EAX));
  /* 117f5a06 push 0x1181d960 */
  push32((uint32_t)(0x1181d960u));
  /* 117f5a0b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 117f5a11 push ecx */
  push32((uint32_t)(ECX));
  /* 117f5a12 call dword ptr [0x118226e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118226e8))), 0x117f5a18u);
  /* 117f5a18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f5a1b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 117f5a21 push edx */
  push32((uint32_t)(EDX));
  /* 117f5a22 call dword ptr [0x118253bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253bc))), 0x117f5a28u);
  /* 117f5a28 push 0x11820a34 */
  push32((uint32_t)(0x11820a34u));
  /* 117f5a2d call dword ptr [0x118253b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253b8))), 0x117f5a33u);
  /* 117f5a33 call 0x117f5810 */
  push32(0x117f5a38u); f_117f5810();
  /* 117f5a38 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f5a3b jmp 0x117f5cab */
  goto L_117f5cab;
L_117f5a40:;
  /* 117f5a40 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5a44 je 0x117f5a7d */
  if (C.zf) goto L_117f5a7d;
  /* 117f5a46 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 117f5a4c push eax */
  push32((uint32_t)(EAX));
  /* 117f5a4d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f5a50 push ecx */
  push32((uint32_t)(ECX));
  /* 117f5a51 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 117f5a56 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 117f5a5c push edx */
  push32((uint32_t)(EDX));
  /* 117f5a5d call 0x117f9900 */
  push32(0x117f5a62u); f_117f9900();
  /* 117f5a62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f5a65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f5a67 jge 0x117f5a7d */
  if ((C.sf==C.of)) goto L_117f5a7d;
  /* 117f5a69 push 0x1181d934 */
  push32((uint32_t)(0x1181d934u));
  /* 117f5a6e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 117f5a74 push eax */
  push32((uint32_t)(EAX));
  /* 117f5a75 call 0x117f9810 */
  push32(0x117f5a7au); f_117f9810();
  /* 117f5a7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f5a7d:;
  /* 117f5a7d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5a81 jne 0x117f5ab5 */
  if (!C.zf) goto L_117f5ab5;
  /* 117f5a83 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5a87 je 0x117f5a95 */
  if (C.zf) goto L_117f5a95;
  /* 117f5a89 mov dword ptr [ebp - 0x3028], 0x1181d920 */
  w32((uint32_t)(EBP + -0x3028), (0x1181d920u));
  /* 117f5a93 jmp 0x117f5a9f */
  goto L_117f5a9f;
L_117f5a95:;
  /* 117f5a95 mov dword ptr [ebp - 0x3028], 0x1181d90c */
  w32((uint32_t)(EBP + -0x3028), (0x1181d90cu));
L_117f5a9f:;
  /* 117f5a9f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 117f5aa5 push ecx */
  push32((uint32_t)(ECX));
  /* 117f5aa6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 117f5aac push edx */
  push32((uint32_t)(EDX));
  /* 117f5aad call 0x117f9810 */
  push32(0x117f5ab2u); f_117f9810();
  /* 117f5ab2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f5ab5:;
  /* 117f5ab5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 117f5abb push eax */
  push32((uint32_t)(EAX));
  /* 117f5abc lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 117f5ac2 push ecx */
  push32((uint32_t)(ECX));
  /* 117f5ac3 call 0x117f9820 */
  push32(0x117f5ac8u); f_117f9820();
  /* 117f5ac8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f5acb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5acf jne 0x117f5b0a */
  if (!C.zf) goto L_117f5b0a;
  /* 117f5ad1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f5ad4 mov eax, dword ptr [edx*4 + 0x11820a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11820a38)));
  /* 117f5adb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 117f5ade test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f5ae0 je 0x117f5af6 */
  if (C.zf) goto L_117f5af6;
  /* 117f5ae2 push 0x1181d908 */
  push32((uint32_t)(0x1181d908u));
  /* 117f5ae7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 117f5aed push ecx */
  push32((uint32_t)(ECX));
  /* 117f5aee call 0x117f9820 */
  push32(0x117f5af3u); f_117f9820();
  /* 117f5af3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f5af6:;
  /* 117f5af6 push 0x1181d904 */
  push32((uint32_t)(0x1181d904u));
  /* 117f5afb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 117f5b01 push edx */
  push32((uint32_t)(EDX));
  /* 117f5b02 call 0x117f9820 */
  push32(0x117f5b07u); f_117f9820();
  /* 117f5b07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f5b0a:;
  /* 117f5b0a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5b0e je 0x117f5b52 */
  if (C.zf) goto L_117f5b52;
  /* 117f5b10 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 117f5b16 push eax */
  push32((uint32_t)(EAX));
  /* 117f5b17 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f5b1a push ecx */
  push32((uint32_t)(ECX));
  /* 117f5b1b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f5b1e push edx */
  push32((uint32_t)(EDX));
  /* 117f5b1f push 0x1181d8f8 */
  push32((uint32_t)(0x1181d8f8u));
  /* 117f5b24 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 117f5b29 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 117f5b2f push eax */
  push32((uint32_t)(EAX));
  /* 117f5b30 call 0x117f9710 */
  push32(0x117f5b35u); f_117f9710();
  /* 117f5b35 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f5b38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f5b3a jge 0x117f5b50 */
  if ((C.sf==C.of)) goto L_117f5b50;
  /* 117f5b3c push 0x1181d934 */
  push32((uint32_t)(0x1181d934u));
  /* 117f5b41 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 117f5b47 push ecx */
  push32((uint32_t)(ECX));
  /* 117f5b48 call 0x117f9810 */
  push32(0x117f5b4du); f_117f9810();
  /* 117f5b4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f5b50:;
  /* 117f5b50 jmp 0x117f5b68 */
  goto L_117f5b68;
L_117f5b52:;
  /* 117f5b52 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 117f5b58 push edx */
  push32((uint32_t)(EDX));
  /* 117f5b59 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 117f5b5f push eax */
  push32((uint32_t)(EAX));
  /* 117f5b60 call 0x117f9810 */
  push32(0x117f5b65u); f_117f9810();
  /* 117f5b65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f5b68:;
  /* 117f5b68 cmp dword ptr [0x11824220], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11824220))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5b6f je 0x117f5bac */
  if (C.zf) goto L_117f5bac;
  /* 117f5b71 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 117f5b77 push ecx */
  push32((uint32_t)(ECX));
  /* 117f5b78 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 117f5b7e push edx */
  push32((uint32_t)(EDX));
  /* 117f5b7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f5b82 push eax */
  push32((uint32_t)(EAX));
  /* 117f5b83 call dword ptr [0x11824220] */
  call_ind((uint32_t)(r32((uint32_t)(0x11824220))), 0x117f5b89u);
  /* 117f5b89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f5b8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f5b8e je 0x117f5bac */
  if (C.zf) goto L_117f5bac;
  /* 117f5b90 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5b94 jne 0x117f5ba1 */
  if (!C.zf) goto L_117f5ba1;
  /* 117f5b96 push 0x11820a34 */
  push32((uint32_t)(0x11820a34u));
  /* 117f5b9b call dword ptr [0x118253b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253b8))), 0x117f5ba1u);
L_117f5ba1:;
  /* 117f5ba1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 117f5ba7 jmp 0x117f5cab */
  goto L_117f5cab;
L_117f5bac:;
  /* 117f5bac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f5baf mov edx, dword ptr [ecx*4 + 0x11820a38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11820a38)));
  /* 117f5bb6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 117f5bb9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f5bbb je 0x117f5bfb */
  if (C.zf) goto L_117f5bfb;
  /* 117f5bbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f5bc0 cmp dword ptr [eax*4 + 0x11820a44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11820a44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5bc8 je 0x117f5bfb */
  if (C.zf) goto L_117f5bfb;
  /* 117f5bca push 0 */
  push32((uint32_t)(0x0u));
  /* 117f5bcc lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 117f5bd2 push ecx */
  push32((uint32_t)(ECX));
  /* 117f5bd3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 117f5bd9 push edx */
  push32((uint32_t)(EDX));
  /* 117f5bda call 0x117f9690 */
  push32(0x117f5bdfu); f_117f9690();
  /* 117f5bdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f5be2 push eax */
  push32((uint32_t)(EAX));
  /* 117f5be3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 117f5be9 push eax */
  push32((uint32_t)(EAX));
  /* 117f5bea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f5bed mov edx, dword ptr [ecx*4 + 0x11820a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11820a44)));
  /* 117f5bf4 push edx */
  push32((uint32_t)(EDX));
  /* 117f5bf5 call dword ptr [0x118253b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253b4))), 0x117f5bfbu);
L_117f5bfb:;
  /* 117f5bfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f5bfe mov ecx, dword ptr [eax*4 + 0x11820a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11820a38)));
  /* 117f5c05 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 117f5c08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f5c0a je 0x117f5c19 */
  if (C.zf) goto L_117f5c19;
  /* 117f5c0c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 117f5c12 push edx */
  push32((uint32_t)(EDX));
  /* 117f5c13 call dword ptr [0x118253bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253bc))), 0x117f5c19u);
L_117f5c19:;
  /* 117f5c19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f5c1c mov ecx, dword ptr [eax*4 + 0x11820a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11820a38)));
  /* 117f5c23 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 117f5c26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f5c28 je 0x117f5c98 */
  if (C.zf) goto L_117f5c98;
  /* 117f5c2a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5c2e je 0x117f5c4d */
  if (C.zf) goto L_117f5c4d;
  /* 117f5c30 push 0xa */
  push32((uint32_t)(0xau));
  /* 117f5c32 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 117f5c38 push edx */
  push32((uint32_t)(EDX));
  /* 117f5c39 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f5c3c push eax */
  push32((uint32_t)(EAX));
  /* 117f5c3d call 0x117f93a0 */
  push32(0x117f5c42u); f_117f93a0();
  /* 117f5c42 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f5c45 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 117f5c4b jmp 0x117f5c57 */
  goto L_117f5c57;
L_117f5c4d:;
  /* 117f5c4d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_117f5c57:;
  /* 117f5c57 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 117f5c5d push ecx */
  push32((uint32_t)(ECX));
  /* 117f5c5e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f5c61 push edx */
  push32((uint32_t)(EDX));
  /* 117f5c62 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 117f5c68 push eax */
  push32((uint32_t)(EAX));
  /* 117f5c69 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f5c6c push ecx */
  push32((uint32_t)(ECX));
  /* 117f5c6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f5c70 push edx */
  push32((uint32_t)(EDX));
  /* 117f5c71 call 0x117f5cb0 */
  push32(0x117f5c76u); f_117f5cb0();
  /* 117f5c76 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f5c79 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 117f5c7f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5c83 jne 0x117f5c90 */
  if (!C.zf) goto L_117f5c90;
  /* 117f5c85 push 0x11820a34 */
  push32((uint32_t)(0x11820a34u));
  /* 117f5c8a call dword ptr [0x118253b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253b8))), 0x117f5c90u);
L_117f5c90:;
  /* 117f5c90 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 117f5c96 jmp 0x117f5cab */
  goto L_117f5cab;
L_117f5c98:;
  /* 117f5c98 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5c9c jne 0x117f5ca9 */
  if (!C.zf) goto L_117f5ca9;
  /* 117f5c9e push 0x11820a34 */
  push32((uint32_t)(0x11820a34u));
  /* 117f5ca3 call dword ptr [0x118253b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253b8))), 0x117f5ca9u);
L_117f5ca9:;
  /* 117f5ca9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117f5cab:;
  /* 117f5cab pop edi */
  EDI = (pop32());
  /* 117f5cac mov esp, ebp */
  ESP = (EBP);
  /* 117f5cae pop ebp */
  EBP = (pop32());
  /* 117f5caf ret  */
  ESPCHK(0x117f5920u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cb0 @ 0x117f5cb0 (780 bytes, 197 insns) */
void f_117f5cb0(void) {
  FTRACE(0x117f5cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f5cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f5cb1 mov ebp, esp */
  EBP = (ESP);
  /* 117f5cb3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 117f5cb8 call 0x117f9a00 */
  push32(0x117f5cbdu); f_117f9a00();
L_117f5cbd:;
  /* 117f5cbd cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5cc1 jne 0x117f5ce8 */
  if (!C.zf) goto L_117f5ce8;
  /* 117f5cc3 push 0x1181daf0 */
  push32((uint32_t)(0x1181daf0u));
  /* 117f5cc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f5cca push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 117f5ccf push 0x1181dae4 */
  push32((uint32_t)(0x1181dae4u));
  /* 117f5cd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f5cd6 call 0x117f5920 */
  push32(0x117f5cdbu); f_117f5920();
  /* 117f5cdb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f5cde cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5ce1 jne 0x117f5ce8 */
  if (!C.zf) goto L_117f5ce8;
  /* 117f5ce3 call 0x117f5810 */
  push32(0x117f5ce8u); f_117f5810();
L_117f5ce8:;
  /* 117f5ce8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f5cea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f5cec jne 0x117f5cbd */
  if (!C.zf) goto L_117f5cbd;
  /* 117f5cee push 0x104 */
  push32((uint32_t)(0x104u));
  /* 117f5cf3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 117f5cf9 push ecx */
  push32((uint32_t)(ECX));
  /* 117f5cfa push 0 */
  push32((uint32_t)(0x0u));
  /* 117f5cfc call dword ptr [0x118252e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118252e0))), 0x117f5d02u);
  /* 117f5d02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f5d04 jne 0x117f5d1a */
  if (!C.zf) goto L_117f5d1a;
  /* 117f5d06 push 0x1181dacc */
  push32((uint32_t)(0x1181daccu));
  /* 117f5d0b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 117f5d11 push edx */
  push32((uint32_t)(EDX));
  /* 117f5d12 call 0x117f9810 */
  push32(0x117f5d17u); f_117f9810();
  /* 117f5d17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f5d1a:;
  /* 117f5d1a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 117f5d20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f5d23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f5d26 push ecx */
  push32((uint32_t)(ECX));
  /* 117f5d27 call 0x117f9690 */
  push32(0x117f5d2cu); f_117f9690();
  /* 117f5d2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f5d2f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5d32 jbe 0x117f5d5d */
  if ((C.cf||C.zf)) goto L_117f5d5d;
  /* 117f5d34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f5d37 push edx */
  push32((uint32_t)(EDX));
  /* 117f5d38 call 0x117f9690 */
  push32(0x117f5d3du); f_117f9690();
  /* 117f5d3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f5d40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f5d43 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 117f5d47 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117f5d4a push 3 */
  push32((uint32_t)(0x3u));
  /* 117f5d4c push 0x1181dac8 */
  push32((uint32_t)(0x1181dac8u));
  /* 117f5d51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f5d54 push eax */
  push32((uint32_t)(EAX));
  /* 117f5d55 call 0x117fa080 */
  push32(0x117f5d5au); f_117fa080();
  /* 117f5d5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f5d5d:;
  /* 117f5d5d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f5d60 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 117f5d66 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5d6d je 0x117f5db8 */
  if (C.zf) goto L_117f5db8;
  /* 117f5d6f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 117f5d75 push edx */
  push32((uint32_t)(EDX));
  /* 117f5d76 call 0x117f9690 */
  push32(0x117f5d7bu); f_117f9690();
  /* 117f5d7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f5d7e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5d81 jbe 0x117f5db8 */
  if ((C.cf||C.zf)) goto L_117f5db8;
  /* 117f5d83 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 117f5d89 push eax */
  push32((uint32_t)(EAX));
  /* 117f5d8a call 0x117f9690 */
  push32(0x117f5d8fu); f_117f9690();
  /* 117f5d8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f5d92 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 117f5d98 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 117f5d9c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 117f5da2 push 3 */
  push32((uint32_t)(0x3u));
  /* 117f5da4 push 0x1181dac8 */
  push32((uint32_t)(0x1181dac8u));
  /* 117f5da9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 117f5daf push eax */
  push32((uint32_t)(EAX));
  /* 117f5db0 call 0x117fa080 */
  push32(0x117f5db5u); f_117fa080();
  /* 117f5db5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f5db8:;
  /* 117f5db8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5dbc jne 0x117f5dca */
  if (!C.zf) goto L_117f5dca;
  /* 117f5dbe mov dword ptr [ebp - 0x1114], 0x1181da54 */
  w32((uint32_t)(EBP + -0x1114), (0x1181da54u));
  /* 117f5dc8 jmp 0x117f5dd4 */
  goto L_117f5dd4;
L_117f5dca:;
  /* 117f5dca mov dword ptr [ebp - 0x1114], 0x1181d7f4 */
  w32((uint32_t)(EBP + -0x1114), (0x1181d7f4u));
L_117f5dd4:;
  /* 117f5dd4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f5dd7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117f5dda test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f5ddc je 0x117f5de9 */
  if (C.zf) goto L_117f5de9;
  /* 117f5dde mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f5de1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 117f5de7 jmp 0x117f5df3 */
  goto L_117f5df3;
L_117f5de9:;
  /* 117f5de9 mov dword ptr [ebp - 0x1118], 0x1181d7f4 */
  w32((uint32_t)(EBP + -0x1118), (0x1181d7f4u));
L_117f5df3:;
  /* 117f5df3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f5df6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117f5df9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f5dfb je 0x117f5e0f */
  if (C.zf) goto L_117f5e0f;
  /* 117f5dfd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5e01 jne 0x117f5e0f */
  if (!C.zf) goto L_117f5e0f;
  /* 117f5e03 mov dword ptr [ebp - 0x111c], 0x1181da44 */
  w32((uint32_t)(EBP + -0x111c), (0x1181da44u));
  /* 117f5e0d jmp 0x117f5e19 */
  goto L_117f5e19;
L_117f5e0f:;
  /* 117f5e0f mov dword ptr [ebp - 0x111c], 0x1181d7f4 */
  w32((uint32_t)(EBP + -0x111c), (0x1181d7f4u));
L_117f5e19:;
  /* 117f5e19 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f5e1c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117f5e1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f5e21 je 0x117f5e2f */
  if (C.zf) goto L_117f5e2f;
  /* 117f5e23 mov dword ptr [ebp - 0x1120], 0x1181da40 */
  w32((uint32_t)(EBP + -0x1120), (0x1181da40u));
  /* 117f5e2d jmp 0x117f5e39 */
  goto L_117f5e39;
L_117f5e2f:;
  /* 117f5e2f mov dword ptr [ebp - 0x1120], 0x1181d7f4 */
  w32((uint32_t)(EBP + -0x1120), (0x1181d7f4u));
L_117f5e39:;
  /* 117f5e39 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5e3d je 0x117f5e4a */
  if (C.zf) goto L_117f5e4a;
  /* 117f5e3f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f5e42 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 117f5e48 jmp 0x117f5e54 */
  goto L_117f5e54;
L_117f5e4a:;
  /* 117f5e4a mov dword ptr [ebp - 0x1124], 0x1181d7f4 */
  w32((uint32_t)(EBP + -0x1124), (0x1181d7f4u));
L_117f5e54:;
  /* 117f5e54 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5e58 je 0x117f5e66 */
  if (C.zf) goto L_117f5e66;
  /* 117f5e5a mov dword ptr [ebp - 0x1128], 0x1181da38 */
  w32((uint32_t)(EBP + -0x1128), (0x1181da38u));
  /* 117f5e64 jmp 0x117f5e70 */
  goto L_117f5e70;
L_117f5e66:;
  /* 117f5e66 mov dword ptr [ebp - 0x1128], 0x1181d7f4 */
  w32((uint32_t)(EBP + -0x1128), (0x1181d7f4u));
L_117f5e70:;
  /* 117f5e70 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5e74 je 0x117f5e81 */
  if (C.zf) goto L_117f5e81;
  /* 117f5e76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f5e79 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 117f5e7f jmp 0x117f5e8b */
  goto L_117f5e8b;
L_117f5e81:;
  /* 117f5e81 mov dword ptr [ebp - 0x112c], 0x1181d7f4 */
  w32((uint32_t)(EBP + -0x112c), (0x1181d7f4u));
L_117f5e8b:;
  /* 117f5e8b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5e8f je 0x117f5e9d */
  if (C.zf) goto L_117f5e9d;
  /* 117f5e91 mov dword ptr [ebp - 0x1130], 0x1181da30 */
  w32((uint32_t)(EBP + -0x1130), (0x1181da30u));
  /* 117f5e9b jmp 0x117f5ea7 */
  goto L_117f5ea7;
L_117f5e9d:;
  /* 117f5e9d mov dword ptr [ebp - 0x1130], 0x1181d7f4 */
  w32((uint32_t)(EBP + -0x1130), (0x1181d7f4u));
L_117f5ea7:;
  /* 117f5ea7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5eae je 0x117f5ebe */
  if (C.zf) goto L_117f5ebe;
  /* 117f5eb0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 117f5eb6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 117f5ebc jmp 0x117f5ec8 */
  goto L_117f5ec8;
L_117f5ebe:;
  /* 117f5ebe mov dword ptr [ebp - 0x1134], 0x1181d7f4 */
  w32((uint32_t)(EBP + -0x1134), (0x1181d7f4u));
L_117f5ec8:;
  /* 117f5ec8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5ecf je 0x117f5edd */
  if (C.zf) goto L_117f5edd;
  /* 117f5ed1 mov dword ptr [ebp - 0x1138], 0x1181da24 */
  w32((uint32_t)(EBP + -0x1138), (0x1181da24u));
  /* 117f5edb jmp 0x117f5ee7 */
  goto L_117f5ee7;
L_117f5edd:;
  /* 117f5edd mov dword ptr [ebp - 0x1138], 0x1181d7f4 */
  w32((uint32_t)(EBP + -0x1138), (0x1181d7f4u));
L_117f5ee7:;
  /* 117f5ee7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 117f5eed push edx */
  push32((uint32_t)(EDX));
  /* 117f5eee mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 117f5ef4 push eax */
  push32((uint32_t)(EAX));
  /* 117f5ef5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 117f5efb push ecx */
  push32((uint32_t)(ECX));
  /* 117f5efc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 117f5f02 push edx */
  push32((uint32_t)(EDX));
  /* 117f5f03 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 117f5f09 push eax */
  push32((uint32_t)(EAX));
  /* 117f5f0a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 117f5f10 push ecx */
  push32((uint32_t)(ECX));
  /* 117f5f11 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 117f5f17 push edx */
  push32((uint32_t)(EDX));
  /* 117f5f18 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 117f5f1e push eax */
  push32((uint32_t)(EAX));
  /* 117f5f1f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 117f5f25 push ecx */
  push32((uint32_t)(ECX));
  /* 117f5f26 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 117f5f2c push edx */
  push32((uint32_t)(EDX));
  /* 117f5f2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f5f30 push eax */
  push32((uint32_t)(EAX));
  /* 117f5f31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f5f34 mov edx, dword ptr [ecx*4 + 0x11820a50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11820a50)));
  /* 117f5f3b push edx */
  push32((uint32_t)(EDX));
  /* 117f5f3c push 0x1181d9d0 */
  push32((uint32_t)(0x1181d9d0u));
  /* 117f5f41 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 117f5f46 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 117f5f4c push eax */
  push32((uint32_t)(EAX));
  /* 117f5f4d call 0x117f9710 */
  push32(0x117f5f52u); f_117f9710();
  /* 117f5f52 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f5f55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f5f57 jge 0x117f5f6d */
  if ((C.sf==C.of)) goto L_117f5f6d;
  /* 117f5f59 push 0x1181d934 */
  push32((uint32_t)(0x1181d934u));
  /* 117f5f5e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 117f5f64 push ecx */
  push32((uint32_t)(ECX));
  /* 117f5f65 call 0x117f9810 */
  push32(0x117f5f6au); f_117f9810();
  /* 117f5f6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f5f6d:;
  /* 117f5f6d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 117f5f72 push 0x1181d9ac */
  push32((uint32_t)(0x1181d9acu));
  /* 117f5f77 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 117f5f7d push edx */
  push32((uint32_t)(EDX));
  /* 117f5f7e call 0x117f9fc0 */
  push32(0x117f5f83u); f_117f9fc0();
  /* 117f5f83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f5f86 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 117f5f8c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5f93 jne 0x117f5fa6 */
  if (!C.zf) goto L_117f5fa6;
  /* 117f5f95 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 117f5f97 call 0x117f9d00 */
  push32(0x117f5f9cu); f_117f9d00();
  /* 117f5f9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f5f9f push 3 */
  push32((uint32_t)(0x3u));
  /* 117f5fa1 call 0x117f6020 */
  push32(0x117f5fa6u); f_117f6020();
L_117f5fa6:;
  /* 117f5fa6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5fad jne 0x117f5fb6 */
  if (!C.zf) goto L_117f5fb6;
  /* 117f5faf mov eax, 1 */
  EAX = (0x1u);
  /* 117f5fb4 jmp 0x117f5fb8 */
  goto L_117f5fb8;
L_117f5fb6:;
  /* 117f5fb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117f5fb8:;
  /* 117f5fb8 mov esp, ebp */
  ESP = (EBP);
  /* 117f5fba pop ebp */
  EBP = (pop32());
  /* 117f5fbb ret  */
  ESPCHK(0x117f5cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fc0 @ 0x117f5fc0 (56 bytes, 15 insns) */
void f_117f5fc0(void) {
  FTRACE(0x117f5fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f5fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f5fc1 mov ebp, esp */
  EBP = (ESP);
  /* 117f5fc3 cmp dword ptr [0x1182421c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1182421c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f5fca je 0x117f5fd2 */
  if (C.zf) goto L_117f5fd2;
  /* 117f5fcc call dword ptr [0x1182421c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182421c))), 0x117f5fd2u);
L_117f5fd2:;
  /* 117f5fd2 push 0x11820418 */
  push32((uint32_t)(0x11820418u));
  /* 117f5fd7 push 0x11820208 */
  push32((uint32_t)(0x11820208u));
  /* 117f5fdc call 0x117f6190 */
  push32(0x117f5fe1u); f_117f6190();
  /* 117f5fe1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f5fe4 push 0x11820104 */
  push32((uint32_t)(0x11820104u));
  /* 117f5fe9 push 0x11820000 */
  push32((uint32_t)(0x11820000u));
  /* 117f5fee call 0x117f6190 */
  push32(0x117f5ff3u); f_117f6190();
  /* 117f5ff3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f5ff6 pop ebp */
  EBP = (pop32());
  /* 117f5ff7 ret  */
  ESPCHK(0x117f5fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006000 @ 0x117f6000 (21 bytes, 10 insns) */
void f_117f6000(void) {
  FTRACE(0x117f6000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f6000 push ebp */
  push32((uint32_t)(EBP));
  /* 117f6001 mov ebp, esp */
  EBP = (ESP);
  /* 117f6003 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6005 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6007 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f600a push eax */
  push32((uint32_t)(EAX));
  /* 117f600b call 0x117f6080 */
  push32(0x117f6010u); f_117f6080();
  /* 117f6010 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6013 pop ebp */
  EBP = (pop32());
  /* 117f6014 ret  */
  ESPCHK(0x117f6000u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x117f6020 (21 bytes, 10 insns) */
void f_117f6020(void) {
  FTRACE(0x117f6020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f6020 push ebp */
  push32((uint32_t)(EBP));
  /* 117f6021 mov ebp, esp */
  EBP = (ESP);
  /* 117f6023 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6025 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f6027 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f602a push eax */
  push32((uint32_t)(EAX));
  /* 117f602b call 0x117f6080 */
  push32(0x117f6030u); f_117f6080();
  /* 117f6030 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6033 pop ebp */
  EBP = (pop32());
  /* 117f6034 ret  */
  ESPCHK(0x117f6020u, _esp0);
  ESP += 4; return;
}

/* FUN_10006040 @ 0x117f6040 (19 bytes, 9 insns) */
void f_117f6040(void) {
  FTRACE(0x117f6040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f6040 push ebp */
  push32((uint32_t)(EBP));
  /* 117f6041 mov ebp, esp */
  EBP = (ESP);
  /* 117f6043 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f6045 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6047 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6049 call 0x117f6080 */
  push32(0x117f604eu); f_117f6080();
  /* 117f604e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6051 pop ebp */
  EBP = (pop32());
  /* 117f6052 ret  */
  ESPCHK(0x117f6040u, _esp0);
  ESP += 4; return;
}

/* FUN_10006060 @ 0x117f6060 (19 bytes, 9 insns) */
void f_117f6060(void) {
  FTRACE(0x117f6060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f6060 push ebp */
  push32((uint32_t)(EBP));
  /* 117f6061 mov ebp, esp */
  EBP = (ESP);
  /* 117f6063 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f6065 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f6067 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6069 call 0x117f6080 */
  push32(0x117f606eu); f_117f6080();
  /* 117f606e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6071 pop ebp */
  EBP = (pop32());
  /* 117f6072 ret  */
  ESPCHK(0x117f6060u, _esp0);
  ESP += 4; return;
}

/* FUN_10006080 @ 0x117f6080 (227 bytes, 61 insns) */
void f_117f6080(void) {
  FTRACE(0x117f6080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f6080 push ebp */
  push32((uint32_t)(EBP));
  /* 117f6081 mov ebp, esp */
  EBP = (ESP);
  /* 117f6083 push ecx */
  push32((uint32_t)(ECX));
  /* 117f6084 call 0x117f6170 */
  push32(0x117f6089u); f_117f6170();
  /* 117f6089 cmp dword ptr [0x1182272c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1182272c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6090 jne 0x117f60a3 */
  if (!C.zf) goto L_117f60a3;
  /* 117f6092 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f6095 push eax */
  push32((uint32_t)(EAX));
  /* 117f6096 call dword ptr [0x118253d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253d8))), 0x117f609cu);
  /* 117f609c push eax */
  push32((uint32_t)(EAX));
  /* 117f609d call dword ptr [0x118253d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253d4))), 0x117f60a3u);
L_117f60a3:;
  /* 117f60a3 mov dword ptr [0x11822728], 1 */
  w32((uint32_t)(0x11822728), (0x1u));
  /* 117f60ad mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 117f60b0 mov byte ptr [0x11822724], cl */
  w8((uint32_t)(0x11822724), (CL));
  /* 117f60b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f60ba jne 0x117f6103 */
  if (!C.zf) goto L_117f6103;
  /* 117f60bc cmp dword ptr [0x11824218], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11824218))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f60c3 je 0x117f60f1 */
  if (C.zf) goto L_117f60f1;
  /* 117f60c5 mov edx, dword ptr [0x11824214] */
  EDX = (r32((uint32_t)(0x11824214)));
  /* 117f60cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117f60ce:;
  /* 117f60ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f60d1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f60d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f60d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f60da cmp ecx, dword ptr [0x11824218] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11824218))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f60e0 jb 0x117f60f1 */
  if (C.cf) goto L_117f60f1;
  /* 117f60e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f60e5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f60e8 je 0x117f60ef */
  if (C.zf) goto L_117f60ef;
  /* 117f60ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f60ed call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x117f60efu);
L_117f60ef:;
  /* 117f60ef jmp 0x117f60ce */
  goto L_117f60ce;
L_117f60f1:;
  /* 117f60f1 push 0x11820724 */
  push32((uint32_t)(0x11820724u));
  /* 117f60f6 push 0x1182051c */
  push32((uint32_t)(0x1182051cu));
  /* 117f60fb call 0x117f6190 */
  push32(0x117f6100u); f_117f6190();
  /* 117f6100 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f6103:;
  /* 117f6103 push 0x1182092c */
  push32((uint32_t)(0x1182092cu));
  /* 117f6108 push 0x11820828 */
  push32((uint32_t)(0x11820828u));
  /* 117f610d call 0x117f6190 */
  push32(0x117f6112u); f_117f6190();
  /* 117f6112 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6115 cmp dword ptr [0x11822730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f611c jne 0x117f613e */
  if (!C.zf) goto L_117f613e;
  /* 117f611e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117f6120 call 0x117f7d70 */
  push32(0x117f6125u); f_117f7d70();
  /* 117f6125 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6128 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 117f612b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f612d je 0x117f613e */
  if (C.zf) goto L_117f613e;
  /* 117f612f mov dword ptr [0x11822730], 1 */
  w32((uint32_t)(0x11822730), (0x1u));
  /* 117f6139 call 0x117f8680 */
  push32(0x117f613eu); f_117f8680();
L_117f613e:;
  /* 117f613e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6142 je 0x117f614b */
  if (C.zf) goto L_117f614b;
  /* 117f6144 call 0x117f6180 */
  push32(0x117f6149u); f_117f6180();
  /* 117f6149 jmp 0x117f615f */
  goto L_117f615f;
L_117f614b:;
  /* 117f614b mov dword ptr [0x1182272c], 1 */
  w32((uint32_t)(0x1182272c), (0x1u));
  /* 117f6155 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f6158 push ecx */
  push32((uint32_t)(ECX));
  /* 117f6159 call dword ptr [0x118252dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118252dc))), 0x117f615fu);
L_117f615f:;
  /* 117f615f mov esp, ebp */
  ESP = (EBP);
  /* 117f6161 pop ebp */
  EBP = (pop32());
  /* 117f6162 ret  */
  ESPCHK(0x117f6080u, _esp0);
  ESP += 4; return;
}

/* FUN_10006170 @ 0x117f6170 (15 bytes, 7 insns) */
void f_117f6170(void) {
  FTRACE(0x117f6170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f6170 push ebp */
  push32((uint32_t)(EBP));
  /* 117f6171 mov ebp, esp */
  EBP = (ESP);
  /* 117f6173 push 0xd */
  push32((uint32_t)(0xdu));
  /* 117f6175 call 0x117fa260 */
  push32(0x117f617au); f_117fa260();
  /* 117f617a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f617d pop ebp */
  EBP = (pop32());
  /* 117f617e ret  */
  ESPCHK(0x117f6170u, _esp0);
  ESP += 4; return;
}

/* FUN_10006180 @ 0x117f6180 (15 bytes, 7 insns) */
void f_117f6180(void) {
  FTRACE(0x117f6180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f6180 push ebp */
  push32((uint32_t)(EBP));
  /* 117f6181 mov ebp, esp */
  EBP = (ESP);
  /* 117f6183 push 0xd */
  push32((uint32_t)(0xdu));
  /* 117f6185 call 0x117fa300 */
  push32(0x117f618au); f_117fa300();
  /* 117f618a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f618d pop ebp */
  EBP = (pop32());
  /* 117f618e ret  */
  ESPCHK(0x117f6180u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x117f6190 (37 bytes, 16 insns) */
void f_117f6190(void) {
  FTRACE(0x117f6190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f6190 push ebp */
  push32((uint32_t)(EBP));
  /* 117f6191 mov ebp, esp */
  EBP = (ESP);
L_117f6193:;
  /* 117f6193 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f6196 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6199 jae 0x117f61b3 */
  if (!C.cf) goto L_117f61b3;
  /* 117f619b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f619e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f61a1 je 0x117f61a8 */
  if (C.zf) goto L_117f61a8;
  /* 117f61a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f61a6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x117f61a8u);
L_117f61a8:;
  /* 117f61a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f61ab add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f61ae mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 117f61b1 jmp 0x117f6193 */
  goto L_117f6193;
L_117f61b3:;
  /* 117f61b3 pop ebp */
  EBP = (pop32());
  /* 117f61b4 ret  */
  ESPCHK(0x117f6190u, _esp0);
  ESP += 4; return;
}

/* FUN_100061c0 @ 0x117f61c0 (130 bytes, 42 insns) */
void f_117f61c0(void) {
  FTRACE(0x117f61c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f61c0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f61c1 mov ebp, esp */
  EBP = (ESP);
  /* 117f61c3 push ecx */
  push32((uint32_t)(ECX));
  /* 117f61c4 call 0x117fa180 */
  push32(0x117f61c9u); f_117fa180();
  /* 117f61c9 call dword ptr [0x118253e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253e4))), 0x117f61cfu);
  /* 117f61cf mov dword ptr [0x11820a5c], eax */
  w32((uint32_t)(0x11820a5c), (EAX));
  /* 117f61d4 cmp dword ptr [0x11820a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11820a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f61db jne 0x117f61e1 */
  if (!C.zf) goto L_117f61e1;
  /* 117f61dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f61df jmp 0x117f623e */
  goto L_117f623e;
L_117f61e1:;
  /* 117f61e1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 117f61e3 push 0x1181db08 */
  push32((uint32_t)(0x1181db08u));
  /* 117f61e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f61ea push 0x74 */
  push32((uint32_t)(0x74u));
  /* 117f61ec push 1 */
  push32((uint32_t)(0x1u));
  /* 117f61ee call 0x117f6c70 */
  push32(0x117f61f3u); f_117f6c70();
  /* 117f61f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f61f6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f61f9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f61fd je 0x117f6214 */
  if (C.zf) goto L_117f6214;
  /* 117f61ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6202 push eax */
  push32((uint32_t)(EAX));
  /* 117f6203 mov ecx, dword ptr [0x11820a5c] */
  ECX = (r32((uint32_t)(0x11820a5c)));
  /* 117f6209 push ecx */
  push32((uint32_t)(ECX));
  /* 117f620a call dword ptr [0x118253e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253e0))), 0x117f6210u);
  /* 117f6210 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f6212 jne 0x117f6218 */
  if (!C.zf) goto L_117f6218;
L_117f6214:;
  /* 117f6214 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f6216 jmp 0x117f623e */
  goto L_117f623e;
L_117f6218:;
  /* 117f6218 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f621b push edx */
  push32((uint32_t)(EDX));
  /* 117f621c call 0x117f6280 */
  push32(0x117f6221u); f_117f6280();
  /* 117f6221 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6224 call dword ptr [0x118253dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253dc))), 0x117f622au);
  /* 117f622a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f622d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117f622f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6232 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 117f6239 mov eax, 1 */
  EAX = (0x1u);
L_117f623e:;
  /* 117f623e mov esp, ebp */
  ESP = (EBP);
  /* 117f6240 pop ebp */
  EBP = (pop32());
  /* 117f6241 ret  */
  ESPCHK(0x117f61c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006250 @ 0x117f6250 (41 bytes, 11 insns) */
void f_117f6250(void) {
  FTRACE(0x117f6250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f6250 push ebp */
  push32((uint32_t)(EBP));
  /* 117f6251 mov ebp, esp */
  EBP = (ESP);
  /* 117f6253 call 0x117fa1c0 */
  push32(0x117f6258u); f_117fa1c0();
  /* 117f6258 cmp dword ptr [0x11820a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11820a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f625f je 0x117f6277 */
  if (C.zf) goto L_117f6277;
  /* 117f6261 mov eax, dword ptr [0x11820a5c] */
  EAX = (r32((uint32_t)(0x11820a5c)));
  /* 117f6266 push eax */
  push32((uint32_t)(EAX));
  /* 117f6267 call dword ptr [0x118253d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253d0))), 0x117f626du);
  /* 117f626d mov dword ptr [0x11820a5c], 0xffffffff */
  w32((uint32_t)(0x11820a5c), (0xffffffffu));
L_117f6277:;
  /* 117f6277 pop ebp */
  EBP = (pop32());
  /* 117f6278 ret  */
  ESPCHK(0x117f6250u, _esp0);
  ESP += 4; return;
}

/* FUN_10006280 @ 0x117f6280 (25 bytes, 8 insns) */
void f_117f6280(void) {
  FTRACE(0x117f6280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f6280 push ebp */
  push32((uint32_t)(EBP));
  /* 117f6281 mov ebp, esp */
  EBP = (ESP);
  /* 117f6283 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f6286 mov dword ptr [eax + 0x50], 0x11820c00 */
  w32((uint32_t)(EAX + 0x50), (0x11820c00u));
  /* 117f628d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f6290 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 117f6297 pop ebp */
  EBP = (pop32());
  /* 117f6298 ret  */
  ESPCHK(0x117f6280u, _esp0);
  ESP += 4; return;
}

/* FUN_100062a0 @ 0x117f62a0 (152 bytes, 48 insns) */
void f_117f62a0(void) {
  FTRACE(0x117f62a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f62a0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f62a1 mov ebp, esp */
  EBP = (ESP);
  /* 117f62a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f62a6 call dword ptr [0x118253f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253f0))), 0x117f62acu);
  /* 117f62ac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117f62af mov eax, dword ptr [0x11820a5c] */
  EAX = (r32((uint32_t)(0x11820a5c)));
  /* 117f62b4 push eax */
  push32((uint32_t)(EAX));
  /* 117f62b5 call dword ptr [0x118253ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253ec))), 0x117f62bbu);
  /* 117f62bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f62be cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f62c2 jne 0x117f6327 */
  if (!C.zf) goto L_117f6327;
  /* 117f62c4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 117f62c9 push 0x1181db08 */
  push32((uint32_t)(0x1181db08u));
  /* 117f62ce push 2 */
  push32((uint32_t)(0x2u));
  /* 117f62d0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 117f62d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f62d4 call 0x117f6c70 */
  push32(0x117f62d9u); f_117f6c70();
  /* 117f62d9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f62dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f62df cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f62e3 je 0x117f631d */
  if (C.zf) goto L_117f631d;
  /* 117f62e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f62e8 push ecx */
  push32((uint32_t)(ECX));
  /* 117f62e9 mov edx, dword ptr [0x11820a5c] */
  EDX = (r32((uint32_t)(0x11820a5c)));
  /* 117f62ef push edx */
  push32((uint32_t)(EDX));
  /* 117f62f0 call dword ptr [0x118253e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253e0))), 0x117f62f6u);
  /* 117f62f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f62f8 je 0x117f631d */
  if (C.zf) goto L_117f631d;
  /* 117f62fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f62fd push eax */
  push32((uint32_t)(EAX));
  /* 117f62fe call 0x117f6280 */
  push32(0x117f6303u); f_117f6280();
  /* 117f6303 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6306 call dword ptr [0x118253dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253dc))), 0x117f630cu);
  /* 117f630c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f630f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117f6311 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6314 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 117f631b jmp 0x117f6327 */
  goto L_117f6327;
L_117f631d:;
  /* 117f631d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 117f631f call 0x117f57d0 */
  push32(0x117f6324u); f_117f57d0();
  /* 117f6324 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f6327:;
  /* 117f6327 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f632a push eax */
  push32((uint32_t)(EAX));
  /* 117f632b call dword ptr [0x118253e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253e8))), 0x117f6331u);
  /* 117f6331 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6334 mov esp, ebp */
  ESP = (EBP);
  /* 117f6336 pop ebp */
  EBP = (pop32());
  /* 117f6337 ret  */
  ESPCHK(0x117f62a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006340 @ 0x117f6340 (263 bytes, 86 insns) */
void f_117f6340(void) {
  FTRACE(0x117f6340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f6340 push ebp */
  push32((uint32_t)(EBP));
  /* 117f6341 mov ebp, esp */
  EBP = (ESP);
  /* 117f6343 cmp dword ptr [0x11820a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11820a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f634a je 0x117f6445 */
  if (C.zf) goto L_117f6445;
  /* 117f6350 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6354 jne 0x117f6365 */
  if (!C.zf) goto L_117f6365;
  /* 117f6356 mov eax, dword ptr [0x11820a5c] */
  EAX = (r32((uint32_t)(0x11820a5c)));
  /* 117f635b push eax */
  push32((uint32_t)(EAX));
  /* 117f635c call dword ptr [0x118253ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253ec))), 0x117f6362u);
  /* 117f6362 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_117f6365:;
  /* 117f6365 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6369 je 0x117f6436 */
  if (C.zf) goto L_117f6436;
  /* 117f636f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f6372 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6376 je 0x117f6389 */
  if (C.zf) goto L_117f6389;
  /* 117f6378 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f637a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f637d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 117f6380 push eax */
  push32((uint32_t)(EAX));
  /* 117f6381 call 0x117f72f0 */
  push32(0x117f6386u); f_117f72f0();
  /* 117f6386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f6389:;
  /* 117f6389 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f638c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6390 je 0x117f63a3 */
  if (C.zf) goto L_117f63a3;
  /* 117f6392 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f6394 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f6397 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 117f639a push eax */
  push32((uint32_t)(EAX));
  /* 117f639b call 0x117f72f0 */
  push32(0x117f63a0u); f_117f72f0();
  /* 117f63a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f63a3:;
  /* 117f63a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f63a6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f63aa je 0x117f63bd */
  if (C.zf) goto L_117f63bd;
  /* 117f63ac push 2 */
  push32((uint32_t)(0x2u));
  /* 117f63ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f63b1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 117f63b4 push eax */
  push32((uint32_t)(EAX));
  /* 117f63b5 call 0x117f72f0 */
  push32(0x117f63bau); f_117f72f0();
  /* 117f63ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f63bd:;
  /* 117f63bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f63c0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f63c4 je 0x117f63d7 */
  if (C.zf) goto L_117f63d7;
  /* 117f63c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f63c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f63cb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 117f63ce push eax */
  push32((uint32_t)(EAX));
  /* 117f63cf call 0x117f72f0 */
  push32(0x117f63d4u); f_117f72f0();
  /* 117f63d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f63d7:;
  /* 117f63d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f63da cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f63de je 0x117f63f1 */
  if (C.zf) goto L_117f63f1;
  /* 117f63e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f63e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f63e5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 117f63e8 push eax */
  push32((uint32_t)(EAX));
  /* 117f63e9 call 0x117f72f0 */
  push32(0x117f63eeu); f_117f72f0();
  /* 117f63ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f63f1:;
  /* 117f63f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f63f4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f63f8 je 0x117f640b */
  if (C.zf) goto L_117f640b;
  /* 117f63fa push 2 */
  push32((uint32_t)(0x2u));
  /* 117f63fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f63ff mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 117f6402 push eax */
  push32((uint32_t)(EAX));
  /* 117f6403 call 0x117f72f0 */
  push32(0x117f6408u); f_117f72f0();
  /* 117f6408 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f640b:;
  /* 117f640b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f640e cmp dword ptr [ecx + 0x50], 0x11820c00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x11820c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6415 je 0x117f6428 */
  if (C.zf) goto L_117f6428;
  /* 117f6417 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f6419 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f641c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 117f641f push eax */
  push32((uint32_t)(EAX));
  /* 117f6420 call 0x117f72f0 */
  push32(0x117f6425u); f_117f72f0();
  /* 117f6425 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f6428:;
  /* 117f6428 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f642a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f642d push ecx */
  push32((uint32_t)(ECX));
  /* 117f642e call 0x117f72f0 */
  push32(0x117f6433u); f_117f72f0();
  /* 117f6433 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f6436:;
  /* 117f6436 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6438 mov edx, dword ptr [0x11820a5c] */
  EDX = (r32((uint32_t)(0x11820a5c)));
  /* 117f643e push edx */
  push32((uint32_t)(EDX));
  /* 117f643f call dword ptr [0x118253e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253e0))), 0x117f6445u);
L_117f6445:;
  /* 117f6445 pop ebp */
  EBP = (pop32());
  /* 117f6446 ret  */
  ESPCHK(0x117f6340u, _esp0);
  ESP += 4; return;
}

/* FUN_10006450 @ 0x117f6450 (11 bytes, 5 insns) */
void f_117f6450(void) {
  FTRACE(0x117f6450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f6450 push ebp */
  push32((uint32_t)(EBP));
  /* 117f6451 mov ebp, esp */
  EBP = (ESP);
  /* 117f6453 call dword ptr [0x118253dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253dc))), 0x117f6459u);
  /* 117f6459 pop ebp */
  EBP = (pop32());
  /* 117f645a ret  */
  ESPCHK(0x117f6450u, _esp0);
  ESP += 4; return;
}

/* FUN_10006460 @ 0x117f6460 (11 bytes, 5 insns) */
void f_117f6460(void) {
  FTRACE(0x117f6460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f6460 push ebp */
  push32((uint32_t)(EBP));
  /* 117f6461 mov ebp, esp */
  EBP = (ESP);
  /* 117f6463 call dword ptr [0x118253f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253f4))), 0x117f6469u);
  /* 117f6469 pop ebp */
  EBP = (pop32());
  /* 117f646a ret  */
  ESPCHK(0x117f6460u, _esp0);
  ESP += 4; return;
}

/* FUN_10006470 @ 0x117f6470 (804 bytes, 236 insns) */
void f_117f6470(void) {
  FTRACE(0x117f6470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f6470 push ebp */
  push32((uint32_t)(EBP));
  /* 117f6471 mov ebp, esp */
  EBP = (ESP);
  /* 117f6473 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f6476 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 117f647b push 0x1181db14 */
  push32((uint32_t)(0x1181db14u));
  /* 117f6480 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f6482 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 117f6487 call 0x117f6860 */
  push32(0x117f648cu); f_117f6860();
  /* 117f648c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f648f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 117f6492 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6496 jne 0x117f64a2 */
  if (!C.zf) goto L_117f64a2;
  /* 117f6498 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 117f649a call 0x117f57d0 */
  push32(0x117f649fu); f_117f57d0();
  /* 117f649f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f64a2:;
  /* 117f64a2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f64a5 mov dword ptr [0x118240c0], eax */
  w32((uint32_t)(0x118240c0), (EAX));
  /* 117f64aa mov dword ptr [0x118241fc], 0x20 */
  w32((uint32_t)(0x118241fc), (0x20u));
  /* 117f64b4 jmp 0x117f64bf */
  goto L_117f64bf;
L_117f64b6:;
  /* 117f64b6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f64b9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f64bc mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_117f64bf:;
  /* 117f64bf mov edx, dword ptr [0x118240c0] */
  EDX = (r32((uint32_t)(0x118240c0)));
  /* 117f64c5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f64cb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f64ce jae 0x117f64f3 */
  if (!C.cf) goto L_117f64f3;
  /* 117f64d0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f64d3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 117f64d7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f64da mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 117f64e0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f64e3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 117f64e7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f64ea mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 117f64f1 jmp 0x117f64b6 */
  goto L_117f64b6;
L_117f64f3:;
  /* 117f64f3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 117f64f6 push ecx */
  push32((uint32_t)(ECX));
  /* 117f64f7 call dword ptr [0x118253a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253a0))), 0x117f64fdu);
  /* 117f64fd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 117f6500 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 117f6506 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f6508 je 0x117f6695 */
  if (C.zf) goto L_117f6695;
  /* 117f650e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6512 je 0x117f6695 */
  if (C.zf) goto L_117f6695;
  /* 117f6518 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117f651b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117f651d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 117f6520 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117f6523 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6526 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117f6529 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f652c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f652f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 117f6532 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6539 jge 0x117f6543 */
  if ((C.sf==C.of)) goto L_117f6543;
  /* 117f653b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 117f653e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 117f6541 jmp 0x117f654a */
  goto L_117f654a;
L_117f6543:;
  /* 117f6543 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_117f654a:;
  /* 117f654a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 117f654d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 117f6550 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 117f6557 jmp 0x117f6562 */
  goto L_117f6562;
L_117f6559:;
  /* 117f6559 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 117f655c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f655f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_117f6562:;
  /* 117f6562 mov ecx, dword ptr [0x118241fc] */
  ECX = (r32((uint32_t)(0x118241fc)));
  /* 117f6568 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f656b jge 0x117f6602 */
  if ((C.sf==C.of)) goto L_117f6602;
  /* 117f6571 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 117f6576 push 0x1181db14 */
  push32((uint32_t)(0x1181db14u));
  /* 117f657b push 2 */
  push32((uint32_t)(0x2u));
  /* 117f657d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 117f6582 call 0x117f6860 */
  push32(0x117f6587u); f_117f6860();
  /* 117f6587 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f658a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 117f658d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6591 jne 0x117f659e */
  if (!C.zf) goto L_117f659e;
  /* 117f6593 mov edx, dword ptr [0x118241fc] */
  EDX = (r32((uint32_t)(0x118241fc)));
  /* 117f6599 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 117f659c jmp 0x117f6602 */
  goto L_117f6602;
L_117f659e:;
  /* 117f659e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 117f65a1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f65a4 mov dword ptr [eax*4 + 0x118240c0], ecx */
  w32((uint32_t)(EAX*4 + 0x118240c0), (ECX));
  /* 117f65ab mov edx, dword ptr [0x118241fc] */
  EDX = (r32((uint32_t)(0x118241fc)));
  /* 117f65b1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f65b4 mov dword ptr [0x118241fc], edx */
  w32((uint32_t)(0x118241fc), (EDX));
  /* 117f65ba jmp 0x117f65c5 */
  goto L_117f65c5;
L_117f65bc:;
  /* 117f65bc mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f65bf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f65c2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_117f65c5:;
  /* 117f65c5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 117f65c8 mov edx, dword ptr [ecx*4 + 0x118240c0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x118240c0)));
  /* 117f65cf add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f65d5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f65d8 jae 0x117f65fd */
  if (!C.cf) goto L_117f65fd;
  /* 117f65da mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f65dd mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 117f65e1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f65e4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 117f65ea mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f65ed mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 117f65f1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f65f4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 117f65fb jmp 0x117f65bc */
  goto L_117f65bc;
L_117f65fd:;
  /* 117f65fd jmp 0x117f6559 */
  goto L_117f6559;
L_117f6602:;
  /* 117f6602 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 117f6609 jmp 0x117f6626 */
  goto L_117f6626;
L_117f660b:;
  /* 117f660b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 117f660e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6611 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 117f6614 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6617 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f661a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117f661d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 117f6620 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6623 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_117f6626:;
  /* 117f6626 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 117f6629 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f662c jge 0x117f6695 */
  if ((C.sf==C.of)) goto L_117f6695;
  /* 117f662e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 117f6631 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6634 je 0x117f6690 */
  if (C.zf) goto L_117f6690;
  /* 117f6636 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6639 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117f663c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 117f663f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f6641 je 0x117f6690 */
  if (C.zf) goto L_117f6690;
  /* 117f6643 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6646 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 117f6649 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 117f664c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f664e jne 0x117f6660 */
  if (!C.zf) goto L_117f6660;
  /* 117f6650 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 117f6653 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117f6655 push edx */
  push32((uint32_t)(EDX));
  /* 117f6656 call dword ptr [0x118253cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253cc))), 0x117f665cu);
  /* 117f665c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f665e je 0x117f6690 */
  if (C.zf) goto L_117f6690;
L_117f6660:;
  /* 117f6660 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 117f6663 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117f6666 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 117f6669 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 117f666c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117f666f mov edx, dword ptr [eax*4 + 0x118240c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x118240c0)));
  /* 117f6676 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6678 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 117f667b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f667e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 117f6681 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117f6683 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 117f6685 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f6688 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f668b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117f668d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_117f6690:;
  /* 117f6690 jmp 0x117f660b */
  goto L_117f660b;
L_117f6695:;
  /* 117f6695 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 117f669c jmp 0x117f66a7 */
  goto L_117f66a7;
L_117f669e:;
  /* 117f669e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 117f66a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f66a4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_117f66a7:;
  /* 117f66a7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f66ab jge 0x117f6784 */
  if ((C.sf==C.of)) goto L_117f6784;
  /* 117f66b1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 117f66b4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117f66b7 mov edx, dword ptr [0x118240c0] */
  EDX = (r32((uint32_t)(0x118240c0)));
  /* 117f66bd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f66bf mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 117f66c2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f66c5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f66c8 jne 0x117f6770 */
  if (!C.zf) goto L_117f6770;
  /* 117f66ce mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f66d1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 117f66d5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f66d9 jne 0x117f66e4 */
  if (!C.zf) goto L_117f66e4;
  /* 117f66db mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 117f66e2 jmp 0x117f66f4 */
  goto L_117f66f4;
L_117f66e4:;
  /* 117f66e4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 117f66e7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f66ea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 117f66ec sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f66ee add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f66f1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_117f66f4:;
  /* 117f66f4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 117f66f7 push eax */
  push32((uint32_t)(EAX));
  /* 117f66f8 call dword ptr [0x118253b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253b0))), 0x117f66feu);
  /* 117f66fe mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 117f6701 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6705 je 0x117f675f */
  if (C.zf) goto L_117f675f;
  /* 117f6707 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 117f670a push ecx */
  push32((uint32_t)(ECX));
  /* 117f670b call dword ptr [0x118253cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253cc))), 0x117f6711u);
  /* 117f6711 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 117f6714 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6718 je 0x117f675f */
  if (C.zf) goto L_117f675f;
  /* 117f671a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f671d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 117f6720 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 117f6722 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 117f6725 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 117f672b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f672e jne 0x117f6740 */
  if (!C.zf) goto L_117f6740;
  /* 117f6730 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f6733 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 117f6736 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 117f6738 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f673b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 117f673e jmp 0x117f675d */
  goto L_117f675d;
L_117f6740:;
  /* 117f6740 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 117f6743 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 117f6749 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f674c jne 0x117f675d */
  if (!C.zf) goto L_117f675d;
  /* 117f674e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f6751 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 117f6754 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 117f6757 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f675a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_117f675d:;
  /* 117f675d jmp 0x117f676e */
  goto L_117f676e;
L_117f675f:;
  /* 117f675f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f6762 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 117f6765 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 117f6768 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f676b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_117f676e:;
  /* 117f676e jmp 0x117f677f */
  goto L_117f677f;
L_117f6770:;
  /* 117f6770 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f6773 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 117f6776 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 117f6779 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f677c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_117f677f:;
  /* 117f677f jmp 0x117f669e */
  goto L_117f669e;
L_117f6784:;
  /* 117f6784 mov eax, dword ptr [0x118241fc] */
  EAX = (r32((uint32_t)(0x118241fc)));
  /* 117f6789 push eax */
  push32((uint32_t)(EAX));
  /* 117f678a call dword ptr [0x118253f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253f8))), 0x117f6790u);
  /* 117f6790 mov esp, ebp */
  ESP = (EBP);
  /* 117f6792 pop ebp */
  EBP = (pop32());
  /* 117f6793 ret  */
  ESPCHK(0x117f6470u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x117f67a0 (155 bytes, 45 insns) */
void f_117f67a0(void) {
  FTRACE(0x117f67a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f67a0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f67a1 mov ebp, esp */
  EBP = (ESP);
  /* 117f67a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f67a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 117f67ad jmp 0x117f67b8 */
  goto L_117f67b8;
L_117f67af:;
  /* 117f67af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f67b2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f67b5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_117f67b8:;
  /* 117f67b8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f67bc jge 0x117f6837 */
  if ((C.sf==C.of)) goto L_117f6837;
  /* 117f67be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f67c1 cmp dword ptr [ecx*4 + 0x118240c0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x118240c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f67c9 je 0x117f6832 */
  if (C.zf) goto L_117f6832;
  /* 117f67cb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f67ce mov eax, dword ptr [edx*4 + 0x118240c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x118240c0)));
  /* 117f67d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f67d8 jmp 0x117f67e3 */
  goto L_117f67e3;
L_117f67da:;
  /* 117f67da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f67dd add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f67e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117f67e3:;
  /* 117f67e3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f67e6 mov eax, dword ptr [edx*4 + 0x118240c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x118240c0)));
  /* 117f67ed add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f67f2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f67f5 jae 0x117f680f */
  if (!C.cf) goto L_117f680f;
  /* 117f67f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f67fa cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f67fe je 0x117f680d */
  if (C.zf) goto L_117f680d;
  /* 117f6800 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6803 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6806 push edx */
  push32((uint32_t)(EDX));
  /* 117f6807 call dword ptr [0x1182539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182539c))), 0x117f680du);
L_117f680d:;
  /* 117f680d jmp 0x117f67da */
  goto L_117f67da;
L_117f680f:;
  /* 117f680f push 2 */
  push32((uint32_t)(0x2u));
  /* 117f6811 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f6814 mov ecx, dword ptr [eax*4 + 0x118240c0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x118240c0)));
  /* 117f681b push ecx */
  push32((uint32_t)(ECX));
  /* 117f681c call 0x117f72f0 */
  push32(0x117f6821u); f_117f72f0();
  /* 117f6821 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6824 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f6827 mov dword ptr [edx*4 + 0x118240c0], 0 */
  w32((uint32_t)(EDX*4 + 0x118240c0), (0x0u));
L_117f6832:;
  /* 117f6832 jmp 0x117f67af */
  goto L_117f67af;
L_117f6837:;
  /* 117f6837 mov esp, ebp */
  ESP = (EBP);
  /* 117f6839 pop ebp */
  EBP = (pop32());
  /* 117f683a ret  */
  ESPCHK(0x117f67a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006840 @ 0x117f6840 (29 bytes, 13 insns) */
void f_117f6840(void) {
  FTRACE(0x117f6840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f6840 push ebp */
  push32((uint32_t)(EBP));
  /* 117f6841 mov ebp, esp */
  EBP = (ESP);
  /* 117f6843 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6845 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6847 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f6849 mov eax, dword ptr [0x118228d8] */
  EAX = (r32((uint32_t)(0x118228d8)));
  /* 117f684e push eax */
  push32((uint32_t)(EAX));
  /* 117f684f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f6852 push ecx */
  push32((uint32_t)(ECX));
  /* 117f6853 call 0x117f68b0 */
  push32(0x117f6858u); f_117f68b0();
  /* 117f6858 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f685b pop ebp */
  EBP = (pop32());
  /* 117f685c ret  */
  ESPCHK(0x117f6840u, _esp0);
  ESP += 4; return;
}

/* FUN_10006860 @ 0x117f6860 (35 bytes, 16 insns) */
void f_117f6860(void) {
  FTRACE(0x117f6860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f6860 push ebp */
  push32((uint32_t)(EBP));
  /* 117f6861 mov ebp, esp */
  EBP = (ESP);
  /* 117f6863 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f6866 push eax */
  push32((uint32_t)(EAX));
  /* 117f6867 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f686a push ecx */
  push32((uint32_t)(ECX));
  /* 117f686b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f686e push edx */
  push32((uint32_t)(EDX));
  /* 117f686f mov eax, dword ptr [0x118228d8] */
  EAX = (r32((uint32_t)(0x118228d8)));
  /* 117f6874 push eax */
  push32((uint32_t)(EAX));
  /* 117f6875 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f6878 push ecx */
  push32((uint32_t)(ECX));
  /* 117f6879 call 0x117f68b0 */
  push32(0x117f687eu); f_117f68b0();
  /* 117f687e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6881 pop ebp */
  EBP = (pop32());
  /* 117f6882 ret  */
  ESPCHK(0x117f6860u, _esp0);
  ESP += 4; return;
}

/* FUN_10006890 @ 0x117f6890 (27 bytes, 13 insns) */
void f_117f6890(void) {
  FTRACE(0x117f6890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f6890 push ebp */
  push32((uint32_t)(EBP));
  /* 117f6891 mov ebp, esp */
  EBP = (ESP);
  /* 117f6893 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6895 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6897 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f6899 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f689c push eax */
  push32((uint32_t)(EAX));
  /* 117f689d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f68a0 push ecx */
  push32((uint32_t)(ECX));
  /* 117f68a1 call 0x117f68b0 */
  push32(0x117f68a6u); f_117f68b0();
  /* 117f68a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f68a9 pop ebp */
  EBP = (pop32());
  /* 117f68aa ret  */
  ESPCHK(0x117f6890u, _esp0);
  ESP += 4; return;
}

/* FUN_100068b0 @ 0x117f68b0 (94 bytes, 38 insns) */
void f_117f68b0(void) {
  FTRACE(0x117f68b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f68b0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f68b1 mov ebp, esp */
  EBP = (ESP);
  /* 117f68b3 push ecx */
  push32((uint32_t)(ECX));
L_117f68b4:;
  /* 117f68b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 117f68b6 call 0x117fa260 */
  push32(0x117f68bbu); f_117fa260();
  /* 117f68bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f68be mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f68c1 push eax */
  push32((uint32_t)(EAX));
  /* 117f68c2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f68c5 push ecx */
  push32((uint32_t)(ECX));
  /* 117f68c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f68c9 push edx */
  push32((uint32_t)(EDX));
  /* 117f68ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f68cd push eax */
  push32((uint32_t)(EAX));
  /* 117f68ce call 0x117f6930 */
  push32(0x117f68d3u); f_117f6930();
  /* 117f68d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f68d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f68d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 117f68db call 0x117fa300 */
  push32(0x117f68e0u); f_117fa300();
  /* 117f68e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f68e3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f68e7 jne 0x117f68ef */
  if (!C.zf) goto L_117f68ef;
  /* 117f68e9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f68ed jne 0x117f68f4 */
  if (!C.zf) goto L_117f68f4;
L_117f68ef:;
  /* 117f68ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f68f2 jmp 0x117f690a */
  goto L_117f690a;
L_117f68f4:;
  /* 117f68f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f68f7 push ecx */
  push32((uint32_t)(ECX));
  /* 117f68f8 call 0x117fa5a0 */
  push32(0x117f68fdu); f_117fa5a0();
  /* 117f68fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6900 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f6902 jne 0x117f6908 */
  if (!C.zf) goto L_117f6908;
  /* 117f6904 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f6906 jmp 0x117f690a */
  goto L_117f690a;
L_117f6908:;
  /* 117f6908 jmp 0x117f68b4 */
  goto L_117f68b4;
L_117f690a:;
  /* 117f690a mov esp, ebp */
  ESP = (EBP);
  /* 117f690c pop ebp */
  EBP = (pop32());
  /* 117f690d ret  */
  ESPCHK(0x117f68b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006910 @ 0x117f6910 (23 bytes, 11 insns) */
void f_117f6910(void) {
  FTRACE(0x117f6910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f6910 push ebp */
  push32((uint32_t)(EBP));
  /* 117f6911 mov ebp, esp */
  EBP = (ESP);
  /* 117f6913 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6915 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6917 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f6919 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f691c push eax */
  push32((uint32_t)(EAX));
  /* 117f691d call 0x117f6930 */
  push32(0x117f6922u); f_117f6930();
  /* 117f6922 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6925 pop ebp */
  EBP = (pop32());
  /* 117f6926 ret  */
  ESPCHK(0x117f6910u, _esp0);
  ESP += 4; return;
}

/* FUN_10006930 @ 0x117f6930 (787 bytes, 254 insns) */
void f_117f6930(void) {
  FTRACE(0x117f6930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f6930 push ebp */
  push32((uint32_t)(EBP));
  /* 117f6931 mov ebp, esp */
  EBP = (ESP);
  /* 117f6933 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f6936 push ebx */
  push32((uint32_t)(EBX));
  /* 117f6937 push esi */
  push32((uint32_t)(ESI));
  /* 117f6938 push edi */
  push32((uint32_t)(EDI));
  /* 117f6939 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 117f6940 mov eax, dword ptr [0x11820a84] */
  EAX = (r32((uint32_t)(0x11820a84)));
  /* 117f6945 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 117f6948 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f694a je 0x117f697c */
  if (C.zf) goto L_117f697c;
L_117f694c:;
  /* 117f694c call 0x117f7a00 */
  push32(0x117f6951u); f_117f7a00();
  /* 117f6951 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f6953 jne 0x117f6976 */
  if (!C.zf) goto L_117f6976;
  /* 117f6955 push 0x1181dc08 */
  push32((uint32_t)(0x1181dc08u));
  /* 117f695a push 0 */
  push32((uint32_t)(0x0u));
  /* 117f695c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 117f6961 push 0x1181dbfc */
  push32((uint32_t)(0x1181dbfcu));
  /* 117f6966 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f6968 call 0x117f5920 */
  push32(0x117f696du); f_117f5920();
  /* 117f696d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6970 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6973 jne 0x117f6976 */
  if (!C.zf) goto L_117f6976;
  /* 117f6975 int3  */
  x86_unimpl("int3 @ 0x117f6975");
L_117f6976:;
  /* 117f6976 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f6978 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f697a jne 0x117f694c */
  if (!C.zf) goto L_117f694c;
L_117f697c:;
  /* 117f697c mov edx, dword ptr [0x11820a88] */
  EDX = (r32((uint32_t)(0x11820a88)));
  /* 117f6982 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 117f6985 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f6988 cmp eax, dword ptr [0x11820a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11820a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f698e jne 0x117f6991 */
  if (!C.zf) goto L_117f6991;
  /* 117f6990 int3  */
  x86_unimpl("int3 @ 0x117f6990");
L_117f6991:;
  /* 117f6991 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f6994 push ecx */
  push32((uint32_t)(ECX));
  /* 117f6995 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f6998 push edx */
  push32((uint32_t)(EDX));
  /* 117f6999 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f699c push eax */
  push32((uint32_t)(EAX));
  /* 117f699d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f69a0 push ecx */
  push32((uint32_t)(ECX));
  /* 117f69a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f69a4 push edx */
  push32((uint32_t)(EDX));
  /* 117f69a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f69a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f69a9 call dword ptr [0x11820c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11820c90))), 0x117f69afu);
  /* 117f69af add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f69b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f69b4 jne 0x117f6a14 */
  if (!C.zf) goto L_117f6a14;
  /* 117f69b6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f69ba je 0x117f69e7 */
  if (C.zf) goto L_117f69e7;
L_117f69bc:;
  /* 117f69bc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f69bf push eax */
  push32((uint32_t)(EAX));
  /* 117f69c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f69c3 push ecx */
  push32((uint32_t)(ECX));
  /* 117f69c4 push 0x1181dbc4 */
  push32((uint32_t)(0x1181dbc4u));
  /* 117f69c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f69cb push 0 */
  push32((uint32_t)(0x0u));
  /* 117f69cd push 0 */
  push32((uint32_t)(0x0u));
  /* 117f69cf push 0 */
  push32((uint32_t)(0x0u));
  /* 117f69d1 call 0x117f5920 */
  push32(0x117f69d6u); f_117f5920();
  /* 117f69d6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f69d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f69dc jne 0x117f69df */
  if (!C.zf) goto L_117f69df;
  /* 117f69de int3  */
  x86_unimpl("int3 @ 0x117f69de");
L_117f69df:;
  /* 117f69df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f69e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f69e3 jne 0x117f69bc */
  if (!C.zf) goto L_117f69bc;
  /* 117f69e5 jmp 0x117f6a0d */
  goto L_117f6a0d;
L_117f69e7:;
  /* 117f69e7 push 0x1181dba0 */
  push32((uint32_t)(0x1181dba0u));
  /* 117f69ec push 0x1181db9c */
  push32((uint32_t)(0x1181db9cu));
  /* 117f69f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f69f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f69f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f69f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f69f9 call 0x117f5920 */
  push32(0x117f69feu); f_117f5920();
  /* 117f69fe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6a01 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6a04 jne 0x117f6a07 */
  if (!C.zf) goto L_117f6a07;
  /* 117f6a06 int3  */
  x86_unimpl("int3 @ 0x117f6a06");
L_117f6a07:;
  /* 117f6a07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f6a09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f6a0b jne 0x117f69e7 */
  if (!C.zf) goto L_117f69e7;
L_117f6a0d:;
  /* 117f6a0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f6a0f jmp 0x117f6c3c */
  goto L_117f6c3c;
L_117f6a14:;
  /* 117f6a14 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f6a17 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 117f6a1d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6a20 je 0x117f6a36 */
  if (C.zf) goto L_117f6a36;
  /* 117f6a22 mov edx, dword ptr [0x11820a84] */
  EDX = (r32((uint32_t)(0x11820a84)));
  /* 117f6a28 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 117f6a2b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f6a2d jne 0x117f6a36 */
  if (!C.zf) goto L_117f6a36;
  /* 117f6a2f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_117f6a36:;
  /* 117f6a36 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6a3a ja 0x117f6a47 */
  if ((!C.cf&&!C.zf)) goto L_117f6a47;
  /* 117f6a3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f6a3f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6a42 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6a45 jbe 0x117f6a73 */
  if ((C.cf||C.zf)) goto L_117f6a73;
L_117f6a47:;
  /* 117f6a47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f6a4a push ecx */
  push32((uint32_t)(ECX));
  /* 117f6a4b push 0x1181db78 */
  push32((uint32_t)(0x1181db78u));
  /* 117f6a50 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6a52 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6a54 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6a56 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f6a58 call 0x117f5920 */
  push32(0x117f6a5du); f_117f5920();
  /* 117f6a5d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6a60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6a63 jne 0x117f6a66 */
  if (!C.zf) goto L_117f6a66;
  /* 117f6a65 int3  */
  x86_unimpl("int3 @ 0x117f6a65");
L_117f6a66:;
  /* 117f6a66 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f6a68 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f6a6a jne 0x117f6a47 */
  if (!C.zf) goto L_117f6a47;
  /* 117f6a6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f6a6e jmp 0x117f6c3c */
  goto L_117f6c3c;
L_117f6a73:;
  /* 117f6a73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f6a76 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f6a7b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6a7e je 0x117f6ac0 */
  if (C.zf) goto L_117f6ac0;
  /* 117f6a80 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6a84 je 0x117f6ac0 */
  if (C.zf) goto L_117f6ac0;
  /* 117f6a86 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f6a89 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 117f6a8f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6a92 je 0x117f6ac0 */
  if (C.zf) goto L_117f6ac0;
  /* 117f6a94 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6a98 je 0x117f6ac0 */
  if (C.zf) goto L_117f6ac0;
L_117f6a9a:;
  /* 117f6a9a push 0x1181db44 */
  push32((uint32_t)(0x1181db44u));
  /* 117f6a9f push 0x1181db9c */
  push32((uint32_t)(0x1181db9cu));
  /* 117f6aa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6aa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6aa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6aaa push 1 */
  push32((uint32_t)(0x1u));
  /* 117f6aac call 0x117f5920 */
  push32(0x117f6ab1u); f_117f5920();
  /* 117f6ab1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6ab4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6ab7 jne 0x117f6aba */
  if (!C.zf) goto L_117f6aba;
  /* 117f6ab9 int3  */
  x86_unimpl("int3 @ 0x117f6ab9");
L_117f6aba:;
  /* 117f6aba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f6abc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f6abe jne 0x117f6a9a */
  if (!C.zf) goto L_117f6a9a;
L_117f6ac0:;
  /* 117f6ac0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f6ac3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6ac6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 117f6ac9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117f6acc push ecx */
  push32((uint32_t)(ECX));
  /* 117f6acd call 0x117fa6b0 */
  push32(0x117f6ad2u); f_117fa6b0();
  /* 117f6ad2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6ad5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f6ad8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6adc jne 0x117f6ae5 */
  if (!C.zf) goto L_117f6ae5;
  /* 117f6ade xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f6ae0 jmp 0x117f6c3c */
  goto L_117f6c3c;
L_117f6ae5:;
  /* 117f6ae5 mov edx, dword ptr [0x11820a88] */
  EDX = (r32((uint32_t)(0x11820a88)));
  /* 117f6aeb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6aee mov dword ptr [0x11820a88], edx */
  w32((uint32_t)(0x11820a88), (EDX));
  /* 117f6af4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6af8 je 0x117f6b43 */
  if (C.zf) goto L_117f6b43;
  /* 117f6afa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6afd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 117f6b03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6b06 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 117f6b0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6b10 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 117f6b17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6b1a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 117f6b21 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6b24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f6b27 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 117f6b2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6b2d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 117f6b34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6b37 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 117f6b3e jmp 0x117f6be3 */
  goto L_117f6be3;
L_117f6b43:;
  /* 117f6b43 mov edx, dword ptr [0x11822738] */
  EDX = (r32((uint32_t)(0x11822738)));
  /* 117f6b49 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6b4c mov dword ptr [0x11822738], edx */
  w32((uint32_t)(0x11822738), (EDX));
  /* 117f6b52 mov eax, dword ptr [0x11822740] */
  EAX = (r32((uint32_t)(0x11822740)));
  /* 117f6b57 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6b5a mov dword ptr [0x11822740], eax */
  w32((uint32_t)(0x11822740), (EAX));
  /* 117f6b5f mov ecx, dword ptr [0x11822740] */
  ECX = (r32((uint32_t)(0x11822740)));
  /* 117f6b65 cmp ecx, dword ptr [0x11822744] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11822744))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6b6b jbe 0x117f6b79 */
  if ((C.cf||C.zf)) goto L_117f6b79;
  /* 117f6b6d mov edx, dword ptr [0x11822740] */
  EDX = (r32((uint32_t)(0x11822740)));
  /* 117f6b73 mov dword ptr [0x11822744], edx */
  w32((uint32_t)(0x11822744), (EDX));
L_117f6b79:;
  /* 117f6b79 cmp dword ptr [0x1182273c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1182273c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6b80 je 0x117f6b8f */
  if (C.zf) goto L_117f6b8f;
  /* 117f6b82 mov eax, dword ptr [0x1182273c] */
  EAX = (r32((uint32_t)(0x1182273c)));
  /* 117f6b87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6b8a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 117f6b8d jmp 0x117f6b98 */
  goto L_117f6b98;
L_117f6b8f:;
  /* 117f6b8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6b92 mov dword ptr [0x11822734], edx */
  w32((uint32_t)(0x11822734), (EDX));
L_117f6b98:;
  /* 117f6b98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6b9b mov ecx, dword ptr [0x1182273c] */
  ECX = (r32((uint32_t)(0x1182273c)));
  /* 117f6ba1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 117f6ba3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6ba6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 117f6bad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6bb0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f6bb3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 117f6bb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6bb9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f6bbc mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 117f6bbf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6bc2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f6bc5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 117f6bc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6bcb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f6bce mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 117f6bd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6bd4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f6bd7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 117f6bda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6bdd mov dword ptr [0x1182273c], ecx */
  w32((uint32_t)(0x1182273c), (ECX));
L_117f6be3:;
  /* 117f6be3 push 4 */
  push32((uint32_t)(0x4u));
  /* 117f6be5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f6be7 mov dl, byte ptr [0x11820a90] */
  DL = (r8((uint32_t)(0x11820a90)));
  /* 117f6bed push edx */
  push32((uint32_t)(EDX));
  /* 117f6bee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6bf1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6bf4 push eax */
  push32((uint32_t)(EAX));
  /* 117f6bf5 call 0x117fa5d0 */
  push32(0x117f6bfau); f_117fa5d0();
  /* 117f6bfa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6bfd push 4 */
  push32((uint32_t)(0x4u));
  /* 117f6bff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f6c01 mov cl, byte ptr [0x11820a90] */
  CL = (r8((uint32_t)(0x11820a90)));
  /* 117f6c07 push ecx */
  push32((uint32_t)(ECX));
  /* 117f6c08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f6c0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6c0e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 117f6c12 push ecx */
  push32((uint32_t)(ECX));
  /* 117f6c13 call 0x117fa5d0 */
  push32(0x117f6c18u); f_117fa5d0();
  /* 117f6c18 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6c1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f6c1e push edx */
  push32((uint32_t)(EDX));
  /* 117f6c1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f6c21 mov al, byte ptr [0x11820a92] */
  AL = (r8((uint32_t)(0x11820a92)));
  /* 117f6c26 push eax */
  push32((uint32_t)(EAX));
  /* 117f6c27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6c2a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6c2d push ecx */
  push32((uint32_t)(ECX));
  /* 117f6c2e call 0x117fa5d0 */
  push32(0x117f6c33u); f_117fa5d0();
  /* 117f6c33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6c36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6c39 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_117f6c3c:;
  /* 117f6c3c pop edi */
  EDI = (pop32());
  /* 117f6c3d pop esi */
  ESI = (pop32());
  /* 117f6c3e pop ebx */
  EBX = (pop32());
  /* 117f6c3f mov esp, ebp */
  ESP = (EBP);
  /* 117f6c41 pop ebp */
  EBP = (pop32());
  /* 117f6c42 ret  */
  ESPCHK(0x117f6930u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c50 @ 0x117f6c50 (27 bytes, 13 insns) */
void f_117f6c50(void) {
  FTRACE(0x117f6c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f6c50 push ebp */
  push32((uint32_t)(EBP));
  /* 117f6c51 mov ebp, esp */
  EBP = (ESP);
  /* 117f6c53 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6c55 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6c57 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f6c59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f6c5c push eax */
  push32((uint32_t)(EAX));
  /* 117f6c5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f6c60 push ecx */
  push32((uint32_t)(ECX));
  /* 117f6c61 call 0x117f6c70 */
  push32(0x117f6c66u); f_117f6c70();
  /* 117f6c66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6c69 pop ebp */
  EBP = (pop32());
  /* 117f6c6a ret  */
  ESPCHK(0x117f6c50u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x117f6c70 (96 bytes, 37 insns) */
void f_117f6c70(void) {
  FTRACE(0x117f6c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f6c70 push ebp */
  push32((uint32_t)(EBP));
  /* 117f6c71 mov ebp, esp */
  EBP = (ESP);
  /* 117f6c73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f6c76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f6c79 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117f6c7d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 117f6c80 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f6c83 push ecx */
  push32((uint32_t)(ECX));
  /* 117f6c84 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f6c87 push edx */
  push32((uint32_t)(EDX));
  /* 117f6c88 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f6c8b push eax */
  push32((uint32_t)(EAX));
  /* 117f6c8c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f6c8f push ecx */
  push32((uint32_t)(ECX));
  /* 117f6c90 call 0x117f6860 */
  push32(0x117f6c95u); f_117f6860();
  /* 117f6c95 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6c98 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117f6c9b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6c9f je 0x117f6cc9 */
  if (C.zf) goto L_117f6cc9;
  /* 117f6ca1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f6ca4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 117f6ca7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f6caa add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6cad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117f6cb0:;
  /* 117f6cb0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f6cb3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6cb6 jae 0x117f6cc9 */
  if (!C.cf) goto L_117f6cc9;
  /* 117f6cb8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f6cbb mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 117f6cbe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f6cc1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6cc4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117f6cc7 jmp 0x117f6cb0 */
  goto L_117f6cb0;
L_117f6cc9:;
  /* 117f6cc9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f6ccc mov esp, ebp */
  ESP = (EBP);
  /* 117f6cce pop ebp */
  EBP = (pop32());
  /* 117f6ccf ret  */
  ESPCHK(0x117f6c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cd0 @ 0x117f6cd0 (27 bytes, 13 insns) */
void f_117f6cd0(void) {
  FTRACE(0x117f6cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f6cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f6cd1 mov ebp, esp */
  EBP = (ESP);
  /* 117f6cd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6cd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6cd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f6cd9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f6cdc push eax */
  push32((uint32_t)(EAX));
  /* 117f6cdd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f6ce0 push ecx */
  push32((uint32_t)(ECX));
  /* 117f6ce1 call 0x117f6cf0 */
  push32(0x117f6ce6u); f_117f6cf0();
  /* 117f6ce6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6ce9 pop ebp */
  EBP = (pop32());
  /* 117f6cea ret  */
  ESPCHK(0x117f6cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cf0 @ 0x117f6cf0 (64 bytes, 27 insns) */
void f_117f6cf0(void) {
  FTRACE(0x117f6cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f6cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f6cf1 mov ebp, esp */
  EBP = (ESP);
  /* 117f6cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 117f6cf4 push 9 */
  push32((uint32_t)(0x9u));
  /* 117f6cf6 call 0x117fa260 */
  push32(0x117f6cfbu); f_117fa260();
  /* 117f6cfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6cfe push 1 */
  push32((uint32_t)(0x1u));
  /* 117f6d00 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f6d03 push eax */
  push32((uint32_t)(EAX));
  /* 117f6d04 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f6d07 push ecx */
  push32((uint32_t)(ECX));
  /* 117f6d08 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f6d0b push edx */
  push32((uint32_t)(EDX));
  /* 117f6d0c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f6d0f push eax */
  push32((uint32_t)(EAX));
  /* 117f6d10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f6d13 push ecx */
  push32((uint32_t)(ECX));
  /* 117f6d14 call 0x117f6d30 */
  push32(0x117f6d19u); f_117f6d30();
  /* 117f6d19 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6d1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f6d1f push 9 */
  push32((uint32_t)(0x9u));
  /* 117f6d21 call 0x117fa300 */
  push32(0x117f6d26u); f_117fa300();
  /* 117f6d26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6d29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f6d2c mov esp, ebp */
  ESP = (EBP);
  /* 117f6d2e pop ebp */
  EBP = (pop32());
  /* 117f6d2f ret  */
  ESPCHK(0x117f6cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d30 @ 0x117f6d30 (1297 bytes, 431 insns) */
void f_117f6d30(void) {
  FTRACE(0x117f6d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f6d30 push ebp */
  push32((uint32_t)(EBP));
  /* 117f6d31 mov ebp, esp */
  EBP = (ESP);
  /* 117f6d33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f6d36 push ebx */
  push32((uint32_t)(EBX));
  /* 117f6d37 push esi */
  push32((uint32_t)(ESI));
  /* 117f6d38 push edi */
  push32((uint32_t)(EDI));
  /* 117f6d39 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 117f6d40 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6d44 jne 0x117f6d63 */
  if (!C.zf) goto L_117f6d63;
  /* 117f6d46 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f6d49 push eax */
  push32((uint32_t)(EAX));
  /* 117f6d4a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f6d4d push ecx */
  push32((uint32_t)(ECX));
  /* 117f6d4e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f6d51 push edx */
  push32((uint32_t)(EDX));
  /* 117f6d52 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f6d55 push eax */
  push32((uint32_t)(EAX));
  /* 117f6d56 call 0x117f6860 */
  push32(0x117f6d5bu); f_117f6860();
  /* 117f6d5b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6d5e jmp 0x117f723a */
  goto L_117f723a;
L_117f6d63:;
  /* 117f6d63 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6d67 je 0x117f6d86 */
  if (C.zf) goto L_117f6d86;
  /* 117f6d69 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6d6d jne 0x117f6d86 */
  if (!C.zf) goto L_117f6d86;
  /* 117f6d6f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f6d72 push ecx */
  push32((uint32_t)(ECX));
  /* 117f6d73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f6d76 push edx */
  push32((uint32_t)(EDX));
  /* 117f6d77 call 0x117f72f0 */
  push32(0x117f6d7cu); f_117f72f0();
  /* 117f6d7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6d7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f6d81 jmp 0x117f723a */
  goto L_117f723a;
L_117f6d86:;
  /* 117f6d86 mov eax, dword ptr [0x11820a84] */
  EAX = (r32((uint32_t)(0x11820a84)));
  /* 117f6d8b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 117f6d8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f6d90 je 0x117f6dc2 */
  if (C.zf) goto L_117f6dc2;
L_117f6d92:;
  /* 117f6d92 call 0x117f7a00 */
  push32(0x117f6d97u); f_117f7a00();
  /* 117f6d97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f6d99 jne 0x117f6dbc */
  if (!C.zf) goto L_117f6dbc;
  /* 117f6d9b push 0x1181dc08 */
  push32((uint32_t)(0x1181dc08u));
  /* 117f6da0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6da2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 117f6da7 push 0x1181dbfc */
  push32((uint32_t)(0x1181dbfcu));
  /* 117f6dac push 2 */
  push32((uint32_t)(0x2u));
  /* 117f6dae call 0x117f5920 */
  push32(0x117f6db3u); f_117f5920();
  /* 117f6db3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6db6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6db9 jne 0x117f6dbc */
  if (!C.zf) goto L_117f6dbc;
  /* 117f6dbb int3  */
  x86_unimpl("int3 @ 0x117f6dbb");
L_117f6dbc:;
  /* 117f6dbc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f6dbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f6dc0 jne 0x117f6d92 */
  if (!C.zf) goto L_117f6d92;
L_117f6dc2:;
  /* 117f6dc2 mov edx, dword ptr [0x11820a88] */
  EDX = (r32((uint32_t)(0x11820a88)));
  /* 117f6dc8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 117f6dcb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117f6dce cmp eax, dword ptr [0x11820a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11820a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6dd4 jne 0x117f6dd7 */
  if (!C.zf) goto L_117f6dd7;
  /* 117f6dd6 int3  */
  x86_unimpl("int3 @ 0x117f6dd6");
L_117f6dd7:;
  /* 117f6dd7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f6dda push ecx */
  push32((uint32_t)(ECX));
  /* 117f6ddb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f6dde push edx */
  push32((uint32_t)(EDX));
  /* 117f6ddf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117f6de2 push eax */
  push32((uint32_t)(EAX));
  /* 117f6de3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f6de6 push ecx */
  push32((uint32_t)(ECX));
  /* 117f6de7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f6dea push edx */
  push32((uint32_t)(EDX));
  /* 117f6deb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f6dee push eax */
  push32((uint32_t)(EAX));
  /* 117f6def push 2 */
  push32((uint32_t)(0x2u));
  /* 117f6df1 call dword ptr [0x11820c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11820c90))), 0x117f6df7u);
  /* 117f6df7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6dfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f6dfc jne 0x117f6e5c */
  if (!C.zf) goto L_117f6e5c;
  /* 117f6dfe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6e02 je 0x117f6e2f */
  if (C.zf) goto L_117f6e2f;
L_117f6e04:;
  /* 117f6e04 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f6e07 push ecx */
  push32((uint32_t)(ECX));
  /* 117f6e08 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f6e0b push edx */
  push32((uint32_t)(EDX));
  /* 117f6e0c push 0x1181dd84 */
  push32((uint32_t)(0x1181dd84u));
  /* 117f6e11 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6e15 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6e17 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6e19 call 0x117f5920 */
  push32(0x117f6e1eu); f_117f5920();
  /* 117f6e1e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6e21 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6e24 jne 0x117f6e27 */
  if (!C.zf) goto L_117f6e27;
  /* 117f6e26 int3  */
  x86_unimpl("int3 @ 0x117f6e26");
L_117f6e27:;
  /* 117f6e27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f6e29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f6e2b jne 0x117f6e04 */
  if (!C.zf) goto L_117f6e04;
  /* 117f6e2d jmp 0x117f6e55 */
  goto L_117f6e55;
L_117f6e2f:;
  /* 117f6e2f push 0x1181dd60 */
  push32((uint32_t)(0x1181dd60u));
  /* 117f6e34 push 0x1181db9c */
  push32((uint32_t)(0x1181db9cu));
  /* 117f6e39 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6e3b push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6e3d push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6e3f push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6e41 call 0x117f5920 */
  push32(0x117f6e46u); f_117f5920();
  /* 117f6e46 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6e49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6e4c jne 0x117f6e4f */
  if (!C.zf) goto L_117f6e4f;
  /* 117f6e4e int3  */
  x86_unimpl("int3 @ 0x117f6e4e");
L_117f6e4f:;
  /* 117f6e4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f6e51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f6e53 jne 0x117f6e2f */
  if (!C.zf) goto L_117f6e2f;
L_117f6e55:;
  /* 117f6e55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f6e57 jmp 0x117f723a */
  goto L_117f723a;
L_117f6e5c:;
  /* 117f6e5c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6e60 jbe 0x117f6e8e */
  if ((C.cf||C.zf)) goto L_117f6e8e;
L_117f6e62:;
  /* 117f6e62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f6e65 push edx */
  push32((uint32_t)(EDX));
  /* 117f6e66 push 0x1181dd30 */
  push32((uint32_t)(0x1181dd30u));
  /* 117f6e6b push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6e6d push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6e6f push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6e71 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f6e73 call 0x117f5920 */
  push32(0x117f6e78u); f_117f5920();
  /* 117f6e78 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6e7b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6e7e jne 0x117f6e81 */
  if (!C.zf) goto L_117f6e81;
  /* 117f6e80 int3  */
  x86_unimpl("int3 @ 0x117f6e80");
L_117f6e81:;
  /* 117f6e81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f6e83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f6e85 jne 0x117f6e62 */
  if (!C.zf) goto L_117f6e62;
  /* 117f6e87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f6e89 jmp 0x117f723a */
  goto L_117f723a;
L_117f6e8e:;
  /* 117f6e8e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6e92 je 0x117f6ed6 */
  if (C.zf) goto L_117f6ed6;
  /* 117f6e94 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f6e97 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 117f6e9d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6ea0 je 0x117f6ed6 */
  if (C.zf) goto L_117f6ed6;
  /* 117f6ea2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f6ea5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 117f6eab cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6eae je 0x117f6ed6 */
  if (C.zf) goto L_117f6ed6;
L_117f6eb0:;
  /* 117f6eb0 push 0x1181db44 */
  push32((uint32_t)(0x1181db44u));
  /* 117f6eb5 push 0x1181db9c */
  push32((uint32_t)(0x1181db9cu));
  /* 117f6eba push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6ebc push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6ebe push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6ec0 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f6ec2 call 0x117f5920 */
  push32(0x117f6ec7u); f_117f5920();
  /* 117f6ec7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6eca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6ecd jne 0x117f6ed0 */
  if (!C.zf) goto L_117f6ed0;
  /* 117f6ecf int3  */
  x86_unimpl("int3 @ 0x117f6ecf");
L_117f6ed0:;
  /* 117f6ed0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f6ed2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f6ed4 jne 0x117f6eb0 */
  if (!C.zf) goto L_117f6eb0;
L_117f6ed6:;
  /* 117f6ed6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f6ed9 push ecx */
  push32((uint32_t)(ECX));
  /* 117f6eda call 0x117f7e60 */
  push32(0x117f6edfu); f_117f7e60();
  /* 117f6edf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6ee2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f6ee4 jne 0x117f6f07 */
  if (!C.zf) goto L_117f6f07;
  /* 117f6ee6 push 0x1181dd0c */
  push32((uint32_t)(0x1181dd0cu));
  /* 117f6eeb push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6eed push 0x261 */
  push32((uint32_t)(0x261u));
  /* 117f6ef2 push 0x1181dbfc */
  push32((uint32_t)(0x1181dbfcu));
  /* 117f6ef7 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f6ef9 call 0x117f5920 */
  push32(0x117f6efeu); f_117f5920();
  /* 117f6efe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6f01 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6f04 jne 0x117f6f07 */
  if (!C.zf) goto L_117f6f07;
  /* 117f6f06 int3  */
  x86_unimpl("int3 @ 0x117f6f06");
L_117f6f07:;
  /* 117f6f07 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f6f09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f6f0b jne 0x117f6ed6 */
  if (!C.zf) goto L_117f6ed6;
  /* 117f6f0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f6f10 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f6f13 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117f6f16 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f6f19 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6f1d jne 0x117f6f26 */
  if (!C.zf) goto L_117f6f26;
  /* 117f6f1f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_117f6f26:;
  /* 117f6f26 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6f2a je 0x117f6f6a */
  if (C.zf) goto L_117f6f6a;
L_117f6f2c:;
  /* 117f6f2c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f6f2f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6f36 jne 0x117f6f41 */
  if (!C.zf) goto L_117f6f41;
  /* 117f6f38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f6f3b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6f3f je 0x117f6f62 */
  if (C.zf) goto L_117f6f62;
L_117f6f41:;
  /* 117f6f41 push 0x1181dcc4 */
  push32((uint32_t)(0x1181dcc4u));
  /* 117f6f46 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6f48 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 117f6f4d push 0x1181dbfc */
  push32((uint32_t)(0x1181dbfcu));
  /* 117f6f52 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f6f54 call 0x117f5920 */
  push32(0x117f6f59u); f_117f5920();
  /* 117f6f59 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6f5c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6f5f jne 0x117f6f62 */
  if (!C.zf) goto L_117f6f62;
  /* 117f6f61 int3  */
  x86_unimpl("int3 @ 0x117f6f61");
L_117f6f62:;
  /* 117f6f62 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f6f64 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f6f66 jne 0x117f6f2c */
  if (!C.zf) goto L_117f6f2c;
  /* 117f6f68 jmp 0x117f6fce */
  goto L_117f6fce;
L_117f6f6a:;
  /* 117f6f6a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f6f6d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117f6f70 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f6f75 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6f78 jne 0x117f6f8f */
  if (!C.zf) goto L_117f6f8f;
  /* 117f6f7a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f6f7d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 117f6f83 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6f86 jne 0x117f6f8f */
  if (!C.zf) goto L_117f6f8f;
  /* 117f6f88 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_117f6f8f:;
  /* 117f6f8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f6f92 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117f6f95 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f6f9a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f6f9d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 117f6fa3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6fa5 je 0x117f6fc8 */
  if (C.zf) goto L_117f6fc8;
  /* 117f6fa7 push 0x1181dc88 */
  push32((uint32_t)(0x1181dc88u));
  /* 117f6fac push 0 */
  push32((uint32_t)(0x0u));
  /* 117f6fae push 0x272 */
  push32((uint32_t)(0x272u));
  /* 117f6fb3 push 0x1181dbfc */
  push32((uint32_t)(0x1181dbfcu));
  /* 117f6fb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f6fba call 0x117f5920 */
  push32(0x117f6fbfu); f_117f5920();
  /* 117f6fbf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6fc2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6fc5 jne 0x117f6fc8 */
  if (!C.zf) goto L_117f6fc8;
  /* 117f6fc7 int3  */
  x86_unimpl("int3 @ 0x117f6fc7");
L_117f6fc8:;
  /* 117f6fc8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f6fca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f6fcc jne 0x117f6f8f */
  if (!C.zf) goto L_117f6f8f;
L_117f6fce:;
  /* 117f6fce cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6fd2 je 0x117f6ff9 */
  if (C.zf) goto L_117f6ff9;
  /* 117f6fd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f6fd7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6fda push eax */
  push32((uint32_t)(EAX));
  /* 117f6fdb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f6fde push ecx */
  push32((uint32_t)(ECX));
  /* 117f6fdf call 0x117fa7e0 */
  push32(0x117f6fe4u); f_117fa7e0();
  /* 117f6fe4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6fe7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117f6fea cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f6fee jne 0x117f6ff7 */
  if (!C.zf) goto L_117f6ff7;
  /* 117f6ff0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f6ff2 jmp 0x117f723a */
  goto L_117f723a;
L_117f6ff7:;
  /* 117f6ff7 jmp 0x117f701c */
  goto L_117f701c;
L_117f6ff9:;
  /* 117f6ff9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f6ffc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f6fff push edx */
  push32((uint32_t)(EDX));
  /* 117f7000 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f7003 push eax */
  push32((uint32_t)(EAX));
  /* 117f7004 call 0x117fa730 */
  push32(0x117f7009u); f_117fa730();
  /* 117f7009 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f700c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117f700f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7013 jne 0x117f701c */
  if (!C.zf) goto L_117f701c;
  /* 117f7015 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f7017 jmp 0x117f723a */
  goto L_117f723a;
L_117f701c:;
  /* 117f701c mov ecx, dword ptr [0x11820a88] */
  ECX = (r32((uint32_t)(0x11820a88)));
  /* 117f7022 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7025 mov dword ptr [0x11820a88], ecx */
  w32((uint32_t)(0x11820a88), (ECX));
  /* 117f702b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f702f jne 0x117f7087 */
  if (!C.zf) goto L_117f7087;
  /* 117f7031 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f7034 mov eax, dword ptr [0x11822738] */
  EAX = (r32((uint32_t)(0x11822738)));
  /* 117f7039 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f703c mov dword ptr [0x11822738], eax */
  w32((uint32_t)(0x11822738), (EAX));
  /* 117f7041 mov ecx, dword ptr [0x11822738] */
  ECX = (r32((uint32_t)(0x11822738)));
  /* 117f7047 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f704a mov dword ptr [0x11822738], ecx */
  w32((uint32_t)(0x11822738), (ECX));
  /* 117f7050 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f7053 mov eax, dword ptr [0x11822740] */
  EAX = (r32((uint32_t)(0x11822740)));
  /* 117f7058 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f705b mov dword ptr [0x11822740], eax */
  w32((uint32_t)(0x11822740), (EAX));
  /* 117f7060 mov ecx, dword ptr [0x11822740] */
  ECX = (r32((uint32_t)(0x11822740)));
  /* 117f7066 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7069 mov dword ptr [0x11822740], ecx */
  w32((uint32_t)(0x11822740), (ECX));
  /* 117f706f mov edx, dword ptr [0x11822740] */
  EDX = (r32((uint32_t)(0x11822740)));
  /* 117f7075 cmp edx, dword ptr [0x11822744] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11822744))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f707b jbe 0x117f7087 */
  if ((C.cf||C.zf)) goto L_117f7087;
  /* 117f707d mov eax, dword ptr [0x11822740] */
  EAX = (r32((uint32_t)(0x11822740)));
  /* 117f7082 mov dword ptr [0x11822744], eax */
  w32((uint32_t)(0x11822744), (EAX));
L_117f7087:;
  /* 117f7087 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f708a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f708d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117f7090 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f7093 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f7096 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7099 jbe 0x117f70bf */
  if ((C.cf||C.zf)) goto L_117f70bf;
  /* 117f709b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f709e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f70a1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f70a4 push edx */
  push32((uint32_t)(EDX));
  /* 117f70a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f70a7 mov al, byte ptr [0x11820a92] */
  AL = (r8((uint32_t)(0x11820a92)));
  /* 117f70ac push eax */
  push32((uint32_t)(EAX));
  /* 117f70ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f70b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f70b3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f70b6 push edx */
  push32((uint32_t)(EDX));
  /* 117f70b7 call 0x117fa5d0 */
  push32(0x117f70bcu); f_117fa5d0();
  /* 117f70bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f70bf:;
  /* 117f70bf push 4 */
  push32((uint32_t)(0x4u));
  /* 117f70c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f70c3 mov al, byte ptr [0x11820a90] */
  AL = (r8((uint32_t)(0x11820a90)));
  /* 117f70c8 push eax */
  push32((uint32_t)(EAX));
  /* 117f70c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f70cc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f70cf push ecx */
  push32((uint32_t)(ECX));
  /* 117f70d0 call 0x117fa5d0 */
  push32(0x117f70d5u); f_117fa5d0();
  /* 117f70d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f70d8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f70dc jne 0x117f70f9 */
  if (!C.zf) goto L_117f70f9;
  /* 117f70de mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f70e1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f70e4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 117f70e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f70ea mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f70ed mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 117f70f0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f70f3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117f70f6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_117f70f9:;
  /* 117f70f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f70fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f70ff mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_117f7102:;
  /* 117f7102 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7106 jne 0x117f7137 */
  if (!C.zf) goto L_117f7137;
  /* 117f7108 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f710c jne 0x117f7116 */
  if (!C.zf) goto L_117f7116;
  /* 117f710e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f7111 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7114 je 0x117f7137 */
  if (C.zf) goto L_117f7137;
L_117f7116:;
  /* 117f7116 push 0x1181dc54 */
  push32((uint32_t)(0x1181dc54u));
  /* 117f711b push 0 */
  push32((uint32_t)(0x0u));
  /* 117f711d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 117f7122 push 0x1181dbfc */
  push32((uint32_t)(0x1181dbfcu));
  /* 117f7127 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f7129 call 0x117f5920 */
  push32(0x117f712eu); f_117f5920();
  /* 117f712e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7131 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7134 jne 0x117f7137 */
  if (!C.zf) goto L_117f7137;
  /* 117f7136 int3  */
  x86_unimpl("int3 @ 0x117f7136");
L_117f7137:;
  /* 117f7137 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f7139 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f713b jne 0x117f7102 */
  if (!C.zf) goto L_117f7102;
  /* 117f713d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f7140 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7143 je 0x117f714b */
  if (C.zf) goto L_117f714b;
  /* 117f7145 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7149 je 0x117f7153 */
  if (C.zf) goto L_117f7153;
L_117f714b:;
  /* 117f714b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f714e jmp 0x117f723a */
  goto L_117f723a;
L_117f7153:;
  /* 117f7153 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f7156 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7159 je 0x117f716b */
  if (C.zf) goto L_117f716b;
  /* 117f715b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f715e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117f7160 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f7163 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117f7166 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 117f7169 jmp 0x117f71a7 */
  goto L_117f71a7;
L_117f716b:;
  /* 117f716b mov eax, dword ptr [0x11822734] */
  EAX = (r32((uint32_t)(0x11822734)));
  /* 117f7170 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7173 je 0x117f7196 */
  if (C.zf) goto L_117f7196;
  /* 117f7175 push 0x1181dc38 */
  push32((uint32_t)(0x1181dc38u));
  /* 117f717a push 0 */
  push32((uint32_t)(0x0u));
  /* 117f717c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 117f7181 push 0x1181dbfc */
  push32((uint32_t)(0x1181dbfcu));
  /* 117f7186 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f7188 call 0x117f5920 */
  push32(0x117f718du); f_117f5920();
  /* 117f718d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7190 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7193 jne 0x117f7196 */
  if (!C.zf) goto L_117f7196;
  /* 117f7195 int3  */
  x86_unimpl("int3 @ 0x117f7195");
L_117f7196:;
  /* 117f7196 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f7198 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f719a jne 0x117f716b */
  if (!C.zf) goto L_117f716b;
  /* 117f719c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f719f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 117f71a2 mov dword ptr [0x11822734], eax */
  w32((uint32_t)(0x11822734), (EAX));
L_117f71a7:;
  /* 117f71a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f71aa cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f71ae je 0x117f71bf */
  if (C.zf) goto L_117f71bf;
  /* 117f71b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f71b3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 117f71b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f71b9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117f71bb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 117f71bd jmp 0x117f71fa */
  goto L_117f71fa;
L_117f71bf:;
  /* 117f71bf mov eax, dword ptr [0x1182273c] */
  EAX = (r32((uint32_t)(0x1182273c)));
  /* 117f71c4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f71c7 je 0x117f71ea */
  if (C.zf) goto L_117f71ea;
  /* 117f71c9 push 0x1181dc1c */
  push32((uint32_t)(0x1181dc1cu));
  /* 117f71ce push 0 */
  push32((uint32_t)(0x0u));
  /* 117f71d0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 117f71d5 push 0x1181dbfc */
  push32((uint32_t)(0x1181dbfcu));
  /* 117f71da push 2 */
  push32((uint32_t)(0x2u));
  /* 117f71dc call 0x117f5920 */
  push32(0x117f71e1u); f_117f5920();
  /* 117f71e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f71e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f71e7 jne 0x117f71ea */
  if (!C.zf) goto L_117f71ea;
  /* 117f71e9 int3  */
  x86_unimpl("int3 @ 0x117f71e9");
L_117f71ea:;
  /* 117f71ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f71ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f71ee jne 0x117f71bf */
  if (!C.zf) goto L_117f71bf;
  /* 117f71f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f71f3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117f71f5 mov dword ptr [0x1182273c], eax */
  w32((uint32_t)(0x1182273c), (EAX));
L_117f71fa:;
  /* 117f71fa cmp dword ptr [0x1182273c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1182273c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7201 je 0x117f7211 */
  if (C.zf) goto L_117f7211;
  /* 117f7203 mov ecx, dword ptr [0x1182273c] */
  ECX = (r32((uint32_t)(0x1182273c)));
  /* 117f7209 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f720c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 117f720f jmp 0x117f7219 */
  goto L_117f7219;
L_117f7211:;
  /* 117f7211 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f7214 mov dword ptr [0x11822734], eax */
  w32((uint32_t)(0x11822734), (EAX));
L_117f7219:;
  /* 117f7219 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f721c mov edx, dword ptr [0x1182273c] */
  EDX = (r32((uint32_t)(0x1182273c)));
  /* 117f7222 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 117f7224 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f7227 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 117f722e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f7231 mov dword ptr [0x1182273c], ecx */
  w32((uint32_t)(0x1182273c), (ECX));
  /* 117f7237 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_117f723a:;
  /* 117f723a pop edi */
  EDI = (pop32());
  /* 117f723b pop esi */
  ESI = (pop32());
  /* 117f723c pop ebx */
  EBX = (pop32());
  /* 117f723d mov esp, ebp */
  ESP = (EBP);
  /* 117f723f pop ebp */
  EBP = (pop32());
  /* 117f7240 ret  */
  ESPCHK(0x117f6d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007250 @ 0x117f7250 (27 bytes, 13 insns) */
void f_117f7250(void) {
  FTRACE(0x117f7250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f7250 push ebp */
  push32((uint32_t)(EBP));
  /* 117f7251 mov ebp, esp */
  EBP = (ESP);
  /* 117f7253 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7255 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7257 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f7259 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f725c push eax */
  push32((uint32_t)(EAX));
  /* 117f725d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f7260 push ecx */
  push32((uint32_t)(ECX));
  /* 117f7261 call 0x117f7270 */
  push32(0x117f7266u); f_117f7270();
  /* 117f7266 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7269 pop ebp */
  EBP = (pop32());
  /* 117f726a ret  */
  ESPCHK(0x117f7250u, _esp0);
  ESP += 4; return;
}

/* FUN_10007270 @ 0x117f7270 (64 bytes, 27 insns) */
void f_117f7270(void) {
  FTRACE(0x117f7270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f7270 push ebp */
  push32((uint32_t)(EBP));
  /* 117f7271 mov ebp, esp */
  EBP = (ESP);
  /* 117f7273 push ecx */
  push32((uint32_t)(ECX));
  /* 117f7274 push 9 */
  push32((uint32_t)(0x9u));
  /* 117f7276 call 0x117fa260 */
  push32(0x117f727bu); f_117fa260();
  /* 117f727b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f727e push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7280 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f7283 push eax */
  push32((uint32_t)(EAX));
  /* 117f7284 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f7287 push ecx */
  push32((uint32_t)(ECX));
  /* 117f7288 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f728b push edx */
  push32((uint32_t)(EDX));
  /* 117f728c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f728f push eax */
  push32((uint32_t)(EAX));
  /* 117f7290 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f7293 push ecx */
  push32((uint32_t)(ECX));
  /* 117f7294 call 0x117f6d30 */
  push32(0x117f7299u); f_117f6d30();
  /* 117f7299 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f729c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f729f push 9 */
  push32((uint32_t)(0x9u));
  /* 117f72a1 call 0x117fa300 */
  push32(0x117f72a6u); f_117fa300();
  /* 117f72a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f72a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f72ac mov esp, ebp */
  ESP = (EBP);
  /* 117f72ae pop ebp */
  EBP = (pop32());
  /* 117f72af ret  */
  ESPCHK(0x117f7270u, _esp0);
  ESP += 4; return;
}

/* FUN_100072b0 @ 0x117f72b0 (19 bytes, 9 insns) */
void f_117f72b0(void) {
  FTRACE(0x117f72b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f72b0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f72b1 mov ebp, esp */
  EBP = (ESP);
  /* 117f72b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f72b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f72b8 push eax */
  push32((uint32_t)(EAX));
  /* 117f72b9 call 0x117f72f0 */
  push32(0x117f72beu); f_117f72f0();
  /* 117f72be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f72c1 pop ebp */
  EBP = (pop32());
  /* 117f72c2 ret  */
  ESPCHK(0x117f72b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100072d0 @ 0x117f72d0 (19 bytes, 9 insns) */
void f_117f72d0(void) {
  FTRACE(0x117f72d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f72d0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f72d1 mov ebp, esp */
  EBP = (ESP);
  /* 117f72d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f72d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f72d8 push eax */
  push32((uint32_t)(EAX));
  /* 117f72d9 call 0x117f7320 */
  push32(0x117f72deu); f_117f7320();
  /* 117f72de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f72e1 pop ebp */
  EBP = (pop32());
  /* 117f72e2 ret  */
  ESPCHK(0x117f72d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100072f0 @ 0x117f72f0 (41 bytes, 16 insns) */
void f_117f72f0(void) {
  FTRACE(0x117f72f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f72f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f72f1 mov ebp, esp */
  EBP = (ESP);
  /* 117f72f3 push 9 */
  push32((uint32_t)(0x9u));
  /* 117f72f5 call 0x117fa260 */
  push32(0x117f72fau); f_117fa260();
  /* 117f72fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f72fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f7300 push eax */
  push32((uint32_t)(EAX));
  /* 117f7301 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f7304 push ecx */
  push32((uint32_t)(ECX));
  /* 117f7305 call 0x117f7320 */
  push32(0x117f730au); f_117f7320();
  /* 117f730a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f730d push 9 */
  push32((uint32_t)(0x9u));
  /* 117f730f call 0x117fa300 */
  push32(0x117f7314u); f_117fa300();
  /* 117f7314 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7317 pop ebp */
  EBP = (pop32());
  /* 117f7318 ret  */
  ESPCHK(0x117f72f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007320 @ 0x117f7320 (1004 bytes, 342 insns) */
void f_117f7320(void) {
  FTRACE(0x117f7320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f7320 push ebp */
  push32((uint32_t)(EBP));
  /* 117f7321 mov ebp, esp */
  EBP = (ESP);
  /* 117f7323 push ecx */
  push32((uint32_t)(ECX));
  /* 117f7324 push ebx */
  push32((uint32_t)(EBX));
  /* 117f7325 push esi */
  push32((uint32_t)(ESI));
  /* 117f7326 push edi */
  push32((uint32_t)(EDI));
  /* 117f7327 mov eax, dword ptr [0x11820a84] */
  EAX = (r32((uint32_t)(0x11820a84)));
  /* 117f732c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 117f732f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f7331 je 0x117f7363 */
  if (C.zf) goto L_117f7363;
L_117f7333:;
  /* 117f7333 call 0x117f7a00 */
  push32(0x117f7338u); f_117f7a00();
  /* 117f7338 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f733a jne 0x117f735d */
  if (!C.zf) goto L_117f735d;
  /* 117f733c push 0x1181dc08 */
  push32((uint32_t)(0x1181dc08u));
  /* 117f7341 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7343 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 117f7348 push 0x1181dbfc */
  push32((uint32_t)(0x1181dbfcu));
  /* 117f734d push 2 */
  push32((uint32_t)(0x2u));
  /* 117f734f call 0x117f5920 */
  push32(0x117f7354u); f_117f5920();
  /* 117f7354 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7357 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f735a jne 0x117f735d */
  if (!C.zf) goto L_117f735d;
  /* 117f735c int3  */
  x86_unimpl("int3 @ 0x117f735c");
L_117f735d:;
  /* 117f735d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f735f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f7361 jne 0x117f7333 */
  if (!C.zf) goto L_117f7333;
L_117f7363:;
  /* 117f7363 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7367 jne 0x117f736e */
  if (!C.zf) goto L_117f736e;
  /* 117f7369 jmp 0x117f7705 */
  goto L_117f7705;
L_117f736e:;
  /* 117f736e push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7370 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7372 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7374 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f7377 push edx */
  push32((uint32_t)(EDX));
  /* 117f7378 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f737a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f737d push eax */
  push32((uint32_t)(EAX));
  /* 117f737e push 3 */
  push32((uint32_t)(0x3u));
  /* 117f7380 call dword ptr [0x11820c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11820c90))), 0x117f7386u);
  /* 117f7386 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7389 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f738b jne 0x117f73b8 */
  if (!C.zf) goto L_117f73b8;
L_117f738d:;
  /* 117f738d push 0x1181decc */
  push32((uint32_t)(0x1181deccu));
  /* 117f7392 push 0x1181db9c */
  push32((uint32_t)(0x1181db9cu));
  /* 117f7397 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7399 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f739b push 0 */
  push32((uint32_t)(0x0u));
  /* 117f739d push 0 */
  push32((uint32_t)(0x0u));
  /* 117f739f call 0x117f5920 */
  push32(0x117f73a4u); f_117f5920();
  /* 117f73a4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f73a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f73aa jne 0x117f73ad */
  if (!C.zf) goto L_117f73ad;
  /* 117f73ac int3  */
  x86_unimpl("int3 @ 0x117f73ac");
L_117f73ad:;
  /* 117f73ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f73af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f73b1 jne 0x117f738d */
  if (!C.zf) goto L_117f738d;
  /* 117f73b3 jmp 0x117f7705 */
  goto L_117f7705;
L_117f73b8:;
  /* 117f73b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f73bb push edx */
  push32((uint32_t)(EDX));
  /* 117f73bc call 0x117f7e60 */
  push32(0x117f73c1u); f_117f7e60();
  /* 117f73c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f73c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f73c6 jne 0x117f73e9 */
  if (!C.zf) goto L_117f73e9;
  /* 117f73c8 push 0x1181dd0c */
  push32((uint32_t)(0x1181dd0cu));
  /* 117f73cd push 0 */
  push32((uint32_t)(0x0u));
  /* 117f73cf push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 117f73d4 push 0x1181dbfc */
  push32((uint32_t)(0x1181dbfcu));
  /* 117f73d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f73db call 0x117f5920 */
  push32(0x117f73e0u); f_117f5920();
  /* 117f73e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f73e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f73e6 jne 0x117f73e9 */
  if (!C.zf) goto L_117f73e9;
  /* 117f73e8 int3  */
  x86_unimpl("int3 @ 0x117f73e8");
L_117f73e9:;
  /* 117f73e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f73eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f73ed jne 0x117f73b8 */
  if (!C.zf) goto L_117f73b8;
  /* 117f73ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f73f2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f73f5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117f73f8:;
  /* 117f73f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f73fb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117f73fe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f7403 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7406 je 0x117f744b */
  if (C.zf) goto L_117f744b;
  /* 117f7408 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f740b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f740f je 0x117f744b */
  if (C.zf) goto L_117f744b;
  /* 117f7411 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7414 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117f7417 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f741c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f741f je 0x117f744b */
  if (C.zf) goto L_117f744b;
  /* 117f7421 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7424 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7428 je 0x117f744b */
  if (C.zf) goto L_117f744b;
  /* 117f742a push 0x1181dea4 */
  push32((uint32_t)(0x1181dea4u));
  /* 117f742f push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7431 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 117f7436 push 0x1181dbfc */
  push32((uint32_t)(0x1181dbfcu));
  /* 117f743b push 2 */
  push32((uint32_t)(0x2u));
  /* 117f743d call 0x117f5920 */
  push32(0x117f7442u); f_117f5920();
  /* 117f7442 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7445 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7448 jne 0x117f744b */
  if (!C.zf) goto L_117f744b;
  /* 117f744a int3  */
  x86_unimpl("int3 @ 0x117f744a");
L_117f744b:;
  /* 117f744b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f744d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f744f jne 0x117f73f8 */
  if (!C.zf) goto L_117f73f8;
  /* 117f7451 mov eax, dword ptr [0x11820a84] */
  EAX = (r32((uint32_t)(0x11820a84)));
  /* 117f7456 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 117f7459 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f745b jne 0x117f7526 */
  if (!C.zf) goto L_117f7526;
  /* 117f7461 push 4 */
  push32((uint32_t)(0x4u));
  /* 117f7463 mov cl, byte ptr [0x11820a90] */
  CL = (r8((uint32_t)(0x11820a90)));
  /* 117f7469 push ecx */
  push32((uint32_t)(ECX));
  /* 117f746a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f746d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7470 push edx */
  push32((uint32_t)(EDX));
  /* 117f7471 call 0x117f7970 */
  push32(0x117f7476u); f_117f7970();
  /* 117f7476 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7479 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f747b jne 0x117f74c0 */
  if (!C.zf) goto L_117f74c0;
L_117f747d:;
  /* 117f747d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7480 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7483 push eax */
  push32((uint32_t)(EAX));
  /* 117f7484 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7487 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 117f748a push edx */
  push32((uint32_t)(EDX));
  /* 117f748b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f748e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 117f7491 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 117f7497 mov edx, dword ptr [ecx*4 + 0x11820a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11820a94)));
  /* 117f749e push edx */
  push32((uint32_t)(EDX));
  /* 117f749f push 0x1181de78 */
  push32((uint32_t)(0x1181de78u));
  /* 117f74a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f74a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f74a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f74aa push 1 */
  push32((uint32_t)(0x1u));
  /* 117f74ac call 0x117f5920 */
  push32(0x117f74b1u); f_117f5920();
  /* 117f74b1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f74b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f74b7 jne 0x117f74ba */
  if (!C.zf) goto L_117f74ba;
  /* 117f74b9 int3  */
  x86_unimpl("int3 @ 0x117f74b9");
L_117f74ba:;
  /* 117f74ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f74bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f74be jne 0x117f747d */
  if (!C.zf) goto L_117f747d;
L_117f74c0:;
  /* 117f74c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 117f74c2 mov cl, byte ptr [0x11820a90] */
  CL = (r8((uint32_t)(0x11820a90)));
  /* 117f74c8 push ecx */
  push32((uint32_t)(ECX));
  /* 117f74c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f74cc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 117f74cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f74d2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 117f74d6 push edx */
  push32((uint32_t)(EDX));
  /* 117f74d7 call 0x117f7970 */
  push32(0x117f74dcu); f_117f7970();
  /* 117f74dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f74df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f74e1 jne 0x117f7526 */
  if (!C.zf) goto L_117f7526;
L_117f74e3:;
  /* 117f74e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f74e6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f74e9 push eax */
  push32((uint32_t)(EAX));
  /* 117f74ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f74ed mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 117f74f0 push edx */
  push32((uint32_t)(EDX));
  /* 117f74f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f74f4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 117f74f7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 117f74fd mov edx, dword ptr [ecx*4 + 0x11820a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11820a94)));
  /* 117f7504 push edx */
  push32((uint32_t)(EDX));
  /* 117f7505 push 0x1181de4c */
  push32((uint32_t)(0x1181de4cu));
  /* 117f750a push 0 */
  push32((uint32_t)(0x0u));
  /* 117f750c push 0 */
  push32((uint32_t)(0x0u));
  /* 117f750e push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7510 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f7512 call 0x117f5920 */
  push32(0x117f7517u); f_117f5920();
  /* 117f7517 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f751a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f751d jne 0x117f7520 */
  if (!C.zf) goto L_117f7520;
  /* 117f751f int3  */
  x86_unimpl("int3 @ 0x117f751f");
L_117f7520:;
  /* 117f7520 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f7522 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f7524 jne 0x117f74e3 */
  if (!C.zf) goto L_117f74e3;
L_117f7526:;
  /* 117f7526 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7529 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f752d jne 0x117f759b */
  if (!C.zf) goto L_117f759b;
L_117f752f:;
  /* 117f752f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7532 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7539 jne 0x117f7544 */
  if (!C.zf) goto L_117f7544;
  /* 117f753b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f753e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7542 je 0x117f7565 */
  if (C.zf) goto L_117f7565;
L_117f7544:;
  /* 117f7544 push 0x1181de0c */
  push32((uint32_t)(0x1181de0cu));
  /* 117f7549 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f754b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 117f7550 push 0x1181dbfc */
  push32((uint32_t)(0x1181dbfcu));
  /* 117f7555 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f7557 call 0x117f5920 */
  push32(0x117f755cu); f_117f5920();
  /* 117f755c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f755f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7562 jne 0x117f7565 */
  if (!C.zf) goto L_117f7565;
  /* 117f7564 int3  */
  x86_unimpl("int3 @ 0x117f7564");
L_117f7565:;
  /* 117f7565 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f7567 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f7569 jne 0x117f752f */
  if (!C.zf) goto L_117f752f;
  /* 117f756b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f756e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 117f7571 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7574 push eax */
  push32((uint32_t)(EAX));
  /* 117f7575 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f7577 mov cl, byte ptr [0x11820a91] */
  CL = (r8((uint32_t)(0x11820a91)));
  /* 117f757d push ecx */
  push32((uint32_t)(ECX));
  /* 117f757e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7581 push edx */
  push32((uint32_t)(EDX));
  /* 117f7582 call 0x117fa5d0 */
  push32(0x117f7587u); f_117fa5d0();
  /* 117f7587 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f758a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f758d push eax */
  push32((uint32_t)(EAX));
  /* 117f758e call 0x117fa9d0 */
  push32(0x117f7593u); f_117fa9d0();
  /* 117f7593 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7596 jmp 0x117f7705 */
  goto L_117f7705;
L_117f759b:;
  /* 117f759b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f759e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f75a2 jne 0x117f75b1 */
  if (!C.zf) goto L_117f75b1;
  /* 117f75a4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f75a8 jne 0x117f75b1 */
  if (!C.zf) goto L_117f75b1;
  /* 117f75aa mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_117f75b1:;
  /* 117f75b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f75b4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117f75b7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f75ba je 0x117f75dd */
  if (C.zf) goto L_117f75dd;
  /* 117f75bc push 0x1181ddec */
  push32((uint32_t)(0x1181ddecu));
  /* 117f75c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f75c3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 117f75c8 push 0x1181dbfc */
  push32((uint32_t)(0x1181dbfcu));
  /* 117f75cd push 2 */
  push32((uint32_t)(0x2u));
  /* 117f75cf call 0x117f5920 */
  push32(0x117f75d4u); f_117f5920();
  /* 117f75d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f75d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f75da jne 0x117f75dd */
  if (!C.zf) goto L_117f75dd;
  /* 117f75dc int3  */
  x86_unimpl("int3 @ 0x117f75dc");
L_117f75dd:;
  /* 117f75dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f75df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f75e1 jne 0x117f75b1 */
  if (!C.zf) goto L_117f75b1;
  /* 117f75e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f75e6 mov eax, dword ptr [0x11822740] */
  EAX = (r32((uint32_t)(0x11822740)));
  /* 117f75eb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f75ee mov dword ptr [0x11822740], eax */
  w32((uint32_t)(0x11822740), (EAX));
  /* 117f75f3 mov ecx, dword ptr [0x11820a84] */
  ECX = (r32((uint32_t)(0x11820a84)));
  /* 117f75f9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 117f75fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f75fe jne 0x117f76dc */
  if (!C.zf) goto L_117f76dc;
  /* 117f7604 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7607 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f760a je 0x117f761c */
  if (C.zf) goto L_117f761c;
  /* 117f760c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f760f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117f7611 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7614 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 117f7617 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 117f761a jmp 0x117f765a */
  goto L_117f765a;
L_117f761c:;
  /* 117f761c mov ecx, dword ptr [0x11822734] */
  ECX = (r32((uint32_t)(0x11822734)));
  /* 117f7622 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7625 je 0x117f7648 */
  if (C.zf) goto L_117f7648;
  /* 117f7627 push 0x1181ddd4 */
  push32((uint32_t)(0x1181ddd4u));
  /* 117f762c push 0 */
  push32((uint32_t)(0x0u));
  /* 117f762e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 117f7633 push 0x1181dbfc */
  push32((uint32_t)(0x1181dbfcu));
  /* 117f7638 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f763a call 0x117f5920 */
  push32(0x117f763fu); f_117f5920();
  /* 117f763f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7642 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7645 jne 0x117f7648 */
  if (!C.zf) goto L_117f7648;
  /* 117f7647 int3  */
  x86_unimpl("int3 @ 0x117f7647");
L_117f7648:;
  /* 117f7648 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f764a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f764c jne 0x117f761c */
  if (!C.zf) goto L_117f761c;
  /* 117f764e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7651 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117f7654 mov dword ptr [0x11822734], ecx */
  w32((uint32_t)(0x11822734), (ECX));
L_117f765a:;
  /* 117f765a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f765d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7661 je 0x117f7672 */
  if (C.zf) goto L_117f7672;
  /* 117f7663 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7666 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117f7669 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f766c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117f766e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117f7670 jmp 0x117f76af */
  goto L_117f76af;
L_117f7672:;
  /* 117f7672 mov ecx, dword ptr [0x1182273c] */
  ECX = (r32((uint32_t)(0x1182273c)));
  /* 117f7678 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f767b je 0x117f769e */
  if (C.zf) goto L_117f769e;
  /* 117f767d push 0x1181ddbc */
  push32((uint32_t)(0x1181ddbcu));
  /* 117f7682 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7684 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 117f7689 push 0x1181dbfc */
  push32((uint32_t)(0x1181dbfcu));
  /* 117f768e push 2 */
  push32((uint32_t)(0x2u));
  /* 117f7690 call 0x117f5920 */
  push32(0x117f7695u); f_117f5920();
  /* 117f7695 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7698 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f769b jne 0x117f769e */
  if (!C.zf) goto L_117f769e;
  /* 117f769d int3  */
  x86_unimpl("int3 @ 0x117f769d");
L_117f769e:;
  /* 117f769e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f76a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f76a2 jne 0x117f7672 */
  if (!C.zf) goto L_117f7672;
  /* 117f76a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f76a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117f76a9 mov dword ptr [0x1182273c], ecx */
  w32((uint32_t)(0x1182273c), (ECX));
L_117f76af:;
  /* 117f76af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f76b2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 117f76b5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f76b8 push eax */
  push32((uint32_t)(EAX));
  /* 117f76b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f76bb mov cl, byte ptr [0x11820a91] */
  CL = (r8((uint32_t)(0x11820a91)));
  /* 117f76c1 push ecx */
  push32((uint32_t)(ECX));
  /* 117f76c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f76c5 push edx */
  push32((uint32_t)(EDX));
  /* 117f76c6 call 0x117fa5d0 */
  push32(0x117f76cbu); f_117fa5d0();
  /* 117f76cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f76ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f76d1 push eax */
  push32((uint32_t)(EAX));
  /* 117f76d2 call 0x117fa9d0 */
  push32(0x117f76d7u); f_117fa9d0();
  /* 117f76d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f76da jmp 0x117f7705 */
  goto L_117f7705;
L_117f76dc:;
  /* 117f76dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f76df mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 117f76e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f76e9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 117f76ec push eax */
  push32((uint32_t)(EAX));
  /* 117f76ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f76ef mov cl, byte ptr [0x11820a91] */
  CL = (r8((uint32_t)(0x11820a91)));
  /* 117f76f5 push ecx */
  push32((uint32_t)(ECX));
  /* 117f76f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f76f9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f76fc push edx */
  push32((uint32_t)(EDX));
  /* 117f76fd call 0x117fa5d0 */
  push32(0x117f7702u); f_117fa5d0();
  /* 117f7702 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f7705:;
  /* 117f7705 pop edi */
  EDI = (pop32());
  /* 117f7706 pop esi */
  ESI = (pop32());
  /* 117f7707 pop ebx */
  EBX = (pop32());
  /* 117f7708 mov esp, ebp */
  ESP = (EBP);
  /* 117f770a pop ebp */
  EBP = (pop32());
  /* 117f770b ret  */
  ESPCHK(0x117f7320u, _esp0);
  ESP += 4; return;
}

/* FUN_10007710 @ 0x117f7710 (19 bytes, 9 insns) */
void f_117f7710(void) {
  FTRACE(0x117f7710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f7710 push ebp */
  push32((uint32_t)(EBP));
  /* 117f7711 mov ebp, esp */
  EBP = (ESP);
  /* 117f7713 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f7715 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f7718 push eax */
  push32((uint32_t)(EAX));
  /* 117f7719 call 0x117f7730 */
  push32(0x117f771eu); f_117f7730();
  /* 117f771e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7721 pop ebp */
  EBP = (pop32());
  /* 117f7722 ret  */
  ESPCHK(0x117f7710u, _esp0);
  ESP += 4; return;
}

/* FUN_10007730 @ 0x117f7730 (342 bytes, 119 insns) */
void f_117f7730(void) {
  FTRACE(0x117f7730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f7730 push ebp */
  push32((uint32_t)(EBP));
  /* 117f7731 mov ebp, esp */
  EBP = (ESP);
  /* 117f7733 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f7736 push ebx */
  push32((uint32_t)(EBX));
  /* 117f7737 push esi */
  push32((uint32_t)(ESI));
  /* 117f7738 push edi */
  push32((uint32_t)(EDI));
  /* 117f7739 mov eax, dword ptr [0x11820a84] */
  EAX = (r32((uint32_t)(0x11820a84)));
  /* 117f773e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 117f7741 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f7743 je 0x117f7775 */
  if (C.zf) goto L_117f7775;
L_117f7745:;
  /* 117f7745 call 0x117f7a00 */
  push32(0x117f774au); f_117f7a00();
  /* 117f774a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f774c jne 0x117f776f */
  if (!C.zf) goto L_117f776f;
  /* 117f774e push 0x1181dc08 */
  push32((uint32_t)(0x1181dc08u));
  /* 117f7753 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7755 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 117f775a push 0x1181dbfc */
  push32((uint32_t)(0x1181dbfcu));
  /* 117f775f push 2 */
  push32((uint32_t)(0x2u));
  /* 117f7761 call 0x117f5920 */
  push32(0x117f7766u); f_117f5920();
  /* 117f7766 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7769 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f776c jne 0x117f776f */
  if (!C.zf) goto L_117f776f;
  /* 117f776e int3  */
  x86_unimpl("int3 @ 0x117f776e");
L_117f776f:;
  /* 117f776f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f7771 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f7773 jne 0x117f7745 */
  if (!C.zf) goto L_117f7745;
L_117f7775:;
  /* 117f7775 push 9 */
  push32((uint32_t)(0x9u));
  /* 117f7777 call 0x117fa260 */
  push32(0x117f777cu); f_117fa260();
  /* 117f777c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f777f:;
  /* 117f777f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f7782 push edx */
  push32((uint32_t)(EDX));
  /* 117f7783 call 0x117f7e60 */
  push32(0x117f7788u); f_117f7e60();
  /* 117f7788 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f778b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f778d jne 0x117f77b0 */
  if (!C.zf) goto L_117f77b0;
  /* 117f778f push 0x1181dd0c */
  push32((uint32_t)(0x1181dd0cu));
  /* 117f7794 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7796 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 117f779b push 0x1181dbfc */
  push32((uint32_t)(0x1181dbfcu));
  /* 117f77a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f77a2 call 0x117f5920 */
  push32(0x117f77a7u); f_117f5920();
  /* 117f77a7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f77aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f77ad jne 0x117f77b0 */
  if (!C.zf) goto L_117f77b0;
  /* 117f77af int3  */
  x86_unimpl("int3 @ 0x117f77af");
L_117f77b0:;
  /* 117f77b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f77b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f77b4 jne 0x117f777f */
  if (!C.zf) goto L_117f777f;
  /* 117f77b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f77b9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f77bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_117f77bf:;
  /* 117f77bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f77c2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117f77c5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f77ca cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f77cd je 0x117f7812 */
  if (C.zf) goto L_117f7812;
  /* 117f77cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f77d2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f77d6 je 0x117f7812 */
  if (C.zf) goto L_117f7812;
  /* 117f77d8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f77db mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117f77de and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f77e3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f77e6 je 0x117f7812 */
  if (C.zf) goto L_117f7812;
  /* 117f77e8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f77eb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f77ef je 0x117f7812 */
  if (C.zf) goto L_117f7812;
  /* 117f77f1 push 0x1181dea4 */
  push32((uint32_t)(0x1181dea4u));
  /* 117f77f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f77f8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 117f77fd push 0x1181dbfc */
  push32((uint32_t)(0x1181dbfcu));
  /* 117f7802 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f7804 call 0x117f5920 */
  push32(0x117f7809u); f_117f5920();
  /* 117f7809 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f780c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f780f jne 0x117f7812 */
  if (!C.zf) goto L_117f7812;
  /* 117f7811 int3  */
  x86_unimpl("int3 @ 0x117f7811");
L_117f7812:;
  /* 117f7812 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f7814 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f7816 jne 0x117f77bf */
  if (!C.zf) goto L_117f77bf;
  /* 117f7818 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f781b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f781f jne 0x117f782e */
  if (!C.zf) goto L_117f782e;
  /* 117f7821 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7825 jne 0x117f782e */
  if (!C.zf) goto L_117f782e;
  /* 117f7827 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_117f782e:;
  /* 117f782e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f7831 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7835 je 0x117f7869 */
  if (C.zf) goto L_117f7869;
L_117f7837:;
  /* 117f7837 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f783a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117f783d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7840 je 0x117f7863 */
  if (C.zf) goto L_117f7863;
  /* 117f7842 push 0x1181ddec */
  push32((uint32_t)(0x1181ddecu));
  /* 117f7847 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7849 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 117f784e push 0x1181dbfc */
  push32((uint32_t)(0x1181dbfcu));
  /* 117f7853 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f7855 call 0x117f5920 */
  push32(0x117f785au); f_117f5920();
  /* 117f785a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f785d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7860 jne 0x117f7863 */
  if (!C.zf) goto L_117f7863;
  /* 117f7862 int3  */
  x86_unimpl("int3 @ 0x117f7862");
L_117f7863:;
  /* 117f7863 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f7865 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f7867 jne 0x117f7837 */
  if (!C.zf) goto L_117f7837;
L_117f7869:;
  /* 117f7869 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f786c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 117f786f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f7872 push 9 */
  push32((uint32_t)(0x9u));
  /* 117f7874 call 0x117fa300 */
  push32(0x117f7879u); f_117fa300();
  /* 117f7879 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f787c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f787f pop edi */
  EDI = (pop32());
  /* 117f7880 pop esi */
  ESI = (pop32());
  /* 117f7881 pop ebx */
  EBX = (pop32());
  /* 117f7882 mov esp, ebp */
  ESP = (EBP);
  /* 117f7884 pop ebp */
  EBP = (pop32());
  /* 117f7885 ret  */
  ESPCHK(0x117f7730u, _esp0);
  ESP += 4; return;
}

/* FUN_10007890 @ 0x117f7890 (28 bytes, 11 insns) */
void f_117f7890(void) {
  FTRACE(0x117f7890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f7890 push ebp */
  push32((uint32_t)(EBP));
  /* 117f7891 mov ebp, esp */
  EBP = (ESP);
  /* 117f7893 push ecx */
  push32((uint32_t)(ECX));
  /* 117f7894 mov eax, dword ptr [0x11820a8c] */
  EAX = (r32((uint32_t)(0x11820a8c)));
  /* 117f7899 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f789c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f789f mov dword ptr [0x11820a8c], ecx */
  w32((uint32_t)(0x11820a8c), (ECX));
  /* 117f78a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f78a8 mov esp, ebp */
  ESP = (EBP);
  /* 117f78aa pop ebp */
  EBP = (pop32());
  /* 117f78ab ret  */
  ESPCHK(0x117f7890u, _esp0);
  ESP += 4; return;
}

/* FUN_100078b0 @ 0x117f78b0 (157 bytes, 59 insns) */
void f_117f78b0(void) {
  FTRACE(0x117f78b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f78b0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f78b1 mov ebp, esp */
  EBP = (ESP);
  /* 117f78b3 push ecx */
  push32((uint32_t)(ECX));
  /* 117f78b4 push ebx */
  push32((uint32_t)(EBX));
  /* 117f78b5 push esi */
  push32((uint32_t)(ESI));
  /* 117f78b6 push edi */
  push32((uint32_t)(EDI));
  /* 117f78b7 push 9 */
  push32((uint32_t)(0x9u));
  /* 117f78b9 call 0x117fa260 */
  push32(0x117f78beu); f_117fa260();
  /* 117f78be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f78c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f78c4 push eax */
  push32((uint32_t)(EAX));
  /* 117f78c5 call 0x117f7e60 */
  push32(0x117f78cau); f_117f7e60();
  /* 117f78ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f78cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f78cf je 0x117f793c */
  if (C.zf) goto L_117f793c;
  /* 117f78d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f78d4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f78d7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117f78da:;
  /* 117f78da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f78dd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117f78e0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f78e5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f78e8 je 0x117f792d */
  if (C.zf) goto L_117f792d;
  /* 117f78ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f78ed cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f78f1 je 0x117f792d */
  if (C.zf) goto L_117f792d;
  /* 117f78f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f78f6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117f78f9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f78fe cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7901 je 0x117f792d */
  if (C.zf) goto L_117f792d;
  /* 117f7903 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7906 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f790a je 0x117f792d */
  if (C.zf) goto L_117f792d;
  /* 117f790c push 0x1181dea4 */
  push32((uint32_t)(0x1181dea4u));
  /* 117f7911 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7913 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 117f7918 push 0x1181dbfc */
  push32((uint32_t)(0x1181dbfcu));
  /* 117f791d push 2 */
  push32((uint32_t)(0x2u));
  /* 117f791f call 0x117f5920 */
  push32(0x117f7924u); f_117f5920();
  /* 117f7924 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7927 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f792a jne 0x117f792d */
  if (!C.zf) goto L_117f792d;
  /* 117f792c int3  */
  x86_unimpl("int3 @ 0x117f792c");
L_117f792d:;
  /* 117f792d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f792f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f7931 jne 0x117f78da */
  if (!C.zf) goto L_117f78da;
  /* 117f7933 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7936 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f7939 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_117f793c:;
  /* 117f793c push 9 */
  push32((uint32_t)(0x9u));
  /* 117f793e call 0x117fa300 */
  push32(0x117f7943u); f_117fa300();
  /* 117f7943 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7946 pop edi */
  EDI = (pop32());
  /* 117f7947 pop esi */
  ESI = (pop32());
  /* 117f7948 pop ebx */
  EBX = (pop32());
  /* 117f7949 mov esp, ebp */
  ESP = (EBP);
  /* 117f794b pop ebp */
  EBP = (pop32());
  /* 117f794c ret  */
  ESPCHK(0x117f78b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007950 @ 0x117f7950 (28 bytes, 11 insns) */
void f_117f7950(void) {
  FTRACE(0x117f7950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f7950 push ebp */
  push32((uint32_t)(EBP));
  /* 117f7951 mov ebp, esp */
  EBP = (ESP);
  /* 117f7953 push ecx */
  push32((uint32_t)(ECX));
  /* 117f7954 mov eax, dword ptr [0x11820c90] */
  EAX = (r32((uint32_t)(0x11820c90)));
  /* 117f7959 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f795c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f795f mov dword ptr [0x11820c90], ecx */
  w32((uint32_t)(0x11820c90), (ECX));
  /* 117f7965 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7968 mov esp, ebp */
  ESP = (EBP);
  /* 117f796a pop ebp */
  EBP = (pop32());
  /* 117f796b ret  */
  ESPCHK(0x117f7950u, _esp0);
  ESP += 4; return;
}

/* FUN_10007970 @ 0x117f7970 (136 bytes, 55 insns) */
void f_117f7970(void) {
  FTRACE(0x117f7970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f7970 push ebp */
  push32((uint32_t)(EBP));
  /* 117f7971 mov ebp, esp */
  EBP = (ESP);
  /* 117f7973 push ecx */
  push32((uint32_t)(ECX));
  /* 117f7974 push ebx */
  push32((uint32_t)(EBX));
  /* 117f7975 push esi */
  push32((uint32_t)(ESI));
  /* 117f7976 push edi */
  push32((uint32_t)(EDI));
  /* 117f7977 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_117f797e:;
  /* 117f797e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f7981 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f7984 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f7987 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 117f798a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f798c je 0x117f79ee */
  if (C.zf) goto L_117f79ee;
  /* 117f798e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f7991 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f7993 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117f7995 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f7998 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 117f799e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f79a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f79a4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 117f79a7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f79a9 je 0x117f79ec */
  if (C.zf) goto L_117f79ec;
L_117f79ab:;
  /* 117f79ab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f79ae and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f79b3 push eax */
  push32((uint32_t)(EAX));
  /* 117f79b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f79b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f79b9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 117f79bc push edx */
  push32((uint32_t)(EDX));
  /* 117f79bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f79c0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f79c3 push eax */
  push32((uint32_t)(EAX));
  /* 117f79c4 push 0x1181dee8 */
  push32((uint32_t)(0x1181dee8u));
  /* 117f79c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f79cb push 0 */
  push32((uint32_t)(0x0u));
  /* 117f79cd push 0 */
  push32((uint32_t)(0x0u));
  /* 117f79cf push 0 */
  push32((uint32_t)(0x0u));
  /* 117f79d1 call 0x117f5920 */
  push32(0x117f79d6u); f_117f5920();
  /* 117f79d6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f79d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f79dc jne 0x117f79df */
  if (!C.zf) goto L_117f79df;
  /* 117f79de int3  */
  x86_unimpl("int3 @ 0x117f79de");
L_117f79df:;
  /* 117f79df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f79e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f79e3 jne 0x117f79ab */
  if (!C.zf) goto L_117f79ab;
  /* 117f79e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_117f79ec:;
  /* 117f79ec jmp 0x117f797e */
  goto L_117f797e;
L_117f79ee:;
  /* 117f79ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f79f1 pop edi */
  EDI = (pop32());
  /* 117f79f2 pop esi */
  ESI = (pop32());
  /* 117f79f3 pop ebx */
  EBX = (pop32());
  /* 117f79f4 mov esp, ebp */
  ESP = (EBP);
  /* 117f79f6 pop ebp */
  EBP = (pop32());
  /* 117f79f7 ret  */
  ESPCHK(0x117f7970u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a00 @ 0x117f7a00 (863 bytes, 299 insns) [1 switch table(s)] */
void f_117f7a00(void) {
  FTRACE(0x117f7a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f7a00 push ebp */
  push32((uint32_t)(EBP));
  /* 117f7a01 mov ebp, esp */
  EBP = (ESP);
  /* 117f7a03 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f7a06 push ebx */
  push32((uint32_t)(EBX));
  /* 117f7a07 push esi */
  push32((uint32_t)(ESI));
  /* 117f7a08 push edi */
  push32((uint32_t)(EDI));
  /* 117f7a09 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 117f7a10 mov eax, dword ptr [0x11820a84] */
  EAX = (r32((uint32_t)(0x11820a84)));
  /* 117f7a15 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 117f7a18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f7a1a jne 0x117f7a26 */
  if (!C.zf) goto L_117f7a26;
  /* 117f7a1c mov eax, 1 */
  EAX = (0x1u);
  /* 117f7a21 jmp 0x117f7d58 */
  goto L_117f7d58;
L_117f7a26:;
  /* 117f7a26 push 9 */
  push32((uint32_t)(0x9u));
  /* 117f7a28 call 0x117fa260 */
  push32(0x117f7a2du); f_117fa260();
  /* 117f7a2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7a30 call 0x117faa40 */
  push32(0x117f7a35u); f_117faa40();
  /* 117f7a35 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117f7a38 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7a3c je 0x117f7b49 */
  if (C.zf) goto L_117f7b49;
  /* 117f7a42 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7a46 je 0x117f7b49 */
  if (C.zf) goto L_117f7b49;
  /* 117f7a4c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f7a4f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 117f7a52 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117f7a55 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7a58 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 117f7a5b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7a5f ja 0x117f7b12 */
  if ((!C.cf&&!C.zf)) goto L_117f7b12;
  /* 117f7a65 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117f7a68 jmp dword ptr [eax*4 + 0x117f7d5f] */
  switch (EAX) {
    case 0: goto L_117f7aea;
    case 1: goto L_117f7ac2;
    case 2: goto L_117f7a9a;
    case 3: goto L_117f7a6f;
    default: x86_unimpl("switch@0x117f7a68 out of table"); return;
  }
L_117f7a6f:;
  /* 117f7a6f push 0x1181e03c */
  push32((uint32_t)(0x1181e03cu));
  /* 117f7a74 push 0x1181db9c */
  push32((uint32_t)(0x1181db9cu));
  /* 117f7a79 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7a7b push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7a7d push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7a7f push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7a81 call 0x117f5920 */
  push32(0x117f7a86u); f_117f5920();
  /* 117f7a86 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7a89 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7a8c jne 0x117f7a8f */
  if (!C.zf) goto L_117f7a8f;
  /* 117f7a8e int3  */
  x86_unimpl("int3 @ 0x117f7a8e");
L_117f7a8f:;
  /* 117f7a8f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f7a91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f7a93 jne 0x117f7a6f */
  if (!C.zf) goto L_117f7a6f;
  /* 117f7a95 jmp 0x117f7b38 */
  goto L_117f7b38;
L_117f7a9a:;
  /* 117f7a9a push 0x1181e018 */
  push32((uint32_t)(0x1181e018u));
  /* 117f7a9f push 0x1181db9c */
  push32((uint32_t)(0x1181db9cu));
  /* 117f7aa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7aa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7aa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7aaa push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7aac call 0x117f5920 */
  push32(0x117f7ab1u); f_117f5920();
  /* 117f7ab1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7ab4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7ab7 jne 0x117f7aba */
  if (!C.zf) goto L_117f7aba;
  /* 117f7ab9 int3  */
  x86_unimpl("int3 @ 0x117f7ab9");
L_117f7aba:;
  /* 117f7aba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f7abc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f7abe jne 0x117f7a9a */
  if (!C.zf) goto L_117f7a9a;
  /* 117f7ac0 jmp 0x117f7b38 */
  goto L_117f7b38;
L_117f7ac2:;
  /* 117f7ac2 push 0x1181dff4 */
  push32((uint32_t)(0x1181dff4u));
  /* 117f7ac7 push 0x1181db9c */
  push32((uint32_t)(0x1181db9cu));
  /* 117f7acc push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7ace push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7ad0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7ad2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7ad4 call 0x117f5920 */
  push32(0x117f7ad9u); f_117f5920();
  /* 117f7ad9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7adc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7adf jne 0x117f7ae2 */
  if (!C.zf) goto L_117f7ae2;
  /* 117f7ae1 int3  */
  x86_unimpl("int3 @ 0x117f7ae1");
L_117f7ae2:;
  /* 117f7ae2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f7ae4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f7ae6 jne 0x117f7ac2 */
  if (!C.zf) goto L_117f7ac2;
  /* 117f7ae8 jmp 0x117f7b38 */
  goto L_117f7b38;
L_117f7aea:;
  /* 117f7aea push 0x1181dfd0 */
  push32((uint32_t)(0x1181dfd0u));
  /* 117f7aef push 0x1181db9c */
  push32((uint32_t)(0x1181db9cu));
  /* 117f7af4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7af6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7af8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7afa push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7afc call 0x117f5920 */
  push32(0x117f7b01u); f_117f5920();
  /* 117f7b01 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7b04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7b07 jne 0x117f7b0a */
  if (!C.zf) goto L_117f7b0a;
  /* 117f7b09 int3  */
  x86_unimpl("int3 @ 0x117f7b09");
L_117f7b0a:;
  /* 117f7b0a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f7b0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f7b0e jne 0x117f7aea */
  if (!C.zf) goto L_117f7aea;
  /* 117f7b10 jmp 0x117f7b38 */
  goto L_117f7b38;
L_117f7b12:;
  /* 117f7b12 push 0x1181dfa4 */
  push32((uint32_t)(0x1181dfa4u));
  /* 117f7b17 push 0x1181db9c */
  push32((uint32_t)(0x1181db9cu));
  /* 117f7b1c push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7b1e push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7b20 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7b22 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7b24 call 0x117f5920 */
  push32(0x117f7b29u); f_117f5920();
  /* 117f7b29 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7b2c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7b2f jne 0x117f7b32 */
  if (!C.zf) goto L_117f7b32;
  /* 117f7b31 int3  */
  x86_unimpl("int3 @ 0x117f7b31");
L_117f7b32:;
  /* 117f7b32 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f7b34 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f7b36 jne 0x117f7b12 */
  if (!C.zf) goto L_117f7b12;
L_117f7b38:;
  /* 117f7b38 push 9 */
  push32((uint32_t)(0x9u));
  /* 117f7b3a call 0x117fa300 */
  push32(0x117f7b3fu); f_117fa300();
  /* 117f7b3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7b42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f7b44 jmp 0x117f7d58 */
  goto L_117f7d58;
L_117f7b49:;
  /* 117f7b49 mov eax, dword ptr [0x1182273c] */
  EAX = (r32((uint32_t)(0x1182273c)));
  /* 117f7b4e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117f7b51 jmp 0x117f7b5b */
  goto L_117f7b5b;
L_117f7b53:;
  /* 117f7b53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f7b56 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117f7b58 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_117f7b5b:;
  /* 117f7b5b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7b5f je 0x117f7d4b */
  if (C.zf) goto L_117f7d4b;
  /* 117f7b65 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 117f7b6c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f7b6f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 117f7b72 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 117f7b78 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7b7b je 0x117f7ba0 */
  if (C.zf) goto L_117f7ba0;
  /* 117f7b7d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f7b80 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7b84 je 0x117f7ba0 */
  if (C.zf) goto L_117f7ba0;
  /* 117f7b86 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f7b89 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 117f7b8c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 117f7b92 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7b95 je 0x117f7ba0 */
  if (C.zf) goto L_117f7ba0;
  /* 117f7b97 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f7b9a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7b9e jne 0x117f7bb8 */
  if (!C.zf) goto L_117f7bb8;
L_117f7ba0:;
  /* 117f7ba0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f7ba3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 117f7ba6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 117f7bac mov edx, dword ptr [ecx*4 + 0x11820a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11820a94)));
  /* 117f7bb3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 117f7bb6 jmp 0x117f7bbf */
  goto L_117f7bbf;
L_117f7bb8:;
  /* 117f7bb8 mov dword ptr [ebp - 0x14], 0x1181df9c */
  w32((uint32_t)(EBP + -0x14), (0x1181df9cu));
L_117f7bbf:;
  /* 117f7bbf push 4 */
  push32((uint32_t)(0x4u));
  /* 117f7bc1 mov al, byte ptr [0x11820a90] */
  AL = (r8((uint32_t)(0x11820a90)));
  /* 117f7bc6 push eax */
  push32((uint32_t)(EAX));
  /* 117f7bc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f7bca add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7bcd push ecx */
  push32((uint32_t)(ECX));
  /* 117f7bce call 0x117f7970 */
  push32(0x117f7bd3u); f_117f7970();
  /* 117f7bd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7bd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f7bd8 jne 0x117f7c14 */
  if (!C.zf) goto L_117f7c14;
L_117f7bda:;
  /* 117f7bda mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f7bdd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7be0 push edx */
  push32((uint32_t)(EDX));
  /* 117f7be1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f7be4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 117f7be7 push ecx */
  push32((uint32_t)(ECX));
  /* 117f7be8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117f7beb push edx */
  push32((uint32_t)(EDX));
  /* 117f7bec push 0x1181de78 */
  push32((uint32_t)(0x1181de78u));
  /* 117f7bf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7bf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7bf9 call 0x117f5920 */
  push32(0x117f7bfeu); f_117f5920();
  /* 117f7bfe add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7c01 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7c04 jne 0x117f7c07 */
  if (!C.zf) goto L_117f7c07;
  /* 117f7c06 int3  */
  x86_unimpl("int3 @ 0x117f7c06");
L_117f7c07:;
  /* 117f7c07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f7c09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f7c0b jne 0x117f7bda */
  if (!C.zf) goto L_117f7bda;
  /* 117f7c0d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_117f7c14:;
  /* 117f7c14 push 4 */
  push32((uint32_t)(0x4u));
  /* 117f7c16 mov cl, byte ptr [0x11820a90] */
  CL = (r8((uint32_t)(0x11820a90)));
  /* 117f7c1c push ecx */
  push32((uint32_t)(ECX));
  /* 117f7c1d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f7c20 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 117f7c23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f7c26 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 117f7c2a push edx */
  push32((uint32_t)(EDX));
  /* 117f7c2b call 0x117f7970 */
  push32(0x117f7c30u); f_117f7970();
  /* 117f7c30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7c33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f7c35 jne 0x117f7c71 */
  if (!C.zf) goto L_117f7c71;
L_117f7c37:;
  /* 117f7c37 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f7c3a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7c3d push eax */
  push32((uint32_t)(EAX));
  /* 117f7c3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f7c41 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 117f7c44 push edx */
  push32((uint32_t)(EDX));
  /* 117f7c45 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117f7c48 push eax */
  push32((uint32_t)(EAX));
  /* 117f7c49 push 0x1181de4c */
  push32((uint32_t)(0x1181de4cu));
  /* 117f7c4e push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7c50 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7c52 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7c54 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7c56 call 0x117f5920 */
  push32(0x117f7c5bu); f_117f5920();
  /* 117f7c5b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7c5e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7c61 jne 0x117f7c64 */
  if (!C.zf) goto L_117f7c64;
  /* 117f7c63 int3  */
  x86_unimpl("int3 @ 0x117f7c63");
L_117f7c64:;
  /* 117f7c64 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f7c66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f7c68 jne 0x117f7c37 */
  if (!C.zf) goto L_117f7c37;
  /* 117f7c6a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_117f7c71:;
  /* 117f7c71 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f7c74 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7c78 jne 0x117f7cca */
  if (!C.zf) goto L_117f7cca;
  /* 117f7c7a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f7c7d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117f7c80 push ecx */
  push32((uint32_t)(ECX));
  /* 117f7c81 mov dl, byte ptr [0x11820a91] */
  DL = (r8((uint32_t)(0x11820a91)));
  /* 117f7c87 push edx */
  push32((uint32_t)(EDX));
  /* 117f7c88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f7c8b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7c8e push eax */
  push32((uint32_t)(EAX));
  /* 117f7c8f call 0x117f7970 */
  push32(0x117f7c94u); f_117f7970();
  /* 117f7c94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7c97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f7c99 jne 0x117f7cca */
  if (!C.zf) goto L_117f7cca;
L_117f7c9b:;
  /* 117f7c9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f7c9e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7ca1 push ecx */
  push32((uint32_t)(ECX));
  /* 117f7ca2 push 0x1181df70 */
  push32((uint32_t)(0x1181df70u));
  /* 117f7ca7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7cab push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7cad push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7caf call 0x117f5920 */
  push32(0x117f7cb4u); f_117f5920();
  /* 117f7cb4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7cb7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7cba jne 0x117f7cbd */
  if (!C.zf) goto L_117f7cbd;
  /* 117f7cbc int3  */
  x86_unimpl("int3 @ 0x117f7cbc");
L_117f7cbd:;
  /* 117f7cbd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f7cbf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f7cc1 jne 0x117f7c9b */
  if (!C.zf) goto L_117f7c9b;
  /* 117f7cc3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_117f7cca:;
  /* 117f7cca cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7cce jne 0x117f7d46 */
  if (!C.zf) goto L_117f7d46;
  /* 117f7cd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f7cd3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7cd7 je 0x117f7d0c */
  if (C.zf) goto L_117f7d0c;
L_117f7cd9:;
  /* 117f7cd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f7cdc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117f7cdf push edx */
  push32((uint32_t)(EDX));
  /* 117f7ce0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f7ce3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 117f7ce6 push ecx */
  push32((uint32_t)(ECX));
  /* 117f7ce7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117f7cea push edx */
  push32((uint32_t)(EDX));
  /* 117f7ceb push 0x1181df50 */
  push32((uint32_t)(0x1181df50u));
  /* 117f7cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7cf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7cf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7cf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7cf8 call 0x117f5920 */
  push32(0x117f7cfdu); f_117f5920();
  /* 117f7cfd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7d00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7d03 jne 0x117f7d06 */
  if (!C.zf) goto L_117f7d06;
  /* 117f7d05 int3  */
  x86_unimpl("int3 @ 0x117f7d05");
L_117f7d06:;
  /* 117f7d06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f7d08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f7d0a jne 0x117f7cd9 */
  if (!C.zf) goto L_117f7cd9;
L_117f7d0c:;
  /* 117f7d0c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f7d0f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 117f7d12 push edx */
  push32((uint32_t)(EDX));
  /* 117f7d13 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f7d16 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7d19 push eax */
  push32((uint32_t)(EAX));
  /* 117f7d1a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117f7d1d push ecx */
  push32((uint32_t)(ECX));
  /* 117f7d1e push 0x1181df24 */
  push32((uint32_t)(0x1181df24u));
  /* 117f7d23 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7d25 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7d27 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7d29 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7d2b call 0x117f5920 */
  push32(0x117f7d30u); f_117f5920();
  /* 117f7d30 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7d33 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7d36 jne 0x117f7d39 */
  if (!C.zf) goto L_117f7d39;
  /* 117f7d38 int3  */
  x86_unimpl("int3 @ 0x117f7d38");
L_117f7d39:;
  /* 117f7d39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f7d3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f7d3d jne 0x117f7d0c */
  if (!C.zf) goto L_117f7d0c;
  /* 117f7d3f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_117f7d46:;
  /* 117f7d46 jmp 0x117f7b53 */
  goto L_117f7b53;
L_117f7d4b:;
  /* 117f7d4b push 9 */
  push32((uint32_t)(0x9u));
  /* 117f7d4d call 0x117fa300 */
  push32(0x117f7d52u); f_117fa300();
  /* 117f7d52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7d55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_117f7d58:;
  /* 117f7d58 pop edi */
  EDI = (pop32());
  /* 117f7d59 pop esi */
  ESI = (pop32());
  /* 117f7d5a pop ebx */
  EBX = (pop32());
  /* 117f7d5b mov esp, ebp */
  ESP = (EBP);
  /* 117f7d5d pop ebp */
  EBP = (pop32());
  /* 117f7d5e ret  */
  ESPCHK(0x117f7a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d70 @ 0x117f7d70 (34 bytes, 13 insns) */
void f_117f7d70(void) {
  FTRACE(0x117f7d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f7d70 push ebp */
  push32((uint32_t)(EBP));
  /* 117f7d71 mov ebp, esp */
  EBP = (ESP);
  /* 117f7d73 push ecx */
  push32((uint32_t)(ECX));
  /* 117f7d74 mov eax, dword ptr [0x11820a84] */
  EAX = (r32((uint32_t)(0x11820a84)));
  /* 117f7d79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f7d7c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7d80 je 0x117f7d8b */
  if (C.zf) goto L_117f7d8b;
  /* 117f7d82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f7d85 mov dword ptr [0x11820a84], ecx */
  w32((uint32_t)(0x11820a84), (ECX));
L_117f7d8b:;
  /* 117f7d8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7d8e mov esp, ebp */
  ESP = (EBP);
  /* 117f7d90 pop ebp */
  EBP = (pop32());
  /* 117f7d91 ret  */
  ESPCHK(0x117f7d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007da0 @ 0x117f7da0 (103 bytes, 38 insns) */
void f_117f7da0(void) {
  FTRACE(0x117f7da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f7da0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f7da1 mov ebp, esp */
  EBP = (ESP);
  /* 117f7da3 push ecx */
  push32((uint32_t)(ECX));
  /* 117f7da4 mov eax, dword ptr [0x11820a84] */
  EAX = (r32((uint32_t)(0x11820a84)));
  /* 117f7da9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 117f7dac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f7dae jne 0x117f7db2 */
  if (!C.zf) goto L_117f7db2;
  /* 117f7db0 jmp 0x117f7e03 */
  goto L_117f7e03;
L_117f7db2:;
  /* 117f7db2 push 9 */
  push32((uint32_t)(0x9u));
  /* 117f7db4 call 0x117fa260 */
  push32(0x117f7db9u); f_117fa260();
  /* 117f7db9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7dbc mov ecx, dword ptr [0x1182273c] */
  ECX = (r32((uint32_t)(0x1182273c)));
  /* 117f7dc2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117f7dc5 jmp 0x117f7dcf */
  goto L_117f7dcf;
L_117f7dc7:;
  /* 117f7dc7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7dca mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117f7dcc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117f7dcf:;
  /* 117f7dcf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7dd3 je 0x117f7df9 */
  if (C.zf) goto L_117f7df9;
  /* 117f7dd5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7dd8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 117f7ddb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 117f7de1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7de4 jne 0x117f7df7 */
  if (!C.zf) goto L_117f7df7;
  /* 117f7de6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f7de9 push eax */
  push32((uint32_t)(EAX));
  /* 117f7dea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7ded add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7df0 push ecx */
  push32((uint32_t)(ECX));
  /* 117f7df1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x117f7df4u);
  /* 117f7df4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f7df7:;
  /* 117f7df7 jmp 0x117f7dc7 */
  goto L_117f7dc7;
L_117f7df9:;
  /* 117f7df9 push 9 */
  push32((uint32_t)(0x9u));
  /* 117f7dfb call 0x117fa300 */
  push32(0x117f7e00u); f_117fa300();
  /* 117f7e00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f7e03:;
  /* 117f7e03 mov esp, ebp */
  ESP = (EBP);
  /* 117f7e05 pop ebp */
  EBP = (pop32());
  /* 117f7e06 ret  */
  ESPCHK(0x117f7da0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x117f7e10 (75 bytes, 28 insns) */
void f_117f7e10(void) {
  FTRACE(0x117f7e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f7e10 push ebp */
  push32((uint32_t)(EBP));
  /* 117f7e11 mov ebp, esp */
  EBP = (ESP);
  /* 117f7e13 push ecx */
  push32((uint32_t)(ECX));
  /* 117f7e14 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7e18 je 0x117f7e4d */
  if (C.zf) goto L_117f7e4d;
  /* 117f7e1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f7e1d push eax */
  push32((uint32_t)(EAX));
  /* 117f7e1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f7e21 push ecx */
  push32((uint32_t)(ECX));
  /* 117f7e22 call dword ptr [0x11825394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825394))), 0x117f7e28u);
  /* 117f7e28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f7e2a jne 0x117f7e4d */
  if (!C.zf) goto L_117f7e4d;
  /* 117f7e2c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7e30 je 0x117f7e44 */
  if (C.zf) goto L_117f7e44;
  /* 117f7e32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f7e35 push edx */
  push32((uint32_t)(EDX));
  /* 117f7e36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f7e39 push eax */
  push32((uint32_t)(EAX));
  /* 117f7e3a call dword ptr [0x11825398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825398))), 0x117f7e40u);
  /* 117f7e40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f7e42 jne 0x117f7e4d */
  if (!C.zf) goto L_117f7e4d;
L_117f7e44:;
  /* 117f7e44 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 117f7e4b jmp 0x117f7e54 */
  goto L_117f7e54;
L_117f7e4d:;
  /* 117f7e4d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_117f7e54:;
  /* 117f7e54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7e57 mov esp, ebp */
  ESP = (EBP);
  /* 117f7e59 pop ebp */
  EBP = (pop32());
  /* 117f7e5a ret  */
  ESPCHK(0x117f7e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e60 @ 0x117f7e60 (134 bytes, 50 insns) */
void f_117f7e60(void) {
  FTRACE(0x117f7e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f7e60 push ebp */
  push32((uint32_t)(EBP));
  /* 117f7e61 mov ebp, esp */
  EBP = (ESP);
  /* 117f7e63 push ecx */
  push32((uint32_t)(ECX));
  /* 117f7e64 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7e68 jne 0x117f7e6e */
  if (!C.zf) goto L_117f7e6e;
  /* 117f7e6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f7e6c jmp 0x117f7ee2 */
  goto L_117f7ee2;
L_117f7e6e:;
  /* 117f7e6e push 1 */
  push32((uint32_t)(0x1u));
  /* 117f7e70 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 117f7e72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f7e75 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f7e78 push eax */
  push32((uint32_t)(EAX));
  /* 117f7e79 call 0x117f7e10 */
  push32(0x117f7e7eu); f_117f7e10();
  /* 117f7e7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7e81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f7e83 jne 0x117f7e89 */
  if (!C.zf) goto L_117f7e89;
  /* 117f7e85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f7e87 jmp 0x117f7ee2 */
  goto L_117f7ee2;
L_117f7e89:;
  /* 117f7e89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f7e8c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f7e8f push ecx */
  push32((uint32_t)(ECX));
  /* 117f7e90 call 0x117fab60 */
  push32(0x117f7e95u); f_117fab60();
  /* 117f7e95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7e98 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f7e9b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7e9f je 0x117f7eb6 */
  if (C.zf) goto L_117f7eb6;
  /* 117f7ea1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f7ea4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f7ea7 push edx */
  push32((uint32_t)(EDX));
  /* 117f7ea8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7eab push eax */
  push32((uint32_t)(EAX));
  /* 117f7eac call 0x117fabc0 */
  push32(0x117f7eb1u); f_117fabc0();
  /* 117f7eb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7eb4 jmp 0x117f7ee2 */
  goto L_117f7ee2;
L_117f7eb6:;
  /* 117f7eb6 mov ecx, dword ptr [0x118226f0] */
  ECX = (r32((uint32_t)(0x118226f0)));
  /* 117f7ebc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 117f7ec2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f7ec4 je 0x117f7ecd */
  if (C.zf) goto L_117f7ecd;
  /* 117f7ec6 mov eax, 1 */
  EAX = (0x1u);
  /* 117f7ecb jmp 0x117f7ee2 */
  goto L_117f7ee2;
L_117f7ecd:;
  /* 117f7ecd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f7ed0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f7ed3 push edx */
  push32((uint32_t)(EDX));
  /* 117f7ed4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f7ed6 mov eax, dword ptr [0x1182408c] */
  EAX = (r32((uint32_t)(0x1182408c)));
  /* 117f7edb push eax */
  push32((uint32_t)(EAX));
  /* 117f7edc call dword ptr [0x11825390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825390))), 0x117f7ee2u);
L_117f7ee2:;
  /* 117f7ee2 mov esp, ebp */
  ESP = (EBP);
  /* 117f7ee4 pop ebp */
  EBP = (pop32());
  /* 117f7ee5 ret  */
  ESPCHK(0x117f7e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ef0 @ 0x117f7ef0 (227 bytes, 80 insns) */
void f_117f7ef0(void) {
  FTRACE(0x117f7ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f7ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f7ef1 mov ebp, esp */
  EBP = (ESP);
  /* 117f7ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 117f7ef4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f7ef7 push eax */
  push32((uint32_t)(EAX));
  /* 117f7ef8 call 0x117f7e60 */
  push32(0x117f7efdu); f_117f7e60();
  /* 117f7efd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7f00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f7f02 jne 0x117f7f0b */
  if (!C.zf) goto L_117f7f0b;
  /* 117f7f04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f7f06 jmp 0x117f7fcf */
  goto L_117f7fcf;
L_117f7f0b:;
  /* 117f7f0b push 9 */
  push32((uint32_t)(0x9u));
  /* 117f7f0d call 0x117fa260 */
  push32(0x117f7f12u); f_117fa260();
  /* 117f7f12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7f15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f7f18 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f7f1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117f7f1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7f21 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117f7f24 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f7f29 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7f2c je 0x117f7f50 */
  if (C.zf) goto L_117f7f50;
  /* 117f7f2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7f31 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7f35 je 0x117f7f50 */
  if (C.zf) goto L_117f7f50;
  /* 117f7f37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7f3a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117f7f3d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f7f42 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7f45 je 0x117f7f50 */
  if (C.zf) goto L_117f7f50;
  /* 117f7f47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7f4a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7f4e jne 0x117f7fc3 */
  if (!C.zf) goto L_117f7fc3;
L_117f7f50:;
  /* 117f7f50 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f7f52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f7f55 push edx */
  push32((uint32_t)(EDX));
  /* 117f7f56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f7f59 push eax */
  push32((uint32_t)(EAX));
  /* 117f7f5a call 0x117f7e10 */
  push32(0x117f7f5fu); f_117f7e10();
  /* 117f7f5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7f62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f7f64 je 0x117f7fc3 */
  if (C.zf) goto L_117f7fc3;
  /* 117f7f66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7f69 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 117f7f6c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7f6f jne 0x117f7fc3 */
  if (!C.zf) goto L_117f7fc3;
  /* 117f7f71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7f74 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 117f7f77 cmp ecx, dword ptr [0x11820a88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11820a88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7f7d jg 0x117f7fc3 */
  if ((!C.zf&&C.sf==C.of)) goto L_117f7fc3;
  /* 117f7f7f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7f83 je 0x117f7f90 */
  if (C.zf) goto L_117f7f90;
  /* 117f7f85 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f7f88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7f8b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 117f7f8e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_117f7f90:;
  /* 117f7f90 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7f94 je 0x117f7fa1 */
  if (C.zf) goto L_117f7fa1;
  /* 117f7f96 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f7f99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7f9c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 117f7f9f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_117f7fa1:;
  /* 117f7fa1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f7fa5 je 0x117f7fb2 */
  if (C.zf) goto L_117f7fb2;
  /* 117f7fa7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f7faa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7fad mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 117f7fb0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_117f7fb2:;
  /* 117f7fb2 push 9 */
  push32((uint32_t)(0x9u));
  /* 117f7fb4 call 0x117fa300 */
  push32(0x117f7fb9u); f_117fa300();
  /* 117f7fb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7fbc mov eax, 1 */
  EAX = (0x1u);
  /* 117f7fc1 jmp 0x117f7fcf */
  goto L_117f7fcf;
L_117f7fc3:;
  /* 117f7fc3 push 9 */
  push32((uint32_t)(0x9u));
  /* 117f7fc5 call 0x117fa300 */
  push32(0x117f7fcau); f_117fa300();
  /* 117f7fca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f7fcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117f7fcf:;
  /* 117f7fcf mov esp, ebp */
  ESP = (EBP);
  /* 117f7fd1 pop ebp */
  EBP = (pop32());
  /* 117f7fd2 ret  */
  ESPCHK(0x117f7ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fe0 @ 0x117f7fe0 (28 bytes, 11 insns) */
void f_117f7fe0(void) {
  FTRACE(0x117f7fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f7fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f7fe1 mov ebp, esp */
  EBP = (ESP);
  /* 117f7fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 117f7fe4 mov eax, dword ptr [0x11824098] */
  EAX = (r32((uint32_t)(0x11824098)));
  /* 117f7fe9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f7fec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f7fef mov dword ptr [0x11824098], ecx */
  w32((uint32_t)(0x11824098), (ECX));
  /* 117f7ff5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f7ff8 mov esp, ebp */
  ESP = (EBP);
  /* 117f7ffa pop ebp */
  EBP = (pop32());
  /* 117f7ffb ret  */
  ESPCHK(0x117f7fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008000 @ 0x117f8000 (362 bytes, 116 insns) */
void f_117f8000(void) {
  FTRACE(0x117f8000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f8000 push ebp */
  push32((uint32_t)(EBP));
  /* 117f8001 mov ebp, esp */
  EBP = (ESP);
  /* 117f8003 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f8006 push ebx */
  push32((uint32_t)(EBX));
  /* 117f8007 push esi */
  push32((uint32_t)(ESI));
  /* 117f8008 push edi */
  push32((uint32_t)(EDI));
  /* 117f8009 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f800d jne 0x117f803a */
  if (!C.zf) goto L_117f803a;
L_117f800f:;
  /* 117f800f push 0x1181e084 */
  push32((uint32_t)(0x1181e084u));
  /* 117f8014 push 0x1181db9c */
  push32((uint32_t)(0x1181db9cu));
  /* 117f8019 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f801b push 0 */
  push32((uint32_t)(0x0u));
  /* 117f801d push 0 */
  push32((uint32_t)(0x0u));
  /* 117f801f push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8021 call 0x117f5920 */
  push32(0x117f8026u); f_117f5920();
  /* 117f8026 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8029 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f802c jne 0x117f802f */
  if (!C.zf) goto L_117f802f;
  /* 117f802e int3  */
  x86_unimpl("int3 @ 0x117f802e");
L_117f802f:;
  /* 117f802f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f8031 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f8033 jne 0x117f800f */
  if (!C.zf) goto L_117f800f;
  /* 117f8035 jmp 0x117f8163 */
  goto L_117f8163;
L_117f803a:;
  /* 117f803a push 9 */
  push32((uint32_t)(0x9u));
  /* 117f803c call 0x117fa260 */
  push32(0x117f8041u); f_117fa260();
  /* 117f8041 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8044 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f8047 mov edx, dword ptr [0x1182273c] */
  EDX = (r32((uint32_t)(0x1182273c)));
  /* 117f804d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 117f804f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117f8056 jmp 0x117f8061 */
  goto L_117f8061;
L_117f8058:;
  /* 117f8058 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f805b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f805e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117f8061:;
  /* 117f8061 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8065 jge 0x117f8085 */
  if ((C.sf==C.of)) goto L_117f8085;
  /* 117f8067 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f806a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f806d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 117f8075 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8078 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f807b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 117f8083 jmp 0x117f8058 */
  goto L_117f8058;
L_117f8085:;
  /* 117f8085 mov edx, dword ptr [0x1182273c] */
  EDX = (r32((uint32_t)(0x1182273c)));
  /* 117f808b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 117f808e jmp 0x117f8098 */
  goto L_117f8098;
L_117f8090:;
  /* 117f8090 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f8093 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117f8095 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_117f8098:;
  /* 117f8098 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f809c je 0x117f8141 */
  if (C.zf) goto L_117f8141;
  /* 117f80a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f80a5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117f80a8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f80ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f80af jl 0x117f8117 */
  if ((C.sf!=C.of)) goto L_117f8117;
  /* 117f80b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f80b4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 117f80b7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 117f80bd cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f80c0 jge 0x117f8117 */
  if ((C.sf==C.of)) goto L_117f8117;
  /* 117f80c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f80c5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 117f80c8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 117f80ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f80d1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 117f80d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f80d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f80db mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 117f80de and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 117f80e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f80e7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 117f80eb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f80ee mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117f80f1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f80f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f80f9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 117f80fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f8100 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8103 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f8106 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 117f8109 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f810e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f8111 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 117f8115 jmp 0x117f813c */
  goto L_117f813c;
L_117f8117:;
  /* 117f8117 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f811a push edx */
  push32((uint32_t)(EDX));
  /* 117f811b push 0x1181e060 */
  push32((uint32_t)(0x1181e060u));
  /* 117f8120 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8122 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8124 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8126 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8128 call 0x117f5920 */
  push32(0x117f812du); f_117f5920();
  /* 117f812d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8130 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8133 jne 0x117f8136 */
  if (!C.zf) goto L_117f8136;
  /* 117f8135 int3  */
  x86_unimpl("int3 @ 0x117f8135");
L_117f8136:;
  /* 117f8136 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f8138 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f813a jne 0x117f8117 */
  if (!C.zf) goto L_117f8117;
L_117f813c:;
  /* 117f813c jmp 0x117f8090 */
  goto L_117f8090;
L_117f8141:;
  /* 117f8141 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f8144 mov edx, dword ptr [0x11822744] */
  EDX = (r32((uint32_t)(0x11822744)));
  /* 117f814a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 117f814d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f8150 mov ecx, dword ptr [0x11822738] */
  ECX = (r32((uint32_t)(0x11822738)));
  /* 117f8156 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 117f8159 push 9 */
  push32((uint32_t)(0x9u));
  /* 117f815b call 0x117fa300 */
  push32(0x117f8160u); f_117fa300();
  /* 117f8160 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f8163:;
  /* 117f8163 pop edi */
  EDI = (pop32());
  /* 117f8164 pop esi */
  ESI = (pop32());
  /* 117f8165 pop ebx */
  EBX = (pop32());
  /* 117f8166 mov esp, ebp */
  ESP = (EBP);
  /* 117f8168 pop ebp */
  EBP = (pop32());
  /* 117f8169 ret  */
  ESPCHK(0x117f8000u, _esp0);
  ESP += 4; return;
}

/* FUN_10008170 @ 0x117f8170 (291 bytes, 95 insns) */
void f_117f8170(void) {
  FTRACE(0x117f8170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f8170 push ebp */
  push32((uint32_t)(EBP));
  /* 117f8171 mov ebp, esp */
  EBP = (ESP);
  /* 117f8173 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f8176 push ebx */
  push32((uint32_t)(EBX));
  /* 117f8177 push esi */
  push32((uint32_t)(ESI));
  /* 117f8178 push edi */
  push32((uint32_t)(EDI));
  /* 117f8179 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 117f8180 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8184 je 0x117f8192 */
  if (C.zf) goto L_117f8192;
  /* 117f8186 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f818a je 0x117f8192 */
  if (C.zf) goto L_117f8192;
  /* 117f818c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8190 jne 0x117f81c0 */
  if (!C.zf) goto L_117f81c0;
L_117f8192:;
  /* 117f8192 push 0x1181e0ac */
  push32((uint32_t)(0x1181e0acu));
  /* 117f8197 push 0x1181db9c */
  push32((uint32_t)(0x1181db9cu));
  /* 117f819c push 0 */
  push32((uint32_t)(0x0u));
  /* 117f819e push 0 */
  push32((uint32_t)(0x0u));
  /* 117f81a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f81a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f81a4 call 0x117f5920 */
  push32(0x117f81a9u); f_117f5920();
  /* 117f81a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f81ac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f81af jne 0x117f81b2 */
  if (!C.zf) goto L_117f81b2;
  /* 117f81b1 int3  */
  x86_unimpl("int3 @ 0x117f81b1");
L_117f81b2:;
  /* 117f81b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f81b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f81b6 jne 0x117f8192 */
  if (!C.zf) goto L_117f8192;
  /* 117f81b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f81bb jmp 0x117f828c */
  goto L_117f828c;
L_117f81c0:;
  /* 117f81c0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117f81c7 jmp 0x117f81d2 */
  goto L_117f81d2;
L_117f81c9:;
  /* 117f81c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f81cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f81cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117f81d2:;
  /* 117f81d2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f81d6 jge 0x117f825c */
  if ((C.sf==C.of)) goto L_117f825c;
  /* 117f81dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f81df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f81e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f81e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 117f81e8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 117f81ec sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f81f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f81f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f81f6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 117f81fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f81fd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f8200 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8203 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 117f8206 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 117f820a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f820e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8211 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f8214 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 117f8218 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f821b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f821e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8223 jne 0x117f8232 */
  if (!C.zf) goto L_117f8232;
  /* 117f8225 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8228 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f822b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8230 je 0x117f8257 */
  if (C.zf) goto L_117f8257;
L_117f8232:;
  /* 117f8232 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8236 je 0x117f8257 */
  if (C.zf) goto L_117f8257;
  /* 117f8238 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f823c jne 0x117f8250 */
  if (!C.zf) goto L_117f8250;
  /* 117f823e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8242 jne 0x117f8257 */
  if (!C.zf) goto L_117f8257;
  /* 117f8244 mov eax, dword ptr [0x11820a84] */
  EAX = (r32((uint32_t)(0x11820a84)));
  /* 117f8249 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 117f824c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f824e je 0x117f8257 */
  if (C.zf) goto L_117f8257;
L_117f8250:;
  /* 117f8250 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_117f8257:;
  /* 117f8257 jmp 0x117f81c9 */
  goto L_117f81c9;
L_117f825c:;
  /* 117f825c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f825f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f8262 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 117f8265 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f8268 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f826b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 117f826e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f8271 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f8274 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 117f8277 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f827a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f827d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 117f8280 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f8283 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 117f8289 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_117f828c:;
  /* 117f828c pop edi */
  EDI = (pop32());
  /* 117f828d pop esi */
  ESI = (pop32());
  /* 117f828e pop ebx */
  EBX = (pop32());
  /* 117f828f mov esp, ebp */
  ESP = (EBP);
  /* 117f8291 pop ebp */
  EBP = (pop32());
  /* 117f8292 ret  */
  ESPCHK(0x117f8170u, _esp0);
  ESP += 4; return;
}

/* FUN_100082a0 @ 0x117f82a0 (697 bytes, 253 insns) */
void f_117f82a0(void) {
  FTRACE(0x117f82a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f82a0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f82a1 mov ebp, esp */
  EBP = (ESP);
  /* 117f82a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f82a6 push ebx */
  push32((uint32_t)(EBX));
  /* 117f82a7 push esi */
  push32((uint32_t)(ESI));
  /* 117f82a8 push edi */
  push32((uint32_t)(EDI));
  /* 117f82a9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 117f82b0 push 9 */
  push32((uint32_t)(0x9u));
  /* 117f82b2 call 0x117fa260 */
  push32(0x117f82b7u); f_117fa260();
  /* 117f82b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f82ba:;
  /* 117f82ba push 0x1181e1a4 */
  push32((uint32_t)(0x1181e1a4u));
  /* 117f82bf push 0x1181db9c */
  push32((uint32_t)(0x1181db9cu));
  /* 117f82c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f82c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f82c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f82ca push 0 */
  push32((uint32_t)(0x0u));
  /* 117f82cc call 0x117f5920 */
  push32(0x117f82d1u); f_117f5920();
  /* 117f82d1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f82d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f82d7 jne 0x117f82da */
  if (!C.zf) goto L_117f82da;
  /* 117f82d9 int3  */
  x86_unimpl("int3 @ 0x117f82d9");
L_117f82da:;
  /* 117f82da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f82dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f82de jne 0x117f82ba */
  if (!C.zf) goto L_117f82ba;
  /* 117f82e0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f82e4 je 0x117f82ee */
  if (C.zf) goto L_117f82ee;
  /* 117f82e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f82e9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117f82eb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_117f82ee:;
  /* 117f82ee mov eax, dword ptr [0x1182273c] */
  EAX = (r32((uint32_t)(0x1182273c)));
  /* 117f82f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f82f6 jmp 0x117f8300 */
  goto L_117f8300;
L_117f82f8:;
  /* 117f82f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f82fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117f82fd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117f8300:;
  /* 117f8300 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8304 je 0x117f8522 */
  if (C.zf) goto L_117f8522;
  /* 117f830a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f830d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8310 je 0x117f8522 */
  if (C.zf) goto L_117f8522;
  /* 117f8316 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8319 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 117f831c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 117f8322 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8325 je 0x117f8354 */
  if (C.zf) goto L_117f8354;
  /* 117f8327 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f832a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 117f832d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 117f8333 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f8335 je 0x117f8354 */
  if (C.zf) goto L_117f8354;
  /* 117f8337 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f833a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117f833d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f8342 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8345 jne 0x117f8359 */
  if (!C.zf) goto L_117f8359;
  /* 117f8347 mov ecx, dword ptr [0x11820a84] */
  ECX = (r32((uint32_t)(0x11820a84)));
  /* 117f834d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 117f8350 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f8352 jne 0x117f8359 */
  if (!C.zf) goto L_117f8359;
L_117f8354:;
  /* 117f8354 jmp 0x117f851d */
  goto L_117f851d;
L_117f8359:;
  /* 117f8359 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f835c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8360 je 0x117f83d2 */
  if (C.zf) goto L_117f83d2;
  /* 117f8362 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8364 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f8366 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8369 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 117f836c push ecx */
  push32((uint32_t)(ECX));
  /* 117f836d call 0x117f7e10 */
  push32(0x117f8372u); f_117f7e10();
  /* 117f8372 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8375 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f8377 jne 0x117f83a3 */
  if (!C.zf) goto L_117f83a3;
L_117f8379:;
  /* 117f8379 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f837c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 117f837f push eax */
  push32((uint32_t)(EAX));
  /* 117f8380 push 0x1181e190 */
  push32((uint32_t)(0x1181e190u));
  /* 117f8385 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8387 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8389 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f838b push 0 */
  push32((uint32_t)(0x0u));
  /* 117f838d call 0x117f5920 */
  push32(0x117f8392u); f_117f5920();
  /* 117f8392 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8395 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8398 jne 0x117f839b */
  if (!C.zf) goto L_117f839b;
  /* 117f839a int3  */
  x86_unimpl("int3 @ 0x117f839a");
L_117f839b:;
  /* 117f839b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f839d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f839f jne 0x117f8379 */
  if (!C.zf) goto L_117f8379;
  /* 117f83a1 jmp 0x117f83d2 */
  goto L_117f83d2;
L_117f83a3:;
  /* 117f83a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f83a6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 117f83a9 push eax */
  push32((uint32_t)(EAX));
  /* 117f83aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f83ad mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 117f83b0 push edx */
  push32((uint32_t)(EDX));
  /* 117f83b1 push 0x1181e184 */
  push32((uint32_t)(0x1181e184u));
  /* 117f83b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f83b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f83ba push 0 */
  push32((uint32_t)(0x0u));
  /* 117f83bc push 0 */
  push32((uint32_t)(0x0u));
  /* 117f83be call 0x117f5920 */
  push32(0x117f83c3u); f_117f5920();
  /* 117f83c3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f83c6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f83c9 jne 0x117f83cc */
  if (!C.zf) goto L_117f83cc;
  /* 117f83cb int3  */
  x86_unimpl("int3 @ 0x117f83cb");
L_117f83cc:;
  /* 117f83cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f83ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f83d0 jne 0x117f83a3 */
  if (!C.zf) goto L_117f83a3;
L_117f83d2:;
  /* 117f83d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f83d5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 117f83d8 push edx */
  push32((uint32_t)(EDX));
  /* 117f83d9 push 0x1181e17c */
  push32((uint32_t)(0x1181e17cu));
  /* 117f83de push 0 */
  push32((uint32_t)(0x0u));
  /* 117f83e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f83e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f83e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f83e6 call 0x117f5920 */
  push32(0x117f83ebu); f_117f5920();
  /* 117f83eb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f83ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f83f1 jne 0x117f83f4 */
  if (!C.zf) goto L_117f83f4;
  /* 117f83f3 int3  */
  x86_unimpl("int3 @ 0x117f83f3");
L_117f83f4:;
  /* 117f83f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f83f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f83f8 jne 0x117f83d2 */
  if (!C.zf) goto L_117f83d2;
  /* 117f83fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f83fd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 117f8400 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 117f8406 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8409 jne 0x117f847c */
  if (!C.zf) goto L_117f847c;
L_117f840b:;
  /* 117f840b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f840e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117f8411 push ecx */
  push32((uint32_t)(ECX));
  /* 117f8412 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8415 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117f8418 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 117f841b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f8420 push eax */
  push32((uint32_t)(EAX));
  /* 117f8421 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8424 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8427 push ecx */
  push32((uint32_t)(ECX));
  /* 117f8428 push 0x1181e148 */
  push32((uint32_t)(0x1181e148u));
  /* 117f842d push 0 */
  push32((uint32_t)(0x0u));
  /* 117f842f push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8431 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8433 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8435 call 0x117f5920 */
  push32(0x117f843au); f_117f5920();
  /* 117f843a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f843d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8440 jne 0x117f8443 */
  if (!C.zf) goto L_117f8443;
  /* 117f8442 int3  */
  x86_unimpl("int3 @ 0x117f8442");
L_117f8443:;
  /* 117f8443 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f8445 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f8447 jne 0x117f840b */
  if (!C.zf) goto L_117f840b;
  /* 117f8449 cmp dword ptr [0x11824098], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11824098))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8450 je 0x117f846b */
  if (C.zf) goto L_117f846b;
  /* 117f8452 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8455 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117f8458 push ecx */
  push32((uint32_t)(ECX));
  /* 117f8459 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f845c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f845f push edx */
  push32((uint32_t)(EDX));
  /* 117f8460 call dword ptr [0x11824098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11824098))), 0x117f8466u);
  /* 117f8466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8469 jmp 0x117f8477 */
  goto L_117f8477;
L_117f846b:;
  /* 117f846b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f846e push eax */
  push32((uint32_t)(EAX));
  /* 117f846f call 0x117f8560 */
  push32(0x117f8474u); f_117f8560();
  /* 117f8474 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f8477:;
  /* 117f8477 jmp 0x117f851d */
  goto L_117f851d;
L_117f847c:;
  /* 117f847c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f847f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8483 jne 0x117f84c2 */
  if (!C.zf) goto L_117f84c2;
L_117f8485:;
  /* 117f8485 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8488 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 117f848b push eax */
  push32((uint32_t)(EAX));
  /* 117f848c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f848f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8492 push ecx */
  push32((uint32_t)(ECX));
  /* 117f8493 push 0x1181e120 */
  push32((uint32_t)(0x1181e120u));
  /* 117f8498 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f849a push 0 */
  push32((uint32_t)(0x0u));
  /* 117f849c push 0 */
  push32((uint32_t)(0x0u));
  /* 117f849e push 0 */
  push32((uint32_t)(0x0u));
  /* 117f84a0 call 0x117f5920 */
  push32(0x117f84a5u); f_117f5920();
  /* 117f84a5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f84a8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f84ab jne 0x117f84ae */
  if (!C.zf) goto L_117f84ae;
  /* 117f84ad int3  */
  x86_unimpl("int3 @ 0x117f84ad");
L_117f84ae:;
  /* 117f84ae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f84b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f84b2 jne 0x117f8485 */
  if (!C.zf) goto L_117f8485;
  /* 117f84b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f84b7 push eax */
  push32((uint32_t)(EAX));
  /* 117f84b8 call 0x117f8560 */
  push32(0x117f84bdu); f_117f8560();
  /* 117f84bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f84c0 jmp 0x117f851d */
  goto L_117f851d;
L_117f84c2:;
  /* 117f84c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f84c5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 117f84c8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 117f84ce cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f84d1 jne 0x117f851d */
  if (!C.zf) goto L_117f851d;
L_117f84d3:;
  /* 117f84d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f84d6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117f84d9 push ecx */
  push32((uint32_t)(ECX));
  /* 117f84da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f84dd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117f84e0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 117f84e3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f84e8 push eax */
  push32((uint32_t)(EAX));
  /* 117f84e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f84ec add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f84ef push ecx */
  push32((uint32_t)(ECX));
  /* 117f84f0 push 0x1181e0ec */
  push32((uint32_t)(0x1181e0ecu));
  /* 117f84f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f84f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f84f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f84fb push 0 */
  push32((uint32_t)(0x0u));
  /* 117f84fd call 0x117f5920 */
  push32(0x117f8502u); f_117f5920();
  /* 117f8502 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8505 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8508 jne 0x117f850b */
  if (!C.zf) goto L_117f850b;
  /* 117f850a int3  */
  x86_unimpl("int3 @ 0x117f850a");
L_117f850b:;
  /* 117f850b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f850d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f850f jne 0x117f84d3 */
  if (!C.zf) goto L_117f84d3;
  /* 117f8511 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8514 push eax */
  push32((uint32_t)(EAX));
  /* 117f8515 call 0x117f8560 */
  push32(0x117f851au); f_117f8560();
  /* 117f851a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f851d:;
  /* 117f851d jmp 0x117f82f8 */
  goto L_117f82f8;
L_117f8522:;
  /* 117f8522 push 9 */
  push32((uint32_t)(0x9u));
  /* 117f8524 call 0x117fa300 */
  push32(0x117f8529u); f_117fa300();
  /* 117f8529 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f852c:;
  /* 117f852c push 0x1181e0d4 */
  push32((uint32_t)(0x1181e0d4u));
  /* 117f8531 push 0x1181db9c */
  push32((uint32_t)(0x1181db9cu));
  /* 117f8536 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8538 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f853a push 0 */
  push32((uint32_t)(0x0u));
  /* 117f853c push 0 */
  push32((uint32_t)(0x0u));
  /* 117f853e call 0x117f5920 */
  push32(0x117f8543u); f_117f5920();
  /* 117f8543 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8546 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8549 jne 0x117f854c */
  if (!C.zf) goto L_117f854c;
  /* 117f854b int3  */
  x86_unimpl("int3 @ 0x117f854b");
L_117f854c:;
  /* 117f854c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f854e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f8550 jne 0x117f852c */
  if (!C.zf) goto L_117f852c;
  /* 117f8552 pop edi */
  EDI = (pop32());
  /* 117f8553 pop esi */
  ESI = (pop32());
  /* 117f8554 pop ebx */
  EBX = (pop32());
  /* 117f8555 mov esp, ebp */
  ESP = (EBP);
  /* 117f8557 pop ebp */
  EBP = (pop32());
  /* 117f8558 ret  */
  ESPCHK(0x117f82a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008560 @ 0x117f8560 (276 bytes, 89 insns) */
void f_117f8560(void) {
  FTRACE(0x117f8560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f8560 push ebp */
  push32((uint32_t)(EBP));
  /* 117f8561 mov ebp, esp */
  EBP = (ESP);
  /* 117f8563 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f8566 push ebx */
  push32((uint32_t)(EBX));
  /* 117f8567 push esi */
  push32((uint32_t)(ESI));
  /* 117f8568 push edi */
  push32((uint32_t)(EDI));
  /* 117f8569 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 117f8570 jmp 0x117f857b */
  goto L_117f857b;
L_117f8572:;
  /* 117f8572 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 117f8575 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8578 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_117f857b:;
  /* 117f857b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f857e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8582 jge 0x117f858f */
  if ((C.sf==C.of)) goto L_117f858f;
  /* 117f8584 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f8587 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 117f858a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 117f858d jmp 0x117f8596 */
  goto L_117f8596;
L_117f858f:;
  /* 117f858f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_117f8596:;
  /* 117f8596 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 117f8599 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f859c jge 0x117f863c */
  if ((C.sf==C.of)) goto L_117f863c;
  /* 117f85a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f85a5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f85a8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 117f85ab mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 117f85ae cmp dword ptr [0x11820ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11820ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f85b5 jle 0x117f85d3 */
  if ((C.zf||C.sf!=C.of)) goto L_117f85d3;
  /* 117f85b7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 117f85bc mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f85bf and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 117f85c5 push ecx */
  push32((uint32_t)(ECX));
  /* 117f85c6 call 0x117fc870 */
  push32(0x117f85cbu); f_117fc870();
  /* 117f85cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f85ce mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 117f85d1 jmp 0x117f85f0 */
  goto L_117f85f0;
L_117f85d3:;
  /* 117f85d3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f85d6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 117f85dc mov eax, dword ptr [0x11820c98] */
  EAX = (r32((uint32_t)(0x11820c98)));
  /* 117f85e1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f85e3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 117f85e7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 117f85ed mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_117f85f0:;
  /* 117f85f0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f85f4 je 0x117f8604 */
  if (C.zf) goto L_117f8604;
  /* 117f85f6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f85f9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 117f85ff mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 117f8602 jmp 0x117f860b */
  goto L_117f860b;
L_117f8604:;
  /* 117f8604 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_117f860b:;
  /* 117f860b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 117f860e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 117f8611 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 117f8615 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 117f8618 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 117f861e push edx */
  push32((uint32_t)(EDX));
  /* 117f861f push 0x1181e1c8 */
  push32((uint32_t)(0x1181e1c8u));
  /* 117f8624 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 117f8627 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117f862a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 117f862e push ecx */
  push32((uint32_t)(ECX));
  /* 117f862f call 0x117fc770 */
  push32(0x117f8634u); f_117fc770();
  /* 117f8634 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8637 jmp 0x117f8572 */
  goto L_117f8572;
L_117f863c:;
  /* 117f863c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 117f863f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_117f8644:;
  /* 117f8644 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 117f8647 push eax */
  push32((uint32_t)(EAX));
  /* 117f8648 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 117f864b push ecx */
  push32((uint32_t)(ECX));
  /* 117f864c push 0x1181e1b8 */
  push32((uint32_t)(0x1181e1b8u));
  /* 117f8651 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8653 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8655 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8657 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8659 call 0x117f5920 */
  push32(0x117f865eu); f_117f5920();
  /* 117f865e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8661 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8664 jne 0x117f8667 */
  if (!C.zf) goto L_117f8667;
  /* 117f8666 int3  */
  x86_unimpl("int3 @ 0x117f8666");
L_117f8667:;
  /* 117f8667 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f8669 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f866b jne 0x117f8644 */
  if (!C.zf) goto L_117f8644;
  /* 117f866d pop edi */
  EDI = (pop32());
  /* 117f866e pop esi */
  ESI = (pop32());
  /* 117f866f pop ebx */
  EBX = (pop32());
  /* 117f8670 mov esp, ebp */
  ESP = (EBP);
  /* 117f8672 pop ebp */
  EBP = (pop32());
  /* 117f8673 ret  */
  ESPCHK(0x117f8560u, _esp0);
  ESP += 4; return;
}

/* FUN_10008680 @ 0x117f8680 (116 bytes, 46 insns) */
void f_117f8680(void) {
  FTRACE(0x117f8680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f8680 push ebp */
  push32((uint32_t)(EBP));
  /* 117f8681 mov ebp, esp */
  EBP = (ESP);
  /* 117f8683 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f8686 push ebx */
  push32((uint32_t)(EBX));
  /* 117f8687 push esi */
  push32((uint32_t)(ESI));
  /* 117f8688 push edi */
  push32((uint32_t)(EDI));
  /* 117f8689 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 117f868c push eax */
  push32((uint32_t)(EAX));
  /* 117f868d call 0x117f8000 */
  push32(0x117f8692u); f_117f8000();
  /* 117f8692 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8695 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8699 jne 0x117f86b4 */
  if (!C.zf) goto L_117f86b4;
  /* 117f869b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f869f jne 0x117f86b4 */
  if (!C.zf) goto L_117f86b4;
  /* 117f86a1 mov ecx, dword ptr [0x11820a84] */
  ECX = (r32((uint32_t)(0x11820a84)));
  /* 117f86a7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 117f86aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f86ac je 0x117f86eb */
  if (C.zf) goto L_117f86eb;
  /* 117f86ae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f86b2 je 0x117f86eb */
  if (C.zf) goto L_117f86eb;
L_117f86b4:;
  /* 117f86b4 push 0x1181e1d0 */
  push32((uint32_t)(0x1181e1d0u));
  /* 117f86b9 push 0x1181db9c */
  push32((uint32_t)(0x1181db9cu));
  /* 117f86be push 0 */
  push32((uint32_t)(0x0u));
  /* 117f86c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f86c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f86c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f86c6 call 0x117f5920 */
  push32(0x117f86cbu); f_117f5920();
  /* 117f86cb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f86ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f86d1 jne 0x117f86d4 */
  if (!C.zf) goto L_117f86d4;
  /* 117f86d3 int3  */
  x86_unimpl("int3 @ 0x117f86d3");
L_117f86d4:;
  /* 117f86d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f86d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f86d8 jne 0x117f86b4 */
  if (!C.zf) goto L_117f86b4;
  /* 117f86da push 0 */
  push32((uint32_t)(0x0u));
  /* 117f86dc call 0x117f82a0 */
  push32(0x117f86e1u); f_117f82a0();
  /* 117f86e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f86e4 mov eax, 1 */
  EAX = (0x1u);
  /* 117f86e9 jmp 0x117f86ed */
  goto L_117f86ed;
L_117f86eb:;
  /* 117f86eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117f86ed:;
  /* 117f86ed pop edi */
  EDI = (pop32());
  /* 117f86ee pop esi */
  ESI = (pop32());
  /* 117f86ef pop ebx */
  EBX = (pop32());
  /* 117f86f0 mov esp, ebp */
  ESP = (EBP);
  /* 117f86f2 pop ebp */
  EBP = (pop32());
  /* 117f86f3 ret  */
  ESPCHK(0x117f8680u, _esp0);
  ESP += 4; return;
}

/* FUN_10008700 @ 0x117f8700 (197 bytes, 79 insns) */
void f_117f8700(void) {
  FTRACE(0x117f8700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f8700 push ebp */
  push32((uint32_t)(EBP));
  /* 117f8701 mov ebp, esp */
  EBP = (ESP);
  /* 117f8703 push ecx */
  push32((uint32_t)(ECX));
  /* 117f8704 push ebx */
  push32((uint32_t)(EBX));
  /* 117f8705 push esi */
  push32((uint32_t)(ESI));
  /* 117f8706 push edi */
  push32((uint32_t)(EDI));
  /* 117f8707 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f870b jne 0x117f8712 */
  if (!C.zf) goto L_117f8712;
  /* 117f870d jmp 0x117f87be */
  goto L_117f87be;
L_117f8712:;
  /* 117f8712 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117f8719 jmp 0x117f8724 */
  goto L_117f8724;
L_117f871b:;
  /* 117f871b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f871e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8721 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117f8724:;
  /* 117f8724 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8728 jge 0x117f876e */
  if ((C.sf==C.of)) goto L_117f876e;
L_117f872a:;
  /* 117f872a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f872d mov edx, dword ptr [ecx*4 + 0x11820a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11820a94)));
  /* 117f8734 push edx */
  push32((uint32_t)(EDX));
  /* 117f8735 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8738 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f873b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 117f873f push edx */
  push32((uint32_t)(EDX));
  /* 117f8740 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8743 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f8746 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 117f874a push edx */
  push32((uint32_t)(EDX));
  /* 117f874b push 0x1181e22c */
  push32((uint32_t)(0x1181e22cu));
  /* 117f8750 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8752 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8754 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8756 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8758 call 0x117f5920 */
  push32(0x117f875du); f_117f5920();
  /* 117f875d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8760 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8763 jne 0x117f8766 */
  if (!C.zf) goto L_117f8766;
  /* 117f8765 int3  */
  x86_unimpl("int3 @ 0x117f8765");
L_117f8766:;
  /* 117f8766 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f8768 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f876a jne 0x117f872a */
  if (!C.zf) goto L_117f872a;
  /* 117f876c jmp 0x117f871b */
  goto L_117f871b;
L_117f876e:;
  /* 117f876e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f8771 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 117f8774 push edx */
  push32((uint32_t)(EDX));
  /* 117f8775 push 0x1181e208 */
  push32((uint32_t)(0x1181e208u));
  /* 117f877a push 0 */
  push32((uint32_t)(0x0u));
  /* 117f877c push 0 */
  push32((uint32_t)(0x0u));
  /* 117f877e push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8780 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8782 call 0x117f5920 */
  push32(0x117f8787u); f_117f5920();
  /* 117f8787 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f878a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f878d jne 0x117f8790 */
  if (!C.zf) goto L_117f8790;
  /* 117f878f int3  */
  x86_unimpl("int3 @ 0x117f878f");
L_117f8790:;
  /* 117f8790 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f8792 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f8794 jne 0x117f876e */
  if (!C.zf) goto L_117f876e;
L_117f8796:;
  /* 117f8796 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f8799 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 117f879c push edx */
  push32((uint32_t)(EDX));
  /* 117f879d push 0x1181e1e8 */
  push32((uint32_t)(0x1181e1e8u));
  /* 117f87a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f87a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f87a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f87a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f87aa call 0x117f5920 */
  push32(0x117f87afu); f_117f5920();
  /* 117f87af add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f87b2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f87b5 jne 0x117f87b8 */
  if (!C.zf) goto L_117f87b8;
  /* 117f87b7 int3  */
  x86_unimpl("int3 @ 0x117f87b7");
L_117f87b8:;
  /* 117f87b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f87ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f87bc jne 0x117f8796 */
  if (!C.zf) goto L_117f8796;
L_117f87be:;
  /* 117f87be pop edi */
  EDI = (pop32());
  /* 117f87bf pop esi */
  ESI = (pop32());
  /* 117f87c0 pop ebx */
  EBX = (pop32());
  /* 117f87c1 mov esp, ebp */
  ESP = (EBP);
  /* 117f87c3 pop ebp */
  EBP = (pop32());
  /* 117f87c4 ret  */
  ESPCHK(0x117f8700u, _esp0);
  ESP += 4; return;
}

/* FUN_100087d0 @ 0x117f87d0 (329 bytes, 102 insns) */
void f_117f87d0(void) {
  FTRACE(0x117f87d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f87d0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f87d1 mov ebp, esp */
  EBP = (ESP);
  /* 117f87d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f87d6 cmp dword ptr [0x11824210], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11824210))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f87dd jne 0x117f87e4 */
  if (!C.zf) goto L_117f87e4;
  /* 117f87df call 0x117fd110 */
  push32(0x117f87e4u); f_117fd110();
L_117f87e4:;
  /* 117f87e4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 117f87eb mov eax, dword ptr [0x118226d8] */
  EAX = (r32((uint32_t)(0x118226d8)));
  /* 117f87f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117f87f3:;
  /* 117f87f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f87f6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117f87f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f87fb je 0x117f8829 */
  if (C.zf) goto L_117f8829;
  /* 117f87fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8800 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117f8803 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8806 je 0x117f8811 */
  if (C.zf) goto L_117f8811;
  /* 117f8808 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f880b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f880e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_117f8811:;
  /* 117f8811 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8814 push eax */
  push32((uint32_t)(EAX));
  /* 117f8815 call 0x117f9690 */
  push32(0x117f881au); f_117f9690();
  /* 117f881a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f881d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8820 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 117f8824 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117f8827 jmp 0x117f87f3 */
  goto L_117f87f3;
L_117f8829:;
  /* 117f8829 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 117f882b push 0x1181e24c */
  push32((uint32_t)(0x1181e24cu));
  /* 117f8830 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f8832 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f8835 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 117f883c push ecx */
  push32((uint32_t)(ECX));
  /* 117f883d call 0x117f6860 */
  push32(0x117f8842u); f_117f6860();
  /* 117f8842 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8845 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117f8848 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f884b mov dword ptr [0x1182270c], edx */
  w32((uint32_t)(0x1182270c), (EDX));
  /* 117f8851 cmp dword ptr [0x1182270c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1182270c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8858 jne 0x117f8864 */
  if (!C.zf) goto L_117f8864;
  /* 117f885a push 9 */
  push32((uint32_t)(0x9u));
  /* 117f885c call 0x117f57d0 */
  push32(0x117f8861u); f_117f57d0();
  /* 117f8861 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f8864:;
  /* 117f8864 mov eax, dword ptr [0x118226d8] */
  EAX = (r32((uint32_t)(0x118226d8)));
  /* 117f8869 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f886c jmp 0x117f8877 */
  goto L_117f8877;
L_117f886e:;
  /* 117f886e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8871 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8874 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117f8877:;
  /* 117f8877 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f887a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 117f887d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f887f je 0x117f88e7 */
  if (C.zf) goto L_117f88e7;
  /* 117f8881 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8884 push ecx */
  push32((uint32_t)(ECX));
  /* 117f8885 call 0x117f9690 */
  push32(0x117f888au); f_117f9690();
  /* 117f888a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f888d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8890 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 117f8893 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8896 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 117f8899 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f889c je 0x117f88e5 */
  if (C.zf) goto L_117f88e5;
  /* 117f889e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 117f88a0 push 0x1181e24c */
  push32((uint32_t)(0x1181e24cu));
  /* 117f88a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f88a7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117f88aa push ecx */
  push32((uint32_t)(ECX));
  /* 117f88ab call 0x117f6860 */
  push32(0x117f88b0u); f_117f6860();
  /* 117f88b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f88b3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f88b6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 117f88b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f88bb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f88be jne 0x117f88ca */
  if (!C.zf) goto L_117f88ca;
  /* 117f88c0 push 9 */
  push32((uint32_t)(0x9u));
  /* 117f88c2 call 0x117f57d0 */
  push32(0x117f88c7u); f_117f57d0();
  /* 117f88c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f88ca:;
  /* 117f88ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f88cd push ecx */
  push32((uint32_t)(ECX));
  /* 117f88ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f88d1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117f88d3 push eax */
  push32((uint32_t)(EAX));
  /* 117f88d4 call 0x117f9810 */
  push32(0x117f88d9u); f_117f9810();
  /* 117f88d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f88dc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f88df add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f88e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_117f88e5:;
  /* 117f88e5 jmp 0x117f886e */
  goto L_117f886e;
L_117f88e7:;
  /* 117f88e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f88e9 mov edx, dword ptr [0x118226d8] */
  EDX = (r32((uint32_t)(0x118226d8)));
  /* 117f88ef push edx */
  push32((uint32_t)(EDX));
  /* 117f88f0 call 0x117f72f0 */
  push32(0x117f88f5u); f_117f72f0();
  /* 117f88f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f88f8 mov dword ptr [0x118226d8], 0 */
  w32((uint32_t)(0x118226d8), (0x0u));
  /* 117f8902 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f8905 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 117f890b mov dword ptr [0x11824200], 1 */
  w32((uint32_t)(0x11824200), (0x1u));
  /* 117f8915 mov esp, ebp */
  ESP = (EBP);
  /* 117f8917 pop ebp */
  EBP = (pop32());
  /* 117f8918 ret  */
  ESPCHK(0x117f87d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008920 @ 0x117f8920 (216 bytes, 69 insns) */
void f_117f8920(void) {
  FTRACE(0x117f8920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f8920 push ebp */
  push32((uint32_t)(EBP));
  /* 117f8921 mov ebp, esp */
  EBP = (ESP);
  /* 117f8923 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f8926 cmp dword ptr [0x11824210], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11824210))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f892d jne 0x117f8934 */
  if (!C.zf) goto L_117f8934;
  /* 117f892f call 0x117fd110 */
  push32(0x117f8934u); f_117fd110();
L_117f8934:;
  /* 117f8934 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 117f8939 push 0x11822748 */
  push32((uint32_t)(0x11822748u));
  /* 117f893e push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8940 call dword ptr [0x118252e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118252e0))), 0x117f8946u);
  /* 117f8946 mov dword ptr [0x1182271c], 0x11822748 */
  w32((uint32_t)(0x1182271c), (0x11822748u));
  /* 117f8950 mov eax, dword ptr [0x1182422c] */
  EAX = (r32((uint32_t)(0x1182422c)));
  /* 117f8955 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117f8958 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f895a jne 0x117f8967 */
  if (!C.zf) goto L_117f8967;
  /* 117f895c mov edx, dword ptr [0x1182271c] */
  EDX = (r32((uint32_t)(0x1182271c)));
  /* 117f8962 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 117f8965 jmp 0x117f896f */
  goto L_117f896f;
L_117f8967:;
  /* 117f8967 mov eax, dword ptr [0x1182422c] */
  EAX = (r32((uint32_t)(0x1182422c)));
  /* 117f896c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_117f896f:;
  /* 117f896f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117f8972 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 117f8975 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 117f8978 push edx */
  push32((uint32_t)(EDX));
  /* 117f8979 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 117f897c push eax */
  push32((uint32_t)(EAX));
  /* 117f897d push 0 */
  push32((uint32_t)(0x0u));
  /* 117f897f push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8981 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117f8984 push ecx */
  push32((uint32_t)(ECX));
  /* 117f8985 call 0x117f8a00 */
  push32(0x117f898au); f_117f8a00();
  /* 117f898a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f898d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 117f8992 push 0x1181e258 */
  push32((uint32_t)(0x1181e258u));
  /* 117f8997 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f8999 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f899c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f899f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 117f89a2 push ecx */
  push32((uint32_t)(ECX));
  /* 117f89a3 call 0x117f6860 */
  push32(0x117f89a8u); f_117f6860();
  /* 117f89a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f89ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117f89ae cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f89b2 jne 0x117f89be */
  if (!C.zf) goto L_117f89be;
  /* 117f89b4 push 8 */
  push32((uint32_t)(0x8u));
  /* 117f89b6 call 0x117f57d0 */
  push32(0x117f89bbu); f_117f57d0();
  /* 117f89bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f89be:;
  /* 117f89be lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 117f89c1 push edx */
  push32((uint32_t)(EDX));
  /* 117f89c2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 117f89c5 push eax */
  push32((uint32_t)(EAX));
  /* 117f89c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f89c9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f89cc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 117f89cf push eax */
  push32((uint32_t)(EAX));
  /* 117f89d0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f89d3 push ecx */
  push32((uint32_t)(ECX));
  /* 117f89d4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117f89d7 push edx */
  push32((uint32_t)(EDX));
  /* 117f89d8 call 0x117f8a00 */
  push32(0x117f89ddu); f_117f8a00();
  /* 117f89dd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f89e0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f89e3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f89e6 mov dword ptr [0x11822700], eax */
  w32((uint32_t)(0x11822700), (EAX));
  /* 117f89eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f89ee mov dword ptr [0x11822704], ecx */
  w32((uint32_t)(0x11822704), (ECX));
  /* 117f89f4 mov esp, ebp */
  ESP = (EBP);
  /* 117f89f6 pop ebp */
  EBP = (pop32());
  /* 117f89f7 ret  */
  ESPCHK(0x117f8920u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a00 @ 0x117f8a00 (1060 bytes, 360 insns) */
void f_117f8a00(void) {
  FTRACE(0x117f8a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f8a00 push ebp */
  push32((uint32_t)(EBP));
  /* 117f8a01 mov ebp, esp */
  EBP = (ESP);
  /* 117f8a03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f8a06 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f8a09 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 117f8a0f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f8a12 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 117f8a18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f8a1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117f8a1e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8a22 je 0x117f8a35 */
  if (C.zf) goto L_117f8a35;
  /* 117f8a24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f8a27 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f8a2a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 117f8a2c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f8a2f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8a32 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_117f8a35:;
  /* 117f8a35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8a38 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117f8a3b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8a3e jne 0x117f8b0d */
  if (!C.zf) goto L_117f8b0d;
L_117f8a44:;
  /* 117f8a44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8a47 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8a4a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117f8a4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8a50 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117f8a53 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8a56 je 0x117f8ad2 */
  if (C.zf) goto L_117f8ad2;
  /* 117f8a58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8a5b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 117f8a5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f8a60 je 0x117f8ad2 */
  if (C.zf) goto L_117f8ad2;
  /* 117f8a62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8a65 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f8a67 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117f8a69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f8a6b mov al, byte ptr [edx + 0x11823f61] */
  AL = (r8((uint32_t)(EDX + 0x11823f61)));
  /* 117f8a71 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 117f8a74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f8a76 je 0x117f8aa7 */
  if (C.zf) goto L_117f8aa7;
  /* 117f8a78 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f8a7b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117f8a7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8a80 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f8a83 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 117f8a85 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8a89 je 0x117f8aa7 */
  if (C.zf) goto L_117f8aa7;
  /* 117f8a8b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f8a8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8a91 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117f8a93 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 117f8a95 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f8a98 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8a9b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 117f8a9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8aa1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8aa4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117f8aa7:;
  /* 117f8aa7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f8aaa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117f8aac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8aaf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f8ab2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 117f8ab4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8ab8 je 0x117f8acd */
  if (C.zf) goto L_117f8acd;
  /* 117f8aba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f8abd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8ac0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117f8ac2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 117f8ac4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f8ac7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8aca mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_117f8acd:;
  /* 117f8acd jmp 0x117f8a44 */
  goto L_117f8a44;
L_117f8ad2:;
  /* 117f8ad2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f8ad5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117f8ad7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8ada mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f8add mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 117f8adf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8ae3 je 0x117f8af4 */
  if (C.zf) goto L_117f8af4;
  /* 117f8ae5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f8ae8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 117f8aeb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f8aee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8af1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_117f8af4:;
  /* 117f8af4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8af7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117f8afa cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8afd jne 0x117f8b08 */
  if (!C.zf) goto L_117f8b08;
  /* 117f8aff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8b02 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8b05 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117f8b08:;
  /* 117f8b08 jmp 0x117f8bdc */
  goto L_117f8bdc;
L_117f8b0d:;
  /* 117f8b0d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f8b10 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117f8b12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8b15 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f8b18 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 117f8b1a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8b1e je 0x117f8b33 */
  if (C.zf) goto L_117f8b33;
  /* 117f8b20 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f8b23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8b26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117f8b28 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 117f8b2a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f8b2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8b30 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_117f8b33:;
  /* 117f8b33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8b36 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117f8b38 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 117f8b3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8b3e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8b41 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f8b44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f8b47 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 117f8b4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f8b4f mov dl, byte ptr [ecx + 0x11823f61] */
  DL = (r8((uint32_t)(ECX + 0x11823f61)));
  /* 117f8b55 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 117f8b58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f8b5a je 0x117f8b8b */
  if (C.zf) goto L_117f8b8b;
  /* 117f8b5c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f8b5f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117f8b61 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8b64 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f8b67 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 117f8b69 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8b6d je 0x117f8b82 */
  if (C.zf) goto L_117f8b82;
  /* 117f8b6f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f8b72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8b75 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117f8b77 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 117f8b79 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f8b7c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8b7f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_117f8b82:;
  /* 117f8b82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8b85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8b88 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117f8b8b:;
  /* 117f8b8b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f8b8e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 117f8b94 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8b97 je 0x117f8bb7 */
  if (C.zf) goto L_117f8bb7;
  /* 117f8b99 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f8b9c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f8ba1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f8ba3 je 0x117f8bb7 */
  if (C.zf) goto L_117f8bb7;
  /* 117f8ba5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f8ba8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 117f8bae cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8bb1 jne 0x117f8b0d */
  if (!C.zf) goto L_117f8b0d;
L_117f8bb7:;
  /* 117f8bb7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f8bba and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 117f8bc0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f8bc2 jne 0x117f8bcf */
  if (!C.zf) goto L_117f8bcf;
  /* 117f8bc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8bc7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f8bca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f8bcd jmp 0x117f8bdc */
  goto L_117f8bdc;
L_117f8bcf:;
  /* 117f8bcf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8bd3 je 0x117f8bdc */
  if (C.zf) goto L_117f8bdc;
  /* 117f8bd5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f8bd8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_117f8bdc:;
  /* 117f8bdc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_117f8be3:;
  /* 117f8be3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8be6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 117f8be9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f8beb je 0x117f8c0e */
  if (C.zf) goto L_117f8c0e;
L_117f8bed:;
  /* 117f8bed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8bf0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117f8bf3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8bf6 je 0x117f8c03 */
  if (C.zf) goto L_117f8c03;
  /* 117f8bf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8bfb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117f8bfe cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8c01 jne 0x117f8c0e */
  if (!C.zf) goto L_117f8c0e;
L_117f8c03:;
  /* 117f8c03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8c06 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8c09 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117f8c0c jmp 0x117f8bed */
  goto L_117f8bed;
L_117f8c0e:;
  /* 117f8c0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8c11 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117f8c14 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f8c16 jne 0x117f8c1d */
  if (!C.zf) goto L_117f8c1d;
  /* 117f8c18 jmp 0x117f8dfb */
  goto L_117f8dfb;
L_117f8c1d:;
  /* 117f8c1d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8c21 je 0x117f8c34 */
  if (C.zf) goto L_117f8c34;
  /* 117f8c23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f8c26 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f8c29 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 117f8c2b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f8c2e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8c31 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_117f8c34:;
  /* 117f8c34 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f8c37 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117f8c39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8c3c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f8c3f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_117f8c41:;
  /* 117f8c41 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 117f8c48 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_117f8c4f:;
  /* 117f8c4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8c52 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 117f8c55 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8c58 jne 0x117f8c6e */
  if (!C.zf) goto L_117f8c6e;
  /* 117f8c5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8c5d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8c60 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117f8c63 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117f8c66 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8c69 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 117f8c6c jmp 0x117f8c4f */
  goto L_117f8c4f;
L_117f8c6e:;
  /* 117f8c6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8c71 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117f8c74 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8c77 jne 0x117f8cca */
  if (!C.zf) goto L_117f8cca;
  /* 117f8c79 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117f8c7c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f8c7e mov ecx, 2 */
  ECX = (0x2u);
  /* 117f8c83 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117f8c85 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f8c87 jne 0x117f8cc2 */
  if (!C.zf) goto L_117f8cc2;
  /* 117f8c89 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8c8d je 0x117f8caf */
  if (C.zf) goto L_117f8caf;
  /* 117f8c8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8c92 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 117f8c96 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8c99 jne 0x117f8ca6 */
  if (!C.zf) goto L_117f8ca6;
  /* 117f8c9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8c9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8ca1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117f8ca4 jmp 0x117f8cad */
  goto L_117f8cad;
L_117f8ca6:;
  /* 117f8ca6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_117f8cad:;
  /* 117f8cad jmp 0x117f8cb6 */
  goto L_117f8cb6;
L_117f8caf:;
  /* 117f8caf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_117f8cb6:;
  /* 117f8cb6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f8cb8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8cbc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 117f8cbf mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_117f8cc2:;
  /* 117f8cc2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117f8cc5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 117f8cc7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_117f8cca:;
  /* 117f8cca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117f8ccd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117f8cd0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f8cd3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 117f8cd6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f8cd8 je 0x117f8cfe */
  if (C.zf) goto L_117f8cfe;
  /* 117f8cda cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8cde je 0x117f8cef */
  if (C.zf) goto L_117f8cef;
  /* 117f8ce0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f8ce3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 117f8ce6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f8ce9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8cec mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_117f8cef:;
  /* 117f8cef mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f8cf2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117f8cf4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8cf7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f8cfa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117f8cfc jmp 0x117f8cca */
  goto L_117f8cca;
L_117f8cfe:;
  /* 117f8cfe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8d01 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 117f8d04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f8d06 je 0x117f8d24 */
  if (C.zf) goto L_117f8d24;
  /* 117f8d08 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8d0c jne 0x117f8d29 */
  if (!C.zf) goto L_117f8d29;
  /* 117f8d0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8d11 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117f8d14 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8d17 je 0x117f8d24 */
  if (C.zf) goto L_117f8d24;
  /* 117f8d19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8d1c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117f8d1f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8d22 jne 0x117f8d29 */
  if (!C.zf) goto L_117f8d29;
L_117f8d24:;
  /* 117f8d24 jmp 0x117f8dd4 */
  goto L_117f8dd4;
L_117f8d29:;
  /* 117f8d29 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8d2d je 0x117f8dc6 */
  if (C.zf) goto L_117f8dc6;
  /* 117f8d33 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8d37 je 0x117f8d8d */
  if (C.zf) goto L_117f8d8d;
  /* 117f8d39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8d3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f8d3e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117f8d40 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f8d42 mov cl, byte ptr [eax + 0x11823f61] */
  CL = (r8((uint32_t)(EAX + 0x11823f61)));
  /* 117f8d48 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 117f8d4b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f8d4d je 0x117f8d78 */
  if (C.zf) goto L_117f8d78;
  /* 117f8d4f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f8d52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8d55 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117f8d57 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 117f8d59 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f8d5c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8d5f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 117f8d62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8d65 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8d68 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f8d6b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f8d6e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117f8d70 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8d73 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f8d76 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_117f8d78:;
  /* 117f8d78 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f8d7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8d7e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117f8d80 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 117f8d82 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f8d85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8d88 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 117f8d8b jmp 0x117f8db9 */
  goto L_117f8db9;
L_117f8d8d:;
  /* 117f8d8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8d90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f8d92 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117f8d94 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f8d96 mov cl, byte ptr [eax + 0x11823f61] */
  CL = (r8((uint32_t)(EAX + 0x11823f61)));
  /* 117f8d9c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 117f8d9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f8da1 je 0x117f8db9 */
  if (C.zf) goto L_117f8db9;
  /* 117f8da3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8da6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8da9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117f8dac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f8daf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117f8db1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8db4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f8db7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_117f8db9:;
  /* 117f8db9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f8dbc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117f8dbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8dc1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f8dc4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_117f8dc6:;
  /* 117f8dc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8dc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8dcc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f8dcf jmp 0x117f8c41 */
  goto L_117f8c41;
L_117f8dd4:;
  /* 117f8dd4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8dd8 je 0x117f8de9 */
  if (C.zf) goto L_117f8de9;
  /* 117f8dda mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f8ddd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 117f8de0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f8de3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8de6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_117f8de9:;
  /* 117f8de9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f8dec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117f8dee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8df1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117f8df4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 117f8df6 jmp 0x117f8be3 */
  goto L_117f8be3;
L_117f8dfb:;
  /* 117f8dfb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8dff je 0x117f8e13 */
  if (C.zf) goto L_117f8e13;
  /* 117f8e01 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f8e04 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 117f8e0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f8e0d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8e10 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_117f8e13:;
  /* 117f8e13 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f8e16 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117f8e18 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8e1b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f8e1e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117f8e20 mov esp, ebp */
  ESP = (EBP);
  /* 117f8e22 pop ebp */
  EBP = (pop32());
  /* 117f8e23 ret  */
  ESPCHK(0x117f8a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e30 @ 0x117f8e30 (537 bytes, 173 insns) */
void f_117f8e30(void) {
  FTRACE(0x117f8e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f8e30 push ebp */
  push32((uint32_t)(EBP));
  /* 117f8e31 mov ebp, esp */
  EBP = (ESP);
  /* 117f8e33 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f8e36 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 117f8e3d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 117f8e44 cmp dword ptr [0x1182284c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1182284c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8e4b jne 0x117f8e8a */
  if (!C.zf) goto L_117f8e8a;
  /* 117f8e4d call dword ptr [0x1182537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182537c))), 0x117f8e53u);
  /* 117f8e53 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 117f8e56 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8e5a je 0x117f8e68 */
  if (C.zf) goto L_117f8e68;
  /* 117f8e5c mov dword ptr [0x1182284c], 1 */
  w32((uint32_t)(0x1182284c), (0x1u));
  /* 117f8e66 jmp 0x117f8e8a */
  goto L_117f8e8a;
L_117f8e68:;
  /* 117f8e68 call dword ptr [0x11825380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825380))), 0x117f8e6eu);
  /* 117f8e6e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 117f8e71 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8e75 je 0x117f8e83 */
  if (C.zf) goto L_117f8e83;
  /* 117f8e77 mov dword ptr [0x1182284c], 2 */
  w32((uint32_t)(0x1182284c), (0x2u));
  /* 117f8e81 jmp 0x117f8e8a */
  goto L_117f8e8a;
L_117f8e83:;
  /* 117f8e83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f8e85 jmp 0x117f9045 */
  goto L_117f9045;
L_117f8e8a:;
  /* 117f8e8a cmp dword ptr [0x1182284c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1182284c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8e91 jne 0x117f8f8e */
  if (!C.zf) goto L_117f8f8e;
  /* 117f8e97 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8e9b jne 0x117f8eb3 */
  if (!C.zf) goto L_117f8eb3;
  /* 117f8e9d call dword ptr [0x1182537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182537c))), 0x117f8ea3u);
  /* 117f8ea3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 117f8ea6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8eaa jne 0x117f8eb3 */
  if (!C.zf) goto L_117f8eb3;
  /* 117f8eac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f8eae jmp 0x117f9045 */
  goto L_117f9045;
L_117f8eb3:;
  /* 117f8eb3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117f8eb6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_117f8eb9:;
  /* 117f8eb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f8ebc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f8ebe mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 117f8ec1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f8ec3 je 0x117f8ee5 */
  if (C.zf) goto L_117f8ee5;
  /* 117f8ec5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f8ec8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8ecb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117f8ece mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f8ed1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f8ed3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 117f8ed6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f8ed8 jne 0x117f8ee3 */
  if (!C.zf) goto L_117f8ee3;
  /* 117f8eda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f8edd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8ee0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_117f8ee3:;
  /* 117f8ee3 jmp 0x117f8eb9 */
  goto L_117f8eb9;
L_117f8ee5:;
  /* 117f8ee5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f8ee8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f8eeb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 117f8eed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8ef0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117f8ef3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8ef5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8ef7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8ef9 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8efb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8efe push edx */
  push32((uint32_t)(EDX));
  /* 117f8eff mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117f8f02 push eax */
  push32((uint32_t)(EAX));
  /* 117f8f03 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8f05 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8f07 call dword ptr [0x11825384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825384))), 0x117f8f0du);
  /* 117f8f0d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 117f8f10 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8f14 je 0x117f8f34 */
  if (C.zf) goto L_117f8f34;
  /* 117f8f16 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 117f8f18 push 0x1181e264 */
  push32((uint32_t)(0x1181e264u));
  /* 117f8f1d push 2 */
  push32((uint32_t)(0x2u));
  /* 117f8f1f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117f8f22 push ecx */
  push32((uint32_t)(ECX));
  /* 117f8f23 call 0x117f6860 */
  push32(0x117f8f28u); f_117f6860();
  /* 117f8f28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8f2b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 117f8f2e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8f32 jne 0x117f8f45 */
  if (!C.zf) goto L_117f8f45;
L_117f8f34:;
  /* 117f8f34 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117f8f37 push edx */
  push32((uint32_t)(EDX));
  /* 117f8f38 call dword ptr [0x11825388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825388))), 0x117f8f3eu);
  /* 117f8f3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f8f40 jmp 0x117f9045 */
  goto L_117f9045;
L_117f8f45:;
  /* 117f8f45 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8f47 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8f49 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117f8f4c push eax */
  push32((uint32_t)(EAX));
  /* 117f8f4d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117f8f50 push ecx */
  push32((uint32_t)(ECX));
  /* 117f8f51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f8f54 push edx */
  push32((uint32_t)(EDX));
  /* 117f8f55 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117f8f58 push eax */
  push32((uint32_t)(EAX));
  /* 117f8f59 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8f5b push 0 */
  push32((uint32_t)(0x0u));
  /* 117f8f5d call dword ptr [0x11825384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825384))), 0x117f8f63u);
  /* 117f8f63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f8f65 jne 0x117f8f7c */
  if (!C.zf) goto L_117f8f7c;
  /* 117f8f67 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f8f69 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117f8f6c push ecx */
  push32((uint32_t)(ECX));
  /* 117f8f6d call 0x117f72f0 */
  push32(0x117f8f72u); f_117f72f0();
  /* 117f8f72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8f75 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_117f8f7c:;
  /* 117f8f7c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117f8f7f push edx */
  push32((uint32_t)(EDX));
  /* 117f8f80 call dword ptr [0x11825388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825388))), 0x117f8f86u);
  /* 117f8f86 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117f8f89 jmp 0x117f9045 */
  goto L_117f9045;
L_117f8f8e:;
  /* 117f8f8e cmp dword ptr [0x1182284c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1182284c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8f95 jne 0x117f9043 */
  if (!C.zf) goto L_117f9043;
  /* 117f8f9b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8f9f jne 0x117f8fb7 */
  if (!C.zf) goto L_117f8fb7;
  /* 117f8fa1 call dword ptr [0x11825380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825380))), 0x117f8fa7u);
  /* 117f8fa7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 117f8faa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f8fae jne 0x117f8fb7 */
  if (!C.zf) goto L_117f8fb7;
  /* 117f8fb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f8fb2 jmp 0x117f9045 */
  goto L_117f9045;
L_117f8fb7:;
  /* 117f8fb7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117f8fba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_117f8fbd:;
  /* 117f8fbd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f8fc0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117f8fc3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f8fc5 je 0x117f8fe5 */
  if (C.zf) goto L_117f8fe5;
  /* 117f8fc7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f8fca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8fcd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117f8fd0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f8fd3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117f8fd6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f8fd8 jne 0x117f8fe3 */
  if (!C.zf) goto L_117f8fe3;
  /* 117f8fda mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f8fdd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8fe0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_117f8fe3:;
  /* 117f8fe3 jmp 0x117f8fbd */
  goto L_117f8fbd;
L_117f8fe5:;
  /* 117f8fe5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f8fe8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f8feb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f8fee mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 117f8ff1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 117f8ff6 push 0x1181e264 */
  push32((uint32_t)(0x1181e264u));
  /* 117f8ffb push 2 */
  push32((uint32_t)(0x2u));
  /* 117f8ffd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117f9000 push edx */
  push32((uint32_t)(EDX));
  /* 117f9001 call 0x117f6860 */
  push32(0x117f9006u); f_117f6860();
  /* 117f9006 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9009 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117f900c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9010 jne 0x117f9020 */
  if (!C.zf) goto L_117f9020;
  /* 117f9012 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117f9015 push eax */
  push32((uint32_t)(EAX));
  /* 117f9016 call dword ptr [0x1182538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182538c))), 0x117f901cu);
  /* 117f901c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f901e jmp 0x117f9045 */
  goto L_117f9045;
L_117f9020:;
  /* 117f9020 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117f9023 push ecx */
  push32((uint32_t)(ECX));
  /* 117f9024 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117f9027 push edx */
  push32((uint32_t)(EDX));
  /* 117f9028 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f902b push eax */
  push32((uint32_t)(EAX));
  /* 117f902c call 0x117fd140 */
  push32(0x117f9031u); f_117fd140();
  /* 117f9031 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9034 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117f9037 push ecx */
  push32((uint32_t)(ECX));
  /* 117f9038 call dword ptr [0x1182538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182538c))), 0x117f903eu);
  /* 117f903e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f9041 jmp 0x117f9045 */
  goto L_117f9045;
L_117f9043:;
  /* 117f9043 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117f9045:;
  /* 117f9045 mov esp, ebp */
  ESP = (EBP);
  /* 117f9047 pop ebp */
  EBP = (pop32());
  /* 117f9048 ret  */
  ESPCHK(0x117f8e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009050 @ 0x117f9050 (77 bytes, 25 insns) */
void f_117f9050(void) {
  FTRACE(0x117f9050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f9050 push ebp */
  push32((uint32_t)(EBP));
  /* 117f9051 mov ebp, esp */
  EBP = (ESP);
  /* 117f9053 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f9055 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 117f905a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f905c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9060 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 117f9063 push eax */
  push32((uint32_t)(EAX));
  /* 117f9064 call dword ptr [0x11825374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825374))), 0x117f906au);
  /* 117f906a mov dword ptr [0x1182408c], eax */
  w32((uint32_t)(0x1182408c), (EAX));
  /* 117f906f cmp dword ptr [0x1182408c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1182408c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9076 jne 0x117f907c */
  if (!C.zf) goto L_117f907c;
  /* 117f9078 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f907a jmp 0x117f909b */
  goto L_117f909b;
L_117f907c:;
  /* 117f907c call 0x117fab00 */
  push32(0x117f9081u); f_117fab00();
  /* 117f9081 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f9083 jne 0x117f9096 */
  if (!C.zf) goto L_117f9096;
  /* 117f9085 mov ecx, dword ptr [0x1182408c] */
  ECX = (r32((uint32_t)(0x1182408c)));
  /* 117f908b push ecx */
  push32((uint32_t)(ECX));
  /* 117f908c call dword ptr [0x11825378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825378))), 0x117f9092u);
  /* 117f9092 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f9094 jmp 0x117f909b */
  goto L_117f909b;
L_117f9096:;
  /* 117f9096 mov eax, 1 */
  EAX = (0x1u);
L_117f909b:;
  /* 117f909b pop ebp */
  EBP = (pop32());
  /* 117f909c ret  */
  ESPCHK(0x117f9050u, _esp0);
  ESP += 4; return;
}

/* FUN_100090a0 @ 0x117f90a0 (156 bytes, 48 insns) */
void f_117f90a0(void) {
  FTRACE(0x117f90a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f90a0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f90a1 mov ebp, esp */
  EBP = (ESP);
  /* 117f90a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f90a6 mov eax, dword ptr [0x11824088] */
  EAX = (r32((uint32_t)(0x11824088)));
  /* 117f90ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117f90ae mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117f90b5 jmp 0x117f90c0 */
  goto L_117f90c0;
L_117f90b7:;
  /* 117f90b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f90ba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f90bd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117f90c0:;
  /* 117f90c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f90c3 cmp edx, dword ptr [0x11824084] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11824084))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f90c9 jge 0x117f9116 */
  if ((C.sf==C.of)) goto L_117f9116;
  /* 117f90cb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 117f90d0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 117f90d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f90d8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 117f90db push ecx */
  push32((uint32_t)(ECX));
  /* 117f90dc call dword ptr [0x1182536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182536c))), 0x117f90e2u);
  /* 117f90e2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 117f90e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f90e9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f90ec mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 117f90ef push eax */
  push32((uint32_t)(EAX));
  /* 117f90f0 call dword ptr [0x1182536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182536c))), 0x117f90f6u);
  /* 117f90f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f90f9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 117f90fc push edx */
  push32((uint32_t)(EDX));
  /* 117f90fd push 0 */
  push32((uint32_t)(0x0u));
  /* 117f90ff mov eax, dword ptr [0x1182408c] */
  EAX = (r32((uint32_t)(0x1182408c)));
  /* 117f9104 push eax */
  push32((uint32_t)(EAX));
  /* 117f9105 call dword ptr [0x11825370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825370))), 0x117f910bu);
  /* 117f910b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f910e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9111 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117f9114 jmp 0x117f90b7 */
  goto L_117f90b7;
L_117f9116:;
  /* 117f9116 mov edx, dword ptr [0x11824088] */
  EDX = (r32((uint32_t)(0x11824088)));
  /* 117f911c push edx */
  push32((uint32_t)(EDX));
  /* 117f911d push 0 */
  push32((uint32_t)(0x0u));
  /* 117f911f mov eax, dword ptr [0x1182408c] */
  EAX = (r32((uint32_t)(0x1182408c)));
  /* 117f9124 push eax */
  push32((uint32_t)(EAX));
  /* 117f9125 call dword ptr [0x11825370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825370))), 0x117f912bu);
  /* 117f912b mov ecx, dword ptr [0x1182408c] */
  ECX = (r32((uint32_t)(0x1182408c)));
  /* 117f9131 push ecx */
  push32((uint32_t)(ECX));
  /* 117f9132 call dword ptr [0x11825378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825378))), 0x117f9138u);
  /* 117f9138 mov esp, ebp */
  ESP = (EBP);
  /* 117f913a pop ebp */
  EBP = (pop32());
  /* 117f913b ret  */
  ESPCHK(0x117f90a0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x117f9140 (73 bytes, 19 insns) */
void f_117f9140(void) {
  FTRACE(0x117f9140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f9140 push ebp */
  push32((uint32_t)(EBP));
  /* 117f9141 mov ebp, esp */
  EBP = (ESP);
  /* 117f9143 cmp dword ptr [0x118226e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118226e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f914a je 0x117f915e */
  if (C.zf) goto L_117f915e;
  /* 117f914c cmp dword ptr [0x118226e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118226e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9153 jne 0x117f9187 */
  if (!C.zf) goto L_117f9187;
  /* 117f9155 cmp dword ptr [0x118226e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118226e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f915c jne 0x117f9187 */
  if (!C.zf) goto L_117f9187;
L_117f915e:;
  /* 117f915e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 117f9163 call 0x117f9190 */
  push32(0x117f9168u); f_117f9190();
  /* 117f9168 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f916b cmp dword ptr [0x11822850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9172 je 0x117f917a */
  if (C.zf) goto L_117f917a;
  /* 117f9174 call dword ptr [0x11822850] */
  call_ind((uint32_t)(r32((uint32_t)(0x11822850))), 0x117f917au);
L_117f917a:;
  /* 117f917a push 0xff */
  push32((uint32_t)(0xffu));
  /* 117f917f call 0x117f9190 */
  push32(0x117f9184u); f_117f9190();
  /* 117f9184 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f9187:;
  /* 117f9187 pop ebp */
  EBP = (pop32());
  /* 117f9188 ret  */
  ESPCHK(0x117f9140u, _esp0);
  ESP += 4; return;
}

/* FUN_10009190 @ 0x117f9190 (447 bytes, 131 insns) */
void f_117f9190(void) {
  FTRACE(0x117f9190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f9190 push ebp */
  push32((uint32_t)(EBP));
  /* 117f9191 mov ebp, esp */
  EBP = (ESP);
  /* 117f9193 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f9199 push ebx */
  push32((uint32_t)(EBX));
  /* 117f919a push esi */
  push32((uint32_t)(ESI));
  /* 117f919b push edi */
  push32((uint32_t)(EDI));
  /* 117f919c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 117f91a3 jmp 0x117f91ae */
  goto L_117f91ae;
L_117f91a5:;
  /* 117f91a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f91a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f91ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_117f91ae:;
  /* 117f91ae cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f91b2 jae 0x117f91c7 */
  if (!C.cf) goto L_117f91c7;
  /* 117f91b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f91b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f91ba cmp edx, dword ptr [ecx*8 + 0x11820ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11820ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f91c1 jne 0x117f91c5 */
  if (!C.zf) goto L_117f91c5;
  /* 117f91c3 jmp 0x117f91c7 */
  goto L_117f91c7;
L_117f91c5:;
  /* 117f91c5 jmp 0x117f91a5 */
  goto L_117f91a5;
L_117f91c7:;
  /* 117f91c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f91ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f91cd cmp ecx, dword ptr [eax*8 + 0x11820ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11820ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f91d4 jne 0x117f9348 */
  if (!C.zf) goto L_117f9348;
  /* 117f91da cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f91e1 je 0x117f9204 */
  if (C.zf) goto L_117f9204;
  /* 117f91e3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f91e6 mov eax, dword ptr [edx*8 + 0x11820ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11820ab4)));
  /* 117f91ed push eax */
  push32((uint32_t)(EAX));
  /* 117f91ee push 0 */
  push32((uint32_t)(0x0u));
  /* 117f91f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f91f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f91f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f91f6 call 0x117f5920 */
  push32(0x117f91fbu); f_117f5920();
  /* 117f91fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f91fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9201 jne 0x117f9204 */
  if (!C.zf) goto L_117f9204;
  /* 117f9203 int3  */
  x86_unimpl("int3 @ 0x117f9203");
L_117f9204:;
  /* 117f9204 cmp dword ptr [0x118226e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118226e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f920b je 0x117f921f */
  if (C.zf) goto L_117f921f;
  /* 117f920d cmp dword ptr [0x118226e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118226e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9214 jne 0x117f9258 */
  if (!C.zf) goto L_117f9258;
  /* 117f9216 cmp dword ptr [0x118226e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118226e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f921d jne 0x117f9258 */
  if (!C.zf) goto L_117f9258;
L_117f921f:;
  /* 117f921f push 0 */
  push32((uint32_t)(0x0u));
  /* 117f9221 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 117f9224 push ecx */
  push32((uint32_t)(ECX));
  /* 117f9225 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f9228 mov eax, dword ptr [edx*8 + 0x11820ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11820ab4)));
  /* 117f922f push eax */
  push32((uint32_t)(EAX));
  /* 117f9230 call 0x117f9690 */
  push32(0x117f9235u); f_117f9690();
  /* 117f9235 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9238 push eax */
  push32((uint32_t)(EAX));
  /* 117f9239 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f923c mov edx, dword ptr [ecx*8 + 0x11820ab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x11820ab4)));
  /* 117f9243 push edx */
  push32((uint32_t)(EDX));
  /* 117f9244 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 117f9246 call dword ptr [0x118253b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253b0))), 0x117f924cu);
  /* 117f924c push eax */
  push32((uint32_t)(EAX));
  /* 117f924d call dword ptr [0x118253b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253b4))), 0x117f9253u);
  /* 117f9253 jmp 0x117f9348 */
  goto L_117f9348;
L_117f9258:;
  /* 117f9258 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f925f je 0x117f9348 */
  if (C.zf) goto L_117f9348;
  /* 117f9265 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 117f926a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 117f9270 push eax */
  push32((uint32_t)(EAX));
  /* 117f9271 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f9273 call dword ptr [0x118252e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118252e0))), 0x117f9279u);
  /* 117f9279 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f927b jne 0x117f9291 */
  if (!C.zf) goto L_117f9291;
  /* 117f927d push 0x1181dacc */
  push32((uint32_t)(0x1181daccu));
  /* 117f9282 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 117f9288 push ecx */
  push32((uint32_t)(ECX));
  /* 117f9289 call 0x117f9810 */
  push32(0x117f928eu); f_117f9810();
  /* 117f928e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f9291:;
  /* 117f9291 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 117f9297 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 117f929a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f929d push eax */
  push32((uint32_t)(EAX));
  /* 117f929e call 0x117f9690 */
  push32(0x117f92a3u); f_117f9690();
  /* 117f92a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f92a6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f92a9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f92ac jbe 0x117f92da */
  if ((C.cf||C.zf)) goto L_117f92da;
  /* 117f92ae lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 117f92b4 push ecx */
  push32((uint32_t)(ECX));
  /* 117f92b5 call 0x117f9690 */
  push32(0x117f92bau); f_117f9690();
  /* 117f92ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f92bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f92c0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 117f92c4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117f92c7 push 3 */
  push32((uint32_t)(0x3u));
  /* 117f92c9 push 0x1181dac8 */
  push32((uint32_t)(0x1181dac8u));
  /* 117f92ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f92d1 push ecx */
  push32((uint32_t)(ECX));
  /* 117f92d2 call 0x117fa080 */
  push32(0x117f92d7u); f_117fa080();
  /* 117f92d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f92da:;
  /* 117f92da push 0x1181e520 */
  push32((uint32_t)(0x1181e520u));
  /* 117f92df lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 117f92e5 push edx */
  push32((uint32_t)(EDX));
  /* 117f92e6 call 0x117f9810 */
  push32(0x117f92ebu); f_117f9810();
  /* 117f92eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f92ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f92f1 push eax */
  push32((uint32_t)(EAX));
  /* 117f92f2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 117f92f8 push ecx */
  push32((uint32_t)(ECX));
  /* 117f92f9 call 0x117f9820 */
  push32(0x117f92feu); f_117f9820();
  /* 117f92fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9301 push 0x1181da40 */
  push32((uint32_t)(0x1181da40u));
  /* 117f9306 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 117f930c push edx */
  push32((uint32_t)(EDX));
  /* 117f930d call 0x117f9820 */
  push32(0x117f9312u); f_117f9820();
  /* 117f9312 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9315 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f9318 mov ecx, dword ptr [eax*8 + 0x11820ab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x11820ab4)));
  /* 117f931f push ecx */
  push32((uint32_t)(ECX));
  /* 117f9320 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 117f9326 push edx */
  push32((uint32_t)(EDX));
  /* 117f9327 call 0x117f9820 */
  push32(0x117f932cu); f_117f9820();
  /* 117f932c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f932f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 117f9334 push 0x1181e4f8 */
  push32((uint32_t)(0x1181e4f8u));
  /* 117f9339 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 117f933f push eax */
  push32((uint32_t)(EAX));
  /* 117f9340 call 0x117f9fc0 */
  push32(0x117f9345u); f_117f9fc0();
  /* 117f9345 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f9348:;
  /* 117f9348 pop edi */
  EDI = (pop32());
  /* 117f9349 pop esi */
  ESI = (pop32());
  /* 117f934a pop ebx */
  EBX = (pop32());
  /* 117f934b mov esp, ebp */
  ESP = (EBP);
  /* 117f934d pop ebp */
  EBP = (pop32());
  /* 117f934e ret  */
  ESPCHK(0x117f9190u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x117f9350 (80 bytes, 27 insns) */
void f_117f9350(void) {
  FTRACE(0x117f9350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f9350 push ebp */
  push32((uint32_t)(EBP));
  /* 117f9351 mov ebp, esp */
  EBP = (ESP);
  /* 117f9353 push ecx */
  push32((uint32_t)(ECX));
  /* 117f9354 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117f935b jmp 0x117f9366 */
  goto L_117f9366;
L_117f935d:;
  /* 117f935d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9360 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9363 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117f9366:;
  /* 117f9366 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f936a jae 0x117f937f */
  if (!C.cf) goto L_117f937f;
  /* 117f936c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f936f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f9372 cmp edx, dword ptr [ecx*8 + 0x11820ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11820ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9379 jne 0x117f937d */
  if (!C.zf) goto L_117f937d;
  /* 117f937b jmp 0x117f937f */
  goto L_117f937f;
L_117f937d:;
  /* 117f937d jmp 0x117f935d */
  goto L_117f935d;
L_117f937f:;
  /* 117f937f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9382 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f9385 cmp ecx, dword ptr [eax*8 + 0x11820ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11820ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f938c jne 0x117f939a */
  if (!C.zf) goto L_117f939a;
  /* 117f938e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9391 mov eax, dword ptr [edx*8 + 0x11820ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11820ab4)));
  /* 117f9398 jmp 0x117f939c */
  goto L_117f939c;
L_117f939a:;
  /* 117f939a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117f939c:;
  /* 117f939c mov esp, ebp */
  ESP = (EBP);
  /* 117f939e pop ebp */
  EBP = (pop32());
  /* 117f939f ret  */
  ESPCHK(0x117f9350u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x117f93a0 (66 bytes, 28 insns) */
void f_117f93a0(void) {
  FTRACE(0x117f93a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f93a0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f93a1 mov ebp, esp */
  EBP = (ESP);
  /* 117f93a3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f93a7 jne 0x117f93c7 */
  if (!C.zf) goto L_117f93c7;
  /* 117f93a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f93ad jge 0x117f93c7 */
  if ((C.sf==C.of)) goto L_117f93c7;
  /* 117f93af push 1 */
  push32((uint32_t)(0x1u));
  /* 117f93b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f93b4 push eax */
  push32((uint32_t)(EAX));
  /* 117f93b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f93b8 push ecx */
  push32((uint32_t)(ECX));
  /* 117f93b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f93bc push edx */
  push32((uint32_t)(EDX));
  /* 117f93bd call 0x117f93f0 */
  push32(0x117f93c2u); f_117f93f0();
  /* 117f93c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f93c5 jmp 0x117f93dd */
  goto L_117f93dd;
L_117f93c7:;
  /* 117f93c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f93c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f93cc push eax */
  push32((uint32_t)(EAX));
  /* 117f93cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f93d0 push ecx */
  push32((uint32_t)(ECX));
  /* 117f93d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f93d4 push edx */
  push32((uint32_t)(EDX));
  /* 117f93d5 call 0x117f93f0 */
  push32(0x117f93dau); f_117f93f0();
  /* 117f93da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f93dd:;
  /* 117f93dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f93e0 pop ebp */
  EBP = (pop32());
  /* 117f93e1 ret  */
  ESPCHK(0x117f93a0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x117f93f0 (194 bytes, 71 insns) */
void f_117f93f0(void) {
  FTRACE(0x117f93f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f93f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f93f1 mov ebp, esp */
  EBP = (ESP);
  /* 117f93f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f93f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f93f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f93fc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9400 je 0x117f9419 */
  if (C.zf) goto L_117f9419;
  /* 117f9402 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9405 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 117f9408 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f940b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f940e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117f9411 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f9414 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 117f9416 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_117f9419:;
  /* 117f9419 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f941c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_117f941f:;
  /* 117f941f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f9422 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f9424 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117f9427 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 117f942a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f942d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f942f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117f9432 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 117f9435 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9439 jbe 0x117f9451 */
  if ((C.cf||C.zf)) goto L_117f9451;
  /* 117f943b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f943e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9441 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9444 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 117f9446 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9449 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f944c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117f944f jmp 0x117f9465 */
  goto L_117f9465;
L_117f9451:;
  /* 117f9451 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f9454 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9457 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f945a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 117f945c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f945f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9462 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117f9465:;
  /* 117f9465 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9469 ja 0x117f941f */
  if ((!C.cf&&!C.zf)) goto L_117f941f;
  /* 117f946b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f946e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 117f9471 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9474 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f9477 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117f947a:;
  /* 117f947a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f947d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117f947f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 117f9482 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9485 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f9488 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117f948a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 117f948c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f948f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 117f9492 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 117f9494 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9497 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f949a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117f949d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f94a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f94a3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117f94a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f94a9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f94ac jb 0x117f947a */
  if (C.cf) goto L_117f947a;
  /* 117f94ae mov esp, ebp */
  ESP = (EBP);
  /* 117f94b0 pop ebp */
  EBP = (pop32());
  /* 117f94b1 ret  */
  ESPCHK(0x117f93f0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x117f94c0 (63 bytes, 24 insns) */
void f_117f94c0(void) {
  FTRACE(0x117f94c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f94c0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f94c1 mov ebp, esp */
  EBP = (ESP);
  /* 117f94c3 push ecx */
  push32((uint32_t)(ECX));
  /* 117f94c4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f94c8 jne 0x117f94d9 */
  if (!C.zf) goto L_117f94d9;
  /* 117f94ca cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f94ce jge 0x117f94d9 */
  if ((C.sf==C.of)) goto L_117f94d9;
  /* 117f94d0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 117f94d7 jmp 0x117f94e0 */
  goto L_117f94e0;
L_117f94d9:;
  /* 117f94d9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_117f94e0:;
  /* 117f94e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f94e3 push eax */
  push32((uint32_t)(EAX));
  /* 117f94e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f94e7 push ecx */
  push32((uint32_t)(ECX));
  /* 117f94e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f94eb push edx */
  push32((uint32_t)(EDX));
  /* 117f94ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f94ef push eax */
  push32((uint32_t)(EAX));
  /* 117f94f0 call 0x117f93f0 */
  push32(0x117f94f5u); f_117f93f0();
  /* 117f94f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f94f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f94fb mov esp, ebp */
  ESP = (EBP);
  /* 117f94fd pop ebp */
  EBP = (pop32());
  /* 117f94fe ret  */
  ESPCHK(0x117f94c0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x117f9500 (30 bytes, 14 insns) */
void f_117f9500(void) {
  FTRACE(0x117f9500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f9500 push ebp */
  push32((uint32_t)(EBP));
  /* 117f9501 mov ebp, esp */
  EBP = (ESP);
  /* 117f9503 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f9505 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f9508 push eax */
  push32((uint32_t)(EAX));
  /* 117f9509 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f950c push ecx */
  push32((uint32_t)(ECX));
  /* 117f950d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f9510 push edx */
  push32((uint32_t)(EDX));
  /* 117f9511 call 0x117f93f0 */
  push32(0x117f9516u); f_117f93f0();
  /* 117f9516 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9519 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f951c pop ebp */
  EBP = (pop32());
  /* 117f951d ret  */
  ESPCHK(0x117f9500u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x117f9520 (72 bytes, 28 insns) */
void f_117f9520(void) {
  FTRACE(0x117f9520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f9520 push ebp */
  push32((uint32_t)(EBP));
  /* 117f9521 mov ebp, esp */
  EBP = (ESP);
  /* 117f9523 push ecx */
  push32((uint32_t)(ECX));
  /* 117f9524 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9528 jne 0x117f9541 */
  if (!C.zf) goto L_117f9541;
  /* 117f952a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f952e jg 0x117f9541 */
  if ((!C.zf&&C.sf==C.of)) goto L_117f9541;
  /* 117f9530 jl 0x117f9538 */
  if ((C.sf!=C.of)) goto L_117f9538;
  /* 117f9532 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9536 jae 0x117f9541 */
  if (!C.cf) goto L_117f9541;
L_117f9538:;
  /* 117f9538 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 117f953f jmp 0x117f9548 */
  goto L_117f9548;
L_117f9541:;
  /* 117f9541 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_117f9548:;
  /* 117f9548 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f954b push eax */
  push32((uint32_t)(EAX));
  /* 117f954c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f954f push ecx */
  push32((uint32_t)(ECX));
  /* 117f9550 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f9553 push edx */
  push32((uint32_t)(EDX));
  /* 117f9554 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f9557 push eax */
  push32((uint32_t)(EAX));
  /* 117f9558 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f955b push ecx */
  push32((uint32_t)(ECX));
  /* 117f955c call 0x117f9570 */
  push32(0x117f9561u); f_117f9570();
  /* 117f9561 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f9564 mov esp, ebp */
  ESP = (EBP);
  /* 117f9566 pop ebp */
  EBP = (pop32());
  /* 117f9567 ret  */
  ESPCHK(0x117f9520u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x117f9570 (242 bytes, 91 insns) */
void f_117f9570(void) {
  FTRACE(0x117f9570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f9570 push ebp */
  push32((uint32_t)(EBP));
  /* 117f9571 mov ebp, esp */
  EBP = (ESP);
  /* 117f9573 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f9576 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f9579 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f957c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9580 je 0x117f95a4 */
  if (C.zf) goto L_117f95a4;
  /* 117f9582 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9585 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 117f9588 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f958b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f958e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117f9591 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f9594 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 117f9596 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f9599 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f959c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 117f959e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 117f95a1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_117f95a4:;
  /* 117f95a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f95a7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_117f95aa:;
  /* 117f95aa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f95ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f95af push ecx */
  push32((uint32_t)(ECX));
  /* 117f95b0 push eax */
  push32((uint32_t)(EAX));
  /* 117f95b1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f95b4 push edx */
  push32((uint32_t)(EDX));
  /* 117f95b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f95b8 push eax */
  push32((uint32_t)(EAX));
  /* 117f95b9 call 0x117fd4f0 */
  push32(0x117f95beu); f_117fd4f0();
  /* 117f95be mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117f95c1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f95c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f95c6 push edx */
  push32((uint32_t)(EDX));
  /* 117f95c7 push ecx */
  push32((uint32_t)(ECX));
  /* 117f95c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f95cb push eax */
  push32((uint32_t)(EAX));
  /* 117f95cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f95cf push ecx */
  push32((uint32_t)(ECX));
  /* 117f95d0 call 0x117fd480 */
  push32(0x117f95d5u); f_117fd480();
  /* 117f95d5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 117f95d8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 117f95db cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f95df jbe 0x117f95f7 */
  if ((C.cf||C.zf)) goto L_117f95f7;
  /* 117f95e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f95e4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f95e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f95ea mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 117f95ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f95ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f95f2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117f95f5 jmp 0x117f960b */
  goto L_117f960b;
L_117f95f7:;
  /* 117f95f7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f95fa add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f95fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9600 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 117f9602 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9605 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9608 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117f960b:;
  /* 117f960b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f960f ja 0x117f95aa */
  if ((!C.cf&&!C.zf)) goto L_117f95aa;
  /* 117f9611 jb 0x117f9619 */
  if (C.cf) goto L_117f9619;
  /* 117f9613 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9617 ja 0x117f95aa */
  if ((!C.cf&&!C.zf)) goto L_117f95aa;
L_117f9619:;
  /* 117f9619 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f961c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 117f961f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9622 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f9625 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117f9628:;
  /* 117f9628 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f962b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117f962d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 117f9630 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9633 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f9636 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117f9638 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 117f963a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f963d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 117f9640 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 117f9642 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9645 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f9648 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117f964b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f964e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9651 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117f9654 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f9657 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f965a jb 0x117f9628 */
  if (C.cf) goto L_117f9628;
  /* 117f965c mov esp, ebp */
  ESP = (EBP);
  /* 117f965e pop ebp */
  EBP = (pop32());
  /* 117f965f ret 0x14 */
  ESPCHK(0x117f9570u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x117f9670 (31 bytes, 15 insns) */
void f_117f9670(void) {
  FTRACE(0x117f9670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f9670 push ebp */
  push32((uint32_t)(EBP));
  /* 117f9671 mov ebp, esp */
  EBP = (ESP);
  /* 117f9673 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f9675 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f9678 push eax */
  push32((uint32_t)(EAX));
  /* 117f9679 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f967c push ecx */
  push32((uint32_t)(ECX));
  /* 117f967d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f9680 push edx */
  push32((uint32_t)(EDX));
  /* 117f9681 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f9684 push eax */
  push32((uint32_t)(EAX));
  /* 117f9685 call 0x117f9570 */
  push32(0x117f968au); f_117f9570();
  /* 117f968a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f968d pop ebp */
  EBP = (pop32());
  /* 117f968e ret  */
  ESPCHK(0x117f9670u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x117f9690 (123 bytes, 44 insns) */
void f_117f9690(void) {
  FTRACE(0x117f9690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f9690 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117f9694 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 117f969a je 0x117f96b0 */
  if (C.zf) goto L_117f96b0;
L_117f969c:;
  /* 117f969c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 117f969e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117f969f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117f96a1 je 0x117f96e3 */
  if (C.zf) goto L_117f96e3;
  /* 117f96a3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 117f96a9 jne 0x117f969c */
  if (!C.zf) goto L_117f969c;
  /* 117f96ab add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_117f96b0:;
  /* 117f96b0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 117f96b2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 117f96b7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f96b9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f96bc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117f96be add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f96c1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 117f96c6 je 0x117f96b0 */
  if (C.zf) goto L_117f96b0;
  /* 117f96c8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 117f96cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117f96cd je 0x117f9701 */
  if (C.zf) goto L_117f9701;
  /* 117f96cf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 117f96d1 je 0x117f96f7 */
  if (C.zf) goto L_117f96f7;
  /* 117f96d3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 117f96d8 je 0x117f96ed */
  if (C.zf) goto L_117f96ed;
  /* 117f96da test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 117f96df je 0x117f96e3 */
  if (C.zf) goto L_117f96e3;
  /* 117f96e1 jmp 0x117f96b0 */
  goto L_117f96b0;
L_117f96e3:;
  /* 117f96e3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 117f96e6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117f96ea sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f96ec ret  */
  ESPCHK(0x117f9690u, _esp0);
  ESP += 4; return;
L_117f96ed:;
  /* 117f96ed lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 117f96f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117f96f4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f96f6 ret  */
  ESPCHK(0x117f9690u, _esp0);
  ESP += 4; return;
L_117f96f7:;
  /* 117f96f7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 117f96fa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117f96fe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f9700 ret  */
  ESPCHK(0x117f9690u, _esp0);
  ESP += 4; return;
L_117f9701:;
  /* 117f9701 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 117f9704 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117f9708 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f970a ret  */
  ESPCHK(0x117f9690u, _esp0);
  ESP += 4; return;
}

/* FUN_10009710 @ 0x117f9710 (249 bytes, 93 insns) */
void f_117f9710(void) {
  FTRACE(0x117f9710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f9710 push ebp */
  push32((uint32_t)(EBP));
  /* 117f9711 mov ebp, esp */
  EBP = (ESP);
  /* 117f9713 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f9716 push ebx */
  push32((uint32_t)(EBX));
  /* 117f9717 push esi */
  push32((uint32_t)(ESI));
  /* 117f9718 push edi */
  push32((uint32_t)(EDI));
  /* 117f9719 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 117f971c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 117f971f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 117f9722 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_117f9725:;
  /* 117f9725 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9729 jne 0x117f9749 */
  if (!C.zf) goto L_117f9749;
  /* 117f972b push 0x1181e558 */
  push32((uint32_t)(0x1181e558u));
  /* 117f9730 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f9732 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 117f9734 push 0x1181e54c */
  push32((uint32_t)(0x1181e54cu));
  /* 117f9739 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f973b call 0x117f5920 */
  push32(0x117f9740u); f_117f5920();
  /* 117f9740 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9743 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9746 jne 0x117f9749 */
  if (!C.zf) goto L_117f9749;
  /* 117f9748 int3  */
  x86_unimpl("int3 @ 0x117f9748");
L_117f9749:;
  /* 117f9749 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f974b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f974d jne 0x117f9725 */
  if (!C.zf) goto L_117f9725;
L_117f974f:;
  /* 117f974f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9753 jne 0x117f9773 */
  if (!C.zf) goto L_117f9773;
  /* 117f9755 push 0x1181e53c */
  push32((uint32_t)(0x1181e53cu));
  /* 117f975a push 0 */
  push32((uint32_t)(0x0u));
  /* 117f975c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 117f975e push 0x1181e54c */
  push32((uint32_t)(0x1181e54cu));
  /* 117f9763 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f9765 call 0x117f5920 */
  push32(0x117f976au); f_117f5920();
  /* 117f976a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f976d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9770 jne 0x117f9773 */
  if (!C.zf) goto L_117f9773;
  /* 117f9772 int3  */
  x86_unimpl("int3 @ 0x117f9772");
L_117f9773:;
  /* 117f9773 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f9775 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117f9777 jne 0x117f974f */
  if (!C.zf) goto L_117f974f;
  /* 117f9779 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117f977c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 117f9783 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117f9786 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f9789 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 117f978c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117f978f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f9792 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 117f9794 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117f9797 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f979a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 117f979d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117f97a0 push edx */
  push32((uint32_t)(EDX));
  /* 117f97a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f97a4 push eax */
  push32((uint32_t)(EAX));
  /* 117f97a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117f97a8 push ecx */
  push32((uint32_t)(ECX));
  /* 117f97a9 call 0x117fd7f0 */
  push32(0x117f97aeu); f_117fd7f0();
  /* 117f97ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f97b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 117f97b4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117f97b7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 117f97ba sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f97bd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117f97c0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 117f97c3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117f97c6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f97ca jl 0x117f97ee */
  if ((C.sf!=C.of)) goto L_117f97ee;
  /* 117f97cc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117f97cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117f97d1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 117f97d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f97d6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 117f97dc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 117f97df mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117f97e2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117f97e4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f97e7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117f97ea mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 117f97ec jmp 0x117f97ff */
  goto L_117f97ff;
L_117f97ee:;
  /* 117f97ee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117f97f1 push eax */
  push32((uint32_t)(EAX));
  /* 117f97f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f97f4 call 0x117fd570 */
  push32(0x117f97f9u); f_117fd570();
  /* 117f97f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f97fc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_117f97ff:;
  /* 117f97ff mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117f9802 pop edi */
  EDI = (pop32());
  /* 117f9803 pop esi */
  ESI = (pop32());
  /* 117f9804 pop ebx */
  EBX = (pop32());
  /* 117f9805 mov esp, ebp */
  ESP = (EBP);
  /* 117f9807 pop ebp */
  EBP = (pop32());
  /* 117f9808 ret  */
  ESPCHK(0x117f9710u, _esp0);
  ESP += 4; return;
}

/* FUN_10009810 @ 0x117f9810 (7 bytes, 3 insns) */
void f_117f9810(void) {
  FTRACE(0x117f9810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f9810 push edi */
  push32((uint32_t)(EDI));
  /* 117f9811 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 117f9815 jmp 0x117f9881 */
  jmp_ind(0x117f9881u); return;
}

/* FUN_10009820 @ 0x117f9820 (224 bytes, 84 insns) */
void f_117f9820(void) {
  FTRACE(0x117f9820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f9820 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117f9824 push edi */
  push32((uint32_t)(EDI));
  /* 117f9825 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 117f982b je 0x117f983c */
  if (C.zf) goto L_117f983c;
L_117f982d:;
  /* 117f982d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 117f982f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117f9830 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117f9832 je 0x117f986f */
  if (C.zf) goto L_117f986f;
  /* 117f9834 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 117f983a jne 0x117f982d */
  if (!C.zf) goto L_117f982d;
L_117f983c:;
  /* 117f983c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 117f983e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 117f9843 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9845 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f9848 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117f984a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f984d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 117f9852 je 0x117f983c */
  if (C.zf) goto L_117f983c;
  /* 117f9854 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 117f9857 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117f9859 je 0x117f987e */
  if (C.zf) goto L_117f987e;
  /* 117f985b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 117f985d je 0x117f9879 */
  if (C.zf) goto L_117f9879;
  /* 117f985f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 117f9864 je 0x117f9874 */
  if (C.zf) goto L_117f9874;
  /* 117f9866 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 117f986b je 0x117f986f */
  if (C.zf) goto L_117f986f;
  /* 117f986d jmp 0x117f983c */
  goto L_117f983c;
L_117f986f:;
  /* 117f986f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 117f9872 jmp 0x117f9881 */
  goto L_117f9881;
L_117f9874:;
  /* 117f9874 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 117f9877 jmp 0x117f9881 */
  goto L_117f9881;
L_117f9879:;
  /* 117f9879 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 117f987c jmp 0x117f9881 */
  goto L_117f9881;
L_117f987e:;
  /* 117f987e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_117f9881:;
  /* 117f9881 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 117f9885 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 117f988b je 0x117f98a6 */
  if (C.zf) goto L_117f98a6;
L_117f988d:;
  /* 117f988d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117f988f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117f9890 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117f9892 je 0x117f98f8 */
  if (C.zf) goto L_117f98f8;
  /* 117f9894 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 117f9896 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117f9897 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 117f989d jne 0x117f988d */
  if (!C.zf) goto L_117f988d;
  /* 117f989f jmp 0x117f98a6 */
  goto L_117f98a6;
L_117f98a1:;
  /* 117f98a1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117f98a3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_117f98a6:;
  /* 117f98a6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 117f98ab mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 117f98ad add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f98af xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f98b2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117f98b4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117f98b6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f98b9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 117f98be je 0x117f98a1 */
  if (C.zf) goto L_117f98a1;
  /* 117f98c0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117f98c2 je 0x117f98f8 */
  if (C.zf) goto L_117f98f8;
  /* 117f98c4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 117f98c6 je 0x117f98ef */
  if (C.zf) goto L_117f98ef;
  /* 117f98c8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 117f98ce je 0x117f98e2 */
  if (C.zf) goto L_117f98e2;
  /* 117f98d0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 117f98d6 je 0x117f98da */
  if (C.zf) goto L_117f98da;
  /* 117f98d8 jmp 0x117f98a1 */
  goto L_117f98a1;
L_117f98da:;
  /* 117f98da mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117f98dc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117f98e0 pop edi */
  EDI = (pop32());
  /* 117f98e1 ret  */
  ESPCHK(0x117f9820u, _esp0);
  ESP += 4; return;
L_117f98e2:;
  /* 117f98e2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 117f98e5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117f98e9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 117f98ed pop edi */
  EDI = (pop32());
  /* 117f98ee ret  */
  ESPCHK(0x117f9820u, _esp0);
  ESP += 4; return;
L_117f98ef:;
  /* 117f98ef mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 117f98f2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117f98f6 pop edi */
  EDI = (pop32());
  /* 117f98f7 ret  */
  ESPCHK(0x117f9820u, _esp0);
  ESP += 4; return;
L_117f98f8:;
  /* 117f98f8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 117f98fa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117f98fe pop edi */
  EDI = (pop32());
  /* 117f98ff ret  */
  ESPCHK(0x117f9820u, _esp0);
  ESP += 4; return;
}

/* FUN_10009900 @ 0x117f9900 (243 bytes, 91 insns) */
void f_117f9900(void) {
  FTRACE(0x117f9900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f9900 push ebp */
  push32((uint32_t)(EBP));
  /* 117f9901 mov ebp, esp */
  EBP = (ESP);
  /* 117f9903 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f9906 push ebx */
  push32((uint32_t)(EBX));
  /* 117f9907 push esi */
  push32((uint32_t)(ESI));
  /* 117f9908 push edi */
  push32((uint32_t)(EDI));
  /* 117f9909 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 117f990c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_117f990f:;
  /* 117f990f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9913 jne 0x117f9933 */
  if (!C.zf) goto L_117f9933;
  /* 117f9915 push 0x1181e558 */
  push32((uint32_t)(0x1181e558u));
  /* 117f991a push 0 */
  push32((uint32_t)(0x0u));
  /* 117f991c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 117f991e push 0x1181e568 */
  push32((uint32_t)(0x1181e568u));
  /* 117f9923 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f9925 call 0x117f5920 */
  push32(0x117f992au); f_117f5920();
  /* 117f992a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f992d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9930 jne 0x117f9933 */
  if (!C.zf) goto L_117f9933;
  /* 117f9932 int3  */
  x86_unimpl("int3 @ 0x117f9932");
L_117f9933:;
  /* 117f9933 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f9935 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117f9937 jne 0x117f990f */
  if (!C.zf) goto L_117f990f;
L_117f9939:;
  /* 117f9939 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f993d jne 0x117f995d */
  if (!C.zf) goto L_117f995d;
  /* 117f993f push 0x1181e53c */
  push32((uint32_t)(0x1181e53cu));
  /* 117f9944 push 0 */
  push32((uint32_t)(0x0u));
  /* 117f9946 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 117f9948 push 0x1181e568 */
  push32((uint32_t)(0x1181e568u));
  /* 117f994d push 2 */
  push32((uint32_t)(0x2u));
  /* 117f994f call 0x117f5920 */
  push32(0x117f9954u); f_117f5920();
  /* 117f9954 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9957 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f995a jne 0x117f995d */
  if (!C.zf) goto L_117f995d;
  /* 117f995c int3  */
  x86_unimpl("int3 @ 0x117f995c");
L_117f995d:;
  /* 117f995d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f995f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117f9961 jne 0x117f9939 */
  if (!C.zf) goto L_117f9939;
  /* 117f9963 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117f9966 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 117f996d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117f9970 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f9973 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 117f9976 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117f9979 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f997c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 117f997e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117f9981 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f9984 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 117f9987 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117f998a push ecx */
  push32((uint32_t)(ECX));
  /* 117f998b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117f998e push edx */
  push32((uint32_t)(EDX));
  /* 117f998f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117f9992 push eax */
  push32((uint32_t)(EAX));
  /* 117f9993 call 0x117fd7f0 */
  push32(0x117f9998u); f_117fd7f0();
  /* 117f9998 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f999b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 117f999e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117f99a1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117f99a4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f99a7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117f99aa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 117f99ad mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117f99b0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f99b4 jl 0x117f99d8 */
  if ((C.sf!=C.of)) goto L_117f99d8;
  /* 117f99b6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117f99b9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117f99bb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 117f99be xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117f99c0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 117f99c6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 117f99c9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117f99cc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117f99ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f99d1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117f99d4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117f99d6 jmp 0x117f99e9 */
  goto L_117f99e9;
L_117f99d8:;
  /* 117f99d8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117f99db push edx */
  push32((uint32_t)(EDX));
  /* 117f99dc push 0 */
  push32((uint32_t)(0x0u));
  /* 117f99de call 0x117fd570 */
  push32(0x117f99e3u); f_117fd570();
  /* 117f99e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f99e6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_117f99e9:;
  /* 117f99e9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117f99ec pop edi */
  EDI = (pop32());
  /* 117f99ed pop esi */
  ESI = (pop32());
  /* 117f99ee pop ebx */
  EBX = (pop32());
  /* 117f99ef mov esp, ebp */
  ESP = (EBP);
  /* 117f99f1 pop ebp */
  EBP = (pop32());
  /* 117f99f2 ret  */
  ESPCHK(0x117f9900u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a00 @ 0x117f9a00 (47 bytes, 17 insns) */
void f_117f9a00(void) {
  FTRACE(0x117f9a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f9a00 push ecx */
  push32((uint32_t)(ECX));
  /* 117f9a01 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9a06 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 117f9a0a jb 0x117f9a20 */
  if (C.cf) goto L_117f9a20;
L_117f9a0c:;
  /* 117f9a0c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f9a12 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f9a17 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 117f9a19 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9a1e jae 0x117f9a0c */
  if (!C.cf) goto L_117f9a0c;
L_117f9a20:;
  /* 117f9a20 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f9a22 mov eax, esp */
  EAX = (ESP);
  /* 117f9a24 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 117f9a26 mov esp, ecx */
  ESP = (ECX);
  /* 117f9a28 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117f9a2a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 117f9a2d push eax */
  push32((uint32_t)(EAX));
  /* 117f9a2e ret  */
  ESPCHK(0x117f9a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a30 @ 0x117f9a30 (507 bytes, 151 insns) [1 switch table(s)] */
void f_117f9a30(void) {
  FTRACE(0x117f9a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f9a30 push ebp */
  push32((uint32_t)(EBP));
  /* 117f9a31 mov ebp, esp */
  EBP = (ESP);
  /* 117f9a33 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f9a36 push esi */
  push32((uint32_t)(ESI));
  /* 117f9a37 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9a3b je 0x117f9a43 */
  if (C.zf) goto L_117f9a43;
  /* 117f9a3d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9a41 jne 0x117f9a48 */
  if (!C.zf) goto L_117f9a48;
L_117f9a43:;
  /* 117f9a43 jmp 0x117f9c18 */
  goto L_117f9c18;
L_117f9a48:;
  /* 117f9a48 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9a4c je 0x117f9a64 */
  if (C.zf) goto L_117f9a64;
  /* 117f9a4e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9a52 je 0x117f9a64 */
  if (C.zf) goto L_117f9a64;
  /* 117f9a54 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9a58 je 0x117f9a64 */
  if (C.zf) goto L_117f9a64;
  /* 117f9a5a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9a5e jne 0x117f9b41 */
  if (!C.zf) goto L_117f9b41;
L_117f9a64:;
  /* 117f9a64 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f9a66 call 0x117fa260 */
  push32(0x117f9a6bu); f_117fa260();
  /* 117f9a6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9a6e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9a72 je 0x117f9a7a */
  if (C.zf) goto L_117f9a7a;
  /* 117f9a74 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9a78 jne 0x117f9abf */
  if (!C.zf) goto L_117f9abf;
L_117f9a7a:;
  /* 117f9a7a cmp dword ptr [0x11822864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9a81 jne 0x117f9abf */
  if (!C.zf) goto L_117f9abf;
  /* 117f9a83 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f9a85 push 0x117f9c60 */
  push32((uint32_t)(0x117f9c60u));
  /* 117f9a8a call dword ptr [0x11825368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825368))), 0x117f9a90u);
  /* 117f9a90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9a93 jne 0x117f9aa1 */
  if (!C.zf) goto L_117f9aa1;
  /* 117f9a95 mov dword ptr [0x11822864], 1 */
  w32((uint32_t)(0x11822864), (0x1u));
  /* 117f9a9f jmp 0x117f9abf */
  goto L_117f9abf;
L_117f9aa1:;
  /* 117f9aa1 call dword ptr [0x118253f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253f0))), 0x117f9aa7u);
  /* 117f9aa7 mov esi, eax */
  ESI = (EAX);
  /* 117f9aa9 call 0x117fe740 */
  push32(0x117f9aaeu); f_117fe740();
  /* 117f9aae mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 117f9ab0 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f9ab2 call 0x117fa300 */
  push32(0x117f9ab7u); f_117fa300();
  /* 117f9ab7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9aba jmp 0x117f9c18 */
  goto L_117f9c18;
L_117f9abf:;
  /* 117f9abf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f9ac2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 117f9ac5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117f9ac8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f9acb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 117f9ace cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9ad2 ja 0x117f9b32 */
  if ((!C.cf&&!C.zf)) goto L_117f9b32;
  /* 117f9ad4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117f9ad7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f9ad9 mov dl, byte ptr [eax + 0x117f9c3f] */
  DL = (r8((uint32_t)(EAX + 0x117f9c3f)));
  /* 117f9adf jmp dword ptr [edx*4 + 0x117f9c2b] */
  switch (EDX) {
    case 0: goto L_117f9ae6;
    case 1: goto L_117f9b20;
    case 2: goto L_117f9afa;
    case 3: goto L_117f9b0d;
    case 4: goto L_117f9b32;
    default: x86_unimpl("switch@0x117f9adf out of table"); return;
  }
L_117f9ae6:;
  /* 117f9ae6 mov ecx, dword ptr [0x11822854] */
  ECX = (r32((uint32_t)(0x11822854)));
  /* 117f9aec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117f9aef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f9af2 mov dword ptr [0x11822854], edx */
  w32((uint32_t)(0x11822854), (EDX));
  /* 117f9af8 jmp 0x117f9b32 */
  goto L_117f9b32;
L_117f9afa:;
  /* 117f9afa mov eax, dword ptr [0x11822858] */
  EAX = (r32((uint32_t)(0x11822858)));
  /* 117f9aff mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117f9b02 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f9b05 mov dword ptr [0x11822858], ecx */
  w32((uint32_t)(0x11822858), (ECX));
  /* 117f9b0b jmp 0x117f9b32 */
  goto L_117f9b32;
L_117f9b0d:;
  /* 117f9b0d mov edx, dword ptr [0x1182285c] */
  EDX = (r32((uint32_t)(0x1182285c)));
  /* 117f9b13 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 117f9b16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f9b19 mov dword ptr [0x1182285c], eax */
  w32((uint32_t)(0x1182285c), (EAX));
  /* 117f9b1e jmp 0x117f9b32 */
  goto L_117f9b32;
L_117f9b20:;
  /* 117f9b20 mov ecx, dword ptr [0x11822860] */
  ECX = (r32((uint32_t)(0x11822860)));
  /* 117f9b26 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117f9b29 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f9b2c mov dword ptr [0x11822860], edx */
  w32((uint32_t)(0x11822860), (EDX));
L_117f9b32:;
  /* 117f9b32 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f9b34 call 0x117fa300 */
  push32(0x117f9b39u); f_117fa300();
  /* 117f9b39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9b3c jmp 0x117f9c13 */
  goto L_117f9c13;
L_117f9b41:;
  /* 117f9b41 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9b45 je 0x117f9b58 */
  if (C.zf) goto L_117f9b58;
  /* 117f9b47 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9b4b je 0x117f9b58 */
  if (C.zf) goto L_117f9b58;
  /* 117f9b4d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9b51 je 0x117f9b58 */
  if (C.zf) goto L_117f9b58;
  /* 117f9b53 jmp 0x117f9c18 */
  goto L_117f9c18;
L_117f9b58:;
  /* 117f9b58 call 0x117f62a0 */
  push32(0x117f9b5du); f_117f62a0();
  /* 117f9b5d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f9b60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9b63 cmp dword ptr [eax + 0x50], 0x11820c00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x11820c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9b6a jne 0x117f9bb5 */
  if (!C.zf) goto L_117f9bb5;
  /* 117f9b6c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 117f9b71 push 0x1181e574 */
  push32((uint32_t)(0x1181e574u));
  /* 117f9b76 push 2 */
  push32((uint32_t)(0x2u));
  /* 117f9b78 mov ecx, dword ptr [0x11820c80] */
  ECX = (r32((uint32_t)(0x11820c80)));
  /* 117f9b7e push ecx */
  push32((uint32_t)(ECX));
  /* 117f9b7f call 0x117f6860 */
  push32(0x117f9b84u); f_117f6860();
  /* 117f9b84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9b87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9b8a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 117f9b8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9b90 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9b94 je 0x117f9bb3 */
  if (C.zf) goto L_117f9bb3;
  /* 117f9b96 mov ecx, dword ptr [0x11820c80] */
  ECX = (r32((uint32_t)(0x11820c80)));
  /* 117f9b9c push ecx */
  push32((uint32_t)(ECX));
  /* 117f9b9d push 0x11820c00 */
  push32((uint32_t)(0x11820c00u));
  /* 117f9ba2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9ba5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 117f9ba8 push eax */
  push32((uint32_t)(EAX));
  /* 117f9ba9 call 0x117fd140 */
  push32(0x117f9baeu); f_117fd140();
  /* 117f9bae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9bb1 jmp 0x117f9bb5 */
  goto L_117f9bb5;
L_117f9bb3:;
  /* 117f9bb3 jmp 0x117f9c18 */
  goto L_117f9c18;
L_117f9bb5:;
  /* 117f9bb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9bb8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 117f9bbb push edx */
  push32((uint32_t)(EDX));
  /* 117f9bbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f9bbf push eax */
  push32((uint32_t)(EAX));
  /* 117f9bc0 call 0x117f9f40 */
  push32(0x117f9bc5u); f_117f9f40();
  /* 117f9bc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9bc8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117f9bcb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9bcf jne 0x117f9bd3 */
  if (!C.zf) goto L_117f9bd3;
  /* 117f9bd1 jmp 0x117f9c18 */
  goto L_117f9c18;
L_117f9bd3:;
  /* 117f9bd3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f9bd6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 117f9bd9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_117f9bdc:;
  /* 117f9bdc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f9bdf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117f9be2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9be5 jne 0x117f9c13 */
  if (!C.zf) goto L_117f9c13;
  /* 117f9be7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f9bea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f9bed mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 117f9bf0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f9bf3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9bf6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117f9bf9 mov edx, dword ptr [0x11820c84] */
  EDX = (r32((uint32_t)(0x11820c84)));
  /* 117f9bff imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117f9c02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9c05 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 117f9c08 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9c0a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9c0d jb 0x117f9c11 */
  if (C.cf) goto L_117f9c11;
  /* 117f9c0f jmp 0x117f9c13 */
  goto L_117f9c13;
L_117f9c11:;
  /* 117f9c11 jmp 0x117f9bdc */
  goto L_117f9bdc;
L_117f9c13:;
  /* 117f9c13 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f9c16 jmp 0x117f9c26 */
  goto L_117f9c26;
L_117f9c18:;
  /* 117f9c18 call 0x117fe730 */
  push32(0x117f9c1du); f_117fe730();
  /* 117f9c1d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 117f9c23 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_117f9c26:;
  /* 117f9c26 pop esi */
  ESI = (pop32());
  /* 117f9c27 mov esp, ebp */
  ESP = (EBP);
  /* 117f9c29 pop ebp */
  EBP = (pop32());
  /* 117f9c2a ret  */
  ESPCHK(0x117f9a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c60 @ 0x117f9c60 (146 bytes, 45 insns) */
void f_117f9c60(void) {
  FTRACE(0x117f9c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f9c60 push ebp */
  push32((uint32_t)(EBP));
  /* 117f9c61 mov ebp, esp */
  EBP = (ESP);
  /* 117f9c63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f9c66 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f9c68 call 0x117fa260 */
  push32(0x117f9c6du); f_117fa260();
  /* 117f9c6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9c70 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9c74 jne 0x117f9c8e */
  if (!C.zf) goto L_117f9c8e;
  /* 117f9c76 mov dword ptr [ebp - 8], 0x11822854 */
  w32((uint32_t)(EBP + -0x8), (0x11822854u));
  /* 117f9c7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f9c80 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117f9c82 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117f9c85 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 117f9c8c jmp 0x117f9ca4 */
  goto L_117f9ca4;
L_117f9c8e:;
  /* 117f9c8e mov dword ptr [ebp - 8], 0x11822858 */
  w32((uint32_t)(EBP + -0x8), (0x11822858u));
  /* 117f9c95 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f9c98 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117f9c9a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117f9c9d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_117f9ca4:;
  /* 117f9ca4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9ca8 jne 0x117f9cb8 */
  if (!C.zf) goto L_117f9cb8;
  /* 117f9caa push 1 */
  push32((uint32_t)(0x1u));
  /* 117f9cac call 0x117fa300 */
  push32(0x117f9cb1u); f_117fa300();
  /* 117f9cb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9cb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f9cb6 jmp 0x117f9cec */
  goto L_117f9cec;
L_117f9cb8:;
  /* 117f9cb8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9cbc je 0x117f9cdd */
  if (C.zf) goto L_117f9cdd;
  /* 117f9cbe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f9cc1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 117f9cc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f9cc9 call 0x117fa300 */
  push32(0x117f9cceu); f_117fa300();
  /* 117f9cce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9cd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9cd4 push edx */
  push32((uint32_t)(EDX));
  /* 117f9cd5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x117f9cd8u);
  /* 117f9cd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9cdb jmp 0x117f9ce7 */
  goto L_117f9ce7;
L_117f9cdd:;
  /* 117f9cdd push 1 */
  push32((uint32_t)(0x1u));
  /* 117f9cdf call 0x117fa300 */
  push32(0x117f9ce4u); f_117fa300();
  /* 117f9ce4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f9ce7:;
  /* 117f9ce7 mov eax, 1 */
  EAX = (0x1u);
L_117f9cec:;
  /* 117f9cec mov esp, ebp */
  ESP = (EBP);
  /* 117f9cee pop ebp */
  EBP = (pop32());
  /* 117f9cef ret 4 */
  ESPCHK(0x117f9c60u, _esp0);
  ESP += 8; return;
}

/* FUN_10009d00 @ 0x117f9d00 (522 bytes, 162 insns) [1 switch table(s)] */
void f_117f9d00(void) {
  FTRACE(0x117f9d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f9d00 push ebp */
  push32((uint32_t)(EBP));
  /* 117f9d01 mov ebp, esp */
  EBP = (ESP);
  /* 117f9d03 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f9d06 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 117f9d0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f9d10 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 117f9d13 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117f9d16 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f9d19 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 117f9d1c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9d20 ja 0x117f9dce */
  if ((!C.cf&&!C.zf)) goto L_117f9dce;
  /* 117f9d26 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 117f9d29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117f9d2b mov dl, byte ptr [eax + 0x117f9f22] */
  DL = (r8((uint32_t)(EAX + 0x117f9f22)));
  /* 117f9d31 jmp dword ptr [edx*4 + 0x117f9f0a] */
  switch (EDX) {
    case 0: goto L_117f9d38;
    case 1: goto L_117f9da3;
    case 2: goto L_117f9d89;
    case 3: goto L_117f9d55;
    case 4: goto L_117f9d6f;
    case 5: goto L_117f9dce;
    default: x86_unimpl("switch@0x117f9d31 out of table"); return;
  }
L_117f9d38:;
  /* 117f9d38 mov dword ptr [ebp - 0x18], 0x11822854 */
  w32((uint32_t)(EBP + -0x18), (0x11822854u));
  /* 117f9d3f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117f9d42 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117f9d44 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 117f9d47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f9d4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9d4d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117f9d50 jmp 0x117f9dd6 */
  goto L_117f9dd6;
L_117f9d55:;
  /* 117f9d55 mov dword ptr [ebp - 0x18], 0x11822858 */
  w32((uint32_t)(EBP + -0x18), (0x11822858u));
  /* 117f9d5c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117f9d5f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117f9d61 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 117f9d64 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f9d67 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9d6a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117f9d6d jmp 0x117f9dd6 */
  goto L_117f9dd6;
L_117f9d6f:;
  /* 117f9d6f mov dword ptr [ebp - 0x18], 0x1182285c */
  w32((uint32_t)(EBP + -0x18), (0x1182285cu));
  /* 117f9d76 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117f9d79 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117f9d7b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 117f9d7e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f9d81 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9d84 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117f9d87 jmp 0x117f9dd6 */
  goto L_117f9dd6;
L_117f9d89:;
  /* 117f9d89 mov dword ptr [ebp - 0x18], 0x11822860 */
  w32((uint32_t)(EBP + -0x18), (0x11822860u));
  /* 117f9d90 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117f9d93 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117f9d95 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 117f9d98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117f9d9b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9d9e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117f9da1 jmp 0x117f9dd6 */
  goto L_117f9dd6;
L_117f9da3:;
  /* 117f9da3 call 0x117f62a0 */
  push32(0x117f9da8u); f_117f62a0();
  /* 117f9da8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f9dab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9dae mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 117f9db1 push edx */
  push32((uint32_t)(EDX));
  /* 117f9db2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f9db5 push eax */
  push32((uint32_t)(EAX));
  /* 117f9db6 call 0x117f9f40 */
  push32(0x117f9dbbu); f_117f9f40();
  /* 117f9dbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9dbe add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9dc1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 117f9dc4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117f9dc7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117f9dc9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 117f9dcc jmp 0x117f9dd6 */
  goto L_117f9dd6;
L_117f9dce:;
  /* 117f9dce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117f9dd1 jmp 0x117f9f06 */
  goto L_117f9f06;
L_117f9dd6:;
  /* 117f9dd6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9dda je 0x117f9de6 */
  if (C.zf) goto L_117f9de6;
  /* 117f9ddc push 1 */
  push32((uint32_t)(0x1u));
  /* 117f9dde call 0x117fa260 */
  push32(0x117f9de3u); f_117fa260();
  /* 117f9de3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f9de6:;
  /* 117f9de6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9dea jne 0x117f9e03 */
  if (!C.zf) goto L_117f9e03;
  /* 117f9dec cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9df0 je 0x117f9dfc */
  if (C.zf) goto L_117f9dfc;
  /* 117f9df2 push 1 */
  push32((uint32_t)(0x1u));
  /* 117f9df4 call 0x117fa300 */
  push32(0x117f9df9u); f_117fa300();
  /* 117f9df9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f9dfc:;
  /* 117f9dfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117f9dfe jmp 0x117f9f06 */
  goto L_117f9f06;
L_117f9e03:;
  /* 117f9e03 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9e07 jne 0x117f9e20 */
  if (!C.zf) goto L_117f9e20;
  /* 117f9e09 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9e0d je 0x117f9e19 */
  if (C.zf) goto L_117f9e19;
  /* 117f9e0f push 1 */
  push32((uint32_t)(0x1u));
  /* 117f9e11 call 0x117fa300 */
  push32(0x117f9e16u); f_117fa300();
  /* 117f9e16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f9e19:;
  /* 117f9e19 push 3 */
  push32((uint32_t)(0x3u));
  /* 117f9e1b call 0x117f6020 */
  push32(0x117f9e20u); f_117f6020();
L_117f9e20:;
  /* 117f9e20 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9e24 je 0x117f9e32 */
  if (C.zf) goto L_117f9e32;
  /* 117f9e26 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9e2a je 0x117f9e32 */
  if (C.zf) goto L_117f9e32;
  /* 117f9e2c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9e30 jne 0x117f9e5e */
  if (!C.zf) goto L_117f9e5e;
L_117f9e32:;
  /* 117f9e32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9e35 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 117f9e38 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 117f9e3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9e3e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 117f9e45 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9e49 jne 0x117f9e5e */
  if (!C.zf) goto L_117f9e5e;
  /* 117f9e4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9e4e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 117f9e51 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117f9e54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9e57 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_117f9e5e:;
  /* 117f9e5e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9e62 jne 0x117f9ea0 */
  if (!C.zf) goto L_117f9ea0;
  /* 117f9e64 mov eax, dword ptr [0x11820c78] */
  EAX = (r32((uint32_t)(0x11820c78)));
  /* 117f9e69 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 117f9e6c jmp 0x117f9e77 */
  goto L_117f9e77;
L_117f9e6e:;
  /* 117f9e6e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117f9e71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9e74 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_117f9e77:;
  /* 117f9e77 mov edx, dword ptr [0x11820c78] */
  EDX = (r32((uint32_t)(0x11820c78)));
  /* 117f9e7d add edx, dword ptr [0x11820c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11820c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9e83 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9e86 jge 0x117f9e9e */
  if ((C.sf==C.of)) goto L_117f9e9e;
  /* 117f9e88 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117f9e8b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117f9e8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9e91 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 117f9e94 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 117f9e9c jmp 0x117f9e6e */
  goto L_117f9e6e;
L_117f9e9e:;
  /* 117f9e9e jmp 0x117f9ea9 */
  goto L_117f9ea9;
L_117f9ea0:;
  /* 117f9ea0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117f9ea3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_117f9ea9:;
  /* 117f9ea9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9ead je 0x117f9eb9 */
  if (C.zf) goto L_117f9eb9;
  /* 117f9eaf push 1 */
  push32((uint32_t)(0x1u));
  /* 117f9eb1 call 0x117fa300 */
  push32(0x117f9eb6u); f_117fa300();
  /* 117f9eb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f9eb9:;
  /* 117f9eb9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9ebd jne 0x117f9ed0 */
  if (!C.zf) goto L_117f9ed0;
  /* 117f9ebf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9ec2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 117f9ec5 push edx */
  push32((uint32_t)(EDX));
  /* 117f9ec6 push 8 */
  push32((uint32_t)(0x8u));
  /* 117f9ec8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x117f9ecbu);
  /* 117f9ecb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9ece jmp 0x117f9eda */
  goto L_117f9eda;
L_117f9ed0:;
  /* 117f9ed0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117f9ed3 push eax */
  push32((uint32_t)(EAX));
  /* 117f9ed4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x117f9ed7u);
  /* 117f9ed7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117f9eda:;
  /* 117f9eda cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9ede je 0x117f9eec */
  if (C.zf) goto L_117f9eec;
  /* 117f9ee0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9ee4 je 0x117f9eec */
  if (C.zf) goto L_117f9eec;
  /* 117f9ee6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9eea jne 0x117f9f04 */
  if (!C.zf) goto L_117f9f04;
L_117f9eec:;
  /* 117f9eec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9eef mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117f9ef2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 117f9ef5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9ef9 jne 0x117f9f04 */
  if (!C.zf) goto L_117f9f04;
  /* 117f9efb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9efe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f9f01 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_117f9f04:;
  /* 117f9f04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117f9f06:;
  /* 117f9f06 mov esp, ebp */
  ESP = (EBP);
  /* 117f9f08 pop ebp */
  EBP = (pop32());
  /* 117f9f09 ret  */
  ESPCHK(0x117f9d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f40 @ 0x117f9f40 (91 bytes, 35 insns) */
void f_117f9f40(void) {
  FTRACE(0x117f9f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f9f40 push ebp */
  push32((uint32_t)(EBP));
  /* 117f9f41 mov ebp, esp */
  EBP = (ESP);
  /* 117f9f43 push ecx */
  push32((uint32_t)(ECX));
  /* 117f9f44 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f9f47 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117f9f4a:;
  /* 117f9f4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9f4d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117f9f50 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9f53 je 0x117f9f73 */
  if (C.zf) goto L_117f9f73;
  /* 117f9f55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9f58 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9f5b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117f9f5e mov ecx, dword ptr [0x11820c84] */
  ECX = (r32((uint32_t)(0x11820c84)));
  /* 117f9f64 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117f9f67 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f9f6a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9f6c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9f6f jae 0x117f9f73 */
  if (!C.cf) goto L_117f9f73;
  /* 117f9f71 jmp 0x117f9f4a */
  goto L_117f9f4a;
L_117f9f73:;
  /* 117f9f73 mov eax, dword ptr [0x11820c84] */
  EAX = (r32((uint32_t)(0x11820c84)));
  /* 117f9f78 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117f9f7b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117f9f7e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9f80 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9f83 jae 0x117f9f95 */
  if (!C.cf) goto L_117f9f95;
  /* 117f9f85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9f88 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 117f9f8b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9f8e jne 0x117f9f95 */
  if (!C.zf) goto L_117f9f95;
  /* 117f9f90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117f9f93 jmp 0x117f9f97 */
  goto L_117f9f97;
L_117f9f95:;
  /* 117f9f95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117f9f97:;
  /* 117f9f97 mov esp, ebp */
  ESP = (EBP);
  /* 117f9f99 pop ebp */
  EBP = (pop32());
  /* 117f9f9a ret  */
  ESPCHK(0x117f9f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009fa0 @ 0x117f9fa0 (13 bytes, 6 insns) */
void f_117f9fa0(void) {
  FTRACE(0x117f9fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f9fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f9fa1 mov ebp, esp */
  EBP = (ESP);
  /* 117f9fa3 call 0x117f62a0 */
  push32(0x117f9fa8u); f_117f62a0();
  /* 117f9fa8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9fab pop ebp */
  EBP = (pop32());
  /* 117f9fac ret  */
  ESPCHK(0x117f9fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009fb0 @ 0x117f9fb0 (13 bytes, 6 insns) */
void f_117f9fb0(void) {
  FTRACE(0x117f9fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f9fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f9fb1 mov ebp, esp */
  EBP = (ESP);
  /* 117f9fb3 call 0x117f62a0 */
  push32(0x117f9fb8u); f_117f62a0();
  /* 117f9fb8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117f9fbb pop ebp */
  EBP = (pop32());
  /* 117f9fbc ret  */
  ESPCHK(0x117f9fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009fc0 @ 0x117f9fc0 (187 bytes, 54 insns) */
void f_117f9fc0(void) {
  FTRACE(0x117f9fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117f9fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 117f9fc1 mov ebp, esp */
  EBP = (ESP);
  /* 117f9fc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117f9fc6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117f9fcd cmp dword ptr [0x11822868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9fd4 jne 0x117fa033 */
  if (!C.zf) goto L_117fa033;
  /* 117f9fd6 push 0x1181d9a0 */
  push32((uint32_t)(0x1181d9a0u));
  /* 117f9fdb call dword ptr [0x118253c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253c4))), 0x117f9fe1u);
  /* 117f9fe1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117f9fe4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117f9fe8 je 0x117fa007 */
  if (C.zf) goto L_117fa007;
  /* 117f9fea push 0x1181e5a4 */
  push32((uint32_t)(0x1181e5a4u));
  /* 117f9fef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117f9ff2 push eax */
  push32((uint32_t)(EAX));
  /* 117f9ff3 call dword ptr [0x118253c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253c0))), 0x117f9ff9u);
  /* 117f9ff9 mov dword ptr [0x11822868], eax */
  w32((uint32_t)(0x11822868), (EAX));
  /* 117f9ffe cmp dword ptr [0x11822868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa005 jne 0x117fa00b */
  if (!C.zf) goto L_117fa00b;
L_117fa007:;
  /* 117fa007 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fa009 jmp 0x117fa077 */
  goto L_117fa077;
L_117fa00b:;
  /* 117fa00b push 0x1181e594 */
  push32((uint32_t)(0x1181e594u));
  /* 117fa010 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fa013 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa014 call dword ptr [0x118253c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253c0))), 0x117fa01au);
  /* 117fa01a mov dword ptr [0x1182286c], eax */
  w32((uint32_t)(0x1182286c), (EAX));
  /* 117fa01f push 0x1181e580 */
  push32((uint32_t)(0x1181e580u));
  /* 117fa024 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fa027 push edx */
  push32((uint32_t)(EDX));
  /* 117fa028 call dword ptr [0x118253c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253c0))), 0x117fa02eu);
  /* 117fa02e mov dword ptr [0x11822870], eax */
  w32((uint32_t)(0x11822870), (EAX));
L_117fa033:;
  /* 117fa033 cmp dword ptr [0x1182286c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1182286c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa03a je 0x117fa045 */
  if (C.zf) goto L_117fa045;
  /* 117fa03c call dword ptr [0x1182286c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182286c))), 0x117fa042u);
  /* 117fa042 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117fa045:;
  /* 117fa045 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa049 je 0x117fa061 */
  if (C.zf) goto L_117fa061;
  /* 117fa04b cmp dword ptr [0x11822870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa052 je 0x117fa061 */
  if (C.zf) goto L_117fa061;
  /* 117fa054 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fa057 push eax */
  push32((uint32_t)(EAX));
  /* 117fa058 call dword ptr [0x11822870] */
  call_ind((uint32_t)(r32((uint32_t)(0x11822870))), 0x117fa05eu);
  /* 117fa05e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117fa061:;
  /* 117fa061 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117fa064 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa065 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fa068 push edx */
  push32((uint32_t)(EDX));
  /* 117fa069 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa06c push eax */
  push32((uint32_t)(EAX));
  /* 117fa06d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fa070 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa071 call dword ptr [0x11822868] */
  call_ind((uint32_t)(r32((uint32_t)(0x11822868))), 0x117fa077u);
L_117fa077:;
  /* 117fa077 mov esp, ebp */
  ESP = (EBP);
  /* 117fa079 pop ebp */
  EBP = (pop32());
  /* 117fa07a ret  */
  ESPCHK(0x117f9fc0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x117fa080 (254 bytes, 109 insns) */
void f_117fa080(void) {
  FTRACE(0x117fa080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fa080 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 117fa084 push edi */
  push32((uint32_t)(EDI));
  /* 117fa085 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fa087 je 0x117fa103 */
  if (C.zf) goto L_117fa103;
  /* 117fa089 push esi */
  push32((uint32_t)(ESI));
  /* 117fa08a push ebx */
  push32((uint32_t)(EBX));
  /* 117fa08b mov ebx, ecx */
  EBX = (ECX);
  /* 117fa08d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 117fa091 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 117fa097 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 117fa09b jne 0x117fa0a4 */
  if (!C.zf) goto L_117fa0a4;
  /* 117fa09d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117fa0a0 jne 0x117fa111 */
  if (!C.zf) goto L_117fa111;
  /* 117fa0a2 jmp 0x117fa0c5 */
  goto L_117fa0c5;
L_117fa0a4:;
  /* 117fa0a4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117fa0a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117fa0a7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117fa0a9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117fa0aa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117fa0ab je 0x117fa0d2 */
  if (C.zf) goto L_117fa0d2;
  /* 117fa0ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117fa0af je 0x117fa0da */
  if (C.zf) goto L_117fa0da;
  /* 117fa0b1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 117fa0b7 jne 0x117fa0a4 */
  if (!C.zf) goto L_117fa0a4;
  /* 117fa0b9 mov ebx, ecx */
  EBX = (ECX);
  /* 117fa0bb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117fa0be jne 0x117fa111 */
  if (!C.zf) goto L_117fa111;
L_117fa0c0:;
  /* 117fa0c0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 117fa0c3 je 0x117fa0d2 */
  if (C.zf) goto L_117fa0d2;
L_117fa0c5:;
  /* 117fa0c5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117fa0c7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117fa0c8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117fa0ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117fa0cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117fa0cd je 0x117fa0fe */
  if (C.zf) goto L_117fa0fe;
  /* 117fa0cf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 117fa0d0 jne 0x117fa0c5 */
  if (!C.zf) goto L_117fa0c5;
L_117fa0d2:;
  /* 117fa0d2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 117fa0d6 pop ebx */
  EBX = (pop32());
  /* 117fa0d7 pop esi */
  ESI = (pop32());
  /* 117fa0d8 pop edi */
  EDI = (pop32());
  /* 117fa0d9 ret  */
  ESPCHK(0x117fa080u, _esp0);
  ESP += 4; return;
L_117fa0da:;
  /* 117fa0da test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117fa0e0 je 0x117fa0f4 */
  if (C.zf) goto L_117fa0f4;
L_117fa0e2:;
  /* 117fa0e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117fa0e4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117fa0e5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117fa0e6 je 0x117fa176 */
  if (C.zf) goto L_117fa176;
  /* 117fa0ec test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117fa0f2 jne 0x117fa0e2 */
  if (!C.zf) goto L_117fa0e2;
L_117fa0f4:;
  /* 117fa0f4 mov ebx, ecx */
  EBX = (ECX);
  /* 117fa0f6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117fa0f9 jne 0x117fa167 */
  if (!C.zf) goto L_117fa167;
L_117fa0fb:;
  /* 117fa0fb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117fa0fd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_117fa0fe:;
  /* 117fa0fe dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 117fa0ff jne 0x117fa0fb */
  if (!C.zf) goto L_117fa0fb;
  /* 117fa101 pop ebx */
  EBX = (pop32());
  /* 117fa102 pop esi */
  ESI = (pop32());
L_117fa103:;
  /* 117fa103 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117fa107 pop edi */
  EDI = (pop32());
  /* 117fa108 ret  */
  ESPCHK(0x117fa080u, _esp0);
  ESP += 4; return;
L_117fa109:;
  /* 117fa109 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117fa10b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa10e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117fa10f je 0x117fa0c0 */
  if (C.zf) goto L_117fa0c0;
L_117fa111:;
  /* 117fa111 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 117fa116 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 117fa118 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa11a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117fa11d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117fa11f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 117fa121 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa124 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 117fa129 je 0x117fa109 */
  if (C.zf) goto L_117fa109;
  /* 117fa12b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117fa12d je 0x117fa15b */
  if (C.zf) goto L_117fa15b;
  /* 117fa12f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 117fa131 je 0x117fa151 */
  if (C.zf) goto L_117fa151;
  /* 117fa133 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 117fa139 je 0x117fa147 */
  if (C.zf) goto L_117fa147;
  /* 117fa13b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 117fa141 jne 0x117fa109 */
  if (!C.zf) goto L_117fa109;
  /* 117fa143 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117fa145 jmp 0x117fa15f */
  goto L_117fa15f;
L_117fa147:;
  /* 117fa147 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 117fa14d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117fa14f jmp 0x117fa15f */
  goto L_117fa15f;
L_117fa151:;
  /* 117fa151 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 117fa157 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117fa159 jmp 0x117fa15f */
  goto L_117fa15f;
L_117fa15b:;
  /* 117fa15b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117fa15d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_117fa15f:;
  /* 117fa15f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa162 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fa164 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117fa165 je 0x117fa171 */
  if (C.zf) goto L_117fa171;
L_117fa167:;
  /* 117fa167 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117fa169:;
  /* 117fa169 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 117fa16b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa16e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117fa16f jne 0x117fa169 */
  if (!C.zf) goto L_117fa169;
L_117fa171:;
  /* 117fa171 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 117fa174 jne 0x117fa0fb */
  if (!C.zf) goto L_117fa0fb;
L_117fa176:;
  /* 117fa176 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 117fa17a pop ebx */
  EBX = (pop32());
  /* 117fa17b pop esi */
  ESI = (pop32());
  /* 117fa17c pop edi */
  EDI = (pop32());
  /* 117fa17d ret  */
  ESPCHK(0x117fa080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a180 @ 0x117fa180 (55 bytes, 16 insns) */
void f_117fa180(void) {
  FTRACE(0x117fa180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fa180 push ebp */
  push32((uint32_t)(EBP));
  /* 117fa181 mov ebp, esp */
  EBP = (ESP);
  /* 117fa183 mov eax, dword ptr [0x11820b84] */
  EAX = (r32((uint32_t)(0x11820b84)));
  /* 117fa188 push eax */
  push32((uint32_t)(EAX));
  /* 117fa189 call dword ptr [0x11825364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825364))), 0x117fa18fu);
  /* 117fa18f mov ecx, dword ptr [0x11820b74] */
  ECX = (r32((uint32_t)(0x11820b74)));
  /* 117fa195 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa196 call dword ptr [0x11825364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825364))), 0x117fa19cu);
  /* 117fa19c mov edx, dword ptr [0x11820b64] */
  EDX = (r32((uint32_t)(0x11820b64)));
  /* 117fa1a2 push edx */
  push32((uint32_t)(EDX));
  /* 117fa1a3 call dword ptr [0x11825364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825364))), 0x117fa1a9u);
  /* 117fa1a9 mov eax, dword ptr [0x11820b44] */
  EAX = (r32((uint32_t)(0x11820b44)));
  /* 117fa1ae push eax */
  push32((uint32_t)(EAX));
  /* 117fa1af call dword ptr [0x11825364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825364))), 0x117fa1b5u);
  /* 117fa1b5 pop ebp */
  EBP = (pop32());
  /* 117fa1b6 ret  */
  ESPCHK(0x117fa180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1c0 @ 0x117fa1c0 (159 bytes, 47 insns) */
void f_117fa1c0(void) {
  FTRACE(0x117fa1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fa1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 117fa1c1 mov ebp, esp */
  EBP = (ESP);
  /* 117fa1c3 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa1c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117fa1cb jmp 0x117fa1d6 */
  goto L_117fa1d6;
L_117fa1cd:;
  /* 117fa1cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fa1d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa1d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117fa1d6:;
  /* 117fa1d6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa1da jge 0x117fa229 */
  if ((C.sf==C.of)) goto L_117fa229;
  /* 117fa1dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fa1df cmp dword ptr [ecx*4 + 0x11820b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11820b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa1e7 je 0x117fa227 */
  if (C.zf) goto L_117fa227;
  /* 117fa1e9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa1ed je 0x117fa227 */
  if (C.zf) goto L_117fa227;
  /* 117fa1ef cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa1f3 je 0x117fa227 */
  if (C.zf) goto L_117fa227;
  /* 117fa1f5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa1f9 je 0x117fa227 */
  if (C.zf) goto L_117fa227;
  /* 117fa1fb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa1ff je 0x117fa227 */
  if (C.zf) goto L_117fa227;
  /* 117fa201 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fa204 mov eax, dword ptr [edx*4 + 0x11820b40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11820b40)));
  /* 117fa20b push eax */
  push32((uint32_t)(EAX));
  /* 117fa20c call dword ptr [0x1182539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182539c))), 0x117fa212u);
  /* 117fa212 push 2 */
  push32((uint32_t)(0x2u));
  /* 117fa214 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fa217 mov edx, dword ptr [ecx*4 + 0x11820b40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11820b40)));
  /* 117fa21e push edx */
  push32((uint32_t)(EDX));
  /* 117fa21f call 0x117f72f0 */
  push32(0x117fa224u); f_117f72f0();
  /* 117fa224 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117fa227:;
  /* 117fa227 jmp 0x117fa1cd */
  goto L_117fa1cd;
L_117fa229:;
  /* 117fa229 mov eax, dword ptr [0x11820b64] */
  EAX = (r32((uint32_t)(0x11820b64)));
  /* 117fa22e push eax */
  push32((uint32_t)(EAX));
  /* 117fa22f call dword ptr [0x1182539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182539c))), 0x117fa235u);
  /* 117fa235 mov ecx, dword ptr [0x11820b74] */
  ECX = (r32((uint32_t)(0x11820b74)));
  /* 117fa23b push ecx */
  push32((uint32_t)(ECX));
  /* 117fa23c call dword ptr [0x1182539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182539c))), 0x117fa242u);
  /* 117fa242 mov edx, dword ptr [0x11820b84] */
  EDX = (r32((uint32_t)(0x11820b84)));
  /* 117fa248 push edx */
  push32((uint32_t)(EDX));
  /* 117fa249 call dword ptr [0x1182539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182539c))), 0x117fa24fu);
  /* 117fa24f mov eax, dword ptr [0x11820b44] */
  EAX = (r32((uint32_t)(0x11820b44)));
  /* 117fa254 push eax */
  push32((uint32_t)(EAX));
  /* 117fa255 call dword ptr [0x1182539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182539c))), 0x117fa25bu);
  /* 117fa25b mov esp, ebp */
  ESP = (EBP);
  /* 117fa25d pop ebp */
  EBP = (pop32());
  /* 117fa25e ret  */
  ESPCHK(0x117fa1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a260 @ 0x117fa260 (151 bytes, 46 insns) */
void f_117fa260(void) {
  FTRACE(0x117fa260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fa260 push ebp */
  push32((uint32_t)(EBP));
  /* 117fa261 mov ebp, esp */
  EBP = (ESP);
  /* 117fa263 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa264 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa267 cmp dword ptr [eax*4 + 0x11820b40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11820b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa26f jne 0x117fa2e2 */
  if (!C.zf) goto L_117fa2e2;
  /* 117fa271 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 117fa276 push 0x1181e5b0 */
  push32((uint32_t)(0x1181e5b0u));
  /* 117fa27b push 2 */
  push32((uint32_t)(0x2u));
  /* 117fa27d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 117fa27f call 0x117f6860 */
  push32(0x117fa284u); f_117f6860();
  /* 117fa284 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa287 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117fa28a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa28e jne 0x117fa29a */
  if (!C.zf) goto L_117fa29a;
  /* 117fa290 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117fa292 call 0x117f57d0 */
  push32(0x117fa297u); f_117f57d0();
  /* 117fa297 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117fa29a:;
  /* 117fa29a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117fa29c call 0x117fa260 */
  push32(0x117fa2a1u); f_117fa260();
  /* 117fa2a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa2a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa2a7 cmp dword ptr [ecx*4 + 0x11820b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11820b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa2af jne 0x117fa2ca */
  if (!C.zf) goto L_117fa2ca;
  /* 117fa2b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fa2b4 push edx */
  push32((uint32_t)(EDX));
  /* 117fa2b5 call dword ptr [0x11825364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825364))), 0x117fa2bbu);
  /* 117fa2bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa2be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fa2c1 mov dword ptr [eax*4 + 0x11820b40], ecx */
  w32((uint32_t)(EAX*4 + 0x11820b40), (ECX));
  /* 117fa2c8 jmp 0x117fa2d8 */
  goto L_117fa2d8;
L_117fa2ca:;
  /* 117fa2ca push 2 */
  push32((uint32_t)(0x2u));
  /* 117fa2cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fa2cf push edx */
  push32((uint32_t)(EDX));
  /* 117fa2d0 call 0x117f72f0 */
  push32(0x117fa2d5u); f_117f72f0();
  /* 117fa2d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117fa2d8:;
  /* 117fa2d8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117fa2da call 0x117fa300 */
  push32(0x117fa2dfu); f_117fa300();
  /* 117fa2df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117fa2e2:;
  /* 117fa2e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa2e5 mov ecx, dword ptr [eax*4 + 0x11820b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11820b40)));
  /* 117fa2ec push ecx */
  push32((uint32_t)(ECX));
  /* 117fa2ed call dword ptr [0x11825360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825360))), 0x117fa2f3u);
  /* 117fa2f3 mov esp, ebp */
  ESP = (EBP);
  /* 117fa2f5 pop ebp */
  EBP = (pop32());
  /* 117fa2f6 ret  */
  ESPCHK(0x117fa260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a300 @ 0x117fa300 (22 bytes, 8 insns) */
void f_117fa300(void) {
  FTRACE(0x117fa300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fa300 push ebp */
  push32((uint32_t)(EBP));
  /* 117fa301 mov ebp, esp */
  EBP = (ESP);
  /* 117fa303 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa306 mov ecx, dword ptr [eax*4 + 0x11820b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11820b40)));
  /* 117fa30d push ecx */
  push32((uint32_t)(ECX));
  /* 117fa30e call dword ptr [0x1182535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182535c))), 0x117fa314u);
  /* 117fa314 pop ebp */
  EBP = (pop32());
  /* 117fa315 ret  */
  ESPCHK(0x117fa300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a320 @ 0x117fa320 (26 bytes, 10 insns) */
void f_117fa320(void) {
  FTRACE(0x117fa320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fa320 push ebp */
  push32((uint32_t)(EBP));
  /* 117fa321 mov ebp, esp */
  EBP = (ESP);
  /* 117fa323 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa326 push eax */
  push32((uint32_t)(EAX));
  /* 117fa327 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fa329 call dword ptr [0x11825358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825358))), 0x117fa32fu);
  /* 117fa32f push 0xff */
  push32((uint32_t)(0xffu));
  /* 117fa334 call dword ptr [0x118252dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118252dc))), 0x117fa33au);
  /* 117fa33a pop ebp */
  EBP = (pop32());
  /* 117fa33b ret  */
  ESPCHK(0x117fa320u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x117fa340 (446 bytes, 130 insns) */
void f_117fa340(void) {
  FTRACE(0x117fa340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fa340 push ebp */
  push32((uint32_t)(EBP));
  /* 117fa341 mov ebp, esp */
  EBP = (ESP);
  /* 117fa343 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fa346 call 0x117f62a0 */
  push32(0x117fa34bu); f_117f62a0();
  /* 117fa34b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117fa34e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fa351 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 117fa354 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa355 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa358 push edx */
  push32((uint32_t)(EDX));
  /* 117fa359 call 0x117fa500 */
  push32(0x117fa35eu); f_117fa500();
  /* 117fa35e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa361 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 117fa364 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa368 je 0x117fa373 */
  if (C.zf) goto L_117fa373;
  /* 117fa36a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fa36d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa371 jne 0x117fa382 */
  if (!C.zf) goto L_117fa382;
L_117fa373:;
  /* 117fa373 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fa376 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa377 call dword ptr [0x11825354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825354))), 0x117fa37du);
  /* 117fa37d jmp 0x117fa4fa */
  goto L_117fa4fa;
L_117fa382:;
  /* 117fa382 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fa385 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa389 jne 0x117fa39f */
  if (!C.zf) goto L_117fa39f;
  /* 117fa38b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fa38e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 117fa395 mov eax, 1 */
  EAX = (0x1u);
  /* 117fa39a jmp 0x117fa4fa */
  goto L_117fa4fa;
L_117fa39f:;
  /* 117fa39f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fa3a2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa3a6 jne 0x117fa3b0 */
  if (!C.zf) goto L_117fa3b0;
  /* 117fa3a8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117fa3ab jmp 0x117fa4fa */
  goto L_117fa4fa;
L_117fa3b0:;
  /* 117fa3b0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fa3b3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 117fa3b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117fa3b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fa3bc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 117fa3bf mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 117fa3c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fa3c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fa3c8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 117fa3cb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fa3ce cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa3d2 jne 0x117fa4d7 */
  if (!C.zf) goto L_117fa4d7;
  /* 117fa3d8 mov eax, dword ptr [0x11820c78] */
  EAX = (r32((uint32_t)(0x11820c78)));
  /* 117fa3dd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 117fa3e0 jmp 0x117fa3eb */
  goto L_117fa3eb;
L_117fa3e2:;
  /* 117fa3e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fa3e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa3e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_117fa3eb:;
  /* 117fa3eb mov edx, dword ptr [0x11820c78] */
  EDX = (r32((uint32_t)(0x11820c78)));
  /* 117fa3f1 add edx, dword ptr [0x11820c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11820c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa3f7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa3fa jge 0x117fa412 */
  if ((C.sf==C.of)) goto L_117fa412;
  /* 117fa3fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fa3ff imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117fa402 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fa405 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 117fa408 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 117fa410 jmp 0x117fa3e2 */
  goto L_117fa3e2;
L_117fa412:;
  /* 117fa412 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fa415 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 117fa418 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117fa41b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fa41e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa424 jne 0x117fa435 */
  if (!C.zf) goto L_117fa435;
  /* 117fa426 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fa429 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 117fa430 jmp 0x117fa4bd */
  goto L_117fa4bd;
L_117fa435:;
  /* 117fa435 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fa438 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa43e jne 0x117fa44c */
  if (!C.zf) goto L_117fa44c;
  /* 117fa440 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fa443 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 117fa44a jmp 0x117fa4bd */
  goto L_117fa4bd;
L_117fa44c:;
  /* 117fa44c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fa44f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa455 jne 0x117fa463 */
  if (!C.zf) goto L_117fa463;
  /* 117fa457 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fa45a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 117fa461 jmp 0x117fa4bd */
  goto L_117fa4bd;
L_117fa463:;
  /* 117fa463 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fa466 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa46c jne 0x117fa47a */
  if (!C.zf) goto L_117fa47a;
  /* 117fa46e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fa471 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 117fa478 jmp 0x117fa4bd */
  goto L_117fa4bd;
L_117fa47a:;
  /* 117fa47a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fa47d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa483 jne 0x117fa491 */
  if (!C.zf) goto L_117fa491;
  /* 117fa485 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fa488 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 117fa48f jmp 0x117fa4bd */
  goto L_117fa4bd;
L_117fa491:;
  /* 117fa491 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fa494 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa49a jne 0x117fa4a8 */
  if (!C.zf) goto L_117fa4a8;
  /* 117fa49c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fa49f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 117fa4a6 jmp 0x117fa4bd */
  goto L_117fa4bd;
L_117fa4a8:;
  /* 117fa4a8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fa4ab cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa4b1 jne 0x117fa4bd */
  if (!C.zf) goto L_117fa4bd;
  /* 117fa4b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fa4b6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_117fa4bd:;
  /* 117fa4bd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fa4c0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 117fa4c3 push edx */
  push32((uint32_t)(EDX));
  /* 117fa4c4 push 8 */
  push32((uint32_t)(0x8u));
  /* 117fa4c6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x117fa4c9u);
  /* 117fa4c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa4cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fa4cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fa4d2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 117fa4d5 jmp 0x117fa4ee */
  goto L_117fa4ee;
L_117fa4d7:;
  /* 117fa4d7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fa4da mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 117fa4e1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fa4e4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117fa4e7 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa4e8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x117fa4ebu);
  /* 117fa4eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117fa4ee:;
  /* 117fa4ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fa4f1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fa4f4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 117fa4f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_117fa4fa:;
  /* 117fa4fa mov esp, ebp */
  ESP = (EBP);
  /* 117fa4fc pop ebp */
  EBP = (pop32());
  /* 117fa4fd ret  */
  ESPCHK(0x117fa340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a500 @ 0x117fa500 (89 bytes, 35 insns) */
void f_117fa500(void) {
  FTRACE(0x117fa500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fa500 push ebp */
  push32((uint32_t)(EBP));
  /* 117fa501 mov ebp, esp */
  EBP = (ESP);
  /* 117fa503 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa504 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fa507 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117fa50a:;
  /* 117fa50a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fa50d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117fa50f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa512 je 0x117fa532 */
  if (C.zf) goto L_117fa532;
  /* 117fa514 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fa517 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa51a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117fa51d mov ecx, dword ptr [0x11820c84] */
  ECX = (r32((uint32_t)(0x11820c84)));
  /* 117fa523 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117fa526 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fa529 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa52b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa52e jae 0x117fa532 */
  if (!C.cf) goto L_117fa532;
  /* 117fa530 jmp 0x117fa50a */
  goto L_117fa50a;
L_117fa532:;
  /* 117fa532 mov eax, dword ptr [0x11820c84] */
  EAX = (r32((uint32_t)(0x11820c84)));
  /* 117fa537 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117fa53a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fa53d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa53f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa542 jae 0x117fa54e */
  if (!C.cf) goto L_117fa54e;
  /* 117fa544 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fa547 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117fa549 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa54c je 0x117fa552 */
  if (C.zf) goto L_117fa552;
L_117fa54e:;
  /* 117fa54e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fa550 jmp 0x117fa555 */
  goto L_117fa555;
L_117fa552:;
  /* 117fa552 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_117fa555:;
  /* 117fa555 mov esp, ebp */
  ESP = (EBP);
  /* 117fa557 pop ebp */
  EBP = (pop32());
  /* 117fa558 ret  */
  ESPCHK(0x117fa500u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x117fa560 (48 bytes, 17 insns) */
void f_117fa560(void) {
  FTRACE(0x117fa560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fa560 push ebp */
  push32((uint32_t)(EBP));
  /* 117fa561 mov ebp, esp */
  EBP = (ESP);
  /* 117fa563 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa564 push 9 */
  push32((uint32_t)(0x9u));
  /* 117fa566 call 0x117fa260 */
  push32(0x117fa56bu); f_117fa260();
  /* 117fa56b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa56e mov eax, dword ptr [0x118228dc] */
  EAX = (r32((uint32_t)(0x118228dc)));
  /* 117fa573 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117fa576 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa579 mov dword ptr [0x118228dc], ecx */
  w32((uint32_t)(0x118228dc), (ECX));
  /* 117fa57f push 9 */
  push32((uint32_t)(0x9u));
  /* 117fa581 call 0x117fa300 */
  push32(0x117fa586u); f_117fa300();
  /* 117fa586 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa589 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fa58c mov esp, ebp */
  ESP = (EBP);
  /* 117fa58e pop ebp */
  EBP = (pop32());
  /* 117fa58f ret  */
  ESPCHK(0x117fa560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a590 @ 0x117fa590 (10 bytes, 5 insns) */
void f_117fa590(void) {
  FTRACE(0x117fa590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fa590 push ebp */
  push32((uint32_t)(EBP));
  /* 117fa591 mov ebp, esp */
  EBP = (ESP);
  /* 117fa593 mov eax, dword ptr [0x118228dc] */
  EAX = (r32((uint32_t)(0x118228dc)));
  /* 117fa598 pop ebp */
  EBP = (pop32());
  /* 117fa599 ret  */
  ESPCHK(0x117fa590u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x117fa5a0 (45 bytes, 19 insns) */
void f_117fa5a0(void) {
  FTRACE(0x117fa5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fa5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 117fa5a1 mov ebp, esp */
  EBP = (ESP);
  /* 117fa5a3 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa5a4 mov eax, dword ptr [0x118228dc] */
  EAX = (r32((uint32_t)(0x118228dc)));
  /* 117fa5a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117fa5ac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa5b0 je 0x117fa5c0 */
  if (C.zf) goto L_117fa5c0;
  /* 117fa5b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa5b5 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa5b6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x117fa5b9u);
  /* 117fa5b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa5bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fa5be jne 0x117fa5c4 */
  if (!C.zf) goto L_117fa5c4;
L_117fa5c0:;
  /* 117fa5c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fa5c2 jmp 0x117fa5c9 */
  goto L_117fa5c9;
L_117fa5c4:;
  /* 117fa5c4 mov eax, 1 */
  EAX = (0x1u);
L_117fa5c9:;
  /* 117fa5c9 mov esp, ebp */
  ESP = (EBP);
  /* 117fa5cb pop ebp */
  EBP = (pop32());
  /* 117fa5cc ret  */
  ESPCHK(0x117fa5a0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x117fa5d0 (88 bytes, 40 insns) */
void f_117fa5d0(void) {
  FTRACE(0x117fa5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fa5d0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 117fa5d4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117fa5d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fa5da je 0x117fa623 */
  if (C.zf) goto L_117fa623;
  /* 117fa5dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fa5de mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 117fa5e2 push edi */
  push32((uint32_t)(EDI));
  /* 117fa5e3 mov edi, ecx */
  EDI = (ECX);
  /* 117fa5e5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa5e8 jb 0x117fa617 */
  if (C.cf) goto L_117fa617;
  /* 117fa5ea neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 117fa5ec and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 117fa5ef je 0x117fa5f9 */
  if (C.zf) goto L_117fa5f9;
  /* 117fa5f1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_117fa5f3:;
  /* 117fa5f3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117fa5f5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117fa5f6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117fa5f7 jne 0x117fa5f3 */
  if (!C.zf) goto L_117fa5f3;
L_117fa5f9:;
  /* 117fa5f9 mov ecx, eax */
  ECX = (EAX);
  /* 117fa5fb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 117fa5fe add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa600 mov ecx, eax */
  ECX = (EAX);
  /* 117fa602 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 117fa605 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa607 mov ecx, edx */
  ECX = (EDX);
  /* 117fa609 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 117fa60c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117fa60f je 0x117fa617 */
  if (C.zf) goto L_117fa617;
  /* 117fa611 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117fa613 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fa615 je 0x117fa61d */
  if (C.zf) goto L_117fa61d;
L_117fa617:;
  /* 117fa617 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117fa619 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117fa61a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 117fa61b jne 0x117fa617 */
  if (!C.zf) goto L_117fa617;
L_117fa61d:;
  /* 117fa61d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117fa621 pop edi */
  EDI = (pop32());
  /* 117fa622 ret  */
  ESPCHK(0x117fa5d0u, _esp0);
  ESP += 4; return;
L_117fa623:;
  /* 117fa623 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 117fa627 ret  */
  ESPCHK(0x117fa5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a630 @ 0x117fa630 (23 bytes, 10 insns) */
void f_117fa630(void) {
  FTRACE(0x117fa630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fa630 push ebp */
  push32((uint32_t)(EBP));
  /* 117fa631 mov ebp, esp */
  EBP = (ESP);
  /* 117fa633 mov eax, dword ptr [0x118228d8] */
  EAX = (r32((uint32_t)(0x118228d8)));
  /* 117fa638 push eax */
  push32((uint32_t)(EAX));
  /* 117fa639 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa63c push ecx */
  push32((uint32_t)(ECX));
  /* 117fa63d call 0x117fa650 */
  push32(0x117fa642u); f_117fa650();
  /* 117fa642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa645 pop ebp */
  EBP = (pop32());
  /* 117fa646 ret  */
  ESPCHK(0x117fa630u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x117fa650 (87 bytes, 34 insns) */
void f_117fa650(void) {
  FTRACE(0x117fa650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fa650 push ebp */
  push32((uint32_t)(EBP));
  /* 117fa651 mov ebp, esp */
  EBP = (ESP);
  /* 117fa653 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa654 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa658 jbe 0x117fa65e */
  if ((C.cf||C.zf)) goto L_117fa65e;
  /* 117fa65a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fa65c jmp 0x117fa6a3 */
  goto L_117fa6a3;
L_117fa65e:;
  /* 117fa65e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa662 ja 0x117fa675 */
  if ((!C.cf&&!C.zf)) goto L_117fa675;
  /* 117fa664 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa667 push eax */
  push32((uint32_t)(EAX));
  /* 117fa668 call 0x117fa6b0 */
  push32(0x117fa66du); f_117fa6b0();
  /* 117fa66d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa670 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117fa673 jmp 0x117fa67c */
  goto L_117fa67c;
L_117fa675:;
  /* 117fa675 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_117fa67c:;
  /* 117fa67c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa680 jne 0x117fa688 */
  if (!C.zf) goto L_117fa688;
  /* 117fa682 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa686 jne 0x117fa68d */
  if (!C.zf) goto L_117fa68d;
L_117fa688:;
  /* 117fa688 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fa68b jmp 0x117fa6a3 */
  goto L_117fa6a3;
L_117fa68d:;
  /* 117fa68d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa690 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa691 call 0x117fa5a0 */
  push32(0x117fa696u); f_117fa5a0();
  /* 117fa696 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa699 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fa69b jne 0x117fa6a1 */
  if (!C.zf) goto L_117fa6a1;
  /* 117fa69d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fa69f jmp 0x117fa6a3 */
  goto L_117fa6a3;
L_117fa6a1:;
  /* 117fa6a1 jmp 0x117fa65e */
  goto L_117fa65e;
L_117fa6a3:;
  /* 117fa6a3 mov esp, ebp */
  ESP = (EBP);
  /* 117fa6a5 pop ebp */
  EBP = (pop32());
  /* 117fa6a6 ret  */
  ESPCHK(0x117fa650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6b0 @ 0x117fa6b0 (109 bytes, 37 insns) */
void f_117fa6b0(void) {
  FTRACE(0x117fa6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fa6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 117fa6b1 mov ebp, esp */
  EBP = (ESP);
  /* 117fa6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa6b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa6b7 cmp eax, dword ptr [0x11820c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11820c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa6bd ja 0x117fa6ed */
  if ((!C.cf&&!C.zf)) goto L_117fa6ed;
  /* 117fa6bf push 9 */
  push32((uint32_t)(0x9u));
  /* 117fa6c1 call 0x117fa260 */
  push32(0x117fa6c6u); f_117fa260();
  /* 117fa6c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa6c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa6cc push ecx */
  push32((uint32_t)(ECX));
  /* 117fa6cd call 0x117fb1f0 */
  push32(0x117fa6d2u); f_117fb1f0();
  /* 117fa6d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa6d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117fa6d8 push 9 */
  push32((uint32_t)(0x9u));
  /* 117fa6da call 0x117fa300 */
  push32(0x117fa6dfu); f_117fa300();
  /* 117fa6df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa6e2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa6e6 je 0x117fa6ed */
  if (C.zf) goto L_117fa6ed;
  /* 117fa6e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fa6eb jmp 0x117fa719 */
  goto L_117fa719;
L_117fa6ed:;
  /* 117fa6ed cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa6f1 jne 0x117fa6fa */
  if (!C.zf) goto L_117fa6fa;
  /* 117fa6f3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_117fa6fa:;
  /* 117fa6fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa6fd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa700 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 117fa703 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 117fa706 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa709 push eax */
  push32((uint32_t)(EAX));
  /* 117fa70a push 0 */
  push32((uint32_t)(0x0u));
  /* 117fa70c mov ecx, dword ptr [0x1182408c] */
  ECX = (r32((uint32_t)(0x1182408c)));
  /* 117fa712 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa713 call dword ptr [0x11825350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825350))), 0x117fa719u);
L_117fa719:;
  /* 117fa719 mov esp, ebp */
  ESP = (EBP);
  /* 117fa71b pop ebp */
  EBP = (pop32());
  /* 117fa71c ret  */
  ESPCHK(0x117fa6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a720 @ 0x117fa720 (10 bytes, 5 insns) */
void f_117fa720(void) {
  FTRACE(0x117fa720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fa720 push ebp */
  push32((uint32_t)(EBP));
  /* 117fa721 mov ebp, esp */
  EBP = (ESP);
  /* 117fa723 mov eax, 1 */
  EAX = (0x1u);
  /* 117fa728 pop ebp */
  EBP = (pop32());
  /* 117fa729 ret  */
  ESPCHK(0x117fa720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a730 @ 0x117fa730 (173 bytes, 59 insns) */
void f_117fa730(void) {
  FTRACE(0x117fa730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fa730 push ebp */
  push32((uint32_t)(EBP));
  /* 117fa731 mov ebp, esp */
  EBP = (ESP);
  /* 117fa733 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fa736 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa73a jbe 0x117fa743 */
  if ((C.cf||C.zf)) goto L_117fa743;
  /* 117fa73c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fa73e jmp 0x117fa7d9 */
  goto L_117fa7d9;
L_117fa743:;
  /* 117fa743 push 9 */
  push32((uint32_t)(0x9u));
  /* 117fa745 call 0x117fa260 */
  push32(0x117fa74au); f_117fa260();
  /* 117fa74a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa74d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa750 push eax */
  push32((uint32_t)(EAX));
  /* 117fa751 call 0x117fab60 */
  push32(0x117fa756u); f_117fab60();
  /* 117fa756 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa759 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117fa75c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa760 je 0x117fa7a1 */
  if (C.zf) goto L_117fa7a1;
  /* 117fa762 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117fa769 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fa76c cmp ecx, dword ptr [0x11820c94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11820c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa772 ja 0x117fa792 */
  if ((!C.cf&&!C.zf)) goto L_117fa792;
  /* 117fa774 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fa777 push edx */
  push32((uint32_t)(EDX));
  /* 117fa778 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa77b push eax */
  push32((uint32_t)(EAX));
  /* 117fa77c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fa77f push ecx */
  push32((uint32_t)(ECX));
  /* 117fa780 call 0x117fba30 */
  push32(0x117fa785u); f_117fba30();
  /* 117fa785 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa788 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fa78a je 0x117fa792 */
  if (C.zf) goto L_117fa792;
  /* 117fa78c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa78f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117fa792:;
  /* 117fa792 push 9 */
  push32((uint32_t)(0x9u));
  /* 117fa794 call 0x117fa300 */
  push32(0x117fa799u); f_117fa300();
  /* 117fa799 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa79c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fa79f jmp 0x117fa7d9 */
  goto L_117fa7d9;
L_117fa7a1:;
  /* 117fa7a1 push 9 */
  push32((uint32_t)(0x9u));
  /* 117fa7a3 call 0x117fa300 */
  push32(0x117fa7a8u); f_117fa300();
  /* 117fa7a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa7ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa7af jne 0x117fa7b8 */
  if (!C.zf) goto L_117fa7b8;
  /* 117fa7b1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_117fa7b8:;
  /* 117fa7b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fa7bb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa7be and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 117fa7c0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 117fa7c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fa7c6 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa7c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa7ca push edx */
  push32((uint32_t)(EDX));
  /* 117fa7cb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 117fa7cd mov eax, dword ptr [0x1182408c] */
  EAX = (r32((uint32_t)(0x1182408c)));
  /* 117fa7d2 push eax */
  push32((uint32_t)(EAX));
  /* 117fa7d3 call dword ptr [0x1182534c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182534c))), 0x117fa7d9u);
L_117fa7d9:;
  /* 117fa7d9 mov esp, ebp */
  ESP = (EBP);
  /* 117fa7db pop ebp */
  EBP = (pop32());
  /* 117fa7dc ret  */
  ESPCHK(0x117fa730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7e0 @ 0x117fa7e0 (490 bytes, 165 insns) */
void f_117fa7e0(void) {
  FTRACE(0x117fa7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fa7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 117fa7e1 mov ebp, esp */
  EBP = (ESP);
  /* 117fa7e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fa7e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa7ea jne 0x117fa7fd */
  if (!C.zf) goto L_117fa7fd;
  /* 117fa7ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fa7ef push eax */
  push32((uint32_t)(EAX));
  /* 117fa7f0 call 0x117fa630 */
  push32(0x117fa7f5u); f_117fa630();
  /* 117fa7f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa7f8 jmp 0x117fa9c6 */
  goto L_117fa9c6;
L_117fa7fd:;
  /* 117fa7fd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa801 jne 0x117fa816 */
  if (!C.zf) goto L_117fa816;
  /* 117fa803 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa806 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa807 call 0x117fa9d0 */
  push32(0x117fa80cu); f_117fa9d0();
  /* 117fa80c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa80f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fa811 jmp 0x117fa9c6 */
  goto L_117fa9c6;
L_117fa816:;
  /* 117fa816 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 117fa81d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa821 ja 0x117fa999 */
  if ((!C.cf&&!C.zf)) goto L_117fa999;
  /* 117fa827 push 9 */
  push32((uint32_t)(0x9u));
  /* 117fa829 call 0x117fa260 */
  push32(0x117fa82eu); f_117fa260();
  /* 117fa82e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa831 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa834 push edx */
  push32((uint32_t)(EDX));
  /* 117fa835 call 0x117fab60 */
  push32(0x117fa83au); f_117fab60();
  /* 117fa83a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa83d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117fa840 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa844 je 0x117fa95c */
  if (C.zf) goto L_117fa95c;
  /* 117fa84a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fa84d cmp eax, dword ptr [0x11820c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11820c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa853 ja 0x117fa8d0 */
  if ((!C.cf&&!C.zf)) goto L_117fa8d0;
  /* 117fa855 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fa858 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa859 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa85c push edx */
  push32((uint32_t)(EDX));
  /* 117fa85d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fa860 push eax */
  push32((uint32_t)(EAX));
  /* 117fa861 call 0x117fba30 */
  push32(0x117fa866u); f_117fba30();
  /* 117fa866 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa869 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fa86b je 0x117fa875 */
  if (C.zf) goto L_117fa875;
  /* 117fa86d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa870 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117fa873 jmp 0x117fa8d0 */
  goto L_117fa8d0;
L_117fa875:;
  /* 117fa875 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fa878 push edx */
  push32((uint32_t)(EDX));
  /* 117fa879 call 0x117fb1f0 */
  push32(0x117fa87eu); f_117fb1f0();
  /* 117fa87e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa881 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117fa884 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa888 je 0x117fa8d0 */
  if (C.zf) goto L_117fa8d0;
  /* 117fa88a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa88d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 117fa890 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fa893 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117fa896 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fa899 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa89c jae 0x117fa8a6 */
  if (!C.cf) goto L_117fa8a6;
  /* 117fa89e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fa8a1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 117fa8a4 jmp 0x117fa8ac */
  goto L_117fa8ac;
L_117fa8a6:;
  /* 117fa8a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fa8a9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_117fa8ac:;
  /* 117fa8ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fa8af push edx */
  push32((uint32_t)(EDX));
  /* 117fa8b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa8b3 push eax */
  push32((uint32_t)(EAX));
  /* 117fa8b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fa8b7 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa8b8 call 0x117fd140 */
  push32(0x117fa8bdu); f_117fd140();
  /* 117fa8bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa8c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa8c3 push edx */
  push32((uint32_t)(EDX));
  /* 117fa8c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fa8c7 push eax */
  push32((uint32_t)(EAX));
  /* 117fa8c8 call 0x117fac20 */
  push32(0x117fa8cdu); f_117fac20();
  /* 117fa8cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117fa8d0:;
  /* 117fa8d0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa8d4 jne 0x117fa950 */
  if (!C.zf) goto L_117fa950;
  /* 117fa8d6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa8da jne 0x117fa8e3 */
  if (!C.zf) goto L_117fa8e3;
  /* 117fa8dc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_117fa8e3:;
  /* 117fa8e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fa8e6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa8e9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 117fa8ec mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 117fa8ef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fa8f2 push edx */
  push32((uint32_t)(EDX));
  /* 117fa8f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fa8f5 mov eax, dword ptr [0x1182408c] */
  EAX = (r32((uint32_t)(0x1182408c)));
  /* 117fa8fa push eax */
  push32((uint32_t)(EAX));
  /* 117fa8fb call dword ptr [0x11825350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825350))), 0x117fa901u);
  /* 117fa901 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117fa904 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa908 je 0x117fa950 */
  if (C.zf) goto L_117fa950;
  /* 117fa90a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa90d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 117fa910 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fa913 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117fa916 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fa919 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa91c jae 0x117fa926 */
  if (!C.cf) goto L_117fa926;
  /* 117fa91e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fa921 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 117fa924 jmp 0x117fa92c */
  goto L_117fa92c;
L_117fa926:;
  /* 117fa926 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fa929 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_117fa92c:;
  /* 117fa92c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fa92f push eax */
  push32((uint32_t)(EAX));
  /* 117fa930 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa933 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa934 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fa937 push edx */
  push32((uint32_t)(EDX));
  /* 117fa938 call 0x117fd140 */
  push32(0x117fa93du); f_117fd140();
  /* 117fa93d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa940 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa943 push eax */
  push32((uint32_t)(EAX));
  /* 117fa944 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fa947 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa948 call 0x117fac20 */
  push32(0x117fa94du); f_117fac20();
  /* 117fa94d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117fa950:;
  /* 117fa950 push 9 */
  push32((uint32_t)(0x9u));
  /* 117fa952 call 0x117fa300 */
  push32(0x117fa957u); f_117fa300();
  /* 117fa957 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa95a jmp 0x117fa999 */
  goto L_117fa999;
L_117fa95c:;
  /* 117fa95c push 9 */
  push32((uint32_t)(0x9u));
  /* 117fa95e call 0x117fa300 */
  push32(0x117fa963u); f_117fa300();
  /* 117fa963 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa966 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa96a jne 0x117fa973 */
  if (!C.zf) goto L_117fa973;
  /* 117fa96c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_117fa973:;
  /* 117fa973 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fa976 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa979 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 117fa97c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 117fa97f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fa982 push eax */
  push32((uint32_t)(EAX));
  /* 117fa983 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa986 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa987 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fa989 mov edx, dword ptr [0x1182408c] */
  EDX = (r32((uint32_t)(0x1182408c)));
  /* 117fa98f push edx */
  push32((uint32_t)(EDX));
  /* 117fa990 call dword ptr [0x1182534c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182534c))), 0x117fa996u);
  /* 117fa996 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_117fa999:;
  /* 117fa999 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa99d jne 0x117fa9a8 */
  if (!C.zf) goto L_117fa9a8;
  /* 117fa99f cmp dword ptr [0x118228d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118228d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa9a6 jne 0x117fa9ad */
  if (!C.zf) goto L_117fa9ad;
L_117fa9a8:;
  /* 117fa9a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fa9ab jmp 0x117fa9c6 */
  goto L_117fa9c6;
L_117fa9ad:;
  /* 117fa9ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fa9b0 push eax */
  push32((uint32_t)(EAX));
  /* 117fa9b1 call 0x117fa5a0 */
  push32(0x117fa9b6u); f_117fa5a0();
  /* 117fa9b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa9b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fa9bb jne 0x117fa9c1 */
  if (!C.zf) goto L_117fa9c1;
  /* 117fa9bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fa9bf jmp 0x117fa9c6 */
  goto L_117fa9c6;
L_117fa9c1:;
  /* 117fa9c1 jmp 0x117fa816 */
  goto L_117fa816;
L_117fa9c6:;
  /* 117fa9c6 mov esp, ebp */
  ESP = (EBP);
  /* 117fa9c8 pop ebp */
  EBP = (pop32());
  /* 117fa9c9 ret  */
  ESPCHK(0x117fa7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9d0 @ 0x117fa9d0 (104 bytes, 38 insns) */
void f_117fa9d0(void) {
  FTRACE(0x117fa9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fa9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 117fa9d1 mov ebp, esp */
  EBP = (ESP);
  /* 117fa9d3 push ecx */
  push32((uint32_t)(ECX));
  /* 117fa9d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa9d8 jne 0x117fa9dc */
  if (!C.zf) goto L_117fa9dc;
  /* 117fa9da jmp 0x117faa34 */
  goto L_117faa34;
L_117fa9dc:;
  /* 117fa9dc push 9 */
  push32((uint32_t)(0x9u));
  /* 117fa9de call 0x117fa260 */
  push32(0x117fa9e3u); f_117fa260();
  /* 117fa9e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa9e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa9e9 push eax */
  push32((uint32_t)(EAX));
  /* 117fa9ea call 0x117fab60 */
  push32(0x117fa9efu); f_117fab60();
  /* 117fa9ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fa9f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117fa9f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fa9f9 je 0x117faa17 */
  if (C.zf) goto L_117faa17;
  /* 117fa9fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fa9fe push ecx */
  push32((uint32_t)(ECX));
  /* 117fa9ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117faa02 push edx */
  push32((uint32_t)(EDX));
  /* 117faa03 call 0x117fac20 */
  push32(0x117faa08u); f_117fac20();
  /* 117faa08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117faa0b push 9 */
  push32((uint32_t)(0x9u));
  /* 117faa0d call 0x117fa300 */
  push32(0x117faa12u); f_117fa300();
  /* 117faa12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117faa15 jmp 0x117faa34 */
  goto L_117faa34;
L_117faa17:;
  /* 117faa17 push 9 */
  push32((uint32_t)(0x9u));
  /* 117faa19 call 0x117fa300 */
  push32(0x117faa1eu); f_117fa300();
  /* 117faa1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117faa21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117faa24 push eax */
  push32((uint32_t)(EAX));
  /* 117faa25 push 0 */
  push32((uint32_t)(0x0u));
  /* 117faa27 mov ecx, dword ptr [0x1182408c] */
  ECX = (r32((uint32_t)(0x1182408c)));
  /* 117faa2d push ecx */
  push32((uint32_t)(ECX));
  /* 117faa2e call dword ptr [0x11825370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825370))), 0x117faa34u);
L_117faa34:;
  /* 117faa34 mov esp, ebp */
  ESP = (EBP);
  /* 117faa36 pop ebp */
  EBP = (pop32());
  /* 117faa37 ret  */
  ESPCHK(0x117fa9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa40 @ 0x117faa40 (116 bytes, 34 insns) */
void f_117faa40(void) {
  FTRACE(0x117faa40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117faa40 push ebp */
  push32((uint32_t)(EBP));
  /* 117faa41 mov ebp, esp */
  EBP = (ESP);
  /* 117faa43 push ecx */
  push32((uint32_t)(ECX));
  /* 117faa44 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 117faa4b push 9 */
  push32((uint32_t)(0x9u));
  /* 117faa4d call 0x117fa260 */
  push32(0x117faa52u); f_117fa260();
  /* 117faa52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117faa55 call 0x117fc150 */
  push32(0x117faa5au); f_117fc150();
  /* 117faa5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117faa5c jge 0x117faa65 */
  if ((C.sf==C.of)) goto L_117faa65;
  /* 117faa5e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_117faa65:;
  /* 117faa65 push 9 */
  push32((uint32_t)(0x9u));
  /* 117faa67 call 0x117fa300 */
  push32(0x117faa6cu); f_117fa300();
  /* 117faa6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117faa6f push 0 */
  push32((uint32_t)(0x0u));
  /* 117faa71 push 0 */
  push32((uint32_t)(0x0u));
  /* 117faa73 mov eax, dword ptr [0x1182408c] */
  EAX = (r32((uint32_t)(0x1182408c)));
  /* 117faa78 push eax */
  push32((uint32_t)(EAX));
  /* 117faa79 call dword ptr [0x11825390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825390))), 0x117faa7fu);
  /* 117faa7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117faa81 jne 0x117faaad */
  if (!C.zf) goto L_117faaad;
  /* 117faa83 call dword ptr [0x118253f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253f0))), 0x117faa89u);
  /* 117faa89 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117faa8c jne 0x117faaa6 */
  if (!C.zf) goto L_117faaa6;
  /* 117faa8e call 0x117fe740 */
  push32(0x117faa93u); f_117fe740();
  /* 117faa93 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 117faa99 call 0x117fe730 */
  push32(0x117faa9eu); f_117fe730();
  /* 117faa9e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 117faaa4 jmp 0x117faaad */
  goto L_117faaad;
L_117faaa6:;
  /* 117faaa6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_117faaad:;
  /* 117faaad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117faab0 mov esp, ebp */
  ESP = (EBP);
  /* 117faab2 pop ebp */
  EBP = (pop32());
  /* 117faab3 ret  */
  ESPCHK(0x117faa40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aac0 @ 0x117faac0 (10 bytes, 5 insns) */
void f_117faac0(void) {
  FTRACE(0x117faac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117faac0 push ebp */
  push32((uint32_t)(EBP));
  /* 117faac1 mov ebp, esp */
  EBP = (ESP);
  /* 117faac3 call 0x117faa40 */
  push32(0x117faac8u); f_117faa40();
  /* 117faac8 pop ebp */
  EBP = (pop32());
  /* 117faac9 ret  */
  ESPCHK(0x117faac0u, _esp0);
  ESP += 4; return;
}

