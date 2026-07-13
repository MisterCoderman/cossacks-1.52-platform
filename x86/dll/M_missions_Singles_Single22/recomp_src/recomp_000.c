#include "recomp.h"

/* OnInit @ 0x112c1005 (5 bytes, 1 insns) */
void f_112c1005(void) {
  FTRACE(0x112c1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c1005 jmp 0x112c1090 */
  f_112c1090(); return;
}

/* thunk_FUN_10001030 @ 0x112c100a (5 bytes, 1 insns) */
void f_112c100a(void) {
  FTRACE(0x112c100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c100a jmp 0x112c1030 */
  f_112c1030(); return;
}

/* ProcessScenary @ 0x112c100f (5 bytes, 1 insns) */
void f_112c100f(void) {
  FTRACE(0x112c100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c100f jmp 0x112c15f0 */
  f_112c15f0(); return;
}

/* FUN_10001030 @ 0x112c1030 (67 bytes, 26 insns) */
void f_112c1030(void) {
  FTRACE(0x112c1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c1030 push ebp */
  push32((uint32_t)(EBP));
  /* 112c1031 mov ebp, esp */
  EBP = (ESP);
  /* 112c1033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c1036 push ebx */
  push32((uint32_t)(EBX));
  /* 112c1037 push esi */
  push32((uint32_t)(ESI));
  /* 112c1038 push edi */
  push32((uint32_t)(EDI));
  /* 112c1039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 112c103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 112c1041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112c1046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112c1048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1052 je 0x112c1056 */
  if (C.zf) goto L_112c1056;
  /* 112c1054 jmp 0x112c105b */
  goto L_112c105b;
L_112c1056:;
  /* 112c1056 call 0x112c1005 */
  push32(0x112c105bu); f_112c1005();
L_112c105b:;
  /* 112c105b mov eax, 1 */
  EAX = (0x1u);
  /* 112c1060 pop edi */
  EDI = (pop32());
  /* 112c1061 pop esi */
  ESI = (pop32());
  /* 112c1062 pop ebx */
  EBX = (pop32());
  /* 112c1063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1068 call 0x112c2d20 */
  push32(0x112c106du); f_112c2d20();
  /* 112c106d mov esp, ebp */
  ESP = (EBP);
  /* 112c106f pop ebp */
  EBP = (pop32());
  /* 112c1070 ret 0xc */
  ESPCHK(0x112c1030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x112c1090 (1099 bytes, 290 insns) */
void f_112c1090(void) {
  FTRACE(0x112c1090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c1090 push ebp */
  push32((uint32_t)(EBP));
  /* 112c1091 mov ebp, esp */
  EBP = (ESP);
  /* 112c1093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c1096 push ebx */
  push32((uint32_t)(EBX));
  /* 112c1097 push esi */
  push32((uint32_t)(ESI));
  /* 112c1098 push edi */
  push32((uint32_t)(EDI));
  /* 112c1099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 112c109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 112c10a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112c10a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112c10a8 mov esi, esp */
  ESI = (ESP);
  /* 112c10aa push 0x112ea148 */
  push32((uint32_t)(0x112ea148u));
  /* 112c10af push 1 */
  push32((uint32_t)(0x1u));
  /* 112c10b1 call dword ptr [0x112f24b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24b4))), 0x112c10b7u);
  /* 112c10b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c10ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c10bc call 0x112c2d20 */
  push32(0x112c10c1u); f_112c2d20();
  /* 112c10c1 mov esi, esp */
  ESI = (ESP);
  /* 112c10c3 push 0x112ea13c */
  push32((uint32_t)(0x112ea13cu));
  /* 112c10c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c10ca call dword ptr [0x112f24b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24b4))), 0x112c10d0u);
  /* 112c10d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c10d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c10d5 call 0x112c2d20 */
  push32(0x112c10dau); f_112c2d20();
  /* 112c10da mov esi, esp */
  ESI = (ESP);
  /* 112c10dc push 0x112ea130 */
  push32((uint32_t)(0x112ea130u));
  /* 112c10e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 112c10e3 call dword ptr [0x112f24b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24b4))), 0x112c10e9u);
  /* 112c10e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c10ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c10ee call 0x112c2d20 */
  push32(0x112c10f3u); f_112c2d20();
  /* 112c10f3 mov esi, esp */
  ESI = (ESP);
  /* 112c10f5 push 0x112ea124 */
  push32((uint32_t)(0x112ea124u));
  /* 112c10fa push 7 */
  push32((uint32_t)(0x7u));
  /* 112c10fc call dword ptr [0x112f24b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24b4))), 0x112c1102u);
  /* 112c1102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1107 call 0x112c2d20 */
  push32(0x112c110cu); f_112c2d20();
  /* 112c110c mov esi, esp */
  ESI = (ESP);
  /* 112c110e push 0x112ea114 */
  push32((uint32_t)(0x112ea114u));
  /* 112c1113 push 5 */
  push32((uint32_t)(0x5u));
  /* 112c1115 call dword ptr [0x112f24b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24b4))), 0x112c111bu);
  /* 112c111b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c111e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1120 call 0x112c2d20 */
  push32(0x112c1125u); f_112c2d20();
  /* 112c1125 mov esi, esp */
  ESI = (ESP);
  /* 112c1127 push 0x112ea148 */
  push32((uint32_t)(0x112ea148u));
  /* 112c112c push 6 */
  push32((uint32_t)(0x6u));
  /* 112c112e call dword ptr [0x112f24b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24b4))), 0x112c1134u);
  /* 112c1134 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1137 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1139 call 0x112c2d20 */
  push32(0x112c113eu); f_112c2d20();
  /* 112c113e mov esi, esp */
  ESI = (ESP);
  /* 112c1140 push 4 */
  push32((uint32_t)(0x4u));
  /* 112c1142 push 0x112ef4e0 */
  push32((uint32_t)(0x112ef4e0u));
  /* 112c1147 call dword ptr [0x112f24c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c4))), 0x112c114du);
  /* 112c114d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1150 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1152 call 0x112c2d20 */
  push32(0x112c1157u); f_112c2d20();
  /* 112c1157 mov esi, esp */
  ESI = (ESP);
  /* 112c1159 push 4 */
  push32((uint32_t)(0x4u));
  /* 112c115b push 0x112ef4b8 */
  push32((uint32_t)(0x112ef4b8u));
  /* 112c1160 call dword ptr [0x112f24c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c4))), 0x112c1166u);
  /* 112c1166 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1169 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c116b call 0x112c2d20 */
  push32(0x112c1170u); f_112c2d20();
  /* 112c1170 mov esi, esp */
  ESI = (ESP);
  /* 112c1172 push 0x112ea108 */
  push32((uint32_t)(0x112ea108u));
  /* 112c1177 push 0x112ef408 */
  push32((uint32_t)(0x112ef408u));
  /* 112c117c call dword ptr [0x112f24c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c8))), 0x112c1182u);
  /* 112c1182 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1185 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1187 call 0x112c2d20 */
  push32(0x112c118cu); f_112c2d20();
  /* 112c118c mov esi, esp */
  ESI = (ESP);
  /* 112c118e push 0x112ea0fc */
  push32((uint32_t)(0x112ea0fcu));
  /* 112c1193 push 0x112ef3f0 */
  push32((uint32_t)(0x112ef3f0u));
  /* 112c1198 call dword ptr [0x112f24c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c8))), 0x112c119eu);
  /* 112c119e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c11a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c11a3 call 0x112c2d20 */
  push32(0x112c11a8u); f_112c2d20();
  /* 112c11a8 mov esi, esp */
  ESI = (ESP);
  /* 112c11aa push 0x112ea0f0 */
  push32((uint32_t)(0x112ea0f0u));
  /* 112c11af push 0x112ef400 */
  push32((uint32_t)(0x112ef400u));
  /* 112c11b4 call dword ptr [0x112f24c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c8))), 0x112c11bau);
  /* 112c11ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c11bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c11bf call 0x112c2d20 */
  push32(0x112c11c4u); f_112c2d20();
  /* 112c11c4 mov esi, esp */
  ESI = (ESP);
  /* 112c11c6 push 0x112ea0e4 */
  push32((uint32_t)(0x112ea0e4u));
  /* 112c11cb push 0x112ef410 */
  push32((uint32_t)(0x112ef410u));
  /* 112c11d0 call dword ptr [0x112f24c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c8))), 0x112c11d6u);
  /* 112c11d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c11d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c11db call 0x112c2d20 */
  push32(0x112c11e0u); f_112c2d20();
  /* 112c11e0 mov esi, esp */
  ESI = (ESP);
  /* 112c11e2 push 0x112ea0dc */
  push32((uint32_t)(0x112ea0dcu));
  /* 112c11e7 push 0x112ef4b0 */
  push32((uint32_t)(0x112ef4b0u));
  /* 112c11ec call dword ptr [0x112f24c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c8))), 0x112c11f2u);
  /* 112c11f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c11f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c11f7 call 0x112c2d20 */
  push32(0x112c11fcu); f_112c2d20();
  /* 112c11fc mov esi, esp */
  ESI = (ESP);
  /* 112c11fe push 0x112ea0d4 */
  push32((uint32_t)(0x112ea0d4u));
  /* 112c1203 push 0x112ef4a0 */
  push32((uint32_t)(0x112ef4a0u));
  /* 112c1208 call dword ptr [0x112f24c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c8))), 0x112c120eu);
  /* 112c120e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1211 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1213 call 0x112c2d20 */
  push32(0x112c1218u); f_112c2d20();
  /* 112c1218 mov esi, esp */
  ESI = (ESP);
  /* 112c121a push 0x112ea0c8 */
  push32((uint32_t)(0x112ea0c8u));
  /* 112c121f push 0x112ef4a8 */
  push32((uint32_t)(0x112ef4a8u));
  /* 112c1224 call dword ptr [0x112f24c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c8))), 0x112c122au);
  /* 112c122a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c122d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c122f call 0x112c2d20 */
  push32(0x112c1234u); f_112c2d20();
  /* 112c1234 mov esi, esp */
  ESI = (ESP);
  /* 112c1236 push 0x112ea0c0 */
  push32((uint32_t)(0x112ea0c0u));
  /* 112c123b push 0x112ef418 */
  push32((uint32_t)(0x112ef418u));
  /* 112c1240 call dword ptr [0x112f24c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c0))), 0x112c1246u);
  /* 112c1246 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1249 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c124b call 0x112c2d20 */
  push32(0x112c1250u); f_112c2d20();
  /* 112c1250 mov esi, esp */
  ESI = (ESP);
  /* 112c1252 push 0x112ea0b8 */
  push32((uint32_t)(0x112ea0b8u));
  /* 112c1257 push 0x112ef420 */
  push32((uint32_t)(0x112ef420u));
  /* 112c125c call dword ptr [0x112f24c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c0))), 0x112c1262u);
  /* 112c1262 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1265 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1267 call 0x112c2d20 */
  push32(0x112c126cu); f_112c2d20();
  /* 112c126c mov esi, esp */
  ESI = (ESP);
  /* 112c126e push 0x112ea0b0 */
  push32((uint32_t)(0x112ea0b0u));
  /* 112c1273 push 0x112ef428 */
  push32((uint32_t)(0x112ef428u));
  /* 112c1278 call dword ptr [0x112f24c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c0))), 0x112c127eu);
  /* 112c127e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1281 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1283 call 0x112c2d20 */
  push32(0x112c1288u); f_112c2d20();
  /* 112c1288 mov esi, esp */
  ESI = (ESP);
  /* 112c128a push 0x112ea0a8 */
  push32((uint32_t)(0x112ea0a8u));
  /* 112c128f push 0x112ef430 */
  push32((uint32_t)(0x112ef430u));
  /* 112c1294 call dword ptr [0x112f24c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c0))), 0x112c129au);
  /* 112c129a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c129d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c129f call 0x112c2d20 */
  push32(0x112c12a4u); f_112c2d20();
  /* 112c12a4 mov esi, esp */
  ESI = (ESP);
  /* 112c12a6 push 0x112ea0a0 */
  push32((uint32_t)(0x112ea0a0u));
  /* 112c12ab push 0x112ef438 */
  push32((uint32_t)(0x112ef438u));
  /* 112c12b0 call dword ptr [0x112f24c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c0))), 0x112c12b6u);
  /* 112c12b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c12b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c12bb call 0x112c2d20 */
  push32(0x112c12c0u); f_112c2d20();
  /* 112c12c0 mov esi, esp */
  ESI = (ESP);
  /* 112c12c2 push 0x112ea098 */
  push32((uint32_t)(0x112ea098u));
  /* 112c12c7 push 0x112ef440 */
  push32((uint32_t)(0x112ef440u));
  /* 112c12cc call dword ptr [0x112f24c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c0))), 0x112c12d2u);
  /* 112c12d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c12d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c12d7 call 0x112c2d20 */
  push32(0x112c12dcu); f_112c2d20();
  /* 112c12dc mov esi, esp */
  ESI = (ESP);
  /* 112c12de push 0x112ea090 */
  push32((uint32_t)(0x112ea090u));
  /* 112c12e3 push 0x112ef448 */
  push32((uint32_t)(0x112ef448u));
  /* 112c12e8 call dword ptr [0x112f24c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c0))), 0x112c12eeu);
  /* 112c12ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c12f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c12f3 call 0x112c2d20 */
  push32(0x112c12f8u); f_112c2d20();
  /* 112c12f8 mov esi, esp */
  ESI = (ESP);
  /* 112c12fa push 0x112ea088 */
  push32((uint32_t)(0x112ea088u));
  /* 112c12ff push 0x112ef450 */
  push32((uint32_t)(0x112ef450u));
  /* 112c1304 call dword ptr [0x112f24c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c0))), 0x112c130au);
  /* 112c130a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c130d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c130f call 0x112c2d20 */
  push32(0x112c1314u); f_112c2d20();
  /* 112c1314 mov esi, esp */
  ESI = (ESP);
  /* 112c1316 push 0x112ea080 */
  push32((uint32_t)(0x112ea080u));
  /* 112c131b push 0x112ef458 */
  push32((uint32_t)(0x112ef458u));
  /* 112c1320 call dword ptr [0x112f24c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c0))), 0x112c1326u);
  /* 112c1326 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1329 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c132b call 0x112c2d20 */
  push32(0x112c1330u); f_112c2d20();
  /* 112c1330 mov esi, esp */
  ESI = (ESP);
  /* 112c1332 push 0x112ea078 */
  push32((uint32_t)(0x112ea078u));
  /* 112c1337 push 0x112ef4c8 */
  push32((uint32_t)(0x112ef4c8u));
  /* 112c133c call dword ptr [0x112f24c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c0))), 0x112c1342u);
  /* 112c1342 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1345 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1347 call 0x112c2d20 */
  push32(0x112c134cu); f_112c2d20();
  /* 112c134c mov esi, esp */
  ESI = (ESP);
  /* 112c134e push 0x112ea070 */
  push32((uint32_t)(0x112ea070u));
  /* 112c1353 push 0x112ef4d0 */
  push32((uint32_t)(0x112ef4d0u));
  /* 112c1358 call dword ptr [0x112f24c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c0))), 0x112c135eu);
  /* 112c135e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1361 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1363 call 0x112c2d20 */
  push32(0x112c1368u); f_112c2d20();
  /* 112c1368 mov esi, esp */
  ESI = (ESP);
  /* 112c136a push 0x112ea068 */
  push32((uint32_t)(0x112ea068u));
  /* 112c136f push 0x112ef4d8 */
  push32((uint32_t)(0x112ef4d8u));
  /* 112c1374 call dword ptr [0x112f24c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c0))), 0x112c137au);
  /* 112c137a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c137d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c137f call 0x112c2d20 */
  push32(0x112c1384u); f_112c2d20();
  /* 112c1384 mov esi, esp */
  ESI = (ESP);
  /* 112c1386 push 0x112ea064 */
  push32((uint32_t)(0x112ea064u));
  /* 112c138b push 0x112ef468 */
  push32((uint32_t)(0x112ef468u));
  /* 112c1390 call dword ptr [0x112f24c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c0))), 0x112c1396u);
  /* 112c1396 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1399 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c139b call 0x112c2d20 */
  push32(0x112c13a0u); f_112c2d20();
  /* 112c13a0 mov esi, esp */
  ESI = (ESP);
  /* 112c13a2 push 0x112ea060 */
  push32((uint32_t)(0x112ea060u));
  /* 112c13a7 push 0x112ef470 */
  push32((uint32_t)(0x112ef470u));
  /* 112c13ac call dword ptr [0x112f24c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c0))), 0x112c13b2u);
  /* 112c13b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c13b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c13b7 call 0x112c2d20 */
  push32(0x112c13bcu); f_112c2d20();
  /* 112c13bc mov esi, esp */
  ESI = (ESP);
  /* 112c13be push 0x112ea05c */
  push32((uint32_t)(0x112ea05cu));
  /* 112c13c3 push 0x112ef478 */
  push32((uint32_t)(0x112ef478u));
  /* 112c13c8 call dword ptr [0x112f24c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c0))), 0x112c13ceu);
  /* 112c13ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c13d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c13d3 call 0x112c2d20 */
  push32(0x112c13d8u); f_112c2d20();
  /* 112c13d8 mov esi, esp */
  ESI = (ESP);
  /* 112c13da push 0x112ea058 */
  push32((uint32_t)(0x112ea058u));
  /* 112c13df push 0x112ef480 */
  push32((uint32_t)(0x112ef480u));
  /* 112c13e4 call dword ptr [0x112f24c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c0))), 0x112c13eau);
  /* 112c13ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c13ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c13ef call 0x112c2d20 */
  push32(0x112c13f4u); f_112c2d20();
  /* 112c13f4 mov esi, esp */
  ESI = (ESP);
  /* 112c13f6 push 0x112ea054 */
  push32((uint32_t)(0x112ea054u));
  /* 112c13fb push 0x112ef488 */
  push32((uint32_t)(0x112ef488u));
  /* 112c1400 call dword ptr [0x112f24c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c0))), 0x112c1406u);
  /* 112c1406 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1409 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c140b call 0x112c2d20 */
  push32(0x112c1410u); f_112c2d20();
  /* 112c1410 mov esi, esp */
  ESI = (ESP);
  /* 112c1412 push 0x112ea050 */
  push32((uint32_t)(0x112ea050u));
  /* 112c1417 push 0x112ef490 */
  push32((uint32_t)(0x112ef490u));
  /* 112c141c call dword ptr [0x112f24c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24c0))), 0x112c1422u);
  /* 112c1422 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1425 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1427 call 0x112c2d20 */
  push32(0x112c142cu); f_112c2d20();
  /* 112c142c mov esi, esp */
  ESI = (ESP);
  /* 112c142e push 0x112ea040 */
  push32((uint32_t)(0x112ea040u));
  /* 112c1433 push 0x112ef3e8 */
  push32((uint32_t)(0x112ef3e8u));
  /* 112c1438 call dword ptr [0x112f24d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24d0))), 0x112c143eu);
  /* 112c143e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1441 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1443 call 0x112c2d20 */
  push32(0x112c1448u); f_112c2d20();
  /* 112c1448 mov esi, esp */
  ESI = (ESP);
  /* 112c144a push 0x112ea030 */
  push32((uint32_t)(0x112ea030u));
  /* 112c144f push 0x112ef3e0 */
  push32((uint32_t)(0x112ef3e0u));
  /* 112c1454 call dword ptr [0x112f24d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24d0))), 0x112c145au);
  /* 112c145a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c145d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c145f call 0x112c2d20 */
  push32(0x112c1464u); f_112c2d20();
  /* 112c1464 mov esi, esp */
  ESI = (ESP);
  /* 112c1466 push 0x112ea024 */
  push32((uint32_t)(0x112ea024u));
  /* 112c146b push 0x112ef460 */
  push32((uint32_t)(0x112ef460u));
  /* 112c1470 call dword ptr [0x112f24d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24d0))), 0x112c1476u);
  /* 112c1476 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1479 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c147b call 0x112c2d20 */
  push32(0x112c1480u); f_112c2d20();
  /* 112c1480 mov esi, esp */
  ESI = (ESP);
  /* 112c1482 push 0x112ea01c */
  push32((uint32_t)(0x112ea01cu));
  /* 112c1487 push 0x112ef4c0 */
  push32((uint32_t)(0x112ef4c0u));
  /* 112c148c call dword ptr [0x112f24d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24d4))), 0x112c1492u);
  /* 112c1492 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1495 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1497 call 0x112c2d20 */
  push32(0x112c149cu); f_112c2d20();
  /* 112c149c mov esi, esp */
  ESI = (ESP);
  /* 112c149e push 0x112ef3f8 */
  push32((uint32_t)(0x112ef3f8u));
  /* 112c14a3 call dword ptr [0x112f24cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24cc))), 0x112c14a9u);
  /* 112c14a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c14ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c14ae call 0x112c2d20 */
  push32(0x112c14b3u); f_112c2d20();
  /* 112c14b3 mov esi, esp */
  ESI = (ESP);
  /* 112c14b5 push 0x112ef498 */
  push32((uint32_t)(0x112ef498u));
  /* 112c14ba call dword ptr [0x112f24cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24cc))), 0x112c14c0u);
  /* 112c14c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c14c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c14c5 call 0x112c2d20 */
  push32(0x112c14cau); f_112c2d20();
  /* 112c14ca pop edi */
  EDI = (pop32());
  /* 112c14cb pop esi */
  ESI = (pop32());
  /* 112c14cc pop ebx */
  EBX = (pop32());
  /* 112c14cd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c14d0 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c14d2 call 0x112c2d20 */
  push32(0x112c14d7u); f_112c2d20();
  /* 112c14d7 mov esp, ebp */
  ESP = (EBP);
  /* 112c14d9 pop ebp */
  EBP = (pop32());
  /* 112c14da ret  */
  ESPCHK(0x112c1090u, _esp0);
  ESP += 4; return;
}

/* FUN_100015f0 @ 0x112c15f0 (4543 bytes, 1323 insns) */
void f_112c15f0(void) {
  FTRACE(0x112c15f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c15f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c15f1 mov ebp, esp */
  EBP = (ESP);
  /* 112c15f3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c15f6 push ebx */
  push32((uint32_t)(EBX));
  /* 112c15f7 push esi */
  push32((uint32_t)(ESI));
  /* 112c15f8 push edi */
  push32((uint32_t)(EDI));
  /* 112c15f9 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 112c15fc mov ecx, 0x12 */
  ECX = (0x12u);
  /* 112c1601 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112c1606 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112c1608 mov esi, esp */
  ESI = (ESP);
  /* 112c160a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 112c160c call dword ptr [0x112f2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2438))), 0x112c1612u);
  /* 112c1612 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1615 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1617 call 0x112c2d20 */
  push32(0x112c161cu); f_112c2d20();
  /* 112c161c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c1621 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c1623 je 0x112c1a23 */
  if (C.zf) goto L_112c1a23;
  /* 112c1629 mov esi, esp */
  ESI = (ESP);
  /* 112c162b push 0 */
  push32((uint32_t)(0x0u));
  /* 112c162d call dword ptr [0x112f2434] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2434))), 0x112c1633u);
  /* 112c1633 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1636 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1638 call 0x112c2d20 */
  push32(0x112c163du); f_112c2d20();
  /* 112c163d mov dword ptr [0x112ef4e0], eax */
  w32((uint32_t)(0x112ef4e0), (EAX));
  /* 112c1642 mov eax, dword ptr [0x112ef4e0] */
  EAX = (r32((uint32_t)(0x112ef4e0)));
  /* 112c1647 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c164a imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c1650 mov dword ptr [0x112ef4b8], eax */
  w32((uint32_t)(0x112ef4b8), (EAX));
  /* 112c1655 mov ecx, dword ptr [0x112ef4e0] */
  ECX = (r32((uint32_t)(0x112ef4e0)));
  /* 112c165b imul ecx, ecx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xbb8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c1661 mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 112c1666 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c1668 mov esi, esp */
  ESI = (ESP);
  /* 112c166a push edx */
  push32((uint32_t)(EDX));
  /* 112c166b push 3 */
  push32((uint32_t)(0x3u));
  /* 112c166d push 0 */
  push32((uint32_t)(0x0u));
  /* 112c166f call dword ptr [0x112f2440] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2440))), 0x112c1675u);
  /* 112c1675 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1678 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c167a call 0x112c2d20 */
  push32(0x112c167fu); f_112c2d20();
  /* 112c167f mov eax, dword ptr [0x112ef4e0] */
  EAX = (r32((uint32_t)(0x112ef4e0)));
  /* 112c1684 imul eax, eax, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xbb8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c168a mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 112c168f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c1691 mov esi, esp */
  ESI = (ESP);
  /* 112c1693 push ecx */
  push32((uint32_t)(ECX));
  /* 112c1694 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c1696 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1698 call dword ptr [0x112f2440] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2440))), 0x112c169eu);
  /* 112c169e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c16a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c16a3 call 0x112c2d20 */
  push32(0x112c16a8u); f_112c2d20();
  /* 112c16a8 mov edx, dword ptr [0x112ef4e0] */
  EDX = (r32((uint32_t)(0x112ef4e0)));
  /* 112c16ae imul edx, edx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xbb8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c16b4 mov eax, 0x2710 */
  EAX = (0x2710u);
  /* 112c16b9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c16bb mov esi, esp */
  ESI = (ESP);
  /* 112c16bd push eax */
  push32((uint32_t)(EAX));
  /* 112c16be push 0 */
  push32((uint32_t)(0x0u));
  /* 112c16c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c16c2 call dword ptr [0x112f2440] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2440))), 0x112c16c8u);
  /* 112c16c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c16cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c16cd call 0x112c2d20 */
  push32(0x112c16d2u); f_112c2d20();
  /* 112c16d2 mov ecx, dword ptr [0x112ef4e0] */
  ECX = (r32((uint32_t)(0x112ef4e0)));
  /* 112c16d8 imul ecx, ecx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xbb8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c16de mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 112c16e3 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c16e5 mov esi, esp */
  ESI = (ESP);
  /* 112c16e7 push edx */
  push32((uint32_t)(EDX));
  /* 112c16e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c16ea push 0 */
  push32((uint32_t)(0x0u));
  /* 112c16ec call dword ptr [0x112f2440] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2440))), 0x112c16f2u);
  /* 112c16f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c16f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c16f7 call 0x112c2d20 */
  push32(0x112c16fcu); f_112c2d20();
  /* 112c16fc mov eax, dword ptr [0x112ef4e0] */
  EAX = (r32((uint32_t)(0x112ef4e0)));
  /* 112c1701 imul eax, eax, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xbb8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c1707 mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 112c170c sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c170e mov esi, esp */
  ESI = (ESP);
  /* 112c1710 push ecx */
  push32((uint32_t)(ECX));
  /* 112c1711 push 5 */
  push32((uint32_t)(0x5u));
  /* 112c1713 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1715 call dword ptr [0x112f2440] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2440))), 0x112c171bu);
  /* 112c171b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c171e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1720 call 0x112c2d20 */
  push32(0x112c1725u); f_112c2d20();
  /* 112c1725 mov edx, dword ptr [0x112ef4e0] */
  EDX = (r32((uint32_t)(0x112ef4e0)));
  /* 112c172b imul edx, edx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xbb8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c1731 mov eax, 0x2710 */
  EAX = (0x2710u);
  /* 112c1736 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c1738 mov esi, esp */
  ESI = (ESP);
  /* 112c173a push eax */
  push32((uint32_t)(EAX));
  /* 112c173b push 4 */
  push32((uint32_t)(0x4u));
  /* 112c173d push 0 */
  push32((uint32_t)(0x0u));
  /* 112c173f call dword ptr [0x112f2440] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2440))), 0x112c1745u);
  /* 112c1745 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1748 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c174a call 0x112c2d20 */
  push32(0x112c174fu); f_112c2d20();
  /* 112c174f mov esi, esp */
  ESI = (ESP);
  /* 112c1751 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 112c1756 push 3 */
  push32((uint32_t)(0x3u));
  /* 112c1758 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c175a call dword ptr [0x112f2440] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2440))), 0x112c1760u);
  /* 112c1760 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1763 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1765 call 0x112c2d20 */
  push32(0x112c176au); f_112c2d20();
  /* 112c176a mov esi, esp */
  ESI = (ESP);
  /* 112c176c push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 112c1771 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c1773 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c1775 call dword ptr [0x112f2440] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2440))), 0x112c177bu);
  /* 112c177b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c177e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1780 call 0x112c2d20 */
  push32(0x112c1785u); f_112c2d20();
  /* 112c1785 mov esi, esp */
  ESI = (ESP);
  /* 112c1787 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 112c178c push 0 */
  push32((uint32_t)(0x0u));
  /* 112c178e push 1 */
  push32((uint32_t)(0x1u));
  /* 112c1790 call dword ptr [0x112f2440] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2440))), 0x112c1796u);
  /* 112c1796 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1799 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c179b call 0x112c2d20 */
  push32(0x112c17a0u); f_112c2d20();
  /* 112c17a0 mov esi, esp */
  ESI = (ESP);
  /* 112c17a2 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 112c17a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c17a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c17ab call dword ptr [0x112f2440] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2440))), 0x112c17b1u);
  /* 112c17b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c17b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c17b6 call 0x112c2d20 */
  push32(0x112c17bbu); f_112c2d20();
  /* 112c17bb mov esi, esp */
  ESI = (ESP);
  /* 112c17bd push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 112c17c2 push 5 */
  push32((uint32_t)(0x5u));
  /* 112c17c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c17c6 call dword ptr [0x112f2440] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2440))), 0x112c17ccu);
  /* 112c17cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c17cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c17d1 call 0x112c2d20 */
  push32(0x112c17d6u); f_112c2d20();
  /* 112c17d6 mov esi, esp */
  ESI = (ESP);
  /* 112c17d8 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 112c17dd push 4 */
  push32((uint32_t)(0x4u));
  /* 112c17df push 1 */
  push32((uint32_t)(0x1u));
  /* 112c17e1 call dword ptr [0x112f2440] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2440))), 0x112c17e7u);
  /* 112c17e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c17ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c17ec call 0x112c2d20 */
  push32(0x112c17f1u); f_112c2d20();
  /* 112c17f1 mov esi, esp */
  ESI = (ESP);
  /* 112c17f3 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 112c17f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c17f7 call dword ptr [0x112f2444] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2444))), 0x112c17fdu);
  /* 112c17fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1800 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1802 call 0x112c2d20 */
  push32(0x112c1807u); f_112c2d20();
  /* 112c1807 mov esi, esp */
  ESI = (ESP);
  /* 112c1809 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 112c180b push 1 */
  push32((uint32_t)(0x1u));
  /* 112c180d call dword ptr [0x112f2444] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2444))), 0x112c1813u);
  /* 112c1813 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1816 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1818 call 0x112c2d20 */
  push32(0x112c181du); f_112c2d20();
  /* 112c181d mov esi, esp */
  ESI = (ESP);
  /* 112c181f push 9 */
  push32((uint32_t)(0x9u));
  /* 112c1821 push 5 */
  push32((uint32_t)(0x5u));
  /* 112c1823 call dword ptr [0x112f2444] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2444))), 0x112c1829u);
  /* 112c1829 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c182c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c182e call 0x112c2d20 */
  push32(0x112c1833u); f_112c2d20();
  /* 112c1833 mov esi, esp */
  ESI = (ESP);
  /* 112c1835 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 112c1837 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c1839 call dword ptr [0x112f2444] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2444))), 0x112c183fu);
  /* 112c183f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1842 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1844 call 0x112c2d20 */
  push32(0x112c1849u); f_112c2d20();
  /* 112c1849 mov esi, esp */
  ESI = (ESP);
  /* 112c184b mov ecx, dword ptr [0x112ef4e0] */
  ECX = (r32((uint32_t)(0x112ef4e0)));
  /* 112c1851 push ecx */
  push32((uint32_t)(ECX));
  /* 112c1852 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1854 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1856 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c1858 push 0x112ea1c8 */
  push32((uint32_t)(0x112ea1c8u));
  /* 112c185d push 1 */
  push32((uint32_t)(0x1u));
  /* 112c185f call dword ptr [0x112f243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f243c))), 0x112c1865u);
  /* 112c1865 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1868 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c186a call 0x112c2d20 */
  push32(0x112c186fu); f_112c2d20();
  /* 112c186f mov esi, esp */
  ESI = (ESP);
  /* 112c1871 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 112c1873 call dword ptr [0x112f244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f244c))), 0x112c1879u);
  /* 112c1879 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c187c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c187e call 0x112c2d20 */
  push32(0x112c1883u); f_112c2d20();
  /* 112c1883 mov esi, esp */
  ESI = (ESP);
  /* 112c1885 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 112c1887 call dword ptr [0x112f244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f244c))), 0x112c188du);
  /* 112c188d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1890 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1892 call 0x112c2d20 */
  push32(0x112c1897u); f_112c2d20();
  /* 112c1897 mov esi, esp */
  ESI = (ESP);
  /* 112c1899 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 112c189b call dword ptr [0x112f244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f244c))), 0x112c18a1u);
  /* 112c18a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c18a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c18a6 call 0x112c2d20 */
  push32(0x112c18abu); f_112c2d20();
  /* 112c18ab mov esi, esp */
  ESI = (ESP);
  /* 112c18ad push 0x48 */
  push32((uint32_t)(0x48u));
  /* 112c18af call dword ptr [0x112f244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f244c))), 0x112c18b5u);
  /* 112c18b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c18b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c18ba call 0x112c2d20 */
  push32(0x112c18bfu); f_112c2d20();
  /* 112c18bf mov esi, esp */
  ESI = (ESP);
  /* 112c18c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c18c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c18c5 call dword ptr [0x112f2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2450))), 0x112c18cbu);
  /* 112c18cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c18ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c18d0 call 0x112c2d20 */
  push32(0x112c18d5u); f_112c2d20();
  /* 112c18d5 mov esi, esp */
  ESI = (ESP);
  /* 112c18d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c18d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 112c18db call dword ptr [0x112f2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2450))), 0x112c18e1u);
  /* 112c18e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c18e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c18e6 call 0x112c2d20 */
  push32(0x112c18ebu); f_112c2d20();
  /* 112c18eb mov esi, esp */
  ESI = (ESP);
  /* 112c18ed push 0 */
  push32((uint32_t)(0x0u));
  /* 112c18ef push 0x112ef408 */
  push32((uint32_t)(0x112ef408u));
  /* 112c18f4 call dword ptr [0x112f2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2448))), 0x112c18fau);
  /* 112c18fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c18fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c18ff call 0x112c2d20 */
  push32(0x112c1904u); f_112c2d20();
  /* 112c1904 mov esi, esp */
  ESI = (ESP);
  /* 112c1906 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c1908 call dword ptr [0x112f2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2458))), 0x112c190eu);
  /* 112c190e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1911 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1913 call 0x112c2d20 */
  push32(0x112c1918u); f_112c2d20();
  /* 112c1918 mov esi, esp */
  ESI = (ESP);
  /* 112c191a push 0 */
  push32((uint32_t)(0x0u));
  /* 112c191c push 0x112ef3f0 */
  push32((uint32_t)(0x112ef3f0u));
  /* 112c1921 call dword ptr [0x112f2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2448))), 0x112c1927u);
  /* 112c1927 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c192a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c192c call 0x112c2d20 */
  push32(0x112c1931u); f_112c2d20();
  /* 112c1931 mov esi, esp */
  ESI = (ESP);
  /* 112c1933 push 4 */
  push32((uint32_t)(0x4u));
  /* 112c1935 call dword ptr [0x112f2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2458))), 0x112c193bu);
  /* 112c193b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c193e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1940 call 0x112c2d20 */
  push32(0x112c1945u); f_112c2d20();
  /* 112c1945 mov esi, esp */
  ESI = (ESP);
  /* 112c1947 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1949 push 0x112ef400 */
  push32((uint32_t)(0x112ef400u));
  /* 112c194e call dword ptr [0x112f2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2448))), 0x112c1954u);
  /* 112c1954 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1957 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1959 call 0x112c2d20 */
  push32(0x112c195eu); f_112c2d20();
  /* 112c195e mov esi, esp */
  ESI = (ESP);
  /* 112c1960 push 5 */
  push32((uint32_t)(0x5u));
  /* 112c1962 call dword ptr [0x112f2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2458))), 0x112c1968u);
  /* 112c1968 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c196b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c196d call 0x112c2d20 */
  push32(0x112c1972u); f_112c2d20();
  /* 112c1972 mov esi, esp */
  ESI = (ESP);
  /* 112c1974 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1976 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 112c1978 call dword ptr [0x112f2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2450))), 0x112c197eu);
  /* 112c197e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1981 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1983 call 0x112c2d20 */
  push32(0x112c1988u); f_112c2d20();
  /* 112c1988 mov esi, esp */
  ESI = (ESP);
  /* 112c198a push 0 */
  push32((uint32_t)(0x0u));
  /* 112c198c push 0x112ef4b0 */
  push32((uint32_t)(0x112ef4b0u));
  /* 112c1991 call dword ptr [0x112f2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2448))), 0x112c1997u);
  /* 112c1997 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c199a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c199c call 0x112c2d20 */
  push32(0x112c19a1u); f_112c2d20();
  /* 112c19a1 mov esi, esp */
  ESI = (ESP);
  /* 112c19a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c19a5 push 0x112ef458 */
  push32((uint32_t)(0x112ef458u));
  /* 112c19aa push 4 */
  push32((uint32_t)(0x4u));
  /* 112c19ac call dword ptr [0x112f245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f245c))), 0x112c19b2u);
  /* 112c19b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c19b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c19b7 call 0x112c2d20 */
  push32(0x112c19bcu); f_112c2d20();
  /* 112c19bc mov esi, esp */
  ESI = (ESP);
  /* 112c19be push 0x112ea1c0 */
  push32((uint32_t)(0x112ea1c0u));
  /* 112c19c3 call dword ptr [0x112f2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2454))), 0x112c19c9u);
  /* 112c19c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c19cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c19ce call 0x112c2d20 */
  push32(0x112c19d3u); f_112c2d20();
  /* 112c19d3 mov esi, esp */
  ESI = (ESP);
  /* 112c19d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c19d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c19d9 push 0x112ef438 */
  push32((uint32_t)(0x112ef438u));
  /* 112c19de call dword ptr [0x112f2464] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2464))), 0x112c19e4u);
  /* 112c19e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c19e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c19e9 call 0x112c2d20 */
  push32(0x112c19eeu); f_112c2d20();
  /* 112c19ee mov esi, esp */
  ESI = (ESP);
  /* 112c19f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c19f2 push 0x112ef4a0 */
  push32((uint32_t)(0x112ef4a0u));
  /* 112c19f7 call dword ptr [0x112f2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2448))), 0x112c19fdu);
  /* 112c19fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1a00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1a02 call 0x112c2d20 */
  push32(0x112c1a07u); f_112c2d20();
  /* 112c1a07 mov esi, esp */
  ESI = (ESP);
  /* 112c1a09 push 0x112ef420 */
  push32((uint32_t)(0x112ef420u));
  /* 112c1a0e push 0x112ef4a8 */
  push32((uint32_t)(0x112ef4a8u));
  /* 112c1a13 call dword ptr [0x112f2468] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2468))), 0x112c1a19u);
  /* 112c1a19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1a1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1a1e call 0x112c2d20 */
  push32(0x112c1a23u); f_112c2d20();
L_112c1a23:;
  /* 112c1a23 mov esi, esp */
  ESI = (ESP);
  /* 112c1a25 push 5 */
  push32((uint32_t)(0x5u));
  /* 112c1a27 push 0x112ef420 */
  push32((uint32_t)(0x112ef420u));
  /* 112c1a2c call dword ptr [0x112f2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2460))), 0x112c1a32u);
  /* 112c1a32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1a35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1a37 call 0x112c2d20 */
  push32(0x112c1a3cu); f_112c2d20();
  /* 112c1a3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c1a3e jle 0x112c1a71 */
  if ((C.zf||C.sf!=C.of)) goto L_112c1a71;
  /* 112c1a40 mov esi, esp */
  ESI = (ESP);
  /* 112c1a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1a44 push 5 */
  push32((uint32_t)(0x5u));
  /* 112c1a46 push 0x112ef420 */
  push32((uint32_t)(0x112ef420u));
  /* 112c1a4b call dword ptr [0x112f2470] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2470))), 0x112c1a51u);
  /* 112c1a51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1a54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1a56 call 0x112c2d20 */
  push32(0x112c1a5bu); f_112c2d20();
  /* 112c1a5b mov esi, esp */
  ESI = (ESP);
  /* 112c1a5d push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1a5f push 5 */
  push32((uint32_t)(0x5u));
  /* 112c1a61 call dword ptr [0x112f2474] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2474))), 0x112c1a67u);
  /* 112c1a67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1a6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1a6c call 0x112c2d20 */
  push32(0x112c1a71u); f_112c2d20();
L_112c1a71:;
  /* 112c1a71 mov esi, esp */
  ESI = (ESP);
  /* 112c1a73 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c1a75 call dword ptr [0x112f2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2438))), 0x112c1a7bu);
  /* 112c1a7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1a7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1a80 call 0x112c2d20 */
  push32(0x112c1a85u); f_112c2d20();
  /* 112c1a85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c1a8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c1a8c je 0x112c1db3 */
  if (C.zf) goto L_112c1db3;
  /* 112c1a92 mov esi, esp */
  ESI = (ESP);
  /* 112c1a94 push 0x112ef4a0 */
  push32((uint32_t)(0x112ef4a0u));
  /* 112c1a99 push 0x112ef418 */
  push32((uint32_t)(0x112ef418u));
  /* 112c1a9e call dword ptr [0x112f246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f246c))), 0x112c1aa4u);
  /* 112c1aa4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1aa7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1aa9 call 0x112c2d20 */
  push32(0x112c1aaeu); f_112c2d20();
  /* 112c1aae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c1ab0 jle 0x112c1db3 */
  if ((C.zf||C.sf!=C.of)) goto L_112c1db3;
  /* 112c1ab6 mov esi, esp */
  ESI = (ESP);
  /* 112c1ab8 push 0x112ea1a8 */
  push32((uint32_t)(0x112ea1a8u));
  /* 112c1abd push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1abf push 0x112ea1a0 */
  push32((uint32_t)(0x112ea1a0u));
  /* 112c1ac4 push 7 */
  push32((uint32_t)(0x7u));
  /* 112c1ac6 call dword ptr [0x112f247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f247c))), 0x112c1accu);
  /* 112c1acc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1acf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1ad1 call 0x112c2d20 */
  push32(0x112c1ad6u); f_112c2d20();
  /* 112c1ad6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c1ad9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1add je 0x112c1cac */
  if (C.zf) goto L_112c1cac;
  /* 112c1ae3 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1ae7 je 0x112c1af8 */
  if (C.zf) goto L_112c1af8;
  /* 112c1ae9 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1aed je 0x112c1d9d */
  if (C.zf) goto L_112c1d9d;
  /* 112c1af3 jmp 0x112c1db3 */
  goto L_112c1db3;
L_112c1af8:;
  /* 112c1af8 mov esi, esp */
  ESI = (ESP);
  /* 112c1afa push 3 */
  push32((uint32_t)(0x3u));
  /* 112c1afc push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1afe call dword ptr [0x112f2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2480))), 0x112c1b04u);
  /* 112c1b04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1b07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1b09 call 0x112c2d20 */
  push32(0x112c1b0eu); f_112c2d20();
  /* 112c1b0e cmp eax, 0x44c */
  { uint32_t _a=(EAX),_b=(0x44cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1b13 jle 0x112c1c90 */
  if ((C.zf||C.sf!=C.of)) goto L_112c1c90;
  /* 112c1b19 mov esi, esp */
  ESI = (ESP);
  /* 112c1b1b push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 112c1b20 push 3 */
  push32((uint32_t)(0x3u));
  /* 112c1b22 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1b24 call dword ptr [0x112f2478] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2478))), 0x112c1b2au);
  /* 112c1b2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1b2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1b2f call 0x112c2d20 */
  push32(0x112c1b34u); f_112c2d20();
  /* 112c1b34 mov esi, esp */
  ESI = (ESP);
  /* 112c1b36 push 0x94 */
  push32((uint32_t)(0x94u));
  /* 112c1b3b push 0x112ef418 */
  push32((uint32_t)(0x112ef418u));
  /* 112c1b40 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1b42 push 0x112ef460 */
  push32((uint32_t)(0x112ef460u));
  /* 112c1b47 push 0x112ef4c0 */
  push32((uint32_t)(0x112ef4c0u));
  /* 112c1b4c push 0x112ef3f8 */
  push32((uint32_t)(0x112ef3f8u));
  /* 112c1b51 call dword ptr [0x112f2488] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2488))), 0x112c1b57u);
  /* 112c1b57 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1b5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1b5c call 0x112c2d20 */
  push32(0x112c1b61u); f_112c2d20();
  /* 112c1b61 mov esi, esp */
  ESI = (ESP);
  /* 112c1b63 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1b65 push 0x112ef498 */
  push32((uint32_t)(0x112ef498u));
  /* 112c1b6a push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1b6c call dword ptr [0x112f248c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f248c))), 0x112c1b72u);
  /* 112c1b72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1b75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1b77 call 0x112c2d20 */
  push32(0x112c1b7cu); f_112c2d20();
  /* 112c1b7c mov esi, esp */
  ESI = (ESP);
  /* 112c1b7e push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1b80 push 0x112ef3f8 */
  push32((uint32_t)(0x112ef3f8u));
  /* 112c1b85 call dword ptr [0x112f2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2448))), 0x112c1b8bu);
  /* 112c1b8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1b8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1b90 call 0x112c2d20 */
  push32(0x112c1b95u); f_112c2d20();
  /* 112c1b95 mov esi, esp */
  ESI = (ESP);
  /* 112c1b97 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1b99 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 112c1b9e push 0x112ef468 */
  push32((uint32_t)(0x112ef468u));
  /* 112c1ba3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1ba5 call dword ptr [0x112f2484] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2484))), 0x112c1babu);
  /* 112c1bab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1bae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1bb0 call 0x112c2d20 */
  push32(0x112c1bb5u); f_112c2d20();
  /* 112c1bb5 mov esi, esp */
  ESI = (ESP);
  /* 112c1bb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c1bb9 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 112c1bbe push 0x112ef470 */
  push32((uint32_t)(0x112ef470u));
  /* 112c1bc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1bc5 call dword ptr [0x112f2484] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2484))), 0x112c1bcbu);
  /* 112c1bcb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1bce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1bd0 call 0x112c2d20 */
  push32(0x112c1bd5u); f_112c2d20();
  /* 112c1bd5 mov esi, esp */
  ESI = (ESP);
  /* 112c1bd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c1bd9 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 112c1bde push 0x112ef478 */
  push32((uint32_t)(0x112ef478u));
  /* 112c1be3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1be5 call dword ptr [0x112f2484] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2484))), 0x112c1bebu);
  /* 112c1beb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1bee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1bf0 call 0x112c2d20 */
  push32(0x112c1bf5u); f_112c2d20();
  /* 112c1bf5 mov esi, esp */
  ESI = (ESP);
  /* 112c1bf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c1bf9 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 112c1bfe push 0x112ef480 */
  push32((uint32_t)(0x112ef480u));
  /* 112c1c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1c05 call dword ptr [0x112f2484] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2484))), 0x112c1c0bu);
  /* 112c1c0b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1c0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1c10 call 0x112c2d20 */
  push32(0x112c1c15u); f_112c2d20();
  /* 112c1c15 mov esi, esp */
  ESI = (ESP);
  /* 112c1c17 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c1c19 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 112c1c1e push 0x112ef488 */
  push32((uint32_t)(0x112ef488u));
  /* 112c1c23 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1c25 call dword ptr [0x112f2484] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2484))), 0x112c1c2bu);
  /* 112c1c2b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1c2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1c30 call 0x112c2d20 */
  push32(0x112c1c35u); f_112c2d20();
  /* 112c1c35 mov esi, esp */
  ESI = (ESP);
  /* 112c1c37 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c1c39 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 112c1c3e push 0x112ef490 */
  push32((uint32_t)(0x112ef490u));
  /* 112c1c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1c45 call dword ptr [0x112f2484] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2484))), 0x112c1c4bu);
  /* 112c1c4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1c4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1c50 call 0x112c2d20 */
  push32(0x112c1c55u); f_112c2d20();
  /* 112c1c55 mov esi, esp */
  ESI = (ESP);
  /* 112c1c57 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c1c59 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 112c1c5e push 0x112ef430 */
  push32((uint32_t)(0x112ef430u));
  /* 112c1c63 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1c65 call dword ptr [0x112f2484] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2484))), 0x112c1c6bu);
  /* 112c1c6b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1c6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1c70 call 0x112c2d20 */
  push32(0x112c1c75u); f_112c2d20();
  /* 112c1c75 mov esi, esp */
  ESI = (ESP);
  /* 112c1c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1c79 push 0x112ef498 */
  push32((uint32_t)(0x112ef498u));
  /* 112c1c7e call dword ptr [0x112f2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2448))), 0x112c1c84u);
  /* 112c1c84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1c87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1c89 call 0x112c2d20 */
  push32(0x112c1c8eu); f_112c2d20();
  /* 112c1c8e jmp 0x112c1ca7 */
  goto L_112c1ca7;
L_112c1c90:;
  /* 112c1c90 mov esi, esp */
  ESI = (ESP);
  /* 112c1c92 push 0x112ea198 */
  push32((uint32_t)(0x112ea198u));
  /* 112c1c97 call dword ptr [0x112f2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2454))), 0x112c1c9du);
  /* 112c1c9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1ca0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1ca2 call 0x112c2d20 */
  push32(0x112c1ca7u); f_112c2d20();
L_112c1ca7:;
  /* 112c1ca7 jmp 0x112c1db3 */
  goto L_112c1db3;
L_112c1cac:;
  /* 112c1cac mov esi, esp */
  ESI = (ESP);
  /* 112c1cae push 3 */
  push32((uint32_t)(0x3u));
  /* 112c1cb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1cb2 call dword ptr [0x112f2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2480))), 0x112c1cb8u);
  /* 112c1cb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1cbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1cbd call 0x112c2d20 */
  push32(0x112c1cc2u); f_112c2d20();
  /* 112c1cc2 cmp eax, 0x44c */
  { uint32_t _a=(EAX),_b=(0x44cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1cc7 jle 0x112c1d84 */
  if ((C.zf||C.sf!=C.of)) goto L_112c1d84;
  /* 112c1ccd mov esi, esp */
  ESI = (ESP);
  /* 112c1ccf push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 112c1cd4 push 3 */
  push32((uint32_t)(0x3u));
  /* 112c1cd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1cd8 call dword ptr [0x112f2478] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2478))), 0x112c1cdeu);
  /* 112c1cde add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1ce1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1ce3 call 0x112c2d20 */
  push32(0x112c1ce8u); f_112c2d20();
  /* 112c1ce8 mov esi, esp */
  ESI = (ESP);
  /* 112c1cea push 0x94 */
  push32((uint32_t)(0x94u));
  /* 112c1cef push 0x112ef418 */
  push32((uint32_t)(0x112ef418u));
  /* 112c1cf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1cf6 push 0x112ef460 */
  push32((uint32_t)(0x112ef460u));
  /* 112c1cfb push 0x112ef4c0 */
  push32((uint32_t)(0x112ef4c0u));
  /* 112c1d00 push 0x112ef3f8 */
  push32((uint32_t)(0x112ef3f8u));
  /* 112c1d05 call dword ptr [0x112f2488] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2488))), 0x112c1d0bu);
  /* 112c1d0b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1d0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1d10 call 0x112c2d20 */
  push32(0x112c1d15u); f_112c2d20();
  /* 112c1d15 mov esi, esp */
  ESI = (ESP);
  /* 112c1d17 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1d19 push 0x112ef498 */
  push32((uint32_t)(0x112ef498u));
  /* 112c1d1e push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1d20 call dword ptr [0x112f248c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f248c))), 0x112c1d26u);
  /* 112c1d26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1d29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1d2b call 0x112c2d20 */
  push32(0x112c1d30u); f_112c2d20();
  /* 112c1d30 mov esi, esp */
  ESI = (ESP);
  /* 112c1d32 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1d34 push 0x112ef3f8 */
  push32((uint32_t)(0x112ef3f8u));
  /* 112c1d39 call dword ptr [0x112f2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2448))), 0x112c1d3fu);
  /* 112c1d3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1d42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1d44 call 0x112c2d20 */
  push32(0x112c1d49u); f_112c2d20();
  /* 112c1d49 mov esi, esp */
  ESI = (ESP);
  /* 112c1d4b push 2 */
  push32((uint32_t)(0x2u));
  /* 112c1d4d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 112c1d52 push 0x112ef4c8 */
  push32((uint32_t)(0x112ef4c8u));
  /* 112c1d57 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1d59 call dword ptr [0x112f2484] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2484))), 0x112c1d5fu);
  /* 112c1d5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1d62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1d64 call 0x112c2d20 */
  push32(0x112c1d69u); f_112c2d20();
  /* 112c1d69 mov esi, esp */
  ESI = (ESP);
  /* 112c1d6b push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1d6d push 0x112ef498 */
  push32((uint32_t)(0x112ef498u));
  /* 112c1d72 call dword ptr [0x112f2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2448))), 0x112c1d78u);
  /* 112c1d78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1d7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1d7d call 0x112c2d20 */
  push32(0x112c1d82u); f_112c2d20();
  /* 112c1d82 jmp 0x112c1d9b */
  goto L_112c1d9b;
L_112c1d84:;
  /* 112c1d84 mov esi, esp */
  ESI = (ESP);
  /* 112c1d86 push 0x112ea198 */
  push32((uint32_t)(0x112ea198u));
  /* 112c1d8b call dword ptr [0x112f2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2454))), 0x112c1d91u);
  /* 112c1d91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1d94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1d96 call 0x112c2d20 */
  push32(0x112c1d9bu); f_112c2d20();
L_112c1d9b:;
  /* 112c1d9b jmp 0x112c1db3 */
  goto L_112c1db3;
L_112c1d9d:;
  /* 112c1d9d mov esi, esp */
  ESI = (ESP);
  /* 112c1d9f push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1da1 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c1da3 call dword ptr [0x112f2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2450))), 0x112c1da9u);
  /* 112c1da9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1dac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1dae call 0x112c2d20 */
  push32(0x112c1db3u); f_112c2d20();
L_112c1db3:;
  /* 112c1db3 mov esi, esp */
  ESI = (ESP);
  /* 112c1db5 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c1db7 call dword ptr [0x112f2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2438))), 0x112c1dbdu);
  /* 112c1dbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1dc0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1dc2 call 0x112c2d20 */
  push32(0x112c1dc7u); f_112c2d20();
  /* 112c1dc7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c1dcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c1dce jne 0x112c1e06 */
  if (!C.zf) goto L_112c1e06;
  /* 112c1dd0 mov esi, esp */
  ESI = (ESP);
  /* 112c1dd2 push 0x112ef4a0 */
  push32((uint32_t)(0x112ef4a0u));
  /* 112c1dd7 push 0x112ef418 */
  push32((uint32_t)(0x112ef418u));
  /* 112c1ddc call dword ptr [0x112f246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f246c))), 0x112c1de2u);
  /* 112c1de2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1de5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1de7 call 0x112c2d20 */
  push32(0x112c1decu); f_112c2d20();
  /* 112c1dec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c1dee jne 0x112c1e06 */
  if (!C.zf) goto L_112c1e06;
  /* 112c1df0 mov esi, esp */
  ESI = (ESP);
  /* 112c1df2 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c1df4 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c1df6 call dword ptr [0x112f2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2450))), 0x112c1dfcu);
  /* 112c1dfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1dff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1e01 call 0x112c2d20 */
  push32(0x112c1e06u); f_112c2d20();
L_112c1e06:;
  /* 112c1e06 mov esi, esp */
  ESI = (ESP);
  /* 112c1e08 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1e0a push 0x112ef438 */
  push32((uint32_t)(0x112ef438u));
  /* 112c1e0f call dword ptr [0x112f2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2460))), 0x112c1e15u);
  /* 112c1e15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1e18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1e1a call 0x112c2d20 */
  push32(0x112c1e1fu); f_112c2d20();
  /* 112c1e1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c1e21 jle 0x112c1f13 */
  if ((C.zf||C.sf!=C.of)) goto L_112c1f13;
  /* 112c1e27 mov esi, esp */
  ESI = (ESP);
  /* 112c1e29 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1e2b push 0x112ef410 */
  push32((uint32_t)(0x112ef410u));
  /* 112c1e30 call dword ptr [0x112f2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2448))), 0x112c1e36u);
  /* 112c1e36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1e39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1e3b call 0x112c2d20 */
  push32(0x112c1e40u); f_112c2d20();
  /* 112c1e40 mov esi, esp */
  ESI = (ESP);
  /* 112c1e42 push 6 */
  push32((uint32_t)(0x6u));
  /* 112c1e44 call dword ptr [0x112f2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2458))), 0x112c1e4au);
  /* 112c1e4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1e4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1e4f call 0x112c2d20 */
  push32(0x112c1e54u); f_112c2d20();
  /* 112c1e54 mov esi, esp */
  ESI = (ESP);
  /* 112c1e56 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1e58 push 0x112ef498 */
  push32((uint32_t)(0x112ef498u));
  /* 112c1e5d push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1e5f call dword ptr [0x112f248c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f248c))), 0x112c1e65u);
  /* 112c1e65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1e68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1e6a call 0x112c2d20 */
  push32(0x112c1e6fu); f_112c2d20();
  /* 112c1e6f mov esi, esp */
  ESI = (ESP);
  /* 112c1e71 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1e73 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1e75 push 0x112ef460 */
  push32((uint32_t)(0x112ef460u));
  /* 112c1e7a push 0x112ef438 */
  push32((uint32_t)(0x112ef438u));
  /* 112c1e7f call dword ptr [0x112f2494] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2494))), 0x112c1e85u);
  /* 112c1e85 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1e88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1e8a call 0x112c2d20 */
  push32(0x112c1e8fu); f_112c2d20();
  /* 112c1e8f mov esi, esp */
  ESI = (ESP);
  /* 112c1e91 push 6 */
  push32((uint32_t)(0x6u));
  /* 112c1e93 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1e95 call dword ptr [0x112f2474] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2474))), 0x112c1e9bu);
  /* 112c1e9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1e9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1ea0 call 0x112c2d20 */
  push32(0x112c1ea5u); f_112c2d20();
  /* 112c1ea5 mov esi, esp */
  ESI = (ESP);
  /* 112c1ea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1ea9 push 0x112ef498 */
  push32((uint32_t)(0x112ef498u));
  /* 112c1eae call dword ptr [0x112f2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2448))), 0x112c1eb4u);
  /* 112c1eb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1eb7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1eb9 call 0x112c2d20 */
  push32(0x112c1ebeu); f_112c2d20();
  /* 112c1ebe mov esi, esp */
  ESI = (ESP);
  /* 112c1ec0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1ec2 push 6 */
  push32((uint32_t)(0x6u));
  /* 112c1ec4 push 0x112ef438 */
  push32((uint32_t)(0x112ef438u));
  /* 112c1ec9 call dword ptr [0x112f2470] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2470))), 0x112c1ecfu);
  /* 112c1ecf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1ed2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1ed4 call 0x112c2d20 */
  push32(0x112c1ed9u); f_112c2d20();
  /* 112c1ed9 mov esi, esp */
  ESI = (ESP);
  /* 112c1edb push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1edd push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1edf push 0x112ef440 */
  push32((uint32_t)(0x112ef440u));
  /* 112c1ee4 push 6 */
  push32((uint32_t)(0x6u));
  /* 112c1ee6 call dword ptr [0x112f2484] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2484))), 0x112c1eecu);
  /* 112c1eec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1eef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1ef1 call 0x112c2d20 */
  push32(0x112c1ef6u); f_112c2d20();
  /* 112c1ef6 mov esi, esp */
  ESI = (ESP);
  /* 112c1ef8 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1efa push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1efc push 0x112ef440 */
  push32((uint32_t)(0x112ef440u));
  /* 112c1f01 push 6 */
  push32((uint32_t)(0x6u));
  /* 112c1f03 call dword ptr [0x112f2484] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2484))), 0x112c1f09u);
  /* 112c1f09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1f0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1f0e call 0x112c2d20 */
  push32(0x112c1f13u); f_112c2d20();
L_112c1f13:;
  /* 112c1f13 mov esi, esp */
  ESI = (ESP);
  /* 112c1f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1f17 push 0x112ef438 */
  push32((uint32_t)(0x112ef438u));
  /* 112c1f1c call dword ptr [0x112f2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2460))), 0x112c1f22u);
  /* 112c1f22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1f25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1f27 call 0x112c2d20 */
  push32(0x112c1f2cu); f_112c2d20();
  /* 112c1f2c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1f2f jge 0x112c1f7c */
  if ((C.sf==C.of)) goto L_112c1f7c;
  /* 112c1f31 mov esi, esp */
  ESI = (ESP);
  /* 112c1f33 push 6 */
  push32((uint32_t)(0x6u));
  /* 112c1f35 push 0x112ef438 */
  push32((uint32_t)(0x112ef438u));
  /* 112c1f3a call dword ptr [0x112f2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2460))), 0x112c1f40u);
  /* 112c1f40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1f43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1f45 call 0x112c2d20 */
  push32(0x112c1f4au); f_112c2d20();
  /* 112c1f4a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1f4d jge 0x112c1f7c */
  if ((C.sf==C.of)) goto L_112c1f7c;
  /* 112c1f4f mov esi, esp */
  ESI = (ESP);
  /* 112c1f51 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1f53 push 0x112ef410 */
  push32((uint32_t)(0x112ef410u));
  /* 112c1f58 call dword ptr [0x112f2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2448))), 0x112c1f5eu);
  /* 112c1f5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1f61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1f63 call 0x112c2d20 */
  push32(0x112c1f68u); f_112c2d20();
  /* 112c1f68 mov esi, esp */
  ESI = (ESP);
  /* 112c1f6a push 6 */
  push32((uint32_t)(0x6u));
  /* 112c1f6c call dword ptr [0x112f2498] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2498))), 0x112c1f72u);
  /* 112c1f72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1f75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1f77 call 0x112c2d20 */
  push32(0x112c1f7cu); f_112c2d20();
L_112c1f7c:;
  /* 112c1f7c mov esi, esp */
  ESI = (ESP);
  /* 112c1f7e push 6 */
  push32((uint32_t)(0x6u));
  /* 112c1f80 push 0x112ef440 */
  push32((uint32_t)(0x112ef440u));
  /* 112c1f85 call dword ptr [0x112f2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2460))), 0x112c1f8bu);
  /* 112c1f8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1f8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1f90 call 0x112c2d20 */
  push32(0x112c1f95u); f_112c2d20();
  /* 112c1f95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c1f97 jle 0x112c1ffe */
  if ((C.zf||C.sf!=C.of)) goto L_112c1ffe;
  /* 112c1f99 mov esi, esp */
  ESI = (ESP);
  /* 112c1f9b push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1f9d push 6 */
  push32((uint32_t)(0x6u));
  /* 112c1f9f push 0x112ef440 */
  push32((uint32_t)(0x112ef440u));
  /* 112c1fa4 call dword ptr [0x112f2470] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2470))), 0x112c1faau);
  /* 112c1faa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1fad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1faf call 0x112c2d20 */
  push32(0x112c1fb4u); f_112c2d20();
  /* 112c1fb4 mov esi, esp */
  ESI = (ESP);
  /* 112c1fb6 push 6 */
  push32((uint32_t)(0x6u));
  /* 112c1fb8 push 0x112ef440 */
  push32((uint32_t)(0x112ef440u));
  /* 112c1fbd call dword ptr [0x112f2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2460))), 0x112c1fc3u);
  /* 112c1fc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1fc6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1fc8 call 0x112c2d20 */
  push32(0x112c1fcdu); f_112c2d20();
  /* 112c1fcd imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c1fd3 mov esi, esp */
  ESI = (ESP);
  /* 112c1fd5 push eax */
  push32((uint32_t)(EAX));
  /* 112c1fd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c1fd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c1fda call dword ptr [0x112f2478] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2478))), 0x112c1fe0u);
  /* 112c1fe0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1fe3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1fe5 call 0x112c2d20 */
  push32(0x112c1feau); f_112c2d20();
  /* 112c1fea mov esi, esp */
  ESI = (ESP);
  /* 112c1fec push 6 */
  push32((uint32_t)(0x6u));
  /* 112c1fee call dword ptr [0x112f2490] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2490))), 0x112c1ff4u);
  /* 112c1ff4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c1ff7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c1ff9 call 0x112c2d20 */
  push32(0x112c1ffeu); f_112c2d20();
L_112c1ffe:;
  /* 112c1ffe mov esi, esp */
  ESI = (ESP);
  /* 112c2000 push 0xb */
  push32((uint32_t)(0xbu));
  /* 112c2002 call dword ptr [0x112f2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2438))), 0x112c2008u);
  /* 112c2008 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c200b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c200d call 0x112c2d20 */
  push32(0x112c2012u); f_112c2d20();
  /* 112c2012 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c2017 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c2019 jne 0x112c20d8 */
  if (!C.zf) goto L_112c20d8;
  /* 112c201f mov esi, esp */
  ESI = (ESP);
  /* 112c2021 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c2023 push 0x112ef430 */
  push32((uint32_t)(0x112ef430u));
  /* 112c2028 call dword ptr [0x112f2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2460))), 0x112c202eu);
  /* 112c202e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2031 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2033 call 0x112c2d20 */
  push32(0x112c2038u); f_112c2d20();
  /* 112c2038 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c203a jle 0x112c20d8 */
  if ((C.zf||C.sf!=C.of)) goto L_112c20d8;
  /* 112c2040 mov esi, esp */
  ESI = (ESP);
  /* 112c2042 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c2044 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c2046 push 0x112ef460 */
  push32((uint32_t)(0x112ef460u));
  /* 112c204b push 0x112ef430 */
  push32((uint32_t)(0x112ef430u));
  /* 112c2050 call dword ptr [0x112f2494] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2494))), 0x112c2056u);
  /* 112c2056 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2059 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c205b call 0x112c2d20 */
  push32(0x112c2060u); f_112c2d20();
  /* 112c2060 mov esi, esp */
  ESI = (ESP);
  /* 112c2062 push 5 */
  push32((uint32_t)(0x5u));
  /* 112c2064 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c2066 call dword ptr [0x112f2474] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2474))), 0x112c206cu);
  /* 112c206c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c206f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2071 call 0x112c2d20 */
  push32(0x112c2076u); f_112c2d20();
  /* 112c2076 mov esi, esp */
  ESI = (ESP);
  /* 112c2078 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c207a push 5 */
  push32((uint32_t)(0x5u));
  /* 112c207c push 0x112ef430 */
  push32((uint32_t)(0x112ef430u));
  /* 112c2081 call dword ptr [0x112f2470] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2470))), 0x112c2087u);
  /* 112c2087 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c208a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c208c call 0x112c2d20 */
  push32(0x112c2091u); f_112c2d20();
  /* 112c2091 mov esi, esp */
  ESI = (ESP);
  /* 112c2093 push 5 */
  push32((uint32_t)(0x5u));
  /* 112c2095 push 0x112ef430 */
  push32((uint32_t)(0x112ef430u));
  /* 112c209a call dword ptr [0x112f2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2460))), 0x112c20a0u);
  /* 112c20a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c20a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c20a5 call 0x112c2d20 */
  push32(0x112c20aau); f_112c2d20();
  /* 112c20aa imul eax, eax, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x64u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c20ad mov esi, esp */
  ESI = (ESP);
  /* 112c20af push eax */
  push32((uint32_t)(EAX));
  /* 112c20b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c20b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c20b4 call dword ptr [0x112f2478] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2478))), 0x112c20bau);
  /* 112c20ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c20bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c20bf call 0x112c2d20 */
  push32(0x112c20c4u); f_112c2d20();
  /* 112c20c4 mov esi, esp */
  ESI = (ESP);
  /* 112c20c6 push 5 */
  push32((uint32_t)(0x5u));
  /* 112c20c8 call dword ptr [0x112f2490] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2490))), 0x112c20ceu);
  /* 112c20ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c20d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c20d3 call 0x112c2d20 */
  push32(0x112c20d8u); f_112c2d20();
L_112c20d8:;
  /* 112c20d8 mov esi, esp */
  ESI = (ESP);
  /* 112c20da push 0x16 */
  push32((uint32_t)(0x16u));
  /* 112c20dc call dword ptr [0x112f2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2438))), 0x112c20e2u);
  /* 112c20e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c20e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c20e7 call 0x112c2d20 */
  push32(0x112c20ecu); f_112c2d20();
  /* 112c20ec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c20f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c20f3 je 0x112c218c */
  if (C.zf) goto L_112c218c;
  /* 112c20f9 mov esi, esp */
  ESI = (ESP);
  /* 112c20fb push 4 */
  push32((uint32_t)(0x4u));
  /* 112c20fd push 0x112ef460 */
  push32((uint32_t)(0x112ef460u));
  /* 112c2102 push 0x112ef458 */
  push32((uint32_t)(0x112ef458u));
  /* 112c2107 call dword ptr [0x112f24a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24a0))), 0x112c210du);
  /* 112c210d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2110 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2112 call 0x112c2d20 */
  push32(0x112c2117u); f_112c2d20();
  /* 112c2117 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c2119 jle 0x112c218c */
  if ((C.zf||C.sf!=C.of)) goto L_112c218c;
  /* 112c211b mov esi, esp */
  ESI = (ESP);
  /* 112c211d push 4 */
  push32((uint32_t)(0x4u));
  /* 112c211f push 0x112ef460 */
  push32((uint32_t)(0x112ef460u));
  /* 112c2124 push 0x112ef458 */
  push32((uint32_t)(0x112ef458u));
  /* 112c2129 call dword ptr [0x112f24a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24a0))), 0x112c212fu);
  /* 112c212f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2132 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2134 call 0x112c2d20 */
  push32(0x112c2139u); f_112c2d20();
  /* 112c2139 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c213f mov esi, esp */
  ESI = (ESP);
  /* 112c2141 push eax */
  push32((uint32_t)(EAX));
  /* 112c2142 push 5 */
  push32((uint32_t)(0x5u));
  /* 112c2144 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c2146 call dword ptr [0x112f2478] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2478))), 0x112c214cu);
  /* 112c214c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c214f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2151 call 0x112c2d20 */
  push32(0x112c2156u); f_112c2d20();
  /* 112c2156 mov esi, esp */
  ESI = (ESP);
  /* 112c2158 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c215a push 4 */
  push32((uint32_t)(0x4u));
  /* 112c215c push 0x112ef460 */
  push32((uint32_t)(0x112ef460u));
  /* 112c2161 push 0x112ef458 */
  push32((uint32_t)(0x112ef458u));
  /* 112c2166 call dword ptr [0x112f2494] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2494))), 0x112c216cu);
  /* 112c216c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c216f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2171 call 0x112c2d20 */
  push32(0x112c2176u); f_112c2d20();
  /* 112c2176 mov esi, esp */
  ESI = (ESP);
  /* 112c2178 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c217a push 4 */
  push32((uint32_t)(0x4u));
  /* 112c217c call dword ptr [0x112f2474] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2474))), 0x112c2182u);
  /* 112c2182 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2185 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2187 call 0x112c2d20 */
  push32(0x112c218cu); f_112c2d20();
L_112c218c:;
  /* 112c218c mov esi, esp */
  ESI = (ESP);
  /* 112c218e push 2 */
  push32((uint32_t)(0x2u));
  /* 112c2190 push 0x112ef460 */
  push32((uint32_t)(0x112ef460u));
  /* 112c2195 push 0x112ef450 */
  push32((uint32_t)(0x112ef450u));
  /* 112c219a call dword ptr [0x112f24a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24a0))), 0x112c21a0u);
  /* 112c21a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c21a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c21a5 call 0x112c2d20 */
  push32(0x112c21aau); f_112c2d20();
  /* 112c21aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c21ac jle 0x112c21e4 */
  if ((C.zf||C.sf!=C.of)) goto L_112c21e4;
  /* 112c21ae mov esi, esp */
  ESI = (ESP);
  /* 112c21b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c21b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c21b4 push 0x112ef460 */
  push32((uint32_t)(0x112ef460u));
  /* 112c21b9 push 0x112ef450 */
  push32((uint32_t)(0x112ef450u));
  /* 112c21be call dword ptr [0x112f2494] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2494))), 0x112c21c4u);
  /* 112c21c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c21c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c21c9 call 0x112c2d20 */
  push32(0x112c21ceu); f_112c2d20();
  /* 112c21ce mov esi, esp */
  ESI = (ESP);
  /* 112c21d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 112c21d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c21d4 call dword ptr [0x112f2474] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2474))), 0x112c21dau);
  /* 112c21da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c21dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c21df call 0x112c2d20 */
  push32(0x112c21e4u); f_112c2d20();
L_112c21e4:;
  /* 112c21e4 mov esi, esp */
  ESI = (ESP);
  /* 112c21e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c21e8 push 0x112ef4d0 */
  push32((uint32_t)(0x112ef4d0u));
  /* 112c21ed call dword ptr [0x112f2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2460))), 0x112c21f3u);
  /* 112c21f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c21f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c21f8 call 0x112c2d20 */
  push32(0x112c21fdu); f_112c2d20();
  /* 112c21fd cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2200 jle 0x112c223a */
  if ((C.zf||C.sf!=C.of)) goto L_112c223a;
  /* 112c2202 mov esi, esp */
  ESI = (ESP);
  /* 112c2204 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c2206 push 7 */
  push32((uint32_t)(0x7u));
  /* 112c2208 push 0x112ef4d0 */
  push32((uint32_t)(0x112ef4d0u));
  /* 112c220d call dword ptr [0x112f2470] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2470))), 0x112c2213u);
  /* 112c2213 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2216 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2218 call 0x112c2d20 */
  push32(0x112c221du); f_112c2d20();
  /* 112c221d mov esi, esp */
  ESI = (ESP);
  /* 112c221f push 0 */
  push32((uint32_t)(0x0u));
  /* 112c2221 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c2223 push 0x112ef4d0 */
  push32((uint32_t)(0x112ef4d0u));
  /* 112c2228 push 7 */
  push32((uint32_t)(0x7u));
  /* 112c222a call dword ptr [0x112f24a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24a4))), 0x112c2230u);
  /* 112c2230 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2233 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2235 call 0x112c2d20 */
  push32(0x112c223au); f_112c2d20();
L_112c223a:;
  /* 112c223a mov esi, esp */
  ESI = (ESP);
  /* 112c223c push 4 */
  push32((uint32_t)(0x4u));
  /* 112c223e call dword ptr [0x112f2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2438))), 0x112c2244u);
  /* 112c2244 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2247 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2249 call 0x112c2d20 */
  push32(0x112c224eu); f_112c2d20();
  /* 112c224e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c2253 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c2255 je 0x112c22e8 */
  if (C.zf) goto L_112c22e8;
  /* 112c225b mov esi, esp */
  ESI = (ESP);
  /* 112c225d push 0 */
  push32((uint32_t)(0x0u));
  /* 112c225f push 0x112ef448 */
  push32((uint32_t)(0x112ef448u));
  /* 112c2264 call dword ptr [0x112f2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2460))), 0x112c226au);
  /* 112c226a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c226d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c226f call 0x112c2d20 */
  push32(0x112c2274u); f_112c2d20();
  /* 112c2274 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c2276 jle 0x112c22e8 */
  if ((C.zf||C.sf!=C.of)) goto L_112c22e8;
  /* 112c2278 mov esi, esp */
  ESI = (ESP);
  /* 112c227a push 0x112ea190 */
  push32((uint32_t)(0x112ea190u));
  /* 112c227f call dword ptr [0x112f2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2454))), 0x112c2285u);
  /* 112c2285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2288 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c228a call 0x112c2d20 */
  push32(0x112c228fu); f_112c2d20();
  /* 112c228f mov esi, esp */
  ESI = (ESP);
  /* 112c2291 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 112c2296 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c2298 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c229a call dword ptr [0x112f2478] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2478))), 0x112c22a0u);
  /* 112c22a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c22a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c22a5 call 0x112c2d20 */
  push32(0x112c22aau); f_112c2d20();
  /* 112c22aa mov esi, esp */
  ESI = (ESP);
  /* 112c22ac push 0x47 */
  push32((uint32_t)(0x47u));
  /* 112c22ae call dword ptr [0x112f249c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f249c))), 0x112c22b4u);
  /* 112c22b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c22b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c22b9 call 0x112c2d20 */
  push32(0x112c22beu); f_112c2d20();
  /* 112c22be mov esi, esp */
  ESI = (ESP);
  /* 112c22c0 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 112c22c2 call dword ptr [0x112f244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f244c))), 0x112c22c8u);
  /* 112c22c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c22cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c22cd call 0x112c2d20 */
  push32(0x112c22d2u); f_112c2d20();
  /* 112c22d2 mov esi, esp */
  ESI = (ESP);
  /* 112c22d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c22d6 push 4 */
  push32((uint32_t)(0x4u));
  /* 112c22d8 call dword ptr [0x112f2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2450))), 0x112c22deu);
  /* 112c22de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c22e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c22e3 call 0x112c2d20 */
  push32(0x112c22e8u); f_112c2d20();
L_112c22e8:;
  /* 112c22e8 mov esi, esp */
  ESI = (ESP);
  /* 112c22ea push 5 */
  push32((uint32_t)(0x5u));
  /* 112c22ec call dword ptr [0x112f2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2438))), 0x112c22f2u);
  /* 112c22f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c22f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c22f7 call 0x112c2d20 */
  push32(0x112c22fcu); f_112c2d20();
  /* 112c22fc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c2301 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c2303 je 0x112c2364 */
  if (C.zf) goto L_112c2364;
  /* 112c2305 mov esi, esp */
  ESI = (ESP);
  /* 112c2307 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c2309 push 0x112ef4d8 */
  push32((uint32_t)(0x112ef4d8u));
  /* 112c230e call dword ptr [0x112f2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2460))), 0x112c2314u);
  /* 112c2314 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2317 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2319 call 0x112c2d20 */
  push32(0x112c231eu); f_112c2d20();
  /* 112c231e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2321 jle 0x112c2364 */
  if ((C.zf||C.sf!=C.of)) goto L_112c2364;
  /* 112c2323 mov esi, esp */
  ESI = (ESP);
  /* 112c2325 push 0x112ea188 */
  push32((uint32_t)(0x112ea188u));
  /* 112c232a call dword ptr [0x112f2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2454))), 0x112c2330u);
  /* 112c2330 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2333 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2335 call 0x112c2d20 */
  push32(0x112c233au); f_112c2d20();
  /* 112c233a mov esi, esp */
  ESI = (ESP);
  /* 112c233c push 0x44 */
  push32((uint32_t)(0x44u));
  /* 112c233e call dword ptr [0x112f249c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f249c))), 0x112c2344u);
  /* 112c2344 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2347 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2349 call 0x112c2d20 */
  push32(0x112c234eu); f_112c2d20();
  /* 112c234e mov esi, esp */
  ESI = (ESP);
  /* 112c2350 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c2352 push 5 */
  push32((uint32_t)(0x5u));
  /* 112c2354 call dword ptr [0x112f2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2450))), 0x112c235au);
  /* 112c235a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c235d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c235f call 0x112c2d20 */
  push32(0x112c2364u); f_112c2d20();
L_112c2364:;
  /* 112c2364 mov esi, esp */
  ESI = (ESP);
  /* 112c2366 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 112c2368 call dword ptr [0x112f2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2438))), 0x112c236eu);
  /* 112c236e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2371 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2373 call 0x112c2d20 */
  push32(0x112c2378u); f_112c2d20();
  /* 112c2378 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c237d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c237f je 0x112c2428 */
  if (C.zf) goto L_112c2428;
  /* 112c2385 mov esi, esp */
  ESI = (ESP);
  /* 112c2387 push 4 */
  push32((uint32_t)(0x4u));
  /* 112c2389 call dword ptr [0x112f24ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24ac))), 0x112c238fu);
  /* 112c238f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2392 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2394 call 0x112c2d20 */
  push32(0x112c2399u); f_112c2d20();
  /* 112c2399 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c239e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c23a0 je 0x112c2428 */
  if (C.zf) goto L_112c2428;
  /* 112c23a6 mov esi, esp */
  ESI = (ESP);
  /* 112c23a8 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 112c23aa call dword ptr [0x112f249c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f249c))), 0x112c23b0u);
  /* 112c23b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c23b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c23b5 call 0x112c2d20 */
  push32(0x112c23bau); f_112c2d20();
  /* 112c23ba mov esi, esp */
  ESI = (ESP);
  /* 112c23bc push 0x45 */
  push32((uint32_t)(0x45u));
  /* 112c23be call dword ptr [0x112f244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f244c))), 0x112c23c4u);
  /* 112c23c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c23c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c23c9 call 0x112c2d20 */
  push32(0x112c23ceu); f_112c2d20();
  /* 112c23ce mov esi, esp */
  ESI = (ESP);
  /* 112c23d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c23d2 push 0x112ef4b0 */
  push32((uint32_t)(0x112ef4b0u));
  /* 112c23d7 call dword ptr [0x112f2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2448))), 0x112c23ddu);
  /* 112c23dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c23e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c23e2 call 0x112c2d20 */
  push32(0x112c23e7u); f_112c2d20();
  /* 112c23e7 mov esi, esp */
  ESI = (ESP);
  /* 112c23e9 push 4 */
  push32((uint32_t)(0x4u));
  /* 112c23eb call dword ptr [0x112f24b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24b0))), 0x112c23f1u);
  /* 112c23f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c23f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c23f6 call 0x112c2d20 */
  push32(0x112c23fbu); f_112c2d20();
  /* 112c23fb mov esi, esp */
  ESI = (ESP);
  /* 112c23fd push 0x112ea180 */
  push32((uint32_t)(0x112ea180u));
  /* 112c2402 call dword ptr [0x112f2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2454))), 0x112c2408u);
  /* 112c2408 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c240b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c240d call 0x112c2d20 */
  push32(0x112c2412u); f_112c2d20();
  /* 112c2412 mov esi, esp */
  ESI = (ESP);
  /* 112c2414 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c2416 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 112c2418 call dword ptr [0x112f2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2450))), 0x112c241eu);
  /* 112c241e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2421 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2423 call 0x112c2d20 */
  push32(0x112c2428u); f_112c2d20();
L_112c2428:;
  /* 112c2428 mov esi, esp */
  ESI = (ESP);
  /* 112c242a push 1 */
  push32((uint32_t)(0x1u));
  /* 112c242c call dword ptr [0x112f24ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24ac))), 0x112c2432u);
  /* 112c2432 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2435 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2437 call 0x112c2d20 */
  push32(0x112c243cu); f_112c2d20();
  /* 112c243c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c2441 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c2443 je 0x112c2454 */
  if (C.zf) goto L_112c2454;
  /* 112c2445 mov esi, esp */
  ESI = (ESP);
  /* 112c2447 call dword ptr [0x112f24a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24a8))), 0x112c244du);
  /* 112c244d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c244f call 0x112c2d20 */
  push32(0x112c2454u); f_112c2d20();
L_112c2454:;
  /* 112c2454 mov esi, esp */
  ESI = (ESP);
  /* 112c2456 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c2458 call dword ptr [0x112f24ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24ac))), 0x112c245eu);
  /* 112c245e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2461 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2463 call 0x112c2d20 */
  push32(0x112c2468u); f_112c2d20();
  /* 112c2468 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c246d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c246f je 0x112c2480 */
  if (C.zf) goto L_112c2480;
  /* 112c2471 mov esi, esp */
  ESI = (ESP);
  /* 112c2473 call dword ptr [0x112f24b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24b8))), 0x112c2479u);
  /* 112c2479 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c247b call 0x112c2d20 */
  push32(0x112c2480u); f_112c2d20();
L_112c2480:;
  /* 112c2480 mov esi, esp */
  ESI = (ESP);
  /* 112c2482 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c2484 call dword ptr [0x112f2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2438))), 0x112c248au);
  /* 112c248a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c248d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c248f call 0x112c2d20 */
  push32(0x112c2494u); f_112c2d20();
  /* 112c2494 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c2499 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c249b je 0x112c24ec */
  if (C.zf) goto L_112c24ec;
  /* 112c249d mov esi, esp */
  ESI = (ESP);
  /* 112c249f push 0 */
  push32((uint32_t)(0x0u));
  /* 112c24a1 push 0x112ef460 */
  push32((uint32_t)(0x112ef460u));
  /* 112c24a6 push 0x112ef4c8 */
  push32((uint32_t)(0x112ef4c8u));
  /* 112c24ab call dword ptr [0x112f24a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24a0))), 0x112c24b1u);
  /* 112c24b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c24b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c24b6 call 0x112c2d20 */
  push32(0x112c24bbu); f_112c2d20();
  /* 112c24bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c24bd jle 0x112c24ec */
  if ((C.zf||C.sf!=C.of)) goto L_112c24ec;
  /* 112c24bf mov esi, esp */
  ESI = (ESP);
  /* 112c24c1 push 0x112ea178 */
  push32((uint32_t)(0x112ea178u));
  /* 112c24c6 call dword ptr [0x112f2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2454))), 0x112c24ccu);
  /* 112c24cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c24cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c24d1 call 0x112c2d20 */
  push32(0x112c24d6u); f_112c2d20();
  /* 112c24d6 mov esi, esp */
  ESI = (ESP);
  /* 112c24d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c24da push 9 */
  push32((uint32_t)(0x9u));
  /* 112c24dc call dword ptr [0x112f2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2450))), 0x112c24e2u);
  /* 112c24e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c24e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c24e7 call 0x112c2d20 */
  push32(0x112c24ecu); f_112c2d20();
L_112c24ec:;
  /* 112c24ec mov esi, esp */
  ESI = (ESP);
  /* 112c24ee push 9 */
  push32((uint32_t)(0x9u));
  /* 112c24f0 call dword ptr [0x112f2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2438))), 0x112c24f6u);
  /* 112c24f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c24f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c24fb call 0x112c2d20 */
  push32(0x112c2500u); f_112c2d20();
  /* 112c2500 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c2505 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c2507 jne 0x112c2541 */
  if (!C.zf) goto L_112c2541;
  /* 112c2509 mov esi, esp */
  ESI = (ESP);
  /* 112c250b push 0 */
  push32((uint32_t)(0x0u));
  /* 112c250d push 0x112ef460 */
  push32((uint32_t)(0x112ef460u));
  /* 112c2512 push 0x112ef4c8 */
  push32((uint32_t)(0x112ef4c8u));
  /* 112c2517 call dword ptr [0x112f24a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24a0))), 0x112c251du);
  /* 112c251d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2520 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2522 call 0x112c2d20 */
  push32(0x112c2527u); f_112c2d20();
  /* 112c2527 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c2529 jne 0x112c2541 */
  if (!C.zf) goto L_112c2541;
  /* 112c252b mov esi, esp */
  ESI = (ESP);
  /* 112c252d push 1 */
  push32((uint32_t)(0x1u));
  /* 112c252f push 9 */
  push32((uint32_t)(0x9u));
  /* 112c2531 call dword ptr [0x112f2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2450))), 0x112c2537u);
  /* 112c2537 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c253a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c253c call 0x112c2d20 */
  push32(0x112c2541u); f_112c2d20();
L_112c2541:;
  /* 112c2541 mov esi, esp */
  ESI = (ESP);
  /* 112c2543 push 0xb */
  push32((uint32_t)(0xbu));
  /* 112c2545 call dword ptr [0x112f2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2438))), 0x112c254bu);
  /* 112c254b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c254e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2550 call 0x112c2d20 */
  push32(0x112c2555u); f_112c2d20();
  /* 112c2555 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c255a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c255c jne 0x112c26bb */
  if (!C.zf) goto L_112c26bb;
  /* 112c2562 mov esi, esp */
  ESI = (ESP);
  /* 112c2564 push 0xa */
  push32((uint32_t)(0xau));
  /* 112c2566 call dword ptr [0x112f2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2438))), 0x112c256cu);
  /* 112c256c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c256f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2571 call 0x112c2d20 */
  push32(0x112c2576u); f_112c2d20();
  /* 112c2576 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c257b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c257d je 0x112c26bb */
  if (C.zf) goto L_112c26bb;
  /* 112c2583 mov esi, esp */
  ESI = (ESP);
  /* 112c2585 push 0x112ef4a0 */
  push32((uint32_t)(0x112ef4a0u));
  /* 112c258a push 0x112ef420 */
  push32((uint32_t)(0x112ef420u));
  /* 112c258f call dword ptr [0x112f246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f246c))), 0x112c2595u);
  /* 112c2595 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2598 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c259a call 0x112c2d20 */
  push32(0x112c259fu); f_112c2d20();
  /* 112c259f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c25a1 jle 0x112c26bb */
  if ((C.zf||C.sf!=C.of)) goto L_112c26bb;
  /* 112c25a7 mov esi, esp */
  ESI = (ESP);
  /* 112c25a9 push 0x112ea160 */
  push32((uint32_t)(0x112ea160u));
  /* 112c25ae push 0 */
  push32((uint32_t)(0x0u));
  /* 112c25b0 push 0x112ea158 */
  push32((uint32_t)(0x112ea158u));
  /* 112c25b5 push 7 */
  push32((uint32_t)(0x7u));
  /* 112c25b7 call dword ptr [0x112f247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f247c))), 0x112c25bdu);
  /* 112c25bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c25c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c25c2 call 0x112c2d20 */
  push32(0x112c25c7u); f_112c2d20();
  /* 112c25c7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112c25ca cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c25ce je 0x112c25e5 */
  if (C.zf) goto L_112c25e5;
  /* 112c25d0 cmp dword ptr [ebp - 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c25d4 je 0x112c2645 */
  if (C.zf) goto L_112c2645;
  /* 112c25d6 cmp dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c25da je 0x112c26a5 */
  if (C.zf) goto L_112c26a5;
  /* 112c25e0 jmp 0x112c26bb */
  goto L_112c26bb;
L_112c25e5:;
  /* 112c25e5 mov esi, esp */
  ESI = (ESP);
  /* 112c25e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c25e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c25eb call dword ptr [0x112f2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2480))), 0x112c25f1u);
  /* 112c25f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c25f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c25f6 call 0x112c2d20 */
  push32(0x112c25fbu); f_112c2d20();
  /* 112c25fb cmp eax, 0x1f4 */
  { uint32_t _a=(EAX),_b=(0x1f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2600 jle 0x112c2643 */
  if ((C.zf||C.sf!=C.of)) goto L_112c2643;
  /* 112c2602 mov esi, esp */
  ESI = (ESP);
  /* 112c2604 push 0xfffffe0c */
  push32((uint32_t)(0xfffffe0cu));
  /* 112c2609 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c260b push 0 */
  push32((uint32_t)(0x0u));
  /* 112c260d call dword ptr [0x112f2478] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2478))), 0x112c2613u);
  /* 112c2613 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2616 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2618 call 0x112c2d20 */
  push32(0x112c261du); f_112c2d20();
  /* 112c261d mov esi, esp */
  ESI = (ESP);
  /* 112c261f push 0x384 */
  push32((uint32_t)(0x384u));
  /* 112c2624 push 0x112ef3f8 */
  push32((uint32_t)(0x112ef3f8u));
  /* 112c2629 push 0x112ef3e8 */
  push32((uint32_t)(0x112ef3e8u));
  /* 112c262e push 0x112ef4a8 */
  push32((uint32_t)(0x112ef4a8u));
  /* 112c2633 call dword ptr [0x112f24bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24bc))), 0x112c2639u);
  /* 112c2639 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c263c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c263e call 0x112c2d20 */
  push32(0x112c2643u); f_112c2d20();
L_112c2643:;
  /* 112c2643 jmp 0x112c26bb */
  goto L_112c26bb;
L_112c2645:;
  /* 112c2645 mov esi, esp */
  ESI = (ESP);
  /* 112c2647 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c2649 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c264b call dword ptr [0x112f2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2480))), 0x112c2651u);
  /* 112c2651 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2654 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2656 call 0x112c2d20 */
  push32(0x112c265bu); f_112c2d20();
  /* 112c265b cmp eax, 0xc8 */
  { uint32_t _a=(EAX),_b=(0xc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2660 jle 0x112c26a3 */
  if ((C.zf||C.sf!=C.of)) goto L_112c26a3;
  /* 112c2662 mov esi, esp */
  ESI = (ESP);
  /* 112c2664 push 0xffffff38 */
  push32((uint32_t)(0xffffff38u));
  /* 112c2669 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c266b push 0 */
  push32((uint32_t)(0x0u));
  /* 112c266d call dword ptr [0x112f2478] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2478))), 0x112c2673u);
  /* 112c2673 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2676 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2678 call 0x112c2d20 */
  push32(0x112c267du); f_112c2d20();
  /* 112c267d mov esi, esp */
  ESI = (ESP);
  /* 112c267f push 0x384 */
  push32((uint32_t)(0x384u));
  /* 112c2684 push 0x112ef3f8 */
  push32((uint32_t)(0x112ef3f8u));
  /* 112c2689 push 0x112ef3e0 */
  push32((uint32_t)(0x112ef3e0u));
  /* 112c268e push 0x112ef4a8 */
  push32((uint32_t)(0x112ef4a8u));
  /* 112c2693 call dword ptr [0x112f24bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f24bc))), 0x112c2699u);
  /* 112c2699 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c269c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c269e call 0x112c2d20 */
  push32(0x112c26a3u); f_112c2d20();
L_112c26a3:;
  /* 112c26a3 jmp 0x112c26bb */
  goto L_112c26bb;
L_112c26a5:;
  /* 112c26a5 mov esi, esp */
  ESI = (ESP);
  /* 112c26a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c26a9 push 0xa */
  push32((uint32_t)(0xau));
  /* 112c26ab call dword ptr [0x112f2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2450))), 0x112c26b1u);
  /* 112c26b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c26b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c26b6 call 0x112c2d20 */
  push32(0x112c26bbu); f_112c2d20();
L_112c26bb:;
  /* 112c26bb mov esi, esp */
  ESI = (ESP);
  /* 112c26bd push 0xa */
  push32((uint32_t)(0xau));
  /* 112c26bf call dword ptr [0x112f2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2438))), 0x112c26c5u);
  /* 112c26c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c26c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c26ca call 0x112c2d20 */
  push32(0x112c26cfu); f_112c2d20();
  /* 112c26cf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c26d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c26d6 jne 0x112c270e */
  if (!C.zf) goto L_112c270e;
  /* 112c26d8 mov esi, esp */
  ESI = (ESP);
  /* 112c26da push 0x112ef4a0 */
  push32((uint32_t)(0x112ef4a0u));
  /* 112c26df push 0x112ef420 */
  push32((uint32_t)(0x112ef420u));
  /* 112c26e4 call dword ptr [0x112f246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f246c))), 0x112c26eau);
  /* 112c26ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c26ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c26ef call 0x112c2d20 */
  push32(0x112c26f4u); f_112c2d20();
  /* 112c26f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c26f6 jne 0x112c270e */
  if (!C.zf) goto L_112c270e;
  /* 112c26f8 mov esi, esp */
  ESI = (ESP);
  /* 112c26fa push 1 */
  push32((uint32_t)(0x1u));
  /* 112c26fc push 0xa */
  push32((uint32_t)(0xau));
  /* 112c26fe call dword ptr [0x112f2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2450))), 0x112c2704u);
  /* 112c2704 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2707 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2709 call 0x112c2d20 */
  push32(0x112c270eu); f_112c2d20();
L_112c270e:;
  /* 112c270e mov esi, esp */
  ESI = (ESP);
  /* 112c2710 push 0xb */
  push32((uint32_t)(0xbu));
  /* 112c2712 call dword ptr [0x112f2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2438))), 0x112c2718u);
  /* 112c2718 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c271b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c271d call 0x112c2d20 */
  push32(0x112c2722u); f_112c2d20();
  /* 112c2722 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c2727 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c2729 je 0x112c279e */
  if (C.zf) goto L_112c279e;
  /* 112c272b mov esi, esp */
  ESI = (ESP);
  /* 112c272d push 3 */
  push32((uint32_t)(0x3u));
  /* 112c272f push 0x112ef428 */
  push32((uint32_t)(0x112ef428u));
  /* 112c2734 call dword ptr [0x112f2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2460))), 0x112c273au);
  /* 112c273a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c273d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c273f call 0x112c2d20 */
  push32(0x112c2744u); f_112c2d20();
  /* 112c2744 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2747 jge 0x112c279e */
  if ((C.sf==C.of)) goto L_112c279e;
  /* 112c2749 mov esi, esp */
  ESI = (ESP);
  /* 112c274b push 0x112ea150 */
  push32((uint32_t)(0x112ea150u));
  /* 112c2750 call dword ptr [0x112f2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2454))), 0x112c2756u);
  /* 112c2756 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2759 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c275b call 0x112c2d20 */
  push32(0x112c2760u); f_112c2d20();
  /* 112c2760 mov esi, esp */
  ESI = (ESP);
  /* 112c2762 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 112c2764 call dword ptr [0x112f249c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f249c))), 0x112c276au);
  /* 112c276a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c276d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c276f call 0x112c2d20 */
  push32(0x112c2774u); f_112c2d20();
  /* 112c2774 mov esi, esp */
  ESI = (ESP);
  /* 112c2776 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 112c2778 call dword ptr [0x112f244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f244c))), 0x112c277eu);
  /* 112c277e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2781 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2783 call 0x112c2d20 */
  push32(0x112c2788u); f_112c2d20();
  /* 112c2788 mov esi, esp */
  ESI = (ESP);
  /* 112c278a push 0 */
  push32((uint32_t)(0x0u));
  /* 112c278c push 0xb */
  push32((uint32_t)(0xbu));
  /* 112c278e call dword ptr [0x112f2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2450))), 0x112c2794u);
  /* 112c2794 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2797 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2799 call 0x112c2d20 */
  push32(0x112c279eu); f_112c2d20();
L_112c279e:;
  /* 112c279e pop edi */
  EDI = (pop32());
  /* 112c279f pop esi */
  ESI = (pop32());
  /* 112c27a0 pop ebx */
  EBX = (pop32());
  /* 112c27a1 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c27a4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c27a6 call 0x112c2d20 */
  push32(0x112c27abu); f_112c2d20();
  /* 112c27ab mov esp, ebp */
  ESP = (EBP);
  /* 112c27ad pop ebp */
  EBP = (pop32());
  /* 112c27ae ret  */
  ESPCHK(0x112c15f0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x112c2d20 (56 bytes, 28 insns) */
void f_112c2d20(void) {
  FTRACE(0x112c2d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c2d20 jne 0x112c2d23 */
  if (!C.zf) goto L_112c2d23;
  /* 112c2d22 ret  */
  ESPCHK(0x112c2d20u, _esp0);
  ESP += 4; return;
L_112c2d23:;
  /* 112c2d23 push ebp */
  push32((uint32_t)(EBP));
  /* 112c2d24 mov ebp, esp */
  EBP = (ESP);
  /* 112c2d26 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c2d29 push eax */
  push32((uint32_t)(EAX));
  /* 112c2d2a push edx */
  push32((uint32_t)(EDX));
  /* 112c2d2b push ebx */
  push32((uint32_t)(EBX));
  /* 112c2d2c push esi */
  push32((uint32_t)(ESI));
  /* 112c2d2d push edi */
  push32((uint32_t)(EDI));
  /* 112c2d2e push 0x112ea1e8 */
  push32((uint32_t)(0x112ea1e8u));
  /* 112c2d33 push 0x112ea1e4 */
  push32((uint32_t)(0x112ea1e4u));
  /* 112c2d38 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 112c2d3a push 0x112ea1d4 */
  push32((uint32_t)(0x112ea1d4u));
  /* 112c2d3f push 1 */
  push32((uint32_t)(0x1u));
  /* 112c2d41 call 0x112c30f0 */
  push32(0x112c2d46u); f_112c30f0();
  /* 112c2d46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2d49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2d4c jne 0x112c2d4f */
  if (!C.zf) goto L_112c2d4f;
  /* 112c2d4e int3  */
  x86_unimpl("int3 @ 0x112c2d4e");
L_112c2d4f:;
  /* 112c2d4f pop edi */
  EDI = (pop32());
  /* 112c2d50 pop esi */
  ESI = (pop32());
  /* 112c2d51 pop ebx */
  EBX = (pop32());
  /* 112c2d52 pop edx */
  EDX = (pop32());
  /* 112c2d53 pop eax */
  EAX = (pop32());
  /* 112c2d54 mov esp, ebp */
  ESP = (EBP);
  /* 112c2d56 pop ebp */
  EBP = (pop32());
  /* 112c2d57 ret  */
  ESPCHK(0x112c2d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d60 @ 0x112c2d60 (313 bytes, 78 insns) */
void f_112c2d60(void) {
  FTRACE(0x112c2d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c2d60 push ebp */
  push32((uint32_t)(EBP));
  /* 112c2d61 mov ebp, esp */
  EBP = (ESP);
  /* 112c2d63 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2d67 jne 0x112c2e27 */
  if (!C.zf) goto L_112c2e27;
  /* 112c2d6d call dword ptr [0x112f2358] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2358))), 0x112c2d73u);
  /* 112c2d73 mov dword ptr [0x112ef538], eax */
  w32((uint32_t)(0x112ef538), (EAX));
  /* 112c2d78 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c2d7a call 0x112c6820 */
  push32(0x112c2d7fu); f_112c6820();
  /* 112c2d7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2d82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c2d84 jne 0x112c2d8d */
  if (!C.zf) goto L_112c2d8d;
  /* 112c2d86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c2d88 jmp 0x112c2e95 */
  goto L_112c2e95;
L_112c2d8d:;
  /* 112c2d8d mov eax, dword ptr [0x112ef538] */
  EAX = (r32((uint32_t)(0x112ef538)));
  /* 112c2d92 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 112c2d95 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c2d9a mov dword ptr [0x112ef544], eax */
  w32((uint32_t)(0x112ef544), (EAX));
  /* 112c2d9f mov ecx, dword ptr [0x112ef538] */
  ECX = (r32((uint32_t)(0x112ef538)));
  /* 112c2da5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 112c2dab mov dword ptr [0x112ef540], ecx */
  w32((uint32_t)(0x112ef540), (ECX));
  /* 112c2db1 mov edx, dword ptr [0x112ef540] */
  EDX = (r32((uint32_t)(0x112ef540)));
  /* 112c2db7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 112c2dba add edx, dword ptr [0x112ef544] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x112ef544))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2dc0 mov dword ptr [0x112ef53c], edx */
  w32((uint32_t)(0x112ef53c), (EDX));
  /* 112c2dc6 mov eax, dword ptr [0x112ef538] */
  EAX = (r32((uint32_t)(0x112ef538)));
  /* 112c2dcb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 112c2dce and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c2dd3 mov dword ptr [0x112ef538], eax */
  w32((uint32_t)(0x112ef538), (EAX));
  /* 112c2dd8 call 0x112c3990 */
  push32(0x112c2dddu); f_112c3990();
  /* 112c2ddd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c2ddf jne 0x112c2ded */
  if (!C.zf) goto L_112c2ded;
  /* 112c2de1 call 0x112c6870 */
  push32(0x112c2de6u); f_112c6870();
  /* 112c2de6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c2de8 jmp 0x112c2e95 */
  goto L_112c2e95;
L_112c2ded:;
  /* 112c2ded call dword ptr [0x112f2354] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2354))), 0x112c2df3u);
  /* 112c2df3 mov dword ptr [0x112f108c], eax */
  w32((uint32_t)(0x112f108c), (EAX));
  /* 112c2df8 call 0x112c6600 */
  push32(0x112c2dfdu); f_112c6600();
  /* 112c2dfd mov dword ptr [0x112ef520], eax */
  w32((uint32_t)(0x112ef520), (EAX));
  /* 112c2e02 call 0x112c3c40 */
  push32(0x112c2e07u); f_112c3c40();
  /* 112c2e07 call 0x112c60f0 */
  push32(0x112c2e0cu); f_112c60f0();
  /* 112c2e0c call 0x112c5fa0 */
  push32(0x112c2e11u); f_112c5fa0();
  /* 112c2e11 call 0x112c3790 */
  push32(0x112c2e16u); f_112c3790();
  /* 112c2e16 mov ecx, dword ptr [0x112ef51c] */
  ECX = (r32((uint32_t)(0x112ef51c)));
  /* 112c2e1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2e1f mov dword ptr [0x112ef51c], ecx */
  w32((uint32_t)(0x112ef51c), (ECX));
  /* 112c2e25 jmp 0x112c2e90 */
  goto L_112c2e90;
L_112c2e27:;
  /* 112c2e27 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2e2b jne 0x112c2e80 */
  if (!C.zf) goto L_112c2e80;
  /* 112c2e2d cmp dword ptr [0x112ef51c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef51c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2e34 jle 0x112c2e7a */
  if ((C.zf||C.sf!=C.of)) goto L_112c2e7a;
  /* 112c2e36 mov edx, dword ptr [0x112ef51c] */
  EDX = (r32((uint32_t)(0x112ef51c)));
  /* 112c2e3c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c2e3f mov dword ptr [0x112ef51c], edx */
  w32((uint32_t)(0x112ef51c), (EDX));
  /* 112c2e45 cmp dword ptr [0x112ef570], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef570))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2e4c jne 0x112c2e53 */
  if (!C.zf) goto L_112c2e53;
  /* 112c2e4e call 0x112c3810 */
  push32(0x112c2e53u); f_112c3810();
L_112c2e53:;
  /* 112c2e53 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112c2e55 call 0x112c5540 */
  push32(0x112c2e5au); f_112c5540();
  /* 112c2e5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2e5d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 112c2e60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c2e62 je 0x112c2e69 */
  if (C.zf) goto L_112c2e69;
  /* 112c2e64 call 0x112c5e50 */
  push32(0x112c2e69u); f_112c5e50();
L_112c2e69:;
  /* 112c2e69 call 0x112c3f70 */
  push32(0x112c2e6eu); f_112c3f70();
  /* 112c2e6e call 0x112c3a20 */
  push32(0x112c2e73u); f_112c3a20();
  /* 112c2e73 call 0x112c6870 */
  push32(0x112c2e78u); f_112c6870();
  /* 112c2e78 jmp 0x112c2e7e */
  goto L_112c2e7e;
L_112c2e7a:;
  /* 112c2e7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c2e7c jmp 0x112c2e95 */
  goto L_112c2e95;
L_112c2e7e:;
  /* 112c2e7e jmp 0x112c2e90 */
  goto L_112c2e90;
L_112c2e80:;
  /* 112c2e80 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2e84 jne 0x112c2e90 */
  if (!C.zf) goto L_112c2e90;
  /* 112c2e86 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c2e88 call 0x112c3b10 */
  push32(0x112c2e8du); f_112c3b10();
  /* 112c2e8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c2e90:;
  /* 112c2e90 mov eax, 1 */
  EAX = (0x1u);
L_112c2e95:;
  /* 112c2e95 pop ebp */
  EBP = (pop32());
  /* 112c2e96 ret 0xc */
  ESPCHK(0x112c2d60u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x112c2ea0 (243 bytes, 86 insns) */
void f_112c2ea0(void) {
  FTRACE(0x112c2ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c2ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c2ea1 mov ebp, esp */
  EBP = (ESP);
  /* 112c2ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 112c2ea4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 112c2eab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2eaf jne 0x112c2ec1 */
  if (!C.zf) goto L_112c2ec1;
  /* 112c2eb1 cmp dword ptr [0x112ef51c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef51c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2eb8 jne 0x112c2ec1 */
  if (!C.zf) goto L_112c2ec1;
  /* 112c2eba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c2ebc jmp 0x112c2f8d */
  goto L_112c2f8d;
L_112c2ec1:;
  /* 112c2ec1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2ec5 je 0x112c2ecd */
  if (C.zf) goto L_112c2ecd;
  /* 112c2ec7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2ecb jne 0x112c2f0f */
  if (!C.zf) goto L_112c2f0f;
L_112c2ecd:;
  /* 112c2ecd cmp dword ptr [0x112f109c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112f109c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2ed4 je 0x112c2eeb */
  if (C.zf) goto L_112c2eeb;
  /* 112c2ed6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c2ed9 push eax */
  push32((uint32_t)(EAX));
  /* 112c2eda mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c2edd push ecx */
  push32((uint32_t)(ECX));
  /* 112c2ede mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c2ee1 push edx */
  push32((uint32_t)(EDX));
  /* 112c2ee2 call dword ptr [0x112f109c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f109c))), 0x112c2ee8u);
  /* 112c2ee8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112c2eeb:;
  /* 112c2eeb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2eef je 0x112c2f05 */
  if (C.zf) goto L_112c2f05;
  /* 112c2ef1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c2ef4 push eax */
  push32((uint32_t)(EAX));
  /* 112c2ef5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c2ef8 push ecx */
  push32((uint32_t)(ECX));
  /* 112c2ef9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c2efc push edx */
  push32((uint32_t)(EDX));
  /* 112c2efd call 0x112c2d60 */
  push32(0x112c2f02u); f_112c2d60();
  /* 112c2f02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112c2f05:;
  /* 112c2f05 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2f09 jne 0x112c2f0f */
  if (!C.zf) goto L_112c2f0f;
  /* 112c2f0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c2f0d jmp 0x112c2f8d */
  goto L_112c2f8d;
L_112c2f0f:;
  /* 112c2f0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c2f12 push eax */
  push32((uint32_t)(EAX));
  /* 112c2f13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c2f16 push ecx */
  push32((uint32_t)(ECX));
  /* 112c2f17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c2f1a push edx */
  push32((uint32_t)(EDX));
  /* 112c2f1b call 0x112c100a */
  push32(0x112c2f20u); f_112c100a();
  /* 112c2f20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c2f23 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2f27 jne 0x112c2f3e */
  if (!C.zf) goto L_112c2f3e;
  /* 112c2f29 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2f2d jne 0x112c2f3e */
  if (!C.zf) goto L_112c2f3e;
  /* 112c2f2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c2f32 push eax */
  push32((uint32_t)(EAX));
  /* 112c2f33 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c2f35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c2f38 push ecx */
  push32((uint32_t)(ECX));
  /* 112c2f39 call 0x112c2d60 */
  push32(0x112c2f3eu); f_112c2d60();
L_112c2f3e:;
  /* 112c2f3e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2f42 je 0x112c2f4a */
  if (C.zf) goto L_112c2f4a;
  /* 112c2f44 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2f48 jne 0x112c2f8a */
  if (!C.zf) goto L_112c2f8a;
L_112c2f4a:;
  /* 112c2f4a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c2f4d push edx */
  push32((uint32_t)(EDX));
  /* 112c2f4e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c2f51 push eax */
  push32((uint32_t)(EAX));
  /* 112c2f52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c2f55 push ecx */
  push32((uint32_t)(ECX));
  /* 112c2f56 call 0x112c2d60 */
  push32(0x112c2f5bu); f_112c2d60();
  /* 112c2f5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c2f5d jne 0x112c2f66 */
  if (!C.zf) goto L_112c2f66;
  /* 112c2f5f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_112c2f66:;
  /* 112c2f66 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2f6a je 0x112c2f8a */
  if (C.zf) goto L_112c2f8a;
  /* 112c2f6c cmp dword ptr [0x112f109c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112f109c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2f73 je 0x112c2f8a */
  if (C.zf) goto L_112c2f8a;
  /* 112c2f75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c2f78 push edx */
  push32((uint32_t)(EDX));
  /* 112c2f79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c2f7c push eax */
  push32((uint32_t)(EAX));
  /* 112c2f7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c2f80 push ecx */
  push32((uint32_t)(ECX));
  /* 112c2f81 call dword ptr [0x112f109c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f109c))), 0x112c2f87u);
  /* 112c2f87 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112c2f8a:;
  /* 112c2f8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_112c2f8d:;
  /* 112c2f8d mov esp, ebp */
  ESP = (EBP);
  /* 112c2f8f pop ebp */
  EBP = (pop32());
  /* 112c2f90 ret 0xc */
  ESPCHK(0x112c2ea0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x112c2fa0 (58 bytes, 18 insns) */
void f_112c2fa0(void) {
  FTRACE(0x112c2fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c2fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c2fa1 mov ebp, esp */
  EBP = (ESP);
  /* 112c2fa3 cmp dword ptr [0x112ef528], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112ef528))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2faa je 0x112c2fbe */
  if (C.zf) goto L_112c2fbe;
  /* 112c2fac cmp dword ptr [0x112ef528], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef528))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2fb3 jne 0x112c2fc3 */
  if (!C.zf) goto L_112c2fc3;
  /* 112c2fb5 cmp dword ptr [0x112ef52c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112ef52c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2fbc jne 0x112c2fc3 */
  if (!C.zf) goto L_112c2fc3;
L_112c2fbe:;
  /* 112c2fbe call 0x112c6910 */
  push32(0x112c2fc3u); f_112c6910();
L_112c2fc3:;
  /* 112c2fc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c2fc6 push eax */
  push32((uint32_t)(EAX));
  /* 112c2fc7 call 0x112c6960 */
  push32(0x112c2fccu); f_112c6960();
  /* 112c2fcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2fcf push 0xff */
  push32((uint32_t)(0xffu));
  /* 112c2fd4 call dword ptr [0x112eda30] */
  call_ind((uint32_t)(r32((uint32_t)(0x112eda30))), 0x112c2fdau);
  /* 112c2fda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c2fdd pop ebp */
  EBP = (pop32());
  /* 112c2fde ret  */
  ESPCHK(0x112c2fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fe0 @ 0x112c2fe0 (11 bytes, 5 insns) */
void f_112c2fe0(void) {
  FTRACE(0x112c2fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c2fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c2fe1 mov ebp, esp */
  EBP = (ESP);
  /* 112c2fe3 call dword ptr [0x112f235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f235c))), 0x112c2fe9u);
  /* 112c2fe9 pop ebp */
  EBP = (pop32());
  /* 112c2fea ret  */
  ESPCHK(0x112c2fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ff0 @ 0x112c2ff0 (87 bytes, 30 insns) */
void f_112c2ff0(void) {
  FTRACE(0x112c2ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c2ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c2ff1 mov ebp, esp */
  EBP = (ESP);
  /* 112c2ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 112c2ff4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2ff8 jl 0x112c3000 */
  if ((C.sf!=C.of)) goto L_112c3000;
  /* 112c2ffa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c2ffe jl 0x112c3005 */
  if ((C.sf!=C.of)) goto L_112c3005;
L_112c3000:;
  /* 112c3000 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c3003 jmp 0x112c3043 */
  goto L_112c3043;
L_112c3005:;
  /* 112c3005 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3009 jne 0x112c3017 */
  if (!C.zf) goto L_112c3017;
  /* 112c300b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c300e mov eax, dword ptr [eax*4 + 0x112eda38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x112eda38)));
  /* 112c3015 jmp 0x112c3043 */
  goto L_112c3043;
L_112c3017:;
  /* 112c3017 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c301a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 112c301d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c301f je 0x112c3026 */
  if (C.zf) goto L_112c3026;
  /* 112c3021 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c3024 jmp 0x112c3043 */
  goto L_112c3043;
L_112c3026:;
  /* 112c3026 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3029 mov eax, dword ptr [edx*4 + 0x112eda38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x112eda38)));
  /* 112c3030 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c3033 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3036 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c3039 mov dword ptr [ecx*4 + 0x112eda38], edx */
  w32((uint32_t)(ECX*4 + 0x112eda38), (EDX));
  /* 112c3040 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_112c3043:;
  /* 112c3043 mov esp, ebp */
  ESP = (EBP);
  /* 112c3045 pop ebp */
  EBP = (pop32());
  /* 112c3046 ret  */
  ESPCHK(0x112c2ff0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x112c3050 (126 bytes, 38 insns) */
void f_112c3050(void) {
  FTRACE(0x112c3050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c3050 push ebp */
  push32((uint32_t)(EBP));
  /* 112c3051 mov ebp, esp */
  EBP = (ESP);
  /* 112c3053 push ecx */
  push32((uint32_t)(ECX));
  /* 112c3054 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3058 jl 0x112c3060 */
  if ((C.sf!=C.of)) goto L_112c3060;
  /* 112c305a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c305e jl 0x112c3067 */
  if ((C.sf!=C.of)) goto L_112c3067;
L_112c3060:;
  /* 112c3060 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 112c3065 jmp 0x112c30ca */
  goto L_112c30ca;
L_112c3067:;
  /* 112c3067 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c306b jne 0x112c3079 */
  if (!C.zf) goto L_112c3079;
  /* 112c306d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3070 mov eax, dword ptr [eax*4 + 0x112eda44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x112eda44)));
  /* 112c3077 jmp 0x112c30ca */
  goto L_112c30ca;
L_112c3079:;
  /* 112c3079 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c307c mov edx, dword ptr [ecx*4 + 0x112eda44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x112eda44)));
  /* 112c3083 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112c3086 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c308a jne 0x112c30a0 */
  if (!C.zf) goto L_112c30a0;
  /* 112c308c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 112c308e call dword ptr [0x112f2360] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2360))), 0x112c3094u);
  /* 112c3094 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3097 mov dword ptr [ecx*4 + 0x112eda44], eax */
  w32((uint32_t)(ECX*4 + 0x112eda44), (EAX));
  /* 112c309e jmp 0x112c30c7 */
  goto L_112c30c7;
L_112c30a0:;
  /* 112c30a0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c30a4 jne 0x112c30ba */
  if (!C.zf) goto L_112c30ba;
  /* 112c30a6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 112c30a8 call dword ptr [0x112f2360] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2360))), 0x112c30aeu);
  /* 112c30ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c30b1 mov dword ptr [edx*4 + 0x112eda44], eax */
  w32((uint32_t)(EDX*4 + 0x112eda44), (EAX));
  /* 112c30b8 jmp 0x112c30c7 */
  goto L_112c30c7;
L_112c30ba:;
  /* 112c30ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c30bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c30c0 mov dword ptr [eax*4 + 0x112eda44], ecx */
  w32((uint32_t)(EAX*4 + 0x112eda44), (ECX));
L_112c30c7:;
  /* 112c30c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_112c30ca:;
  /* 112c30ca mov esp, ebp */
  ESP = (EBP);
  /* 112c30cc pop ebp */
  EBP = (pop32());
  /* 112c30cd ret  */
  ESPCHK(0x112c3050u, _esp0);
  ESP += 4; return;
}

/* FUN_100030d0 @ 0x112c30d0 (28 bytes, 11 insns) */
void f_112c30d0(void) {
  FTRACE(0x112c30d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c30d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c30d1 mov ebp, esp */
  EBP = (ESP);
  /* 112c30d3 push ecx */
  push32((uint32_t)(ECX));
  /* 112c30d4 mov eax, dword ptr [0x112f1080] */
  EAX = (r32((uint32_t)(0x112f1080)));
  /* 112c30d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c30dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c30df mov dword ptr [0x112f1080], ecx */
  w32((uint32_t)(0x112f1080), (ECX));
  /* 112c30e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c30e8 mov esp, ebp */
  ESP = (EBP);
  /* 112c30ea pop ebp */
  EBP = (pop32());
  /* 112c30eb ret  */
  ESPCHK(0x112c30d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100030f0 @ 0x112c30f0 (912 bytes, 248 insns) */
void f_112c30f0(void) {
  FTRACE(0x112c30f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c30f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c30f1 mov ebp, esp */
  EBP = (ESP);
  /* 112c30f3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 112c30f8 call 0x112c71d0 */
  push32(0x112c30fdu); f_112c71d0();
  /* 112c30fd push edi */
  push32((uint32_t)(EDI));
  /* 112c30fe mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 112c3105 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 112c310a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c310c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 112c3112 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112c3114 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 112c3116 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 112c3117 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 112c311e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 112c3123 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c3125 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 112c312b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112c312d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 112c312f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 112c3130 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 112c3137 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 112c313c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c313e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 112c3144 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112c3146 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 112c3148 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 112c3149 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 112c314c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 112c3152 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3156 jl 0x112c315e */
  if ((C.sf!=C.of)) goto L_112c315e;
  /* 112c3158 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c315c jl 0x112c3166 */
  if ((C.sf!=C.of)) goto L_112c3166;
L_112c315e:;
  /* 112c315e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c3161 jmp 0x112c347b */
  goto L_112c347b;
L_112c3166:;
  /* 112c3166 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c316a jne 0x112c3210 */
  if (!C.zf) goto L_112c3210;
  /* 112c3170 push 0x112eda34 */
  push32((uint32_t)(0x112eda34u));
  /* 112c3175 call dword ptr [0x112f2378] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2378))), 0x112c317bu);
  /* 112c317b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c317d jle 0x112c3210 */
  if ((C.zf||C.sf!=C.of)) goto L_112c3210;
  /* 112c3183 cmp dword ptr [0x112ef530], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef530))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c318a jne 0x112c31ce */
  if (!C.zf) goto L_112c31ce;
  /* 112c318c push 0x112ea390 */
  push32((uint32_t)(0x112ea390u));
  /* 112c3191 call dword ptr [0x112f2374] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2374))), 0x112c3197u);
  /* 112c3197 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 112c319d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c31a4 je 0x112c31c6 */
  if (C.zf) goto L_112c31c6;
  /* 112c31a6 push 0x112ea384 */
  push32((uint32_t)(0x112ea384u));
  /* 112c31ab mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 112c31b1 push ecx */
  push32((uint32_t)(ECX));
  /* 112c31b2 call dword ptr [0x112f2370] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2370))), 0x112c31b8u);
  /* 112c31b8 mov dword ptr [0x112ef530], eax */
  w32((uint32_t)(0x112ef530), (EAX));
  /* 112c31bd cmp dword ptr [0x112ef530], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef530))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c31c4 jne 0x112c31ce */
  if (!C.zf) goto L_112c31ce;
L_112c31c6:;
  /* 112c31c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c31c9 jmp 0x112c347b */
  goto L_112c347b;
L_112c31ce:;
  /* 112c31ce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c31d1 push edx */
  push32((uint32_t)(EDX));
  /* 112c31d2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c31d5 push eax */
  push32((uint32_t)(EAX));
  /* 112c31d6 push 0x112ea350 */
  push32((uint32_t)(0x112ea350u));
  /* 112c31db lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 112c31e1 push ecx */
  push32((uint32_t)(ECX));
  /* 112c31e2 call dword ptr [0x112ef530] */
  call_ind((uint32_t)(r32((uint32_t)(0x112ef530))), 0x112c31e8u);
  /* 112c31e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c31eb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 112c31f1 push edx */
  push32((uint32_t)(EDX));
  /* 112c31f2 call dword ptr [0x112f236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f236c))), 0x112c31f8u);
  /* 112c31f8 push 0x112eda34 */
  push32((uint32_t)(0x112eda34u));
  /* 112c31fd call dword ptr [0x112f2368] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2368))), 0x112c3203u);
  /* 112c3203 call 0x112c2fe0 */
  push32(0x112c3208u); f_112c2fe0();
  /* 112c3208 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c320b jmp 0x112c347b */
  goto L_112c347b;
L_112c3210:;
  /* 112c3210 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3214 je 0x112c324d */
  if (C.zf) goto L_112c324d;
  /* 112c3216 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 112c321c push eax */
  push32((uint32_t)(EAX));
  /* 112c321d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c3220 push ecx */
  push32((uint32_t)(ECX));
  /* 112c3221 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 112c3226 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 112c322c push edx */
  push32((uint32_t)(EDX));
  /* 112c322d call 0x112c70d0 */
  push32(0x112c3232u); f_112c70d0();
  /* 112c3232 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3235 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c3237 jge 0x112c324d */
  if ((C.sf==C.of)) goto L_112c324d;
  /* 112c3239 push 0x112ea324 */
  push32((uint32_t)(0x112ea324u));
  /* 112c323e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 112c3244 push eax */
  push32((uint32_t)(EAX));
  /* 112c3245 call 0x112c6fe0 */
  push32(0x112c324au); f_112c6fe0();
  /* 112c324a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c324d:;
  /* 112c324d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3251 jne 0x112c3285 */
  if (!C.zf) goto L_112c3285;
  /* 112c3253 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3257 je 0x112c3265 */
  if (C.zf) goto L_112c3265;
  /* 112c3259 mov dword ptr [ebp - 0x3028], 0x112ea310 */
  w32((uint32_t)(EBP + -0x3028), (0x112ea310u));
  /* 112c3263 jmp 0x112c326f */
  goto L_112c326f;
L_112c3265:;
  /* 112c3265 mov dword ptr [ebp - 0x3028], 0x112ea2fc */
  w32((uint32_t)(EBP + -0x3028), (0x112ea2fcu));
L_112c326f:;
  /* 112c326f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 112c3275 push ecx */
  push32((uint32_t)(ECX));
  /* 112c3276 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 112c327c push edx */
  push32((uint32_t)(EDX));
  /* 112c327d call 0x112c6fe0 */
  push32(0x112c3282u); f_112c6fe0();
  /* 112c3282 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c3285:;
  /* 112c3285 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 112c328b push eax */
  push32((uint32_t)(EAX));
  /* 112c328c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 112c3292 push ecx */
  push32((uint32_t)(ECX));
  /* 112c3293 call 0x112c6ff0 */
  push32(0x112c3298u); f_112c6ff0();
  /* 112c3298 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c329b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c329f jne 0x112c32da */
  if (!C.zf) goto L_112c32da;
  /* 112c32a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c32a4 mov eax, dword ptr [edx*4 + 0x112eda38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x112eda38)));
  /* 112c32ab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 112c32ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c32b0 je 0x112c32c6 */
  if (C.zf) goto L_112c32c6;
  /* 112c32b2 push 0x112ea2f8 */
  push32((uint32_t)(0x112ea2f8u));
  /* 112c32b7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 112c32bd push ecx */
  push32((uint32_t)(ECX));
  /* 112c32be call 0x112c6ff0 */
  push32(0x112c32c3u); f_112c6ff0();
  /* 112c32c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c32c6:;
  /* 112c32c6 push 0x112ea2f4 */
  push32((uint32_t)(0x112ea2f4u));
  /* 112c32cb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 112c32d1 push edx */
  push32((uint32_t)(EDX));
  /* 112c32d2 call 0x112c6ff0 */
  push32(0x112c32d7u); f_112c6ff0();
  /* 112c32d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c32da:;
  /* 112c32da cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c32de je 0x112c3322 */
  if (C.zf) goto L_112c3322;
  /* 112c32e0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 112c32e6 push eax */
  push32((uint32_t)(EAX));
  /* 112c32e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c32ea push ecx */
  push32((uint32_t)(ECX));
  /* 112c32eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c32ee push edx */
  push32((uint32_t)(EDX));
  /* 112c32ef push 0x112ea2e8 */
  push32((uint32_t)(0x112ea2e8u));
  /* 112c32f4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 112c32f9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 112c32ff push eax */
  push32((uint32_t)(EAX));
  /* 112c3300 call 0x112c6ee0 */
  push32(0x112c3305u); f_112c6ee0();
  /* 112c3305 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3308 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c330a jge 0x112c3320 */
  if ((C.sf==C.of)) goto L_112c3320;
  /* 112c330c push 0x112ea324 */
  push32((uint32_t)(0x112ea324u));
  /* 112c3311 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 112c3317 push ecx */
  push32((uint32_t)(ECX));
  /* 112c3318 call 0x112c6fe0 */
  push32(0x112c331du); f_112c6fe0();
  /* 112c331d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c3320:;
  /* 112c3320 jmp 0x112c3338 */
  goto L_112c3338;
L_112c3322:;
  /* 112c3322 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 112c3328 push edx */
  push32((uint32_t)(EDX));
  /* 112c3329 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 112c332f push eax */
  push32((uint32_t)(EAX));
  /* 112c3330 call 0x112c6fe0 */
  push32(0x112c3335u); f_112c6fe0();
  /* 112c3335 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c3338:;
  /* 112c3338 cmp dword ptr [0x112f1080], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112f1080))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c333f je 0x112c337c */
  if (C.zf) goto L_112c337c;
  /* 112c3341 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 112c3347 push ecx */
  push32((uint32_t)(ECX));
  /* 112c3348 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 112c334e push edx */
  push32((uint32_t)(EDX));
  /* 112c334f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3352 push eax */
  push32((uint32_t)(EAX));
  /* 112c3353 call dword ptr [0x112f1080] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f1080))), 0x112c3359u);
  /* 112c3359 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c335c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c335e je 0x112c337c */
  if (C.zf) goto L_112c337c;
  /* 112c3360 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3364 jne 0x112c3371 */
  if (!C.zf) goto L_112c3371;
  /* 112c3366 push 0x112eda34 */
  push32((uint32_t)(0x112eda34u));
  /* 112c336b call dword ptr [0x112f2368] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2368))), 0x112c3371u);
L_112c3371:;
  /* 112c3371 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 112c3377 jmp 0x112c347b */
  goto L_112c347b;
L_112c337c:;
  /* 112c337c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c337f mov edx, dword ptr [ecx*4 + 0x112eda38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x112eda38)));
  /* 112c3386 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 112c3389 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c338b je 0x112c33cb */
  if (C.zf) goto L_112c33cb;
  /* 112c338d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3390 cmp dword ptr [eax*4 + 0x112eda44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x112eda44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3398 je 0x112c33cb */
  if (C.zf) goto L_112c33cb;
  /* 112c339a push 0 */
  push32((uint32_t)(0x0u));
  /* 112c339c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 112c33a2 push ecx */
  push32((uint32_t)(ECX));
  /* 112c33a3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 112c33a9 push edx */
  push32((uint32_t)(EDX));
  /* 112c33aa call 0x112c6e60 */
  push32(0x112c33afu); f_112c6e60();
  /* 112c33af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c33b2 push eax */
  push32((uint32_t)(EAX));
  /* 112c33b3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 112c33b9 push eax */
  push32((uint32_t)(EAX));
  /* 112c33ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c33bd mov edx, dword ptr [ecx*4 + 0x112eda44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x112eda44)));
  /* 112c33c4 push edx */
  push32((uint32_t)(EDX));
  /* 112c33c5 call dword ptr [0x112f2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2364))), 0x112c33cbu);
L_112c33cb:;
  /* 112c33cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c33ce mov ecx, dword ptr [eax*4 + 0x112eda38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x112eda38)));
  /* 112c33d5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 112c33d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c33da je 0x112c33e9 */
  if (C.zf) goto L_112c33e9;
  /* 112c33dc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 112c33e2 push edx */
  push32((uint32_t)(EDX));
  /* 112c33e3 call dword ptr [0x112f236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f236c))), 0x112c33e9u);
L_112c33e9:;
  /* 112c33e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c33ec mov ecx, dword ptr [eax*4 + 0x112eda38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x112eda38)));
  /* 112c33f3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 112c33f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c33f8 je 0x112c3468 */
  if (C.zf) goto L_112c3468;
  /* 112c33fa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c33fe je 0x112c341d */
  if (C.zf) goto L_112c341d;
  /* 112c3400 push 0xa */
  push32((uint32_t)(0xau));
  /* 112c3402 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 112c3408 push edx */
  push32((uint32_t)(EDX));
  /* 112c3409 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c340c push eax */
  push32((uint32_t)(EAX));
  /* 112c340d call 0x112c6b70 */
  push32(0x112c3412u); f_112c6b70();
  /* 112c3412 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3415 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 112c341b jmp 0x112c3427 */
  goto L_112c3427;
L_112c341d:;
  /* 112c341d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_112c3427:;
  /* 112c3427 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 112c342d push ecx */
  push32((uint32_t)(ECX));
  /* 112c342e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c3431 push edx */
  push32((uint32_t)(EDX));
  /* 112c3432 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 112c3438 push eax */
  push32((uint32_t)(EAX));
  /* 112c3439 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c343c push ecx */
  push32((uint32_t)(ECX));
  /* 112c343d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3440 push edx */
  push32((uint32_t)(EDX));
  /* 112c3441 call 0x112c3480 */
  push32(0x112c3446u); f_112c3480();
  /* 112c3446 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3449 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 112c344f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3453 jne 0x112c3460 */
  if (!C.zf) goto L_112c3460;
  /* 112c3455 push 0x112eda34 */
  push32((uint32_t)(0x112eda34u));
  /* 112c345a call dword ptr [0x112f2368] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2368))), 0x112c3460u);
L_112c3460:;
  /* 112c3460 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 112c3466 jmp 0x112c347b */
  goto L_112c347b;
L_112c3468:;
  /* 112c3468 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c346c jne 0x112c3479 */
  if (!C.zf) goto L_112c3479;
  /* 112c346e push 0x112eda34 */
  push32((uint32_t)(0x112eda34u));
  /* 112c3473 call dword ptr [0x112f2368] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2368))), 0x112c3479u);
L_112c3479:;
  /* 112c3479 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112c347b:;
  /* 112c347b pop edi */
  EDI = (pop32());
  /* 112c347c mov esp, ebp */
  ESP = (EBP);
  /* 112c347e pop ebp */
  EBP = (pop32());
  /* 112c347f ret  */
  ESPCHK(0x112c30f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003480 @ 0x112c3480 (780 bytes, 197 insns) */
void f_112c3480(void) {
  FTRACE(0x112c3480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c3480 push ebp */
  push32((uint32_t)(EBP));
  /* 112c3481 mov ebp, esp */
  EBP = (ESP);
  /* 112c3483 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 112c3488 call 0x112c71d0 */
  push32(0x112c348du); f_112c71d0();
L_112c348d:;
  /* 112c348d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3491 jne 0x112c34b8 */
  if (!C.zf) goto L_112c34b8;
  /* 112c3493 push 0x112ea4e0 */
  push32((uint32_t)(0x112ea4e0u));
  /* 112c3498 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c349a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 112c349f push 0x112ea4d4 */
  push32((uint32_t)(0x112ea4d4u));
  /* 112c34a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c34a6 call 0x112c30f0 */
  push32(0x112c34abu); f_112c30f0();
  /* 112c34ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c34ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c34b1 jne 0x112c34b8 */
  if (!C.zf) goto L_112c34b8;
  /* 112c34b3 call 0x112c2fe0 */
  push32(0x112c34b8u); f_112c2fe0();
L_112c34b8:;
  /* 112c34b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c34ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c34bc jne 0x112c348d */
  if (!C.zf) goto L_112c348d;
  /* 112c34be push 0x104 */
  push32((uint32_t)(0x104u));
  /* 112c34c3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 112c34c9 push ecx */
  push32((uint32_t)(ECX));
  /* 112c34ca push 0 */
  push32((uint32_t)(0x0u));
  /* 112c34cc call dword ptr [0x112f237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f237c))), 0x112c34d2u);
  /* 112c34d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c34d4 jne 0x112c34ea */
  if (!C.zf) goto L_112c34ea;
  /* 112c34d6 push 0x112ea4bc */
  push32((uint32_t)(0x112ea4bcu));
  /* 112c34db lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 112c34e1 push edx */
  push32((uint32_t)(EDX));
  /* 112c34e2 call 0x112c6fe0 */
  push32(0x112c34e7u); f_112c6fe0();
  /* 112c34e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c34ea:;
  /* 112c34ea lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 112c34f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c34f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c34f6 push ecx */
  push32((uint32_t)(ECX));
  /* 112c34f7 call 0x112c6e60 */
  push32(0x112c34fcu); f_112c6e60();
  /* 112c34fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c34ff cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3502 jbe 0x112c352d */
  if ((C.cf||C.zf)) goto L_112c352d;
  /* 112c3504 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c3507 push edx */
  push32((uint32_t)(EDX));
  /* 112c3508 call 0x112c6e60 */
  push32(0x112c350du); f_112c6e60();
  /* 112c350d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3510 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c3513 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 112c3517 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112c351a push 3 */
  push32((uint32_t)(0x3u));
  /* 112c351c push 0x112ea4b8 */
  push32((uint32_t)(0x112ea4b8u));
  /* 112c3521 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c3524 push eax */
  push32((uint32_t)(EAX));
  /* 112c3525 call 0x112c7850 */
  push32(0x112c352au); f_112c7850();
  /* 112c352a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c352d:;
  /* 112c352d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c3530 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 112c3536 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c353d je 0x112c3588 */
  if (C.zf) goto L_112c3588;
  /* 112c353f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 112c3545 push edx */
  push32((uint32_t)(EDX));
  /* 112c3546 call 0x112c6e60 */
  push32(0x112c354bu); f_112c6e60();
  /* 112c354b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c354e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3551 jbe 0x112c3588 */
  if ((C.cf||C.zf)) goto L_112c3588;
  /* 112c3553 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 112c3559 push eax */
  push32((uint32_t)(EAX));
  /* 112c355a call 0x112c6e60 */
  push32(0x112c355fu); f_112c6e60();
  /* 112c355f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3562 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 112c3568 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 112c356c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 112c3572 push 3 */
  push32((uint32_t)(0x3u));
  /* 112c3574 push 0x112ea4b8 */
  push32((uint32_t)(0x112ea4b8u));
  /* 112c3579 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 112c357f push eax */
  push32((uint32_t)(EAX));
  /* 112c3580 call 0x112c7850 */
  push32(0x112c3585u); f_112c7850();
  /* 112c3585 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c3588:;
  /* 112c3588 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c358c jne 0x112c359a */
  if (!C.zf) goto L_112c359a;
  /* 112c358e mov dword ptr [ebp - 0x1114], 0x112ea444 */
  w32((uint32_t)(EBP + -0x1114), (0x112ea444u));
  /* 112c3598 jmp 0x112c35a4 */
  goto L_112c35a4;
L_112c359a:;
  /* 112c359a mov dword ptr [ebp - 0x1114], 0x112ea1e4 */
  w32((uint32_t)(EBP + -0x1114), (0x112ea1e4u));
L_112c35a4:;
  /* 112c35a4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c35a7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112c35aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c35ac je 0x112c35b9 */
  if (C.zf) goto L_112c35b9;
  /* 112c35ae mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c35b1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 112c35b7 jmp 0x112c35c3 */
  goto L_112c35c3;
L_112c35b9:;
  /* 112c35b9 mov dword ptr [ebp - 0x1118], 0x112ea1e4 */
  w32((uint32_t)(EBP + -0x1118), (0x112ea1e4u));
L_112c35c3:;
  /* 112c35c3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c35c6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112c35c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c35cb je 0x112c35df */
  if (C.zf) goto L_112c35df;
  /* 112c35cd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c35d1 jne 0x112c35df */
  if (!C.zf) goto L_112c35df;
  /* 112c35d3 mov dword ptr [ebp - 0x111c], 0x112ea434 */
  w32((uint32_t)(EBP + -0x111c), (0x112ea434u));
  /* 112c35dd jmp 0x112c35e9 */
  goto L_112c35e9;
L_112c35df:;
  /* 112c35df mov dword ptr [ebp - 0x111c], 0x112ea1e4 */
  w32((uint32_t)(EBP + -0x111c), (0x112ea1e4u));
L_112c35e9:;
  /* 112c35e9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c35ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112c35ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c35f1 je 0x112c35ff */
  if (C.zf) goto L_112c35ff;
  /* 112c35f3 mov dword ptr [ebp - 0x1120], 0x112ea430 */
  w32((uint32_t)(EBP + -0x1120), (0x112ea430u));
  /* 112c35fd jmp 0x112c3609 */
  goto L_112c3609;
L_112c35ff:;
  /* 112c35ff mov dword ptr [ebp - 0x1120], 0x112ea1e4 */
  w32((uint32_t)(EBP + -0x1120), (0x112ea1e4u));
L_112c3609:;
  /* 112c3609 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c360d je 0x112c361a */
  if (C.zf) goto L_112c361a;
  /* 112c360f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c3612 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 112c3618 jmp 0x112c3624 */
  goto L_112c3624;
L_112c361a:;
  /* 112c361a mov dword ptr [ebp - 0x1124], 0x112ea1e4 */
  w32((uint32_t)(EBP + -0x1124), (0x112ea1e4u));
L_112c3624:;
  /* 112c3624 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3628 je 0x112c3636 */
  if (C.zf) goto L_112c3636;
  /* 112c362a mov dword ptr [ebp - 0x1128], 0x112ea428 */
  w32((uint32_t)(EBP + -0x1128), (0x112ea428u));
  /* 112c3634 jmp 0x112c3640 */
  goto L_112c3640;
L_112c3636:;
  /* 112c3636 mov dword ptr [ebp - 0x1128], 0x112ea1e4 */
  w32((uint32_t)(EBP + -0x1128), (0x112ea1e4u));
L_112c3640:;
  /* 112c3640 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3644 je 0x112c3651 */
  if (C.zf) goto L_112c3651;
  /* 112c3646 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c3649 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 112c364f jmp 0x112c365b */
  goto L_112c365b;
L_112c3651:;
  /* 112c3651 mov dword ptr [ebp - 0x112c], 0x112ea1e4 */
  w32((uint32_t)(EBP + -0x112c), (0x112ea1e4u));
L_112c365b:;
  /* 112c365b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c365f je 0x112c366d */
  if (C.zf) goto L_112c366d;
  /* 112c3661 mov dword ptr [ebp - 0x1130], 0x112ea420 */
  w32((uint32_t)(EBP + -0x1130), (0x112ea420u));
  /* 112c366b jmp 0x112c3677 */
  goto L_112c3677;
L_112c366d:;
  /* 112c366d mov dword ptr [ebp - 0x1130], 0x112ea1e4 */
  w32((uint32_t)(EBP + -0x1130), (0x112ea1e4u));
L_112c3677:;
  /* 112c3677 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c367e je 0x112c368e */
  if (C.zf) goto L_112c368e;
  /* 112c3680 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 112c3686 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 112c368c jmp 0x112c3698 */
  goto L_112c3698;
L_112c368e:;
  /* 112c368e mov dword ptr [ebp - 0x1134], 0x112ea1e4 */
  w32((uint32_t)(EBP + -0x1134), (0x112ea1e4u));
L_112c3698:;
  /* 112c3698 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c369f je 0x112c36ad */
  if (C.zf) goto L_112c36ad;
  /* 112c36a1 mov dword ptr [ebp - 0x1138], 0x112ea414 */
  w32((uint32_t)(EBP + -0x1138), (0x112ea414u));
  /* 112c36ab jmp 0x112c36b7 */
  goto L_112c36b7;
L_112c36ad:;
  /* 112c36ad mov dword ptr [ebp - 0x1138], 0x112ea1e4 */
  w32((uint32_t)(EBP + -0x1138), (0x112ea1e4u));
L_112c36b7:;
  /* 112c36b7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 112c36bd push edx */
  push32((uint32_t)(EDX));
  /* 112c36be mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 112c36c4 push eax */
  push32((uint32_t)(EAX));
  /* 112c36c5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 112c36cb push ecx */
  push32((uint32_t)(ECX));
  /* 112c36cc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 112c36d2 push edx */
  push32((uint32_t)(EDX));
  /* 112c36d3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 112c36d9 push eax */
  push32((uint32_t)(EAX));
  /* 112c36da mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 112c36e0 push ecx */
  push32((uint32_t)(ECX));
  /* 112c36e1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 112c36e7 push edx */
  push32((uint32_t)(EDX));
  /* 112c36e8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 112c36ee push eax */
  push32((uint32_t)(EAX));
  /* 112c36ef mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 112c36f5 push ecx */
  push32((uint32_t)(ECX));
  /* 112c36f6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 112c36fc push edx */
  push32((uint32_t)(EDX));
  /* 112c36fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c3700 push eax */
  push32((uint32_t)(EAX));
  /* 112c3701 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3704 mov edx, dword ptr [ecx*4 + 0x112eda50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x112eda50)));
  /* 112c370b push edx */
  push32((uint32_t)(EDX));
  /* 112c370c push 0x112ea3c0 */
  push32((uint32_t)(0x112ea3c0u));
  /* 112c3711 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 112c3716 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 112c371c push eax */
  push32((uint32_t)(EAX));
  /* 112c371d call 0x112c6ee0 */
  push32(0x112c3722u); f_112c6ee0();
  /* 112c3722 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3725 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c3727 jge 0x112c373d */
  if ((C.sf==C.of)) goto L_112c373d;
  /* 112c3729 push 0x112ea324 */
  push32((uint32_t)(0x112ea324u));
  /* 112c372e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 112c3734 push ecx */
  push32((uint32_t)(ECX));
  /* 112c3735 call 0x112c6fe0 */
  push32(0x112c373au); f_112c6fe0();
  /* 112c373a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c373d:;
  /* 112c373d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 112c3742 push 0x112ea39c */
  push32((uint32_t)(0x112ea39cu));
  /* 112c3747 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 112c374d push edx */
  push32((uint32_t)(EDX));
  /* 112c374e call 0x112c7790 */
  push32(0x112c3753u); f_112c7790();
  /* 112c3753 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3756 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 112c375c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3763 jne 0x112c3776 */
  if (!C.zf) goto L_112c3776;
  /* 112c3765 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 112c3767 call 0x112c74d0 */
  push32(0x112c376cu); f_112c74d0();
  /* 112c376c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c376f push 3 */
  push32((uint32_t)(0x3u));
  /* 112c3771 call 0x112c37f0 */
  push32(0x112c3776u); f_112c37f0();
L_112c3776:;
  /* 112c3776 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c377d jne 0x112c3786 */
  if (!C.zf) goto L_112c3786;
  /* 112c377f mov eax, 1 */
  EAX = (0x1u);
  /* 112c3784 jmp 0x112c3788 */
  goto L_112c3788;
L_112c3786:;
  /* 112c3786 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112c3788:;
  /* 112c3788 mov esp, ebp */
  ESP = (EBP);
  /* 112c378a pop ebp */
  EBP = (pop32());
  /* 112c378b ret  */
  ESPCHK(0x112c3480u, _esp0);
  ESP += 4; return;
}

/* FUN_10003790 @ 0x112c3790 (56 bytes, 15 insns) */
void f_112c3790(void) {
  FTRACE(0x112c3790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c3790 push ebp */
  push32((uint32_t)(EBP));
  /* 112c3791 mov ebp, esp */
  EBP = (ESP);
  /* 112c3793 cmp dword ptr [0x112f107c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112f107c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c379a je 0x112c37a2 */
  if (C.zf) goto L_112c37a2;
  /* 112c379c call dword ptr [0x112f107c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f107c))), 0x112c37a2u);
L_112c37a2:;
  /* 112c37a2 push 0x112ed418 */
  push32((uint32_t)(0x112ed418u));
  /* 112c37a7 push 0x112ed208 */
  push32((uint32_t)(0x112ed208u));
  /* 112c37ac call 0x112c3960 */
  push32(0x112c37b1u); f_112c3960();
  /* 112c37b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c37b4 push 0x112ed104 */
  push32((uint32_t)(0x112ed104u));
  /* 112c37b9 push 0x112ed000 */
  push32((uint32_t)(0x112ed000u));
  /* 112c37be call 0x112c3960 */
  push32(0x112c37c3u); f_112c3960();
  /* 112c37c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c37c6 pop ebp */
  EBP = (pop32());
  /* 112c37c7 ret  */
  ESPCHK(0x112c3790u, _esp0);
  ESP += 4; return;
}

/* FUN_100037d0 @ 0x112c37d0 (21 bytes, 10 insns) */
void f_112c37d0(void) {
  FTRACE(0x112c37d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c37d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c37d1 mov ebp, esp */
  EBP = (ESP);
  /* 112c37d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c37d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c37d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c37da push eax */
  push32((uint32_t)(EAX));
  /* 112c37db call 0x112c3850 */
  push32(0x112c37e0u); f_112c3850();
  /* 112c37e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c37e3 pop ebp */
  EBP = (pop32());
  /* 112c37e4 ret  */
  ESPCHK(0x112c37d0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x112c37f0 (21 bytes, 10 insns) */
void f_112c37f0(void) {
  FTRACE(0x112c37f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c37f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c37f1 mov ebp, esp */
  EBP = (ESP);
  /* 112c37f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c37f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c37f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c37fa push eax */
  push32((uint32_t)(EAX));
  /* 112c37fb call 0x112c3850 */
  push32(0x112c3800u); f_112c3850();
  /* 112c3800 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3803 pop ebp */
  EBP = (pop32());
  /* 112c3804 ret  */
  ESPCHK(0x112c37f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003810 @ 0x112c3810 (19 bytes, 9 insns) */
void f_112c3810(void) {
  FTRACE(0x112c3810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c3810 push ebp */
  push32((uint32_t)(EBP));
  /* 112c3811 mov ebp, esp */
  EBP = (ESP);
  /* 112c3813 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c3815 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c3817 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c3819 call 0x112c3850 */
  push32(0x112c381eu); f_112c3850();
  /* 112c381e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3821 pop ebp */
  EBP = (pop32());
  /* 112c3822 ret  */
  ESPCHK(0x112c3810u, _esp0);
  ESP += 4; return;
}

/* FUN_10003830 @ 0x112c3830 (19 bytes, 9 insns) */
void f_112c3830(void) {
  FTRACE(0x112c3830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c3830 push ebp */
  push32((uint32_t)(EBP));
  /* 112c3831 mov ebp, esp */
  EBP = (ESP);
  /* 112c3833 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c3835 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c3837 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c3839 call 0x112c3850 */
  push32(0x112c383eu); f_112c3850();
  /* 112c383e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3841 pop ebp */
  EBP = (pop32());
  /* 112c3842 ret  */
  ESPCHK(0x112c3830u, _esp0);
  ESP += 4; return;
}

/* FUN_10003850 @ 0x112c3850 (227 bytes, 61 insns) */
void f_112c3850(void) {
  FTRACE(0x112c3850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c3850 push ebp */
  push32((uint32_t)(EBP));
  /* 112c3851 mov ebp, esp */
  EBP = (ESP);
  /* 112c3853 push ecx */
  push32((uint32_t)(ECX));
  /* 112c3854 call 0x112c3940 */
  push32(0x112c3859u); f_112c3940();
  /* 112c3859 cmp dword ptr [0x112ef574], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112ef574))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3860 jne 0x112c3873 */
  if (!C.zf) goto L_112c3873;
  /* 112c3862 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3865 push eax */
  push32((uint32_t)(EAX));
  /* 112c3866 call dword ptr [0x112f2388] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2388))), 0x112c386cu);
  /* 112c386c push eax */
  push32((uint32_t)(EAX));
  /* 112c386d call dword ptr [0x112f2384] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2384))), 0x112c3873u);
L_112c3873:;
  /* 112c3873 mov dword ptr [0x112ef570], 1 */
  w32((uint32_t)(0x112ef570), (0x1u));
  /* 112c387d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 112c3880 mov byte ptr [0x112ef56c], cl */
  w8((uint32_t)(0x112ef56c), (CL));
  /* 112c3886 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c388a jne 0x112c38d3 */
  if (!C.zf) goto L_112c38d3;
  /* 112c388c cmp dword ptr [0x112f1078], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112f1078))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3893 je 0x112c38c1 */
  if (C.zf) goto L_112c38c1;
  /* 112c3895 mov edx, dword ptr [0x112f1074] */
  EDX = (r32((uint32_t)(0x112f1074)));
  /* 112c389b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_112c389e:;
  /* 112c389e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c38a1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c38a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c38a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c38aa cmp ecx, dword ptr [0x112f1078] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x112f1078))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c38b0 jb 0x112c38c1 */
  if (C.cf) goto L_112c38c1;
  /* 112c38b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c38b5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c38b8 je 0x112c38bf */
  if (C.zf) goto L_112c38bf;
  /* 112c38ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c38bd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x112c38bfu);
L_112c38bf:;
  /* 112c38bf jmp 0x112c389e */
  goto L_112c389e;
L_112c38c1:;
  /* 112c38c1 push 0x112ed724 */
  push32((uint32_t)(0x112ed724u));
  /* 112c38c6 push 0x112ed51c */
  push32((uint32_t)(0x112ed51cu));
  /* 112c38cb call 0x112c3960 */
  push32(0x112c38d0u); f_112c3960();
  /* 112c38d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c38d3:;
  /* 112c38d3 push 0x112ed92c */
  push32((uint32_t)(0x112ed92cu));
  /* 112c38d8 push 0x112ed828 */
  push32((uint32_t)(0x112ed828u));
  /* 112c38dd call 0x112c3960 */
  push32(0x112c38e2u); f_112c3960();
  /* 112c38e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c38e5 cmp dword ptr [0x112ef578], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef578))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c38ec jne 0x112c390e */
  if (!C.zf) goto L_112c390e;
  /* 112c38ee push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112c38f0 call 0x112c5540 */
  push32(0x112c38f5u); f_112c5540();
  /* 112c38f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c38f8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 112c38fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c38fd je 0x112c390e */
  if (C.zf) goto L_112c390e;
  /* 112c38ff mov dword ptr [0x112ef578], 1 */
  w32((uint32_t)(0x112ef578), (0x1u));
  /* 112c3909 call 0x112c5e50 */
  push32(0x112c390eu); f_112c5e50();
L_112c390e:;
  /* 112c390e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3912 je 0x112c391b */
  if (C.zf) goto L_112c391b;
  /* 112c3914 call 0x112c3950 */
  push32(0x112c3919u); f_112c3950();
  /* 112c3919 jmp 0x112c392f */
  goto L_112c392f;
L_112c391b:;
  /* 112c391b mov dword ptr [0x112ef574], 1 */
  w32((uint32_t)(0x112ef574), (0x1u));
  /* 112c3925 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3928 push ecx */
  push32((uint32_t)(ECX));
  /* 112c3929 call dword ptr [0x112f2380] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2380))), 0x112c392fu);
L_112c392f:;
  /* 112c392f mov esp, ebp */
  ESP = (EBP);
  /* 112c3931 pop ebp */
  EBP = (pop32());
  /* 112c3932 ret  */
  ESPCHK(0x112c3850u, _esp0);
  ESP += 4; return;
}

/* FUN_10003940 @ 0x112c3940 (15 bytes, 7 insns) */
void f_112c3940(void) {
  FTRACE(0x112c3940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c3940 push ebp */
  push32((uint32_t)(EBP));
  /* 112c3941 mov ebp, esp */
  EBP = (ESP);
  /* 112c3943 push 0xd */
  push32((uint32_t)(0xdu));
  /* 112c3945 call 0x112c7a30 */
  push32(0x112c394au); f_112c7a30();
  /* 112c394a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c394d pop ebp */
  EBP = (pop32());
  /* 112c394e ret  */
  ESPCHK(0x112c3940u, _esp0);
  ESP += 4; return;
}

/* FUN_10003950 @ 0x112c3950 (15 bytes, 7 insns) */
void f_112c3950(void) {
  FTRACE(0x112c3950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c3950 push ebp */
  push32((uint32_t)(EBP));
  /* 112c3951 mov ebp, esp */
  EBP = (ESP);
  /* 112c3953 push 0xd */
  push32((uint32_t)(0xdu));
  /* 112c3955 call 0x112c7ad0 */
  push32(0x112c395au); f_112c7ad0();
  /* 112c395a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c395d pop ebp */
  EBP = (pop32());
  /* 112c395e ret  */
  ESPCHK(0x112c3950u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x112c3960 (37 bytes, 16 insns) */
void f_112c3960(void) {
  FTRACE(0x112c3960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c3960 push ebp */
  push32((uint32_t)(EBP));
  /* 112c3961 mov ebp, esp */
  EBP = (ESP);
L_112c3963:;
  /* 112c3963 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3966 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3969 jae 0x112c3983 */
  if (!C.cf) goto L_112c3983;
  /* 112c396b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c396e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3971 je 0x112c3978 */
  if (C.zf) goto L_112c3978;
  /* 112c3973 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3976 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x112c3978u);
L_112c3978:;
  /* 112c3978 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c397b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c397e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112c3981 jmp 0x112c3963 */
  goto L_112c3963;
L_112c3983:;
  /* 112c3983 pop ebp */
  EBP = (pop32());
  /* 112c3984 ret  */
  ESPCHK(0x112c3960u, _esp0);
  ESP += 4; return;
}

/* FUN_10003990 @ 0x112c3990 (130 bytes, 42 insns) */
void f_112c3990(void) {
  FTRACE(0x112c3990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c3990 push ebp */
  push32((uint32_t)(EBP));
  /* 112c3991 mov ebp, esp */
  EBP = (ESP);
  /* 112c3993 push ecx */
  push32((uint32_t)(ECX));
  /* 112c3994 call 0x112c7950 */
  push32(0x112c3999u); f_112c7950();
  /* 112c3999 call dword ptr [0x112f22b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22b4))), 0x112c399fu);
  /* 112c399f mov dword ptr [0x112eda5c], eax */
  w32((uint32_t)(0x112eda5c), (EAX));
  /* 112c39a4 cmp dword ptr [0x112eda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x112eda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c39ab jne 0x112c39b1 */
  if (!C.zf) goto L_112c39b1;
  /* 112c39ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c39af jmp 0x112c3a0e */
  goto L_112c3a0e;
L_112c39b1:;
  /* 112c39b1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 112c39b3 push 0x112ea4f8 */
  push32((uint32_t)(0x112ea4f8u));
  /* 112c39b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c39ba push 0x74 */
  push32((uint32_t)(0x74u));
  /* 112c39bc push 1 */
  push32((uint32_t)(0x1u));
  /* 112c39be call 0x112c4440 */
  push32(0x112c39c3u); f_112c4440();
  /* 112c39c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c39c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c39c9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c39cd je 0x112c39e4 */
  if (C.zf) goto L_112c39e4;
  /* 112c39cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c39d2 push eax */
  push32((uint32_t)(EAX));
  /* 112c39d3 mov ecx, dword ptr [0x112eda5c] */
  ECX = (r32((uint32_t)(0x112eda5c)));
  /* 112c39d9 push ecx */
  push32((uint32_t)(ECX));
  /* 112c39da call dword ptr [0x112f22b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22b0))), 0x112c39e0u);
  /* 112c39e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c39e2 jne 0x112c39e8 */
  if (!C.zf) goto L_112c39e8;
L_112c39e4:;
  /* 112c39e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c39e6 jmp 0x112c3a0e */
  goto L_112c3a0e;
L_112c39e8:;
  /* 112c39e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c39eb push edx */
  push32((uint32_t)(EDX));
  /* 112c39ec call 0x112c3a50 */
  push32(0x112c39f1u); f_112c3a50();
  /* 112c39f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c39f4 call dword ptr [0x112f238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f238c))), 0x112c39fau);
  /* 112c39fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c39fd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112c39ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c3a02 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 112c3a09 mov eax, 1 */
  EAX = (0x1u);
L_112c3a0e:;
  /* 112c3a0e mov esp, ebp */
  ESP = (EBP);
  /* 112c3a10 pop ebp */
  EBP = (pop32());
  /* 112c3a11 ret  */
  ESPCHK(0x112c3990u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a20 @ 0x112c3a20 (41 bytes, 11 insns) */
void f_112c3a20(void) {
  FTRACE(0x112c3a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c3a20 push ebp */
  push32((uint32_t)(EBP));
  /* 112c3a21 mov ebp, esp */
  EBP = (ESP);
  /* 112c3a23 call 0x112c7990 */
  push32(0x112c3a28u); f_112c7990();
  /* 112c3a28 cmp dword ptr [0x112eda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x112eda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3a2f je 0x112c3a47 */
  if (C.zf) goto L_112c3a47;
  /* 112c3a31 mov eax, dword ptr [0x112eda5c] */
  EAX = (r32((uint32_t)(0x112eda5c)));
  /* 112c3a36 push eax */
  push32((uint32_t)(EAX));
  /* 112c3a37 call dword ptr [0x112f2398] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2398))), 0x112c3a3du);
  /* 112c3a3d mov dword ptr [0x112eda5c], 0xffffffff */
  w32((uint32_t)(0x112eda5c), (0xffffffffu));
L_112c3a47:;
  /* 112c3a47 pop ebp */
  EBP = (pop32());
  /* 112c3a48 ret  */
  ESPCHK(0x112c3a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a50 @ 0x112c3a50 (25 bytes, 8 insns) */
void f_112c3a50(void) {
  FTRACE(0x112c3a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c3a50 push ebp */
  push32((uint32_t)(EBP));
  /* 112c3a51 mov ebp, esp */
  EBP = (ESP);
  /* 112c3a53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3a56 mov dword ptr [eax + 0x50], 0x112edc00 */
  w32((uint32_t)(EAX + 0x50), (0x112edc00u));
  /* 112c3a5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3a60 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 112c3a67 pop ebp */
  EBP = (pop32());
  /* 112c3a68 ret  */
  ESPCHK(0x112c3a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a70 @ 0x112c3a70 (152 bytes, 48 insns) */
void f_112c3a70(void) {
  FTRACE(0x112c3a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c3a70 push ebp */
  push32((uint32_t)(EBP));
  /* 112c3a71 mov ebp, esp */
  EBP = (ESP);
  /* 112c3a73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c3a76 call dword ptr [0x112f23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23a4))), 0x112c3a7cu);
  /* 112c3a7c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112c3a7f mov eax, dword ptr [0x112eda5c] */
  EAX = (r32((uint32_t)(0x112eda5c)));
  /* 112c3a84 push eax */
  push32((uint32_t)(EAX));
  /* 112c3a85 call dword ptr [0x112f23a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23a0))), 0x112c3a8bu);
  /* 112c3a8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c3a8e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3a92 jne 0x112c3af7 */
  if (!C.zf) goto L_112c3af7;
  /* 112c3a94 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 112c3a99 push 0x112ea4f8 */
  push32((uint32_t)(0x112ea4f8u));
  /* 112c3a9e push 2 */
  push32((uint32_t)(0x2u));
  /* 112c3aa0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 112c3aa2 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c3aa4 call 0x112c4440 */
  push32(0x112c3aa9u); f_112c4440();
  /* 112c3aa9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3aac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c3aaf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3ab3 je 0x112c3aed */
  if (C.zf) goto L_112c3aed;
  /* 112c3ab5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c3ab8 push ecx */
  push32((uint32_t)(ECX));
  /* 112c3ab9 mov edx, dword ptr [0x112eda5c] */
  EDX = (r32((uint32_t)(0x112eda5c)));
  /* 112c3abf push edx */
  push32((uint32_t)(EDX));
  /* 112c3ac0 call dword ptr [0x112f22b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22b0))), 0x112c3ac6u);
  /* 112c3ac6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c3ac8 je 0x112c3aed */
  if (C.zf) goto L_112c3aed;
  /* 112c3aca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c3acd push eax */
  push32((uint32_t)(EAX));
  /* 112c3ace call 0x112c3a50 */
  push32(0x112c3ad3u); f_112c3a50();
  /* 112c3ad3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3ad6 call dword ptr [0x112f238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f238c))), 0x112c3adcu);
  /* 112c3adc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c3adf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112c3ae1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c3ae4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 112c3aeb jmp 0x112c3af7 */
  goto L_112c3af7;
L_112c3aed:;
  /* 112c3aed push 0x10 */
  push32((uint32_t)(0x10u));
  /* 112c3aef call 0x112c2fa0 */
  push32(0x112c3af4u); f_112c2fa0();
  /* 112c3af4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c3af7:;
  /* 112c3af7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c3afa push eax */
  push32((uint32_t)(EAX));
  /* 112c3afb call dword ptr [0x112f239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f239c))), 0x112c3b01u);
  /* 112c3b01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c3b04 mov esp, ebp */
  ESP = (EBP);
  /* 112c3b06 pop ebp */
  EBP = (pop32());
  /* 112c3b07 ret  */
  ESPCHK(0x112c3a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b10 @ 0x112c3b10 (263 bytes, 86 insns) */
void f_112c3b10(void) {
  FTRACE(0x112c3b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c3b10 push ebp */
  push32((uint32_t)(EBP));
  /* 112c3b11 mov ebp, esp */
  EBP = (ESP);
  /* 112c3b13 cmp dword ptr [0x112eda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x112eda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3b1a je 0x112c3c15 */
  if (C.zf) goto L_112c3c15;
  /* 112c3b20 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3b24 jne 0x112c3b35 */
  if (!C.zf) goto L_112c3b35;
  /* 112c3b26 mov eax, dword ptr [0x112eda5c] */
  EAX = (r32((uint32_t)(0x112eda5c)));
  /* 112c3b2b push eax */
  push32((uint32_t)(EAX));
  /* 112c3b2c call dword ptr [0x112f23a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23a0))), 0x112c3b32u);
  /* 112c3b32 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_112c3b35:;
  /* 112c3b35 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3b39 je 0x112c3c06 */
  if (C.zf) goto L_112c3c06;
  /* 112c3b3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3b42 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3b46 je 0x112c3b59 */
  if (C.zf) goto L_112c3b59;
  /* 112c3b48 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c3b4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3b4d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 112c3b50 push eax */
  push32((uint32_t)(EAX));
  /* 112c3b51 call 0x112c4ac0 */
  push32(0x112c3b56u); f_112c4ac0();
  /* 112c3b56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c3b59:;
  /* 112c3b59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3b5c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3b60 je 0x112c3b73 */
  if (C.zf) goto L_112c3b73;
  /* 112c3b62 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c3b64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3b67 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 112c3b6a push eax */
  push32((uint32_t)(EAX));
  /* 112c3b6b call 0x112c4ac0 */
  push32(0x112c3b70u); f_112c4ac0();
  /* 112c3b70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c3b73:;
  /* 112c3b73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3b76 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3b7a je 0x112c3b8d */
  if (C.zf) goto L_112c3b8d;
  /* 112c3b7c push 2 */
  push32((uint32_t)(0x2u));
  /* 112c3b7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3b81 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 112c3b84 push eax */
  push32((uint32_t)(EAX));
  /* 112c3b85 call 0x112c4ac0 */
  push32(0x112c3b8au); f_112c4ac0();
  /* 112c3b8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c3b8d:;
  /* 112c3b8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3b90 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3b94 je 0x112c3ba7 */
  if (C.zf) goto L_112c3ba7;
  /* 112c3b96 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c3b98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3b9b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 112c3b9e push eax */
  push32((uint32_t)(EAX));
  /* 112c3b9f call 0x112c4ac0 */
  push32(0x112c3ba4u); f_112c4ac0();
  /* 112c3ba4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c3ba7:;
  /* 112c3ba7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3baa cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3bae je 0x112c3bc1 */
  if (C.zf) goto L_112c3bc1;
  /* 112c3bb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c3bb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3bb5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 112c3bb8 push eax */
  push32((uint32_t)(EAX));
  /* 112c3bb9 call 0x112c4ac0 */
  push32(0x112c3bbeu); f_112c4ac0();
  /* 112c3bbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c3bc1:;
  /* 112c3bc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3bc4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3bc8 je 0x112c3bdb */
  if (C.zf) goto L_112c3bdb;
  /* 112c3bca push 2 */
  push32((uint32_t)(0x2u));
  /* 112c3bcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3bcf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 112c3bd2 push eax */
  push32((uint32_t)(EAX));
  /* 112c3bd3 call 0x112c4ac0 */
  push32(0x112c3bd8u); f_112c4ac0();
  /* 112c3bd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c3bdb:;
  /* 112c3bdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3bde cmp dword ptr [ecx + 0x50], 0x112edc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x112edc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3be5 je 0x112c3bf8 */
  if (C.zf) goto L_112c3bf8;
  /* 112c3be7 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c3be9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3bec mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 112c3bef push eax */
  push32((uint32_t)(EAX));
  /* 112c3bf0 call 0x112c4ac0 */
  push32(0x112c3bf5u); f_112c4ac0();
  /* 112c3bf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c3bf8:;
  /* 112c3bf8 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c3bfa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c3bfd push ecx */
  push32((uint32_t)(ECX));
  /* 112c3bfe call 0x112c4ac0 */
  push32(0x112c3c03u); f_112c4ac0();
  /* 112c3c03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c3c06:;
  /* 112c3c06 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c3c08 mov edx, dword ptr [0x112eda5c] */
  EDX = (r32((uint32_t)(0x112eda5c)));
  /* 112c3c0e push edx */
  push32((uint32_t)(EDX));
  /* 112c3c0f call dword ptr [0x112f22b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f22b0))), 0x112c3c15u);
L_112c3c15:;
  /* 112c3c15 pop ebp */
  EBP = (pop32());
  /* 112c3c16 ret  */
  ESPCHK(0x112c3b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c20 @ 0x112c3c20 (11 bytes, 5 insns) */
void f_112c3c20(void) {
  FTRACE(0x112c3c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c3c20 push ebp */
  push32((uint32_t)(EBP));
  /* 112c3c21 mov ebp, esp */
  EBP = (ESP);
  /* 112c3c23 call dword ptr [0x112f238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f238c))), 0x112c3c29u);
  /* 112c3c29 pop ebp */
  EBP = (pop32());
  /* 112c3c2a ret  */
  ESPCHK(0x112c3c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c30 @ 0x112c3c30 (11 bytes, 5 insns) */
void f_112c3c30(void) {
  FTRACE(0x112c3c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c3c30 push ebp */
  push32((uint32_t)(EBP));
  /* 112c3c31 mov ebp, esp */
  EBP = (ESP);
  /* 112c3c33 call dword ptr [0x112f23a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23a8))), 0x112c3c39u);
  /* 112c3c39 pop ebp */
  EBP = (pop32());
  /* 112c3c3a ret  */
  ESPCHK(0x112c3c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c40 @ 0x112c3c40 (804 bytes, 236 insns) */
void f_112c3c40(void) {
  FTRACE(0x112c3c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c3c40 push ebp */
  push32((uint32_t)(EBP));
  /* 112c3c41 mov ebp, esp */
  EBP = (ESP);
  /* 112c3c43 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c3c46 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 112c3c4b push 0x112ea504 */
  push32((uint32_t)(0x112ea504u));
  /* 112c3c50 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c3c52 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 112c3c57 call 0x112c4030 */
  push32(0x112c3c5cu); f_112c4030();
  /* 112c3c5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3c5f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 112c3c62 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3c66 jne 0x112c3c72 */
  if (!C.zf) goto L_112c3c72;
  /* 112c3c68 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 112c3c6a call 0x112c2fa0 */
  push32(0x112c3c6fu); f_112c2fa0();
  /* 112c3c6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c3c72:;
  /* 112c3c72 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3c75 mov dword ptr [0x112f0f20], eax */
  w32((uint32_t)(0x112f0f20), (EAX));
  /* 112c3c7a mov dword ptr [0x112f105c], 0x20 */
  w32((uint32_t)(0x112f105c), (0x20u));
  /* 112c3c84 jmp 0x112c3c8f */
  goto L_112c3c8f;
L_112c3c86:;
  /* 112c3c86 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3c89 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3c8c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_112c3c8f:;
  /* 112c3c8f mov edx, dword ptr [0x112f0f20] */
  EDX = (r32((uint32_t)(0x112f0f20)));
  /* 112c3c95 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3c9b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3c9e jae 0x112c3cc3 */
  if (!C.cf) goto L_112c3cc3;
  /* 112c3ca0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3ca3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 112c3ca7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3caa mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 112c3cb0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3cb3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 112c3cb7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3cba mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 112c3cc1 jmp 0x112c3c86 */
  goto L_112c3c86;
L_112c3cc3:;
  /* 112c3cc3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 112c3cc6 push ecx */
  push32((uint32_t)(ECX));
  /* 112c3cc7 call dword ptr [0x112f23b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23b4))), 0x112c3ccdu);
  /* 112c3ccd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 112c3cd0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 112c3cd6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c3cd8 je 0x112c3e65 */
  if (C.zf) goto L_112c3e65;
  /* 112c3cde cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3ce2 je 0x112c3e65 */
  if (C.zf) goto L_112c3e65;
  /* 112c3ce8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c3ceb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112c3ced mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 112c3cf0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c3cf3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3cf6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112c3cf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c3cfc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3cff mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 112c3d02 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3d09 jge 0x112c3d13 */
  if ((C.sf==C.of)) goto L_112c3d13;
  /* 112c3d0b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 112c3d0e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 112c3d11 jmp 0x112c3d1a */
  goto L_112c3d1a;
L_112c3d13:;
  /* 112c3d13 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_112c3d1a:;
  /* 112c3d1a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 112c3d1d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 112c3d20 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 112c3d27 jmp 0x112c3d32 */
  goto L_112c3d32;
L_112c3d29:;
  /* 112c3d29 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 112c3d2c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3d2f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_112c3d32:;
  /* 112c3d32 mov ecx, dword ptr [0x112f105c] */
  ECX = (r32((uint32_t)(0x112f105c)));
  /* 112c3d38 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3d3b jge 0x112c3dd2 */
  if ((C.sf==C.of)) goto L_112c3dd2;
  /* 112c3d41 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 112c3d46 push 0x112ea504 */
  push32((uint32_t)(0x112ea504u));
  /* 112c3d4b push 2 */
  push32((uint32_t)(0x2u));
  /* 112c3d4d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 112c3d52 call 0x112c4030 */
  push32(0x112c3d57u); f_112c4030();
  /* 112c3d57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3d5a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 112c3d5d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3d61 jne 0x112c3d6e */
  if (!C.zf) goto L_112c3d6e;
  /* 112c3d63 mov edx, dword ptr [0x112f105c] */
  EDX = (r32((uint32_t)(0x112f105c)));
  /* 112c3d69 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 112c3d6c jmp 0x112c3dd2 */
  goto L_112c3dd2;
L_112c3d6e:;
  /* 112c3d6e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 112c3d71 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3d74 mov dword ptr [eax*4 + 0x112f0f20], ecx */
  w32((uint32_t)(EAX*4 + 0x112f0f20), (ECX));
  /* 112c3d7b mov edx, dword ptr [0x112f105c] */
  EDX = (r32((uint32_t)(0x112f105c)));
  /* 112c3d81 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3d84 mov dword ptr [0x112f105c], edx */
  w32((uint32_t)(0x112f105c), (EDX));
  /* 112c3d8a jmp 0x112c3d95 */
  goto L_112c3d95;
L_112c3d8c:;
  /* 112c3d8c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3d8f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3d92 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_112c3d95:;
  /* 112c3d95 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 112c3d98 mov edx, dword ptr [ecx*4 + 0x112f0f20] */
  EDX = (r32((uint32_t)(ECX*4 + 0x112f0f20)));
  /* 112c3d9f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3da5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3da8 jae 0x112c3dcd */
  if (!C.cf) goto L_112c3dcd;
  /* 112c3daa mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3dad mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 112c3db1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3db4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 112c3dba mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3dbd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 112c3dc1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3dc4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 112c3dcb jmp 0x112c3d8c */
  goto L_112c3d8c;
L_112c3dcd:;
  /* 112c3dcd jmp 0x112c3d29 */
  goto L_112c3d29;
L_112c3dd2:;
  /* 112c3dd2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 112c3dd9 jmp 0x112c3df6 */
  goto L_112c3df6;
L_112c3ddb:;
  /* 112c3ddb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 112c3dde add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3de1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 112c3de4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c3de7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3dea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112c3ded mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 112c3df0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3df3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_112c3df6:;
  /* 112c3df6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 112c3df9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3dfc jge 0x112c3e65 */
  if ((C.sf==C.of)) goto L_112c3e65;
  /* 112c3dfe mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 112c3e01 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3e04 je 0x112c3e60 */
  if (C.zf) goto L_112c3e60;
  /* 112c3e06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c3e09 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112c3e0c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 112c3e0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c3e11 je 0x112c3e60 */
  if (C.zf) goto L_112c3e60;
  /* 112c3e13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c3e16 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112c3e19 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 112c3e1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c3e1e jne 0x112c3e30 */
  if (!C.zf) goto L_112c3e30;
  /* 112c3e20 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 112c3e23 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112c3e25 push edx */
  push32((uint32_t)(EDX));
  /* 112c3e26 call dword ptr [0x112f23b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23b0))), 0x112c3e2cu);
  /* 112c3e2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c3e2e je 0x112c3e60 */
  if (C.zf) goto L_112c3e60;
L_112c3e30:;
  /* 112c3e30 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 112c3e33 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112c3e36 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 112c3e39 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 112c3e3c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c3e3f mov edx, dword ptr [eax*4 + 0x112f0f20] */
  EDX = (r32((uint32_t)(EAX*4 + 0x112f0f20)));
  /* 112c3e46 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3e48 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 112c3e4b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3e4e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 112c3e51 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112c3e53 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112c3e55 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3e58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c3e5b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112c3e5d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_112c3e60:;
  /* 112c3e60 jmp 0x112c3ddb */
  goto L_112c3ddb;
L_112c3e65:;
  /* 112c3e65 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 112c3e6c jmp 0x112c3e77 */
  goto L_112c3e77;
L_112c3e6e:;
  /* 112c3e6e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 112c3e71 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3e74 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_112c3e77:;
  /* 112c3e77 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3e7b jge 0x112c3f54 */
  if ((C.sf==C.of)) goto L_112c3f54;
  /* 112c3e81 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 112c3e84 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c3e87 mov edx, dword ptr [0x112f0f20] */
  EDX = (r32((uint32_t)(0x112f0f20)));
  /* 112c3e8d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3e8f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 112c3e92 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3e95 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3e98 jne 0x112c3f40 */
  if (!C.zf) goto L_112c3f40;
  /* 112c3e9e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3ea1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 112c3ea5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3ea9 jne 0x112c3eb4 */
  if (!C.zf) goto L_112c3eb4;
  /* 112c3eab mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 112c3eb2 jmp 0x112c3ec4 */
  goto L_112c3ec4;
L_112c3eb4:;
  /* 112c3eb4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 112c3eb7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c3eba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 112c3ebc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c3ebe add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3ec1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_112c3ec4:;
  /* 112c3ec4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 112c3ec7 push eax */
  push32((uint32_t)(EAX));
  /* 112c3ec8 call dword ptr [0x112f2360] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2360))), 0x112c3eceu);
  /* 112c3ece mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 112c3ed1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3ed5 je 0x112c3f2f */
  if (C.zf) goto L_112c3f2f;
  /* 112c3ed7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 112c3eda push ecx */
  push32((uint32_t)(ECX));
  /* 112c3edb call dword ptr [0x112f23b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23b0))), 0x112c3ee1u);
  /* 112c3ee1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 112c3ee4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3ee8 je 0x112c3f2f */
  if (C.zf) goto L_112c3f2f;
  /* 112c3eea mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3eed mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 112c3ef0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 112c3ef2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 112c3ef5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 112c3efb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3efe jne 0x112c3f10 */
  if (!C.zf) goto L_112c3f10;
  /* 112c3f00 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3f03 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 112c3f06 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 112c3f08 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3f0b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 112c3f0e jmp 0x112c3f2d */
  goto L_112c3f2d;
L_112c3f10:;
  /* 112c3f10 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 112c3f13 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 112c3f19 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3f1c jne 0x112c3f2d */
  if (!C.zf) goto L_112c3f2d;
  /* 112c3f1e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3f21 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 112c3f24 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 112c3f27 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3f2a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_112c3f2d:;
  /* 112c3f2d jmp 0x112c3f3e */
  goto L_112c3f3e;
L_112c3f2f:;
  /* 112c3f2f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3f32 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 112c3f35 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 112c3f38 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3f3b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_112c3f3e:;
  /* 112c3f3e jmp 0x112c3f4f */
  goto L_112c3f4f;
L_112c3f40:;
  /* 112c3f40 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3f43 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 112c3f46 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 112c3f49 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c3f4c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_112c3f4f:;
  /* 112c3f4f jmp 0x112c3e6e */
  goto L_112c3e6e;
L_112c3f54:;
  /* 112c3f54 mov eax, dword ptr [0x112f105c] */
  EAX = (r32((uint32_t)(0x112f105c)));
  /* 112c3f59 push eax */
  push32((uint32_t)(EAX));
  /* 112c3f5a call dword ptr [0x112f23ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23ac))), 0x112c3f60u);
  /* 112c3f60 mov esp, ebp */
  ESP = (EBP);
  /* 112c3f62 pop ebp */
  EBP = (pop32());
  /* 112c3f63 ret  */
  ESPCHK(0x112c3c40u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x112c3f70 (155 bytes, 45 insns) */
void f_112c3f70(void) {
  FTRACE(0x112c3f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c3f70 push ebp */
  push32((uint32_t)(EBP));
  /* 112c3f71 mov ebp, esp */
  EBP = (ESP);
  /* 112c3f73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c3f76 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112c3f7d jmp 0x112c3f88 */
  goto L_112c3f88;
L_112c3f7f:;
  /* 112c3f7f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c3f82 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3f85 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112c3f88:;
  /* 112c3f88 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3f8c jge 0x112c4007 */
  if ((C.sf==C.of)) goto L_112c4007;
  /* 112c3f8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c3f91 cmp dword ptr [ecx*4 + 0x112f0f20], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x112f0f20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3f99 je 0x112c4002 */
  if (C.zf) goto L_112c4002;
  /* 112c3f9b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c3f9e mov eax, dword ptr [edx*4 + 0x112f0f20] */
  EAX = (r32((uint32_t)(EDX*4 + 0x112f0f20)));
  /* 112c3fa5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c3fa8 jmp 0x112c3fb3 */
  goto L_112c3fb3;
L_112c3faa:;
  /* 112c3faa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c3fad add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3fb0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112c3fb3:;
  /* 112c3fb3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c3fb6 mov eax, dword ptr [edx*4 + 0x112f0f20] */
  EAX = (r32((uint32_t)(EDX*4 + 0x112f0f20)));
  /* 112c3fbd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3fc2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3fc5 jae 0x112c3fdf */
  if (!C.cf) goto L_112c3fdf;
  /* 112c3fc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c3fca cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c3fce je 0x112c3fdd */
  if (C.zf) goto L_112c3fdd;
  /* 112c3fd0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c3fd3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3fd6 push edx */
  push32((uint32_t)(EDX));
  /* 112c3fd7 call dword ptr [0x112f23b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23b8))), 0x112c3fddu);
L_112c3fdd:;
  /* 112c3fdd jmp 0x112c3faa */
  goto L_112c3faa;
L_112c3fdf:;
  /* 112c3fdf push 2 */
  push32((uint32_t)(0x2u));
  /* 112c3fe1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c3fe4 mov ecx, dword ptr [eax*4 + 0x112f0f20] */
  ECX = (r32((uint32_t)(EAX*4 + 0x112f0f20)));
  /* 112c3feb push ecx */
  push32((uint32_t)(ECX));
  /* 112c3fec call 0x112c4ac0 */
  push32(0x112c3ff1u); f_112c4ac0();
  /* 112c3ff1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c3ff4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c3ff7 mov dword ptr [edx*4 + 0x112f0f20], 0 */
  w32((uint32_t)(EDX*4 + 0x112f0f20), (0x0u));
L_112c4002:;
  /* 112c4002 jmp 0x112c3f7f */
  goto L_112c3f7f;
L_112c4007:;
  /* 112c4007 mov esp, ebp */
  ESP = (EBP);
  /* 112c4009 pop ebp */
  EBP = (pop32());
  /* 112c400a ret  */
  ESPCHK(0x112c3f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004010 @ 0x112c4010 (29 bytes, 13 insns) */
void f_112c4010(void) {
  FTRACE(0x112c4010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c4010 push ebp */
  push32((uint32_t)(EBP));
  /* 112c4011 mov ebp, esp */
  EBP = (ESP);
  /* 112c4013 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4015 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4017 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c4019 mov eax, dword ptr [0x112ef720] */
  EAX = (r32((uint32_t)(0x112ef720)));
  /* 112c401e push eax */
  push32((uint32_t)(EAX));
  /* 112c401f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c4022 push ecx */
  push32((uint32_t)(ECX));
  /* 112c4023 call 0x112c4080 */
  push32(0x112c4028u); f_112c4080();
  /* 112c4028 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c402b pop ebp */
  EBP = (pop32());
  /* 112c402c ret  */
  ESPCHK(0x112c4010u, _esp0);
  ESP += 4; return;
}

/* FUN_10004030 @ 0x112c4030 (35 bytes, 16 insns) */
void f_112c4030(void) {
  FTRACE(0x112c4030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c4030 push ebp */
  push32((uint32_t)(EBP));
  /* 112c4031 mov ebp, esp */
  EBP = (ESP);
  /* 112c4033 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c4036 push eax */
  push32((uint32_t)(EAX));
  /* 112c4037 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c403a push ecx */
  push32((uint32_t)(ECX));
  /* 112c403b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c403e push edx */
  push32((uint32_t)(EDX));
  /* 112c403f mov eax, dword ptr [0x112ef720] */
  EAX = (r32((uint32_t)(0x112ef720)));
  /* 112c4044 push eax */
  push32((uint32_t)(EAX));
  /* 112c4045 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c4048 push ecx */
  push32((uint32_t)(ECX));
  /* 112c4049 call 0x112c4080 */
  push32(0x112c404eu); f_112c4080();
  /* 112c404e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4051 pop ebp */
  EBP = (pop32());
  /* 112c4052 ret  */
  ESPCHK(0x112c4030u, _esp0);
  ESP += 4; return;
}

/* FUN_10004060 @ 0x112c4060 (27 bytes, 13 insns) */
void f_112c4060(void) {
  FTRACE(0x112c4060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c4060 push ebp */
  push32((uint32_t)(EBP));
  /* 112c4061 mov ebp, esp */
  EBP = (ESP);
  /* 112c4063 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4065 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4067 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c4069 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c406c push eax */
  push32((uint32_t)(EAX));
  /* 112c406d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c4070 push ecx */
  push32((uint32_t)(ECX));
  /* 112c4071 call 0x112c4080 */
  push32(0x112c4076u); f_112c4080();
  /* 112c4076 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4079 pop ebp */
  EBP = (pop32());
  /* 112c407a ret  */
  ESPCHK(0x112c4060u, _esp0);
  ESP += 4; return;
}

/* FUN_10004080 @ 0x112c4080 (94 bytes, 38 insns) */
void f_112c4080(void) {
  FTRACE(0x112c4080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c4080 push ebp */
  push32((uint32_t)(EBP));
  /* 112c4081 mov ebp, esp */
  EBP = (ESP);
  /* 112c4083 push ecx */
  push32((uint32_t)(ECX));
L_112c4084:;
  /* 112c4084 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c4086 call 0x112c7a30 */
  push32(0x112c408bu); f_112c7a30();
  /* 112c408b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c408e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c4091 push eax */
  push32((uint32_t)(EAX));
  /* 112c4092 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c4095 push ecx */
  push32((uint32_t)(ECX));
  /* 112c4096 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c4099 push edx */
  push32((uint32_t)(EDX));
  /* 112c409a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c409d push eax */
  push32((uint32_t)(EAX));
  /* 112c409e call 0x112c4100 */
  push32(0x112c40a3u); f_112c4100();
  /* 112c40a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c40a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c40a9 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c40ab call 0x112c7ad0 */
  push32(0x112c40b0u); f_112c7ad0();
  /* 112c40b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c40b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c40b7 jne 0x112c40bf */
  if (!C.zf) goto L_112c40bf;
  /* 112c40b9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c40bd jne 0x112c40c4 */
  if (!C.zf) goto L_112c40c4;
L_112c40bf:;
  /* 112c40bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c40c2 jmp 0x112c40da */
  goto L_112c40da;
L_112c40c4:;
  /* 112c40c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c40c7 push ecx */
  push32((uint32_t)(ECX));
  /* 112c40c8 call 0x112c7d70 */
  push32(0x112c40cdu); f_112c7d70();
  /* 112c40cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c40d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c40d2 jne 0x112c40d8 */
  if (!C.zf) goto L_112c40d8;
  /* 112c40d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c40d6 jmp 0x112c40da */
  goto L_112c40da;
L_112c40d8:;
  /* 112c40d8 jmp 0x112c4084 */
  goto L_112c4084;
L_112c40da:;
  /* 112c40da mov esp, ebp */
  ESP = (EBP);
  /* 112c40dc pop ebp */
  EBP = (pop32());
  /* 112c40dd ret  */
  ESPCHK(0x112c4080u, _esp0);
  ESP += 4; return;
}

/* FUN_100040e0 @ 0x112c40e0 (23 bytes, 11 insns) */
void f_112c40e0(void) {
  FTRACE(0x112c40e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c40e0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c40e1 mov ebp, esp */
  EBP = (ESP);
  /* 112c40e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c40e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c40e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c40e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c40ec push eax */
  push32((uint32_t)(EAX));
  /* 112c40ed call 0x112c4100 */
  push32(0x112c40f2u); f_112c4100();
  /* 112c40f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c40f5 pop ebp */
  EBP = (pop32());
  /* 112c40f6 ret  */
  ESPCHK(0x112c40e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004100 @ 0x112c4100 (787 bytes, 254 insns) */
void f_112c4100(void) {
  FTRACE(0x112c4100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c4100 push ebp */
  push32((uint32_t)(EBP));
  /* 112c4101 mov ebp, esp */
  EBP = (ESP);
  /* 112c4103 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c4106 push ebx */
  push32((uint32_t)(EBX));
  /* 112c4107 push esi */
  push32((uint32_t)(ESI));
  /* 112c4108 push edi */
  push32((uint32_t)(EDI));
  /* 112c4109 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 112c4110 mov eax, dword ptr [0x112eda84] */
  EAX = (r32((uint32_t)(0x112eda84)));
  /* 112c4115 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 112c4118 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c411a je 0x112c414c */
  if (C.zf) goto L_112c414c;
L_112c411c:;
  /* 112c411c call 0x112c51d0 */
  push32(0x112c4121u); f_112c51d0();
  /* 112c4121 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c4123 jne 0x112c4146 */
  if (!C.zf) goto L_112c4146;
  /* 112c4125 push 0x112ea5f8 */
  push32((uint32_t)(0x112ea5f8u));
  /* 112c412a push 0 */
  push32((uint32_t)(0x0u));
  /* 112c412c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 112c4131 push 0x112ea5ec */
  push32((uint32_t)(0x112ea5ecu));
  /* 112c4136 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c4138 call 0x112c30f0 */
  push32(0x112c413du); f_112c30f0();
  /* 112c413d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4140 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4143 jne 0x112c4146 */
  if (!C.zf) goto L_112c4146;
  /* 112c4145 int3  */
  x86_unimpl("int3 @ 0x112c4145");
L_112c4146:;
  /* 112c4146 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c4148 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c414a jne 0x112c411c */
  if (!C.zf) goto L_112c411c;
L_112c414c:;
  /* 112c414c mov edx, dword ptr [0x112eda88] */
  EDX = (r32((uint32_t)(0x112eda88)));
  /* 112c4152 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 112c4155 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c4158 cmp eax, dword ptr [0x112eda8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112eda8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c415e jne 0x112c4161 */
  if (!C.zf) goto L_112c4161;
  /* 112c4160 int3  */
  x86_unimpl("int3 @ 0x112c4160");
L_112c4161:;
  /* 112c4161 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c4164 push ecx */
  push32((uint32_t)(ECX));
  /* 112c4165 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c4168 push edx */
  push32((uint32_t)(EDX));
  /* 112c4169 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c416c push eax */
  push32((uint32_t)(EAX));
  /* 112c416d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c4170 push ecx */
  push32((uint32_t)(ECX));
  /* 112c4171 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c4174 push edx */
  push32((uint32_t)(EDX));
  /* 112c4175 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4177 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c4179 call dword ptr [0x112edc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x112edc90))), 0x112c417fu);
  /* 112c417f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4182 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c4184 jne 0x112c41e4 */
  if (!C.zf) goto L_112c41e4;
  /* 112c4186 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c418a je 0x112c41b7 */
  if (C.zf) goto L_112c41b7;
L_112c418c:;
  /* 112c418c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c418f push eax */
  push32((uint32_t)(EAX));
  /* 112c4190 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c4193 push ecx */
  push32((uint32_t)(ECX));
  /* 112c4194 push 0x112ea5b4 */
  push32((uint32_t)(0x112ea5b4u));
  /* 112c4199 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c419b push 0 */
  push32((uint32_t)(0x0u));
  /* 112c419d push 0 */
  push32((uint32_t)(0x0u));
  /* 112c419f push 0 */
  push32((uint32_t)(0x0u));
  /* 112c41a1 call 0x112c30f0 */
  push32(0x112c41a6u); f_112c30f0();
  /* 112c41a6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c41a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c41ac jne 0x112c41af */
  if (!C.zf) goto L_112c41af;
  /* 112c41ae int3  */
  x86_unimpl("int3 @ 0x112c41ae");
L_112c41af:;
  /* 112c41af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c41b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c41b3 jne 0x112c418c */
  if (!C.zf) goto L_112c418c;
  /* 112c41b5 jmp 0x112c41dd */
  goto L_112c41dd;
L_112c41b7:;
  /* 112c41b7 push 0x112ea590 */
  push32((uint32_t)(0x112ea590u));
  /* 112c41bc push 0x112ea58c */
  push32((uint32_t)(0x112ea58cu));
  /* 112c41c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c41c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c41c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c41c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c41c9 call 0x112c30f0 */
  push32(0x112c41ceu); f_112c30f0();
  /* 112c41ce add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c41d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c41d4 jne 0x112c41d7 */
  if (!C.zf) goto L_112c41d7;
  /* 112c41d6 int3  */
  x86_unimpl("int3 @ 0x112c41d6");
L_112c41d7:;
  /* 112c41d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c41d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c41db jne 0x112c41b7 */
  if (!C.zf) goto L_112c41b7;
L_112c41dd:;
  /* 112c41dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c41df jmp 0x112c440c */
  goto L_112c440c;
L_112c41e4:;
  /* 112c41e4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c41e7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112c41ed cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c41f0 je 0x112c4206 */
  if (C.zf) goto L_112c4206;
  /* 112c41f2 mov edx, dword ptr [0x112eda84] */
  EDX = (r32((uint32_t)(0x112eda84)));
  /* 112c41f8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 112c41fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c41fd jne 0x112c4206 */
  if (!C.zf) goto L_112c4206;
  /* 112c41ff mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_112c4206:;
  /* 112c4206 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c420a ja 0x112c4217 */
  if ((!C.cf&&!C.zf)) goto L_112c4217;
  /* 112c420c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c420f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4212 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4215 jbe 0x112c4243 */
  if ((C.cf||C.zf)) goto L_112c4243;
L_112c4217:;
  /* 112c4217 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c421a push ecx */
  push32((uint32_t)(ECX));
  /* 112c421b push 0x112ea568 */
  push32((uint32_t)(0x112ea568u));
  /* 112c4220 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4222 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4224 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4226 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c4228 call 0x112c30f0 */
  push32(0x112c422du); f_112c30f0();
  /* 112c422d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4230 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4233 jne 0x112c4236 */
  if (!C.zf) goto L_112c4236;
  /* 112c4235 int3  */
  x86_unimpl("int3 @ 0x112c4235");
L_112c4236:;
  /* 112c4236 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c4238 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c423a jne 0x112c4217 */
  if (!C.zf) goto L_112c4217;
  /* 112c423c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c423e jmp 0x112c440c */
  goto L_112c440c;
L_112c4243:;
  /* 112c4243 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c4246 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c424b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c424e je 0x112c4290 */
  if (C.zf) goto L_112c4290;
  /* 112c4250 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4254 je 0x112c4290 */
  if (C.zf) goto L_112c4290;
  /* 112c4256 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c4259 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112c425f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4262 je 0x112c4290 */
  if (C.zf) goto L_112c4290;
  /* 112c4264 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4268 je 0x112c4290 */
  if (C.zf) goto L_112c4290;
L_112c426a:;
  /* 112c426a push 0x112ea534 */
  push32((uint32_t)(0x112ea534u));
  /* 112c426f push 0x112ea58c */
  push32((uint32_t)(0x112ea58cu));
  /* 112c4274 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4276 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4278 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c427a push 1 */
  push32((uint32_t)(0x1u));
  /* 112c427c call 0x112c30f0 */
  push32(0x112c4281u); f_112c30f0();
  /* 112c4281 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4284 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4287 jne 0x112c428a */
  if (!C.zf) goto L_112c428a;
  /* 112c4289 int3  */
  x86_unimpl("int3 @ 0x112c4289");
L_112c428a:;
  /* 112c428a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c428c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c428e jne 0x112c426a */
  if (!C.zf) goto L_112c426a;
L_112c4290:;
  /* 112c4290 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c4293 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4296 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112c4299 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c429c push ecx */
  push32((uint32_t)(ECX));
  /* 112c429d call 0x112c7e80 */
  push32(0x112c42a2u); f_112c7e80();
  /* 112c42a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c42a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c42a8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c42ac jne 0x112c42b5 */
  if (!C.zf) goto L_112c42b5;
  /* 112c42ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c42b0 jmp 0x112c440c */
  goto L_112c440c;
L_112c42b5:;
  /* 112c42b5 mov edx, dword ptr [0x112eda88] */
  EDX = (r32((uint32_t)(0x112eda88)));
  /* 112c42bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c42be mov dword ptr [0x112eda88], edx */
  w32((uint32_t)(0x112eda88), (EDX));
  /* 112c42c4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c42c8 je 0x112c4313 */
  if (C.zf) goto L_112c4313;
  /* 112c42ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c42cd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 112c42d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c42d6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 112c42dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c42e0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 112c42e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c42ea mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 112c42f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c42f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c42f7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 112c42fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c42fd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 112c4304 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4307 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 112c430e jmp 0x112c43b3 */
  goto L_112c43b3;
L_112c4313:;
  /* 112c4313 mov edx, dword ptr [0x112ef580] */
  EDX = (r32((uint32_t)(0x112ef580)));
  /* 112c4319 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c431c mov dword ptr [0x112ef580], edx */
  w32((uint32_t)(0x112ef580), (EDX));
  /* 112c4322 mov eax, dword ptr [0x112ef588] */
  EAX = (r32((uint32_t)(0x112ef588)));
  /* 112c4327 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c432a mov dword ptr [0x112ef588], eax */
  w32((uint32_t)(0x112ef588), (EAX));
  /* 112c432f mov ecx, dword ptr [0x112ef588] */
  ECX = (r32((uint32_t)(0x112ef588)));
  /* 112c4335 cmp ecx, dword ptr [0x112ef58c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x112ef58c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c433b jbe 0x112c4349 */
  if ((C.cf||C.zf)) goto L_112c4349;
  /* 112c433d mov edx, dword ptr [0x112ef588] */
  EDX = (r32((uint32_t)(0x112ef588)));
  /* 112c4343 mov dword ptr [0x112ef58c], edx */
  w32((uint32_t)(0x112ef58c), (EDX));
L_112c4349:;
  /* 112c4349 cmp dword ptr [0x112ef584], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef584))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4350 je 0x112c435f */
  if (C.zf) goto L_112c435f;
  /* 112c4352 mov eax, dword ptr [0x112ef584] */
  EAX = (r32((uint32_t)(0x112ef584)));
  /* 112c4357 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c435a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 112c435d jmp 0x112c4368 */
  goto L_112c4368;
L_112c435f:;
  /* 112c435f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4362 mov dword ptr [0x112ef57c], edx */
  w32((uint32_t)(0x112ef57c), (EDX));
L_112c4368:;
  /* 112c4368 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c436b mov ecx, dword ptr [0x112ef584] */
  ECX = (r32((uint32_t)(0x112ef584)));
  /* 112c4371 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 112c4373 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4376 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 112c437d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4380 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c4383 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 112c4386 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4389 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c438c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 112c438f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4392 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c4395 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 112c4398 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c439b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c439e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 112c43a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c43a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c43a7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 112c43aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c43ad mov dword ptr [0x112ef584], ecx */
  w32((uint32_t)(0x112ef584), (ECX));
L_112c43b3:;
  /* 112c43b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 112c43b5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c43b7 mov dl, byte ptr [0x112eda90] */
  DL = (r8((uint32_t)(0x112eda90)));
  /* 112c43bd push edx */
  push32((uint32_t)(EDX));
  /* 112c43be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c43c1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c43c4 push eax */
  push32((uint32_t)(EAX));
  /* 112c43c5 call 0x112c7da0 */
  push32(0x112c43cau); f_112c7da0();
  /* 112c43ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c43cd push 4 */
  push32((uint32_t)(0x4u));
  /* 112c43cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c43d1 mov cl, byte ptr [0x112eda90] */
  CL = (r8((uint32_t)(0x112eda90)));
  /* 112c43d7 push ecx */
  push32((uint32_t)(ECX));
  /* 112c43d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c43db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c43de lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 112c43e2 push ecx */
  push32((uint32_t)(ECX));
  /* 112c43e3 call 0x112c7da0 */
  push32(0x112c43e8u); f_112c7da0();
  /* 112c43e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c43eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c43ee push edx */
  push32((uint32_t)(EDX));
  /* 112c43ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c43f1 mov al, byte ptr [0x112eda92] */
  AL = (r8((uint32_t)(0x112eda92)));
  /* 112c43f6 push eax */
  push32((uint32_t)(EAX));
  /* 112c43f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c43fa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c43fd push ecx */
  push32((uint32_t)(ECX));
  /* 112c43fe call 0x112c7da0 */
  push32(0x112c4403u); f_112c7da0();
  /* 112c4403 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4406 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4409 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_112c440c:;
  /* 112c440c pop edi */
  EDI = (pop32());
  /* 112c440d pop esi */
  ESI = (pop32());
  /* 112c440e pop ebx */
  EBX = (pop32());
  /* 112c440f mov esp, ebp */
  ESP = (EBP);
  /* 112c4411 pop ebp */
  EBP = (pop32());
  /* 112c4412 ret  */
  ESPCHK(0x112c4100u, _esp0);
  ESP += 4; return;
}

/* FUN_10004420 @ 0x112c4420 (27 bytes, 13 insns) */
void f_112c4420(void) {
  FTRACE(0x112c4420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c4420 push ebp */
  push32((uint32_t)(EBP));
  /* 112c4421 mov ebp, esp */
  EBP = (ESP);
  /* 112c4423 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4425 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4427 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c4429 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c442c push eax */
  push32((uint32_t)(EAX));
  /* 112c442d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c4430 push ecx */
  push32((uint32_t)(ECX));
  /* 112c4431 call 0x112c4440 */
  push32(0x112c4436u); f_112c4440();
  /* 112c4436 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4439 pop ebp */
  EBP = (pop32());
  /* 112c443a ret  */
  ESPCHK(0x112c4420u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x112c4440 (96 bytes, 37 insns) */
void f_112c4440(void) {
  FTRACE(0x112c4440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c4440 push ebp */
  push32((uint32_t)(EBP));
  /* 112c4441 mov ebp, esp */
  EBP = (ESP);
  /* 112c4443 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c4446 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c4449 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c444d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 112c4450 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c4453 push ecx */
  push32((uint32_t)(ECX));
  /* 112c4454 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c4457 push edx */
  push32((uint32_t)(EDX));
  /* 112c4458 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c445b push eax */
  push32((uint32_t)(EAX));
  /* 112c445c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c445f push ecx */
  push32((uint32_t)(ECX));
  /* 112c4460 call 0x112c4030 */
  push32(0x112c4465u); f_112c4030();
  /* 112c4465 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4468 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112c446b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c446f je 0x112c4499 */
  if (C.zf) goto L_112c4499;
  /* 112c4471 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c4474 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 112c4477 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c447a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c447d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112c4480:;
  /* 112c4480 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c4483 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4486 jae 0x112c4499 */
  if (!C.cf) goto L_112c4499;
  /* 112c4488 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c448b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 112c448e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c4491 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4494 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112c4497 jmp 0x112c4480 */
  goto L_112c4480;
L_112c4499:;
  /* 112c4499 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c449c mov esp, ebp */
  ESP = (EBP);
  /* 112c449e pop ebp */
  EBP = (pop32());
  /* 112c449f ret  */
  ESPCHK(0x112c4440u, _esp0);
  ESP += 4; return;
}

/* FUN_100044a0 @ 0x112c44a0 (27 bytes, 13 insns) */
void f_112c44a0(void) {
  FTRACE(0x112c44a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c44a0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c44a1 mov ebp, esp */
  EBP = (ESP);
  /* 112c44a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c44a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c44a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c44a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c44ac push eax */
  push32((uint32_t)(EAX));
  /* 112c44ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c44b0 push ecx */
  push32((uint32_t)(ECX));
  /* 112c44b1 call 0x112c44c0 */
  push32(0x112c44b6u); f_112c44c0();
  /* 112c44b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c44b9 pop ebp */
  EBP = (pop32());
  /* 112c44ba ret  */
  ESPCHK(0x112c44a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100044c0 @ 0x112c44c0 (64 bytes, 27 insns) */
void f_112c44c0(void) {
  FTRACE(0x112c44c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c44c0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c44c1 mov ebp, esp */
  EBP = (ESP);
  /* 112c44c3 push ecx */
  push32((uint32_t)(ECX));
  /* 112c44c4 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c44c6 call 0x112c7a30 */
  push32(0x112c44cbu); f_112c7a30();
  /* 112c44cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c44ce push 1 */
  push32((uint32_t)(0x1u));
  /* 112c44d0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c44d3 push eax */
  push32((uint32_t)(EAX));
  /* 112c44d4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c44d7 push ecx */
  push32((uint32_t)(ECX));
  /* 112c44d8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c44db push edx */
  push32((uint32_t)(EDX));
  /* 112c44dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c44df push eax */
  push32((uint32_t)(EAX));
  /* 112c44e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c44e3 push ecx */
  push32((uint32_t)(ECX));
  /* 112c44e4 call 0x112c4500 */
  push32(0x112c44e9u); f_112c4500();
  /* 112c44e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c44ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c44ef push 9 */
  push32((uint32_t)(0x9u));
  /* 112c44f1 call 0x112c7ad0 */
  push32(0x112c44f6u); f_112c7ad0();
  /* 112c44f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c44f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c44fc mov esp, ebp */
  ESP = (EBP);
  /* 112c44fe pop ebp */
  EBP = (pop32());
  /* 112c44ff ret  */
  ESPCHK(0x112c44c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004500 @ 0x112c4500 (1297 bytes, 431 insns) */
void f_112c4500(void) {
  FTRACE(0x112c4500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c4500 push ebp */
  push32((uint32_t)(EBP));
  /* 112c4501 mov ebp, esp */
  EBP = (ESP);
  /* 112c4503 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c4506 push ebx */
  push32((uint32_t)(EBX));
  /* 112c4507 push esi */
  push32((uint32_t)(ESI));
  /* 112c4508 push edi */
  push32((uint32_t)(EDI));
  /* 112c4509 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 112c4510 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4514 jne 0x112c4533 */
  if (!C.zf) goto L_112c4533;
  /* 112c4516 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c4519 push eax */
  push32((uint32_t)(EAX));
  /* 112c451a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c451d push ecx */
  push32((uint32_t)(ECX));
  /* 112c451e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c4521 push edx */
  push32((uint32_t)(EDX));
  /* 112c4522 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c4525 push eax */
  push32((uint32_t)(EAX));
  /* 112c4526 call 0x112c4030 */
  push32(0x112c452bu); f_112c4030();
  /* 112c452b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c452e jmp 0x112c4a0a */
  goto L_112c4a0a;
L_112c4533:;
  /* 112c4533 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4537 je 0x112c4556 */
  if (C.zf) goto L_112c4556;
  /* 112c4539 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c453d jne 0x112c4556 */
  if (!C.zf) goto L_112c4556;
  /* 112c453f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c4542 push ecx */
  push32((uint32_t)(ECX));
  /* 112c4543 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c4546 push edx */
  push32((uint32_t)(EDX));
  /* 112c4547 call 0x112c4ac0 */
  push32(0x112c454cu); f_112c4ac0();
  /* 112c454c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c454f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c4551 jmp 0x112c4a0a */
  goto L_112c4a0a;
L_112c4556:;
  /* 112c4556 mov eax, dword ptr [0x112eda84] */
  EAX = (r32((uint32_t)(0x112eda84)));
  /* 112c455b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 112c455e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c4560 je 0x112c4592 */
  if (C.zf) goto L_112c4592;
L_112c4562:;
  /* 112c4562 call 0x112c51d0 */
  push32(0x112c4567u); f_112c51d0();
  /* 112c4567 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c4569 jne 0x112c458c */
  if (!C.zf) goto L_112c458c;
  /* 112c456b push 0x112ea5f8 */
  push32((uint32_t)(0x112ea5f8u));
  /* 112c4570 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4572 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 112c4577 push 0x112ea5ec */
  push32((uint32_t)(0x112ea5ecu));
  /* 112c457c push 2 */
  push32((uint32_t)(0x2u));
  /* 112c457e call 0x112c30f0 */
  push32(0x112c4583u); f_112c30f0();
  /* 112c4583 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4586 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4589 jne 0x112c458c */
  if (!C.zf) goto L_112c458c;
  /* 112c458b int3  */
  x86_unimpl("int3 @ 0x112c458b");
L_112c458c:;
  /* 112c458c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c458e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c4590 jne 0x112c4562 */
  if (!C.zf) goto L_112c4562;
L_112c4592:;
  /* 112c4592 mov edx, dword ptr [0x112eda88] */
  EDX = (r32((uint32_t)(0x112eda88)));
  /* 112c4598 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 112c459b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c459e cmp eax, dword ptr [0x112eda8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112eda8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c45a4 jne 0x112c45a7 */
  if (!C.zf) goto L_112c45a7;
  /* 112c45a6 int3  */
  x86_unimpl("int3 @ 0x112c45a6");
L_112c45a7:;
  /* 112c45a7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c45aa push ecx */
  push32((uint32_t)(ECX));
  /* 112c45ab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c45ae push edx */
  push32((uint32_t)(EDX));
  /* 112c45af mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c45b2 push eax */
  push32((uint32_t)(EAX));
  /* 112c45b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c45b6 push ecx */
  push32((uint32_t)(ECX));
  /* 112c45b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c45ba push edx */
  push32((uint32_t)(EDX));
  /* 112c45bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c45be push eax */
  push32((uint32_t)(EAX));
  /* 112c45bf push 2 */
  push32((uint32_t)(0x2u));
  /* 112c45c1 call dword ptr [0x112edc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x112edc90))), 0x112c45c7u);
  /* 112c45c7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c45ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c45cc jne 0x112c462c */
  if (!C.zf) goto L_112c462c;
  /* 112c45ce cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c45d2 je 0x112c45ff */
  if (C.zf) goto L_112c45ff;
L_112c45d4:;
  /* 112c45d4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c45d7 push ecx */
  push32((uint32_t)(ECX));
  /* 112c45d8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c45db push edx */
  push32((uint32_t)(EDX));
  /* 112c45dc push 0x112ea774 */
  push32((uint32_t)(0x112ea774u));
  /* 112c45e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c45e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c45e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c45e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c45e9 call 0x112c30f0 */
  push32(0x112c45eeu); f_112c30f0();
  /* 112c45ee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c45f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c45f4 jne 0x112c45f7 */
  if (!C.zf) goto L_112c45f7;
  /* 112c45f6 int3  */
  x86_unimpl("int3 @ 0x112c45f6");
L_112c45f7:;
  /* 112c45f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c45f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c45fb jne 0x112c45d4 */
  if (!C.zf) goto L_112c45d4;
  /* 112c45fd jmp 0x112c4625 */
  goto L_112c4625;
L_112c45ff:;
  /* 112c45ff push 0x112ea750 */
  push32((uint32_t)(0x112ea750u));
  /* 112c4604 push 0x112ea58c */
  push32((uint32_t)(0x112ea58cu));
  /* 112c4609 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c460b push 0 */
  push32((uint32_t)(0x0u));
  /* 112c460d push 0 */
  push32((uint32_t)(0x0u));
  /* 112c460f push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4611 call 0x112c30f0 */
  push32(0x112c4616u); f_112c30f0();
  /* 112c4616 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4619 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c461c jne 0x112c461f */
  if (!C.zf) goto L_112c461f;
  /* 112c461e int3  */
  x86_unimpl("int3 @ 0x112c461e");
L_112c461f:;
  /* 112c461f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c4621 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c4623 jne 0x112c45ff */
  if (!C.zf) goto L_112c45ff;
L_112c4625:;
  /* 112c4625 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c4627 jmp 0x112c4a0a */
  goto L_112c4a0a;
L_112c462c:;
  /* 112c462c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4630 jbe 0x112c465e */
  if ((C.cf||C.zf)) goto L_112c465e;
L_112c4632:;
  /* 112c4632 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c4635 push edx */
  push32((uint32_t)(EDX));
  /* 112c4636 push 0x112ea720 */
  push32((uint32_t)(0x112ea720u));
  /* 112c463b push 0 */
  push32((uint32_t)(0x0u));
  /* 112c463d push 0 */
  push32((uint32_t)(0x0u));
  /* 112c463f push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4641 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c4643 call 0x112c30f0 */
  push32(0x112c4648u); f_112c30f0();
  /* 112c4648 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c464b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c464e jne 0x112c4651 */
  if (!C.zf) goto L_112c4651;
  /* 112c4650 int3  */
  x86_unimpl("int3 @ 0x112c4650");
L_112c4651:;
  /* 112c4651 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c4653 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c4655 jne 0x112c4632 */
  if (!C.zf) goto L_112c4632;
  /* 112c4657 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c4659 jmp 0x112c4a0a */
  goto L_112c4a0a;
L_112c465e:;
  /* 112c465e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4662 je 0x112c46a6 */
  if (C.zf) goto L_112c46a6;
  /* 112c4664 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c4667 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112c466d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4670 je 0x112c46a6 */
  if (C.zf) goto L_112c46a6;
  /* 112c4672 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c4675 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 112c467b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c467e je 0x112c46a6 */
  if (C.zf) goto L_112c46a6;
L_112c4680:;
  /* 112c4680 push 0x112ea534 */
  push32((uint32_t)(0x112ea534u));
  /* 112c4685 push 0x112ea58c */
  push32((uint32_t)(0x112ea58cu));
  /* 112c468a push 0 */
  push32((uint32_t)(0x0u));
  /* 112c468c push 0 */
  push32((uint32_t)(0x0u));
  /* 112c468e push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4690 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c4692 call 0x112c30f0 */
  push32(0x112c4697u); f_112c30f0();
  /* 112c4697 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c469a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c469d jne 0x112c46a0 */
  if (!C.zf) goto L_112c46a0;
  /* 112c469f int3  */
  x86_unimpl("int3 @ 0x112c469f");
L_112c46a0:;
  /* 112c46a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c46a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c46a4 jne 0x112c4680 */
  if (!C.zf) goto L_112c4680;
L_112c46a6:;
  /* 112c46a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c46a9 push ecx */
  push32((uint32_t)(ECX));
  /* 112c46aa call 0x112c5630 */
  push32(0x112c46afu); f_112c5630();
  /* 112c46af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c46b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c46b4 jne 0x112c46d7 */
  if (!C.zf) goto L_112c46d7;
  /* 112c46b6 push 0x112ea6fc */
  push32((uint32_t)(0x112ea6fcu));
  /* 112c46bb push 0 */
  push32((uint32_t)(0x0u));
  /* 112c46bd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 112c46c2 push 0x112ea5ec */
  push32((uint32_t)(0x112ea5ecu));
  /* 112c46c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c46c9 call 0x112c30f0 */
  push32(0x112c46ceu); f_112c30f0();
  /* 112c46ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c46d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c46d4 jne 0x112c46d7 */
  if (!C.zf) goto L_112c46d7;
  /* 112c46d6 int3  */
  x86_unimpl("int3 @ 0x112c46d6");
L_112c46d7:;
  /* 112c46d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c46d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c46db jne 0x112c46a6 */
  if (!C.zf) goto L_112c46a6;
  /* 112c46dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c46e0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c46e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112c46e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c46e9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c46ed jne 0x112c46f6 */
  if (!C.zf) goto L_112c46f6;
  /* 112c46ef mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_112c46f6:;
  /* 112c46f6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c46fa je 0x112c473a */
  if (C.zf) goto L_112c473a;
L_112c46fc:;
  /* 112c46fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c46ff cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4706 jne 0x112c4711 */
  if (!C.zf) goto L_112c4711;
  /* 112c4708 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c470b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c470f je 0x112c4732 */
  if (C.zf) goto L_112c4732;
L_112c4711:;
  /* 112c4711 push 0x112ea6b4 */
  push32((uint32_t)(0x112ea6b4u));
  /* 112c4716 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4718 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 112c471d push 0x112ea5ec */
  push32((uint32_t)(0x112ea5ecu));
  /* 112c4722 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c4724 call 0x112c30f0 */
  push32(0x112c4729u); f_112c30f0();
  /* 112c4729 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c472c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c472f jne 0x112c4732 */
  if (!C.zf) goto L_112c4732;
  /* 112c4731 int3  */
  x86_unimpl("int3 @ 0x112c4731");
L_112c4732:;
  /* 112c4732 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c4734 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c4736 jne 0x112c46fc */
  if (!C.zf) goto L_112c46fc;
  /* 112c4738 jmp 0x112c479e */
  goto L_112c479e;
L_112c473a:;
  /* 112c473a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c473d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112c4740 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c4745 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4748 jne 0x112c475f */
  if (!C.zf) goto L_112c475f;
  /* 112c474a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c474d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112c4753 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4756 jne 0x112c475f */
  if (!C.zf) goto L_112c475f;
  /* 112c4758 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_112c475f:;
  /* 112c475f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c4762 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112c4765 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c476a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c476d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112c4773 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4775 je 0x112c4798 */
  if (C.zf) goto L_112c4798;
  /* 112c4777 push 0x112ea678 */
  push32((uint32_t)(0x112ea678u));
  /* 112c477c push 0 */
  push32((uint32_t)(0x0u));
  /* 112c477e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 112c4783 push 0x112ea5ec */
  push32((uint32_t)(0x112ea5ecu));
  /* 112c4788 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c478a call 0x112c30f0 */
  push32(0x112c478fu); f_112c30f0();
  /* 112c478f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4792 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4795 jne 0x112c4798 */
  if (!C.zf) goto L_112c4798;
  /* 112c4797 int3  */
  x86_unimpl("int3 @ 0x112c4797");
L_112c4798:;
  /* 112c4798 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c479a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c479c jne 0x112c475f */
  if (!C.zf) goto L_112c475f;
L_112c479e:;
  /* 112c479e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c47a2 je 0x112c47c9 */
  if (C.zf) goto L_112c47c9;
  /* 112c47a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c47a7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c47aa push eax */
  push32((uint32_t)(EAX));
  /* 112c47ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c47ae push ecx */
  push32((uint32_t)(ECX));
  /* 112c47af call 0x112c7fb0 */
  push32(0x112c47b4u); f_112c7fb0();
  /* 112c47b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c47b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112c47ba cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c47be jne 0x112c47c7 */
  if (!C.zf) goto L_112c47c7;
  /* 112c47c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c47c2 jmp 0x112c4a0a */
  goto L_112c4a0a;
L_112c47c7:;
  /* 112c47c7 jmp 0x112c47ec */
  goto L_112c47ec;
L_112c47c9:;
  /* 112c47c9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c47cc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c47cf push edx */
  push32((uint32_t)(EDX));
  /* 112c47d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c47d3 push eax */
  push32((uint32_t)(EAX));
  /* 112c47d4 call 0x112c7f00 */
  push32(0x112c47d9u); f_112c7f00();
  /* 112c47d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c47dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112c47df cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c47e3 jne 0x112c47ec */
  if (!C.zf) goto L_112c47ec;
  /* 112c47e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c47e7 jmp 0x112c4a0a */
  goto L_112c4a0a;
L_112c47ec:;
  /* 112c47ec mov ecx, dword ptr [0x112eda88] */
  ECX = (r32((uint32_t)(0x112eda88)));
  /* 112c47f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c47f5 mov dword ptr [0x112eda88], ecx */
  w32((uint32_t)(0x112eda88), (ECX));
  /* 112c47fb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c47ff jne 0x112c4857 */
  if (!C.zf) goto L_112c4857;
  /* 112c4801 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c4804 mov eax, dword ptr [0x112ef580] */
  EAX = (r32((uint32_t)(0x112ef580)));
  /* 112c4809 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c480c mov dword ptr [0x112ef580], eax */
  w32((uint32_t)(0x112ef580), (EAX));
  /* 112c4811 mov ecx, dword ptr [0x112ef580] */
  ECX = (r32((uint32_t)(0x112ef580)));
  /* 112c4817 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c481a mov dword ptr [0x112ef580], ecx */
  w32((uint32_t)(0x112ef580), (ECX));
  /* 112c4820 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c4823 mov eax, dword ptr [0x112ef588] */
  EAX = (r32((uint32_t)(0x112ef588)));
  /* 112c4828 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c482b mov dword ptr [0x112ef588], eax */
  w32((uint32_t)(0x112ef588), (EAX));
  /* 112c4830 mov ecx, dword ptr [0x112ef588] */
  ECX = (r32((uint32_t)(0x112ef588)));
  /* 112c4836 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4839 mov dword ptr [0x112ef588], ecx */
  w32((uint32_t)(0x112ef588), (ECX));
  /* 112c483f mov edx, dword ptr [0x112ef588] */
  EDX = (r32((uint32_t)(0x112ef588)));
  /* 112c4845 cmp edx, dword ptr [0x112ef58c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x112ef58c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c484b jbe 0x112c4857 */
  if ((C.cf||C.zf)) goto L_112c4857;
  /* 112c484d mov eax, dword ptr [0x112ef588] */
  EAX = (r32((uint32_t)(0x112ef588)));
  /* 112c4852 mov dword ptr [0x112ef58c], eax */
  w32((uint32_t)(0x112ef58c), (EAX));
L_112c4857:;
  /* 112c4857 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c485a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c485d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112c4860 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c4863 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c4866 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4869 jbe 0x112c488f */
  if ((C.cf||C.zf)) goto L_112c488f;
  /* 112c486b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c486e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c4871 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c4874 push edx */
  push32((uint32_t)(EDX));
  /* 112c4875 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c4877 mov al, byte ptr [0x112eda92] */
  AL = (r8((uint32_t)(0x112eda92)));
  /* 112c487c push eax */
  push32((uint32_t)(EAX));
  /* 112c487d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c4880 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4883 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4886 push edx */
  push32((uint32_t)(EDX));
  /* 112c4887 call 0x112c7da0 */
  push32(0x112c488cu); f_112c7da0();
  /* 112c488c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c488f:;
  /* 112c488f push 4 */
  push32((uint32_t)(0x4u));
  /* 112c4891 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c4893 mov al, byte ptr [0x112eda90] */
  AL = (r8((uint32_t)(0x112eda90)));
  /* 112c4898 push eax */
  push32((uint32_t)(EAX));
  /* 112c4899 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c489c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c489f push ecx */
  push32((uint32_t)(ECX));
  /* 112c48a0 call 0x112c7da0 */
  push32(0x112c48a5u); f_112c7da0();
  /* 112c48a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c48a8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c48ac jne 0x112c48c9 */
  if (!C.zf) goto L_112c48c9;
  /* 112c48ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c48b1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c48b4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 112c48b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c48ba mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c48bd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 112c48c0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c48c3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c48c6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_112c48c9:;
  /* 112c48c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c48cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c48cf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_112c48d2:;
  /* 112c48d2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c48d6 jne 0x112c4907 */
  if (!C.zf) goto L_112c4907;
  /* 112c48d8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c48dc jne 0x112c48e6 */
  if (!C.zf) goto L_112c48e6;
  /* 112c48de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c48e1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c48e4 je 0x112c4907 */
  if (C.zf) goto L_112c4907;
L_112c48e6:;
  /* 112c48e6 push 0x112ea644 */
  push32((uint32_t)(0x112ea644u));
  /* 112c48eb push 0 */
  push32((uint32_t)(0x0u));
  /* 112c48ed push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 112c48f2 push 0x112ea5ec */
  push32((uint32_t)(0x112ea5ecu));
  /* 112c48f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c48f9 call 0x112c30f0 */
  push32(0x112c48feu); f_112c30f0();
  /* 112c48fe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4901 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4904 jne 0x112c4907 */
  if (!C.zf) goto L_112c4907;
  /* 112c4906 int3  */
  x86_unimpl("int3 @ 0x112c4906");
L_112c4907:;
  /* 112c4907 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c4909 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c490b jne 0x112c48d2 */
  if (!C.zf) goto L_112c48d2;
  /* 112c490d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c4910 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4913 je 0x112c491b */
  if (C.zf) goto L_112c491b;
  /* 112c4915 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4919 je 0x112c4923 */
  if (C.zf) goto L_112c4923;
L_112c491b:;
  /* 112c491b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c491e jmp 0x112c4a0a */
  goto L_112c4a0a;
L_112c4923:;
  /* 112c4923 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c4926 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4929 je 0x112c493b */
  if (C.zf) goto L_112c493b;
  /* 112c492b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c492e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112c4930 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c4933 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112c4936 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 112c4939 jmp 0x112c4977 */
  goto L_112c4977;
L_112c493b:;
  /* 112c493b mov eax, dword ptr [0x112ef57c] */
  EAX = (r32((uint32_t)(0x112ef57c)));
  /* 112c4940 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4943 je 0x112c4966 */
  if (C.zf) goto L_112c4966;
  /* 112c4945 push 0x112ea628 */
  push32((uint32_t)(0x112ea628u));
  /* 112c494a push 0 */
  push32((uint32_t)(0x0u));
  /* 112c494c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 112c4951 push 0x112ea5ec */
  push32((uint32_t)(0x112ea5ecu));
  /* 112c4956 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c4958 call 0x112c30f0 */
  push32(0x112c495du); f_112c30f0();
  /* 112c495d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4960 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4963 jne 0x112c4966 */
  if (!C.zf) goto L_112c4966;
  /* 112c4965 int3  */
  x86_unimpl("int3 @ 0x112c4965");
L_112c4966:;
  /* 112c4966 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c4968 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c496a jne 0x112c493b */
  if (!C.zf) goto L_112c493b;
  /* 112c496c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c496f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 112c4972 mov dword ptr [0x112ef57c], eax */
  w32((uint32_t)(0x112ef57c), (EAX));
L_112c4977:;
  /* 112c4977 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c497a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c497e je 0x112c498f */
  if (C.zf) goto L_112c498f;
  /* 112c4980 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c4983 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 112c4986 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c4989 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112c498b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112c498d jmp 0x112c49ca */
  goto L_112c49ca;
L_112c498f:;
  /* 112c498f mov eax, dword ptr [0x112ef584] */
  EAX = (r32((uint32_t)(0x112ef584)));
  /* 112c4994 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4997 je 0x112c49ba */
  if (C.zf) goto L_112c49ba;
  /* 112c4999 push 0x112ea60c */
  push32((uint32_t)(0x112ea60cu));
  /* 112c499e push 0 */
  push32((uint32_t)(0x0u));
  /* 112c49a0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 112c49a5 push 0x112ea5ec */
  push32((uint32_t)(0x112ea5ecu));
  /* 112c49aa push 2 */
  push32((uint32_t)(0x2u));
  /* 112c49ac call 0x112c30f0 */
  push32(0x112c49b1u); f_112c30f0();
  /* 112c49b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c49b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c49b7 jne 0x112c49ba */
  if (!C.zf) goto L_112c49ba;
  /* 112c49b9 int3  */
  x86_unimpl("int3 @ 0x112c49b9");
L_112c49ba:;
  /* 112c49ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c49bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c49be jne 0x112c498f */
  if (!C.zf) goto L_112c498f;
  /* 112c49c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c49c3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112c49c5 mov dword ptr [0x112ef584], eax */
  w32((uint32_t)(0x112ef584), (EAX));
L_112c49ca:;
  /* 112c49ca cmp dword ptr [0x112ef584], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef584))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c49d1 je 0x112c49e1 */
  if (C.zf) goto L_112c49e1;
  /* 112c49d3 mov ecx, dword ptr [0x112ef584] */
  ECX = (r32((uint32_t)(0x112ef584)));
  /* 112c49d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c49dc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 112c49df jmp 0x112c49e9 */
  goto L_112c49e9;
L_112c49e1:;
  /* 112c49e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c49e4 mov dword ptr [0x112ef57c], eax */
  w32((uint32_t)(0x112ef57c), (EAX));
L_112c49e9:;
  /* 112c49e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c49ec mov edx, dword ptr [0x112ef584] */
  EDX = (r32((uint32_t)(0x112ef584)));
  /* 112c49f2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 112c49f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c49f7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 112c49fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c4a01 mov dword ptr [0x112ef584], ecx */
  w32((uint32_t)(0x112ef584), (ECX));
  /* 112c4a07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_112c4a0a:;
  /* 112c4a0a pop edi */
  EDI = (pop32());
  /* 112c4a0b pop esi */
  ESI = (pop32());
  /* 112c4a0c pop ebx */
  EBX = (pop32());
  /* 112c4a0d mov esp, ebp */
  ESP = (EBP);
  /* 112c4a0f pop ebp */
  EBP = (pop32());
  /* 112c4a10 ret  */
  ESPCHK(0x112c4500u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a20 @ 0x112c4a20 (27 bytes, 13 insns) */
void f_112c4a20(void) {
  FTRACE(0x112c4a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c4a20 push ebp */
  push32((uint32_t)(EBP));
  /* 112c4a21 mov ebp, esp */
  EBP = (ESP);
  /* 112c4a23 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4a25 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c4a29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c4a2c push eax */
  push32((uint32_t)(EAX));
  /* 112c4a2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c4a30 push ecx */
  push32((uint32_t)(ECX));
  /* 112c4a31 call 0x112c4a40 */
  push32(0x112c4a36u); f_112c4a40();
  /* 112c4a36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4a39 pop ebp */
  EBP = (pop32());
  /* 112c4a3a ret  */
  ESPCHK(0x112c4a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a40 @ 0x112c4a40 (64 bytes, 27 insns) */
void f_112c4a40(void) {
  FTRACE(0x112c4a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c4a40 push ebp */
  push32((uint32_t)(EBP));
  /* 112c4a41 mov ebp, esp */
  EBP = (ESP);
  /* 112c4a43 push ecx */
  push32((uint32_t)(ECX));
  /* 112c4a44 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c4a46 call 0x112c7a30 */
  push32(0x112c4a4bu); f_112c7a30();
  /* 112c4a4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4a4e push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4a50 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c4a53 push eax */
  push32((uint32_t)(EAX));
  /* 112c4a54 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c4a57 push ecx */
  push32((uint32_t)(ECX));
  /* 112c4a58 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c4a5b push edx */
  push32((uint32_t)(EDX));
  /* 112c4a5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c4a5f push eax */
  push32((uint32_t)(EAX));
  /* 112c4a60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c4a63 push ecx */
  push32((uint32_t)(ECX));
  /* 112c4a64 call 0x112c4500 */
  push32(0x112c4a69u); f_112c4500();
  /* 112c4a69 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4a6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c4a6f push 9 */
  push32((uint32_t)(0x9u));
  /* 112c4a71 call 0x112c7ad0 */
  push32(0x112c4a76u); f_112c7ad0();
  /* 112c4a76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4a79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4a7c mov esp, ebp */
  ESP = (EBP);
  /* 112c4a7e pop ebp */
  EBP = (pop32());
  /* 112c4a7f ret  */
  ESPCHK(0x112c4a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a80 @ 0x112c4a80 (19 bytes, 9 insns) */
void f_112c4a80(void) {
  FTRACE(0x112c4a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c4a80 push ebp */
  push32((uint32_t)(EBP));
  /* 112c4a81 mov ebp, esp */
  EBP = (ESP);
  /* 112c4a83 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c4a85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c4a88 push eax */
  push32((uint32_t)(EAX));
  /* 112c4a89 call 0x112c4ac0 */
  push32(0x112c4a8eu); f_112c4ac0();
  /* 112c4a8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4a91 pop ebp */
  EBP = (pop32());
  /* 112c4a92 ret  */
  ESPCHK(0x112c4a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004aa0 @ 0x112c4aa0 (19 bytes, 9 insns) */
void f_112c4aa0(void) {
  FTRACE(0x112c4aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c4aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c4aa1 mov ebp, esp */
  EBP = (ESP);
  /* 112c4aa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c4aa5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c4aa8 push eax */
  push32((uint32_t)(EAX));
  /* 112c4aa9 call 0x112c4af0 */
  push32(0x112c4aaeu); f_112c4af0();
  /* 112c4aae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4ab1 pop ebp */
  EBP = (pop32());
  /* 112c4ab2 ret  */
  ESPCHK(0x112c4aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ac0 @ 0x112c4ac0 (41 bytes, 16 insns) */
void f_112c4ac0(void) {
  FTRACE(0x112c4ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c4ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c4ac1 mov ebp, esp */
  EBP = (ESP);
  /* 112c4ac3 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c4ac5 call 0x112c7a30 */
  push32(0x112c4acau); f_112c7a30();
  /* 112c4aca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4acd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c4ad0 push eax */
  push32((uint32_t)(EAX));
  /* 112c4ad1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c4ad4 push ecx */
  push32((uint32_t)(ECX));
  /* 112c4ad5 call 0x112c4af0 */
  push32(0x112c4adau); f_112c4af0();
  /* 112c4ada add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4add push 9 */
  push32((uint32_t)(0x9u));
  /* 112c4adf call 0x112c7ad0 */
  push32(0x112c4ae4u); f_112c7ad0();
  /* 112c4ae4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4ae7 pop ebp */
  EBP = (pop32());
  /* 112c4ae8 ret  */
  ESPCHK(0x112c4ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004af0 @ 0x112c4af0 (1004 bytes, 342 insns) */
void f_112c4af0(void) {
  FTRACE(0x112c4af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c4af0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c4af1 mov ebp, esp */
  EBP = (ESP);
  /* 112c4af3 push ecx */
  push32((uint32_t)(ECX));
  /* 112c4af4 push ebx */
  push32((uint32_t)(EBX));
  /* 112c4af5 push esi */
  push32((uint32_t)(ESI));
  /* 112c4af6 push edi */
  push32((uint32_t)(EDI));
  /* 112c4af7 mov eax, dword ptr [0x112eda84] */
  EAX = (r32((uint32_t)(0x112eda84)));
  /* 112c4afc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 112c4aff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c4b01 je 0x112c4b33 */
  if (C.zf) goto L_112c4b33;
L_112c4b03:;
  /* 112c4b03 call 0x112c51d0 */
  push32(0x112c4b08u); f_112c51d0();
  /* 112c4b08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c4b0a jne 0x112c4b2d */
  if (!C.zf) goto L_112c4b2d;
  /* 112c4b0c push 0x112ea5f8 */
  push32((uint32_t)(0x112ea5f8u));
  /* 112c4b11 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4b13 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 112c4b18 push 0x112ea5ec */
  push32((uint32_t)(0x112ea5ecu));
  /* 112c4b1d push 2 */
  push32((uint32_t)(0x2u));
  /* 112c4b1f call 0x112c30f0 */
  push32(0x112c4b24u); f_112c30f0();
  /* 112c4b24 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4b27 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4b2a jne 0x112c4b2d */
  if (!C.zf) goto L_112c4b2d;
  /* 112c4b2c int3  */
  x86_unimpl("int3 @ 0x112c4b2c");
L_112c4b2d:;
  /* 112c4b2d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c4b2f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c4b31 jne 0x112c4b03 */
  if (!C.zf) goto L_112c4b03;
L_112c4b33:;
  /* 112c4b33 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4b37 jne 0x112c4b3e */
  if (!C.zf) goto L_112c4b3e;
  /* 112c4b39 jmp 0x112c4ed5 */
  goto L_112c4ed5;
L_112c4b3e:;
  /* 112c4b3e push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4b40 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4b42 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4b44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c4b47 push edx */
  push32((uint32_t)(EDX));
  /* 112c4b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4b4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c4b4d push eax */
  push32((uint32_t)(EAX));
  /* 112c4b4e push 3 */
  push32((uint32_t)(0x3u));
  /* 112c4b50 call dword ptr [0x112edc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x112edc90))), 0x112c4b56u);
  /* 112c4b56 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4b59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c4b5b jne 0x112c4b88 */
  if (!C.zf) goto L_112c4b88;
L_112c4b5d:;
  /* 112c4b5d push 0x112ea8bc */
  push32((uint32_t)(0x112ea8bcu));
  /* 112c4b62 push 0x112ea58c */
  push32((uint32_t)(0x112ea58cu));
  /* 112c4b67 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4b69 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4b6b push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4b6d push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4b6f call 0x112c30f0 */
  push32(0x112c4b74u); f_112c30f0();
  /* 112c4b74 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4b77 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4b7a jne 0x112c4b7d */
  if (!C.zf) goto L_112c4b7d;
  /* 112c4b7c int3  */
  x86_unimpl("int3 @ 0x112c4b7c");
L_112c4b7d:;
  /* 112c4b7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c4b7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c4b81 jne 0x112c4b5d */
  if (!C.zf) goto L_112c4b5d;
  /* 112c4b83 jmp 0x112c4ed5 */
  goto L_112c4ed5;
L_112c4b88:;
  /* 112c4b88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c4b8b push edx */
  push32((uint32_t)(EDX));
  /* 112c4b8c call 0x112c5630 */
  push32(0x112c4b91u); f_112c5630();
  /* 112c4b91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4b94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c4b96 jne 0x112c4bb9 */
  if (!C.zf) goto L_112c4bb9;
  /* 112c4b98 push 0x112ea6fc */
  push32((uint32_t)(0x112ea6fcu));
  /* 112c4b9d push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4b9f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 112c4ba4 push 0x112ea5ec */
  push32((uint32_t)(0x112ea5ecu));
  /* 112c4ba9 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c4bab call 0x112c30f0 */
  push32(0x112c4bb0u); f_112c30f0();
  /* 112c4bb0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4bb3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4bb6 jne 0x112c4bb9 */
  if (!C.zf) goto L_112c4bb9;
  /* 112c4bb8 int3  */
  x86_unimpl("int3 @ 0x112c4bb8");
L_112c4bb9:;
  /* 112c4bb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c4bbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c4bbd jne 0x112c4b88 */
  if (!C.zf) goto L_112c4b88;
  /* 112c4bbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c4bc2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c4bc5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112c4bc8:;
  /* 112c4bc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4bcb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112c4bce and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c4bd3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4bd6 je 0x112c4c1b */
  if (C.zf) goto L_112c4c1b;
  /* 112c4bd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4bdb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4bdf je 0x112c4c1b */
  if (C.zf) goto L_112c4c1b;
  /* 112c4be1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4be4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112c4be7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c4bec cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4bef je 0x112c4c1b */
  if (C.zf) goto L_112c4c1b;
  /* 112c4bf1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4bf4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4bf8 je 0x112c4c1b */
  if (C.zf) goto L_112c4c1b;
  /* 112c4bfa push 0x112ea894 */
  push32((uint32_t)(0x112ea894u));
  /* 112c4bff push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4c01 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 112c4c06 push 0x112ea5ec */
  push32((uint32_t)(0x112ea5ecu));
  /* 112c4c0b push 2 */
  push32((uint32_t)(0x2u));
  /* 112c4c0d call 0x112c30f0 */
  push32(0x112c4c12u); f_112c30f0();
  /* 112c4c12 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4c15 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4c18 jne 0x112c4c1b */
  if (!C.zf) goto L_112c4c1b;
  /* 112c4c1a int3  */
  x86_unimpl("int3 @ 0x112c4c1a");
L_112c4c1b:;
  /* 112c4c1b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c4c1d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c4c1f jne 0x112c4bc8 */
  if (!C.zf) goto L_112c4bc8;
  /* 112c4c21 mov eax, dword ptr [0x112eda84] */
  EAX = (r32((uint32_t)(0x112eda84)));
  /* 112c4c26 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 112c4c29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c4c2b jne 0x112c4cf6 */
  if (!C.zf) goto L_112c4cf6;
  /* 112c4c31 push 4 */
  push32((uint32_t)(0x4u));
  /* 112c4c33 mov cl, byte ptr [0x112eda90] */
  CL = (r8((uint32_t)(0x112eda90)));
  /* 112c4c39 push ecx */
  push32((uint32_t)(ECX));
  /* 112c4c3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4c3d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4c40 push edx */
  push32((uint32_t)(EDX));
  /* 112c4c41 call 0x112c5140 */
  push32(0x112c4c46u); f_112c5140();
  /* 112c4c46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4c49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c4c4b jne 0x112c4c90 */
  if (!C.zf) goto L_112c4c90;
L_112c4c4d:;
  /* 112c4c4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4c50 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4c53 push eax */
  push32((uint32_t)(EAX));
  /* 112c4c54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4c57 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 112c4c5a push edx */
  push32((uint32_t)(EDX));
  /* 112c4c5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4c5e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 112c4c61 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112c4c67 mov edx, dword ptr [ecx*4 + 0x112eda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x112eda94)));
  /* 112c4c6e push edx */
  push32((uint32_t)(EDX));
  /* 112c4c6f push 0x112ea868 */
  push32((uint32_t)(0x112ea868u));
  /* 112c4c74 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4c78 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4c7a push 1 */
  push32((uint32_t)(0x1u));
  /* 112c4c7c call 0x112c30f0 */
  push32(0x112c4c81u); f_112c30f0();
  /* 112c4c81 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4c84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4c87 jne 0x112c4c8a */
  if (!C.zf) goto L_112c4c8a;
  /* 112c4c89 int3  */
  x86_unimpl("int3 @ 0x112c4c89");
L_112c4c8a:;
  /* 112c4c8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c4c8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c4c8e jne 0x112c4c4d */
  if (!C.zf) goto L_112c4c4d;
L_112c4c90:;
  /* 112c4c90 push 4 */
  push32((uint32_t)(0x4u));
  /* 112c4c92 mov cl, byte ptr [0x112eda90] */
  CL = (r8((uint32_t)(0x112eda90)));
  /* 112c4c98 push ecx */
  push32((uint32_t)(ECX));
  /* 112c4c99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4c9c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 112c4c9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4ca2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 112c4ca6 push edx */
  push32((uint32_t)(EDX));
  /* 112c4ca7 call 0x112c5140 */
  push32(0x112c4cacu); f_112c5140();
  /* 112c4cac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4caf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c4cb1 jne 0x112c4cf6 */
  if (!C.zf) goto L_112c4cf6;
L_112c4cb3:;
  /* 112c4cb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4cb6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4cb9 push eax */
  push32((uint32_t)(EAX));
  /* 112c4cba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4cbd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 112c4cc0 push edx */
  push32((uint32_t)(EDX));
  /* 112c4cc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4cc4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 112c4cc7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112c4ccd mov edx, dword ptr [ecx*4 + 0x112eda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x112eda94)));
  /* 112c4cd4 push edx */
  push32((uint32_t)(EDX));
  /* 112c4cd5 push 0x112ea83c */
  push32((uint32_t)(0x112ea83cu));
  /* 112c4cda push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4cdc push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4cde push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4ce0 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c4ce2 call 0x112c30f0 */
  push32(0x112c4ce7u); f_112c30f0();
  /* 112c4ce7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4cea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4ced jne 0x112c4cf0 */
  if (!C.zf) goto L_112c4cf0;
  /* 112c4cef int3  */
  x86_unimpl("int3 @ 0x112c4cef");
L_112c4cf0:;
  /* 112c4cf0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c4cf2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c4cf4 jne 0x112c4cb3 */
  if (!C.zf) goto L_112c4cb3;
L_112c4cf6:;
  /* 112c4cf6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4cf9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4cfd jne 0x112c4d6b */
  if (!C.zf) goto L_112c4d6b;
L_112c4cff:;
  /* 112c4cff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4d02 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4d09 jne 0x112c4d14 */
  if (!C.zf) goto L_112c4d14;
  /* 112c4d0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4d0e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4d12 je 0x112c4d35 */
  if (C.zf) goto L_112c4d35;
L_112c4d14:;
  /* 112c4d14 push 0x112ea7fc */
  push32((uint32_t)(0x112ea7fcu));
  /* 112c4d19 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4d1b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 112c4d20 push 0x112ea5ec */
  push32((uint32_t)(0x112ea5ecu));
  /* 112c4d25 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c4d27 call 0x112c30f0 */
  push32(0x112c4d2cu); f_112c30f0();
  /* 112c4d2c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4d2f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4d32 jne 0x112c4d35 */
  if (!C.zf) goto L_112c4d35;
  /* 112c4d34 int3  */
  x86_unimpl("int3 @ 0x112c4d34");
L_112c4d35:;
  /* 112c4d35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c4d37 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c4d39 jne 0x112c4cff */
  if (!C.zf) goto L_112c4cff;
  /* 112c4d3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4d3e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 112c4d41 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4d44 push eax */
  push32((uint32_t)(EAX));
  /* 112c4d45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c4d47 mov cl, byte ptr [0x112eda91] */
  CL = (r8((uint32_t)(0x112eda91)));
  /* 112c4d4d push ecx */
  push32((uint32_t)(ECX));
  /* 112c4d4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4d51 push edx */
  push32((uint32_t)(EDX));
  /* 112c4d52 call 0x112c7da0 */
  push32(0x112c4d57u); f_112c7da0();
  /* 112c4d57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4d5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4d5d push eax */
  push32((uint32_t)(EAX));
  /* 112c4d5e call 0x112c81a0 */
  push32(0x112c4d63u); f_112c81a0();
  /* 112c4d63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4d66 jmp 0x112c4ed5 */
  goto L_112c4ed5;
L_112c4d6b:;
  /* 112c4d6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4d6e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4d72 jne 0x112c4d81 */
  if (!C.zf) goto L_112c4d81;
  /* 112c4d74 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4d78 jne 0x112c4d81 */
  if (!C.zf) goto L_112c4d81;
  /* 112c4d7a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_112c4d81:;
  /* 112c4d81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4d84 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112c4d87 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4d8a je 0x112c4dad */
  if (C.zf) goto L_112c4dad;
  /* 112c4d8c push 0x112ea7dc */
  push32((uint32_t)(0x112ea7dcu));
  /* 112c4d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4d93 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 112c4d98 push 0x112ea5ec */
  push32((uint32_t)(0x112ea5ecu));
  /* 112c4d9d push 2 */
  push32((uint32_t)(0x2u));
  /* 112c4d9f call 0x112c30f0 */
  push32(0x112c4da4u); f_112c30f0();
  /* 112c4da4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4da7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4daa jne 0x112c4dad */
  if (!C.zf) goto L_112c4dad;
  /* 112c4dac int3  */
  x86_unimpl("int3 @ 0x112c4dac");
L_112c4dad:;
  /* 112c4dad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c4daf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c4db1 jne 0x112c4d81 */
  if (!C.zf) goto L_112c4d81;
  /* 112c4db3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4db6 mov eax, dword ptr [0x112ef588] */
  EAX = (r32((uint32_t)(0x112ef588)));
  /* 112c4dbb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c4dbe mov dword ptr [0x112ef588], eax */
  w32((uint32_t)(0x112ef588), (EAX));
  /* 112c4dc3 mov ecx, dword ptr [0x112eda84] */
  ECX = (r32((uint32_t)(0x112eda84)));
  /* 112c4dc9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 112c4dcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c4dce jne 0x112c4eac */
  if (!C.zf) goto L_112c4eac;
  /* 112c4dd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4dd7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4dda je 0x112c4dec */
  if (C.zf) goto L_112c4dec;
  /* 112c4ddc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4ddf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112c4de1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4de4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 112c4de7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 112c4dea jmp 0x112c4e2a */
  goto L_112c4e2a;
L_112c4dec:;
  /* 112c4dec mov ecx, dword ptr [0x112ef57c] */
  ECX = (r32((uint32_t)(0x112ef57c)));
  /* 112c4df2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4df5 je 0x112c4e18 */
  if (C.zf) goto L_112c4e18;
  /* 112c4df7 push 0x112ea7c4 */
  push32((uint32_t)(0x112ea7c4u));
  /* 112c4dfc push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4dfe push 0x42a */
  push32((uint32_t)(0x42au));
  /* 112c4e03 push 0x112ea5ec */
  push32((uint32_t)(0x112ea5ecu));
  /* 112c4e08 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c4e0a call 0x112c30f0 */
  push32(0x112c4e0fu); f_112c30f0();
  /* 112c4e0f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4e12 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4e15 jne 0x112c4e18 */
  if (!C.zf) goto L_112c4e18;
  /* 112c4e17 int3  */
  x86_unimpl("int3 @ 0x112c4e17");
L_112c4e18:;
  /* 112c4e18 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c4e1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c4e1c jne 0x112c4dec */
  if (!C.zf) goto L_112c4dec;
  /* 112c4e1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4e21 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112c4e24 mov dword ptr [0x112ef57c], ecx */
  w32((uint32_t)(0x112ef57c), (ECX));
L_112c4e2a:;
  /* 112c4e2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4e2d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4e31 je 0x112c4e42 */
  if (C.zf) goto L_112c4e42;
  /* 112c4e33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4e36 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112c4e39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4e3c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112c4e3e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112c4e40 jmp 0x112c4e7f */
  goto L_112c4e7f;
L_112c4e42:;
  /* 112c4e42 mov ecx, dword ptr [0x112ef584] */
  ECX = (r32((uint32_t)(0x112ef584)));
  /* 112c4e48 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4e4b je 0x112c4e6e */
  if (C.zf) goto L_112c4e6e;
  /* 112c4e4d push 0x112ea7ac */
  push32((uint32_t)(0x112ea7acu));
  /* 112c4e52 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4e54 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 112c4e59 push 0x112ea5ec */
  push32((uint32_t)(0x112ea5ecu));
  /* 112c4e5e push 2 */
  push32((uint32_t)(0x2u));
  /* 112c4e60 call 0x112c30f0 */
  push32(0x112c4e65u); f_112c30f0();
  /* 112c4e65 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4e68 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4e6b jne 0x112c4e6e */
  if (!C.zf) goto L_112c4e6e;
  /* 112c4e6d int3  */
  x86_unimpl("int3 @ 0x112c4e6d");
L_112c4e6e:;
  /* 112c4e6e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c4e70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c4e72 jne 0x112c4e42 */
  if (!C.zf) goto L_112c4e42;
  /* 112c4e74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4e77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112c4e79 mov dword ptr [0x112ef584], ecx */
  w32((uint32_t)(0x112ef584), (ECX));
L_112c4e7f:;
  /* 112c4e7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4e82 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 112c4e85 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4e88 push eax */
  push32((uint32_t)(EAX));
  /* 112c4e89 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c4e8b mov cl, byte ptr [0x112eda91] */
  CL = (r8((uint32_t)(0x112eda91)));
  /* 112c4e91 push ecx */
  push32((uint32_t)(ECX));
  /* 112c4e92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4e95 push edx */
  push32((uint32_t)(EDX));
  /* 112c4e96 call 0x112c7da0 */
  push32(0x112c4e9bu); f_112c7da0();
  /* 112c4e9b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4e9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4ea1 push eax */
  push32((uint32_t)(EAX));
  /* 112c4ea2 call 0x112c81a0 */
  push32(0x112c4ea7u); f_112c81a0();
  /* 112c4ea7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4eaa jmp 0x112c4ed5 */
  goto L_112c4ed5;
L_112c4eac:;
  /* 112c4eac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4eaf mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 112c4eb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4eb9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 112c4ebc push eax */
  push32((uint32_t)(EAX));
  /* 112c4ebd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c4ebf mov cl, byte ptr [0x112eda91] */
  CL = (r8((uint32_t)(0x112eda91)));
  /* 112c4ec5 push ecx */
  push32((uint32_t)(ECX));
  /* 112c4ec6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c4ec9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4ecc push edx */
  push32((uint32_t)(EDX));
  /* 112c4ecd call 0x112c7da0 */
  push32(0x112c4ed2u); f_112c7da0();
  /* 112c4ed2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c4ed5:;
  /* 112c4ed5 pop edi */
  EDI = (pop32());
  /* 112c4ed6 pop esi */
  ESI = (pop32());
  /* 112c4ed7 pop ebx */
  EBX = (pop32());
  /* 112c4ed8 mov esp, ebp */
  ESP = (EBP);
  /* 112c4eda pop ebp */
  EBP = (pop32());
  /* 112c4edb ret  */
  ESPCHK(0x112c4af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ee0 @ 0x112c4ee0 (19 bytes, 9 insns) */
void f_112c4ee0(void) {
  FTRACE(0x112c4ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c4ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c4ee1 mov ebp, esp */
  EBP = (ESP);
  /* 112c4ee3 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c4ee5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c4ee8 push eax */
  push32((uint32_t)(EAX));
  /* 112c4ee9 call 0x112c4f00 */
  push32(0x112c4eeeu); f_112c4f00();
  /* 112c4eee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4ef1 pop ebp */
  EBP = (pop32());
  /* 112c4ef2 ret  */
  ESPCHK(0x112c4ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f00 @ 0x112c4f00 (342 bytes, 119 insns) */
void f_112c4f00(void) {
  FTRACE(0x112c4f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c4f00 push ebp */
  push32((uint32_t)(EBP));
  /* 112c4f01 mov ebp, esp */
  EBP = (ESP);
  /* 112c4f03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c4f06 push ebx */
  push32((uint32_t)(EBX));
  /* 112c4f07 push esi */
  push32((uint32_t)(ESI));
  /* 112c4f08 push edi */
  push32((uint32_t)(EDI));
  /* 112c4f09 mov eax, dword ptr [0x112eda84] */
  EAX = (r32((uint32_t)(0x112eda84)));
  /* 112c4f0e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 112c4f11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c4f13 je 0x112c4f45 */
  if (C.zf) goto L_112c4f45;
L_112c4f15:;
  /* 112c4f15 call 0x112c51d0 */
  push32(0x112c4f1au); f_112c51d0();
  /* 112c4f1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c4f1c jne 0x112c4f3f */
  if (!C.zf) goto L_112c4f3f;
  /* 112c4f1e push 0x112ea5f8 */
  push32((uint32_t)(0x112ea5f8u));
  /* 112c4f23 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4f25 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 112c4f2a push 0x112ea5ec */
  push32((uint32_t)(0x112ea5ecu));
  /* 112c4f2f push 2 */
  push32((uint32_t)(0x2u));
  /* 112c4f31 call 0x112c30f0 */
  push32(0x112c4f36u); f_112c30f0();
  /* 112c4f36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4f39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4f3c jne 0x112c4f3f */
  if (!C.zf) goto L_112c4f3f;
  /* 112c4f3e int3  */
  x86_unimpl("int3 @ 0x112c4f3e");
L_112c4f3f:;
  /* 112c4f3f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c4f41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c4f43 jne 0x112c4f15 */
  if (!C.zf) goto L_112c4f15;
L_112c4f45:;
  /* 112c4f45 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c4f47 call 0x112c7a30 */
  push32(0x112c4f4cu); f_112c7a30();
  /* 112c4f4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c4f4f:;
  /* 112c4f4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c4f52 push edx */
  push32((uint32_t)(EDX));
  /* 112c4f53 call 0x112c5630 */
  push32(0x112c4f58u); f_112c5630();
  /* 112c4f58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4f5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c4f5d jne 0x112c4f80 */
  if (!C.zf) goto L_112c4f80;
  /* 112c4f5f push 0x112ea6fc */
  push32((uint32_t)(0x112ea6fcu));
  /* 112c4f64 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4f66 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 112c4f6b push 0x112ea5ec */
  push32((uint32_t)(0x112ea5ecu));
  /* 112c4f70 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c4f72 call 0x112c30f0 */
  push32(0x112c4f77u); f_112c30f0();
  /* 112c4f77 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4f7a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4f7d jne 0x112c4f80 */
  if (!C.zf) goto L_112c4f80;
  /* 112c4f7f int3  */
  x86_unimpl("int3 @ 0x112c4f7f");
L_112c4f80:;
  /* 112c4f80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c4f82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c4f84 jne 0x112c4f4f */
  if (!C.zf) goto L_112c4f4f;
  /* 112c4f86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c4f89 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c4f8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_112c4f8f:;
  /* 112c4f8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c4f92 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112c4f95 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c4f9a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4f9d je 0x112c4fe2 */
  if (C.zf) goto L_112c4fe2;
  /* 112c4f9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c4fa2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4fa6 je 0x112c4fe2 */
  if (C.zf) goto L_112c4fe2;
  /* 112c4fa8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c4fab mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112c4fae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c4fb3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4fb6 je 0x112c4fe2 */
  if (C.zf) goto L_112c4fe2;
  /* 112c4fb8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c4fbb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4fbf je 0x112c4fe2 */
  if (C.zf) goto L_112c4fe2;
  /* 112c4fc1 push 0x112ea894 */
  push32((uint32_t)(0x112ea894u));
  /* 112c4fc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c4fc8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 112c4fcd push 0x112ea5ec */
  push32((uint32_t)(0x112ea5ecu));
  /* 112c4fd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c4fd4 call 0x112c30f0 */
  push32(0x112c4fd9u); f_112c30f0();
  /* 112c4fd9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c4fdc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4fdf jne 0x112c4fe2 */
  if (!C.zf) goto L_112c4fe2;
  /* 112c4fe1 int3  */
  x86_unimpl("int3 @ 0x112c4fe1");
L_112c4fe2:;
  /* 112c4fe2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c4fe4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c4fe6 jne 0x112c4f8f */
  if (!C.zf) goto L_112c4f8f;
  /* 112c4fe8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c4feb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4fef jne 0x112c4ffe */
  if (!C.zf) goto L_112c4ffe;
  /* 112c4ff1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c4ff5 jne 0x112c4ffe */
  if (!C.zf) goto L_112c4ffe;
  /* 112c4ff7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_112c4ffe:;
  /* 112c4ffe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c5001 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5005 je 0x112c5039 */
  if (C.zf) goto L_112c5039;
L_112c5007:;
  /* 112c5007 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c500a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112c500d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5010 je 0x112c5033 */
  if (C.zf) goto L_112c5033;
  /* 112c5012 push 0x112ea7dc */
  push32((uint32_t)(0x112ea7dcu));
  /* 112c5017 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5019 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 112c501e push 0x112ea5ec */
  push32((uint32_t)(0x112ea5ecu));
  /* 112c5023 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c5025 call 0x112c30f0 */
  push32(0x112c502au); f_112c30f0();
  /* 112c502a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c502d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5030 jne 0x112c5033 */
  if (!C.zf) goto L_112c5033;
  /* 112c5032 int3  */
  x86_unimpl("int3 @ 0x112c5032");
L_112c5033:;
  /* 112c5033 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c5035 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c5037 jne 0x112c5007 */
  if (!C.zf) goto L_112c5007;
L_112c5039:;
  /* 112c5039 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c503c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 112c503f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c5042 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c5044 call 0x112c7ad0 */
  push32(0x112c5049u); f_112c7ad0();
  /* 112c5049 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c504c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c504f pop edi */
  EDI = (pop32());
  /* 112c5050 pop esi */
  ESI = (pop32());
  /* 112c5051 pop ebx */
  EBX = (pop32());
  /* 112c5052 mov esp, ebp */
  ESP = (EBP);
  /* 112c5054 pop ebp */
  EBP = (pop32());
  /* 112c5055 ret  */
  ESPCHK(0x112c4f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005060 @ 0x112c5060 (28 bytes, 11 insns) */
void f_112c5060(void) {
  FTRACE(0x112c5060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c5060 push ebp */
  push32((uint32_t)(EBP));
  /* 112c5061 mov ebp, esp */
  EBP = (ESP);
  /* 112c5063 push ecx */
  push32((uint32_t)(ECX));
  /* 112c5064 mov eax, dword ptr [0x112eda8c] */
  EAX = (r32((uint32_t)(0x112eda8c)));
  /* 112c5069 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c506c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c506f mov dword ptr [0x112eda8c], ecx */
  w32((uint32_t)(0x112eda8c), (ECX));
  /* 112c5075 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5078 mov esp, ebp */
  ESP = (EBP);
  /* 112c507a pop ebp */
  EBP = (pop32());
  /* 112c507b ret  */
  ESPCHK(0x112c5060u, _esp0);
  ESP += 4; return;
}

/* FUN_10005080 @ 0x112c5080 (157 bytes, 59 insns) */
void f_112c5080(void) {
  FTRACE(0x112c5080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c5080 push ebp */
  push32((uint32_t)(EBP));
  /* 112c5081 mov ebp, esp */
  EBP = (ESP);
  /* 112c5083 push ecx */
  push32((uint32_t)(ECX));
  /* 112c5084 push ebx */
  push32((uint32_t)(EBX));
  /* 112c5085 push esi */
  push32((uint32_t)(ESI));
  /* 112c5086 push edi */
  push32((uint32_t)(EDI));
  /* 112c5087 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c5089 call 0x112c7a30 */
  push32(0x112c508eu); f_112c7a30();
  /* 112c508e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5091 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c5094 push eax */
  push32((uint32_t)(EAX));
  /* 112c5095 call 0x112c5630 */
  push32(0x112c509au); f_112c5630();
  /* 112c509a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c509d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c509f je 0x112c510c */
  if (C.zf) goto L_112c510c;
  /* 112c50a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c50a4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c50a7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112c50aa:;
  /* 112c50aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c50ad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112c50b0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c50b5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c50b8 je 0x112c50fd */
  if (C.zf) goto L_112c50fd;
  /* 112c50ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c50bd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c50c1 je 0x112c50fd */
  if (C.zf) goto L_112c50fd;
  /* 112c50c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c50c6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112c50c9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c50ce cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c50d1 je 0x112c50fd */
  if (C.zf) goto L_112c50fd;
  /* 112c50d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c50d6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c50da je 0x112c50fd */
  if (C.zf) goto L_112c50fd;
  /* 112c50dc push 0x112ea894 */
  push32((uint32_t)(0x112ea894u));
  /* 112c50e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c50e3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 112c50e8 push 0x112ea5ec */
  push32((uint32_t)(0x112ea5ecu));
  /* 112c50ed push 2 */
  push32((uint32_t)(0x2u));
  /* 112c50ef call 0x112c30f0 */
  push32(0x112c50f4u); f_112c30f0();
  /* 112c50f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c50f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c50fa jne 0x112c50fd */
  if (!C.zf) goto L_112c50fd;
  /* 112c50fc int3  */
  x86_unimpl("int3 @ 0x112c50fc");
L_112c50fd:;
  /* 112c50fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c50ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c5101 jne 0x112c50aa */
  if (!C.zf) goto L_112c50aa;
  /* 112c5103 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5106 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c5109 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_112c510c:;
  /* 112c510c push 9 */
  push32((uint32_t)(0x9u));
  /* 112c510e call 0x112c7ad0 */
  push32(0x112c5113u); f_112c7ad0();
  /* 112c5113 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5116 pop edi */
  EDI = (pop32());
  /* 112c5117 pop esi */
  ESI = (pop32());
  /* 112c5118 pop ebx */
  EBX = (pop32());
  /* 112c5119 mov esp, ebp */
  ESP = (EBP);
  /* 112c511b pop ebp */
  EBP = (pop32());
  /* 112c511c ret  */
  ESPCHK(0x112c5080u, _esp0);
  ESP += 4; return;
}

/* FUN_10005120 @ 0x112c5120 (28 bytes, 11 insns) */
void f_112c5120(void) {
  FTRACE(0x112c5120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c5120 push ebp */
  push32((uint32_t)(EBP));
  /* 112c5121 mov ebp, esp */
  EBP = (ESP);
  /* 112c5123 push ecx */
  push32((uint32_t)(ECX));
  /* 112c5124 mov eax, dword ptr [0x112edc90] */
  EAX = (r32((uint32_t)(0x112edc90)));
  /* 112c5129 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c512c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c512f mov dword ptr [0x112edc90], ecx */
  w32((uint32_t)(0x112edc90), (ECX));
  /* 112c5135 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5138 mov esp, ebp */
  ESP = (EBP);
  /* 112c513a pop ebp */
  EBP = (pop32());
  /* 112c513b ret  */
  ESPCHK(0x112c5120u, _esp0);
  ESP += 4; return;
}

/* FUN_10005140 @ 0x112c5140 (136 bytes, 55 insns) */
void f_112c5140(void) {
  FTRACE(0x112c5140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c5140 push ebp */
  push32((uint32_t)(EBP));
  /* 112c5141 mov ebp, esp */
  EBP = (ESP);
  /* 112c5143 push ecx */
  push32((uint32_t)(ECX));
  /* 112c5144 push ebx */
  push32((uint32_t)(EBX));
  /* 112c5145 push esi */
  push32((uint32_t)(ESI));
  /* 112c5146 push edi */
  push32((uint32_t)(EDI));
  /* 112c5147 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_112c514e:;
  /* 112c514e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c5151 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c5154 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c5157 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 112c515a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c515c je 0x112c51be */
  if (C.zf) goto L_112c51be;
  /* 112c515e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c5161 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c5163 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112c5165 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c5168 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 112c516e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c5171 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5174 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 112c5177 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5179 je 0x112c51bc */
  if (C.zf) goto L_112c51bc;
L_112c517b:;
  /* 112c517b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c517e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c5183 push eax */
  push32((uint32_t)(EAX));
  /* 112c5184 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c5187 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c5189 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 112c518c push edx */
  push32((uint32_t)(EDX));
  /* 112c518d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c5190 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c5193 push eax */
  push32((uint32_t)(EAX));
  /* 112c5194 push 0x112ea8d8 */
  push32((uint32_t)(0x112ea8d8u));
  /* 112c5199 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c519b push 0 */
  push32((uint32_t)(0x0u));
  /* 112c519d push 0 */
  push32((uint32_t)(0x0u));
  /* 112c519f push 0 */
  push32((uint32_t)(0x0u));
  /* 112c51a1 call 0x112c30f0 */
  push32(0x112c51a6u); f_112c30f0();
  /* 112c51a6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c51a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c51ac jne 0x112c51af */
  if (!C.zf) goto L_112c51af;
  /* 112c51ae int3  */
  x86_unimpl("int3 @ 0x112c51ae");
L_112c51af:;
  /* 112c51af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c51b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c51b3 jne 0x112c517b */
  if (!C.zf) goto L_112c517b;
  /* 112c51b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_112c51bc:;
  /* 112c51bc jmp 0x112c514e */
  goto L_112c514e;
L_112c51be:;
  /* 112c51be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c51c1 pop edi */
  EDI = (pop32());
  /* 112c51c2 pop esi */
  ESI = (pop32());
  /* 112c51c3 pop ebx */
  EBX = (pop32());
  /* 112c51c4 mov esp, ebp */
  ESP = (EBP);
  /* 112c51c6 pop ebp */
  EBP = (pop32());
  /* 112c51c7 ret  */
  ESPCHK(0x112c5140u, _esp0);
  ESP += 4; return;
}

/* FUN_100051d0 @ 0x112c51d0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_112c51d0(void) {
  FTRACE(0x112c51d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c51d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c51d1 mov ebp, esp */
  EBP = (ESP);
  /* 112c51d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c51d6 push ebx */
  push32((uint32_t)(EBX));
  /* 112c51d7 push esi */
  push32((uint32_t)(ESI));
  /* 112c51d8 push edi */
  push32((uint32_t)(EDI));
  /* 112c51d9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 112c51e0 mov eax, dword ptr [0x112eda84] */
  EAX = (r32((uint32_t)(0x112eda84)));
  /* 112c51e5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 112c51e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c51ea jne 0x112c51f6 */
  if (!C.zf) goto L_112c51f6;
  /* 112c51ec mov eax, 1 */
  EAX = (0x1u);
  /* 112c51f1 jmp 0x112c5528 */
  goto L_112c5528;
L_112c51f6:;
  /* 112c51f6 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c51f8 call 0x112c7a30 */
  push32(0x112c51fdu); f_112c7a30();
  /* 112c51fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5200 call 0x112c8210 */
  push32(0x112c5205u); f_112c8210();
  /* 112c5205 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112c5208 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c520c je 0x112c5319 */
  if (C.zf) goto L_112c5319;
  /* 112c5212 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5216 je 0x112c5319 */
  if (C.zf) goto L_112c5319;
  /* 112c521c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c521f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 112c5222 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c5225 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5228 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 112c522b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c522f ja 0x112c52e2 */
  if ((!C.cf&&!C.zf)) goto L_112c52e2;
  /* 112c5235 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c5238 jmp dword ptr [eax*4 + 0x112c552f] */
  switch (EAX) {
    case 0: goto L_112c52ba;
    case 1: goto L_112c5292;
    case 2: goto L_112c526a;
    case 3: goto L_112c523f;
    default: x86_unimpl("switch@0x112c5238 out of table"); return;
  }
L_112c523f:;
  /* 112c523f push 0x112eaa2c */
  push32((uint32_t)(0x112eaa2cu));
  /* 112c5244 push 0x112ea58c */
  push32((uint32_t)(0x112ea58cu));
  /* 112c5249 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c524b push 0 */
  push32((uint32_t)(0x0u));
  /* 112c524d push 0 */
  push32((uint32_t)(0x0u));
  /* 112c524f push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5251 call 0x112c30f0 */
  push32(0x112c5256u); f_112c30f0();
  /* 112c5256 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5259 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c525c jne 0x112c525f */
  if (!C.zf) goto L_112c525f;
  /* 112c525e int3  */
  x86_unimpl("int3 @ 0x112c525e");
L_112c525f:;
  /* 112c525f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c5261 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c5263 jne 0x112c523f */
  if (!C.zf) goto L_112c523f;
  /* 112c5265 jmp 0x112c5308 */
  goto L_112c5308;
L_112c526a:;
  /* 112c526a push 0x112eaa08 */
  push32((uint32_t)(0x112eaa08u));
  /* 112c526f push 0x112ea58c */
  push32((uint32_t)(0x112ea58cu));
  /* 112c5274 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5276 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5278 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c527a push 0 */
  push32((uint32_t)(0x0u));
  /* 112c527c call 0x112c30f0 */
  push32(0x112c5281u); f_112c30f0();
  /* 112c5281 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5284 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5287 jne 0x112c528a */
  if (!C.zf) goto L_112c528a;
  /* 112c5289 int3  */
  x86_unimpl("int3 @ 0x112c5289");
L_112c528a:;
  /* 112c528a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c528c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c528e jne 0x112c526a */
  if (!C.zf) goto L_112c526a;
  /* 112c5290 jmp 0x112c5308 */
  goto L_112c5308;
L_112c5292:;
  /* 112c5292 push 0x112ea9e4 */
  push32((uint32_t)(0x112ea9e4u));
  /* 112c5297 push 0x112ea58c */
  push32((uint32_t)(0x112ea58cu));
  /* 112c529c push 0 */
  push32((uint32_t)(0x0u));
  /* 112c529e push 0 */
  push32((uint32_t)(0x0u));
  /* 112c52a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c52a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c52a4 call 0x112c30f0 */
  push32(0x112c52a9u); f_112c30f0();
  /* 112c52a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c52ac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c52af jne 0x112c52b2 */
  if (!C.zf) goto L_112c52b2;
  /* 112c52b1 int3  */
  x86_unimpl("int3 @ 0x112c52b1");
L_112c52b2:;
  /* 112c52b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c52b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c52b6 jne 0x112c5292 */
  if (!C.zf) goto L_112c5292;
  /* 112c52b8 jmp 0x112c5308 */
  goto L_112c5308;
L_112c52ba:;
  /* 112c52ba push 0x112ea9c0 */
  push32((uint32_t)(0x112ea9c0u));
  /* 112c52bf push 0x112ea58c */
  push32((uint32_t)(0x112ea58cu));
  /* 112c52c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c52c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c52c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c52ca push 0 */
  push32((uint32_t)(0x0u));
  /* 112c52cc call 0x112c30f0 */
  push32(0x112c52d1u); f_112c30f0();
  /* 112c52d1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c52d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c52d7 jne 0x112c52da */
  if (!C.zf) goto L_112c52da;
  /* 112c52d9 int3  */
  x86_unimpl("int3 @ 0x112c52d9");
L_112c52da:;
  /* 112c52da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c52dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c52de jne 0x112c52ba */
  if (!C.zf) goto L_112c52ba;
  /* 112c52e0 jmp 0x112c5308 */
  goto L_112c5308;
L_112c52e2:;
  /* 112c52e2 push 0x112ea994 */
  push32((uint32_t)(0x112ea994u));
  /* 112c52e7 push 0x112ea58c */
  push32((uint32_t)(0x112ea58cu));
  /* 112c52ec push 0 */
  push32((uint32_t)(0x0u));
  /* 112c52ee push 0 */
  push32((uint32_t)(0x0u));
  /* 112c52f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c52f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c52f4 call 0x112c30f0 */
  push32(0x112c52f9u); f_112c30f0();
  /* 112c52f9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c52fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c52ff jne 0x112c5302 */
  if (!C.zf) goto L_112c5302;
  /* 112c5301 int3  */
  x86_unimpl("int3 @ 0x112c5301");
L_112c5302:;
  /* 112c5302 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c5304 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c5306 jne 0x112c52e2 */
  if (!C.zf) goto L_112c52e2;
L_112c5308:;
  /* 112c5308 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c530a call 0x112c7ad0 */
  push32(0x112c530fu); f_112c7ad0();
  /* 112c530f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5312 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c5314 jmp 0x112c5528 */
  goto L_112c5528;
L_112c5319:;
  /* 112c5319 mov eax, dword ptr [0x112ef584] */
  EAX = (r32((uint32_t)(0x112ef584)));
  /* 112c531e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112c5321 jmp 0x112c532b */
  goto L_112c532b;
L_112c5323:;
  /* 112c5323 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c5326 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112c5328 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_112c532b:;
  /* 112c532b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c532f je 0x112c551b */
  if (C.zf) goto L_112c551b;
  /* 112c5335 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 112c533c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c533f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 112c5342 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112c5348 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c534b je 0x112c5370 */
  if (C.zf) goto L_112c5370;
  /* 112c534d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c5350 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5354 je 0x112c5370 */
  if (C.zf) goto L_112c5370;
  /* 112c5356 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c5359 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 112c535c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112c5362 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5365 je 0x112c5370 */
  if (C.zf) goto L_112c5370;
  /* 112c5367 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c536a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c536e jne 0x112c5388 */
  if (!C.zf) goto L_112c5388;
L_112c5370:;
  /* 112c5370 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c5373 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 112c5376 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112c537c mov edx, dword ptr [ecx*4 + 0x112eda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x112eda94)));
  /* 112c5383 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 112c5386 jmp 0x112c538f */
  goto L_112c538f;
L_112c5388:;
  /* 112c5388 mov dword ptr [ebp - 0x14], 0x112ea98c */
  w32((uint32_t)(EBP + -0x14), (0x112ea98cu));
L_112c538f:;
  /* 112c538f push 4 */
  push32((uint32_t)(0x4u));
  /* 112c5391 mov al, byte ptr [0x112eda90] */
  AL = (r8((uint32_t)(0x112eda90)));
  /* 112c5396 push eax */
  push32((uint32_t)(EAX));
  /* 112c5397 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c539a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c539d push ecx */
  push32((uint32_t)(ECX));
  /* 112c539e call 0x112c5140 */
  push32(0x112c53a3u); f_112c5140();
  /* 112c53a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c53a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c53a8 jne 0x112c53e4 */
  if (!C.zf) goto L_112c53e4;
L_112c53aa:;
  /* 112c53aa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c53ad add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c53b0 push edx */
  push32((uint32_t)(EDX));
  /* 112c53b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c53b4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 112c53b7 push ecx */
  push32((uint32_t)(ECX));
  /* 112c53b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c53bb push edx */
  push32((uint32_t)(EDX));
  /* 112c53bc push 0x112ea868 */
  push32((uint32_t)(0x112ea868u));
  /* 112c53c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c53c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c53c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c53c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c53c9 call 0x112c30f0 */
  push32(0x112c53ceu); f_112c30f0();
  /* 112c53ce add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c53d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c53d4 jne 0x112c53d7 */
  if (!C.zf) goto L_112c53d7;
  /* 112c53d6 int3  */
  x86_unimpl("int3 @ 0x112c53d6");
L_112c53d7:;
  /* 112c53d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c53d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c53db jne 0x112c53aa */
  if (!C.zf) goto L_112c53aa;
  /* 112c53dd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_112c53e4:;
  /* 112c53e4 push 4 */
  push32((uint32_t)(0x4u));
  /* 112c53e6 mov cl, byte ptr [0x112eda90] */
  CL = (r8((uint32_t)(0x112eda90)));
  /* 112c53ec push ecx */
  push32((uint32_t)(ECX));
  /* 112c53ed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c53f0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 112c53f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c53f6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 112c53fa push edx */
  push32((uint32_t)(EDX));
  /* 112c53fb call 0x112c5140 */
  push32(0x112c5400u); f_112c5140();
  /* 112c5400 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5403 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c5405 jne 0x112c5441 */
  if (!C.zf) goto L_112c5441;
L_112c5407:;
  /* 112c5407 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c540a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c540d push eax */
  push32((uint32_t)(EAX));
  /* 112c540e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c5411 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 112c5414 push edx */
  push32((uint32_t)(EDX));
  /* 112c5415 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c5418 push eax */
  push32((uint32_t)(EAX));
  /* 112c5419 push 0x112ea83c */
  push32((uint32_t)(0x112ea83cu));
  /* 112c541e push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5420 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5422 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5424 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5426 call 0x112c30f0 */
  push32(0x112c542bu); f_112c30f0();
  /* 112c542b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c542e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5431 jne 0x112c5434 */
  if (!C.zf) goto L_112c5434;
  /* 112c5433 int3  */
  x86_unimpl("int3 @ 0x112c5433");
L_112c5434:;
  /* 112c5434 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c5436 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c5438 jne 0x112c5407 */
  if (!C.zf) goto L_112c5407;
  /* 112c543a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_112c5441:;
  /* 112c5441 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c5444 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5448 jne 0x112c549a */
  if (!C.zf) goto L_112c549a;
  /* 112c544a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c544d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112c5450 push ecx */
  push32((uint32_t)(ECX));
  /* 112c5451 mov dl, byte ptr [0x112eda91] */
  DL = (r8((uint32_t)(0x112eda91)));
  /* 112c5457 push edx */
  push32((uint32_t)(EDX));
  /* 112c5458 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c545b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c545e push eax */
  push32((uint32_t)(EAX));
  /* 112c545f call 0x112c5140 */
  push32(0x112c5464u); f_112c5140();
  /* 112c5464 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5467 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c5469 jne 0x112c549a */
  if (!C.zf) goto L_112c549a;
L_112c546b:;
  /* 112c546b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c546e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5471 push ecx */
  push32((uint32_t)(ECX));
  /* 112c5472 push 0x112ea960 */
  push32((uint32_t)(0x112ea960u));
  /* 112c5477 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5479 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c547b push 0 */
  push32((uint32_t)(0x0u));
  /* 112c547d push 0 */
  push32((uint32_t)(0x0u));
  /* 112c547f call 0x112c30f0 */
  push32(0x112c5484u); f_112c30f0();
  /* 112c5484 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5487 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c548a jne 0x112c548d */
  if (!C.zf) goto L_112c548d;
  /* 112c548c int3  */
  x86_unimpl("int3 @ 0x112c548c");
L_112c548d:;
  /* 112c548d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c548f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c5491 jne 0x112c546b */
  if (!C.zf) goto L_112c546b;
  /* 112c5493 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_112c549a:;
  /* 112c549a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c549e jne 0x112c5516 */
  if (!C.zf) goto L_112c5516;
  /* 112c54a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c54a3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c54a7 je 0x112c54dc */
  if (C.zf) goto L_112c54dc;
L_112c54a9:;
  /* 112c54a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c54ac mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 112c54af push edx */
  push32((uint32_t)(EDX));
  /* 112c54b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c54b3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 112c54b6 push ecx */
  push32((uint32_t)(ECX));
  /* 112c54b7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c54ba push edx */
  push32((uint32_t)(EDX));
  /* 112c54bb push 0x112ea940 */
  push32((uint32_t)(0x112ea940u));
  /* 112c54c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c54c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c54c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c54c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c54c8 call 0x112c30f0 */
  push32(0x112c54cdu); f_112c30f0();
  /* 112c54cd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c54d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c54d3 jne 0x112c54d6 */
  if (!C.zf) goto L_112c54d6;
  /* 112c54d5 int3  */
  x86_unimpl("int3 @ 0x112c54d5");
L_112c54d6:;
  /* 112c54d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c54d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c54da jne 0x112c54a9 */
  if (!C.zf) goto L_112c54a9;
L_112c54dc:;
  /* 112c54dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c54df mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 112c54e2 push edx */
  push32((uint32_t)(EDX));
  /* 112c54e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c54e6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c54e9 push eax */
  push32((uint32_t)(EAX));
  /* 112c54ea mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c54ed push ecx */
  push32((uint32_t)(ECX));
  /* 112c54ee push 0x112ea914 */
  push32((uint32_t)(0x112ea914u));
  /* 112c54f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c54f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c54f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c54f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c54fb call 0x112c30f0 */
  push32(0x112c5500u); f_112c30f0();
  /* 112c5500 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5503 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5506 jne 0x112c5509 */
  if (!C.zf) goto L_112c5509;
  /* 112c5508 int3  */
  x86_unimpl("int3 @ 0x112c5508");
L_112c5509:;
  /* 112c5509 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c550b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c550d jne 0x112c54dc */
  if (!C.zf) goto L_112c54dc;
  /* 112c550f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_112c5516:;
  /* 112c5516 jmp 0x112c5323 */
  goto L_112c5323;
L_112c551b:;
  /* 112c551b push 9 */
  push32((uint32_t)(0x9u));
  /* 112c551d call 0x112c7ad0 */
  push32(0x112c5522u); f_112c7ad0();
  /* 112c5522 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5525 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_112c5528:;
  /* 112c5528 pop edi */
  EDI = (pop32());
  /* 112c5529 pop esi */
  ESI = (pop32());
  /* 112c552a pop ebx */
  EBX = (pop32());
  /* 112c552b mov esp, ebp */
  ESP = (EBP);
  /* 112c552d pop ebp */
  EBP = (pop32());
  /* 112c552e ret  */
  ESPCHK(0x112c51d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005540 @ 0x112c5540 (34 bytes, 13 insns) */
void f_112c5540(void) {
  FTRACE(0x112c5540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c5540 push ebp */
  push32((uint32_t)(EBP));
  /* 112c5541 mov ebp, esp */
  EBP = (ESP);
  /* 112c5543 push ecx */
  push32((uint32_t)(ECX));
  /* 112c5544 mov eax, dword ptr [0x112eda84] */
  EAX = (r32((uint32_t)(0x112eda84)));
  /* 112c5549 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c554c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5550 je 0x112c555b */
  if (C.zf) goto L_112c555b;
  /* 112c5552 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c5555 mov dword ptr [0x112eda84], ecx */
  w32((uint32_t)(0x112eda84), (ECX));
L_112c555b:;
  /* 112c555b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c555e mov esp, ebp */
  ESP = (EBP);
  /* 112c5560 pop ebp */
  EBP = (pop32());
  /* 112c5561 ret  */
  ESPCHK(0x112c5540u, _esp0);
  ESP += 4; return;
}

/* FUN_10005570 @ 0x112c5570 (103 bytes, 38 insns) */
void f_112c5570(void) {
  FTRACE(0x112c5570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c5570 push ebp */
  push32((uint32_t)(EBP));
  /* 112c5571 mov ebp, esp */
  EBP = (ESP);
  /* 112c5573 push ecx */
  push32((uint32_t)(ECX));
  /* 112c5574 mov eax, dword ptr [0x112eda84] */
  EAX = (r32((uint32_t)(0x112eda84)));
  /* 112c5579 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 112c557c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c557e jne 0x112c5582 */
  if (!C.zf) goto L_112c5582;
  /* 112c5580 jmp 0x112c55d3 */
  goto L_112c55d3;
L_112c5582:;
  /* 112c5582 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c5584 call 0x112c7a30 */
  push32(0x112c5589u); f_112c7a30();
  /* 112c5589 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c558c mov ecx, dword ptr [0x112ef584] */
  ECX = (r32((uint32_t)(0x112ef584)));
  /* 112c5592 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112c5595 jmp 0x112c559f */
  goto L_112c559f;
L_112c5597:;
  /* 112c5597 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c559a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112c559c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112c559f:;
  /* 112c559f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c55a3 je 0x112c55c9 */
  if (C.zf) goto L_112c55c9;
  /* 112c55a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c55a8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 112c55ab and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 112c55b1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c55b4 jne 0x112c55c7 */
  if (!C.zf) goto L_112c55c7;
  /* 112c55b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c55b9 push eax */
  push32((uint32_t)(EAX));
  /* 112c55ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c55bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c55c0 push ecx */
  push32((uint32_t)(ECX));
  /* 112c55c1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x112c55c4u);
  /* 112c55c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c55c7:;
  /* 112c55c7 jmp 0x112c5597 */
  goto L_112c5597;
L_112c55c9:;
  /* 112c55c9 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c55cb call 0x112c7ad0 */
  push32(0x112c55d0u); f_112c7ad0();
  /* 112c55d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c55d3:;
  /* 112c55d3 mov esp, ebp */
  ESP = (EBP);
  /* 112c55d5 pop ebp */
  EBP = (pop32());
  /* 112c55d6 ret  */
  ESPCHK(0x112c5570u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x112c55e0 (75 bytes, 28 insns) */
void f_112c55e0(void) {
  FTRACE(0x112c55e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c55e0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c55e1 mov ebp, esp */
  EBP = (ESP);
  /* 112c55e3 push ecx */
  push32((uint32_t)(ECX));
  /* 112c55e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c55e8 je 0x112c561d */
  if (C.zf) goto L_112c561d;
  /* 112c55ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c55ed push eax */
  push32((uint32_t)(EAX));
  /* 112c55ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c55f1 push ecx */
  push32((uint32_t)(ECX));
  /* 112c55f2 call dword ptr [0x112f23c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23c0))), 0x112c55f8u);
  /* 112c55f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c55fa jne 0x112c561d */
  if (!C.zf) goto L_112c561d;
  /* 112c55fc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5600 je 0x112c5614 */
  if (C.zf) goto L_112c5614;
  /* 112c5602 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c5605 push edx */
  push32((uint32_t)(EDX));
  /* 112c5606 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c5609 push eax */
  push32((uint32_t)(EAX));
  /* 112c560a call dword ptr [0x112f23bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23bc))), 0x112c5610u);
  /* 112c5610 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c5612 jne 0x112c561d */
  if (!C.zf) goto L_112c561d;
L_112c5614:;
  /* 112c5614 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 112c561b jmp 0x112c5624 */
  goto L_112c5624;
L_112c561d:;
  /* 112c561d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_112c5624:;
  /* 112c5624 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5627 mov esp, ebp */
  ESP = (EBP);
  /* 112c5629 pop ebp */
  EBP = (pop32());
  /* 112c562a ret  */
  ESPCHK(0x112c55e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005630 @ 0x112c5630 (134 bytes, 50 insns) */
void f_112c5630(void) {
  FTRACE(0x112c5630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c5630 push ebp */
  push32((uint32_t)(EBP));
  /* 112c5631 mov ebp, esp */
  EBP = (ESP);
  /* 112c5633 push ecx */
  push32((uint32_t)(ECX));
  /* 112c5634 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5638 jne 0x112c563e */
  if (!C.zf) goto L_112c563e;
  /* 112c563a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c563c jmp 0x112c56b2 */
  goto L_112c56b2;
L_112c563e:;
  /* 112c563e push 1 */
  push32((uint32_t)(0x1u));
  /* 112c5640 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 112c5642 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c5645 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c5648 push eax */
  push32((uint32_t)(EAX));
  /* 112c5649 call 0x112c55e0 */
  push32(0x112c564eu); f_112c55e0();
  /* 112c564e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5651 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c5653 jne 0x112c5659 */
  if (!C.zf) goto L_112c5659;
  /* 112c5655 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c5657 jmp 0x112c56b2 */
  goto L_112c56b2;
L_112c5659:;
  /* 112c5659 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c565c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c565f push ecx */
  push32((uint32_t)(ECX));
  /* 112c5660 call 0x112c8330 */
  push32(0x112c5665u); f_112c8330();
  /* 112c5665 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5668 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c566b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c566f je 0x112c5686 */
  if (C.zf) goto L_112c5686;
  /* 112c5671 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c5674 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c5677 push edx */
  push32((uint32_t)(EDX));
  /* 112c5678 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c567b push eax */
  push32((uint32_t)(EAX));
  /* 112c567c call 0x112c8390 */
  push32(0x112c5681u); f_112c8390();
  /* 112c5681 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5684 jmp 0x112c56b2 */
  goto L_112c56b2;
L_112c5686:;
  /* 112c5686 mov ecx, dword ptr [0x112ef538] */
  ECX = (r32((uint32_t)(0x112ef538)));
  /* 112c568c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 112c5692 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c5694 je 0x112c569d */
  if (C.zf) goto L_112c569d;
  /* 112c5696 mov eax, 1 */
  EAX = (0x1u);
  /* 112c569b jmp 0x112c56b2 */
  goto L_112c56b2;
L_112c569d:;
  /* 112c569d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c56a0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c56a3 push edx */
  push32((uint32_t)(EDX));
  /* 112c56a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c56a6 mov eax, dword ptr [0x112f0eec] */
  EAX = (r32((uint32_t)(0x112f0eec)));
  /* 112c56ab push eax */
  push32((uint32_t)(EAX));
  /* 112c56ac call dword ptr [0x112f23c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23c4))), 0x112c56b2u);
L_112c56b2:;
  /* 112c56b2 mov esp, ebp */
  ESP = (EBP);
  /* 112c56b4 pop ebp */
  EBP = (pop32());
  /* 112c56b5 ret  */
  ESPCHK(0x112c5630u, _esp0);
  ESP += 4; return;
}

/* FUN_100056c0 @ 0x112c56c0 (227 bytes, 80 insns) */
void f_112c56c0(void) {
  FTRACE(0x112c56c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c56c0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c56c1 mov ebp, esp */
  EBP = (ESP);
  /* 112c56c3 push ecx */
  push32((uint32_t)(ECX));
  /* 112c56c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c56c7 push eax */
  push32((uint32_t)(EAX));
  /* 112c56c8 call 0x112c5630 */
  push32(0x112c56cdu); f_112c5630();
  /* 112c56cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c56d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c56d2 jne 0x112c56db */
  if (!C.zf) goto L_112c56db;
  /* 112c56d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c56d6 jmp 0x112c579f */
  goto L_112c579f;
L_112c56db:;
  /* 112c56db push 9 */
  push32((uint32_t)(0x9u));
  /* 112c56dd call 0x112c7a30 */
  push32(0x112c56e2u); f_112c7a30();
  /* 112c56e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c56e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c56e8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c56eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112c56ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c56f1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112c56f4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c56f9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c56fc je 0x112c5720 */
  if (C.zf) goto L_112c5720;
  /* 112c56fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5701 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5705 je 0x112c5720 */
  if (C.zf) goto L_112c5720;
  /* 112c5707 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c570a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112c570d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c5712 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5715 je 0x112c5720 */
  if (C.zf) goto L_112c5720;
  /* 112c5717 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c571a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c571e jne 0x112c5793 */
  if (!C.zf) goto L_112c5793;
L_112c5720:;
  /* 112c5720 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c5722 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c5725 push edx */
  push32((uint32_t)(EDX));
  /* 112c5726 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c5729 push eax */
  push32((uint32_t)(EAX));
  /* 112c572a call 0x112c55e0 */
  push32(0x112c572fu); f_112c55e0();
  /* 112c572f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5732 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c5734 je 0x112c5793 */
  if (C.zf) goto L_112c5793;
  /* 112c5736 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5739 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 112c573c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c573f jne 0x112c5793 */
  if (!C.zf) goto L_112c5793;
  /* 112c5741 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5744 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 112c5747 cmp ecx, dword ptr [0x112eda88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x112eda88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c574d jg 0x112c5793 */
  if ((!C.zf&&C.sf==C.of)) goto L_112c5793;
  /* 112c574f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5753 je 0x112c5760 */
  if (C.zf) goto L_112c5760;
  /* 112c5755 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c5758 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c575b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 112c575e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_112c5760:;
  /* 112c5760 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5764 je 0x112c5771 */
  if (C.zf) goto L_112c5771;
  /* 112c5766 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c5769 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c576c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 112c576f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_112c5771:;
  /* 112c5771 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5775 je 0x112c5782 */
  if (C.zf) goto L_112c5782;
  /* 112c5777 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c577a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c577d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 112c5780 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_112c5782:;
  /* 112c5782 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c5784 call 0x112c7ad0 */
  push32(0x112c5789u); f_112c7ad0();
  /* 112c5789 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c578c mov eax, 1 */
  EAX = (0x1u);
  /* 112c5791 jmp 0x112c579f */
  goto L_112c579f;
L_112c5793:;
  /* 112c5793 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c5795 call 0x112c7ad0 */
  push32(0x112c579au); f_112c7ad0();
  /* 112c579a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c579d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112c579f:;
  /* 112c579f mov esp, ebp */
  ESP = (EBP);
  /* 112c57a1 pop ebp */
  EBP = (pop32());
  /* 112c57a2 ret  */
  ESPCHK(0x112c56c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100057b0 @ 0x112c57b0 (28 bytes, 11 insns) */
void f_112c57b0(void) {
  FTRACE(0x112c57b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c57b0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c57b1 mov ebp, esp */
  EBP = (ESP);
  /* 112c57b3 push ecx */
  push32((uint32_t)(ECX));
  /* 112c57b4 mov eax, dword ptr [0x112f0ef8] */
  EAX = (r32((uint32_t)(0x112f0ef8)));
  /* 112c57b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c57bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c57bf mov dword ptr [0x112f0ef8], ecx */
  w32((uint32_t)(0x112f0ef8), (ECX));
  /* 112c57c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c57c8 mov esp, ebp */
  ESP = (EBP);
  /* 112c57ca pop ebp */
  EBP = (pop32());
  /* 112c57cb ret  */
  ESPCHK(0x112c57b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100057d0 @ 0x112c57d0 (362 bytes, 116 insns) */
void f_112c57d0(void) {
  FTRACE(0x112c57d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c57d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c57d1 mov ebp, esp */
  EBP = (ESP);
  /* 112c57d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c57d6 push ebx */
  push32((uint32_t)(EBX));
  /* 112c57d7 push esi */
  push32((uint32_t)(ESI));
  /* 112c57d8 push edi */
  push32((uint32_t)(EDI));
  /* 112c57d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c57dd jne 0x112c580a */
  if (!C.zf) goto L_112c580a;
L_112c57df:;
  /* 112c57df push 0x112eaa74 */
  push32((uint32_t)(0x112eaa74u));
  /* 112c57e4 push 0x112ea58c */
  push32((uint32_t)(0x112ea58cu));
  /* 112c57e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c57eb push 0 */
  push32((uint32_t)(0x0u));
  /* 112c57ed push 0 */
  push32((uint32_t)(0x0u));
  /* 112c57ef push 0 */
  push32((uint32_t)(0x0u));
  /* 112c57f1 call 0x112c30f0 */
  push32(0x112c57f6u); f_112c30f0();
  /* 112c57f6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c57f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c57fc jne 0x112c57ff */
  if (!C.zf) goto L_112c57ff;
  /* 112c57fe int3  */
  x86_unimpl("int3 @ 0x112c57fe");
L_112c57ff:;
  /* 112c57ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c5801 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c5803 jne 0x112c57df */
  if (!C.zf) goto L_112c57df;
  /* 112c5805 jmp 0x112c5933 */
  goto L_112c5933;
L_112c580a:;
  /* 112c580a push 9 */
  push32((uint32_t)(0x9u));
  /* 112c580c call 0x112c7a30 */
  push32(0x112c5811u); f_112c7a30();
  /* 112c5811 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5814 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c5817 mov edx, dword ptr [0x112ef584] */
  EDX = (r32((uint32_t)(0x112ef584)));
  /* 112c581d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 112c581f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112c5826 jmp 0x112c5831 */
  goto L_112c5831;
L_112c5828:;
  /* 112c5828 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c582b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c582e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112c5831:;
  /* 112c5831 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5835 jge 0x112c5855 */
  if ((C.sf==C.of)) goto L_112c5855;
  /* 112c5837 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c583a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c583d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 112c5845 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5848 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c584b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 112c5853 jmp 0x112c5828 */
  goto L_112c5828;
L_112c5855:;
  /* 112c5855 mov edx, dword ptr [0x112ef584] */
  EDX = (r32((uint32_t)(0x112ef584)));
  /* 112c585b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 112c585e jmp 0x112c5868 */
  goto L_112c5868;
L_112c5860:;
  /* 112c5860 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c5863 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112c5865 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_112c5868:;
  /* 112c5868 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c586c je 0x112c5911 */
  if (C.zf) goto L_112c5911;
  /* 112c5872 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c5875 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112c5878 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c587d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c587f jl 0x112c58e7 */
  if ((C.sf!=C.of)) goto L_112c58e7;
  /* 112c5881 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c5884 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 112c5887 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 112c588d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5890 jge 0x112c58e7 */
  if ((C.sf==C.of)) goto L_112c58e7;
  /* 112c5892 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c5895 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 112c5898 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112c589e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c58a1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 112c58a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c58a8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c58ab mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 112c58ae and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 112c58b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c58b7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 112c58bb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c58be mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112c58c1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c58c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c58c9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 112c58cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c58d0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c58d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c58d6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 112c58d9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c58de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c58e1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 112c58e5 jmp 0x112c590c */
  goto L_112c590c;
L_112c58e7:;
  /* 112c58e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c58ea push edx */
  push32((uint32_t)(EDX));
  /* 112c58eb push 0x112eaa50 */
  push32((uint32_t)(0x112eaa50u));
  /* 112c58f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c58f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c58f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c58f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c58f8 call 0x112c30f0 */
  push32(0x112c58fdu); f_112c30f0();
  /* 112c58fd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5900 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5903 jne 0x112c5906 */
  if (!C.zf) goto L_112c5906;
  /* 112c5905 int3  */
  x86_unimpl("int3 @ 0x112c5905");
L_112c5906:;
  /* 112c5906 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c5908 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c590a jne 0x112c58e7 */
  if (!C.zf) goto L_112c58e7;
L_112c590c:;
  /* 112c590c jmp 0x112c5860 */
  goto L_112c5860;
L_112c5911:;
  /* 112c5911 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c5914 mov edx, dword ptr [0x112ef58c] */
  EDX = (r32((uint32_t)(0x112ef58c)));
  /* 112c591a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 112c591d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c5920 mov ecx, dword ptr [0x112ef580] */
  ECX = (r32((uint32_t)(0x112ef580)));
  /* 112c5926 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 112c5929 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c592b call 0x112c7ad0 */
  push32(0x112c5930u); f_112c7ad0();
  /* 112c5930 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c5933:;
  /* 112c5933 pop edi */
  EDI = (pop32());
  /* 112c5934 pop esi */
  ESI = (pop32());
  /* 112c5935 pop ebx */
  EBX = (pop32());
  /* 112c5936 mov esp, ebp */
  ESP = (EBP);
  /* 112c5938 pop ebp */
  EBP = (pop32());
  /* 112c5939 ret  */
  ESPCHK(0x112c57d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005940 @ 0x112c5940 (291 bytes, 95 insns) */
void f_112c5940(void) {
  FTRACE(0x112c5940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c5940 push ebp */
  push32((uint32_t)(EBP));
  /* 112c5941 mov ebp, esp */
  EBP = (ESP);
  /* 112c5943 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c5946 push ebx */
  push32((uint32_t)(EBX));
  /* 112c5947 push esi */
  push32((uint32_t)(ESI));
  /* 112c5948 push edi */
  push32((uint32_t)(EDI));
  /* 112c5949 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112c5950 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5954 je 0x112c5962 */
  if (C.zf) goto L_112c5962;
  /* 112c5956 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c595a je 0x112c5962 */
  if (C.zf) goto L_112c5962;
  /* 112c595c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5960 jne 0x112c5990 */
  if (!C.zf) goto L_112c5990;
L_112c5962:;
  /* 112c5962 push 0x112eaa9c */
  push32((uint32_t)(0x112eaa9cu));
  /* 112c5967 push 0x112ea58c */
  push32((uint32_t)(0x112ea58cu));
  /* 112c596c push 0 */
  push32((uint32_t)(0x0u));
  /* 112c596e push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5970 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5972 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5974 call 0x112c30f0 */
  push32(0x112c5979u); f_112c30f0();
  /* 112c5979 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c597c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c597f jne 0x112c5982 */
  if (!C.zf) goto L_112c5982;
  /* 112c5981 int3  */
  x86_unimpl("int3 @ 0x112c5981");
L_112c5982:;
  /* 112c5982 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c5984 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c5986 jne 0x112c5962 */
  if (!C.zf) goto L_112c5962;
  /* 112c5988 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c598b jmp 0x112c5a5c */
  goto L_112c5a5c;
L_112c5990:;
  /* 112c5990 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112c5997 jmp 0x112c59a2 */
  goto L_112c59a2;
L_112c5999:;
  /* 112c5999 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c599c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c599f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112c59a2:;
  /* 112c59a2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c59a6 jge 0x112c5a2c */
  if ((C.sf==C.of)) goto L_112c5a2c;
  /* 112c59ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c59af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c59b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c59b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 112c59b8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 112c59bc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c59c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c59c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c59c6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 112c59ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c59cd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c59d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c59d3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 112c59d6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 112c59da sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c59de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c59e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c59e4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 112c59e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c59eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c59ee cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c59f3 jne 0x112c5a02 */
  if (!C.zf) goto L_112c5a02;
  /* 112c59f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c59f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c59fb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5a00 je 0x112c5a27 */
  if (C.zf) goto L_112c5a27;
L_112c5a02:;
  /* 112c5a02 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5a06 je 0x112c5a27 */
  if (C.zf) goto L_112c5a27;
  /* 112c5a08 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5a0c jne 0x112c5a20 */
  if (!C.zf) goto L_112c5a20;
  /* 112c5a0e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5a12 jne 0x112c5a27 */
  if (!C.zf) goto L_112c5a27;
  /* 112c5a14 mov eax, dword ptr [0x112eda84] */
  EAX = (r32((uint32_t)(0x112eda84)));
  /* 112c5a19 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 112c5a1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c5a1e je 0x112c5a27 */
  if (C.zf) goto L_112c5a27;
L_112c5a20:;
  /* 112c5a20 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_112c5a27:;
  /* 112c5a27 jmp 0x112c5999 */
  goto L_112c5999;
L_112c5a2c:;
  /* 112c5a2c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c5a2f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c5a32 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 112c5a35 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c5a38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c5a3b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 112c5a3e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c5a41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c5a44 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 112c5a47 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c5a4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c5a4d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 112c5a50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c5a53 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 112c5a59 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_112c5a5c:;
  /* 112c5a5c pop edi */
  EDI = (pop32());
  /* 112c5a5d pop esi */
  ESI = (pop32());
  /* 112c5a5e pop ebx */
  EBX = (pop32());
  /* 112c5a5f mov esp, ebp */
  ESP = (EBP);
  /* 112c5a61 pop ebp */
  EBP = (pop32());
  /* 112c5a62 ret  */
  ESPCHK(0x112c5940u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a70 @ 0x112c5a70 (697 bytes, 253 insns) */
void f_112c5a70(void) {
  FTRACE(0x112c5a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c5a70 push ebp */
  push32((uint32_t)(EBP));
  /* 112c5a71 mov ebp, esp */
  EBP = (ESP);
  /* 112c5a73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c5a76 push ebx */
  push32((uint32_t)(EBX));
  /* 112c5a77 push esi */
  push32((uint32_t)(ESI));
  /* 112c5a78 push edi */
  push32((uint32_t)(EDI));
  /* 112c5a79 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112c5a80 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c5a82 call 0x112c7a30 */
  push32(0x112c5a87u); f_112c7a30();
  /* 112c5a87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c5a8a:;
  /* 112c5a8a push 0x112eab94 */
  push32((uint32_t)(0x112eab94u));
  /* 112c5a8f push 0x112ea58c */
  push32((uint32_t)(0x112ea58cu));
  /* 112c5a94 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5a98 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5a9a push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5a9c call 0x112c30f0 */
  push32(0x112c5aa1u); f_112c30f0();
  /* 112c5aa1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5aa4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5aa7 jne 0x112c5aaa */
  if (!C.zf) goto L_112c5aaa;
  /* 112c5aa9 int3  */
  x86_unimpl("int3 @ 0x112c5aa9");
L_112c5aaa:;
  /* 112c5aaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c5aac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c5aae jne 0x112c5a8a */
  if (!C.zf) goto L_112c5a8a;
  /* 112c5ab0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5ab4 je 0x112c5abe */
  if (C.zf) goto L_112c5abe;
  /* 112c5ab6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c5ab9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112c5abb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_112c5abe:;
  /* 112c5abe mov eax, dword ptr [0x112ef584] */
  EAX = (r32((uint32_t)(0x112ef584)));
  /* 112c5ac3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c5ac6 jmp 0x112c5ad0 */
  goto L_112c5ad0;
L_112c5ac8:;
  /* 112c5ac8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5acb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112c5acd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_112c5ad0:;
  /* 112c5ad0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5ad4 je 0x112c5cf2 */
  if (C.zf) goto L_112c5cf2;
  /* 112c5ada mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5add cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5ae0 je 0x112c5cf2 */
  if (C.zf) goto L_112c5cf2;
  /* 112c5ae6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5ae9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 112c5aec and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 112c5af2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5af5 je 0x112c5b24 */
  if (C.zf) goto L_112c5b24;
  /* 112c5af7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5afa mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 112c5afd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112c5b03 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c5b05 je 0x112c5b24 */
  if (C.zf) goto L_112c5b24;
  /* 112c5b07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5b0a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112c5b0d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c5b12 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5b15 jne 0x112c5b29 */
  if (!C.zf) goto L_112c5b29;
  /* 112c5b17 mov ecx, dword ptr [0x112eda84] */
  ECX = (r32((uint32_t)(0x112eda84)));
  /* 112c5b1d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 112c5b20 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c5b22 jne 0x112c5b29 */
  if (!C.zf) goto L_112c5b29;
L_112c5b24:;
  /* 112c5b24 jmp 0x112c5ced */
  goto L_112c5ced;
L_112c5b29:;
  /* 112c5b29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5b2c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5b30 je 0x112c5ba2 */
  if (C.zf) goto L_112c5ba2;
  /* 112c5b32 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5b34 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c5b36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5b39 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 112c5b3c push ecx */
  push32((uint32_t)(ECX));
  /* 112c5b3d call 0x112c55e0 */
  push32(0x112c5b42u); f_112c55e0();
  /* 112c5b42 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5b45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c5b47 jne 0x112c5b73 */
  if (!C.zf) goto L_112c5b73;
L_112c5b49:;
  /* 112c5b49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5b4c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 112c5b4f push eax */
  push32((uint32_t)(EAX));
  /* 112c5b50 push 0x112eab80 */
  push32((uint32_t)(0x112eab80u));
  /* 112c5b55 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5b57 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5b59 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5b5b push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5b5d call 0x112c30f0 */
  push32(0x112c5b62u); f_112c30f0();
  /* 112c5b62 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5b65 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5b68 jne 0x112c5b6b */
  if (!C.zf) goto L_112c5b6b;
  /* 112c5b6a int3  */
  x86_unimpl("int3 @ 0x112c5b6a");
L_112c5b6b:;
  /* 112c5b6b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c5b6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c5b6f jne 0x112c5b49 */
  if (!C.zf) goto L_112c5b49;
  /* 112c5b71 jmp 0x112c5ba2 */
  goto L_112c5ba2;
L_112c5b73:;
  /* 112c5b73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5b76 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 112c5b79 push eax */
  push32((uint32_t)(EAX));
  /* 112c5b7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5b7d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112c5b80 push edx */
  push32((uint32_t)(EDX));
  /* 112c5b81 push 0x112eab74 */
  push32((uint32_t)(0x112eab74u));
  /* 112c5b86 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5b88 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5b8a push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5b8c push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5b8e call 0x112c30f0 */
  push32(0x112c5b93u); f_112c30f0();
  /* 112c5b93 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5b96 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5b99 jne 0x112c5b9c */
  if (!C.zf) goto L_112c5b9c;
  /* 112c5b9b int3  */
  x86_unimpl("int3 @ 0x112c5b9b");
L_112c5b9c:;
  /* 112c5b9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c5b9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c5ba0 jne 0x112c5b73 */
  if (!C.zf) goto L_112c5b73;
L_112c5ba2:;
  /* 112c5ba2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5ba5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 112c5ba8 push edx */
  push32((uint32_t)(EDX));
  /* 112c5ba9 push 0x112eab6c */
  push32((uint32_t)(0x112eab6cu));
  /* 112c5bae push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5bb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5bb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5bb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5bb6 call 0x112c30f0 */
  push32(0x112c5bbbu); f_112c30f0();
  /* 112c5bbb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5bbe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5bc1 jne 0x112c5bc4 */
  if (!C.zf) goto L_112c5bc4;
  /* 112c5bc3 int3  */
  x86_unimpl("int3 @ 0x112c5bc3");
L_112c5bc4:;
  /* 112c5bc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c5bc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c5bc8 jne 0x112c5ba2 */
  if (!C.zf) goto L_112c5ba2;
  /* 112c5bca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5bcd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 112c5bd0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 112c5bd6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5bd9 jne 0x112c5c4c */
  if (!C.zf) goto L_112c5c4c;
L_112c5bdb:;
  /* 112c5bdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5bde mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112c5be1 push ecx */
  push32((uint32_t)(ECX));
  /* 112c5be2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5be5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112c5be8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 112c5beb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c5bf0 push eax */
  push32((uint32_t)(EAX));
  /* 112c5bf1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5bf4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5bf7 push ecx */
  push32((uint32_t)(ECX));
  /* 112c5bf8 push 0x112eab38 */
  push32((uint32_t)(0x112eab38u));
  /* 112c5bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5bff push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5c01 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5c05 call 0x112c30f0 */
  push32(0x112c5c0au); f_112c30f0();
  /* 112c5c0a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5c0d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5c10 jne 0x112c5c13 */
  if (!C.zf) goto L_112c5c13;
  /* 112c5c12 int3  */
  x86_unimpl("int3 @ 0x112c5c12");
L_112c5c13:;
  /* 112c5c13 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c5c15 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c5c17 jne 0x112c5bdb */
  if (!C.zf) goto L_112c5bdb;
  /* 112c5c19 cmp dword ptr [0x112f0ef8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112f0ef8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5c20 je 0x112c5c3b */
  if (C.zf) goto L_112c5c3b;
  /* 112c5c22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5c25 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112c5c28 push ecx */
  push32((uint32_t)(ECX));
  /* 112c5c29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5c2c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5c2f push edx */
  push32((uint32_t)(EDX));
  /* 112c5c30 call dword ptr [0x112f0ef8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f0ef8))), 0x112c5c36u);
  /* 112c5c36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5c39 jmp 0x112c5c47 */
  goto L_112c5c47;
L_112c5c3b:;
  /* 112c5c3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5c3e push eax */
  push32((uint32_t)(EAX));
  /* 112c5c3f call 0x112c5d30 */
  push32(0x112c5c44u); f_112c5d30();
  /* 112c5c44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c5c47:;
  /* 112c5c47 jmp 0x112c5ced */
  goto L_112c5ced;
L_112c5c4c:;
  /* 112c5c4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5c4f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5c53 jne 0x112c5c92 */
  if (!C.zf) goto L_112c5c92;
L_112c5c55:;
  /* 112c5c55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5c58 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 112c5c5b push eax */
  push32((uint32_t)(EAX));
  /* 112c5c5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5c5f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5c62 push ecx */
  push32((uint32_t)(ECX));
  /* 112c5c63 push 0x112eab10 */
  push32((uint32_t)(0x112eab10u));
  /* 112c5c68 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5c6a push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5c6c push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5c6e push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5c70 call 0x112c30f0 */
  push32(0x112c5c75u); f_112c30f0();
  /* 112c5c75 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5c78 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5c7b jne 0x112c5c7e */
  if (!C.zf) goto L_112c5c7e;
  /* 112c5c7d int3  */
  x86_unimpl("int3 @ 0x112c5c7d");
L_112c5c7e:;
  /* 112c5c7e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c5c80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c5c82 jne 0x112c5c55 */
  if (!C.zf) goto L_112c5c55;
  /* 112c5c84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5c87 push eax */
  push32((uint32_t)(EAX));
  /* 112c5c88 call 0x112c5d30 */
  push32(0x112c5c8du); f_112c5d30();
  /* 112c5c8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5c90 jmp 0x112c5ced */
  goto L_112c5ced;
L_112c5c92:;
  /* 112c5c92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5c95 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 112c5c98 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 112c5c9e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5ca1 jne 0x112c5ced */
  if (!C.zf) goto L_112c5ced;
L_112c5ca3:;
  /* 112c5ca3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5ca6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112c5ca9 push ecx */
  push32((uint32_t)(ECX));
  /* 112c5caa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5cad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 112c5cb0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 112c5cb3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c5cb8 push eax */
  push32((uint32_t)(EAX));
  /* 112c5cb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5cbc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5cbf push ecx */
  push32((uint32_t)(ECX));
  /* 112c5cc0 push 0x112eaadc */
  push32((uint32_t)(0x112eaadcu));
  /* 112c5cc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5cc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5cc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5ccb push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5ccd call 0x112c30f0 */
  push32(0x112c5cd2u); f_112c30f0();
  /* 112c5cd2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5cd5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5cd8 jne 0x112c5cdb */
  if (!C.zf) goto L_112c5cdb;
  /* 112c5cda int3  */
  x86_unimpl("int3 @ 0x112c5cda");
L_112c5cdb:;
  /* 112c5cdb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c5cdd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c5cdf jne 0x112c5ca3 */
  if (!C.zf) goto L_112c5ca3;
  /* 112c5ce1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5ce4 push eax */
  push32((uint32_t)(EAX));
  /* 112c5ce5 call 0x112c5d30 */
  push32(0x112c5ceau); f_112c5d30();
  /* 112c5cea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c5ced:;
  /* 112c5ced jmp 0x112c5ac8 */
  goto L_112c5ac8;
L_112c5cf2:;
  /* 112c5cf2 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c5cf4 call 0x112c7ad0 */
  push32(0x112c5cf9u); f_112c7ad0();
  /* 112c5cf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c5cfc:;
  /* 112c5cfc push 0x112eaac4 */
  push32((uint32_t)(0x112eaac4u));
  /* 112c5d01 push 0x112ea58c */
  push32((uint32_t)(0x112ea58cu));
  /* 112c5d06 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5d08 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5d0a push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5d0c push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5d0e call 0x112c30f0 */
  push32(0x112c5d13u); f_112c30f0();
  /* 112c5d13 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5d16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5d19 jne 0x112c5d1c */
  if (!C.zf) goto L_112c5d1c;
  /* 112c5d1b int3  */
  x86_unimpl("int3 @ 0x112c5d1b");
L_112c5d1c:;
  /* 112c5d1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c5d1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c5d20 jne 0x112c5cfc */
  if (!C.zf) goto L_112c5cfc;
  /* 112c5d22 pop edi */
  EDI = (pop32());
  /* 112c5d23 pop esi */
  ESI = (pop32());
  /* 112c5d24 pop ebx */
  EBX = (pop32());
  /* 112c5d25 mov esp, ebp */
  ESP = (EBP);
  /* 112c5d27 pop ebp */
  EBP = (pop32());
  /* 112c5d28 ret  */
  ESPCHK(0x112c5a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d30 @ 0x112c5d30 (276 bytes, 89 insns) */
void f_112c5d30(void) {
  FTRACE(0x112c5d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c5d30 push ebp */
  push32((uint32_t)(EBP));
  /* 112c5d31 mov ebp, esp */
  EBP = (ESP);
  /* 112c5d33 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c5d36 push ebx */
  push32((uint32_t)(EBX));
  /* 112c5d37 push esi */
  push32((uint32_t)(ESI));
  /* 112c5d38 push edi */
  push32((uint32_t)(EDI));
  /* 112c5d39 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 112c5d40 jmp 0x112c5d4b */
  goto L_112c5d4b;
L_112c5d42:;
  /* 112c5d42 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 112c5d45 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5d48 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_112c5d4b:;
  /* 112c5d4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c5d4e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5d52 jge 0x112c5d5f */
  if ((C.sf==C.of)) goto L_112c5d5f;
  /* 112c5d54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c5d57 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 112c5d5a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 112c5d5d jmp 0x112c5d66 */
  goto L_112c5d66;
L_112c5d5f:;
  /* 112c5d5f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_112c5d66:;
  /* 112c5d66 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 112c5d69 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5d6c jge 0x112c5e0c */
  if ((C.sf==C.of)) goto L_112c5e0c;
  /* 112c5d72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c5d75 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5d78 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 112c5d7b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 112c5d7e cmp dword ptr [0x112edea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112edea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5d85 jle 0x112c5da3 */
  if ((C.zf||C.sf!=C.of)) goto L_112c5da3;
  /* 112c5d87 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 112c5d8c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c5d8f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 112c5d95 push ecx */
  push32((uint32_t)(ECX));
  /* 112c5d96 call 0x112ca040 */
  push32(0x112c5d9bu); f_112ca040();
  /* 112c5d9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5d9e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 112c5da1 jmp 0x112c5dc0 */
  goto L_112c5dc0;
L_112c5da3:;
  /* 112c5da3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c5da6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 112c5dac mov eax, dword ptr [0x112edc98] */
  EAX = (r32((uint32_t)(0x112edc98)));
  /* 112c5db1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c5db3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 112c5db7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 112c5dbd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_112c5dc0:;
  /* 112c5dc0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5dc4 je 0x112c5dd4 */
  if (C.zf) goto L_112c5dd4;
  /* 112c5dc6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c5dc9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 112c5dcf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 112c5dd2 jmp 0x112c5ddb */
  goto L_112c5ddb;
L_112c5dd4:;
  /* 112c5dd4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_112c5ddb:;
  /* 112c5ddb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 112c5dde mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 112c5de1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 112c5de5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 112c5de8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 112c5dee push edx */
  push32((uint32_t)(EDX));
  /* 112c5def push 0x112eabb8 */
  push32((uint32_t)(0x112eabb8u));
  /* 112c5df4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 112c5df7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c5dfa lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 112c5dfe push ecx */
  push32((uint32_t)(ECX));
  /* 112c5dff call 0x112c9f40 */
  push32(0x112c5e04u); f_112c9f40();
  /* 112c5e04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5e07 jmp 0x112c5d42 */
  goto L_112c5d42;
L_112c5e0c:;
  /* 112c5e0c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 112c5e0f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_112c5e14:;
  /* 112c5e14 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 112c5e17 push eax */
  push32((uint32_t)(EAX));
  /* 112c5e18 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 112c5e1b push ecx */
  push32((uint32_t)(ECX));
  /* 112c5e1c push 0x112eaba8 */
  push32((uint32_t)(0x112eaba8u));
  /* 112c5e21 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5e23 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5e25 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5e27 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5e29 call 0x112c30f0 */
  push32(0x112c5e2eu); f_112c30f0();
  /* 112c5e2e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5e31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5e34 jne 0x112c5e37 */
  if (!C.zf) goto L_112c5e37;
  /* 112c5e36 int3  */
  x86_unimpl("int3 @ 0x112c5e36");
L_112c5e37:;
  /* 112c5e37 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c5e39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c5e3b jne 0x112c5e14 */
  if (!C.zf) goto L_112c5e14;
  /* 112c5e3d pop edi */
  EDI = (pop32());
  /* 112c5e3e pop esi */
  ESI = (pop32());
  /* 112c5e3f pop ebx */
  EBX = (pop32());
  /* 112c5e40 mov esp, ebp */
  ESP = (EBP);
  /* 112c5e42 pop ebp */
  EBP = (pop32());
  /* 112c5e43 ret  */
  ESPCHK(0x112c5d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e50 @ 0x112c5e50 (116 bytes, 46 insns) */
void f_112c5e50(void) {
  FTRACE(0x112c5e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c5e50 push ebp */
  push32((uint32_t)(EBP));
  /* 112c5e51 mov ebp, esp */
  EBP = (ESP);
  /* 112c5e53 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c5e56 push ebx */
  push32((uint32_t)(EBX));
  /* 112c5e57 push esi */
  push32((uint32_t)(ESI));
  /* 112c5e58 push edi */
  push32((uint32_t)(EDI));
  /* 112c5e59 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 112c5e5c push eax */
  push32((uint32_t)(EAX));
  /* 112c5e5d call 0x112c57d0 */
  push32(0x112c5e62u); f_112c57d0();
  /* 112c5e62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5e65 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5e69 jne 0x112c5e84 */
  if (!C.zf) goto L_112c5e84;
  /* 112c5e6b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5e6f jne 0x112c5e84 */
  if (!C.zf) goto L_112c5e84;
  /* 112c5e71 mov ecx, dword ptr [0x112eda84] */
  ECX = (r32((uint32_t)(0x112eda84)));
  /* 112c5e77 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 112c5e7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c5e7c je 0x112c5ebb */
  if (C.zf) goto L_112c5ebb;
  /* 112c5e7e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5e82 je 0x112c5ebb */
  if (C.zf) goto L_112c5ebb;
L_112c5e84:;
  /* 112c5e84 push 0x112eabc0 */
  push32((uint32_t)(0x112eabc0u));
  /* 112c5e89 push 0x112ea58c */
  push32((uint32_t)(0x112ea58cu));
  /* 112c5e8e push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5e90 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5e92 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5e94 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5e96 call 0x112c30f0 */
  push32(0x112c5e9bu); f_112c30f0();
  /* 112c5e9b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5e9e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5ea1 jne 0x112c5ea4 */
  if (!C.zf) goto L_112c5ea4;
  /* 112c5ea3 int3  */
  x86_unimpl("int3 @ 0x112c5ea3");
L_112c5ea4:;
  /* 112c5ea4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c5ea6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c5ea8 jne 0x112c5e84 */
  if (!C.zf) goto L_112c5e84;
  /* 112c5eaa push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5eac call 0x112c5a70 */
  push32(0x112c5eb1u); f_112c5a70();
  /* 112c5eb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5eb4 mov eax, 1 */
  EAX = (0x1u);
  /* 112c5eb9 jmp 0x112c5ebd */
  goto L_112c5ebd;
L_112c5ebb:;
  /* 112c5ebb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112c5ebd:;
  /* 112c5ebd pop edi */
  EDI = (pop32());
  /* 112c5ebe pop esi */
  ESI = (pop32());
  /* 112c5ebf pop ebx */
  EBX = (pop32());
  /* 112c5ec0 mov esp, ebp */
  ESP = (EBP);
  /* 112c5ec2 pop ebp */
  EBP = (pop32());
  /* 112c5ec3 ret  */
  ESPCHK(0x112c5e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ed0 @ 0x112c5ed0 (197 bytes, 79 insns) */
void f_112c5ed0(void) {
  FTRACE(0x112c5ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c5ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c5ed1 mov ebp, esp */
  EBP = (ESP);
  /* 112c5ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 112c5ed4 push ebx */
  push32((uint32_t)(EBX));
  /* 112c5ed5 push esi */
  push32((uint32_t)(ESI));
  /* 112c5ed6 push edi */
  push32((uint32_t)(EDI));
  /* 112c5ed7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5edb jne 0x112c5ee2 */
  if (!C.zf) goto L_112c5ee2;
  /* 112c5edd jmp 0x112c5f8e */
  goto L_112c5f8e;
L_112c5ee2:;
  /* 112c5ee2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112c5ee9 jmp 0x112c5ef4 */
  goto L_112c5ef4;
L_112c5eeb:;
  /* 112c5eeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5eee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5ef1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112c5ef4:;
  /* 112c5ef4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5ef8 jge 0x112c5f3e */
  if ((C.sf==C.of)) goto L_112c5f3e;
L_112c5efa:;
  /* 112c5efa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5efd mov edx, dword ptr [ecx*4 + 0x112eda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x112eda94)));
  /* 112c5f04 push edx */
  push32((uint32_t)(EDX));
  /* 112c5f05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5f08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c5f0b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 112c5f0f push edx */
  push32((uint32_t)(EDX));
  /* 112c5f10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5f13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c5f16 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 112c5f1a push edx */
  push32((uint32_t)(EDX));
  /* 112c5f1b push 0x112eac1c */
  push32((uint32_t)(0x112eac1cu));
  /* 112c5f20 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5f22 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5f24 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5f26 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5f28 call 0x112c30f0 */
  push32(0x112c5f2du); f_112c30f0();
  /* 112c5f2d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5f30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5f33 jne 0x112c5f36 */
  if (!C.zf) goto L_112c5f36;
  /* 112c5f35 int3  */
  x86_unimpl("int3 @ 0x112c5f35");
L_112c5f36:;
  /* 112c5f36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c5f38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c5f3a jne 0x112c5efa */
  if (!C.zf) goto L_112c5efa;
  /* 112c5f3c jmp 0x112c5eeb */
  goto L_112c5eeb;
L_112c5f3e:;
  /* 112c5f3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c5f41 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 112c5f44 push edx */
  push32((uint32_t)(EDX));
  /* 112c5f45 push 0x112eabf8 */
  push32((uint32_t)(0x112eabf8u));
  /* 112c5f4a push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5f4c push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5f4e push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5f50 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5f52 call 0x112c30f0 */
  push32(0x112c5f57u); f_112c30f0();
  /* 112c5f57 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5f5a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5f5d jne 0x112c5f60 */
  if (!C.zf) goto L_112c5f60;
  /* 112c5f5f int3  */
  x86_unimpl("int3 @ 0x112c5f5f");
L_112c5f60:;
  /* 112c5f60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c5f62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c5f64 jne 0x112c5f3e */
  if (!C.zf) goto L_112c5f3e;
L_112c5f66:;
  /* 112c5f66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c5f69 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 112c5f6c push edx */
  push32((uint32_t)(EDX));
  /* 112c5f6d push 0x112eabd8 */
  push32((uint32_t)(0x112eabd8u));
  /* 112c5f72 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5f74 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5f76 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5f78 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c5f7a call 0x112c30f0 */
  push32(0x112c5f7fu); f_112c30f0();
  /* 112c5f7f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5f82 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5f85 jne 0x112c5f88 */
  if (!C.zf) goto L_112c5f88;
  /* 112c5f87 int3  */
  x86_unimpl("int3 @ 0x112c5f87");
L_112c5f88:;
  /* 112c5f88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c5f8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c5f8c jne 0x112c5f66 */
  if (!C.zf) goto L_112c5f66;
L_112c5f8e:;
  /* 112c5f8e pop edi */
  EDI = (pop32());
  /* 112c5f8f pop esi */
  ESI = (pop32());
  /* 112c5f90 pop ebx */
  EBX = (pop32());
  /* 112c5f91 mov esp, ebp */
  ESP = (EBP);
  /* 112c5f93 pop ebp */
  EBP = (pop32());
  /* 112c5f94 ret  */
  ESPCHK(0x112c5ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fa0 @ 0x112c5fa0 (329 bytes, 102 insns) */
void f_112c5fa0(void) {
  FTRACE(0x112c5fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c5fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c5fa1 mov ebp, esp */
  EBP = (ESP);
  /* 112c5fa3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c5fa6 cmp dword ptr [0x112f1070], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112f1070))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5fad jne 0x112c5fb4 */
  if (!C.zf) goto L_112c5fb4;
  /* 112c5faf call 0x112ca8e0 */
  push32(0x112c5fb4u); f_112ca8e0();
L_112c5fb4:;
  /* 112c5fb4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112c5fbb mov eax, dword ptr [0x112ef520] */
  EAX = (r32((uint32_t)(0x112ef520)));
  /* 112c5fc0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112c5fc3:;
  /* 112c5fc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5fc6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112c5fc9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c5fcb je 0x112c5ff9 */
  if (C.zf) goto L_112c5ff9;
  /* 112c5fcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5fd0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112c5fd3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c5fd6 je 0x112c5fe1 */
  if (C.zf) goto L_112c5fe1;
  /* 112c5fd8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c5fdb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5fde mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_112c5fe1:;
  /* 112c5fe1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5fe4 push eax */
  push32((uint32_t)(EAX));
  /* 112c5fe5 call 0x112c6e60 */
  push32(0x112c5feau); f_112c6e60();
  /* 112c5fea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c5fed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c5ff0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 112c5ff4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112c5ff7 jmp 0x112c5fc3 */
  goto L_112c5fc3;
L_112c5ff9:;
  /* 112c5ff9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 112c5ffb push 0x112eac3c */
  push32((uint32_t)(0x112eac3cu));
  /* 112c6000 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c6002 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c6005 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 112c600c push ecx */
  push32((uint32_t)(ECX));
  /* 112c600d call 0x112c4030 */
  push32(0x112c6012u); f_112c4030();
  /* 112c6012 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6015 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112c6018 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c601b mov dword ptr [0x112ef554], edx */
  w32((uint32_t)(0x112ef554), (EDX));
  /* 112c6021 cmp dword ptr [0x112ef554], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef554))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6028 jne 0x112c6034 */
  if (!C.zf) goto L_112c6034;
  /* 112c602a push 9 */
  push32((uint32_t)(0x9u));
  /* 112c602c call 0x112c2fa0 */
  push32(0x112c6031u); f_112c2fa0();
  /* 112c6031 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c6034:;
  /* 112c6034 mov eax, dword ptr [0x112ef520] */
  EAX = (r32((uint32_t)(0x112ef520)));
  /* 112c6039 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c603c jmp 0x112c6047 */
  goto L_112c6047;
L_112c603e:;
  /* 112c603e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6041 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6044 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112c6047:;
  /* 112c6047 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c604a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112c604d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c604f je 0x112c60b7 */
  if (C.zf) goto L_112c60b7;
  /* 112c6051 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6054 push ecx */
  push32((uint32_t)(ECX));
  /* 112c6055 call 0x112c6e60 */
  push32(0x112c605au); f_112c6e60();
  /* 112c605a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c605d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6060 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112c6063 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6066 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112c6069 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c606c je 0x112c60b5 */
  if (C.zf) goto L_112c60b5;
  /* 112c606e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 112c6070 push 0x112eac3c */
  push32((uint32_t)(0x112eac3cu));
  /* 112c6075 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c6077 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c607a push ecx */
  push32((uint32_t)(ECX));
  /* 112c607b call 0x112c4030 */
  push32(0x112c6080u); f_112c4030();
  /* 112c6080 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6083 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c6086 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 112c6088 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c608b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c608e jne 0x112c609a */
  if (!C.zf) goto L_112c609a;
  /* 112c6090 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c6092 call 0x112c2fa0 */
  push32(0x112c6097u); f_112c2fa0();
  /* 112c6097 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c609a:;
  /* 112c609a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c609d push ecx */
  push32((uint32_t)(ECX));
  /* 112c609e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c60a1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112c60a3 push eax */
  push32((uint32_t)(EAX));
  /* 112c60a4 call 0x112c6fe0 */
  push32(0x112c60a9u); f_112c6fe0();
  /* 112c60a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c60ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c60af add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c60b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_112c60b5:;
  /* 112c60b5 jmp 0x112c603e */
  goto L_112c603e;
L_112c60b7:;
  /* 112c60b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c60b9 mov edx, dword ptr [0x112ef520] */
  EDX = (r32((uint32_t)(0x112ef520)));
  /* 112c60bf push edx */
  push32((uint32_t)(EDX));
  /* 112c60c0 call 0x112c4ac0 */
  push32(0x112c60c5u); f_112c4ac0();
  /* 112c60c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c60c8 mov dword ptr [0x112ef520], 0 */
  w32((uint32_t)(0x112ef520), (0x0u));
  /* 112c60d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c60d5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 112c60db mov dword ptr [0x112f1060], 1 */
  w32((uint32_t)(0x112f1060), (0x1u));
  /* 112c60e5 mov esp, ebp */
  ESP = (EBP);
  /* 112c60e7 pop ebp */
  EBP = (pop32());
  /* 112c60e8 ret  */
  ESPCHK(0x112c5fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_100060f0 @ 0x112c60f0 (216 bytes, 69 insns) */
void f_112c60f0(void) {
  FTRACE(0x112c60f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c60f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c60f1 mov ebp, esp */
  EBP = (ESP);
  /* 112c60f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c60f6 cmp dword ptr [0x112f1070], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112f1070))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c60fd jne 0x112c6104 */
  if (!C.zf) goto L_112c6104;
  /* 112c60ff call 0x112ca8e0 */
  push32(0x112c6104u); f_112ca8e0();
L_112c6104:;
  /* 112c6104 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 112c6109 push 0x112ef590 */
  push32((uint32_t)(0x112ef590u));
  /* 112c610e push 0 */
  push32((uint32_t)(0x0u));
  /* 112c6110 call dword ptr [0x112f237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f237c))), 0x112c6116u);
  /* 112c6116 mov dword ptr [0x112ef564], 0x112ef590 */
  w32((uint32_t)(0x112ef564), (0x112ef590u));
  /* 112c6120 mov eax, dword ptr [0x112f108c] */
  EAX = (r32((uint32_t)(0x112f108c)));
  /* 112c6125 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112c6128 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c612a jne 0x112c6137 */
  if (!C.zf) goto L_112c6137;
  /* 112c612c mov edx, dword ptr [0x112ef564] */
  EDX = (r32((uint32_t)(0x112ef564)));
  /* 112c6132 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 112c6135 jmp 0x112c613f */
  goto L_112c613f;
L_112c6137:;
  /* 112c6137 mov eax, dword ptr [0x112f108c] */
  EAX = (r32((uint32_t)(0x112f108c)));
  /* 112c613c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_112c613f:;
  /* 112c613f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c6142 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112c6145 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 112c6148 push edx */
  push32((uint32_t)(EDX));
  /* 112c6149 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 112c614c push eax */
  push32((uint32_t)(EAX));
  /* 112c614d push 0 */
  push32((uint32_t)(0x0u));
  /* 112c614f push 0 */
  push32((uint32_t)(0x0u));
  /* 112c6151 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c6154 push ecx */
  push32((uint32_t)(ECX));
  /* 112c6155 call 0x112c61d0 */
  push32(0x112c615au); f_112c61d0();
  /* 112c615a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c615d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 112c6162 push 0x112eac48 */
  push32((uint32_t)(0x112eac48u));
  /* 112c6167 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c6169 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c616c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c616f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 112c6172 push ecx */
  push32((uint32_t)(ECX));
  /* 112c6173 call 0x112c4030 */
  push32(0x112c6178u); f_112c4030();
  /* 112c6178 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c617b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112c617e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6182 jne 0x112c618e */
  if (!C.zf) goto L_112c618e;
  /* 112c6184 push 8 */
  push32((uint32_t)(0x8u));
  /* 112c6186 call 0x112c2fa0 */
  push32(0x112c618bu); f_112c2fa0();
  /* 112c618b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c618e:;
  /* 112c618e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 112c6191 push edx */
  push32((uint32_t)(EDX));
  /* 112c6192 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 112c6195 push eax */
  push32((uint32_t)(EAX));
  /* 112c6196 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c6199 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c619c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 112c619f push eax */
  push32((uint32_t)(EAX));
  /* 112c61a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c61a3 push ecx */
  push32((uint32_t)(ECX));
  /* 112c61a4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c61a7 push edx */
  push32((uint32_t)(EDX));
  /* 112c61a8 call 0x112c61d0 */
  push32(0x112c61adu); f_112c61d0();
  /* 112c61ad add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c61b0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c61b3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c61b6 mov dword ptr [0x112ef548], eax */
  w32((uint32_t)(0x112ef548), (EAX));
  /* 112c61bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c61be mov dword ptr [0x112ef54c], ecx */
  w32((uint32_t)(0x112ef54c), (ECX));
  /* 112c61c4 mov esp, ebp */
  ESP = (EBP);
  /* 112c61c6 pop ebp */
  EBP = (pop32());
  /* 112c61c7 ret  */
  ESPCHK(0x112c60f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061d0 @ 0x112c61d0 (1060 bytes, 360 insns) */
void f_112c61d0(void) {
  FTRACE(0x112c61d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c61d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c61d1 mov ebp, esp */
  EBP = (ESP);
  /* 112c61d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c61d6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c61d9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 112c61df mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c61e2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 112c61e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c61eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112c61ee cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c61f2 je 0x112c6205 */
  if (C.zf) goto L_112c6205;
  /* 112c61f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c61f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c61fa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 112c61fc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c61ff add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6202 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_112c6205:;
  /* 112c6205 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6208 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112c620b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c620e jne 0x112c62dd */
  if (!C.zf) goto L_112c62dd;
L_112c6214:;
  /* 112c6214 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6217 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c621a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112c621d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6220 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112c6223 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6226 je 0x112c62a2 */
  if (C.zf) goto L_112c62a2;
  /* 112c6228 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c622b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112c622e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c6230 je 0x112c62a2 */
  if (C.zf) goto L_112c62a2;
  /* 112c6232 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6235 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c6237 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112c6239 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c623b mov al, byte ptr [edx + 0x112f0dc1] */
  AL = (r8((uint32_t)(EDX + 0x112f0dc1)));
  /* 112c6241 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 112c6244 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c6246 je 0x112c6277 */
  if (C.zf) goto L_112c6277;
  /* 112c6248 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c624b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112c624d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6250 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c6253 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112c6255 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6259 je 0x112c6277 */
  if (C.zf) goto L_112c6277;
  /* 112c625b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c625e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6261 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112c6263 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 112c6265 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c6268 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c626b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 112c626e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6271 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6274 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_112c6277:;
  /* 112c6277 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c627a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112c627c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c627f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c6282 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 112c6284 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6288 je 0x112c629d */
  if (C.zf) goto L_112c629d;
  /* 112c628a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c628d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6290 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112c6292 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 112c6294 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c6297 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c629a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_112c629d:;
  /* 112c629d jmp 0x112c6214 */
  goto L_112c6214;
L_112c62a2:;
  /* 112c62a2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c62a5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112c62a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c62aa mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c62ad mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112c62af cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c62b3 je 0x112c62c4 */
  if (C.zf) goto L_112c62c4;
  /* 112c62b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c62b8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 112c62bb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c62be add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c62c1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_112c62c4:;
  /* 112c62c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c62c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112c62ca cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c62cd jne 0x112c62d8 */
  if (!C.zf) goto L_112c62d8;
  /* 112c62cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c62d2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c62d5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_112c62d8:;
  /* 112c62d8 jmp 0x112c63ac */
  goto L_112c63ac;
L_112c62dd:;
  /* 112c62dd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c62e0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112c62e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c62e5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c62e8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 112c62ea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c62ee je 0x112c6303 */
  if (C.zf) goto L_112c6303;
  /* 112c62f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c62f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c62f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112c62f8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 112c62fa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c62fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6300 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_112c6303:;
  /* 112c6303 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6306 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112c6308 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 112c630b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c630e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6311 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c6314 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c6317 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 112c631d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c631f mov dl, byte ptr [ecx + 0x112f0dc1] */
  DL = (r8((uint32_t)(ECX + 0x112f0dc1)));
  /* 112c6325 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 112c6328 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c632a je 0x112c635b */
  if (C.zf) goto L_112c635b;
  /* 112c632c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c632f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112c6331 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6334 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c6337 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 112c6339 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c633d je 0x112c6352 */
  if (C.zf) goto L_112c6352;
  /* 112c633f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c6342 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6345 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112c6347 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 112c6349 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c634c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c634f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_112c6352:;
  /* 112c6352 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6355 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6358 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112c635b:;
  /* 112c635b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c635e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 112c6364 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6367 je 0x112c6387 */
  if (C.zf) goto L_112c6387;
  /* 112c6369 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c636c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c6371 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c6373 je 0x112c6387 */
  if (C.zf) goto L_112c6387;
  /* 112c6375 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c6378 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 112c637e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6381 jne 0x112c62dd */
  if (!C.zf) goto L_112c62dd;
L_112c6387:;
  /* 112c6387 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c638a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 112c6390 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c6392 jne 0x112c639f */
  if (!C.zf) goto L_112c639f;
  /* 112c6394 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6397 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c639a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c639d jmp 0x112c63ac */
  goto L_112c63ac;
L_112c639f:;
  /* 112c639f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c63a3 je 0x112c63ac */
  if (C.zf) goto L_112c63ac;
  /* 112c63a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c63a8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_112c63ac:;
  /* 112c63ac mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_112c63b3:;
  /* 112c63b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c63b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112c63b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c63bb je 0x112c63de */
  if (C.zf) goto L_112c63de;
L_112c63bd:;
  /* 112c63bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c63c0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112c63c3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c63c6 je 0x112c63d3 */
  if (C.zf) goto L_112c63d3;
  /* 112c63c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c63cb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112c63ce cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c63d1 jne 0x112c63de */
  if (!C.zf) goto L_112c63de;
L_112c63d3:;
  /* 112c63d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c63d6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c63d9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112c63dc jmp 0x112c63bd */
  goto L_112c63bd;
L_112c63de:;
  /* 112c63de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c63e1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112c63e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c63e6 jne 0x112c63ed */
  if (!C.zf) goto L_112c63ed;
  /* 112c63e8 jmp 0x112c65cb */
  goto L_112c65cb;
L_112c63ed:;
  /* 112c63ed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c63f1 je 0x112c6404 */
  if (C.zf) goto L_112c6404;
  /* 112c63f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c63f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c63f9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 112c63fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c63fe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6401 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_112c6404:;
  /* 112c6404 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c6407 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112c6409 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c640c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c640f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_112c6411:;
  /* 112c6411 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 112c6418 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_112c641f:;
  /* 112c641f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6422 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112c6425 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6428 jne 0x112c643e */
  if (!C.zf) goto L_112c643e;
  /* 112c642a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c642d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6430 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112c6433 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c6436 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6439 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 112c643c jmp 0x112c641f */
  goto L_112c641f;
L_112c643e:;
  /* 112c643e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6441 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112c6444 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6447 jne 0x112c649a */
  if (!C.zf) goto L_112c649a;
  /* 112c6449 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c644c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c644e mov ecx, 2 */
  ECX = (0x2u);
  /* 112c6453 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112c6455 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c6457 jne 0x112c6492 */
  if (!C.zf) goto L_112c6492;
  /* 112c6459 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c645d je 0x112c647f */
  if (C.zf) goto L_112c647f;
  /* 112c645f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6462 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 112c6466 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6469 jne 0x112c6476 */
  if (!C.zf) goto L_112c6476;
  /* 112c646b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c646e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6471 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112c6474 jmp 0x112c647d */
  goto L_112c647d;
L_112c6476:;
  /* 112c6476 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_112c647d:;
  /* 112c647d jmp 0x112c6486 */
  goto L_112c6486;
L_112c647f:;
  /* 112c647f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_112c6486:;
  /* 112c6486 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c6488 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c648c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 112c648f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_112c6492:;
  /* 112c6492 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c6495 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 112c6497 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_112c649a:;
  /* 112c649a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c649d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c64a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c64a3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 112c64a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c64a8 je 0x112c64ce */
  if (C.zf) goto L_112c64ce;
  /* 112c64aa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c64ae je 0x112c64bf */
  if (C.zf) goto L_112c64bf;
  /* 112c64b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c64b3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 112c64b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c64b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c64bc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_112c64bf:;
  /* 112c64bf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c64c2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112c64c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c64c7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c64ca mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112c64cc jmp 0x112c649a */
  goto L_112c649a;
L_112c64ce:;
  /* 112c64ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c64d1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 112c64d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c64d6 je 0x112c64f4 */
  if (C.zf) goto L_112c64f4;
  /* 112c64d8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c64dc jne 0x112c64f9 */
  if (!C.zf) goto L_112c64f9;
  /* 112c64de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c64e1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112c64e4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c64e7 je 0x112c64f4 */
  if (C.zf) goto L_112c64f4;
  /* 112c64e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c64ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 112c64ef cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c64f2 jne 0x112c64f9 */
  if (!C.zf) goto L_112c64f9;
L_112c64f4:;
  /* 112c64f4 jmp 0x112c65a4 */
  goto L_112c65a4;
L_112c64f9:;
  /* 112c64f9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c64fd je 0x112c6596 */
  if (C.zf) goto L_112c6596;
  /* 112c6503 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6507 je 0x112c655d */
  if (C.zf) goto L_112c655d;
  /* 112c6509 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c650c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c650e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112c6510 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c6512 mov cl, byte ptr [eax + 0x112f0dc1] */
  CL = (r8((uint32_t)(EAX + 0x112f0dc1)));
  /* 112c6518 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 112c651b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c651d je 0x112c6548 */
  if (C.zf) goto L_112c6548;
  /* 112c651f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c6522 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6525 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 112c6527 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 112c6529 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c652c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c652f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 112c6532 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6535 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6538 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c653b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c653e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112c6540 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6543 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c6546 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_112c6548:;
  /* 112c6548 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c654b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c654e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112c6550 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 112c6552 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c6555 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6558 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 112c655b jmp 0x112c6589 */
  goto L_112c6589;
L_112c655d:;
  /* 112c655d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6560 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c6562 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112c6564 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c6566 mov cl, byte ptr [eax + 0x112f0dc1] */
  CL = (r8((uint32_t)(EAX + 0x112f0dc1)));
  /* 112c656c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 112c656f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c6571 je 0x112c6589 */
  if (C.zf) goto L_112c6589;
  /* 112c6573 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6576 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6579 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112c657c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c657f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112c6581 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6584 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c6587 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_112c6589:;
  /* 112c6589 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c658c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112c658e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6591 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c6594 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_112c6596:;
  /* 112c6596 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6599 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c659c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c659f jmp 0x112c6411 */
  goto L_112c6411;
L_112c65a4:;
  /* 112c65a4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c65a8 je 0x112c65b9 */
  if (C.zf) goto L_112c65b9;
  /* 112c65aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c65ad mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 112c65b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c65b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c65b6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_112c65b9:;
  /* 112c65b9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c65bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112c65be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c65c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 112c65c4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 112c65c6 jmp 0x112c63b3 */
  goto L_112c63b3;
L_112c65cb:;
  /* 112c65cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c65cf je 0x112c65e3 */
  if (C.zf) goto L_112c65e3;
  /* 112c65d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c65d4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 112c65da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c65dd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c65e0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_112c65e3:;
  /* 112c65e3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c65e6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112c65e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c65eb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c65ee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112c65f0 mov esp, ebp */
  ESP = (EBP);
  /* 112c65f2 pop ebp */
  EBP = (pop32());
  /* 112c65f3 ret  */
  ESPCHK(0x112c61d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006600 @ 0x112c6600 (537 bytes, 173 insns) */
void f_112c6600(void) {
  FTRACE(0x112c6600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c6600 push ebp */
  push32((uint32_t)(EBP));
  /* 112c6601 mov ebp, esp */
  EBP = (ESP);
  /* 112c6603 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c6606 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 112c660d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 112c6614 cmp dword ptr [0x112ef694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c661b jne 0x112c665a */
  if (!C.zf) goto L_112c665a;
  /* 112c661d call dword ptr [0x112f2394] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2394))), 0x112c6623u);
  /* 112c6623 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 112c6626 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c662a je 0x112c6638 */
  if (C.zf) goto L_112c6638;
  /* 112c662c mov dword ptr [0x112ef694], 1 */
  w32((uint32_t)(0x112ef694), (0x1u));
  /* 112c6636 jmp 0x112c665a */
  goto L_112c665a;
L_112c6638:;
  /* 112c6638 call dword ptr [0x112f2350] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2350))), 0x112c663eu);
  /* 112c663e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112c6641 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6645 je 0x112c6653 */
  if (C.zf) goto L_112c6653;
  /* 112c6647 mov dword ptr [0x112ef694], 2 */
  w32((uint32_t)(0x112ef694), (0x2u));
  /* 112c6651 jmp 0x112c665a */
  goto L_112c665a;
L_112c6653:;
  /* 112c6653 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c6655 jmp 0x112c6815 */
  goto L_112c6815;
L_112c665a:;
  /* 112c665a cmp dword ptr [0x112ef694], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112ef694))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6661 jne 0x112c675e */
  if (!C.zf) goto L_112c675e;
  /* 112c6667 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c666b jne 0x112c6683 */
  if (!C.zf) goto L_112c6683;
  /* 112c666d call dword ptr [0x112f2394] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2394))), 0x112c6673u);
  /* 112c6673 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 112c6676 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c667a jne 0x112c6683 */
  if (!C.zf) goto L_112c6683;
  /* 112c667c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c667e jmp 0x112c6815 */
  goto L_112c6815;
L_112c6683:;
  /* 112c6683 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c6686 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112c6689:;
  /* 112c6689 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c668c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c668e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 112c6691 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c6693 je 0x112c66b5 */
  if (C.zf) goto L_112c66b5;
  /* 112c6695 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c6698 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c669b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112c669e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c66a1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c66a3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 112c66a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c66a8 jne 0x112c66b3 */
  if (!C.zf) goto L_112c66b3;
  /* 112c66aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c66ad add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c66b0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112c66b3:;
  /* 112c66b3 jmp 0x112c6689 */
  goto L_112c6689;
L_112c66b5:;
  /* 112c66b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c66b8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c66bb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 112c66bd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c66c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112c66c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c66c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c66c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c66c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c66cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c66ce push edx */
  push32((uint32_t)(EDX));
  /* 112c66cf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c66d2 push eax */
  push32((uint32_t)(EAX));
  /* 112c66d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c66d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c66d7 call dword ptr [0x112f2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2390))), 0x112c66ddu);
  /* 112c66dd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112c66e0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c66e4 je 0x112c6704 */
  if (C.zf) goto L_112c6704;
  /* 112c66e6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 112c66e8 push 0x112eac54 */
  push32((uint32_t)(0x112eac54u));
  /* 112c66ed push 2 */
  push32((uint32_t)(0x2u));
  /* 112c66ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c66f2 push ecx */
  push32((uint32_t)(ECX));
  /* 112c66f3 call 0x112c4030 */
  push32(0x112c66f8u); f_112c4030();
  /* 112c66f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c66fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112c66fe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6702 jne 0x112c6715 */
  if (!C.zf) goto L_112c6715;
L_112c6704:;
  /* 112c6704 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c6707 push edx */
  push32((uint32_t)(EDX));
  /* 112c6708 call dword ptr [0x112f23cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23cc))), 0x112c670eu);
  /* 112c670e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c6710 jmp 0x112c6815 */
  goto L_112c6815;
L_112c6715:;
  /* 112c6715 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c6717 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c6719 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c671c push eax */
  push32((uint32_t)(EAX));
  /* 112c671d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c6720 push ecx */
  push32((uint32_t)(ECX));
  /* 112c6721 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6724 push edx */
  push32((uint32_t)(EDX));
  /* 112c6725 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c6728 push eax */
  push32((uint32_t)(EAX));
  /* 112c6729 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c672b push 0 */
  push32((uint32_t)(0x0u));
  /* 112c672d call dword ptr [0x112f2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2390))), 0x112c6733u);
  /* 112c6733 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c6735 jne 0x112c674c */
  if (!C.zf) goto L_112c674c;
  /* 112c6737 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c6739 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c673c push ecx */
  push32((uint32_t)(ECX));
  /* 112c673d call 0x112c4ac0 */
  push32(0x112c6742u); f_112c4ac0();
  /* 112c6742 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6745 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_112c674c:;
  /* 112c674c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c674f push edx */
  push32((uint32_t)(EDX));
  /* 112c6750 call dword ptr [0x112f23cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23cc))), 0x112c6756u);
  /* 112c6756 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c6759 jmp 0x112c6815 */
  goto L_112c6815;
L_112c675e:;
  /* 112c675e cmp dword ptr [0x112ef694], 2 */
  { uint32_t _a=(r32((uint32_t)(0x112ef694))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6765 jne 0x112c6813 */
  if (!C.zf) goto L_112c6813;
  /* 112c676b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c676f jne 0x112c6787 */
  if (!C.zf) goto L_112c6787;
  /* 112c6771 call dword ptr [0x112f2350] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2350))), 0x112c6777u);
  /* 112c6777 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112c677a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c677e jne 0x112c6787 */
  if (!C.zf) goto L_112c6787;
  /* 112c6780 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c6782 jmp 0x112c6815 */
  goto L_112c6815;
L_112c6787:;
  /* 112c6787 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c678a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_112c678d:;
  /* 112c678d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c6790 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112c6793 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c6795 je 0x112c67b5 */
  if (C.zf) goto L_112c67b5;
  /* 112c6797 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c679a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c679d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112c67a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c67a3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 112c67a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c67a8 jne 0x112c67b3 */
  if (!C.zf) goto L_112c67b3;
  /* 112c67aa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c67ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c67b0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_112c67b3:;
  /* 112c67b3 jmp 0x112c678d */
  goto L_112c678d;
L_112c67b5:;
  /* 112c67b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c67b8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c67bb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c67be mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112c67c1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 112c67c6 push 0x112eac54 */
  push32((uint32_t)(0x112eac54u));
  /* 112c67cb push 2 */
  push32((uint32_t)(0x2u));
  /* 112c67cd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c67d0 push edx */
  push32((uint32_t)(EDX));
  /* 112c67d1 call 0x112c4030 */
  push32(0x112c67d6u); f_112c4030();
  /* 112c67d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c67d9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112c67dc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c67e0 jne 0x112c67f0 */
  if (!C.zf) goto L_112c67f0;
  /* 112c67e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c67e5 push eax */
  push32((uint32_t)(EAX));
  /* 112c67e6 call dword ptr [0x112f23c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23c8))), 0x112c67ecu);
  /* 112c67ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c67ee jmp 0x112c6815 */
  goto L_112c6815;
L_112c67f0:;
  /* 112c67f0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c67f3 push ecx */
  push32((uint32_t)(ECX));
  /* 112c67f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c67f7 push edx */
  push32((uint32_t)(EDX));
  /* 112c67f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c67fb push eax */
  push32((uint32_t)(EAX));
  /* 112c67fc call 0x112ca910 */
  push32(0x112c6801u); f_112ca910();
  /* 112c6801 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6804 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c6807 push ecx */
  push32((uint32_t)(ECX));
  /* 112c6808 call dword ptr [0x112f23c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23c8))), 0x112c680eu);
  /* 112c680e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c6811 jmp 0x112c6815 */
  goto L_112c6815;
L_112c6813:;
  /* 112c6813 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112c6815:;
  /* 112c6815 mov esp, ebp */
  ESP = (EBP);
  /* 112c6817 pop ebp */
  EBP = (pop32());
  /* 112c6818 ret  */
  ESPCHK(0x112c6600u, _esp0);
  ESP += 4; return;
}

/* FUN_10006820 @ 0x112c6820 (77 bytes, 25 insns) */
void f_112c6820(void) {
  FTRACE(0x112c6820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c6820 push ebp */
  push32((uint32_t)(EBP));
  /* 112c6821 mov ebp, esp */
  EBP = (ESP);
  /* 112c6823 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c6825 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 112c682a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c682c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6830 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 112c6833 push eax */
  push32((uint32_t)(EAX));
  /* 112c6834 call dword ptr [0x112f2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2344))), 0x112c683au);
  /* 112c683a mov dword ptr [0x112f0eec], eax */
  w32((uint32_t)(0x112f0eec), (EAX));
  /* 112c683f cmp dword ptr [0x112f0eec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112f0eec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6846 jne 0x112c684c */
  if (!C.zf) goto L_112c684c;
  /* 112c6848 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c684a jmp 0x112c686b */
  goto L_112c686b;
L_112c684c:;
  /* 112c684c call 0x112c82d0 */
  push32(0x112c6851u); f_112c82d0();
  /* 112c6851 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c6853 jne 0x112c6866 */
  if (!C.zf) goto L_112c6866;
  /* 112c6855 mov ecx, dword ptr [0x112f0eec] */
  ECX = (r32((uint32_t)(0x112f0eec)));
  /* 112c685b push ecx */
  push32((uint32_t)(ECX));
  /* 112c685c call dword ptr [0x112f2348] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2348))), 0x112c6862u);
  /* 112c6862 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c6864 jmp 0x112c686b */
  goto L_112c686b;
L_112c6866:;
  /* 112c6866 mov eax, 1 */
  EAX = (0x1u);
L_112c686b:;
  /* 112c686b pop ebp */
  EBP = (pop32());
  /* 112c686c ret  */
  ESPCHK(0x112c6820u, _esp0);
  ESP += 4; return;
}

/* FUN_10006870 @ 0x112c6870 (156 bytes, 48 insns) */
void f_112c6870(void) {
  FTRACE(0x112c6870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c6870 push ebp */
  push32((uint32_t)(EBP));
  /* 112c6871 mov ebp, esp */
  EBP = (ESP);
  /* 112c6873 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c6876 mov eax, dword ptr [0x112f0ee8] */
  EAX = (r32((uint32_t)(0x112f0ee8)));
  /* 112c687b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112c687e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112c6885 jmp 0x112c6890 */
  goto L_112c6890;
L_112c6887:;
  /* 112c6887 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c688a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c688d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112c6890:;
  /* 112c6890 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6893 cmp edx, dword ptr [0x112f0ee4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x112f0ee4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6899 jge 0x112c68e6 */
  if ((C.sf==C.of)) goto L_112c68e6;
  /* 112c689b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 112c68a0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 112c68a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c68a8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 112c68ab push ecx */
  push32((uint32_t)(ECX));
  /* 112c68ac call dword ptr [0x112f233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f233c))), 0x112c68b2u);
  /* 112c68b2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 112c68b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c68b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c68bc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 112c68bf push eax */
  push32((uint32_t)(EAX));
  /* 112c68c0 call dword ptr [0x112f233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f233c))), 0x112c68c6u);
  /* 112c68c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c68c9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 112c68cc push edx */
  push32((uint32_t)(EDX));
  /* 112c68cd push 0 */
  push32((uint32_t)(0x0u));
  /* 112c68cf mov eax, dword ptr [0x112f0eec] */
  EAX = (r32((uint32_t)(0x112f0eec)));
  /* 112c68d4 push eax */
  push32((uint32_t)(EAX));
  /* 112c68d5 call dword ptr [0x112f234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f234c))), 0x112c68dbu);
  /* 112c68db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c68de add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c68e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112c68e4 jmp 0x112c6887 */
  goto L_112c6887;
L_112c68e6:;
  /* 112c68e6 mov edx, dword ptr [0x112f0ee8] */
  EDX = (r32((uint32_t)(0x112f0ee8)));
  /* 112c68ec push edx */
  push32((uint32_t)(EDX));
  /* 112c68ed push 0 */
  push32((uint32_t)(0x0u));
  /* 112c68ef mov eax, dword ptr [0x112f0eec] */
  EAX = (r32((uint32_t)(0x112f0eec)));
  /* 112c68f4 push eax */
  push32((uint32_t)(EAX));
  /* 112c68f5 call dword ptr [0x112f234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f234c))), 0x112c68fbu);
  /* 112c68fb mov ecx, dword ptr [0x112f0eec] */
  ECX = (r32((uint32_t)(0x112f0eec)));
  /* 112c6901 push ecx */
  push32((uint32_t)(ECX));
  /* 112c6902 call dword ptr [0x112f2348] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2348))), 0x112c6908u);
  /* 112c6908 mov esp, ebp */
  ESP = (EBP);
  /* 112c690a pop ebp */
  EBP = (pop32());
  /* 112c690b ret  */
  ESPCHK(0x112c6870u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x112c6910 (73 bytes, 19 insns) */
void f_112c6910(void) {
  FTRACE(0x112c6910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c6910 push ebp */
  push32((uint32_t)(EBP));
  /* 112c6911 mov ebp, esp */
  EBP = (ESP);
  /* 112c6913 cmp dword ptr [0x112ef528], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112ef528))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c691a je 0x112c692e */
  if (C.zf) goto L_112c692e;
  /* 112c691c cmp dword ptr [0x112ef528], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef528))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6923 jne 0x112c6957 */
  if (!C.zf) goto L_112c6957;
  /* 112c6925 cmp dword ptr [0x112ef52c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112ef52c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c692c jne 0x112c6957 */
  if (!C.zf) goto L_112c6957;
L_112c692e:;
  /* 112c692e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 112c6933 call 0x112c6960 */
  push32(0x112c6938u); f_112c6960();
  /* 112c6938 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c693b cmp dword ptr [0x112ef698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6942 je 0x112c694a */
  if (C.zf) goto L_112c694a;
  /* 112c6944 call dword ptr [0x112ef698] */
  call_ind((uint32_t)(r32((uint32_t)(0x112ef698))), 0x112c694au);
L_112c694a:;
  /* 112c694a push 0xff */
  push32((uint32_t)(0xffu));
  /* 112c694f call 0x112c6960 */
  push32(0x112c6954u); f_112c6960();
  /* 112c6954 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c6957:;
  /* 112c6957 pop ebp */
  EBP = (pop32());
  /* 112c6958 ret  */
  ESPCHK(0x112c6910u, _esp0);
  ESP += 4; return;
}

/* FUN_10006960 @ 0x112c6960 (447 bytes, 131 insns) */
void f_112c6960(void) {
  FTRACE(0x112c6960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c6960 push ebp */
  push32((uint32_t)(EBP));
  /* 112c6961 mov ebp, esp */
  EBP = (ESP);
  /* 112c6963 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c6969 push ebx */
  push32((uint32_t)(EBX));
  /* 112c696a push esi */
  push32((uint32_t)(ESI));
  /* 112c696b push edi */
  push32((uint32_t)(EDI));
  /* 112c696c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112c6973 jmp 0x112c697e */
  goto L_112c697e;
L_112c6975:;
  /* 112c6975 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c6978 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c697b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112c697e:;
  /* 112c697e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6982 jae 0x112c6997 */
  if (!C.cf) goto L_112c6997;
  /* 112c6984 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c6987 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c698a cmp edx, dword ptr [ecx*8 + 0x112edab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x112edab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6991 jne 0x112c6995 */
  if (!C.zf) goto L_112c6995;
  /* 112c6993 jmp 0x112c6997 */
  goto L_112c6997;
L_112c6995:;
  /* 112c6995 jmp 0x112c6975 */
  goto L_112c6975;
L_112c6997:;
  /* 112c6997 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c699a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c699d cmp ecx, dword ptr [eax*8 + 0x112edab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x112edab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c69a4 jne 0x112c6b18 */
  if (!C.zf) goto L_112c6b18;
  /* 112c69aa cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c69b1 je 0x112c69d4 */
  if (C.zf) goto L_112c69d4;
  /* 112c69b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c69b6 mov eax, dword ptr [edx*8 + 0x112edab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x112edab4)));
  /* 112c69bd push eax */
  push32((uint32_t)(EAX));
  /* 112c69be push 0 */
  push32((uint32_t)(0x0u));
  /* 112c69c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c69c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c69c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c69c6 call 0x112c30f0 */
  push32(0x112c69cbu); f_112c30f0();
  /* 112c69cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c69ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c69d1 jne 0x112c69d4 */
  if (!C.zf) goto L_112c69d4;
  /* 112c69d3 int3  */
  x86_unimpl("int3 @ 0x112c69d3");
L_112c69d4:;
  /* 112c69d4 cmp dword ptr [0x112ef528], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112ef528))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c69db je 0x112c69ef */
  if (C.zf) goto L_112c69ef;
  /* 112c69dd cmp dword ptr [0x112ef528], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef528))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c69e4 jne 0x112c6a28 */
  if (!C.zf) goto L_112c6a28;
  /* 112c69e6 cmp dword ptr [0x112ef52c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112ef52c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c69ed jne 0x112c6a28 */
  if (!C.zf) goto L_112c6a28;
L_112c69ef:;
  /* 112c69ef push 0 */
  push32((uint32_t)(0x0u));
  /* 112c69f1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 112c69f4 push ecx */
  push32((uint32_t)(ECX));
  /* 112c69f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c69f8 mov eax, dword ptr [edx*8 + 0x112edab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x112edab4)));
  /* 112c69ff push eax */
  push32((uint32_t)(EAX));
  /* 112c6a00 call 0x112c6e60 */
  push32(0x112c6a05u); f_112c6e60();
  /* 112c6a05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6a08 push eax */
  push32((uint32_t)(EAX));
  /* 112c6a09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c6a0c mov edx, dword ptr [ecx*8 + 0x112edab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x112edab4)));
  /* 112c6a13 push edx */
  push32((uint32_t)(EDX));
  /* 112c6a14 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 112c6a16 call dword ptr [0x112f2360] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2360))), 0x112c6a1cu);
  /* 112c6a1c push eax */
  push32((uint32_t)(EAX));
  /* 112c6a1d call dword ptr [0x112f2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2364))), 0x112c6a23u);
  /* 112c6a23 jmp 0x112c6b18 */
  goto L_112c6b18;
L_112c6a28:;
  /* 112c6a28 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6a2f je 0x112c6b18 */
  if (C.zf) goto L_112c6b18;
  /* 112c6a35 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 112c6a3a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 112c6a40 push eax */
  push32((uint32_t)(EAX));
  /* 112c6a41 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c6a43 call dword ptr [0x112f237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f237c))), 0x112c6a49u);
  /* 112c6a49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c6a4b jne 0x112c6a61 */
  if (!C.zf) goto L_112c6a61;
  /* 112c6a4d push 0x112ea4bc */
  push32((uint32_t)(0x112ea4bcu));
  /* 112c6a52 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 112c6a58 push ecx */
  push32((uint32_t)(ECX));
  /* 112c6a59 call 0x112c6fe0 */
  push32(0x112c6a5eu); f_112c6fe0();
  /* 112c6a5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c6a61:;
  /* 112c6a61 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 112c6a67 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 112c6a6a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c6a6d push eax */
  push32((uint32_t)(EAX));
  /* 112c6a6e call 0x112c6e60 */
  push32(0x112c6a73u); f_112c6e60();
  /* 112c6a73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6a76 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6a79 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6a7c jbe 0x112c6aaa */
  if ((C.cf||C.zf)) goto L_112c6aaa;
  /* 112c6a7e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 112c6a84 push ecx */
  push32((uint32_t)(ECX));
  /* 112c6a85 call 0x112c6e60 */
  push32(0x112c6a8au); f_112c6e60();
  /* 112c6a8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6a8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c6a90 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 112c6a94 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112c6a97 push 3 */
  push32((uint32_t)(0x3u));
  /* 112c6a99 push 0x112ea4b8 */
  push32((uint32_t)(0x112ea4b8u));
  /* 112c6a9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c6aa1 push ecx */
  push32((uint32_t)(ECX));
  /* 112c6aa2 call 0x112c7850 */
  push32(0x112c6aa7u); f_112c7850();
  /* 112c6aa7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c6aaa:;
  /* 112c6aaa push 0x112eaf10 */
  push32((uint32_t)(0x112eaf10u));
  /* 112c6aaf lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 112c6ab5 push edx */
  push32((uint32_t)(EDX));
  /* 112c6ab6 call 0x112c6fe0 */
  push32(0x112c6abbu); f_112c6fe0();
  /* 112c6abb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6abe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c6ac1 push eax */
  push32((uint32_t)(EAX));
  /* 112c6ac2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 112c6ac8 push ecx */
  push32((uint32_t)(ECX));
  /* 112c6ac9 call 0x112c6ff0 */
  push32(0x112c6aceu); f_112c6ff0();
  /* 112c6ace add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6ad1 push 0x112ea430 */
  push32((uint32_t)(0x112ea430u));
  /* 112c6ad6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 112c6adc push edx */
  push32((uint32_t)(EDX));
  /* 112c6add call 0x112c6ff0 */
  push32(0x112c6ae2u); f_112c6ff0();
  /* 112c6ae2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6ae5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c6ae8 mov ecx, dword ptr [eax*8 + 0x112edab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x112edab4)));
  /* 112c6aef push ecx */
  push32((uint32_t)(ECX));
  /* 112c6af0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 112c6af6 push edx */
  push32((uint32_t)(EDX));
  /* 112c6af7 call 0x112c6ff0 */
  push32(0x112c6afcu); f_112c6ff0();
  /* 112c6afc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6aff push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 112c6b04 push 0x112eaee8 */
  push32((uint32_t)(0x112eaee8u));
  /* 112c6b09 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 112c6b0f push eax */
  push32((uint32_t)(EAX));
  /* 112c6b10 call 0x112c7790 */
  push32(0x112c6b15u); f_112c7790();
  /* 112c6b15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c6b18:;
  /* 112c6b18 pop edi */
  EDI = (pop32());
  /* 112c6b19 pop esi */
  ESI = (pop32());
  /* 112c6b1a pop ebx */
  EBX = (pop32());
  /* 112c6b1b mov esp, ebp */
  ESP = (EBP);
  /* 112c6b1d pop ebp */
  EBP = (pop32());
  /* 112c6b1e ret  */
  ESPCHK(0x112c6960u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x112c6b20 (80 bytes, 27 insns) */
void f_112c6b20(void) {
  FTRACE(0x112c6b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c6b20 push ebp */
  push32((uint32_t)(EBP));
  /* 112c6b21 mov ebp, esp */
  EBP = (ESP);
  /* 112c6b23 push ecx */
  push32((uint32_t)(ECX));
  /* 112c6b24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112c6b2b jmp 0x112c6b36 */
  goto L_112c6b36;
L_112c6b2d:;
  /* 112c6b2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6b30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6b33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112c6b36:;
  /* 112c6b36 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6b3a jae 0x112c6b4f */
  if (!C.cf) goto L_112c6b4f;
  /* 112c6b3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6b3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c6b42 cmp edx, dword ptr [ecx*8 + 0x112edab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x112edab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6b49 jne 0x112c6b4d */
  if (!C.zf) goto L_112c6b4d;
  /* 112c6b4b jmp 0x112c6b4f */
  goto L_112c6b4f;
L_112c6b4d:;
  /* 112c6b4d jmp 0x112c6b2d */
  goto L_112c6b2d;
L_112c6b4f:;
  /* 112c6b4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6b52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c6b55 cmp ecx, dword ptr [eax*8 + 0x112edab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x112edab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6b5c jne 0x112c6b6a */
  if (!C.zf) goto L_112c6b6a;
  /* 112c6b5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6b61 mov eax, dword ptr [edx*8 + 0x112edab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x112edab4)));
  /* 112c6b68 jmp 0x112c6b6c */
  goto L_112c6b6c;
L_112c6b6a:;
  /* 112c6b6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112c6b6c:;
  /* 112c6b6c mov esp, ebp */
  ESP = (EBP);
  /* 112c6b6e pop ebp */
  EBP = (pop32());
  /* 112c6b6f ret  */
  ESPCHK(0x112c6b20u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x112c6b70 (66 bytes, 28 insns) */
void f_112c6b70(void) {
  FTRACE(0x112c6b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c6b70 push ebp */
  push32((uint32_t)(EBP));
  /* 112c6b71 mov ebp, esp */
  EBP = (ESP);
  /* 112c6b73 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6b77 jne 0x112c6b97 */
  if (!C.zf) goto L_112c6b97;
  /* 112c6b79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6b7d jge 0x112c6b97 */
  if ((C.sf==C.of)) goto L_112c6b97;
  /* 112c6b7f push 1 */
  push32((uint32_t)(0x1u));
  /* 112c6b81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c6b84 push eax */
  push32((uint32_t)(EAX));
  /* 112c6b85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c6b88 push ecx */
  push32((uint32_t)(ECX));
  /* 112c6b89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c6b8c push edx */
  push32((uint32_t)(EDX));
  /* 112c6b8d call 0x112c6bc0 */
  push32(0x112c6b92u); f_112c6bc0();
  /* 112c6b92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6b95 jmp 0x112c6bad */
  goto L_112c6bad;
L_112c6b97:;
  /* 112c6b97 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c6b99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c6b9c push eax */
  push32((uint32_t)(EAX));
  /* 112c6b9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c6ba0 push ecx */
  push32((uint32_t)(ECX));
  /* 112c6ba1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c6ba4 push edx */
  push32((uint32_t)(EDX));
  /* 112c6ba5 call 0x112c6bc0 */
  push32(0x112c6baau); f_112c6bc0();
  /* 112c6baa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c6bad:;
  /* 112c6bad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c6bb0 pop ebp */
  EBP = (pop32());
  /* 112c6bb1 ret  */
  ESPCHK(0x112c6b70u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x112c6bc0 (194 bytes, 71 insns) */
void f_112c6bc0(void) {
  FTRACE(0x112c6bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c6bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c6bc1 mov ebp, esp */
  EBP = (ESP);
  /* 112c6bc3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c6bc6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c6bc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c6bcc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6bd0 je 0x112c6be9 */
  if (C.zf) goto L_112c6be9;
  /* 112c6bd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6bd5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 112c6bd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6bdb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6bde mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112c6be1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c6be4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112c6be6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_112c6be9:;
  /* 112c6be9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6bec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_112c6bef:;
  /* 112c6bef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c6bf2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c6bf4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112c6bf7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 112c6bfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c6bfd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c6bff div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112c6c02 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112c6c05 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6c09 jbe 0x112c6c21 */
  if ((C.cf||C.zf)) goto L_112c6c21;
  /* 112c6c0b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c6c0e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6c11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6c14 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 112c6c16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6c19 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6c1c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112c6c1f jmp 0x112c6c35 */
  goto L_112c6c35;
L_112c6c21:;
  /* 112c6c21 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c6c24 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6c27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6c2a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 112c6c2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6c2f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6c32 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112c6c35:;
  /* 112c6c35 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6c39 ja 0x112c6bef */
  if ((!C.cf&&!C.zf)) goto L_112c6bef;
  /* 112c6c3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6c3e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 112c6c41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6c44 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c6c47 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112c6c4a:;
  /* 112c6c4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6c4d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112c6c4f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 112c6c52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6c55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c6c58 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112c6c5a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 112c6c5c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c6c5f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 112c6c62 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 112c6c64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6c67 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c6c6a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112c6c6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c6c70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6c73 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112c6c76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c6c79 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6c7c jb 0x112c6c4a */
  if (C.cf) goto L_112c6c4a;
  /* 112c6c7e mov esp, ebp */
  ESP = (EBP);
  /* 112c6c80 pop ebp */
  EBP = (pop32());
  /* 112c6c81 ret  */
  ESPCHK(0x112c6bc0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x112c6c90 (63 bytes, 24 insns) */
void f_112c6c90(void) {
  FTRACE(0x112c6c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c6c90 push ebp */
  push32((uint32_t)(EBP));
  /* 112c6c91 mov ebp, esp */
  EBP = (ESP);
  /* 112c6c93 push ecx */
  push32((uint32_t)(ECX));
  /* 112c6c94 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6c98 jne 0x112c6ca9 */
  if (!C.zf) goto L_112c6ca9;
  /* 112c6c9a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6c9e jge 0x112c6ca9 */
  if ((C.sf==C.of)) goto L_112c6ca9;
  /* 112c6ca0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 112c6ca7 jmp 0x112c6cb0 */
  goto L_112c6cb0;
L_112c6ca9:;
  /* 112c6ca9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_112c6cb0:;
  /* 112c6cb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6cb3 push eax */
  push32((uint32_t)(EAX));
  /* 112c6cb4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c6cb7 push ecx */
  push32((uint32_t)(ECX));
  /* 112c6cb8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c6cbb push edx */
  push32((uint32_t)(EDX));
  /* 112c6cbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c6cbf push eax */
  push32((uint32_t)(EAX));
  /* 112c6cc0 call 0x112c6bc0 */
  push32(0x112c6cc5u); f_112c6bc0();
  /* 112c6cc5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6cc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c6ccb mov esp, ebp */
  ESP = (EBP);
  /* 112c6ccd pop ebp */
  EBP = (pop32());
  /* 112c6cce ret  */
  ESPCHK(0x112c6c90u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x112c6cd0 (30 bytes, 14 insns) */
void f_112c6cd0(void) {
  FTRACE(0x112c6cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c6cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c6cd1 mov ebp, esp */
  EBP = (ESP);
  /* 112c6cd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c6cd5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c6cd8 push eax */
  push32((uint32_t)(EAX));
  /* 112c6cd9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c6cdc push ecx */
  push32((uint32_t)(ECX));
  /* 112c6cdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c6ce0 push edx */
  push32((uint32_t)(EDX));
  /* 112c6ce1 call 0x112c6bc0 */
  push32(0x112c6ce6u); f_112c6bc0();
  /* 112c6ce6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6ce9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c6cec pop ebp */
  EBP = (pop32());
  /* 112c6ced ret  */
  ESPCHK(0x112c6cd0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x112c6cf0 (72 bytes, 28 insns) */
void f_112c6cf0(void) {
  FTRACE(0x112c6cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c6cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c6cf1 mov ebp, esp */
  EBP = (ESP);
  /* 112c6cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 112c6cf4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6cf8 jne 0x112c6d11 */
  if (!C.zf) goto L_112c6d11;
  /* 112c6cfa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6cfe jg 0x112c6d11 */
  if ((!C.zf&&C.sf==C.of)) goto L_112c6d11;
  /* 112c6d00 jl 0x112c6d08 */
  if ((C.sf!=C.of)) goto L_112c6d08;
  /* 112c6d02 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6d06 jae 0x112c6d11 */
  if (!C.cf) goto L_112c6d11;
L_112c6d08:;
  /* 112c6d08 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 112c6d0f jmp 0x112c6d18 */
  goto L_112c6d18;
L_112c6d11:;
  /* 112c6d11 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_112c6d18:;
  /* 112c6d18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6d1b push eax */
  push32((uint32_t)(EAX));
  /* 112c6d1c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c6d1f push ecx */
  push32((uint32_t)(ECX));
  /* 112c6d20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c6d23 push edx */
  push32((uint32_t)(EDX));
  /* 112c6d24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c6d27 push eax */
  push32((uint32_t)(EAX));
  /* 112c6d28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c6d2b push ecx */
  push32((uint32_t)(ECX));
  /* 112c6d2c call 0x112c6d40 */
  push32(0x112c6d31u); f_112c6d40();
  /* 112c6d31 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c6d34 mov esp, ebp */
  ESP = (EBP);
  /* 112c6d36 pop ebp */
  EBP = (pop32());
  /* 112c6d37 ret  */
  ESPCHK(0x112c6cf0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x112c6d40 (242 bytes, 91 insns) */
void f_112c6d40(void) {
  FTRACE(0x112c6d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c6d40 push ebp */
  push32((uint32_t)(EBP));
  /* 112c6d41 mov ebp, esp */
  EBP = (ESP);
  /* 112c6d43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c6d46 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c6d49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c6d4c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6d50 je 0x112c6d74 */
  if (C.zf) goto L_112c6d74;
  /* 112c6d52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6d55 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 112c6d58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6d5b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6d5e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112c6d61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c6d64 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112c6d66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c6d69 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6d6c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 112c6d6e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112c6d71 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_112c6d74:;
  /* 112c6d74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6d77 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_112c6d7a:;
  /* 112c6d7a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c6d7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c6d7f push ecx */
  push32((uint32_t)(ECX));
  /* 112c6d80 push eax */
  push32((uint32_t)(EAX));
  /* 112c6d81 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c6d84 push edx */
  push32((uint32_t)(EDX));
  /* 112c6d85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c6d88 push eax */
  push32((uint32_t)(EAX));
  /* 112c6d89 call 0x112cacc0 */
  push32(0x112c6d8eu); f_112cacc0();
  /* 112c6d8e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112c6d91 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c6d94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c6d96 push edx */
  push32((uint32_t)(EDX));
  /* 112c6d97 push ecx */
  push32((uint32_t)(ECX));
  /* 112c6d98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c6d9b push eax */
  push32((uint32_t)(EAX));
  /* 112c6d9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c6d9f push ecx */
  push32((uint32_t)(ECX));
  /* 112c6da0 call 0x112cac50 */
  push32(0x112c6da5u); f_112cac50();
  /* 112c6da5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112c6da8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 112c6dab cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6daf jbe 0x112c6dc7 */
  if ((C.cf||C.zf)) goto L_112c6dc7;
  /* 112c6db1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c6db4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6db7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6dba mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 112c6dbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6dbf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6dc2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112c6dc5 jmp 0x112c6ddb */
  goto L_112c6ddb;
L_112c6dc7:;
  /* 112c6dc7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c6dca add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6dcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6dd0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 112c6dd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6dd5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6dd8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_112c6ddb:;
  /* 112c6ddb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6ddf ja 0x112c6d7a */
  if ((!C.cf&&!C.zf)) goto L_112c6d7a;
  /* 112c6de1 jb 0x112c6de9 */
  if (C.cf) goto L_112c6de9;
  /* 112c6de3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6de7 ja 0x112c6d7a */
  if ((!C.cf&&!C.zf)) goto L_112c6d7a;
L_112c6de9:;
  /* 112c6de9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6dec mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 112c6def mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6df2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c6df5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112c6df8:;
  /* 112c6df8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6dfb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112c6dfd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 112c6e00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6e03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c6e06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112c6e08 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 112c6e0a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c6e0d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 112c6e10 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 112c6e12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c6e15 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c6e18 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112c6e1b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c6e1e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6e21 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112c6e24 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c6e27 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6e2a jb 0x112c6df8 */
  if (C.cf) goto L_112c6df8;
  /* 112c6e2c mov esp, ebp */
  ESP = (EBP);
  /* 112c6e2e pop ebp */
  EBP = (pop32());
  /* 112c6e2f ret 0x14 */
  ESPCHK(0x112c6d40u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x112c6e40 (31 bytes, 15 insns) */
void f_112c6e40(void) {
  FTRACE(0x112c6e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c6e40 push ebp */
  push32((uint32_t)(EBP));
  /* 112c6e41 mov ebp, esp */
  EBP = (ESP);
  /* 112c6e43 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c6e45 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c6e48 push eax */
  push32((uint32_t)(EAX));
  /* 112c6e49 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c6e4c push ecx */
  push32((uint32_t)(ECX));
  /* 112c6e4d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c6e50 push edx */
  push32((uint32_t)(EDX));
  /* 112c6e51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c6e54 push eax */
  push32((uint32_t)(EAX));
  /* 112c6e55 call 0x112c6d40 */
  push32(0x112c6e5au); f_112c6d40();
  /* 112c6e5a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c6e5d pop ebp */
  EBP = (pop32());
  /* 112c6e5e ret  */
  ESPCHK(0x112c6e40u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x112c6e60 (123 bytes, 44 insns) */
void f_112c6e60(void) {
  FTRACE(0x112c6e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c6e60 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 112c6e64 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 112c6e6a je 0x112c6e80 */
  if (C.zf) goto L_112c6e80;
L_112c6e6c:;
  /* 112c6e6c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 112c6e6e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 112c6e6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112c6e71 je 0x112c6eb3 */
  if (C.zf) goto L_112c6eb3;
  /* 112c6e73 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 112c6e79 jne 0x112c6e6c */
  if (!C.zf) goto L_112c6e6c;
  /* 112c6e7b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_112c6e80:;
  /* 112c6e80 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 112c6e82 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 112c6e87 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6e89 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c6e8c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112c6e8e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6e91 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 112c6e96 je 0x112c6e80 */
  if (C.zf) goto L_112c6e80;
  /* 112c6e98 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 112c6e9b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112c6e9d je 0x112c6ed1 */
  if (C.zf) goto L_112c6ed1;
  /* 112c6e9f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 112c6ea1 je 0x112c6ec7 */
  if (C.zf) goto L_112c6ec7;
  /* 112c6ea3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 112c6ea8 je 0x112c6ebd */
  if (C.zf) goto L_112c6ebd;
  /* 112c6eaa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 112c6eaf je 0x112c6eb3 */
  if (C.zf) goto L_112c6eb3;
  /* 112c6eb1 jmp 0x112c6e80 */
  goto L_112c6e80;
L_112c6eb3:;
  /* 112c6eb3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 112c6eb6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 112c6eba sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c6ebc ret  */
  ESPCHK(0x112c6e60u, _esp0);
  ESP += 4; return;
L_112c6ebd:;
  /* 112c6ebd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 112c6ec0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 112c6ec4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c6ec6 ret  */
  ESPCHK(0x112c6e60u, _esp0);
  ESP += 4; return;
L_112c6ec7:;
  /* 112c6ec7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 112c6eca mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 112c6ece sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c6ed0 ret  */
  ESPCHK(0x112c6e60u, _esp0);
  ESP += 4; return;
L_112c6ed1:;
  /* 112c6ed1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 112c6ed4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 112c6ed8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c6eda ret  */
  ESPCHK(0x112c6e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ee0 @ 0x112c6ee0 (249 bytes, 93 insns) */
void f_112c6ee0(void) {
  FTRACE(0x112c6ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c6ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c6ee1 mov ebp, esp */
  EBP = (ESP);
  /* 112c6ee3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c6ee6 push ebx */
  push32((uint32_t)(EBX));
  /* 112c6ee7 push esi */
  push32((uint32_t)(ESI));
  /* 112c6ee8 push edi */
  push32((uint32_t)(EDI));
  /* 112c6ee9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 112c6eec mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 112c6eef lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 112c6ef2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_112c6ef5:;
  /* 112c6ef5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6ef9 jne 0x112c6f19 */
  if (!C.zf) goto L_112c6f19;
  /* 112c6efb push 0x112eaf48 */
  push32((uint32_t)(0x112eaf48u));
  /* 112c6f00 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c6f02 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 112c6f04 push 0x112eaf3c */
  push32((uint32_t)(0x112eaf3cu));
  /* 112c6f09 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c6f0b call 0x112c30f0 */
  push32(0x112c6f10u); f_112c30f0();
  /* 112c6f10 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6f13 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6f16 jne 0x112c6f19 */
  if (!C.zf) goto L_112c6f19;
  /* 112c6f18 int3  */
  x86_unimpl("int3 @ 0x112c6f18");
L_112c6f19:;
  /* 112c6f19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c6f1b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c6f1d jne 0x112c6ef5 */
  if (!C.zf) goto L_112c6ef5;
L_112c6f1f:;
  /* 112c6f1f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6f23 jne 0x112c6f43 */
  if (!C.zf) goto L_112c6f43;
  /* 112c6f25 push 0x112eaf2c */
  push32((uint32_t)(0x112eaf2cu));
  /* 112c6f2a push 0 */
  push32((uint32_t)(0x0u));
  /* 112c6f2c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 112c6f2e push 0x112eaf3c */
  push32((uint32_t)(0x112eaf3cu));
  /* 112c6f33 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c6f35 call 0x112c30f0 */
  push32(0x112c6f3au); f_112c30f0();
  /* 112c6f3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6f3d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6f40 jne 0x112c6f43 */
  if (!C.zf) goto L_112c6f43;
  /* 112c6f42 int3  */
  x86_unimpl("int3 @ 0x112c6f42");
L_112c6f43:;
  /* 112c6f43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c6f45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c6f47 jne 0x112c6f1f */
  if (!C.zf) goto L_112c6f1f;
  /* 112c6f49 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c6f4c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 112c6f53 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c6f56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c6f59 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 112c6f5c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c6f5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c6f62 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 112c6f64 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c6f67 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c6f6a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 112c6f6d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112c6f70 push edx */
  push32((uint32_t)(EDX));
  /* 112c6f71 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c6f74 push eax */
  push32((uint32_t)(EAX));
  /* 112c6f75 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c6f78 push ecx */
  push32((uint32_t)(ECX));
  /* 112c6f79 call 0x112cafc0 */
  push32(0x112c6f7eu); f_112cafc0();
  /* 112c6f7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6f81 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 112c6f84 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c6f87 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 112c6f8a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c6f8d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c6f90 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 112c6f93 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c6f96 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c6f9a jl 0x112c6fbe */
  if ((C.sf!=C.of)) goto L_112c6fbe;
  /* 112c6f9c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c6f9f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112c6fa1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 112c6fa4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c6fa6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 112c6fac mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 112c6faf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c6fb2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112c6fb4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6fb7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c6fba mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 112c6fbc jmp 0x112c6fcf */
  goto L_112c6fcf;
L_112c6fbe:;
  /* 112c6fbe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c6fc1 push eax */
  push32((uint32_t)(EAX));
  /* 112c6fc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c6fc4 call 0x112cad40 */
  push32(0x112c6fc9u); f_112cad40();
  /* 112c6fc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c6fcc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_112c6fcf:;
  /* 112c6fcf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112c6fd2 pop edi */
  EDI = (pop32());
  /* 112c6fd3 pop esi */
  ESI = (pop32());
  /* 112c6fd4 pop ebx */
  EBX = (pop32());
  /* 112c6fd5 mov esp, ebp */
  ESP = (EBP);
  /* 112c6fd7 pop ebp */
  EBP = (pop32());
  /* 112c6fd8 ret  */
  ESPCHK(0x112c6ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fe0 @ 0x112c6fe0 (7 bytes, 3 insns) */
void f_112c6fe0(void) {
  FTRACE(0x112c6fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c6fe0 push edi */
  push32((uint32_t)(EDI));
  /* 112c6fe1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 112c6fe5 jmp 0x112c7051 */
  jmp_ind(0x112c7051u); return;
}

/* FUN_10006ff0 @ 0x112c6ff0 (224 bytes, 84 insns) */
void f_112c6ff0(void) {
  FTRACE(0x112c6ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c6ff0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 112c6ff4 push edi */
  push32((uint32_t)(EDI));
  /* 112c6ff5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 112c6ffb je 0x112c700c */
  if (C.zf) goto L_112c700c;
L_112c6ffd:;
  /* 112c6ffd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 112c6fff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 112c7000 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112c7002 je 0x112c703f */
  if (C.zf) goto L_112c703f;
  /* 112c7004 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 112c700a jne 0x112c6ffd */
  if (!C.zf) goto L_112c6ffd;
L_112c700c:;
  /* 112c700c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 112c700e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 112c7013 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7015 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c7018 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112c701a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c701d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 112c7022 je 0x112c700c */
  if (C.zf) goto L_112c700c;
  /* 112c7024 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 112c7027 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112c7029 je 0x112c704e */
  if (C.zf) goto L_112c704e;
  /* 112c702b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 112c702d je 0x112c7049 */
  if (C.zf) goto L_112c7049;
  /* 112c702f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 112c7034 je 0x112c7044 */
  if (C.zf) goto L_112c7044;
  /* 112c7036 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 112c703b je 0x112c703f */
  if (C.zf) goto L_112c703f;
  /* 112c703d jmp 0x112c700c */
  goto L_112c700c;
L_112c703f:;
  /* 112c703f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 112c7042 jmp 0x112c7051 */
  goto L_112c7051;
L_112c7044:;
  /* 112c7044 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 112c7047 jmp 0x112c7051 */
  goto L_112c7051;
L_112c7049:;
  /* 112c7049 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 112c704c jmp 0x112c7051 */
  goto L_112c7051;
L_112c704e:;
  /* 112c704e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_112c7051:;
  /* 112c7051 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 112c7055 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 112c705b je 0x112c7076 */
  if (C.zf) goto L_112c7076;
L_112c705d:;
  /* 112c705d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112c705f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 112c7060 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 112c7062 je 0x112c70c8 */
  if (C.zf) goto L_112c70c8;
  /* 112c7064 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 112c7066 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112c7067 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 112c706d jne 0x112c705d */
  if (!C.zf) goto L_112c705d;
  /* 112c706f jmp 0x112c7076 */
  goto L_112c7076;
L_112c7071:;
  /* 112c7071 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 112c7073 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_112c7076:;
  /* 112c7076 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 112c707b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 112c707d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c707f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c7082 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112c7084 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112c7086 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7089 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 112c708e je 0x112c7071 */
  if (C.zf) goto L_112c7071;
  /* 112c7090 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 112c7092 je 0x112c70c8 */
  if (C.zf) goto L_112c70c8;
  /* 112c7094 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 112c7096 je 0x112c70bf */
  if (C.zf) goto L_112c70bf;
  /* 112c7098 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 112c709e je 0x112c70b2 */
  if (C.zf) goto L_112c70b2;
  /* 112c70a0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 112c70a6 je 0x112c70aa */
  if (C.zf) goto L_112c70aa;
  /* 112c70a8 jmp 0x112c7071 */
  goto L_112c7071;
L_112c70aa:;
  /* 112c70aa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 112c70ac mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112c70b0 pop edi */
  EDI = (pop32());
  /* 112c70b1 ret  */
  ESPCHK(0x112c6ff0u, _esp0);
  ESP += 4; return;
L_112c70b2:;
  /* 112c70b2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 112c70b5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112c70b9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 112c70bd pop edi */
  EDI = (pop32());
  /* 112c70be ret  */
  ESPCHK(0x112c6ff0u, _esp0);
  ESP += 4; return;
L_112c70bf:;
  /* 112c70bf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 112c70c2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112c70c6 pop edi */
  EDI = (pop32());
  /* 112c70c7 ret  */
  ESPCHK(0x112c6ff0u, _esp0);
  ESP += 4; return;
L_112c70c8:;
  /* 112c70c8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 112c70ca mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112c70ce pop edi */
  EDI = (pop32());
  /* 112c70cf ret  */
  ESPCHK(0x112c6ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_100070d0 @ 0x112c70d0 (243 bytes, 91 insns) */
void f_112c70d0(void) {
  FTRACE(0x112c70d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c70d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c70d1 mov ebp, esp */
  EBP = (ESP);
  /* 112c70d3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c70d6 push ebx */
  push32((uint32_t)(EBX));
  /* 112c70d7 push esi */
  push32((uint32_t)(ESI));
  /* 112c70d8 push edi */
  push32((uint32_t)(EDI));
  /* 112c70d9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 112c70dc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_112c70df:;
  /* 112c70df cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c70e3 jne 0x112c7103 */
  if (!C.zf) goto L_112c7103;
  /* 112c70e5 push 0x112eaf48 */
  push32((uint32_t)(0x112eaf48u));
  /* 112c70ea push 0 */
  push32((uint32_t)(0x0u));
  /* 112c70ec push 0x5a */
  push32((uint32_t)(0x5au));
  /* 112c70ee push 0x112eaf58 */
  push32((uint32_t)(0x112eaf58u));
  /* 112c70f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c70f5 call 0x112c30f0 */
  push32(0x112c70fau); f_112c30f0();
  /* 112c70fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c70fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7100 jne 0x112c7103 */
  if (!C.zf) goto L_112c7103;
  /* 112c7102 int3  */
  x86_unimpl("int3 @ 0x112c7102");
L_112c7103:;
  /* 112c7103 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c7105 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c7107 jne 0x112c70df */
  if (!C.zf) goto L_112c70df;
L_112c7109:;
  /* 112c7109 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c710d jne 0x112c712d */
  if (!C.zf) goto L_112c712d;
  /* 112c710f push 0x112eaf2c */
  push32((uint32_t)(0x112eaf2cu));
  /* 112c7114 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c7116 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 112c7118 push 0x112eaf58 */
  push32((uint32_t)(0x112eaf58u));
  /* 112c711d push 2 */
  push32((uint32_t)(0x2u));
  /* 112c711f call 0x112c30f0 */
  push32(0x112c7124u); f_112c30f0();
  /* 112c7124 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7127 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c712a jne 0x112c712d */
  if (!C.zf) goto L_112c712d;
  /* 112c712c int3  */
  x86_unimpl("int3 @ 0x112c712c");
L_112c712d:;
  /* 112c712d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c712f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c7131 jne 0x112c7109 */
  if (!C.zf) goto L_112c7109;
  /* 112c7133 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c7136 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 112c713d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c7140 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c7143 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 112c7146 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c7149 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c714c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 112c714e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c7151 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c7154 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 112c7157 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112c715a push ecx */
  push32((uint32_t)(ECX));
  /* 112c715b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c715e push edx */
  push32((uint32_t)(EDX));
  /* 112c715f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c7162 push eax */
  push32((uint32_t)(EAX));
  /* 112c7163 call 0x112cafc0 */
  push32(0x112c7168u); f_112cafc0();
  /* 112c7168 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c716b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 112c716e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c7171 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112c7174 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c7177 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c717a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 112c717d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c7180 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7184 jl 0x112c71a8 */
  if ((C.sf!=C.of)) goto L_112c71a8;
  /* 112c7186 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c7189 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112c718b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 112c718e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112c7190 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 112c7196 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 112c7199 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c719c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112c719e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c71a1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c71a4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112c71a6 jmp 0x112c71b9 */
  goto L_112c71b9;
L_112c71a8:;
  /* 112c71a8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 112c71ab push edx */
  push32((uint32_t)(EDX));
  /* 112c71ac push 0 */
  push32((uint32_t)(0x0u));
  /* 112c71ae call 0x112cad40 */
  push32(0x112c71b3u); f_112cad40();
  /* 112c71b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c71b6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_112c71b9:;
  /* 112c71b9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 112c71bc pop edi */
  EDI = (pop32());
  /* 112c71bd pop esi */
  ESI = (pop32());
  /* 112c71be pop ebx */
  EBX = (pop32());
  /* 112c71bf mov esp, ebp */
  ESP = (EBP);
  /* 112c71c1 pop ebp */
  EBP = (pop32());
  /* 112c71c2 ret  */
  ESPCHK(0x112c70d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100071d0 @ 0x112c71d0 (47 bytes, 17 insns) */
void f_112c71d0(void) {
  FTRACE(0x112c71d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c71d0 push ecx */
  push32((uint32_t)(ECX));
  /* 112c71d1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c71d6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 112c71da jb 0x112c71f0 */
  if (C.cf) goto L_112c71f0;
L_112c71dc:;
  /* 112c71dc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c71e2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c71e7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 112c71e9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c71ee jae 0x112c71dc */
  if (!C.cf) goto L_112c71dc;
L_112c71f0:;
  /* 112c71f0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c71f2 mov eax, esp */
  EAX = (ESP);
  /* 112c71f4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 112c71f6 mov esp, ecx */
  ESP = (ECX);
  /* 112c71f8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112c71fa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 112c71fd push eax */
  push32((uint32_t)(EAX));
  /* 112c71fe ret  */
  ESPCHK(0x112c71d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007200 @ 0x112c7200 (507 bytes, 151 insns) [1 switch table(s)] */
void f_112c7200(void) {
  FTRACE(0x112c7200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c7200 push ebp */
  push32((uint32_t)(EBP));
  /* 112c7201 mov ebp, esp */
  EBP = (ESP);
  /* 112c7203 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c7206 push esi */
  push32((uint32_t)(ESI));
  /* 112c7207 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c720b je 0x112c7213 */
  if (C.zf) goto L_112c7213;
  /* 112c720d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7211 jne 0x112c7218 */
  if (!C.zf) goto L_112c7218;
L_112c7213:;
  /* 112c7213 jmp 0x112c73e8 */
  goto L_112c73e8;
L_112c7218:;
  /* 112c7218 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c721c je 0x112c7234 */
  if (C.zf) goto L_112c7234;
  /* 112c721e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7222 je 0x112c7234 */
  if (C.zf) goto L_112c7234;
  /* 112c7224 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7228 je 0x112c7234 */
  if (C.zf) goto L_112c7234;
  /* 112c722a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c722e jne 0x112c7311 */
  if (!C.zf) goto L_112c7311;
L_112c7234:;
  /* 112c7234 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c7236 call 0x112c7a30 */
  push32(0x112c723bu); f_112c7a30();
  /* 112c723b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c723e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7242 je 0x112c724a */
  if (C.zf) goto L_112c724a;
  /* 112c7244 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7248 jne 0x112c728f */
  if (!C.zf) goto L_112c728f;
L_112c724a:;
  /* 112c724a cmp dword ptr [0x112ef6ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef6ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7251 jne 0x112c728f */
  if (!C.zf) goto L_112c728f;
  /* 112c7253 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c7255 push 0x112c7430 */
  push32((uint32_t)(0x112c7430u));
  /* 112c725a call dword ptr [0x112f2338] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2338))), 0x112c7260u);
  /* 112c7260 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7263 jne 0x112c7271 */
  if (!C.zf) goto L_112c7271;
  /* 112c7265 mov dword ptr [0x112ef6ac], 1 */
  w32((uint32_t)(0x112ef6ac), (0x1u));
  /* 112c726f jmp 0x112c728f */
  goto L_112c728f;
L_112c7271:;
  /* 112c7271 call dword ptr [0x112f23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23a4))), 0x112c7277u);
  /* 112c7277 mov esi, eax */
  ESI = (EAX);
  /* 112c7279 call 0x112cbf10 */
  push32(0x112c727eu); f_112cbf10();
  /* 112c727e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 112c7280 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c7282 call 0x112c7ad0 */
  push32(0x112c7287u); f_112c7ad0();
  /* 112c7287 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c728a jmp 0x112c73e8 */
  goto L_112c73e8;
L_112c728f:;
  /* 112c728f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c7292 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112c7295 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c7298 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c729b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112c729e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c72a2 ja 0x112c7302 */
  if ((!C.cf&&!C.zf)) goto L_112c7302;
  /* 112c72a4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c72a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c72a9 mov dl, byte ptr [eax + 0x112c740f] */
  DL = (r8((uint32_t)(EAX + 0x112c740f)));
  /* 112c72af jmp dword ptr [edx*4 + 0x112c73fb] */
  switch (EDX) {
    case 0: goto L_112c72b6;
    case 1: goto L_112c72f0;
    case 2: goto L_112c72ca;
    case 3: goto L_112c72dd;
    case 4: goto L_112c7302;
    default: x86_unimpl("switch@0x112c72af out of table"); return;
  }
L_112c72b6:;
  /* 112c72b6 mov ecx, dword ptr [0x112ef69c] */
  ECX = (r32((uint32_t)(0x112ef69c)));
  /* 112c72bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112c72bf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c72c2 mov dword ptr [0x112ef69c], edx */
  w32((uint32_t)(0x112ef69c), (EDX));
  /* 112c72c8 jmp 0x112c7302 */
  goto L_112c7302;
L_112c72ca:;
  /* 112c72ca mov eax, dword ptr [0x112ef6a0] */
  EAX = (r32((uint32_t)(0x112ef6a0)));
  /* 112c72cf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112c72d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c72d5 mov dword ptr [0x112ef6a0], ecx */
  w32((uint32_t)(0x112ef6a0), (ECX));
  /* 112c72db jmp 0x112c7302 */
  goto L_112c7302;
L_112c72dd:;
  /* 112c72dd mov edx, dword ptr [0x112ef6a4] */
  EDX = (r32((uint32_t)(0x112ef6a4)));
  /* 112c72e3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 112c72e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c72e9 mov dword ptr [0x112ef6a4], eax */
  w32((uint32_t)(0x112ef6a4), (EAX));
  /* 112c72ee jmp 0x112c7302 */
  goto L_112c7302;
L_112c72f0:;
  /* 112c72f0 mov ecx, dword ptr [0x112ef6a8] */
  ECX = (r32((uint32_t)(0x112ef6a8)));
  /* 112c72f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112c72f9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c72fc mov dword ptr [0x112ef6a8], edx */
  w32((uint32_t)(0x112ef6a8), (EDX));
L_112c7302:;
  /* 112c7302 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c7304 call 0x112c7ad0 */
  push32(0x112c7309u); f_112c7ad0();
  /* 112c7309 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c730c jmp 0x112c73e3 */
  goto L_112c73e3;
L_112c7311:;
  /* 112c7311 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7315 je 0x112c7328 */
  if (C.zf) goto L_112c7328;
  /* 112c7317 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c731b je 0x112c7328 */
  if (C.zf) goto L_112c7328;
  /* 112c731d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7321 je 0x112c7328 */
  if (C.zf) goto L_112c7328;
  /* 112c7323 jmp 0x112c73e8 */
  goto L_112c73e8;
L_112c7328:;
  /* 112c7328 call 0x112c3a70 */
  push32(0x112c732du); f_112c3a70();
  /* 112c732d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c7330 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c7333 cmp dword ptr [eax + 0x50], 0x112edc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x112edc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c733a jne 0x112c7385 */
  if (!C.zf) goto L_112c7385;
  /* 112c733c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 112c7341 push 0x112eaf64 */
  push32((uint32_t)(0x112eaf64u));
  /* 112c7346 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c7348 mov ecx, dword ptr [0x112edc80] */
  ECX = (r32((uint32_t)(0x112edc80)));
  /* 112c734e push ecx */
  push32((uint32_t)(ECX));
  /* 112c734f call 0x112c4030 */
  push32(0x112c7354u); f_112c4030();
  /* 112c7354 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7357 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c735a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 112c735d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c7360 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7364 je 0x112c7383 */
  if (C.zf) goto L_112c7383;
  /* 112c7366 mov ecx, dword ptr [0x112edc80] */
  ECX = (r32((uint32_t)(0x112edc80)));
  /* 112c736c push ecx */
  push32((uint32_t)(ECX));
  /* 112c736d push 0x112edc00 */
  push32((uint32_t)(0x112edc00u));
  /* 112c7372 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c7375 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 112c7378 push eax */
  push32((uint32_t)(EAX));
  /* 112c7379 call 0x112ca910 */
  push32(0x112c737eu); f_112ca910();
  /* 112c737e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7381 jmp 0x112c7385 */
  goto L_112c7385;
L_112c7383:;
  /* 112c7383 jmp 0x112c73e8 */
  goto L_112c73e8;
L_112c7385:;
  /* 112c7385 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c7388 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 112c738b push edx */
  push32((uint32_t)(EDX));
  /* 112c738c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c738f push eax */
  push32((uint32_t)(EAX));
  /* 112c7390 call 0x112c7710 */
  push32(0x112c7395u); f_112c7710();
  /* 112c7395 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7398 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112c739b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c739f jne 0x112c73a3 */
  if (!C.zf) goto L_112c73a3;
  /* 112c73a1 jmp 0x112c73e8 */
  goto L_112c73e8;
L_112c73a3:;
  /* 112c73a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c73a6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 112c73a9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_112c73ac:;
  /* 112c73ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c73af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112c73b2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c73b5 jne 0x112c73e3 */
  if (!C.zf) goto L_112c73e3;
  /* 112c73b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c73ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c73bd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 112c73c0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c73c3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c73c6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112c73c9 mov edx, dword ptr [0x112edc84] */
  EDX = (r32((uint32_t)(0x112edc84)));
  /* 112c73cf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c73d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c73d5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 112c73d8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c73da cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c73dd jb 0x112c73e1 */
  if (C.cf) goto L_112c73e1;
  /* 112c73df jmp 0x112c73e3 */
  goto L_112c73e3;
L_112c73e1:;
  /* 112c73e1 jmp 0x112c73ac */
  goto L_112c73ac;
L_112c73e3:;
  /* 112c73e3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c73e6 jmp 0x112c73f6 */
  goto L_112c73f6;
L_112c73e8:;
  /* 112c73e8 call 0x112cbf00 */
  push32(0x112c73edu); f_112cbf00();
  /* 112c73ed mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 112c73f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_112c73f6:;
  /* 112c73f6 pop esi */
  ESI = (pop32());
  /* 112c73f7 mov esp, ebp */
  ESP = (EBP);
  /* 112c73f9 pop ebp */
  EBP = (pop32());
  /* 112c73fa ret  */
  ESPCHK(0x112c7200u, _esp0);
  ESP += 4; return;
}

/* FUN_10007430 @ 0x112c7430 (146 bytes, 45 insns) */
void f_112c7430(void) {
  FTRACE(0x112c7430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c7430 push ebp */
  push32((uint32_t)(EBP));
  /* 112c7431 mov ebp, esp */
  EBP = (ESP);
  /* 112c7433 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c7436 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c7438 call 0x112c7a30 */
  push32(0x112c743du); f_112c7a30();
  /* 112c743d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7440 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7444 jne 0x112c745e */
  if (!C.zf) goto L_112c745e;
  /* 112c7446 mov dword ptr [ebp - 8], 0x112ef69c */
  w32((uint32_t)(EBP + -0x8), (0x112ef69cu));
  /* 112c744d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c7450 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112c7452 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112c7455 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 112c745c jmp 0x112c7474 */
  goto L_112c7474;
L_112c745e:;
  /* 112c745e mov dword ptr [ebp - 8], 0x112ef6a0 */
  w32((uint32_t)(EBP + -0x8), (0x112ef6a0u));
  /* 112c7465 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c7468 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112c746a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112c746d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_112c7474:;
  /* 112c7474 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7478 jne 0x112c7488 */
  if (!C.zf) goto L_112c7488;
  /* 112c747a push 1 */
  push32((uint32_t)(0x1u));
  /* 112c747c call 0x112c7ad0 */
  push32(0x112c7481u); f_112c7ad0();
  /* 112c7481 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7484 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c7486 jmp 0x112c74bc */
  goto L_112c74bc;
L_112c7488:;
  /* 112c7488 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c748c je 0x112c74ad */
  if (C.zf) goto L_112c74ad;
  /* 112c748e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c7491 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 112c7497 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c7499 call 0x112c7ad0 */
  push32(0x112c749eu); f_112c7ad0();
  /* 112c749e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c74a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c74a4 push edx */
  push32((uint32_t)(EDX));
  /* 112c74a5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x112c74a8u);
  /* 112c74a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c74ab jmp 0x112c74b7 */
  goto L_112c74b7;
L_112c74ad:;
  /* 112c74ad push 1 */
  push32((uint32_t)(0x1u));
  /* 112c74af call 0x112c7ad0 */
  push32(0x112c74b4u); f_112c7ad0();
  /* 112c74b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c74b7:;
  /* 112c74b7 mov eax, 1 */
  EAX = (0x1u);
L_112c74bc:;
  /* 112c74bc mov esp, ebp */
  ESP = (EBP);
  /* 112c74be pop ebp */
  EBP = (pop32());
  /* 112c74bf ret 4 */
  ESPCHK(0x112c7430u, _esp0);
  ESP += 8; return;
}

/* FUN_100074d0 @ 0x112c74d0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_112c74d0(void) {
  FTRACE(0x112c74d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c74d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c74d1 mov ebp, esp */
  EBP = (ESP);
  /* 112c74d3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c74d6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 112c74dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c74e0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 112c74e3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c74e6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c74e9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 112c74ec cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c74f0 ja 0x112c759e */
  if ((!C.cf&&!C.zf)) goto L_112c759e;
  /* 112c74f6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 112c74f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c74fb mov dl, byte ptr [eax + 0x112c76f2] */
  DL = (r8((uint32_t)(EAX + 0x112c76f2)));
  /* 112c7501 jmp dword ptr [edx*4 + 0x112c76da] */
  switch (EDX) {
    case 0: goto L_112c7508;
    case 1: goto L_112c7573;
    case 2: goto L_112c7559;
    case 3: goto L_112c7525;
    case 4: goto L_112c753f;
    case 5: goto L_112c759e;
    default: x86_unimpl("switch@0x112c7501 out of table"); return;
  }
L_112c7508:;
  /* 112c7508 mov dword ptr [ebp - 0x18], 0x112ef69c */
  w32((uint32_t)(EBP + -0x18), (0x112ef69cu));
  /* 112c750f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c7512 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112c7514 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 112c7517 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c751a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c751d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112c7520 jmp 0x112c75a6 */
  goto L_112c75a6;
L_112c7525:;
  /* 112c7525 mov dword ptr [ebp - 0x18], 0x112ef6a0 */
  w32((uint32_t)(EBP + -0x18), (0x112ef6a0u));
  /* 112c752c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c752f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112c7531 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 112c7534 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c7537 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c753a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112c753d jmp 0x112c75a6 */
  goto L_112c75a6;
L_112c753f:;
  /* 112c753f mov dword ptr [ebp - 0x18], 0x112ef6a4 */
  w32((uint32_t)(EBP + -0x18), (0x112ef6a4u));
  /* 112c7546 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c7549 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112c754b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 112c754e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c7551 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7554 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112c7557 jmp 0x112c75a6 */
  goto L_112c75a6;
L_112c7559:;
  /* 112c7559 mov dword ptr [ebp - 0x18], 0x112ef6a8 */
  w32((uint32_t)(EBP + -0x18), (0x112ef6a8u));
  /* 112c7560 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c7563 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112c7565 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 112c7568 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c756b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c756e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112c7571 jmp 0x112c75a6 */
  goto L_112c75a6;
L_112c7573:;
  /* 112c7573 call 0x112c3a70 */
  push32(0x112c7578u); f_112c3a70();
  /* 112c7578 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c757b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c757e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 112c7581 push edx */
  push32((uint32_t)(EDX));
  /* 112c7582 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c7585 push eax */
  push32((uint32_t)(EAX));
  /* 112c7586 call 0x112c7710 */
  push32(0x112c758bu); f_112c7710();
  /* 112c758b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c758e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7591 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 112c7594 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c7597 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112c7599 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 112c759c jmp 0x112c75a6 */
  goto L_112c75a6;
L_112c759e:;
  /* 112c759e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c75a1 jmp 0x112c76d6 */
  goto L_112c76d6;
L_112c75a6:;
  /* 112c75a6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c75aa je 0x112c75b6 */
  if (C.zf) goto L_112c75b6;
  /* 112c75ac push 1 */
  push32((uint32_t)(0x1u));
  /* 112c75ae call 0x112c7a30 */
  push32(0x112c75b3u); f_112c7a30();
  /* 112c75b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c75b6:;
  /* 112c75b6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c75ba jne 0x112c75d3 */
  if (!C.zf) goto L_112c75d3;
  /* 112c75bc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c75c0 je 0x112c75cc */
  if (C.zf) goto L_112c75cc;
  /* 112c75c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 112c75c4 call 0x112c7ad0 */
  push32(0x112c75c9u); f_112c7ad0();
  /* 112c75c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c75cc:;
  /* 112c75cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c75ce jmp 0x112c76d6 */
  goto L_112c76d6;
L_112c75d3:;
  /* 112c75d3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c75d7 jne 0x112c75f0 */
  if (!C.zf) goto L_112c75f0;
  /* 112c75d9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c75dd je 0x112c75e9 */
  if (C.zf) goto L_112c75e9;
  /* 112c75df push 1 */
  push32((uint32_t)(0x1u));
  /* 112c75e1 call 0x112c7ad0 */
  push32(0x112c75e6u); f_112c7ad0();
  /* 112c75e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c75e9:;
  /* 112c75e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 112c75eb call 0x112c37f0 */
  push32(0x112c75f0u); f_112c37f0();
L_112c75f0:;
  /* 112c75f0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c75f4 je 0x112c7602 */
  if (C.zf) goto L_112c7602;
  /* 112c75f6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c75fa je 0x112c7602 */
  if (C.zf) goto L_112c7602;
  /* 112c75fc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7600 jne 0x112c762e */
  if (!C.zf) goto L_112c762e;
L_112c7602:;
  /* 112c7602 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c7605 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 112c7608 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 112c760b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c760e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 112c7615 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7619 jne 0x112c762e */
  if (!C.zf) goto L_112c762e;
  /* 112c761b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c761e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 112c7621 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112c7624 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c7627 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_112c762e:;
  /* 112c762e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7632 jne 0x112c7670 */
  if (!C.zf) goto L_112c7670;
  /* 112c7634 mov eax, dword ptr [0x112edc78] */
  EAX = (r32((uint32_t)(0x112edc78)));
  /* 112c7639 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112c763c jmp 0x112c7647 */
  goto L_112c7647;
L_112c763e:;
  /* 112c763e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c7641 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7644 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_112c7647:;
  /* 112c7647 mov edx, dword ptr [0x112edc78] */
  EDX = (r32((uint32_t)(0x112edc78)));
  /* 112c764d add edx, dword ptr [0x112edc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x112edc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7653 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7656 jge 0x112c766e */
  if ((C.sf==C.of)) goto L_112c766e;
  /* 112c7658 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c765b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c765e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c7661 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 112c7664 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 112c766c jmp 0x112c763e */
  goto L_112c763e;
L_112c766e:;
  /* 112c766e jmp 0x112c7679 */
  goto L_112c7679;
L_112c7670:;
  /* 112c7670 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c7673 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_112c7679:;
  /* 112c7679 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c767d je 0x112c7689 */
  if (C.zf) goto L_112c7689;
  /* 112c767f push 1 */
  push32((uint32_t)(0x1u));
  /* 112c7681 call 0x112c7ad0 */
  push32(0x112c7686u); f_112c7ad0();
  /* 112c7686 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c7689:;
  /* 112c7689 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c768d jne 0x112c76a0 */
  if (!C.zf) goto L_112c76a0;
  /* 112c768f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c7692 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 112c7695 push edx */
  push32((uint32_t)(EDX));
  /* 112c7696 push 8 */
  push32((uint32_t)(0x8u));
  /* 112c7698 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x112c769bu);
  /* 112c769b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c769e jmp 0x112c76aa */
  goto L_112c76aa;
L_112c76a0:;
  /* 112c76a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c76a3 push eax */
  push32((uint32_t)(EAX));
  /* 112c76a4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x112c76a7u);
  /* 112c76a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c76aa:;
  /* 112c76aa cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c76ae je 0x112c76bc */
  if (C.zf) goto L_112c76bc;
  /* 112c76b0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c76b4 je 0x112c76bc */
  if (C.zf) goto L_112c76bc;
  /* 112c76b6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c76ba jne 0x112c76d4 */
  if (!C.zf) goto L_112c76d4;
L_112c76bc:;
  /* 112c76bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c76bf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c76c2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 112c76c5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c76c9 jne 0x112c76d4 */
  if (!C.zf) goto L_112c76d4;
  /* 112c76cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c76ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c76d1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_112c76d4:;
  /* 112c76d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112c76d6:;
  /* 112c76d6 mov esp, ebp */
  ESP = (EBP);
  /* 112c76d8 pop ebp */
  EBP = (pop32());
  /* 112c76d9 ret  */
  ESPCHK(0x112c74d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007710 @ 0x112c7710 (91 bytes, 35 insns) */
void f_112c7710(void) {
  FTRACE(0x112c7710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c7710 push ebp */
  push32((uint32_t)(EBP));
  /* 112c7711 mov ebp, esp */
  EBP = (ESP);
  /* 112c7713 push ecx */
  push32((uint32_t)(ECX));
  /* 112c7714 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c7717 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112c771a:;
  /* 112c771a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c771d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 112c7720 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7723 je 0x112c7743 */
  if (C.zf) goto L_112c7743;
  /* 112c7725 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c7728 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c772b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c772e mov ecx, dword ptr [0x112edc84] */
  ECX = (r32((uint32_t)(0x112edc84)));
  /* 112c7734 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c7737 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c773a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c773c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c773f jae 0x112c7743 */
  if (!C.cf) goto L_112c7743;
  /* 112c7741 jmp 0x112c771a */
  goto L_112c771a;
L_112c7743:;
  /* 112c7743 mov eax, dword ptr [0x112edc84] */
  EAX = (r32((uint32_t)(0x112edc84)));
  /* 112c7748 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c774b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c774e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7750 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7753 jae 0x112c7765 */
  if (!C.cf) goto L_112c7765;
  /* 112c7755 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c7758 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 112c775b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c775e jne 0x112c7765 */
  if (!C.zf) goto L_112c7765;
  /* 112c7760 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c7763 jmp 0x112c7767 */
  goto L_112c7767;
L_112c7765:;
  /* 112c7765 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112c7767:;
  /* 112c7767 mov esp, ebp */
  ESP = (EBP);
  /* 112c7769 pop ebp */
  EBP = (pop32());
  /* 112c776a ret  */
  ESPCHK(0x112c7710u, _esp0);
  ESP += 4; return;
}

/* FUN_10007770 @ 0x112c7770 (13 bytes, 6 insns) */
void f_112c7770(void) {
  FTRACE(0x112c7770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c7770 push ebp */
  push32((uint32_t)(EBP));
  /* 112c7771 mov ebp, esp */
  EBP = (ESP);
  /* 112c7773 call 0x112c3a70 */
  push32(0x112c7778u); f_112c3a70();
  /* 112c7778 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c777b pop ebp */
  EBP = (pop32());
  /* 112c777c ret  */
  ESPCHK(0x112c7770u, _esp0);
  ESP += 4; return;
}

/* FUN_10007780 @ 0x112c7780 (13 bytes, 6 insns) */
void f_112c7780(void) {
  FTRACE(0x112c7780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c7780 push ebp */
  push32((uint32_t)(EBP));
  /* 112c7781 mov ebp, esp */
  EBP = (ESP);
  /* 112c7783 call 0x112c3a70 */
  push32(0x112c7788u); f_112c3a70();
  /* 112c7788 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c778b pop ebp */
  EBP = (pop32());
  /* 112c778c ret  */
  ESPCHK(0x112c7780u, _esp0);
  ESP += 4; return;
}

/* FUN_10007790 @ 0x112c7790 (187 bytes, 54 insns) */
void f_112c7790(void) {
  FTRACE(0x112c7790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c7790 push ebp */
  push32((uint32_t)(EBP));
  /* 112c7791 mov ebp, esp */
  EBP = (ESP);
  /* 112c7793 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c7796 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112c779d cmp dword ptr [0x112ef6b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef6b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c77a4 jne 0x112c7803 */
  if (!C.zf) goto L_112c7803;
  /* 112c77a6 push 0x112ea390 */
  push32((uint32_t)(0x112ea390u));
  /* 112c77ab call dword ptr [0x112f2374] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2374))), 0x112c77b1u);
  /* 112c77b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112c77b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c77b8 je 0x112c77d7 */
  if (C.zf) goto L_112c77d7;
  /* 112c77ba push 0x112eaf94 */
  push32((uint32_t)(0x112eaf94u));
  /* 112c77bf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c77c2 push eax */
  push32((uint32_t)(EAX));
  /* 112c77c3 call dword ptr [0x112f2370] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2370))), 0x112c77c9u);
  /* 112c77c9 mov dword ptr [0x112ef6b0], eax */
  w32((uint32_t)(0x112ef6b0), (EAX));
  /* 112c77ce cmp dword ptr [0x112ef6b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef6b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c77d5 jne 0x112c77db */
  if (!C.zf) goto L_112c77db;
L_112c77d7:;
  /* 112c77d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c77d9 jmp 0x112c7847 */
  goto L_112c7847;
L_112c77db:;
  /* 112c77db push 0x112eaf84 */
  push32((uint32_t)(0x112eaf84u));
  /* 112c77e0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c77e3 push ecx */
  push32((uint32_t)(ECX));
  /* 112c77e4 call dword ptr [0x112f2370] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2370))), 0x112c77eau);
  /* 112c77ea mov dword ptr [0x112ef6b4], eax */
  w32((uint32_t)(0x112ef6b4), (EAX));
  /* 112c77ef push 0x112eaf70 */
  push32((uint32_t)(0x112eaf70u));
  /* 112c77f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c77f7 push edx */
  push32((uint32_t)(EDX));
  /* 112c77f8 call dword ptr [0x112f2370] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2370))), 0x112c77feu);
  /* 112c77fe mov dword ptr [0x112ef6b8], eax */
  w32((uint32_t)(0x112ef6b8), (EAX));
L_112c7803:;
  /* 112c7803 cmp dword ptr [0x112ef6b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef6b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c780a je 0x112c7815 */
  if (C.zf) goto L_112c7815;
  /* 112c780c call dword ptr [0x112ef6b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112ef6b4))), 0x112c7812u);
  /* 112c7812 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112c7815:;
  /* 112c7815 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7819 je 0x112c7831 */
  if (C.zf) goto L_112c7831;
  /* 112c781b cmp dword ptr [0x112ef6b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef6b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7822 je 0x112c7831 */
  if (C.zf) goto L_112c7831;
  /* 112c7824 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c7827 push eax */
  push32((uint32_t)(EAX));
  /* 112c7828 call dword ptr [0x112ef6b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112ef6b8))), 0x112c782eu);
  /* 112c782e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112c7831:;
  /* 112c7831 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112c7834 push ecx */
  push32((uint32_t)(ECX));
  /* 112c7835 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c7838 push edx */
  push32((uint32_t)(EDX));
  /* 112c7839 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c783c push eax */
  push32((uint32_t)(EAX));
  /* 112c783d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c7840 push ecx */
  push32((uint32_t)(ECX));
  /* 112c7841 call dword ptr [0x112ef6b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112ef6b0))), 0x112c7847u);
L_112c7847:;
  /* 112c7847 mov esp, ebp */
  ESP = (EBP);
  /* 112c7849 pop ebp */
  EBP = (pop32());
  /* 112c784a ret  */
  ESPCHK(0x112c7790u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x112c7850 (254 bytes, 109 insns) */
void f_112c7850(void) {
  FTRACE(0x112c7850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c7850 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 112c7854 push edi */
  push32((uint32_t)(EDI));
  /* 112c7855 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112c7857 je 0x112c78d3 */
  if (C.zf) goto L_112c78d3;
  /* 112c7859 push esi */
  push32((uint32_t)(ESI));
  /* 112c785a push ebx */
  push32((uint32_t)(EBX));
  /* 112c785b mov ebx, ecx */
  EBX = (ECX);
  /* 112c785d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 112c7861 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 112c7867 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 112c786b jne 0x112c7874 */
  if (!C.zf) goto L_112c7874;
  /* 112c786d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112c7870 jne 0x112c78e1 */
  if (!C.zf) goto L_112c78e1;
  /* 112c7872 jmp 0x112c7895 */
  goto L_112c7895;
L_112c7874:;
  /* 112c7874 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112c7876 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112c7877 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112c7879 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112c787a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112c787b je 0x112c78a2 */
  if (C.zf) goto L_112c78a2;
  /* 112c787d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112c787f je 0x112c78aa */
  if (C.zf) goto L_112c78aa;
  /* 112c7881 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 112c7887 jne 0x112c7874 */
  if (!C.zf) goto L_112c7874;
  /* 112c7889 mov ebx, ecx */
  EBX = (ECX);
  /* 112c788b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112c788e jne 0x112c78e1 */
  if (!C.zf) goto L_112c78e1;
L_112c7890:;
  /* 112c7890 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 112c7893 je 0x112c78a2 */
  if (C.zf) goto L_112c78a2;
L_112c7895:;
  /* 112c7895 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112c7897 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112c7898 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112c789a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112c789b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112c789d je 0x112c78ce */
  if (C.zf) goto L_112c78ce;
  /* 112c789f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 112c78a0 jne 0x112c7895 */
  if (!C.zf) goto L_112c7895;
L_112c78a2:;
  /* 112c78a2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 112c78a6 pop ebx */
  EBX = (pop32());
  /* 112c78a7 pop esi */
  ESI = (pop32());
  /* 112c78a8 pop edi */
  EDI = (pop32());
  /* 112c78a9 ret  */
  ESPCHK(0x112c7850u, _esp0);
  ESP += 4; return;
L_112c78aa:;
  /* 112c78aa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 112c78b0 je 0x112c78c4 */
  if (C.zf) goto L_112c78c4;
L_112c78b2:;
  /* 112c78b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112c78b4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112c78b5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112c78b6 je 0x112c7946 */
  if (C.zf) goto L_112c7946;
  /* 112c78bc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 112c78c2 jne 0x112c78b2 */
  if (!C.zf) goto L_112c78b2;
L_112c78c4:;
  /* 112c78c4 mov ebx, ecx */
  EBX = (ECX);
  /* 112c78c6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112c78c9 jne 0x112c7937 */
  if (!C.zf) goto L_112c7937;
L_112c78cb:;
  /* 112c78cb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112c78cd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_112c78ce:;
  /* 112c78ce dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 112c78cf jne 0x112c78cb */
  if (!C.zf) goto L_112c78cb;
  /* 112c78d1 pop ebx */
  EBX = (pop32());
  /* 112c78d2 pop esi */
  ESI = (pop32());
L_112c78d3:;
  /* 112c78d3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112c78d7 pop edi */
  EDI = (pop32());
  /* 112c78d8 ret  */
  ESPCHK(0x112c7850u, _esp0);
  ESP += 4; return;
L_112c78d9:;
  /* 112c78d9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 112c78db add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112c78de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112c78df je 0x112c7890 */
  if (C.zf) goto L_112c7890;
L_112c78e1:;
  /* 112c78e1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 112c78e6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 112c78e8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c78ea xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c78ed xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112c78ef mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 112c78f1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112c78f4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 112c78f9 je 0x112c78d9 */
  if (C.zf) goto L_112c78d9;
  /* 112c78fb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 112c78fd je 0x112c792b */
  if (C.zf) goto L_112c792b;
  /* 112c78ff test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 112c7901 je 0x112c7921 */
  if (C.zf) goto L_112c7921;
  /* 112c7903 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 112c7909 je 0x112c7917 */
  if (C.zf) goto L_112c7917;
  /* 112c790b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 112c7911 jne 0x112c78d9 */
  if (!C.zf) goto L_112c78d9;
  /* 112c7913 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 112c7915 jmp 0x112c792f */
  goto L_112c792f;
L_112c7917:;
  /* 112c7917 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 112c791d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 112c791f jmp 0x112c792f */
  goto L_112c792f;
L_112c7921:;
  /* 112c7921 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 112c7927 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 112c7929 jmp 0x112c792f */
  goto L_112c792f;
L_112c792b:;
  /* 112c792b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112c792d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_112c792f:;
  /* 112c792f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7932 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c7934 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112c7935 je 0x112c7941 */
  if (C.zf) goto L_112c7941;
L_112c7937:;
  /* 112c7937 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112c7939:;
  /* 112c7939 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 112c793b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112c793e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112c793f jne 0x112c7939 */
  if (!C.zf) goto L_112c7939;
L_112c7941:;
  /* 112c7941 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 112c7944 jne 0x112c78cb */
  if (!C.zf) goto L_112c78cb;
L_112c7946:;
  /* 112c7946 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 112c794a pop ebx */
  EBX = (pop32());
  /* 112c794b pop esi */
  ESI = (pop32());
  /* 112c794c pop edi */
  EDI = (pop32());
  /* 112c794d ret  */
  ESPCHK(0x112c7850u, _esp0);
  ESP += 4; return;
}

/* FUN_10007950 @ 0x112c7950 (55 bytes, 16 insns) */
void f_112c7950(void) {
  FTRACE(0x112c7950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c7950 push ebp */
  push32((uint32_t)(EBP));
  /* 112c7951 mov ebp, esp */
  EBP = (ESP);
  /* 112c7953 mov eax, dword ptr [0x112edb84] */
  EAX = (r32((uint32_t)(0x112edb84)));
  /* 112c7958 push eax */
  push32((uint32_t)(EAX));
  /* 112c7959 call dword ptr [0x112f2340] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2340))), 0x112c795fu);
  /* 112c795f mov ecx, dword ptr [0x112edb74] */
  ECX = (r32((uint32_t)(0x112edb74)));
  /* 112c7965 push ecx */
  push32((uint32_t)(ECX));
  /* 112c7966 call dword ptr [0x112f2340] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2340))), 0x112c796cu);
  /* 112c796c mov edx, dword ptr [0x112edb64] */
  EDX = (r32((uint32_t)(0x112edb64)));
  /* 112c7972 push edx */
  push32((uint32_t)(EDX));
  /* 112c7973 call dword ptr [0x112f2340] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2340))), 0x112c7979u);
  /* 112c7979 mov eax, dword ptr [0x112edb44] */
  EAX = (r32((uint32_t)(0x112edb44)));
  /* 112c797e push eax */
  push32((uint32_t)(EAX));
  /* 112c797f call dword ptr [0x112f2340] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2340))), 0x112c7985u);
  /* 112c7985 pop ebp */
  EBP = (pop32());
  /* 112c7986 ret  */
  ESPCHK(0x112c7950u, _esp0);
  ESP += 4; return;
}

/* FUN_10007990 @ 0x112c7990 (159 bytes, 47 insns) */
void f_112c7990(void) {
  FTRACE(0x112c7990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c7990 push ebp */
  push32((uint32_t)(EBP));
  /* 112c7991 mov ebp, esp */
  EBP = (ESP);
  /* 112c7993 push ecx */
  push32((uint32_t)(ECX));
  /* 112c7994 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112c799b jmp 0x112c79a6 */
  goto L_112c79a6;
L_112c799d:;
  /* 112c799d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c79a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c79a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112c79a6:;
  /* 112c79a6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c79aa jge 0x112c79f9 */
  if ((C.sf==C.of)) goto L_112c79f9;
  /* 112c79ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c79af cmp dword ptr [ecx*4 + 0x112edb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x112edb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c79b7 je 0x112c79f7 */
  if (C.zf) goto L_112c79f7;
  /* 112c79b9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c79bd je 0x112c79f7 */
  if (C.zf) goto L_112c79f7;
  /* 112c79bf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c79c3 je 0x112c79f7 */
  if (C.zf) goto L_112c79f7;
  /* 112c79c5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c79c9 je 0x112c79f7 */
  if (C.zf) goto L_112c79f7;
  /* 112c79cb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c79cf je 0x112c79f7 */
  if (C.zf) goto L_112c79f7;
  /* 112c79d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c79d4 mov eax, dword ptr [edx*4 + 0x112edb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x112edb40)));
  /* 112c79db push eax */
  push32((uint32_t)(EAX));
  /* 112c79dc call dword ptr [0x112f23b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23b8))), 0x112c79e2u);
  /* 112c79e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 112c79e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c79e7 mov edx, dword ptr [ecx*4 + 0x112edb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x112edb40)));
  /* 112c79ee push edx */
  push32((uint32_t)(EDX));
  /* 112c79ef call 0x112c4ac0 */
  push32(0x112c79f4u); f_112c4ac0();
  /* 112c79f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c79f7:;
  /* 112c79f7 jmp 0x112c799d */
  goto L_112c799d;
L_112c79f9:;
  /* 112c79f9 mov eax, dword ptr [0x112edb64] */
  EAX = (r32((uint32_t)(0x112edb64)));
  /* 112c79fe push eax */
  push32((uint32_t)(EAX));
  /* 112c79ff call dword ptr [0x112f23b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23b8))), 0x112c7a05u);
  /* 112c7a05 mov ecx, dword ptr [0x112edb74] */
  ECX = (r32((uint32_t)(0x112edb74)));
  /* 112c7a0b push ecx */
  push32((uint32_t)(ECX));
  /* 112c7a0c call dword ptr [0x112f23b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23b8))), 0x112c7a12u);
  /* 112c7a12 mov edx, dword ptr [0x112edb84] */
  EDX = (r32((uint32_t)(0x112edb84)));
  /* 112c7a18 push edx */
  push32((uint32_t)(EDX));
  /* 112c7a19 call dword ptr [0x112f23b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23b8))), 0x112c7a1fu);
  /* 112c7a1f mov eax, dword ptr [0x112edb44] */
  EAX = (r32((uint32_t)(0x112edb44)));
  /* 112c7a24 push eax */
  push32((uint32_t)(EAX));
  /* 112c7a25 call dword ptr [0x112f23b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23b8))), 0x112c7a2bu);
  /* 112c7a2b mov esp, ebp */
  ESP = (EBP);
  /* 112c7a2d pop ebp */
  EBP = (pop32());
  /* 112c7a2e ret  */
  ESPCHK(0x112c7990u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a30 @ 0x112c7a30 (151 bytes, 46 insns) */
void f_112c7a30(void) {
  FTRACE(0x112c7a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c7a30 push ebp */
  push32((uint32_t)(EBP));
  /* 112c7a31 mov ebp, esp */
  EBP = (ESP);
  /* 112c7a33 push ecx */
  push32((uint32_t)(ECX));
  /* 112c7a34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c7a37 cmp dword ptr [eax*4 + 0x112edb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x112edb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7a3f jne 0x112c7ab2 */
  if (!C.zf) goto L_112c7ab2;
  /* 112c7a41 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 112c7a46 push 0x112eafa0 */
  push32((uint32_t)(0x112eafa0u));
  /* 112c7a4b push 2 */
  push32((uint32_t)(0x2u));
  /* 112c7a4d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 112c7a4f call 0x112c4030 */
  push32(0x112c7a54u); f_112c4030();
  /* 112c7a54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7a57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c7a5a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7a5e jne 0x112c7a6a */
  if (!C.zf) goto L_112c7a6a;
  /* 112c7a60 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 112c7a62 call 0x112c2fa0 */
  push32(0x112c7a67u); f_112c2fa0();
  /* 112c7a67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c7a6a:;
  /* 112c7a6a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 112c7a6c call 0x112c7a30 */
  push32(0x112c7a71u); f_112c7a30();
  /* 112c7a71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7a74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c7a77 cmp dword ptr [ecx*4 + 0x112edb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x112edb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7a7f jne 0x112c7a9a */
  if (!C.zf) goto L_112c7a9a;
  /* 112c7a81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c7a84 push edx */
  push32((uint32_t)(EDX));
  /* 112c7a85 call dword ptr [0x112f2340] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2340))), 0x112c7a8bu);
  /* 112c7a8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c7a8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c7a91 mov dword ptr [eax*4 + 0x112edb40], ecx */
  w32((uint32_t)(EAX*4 + 0x112edb40), (ECX));
  /* 112c7a98 jmp 0x112c7aa8 */
  goto L_112c7aa8;
L_112c7a9a:;
  /* 112c7a9a push 2 */
  push32((uint32_t)(0x2u));
  /* 112c7a9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c7a9f push edx */
  push32((uint32_t)(EDX));
  /* 112c7aa0 call 0x112c4ac0 */
  push32(0x112c7aa5u); f_112c4ac0();
  /* 112c7aa5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c7aa8:;
  /* 112c7aa8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 112c7aaa call 0x112c7ad0 */
  push32(0x112c7aafu); f_112c7ad0();
  /* 112c7aaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c7ab2:;
  /* 112c7ab2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c7ab5 mov ecx, dword ptr [eax*4 + 0x112edb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x112edb40)));
  /* 112c7abc push ecx */
  push32((uint32_t)(ECX));
  /* 112c7abd call dword ptr [0x112f2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2330))), 0x112c7ac3u);
  /* 112c7ac3 mov esp, ebp */
  ESP = (EBP);
  /* 112c7ac5 pop ebp */
  EBP = (pop32());
  /* 112c7ac6 ret  */
  ESPCHK(0x112c7a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ad0 @ 0x112c7ad0 (22 bytes, 8 insns) */
void f_112c7ad0(void) {
  FTRACE(0x112c7ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c7ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c7ad1 mov ebp, esp */
  EBP = (ESP);
  /* 112c7ad3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c7ad6 mov ecx, dword ptr [eax*4 + 0x112edb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x112edb40)));
  /* 112c7add push ecx */
  push32((uint32_t)(ECX));
  /* 112c7ade call dword ptr [0x112f232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f232c))), 0x112c7ae4u);
  /* 112c7ae4 pop ebp */
  EBP = (pop32());
  /* 112c7ae5 ret  */
  ESPCHK(0x112c7ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007af0 @ 0x112c7af0 (26 bytes, 10 insns) */
void f_112c7af0(void) {
  FTRACE(0x112c7af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c7af0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c7af1 mov ebp, esp */
  EBP = (ESP);
  /* 112c7af3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c7af6 push eax */
  push32((uint32_t)(EAX));
  /* 112c7af7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c7af9 call dword ptr [0x112f2334] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2334))), 0x112c7affu);
  /* 112c7aff push 0xff */
  push32((uint32_t)(0xffu));
  /* 112c7b04 call dword ptr [0x112f2380] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2380))), 0x112c7b0au);
  /* 112c7b0a pop ebp */
  EBP = (pop32());
  /* 112c7b0b ret  */
  ESPCHK(0x112c7af0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x112c7b10 (446 bytes, 130 insns) */
void f_112c7b10(void) {
  FTRACE(0x112c7b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c7b10 push ebp */
  push32((uint32_t)(EBP));
  /* 112c7b11 mov ebp, esp */
  EBP = (ESP);
  /* 112c7b13 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c7b16 call 0x112c3a70 */
  push32(0x112c7b1bu); f_112c3a70();
  /* 112c7b1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112c7b1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c7b21 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 112c7b24 push ecx */
  push32((uint32_t)(ECX));
  /* 112c7b25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c7b28 push edx */
  push32((uint32_t)(EDX));
  /* 112c7b29 call 0x112c7cd0 */
  push32(0x112c7b2eu); f_112c7cd0();
  /* 112c7b2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7b31 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112c7b34 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7b38 je 0x112c7b43 */
  if (C.zf) goto L_112c7b43;
  /* 112c7b3a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c7b3d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7b41 jne 0x112c7b52 */
  if (!C.zf) goto L_112c7b52;
L_112c7b43:;
  /* 112c7b43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c7b46 push ecx */
  push32((uint32_t)(ECX));
  /* 112c7b47 call dword ptr [0x112f2324] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2324))), 0x112c7b4du);
  /* 112c7b4d jmp 0x112c7cca */
  goto L_112c7cca;
L_112c7b52:;
  /* 112c7b52 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c7b55 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7b59 jne 0x112c7b6f */
  if (!C.zf) goto L_112c7b6f;
  /* 112c7b5b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c7b5e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 112c7b65 mov eax, 1 */
  EAX = (0x1u);
  /* 112c7b6a jmp 0x112c7cca */
  goto L_112c7cca;
L_112c7b6f:;
  /* 112c7b6f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c7b72 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7b76 jne 0x112c7b80 */
  if (!C.zf) goto L_112c7b80;
  /* 112c7b78 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112c7b7b jmp 0x112c7cca */
  goto L_112c7cca;
L_112c7b80:;
  /* 112c7b80 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c7b83 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 112c7b86 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c7b89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c7b8c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 112c7b8f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 112c7b92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c7b95 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c7b98 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 112c7b9b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c7b9e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7ba2 jne 0x112c7ca7 */
  if (!C.zf) goto L_112c7ca7;
  /* 112c7ba8 mov eax, dword ptr [0x112edc78] */
  EAX = (r32((uint32_t)(0x112edc78)));
  /* 112c7bad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 112c7bb0 jmp 0x112c7bbb */
  goto L_112c7bbb;
L_112c7bb2:;
  /* 112c7bb2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c7bb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7bb8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_112c7bbb:;
  /* 112c7bbb mov edx, dword ptr [0x112edc78] */
  EDX = (r32((uint32_t)(0x112edc78)));
  /* 112c7bc1 add edx, dword ptr [0x112edc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x112edc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7bc7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7bca jge 0x112c7be2 */
  if ((C.sf==C.of)) goto L_112c7be2;
  /* 112c7bcc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c7bcf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c7bd2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c7bd5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 112c7bd8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 112c7be0 jmp 0x112c7bb2 */
  goto L_112c7bb2;
L_112c7be2:;
  /* 112c7be2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c7be5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 112c7be8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112c7beb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c7bee cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7bf4 jne 0x112c7c05 */
  if (!C.zf) goto L_112c7c05;
  /* 112c7bf6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c7bf9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 112c7c00 jmp 0x112c7c8d */
  goto L_112c7c8d;
L_112c7c05:;
  /* 112c7c05 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c7c08 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7c0e jne 0x112c7c1c */
  if (!C.zf) goto L_112c7c1c;
  /* 112c7c10 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c7c13 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 112c7c1a jmp 0x112c7c8d */
  goto L_112c7c8d;
L_112c7c1c:;
  /* 112c7c1c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c7c1f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7c25 jne 0x112c7c33 */
  if (!C.zf) goto L_112c7c33;
  /* 112c7c27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c7c2a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 112c7c31 jmp 0x112c7c8d */
  goto L_112c7c8d;
L_112c7c33:;
  /* 112c7c33 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c7c36 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7c3c jne 0x112c7c4a */
  if (!C.zf) goto L_112c7c4a;
  /* 112c7c3e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c7c41 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 112c7c48 jmp 0x112c7c8d */
  goto L_112c7c8d;
L_112c7c4a:;
  /* 112c7c4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c7c4d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7c53 jne 0x112c7c61 */
  if (!C.zf) goto L_112c7c61;
  /* 112c7c55 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c7c58 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 112c7c5f jmp 0x112c7c8d */
  goto L_112c7c8d;
L_112c7c61:;
  /* 112c7c61 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c7c64 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7c6a jne 0x112c7c78 */
  if (!C.zf) goto L_112c7c78;
  /* 112c7c6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c7c6f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 112c7c76 jmp 0x112c7c8d */
  goto L_112c7c8d;
L_112c7c78:;
  /* 112c7c78 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c7c7b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7c81 jne 0x112c7c8d */
  if (!C.zf) goto L_112c7c8d;
  /* 112c7c83 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c7c86 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_112c7c8d:;
  /* 112c7c8d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c7c90 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 112c7c93 push edx */
  push32((uint32_t)(EDX));
  /* 112c7c94 push 8 */
  push32((uint32_t)(0x8u));
  /* 112c7c96 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x112c7c99u);
  /* 112c7c99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7c9c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c7c9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c7ca2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 112c7ca5 jmp 0x112c7cbe */
  goto L_112c7cbe;
L_112c7ca7:;
  /* 112c7ca7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c7caa mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 112c7cb1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c7cb4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112c7cb7 push ecx */
  push32((uint32_t)(ECX));
  /* 112c7cb8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x112c7cbbu);
  /* 112c7cbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c7cbe:;
  /* 112c7cbe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c7cc1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112c7cc4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 112c7cc7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_112c7cca:;
  /* 112c7cca mov esp, ebp */
  ESP = (EBP);
  /* 112c7ccc pop ebp */
  EBP = (pop32());
  /* 112c7ccd ret  */
  ESPCHK(0x112c7b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cd0 @ 0x112c7cd0 (89 bytes, 35 insns) */
void f_112c7cd0(void) {
  FTRACE(0x112c7cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c7cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c7cd1 mov ebp, esp */
  EBP = (ESP);
  /* 112c7cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 112c7cd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c7cd7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112c7cda:;
  /* 112c7cda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c7cdd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112c7cdf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7ce2 je 0x112c7d02 */
  if (C.zf) goto L_112c7d02;
  /* 112c7ce4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c7ce7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7cea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c7ced mov ecx, dword ptr [0x112edc84] */
  ECX = (r32((uint32_t)(0x112edc84)));
  /* 112c7cf3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c7cf6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c7cf9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7cfb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7cfe jae 0x112c7d02 */
  if (!C.cf) goto L_112c7d02;
  /* 112c7d00 jmp 0x112c7cda */
  goto L_112c7cda;
L_112c7d02:;
  /* 112c7d02 mov eax, dword ptr [0x112edc84] */
  EAX = (r32((uint32_t)(0x112edc84)));
  /* 112c7d07 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112c7d0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c7d0d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7d0f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7d12 jae 0x112c7d1e */
  if (!C.cf) goto L_112c7d1e;
  /* 112c7d14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c7d17 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 112c7d19 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7d1c je 0x112c7d22 */
  if (C.zf) goto L_112c7d22;
L_112c7d1e:;
  /* 112c7d1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c7d20 jmp 0x112c7d25 */
  goto L_112c7d25;
L_112c7d22:;
  /* 112c7d22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_112c7d25:;
  /* 112c7d25 mov esp, ebp */
  ESP = (EBP);
  /* 112c7d27 pop ebp */
  EBP = (pop32());
  /* 112c7d28 ret  */
  ESPCHK(0x112c7cd0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x112c7d30 (48 bytes, 17 insns) */
void f_112c7d30(void) {
  FTRACE(0x112c7d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c7d30 push ebp */
  push32((uint32_t)(EBP));
  /* 112c7d31 mov ebp, esp */
  EBP = (ESP);
  /* 112c7d33 push ecx */
  push32((uint32_t)(ECX));
  /* 112c7d34 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c7d36 call 0x112c7a30 */
  push32(0x112c7d3bu); f_112c7a30();
  /* 112c7d3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7d3e mov eax, dword ptr [0x112ef724] */
  EAX = (r32((uint32_t)(0x112ef724)));
  /* 112c7d43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c7d46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c7d49 mov dword ptr [0x112ef724], ecx */
  w32((uint32_t)(0x112ef724), (ECX));
  /* 112c7d4f push 9 */
  push32((uint32_t)(0x9u));
  /* 112c7d51 call 0x112c7ad0 */
  push32(0x112c7d56u); f_112c7ad0();
  /* 112c7d56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7d59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c7d5c mov esp, ebp */
  ESP = (EBP);
  /* 112c7d5e pop ebp */
  EBP = (pop32());
  /* 112c7d5f ret  */
  ESPCHK(0x112c7d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d60 @ 0x112c7d60 (10 bytes, 5 insns) */
void f_112c7d60(void) {
  FTRACE(0x112c7d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c7d60 push ebp */
  push32((uint32_t)(EBP));
  /* 112c7d61 mov ebp, esp */
  EBP = (ESP);
  /* 112c7d63 mov eax, dword ptr [0x112ef724] */
  EAX = (r32((uint32_t)(0x112ef724)));
  /* 112c7d68 pop ebp */
  EBP = (pop32());
  /* 112c7d69 ret  */
  ESPCHK(0x112c7d60u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x112c7d70 (45 bytes, 19 insns) */
void f_112c7d70(void) {
  FTRACE(0x112c7d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c7d70 push ebp */
  push32((uint32_t)(EBP));
  /* 112c7d71 mov ebp, esp */
  EBP = (ESP);
  /* 112c7d73 push ecx */
  push32((uint32_t)(ECX));
  /* 112c7d74 mov eax, dword ptr [0x112ef724] */
  EAX = (r32((uint32_t)(0x112ef724)));
  /* 112c7d79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c7d7c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7d80 je 0x112c7d90 */
  if (C.zf) goto L_112c7d90;
  /* 112c7d82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c7d85 push ecx */
  push32((uint32_t)(ECX));
  /* 112c7d86 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x112c7d89u);
  /* 112c7d89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7d8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c7d8e jne 0x112c7d94 */
  if (!C.zf) goto L_112c7d94;
L_112c7d90:;
  /* 112c7d90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c7d92 jmp 0x112c7d99 */
  goto L_112c7d99;
L_112c7d94:;
  /* 112c7d94 mov eax, 1 */
  EAX = (0x1u);
L_112c7d99:;
  /* 112c7d99 mov esp, ebp */
  ESP = (EBP);
  /* 112c7d9b pop ebp */
  EBP = (pop32());
  /* 112c7d9c ret  */
  ESPCHK(0x112c7d70u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x112c7da0 (88 bytes, 40 insns) */
void f_112c7da0(void) {
  FTRACE(0x112c7da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c7da0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 112c7da4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 112c7da8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c7daa je 0x112c7df3 */
  if (C.zf) goto L_112c7df3;
  /* 112c7dac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c7dae mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 112c7db2 push edi */
  push32((uint32_t)(EDI));
  /* 112c7db3 mov edi, ecx */
  EDI = (ECX);
  /* 112c7db5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7db8 jb 0x112c7de7 */
  if (C.cf) goto L_112c7de7;
  /* 112c7dba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 112c7dbc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 112c7dbf je 0x112c7dc9 */
  if (C.zf) goto L_112c7dc9;
  /* 112c7dc1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_112c7dc3:;
  /* 112c7dc3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112c7dc5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112c7dc6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112c7dc7 jne 0x112c7dc3 */
  if (!C.zf) goto L_112c7dc3;
L_112c7dc9:;
  /* 112c7dc9 mov ecx, eax */
  ECX = (EAX);
  /* 112c7dcb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 112c7dce add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7dd0 mov ecx, eax */
  ECX = (EAX);
  /* 112c7dd2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 112c7dd5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7dd7 mov ecx, edx */
  ECX = (EDX);
  /* 112c7dd9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 112c7ddc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112c7ddf je 0x112c7de7 */
  if (C.zf) goto L_112c7de7;
  /* 112c7de1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112c7de3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112c7de5 je 0x112c7ded */
  if (C.zf) goto L_112c7ded;
L_112c7de7:;
  /* 112c7de7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112c7de9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112c7dea dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 112c7deb jne 0x112c7de7 */
  if (!C.zf) goto L_112c7de7;
L_112c7ded:;
  /* 112c7ded mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112c7df1 pop edi */
  EDI = (pop32());
  /* 112c7df2 ret  */
  ESPCHK(0x112c7da0u, _esp0);
  ESP += 4; return;
L_112c7df3:;
  /* 112c7df3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112c7df7 ret  */
  ESPCHK(0x112c7da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e00 @ 0x112c7e00 (23 bytes, 10 insns) */
void f_112c7e00(void) {
  FTRACE(0x112c7e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c7e00 push ebp */
  push32((uint32_t)(EBP));
  /* 112c7e01 mov ebp, esp */
  EBP = (ESP);
  /* 112c7e03 mov eax, dword ptr [0x112ef720] */
  EAX = (r32((uint32_t)(0x112ef720)));
  /* 112c7e08 push eax */
  push32((uint32_t)(EAX));
  /* 112c7e09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c7e0c push ecx */
  push32((uint32_t)(ECX));
  /* 112c7e0d call 0x112c7e20 */
  push32(0x112c7e12u); f_112c7e20();
  /* 112c7e12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7e15 pop ebp */
  EBP = (pop32());
  /* 112c7e16 ret  */
  ESPCHK(0x112c7e00u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x112c7e20 (87 bytes, 34 insns) */
void f_112c7e20(void) {
  FTRACE(0x112c7e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c7e20 push ebp */
  push32((uint32_t)(EBP));
  /* 112c7e21 mov ebp, esp */
  EBP = (ESP);
  /* 112c7e23 push ecx */
  push32((uint32_t)(ECX));
  /* 112c7e24 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7e28 jbe 0x112c7e2e */
  if ((C.cf||C.zf)) goto L_112c7e2e;
  /* 112c7e2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c7e2c jmp 0x112c7e73 */
  goto L_112c7e73;
L_112c7e2e:;
  /* 112c7e2e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7e32 ja 0x112c7e45 */
  if ((!C.cf&&!C.zf)) goto L_112c7e45;
  /* 112c7e34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c7e37 push eax */
  push32((uint32_t)(EAX));
  /* 112c7e38 call 0x112c7e80 */
  push32(0x112c7e3du); f_112c7e80();
  /* 112c7e3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7e40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c7e43 jmp 0x112c7e4c */
  goto L_112c7e4c;
L_112c7e45:;
  /* 112c7e45 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_112c7e4c:;
  /* 112c7e4c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7e50 jne 0x112c7e58 */
  if (!C.zf) goto L_112c7e58;
  /* 112c7e52 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7e56 jne 0x112c7e5d */
  if (!C.zf) goto L_112c7e5d;
L_112c7e58:;
  /* 112c7e58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c7e5b jmp 0x112c7e73 */
  goto L_112c7e73;
L_112c7e5d:;
  /* 112c7e5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c7e60 push ecx */
  push32((uint32_t)(ECX));
  /* 112c7e61 call 0x112c7d70 */
  push32(0x112c7e66u); f_112c7d70();
  /* 112c7e66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7e69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c7e6b jne 0x112c7e71 */
  if (!C.zf) goto L_112c7e71;
  /* 112c7e6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c7e6f jmp 0x112c7e73 */
  goto L_112c7e73;
L_112c7e71:;
  /* 112c7e71 jmp 0x112c7e2e */
  goto L_112c7e2e;
L_112c7e73:;
  /* 112c7e73 mov esp, ebp */
  ESP = (EBP);
  /* 112c7e75 pop ebp */
  EBP = (pop32());
  /* 112c7e76 ret  */
  ESPCHK(0x112c7e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e80 @ 0x112c7e80 (109 bytes, 37 insns) */
void f_112c7e80(void) {
  FTRACE(0x112c7e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c7e80 push ebp */
  push32((uint32_t)(EBP));
  /* 112c7e81 mov ebp, esp */
  EBP = (ESP);
  /* 112c7e83 push ecx */
  push32((uint32_t)(ECX));
  /* 112c7e84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c7e87 cmp eax, dword ptr [0x112edc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112edc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7e8d ja 0x112c7ebd */
  if ((!C.cf&&!C.zf)) goto L_112c7ebd;
  /* 112c7e8f push 9 */
  push32((uint32_t)(0x9u));
  /* 112c7e91 call 0x112c7a30 */
  push32(0x112c7e96u); f_112c7a30();
  /* 112c7e96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7e99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c7e9c push ecx */
  push32((uint32_t)(ECX));
  /* 112c7e9d call 0x112c89c0 */
  push32(0x112c7ea2u); f_112c89c0();
  /* 112c7ea2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7ea5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c7ea8 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c7eaa call 0x112c7ad0 */
  push32(0x112c7eafu); f_112c7ad0();
  /* 112c7eaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7eb2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7eb6 je 0x112c7ebd */
  if (C.zf) goto L_112c7ebd;
  /* 112c7eb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c7ebb jmp 0x112c7ee9 */
  goto L_112c7ee9;
L_112c7ebd:;
  /* 112c7ebd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7ec1 jne 0x112c7eca */
  if (!C.zf) goto L_112c7eca;
  /* 112c7ec3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_112c7eca:;
  /* 112c7eca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c7ecd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7ed0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 112c7ed3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 112c7ed6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c7ed9 push eax */
  push32((uint32_t)(EAX));
  /* 112c7eda push 0 */
  push32((uint32_t)(0x0u));
  /* 112c7edc mov ecx, dword ptr [0x112f0eec] */
  ECX = (r32((uint32_t)(0x112f0eec)));
  /* 112c7ee2 push ecx */
  push32((uint32_t)(ECX));
  /* 112c7ee3 call dword ptr [0x112f2320] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2320))), 0x112c7ee9u);
L_112c7ee9:;
  /* 112c7ee9 mov esp, ebp */
  ESP = (EBP);
  /* 112c7eeb pop ebp */
  EBP = (pop32());
  /* 112c7eec ret  */
  ESPCHK(0x112c7e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ef0 @ 0x112c7ef0 (10 bytes, 5 insns) */
void f_112c7ef0(void) {
  FTRACE(0x112c7ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c7ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c7ef1 mov ebp, esp */
  EBP = (ESP);
  /* 112c7ef3 mov eax, 1 */
  EAX = (0x1u);
  /* 112c7ef8 pop ebp */
  EBP = (pop32());
  /* 112c7ef9 ret  */
  ESPCHK(0x112c7ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f00 @ 0x112c7f00 (173 bytes, 59 insns) */
void f_112c7f00(void) {
  FTRACE(0x112c7f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c7f00 push ebp */
  push32((uint32_t)(EBP));
  /* 112c7f01 mov ebp, esp */
  EBP = (ESP);
  /* 112c7f03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c7f06 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7f0a jbe 0x112c7f13 */
  if ((C.cf||C.zf)) goto L_112c7f13;
  /* 112c7f0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c7f0e jmp 0x112c7fa9 */
  goto L_112c7fa9;
L_112c7f13:;
  /* 112c7f13 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c7f15 call 0x112c7a30 */
  push32(0x112c7f1au); f_112c7a30();
  /* 112c7f1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7f1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c7f20 push eax */
  push32((uint32_t)(EAX));
  /* 112c7f21 call 0x112c8330 */
  push32(0x112c7f26u); f_112c8330();
  /* 112c7f26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7f29 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112c7f2c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7f30 je 0x112c7f71 */
  if (C.zf) goto L_112c7f71;
  /* 112c7f32 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 112c7f39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c7f3c cmp ecx, dword ptr [0x112edc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x112edc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7f42 ja 0x112c7f62 */
  if ((!C.cf&&!C.zf)) goto L_112c7f62;
  /* 112c7f44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c7f47 push edx */
  push32((uint32_t)(EDX));
  /* 112c7f48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c7f4b push eax */
  push32((uint32_t)(EAX));
  /* 112c7f4c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c7f4f push ecx */
  push32((uint32_t)(ECX));
  /* 112c7f50 call 0x112c9200 */
  push32(0x112c7f55u); f_112c9200();
  /* 112c7f55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7f58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c7f5a je 0x112c7f62 */
  if (C.zf) goto L_112c7f62;
  /* 112c7f5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c7f5f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_112c7f62:;
  /* 112c7f62 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c7f64 call 0x112c7ad0 */
  push32(0x112c7f69u); f_112c7ad0();
  /* 112c7f69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7f6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c7f6f jmp 0x112c7fa9 */
  goto L_112c7fa9;
L_112c7f71:;
  /* 112c7f71 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c7f73 call 0x112c7ad0 */
  push32(0x112c7f78u); f_112c7ad0();
  /* 112c7f78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7f7b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7f7f jne 0x112c7f88 */
  if (!C.zf) goto L_112c7f88;
  /* 112c7f81 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_112c7f88:;
  /* 112c7f88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c7f8b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7f8e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 112c7f90 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 112c7f93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c7f96 push ecx */
  push32((uint32_t)(ECX));
  /* 112c7f97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c7f9a push edx */
  push32((uint32_t)(EDX));
  /* 112c7f9b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 112c7f9d mov eax, dword ptr [0x112f0eec] */
  EAX = (r32((uint32_t)(0x112f0eec)));
  /* 112c7fa2 push eax */
  push32((uint32_t)(EAX));
  /* 112c7fa3 call dword ptr [0x112f2328] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2328))), 0x112c7fa9u);
L_112c7fa9:;
  /* 112c7fa9 mov esp, ebp */
  ESP = (EBP);
  /* 112c7fab pop ebp */
  EBP = (pop32());
  /* 112c7fac ret  */
  ESPCHK(0x112c7f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fb0 @ 0x112c7fb0 (490 bytes, 165 insns) */
void f_112c7fb0(void) {
  FTRACE(0x112c7fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c7fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c7fb1 mov ebp, esp */
  EBP = (ESP);
  /* 112c7fb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c7fb6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7fba jne 0x112c7fcd */
  if (!C.zf) goto L_112c7fcd;
  /* 112c7fbc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c7fbf push eax */
  push32((uint32_t)(EAX));
  /* 112c7fc0 call 0x112c7e00 */
  push32(0x112c7fc5u); f_112c7e00();
  /* 112c7fc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7fc8 jmp 0x112c8196 */
  goto L_112c8196;
L_112c7fcd:;
  /* 112c7fcd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7fd1 jne 0x112c7fe6 */
  if (!C.zf) goto L_112c7fe6;
  /* 112c7fd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c7fd6 push ecx */
  push32((uint32_t)(ECX));
  /* 112c7fd7 call 0x112c81a0 */
  push32(0x112c7fdcu); f_112c81a0();
  /* 112c7fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c7fdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c7fe1 jmp 0x112c8196 */
  goto L_112c8196;
L_112c7fe6:;
  /* 112c7fe6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112c7fed cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c7ff1 ja 0x112c8169 */
  if ((!C.cf&&!C.zf)) goto L_112c8169;
  /* 112c7ff7 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c7ff9 call 0x112c7a30 */
  push32(0x112c7ffeu); f_112c7a30();
  /* 112c7ffe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8001 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c8004 push edx */
  push32((uint32_t)(EDX));
  /* 112c8005 call 0x112c8330 */
  push32(0x112c800au); f_112c8330();
  /* 112c800a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c800d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 112c8010 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8014 je 0x112c812c */
  if (C.zf) goto L_112c812c;
  /* 112c801a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c801d cmp eax, dword ptr [0x112edc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112edc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8023 ja 0x112c80a0 */
  if ((!C.cf&&!C.zf)) goto L_112c80a0;
  /* 112c8025 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c8028 push ecx */
  push32((uint32_t)(ECX));
  /* 112c8029 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c802c push edx */
  push32((uint32_t)(EDX));
  /* 112c802d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c8030 push eax */
  push32((uint32_t)(EAX));
  /* 112c8031 call 0x112c9200 */
  push32(0x112c8036u); f_112c9200();
  /* 112c8036 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8039 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c803b je 0x112c8045 */
  if (C.zf) goto L_112c8045;
  /* 112c803d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c8040 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112c8043 jmp 0x112c80a0 */
  goto L_112c80a0;
L_112c8045:;
  /* 112c8045 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c8048 push edx */
  push32((uint32_t)(EDX));
  /* 112c8049 call 0x112c89c0 */
  push32(0x112c804eu); f_112c89c0();
  /* 112c804e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8051 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112c8054 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8058 je 0x112c80a0 */
  if (C.zf) goto L_112c80a0;
  /* 112c805a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c805d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 112c8060 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c8063 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112c8066 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8069 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c806c jae 0x112c8076 */
  if (!C.cf) goto L_112c8076;
  /* 112c806e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8071 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 112c8074 jmp 0x112c807c */
  goto L_112c807c;
L_112c8076:;
  /* 112c8076 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c8079 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_112c807c:;
  /* 112c807c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 112c807f push edx */
  push32((uint32_t)(EDX));
  /* 112c8080 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c8083 push eax */
  push32((uint32_t)(EAX));
  /* 112c8084 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c8087 push ecx */
  push32((uint32_t)(ECX));
  /* 112c8088 call 0x112ca910 */
  push32(0x112c808du); f_112ca910();
  /* 112c808d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8090 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c8093 push edx */
  push32((uint32_t)(EDX));
  /* 112c8094 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c8097 push eax */
  push32((uint32_t)(EAX));
  /* 112c8098 call 0x112c83f0 */
  push32(0x112c809du); f_112c83f0();
  /* 112c809d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c80a0:;
  /* 112c80a0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c80a4 jne 0x112c8120 */
  if (!C.zf) goto L_112c8120;
  /* 112c80a6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c80aa jne 0x112c80b3 */
  if (!C.zf) goto L_112c80b3;
  /* 112c80ac mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_112c80b3:;
  /* 112c80b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c80b6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c80b9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 112c80bc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 112c80bf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c80c2 push edx */
  push32((uint32_t)(EDX));
  /* 112c80c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c80c5 mov eax, dword ptr [0x112f0eec] */
  EAX = (r32((uint32_t)(0x112f0eec)));
  /* 112c80ca push eax */
  push32((uint32_t)(EAX));
  /* 112c80cb call dword ptr [0x112f2320] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2320))), 0x112c80d1u);
  /* 112c80d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112c80d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c80d8 je 0x112c8120 */
  if (C.zf) goto L_112c8120;
  /* 112c80da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c80dd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 112c80e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112c80e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112c80e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c80e9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c80ec jae 0x112c80f6 */
  if (!C.cf) goto L_112c80f6;
  /* 112c80ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c80f1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 112c80f4 jmp 0x112c80fc */
  goto L_112c80fc;
L_112c80f6:;
  /* 112c80f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c80f9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_112c80fc:;
  /* 112c80fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112c80ff push eax */
  push32((uint32_t)(EAX));
  /* 112c8100 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c8103 push ecx */
  push32((uint32_t)(ECX));
  /* 112c8104 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c8107 push edx */
  push32((uint32_t)(EDX));
  /* 112c8108 call 0x112ca910 */
  push32(0x112c810du); f_112ca910();
  /* 112c810d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8110 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c8113 push eax */
  push32((uint32_t)(EAX));
  /* 112c8114 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112c8117 push ecx */
  push32((uint32_t)(ECX));
  /* 112c8118 call 0x112c83f0 */
  push32(0x112c811du); f_112c83f0();
  /* 112c811d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112c8120:;
  /* 112c8120 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c8122 call 0x112c7ad0 */
  push32(0x112c8127u); f_112c7ad0();
  /* 112c8127 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c812a jmp 0x112c8169 */
  goto L_112c8169;
L_112c812c:;
  /* 112c812c push 9 */
  push32((uint32_t)(0x9u));
  /* 112c812e call 0x112c7ad0 */
  push32(0x112c8133u); f_112c7ad0();
  /* 112c8133 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8136 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c813a jne 0x112c8143 */
  if (!C.zf) goto L_112c8143;
  /* 112c813c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_112c8143:;
  /* 112c8143 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c8146 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8149 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 112c814c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 112c814f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c8152 push eax */
  push32((uint32_t)(EAX));
  /* 112c8153 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c8156 push ecx */
  push32((uint32_t)(ECX));
  /* 112c8157 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c8159 mov edx, dword ptr [0x112f0eec] */
  EDX = (r32((uint32_t)(0x112f0eec)));
  /* 112c815f push edx */
  push32((uint32_t)(EDX));
  /* 112c8160 call dword ptr [0x112f2328] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f2328))), 0x112c8166u);
  /* 112c8166 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112c8169:;
  /* 112c8169 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c816d jne 0x112c8178 */
  if (!C.zf) goto L_112c8178;
  /* 112c816f cmp dword ptr [0x112ef720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112ef720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c8176 jne 0x112c817d */
  if (!C.zf) goto L_112c817d;
L_112c8178:;
  /* 112c8178 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112c817b jmp 0x112c8196 */
  goto L_112c8196;
L_112c817d:;
  /* 112c817d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112c8180 push eax */
  push32((uint32_t)(EAX));
  /* 112c8181 call 0x112c7d70 */
  push32(0x112c8186u); f_112c7d70();
  /* 112c8186 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8189 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c818b jne 0x112c8191 */
  if (!C.zf) goto L_112c8191;
  /* 112c818d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112c818f jmp 0x112c8196 */
  goto L_112c8196;
L_112c8191:;
  /* 112c8191 jmp 0x112c7fe6 */
  goto L_112c7fe6;
L_112c8196:;
  /* 112c8196 mov esp, ebp */
  ESP = (EBP);
  /* 112c8198 pop ebp */
  EBP = (pop32());
  /* 112c8199 ret  */
  ESPCHK(0x112c7fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100081a0 @ 0x112c81a0 (104 bytes, 38 insns) */
void f_112c81a0(void) {
  FTRACE(0x112c81a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c81a0 push ebp */
  push32((uint32_t)(EBP));
  /* 112c81a1 mov ebp, esp */
  EBP = (ESP);
  /* 112c81a3 push ecx */
  push32((uint32_t)(ECX));
  /* 112c81a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c81a8 jne 0x112c81ac */
  if (!C.zf) goto L_112c81ac;
  /* 112c81aa jmp 0x112c8204 */
  goto L_112c8204;
L_112c81ac:;
  /* 112c81ac push 9 */
  push32((uint32_t)(0x9u));
  /* 112c81ae call 0x112c7a30 */
  push32(0x112c81b3u); f_112c7a30();
  /* 112c81b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c81b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c81b9 push eax */
  push32((uint32_t)(EAX));
  /* 112c81ba call 0x112c8330 */
  push32(0x112c81bfu); f_112c8330();
  /* 112c81bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c81c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112c81c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c81c9 je 0x112c81e7 */
  if (C.zf) goto L_112c81e7;
  /* 112c81cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c81ce push ecx */
  push32((uint32_t)(ECX));
  /* 112c81cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c81d2 push edx */
  push32((uint32_t)(EDX));
  /* 112c81d3 call 0x112c83f0 */
  push32(0x112c81d8u); f_112c83f0();
  /* 112c81d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c81db push 9 */
  push32((uint32_t)(0x9u));
  /* 112c81dd call 0x112c7ad0 */
  push32(0x112c81e2u); f_112c7ad0();
  /* 112c81e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c81e5 jmp 0x112c8204 */
  goto L_112c8204;
L_112c81e7:;
  /* 112c81e7 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c81e9 call 0x112c7ad0 */
  push32(0x112c81eeu); f_112c7ad0();
  /* 112c81ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c81f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112c81f4 push eax */
  push32((uint32_t)(EAX));
  /* 112c81f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c81f7 mov ecx, dword ptr [0x112f0eec] */
  ECX = (r32((uint32_t)(0x112f0eec)));
  /* 112c81fd push ecx */
  push32((uint32_t)(ECX));
  /* 112c81fe call dword ptr [0x112f234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f234c))), 0x112c8204u);
L_112c8204:;
  /* 112c8204 mov esp, ebp */
  ESP = (EBP);
  /* 112c8206 pop ebp */
  EBP = (pop32());
  /* 112c8207 ret  */
  ESPCHK(0x112c81a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008210 @ 0x112c8210 (116 bytes, 34 insns) */
void f_112c8210(void) {
  FTRACE(0x112c8210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c8210 push ebp */
  push32((uint32_t)(EBP));
  /* 112c8211 mov ebp, esp */
  EBP = (ESP);
  /* 112c8213 push ecx */
  push32((uint32_t)(ECX));
  /* 112c8214 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 112c821b push 9 */
  push32((uint32_t)(0x9u));
  /* 112c821d call 0x112c7a30 */
  push32(0x112c8222u); f_112c7a30();
  /* 112c8222 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c8225 call 0x112c9920 */
  push32(0x112c822au); f_112c9920();
  /* 112c822a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c822c jge 0x112c8235 */
  if ((C.sf==C.of)) goto L_112c8235;
  /* 112c822e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_112c8235:;
  /* 112c8235 push 9 */
  push32((uint32_t)(0x9u));
  /* 112c8237 call 0x112c7ad0 */
  push32(0x112c823cu); f_112c7ad0();
  /* 112c823c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112c823f push 0 */
  push32((uint32_t)(0x0u));
  /* 112c8241 push 0 */
  push32((uint32_t)(0x0u));
  /* 112c8243 mov eax, dword ptr [0x112f0eec] */
  EAX = (r32((uint32_t)(0x112f0eec)));
  /* 112c8248 push eax */
  push32((uint32_t)(EAX));
  /* 112c8249 call dword ptr [0x112f23c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23c4))), 0x112c824fu);
  /* 112c824f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112c8251 jne 0x112c827d */
  if (!C.zf) goto L_112c827d;
  /* 112c8253 call dword ptr [0x112f23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112f23a4))), 0x112c8259u);
  /* 112c8259 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112c825c jne 0x112c8276 */
  if (!C.zf) goto L_112c8276;
  /* 112c825e call 0x112cbf10 */
  push32(0x112c8263u); f_112cbf10();
  /* 112c8263 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 112c8269 call 0x112cbf00 */
  push32(0x112c826eu); f_112cbf00();
  /* 112c826e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 112c8274 jmp 0x112c827d */
  goto L_112c827d;
L_112c8276:;
  /* 112c8276 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_112c827d:;
  /* 112c827d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112c8280 mov esp, ebp */
  ESP = (EBP);
  /* 112c8282 pop ebp */
  EBP = (pop32());
  /* 112c8283 ret  */
  ESPCHK(0x112c8210u, _esp0);
  ESP += 4; return;
}

/* FUN_10008290 @ 0x112c8290 (10 bytes, 5 insns) */
void f_112c8290(void) {
  FTRACE(0x112c8290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112c8290 push ebp */
  push32((uint32_t)(EBP));
  /* 112c8291 mov ebp, esp */
  EBP = (ESP);
  /* 112c8293 call 0x112c8210 */
  push32(0x112c8298u); f_112c8210();
  /* 112c8298 pop ebp */
  EBP = (pop32());
  /* 112c8299 ret  */
  ESPCHK(0x112c8290u, _esp0);
  ESP += 4; return;
}

