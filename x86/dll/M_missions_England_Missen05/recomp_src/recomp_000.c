#include "recomp.h"

/* thunk_FUN_100014f0 @ 0x104a1005 (5 bytes, 1 insns) */
void f_104a1005(void) {
  FTRACE(0x104a1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a1005 jmp 0x104a14f0 */
  f_104a14f0(); return;
}

/* OnInit @ 0x104a100a (5 bytes, 1 insns) */
void f_104a100a(void) {
  FTRACE(0x104a100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a100a jmp 0x104a1090 */
  f_104a1090(); return;
}

/* thunk_FUN_10001030 @ 0x104a100f (5 bytes, 1 insns) */
void f_104a100f(void) {
  FTRACE(0x104a100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a100f jmp 0x104a1030 */
  f_104a1030(); return;
}

/* ProcessScenary @ 0x104a1014 (5 bytes, 1 insns) */
void f_104a1014(void) {
  FTRACE(0x104a1014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a1014 jmp 0x104a1150 */
  f_104a1150(); return;
}

/* FUN_10001030 @ 0x104a1030 (67 bytes, 26 insns) */
void f_104a1030(void) {
  FTRACE(0x104a1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a1030 push ebp */
  push32((uint32_t)(EBP));
  /* 104a1031 mov ebp, esp */
  EBP = (ESP);
  /* 104a1033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a1036 push ebx */
  push32((uint32_t)(EBX));
  /* 104a1037 push esi */
  push32((uint32_t)(ESI));
  /* 104a1038 push edi */
  push32((uint32_t)(EDI));
  /* 104a1039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 104a103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 104a1041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 104a1046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 104a1048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1052 je 0x104a1056 */
  if (C.zf) goto L_104a1056;
  /* 104a1054 jmp 0x104a105b */
  goto L_104a105b;
L_104a1056:;
  /* 104a1056 call 0x104a100a */
  push32(0x104a105bu); f_104a100a();
L_104a105b:;
  /* 104a105b mov eax, 1 */
  EAX = (0x1u);
  /* 104a1060 pop edi */
  EDI = (pop32());
  /* 104a1061 pop esi */
  ESI = (pop32());
  /* 104a1062 pop ebx */
  EBX = (pop32());
  /* 104a1063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1068 call 0x104a1580 */
  push32(0x104a106du); f_104a1580();
  /* 104a106d mov esp, ebp */
  ESP = (EBP);
  /* 104a106f pop ebp */
  EBP = (pop32());
  /* 104a1070 ret 0xc */
  ESPCHK(0x104a1030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x104a1090 (150 bytes, 47 insns) */
void f_104a1090(void) {
  FTRACE(0x104a1090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a1090 push ebp */
  push32((uint32_t)(EBP));
  /* 104a1091 mov ebp, esp */
  EBP = (ESP);
  /* 104a1093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a1096 push ebx */
  push32((uint32_t)(EBX));
  /* 104a1097 push esi */
  push32((uint32_t)(ESI));
  /* 104a1098 push edi */
  push32((uint32_t)(EDI));
  /* 104a1099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 104a109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 104a10a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 104a10a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 104a10a8 mov esi, esp */
  ESI = (ESP);
  /* 104a10aa push 0x104c9034 */
  push32((uint32_t)(0x104c9034u));
  /* 104a10af push 0x104ce3e0 */
  push32((uint32_t)(0x104ce3e0u));
  /* 104a10b4 call dword ptr [0x104d03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03cc))), 0x104a10bau);
  /* 104a10ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a10bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a10bf call 0x104a1580 */
  push32(0x104a10c4u); f_104a1580();
  /* 104a10c4 mov esi, esp */
  ESI = (ESP);
  /* 104a10c6 push 0x104c902c */
  push32((uint32_t)(0x104c902cu));
  /* 104a10cb push 0x104ce3f0 */
  push32((uint32_t)(0x104ce3f0u));
  /* 104a10d0 call dword ptr [0x104d03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03cc))), 0x104a10d6u);
  /* 104a10d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a10d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a10db call 0x104a1580 */
  push32(0x104a10e0u); f_104a1580();
  /* 104a10e0 mov esi, esp */
  ESI = (ESP);
  /* 104a10e2 push 0x104c9024 */
  push32((uint32_t)(0x104c9024u));
  /* 104a10e7 push 0x104ce3e8 */
  push32((uint32_t)(0x104ce3e8u));
  /* 104a10ec call dword ptr [0x104d03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03cc))), 0x104a10f2u);
  /* 104a10f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a10f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a10f7 call 0x104a1580 */
  push32(0x104a10fcu); f_104a1580();
  /* 104a10fc mov esi, esp */
  ESI = (ESP);
  /* 104a10fe push 0x104c901c */
  push32((uint32_t)(0x104c901cu));
  /* 104a1103 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a1105 call dword ptr [0x104d03c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03c4))), 0x104a110bu);
  /* 104a110b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a110e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1110 call 0x104a1580 */
  push32(0x104a1115u); f_104a1580();
  /* 104a1115 pop edi */
  EDI = (pop32());
  /* 104a1116 pop esi */
  ESI = (pop32());
  /* 104a1117 pop ebx */
  EBX = (pop32());
  /* 104a1118 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a111b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a111d call 0x104a1580 */
  push32(0x104a1122u); f_104a1580();
  /* 104a1122 mov esp, ebp */
  ESP = (EBP);
  /* 104a1124 pop ebp */
  EBP = (pop32());
  /* 104a1125 ret  */
  ESPCHK(0x104a1090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001150 @ 0x104a1150 (743 bytes, 229 insns) */
void f_104a1150(void) {
  FTRACE(0x104a1150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a1150 push ebp */
  push32((uint32_t)(EBP));
  /* 104a1151 mov ebp, esp */
  EBP = (ESP);
  /* 104a1153 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a1156 push ebx */
  push32((uint32_t)(EBX));
  /* 104a1157 push esi */
  push32((uint32_t)(ESI));
  /* 104a1158 push edi */
  push32((uint32_t)(EDI));
  /* 104a1159 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 104a115c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 104a1161 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 104a1166 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 104a1168 mov esi, esp */
  ESI = (ESP);
  /* 104a116a push 1 */
  push32((uint32_t)(0x1u));
  /* 104a116c call dword ptr [0x104d03a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03a4))), 0x104a1172u);
  /* 104a1172 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1177 call 0x104a1580 */
  push32(0x104a117cu); f_104a1580();
  /* 104a117c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a1181 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a1183 je 0x104a1341 */
  if (C.zf) goto L_104a1341;
  /* 104a1189 mov esi, esp */
  ESI = (ESP);
  /* 104a118b push 0 */
  push32((uint32_t)(0x0u));
  /* 104a118d push 1 */
  push32((uint32_t)(0x1u));
  /* 104a118f call dword ptr [0x104d03b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03b0))), 0x104a1195u);
  /* 104a1195 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1198 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a119a call 0x104a1580 */
  push32(0x104a119fu); f_104a1580();
  /* 104a119f mov esi, esp */
  ESI = (ESP);
  /* 104a11a1 push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 104a11a6 push 3 */
  push32((uint32_t)(0x3u));
  /* 104a11a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a11aa call dword ptr [0x104d03b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03b4))), 0x104a11b0u);
  /* 104a11b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a11b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a11b5 call 0x104a1580 */
  push32(0x104a11bau); f_104a1580();
  /* 104a11ba mov esi, esp */
  ESI = (ESP);
  /* 104a11bc push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 104a11c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a11c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a11c5 call dword ptr [0x104d03b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03b4))), 0x104a11cbu);
  /* 104a11cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a11ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a11d0 call 0x104a1580 */
  push32(0x104a11d5u); f_104a1580();
  /* 104a11d5 mov esi, esp */
  ESI = (ESP);
  /* 104a11d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a11d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a11db push 0 */
  push32((uint32_t)(0x0u));
  /* 104a11dd call dword ptr [0x104d03b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03b4))), 0x104a11e3u);
  /* 104a11e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a11e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a11e8 call 0x104a1580 */
  push32(0x104a11edu); f_104a1580();
  /* 104a11ed mov esi, esp */
  ESI = (ESP);
  /* 104a11ef push 0 */
  push32((uint32_t)(0x0u));
  /* 104a11f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a11f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a11f5 call dword ptr [0x104d03b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03b4))), 0x104a11fbu);
  /* 104a11fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a11fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1200 call 0x104a1580 */
  push32(0x104a1205u); f_104a1580();
  /* 104a1205 mov esi, esp */
  ESI = (ESP);
  /* 104a1207 push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 104a120c push 5 */
  push32((uint32_t)(0x5u));
  /* 104a120e push 0 */
  push32((uint32_t)(0x0u));
  /* 104a1210 call dword ptr [0x104d03b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03b4))), 0x104a1216u);
  /* 104a1216 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1219 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a121b call 0x104a1580 */
  push32(0x104a1220u); f_104a1580();
  /* 104a1220 mov esi, esp */
  ESI = (ESP);
  /* 104a1222 push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 104a1227 push 4 */
  push32((uint32_t)(0x4u));
  /* 104a1229 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a122b call dword ptr [0x104d03b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03b4))), 0x104a1231u);
  /* 104a1231 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1234 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1236 call 0x104a1580 */
  push32(0x104a123bu); f_104a1580();
  /* 104a123b mov esi, esp */
  ESI = (ESP);
  /* 104a123d push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 104a1242 push 3 */
  push32((uint32_t)(0x3u));
  /* 104a1244 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a1246 call dword ptr [0x104d03b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03b4))), 0x104a124cu);
  /* 104a124c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a124f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1251 call 0x104a1580 */
  push32(0x104a1256u); f_104a1580();
  /* 104a1256 mov esi, esp */
  ESI = (ESP);
  /* 104a1258 push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 104a125d push 1 */
  push32((uint32_t)(0x1u));
  /* 104a125f push 1 */
  push32((uint32_t)(0x1u));
  /* 104a1261 call dword ptr [0x104d03b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03b4))), 0x104a1267u);
  /* 104a1267 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a126a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a126c call 0x104a1580 */
  push32(0x104a1271u); f_104a1580();
  /* 104a1271 mov esi, esp */
  ESI = (ESP);
  /* 104a1273 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a1275 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a1277 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a1279 call dword ptr [0x104d03b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03b4))), 0x104a127fu);
  /* 104a127f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1282 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1284 call 0x104a1580 */
  push32(0x104a1289u); f_104a1580();
  /* 104a1289 mov esi, esp */
  ESI = (ESP);
  /* 104a128b push 0 */
  push32((uint32_t)(0x0u));
  /* 104a128d push 2 */
  push32((uint32_t)(0x2u));
  /* 104a128f push 1 */
  push32((uint32_t)(0x1u));
  /* 104a1291 call dword ptr [0x104d03b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03b4))), 0x104a1297u);
  /* 104a1297 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a129a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a129c call 0x104a1580 */
  push32(0x104a12a1u); f_104a1580();
  /* 104a12a1 mov esi, esp */
  ESI = (ESP);
  /* 104a12a3 push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 104a12a8 push 5 */
  push32((uint32_t)(0x5u));
  /* 104a12aa push 1 */
  push32((uint32_t)(0x1u));
  /* 104a12ac call dword ptr [0x104d03b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03b4))), 0x104a12b2u);
  /* 104a12b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a12b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a12b7 call 0x104a1580 */
  push32(0x104a12bcu); f_104a1580();
  /* 104a12bc mov esi, esp */
  ESI = (ESP);
  /* 104a12be push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 104a12c3 push 4 */
  push32((uint32_t)(0x4u));
  /* 104a12c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a12c7 call dword ptr [0x104d03b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03b4))), 0x104a12cdu);
  /* 104a12cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a12d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a12d2 call 0x104a1580 */
  push32(0x104a12d7u); f_104a1580();
  /* 104a12d7 mov esi, esp */
  ESI = (ESP);
  /* 104a12d9 push 0x104c9064 */
  push32((uint32_t)(0x104c9064u));
  /* 104a12de call dword ptr [0x104d03ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03ac))), 0x104a12e4u);
  /* 104a12e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a12e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a12e9 call 0x104a1580 */
  push32(0x104a12eeu); f_104a1580();
  /* 104a12ee mov esi, esp */
  ESI = (ESP);
  /* 104a12f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a12f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a12f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a12f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a12f8 push 0x104c9058 */
  push32((uint32_t)(0x104c9058u));
  /* 104a12fd push 1 */
  push32((uint32_t)(0x1u));
  /* 104a12ff call dword ptr [0x104d03bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03bc))), 0x104a1305u);
  /* 104a1305 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1308 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a130a call 0x104a1580 */
  push32(0x104a130fu); f_104a1580();
  /* 104a130f mov esi, esp */
  ESI = (ESP);
  /* 104a1311 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a1313 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 104a1318 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a131a call dword ptr [0x104d03c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03c0))), 0x104a1320u);
  /* 104a1320 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1323 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1325 call 0x104a1580 */
  push32(0x104a132au); f_104a1580();
  /* 104a132a mov esi, esp */
  ESI = (ESP);
  /* 104a132c push 0x104c904c */
  push32((uint32_t)(0x104c904cu));
  /* 104a1331 call dword ptr [0x104d03ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03ac))), 0x104a1337u);
  /* 104a1337 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a133a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a133c call 0x104a1580 */
  push32(0x104a1341u); f_104a1580();
L_104a1341:;
  /* 104a1341 mov esi, esp */
  ESI = (ESP);
  /* 104a1343 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a1345 call dword ptr [0x104d03a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03a4))), 0x104a134bu);
  /* 104a134b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a134e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1350 call 0x104a1580 */
  push32(0x104a1355u); f_104a1580();
  /* 104a1355 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a135a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a135c je 0x104a13ab */
  if (C.zf) goto L_104a13ab;
  /* 104a135e push 0x104ce3e8 */
  push32((uint32_t)(0x104ce3e8u));
  /* 104a1363 call 0x104a1005 */
  push32(0x104a1368u); f_104a1005();
  /* 104a1368 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a136b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a136d jne 0x104a13ab */
  if (!C.zf) goto L_104a13ab;
  /* 104a136f mov esi, esp */
  ESI = (ESP);
  /* 104a1371 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a1373 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a1375 call dword ptr [0x104d03b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03b0))), 0x104a137bu);
  /* 104a137b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a137e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1380 call 0x104a1580 */
  push32(0x104a1385u); f_104a1580();
  /* 104a1385 mov esi, esp */
  ESI = (ESP);
  /* 104a1387 push 0x104c9044 */
  push32((uint32_t)(0x104c9044u));
  /* 104a138c call dword ptr [0x104d03ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03ac))), 0x104a1392u);
  /* 104a1392 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1397 call 0x104a1580 */
  push32(0x104a139cu); f_104a1580();
  /* 104a139c mov esi, esp */
  ESI = (ESP);
  /* 104a139e call dword ptr [0x104d03b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03b8))), 0x104a13a4u);
  /* 104a13a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a13a6 call 0x104a1580 */
  push32(0x104a13abu); f_104a1580();
L_104a13ab:;
  /* 104a13ab mov esi, esp */
  ESI = (ESP);
  /* 104a13ad push 3 */
  push32((uint32_t)(0x3u));
  /* 104a13af call dword ptr [0x104d03a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03a4))), 0x104a13b5u);
  /* 104a13b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a13b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a13ba call 0x104a1580 */
  push32(0x104a13bfu); f_104a1580();
  /* 104a13bf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a13c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a13c6 je 0x104a1426 */
  if (C.zf) goto L_104a1426;
  /* 104a13c8 push 0x104ce3e0 */
  push32((uint32_t)(0x104ce3e0u));
  /* 104a13cd call 0x104a1005 */
  push32(0x104a13d2u); f_104a1005();
  /* 104a13d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a13d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a13d7 jne 0x104a1426 */
  if (!C.zf) goto L_104a1426;
  /* 104a13d9 push 0x104ce3f0 */
  push32((uint32_t)(0x104ce3f0u));
  /* 104a13de call 0x104a1005 */
  push32(0x104a13e3u); f_104a1005();
  /* 104a13e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a13e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a13e8 jne 0x104a1426 */
  if (!C.zf) goto L_104a1426;
  /* 104a13ea mov esi, esp */
  ESI = (ESP);
  /* 104a13ec push 0 */
  push32((uint32_t)(0x0u));
  /* 104a13ee push 3 */
  push32((uint32_t)(0x3u));
  /* 104a13f0 call dword ptr [0x104d03b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03b0))), 0x104a13f6u);
  /* 104a13f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a13f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a13fb call 0x104a1580 */
  push32(0x104a1400u); f_104a1580();
  /* 104a1400 mov esi, esp */
  ESI = (ESP);
  /* 104a1402 push 0x104c903c */
  push32((uint32_t)(0x104c903cu));
  /* 104a1407 call dword ptr [0x104d03ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03ac))), 0x104a140du);
  /* 104a140d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1410 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1412 call 0x104a1580 */
  push32(0x104a1417u); f_104a1580();
  /* 104a1417 mov esi, esp */
  ESI = (ESP);
  /* 104a1419 call dword ptr [0x104d03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03c8))), 0x104a141fu);
  /* 104a141f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1421 call 0x104a1580 */
  push32(0x104a1426u); f_104a1580();
L_104a1426:;
  /* 104a1426 pop edi */
  EDI = (pop32());
  /* 104a1427 pop esi */
  ESI = (pop32());
  /* 104a1428 pop ebx */
  EBX = (pop32());
  /* 104a1429 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a142c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a142e call 0x104a1580 */
  push32(0x104a1433u); f_104a1580();
  /* 104a1433 mov esp, ebp */
  ESP = (EBP);
  /* 104a1435 pop ebp */
  EBP = (pop32());
  /* 104a1436 ret  */
  ESPCHK(0x104a1150u, _esp0);
  ESP += 4; return;
}

/* FUN_100014f0 @ 0x104a14f0 (63 bytes, 26 insns) */
void f_104a14f0(void) {
  FTRACE(0x104a14f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a14f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a14f1 mov ebp, esp */
  EBP = (ESP);
  /* 104a14f3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a14f6 push ebx */
  push32((uint32_t)(EBX));
  /* 104a14f7 push esi */
  push32((uint32_t)(ESI));
  /* 104a14f8 push edi */
  push32((uint32_t)(EDI));
  /* 104a14f9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 104a14fc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 104a1501 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 104a1506 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 104a1508 mov esi, esp */
  ESI = (ESP);
  /* 104a150a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a150d push eax */
  push32((uint32_t)(EAX));
  /* 104a150e call dword ptr [0x104d03a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d03a8))), 0x104a1514u);
  /* 104a1514 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1517 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1519 call 0x104a1580 */
  push32(0x104a151eu); f_104a1580();
  /* 104a151e pop edi */
  EDI = (pop32());
  /* 104a151f pop esi */
  ESI = (pop32());
  /* 104a1520 pop ebx */
  EBX = (pop32());
  /* 104a1521 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1524 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1526 call 0x104a1580 */
  push32(0x104a152bu); f_104a1580();
  /* 104a152b mov esp, ebp */
  ESP = (EBP);
  /* 104a152d pop ebp */
  EBP = (pop32());
  /* 104a152e ret  */
  ESPCHK(0x104a14f0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x104a1580 (56 bytes, 28 insns) */
void f_104a1580(void) {
  FTRACE(0x104a1580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a1580 jne 0x104a1583 */
  if (!C.zf) goto L_104a1583;
  /* 104a1582 ret  */
  ESPCHK(0x104a1580u, _esp0);
  ESP += 4; return;
L_104a1583:;
  /* 104a1583 push ebp */
  push32((uint32_t)(EBP));
  /* 104a1584 mov ebp, esp */
  EBP = (ESP);
  /* 104a1586 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a1589 push eax */
  push32((uint32_t)(EAX));
  /* 104a158a push edx */
  push32((uint32_t)(EDX));
  /* 104a158b push ebx */
  push32((uint32_t)(EBX));
  /* 104a158c push esi */
  push32((uint32_t)(ESI));
  /* 104a158d push edi */
  push32((uint32_t)(EDI));
  /* 104a158e push 0x104c9080 */
  push32((uint32_t)(0x104c9080u));
  /* 104a1593 push 0x104c907c */
  push32((uint32_t)(0x104c907cu));
  /* 104a1598 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 104a159a push 0x104c906c */
  push32((uint32_t)(0x104c906cu));
  /* 104a159f push 1 */
  push32((uint32_t)(0x1u));
  /* 104a15a1 call 0x104a1950 */
  push32(0x104a15a6u); f_104a1950();
  /* 104a15a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a15a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a15ac jne 0x104a15af */
  if (!C.zf) goto L_104a15af;
  /* 104a15ae int3  */
  x86_unimpl("int3 @ 0x104a15ae");
L_104a15af:;
  /* 104a15af pop edi */
  EDI = (pop32());
  /* 104a15b0 pop esi */
  ESI = (pop32());
  /* 104a15b1 pop ebx */
  EBX = (pop32());
  /* 104a15b2 pop edx */
  EDX = (pop32());
  /* 104a15b3 pop eax */
  EAX = (pop32());
  /* 104a15b4 mov esp, ebp */
  ESP = (EBP);
  /* 104a15b6 pop ebp */
  EBP = (pop32());
  /* 104a15b7 ret  */
  ESPCHK(0x104a1580u, _esp0);
  ESP += 4; return;
}

/* FUN_100015c0 @ 0x104a15c0 (313 bytes, 78 insns) */
void f_104a15c0(void) {
  FTRACE(0x104a15c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a15c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a15c1 mov ebp, esp */
  EBP = (ESP);
  /* 104a15c3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a15c7 jne 0x104a1687 */
  if (!C.zf) goto L_104a1687;
  /* 104a15cd call dword ptr [0x104d0250] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0250))), 0x104a15d3u);
  /* 104a15d3 mov dword ptr [0x104ce420], eax */
  w32((uint32_t)(0x104ce420), (EAX));
  /* 104a15d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a15da call 0x104a5080 */
  push32(0x104a15dfu); f_104a5080();
  /* 104a15df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a15e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a15e4 jne 0x104a15ed */
  if (!C.zf) goto L_104a15ed;
  /* 104a15e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a15e8 jmp 0x104a16f5 */
  goto L_104a16f5;
L_104a15ed:;
  /* 104a15ed mov eax, dword ptr [0x104ce420] */
  EAX = (r32((uint32_t)(0x104ce420)));
  /* 104a15f2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 104a15f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a15fa mov dword ptr [0x104ce42c], eax */
  w32((uint32_t)(0x104ce42c), (EAX));
  /* 104a15ff mov ecx, dword ptr [0x104ce420] */
  ECX = (r32((uint32_t)(0x104ce420)));
  /* 104a1605 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104a160b mov dword ptr [0x104ce428], ecx */
  w32((uint32_t)(0x104ce428), (ECX));
  /* 104a1611 mov edx, dword ptr [0x104ce428] */
  EDX = (r32((uint32_t)(0x104ce428)));
  /* 104a1617 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 104a161a add edx, dword ptr [0x104ce42c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x104ce42c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1620 mov dword ptr [0x104ce424], edx */
  w32((uint32_t)(0x104ce424), (EDX));
  /* 104a1626 mov eax, dword ptr [0x104ce420] */
  EAX = (r32((uint32_t)(0x104ce420)));
  /* 104a162b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 104a162e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a1633 mov dword ptr [0x104ce420], eax */
  w32((uint32_t)(0x104ce420), (EAX));
  /* 104a1638 call 0x104a21f0 */
  push32(0x104a163du); f_104a21f0();
  /* 104a163d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a163f jne 0x104a164d */
  if (!C.zf) goto L_104a164d;
  /* 104a1641 call 0x104a50d0 */
  push32(0x104a1646u); f_104a50d0();
  /* 104a1646 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a1648 jmp 0x104a16f5 */
  goto L_104a16f5;
L_104a164d:;
  /* 104a164d call dword ptr [0x104d024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d024c))), 0x104a1653u);
  /* 104a1653 mov dword ptr [0x104cff6c], eax */
  w32((uint32_t)(0x104cff6c), (EAX));
  /* 104a1658 call 0x104a4e60 */
  push32(0x104a165du); f_104a4e60();
  /* 104a165d mov dword ptr [0x104ce408], eax */
  w32((uint32_t)(0x104ce408), (EAX));
  /* 104a1662 call 0x104a24a0 */
  push32(0x104a1667u); f_104a24a0();
  /* 104a1667 call 0x104a4950 */
  push32(0x104a166cu); f_104a4950();
  /* 104a166c call 0x104a4800 */
  push32(0x104a1671u); f_104a4800();
  /* 104a1671 call 0x104a1ff0 */
  push32(0x104a1676u); f_104a1ff0();
  /* 104a1676 mov ecx, dword ptr [0x104ce404] */
  ECX = (r32((uint32_t)(0x104ce404)));
  /* 104a167c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a167f mov dword ptr [0x104ce404], ecx */
  w32((uint32_t)(0x104ce404), (ECX));
  /* 104a1685 jmp 0x104a16f0 */
  goto L_104a16f0;
L_104a1687:;
  /* 104a1687 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a168b jne 0x104a16e0 */
  if (!C.zf) goto L_104a16e0;
  /* 104a168d cmp dword ptr [0x104ce404], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce404))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1694 jle 0x104a16da */
  if ((C.zf||C.sf!=C.of)) goto L_104a16da;
  /* 104a1696 mov edx, dword ptr [0x104ce404] */
  EDX = (r32((uint32_t)(0x104ce404)));
  /* 104a169c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a169f mov dword ptr [0x104ce404], edx */
  w32((uint32_t)(0x104ce404), (EDX));
  /* 104a16a5 cmp dword ptr [0x104ce458], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce458))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a16ac jne 0x104a16b3 */
  if (!C.zf) goto L_104a16b3;
  /* 104a16ae call 0x104a2070 */
  push32(0x104a16b3u); f_104a2070();
L_104a16b3:;
  /* 104a16b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104a16b5 call 0x104a3da0 */
  push32(0x104a16bau); f_104a3da0();
  /* 104a16ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a16bd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 104a16c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a16c2 je 0x104a16c9 */
  if (C.zf) goto L_104a16c9;
  /* 104a16c4 call 0x104a46b0 */
  push32(0x104a16c9u); f_104a46b0();
L_104a16c9:;
  /* 104a16c9 call 0x104a27d0 */
  push32(0x104a16ceu); f_104a27d0();
  /* 104a16ce call 0x104a2280 */
  push32(0x104a16d3u); f_104a2280();
  /* 104a16d3 call 0x104a50d0 */
  push32(0x104a16d8u); f_104a50d0();
  /* 104a16d8 jmp 0x104a16de */
  goto L_104a16de;
L_104a16da:;
  /* 104a16da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a16dc jmp 0x104a16f5 */
  goto L_104a16f5;
L_104a16de:;
  /* 104a16de jmp 0x104a16f0 */
  goto L_104a16f0;
L_104a16e0:;
  /* 104a16e0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a16e4 jne 0x104a16f0 */
  if (!C.zf) goto L_104a16f0;
  /* 104a16e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a16e8 call 0x104a2370 */
  push32(0x104a16edu); f_104a2370();
  /* 104a16ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a16f0:;
  /* 104a16f0 mov eax, 1 */
  EAX = (0x1u);
L_104a16f5:;
  /* 104a16f5 pop ebp */
  EBP = (pop32());
  /* 104a16f6 ret 0xc */
  ESPCHK(0x104a15c0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x104a1700 (243 bytes, 86 insns) */
void f_104a1700(void) {
  FTRACE(0x104a1700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a1700 push ebp */
  push32((uint32_t)(EBP));
  /* 104a1701 mov ebp, esp */
  EBP = (ESP);
  /* 104a1703 push ecx */
  push32((uint32_t)(ECX));
  /* 104a1704 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104a170b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a170f jne 0x104a1721 */
  if (!C.zf) goto L_104a1721;
  /* 104a1711 cmp dword ptr [0x104ce404], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce404))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1718 jne 0x104a1721 */
  if (!C.zf) goto L_104a1721;
  /* 104a171a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a171c jmp 0x104a17ed */
  goto L_104a17ed;
L_104a1721:;
  /* 104a1721 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1725 je 0x104a172d */
  if (C.zf) goto L_104a172d;
  /* 104a1727 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a172b jne 0x104a176f */
  if (!C.zf) goto L_104a176f;
L_104a172d:;
  /* 104a172d cmp dword ptr [0x104cff7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104cff7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1734 je 0x104a174b */
  if (C.zf) goto L_104a174b;
  /* 104a1736 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a1739 push eax */
  push32((uint32_t)(EAX));
  /* 104a173a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a173d push ecx */
  push32((uint32_t)(ECX));
  /* 104a173e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a1741 push edx */
  push32((uint32_t)(EDX));
  /* 104a1742 call dword ptr [0x104cff7c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104cff7c))), 0x104a1748u);
  /* 104a1748 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104a174b:;
  /* 104a174b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a174f je 0x104a1765 */
  if (C.zf) goto L_104a1765;
  /* 104a1751 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a1754 push eax */
  push32((uint32_t)(EAX));
  /* 104a1755 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a1758 push ecx */
  push32((uint32_t)(ECX));
  /* 104a1759 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a175c push edx */
  push32((uint32_t)(EDX));
  /* 104a175d call 0x104a15c0 */
  push32(0x104a1762u); f_104a15c0();
  /* 104a1762 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104a1765:;
  /* 104a1765 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1769 jne 0x104a176f */
  if (!C.zf) goto L_104a176f;
  /* 104a176b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a176d jmp 0x104a17ed */
  goto L_104a17ed;
L_104a176f:;
  /* 104a176f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a1772 push eax */
  push32((uint32_t)(EAX));
  /* 104a1773 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a1776 push ecx */
  push32((uint32_t)(ECX));
  /* 104a1777 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a177a push edx */
  push32((uint32_t)(EDX));
  /* 104a177b call 0x104a100f */
  push32(0x104a1780u); f_104a100f();
  /* 104a1780 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a1783 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1787 jne 0x104a179e */
  if (!C.zf) goto L_104a179e;
  /* 104a1789 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a178d jne 0x104a179e */
  if (!C.zf) goto L_104a179e;
  /* 104a178f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a1792 push eax */
  push32((uint32_t)(EAX));
  /* 104a1793 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a1795 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a1798 push ecx */
  push32((uint32_t)(ECX));
  /* 104a1799 call 0x104a15c0 */
  push32(0x104a179eu); f_104a15c0();
L_104a179e:;
  /* 104a179e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a17a2 je 0x104a17aa */
  if (C.zf) goto L_104a17aa;
  /* 104a17a4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a17a8 jne 0x104a17ea */
  if (!C.zf) goto L_104a17ea;
L_104a17aa:;
  /* 104a17aa mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a17ad push edx */
  push32((uint32_t)(EDX));
  /* 104a17ae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a17b1 push eax */
  push32((uint32_t)(EAX));
  /* 104a17b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a17b5 push ecx */
  push32((uint32_t)(ECX));
  /* 104a17b6 call 0x104a15c0 */
  push32(0x104a17bbu); f_104a15c0();
  /* 104a17bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a17bd jne 0x104a17c6 */
  if (!C.zf) goto L_104a17c6;
  /* 104a17bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104a17c6:;
  /* 104a17c6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a17ca je 0x104a17ea */
  if (C.zf) goto L_104a17ea;
  /* 104a17cc cmp dword ptr [0x104cff7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104cff7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a17d3 je 0x104a17ea */
  if (C.zf) goto L_104a17ea;
  /* 104a17d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a17d8 push edx */
  push32((uint32_t)(EDX));
  /* 104a17d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a17dc push eax */
  push32((uint32_t)(EAX));
  /* 104a17dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a17e0 push ecx */
  push32((uint32_t)(ECX));
  /* 104a17e1 call dword ptr [0x104cff7c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104cff7c))), 0x104a17e7u);
  /* 104a17e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104a17ea:;
  /* 104a17ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104a17ed:;
  /* 104a17ed mov esp, ebp */
  ESP = (EBP);
  /* 104a17ef pop ebp */
  EBP = (pop32());
  /* 104a17f0 ret 0xc */
  ESPCHK(0x104a1700u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x104a1800 (58 bytes, 18 insns) */
void f_104a1800(void) {
  FTRACE(0x104a1800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a1800 push ebp */
  push32((uint32_t)(EBP));
  /* 104a1801 mov ebp, esp */
  EBP = (ESP);
  /* 104a1803 cmp dword ptr [0x104ce410], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ce410))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a180a je 0x104a181e */
  if (C.zf) goto L_104a181e;
  /* 104a180c cmp dword ptr [0x104ce410], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce410))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1813 jne 0x104a1823 */
  if (!C.zf) goto L_104a1823;
  /* 104a1815 cmp dword ptr [0x104ce414], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ce414))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a181c jne 0x104a1823 */
  if (!C.zf) goto L_104a1823;
L_104a181e:;
  /* 104a181e call 0x104a5170 */
  push32(0x104a1823u); f_104a5170();
L_104a1823:;
  /* 104a1823 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a1826 push eax */
  push32((uint32_t)(EAX));
  /* 104a1827 call 0x104a51c0 */
  push32(0x104a182cu); f_104a51c0();
  /* 104a182c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a182f push 0xff */
  push32((uint32_t)(0xffu));
  /* 104a1834 call dword ptr [0x104cca30] */
  call_ind((uint32_t)(r32((uint32_t)(0x104cca30))), 0x104a183au);
  /* 104a183a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a183d pop ebp */
  EBP = (pop32());
  /* 104a183e ret  */
  ESPCHK(0x104a1800u, _esp0);
  ESP += 4; return;
}

/* FUN_10001840 @ 0x104a1840 (11 bytes, 5 insns) */
void f_104a1840(void) {
  FTRACE(0x104a1840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a1840 push ebp */
  push32((uint32_t)(EBP));
  /* 104a1841 mov ebp, esp */
  EBP = (ESP);
  /* 104a1843 call dword ptr [0x104d0254] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0254))), 0x104a1849u);
  /* 104a1849 pop ebp */
  EBP = (pop32());
  /* 104a184a ret  */
  ESPCHK(0x104a1840u, _esp0);
  ESP += 4; return;
}

/* FUN_10001850 @ 0x104a1850 (87 bytes, 30 insns) */
void f_104a1850(void) {
  FTRACE(0x104a1850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a1850 push ebp */
  push32((uint32_t)(EBP));
  /* 104a1851 mov ebp, esp */
  EBP = (ESP);
  /* 104a1853 push ecx */
  push32((uint32_t)(ECX));
  /* 104a1854 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1858 jl 0x104a1860 */
  if ((C.sf!=C.of)) goto L_104a1860;
  /* 104a185a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a185e jl 0x104a1865 */
  if ((C.sf!=C.of)) goto L_104a1865;
L_104a1860:;
  /* 104a1860 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a1863 jmp 0x104a18a3 */
  goto L_104a18a3;
L_104a1865:;
  /* 104a1865 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1869 jne 0x104a1877 */
  if (!C.zf) goto L_104a1877;
  /* 104a186b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a186e mov eax, dword ptr [eax*4 + 0x104cca38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x104cca38)));
  /* 104a1875 jmp 0x104a18a3 */
  goto L_104a18a3;
L_104a1877:;
  /* 104a1877 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a187a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 104a187d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a187f je 0x104a1886 */
  if (C.zf) goto L_104a1886;
  /* 104a1881 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a1884 jmp 0x104a18a3 */
  goto L_104a18a3;
L_104a1886:;
  /* 104a1886 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a1889 mov eax, dword ptr [edx*4 + 0x104cca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x104cca38)));
  /* 104a1890 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a1893 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a1896 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a1899 mov dword ptr [ecx*4 + 0x104cca38], edx */
  w32((uint32_t)(ECX*4 + 0x104cca38), (EDX));
  /* 104a18a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104a18a3:;
  /* 104a18a3 mov esp, ebp */
  ESP = (EBP);
  /* 104a18a5 pop ebp */
  EBP = (pop32());
  /* 104a18a6 ret  */
  ESPCHK(0x104a1850u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x104a18b0 (126 bytes, 38 insns) */
void f_104a18b0(void) {
  FTRACE(0x104a18b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a18b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a18b1 mov ebp, esp */
  EBP = (ESP);
  /* 104a18b3 push ecx */
  push32((uint32_t)(ECX));
  /* 104a18b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a18b8 jl 0x104a18c0 */
  if ((C.sf!=C.of)) goto L_104a18c0;
  /* 104a18ba cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a18be jl 0x104a18c7 */
  if ((C.sf!=C.of)) goto L_104a18c7;
L_104a18c0:;
  /* 104a18c0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 104a18c5 jmp 0x104a192a */
  goto L_104a192a;
L_104a18c7:;
  /* 104a18c7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a18cb jne 0x104a18d9 */
  if (!C.zf) goto L_104a18d9;
  /* 104a18cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a18d0 mov eax, dword ptr [eax*4 + 0x104cca44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x104cca44)));
  /* 104a18d7 jmp 0x104a192a */
  goto L_104a192a;
L_104a18d9:;
  /* 104a18d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a18dc mov edx, dword ptr [ecx*4 + 0x104cca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x104cca44)));
  /* 104a18e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104a18e6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a18ea jne 0x104a1900 */
  if (!C.zf) goto L_104a1900;
  /* 104a18ec push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 104a18ee call dword ptr [0x104d0258] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0258))), 0x104a18f4u);
  /* 104a18f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a18f7 mov dword ptr [ecx*4 + 0x104cca44], eax */
  w32((uint32_t)(ECX*4 + 0x104cca44), (EAX));
  /* 104a18fe jmp 0x104a1927 */
  goto L_104a1927;
L_104a1900:;
  /* 104a1900 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1904 jne 0x104a191a */
  if (!C.zf) goto L_104a191a;
  /* 104a1906 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 104a1908 call dword ptr [0x104d0258] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0258))), 0x104a190eu);
  /* 104a190e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a1911 mov dword ptr [edx*4 + 0x104cca44], eax */
  w32((uint32_t)(EDX*4 + 0x104cca44), (EAX));
  /* 104a1918 jmp 0x104a1927 */
  goto L_104a1927;
L_104a191a:;
  /* 104a191a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a191d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a1920 mov dword ptr [eax*4 + 0x104cca44], ecx */
  w32((uint32_t)(EAX*4 + 0x104cca44), (ECX));
L_104a1927:;
  /* 104a1927 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104a192a:;
  /* 104a192a mov esp, ebp */
  ESP = (EBP);
  /* 104a192c pop ebp */
  EBP = (pop32());
  /* 104a192d ret  */
  ESPCHK(0x104a18b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001930 @ 0x104a1930 (28 bytes, 11 insns) */
void f_104a1930(void) {
  FTRACE(0x104a1930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a1930 push ebp */
  push32((uint32_t)(EBP));
  /* 104a1931 mov ebp, esp */
  EBP = (ESP);
  /* 104a1933 push ecx */
  push32((uint32_t)(ECX));
  /* 104a1934 mov eax, dword ptr [0x104cff60] */
  EAX = (r32((uint32_t)(0x104cff60)));
  /* 104a1939 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a193c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a193f mov dword ptr [0x104cff60], ecx */
  w32((uint32_t)(0x104cff60), (ECX));
  /* 104a1945 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a1948 mov esp, ebp */
  ESP = (EBP);
  /* 104a194a pop ebp */
  EBP = (pop32());
  /* 104a194b ret  */
  ESPCHK(0x104a1930u, _esp0);
  ESP += 4; return;
}

/* FUN_10001950 @ 0x104a1950 (912 bytes, 248 insns) */
void f_104a1950(void) {
  FTRACE(0x104a1950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a1950 push ebp */
  push32((uint32_t)(EBP));
  /* 104a1951 mov ebp, esp */
  EBP = (ESP);
  /* 104a1953 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 104a1958 call 0x104a5a30 */
  push32(0x104a195du); f_104a5a30();
  /* 104a195d push edi */
  push32((uint32_t)(EDI));
  /* 104a195e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 104a1965 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 104a196a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a196c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 104a1972 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 104a1974 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 104a1976 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 104a1977 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 104a197e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 104a1983 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a1985 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 104a198b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 104a198d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 104a198f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 104a1990 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 104a1997 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 104a199c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a199e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 104a19a4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 104a19a6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 104a19a8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 104a19a9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 104a19ac mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 104a19b2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a19b6 jl 0x104a19be */
  if ((C.sf!=C.of)) goto L_104a19be;
  /* 104a19b8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a19bc jl 0x104a19c6 */
  if ((C.sf!=C.of)) goto L_104a19c6;
L_104a19be:;
  /* 104a19be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a19c1 jmp 0x104a1cdb */
  goto L_104a1cdb;
L_104a19c6:;
  /* 104a19c6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a19ca jne 0x104a1a70 */
  if (!C.zf) goto L_104a1a70;
  /* 104a19d0 push 0x104cca34 */
  push32((uint32_t)(0x104cca34u));
  /* 104a19d5 call dword ptr [0x104d0270] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0270))), 0x104a19dbu);
  /* 104a19db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a19dd jle 0x104a1a70 */
  if ((C.zf||C.sf!=C.of)) goto L_104a1a70;
  /* 104a19e3 cmp dword ptr [0x104ce418], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce418))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a19ea jne 0x104a1a2e */
  if (!C.zf) goto L_104a1a2e;
  /* 104a19ec push 0x104c9228 */
  push32((uint32_t)(0x104c9228u));
  /* 104a19f1 call dword ptr [0x104d026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d026c))), 0x104a19f7u);
  /* 104a19f7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 104a19fd cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1a04 je 0x104a1a26 */
  if (C.zf) goto L_104a1a26;
  /* 104a1a06 push 0x104c921c */
  push32((uint32_t)(0x104c921cu));
  /* 104a1a0b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 104a1a11 push ecx */
  push32((uint32_t)(ECX));
  /* 104a1a12 call dword ptr [0x104d0268] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0268))), 0x104a1a18u);
  /* 104a1a18 mov dword ptr [0x104ce418], eax */
  w32((uint32_t)(0x104ce418), (EAX));
  /* 104a1a1d cmp dword ptr [0x104ce418], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce418))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1a24 jne 0x104a1a2e */
  if (!C.zf) goto L_104a1a2e;
L_104a1a26:;
  /* 104a1a26 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a1a29 jmp 0x104a1cdb */
  goto L_104a1cdb;
L_104a1a2e:;
  /* 104a1a2e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a1a31 push edx */
  push32((uint32_t)(EDX));
  /* 104a1a32 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a1a35 push eax */
  push32((uint32_t)(EAX));
  /* 104a1a36 push 0x104c91e8 */
  push32((uint32_t)(0x104c91e8u));
  /* 104a1a3b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 104a1a41 push ecx */
  push32((uint32_t)(ECX));
  /* 104a1a42 call dword ptr [0x104ce418] */
  call_ind((uint32_t)(r32((uint32_t)(0x104ce418))), 0x104a1a48u);
  /* 104a1a48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1a4b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 104a1a51 push edx */
  push32((uint32_t)(EDX));
  /* 104a1a52 call dword ptr [0x104d0264] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0264))), 0x104a1a58u);
  /* 104a1a58 push 0x104cca34 */
  push32((uint32_t)(0x104cca34u));
  /* 104a1a5d call dword ptr [0x104d0260] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0260))), 0x104a1a63u);
  /* 104a1a63 call 0x104a1840 */
  push32(0x104a1a68u); f_104a1840();
  /* 104a1a68 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a1a6b jmp 0x104a1cdb */
  goto L_104a1cdb;
L_104a1a70:;
  /* 104a1a70 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1a74 je 0x104a1aad */
  if (C.zf) goto L_104a1aad;
  /* 104a1a76 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 104a1a7c push eax */
  push32((uint32_t)(EAX));
  /* 104a1a7d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a1a80 push ecx */
  push32((uint32_t)(ECX));
  /* 104a1a81 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 104a1a86 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 104a1a8c push edx */
  push32((uint32_t)(EDX));
  /* 104a1a8d call 0x104a5930 */
  push32(0x104a1a92u); f_104a5930();
  /* 104a1a92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1a95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a1a97 jge 0x104a1aad */
  if ((C.sf==C.of)) goto L_104a1aad;
  /* 104a1a99 push 0x104c91bc */
  push32((uint32_t)(0x104c91bcu));
  /* 104a1a9e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 104a1aa4 push eax */
  push32((uint32_t)(EAX));
  /* 104a1aa5 call 0x104a5840 */
  push32(0x104a1aaau); f_104a5840();
  /* 104a1aaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a1aad:;
  /* 104a1aad cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1ab1 jne 0x104a1ae5 */
  if (!C.zf) goto L_104a1ae5;
  /* 104a1ab3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1ab7 je 0x104a1ac5 */
  if (C.zf) goto L_104a1ac5;
  /* 104a1ab9 mov dword ptr [ebp - 0x3028], 0x104c91a8 */
  w32((uint32_t)(EBP + -0x3028), (0x104c91a8u));
  /* 104a1ac3 jmp 0x104a1acf */
  goto L_104a1acf;
L_104a1ac5:;
  /* 104a1ac5 mov dword ptr [ebp - 0x3028], 0x104c9194 */
  w32((uint32_t)(EBP + -0x3028), (0x104c9194u));
L_104a1acf:;
  /* 104a1acf mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 104a1ad5 push ecx */
  push32((uint32_t)(ECX));
  /* 104a1ad6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 104a1adc push edx */
  push32((uint32_t)(EDX));
  /* 104a1add call 0x104a5840 */
  push32(0x104a1ae2u); f_104a5840();
  /* 104a1ae2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a1ae5:;
  /* 104a1ae5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 104a1aeb push eax */
  push32((uint32_t)(EAX));
  /* 104a1aec lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 104a1af2 push ecx */
  push32((uint32_t)(ECX));
  /* 104a1af3 call 0x104a5850 */
  push32(0x104a1af8u); f_104a5850();
  /* 104a1af8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1afb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1aff jne 0x104a1b3a */
  if (!C.zf) goto L_104a1b3a;
  /* 104a1b01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a1b04 mov eax, dword ptr [edx*4 + 0x104cca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x104cca38)));
  /* 104a1b0b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 104a1b0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a1b10 je 0x104a1b26 */
  if (C.zf) goto L_104a1b26;
  /* 104a1b12 push 0x104c9190 */
  push32((uint32_t)(0x104c9190u));
  /* 104a1b17 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 104a1b1d push ecx */
  push32((uint32_t)(ECX));
  /* 104a1b1e call 0x104a5850 */
  push32(0x104a1b23u); f_104a5850();
  /* 104a1b23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a1b26:;
  /* 104a1b26 push 0x104c918c */
  push32((uint32_t)(0x104c918cu));
  /* 104a1b2b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 104a1b31 push edx */
  push32((uint32_t)(EDX));
  /* 104a1b32 call 0x104a5850 */
  push32(0x104a1b37u); f_104a5850();
  /* 104a1b37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a1b3a:;
  /* 104a1b3a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1b3e je 0x104a1b82 */
  if (C.zf) goto L_104a1b82;
  /* 104a1b40 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 104a1b46 push eax */
  push32((uint32_t)(EAX));
  /* 104a1b47 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a1b4a push ecx */
  push32((uint32_t)(ECX));
  /* 104a1b4b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a1b4e push edx */
  push32((uint32_t)(EDX));
  /* 104a1b4f push 0x104c9180 */
  push32((uint32_t)(0x104c9180u));
  /* 104a1b54 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 104a1b59 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 104a1b5f push eax */
  push32((uint32_t)(EAX));
  /* 104a1b60 call 0x104a5740 */
  push32(0x104a1b65u); f_104a5740();
  /* 104a1b65 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1b68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a1b6a jge 0x104a1b80 */
  if ((C.sf==C.of)) goto L_104a1b80;
  /* 104a1b6c push 0x104c91bc */
  push32((uint32_t)(0x104c91bcu));
  /* 104a1b71 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 104a1b77 push ecx */
  push32((uint32_t)(ECX));
  /* 104a1b78 call 0x104a5840 */
  push32(0x104a1b7du); f_104a5840();
  /* 104a1b7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a1b80:;
  /* 104a1b80 jmp 0x104a1b98 */
  goto L_104a1b98;
L_104a1b82:;
  /* 104a1b82 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 104a1b88 push edx */
  push32((uint32_t)(EDX));
  /* 104a1b89 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 104a1b8f push eax */
  push32((uint32_t)(EAX));
  /* 104a1b90 call 0x104a5840 */
  push32(0x104a1b95u); f_104a5840();
  /* 104a1b95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a1b98:;
  /* 104a1b98 cmp dword ptr [0x104cff60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104cff60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1b9f je 0x104a1bdc */
  if (C.zf) goto L_104a1bdc;
  /* 104a1ba1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 104a1ba7 push ecx */
  push32((uint32_t)(ECX));
  /* 104a1ba8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 104a1bae push edx */
  push32((uint32_t)(EDX));
  /* 104a1baf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a1bb2 push eax */
  push32((uint32_t)(EAX));
  /* 104a1bb3 call dword ptr [0x104cff60] */
  call_ind((uint32_t)(r32((uint32_t)(0x104cff60))), 0x104a1bb9u);
  /* 104a1bb9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1bbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a1bbe je 0x104a1bdc */
  if (C.zf) goto L_104a1bdc;
  /* 104a1bc0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1bc4 jne 0x104a1bd1 */
  if (!C.zf) goto L_104a1bd1;
  /* 104a1bc6 push 0x104cca34 */
  push32((uint32_t)(0x104cca34u));
  /* 104a1bcb call dword ptr [0x104d0260] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0260))), 0x104a1bd1u);
L_104a1bd1:;
  /* 104a1bd1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 104a1bd7 jmp 0x104a1cdb */
  goto L_104a1cdb;
L_104a1bdc:;
  /* 104a1bdc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a1bdf mov edx, dword ptr [ecx*4 + 0x104cca38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x104cca38)));
  /* 104a1be6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 104a1be9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a1beb je 0x104a1c2b */
  if (C.zf) goto L_104a1c2b;
  /* 104a1bed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a1bf0 cmp dword ptr [eax*4 + 0x104cca44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x104cca44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1bf8 je 0x104a1c2b */
  if (C.zf) goto L_104a1c2b;
  /* 104a1bfa push 0 */
  push32((uint32_t)(0x0u));
  /* 104a1bfc lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 104a1c02 push ecx */
  push32((uint32_t)(ECX));
  /* 104a1c03 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 104a1c09 push edx */
  push32((uint32_t)(EDX));
  /* 104a1c0a call 0x104a56c0 */
  push32(0x104a1c0fu); f_104a56c0();
  /* 104a1c0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1c12 push eax */
  push32((uint32_t)(EAX));
  /* 104a1c13 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 104a1c19 push eax */
  push32((uint32_t)(EAX));
  /* 104a1c1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a1c1d mov edx, dword ptr [ecx*4 + 0x104cca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x104cca44)));
  /* 104a1c24 push edx */
  push32((uint32_t)(EDX));
  /* 104a1c25 call dword ptr [0x104d025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d025c))), 0x104a1c2bu);
L_104a1c2b:;
  /* 104a1c2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a1c2e mov ecx, dword ptr [eax*4 + 0x104cca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x104cca38)));
  /* 104a1c35 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 104a1c38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a1c3a je 0x104a1c49 */
  if (C.zf) goto L_104a1c49;
  /* 104a1c3c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 104a1c42 push edx */
  push32((uint32_t)(EDX));
  /* 104a1c43 call dword ptr [0x104d0264] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0264))), 0x104a1c49u);
L_104a1c49:;
  /* 104a1c49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a1c4c mov ecx, dword ptr [eax*4 + 0x104cca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x104cca38)));
  /* 104a1c53 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 104a1c56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a1c58 je 0x104a1cc8 */
  if (C.zf) goto L_104a1cc8;
  /* 104a1c5a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1c5e je 0x104a1c7d */
  if (C.zf) goto L_104a1c7d;
  /* 104a1c60 push 0xa */
  push32((uint32_t)(0xau));
  /* 104a1c62 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 104a1c68 push edx */
  push32((uint32_t)(EDX));
  /* 104a1c69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a1c6c push eax */
  push32((uint32_t)(EAX));
  /* 104a1c6d call 0x104a53d0 */
  push32(0x104a1c72u); f_104a53d0();
  /* 104a1c72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1c75 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 104a1c7b jmp 0x104a1c87 */
  goto L_104a1c87;
L_104a1c7d:;
  /* 104a1c7d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_104a1c87:;
  /* 104a1c87 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 104a1c8d push ecx */
  push32((uint32_t)(ECX));
  /* 104a1c8e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a1c91 push edx */
  push32((uint32_t)(EDX));
  /* 104a1c92 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 104a1c98 push eax */
  push32((uint32_t)(EAX));
  /* 104a1c99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a1c9c push ecx */
  push32((uint32_t)(ECX));
  /* 104a1c9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a1ca0 push edx */
  push32((uint32_t)(EDX));
  /* 104a1ca1 call 0x104a1ce0 */
  push32(0x104a1ca6u); f_104a1ce0();
  /* 104a1ca6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1ca9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 104a1caf cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1cb3 jne 0x104a1cc0 */
  if (!C.zf) goto L_104a1cc0;
  /* 104a1cb5 push 0x104cca34 */
  push32((uint32_t)(0x104cca34u));
  /* 104a1cba call dword ptr [0x104d0260] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0260))), 0x104a1cc0u);
L_104a1cc0:;
  /* 104a1cc0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 104a1cc6 jmp 0x104a1cdb */
  goto L_104a1cdb;
L_104a1cc8:;
  /* 104a1cc8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1ccc jne 0x104a1cd9 */
  if (!C.zf) goto L_104a1cd9;
  /* 104a1cce push 0x104cca34 */
  push32((uint32_t)(0x104cca34u));
  /* 104a1cd3 call dword ptr [0x104d0260] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0260))), 0x104a1cd9u);
L_104a1cd9:;
  /* 104a1cd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104a1cdb:;
  /* 104a1cdb pop edi */
  EDI = (pop32());
  /* 104a1cdc mov esp, ebp */
  ESP = (EBP);
  /* 104a1cde pop ebp */
  EBP = (pop32());
  /* 104a1cdf ret  */
  ESPCHK(0x104a1950u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ce0 @ 0x104a1ce0 (780 bytes, 197 insns) */
void f_104a1ce0(void) {
  FTRACE(0x104a1ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a1ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a1ce1 mov ebp, esp */
  EBP = (ESP);
  /* 104a1ce3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 104a1ce8 call 0x104a5a30 */
  push32(0x104a1cedu); f_104a5a30();
L_104a1ced:;
  /* 104a1ced cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1cf1 jne 0x104a1d18 */
  if (!C.zf) goto L_104a1d18;
  /* 104a1cf3 push 0x104c9378 */
  push32((uint32_t)(0x104c9378u));
  /* 104a1cf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a1cfa push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 104a1cff push 0x104c936c */
  push32((uint32_t)(0x104c936cu));
  /* 104a1d04 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a1d06 call 0x104a1950 */
  push32(0x104a1d0bu); f_104a1950();
  /* 104a1d0b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1d0e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1d11 jne 0x104a1d18 */
  if (!C.zf) goto L_104a1d18;
  /* 104a1d13 call 0x104a1840 */
  push32(0x104a1d18u); f_104a1840();
L_104a1d18:;
  /* 104a1d18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a1d1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a1d1c jne 0x104a1ced */
  if (!C.zf) goto L_104a1ced;
  /* 104a1d1e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 104a1d23 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 104a1d29 push ecx */
  push32((uint32_t)(ECX));
  /* 104a1d2a push 0 */
  push32((uint32_t)(0x0u));
  /* 104a1d2c call dword ptr [0x104d0274] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0274))), 0x104a1d32u);
  /* 104a1d32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a1d34 jne 0x104a1d4a */
  if (!C.zf) goto L_104a1d4a;
  /* 104a1d36 push 0x104c9354 */
  push32((uint32_t)(0x104c9354u));
  /* 104a1d3b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 104a1d41 push edx */
  push32((uint32_t)(EDX));
  /* 104a1d42 call 0x104a5840 */
  push32(0x104a1d47u); f_104a5840();
  /* 104a1d47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a1d4a:;
  /* 104a1d4a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 104a1d50 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a1d53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a1d56 push ecx */
  push32((uint32_t)(ECX));
  /* 104a1d57 call 0x104a56c0 */
  push32(0x104a1d5cu); f_104a56c0();
  /* 104a1d5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1d5f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1d62 jbe 0x104a1d8d */
  if ((C.cf||C.zf)) goto L_104a1d8d;
  /* 104a1d64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a1d67 push edx */
  push32((uint32_t)(EDX));
  /* 104a1d68 call 0x104a56c0 */
  push32(0x104a1d6du); f_104a56c0();
  /* 104a1d6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1d70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a1d73 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 104a1d77 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104a1d7a push 3 */
  push32((uint32_t)(0x3u));
  /* 104a1d7c push 0x104c9350 */
  push32((uint32_t)(0x104c9350u));
  /* 104a1d81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a1d84 push eax */
  push32((uint32_t)(EAX));
  /* 104a1d85 call 0x104a60b0 */
  push32(0x104a1d8au); f_104a60b0();
  /* 104a1d8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a1d8d:;
  /* 104a1d8d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a1d90 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 104a1d96 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1d9d je 0x104a1de8 */
  if (C.zf) goto L_104a1de8;
  /* 104a1d9f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 104a1da5 push edx */
  push32((uint32_t)(EDX));
  /* 104a1da6 call 0x104a56c0 */
  push32(0x104a1dabu); f_104a56c0();
  /* 104a1dab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1dae cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1db1 jbe 0x104a1de8 */
  if ((C.cf||C.zf)) goto L_104a1de8;
  /* 104a1db3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 104a1db9 push eax */
  push32((uint32_t)(EAX));
  /* 104a1dba call 0x104a56c0 */
  push32(0x104a1dbfu); f_104a56c0();
  /* 104a1dbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1dc2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 104a1dc8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 104a1dcc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 104a1dd2 push 3 */
  push32((uint32_t)(0x3u));
  /* 104a1dd4 push 0x104c9350 */
  push32((uint32_t)(0x104c9350u));
  /* 104a1dd9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 104a1ddf push eax */
  push32((uint32_t)(EAX));
  /* 104a1de0 call 0x104a60b0 */
  push32(0x104a1de5u); f_104a60b0();
  /* 104a1de5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a1de8:;
  /* 104a1de8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1dec jne 0x104a1dfa */
  if (!C.zf) goto L_104a1dfa;
  /* 104a1dee mov dword ptr [ebp - 0x1114], 0x104c92dc */
  w32((uint32_t)(EBP + -0x1114), (0x104c92dcu));
  /* 104a1df8 jmp 0x104a1e04 */
  goto L_104a1e04;
L_104a1dfa:;
  /* 104a1dfa mov dword ptr [ebp - 0x1114], 0x104c907c */
  w32((uint32_t)(EBP + -0x1114), (0x104c907cu));
L_104a1e04:;
  /* 104a1e04 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a1e07 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104a1e0a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a1e0c je 0x104a1e19 */
  if (C.zf) goto L_104a1e19;
  /* 104a1e0e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a1e11 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 104a1e17 jmp 0x104a1e23 */
  goto L_104a1e23;
L_104a1e19:;
  /* 104a1e19 mov dword ptr [ebp - 0x1118], 0x104c907c */
  w32((uint32_t)(EBP + -0x1118), (0x104c907cu));
L_104a1e23:;
  /* 104a1e23 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a1e26 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104a1e29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a1e2b je 0x104a1e3f */
  if (C.zf) goto L_104a1e3f;
  /* 104a1e2d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1e31 jne 0x104a1e3f */
  if (!C.zf) goto L_104a1e3f;
  /* 104a1e33 mov dword ptr [ebp - 0x111c], 0x104c92cc */
  w32((uint32_t)(EBP + -0x111c), (0x104c92ccu));
  /* 104a1e3d jmp 0x104a1e49 */
  goto L_104a1e49;
L_104a1e3f:;
  /* 104a1e3f mov dword ptr [ebp - 0x111c], 0x104c907c */
  w32((uint32_t)(EBP + -0x111c), (0x104c907cu));
L_104a1e49:;
  /* 104a1e49 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a1e4c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104a1e4f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a1e51 je 0x104a1e5f */
  if (C.zf) goto L_104a1e5f;
  /* 104a1e53 mov dword ptr [ebp - 0x1120], 0x104c92c8 */
  w32((uint32_t)(EBP + -0x1120), (0x104c92c8u));
  /* 104a1e5d jmp 0x104a1e69 */
  goto L_104a1e69;
L_104a1e5f:;
  /* 104a1e5f mov dword ptr [ebp - 0x1120], 0x104c907c */
  w32((uint32_t)(EBP + -0x1120), (0x104c907cu));
L_104a1e69:;
  /* 104a1e69 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1e6d je 0x104a1e7a */
  if (C.zf) goto L_104a1e7a;
  /* 104a1e6f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a1e72 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 104a1e78 jmp 0x104a1e84 */
  goto L_104a1e84;
L_104a1e7a:;
  /* 104a1e7a mov dword ptr [ebp - 0x1124], 0x104c907c */
  w32((uint32_t)(EBP + -0x1124), (0x104c907cu));
L_104a1e84:;
  /* 104a1e84 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1e88 je 0x104a1e96 */
  if (C.zf) goto L_104a1e96;
  /* 104a1e8a mov dword ptr [ebp - 0x1128], 0x104c92c0 */
  w32((uint32_t)(EBP + -0x1128), (0x104c92c0u));
  /* 104a1e94 jmp 0x104a1ea0 */
  goto L_104a1ea0;
L_104a1e96:;
  /* 104a1e96 mov dword ptr [ebp - 0x1128], 0x104c907c */
  w32((uint32_t)(EBP + -0x1128), (0x104c907cu));
L_104a1ea0:;
  /* 104a1ea0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1ea4 je 0x104a1eb1 */
  if (C.zf) goto L_104a1eb1;
  /* 104a1ea6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a1ea9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 104a1eaf jmp 0x104a1ebb */
  goto L_104a1ebb;
L_104a1eb1:;
  /* 104a1eb1 mov dword ptr [ebp - 0x112c], 0x104c907c */
  w32((uint32_t)(EBP + -0x112c), (0x104c907cu));
L_104a1ebb:;
  /* 104a1ebb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1ebf je 0x104a1ecd */
  if (C.zf) goto L_104a1ecd;
  /* 104a1ec1 mov dword ptr [ebp - 0x1130], 0x104c92b8 */
  w32((uint32_t)(EBP + -0x1130), (0x104c92b8u));
  /* 104a1ecb jmp 0x104a1ed7 */
  goto L_104a1ed7;
L_104a1ecd:;
  /* 104a1ecd mov dword ptr [ebp - 0x1130], 0x104c907c */
  w32((uint32_t)(EBP + -0x1130), (0x104c907cu));
L_104a1ed7:;
  /* 104a1ed7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1ede je 0x104a1eee */
  if (C.zf) goto L_104a1eee;
  /* 104a1ee0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 104a1ee6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 104a1eec jmp 0x104a1ef8 */
  goto L_104a1ef8;
L_104a1eee:;
  /* 104a1eee mov dword ptr [ebp - 0x1134], 0x104c907c */
  w32((uint32_t)(EBP + -0x1134), (0x104c907cu));
L_104a1ef8:;
  /* 104a1ef8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1eff je 0x104a1f0d */
  if (C.zf) goto L_104a1f0d;
  /* 104a1f01 mov dword ptr [ebp - 0x1138], 0x104c92ac */
  w32((uint32_t)(EBP + -0x1138), (0x104c92acu));
  /* 104a1f0b jmp 0x104a1f17 */
  goto L_104a1f17;
L_104a1f0d:;
  /* 104a1f0d mov dword ptr [ebp - 0x1138], 0x104c907c */
  w32((uint32_t)(EBP + -0x1138), (0x104c907cu));
L_104a1f17:;
  /* 104a1f17 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 104a1f1d push edx */
  push32((uint32_t)(EDX));
  /* 104a1f1e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 104a1f24 push eax */
  push32((uint32_t)(EAX));
  /* 104a1f25 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 104a1f2b push ecx */
  push32((uint32_t)(ECX));
  /* 104a1f2c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 104a1f32 push edx */
  push32((uint32_t)(EDX));
  /* 104a1f33 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 104a1f39 push eax */
  push32((uint32_t)(EAX));
  /* 104a1f3a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 104a1f40 push ecx */
  push32((uint32_t)(ECX));
  /* 104a1f41 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 104a1f47 push edx */
  push32((uint32_t)(EDX));
  /* 104a1f48 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 104a1f4e push eax */
  push32((uint32_t)(EAX));
  /* 104a1f4f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 104a1f55 push ecx */
  push32((uint32_t)(ECX));
  /* 104a1f56 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 104a1f5c push edx */
  push32((uint32_t)(EDX));
  /* 104a1f5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a1f60 push eax */
  push32((uint32_t)(EAX));
  /* 104a1f61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a1f64 mov edx, dword ptr [ecx*4 + 0x104cca50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x104cca50)));
  /* 104a1f6b push edx */
  push32((uint32_t)(EDX));
  /* 104a1f6c push 0x104c9258 */
  push32((uint32_t)(0x104c9258u));
  /* 104a1f71 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 104a1f76 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 104a1f7c push eax */
  push32((uint32_t)(EAX));
  /* 104a1f7d call 0x104a5740 */
  push32(0x104a1f82u); f_104a5740();
  /* 104a1f82 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1f85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a1f87 jge 0x104a1f9d */
  if ((C.sf==C.of)) goto L_104a1f9d;
  /* 104a1f89 push 0x104c91bc */
  push32((uint32_t)(0x104c91bcu));
  /* 104a1f8e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 104a1f94 push ecx */
  push32((uint32_t)(ECX));
  /* 104a1f95 call 0x104a5840 */
  push32(0x104a1f9au); f_104a5840();
  /* 104a1f9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a1f9d:;
  /* 104a1f9d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 104a1fa2 push 0x104c9234 */
  push32((uint32_t)(0x104c9234u));
  /* 104a1fa7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 104a1fad push edx */
  push32((uint32_t)(EDX));
  /* 104a1fae call 0x104a5ff0 */
  push32(0x104a1fb3u); f_104a5ff0();
  /* 104a1fb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1fb6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 104a1fbc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1fc3 jne 0x104a1fd6 */
  if (!C.zf) goto L_104a1fd6;
  /* 104a1fc5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 104a1fc7 call 0x104a5d30 */
  push32(0x104a1fccu); f_104a5d30();
  /* 104a1fcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a1fcf push 3 */
  push32((uint32_t)(0x3u));
  /* 104a1fd1 call 0x104a2050 */
  push32(0x104a1fd6u); f_104a2050();
L_104a1fd6:;
  /* 104a1fd6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1fdd jne 0x104a1fe6 */
  if (!C.zf) goto L_104a1fe6;
  /* 104a1fdf mov eax, 1 */
  EAX = (0x1u);
  /* 104a1fe4 jmp 0x104a1fe8 */
  goto L_104a1fe8;
L_104a1fe6:;
  /* 104a1fe6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104a1fe8:;
  /* 104a1fe8 mov esp, ebp */
  ESP = (EBP);
  /* 104a1fea pop ebp */
  EBP = (pop32());
  /* 104a1feb ret  */
  ESPCHK(0x104a1ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ff0 @ 0x104a1ff0 (56 bytes, 15 insns) */
void f_104a1ff0(void) {
  FTRACE(0x104a1ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a1ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a1ff1 mov ebp, esp */
  EBP = (ESP);
  /* 104a1ff3 cmp dword ptr [0x104cff5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104cff5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a1ffa je 0x104a2002 */
  if (C.zf) goto L_104a2002;
  /* 104a1ffc call dword ptr [0x104cff5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104cff5c))), 0x104a2002u);
L_104a2002:;
  /* 104a2002 push 0x104cc418 */
  push32((uint32_t)(0x104cc418u));
  /* 104a2007 push 0x104cc208 */
  push32((uint32_t)(0x104cc208u));
  /* 104a200c call 0x104a21c0 */
  push32(0x104a2011u); f_104a21c0();
  /* 104a2011 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2014 push 0x104cc104 */
  push32((uint32_t)(0x104cc104u));
  /* 104a2019 push 0x104cc000 */
  push32((uint32_t)(0x104cc000u));
  /* 104a201e call 0x104a21c0 */
  push32(0x104a2023u); f_104a21c0();
  /* 104a2023 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2026 pop ebp */
  EBP = (pop32());
  /* 104a2027 ret  */
  ESPCHK(0x104a1ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002030 @ 0x104a2030 (21 bytes, 10 insns) */
void f_104a2030(void) {
  FTRACE(0x104a2030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a2030 push ebp */
  push32((uint32_t)(EBP));
  /* 104a2031 mov ebp, esp */
  EBP = (ESP);
  /* 104a2033 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2035 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2037 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a203a push eax */
  push32((uint32_t)(EAX));
  /* 104a203b call 0x104a20b0 */
  push32(0x104a2040u); f_104a20b0();
  /* 104a2040 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2043 pop ebp */
  EBP = (pop32());
  /* 104a2044 ret  */
  ESPCHK(0x104a2030u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x104a2050 (21 bytes, 10 insns) */
void f_104a2050(void) {
  FTRACE(0x104a2050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a2050 push ebp */
  push32((uint32_t)(EBP));
  /* 104a2051 mov ebp, esp */
  EBP = (ESP);
  /* 104a2053 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2055 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a2057 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a205a push eax */
  push32((uint32_t)(EAX));
  /* 104a205b call 0x104a20b0 */
  push32(0x104a2060u); f_104a20b0();
  /* 104a2060 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2063 pop ebp */
  EBP = (pop32());
  /* 104a2064 ret  */
  ESPCHK(0x104a2050u, _esp0);
  ESP += 4; return;
}

/* FUN_10002070 @ 0x104a2070 (19 bytes, 9 insns) */
void f_104a2070(void) {
  FTRACE(0x104a2070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a2070 push ebp */
  push32((uint32_t)(EBP));
  /* 104a2071 mov ebp, esp */
  EBP = (ESP);
  /* 104a2073 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a2075 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2077 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2079 call 0x104a20b0 */
  push32(0x104a207eu); f_104a20b0();
  /* 104a207e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2081 pop ebp */
  EBP = (pop32());
  /* 104a2082 ret  */
  ESPCHK(0x104a2070u, _esp0);
  ESP += 4; return;
}

/* FUN_10002090 @ 0x104a2090 (19 bytes, 9 insns) */
void f_104a2090(void) {
  FTRACE(0x104a2090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a2090 push ebp */
  push32((uint32_t)(EBP));
  /* 104a2091 mov ebp, esp */
  EBP = (ESP);
  /* 104a2093 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a2095 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a2097 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2099 call 0x104a20b0 */
  push32(0x104a209eu); f_104a20b0();
  /* 104a209e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a20a1 pop ebp */
  EBP = (pop32());
  /* 104a20a2 ret  */
  ESPCHK(0x104a2090u, _esp0);
  ESP += 4; return;
}

/* FUN_100020b0 @ 0x104a20b0 (227 bytes, 61 insns) */
void f_104a20b0(void) {
  FTRACE(0x104a20b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a20b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a20b1 mov ebp, esp */
  EBP = (ESP);
  /* 104a20b3 push ecx */
  push32((uint32_t)(ECX));
  /* 104a20b4 call 0x104a21a0 */
  push32(0x104a20b9u); f_104a21a0();
  /* 104a20b9 cmp dword ptr [0x104ce45c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ce45c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a20c0 jne 0x104a20d3 */
  if (!C.zf) goto L_104a20d3;
  /* 104a20c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a20c5 push eax */
  push32((uint32_t)(EAX));
  /* 104a20c6 call dword ptr [0x104d0280] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0280))), 0x104a20ccu);
  /* 104a20cc push eax */
  push32((uint32_t)(EAX));
  /* 104a20cd call dword ptr [0x104d027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d027c))), 0x104a20d3u);
L_104a20d3:;
  /* 104a20d3 mov dword ptr [0x104ce458], 1 */
  w32((uint32_t)(0x104ce458), (0x1u));
  /* 104a20dd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 104a20e0 mov byte ptr [0x104ce454], cl */
  w8((uint32_t)(0x104ce454), (CL));
  /* 104a20e6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a20ea jne 0x104a2133 */
  if (!C.zf) goto L_104a2133;
  /* 104a20ec cmp dword ptr [0x104cff58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104cff58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a20f3 je 0x104a2121 */
  if (C.zf) goto L_104a2121;
  /* 104a20f5 mov edx, dword ptr [0x104cff54] */
  EDX = (r32((uint32_t)(0x104cff54)));
  /* 104a20fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104a20fe:;
  /* 104a20fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2101 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a2104 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a2107 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a210a cmp ecx, dword ptr [0x104cff58] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x104cff58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2110 jb 0x104a2121 */
  if (C.cf) goto L_104a2121;
  /* 104a2112 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2115 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2118 je 0x104a211f */
  if (C.zf) goto L_104a211f;
  /* 104a211a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a211d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x104a211fu);
L_104a211f:;
  /* 104a211f jmp 0x104a20fe */
  goto L_104a20fe;
L_104a2121:;
  /* 104a2121 push 0x104cc724 */
  push32((uint32_t)(0x104cc724u));
  /* 104a2126 push 0x104cc51c */
  push32((uint32_t)(0x104cc51cu));
  /* 104a212b call 0x104a21c0 */
  push32(0x104a2130u); f_104a21c0();
  /* 104a2130 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a2133:;
  /* 104a2133 push 0x104cc92c */
  push32((uint32_t)(0x104cc92cu));
  /* 104a2138 push 0x104cc828 */
  push32((uint32_t)(0x104cc828u));
  /* 104a213d call 0x104a21c0 */
  push32(0x104a2142u); f_104a21c0();
  /* 104a2142 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2145 cmp dword ptr [0x104ce460], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce460))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a214c jne 0x104a216e */
  if (!C.zf) goto L_104a216e;
  /* 104a214e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104a2150 call 0x104a3da0 */
  push32(0x104a2155u); f_104a3da0();
  /* 104a2155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2158 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 104a215b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a215d je 0x104a216e */
  if (C.zf) goto L_104a216e;
  /* 104a215f mov dword ptr [0x104ce460], 1 */
  w32((uint32_t)(0x104ce460), (0x1u));
  /* 104a2169 call 0x104a46b0 */
  push32(0x104a216eu); f_104a46b0();
L_104a216e:;
  /* 104a216e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2172 je 0x104a217b */
  if (C.zf) goto L_104a217b;
  /* 104a2174 call 0x104a21b0 */
  push32(0x104a2179u); f_104a21b0();
  /* 104a2179 jmp 0x104a218f */
  goto L_104a218f;
L_104a217b:;
  /* 104a217b mov dword ptr [0x104ce45c], 1 */
  w32((uint32_t)(0x104ce45c), (0x1u));
  /* 104a2185 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a2188 push ecx */
  push32((uint32_t)(ECX));
  /* 104a2189 call dword ptr [0x104d0278] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0278))), 0x104a218fu);
L_104a218f:;
  /* 104a218f mov esp, ebp */
  ESP = (EBP);
  /* 104a2191 pop ebp */
  EBP = (pop32());
  /* 104a2192 ret  */
  ESPCHK(0x104a20b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100021a0 @ 0x104a21a0 (15 bytes, 7 insns) */
void f_104a21a0(void) {
  FTRACE(0x104a21a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a21a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a21a1 mov ebp, esp */
  EBP = (ESP);
  /* 104a21a3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 104a21a5 call 0x104a6290 */
  push32(0x104a21aau); f_104a6290();
  /* 104a21aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a21ad pop ebp */
  EBP = (pop32());
  /* 104a21ae ret  */
  ESPCHK(0x104a21a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100021b0 @ 0x104a21b0 (15 bytes, 7 insns) */
void f_104a21b0(void) {
  FTRACE(0x104a21b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a21b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a21b1 mov ebp, esp */
  EBP = (ESP);
  /* 104a21b3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 104a21b5 call 0x104a6330 */
  push32(0x104a21bau); f_104a6330();
  /* 104a21ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a21bd pop ebp */
  EBP = (pop32());
  /* 104a21be ret  */
  ESPCHK(0x104a21b0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x104a21c0 (37 bytes, 16 insns) */
void f_104a21c0(void) {
  FTRACE(0x104a21c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a21c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a21c1 mov ebp, esp */
  EBP = (ESP);
L_104a21c3:;
  /* 104a21c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a21c6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a21c9 jae 0x104a21e3 */
  if (!C.cf) goto L_104a21e3;
  /* 104a21cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a21ce cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a21d1 je 0x104a21d8 */
  if (C.zf) goto L_104a21d8;
  /* 104a21d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a21d6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x104a21d8u);
L_104a21d8:;
  /* 104a21d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a21db add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a21de mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104a21e1 jmp 0x104a21c3 */
  goto L_104a21c3;
L_104a21e3:;
  /* 104a21e3 pop ebp */
  EBP = (pop32());
  /* 104a21e4 ret  */
  ESPCHK(0x104a21c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100021f0 @ 0x104a21f0 (130 bytes, 42 insns) */
void f_104a21f0(void) {
  FTRACE(0x104a21f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a21f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a21f1 mov ebp, esp */
  EBP = (ESP);
  /* 104a21f3 push ecx */
  push32((uint32_t)(ECX));
  /* 104a21f4 call 0x104a61b0 */
  push32(0x104a21f9u); f_104a61b0();
  /* 104a21f9 call dword ptr [0x104d028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d028c))), 0x104a21ffu);
  /* 104a21ff mov dword ptr [0x104cca5c], eax */
  w32((uint32_t)(0x104cca5c), (EAX));
  /* 104a2204 cmp dword ptr [0x104cca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x104cca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a220b jne 0x104a2211 */
  if (!C.zf) goto L_104a2211;
  /* 104a220d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a220f jmp 0x104a226e */
  goto L_104a226e;
L_104a2211:;
  /* 104a2211 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 104a2213 push 0x104c9390 */
  push32((uint32_t)(0x104c9390u));
  /* 104a2218 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a221a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 104a221c push 1 */
  push32((uint32_t)(0x1u));
  /* 104a221e call 0x104a2ca0 */
  push32(0x104a2223u); f_104a2ca0();
  /* 104a2223 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2226 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a2229 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a222d je 0x104a2244 */
  if (C.zf) goto L_104a2244;
  /* 104a222f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2232 push eax */
  push32((uint32_t)(EAX));
  /* 104a2233 mov ecx, dword ptr [0x104cca5c] */
  ECX = (r32((uint32_t)(0x104cca5c)));
  /* 104a2239 push ecx */
  push32((uint32_t)(ECX));
  /* 104a223a call dword ptr [0x104d0288] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0288))), 0x104a2240u);
  /* 104a2240 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a2242 jne 0x104a2248 */
  if (!C.zf) goto L_104a2248;
L_104a2244:;
  /* 104a2244 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a2246 jmp 0x104a226e */
  goto L_104a226e;
L_104a2248:;
  /* 104a2248 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a224b push edx */
  push32((uint32_t)(EDX));
  /* 104a224c call 0x104a22b0 */
  push32(0x104a2251u); f_104a22b0();
  /* 104a2251 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2254 call dword ptr [0x104d0284] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0284))), 0x104a225au);
  /* 104a225a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a225d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104a225f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2262 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 104a2269 mov eax, 1 */
  EAX = (0x1u);
L_104a226e:;
  /* 104a226e mov esp, ebp */
  ESP = (EBP);
  /* 104a2270 pop ebp */
  EBP = (pop32());
  /* 104a2271 ret  */
  ESPCHK(0x104a21f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002280 @ 0x104a2280 (41 bytes, 11 insns) */
void f_104a2280(void) {
  FTRACE(0x104a2280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a2280 push ebp */
  push32((uint32_t)(EBP));
  /* 104a2281 mov ebp, esp */
  EBP = (ESP);
  /* 104a2283 call 0x104a61f0 */
  push32(0x104a2288u); f_104a61f0();
  /* 104a2288 cmp dword ptr [0x104cca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x104cca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a228f je 0x104a22a7 */
  if (C.zf) goto L_104a22a7;
  /* 104a2291 mov eax, dword ptr [0x104cca5c] */
  EAX = (r32((uint32_t)(0x104cca5c)));
  /* 104a2296 push eax */
  push32((uint32_t)(EAX));
  /* 104a2297 call dword ptr [0x104d0290] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0290))), 0x104a229du);
  /* 104a229d mov dword ptr [0x104cca5c], 0xffffffff */
  w32((uint32_t)(0x104cca5c), (0xffffffffu));
L_104a22a7:;
  /* 104a22a7 pop ebp */
  EBP = (pop32());
  /* 104a22a8 ret  */
  ESPCHK(0x104a2280u, _esp0);
  ESP += 4; return;
}

/* FUN_100022b0 @ 0x104a22b0 (25 bytes, 8 insns) */
void f_104a22b0(void) {
  FTRACE(0x104a22b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a22b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a22b1 mov ebp, esp */
  EBP = (ESP);
  /* 104a22b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a22b6 mov dword ptr [eax + 0x50], 0x104ccc00 */
  w32((uint32_t)(EAX + 0x50), (0x104ccc00u));
  /* 104a22bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a22c0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 104a22c7 pop ebp */
  EBP = (pop32());
  /* 104a22c8 ret  */
  ESPCHK(0x104a22b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100022d0 @ 0x104a22d0 (152 bytes, 48 insns) */
void f_104a22d0(void) {
  FTRACE(0x104a22d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a22d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a22d1 mov ebp, esp */
  EBP = (ESP);
  /* 104a22d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a22d6 call dword ptr [0x104d029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d029c))), 0x104a22dcu);
  /* 104a22dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104a22df mov eax, dword ptr [0x104cca5c] */
  EAX = (r32((uint32_t)(0x104cca5c)));
  /* 104a22e4 push eax */
  push32((uint32_t)(EAX));
  /* 104a22e5 call dword ptr [0x104d0298] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0298))), 0x104a22ebu);
  /* 104a22eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a22ee cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a22f2 jne 0x104a2357 */
  if (!C.zf) goto L_104a2357;
  /* 104a22f4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 104a22f9 push 0x104c9390 */
  push32((uint32_t)(0x104c9390u));
  /* 104a22fe push 2 */
  push32((uint32_t)(0x2u));
  /* 104a2300 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 104a2302 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a2304 call 0x104a2ca0 */
  push32(0x104a2309u); f_104a2ca0();
  /* 104a2309 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a230c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a230f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2313 je 0x104a234d */
  if (C.zf) goto L_104a234d;
  /* 104a2315 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2318 push ecx */
  push32((uint32_t)(ECX));
  /* 104a2319 mov edx, dword ptr [0x104cca5c] */
  EDX = (r32((uint32_t)(0x104cca5c)));
  /* 104a231f push edx */
  push32((uint32_t)(EDX));
  /* 104a2320 call dword ptr [0x104d0288] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0288))), 0x104a2326u);
  /* 104a2326 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a2328 je 0x104a234d */
  if (C.zf) goto L_104a234d;
  /* 104a232a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a232d push eax */
  push32((uint32_t)(EAX));
  /* 104a232e call 0x104a22b0 */
  push32(0x104a2333u); f_104a22b0();
  /* 104a2333 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2336 call dword ptr [0x104d0284] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0284))), 0x104a233cu);
  /* 104a233c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a233f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104a2341 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2344 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 104a234b jmp 0x104a2357 */
  goto L_104a2357;
L_104a234d:;
  /* 104a234d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 104a234f call 0x104a1800 */
  push32(0x104a2354u); f_104a1800();
  /* 104a2354 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a2357:;
  /* 104a2357 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a235a push eax */
  push32((uint32_t)(EAX));
  /* 104a235b call dword ptr [0x104d0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0294))), 0x104a2361u);
  /* 104a2361 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2364 mov esp, ebp */
  ESP = (EBP);
  /* 104a2366 pop ebp */
  EBP = (pop32());
  /* 104a2367 ret  */
  ESPCHK(0x104a22d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002370 @ 0x104a2370 (263 bytes, 86 insns) */
void f_104a2370(void) {
  FTRACE(0x104a2370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a2370 push ebp */
  push32((uint32_t)(EBP));
  /* 104a2371 mov ebp, esp */
  EBP = (ESP);
  /* 104a2373 cmp dword ptr [0x104cca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x104cca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a237a je 0x104a2475 */
  if (C.zf) goto L_104a2475;
  /* 104a2380 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2384 jne 0x104a2395 */
  if (!C.zf) goto L_104a2395;
  /* 104a2386 mov eax, dword ptr [0x104cca5c] */
  EAX = (r32((uint32_t)(0x104cca5c)));
  /* 104a238b push eax */
  push32((uint32_t)(EAX));
  /* 104a238c call dword ptr [0x104d0298] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0298))), 0x104a2392u);
  /* 104a2392 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_104a2395:;
  /* 104a2395 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2399 je 0x104a2466 */
  if (C.zf) goto L_104a2466;
  /* 104a239f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a23a2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a23a6 je 0x104a23b9 */
  if (C.zf) goto L_104a23b9;
  /* 104a23a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a23aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a23ad mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 104a23b0 push eax */
  push32((uint32_t)(EAX));
  /* 104a23b1 call 0x104a3320 */
  push32(0x104a23b6u); f_104a3320();
  /* 104a23b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a23b9:;
  /* 104a23b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a23bc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a23c0 je 0x104a23d3 */
  if (C.zf) goto L_104a23d3;
  /* 104a23c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a23c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a23c7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 104a23ca push eax */
  push32((uint32_t)(EAX));
  /* 104a23cb call 0x104a3320 */
  push32(0x104a23d0u); f_104a3320();
  /* 104a23d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a23d3:;
  /* 104a23d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a23d6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a23da je 0x104a23ed */
  if (C.zf) goto L_104a23ed;
  /* 104a23dc push 2 */
  push32((uint32_t)(0x2u));
  /* 104a23de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a23e1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 104a23e4 push eax */
  push32((uint32_t)(EAX));
  /* 104a23e5 call 0x104a3320 */
  push32(0x104a23eau); f_104a3320();
  /* 104a23ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a23ed:;
  /* 104a23ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a23f0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a23f4 je 0x104a2407 */
  if (C.zf) goto L_104a2407;
  /* 104a23f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a23f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a23fb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 104a23fe push eax */
  push32((uint32_t)(EAX));
  /* 104a23ff call 0x104a3320 */
  push32(0x104a2404u); f_104a3320();
  /* 104a2404 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a2407:;
  /* 104a2407 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a240a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a240e je 0x104a2421 */
  if (C.zf) goto L_104a2421;
  /* 104a2410 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a2412 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a2415 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 104a2418 push eax */
  push32((uint32_t)(EAX));
  /* 104a2419 call 0x104a3320 */
  push32(0x104a241eu); f_104a3320();
  /* 104a241e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a2421:;
  /* 104a2421 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a2424 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2428 je 0x104a243b */
  if (C.zf) goto L_104a243b;
  /* 104a242a push 2 */
  push32((uint32_t)(0x2u));
  /* 104a242c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a242f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 104a2432 push eax */
  push32((uint32_t)(EAX));
  /* 104a2433 call 0x104a3320 */
  push32(0x104a2438u); f_104a3320();
  /* 104a2438 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a243b:;
  /* 104a243b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a243e cmp dword ptr [ecx + 0x50], 0x104ccc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x104ccc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2445 je 0x104a2458 */
  if (C.zf) goto L_104a2458;
  /* 104a2447 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a2449 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a244c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 104a244f push eax */
  push32((uint32_t)(EAX));
  /* 104a2450 call 0x104a3320 */
  push32(0x104a2455u); f_104a3320();
  /* 104a2455 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a2458:;
  /* 104a2458 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a245a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a245d push ecx */
  push32((uint32_t)(ECX));
  /* 104a245e call 0x104a3320 */
  push32(0x104a2463u); f_104a3320();
  /* 104a2463 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a2466:;
  /* 104a2466 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2468 mov edx, dword ptr [0x104cca5c] */
  EDX = (r32((uint32_t)(0x104cca5c)));
  /* 104a246e push edx */
  push32((uint32_t)(EDX));
  /* 104a246f call dword ptr [0x104d0288] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0288))), 0x104a2475u);
L_104a2475:;
  /* 104a2475 pop ebp */
  EBP = (pop32());
  /* 104a2476 ret  */
  ESPCHK(0x104a2370u, _esp0);
  ESP += 4; return;
}

/* FUN_10002480 @ 0x104a2480 (11 bytes, 5 insns) */
void f_104a2480(void) {
  FTRACE(0x104a2480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a2480 push ebp */
  push32((uint32_t)(EBP));
  /* 104a2481 mov ebp, esp */
  EBP = (ESP);
  /* 104a2483 call dword ptr [0x104d0284] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0284))), 0x104a2489u);
  /* 104a2489 pop ebp */
  EBP = (pop32());
  /* 104a248a ret  */
  ESPCHK(0x104a2480u, _esp0);
  ESP += 4; return;
}

/* FUN_10002490 @ 0x104a2490 (11 bytes, 5 insns) */
void f_104a2490(void) {
  FTRACE(0x104a2490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a2490 push ebp */
  push32((uint32_t)(EBP));
  /* 104a2491 mov ebp, esp */
  EBP = (ESP);
  /* 104a2493 call dword ptr [0x104d02a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02a0))), 0x104a2499u);
  /* 104a2499 pop ebp */
  EBP = (pop32());
  /* 104a249a ret  */
  ESPCHK(0x104a2490u, _esp0);
  ESP += 4; return;
}

/* FUN_100024a0 @ 0x104a24a0 (804 bytes, 236 insns) */
void f_104a24a0(void) {
  FTRACE(0x104a24a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a24a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a24a1 mov ebp, esp */
  EBP = (ESP);
  /* 104a24a3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a24a6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 104a24ab push 0x104c939c */
  push32((uint32_t)(0x104c939cu));
  /* 104a24b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a24b2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 104a24b7 call 0x104a2890 */
  push32(0x104a24bcu); f_104a2890();
  /* 104a24bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a24bf mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 104a24c2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a24c6 jne 0x104a24d2 */
  if (!C.zf) goto L_104a24d2;
  /* 104a24c8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 104a24ca call 0x104a1800 */
  push32(0x104a24cfu); f_104a1800();
  /* 104a24cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a24d2:;
  /* 104a24d2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a24d5 mov dword ptr [0x104cfe00], eax */
  w32((uint32_t)(0x104cfe00), (EAX));
  /* 104a24da mov dword ptr [0x104cff3c], 0x20 */
  w32((uint32_t)(0x104cff3c), (0x20u));
  /* 104a24e4 jmp 0x104a24ef */
  goto L_104a24ef;
L_104a24e6:;
  /* 104a24e6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a24e9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a24ec mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_104a24ef:;
  /* 104a24ef mov edx, dword ptr [0x104cfe00] */
  EDX = (r32((uint32_t)(0x104cfe00)));
  /* 104a24f5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a24fb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a24fe jae 0x104a2523 */
  if (!C.cf) goto L_104a2523;
  /* 104a2500 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a2503 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 104a2507 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a250a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 104a2510 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a2513 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 104a2517 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a251a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 104a2521 jmp 0x104a24e6 */
  goto L_104a24e6;
L_104a2523:;
  /* 104a2523 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 104a2526 push ecx */
  push32((uint32_t)(ECX));
  /* 104a2527 call dword ptr [0x104d02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02ac))), 0x104a252du);
  /* 104a252d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 104a2530 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104a2536 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a2538 je 0x104a26c5 */
  if (C.zf) goto L_104a26c5;
  /* 104a253e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2542 je 0x104a26c5 */
  if (C.zf) goto L_104a26c5;
  /* 104a2548 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a254b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104a254d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 104a2550 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a2553 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2556 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104a2559 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a255c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a255f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 104a2562 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2569 jge 0x104a2573 */
  if ((C.sf==C.of)) goto L_104a2573;
  /* 104a256b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 104a256e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 104a2571 jmp 0x104a257a */
  goto L_104a257a;
L_104a2573:;
  /* 104a2573 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_104a257a:;
  /* 104a257a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 104a257d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 104a2580 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 104a2587 jmp 0x104a2592 */
  goto L_104a2592;
L_104a2589:;
  /* 104a2589 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 104a258c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a258f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_104a2592:;
  /* 104a2592 mov ecx, dword ptr [0x104cff3c] */
  ECX = (r32((uint32_t)(0x104cff3c)));
  /* 104a2598 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a259b jge 0x104a2632 */
  if ((C.sf==C.of)) goto L_104a2632;
  /* 104a25a1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 104a25a6 push 0x104c939c */
  push32((uint32_t)(0x104c939cu));
  /* 104a25ab push 2 */
  push32((uint32_t)(0x2u));
  /* 104a25ad push 0x480 */
  push32((uint32_t)(0x480u));
  /* 104a25b2 call 0x104a2890 */
  push32(0x104a25b7u); f_104a2890();
  /* 104a25b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a25ba mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 104a25bd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a25c1 jne 0x104a25ce */
  if (!C.zf) goto L_104a25ce;
  /* 104a25c3 mov edx, dword ptr [0x104cff3c] */
  EDX = (r32((uint32_t)(0x104cff3c)));
  /* 104a25c9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 104a25cc jmp 0x104a2632 */
  goto L_104a2632;
L_104a25ce:;
  /* 104a25ce mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 104a25d1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a25d4 mov dword ptr [eax*4 + 0x104cfe00], ecx */
  w32((uint32_t)(EAX*4 + 0x104cfe00), (ECX));
  /* 104a25db mov edx, dword ptr [0x104cff3c] */
  EDX = (r32((uint32_t)(0x104cff3c)));
  /* 104a25e1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a25e4 mov dword ptr [0x104cff3c], edx */
  w32((uint32_t)(0x104cff3c), (EDX));
  /* 104a25ea jmp 0x104a25f5 */
  goto L_104a25f5;
L_104a25ec:;
  /* 104a25ec mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a25ef add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a25f2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_104a25f5:;
  /* 104a25f5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 104a25f8 mov edx, dword ptr [ecx*4 + 0x104cfe00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x104cfe00)));
  /* 104a25ff add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2605 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2608 jae 0x104a262d */
  if (!C.cf) goto L_104a262d;
  /* 104a260a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a260d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 104a2611 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a2614 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 104a261a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a261d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 104a2621 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a2624 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 104a262b jmp 0x104a25ec */
  goto L_104a25ec;
L_104a262d:;
  /* 104a262d jmp 0x104a2589 */
  goto L_104a2589;
L_104a2632:;
  /* 104a2632 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 104a2639 jmp 0x104a2656 */
  goto L_104a2656;
L_104a263b:;
  /* 104a263b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 104a263e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2641 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 104a2644 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2647 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a264a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104a264d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 104a2650 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2653 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_104a2656:;
  /* 104a2656 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 104a2659 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a265c jge 0x104a26c5 */
  if ((C.sf==C.of)) goto L_104a26c5;
  /* 104a265e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 104a2661 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2664 je 0x104a26c0 */
  if (C.zf) goto L_104a26c0;
  /* 104a2666 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2669 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104a266c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104a266f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a2671 je 0x104a26c0 */
  if (C.zf) goto L_104a26c0;
  /* 104a2673 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2676 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104a2679 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 104a267c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a267e jne 0x104a2690 */
  if (!C.zf) goto L_104a2690;
  /* 104a2680 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 104a2683 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a2685 push edx */
  push32((uint32_t)(EDX));
  /* 104a2686 call dword ptr [0x104d02a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02a8))), 0x104a268cu);
  /* 104a268c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a268e je 0x104a26c0 */
  if (C.zf) goto L_104a26c0;
L_104a2690:;
  /* 104a2690 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 104a2693 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104a2696 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 104a2699 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104a269c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a269f mov edx, dword ptr [eax*4 + 0x104cfe00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x104cfe00)));
  /* 104a26a6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a26a8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 104a26ab mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a26ae mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 104a26b1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a26b3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104a26b5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a26b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a26bb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104a26bd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_104a26c0:;
  /* 104a26c0 jmp 0x104a263b */
  goto L_104a263b;
L_104a26c5:;
  /* 104a26c5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 104a26cc jmp 0x104a26d7 */
  goto L_104a26d7;
L_104a26ce:;
  /* 104a26ce mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 104a26d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a26d4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_104a26d7:;
  /* 104a26d7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a26db jge 0x104a27b4 */
  if ((C.sf==C.of)) goto L_104a27b4;
  /* 104a26e1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 104a26e4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a26e7 mov edx, dword ptr [0x104cfe00] */
  EDX = (r32((uint32_t)(0x104cfe00)));
  /* 104a26ed add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a26ef mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 104a26f2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a26f5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a26f8 jne 0x104a27a0 */
  if (!C.zf) goto L_104a27a0;
  /* 104a26fe mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a2701 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 104a2705 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2709 jne 0x104a2714 */
  if (!C.zf) goto L_104a2714;
  /* 104a270b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 104a2712 jmp 0x104a2724 */
  goto L_104a2724;
L_104a2714:;
  /* 104a2714 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 104a2717 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a271a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104a271c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a271e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2721 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_104a2724:;
  /* 104a2724 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 104a2727 push eax */
  push32((uint32_t)(EAX));
  /* 104a2728 call dword ptr [0x104d0258] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0258))), 0x104a272eu);
  /* 104a272e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 104a2731 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2735 je 0x104a278f */
  if (C.zf) goto L_104a278f;
  /* 104a2737 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 104a273a push ecx */
  push32((uint32_t)(ECX));
  /* 104a273b call dword ptr [0x104d02a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02a8))), 0x104a2741u);
  /* 104a2741 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 104a2744 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2748 je 0x104a278f */
  if (C.zf) goto L_104a278f;
  /* 104a274a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a274d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 104a2750 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 104a2752 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 104a2755 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104a275b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a275e jne 0x104a2770 */
  if (!C.zf) goto L_104a2770;
  /* 104a2760 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a2763 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 104a2766 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 104a2768 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a276b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 104a276e jmp 0x104a278d */
  goto L_104a278d;
L_104a2770:;
  /* 104a2770 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 104a2773 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104a2779 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a277c jne 0x104a278d */
  if (!C.zf) goto L_104a278d;
  /* 104a277e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a2781 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104a2784 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 104a2787 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a278a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_104a278d:;
  /* 104a278d jmp 0x104a279e */
  goto L_104a279e;
L_104a278f:;
  /* 104a278f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a2792 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104a2795 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 104a2798 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a279b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_104a279e:;
  /* 104a279e jmp 0x104a27af */
  goto L_104a27af;
L_104a27a0:;
  /* 104a27a0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a27a3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104a27a6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 104a27a9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a27ac mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_104a27af:;
  /* 104a27af jmp 0x104a26ce */
  goto L_104a26ce;
L_104a27b4:;
  /* 104a27b4 mov eax, dword ptr [0x104cff3c] */
  EAX = (r32((uint32_t)(0x104cff3c)));
  /* 104a27b9 push eax */
  push32((uint32_t)(EAX));
  /* 104a27ba call dword ptr [0x104d02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02a4))), 0x104a27c0u);
  /* 104a27c0 mov esp, ebp */
  ESP = (EBP);
  /* 104a27c2 pop ebp */
  EBP = (pop32());
  /* 104a27c3 ret  */
  ESPCHK(0x104a24a0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x104a27d0 (155 bytes, 45 insns) */
void f_104a27d0(void) {
  FTRACE(0x104a27d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a27d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a27d1 mov ebp, esp */
  EBP = (ESP);
  /* 104a27d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a27d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104a27dd jmp 0x104a27e8 */
  goto L_104a27e8;
L_104a27df:;
  /* 104a27df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a27e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a27e5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104a27e8:;
  /* 104a27e8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a27ec jge 0x104a2867 */
  if ((C.sf==C.of)) goto L_104a2867;
  /* 104a27ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a27f1 cmp dword ptr [ecx*4 + 0x104cfe00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x104cfe00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a27f9 je 0x104a2862 */
  if (C.zf) goto L_104a2862;
  /* 104a27fb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a27fe mov eax, dword ptr [edx*4 + 0x104cfe00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x104cfe00)));
  /* 104a2805 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a2808 jmp 0x104a2813 */
  goto L_104a2813;
L_104a280a:;
  /* 104a280a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a280d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2810 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104a2813:;
  /* 104a2813 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a2816 mov eax, dword ptr [edx*4 + 0x104cfe00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x104cfe00)));
  /* 104a281d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2822 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2825 jae 0x104a283f */
  if (!C.cf) goto L_104a283f;
  /* 104a2827 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a282a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a282e je 0x104a283d */
  if (C.zf) goto L_104a283d;
  /* 104a2830 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2833 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2836 push edx */
  push32((uint32_t)(EDX));
  /* 104a2837 call dword ptr [0x104d02b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02b0))), 0x104a283du);
L_104a283d:;
  /* 104a283d jmp 0x104a280a */
  goto L_104a280a;
L_104a283f:;
  /* 104a283f push 2 */
  push32((uint32_t)(0x2u));
  /* 104a2841 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a2844 mov ecx, dword ptr [eax*4 + 0x104cfe00] */
  ECX = (r32((uint32_t)(EAX*4 + 0x104cfe00)));
  /* 104a284b push ecx */
  push32((uint32_t)(ECX));
  /* 104a284c call 0x104a3320 */
  push32(0x104a2851u); f_104a3320();
  /* 104a2851 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2854 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a2857 mov dword ptr [edx*4 + 0x104cfe00], 0 */
  w32((uint32_t)(EDX*4 + 0x104cfe00), (0x0u));
L_104a2862:;
  /* 104a2862 jmp 0x104a27df */
  goto L_104a27df;
L_104a2867:;
  /* 104a2867 mov esp, ebp */
  ESP = (EBP);
  /* 104a2869 pop ebp */
  EBP = (pop32());
  /* 104a286a ret  */
  ESPCHK(0x104a27d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002870 @ 0x104a2870 (29 bytes, 13 insns) */
void f_104a2870(void) {
  FTRACE(0x104a2870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a2870 push ebp */
  push32((uint32_t)(EBP));
  /* 104a2871 mov ebp, esp */
  EBP = (ESP);
  /* 104a2873 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2875 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2877 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a2879 mov eax, dword ptr [0x104ce608] */
  EAX = (r32((uint32_t)(0x104ce608)));
  /* 104a287e push eax */
  push32((uint32_t)(EAX));
  /* 104a287f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a2882 push ecx */
  push32((uint32_t)(ECX));
  /* 104a2883 call 0x104a28e0 */
  push32(0x104a2888u); f_104a28e0();
  /* 104a2888 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a288b pop ebp */
  EBP = (pop32());
  /* 104a288c ret  */
  ESPCHK(0x104a2870u, _esp0);
  ESP += 4; return;
}

/* FUN_10002890 @ 0x104a2890 (35 bytes, 16 insns) */
void f_104a2890(void) {
  FTRACE(0x104a2890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a2890 push ebp */
  push32((uint32_t)(EBP));
  /* 104a2891 mov ebp, esp */
  EBP = (ESP);
  /* 104a2893 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a2896 push eax */
  push32((uint32_t)(EAX));
  /* 104a2897 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a289a push ecx */
  push32((uint32_t)(ECX));
  /* 104a289b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a289e push edx */
  push32((uint32_t)(EDX));
  /* 104a289f mov eax, dword ptr [0x104ce608] */
  EAX = (r32((uint32_t)(0x104ce608)));
  /* 104a28a4 push eax */
  push32((uint32_t)(EAX));
  /* 104a28a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a28a8 push ecx */
  push32((uint32_t)(ECX));
  /* 104a28a9 call 0x104a28e0 */
  push32(0x104a28aeu); f_104a28e0();
  /* 104a28ae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a28b1 pop ebp */
  EBP = (pop32());
  /* 104a28b2 ret  */
  ESPCHK(0x104a2890u, _esp0);
  ESP += 4; return;
}

/* FUN_100028c0 @ 0x104a28c0 (27 bytes, 13 insns) */
void f_104a28c0(void) {
  FTRACE(0x104a28c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a28c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a28c1 mov ebp, esp */
  EBP = (ESP);
  /* 104a28c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a28c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a28c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a28c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a28cc push eax */
  push32((uint32_t)(EAX));
  /* 104a28cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a28d0 push ecx */
  push32((uint32_t)(ECX));
  /* 104a28d1 call 0x104a28e0 */
  push32(0x104a28d6u); f_104a28e0();
  /* 104a28d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a28d9 pop ebp */
  EBP = (pop32());
  /* 104a28da ret  */
  ESPCHK(0x104a28c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100028e0 @ 0x104a28e0 (94 bytes, 38 insns) */
void f_104a28e0(void) {
  FTRACE(0x104a28e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a28e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a28e1 mov ebp, esp */
  EBP = (ESP);
  /* 104a28e3 push ecx */
  push32((uint32_t)(ECX));
L_104a28e4:;
  /* 104a28e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a28e6 call 0x104a6290 */
  push32(0x104a28ebu); f_104a6290();
  /* 104a28eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a28ee mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a28f1 push eax */
  push32((uint32_t)(EAX));
  /* 104a28f2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a28f5 push ecx */
  push32((uint32_t)(ECX));
  /* 104a28f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a28f9 push edx */
  push32((uint32_t)(EDX));
  /* 104a28fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a28fd push eax */
  push32((uint32_t)(EAX));
  /* 104a28fe call 0x104a2960 */
  push32(0x104a2903u); f_104a2960();
  /* 104a2903 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2906 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a2909 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a290b call 0x104a6330 */
  push32(0x104a2910u); f_104a6330();
  /* 104a2910 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2913 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2917 jne 0x104a291f */
  if (!C.zf) goto L_104a291f;
  /* 104a2919 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a291d jne 0x104a2924 */
  if (!C.zf) goto L_104a2924;
L_104a291f:;
  /* 104a291f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2922 jmp 0x104a293a */
  goto L_104a293a;
L_104a2924:;
  /* 104a2924 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a2927 push ecx */
  push32((uint32_t)(ECX));
  /* 104a2928 call 0x104a65d0 */
  push32(0x104a292du); f_104a65d0();
  /* 104a292d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2930 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a2932 jne 0x104a2938 */
  if (!C.zf) goto L_104a2938;
  /* 104a2934 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a2936 jmp 0x104a293a */
  goto L_104a293a;
L_104a2938:;
  /* 104a2938 jmp 0x104a28e4 */
  goto L_104a28e4;
L_104a293a:;
  /* 104a293a mov esp, ebp */
  ESP = (EBP);
  /* 104a293c pop ebp */
  EBP = (pop32());
  /* 104a293d ret  */
  ESPCHK(0x104a28e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002940 @ 0x104a2940 (23 bytes, 11 insns) */
void f_104a2940(void) {
  FTRACE(0x104a2940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a2940 push ebp */
  push32((uint32_t)(EBP));
  /* 104a2941 mov ebp, esp */
  EBP = (ESP);
  /* 104a2943 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2945 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2947 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a2949 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a294c push eax */
  push32((uint32_t)(EAX));
  /* 104a294d call 0x104a2960 */
  push32(0x104a2952u); f_104a2960();
  /* 104a2952 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2955 pop ebp */
  EBP = (pop32());
  /* 104a2956 ret  */
  ESPCHK(0x104a2940u, _esp0);
  ESP += 4; return;
}

/* FUN_10002960 @ 0x104a2960 (787 bytes, 254 insns) */
void f_104a2960(void) {
  FTRACE(0x104a2960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a2960 push ebp */
  push32((uint32_t)(EBP));
  /* 104a2961 mov ebp, esp */
  EBP = (ESP);
  /* 104a2963 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a2966 push ebx */
  push32((uint32_t)(EBX));
  /* 104a2967 push esi */
  push32((uint32_t)(ESI));
  /* 104a2968 push edi */
  push32((uint32_t)(EDI));
  /* 104a2969 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104a2970 mov eax, dword ptr [0x104cca84] */
  EAX = (r32((uint32_t)(0x104cca84)));
  /* 104a2975 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 104a2978 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a297a je 0x104a29ac */
  if (C.zf) goto L_104a29ac;
L_104a297c:;
  /* 104a297c call 0x104a3a30 */
  push32(0x104a2981u); f_104a3a30();
  /* 104a2981 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a2983 jne 0x104a29a6 */
  if (!C.zf) goto L_104a29a6;
  /* 104a2985 push 0x104c9490 */
  push32((uint32_t)(0x104c9490u));
  /* 104a298a push 0 */
  push32((uint32_t)(0x0u));
  /* 104a298c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 104a2991 push 0x104c9484 */
  push32((uint32_t)(0x104c9484u));
  /* 104a2996 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a2998 call 0x104a1950 */
  push32(0x104a299du); f_104a1950();
  /* 104a299d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a29a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a29a3 jne 0x104a29a6 */
  if (!C.zf) goto L_104a29a6;
  /* 104a29a5 int3  */
  x86_unimpl("int3 @ 0x104a29a5");
L_104a29a6:;
  /* 104a29a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a29a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a29aa jne 0x104a297c */
  if (!C.zf) goto L_104a297c;
L_104a29ac:;
  /* 104a29ac mov edx, dword ptr [0x104cca88] */
  EDX = (r32((uint32_t)(0x104cca88)));
  /* 104a29b2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104a29b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a29b8 cmp eax, dword ptr [0x104cca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104cca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a29be jne 0x104a29c1 */
  if (!C.zf) goto L_104a29c1;
  /* 104a29c0 int3  */
  x86_unimpl("int3 @ 0x104a29c0");
L_104a29c1:;
  /* 104a29c1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a29c4 push ecx */
  push32((uint32_t)(ECX));
  /* 104a29c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a29c8 push edx */
  push32((uint32_t)(EDX));
  /* 104a29c9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a29cc push eax */
  push32((uint32_t)(EAX));
  /* 104a29cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a29d0 push ecx */
  push32((uint32_t)(ECX));
  /* 104a29d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a29d4 push edx */
  push32((uint32_t)(EDX));
  /* 104a29d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a29d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a29d9 call dword ptr [0x104ccc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x104ccc90))), 0x104a29dfu);
  /* 104a29df add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a29e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a29e4 jne 0x104a2a44 */
  if (!C.zf) goto L_104a2a44;
  /* 104a29e6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a29ea je 0x104a2a17 */
  if (C.zf) goto L_104a2a17;
L_104a29ec:;
  /* 104a29ec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a29ef push eax */
  push32((uint32_t)(EAX));
  /* 104a29f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a29f3 push ecx */
  push32((uint32_t)(ECX));
  /* 104a29f4 push 0x104c944c */
  push32((uint32_t)(0x104c944cu));
  /* 104a29f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a29fb push 0 */
  push32((uint32_t)(0x0u));
  /* 104a29fd push 0 */
  push32((uint32_t)(0x0u));
  /* 104a29ff push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2a01 call 0x104a1950 */
  push32(0x104a2a06u); f_104a1950();
  /* 104a2a06 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2a09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2a0c jne 0x104a2a0f */
  if (!C.zf) goto L_104a2a0f;
  /* 104a2a0e int3  */
  x86_unimpl("int3 @ 0x104a2a0e");
L_104a2a0f:;
  /* 104a2a0f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a2a11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a2a13 jne 0x104a29ec */
  if (!C.zf) goto L_104a29ec;
  /* 104a2a15 jmp 0x104a2a3d */
  goto L_104a2a3d;
L_104a2a17:;
  /* 104a2a17 push 0x104c9428 */
  push32((uint32_t)(0x104c9428u));
  /* 104a2a1c push 0x104c9424 */
  push32((uint32_t)(0x104c9424u));
  /* 104a2a21 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2a23 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2a25 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2a27 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2a29 call 0x104a1950 */
  push32(0x104a2a2eu); f_104a1950();
  /* 104a2a2e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2a31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2a34 jne 0x104a2a37 */
  if (!C.zf) goto L_104a2a37;
  /* 104a2a36 int3  */
  x86_unimpl("int3 @ 0x104a2a36");
L_104a2a37:;
  /* 104a2a37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a2a39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a2a3b jne 0x104a2a17 */
  if (!C.zf) goto L_104a2a17;
L_104a2a3d:;
  /* 104a2a3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a2a3f jmp 0x104a2c6c */
  goto L_104a2c6c;
L_104a2a44:;
  /* 104a2a44 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a2a47 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104a2a4d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2a50 je 0x104a2a66 */
  if (C.zf) goto L_104a2a66;
  /* 104a2a52 mov edx, dword ptr [0x104cca84] */
  EDX = (r32((uint32_t)(0x104cca84)));
  /* 104a2a58 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 104a2a5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a2a5d jne 0x104a2a66 */
  if (!C.zf) goto L_104a2a66;
  /* 104a2a5f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_104a2a66:;
  /* 104a2a66 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2a6a ja 0x104a2a77 */
  if ((!C.cf&&!C.zf)) goto L_104a2a77;
  /* 104a2a6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a2a6f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2a72 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2a75 jbe 0x104a2aa3 */
  if ((C.cf||C.zf)) goto L_104a2aa3;
L_104a2a77:;
  /* 104a2a77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a2a7a push ecx */
  push32((uint32_t)(ECX));
  /* 104a2a7b push 0x104c9400 */
  push32((uint32_t)(0x104c9400u));
  /* 104a2a80 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2a82 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2a84 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2a86 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a2a88 call 0x104a1950 */
  push32(0x104a2a8du); f_104a1950();
  /* 104a2a8d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2a90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2a93 jne 0x104a2a96 */
  if (!C.zf) goto L_104a2a96;
  /* 104a2a95 int3  */
  x86_unimpl("int3 @ 0x104a2a95");
L_104a2a96:;
  /* 104a2a96 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a2a98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a2a9a jne 0x104a2a77 */
  if (!C.zf) goto L_104a2a77;
  /* 104a2a9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a2a9e jmp 0x104a2c6c */
  goto L_104a2c6c;
L_104a2aa3:;
  /* 104a2aa3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a2aa6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a2aab cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2aae je 0x104a2af0 */
  if (C.zf) goto L_104a2af0;
  /* 104a2ab0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2ab4 je 0x104a2af0 */
  if (C.zf) goto L_104a2af0;
  /* 104a2ab6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a2ab9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104a2abf cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2ac2 je 0x104a2af0 */
  if (C.zf) goto L_104a2af0;
  /* 104a2ac4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2ac8 je 0x104a2af0 */
  if (C.zf) goto L_104a2af0;
L_104a2aca:;
  /* 104a2aca push 0x104c93cc */
  push32((uint32_t)(0x104c93ccu));
  /* 104a2acf push 0x104c9424 */
  push32((uint32_t)(0x104c9424u));
  /* 104a2ad4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2ad6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2ad8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2ada push 1 */
  push32((uint32_t)(0x1u));
  /* 104a2adc call 0x104a1950 */
  push32(0x104a2ae1u); f_104a1950();
  /* 104a2ae1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2ae4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2ae7 jne 0x104a2aea */
  if (!C.zf) goto L_104a2aea;
  /* 104a2ae9 int3  */
  x86_unimpl("int3 @ 0x104a2ae9");
L_104a2aea:;
  /* 104a2aea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a2aec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a2aee jne 0x104a2aca */
  if (!C.zf) goto L_104a2aca;
L_104a2af0:;
  /* 104a2af0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a2af3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2af6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104a2af9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a2afc push ecx */
  push32((uint32_t)(ECX));
  /* 104a2afd call 0x104a66e0 */
  push32(0x104a2b02u); f_104a66e0();
  /* 104a2b02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2b05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a2b08 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2b0c jne 0x104a2b15 */
  if (!C.zf) goto L_104a2b15;
  /* 104a2b0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a2b10 jmp 0x104a2c6c */
  goto L_104a2c6c;
L_104a2b15:;
  /* 104a2b15 mov edx, dword ptr [0x104cca88] */
  EDX = (r32((uint32_t)(0x104cca88)));
  /* 104a2b1b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2b1e mov dword ptr [0x104cca88], edx */
  w32((uint32_t)(0x104cca88), (EDX));
  /* 104a2b24 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2b28 je 0x104a2b73 */
  if (C.zf) goto L_104a2b73;
  /* 104a2b2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2b2d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104a2b33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2b36 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 104a2b3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2b40 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 104a2b47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2b4a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 104a2b51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2b54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a2b57 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 104a2b5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2b5d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 104a2b64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2b67 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 104a2b6e jmp 0x104a2c13 */
  goto L_104a2c13;
L_104a2b73:;
  /* 104a2b73 mov edx, dword ptr [0x104ce468] */
  EDX = (r32((uint32_t)(0x104ce468)));
  /* 104a2b79 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2b7c mov dword ptr [0x104ce468], edx */
  w32((uint32_t)(0x104ce468), (EDX));
  /* 104a2b82 mov eax, dword ptr [0x104ce470] */
  EAX = (r32((uint32_t)(0x104ce470)));
  /* 104a2b87 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2b8a mov dword ptr [0x104ce470], eax */
  w32((uint32_t)(0x104ce470), (EAX));
  /* 104a2b8f mov ecx, dword ptr [0x104ce470] */
  ECX = (r32((uint32_t)(0x104ce470)));
  /* 104a2b95 cmp ecx, dword ptr [0x104ce474] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x104ce474))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2b9b jbe 0x104a2ba9 */
  if ((C.cf||C.zf)) goto L_104a2ba9;
  /* 104a2b9d mov edx, dword ptr [0x104ce470] */
  EDX = (r32((uint32_t)(0x104ce470)));
  /* 104a2ba3 mov dword ptr [0x104ce474], edx */
  w32((uint32_t)(0x104ce474), (EDX));
L_104a2ba9:;
  /* 104a2ba9 cmp dword ptr [0x104ce46c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce46c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2bb0 je 0x104a2bbf */
  if (C.zf) goto L_104a2bbf;
  /* 104a2bb2 mov eax, dword ptr [0x104ce46c] */
  EAX = (r32((uint32_t)(0x104ce46c)));
  /* 104a2bb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2bba mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 104a2bbd jmp 0x104a2bc8 */
  goto L_104a2bc8;
L_104a2bbf:;
  /* 104a2bbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2bc2 mov dword ptr [0x104ce464], edx */
  w32((uint32_t)(0x104ce464), (EDX));
L_104a2bc8:;
  /* 104a2bc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2bcb mov ecx, dword ptr [0x104ce46c] */
  ECX = (r32((uint32_t)(0x104ce46c)));
  /* 104a2bd1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 104a2bd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2bd6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 104a2bdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2be0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a2be3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 104a2be6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2be9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a2bec mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 104a2bef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2bf2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a2bf5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 104a2bf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2bfb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a2bfe mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 104a2c01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2c04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a2c07 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 104a2c0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2c0d mov dword ptr [0x104ce46c], ecx */
  w32((uint32_t)(0x104ce46c), (ECX));
L_104a2c13:;
  /* 104a2c13 push 4 */
  push32((uint32_t)(0x4u));
  /* 104a2c15 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a2c17 mov dl, byte ptr [0x104cca90] */
  DL = (r8((uint32_t)(0x104cca90)));
  /* 104a2c1d push edx */
  push32((uint32_t)(EDX));
  /* 104a2c1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2c21 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2c24 push eax */
  push32((uint32_t)(EAX));
  /* 104a2c25 call 0x104a6600 */
  push32(0x104a2c2au); f_104a6600();
  /* 104a2c2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2c2d push 4 */
  push32((uint32_t)(0x4u));
  /* 104a2c2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a2c31 mov cl, byte ptr [0x104cca90] */
  CL = (r8((uint32_t)(0x104cca90)));
  /* 104a2c37 push ecx */
  push32((uint32_t)(ECX));
  /* 104a2c38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a2c3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2c3e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 104a2c42 push ecx */
  push32((uint32_t)(ECX));
  /* 104a2c43 call 0x104a6600 */
  push32(0x104a2c48u); f_104a6600();
  /* 104a2c48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2c4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a2c4e push edx */
  push32((uint32_t)(EDX));
  /* 104a2c4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a2c51 mov al, byte ptr [0x104cca92] */
  AL = (r8((uint32_t)(0x104cca92)));
  /* 104a2c56 push eax */
  push32((uint32_t)(EAX));
  /* 104a2c57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2c5a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2c5d push ecx */
  push32((uint32_t)(ECX));
  /* 104a2c5e call 0x104a6600 */
  push32(0x104a2c63u); f_104a6600();
  /* 104a2c63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2c66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2c69 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_104a2c6c:;
  /* 104a2c6c pop edi */
  EDI = (pop32());
  /* 104a2c6d pop esi */
  ESI = (pop32());
  /* 104a2c6e pop ebx */
  EBX = (pop32());
  /* 104a2c6f mov esp, ebp */
  ESP = (EBP);
  /* 104a2c71 pop ebp */
  EBP = (pop32());
  /* 104a2c72 ret  */
  ESPCHK(0x104a2960u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c80 @ 0x104a2c80 (27 bytes, 13 insns) */
void f_104a2c80(void) {
  FTRACE(0x104a2c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a2c80 push ebp */
  push32((uint32_t)(EBP));
  /* 104a2c81 mov ebp, esp */
  EBP = (ESP);
  /* 104a2c83 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2c85 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2c87 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a2c89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a2c8c push eax */
  push32((uint32_t)(EAX));
  /* 104a2c8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a2c90 push ecx */
  push32((uint32_t)(ECX));
  /* 104a2c91 call 0x104a2ca0 */
  push32(0x104a2c96u); f_104a2ca0();
  /* 104a2c96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2c99 pop ebp */
  EBP = (pop32());
  /* 104a2c9a ret  */
  ESPCHK(0x104a2c80u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x104a2ca0 (96 bytes, 37 insns) */
void f_104a2ca0(void) {
  FTRACE(0x104a2ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a2ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a2ca1 mov ebp, esp */
  EBP = (ESP);
  /* 104a2ca3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a2ca6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a2ca9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a2cad mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 104a2cb0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a2cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 104a2cb4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a2cb7 push edx */
  push32((uint32_t)(EDX));
  /* 104a2cb8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a2cbb push eax */
  push32((uint32_t)(EAX));
  /* 104a2cbc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a2cbf push ecx */
  push32((uint32_t)(ECX));
  /* 104a2cc0 call 0x104a2890 */
  push32(0x104a2cc5u); f_104a2890();
  /* 104a2cc5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2cc8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104a2ccb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2ccf je 0x104a2cf9 */
  if (C.zf) goto L_104a2cf9;
  /* 104a2cd1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a2cd4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104a2cd7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a2cda add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2cdd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104a2ce0:;
  /* 104a2ce0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a2ce3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2ce6 jae 0x104a2cf9 */
  if (!C.cf) goto L_104a2cf9;
  /* 104a2ce8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a2ceb mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 104a2cee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a2cf1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2cf4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104a2cf7 jmp 0x104a2ce0 */
  goto L_104a2ce0;
L_104a2cf9:;
  /* 104a2cf9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a2cfc mov esp, ebp */
  ESP = (EBP);
  /* 104a2cfe pop ebp */
  EBP = (pop32());
  /* 104a2cff ret  */
  ESPCHK(0x104a2ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d00 @ 0x104a2d00 (27 bytes, 13 insns) */
void f_104a2d00(void) {
  FTRACE(0x104a2d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a2d00 push ebp */
  push32((uint32_t)(EBP));
  /* 104a2d01 mov ebp, esp */
  EBP = (ESP);
  /* 104a2d03 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2d05 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2d07 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a2d09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a2d0c push eax */
  push32((uint32_t)(EAX));
  /* 104a2d0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a2d10 push ecx */
  push32((uint32_t)(ECX));
  /* 104a2d11 call 0x104a2d20 */
  push32(0x104a2d16u); f_104a2d20();
  /* 104a2d16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2d19 pop ebp */
  EBP = (pop32());
  /* 104a2d1a ret  */
  ESPCHK(0x104a2d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d20 @ 0x104a2d20 (64 bytes, 27 insns) */
void f_104a2d20(void) {
  FTRACE(0x104a2d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a2d20 push ebp */
  push32((uint32_t)(EBP));
  /* 104a2d21 mov ebp, esp */
  EBP = (ESP);
  /* 104a2d23 push ecx */
  push32((uint32_t)(ECX));
  /* 104a2d24 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a2d26 call 0x104a6290 */
  push32(0x104a2d2bu); f_104a6290();
  /* 104a2d2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2d2e push 1 */
  push32((uint32_t)(0x1u));
  /* 104a2d30 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a2d33 push eax */
  push32((uint32_t)(EAX));
  /* 104a2d34 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a2d37 push ecx */
  push32((uint32_t)(ECX));
  /* 104a2d38 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a2d3b push edx */
  push32((uint32_t)(EDX));
  /* 104a2d3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a2d3f push eax */
  push32((uint32_t)(EAX));
  /* 104a2d40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a2d43 push ecx */
  push32((uint32_t)(ECX));
  /* 104a2d44 call 0x104a2d60 */
  push32(0x104a2d49u); f_104a2d60();
  /* 104a2d49 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2d4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a2d4f push 9 */
  push32((uint32_t)(0x9u));
  /* 104a2d51 call 0x104a6330 */
  push32(0x104a2d56u); f_104a6330();
  /* 104a2d56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2d59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a2d5c mov esp, ebp */
  ESP = (EBP);
  /* 104a2d5e pop ebp */
  EBP = (pop32());
  /* 104a2d5f ret  */
  ESPCHK(0x104a2d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d60 @ 0x104a2d60 (1297 bytes, 431 insns) */
void f_104a2d60(void) {
  FTRACE(0x104a2d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a2d60 push ebp */
  push32((uint32_t)(EBP));
  /* 104a2d61 mov ebp, esp */
  EBP = (ESP);
  /* 104a2d63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a2d66 push ebx */
  push32((uint32_t)(EBX));
  /* 104a2d67 push esi */
  push32((uint32_t)(ESI));
  /* 104a2d68 push edi */
  push32((uint32_t)(EDI));
  /* 104a2d69 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 104a2d70 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2d74 jne 0x104a2d93 */
  if (!C.zf) goto L_104a2d93;
  /* 104a2d76 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a2d79 push eax */
  push32((uint32_t)(EAX));
  /* 104a2d7a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a2d7d push ecx */
  push32((uint32_t)(ECX));
  /* 104a2d7e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a2d81 push edx */
  push32((uint32_t)(EDX));
  /* 104a2d82 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a2d85 push eax */
  push32((uint32_t)(EAX));
  /* 104a2d86 call 0x104a2890 */
  push32(0x104a2d8bu); f_104a2890();
  /* 104a2d8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2d8e jmp 0x104a326a */
  goto L_104a326a;
L_104a2d93:;
  /* 104a2d93 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2d97 je 0x104a2db6 */
  if (C.zf) goto L_104a2db6;
  /* 104a2d99 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2d9d jne 0x104a2db6 */
  if (!C.zf) goto L_104a2db6;
  /* 104a2d9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a2da2 push ecx */
  push32((uint32_t)(ECX));
  /* 104a2da3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a2da6 push edx */
  push32((uint32_t)(EDX));
  /* 104a2da7 call 0x104a3320 */
  push32(0x104a2dacu); f_104a3320();
  /* 104a2dac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2daf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a2db1 jmp 0x104a326a */
  goto L_104a326a;
L_104a2db6:;
  /* 104a2db6 mov eax, dword ptr [0x104cca84] */
  EAX = (r32((uint32_t)(0x104cca84)));
  /* 104a2dbb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 104a2dbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a2dc0 je 0x104a2df2 */
  if (C.zf) goto L_104a2df2;
L_104a2dc2:;
  /* 104a2dc2 call 0x104a3a30 */
  push32(0x104a2dc7u); f_104a3a30();
  /* 104a2dc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a2dc9 jne 0x104a2dec */
  if (!C.zf) goto L_104a2dec;
  /* 104a2dcb push 0x104c9490 */
  push32((uint32_t)(0x104c9490u));
  /* 104a2dd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2dd2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 104a2dd7 push 0x104c9484 */
  push32((uint32_t)(0x104c9484u));
  /* 104a2ddc push 2 */
  push32((uint32_t)(0x2u));
  /* 104a2dde call 0x104a1950 */
  push32(0x104a2de3u); f_104a1950();
  /* 104a2de3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2de6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2de9 jne 0x104a2dec */
  if (!C.zf) goto L_104a2dec;
  /* 104a2deb int3  */
  x86_unimpl("int3 @ 0x104a2deb");
L_104a2dec:;
  /* 104a2dec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a2dee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a2df0 jne 0x104a2dc2 */
  if (!C.zf) goto L_104a2dc2;
L_104a2df2:;
  /* 104a2df2 mov edx, dword ptr [0x104cca88] */
  EDX = (r32((uint32_t)(0x104cca88)));
  /* 104a2df8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 104a2dfb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a2dfe cmp eax, dword ptr [0x104cca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104cca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2e04 jne 0x104a2e07 */
  if (!C.zf) goto L_104a2e07;
  /* 104a2e06 int3  */
  x86_unimpl("int3 @ 0x104a2e06");
L_104a2e07:;
  /* 104a2e07 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a2e0a push ecx */
  push32((uint32_t)(ECX));
  /* 104a2e0b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a2e0e push edx */
  push32((uint32_t)(EDX));
  /* 104a2e0f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a2e12 push eax */
  push32((uint32_t)(EAX));
  /* 104a2e13 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a2e16 push ecx */
  push32((uint32_t)(ECX));
  /* 104a2e17 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a2e1a push edx */
  push32((uint32_t)(EDX));
  /* 104a2e1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a2e1e push eax */
  push32((uint32_t)(EAX));
  /* 104a2e1f push 2 */
  push32((uint32_t)(0x2u));
  /* 104a2e21 call dword ptr [0x104ccc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x104ccc90))), 0x104a2e27u);
  /* 104a2e27 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2e2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a2e2c jne 0x104a2e8c */
  if (!C.zf) goto L_104a2e8c;
  /* 104a2e2e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2e32 je 0x104a2e5f */
  if (C.zf) goto L_104a2e5f;
L_104a2e34:;
  /* 104a2e34 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a2e37 push ecx */
  push32((uint32_t)(ECX));
  /* 104a2e38 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a2e3b push edx */
  push32((uint32_t)(EDX));
  /* 104a2e3c push 0x104c960c */
  push32((uint32_t)(0x104c960cu));
  /* 104a2e41 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2e43 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2e45 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2e47 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2e49 call 0x104a1950 */
  push32(0x104a2e4eu); f_104a1950();
  /* 104a2e4e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2e51 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2e54 jne 0x104a2e57 */
  if (!C.zf) goto L_104a2e57;
  /* 104a2e56 int3  */
  x86_unimpl("int3 @ 0x104a2e56");
L_104a2e57:;
  /* 104a2e57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a2e59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a2e5b jne 0x104a2e34 */
  if (!C.zf) goto L_104a2e34;
  /* 104a2e5d jmp 0x104a2e85 */
  goto L_104a2e85;
L_104a2e5f:;
  /* 104a2e5f push 0x104c95e8 */
  push32((uint32_t)(0x104c95e8u));
  /* 104a2e64 push 0x104c9424 */
  push32((uint32_t)(0x104c9424u));
  /* 104a2e69 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2e6b push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2e6d push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2e6f push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2e71 call 0x104a1950 */
  push32(0x104a2e76u); f_104a1950();
  /* 104a2e76 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2e79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2e7c jne 0x104a2e7f */
  if (!C.zf) goto L_104a2e7f;
  /* 104a2e7e int3  */
  x86_unimpl("int3 @ 0x104a2e7e");
L_104a2e7f:;
  /* 104a2e7f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a2e81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a2e83 jne 0x104a2e5f */
  if (!C.zf) goto L_104a2e5f;
L_104a2e85:;
  /* 104a2e85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a2e87 jmp 0x104a326a */
  goto L_104a326a;
L_104a2e8c:;
  /* 104a2e8c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2e90 jbe 0x104a2ebe */
  if ((C.cf||C.zf)) goto L_104a2ebe;
L_104a2e92:;
  /* 104a2e92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a2e95 push edx */
  push32((uint32_t)(EDX));
  /* 104a2e96 push 0x104c95b8 */
  push32((uint32_t)(0x104c95b8u));
  /* 104a2e9b push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2e9d push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2e9f push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2ea1 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a2ea3 call 0x104a1950 */
  push32(0x104a2ea8u); f_104a1950();
  /* 104a2ea8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2eab cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2eae jne 0x104a2eb1 */
  if (!C.zf) goto L_104a2eb1;
  /* 104a2eb0 int3  */
  x86_unimpl("int3 @ 0x104a2eb0");
L_104a2eb1:;
  /* 104a2eb1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a2eb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a2eb5 jne 0x104a2e92 */
  if (!C.zf) goto L_104a2e92;
  /* 104a2eb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a2eb9 jmp 0x104a326a */
  goto L_104a326a;
L_104a2ebe:;
  /* 104a2ebe cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2ec2 je 0x104a2f06 */
  if (C.zf) goto L_104a2f06;
  /* 104a2ec4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a2ec7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104a2ecd cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2ed0 je 0x104a2f06 */
  if (C.zf) goto L_104a2f06;
  /* 104a2ed2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a2ed5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104a2edb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2ede je 0x104a2f06 */
  if (C.zf) goto L_104a2f06;
L_104a2ee0:;
  /* 104a2ee0 push 0x104c93cc */
  push32((uint32_t)(0x104c93ccu));
  /* 104a2ee5 push 0x104c9424 */
  push32((uint32_t)(0x104c9424u));
  /* 104a2eea push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2eec push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2eee push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2ef0 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a2ef2 call 0x104a1950 */
  push32(0x104a2ef7u); f_104a1950();
  /* 104a2ef7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2efa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2efd jne 0x104a2f00 */
  if (!C.zf) goto L_104a2f00;
  /* 104a2eff int3  */
  x86_unimpl("int3 @ 0x104a2eff");
L_104a2f00:;
  /* 104a2f00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a2f02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a2f04 jne 0x104a2ee0 */
  if (!C.zf) goto L_104a2ee0;
L_104a2f06:;
  /* 104a2f06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a2f09 push ecx */
  push32((uint32_t)(ECX));
  /* 104a2f0a call 0x104a3e90 */
  push32(0x104a2f0fu); f_104a3e90();
  /* 104a2f0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2f12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a2f14 jne 0x104a2f37 */
  if (!C.zf) goto L_104a2f37;
  /* 104a2f16 push 0x104c9594 */
  push32((uint32_t)(0x104c9594u));
  /* 104a2f1b push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2f1d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 104a2f22 push 0x104c9484 */
  push32((uint32_t)(0x104c9484u));
  /* 104a2f27 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a2f29 call 0x104a1950 */
  push32(0x104a2f2eu); f_104a1950();
  /* 104a2f2e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2f31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2f34 jne 0x104a2f37 */
  if (!C.zf) goto L_104a2f37;
  /* 104a2f36 int3  */
  x86_unimpl("int3 @ 0x104a2f36");
L_104a2f37:;
  /* 104a2f37 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a2f39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a2f3b jne 0x104a2f06 */
  if (!C.zf) goto L_104a2f06;
  /* 104a2f3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a2f40 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a2f43 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104a2f46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a2f49 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2f4d jne 0x104a2f56 */
  if (!C.zf) goto L_104a2f56;
  /* 104a2f4f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_104a2f56:;
  /* 104a2f56 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2f5a je 0x104a2f9a */
  if (C.zf) goto L_104a2f9a;
L_104a2f5c:;
  /* 104a2f5c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a2f5f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2f66 jne 0x104a2f71 */
  if (!C.zf) goto L_104a2f71;
  /* 104a2f68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a2f6b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2f6f je 0x104a2f92 */
  if (C.zf) goto L_104a2f92;
L_104a2f71:;
  /* 104a2f71 push 0x104c954c */
  push32((uint32_t)(0x104c954cu));
  /* 104a2f76 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2f78 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 104a2f7d push 0x104c9484 */
  push32((uint32_t)(0x104c9484u));
  /* 104a2f82 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a2f84 call 0x104a1950 */
  push32(0x104a2f89u); f_104a1950();
  /* 104a2f89 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2f8c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2f8f jne 0x104a2f92 */
  if (!C.zf) goto L_104a2f92;
  /* 104a2f91 int3  */
  x86_unimpl("int3 @ 0x104a2f91");
L_104a2f92:;
  /* 104a2f92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a2f94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a2f96 jne 0x104a2f5c */
  if (!C.zf) goto L_104a2f5c;
  /* 104a2f98 jmp 0x104a2ffe */
  goto L_104a2ffe;
L_104a2f9a:;
  /* 104a2f9a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a2f9d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104a2fa0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a2fa5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2fa8 jne 0x104a2fbf */
  if (!C.zf) goto L_104a2fbf;
  /* 104a2faa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a2fad and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104a2fb3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2fb6 jne 0x104a2fbf */
  if (!C.zf) goto L_104a2fbf;
  /* 104a2fb8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_104a2fbf:;
  /* 104a2fbf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a2fc2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104a2fc5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a2fca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a2fcd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104a2fd3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2fd5 je 0x104a2ff8 */
  if (C.zf) goto L_104a2ff8;
  /* 104a2fd7 push 0x104c9510 */
  push32((uint32_t)(0x104c9510u));
  /* 104a2fdc push 0 */
  push32((uint32_t)(0x0u));
  /* 104a2fde push 0x272 */
  push32((uint32_t)(0x272u));
  /* 104a2fe3 push 0x104c9484 */
  push32((uint32_t)(0x104c9484u));
  /* 104a2fe8 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a2fea call 0x104a1950 */
  push32(0x104a2fefu); f_104a1950();
  /* 104a2fef add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a2ff2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a2ff5 jne 0x104a2ff8 */
  if (!C.zf) goto L_104a2ff8;
  /* 104a2ff7 int3  */
  x86_unimpl("int3 @ 0x104a2ff7");
L_104a2ff8:;
  /* 104a2ff8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a2ffa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a2ffc jne 0x104a2fbf */
  if (!C.zf) goto L_104a2fbf;
L_104a2ffe:;
  /* 104a2ffe cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3002 je 0x104a3029 */
  if (C.zf) goto L_104a3029;
  /* 104a3004 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a3007 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a300a push eax */
  push32((uint32_t)(EAX));
  /* 104a300b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a300e push ecx */
  push32((uint32_t)(ECX));
  /* 104a300f call 0x104a6810 */
  push32(0x104a3014u); f_104a6810();
  /* 104a3014 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3017 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104a301a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a301e jne 0x104a3027 */
  if (!C.zf) goto L_104a3027;
  /* 104a3020 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a3022 jmp 0x104a326a */
  goto L_104a326a;
L_104a3027:;
  /* 104a3027 jmp 0x104a304c */
  goto L_104a304c;
L_104a3029:;
  /* 104a3029 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a302c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a302f push edx */
  push32((uint32_t)(EDX));
  /* 104a3030 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3033 push eax */
  push32((uint32_t)(EAX));
  /* 104a3034 call 0x104a6760 */
  push32(0x104a3039u); f_104a6760();
  /* 104a3039 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a303c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104a303f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3043 jne 0x104a304c */
  if (!C.zf) goto L_104a304c;
  /* 104a3045 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a3047 jmp 0x104a326a */
  goto L_104a326a;
L_104a304c:;
  /* 104a304c mov ecx, dword ptr [0x104cca88] */
  ECX = (r32((uint32_t)(0x104cca88)));
  /* 104a3052 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3055 mov dword ptr [0x104cca88], ecx */
  w32((uint32_t)(0x104cca88), (ECX));
  /* 104a305b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a305f jne 0x104a30b7 */
  if (!C.zf) goto L_104a30b7;
  /* 104a3061 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a3064 mov eax, dword ptr [0x104ce468] */
  EAX = (r32((uint32_t)(0x104ce468)));
  /* 104a3069 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a306c mov dword ptr [0x104ce468], eax */
  w32((uint32_t)(0x104ce468), (EAX));
  /* 104a3071 mov ecx, dword ptr [0x104ce468] */
  ECX = (r32((uint32_t)(0x104ce468)));
  /* 104a3077 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a307a mov dword ptr [0x104ce468], ecx */
  w32((uint32_t)(0x104ce468), (ECX));
  /* 104a3080 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a3083 mov eax, dword ptr [0x104ce470] */
  EAX = (r32((uint32_t)(0x104ce470)));
  /* 104a3088 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a308b mov dword ptr [0x104ce470], eax */
  w32((uint32_t)(0x104ce470), (EAX));
  /* 104a3090 mov ecx, dword ptr [0x104ce470] */
  ECX = (r32((uint32_t)(0x104ce470)));
  /* 104a3096 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3099 mov dword ptr [0x104ce470], ecx */
  w32((uint32_t)(0x104ce470), (ECX));
  /* 104a309f mov edx, dword ptr [0x104ce470] */
  EDX = (r32((uint32_t)(0x104ce470)));
  /* 104a30a5 cmp edx, dword ptr [0x104ce474] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x104ce474))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a30ab jbe 0x104a30b7 */
  if ((C.cf||C.zf)) goto L_104a30b7;
  /* 104a30ad mov eax, dword ptr [0x104ce470] */
  EAX = (r32((uint32_t)(0x104ce470)));
  /* 104a30b2 mov dword ptr [0x104ce474], eax */
  w32((uint32_t)(0x104ce474), (EAX));
L_104a30b7:;
  /* 104a30b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a30ba add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a30bd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104a30c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a30c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a30c6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a30c9 jbe 0x104a30ef */
  if ((C.cf||C.zf)) goto L_104a30ef;
  /* 104a30cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a30ce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a30d1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a30d4 push edx */
  push32((uint32_t)(EDX));
  /* 104a30d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a30d7 mov al, byte ptr [0x104cca92] */
  AL = (r8((uint32_t)(0x104cca92)));
  /* 104a30dc push eax */
  push32((uint32_t)(EAX));
  /* 104a30dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a30e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a30e3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a30e6 push edx */
  push32((uint32_t)(EDX));
  /* 104a30e7 call 0x104a6600 */
  push32(0x104a30ecu); f_104a6600();
  /* 104a30ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a30ef:;
  /* 104a30ef push 4 */
  push32((uint32_t)(0x4u));
  /* 104a30f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a30f3 mov al, byte ptr [0x104cca90] */
  AL = (r8((uint32_t)(0x104cca90)));
  /* 104a30f8 push eax */
  push32((uint32_t)(EAX));
  /* 104a30f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a30fc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a30ff push ecx */
  push32((uint32_t)(ECX));
  /* 104a3100 call 0x104a6600 */
  push32(0x104a3105u); f_104a6600();
  /* 104a3105 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3108 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a310c jne 0x104a3129 */
  if (!C.zf) goto L_104a3129;
  /* 104a310e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a3111 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a3114 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 104a3117 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a311a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a311d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 104a3120 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a3123 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a3126 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_104a3129:;
  /* 104a3129 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a312c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a312f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_104a3132:;
  /* 104a3132 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3136 jne 0x104a3167 */
  if (!C.zf) goto L_104a3167;
  /* 104a3138 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a313c jne 0x104a3146 */
  if (!C.zf) goto L_104a3146;
  /* 104a313e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a3141 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3144 je 0x104a3167 */
  if (C.zf) goto L_104a3167;
L_104a3146:;
  /* 104a3146 push 0x104c94dc */
  push32((uint32_t)(0x104c94dcu));
  /* 104a314b push 0 */
  push32((uint32_t)(0x0u));
  /* 104a314d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 104a3152 push 0x104c9484 */
  push32((uint32_t)(0x104c9484u));
  /* 104a3157 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a3159 call 0x104a1950 */
  push32(0x104a315eu); f_104a1950();
  /* 104a315e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3161 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3164 jne 0x104a3167 */
  if (!C.zf) goto L_104a3167;
  /* 104a3166 int3  */
  x86_unimpl("int3 @ 0x104a3166");
L_104a3167:;
  /* 104a3167 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a3169 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a316b jne 0x104a3132 */
  if (!C.zf) goto L_104a3132;
  /* 104a316d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a3170 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3173 je 0x104a317b */
  if (C.zf) goto L_104a317b;
  /* 104a3175 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3179 je 0x104a3183 */
  if (C.zf) goto L_104a3183;
L_104a317b:;
  /* 104a317b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a317e jmp 0x104a326a */
  goto L_104a326a;
L_104a3183:;
  /* 104a3183 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a3186 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3189 je 0x104a319b */
  if (C.zf) goto L_104a319b;
  /* 104a318b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a318e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104a3190 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a3193 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104a3196 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 104a3199 jmp 0x104a31d7 */
  goto L_104a31d7;
L_104a319b:;
  /* 104a319b mov eax, dword ptr [0x104ce464] */
  EAX = (r32((uint32_t)(0x104ce464)));
  /* 104a31a0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a31a3 je 0x104a31c6 */
  if (C.zf) goto L_104a31c6;
  /* 104a31a5 push 0x104c94c0 */
  push32((uint32_t)(0x104c94c0u));
  /* 104a31aa push 0 */
  push32((uint32_t)(0x0u));
  /* 104a31ac push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 104a31b1 push 0x104c9484 */
  push32((uint32_t)(0x104c9484u));
  /* 104a31b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a31b8 call 0x104a1950 */
  push32(0x104a31bdu); f_104a1950();
  /* 104a31bd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a31c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a31c3 jne 0x104a31c6 */
  if (!C.zf) goto L_104a31c6;
  /* 104a31c5 int3  */
  x86_unimpl("int3 @ 0x104a31c5");
L_104a31c6:;
  /* 104a31c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a31c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a31ca jne 0x104a319b */
  if (!C.zf) goto L_104a319b;
  /* 104a31cc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a31cf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104a31d2 mov dword ptr [0x104ce464], eax */
  w32((uint32_t)(0x104ce464), (EAX));
L_104a31d7:;
  /* 104a31d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a31da cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a31de je 0x104a31ef */
  if (C.zf) goto L_104a31ef;
  /* 104a31e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a31e3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104a31e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a31e9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a31eb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104a31ed jmp 0x104a322a */
  goto L_104a322a;
L_104a31ef:;
  /* 104a31ef mov eax, dword ptr [0x104ce46c] */
  EAX = (r32((uint32_t)(0x104ce46c)));
  /* 104a31f4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a31f7 je 0x104a321a */
  if (C.zf) goto L_104a321a;
  /* 104a31f9 push 0x104c94a4 */
  push32((uint32_t)(0x104c94a4u));
  /* 104a31fe push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3200 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 104a3205 push 0x104c9484 */
  push32((uint32_t)(0x104c9484u));
  /* 104a320a push 2 */
  push32((uint32_t)(0x2u));
  /* 104a320c call 0x104a1950 */
  push32(0x104a3211u); f_104a1950();
  /* 104a3211 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3214 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3217 jne 0x104a321a */
  if (!C.zf) goto L_104a321a;
  /* 104a3219 int3  */
  x86_unimpl("int3 @ 0x104a3219");
L_104a321a:;
  /* 104a321a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a321c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a321e jne 0x104a31ef */
  if (!C.zf) goto L_104a31ef;
  /* 104a3220 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a3223 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104a3225 mov dword ptr [0x104ce46c], eax */
  w32((uint32_t)(0x104ce46c), (EAX));
L_104a322a:;
  /* 104a322a cmp dword ptr [0x104ce46c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce46c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3231 je 0x104a3241 */
  if (C.zf) goto L_104a3241;
  /* 104a3233 mov ecx, dword ptr [0x104ce46c] */
  ECX = (r32((uint32_t)(0x104ce46c)));
  /* 104a3239 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a323c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 104a323f jmp 0x104a3249 */
  goto L_104a3249;
L_104a3241:;
  /* 104a3241 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a3244 mov dword ptr [0x104ce464], eax */
  w32((uint32_t)(0x104ce464), (EAX));
L_104a3249:;
  /* 104a3249 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a324c mov edx, dword ptr [0x104ce46c] */
  EDX = (r32((uint32_t)(0x104ce46c)));
  /* 104a3252 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 104a3254 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a3257 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 104a325e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a3261 mov dword ptr [0x104ce46c], ecx */
  w32((uint32_t)(0x104ce46c), (ECX));
  /* 104a3267 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104a326a:;
  /* 104a326a pop edi */
  EDI = (pop32());
  /* 104a326b pop esi */
  ESI = (pop32());
  /* 104a326c pop ebx */
  EBX = (pop32());
  /* 104a326d mov esp, ebp */
  ESP = (EBP);
  /* 104a326f pop ebp */
  EBP = (pop32());
  /* 104a3270 ret  */
  ESPCHK(0x104a2d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003280 @ 0x104a3280 (27 bytes, 13 insns) */
void f_104a3280(void) {
  FTRACE(0x104a3280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a3280 push ebp */
  push32((uint32_t)(EBP));
  /* 104a3281 mov ebp, esp */
  EBP = (ESP);
  /* 104a3283 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3285 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3287 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a3289 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a328c push eax */
  push32((uint32_t)(EAX));
  /* 104a328d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a3290 push ecx */
  push32((uint32_t)(ECX));
  /* 104a3291 call 0x104a32a0 */
  push32(0x104a3296u); f_104a32a0();
  /* 104a3296 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3299 pop ebp */
  EBP = (pop32());
  /* 104a329a ret  */
  ESPCHK(0x104a3280u, _esp0);
  ESP += 4; return;
}

/* FUN_100032a0 @ 0x104a32a0 (64 bytes, 27 insns) */
void f_104a32a0(void) {
  FTRACE(0x104a32a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a32a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a32a1 mov ebp, esp */
  EBP = (ESP);
  /* 104a32a3 push ecx */
  push32((uint32_t)(ECX));
  /* 104a32a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a32a6 call 0x104a6290 */
  push32(0x104a32abu); f_104a6290();
  /* 104a32ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a32ae push 0 */
  push32((uint32_t)(0x0u));
  /* 104a32b0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a32b3 push eax */
  push32((uint32_t)(EAX));
  /* 104a32b4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a32b7 push ecx */
  push32((uint32_t)(ECX));
  /* 104a32b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a32bb push edx */
  push32((uint32_t)(EDX));
  /* 104a32bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a32bf push eax */
  push32((uint32_t)(EAX));
  /* 104a32c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a32c3 push ecx */
  push32((uint32_t)(ECX));
  /* 104a32c4 call 0x104a2d60 */
  push32(0x104a32c9u); f_104a2d60();
  /* 104a32c9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a32cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a32cf push 9 */
  push32((uint32_t)(0x9u));
  /* 104a32d1 call 0x104a6330 */
  push32(0x104a32d6u); f_104a6330();
  /* 104a32d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a32d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a32dc mov esp, ebp */
  ESP = (EBP);
  /* 104a32de pop ebp */
  EBP = (pop32());
  /* 104a32df ret  */
  ESPCHK(0x104a32a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032e0 @ 0x104a32e0 (19 bytes, 9 insns) */
void f_104a32e0(void) {
  FTRACE(0x104a32e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a32e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a32e1 mov ebp, esp */
  EBP = (ESP);
  /* 104a32e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a32e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a32e8 push eax */
  push32((uint32_t)(EAX));
  /* 104a32e9 call 0x104a3320 */
  push32(0x104a32eeu); f_104a3320();
  /* 104a32ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a32f1 pop ebp */
  EBP = (pop32());
  /* 104a32f2 ret  */
  ESPCHK(0x104a32e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003300 @ 0x104a3300 (19 bytes, 9 insns) */
void f_104a3300(void) {
  FTRACE(0x104a3300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a3300 push ebp */
  push32((uint32_t)(EBP));
  /* 104a3301 mov ebp, esp */
  EBP = (ESP);
  /* 104a3303 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a3305 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a3308 push eax */
  push32((uint32_t)(EAX));
  /* 104a3309 call 0x104a3350 */
  push32(0x104a330eu); f_104a3350();
  /* 104a330e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3311 pop ebp */
  EBP = (pop32());
  /* 104a3312 ret  */
  ESPCHK(0x104a3300u, _esp0);
  ESP += 4; return;
}

/* FUN_10003320 @ 0x104a3320 (41 bytes, 16 insns) */
void f_104a3320(void) {
  FTRACE(0x104a3320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a3320 push ebp */
  push32((uint32_t)(EBP));
  /* 104a3321 mov ebp, esp */
  EBP = (ESP);
  /* 104a3323 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a3325 call 0x104a6290 */
  push32(0x104a332au); f_104a6290();
  /* 104a332a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a332d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a3330 push eax */
  push32((uint32_t)(EAX));
  /* 104a3331 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a3334 push ecx */
  push32((uint32_t)(ECX));
  /* 104a3335 call 0x104a3350 */
  push32(0x104a333au); f_104a3350();
  /* 104a333a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a333d push 9 */
  push32((uint32_t)(0x9u));
  /* 104a333f call 0x104a6330 */
  push32(0x104a3344u); f_104a6330();
  /* 104a3344 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3347 pop ebp */
  EBP = (pop32());
  /* 104a3348 ret  */
  ESPCHK(0x104a3320u, _esp0);
  ESP += 4; return;
}

/* FUN_10003350 @ 0x104a3350 (1004 bytes, 342 insns) */
void f_104a3350(void) {
  FTRACE(0x104a3350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a3350 push ebp */
  push32((uint32_t)(EBP));
  /* 104a3351 mov ebp, esp */
  EBP = (ESP);
  /* 104a3353 push ecx */
  push32((uint32_t)(ECX));
  /* 104a3354 push ebx */
  push32((uint32_t)(EBX));
  /* 104a3355 push esi */
  push32((uint32_t)(ESI));
  /* 104a3356 push edi */
  push32((uint32_t)(EDI));
  /* 104a3357 mov eax, dword ptr [0x104cca84] */
  EAX = (r32((uint32_t)(0x104cca84)));
  /* 104a335c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 104a335f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a3361 je 0x104a3393 */
  if (C.zf) goto L_104a3393;
L_104a3363:;
  /* 104a3363 call 0x104a3a30 */
  push32(0x104a3368u); f_104a3a30();
  /* 104a3368 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a336a jne 0x104a338d */
  if (!C.zf) goto L_104a338d;
  /* 104a336c push 0x104c9490 */
  push32((uint32_t)(0x104c9490u));
  /* 104a3371 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3373 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 104a3378 push 0x104c9484 */
  push32((uint32_t)(0x104c9484u));
  /* 104a337d push 2 */
  push32((uint32_t)(0x2u));
  /* 104a337f call 0x104a1950 */
  push32(0x104a3384u); f_104a1950();
  /* 104a3384 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3387 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a338a jne 0x104a338d */
  if (!C.zf) goto L_104a338d;
  /* 104a338c int3  */
  x86_unimpl("int3 @ 0x104a338c");
L_104a338d:;
  /* 104a338d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a338f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a3391 jne 0x104a3363 */
  if (!C.zf) goto L_104a3363;
L_104a3393:;
  /* 104a3393 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3397 jne 0x104a339e */
  if (!C.zf) goto L_104a339e;
  /* 104a3399 jmp 0x104a3735 */
  goto L_104a3735;
L_104a339e:;
  /* 104a339e push 0 */
  push32((uint32_t)(0x0u));
  /* 104a33a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a33a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a33a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a33a7 push edx */
  push32((uint32_t)(EDX));
  /* 104a33a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a33aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a33ad push eax */
  push32((uint32_t)(EAX));
  /* 104a33ae push 3 */
  push32((uint32_t)(0x3u));
  /* 104a33b0 call dword ptr [0x104ccc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x104ccc90))), 0x104a33b6u);
  /* 104a33b6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a33b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a33bb jne 0x104a33e8 */
  if (!C.zf) goto L_104a33e8;
L_104a33bd:;
  /* 104a33bd push 0x104c9754 */
  push32((uint32_t)(0x104c9754u));
  /* 104a33c2 push 0x104c9424 */
  push32((uint32_t)(0x104c9424u));
  /* 104a33c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a33c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a33cb push 0 */
  push32((uint32_t)(0x0u));
  /* 104a33cd push 0 */
  push32((uint32_t)(0x0u));
  /* 104a33cf call 0x104a1950 */
  push32(0x104a33d4u); f_104a1950();
  /* 104a33d4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a33d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a33da jne 0x104a33dd */
  if (!C.zf) goto L_104a33dd;
  /* 104a33dc int3  */
  x86_unimpl("int3 @ 0x104a33dc");
L_104a33dd:;
  /* 104a33dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a33df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a33e1 jne 0x104a33bd */
  if (!C.zf) goto L_104a33bd;
  /* 104a33e3 jmp 0x104a3735 */
  goto L_104a3735;
L_104a33e8:;
  /* 104a33e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a33eb push edx */
  push32((uint32_t)(EDX));
  /* 104a33ec call 0x104a3e90 */
  push32(0x104a33f1u); f_104a3e90();
  /* 104a33f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a33f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a33f6 jne 0x104a3419 */
  if (!C.zf) goto L_104a3419;
  /* 104a33f8 push 0x104c9594 */
  push32((uint32_t)(0x104c9594u));
  /* 104a33fd push 0 */
  push32((uint32_t)(0x0u));
  /* 104a33ff push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 104a3404 push 0x104c9484 */
  push32((uint32_t)(0x104c9484u));
  /* 104a3409 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a340b call 0x104a1950 */
  push32(0x104a3410u); f_104a1950();
  /* 104a3410 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3413 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3416 jne 0x104a3419 */
  if (!C.zf) goto L_104a3419;
  /* 104a3418 int3  */
  x86_unimpl("int3 @ 0x104a3418");
L_104a3419:;
  /* 104a3419 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a341b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a341d jne 0x104a33e8 */
  if (!C.zf) goto L_104a33e8;
  /* 104a341f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a3422 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a3425 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104a3428:;
  /* 104a3428 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a342b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104a342e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a3433 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3436 je 0x104a347b */
  if (C.zf) goto L_104a347b;
  /* 104a3438 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a343b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a343f je 0x104a347b */
  if (C.zf) goto L_104a347b;
  /* 104a3441 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3444 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104a3447 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a344c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a344f je 0x104a347b */
  if (C.zf) goto L_104a347b;
  /* 104a3451 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3454 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3458 je 0x104a347b */
  if (C.zf) goto L_104a347b;
  /* 104a345a push 0x104c972c */
  push32((uint32_t)(0x104c972cu));
  /* 104a345f push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3461 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 104a3466 push 0x104c9484 */
  push32((uint32_t)(0x104c9484u));
  /* 104a346b push 2 */
  push32((uint32_t)(0x2u));
  /* 104a346d call 0x104a1950 */
  push32(0x104a3472u); f_104a1950();
  /* 104a3472 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3475 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3478 jne 0x104a347b */
  if (!C.zf) goto L_104a347b;
  /* 104a347a int3  */
  x86_unimpl("int3 @ 0x104a347a");
L_104a347b:;
  /* 104a347b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a347d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a347f jne 0x104a3428 */
  if (!C.zf) goto L_104a3428;
  /* 104a3481 mov eax, dword ptr [0x104cca84] */
  EAX = (r32((uint32_t)(0x104cca84)));
  /* 104a3486 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 104a3489 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a348b jne 0x104a3556 */
  if (!C.zf) goto L_104a3556;
  /* 104a3491 push 4 */
  push32((uint32_t)(0x4u));
  /* 104a3493 mov cl, byte ptr [0x104cca90] */
  CL = (r8((uint32_t)(0x104cca90)));
  /* 104a3499 push ecx */
  push32((uint32_t)(ECX));
  /* 104a349a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a349d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a34a0 push edx */
  push32((uint32_t)(EDX));
  /* 104a34a1 call 0x104a39a0 */
  push32(0x104a34a6u); f_104a39a0();
  /* 104a34a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a34a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a34ab jne 0x104a34f0 */
  if (!C.zf) goto L_104a34f0;
L_104a34ad:;
  /* 104a34ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a34b0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a34b3 push eax */
  push32((uint32_t)(EAX));
  /* 104a34b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a34b7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 104a34ba push edx */
  push32((uint32_t)(EDX));
  /* 104a34bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a34be mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104a34c1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104a34c7 mov edx, dword ptr [ecx*4 + 0x104cca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x104cca94)));
  /* 104a34ce push edx */
  push32((uint32_t)(EDX));
  /* 104a34cf push 0x104c9700 */
  push32((uint32_t)(0x104c9700u));
  /* 104a34d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a34d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a34d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a34da push 1 */
  push32((uint32_t)(0x1u));
  /* 104a34dc call 0x104a1950 */
  push32(0x104a34e1u); f_104a1950();
  /* 104a34e1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a34e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a34e7 jne 0x104a34ea */
  if (!C.zf) goto L_104a34ea;
  /* 104a34e9 int3  */
  x86_unimpl("int3 @ 0x104a34e9");
L_104a34ea:;
  /* 104a34ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a34ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a34ee jne 0x104a34ad */
  if (!C.zf) goto L_104a34ad;
L_104a34f0:;
  /* 104a34f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 104a34f2 mov cl, byte ptr [0x104cca90] */
  CL = (r8((uint32_t)(0x104cca90)));
  /* 104a34f8 push ecx */
  push32((uint32_t)(ECX));
  /* 104a34f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a34fc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104a34ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3502 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 104a3506 push edx */
  push32((uint32_t)(EDX));
  /* 104a3507 call 0x104a39a0 */
  push32(0x104a350cu); f_104a39a0();
  /* 104a350c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a350f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a3511 jne 0x104a3556 */
  if (!C.zf) goto L_104a3556;
L_104a3513:;
  /* 104a3513 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3516 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3519 push eax */
  push32((uint32_t)(EAX));
  /* 104a351a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a351d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 104a3520 push edx */
  push32((uint32_t)(EDX));
  /* 104a3521 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3524 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104a3527 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104a352d mov edx, dword ptr [ecx*4 + 0x104cca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x104cca94)));
  /* 104a3534 push edx */
  push32((uint32_t)(EDX));
  /* 104a3535 push 0x104c96d4 */
  push32((uint32_t)(0x104c96d4u));
  /* 104a353a push 0 */
  push32((uint32_t)(0x0u));
  /* 104a353c push 0 */
  push32((uint32_t)(0x0u));
  /* 104a353e push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3540 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a3542 call 0x104a1950 */
  push32(0x104a3547u); f_104a1950();
  /* 104a3547 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a354a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a354d jne 0x104a3550 */
  if (!C.zf) goto L_104a3550;
  /* 104a354f int3  */
  x86_unimpl("int3 @ 0x104a354f");
L_104a3550:;
  /* 104a3550 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a3552 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a3554 jne 0x104a3513 */
  if (!C.zf) goto L_104a3513;
L_104a3556:;
  /* 104a3556 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3559 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a355d jne 0x104a35cb */
  if (!C.zf) goto L_104a35cb;
L_104a355f:;
  /* 104a355f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3562 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3569 jne 0x104a3574 */
  if (!C.zf) goto L_104a3574;
  /* 104a356b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a356e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3572 je 0x104a3595 */
  if (C.zf) goto L_104a3595;
L_104a3574:;
  /* 104a3574 push 0x104c9694 */
  push32((uint32_t)(0x104c9694u));
  /* 104a3579 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a357b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 104a3580 push 0x104c9484 */
  push32((uint32_t)(0x104c9484u));
  /* 104a3585 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a3587 call 0x104a1950 */
  push32(0x104a358cu); f_104a1950();
  /* 104a358c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a358f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3592 jne 0x104a3595 */
  if (!C.zf) goto L_104a3595;
  /* 104a3594 int3  */
  x86_unimpl("int3 @ 0x104a3594");
L_104a3595:;
  /* 104a3595 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a3597 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a3599 jne 0x104a355f */
  if (!C.zf) goto L_104a355f;
  /* 104a359b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a359e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104a35a1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a35a4 push eax */
  push32((uint32_t)(EAX));
  /* 104a35a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a35a7 mov cl, byte ptr [0x104cca91] */
  CL = (r8((uint32_t)(0x104cca91)));
  /* 104a35ad push ecx */
  push32((uint32_t)(ECX));
  /* 104a35ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a35b1 push edx */
  push32((uint32_t)(EDX));
  /* 104a35b2 call 0x104a6600 */
  push32(0x104a35b7u); f_104a6600();
  /* 104a35b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a35ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a35bd push eax */
  push32((uint32_t)(EAX));
  /* 104a35be call 0x104a6a00 */
  push32(0x104a35c3u); f_104a6a00();
  /* 104a35c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a35c6 jmp 0x104a3735 */
  goto L_104a3735;
L_104a35cb:;
  /* 104a35cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a35ce cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a35d2 jne 0x104a35e1 */
  if (!C.zf) goto L_104a35e1;
  /* 104a35d4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a35d8 jne 0x104a35e1 */
  if (!C.zf) goto L_104a35e1;
  /* 104a35da mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_104a35e1:;
  /* 104a35e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a35e4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104a35e7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a35ea je 0x104a360d */
  if (C.zf) goto L_104a360d;
  /* 104a35ec push 0x104c9674 */
  push32((uint32_t)(0x104c9674u));
  /* 104a35f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a35f3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 104a35f8 push 0x104c9484 */
  push32((uint32_t)(0x104c9484u));
  /* 104a35fd push 2 */
  push32((uint32_t)(0x2u));
  /* 104a35ff call 0x104a1950 */
  push32(0x104a3604u); f_104a1950();
  /* 104a3604 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3607 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a360a jne 0x104a360d */
  if (!C.zf) goto L_104a360d;
  /* 104a360c int3  */
  x86_unimpl("int3 @ 0x104a360c");
L_104a360d:;
  /* 104a360d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a360f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a3611 jne 0x104a35e1 */
  if (!C.zf) goto L_104a35e1;
  /* 104a3613 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3616 mov eax, dword ptr [0x104ce470] */
  EAX = (r32((uint32_t)(0x104ce470)));
  /* 104a361b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a361e mov dword ptr [0x104ce470], eax */
  w32((uint32_t)(0x104ce470), (EAX));
  /* 104a3623 mov ecx, dword ptr [0x104cca84] */
  ECX = (r32((uint32_t)(0x104cca84)));
  /* 104a3629 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 104a362c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a362e jne 0x104a370c */
  if (!C.zf) goto L_104a370c;
  /* 104a3634 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3637 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a363a je 0x104a364c */
  if (C.zf) goto L_104a364c;
  /* 104a363c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a363f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104a3641 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3644 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104a3647 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 104a364a jmp 0x104a368a */
  goto L_104a368a;
L_104a364c:;
  /* 104a364c mov ecx, dword ptr [0x104ce464] */
  ECX = (r32((uint32_t)(0x104ce464)));
  /* 104a3652 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3655 je 0x104a3678 */
  if (C.zf) goto L_104a3678;
  /* 104a3657 push 0x104c965c */
  push32((uint32_t)(0x104c965cu));
  /* 104a365c push 0 */
  push32((uint32_t)(0x0u));
  /* 104a365e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 104a3663 push 0x104c9484 */
  push32((uint32_t)(0x104c9484u));
  /* 104a3668 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a366a call 0x104a1950 */
  push32(0x104a366fu); f_104a1950();
  /* 104a366f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3672 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3675 jne 0x104a3678 */
  if (!C.zf) goto L_104a3678;
  /* 104a3677 int3  */
  x86_unimpl("int3 @ 0x104a3677");
L_104a3678:;
  /* 104a3678 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a367a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a367c jne 0x104a364c */
  if (!C.zf) goto L_104a364c;
  /* 104a367e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3681 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104a3684 mov dword ptr [0x104ce464], ecx */
  w32((uint32_t)(0x104ce464), (ECX));
L_104a368a:;
  /* 104a368a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a368d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3691 je 0x104a36a2 */
  if (C.zf) goto L_104a36a2;
  /* 104a3693 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3696 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104a3699 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a369c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104a369e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104a36a0 jmp 0x104a36df */
  goto L_104a36df;
L_104a36a2:;
  /* 104a36a2 mov ecx, dword ptr [0x104ce46c] */
  ECX = (r32((uint32_t)(0x104ce46c)));
  /* 104a36a8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a36ab je 0x104a36ce */
  if (C.zf) goto L_104a36ce;
  /* 104a36ad push 0x104c9644 */
  push32((uint32_t)(0x104c9644u));
  /* 104a36b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a36b4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 104a36b9 push 0x104c9484 */
  push32((uint32_t)(0x104c9484u));
  /* 104a36be push 2 */
  push32((uint32_t)(0x2u));
  /* 104a36c0 call 0x104a1950 */
  push32(0x104a36c5u); f_104a1950();
  /* 104a36c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a36c8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a36cb jne 0x104a36ce */
  if (!C.zf) goto L_104a36ce;
  /* 104a36cd int3  */
  x86_unimpl("int3 @ 0x104a36cd");
L_104a36ce:;
  /* 104a36ce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a36d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a36d2 jne 0x104a36a2 */
  if (!C.zf) goto L_104a36a2;
  /* 104a36d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a36d7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104a36d9 mov dword ptr [0x104ce46c], ecx */
  w32((uint32_t)(0x104ce46c), (ECX));
L_104a36df:;
  /* 104a36df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a36e2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104a36e5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a36e8 push eax */
  push32((uint32_t)(EAX));
  /* 104a36e9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a36eb mov cl, byte ptr [0x104cca91] */
  CL = (r8((uint32_t)(0x104cca91)));
  /* 104a36f1 push ecx */
  push32((uint32_t)(ECX));
  /* 104a36f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a36f5 push edx */
  push32((uint32_t)(EDX));
  /* 104a36f6 call 0x104a6600 */
  push32(0x104a36fbu); f_104a6600();
  /* 104a36fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a36fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3701 push eax */
  push32((uint32_t)(EAX));
  /* 104a3702 call 0x104a6a00 */
  push32(0x104a3707u); f_104a6a00();
  /* 104a3707 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a370a jmp 0x104a3735 */
  goto L_104a3735;
L_104a370c:;
  /* 104a370c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a370f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 104a3716 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3719 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104a371c push eax */
  push32((uint32_t)(EAX));
  /* 104a371d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a371f mov cl, byte ptr [0x104cca91] */
  CL = (r8((uint32_t)(0x104cca91)));
  /* 104a3725 push ecx */
  push32((uint32_t)(ECX));
  /* 104a3726 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3729 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a372c push edx */
  push32((uint32_t)(EDX));
  /* 104a372d call 0x104a6600 */
  push32(0x104a3732u); f_104a6600();
  /* 104a3732 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a3735:;
  /* 104a3735 pop edi */
  EDI = (pop32());
  /* 104a3736 pop esi */
  ESI = (pop32());
  /* 104a3737 pop ebx */
  EBX = (pop32());
  /* 104a3738 mov esp, ebp */
  ESP = (EBP);
  /* 104a373a pop ebp */
  EBP = (pop32());
  /* 104a373b ret  */
  ESPCHK(0x104a3350u, _esp0);
  ESP += 4; return;
}

/* FUN_10003740 @ 0x104a3740 (19 bytes, 9 insns) */
void f_104a3740(void) {
  FTRACE(0x104a3740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a3740 push ebp */
  push32((uint32_t)(EBP));
  /* 104a3741 mov ebp, esp */
  EBP = (ESP);
  /* 104a3743 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a3745 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a3748 push eax */
  push32((uint32_t)(EAX));
  /* 104a3749 call 0x104a3760 */
  push32(0x104a374eu); f_104a3760();
  /* 104a374e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3751 pop ebp */
  EBP = (pop32());
  /* 104a3752 ret  */
  ESPCHK(0x104a3740u, _esp0);
  ESP += 4; return;
}

/* FUN_10003760 @ 0x104a3760 (342 bytes, 119 insns) */
void f_104a3760(void) {
  FTRACE(0x104a3760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a3760 push ebp */
  push32((uint32_t)(EBP));
  /* 104a3761 mov ebp, esp */
  EBP = (ESP);
  /* 104a3763 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a3766 push ebx */
  push32((uint32_t)(EBX));
  /* 104a3767 push esi */
  push32((uint32_t)(ESI));
  /* 104a3768 push edi */
  push32((uint32_t)(EDI));
  /* 104a3769 mov eax, dword ptr [0x104cca84] */
  EAX = (r32((uint32_t)(0x104cca84)));
  /* 104a376e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 104a3771 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a3773 je 0x104a37a5 */
  if (C.zf) goto L_104a37a5;
L_104a3775:;
  /* 104a3775 call 0x104a3a30 */
  push32(0x104a377au); f_104a3a30();
  /* 104a377a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a377c jne 0x104a379f */
  if (!C.zf) goto L_104a379f;
  /* 104a377e push 0x104c9490 */
  push32((uint32_t)(0x104c9490u));
  /* 104a3783 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3785 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 104a378a push 0x104c9484 */
  push32((uint32_t)(0x104c9484u));
  /* 104a378f push 2 */
  push32((uint32_t)(0x2u));
  /* 104a3791 call 0x104a1950 */
  push32(0x104a3796u); f_104a1950();
  /* 104a3796 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3799 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a379c jne 0x104a379f */
  if (!C.zf) goto L_104a379f;
  /* 104a379e int3  */
  x86_unimpl("int3 @ 0x104a379e");
L_104a379f:;
  /* 104a379f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a37a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a37a3 jne 0x104a3775 */
  if (!C.zf) goto L_104a3775;
L_104a37a5:;
  /* 104a37a5 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a37a7 call 0x104a6290 */
  push32(0x104a37acu); f_104a6290();
  /* 104a37ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a37af:;
  /* 104a37af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a37b2 push edx */
  push32((uint32_t)(EDX));
  /* 104a37b3 call 0x104a3e90 */
  push32(0x104a37b8u); f_104a3e90();
  /* 104a37b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a37bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a37bd jne 0x104a37e0 */
  if (!C.zf) goto L_104a37e0;
  /* 104a37bf push 0x104c9594 */
  push32((uint32_t)(0x104c9594u));
  /* 104a37c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a37c6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 104a37cb push 0x104c9484 */
  push32((uint32_t)(0x104c9484u));
  /* 104a37d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a37d2 call 0x104a1950 */
  push32(0x104a37d7u); f_104a1950();
  /* 104a37d7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a37da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a37dd jne 0x104a37e0 */
  if (!C.zf) goto L_104a37e0;
  /* 104a37df int3  */
  x86_unimpl("int3 @ 0x104a37df");
L_104a37e0:;
  /* 104a37e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a37e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a37e4 jne 0x104a37af */
  if (!C.zf) goto L_104a37af;
  /* 104a37e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a37e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a37ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_104a37ef:;
  /* 104a37ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a37f2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104a37f5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a37fa cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a37fd je 0x104a3842 */
  if (C.zf) goto L_104a3842;
  /* 104a37ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3802 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3806 je 0x104a3842 */
  if (C.zf) goto L_104a3842;
  /* 104a3808 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a380b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104a380e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a3813 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3816 je 0x104a3842 */
  if (C.zf) goto L_104a3842;
  /* 104a3818 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a381b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a381f je 0x104a3842 */
  if (C.zf) goto L_104a3842;
  /* 104a3821 push 0x104c972c */
  push32((uint32_t)(0x104c972cu));
  /* 104a3826 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3828 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 104a382d push 0x104c9484 */
  push32((uint32_t)(0x104c9484u));
  /* 104a3832 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a3834 call 0x104a1950 */
  push32(0x104a3839u); f_104a1950();
  /* 104a3839 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a383c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a383f jne 0x104a3842 */
  if (!C.zf) goto L_104a3842;
  /* 104a3841 int3  */
  x86_unimpl("int3 @ 0x104a3841");
L_104a3842:;
  /* 104a3842 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a3844 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a3846 jne 0x104a37ef */
  if (!C.zf) goto L_104a37ef;
  /* 104a3848 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a384b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a384f jne 0x104a385e */
  if (!C.zf) goto L_104a385e;
  /* 104a3851 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3855 jne 0x104a385e */
  if (!C.zf) goto L_104a385e;
  /* 104a3857 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_104a385e:;
  /* 104a385e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3861 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3865 je 0x104a3899 */
  if (C.zf) goto L_104a3899;
L_104a3867:;
  /* 104a3867 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a386a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104a386d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3870 je 0x104a3893 */
  if (C.zf) goto L_104a3893;
  /* 104a3872 push 0x104c9674 */
  push32((uint32_t)(0x104c9674u));
  /* 104a3877 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3879 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 104a387e push 0x104c9484 */
  push32((uint32_t)(0x104c9484u));
  /* 104a3883 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a3885 call 0x104a1950 */
  push32(0x104a388au); f_104a1950();
  /* 104a388a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a388d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3890 jne 0x104a3893 */
  if (!C.zf) goto L_104a3893;
  /* 104a3892 int3  */
  x86_unimpl("int3 @ 0x104a3892");
L_104a3893:;
  /* 104a3893 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a3895 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a3897 jne 0x104a3867 */
  if (!C.zf) goto L_104a3867;
L_104a3899:;
  /* 104a3899 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a389c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104a389f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a38a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a38a4 call 0x104a6330 */
  push32(0x104a38a9u); f_104a6330();
  /* 104a38a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a38ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a38af pop edi */
  EDI = (pop32());
  /* 104a38b0 pop esi */
  ESI = (pop32());
  /* 104a38b1 pop ebx */
  EBX = (pop32());
  /* 104a38b2 mov esp, ebp */
  ESP = (EBP);
  /* 104a38b4 pop ebp */
  EBP = (pop32());
  /* 104a38b5 ret  */
  ESPCHK(0x104a3760u, _esp0);
  ESP += 4; return;
}

/* FUN_100038c0 @ 0x104a38c0 (28 bytes, 11 insns) */
void f_104a38c0(void) {
  FTRACE(0x104a38c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a38c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a38c1 mov ebp, esp */
  EBP = (ESP);
  /* 104a38c3 push ecx */
  push32((uint32_t)(ECX));
  /* 104a38c4 mov eax, dword ptr [0x104cca8c] */
  EAX = (r32((uint32_t)(0x104cca8c)));
  /* 104a38c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a38cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a38cf mov dword ptr [0x104cca8c], ecx */
  w32((uint32_t)(0x104cca8c), (ECX));
  /* 104a38d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a38d8 mov esp, ebp */
  ESP = (EBP);
  /* 104a38da pop ebp */
  EBP = (pop32());
  /* 104a38db ret  */
  ESPCHK(0x104a38c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100038e0 @ 0x104a38e0 (157 bytes, 59 insns) */
void f_104a38e0(void) {
  FTRACE(0x104a38e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a38e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a38e1 mov ebp, esp */
  EBP = (ESP);
  /* 104a38e3 push ecx */
  push32((uint32_t)(ECX));
  /* 104a38e4 push ebx */
  push32((uint32_t)(EBX));
  /* 104a38e5 push esi */
  push32((uint32_t)(ESI));
  /* 104a38e6 push edi */
  push32((uint32_t)(EDI));
  /* 104a38e7 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a38e9 call 0x104a6290 */
  push32(0x104a38eeu); f_104a6290();
  /* 104a38ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a38f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a38f4 push eax */
  push32((uint32_t)(EAX));
  /* 104a38f5 call 0x104a3e90 */
  push32(0x104a38fau); f_104a3e90();
  /* 104a38fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a38fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a38ff je 0x104a396c */
  if (C.zf) goto L_104a396c;
  /* 104a3901 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a3904 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a3907 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104a390a:;
  /* 104a390a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a390d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104a3910 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a3915 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3918 je 0x104a395d */
  if (C.zf) goto L_104a395d;
  /* 104a391a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a391d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3921 je 0x104a395d */
  if (C.zf) goto L_104a395d;
  /* 104a3923 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3926 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104a3929 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a392e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3931 je 0x104a395d */
  if (C.zf) goto L_104a395d;
  /* 104a3933 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3936 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a393a je 0x104a395d */
  if (C.zf) goto L_104a395d;
  /* 104a393c push 0x104c972c */
  push32((uint32_t)(0x104c972cu));
  /* 104a3941 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3943 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 104a3948 push 0x104c9484 */
  push32((uint32_t)(0x104c9484u));
  /* 104a394d push 2 */
  push32((uint32_t)(0x2u));
  /* 104a394f call 0x104a1950 */
  push32(0x104a3954u); f_104a1950();
  /* 104a3954 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3957 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a395a jne 0x104a395d */
  if (!C.zf) goto L_104a395d;
  /* 104a395c int3  */
  x86_unimpl("int3 @ 0x104a395c");
L_104a395d:;
  /* 104a395d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a395f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a3961 jne 0x104a390a */
  if (!C.zf) goto L_104a390a;
  /* 104a3963 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3966 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a3969 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_104a396c:;
  /* 104a396c push 9 */
  push32((uint32_t)(0x9u));
  /* 104a396e call 0x104a6330 */
  push32(0x104a3973u); f_104a6330();
  /* 104a3973 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3976 pop edi */
  EDI = (pop32());
  /* 104a3977 pop esi */
  ESI = (pop32());
  /* 104a3978 pop ebx */
  EBX = (pop32());
  /* 104a3979 mov esp, ebp */
  ESP = (EBP);
  /* 104a397b pop ebp */
  EBP = (pop32());
  /* 104a397c ret  */
  ESPCHK(0x104a38e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003980 @ 0x104a3980 (28 bytes, 11 insns) */
void f_104a3980(void) {
  FTRACE(0x104a3980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a3980 push ebp */
  push32((uint32_t)(EBP));
  /* 104a3981 mov ebp, esp */
  EBP = (ESP);
  /* 104a3983 push ecx */
  push32((uint32_t)(ECX));
  /* 104a3984 mov eax, dword ptr [0x104ccc90] */
  EAX = (r32((uint32_t)(0x104ccc90)));
  /* 104a3989 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a398c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a398f mov dword ptr [0x104ccc90], ecx */
  w32((uint32_t)(0x104ccc90), (ECX));
  /* 104a3995 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3998 mov esp, ebp */
  ESP = (EBP);
  /* 104a399a pop ebp */
  EBP = (pop32());
  /* 104a399b ret  */
  ESPCHK(0x104a3980u, _esp0);
  ESP += 4; return;
}

/* FUN_100039a0 @ 0x104a39a0 (136 bytes, 55 insns) */
void f_104a39a0(void) {
  FTRACE(0x104a39a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a39a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a39a1 mov ebp, esp */
  EBP = (ESP);
  /* 104a39a3 push ecx */
  push32((uint32_t)(ECX));
  /* 104a39a4 push ebx */
  push32((uint32_t)(EBX));
  /* 104a39a5 push esi */
  push32((uint32_t)(ESI));
  /* 104a39a6 push edi */
  push32((uint32_t)(EDI));
  /* 104a39a7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_104a39ae:;
  /* 104a39ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a39b1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a39b4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a39b7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 104a39ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a39bc je 0x104a3a1e */
  if (C.zf) goto L_104a3a1e;
  /* 104a39be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a39c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a39c3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104a39c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a39c8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104a39ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a39d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a39d4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 104a39d7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a39d9 je 0x104a3a1c */
  if (C.zf) goto L_104a3a1c;
L_104a39db:;
  /* 104a39db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a39de and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a39e3 push eax */
  push32((uint32_t)(EAX));
  /* 104a39e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a39e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a39e9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 104a39ec push edx */
  push32((uint32_t)(EDX));
  /* 104a39ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a39f0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a39f3 push eax */
  push32((uint32_t)(EAX));
  /* 104a39f4 push 0x104c9770 */
  push32((uint32_t)(0x104c9770u));
  /* 104a39f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a39fb push 0 */
  push32((uint32_t)(0x0u));
  /* 104a39fd push 0 */
  push32((uint32_t)(0x0u));
  /* 104a39ff push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3a01 call 0x104a1950 */
  push32(0x104a3a06u); f_104a1950();
  /* 104a3a06 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3a09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3a0c jne 0x104a3a0f */
  if (!C.zf) goto L_104a3a0f;
  /* 104a3a0e int3  */
  x86_unimpl("int3 @ 0x104a3a0e");
L_104a3a0f:;
  /* 104a3a0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a3a11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a3a13 jne 0x104a39db */
  if (!C.zf) goto L_104a39db;
  /* 104a3a15 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104a3a1c:;
  /* 104a3a1c jmp 0x104a39ae */
  goto L_104a39ae;
L_104a3a1e:;
  /* 104a3a1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3a21 pop edi */
  EDI = (pop32());
  /* 104a3a22 pop esi */
  ESI = (pop32());
  /* 104a3a23 pop ebx */
  EBX = (pop32());
  /* 104a3a24 mov esp, ebp */
  ESP = (EBP);
  /* 104a3a26 pop ebp */
  EBP = (pop32());
  /* 104a3a27 ret  */
  ESPCHK(0x104a39a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a30 @ 0x104a3a30 (863 bytes, 299 insns) [1 switch table(s)] */
void f_104a3a30(void) {
  FTRACE(0x104a3a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a3a30 push ebp */
  push32((uint32_t)(EBP));
  /* 104a3a31 mov ebp, esp */
  EBP = (ESP);
  /* 104a3a33 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a3a36 push ebx */
  push32((uint32_t)(EBX));
  /* 104a3a37 push esi */
  push32((uint32_t)(ESI));
  /* 104a3a38 push edi */
  push32((uint32_t)(EDI));
  /* 104a3a39 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104a3a40 mov eax, dword ptr [0x104cca84] */
  EAX = (r32((uint32_t)(0x104cca84)));
  /* 104a3a45 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 104a3a48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a3a4a jne 0x104a3a56 */
  if (!C.zf) goto L_104a3a56;
  /* 104a3a4c mov eax, 1 */
  EAX = (0x1u);
  /* 104a3a51 jmp 0x104a3d88 */
  goto L_104a3d88;
L_104a3a56:;
  /* 104a3a56 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a3a58 call 0x104a6290 */
  push32(0x104a3a5du); f_104a6290();
  /* 104a3a5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3a60 call 0x104a6a70 */
  push32(0x104a3a65u); f_104a6a70();
  /* 104a3a65 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104a3a68 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3a6c je 0x104a3b79 */
  if (C.zf) goto L_104a3b79;
  /* 104a3a72 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3a76 je 0x104a3b79 */
  if (C.zf) goto L_104a3b79;
  /* 104a3a7c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a3a7f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 104a3a82 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a3a85 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3a88 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 104a3a8b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3a8f ja 0x104a3b42 */
  if ((!C.cf&&!C.zf)) goto L_104a3b42;
  /* 104a3a95 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a3a98 jmp dword ptr [eax*4 + 0x104a3d8f] */
  switch (EAX) {
    case 0: goto L_104a3b1a;
    case 1: goto L_104a3af2;
    case 2: goto L_104a3aca;
    case 3: goto L_104a3a9f;
    default: x86_unimpl("switch@0x104a3a98 out of table"); return;
  }
L_104a3a9f:;
  /* 104a3a9f push 0x104c98c4 */
  push32((uint32_t)(0x104c98c4u));
  /* 104a3aa4 push 0x104c9424 */
  push32((uint32_t)(0x104c9424u));
  /* 104a3aa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3aab push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3aad push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3aaf push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3ab1 call 0x104a1950 */
  push32(0x104a3ab6u); f_104a1950();
  /* 104a3ab6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3ab9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3abc jne 0x104a3abf */
  if (!C.zf) goto L_104a3abf;
  /* 104a3abe int3  */
  x86_unimpl("int3 @ 0x104a3abe");
L_104a3abf:;
  /* 104a3abf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a3ac1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a3ac3 jne 0x104a3a9f */
  if (!C.zf) goto L_104a3a9f;
  /* 104a3ac5 jmp 0x104a3b68 */
  goto L_104a3b68;
L_104a3aca:;
  /* 104a3aca push 0x104c98a0 */
  push32((uint32_t)(0x104c98a0u));
  /* 104a3acf push 0x104c9424 */
  push32((uint32_t)(0x104c9424u));
  /* 104a3ad4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3ad6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3ad8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3ada push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3adc call 0x104a1950 */
  push32(0x104a3ae1u); f_104a1950();
  /* 104a3ae1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3ae4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3ae7 jne 0x104a3aea */
  if (!C.zf) goto L_104a3aea;
  /* 104a3ae9 int3  */
  x86_unimpl("int3 @ 0x104a3ae9");
L_104a3aea:;
  /* 104a3aea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a3aec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a3aee jne 0x104a3aca */
  if (!C.zf) goto L_104a3aca;
  /* 104a3af0 jmp 0x104a3b68 */
  goto L_104a3b68;
L_104a3af2:;
  /* 104a3af2 push 0x104c987c */
  push32((uint32_t)(0x104c987cu));
  /* 104a3af7 push 0x104c9424 */
  push32((uint32_t)(0x104c9424u));
  /* 104a3afc push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3afe push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3b00 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3b02 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3b04 call 0x104a1950 */
  push32(0x104a3b09u); f_104a1950();
  /* 104a3b09 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3b0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3b0f jne 0x104a3b12 */
  if (!C.zf) goto L_104a3b12;
  /* 104a3b11 int3  */
  x86_unimpl("int3 @ 0x104a3b11");
L_104a3b12:;
  /* 104a3b12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a3b14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a3b16 jne 0x104a3af2 */
  if (!C.zf) goto L_104a3af2;
  /* 104a3b18 jmp 0x104a3b68 */
  goto L_104a3b68;
L_104a3b1a:;
  /* 104a3b1a push 0x104c9858 */
  push32((uint32_t)(0x104c9858u));
  /* 104a3b1f push 0x104c9424 */
  push32((uint32_t)(0x104c9424u));
  /* 104a3b24 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3b28 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3b2a push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3b2c call 0x104a1950 */
  push32(0x104a3b31u); f_104a1950();
  /* 104a3b31 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3b34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3b37 jne 0x104a3b3a */
  if (!C.zf) goto L_104a3b3a;
  /* 104a3b39 int3  */
  x86_unimpl("int3 @ 0x104a3b39");
L_104a3b3a:;
  /* 104a3b3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a3b3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a3b3e jne 0x104a3b1a */
  if (!C.zf) goto L_104a3b1a;
  /* 104a3b40 jmp 0x104a3b68 */
  goto L_104a3b68;
L_104a3b42:;
  /* 104a3b42 push 0x104c982c */
  push32((uint32_t)(0x104c982cu));
  /* 104a3b47 push 0x104c9424 */
  push32((uint32_t)(0x104c9424u));
  /* 104a3b4c push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3b4e push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3b50 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3b52 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3b54 call 0x104a1950 */
  push32(0x104a3b59u); f_104a1950();
  /* 104a3b59 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3b5c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3b5f jne 0x104a3b62 */
  if (!C.zf) goto L_104a3b62;
  /* 104a3b61 int3  */
  x86_unimpl("int3 @ 0x104a3b61");
L_104a3b62:;
  /* 104a3b62 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a3b64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a3b66 jne 0x104a3b42 */
  if (!C.zf) goto L_104a3b42;
L_104a3b68:;
  /* 104a3b68 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a3b6a call 0x104a6330 */
  push32(0x104a3b6fu); f_104a6330();
  /* 104a3b6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3b72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a3b74 jmp 0x104a3d88 */
  goto L_104a3d88;
L_104a3b79:;
  /* 104a3b79 mov eax, dword ptr [0x104ce46c] */
  EAX = (r32((uint32_t)(0x104ce46c)));
  /* 104a3b7e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104a3b81 jmp 0x104a3b8b */
  goto L_104a3b8b;
L_104a3b83:;
  /* 104a3b83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3b86 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a3b88 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_104a3b8b:;
  /* 104a3b8b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3b8f je 0x104a3d7b */
  if (C.zf) goto L_104a3d7b;
  /* 104a3b95 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 104a3b9c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3b9f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104a3ba2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104a3ba8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3bab je 0x104a3bd0 */
  if (C.zf) goto L_104a3bd0;
  /* 104a3bad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3bb0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3bb4 je 0x104a3bd0 */
  if (C.zf) goto L_104a3bd0;
  /* 104a3bb6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3bb9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104a3bbc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104a3bc2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3bc5 je 0x104a3bd0 */
  if (C.zf) goto L_104a3bd0;
  /* 104a3bc7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3bca cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3bce jne 0x104a3be8 */
  if (!C.zf) goto L_104a3be8;
L_104a3bd0:;
  /* 104a3bd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3bd3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104a3bd6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104a3bdc mov edx, dword ptr [ecx*4 + 0x104cca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x104cca94)));
  /* 104a3be3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104a3be6 jmp 0x104a3bef */
  goto L_104a3bef;
L_104a3be8:;
  /* 104a3be8 mov dword ptr [ebp - 0x14], 0x104c9824 */
  w32((uint32_t)(EBP + -0x14), (0x104c9824u));
L_104a3bef:;
  /* 104a3bef push 4 */
  push32((uint32_t)(0x4u));
  /* 104a3bf1 mov al, byte ptr [0x104cca90] */
  AL = (r8((uint32_t)(0x104cca90)));
  /* 104a3bf6 push eax */
  push32((uint32_t)(EAX));
  /* 104a3bf7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3bfa add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3bfd push ecx */
  push32((uint32_t)(ECX));
  /* 104a3bfe call 0x104a39a0 */
  push32(0x104a3c03u); f_104a39a0();
  /* 104a3c03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3c06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a3c08 jne 0x104a3c44 */
  if (!C.zf) goto L_104a3c44;
L_104a3c0a:;
  /* 104a3c0a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3c0d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3c10 push edx */
  push32((uint32_t)(EDX));
  /* 104a3c11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3c14 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 104a3c17 push ecx */
  push32((uint32_t)(ECX));
  /* 104a3c18 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a3c1b push edx */
  push32((uint32_t)(EDX));
  /* 104a3c1c push 0x104c9700 */
  push32((uint32_t)(0x104c9700u));
  /* 104a3c21 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3c23 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3c27 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3c29 call 0x104a1950 */
  push32(0x104a3c2eu); f_104a1950();
  /* 104a3c2e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3c31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3c34 jne 0x104a3c37 */
  if (!C.zf) goto L_104a3c37;
  /* 104a3c36 int3  */
  x86_unimpl("int3 @ 0x104a3c36");
L_104a3c37:;
  /* 104a3c37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a3c39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a3c3b jne 0x104a3c0a */
  if (!C.zf) goto L_104a3c0a;
  /* 104a3c3d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_104a3c44:;
  /* 104a3c44 push 4 */
  push32((uint32_t)(0x4u));
  /* 104a3c46 mov cl, byte ptr [0x104cca90] */
  CL = (r8((uint32_t)(0x104cca90)));
  /* 104a3c4c push ecx */
  push32((uint32_t)(ECX));
  /* 104a3c4d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3c50 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104a3c53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3c56 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 104a3c5a push edx */
  push32((uint32_t)(EDX));
  /* 104a3c5b call 0x104a39a0 */
  push32(0x104a3c60u); f_104a39a0();
  /* 104a3c60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3c63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a3c65 jne 0x104a3ca1 */
  if (!C.zf) goto L_104a3ca1;
L_104a3c67:;
  /* 104a3c67 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3c6a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3c6d push eax */
  push32((uint32_t)(EAX));
  /* 104a3c6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3c71 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 104a3c74 push edx */
  push32((uint32_t)(EDX));
  /* 104a3c75 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a3c78 push eax */
  push32((uint32_t)(EAX));
  /* 104a3c79 push 0x104c96d4 */
  push32((uint32_t)(0x104c96d4u));
  /* 104a3c7e push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3c80 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3c82 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3c84 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3c86 call 0x104a1950 */
  push32(0x104a3c8bu); f_104a1950();
  /* 104a3c8b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3c8e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3c91 jne 0x104a3c94 */
  if (!C.zf) goto L_104a3c94;
  /* 104a3c93 int3  */
  x86_unimpl("int3 @ 0x104a3c93");
L_104a3c94:;
  /* 104a3c94 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a3c96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a3c98 jne 0x104a3c67 */
  if (!C.zf) goto L_104a3c67;
  /* 104a3c9a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_104a3ca1:;
  /* 104a3ca1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3ca4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3ca8 jne 0x104a3cfa */
  if (!C.zf) goto L_104a3cfa;
  /* 104a3caa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3cad mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104a3cb0 push ecx */
  push32((uint32_t)(ECX));
  /* 104a3cb1 mov dl, byte ptr [0x104cca91] */
  DL = (r8((uint32_t)(0x104cca91)));
  /* 104a3cb7 push edx */
  push32((uint32_t)(EDX));
  /* 104a3cb8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3cbb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3cbe push eax */
  push32((uint32_t)(EAX));
  /* 104a3cbf call 0x104a39a0 */
  push32(0x104a3cc4u); f_104a39a0();
  /* 104a3cc4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3cc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a3cc9 jne 0x104a3cfa */
  if (!C.zf) goto L_104a3cfa;
L_104a3ccb:;
  /* 104a3ccb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3cce add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3cd1 push ecx */
  push32((uint32_t)(ECX));
  /* 104a3cd2 push 0x104c97f8 */
  push32((uint32_t)(0x104c97f8u));
  /* 104a3cd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3cd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3cdb push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3cdd push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3cdf call 0x104a1950 */
  push32(0x104a3ce4u); f_104a1950();
  /* 104a3ce4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3ce7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3cea jne 0x104a3ced */
  if (!C.zf) goto L_104a3ced;
  /* 104a3cec int3  */
  x86_unimpl("int3 @ 0x104a3cec");
L_104a3ced:;
  /* 104a3ced xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a3cef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a3cf1 jne 0x104a3ccb */
  if (!C.zf) goto L_104a3ccb;
  /* 104a3cf3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_104a3cfa:;
  /* 104a3cfa cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3cfe jne 0x104a3d76 */
  if (!C.zf) goto L_104a3d76;
  /* 104a3d00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3d03 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3d07 je 0x104a3d3c */
  if (C.zf) goto L_104a3d3c;
L_104a3d09:;
  /* 104a3d09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3d0c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104a3d0f push edx */
  push32((uint32_t)(EDX));
  /* 104a3d10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3d13 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104a3d16 push ecx */
  push32((uint32_t)(ECX));
  /* 104a3d17 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a3d1a push edx */
  push32((uint32_t)(EDX));
  /* 104a3d1b push 0x104c97d8 */
  push32((uint32_t)(0x104c97d8u));
  /* 104a3d20 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3d22 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3d24 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3d26 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3d28 call 0x104a1950 */
  push32(0x104a3d2du); f_104a1950();
  /* 104a3d2d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3d30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3d33 jne 0x104a3d36 */
  if (!C.zf) goto L_104a3d36;
  /* 104a3d35 int3  */
  x86_unimpl("int3 @ 0x104a3d35");
L_104a3d36:;
  /* 104a3d36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a3d38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a3d3a jne 0x104a3d09 */
  if (!C.zf) goto L_104a3d09;
L_104a3d3c:;
  /* 104a3d3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3d3f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 104a3d42 push edx */
  push32((uint32_t)(EDX));
  /* 104a3d43 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a3d46 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3d49 push eax */
  push32((uint32_t)(EAX));
  /* 104a3d4a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a3d4d push ecx */
  push32((uint32_t)(ECX));
  /* 104a3d4e push 0x104c97ac */
  push32((uint32_t)(0x104c97acu));
  /* 104a3d53 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3d55 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3d57 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3d59 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3d5b call 0x104a1950 */
  push32(0x104a3d60u); f_104a1950();
  /* 104a3d60 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3d63 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3d66 jne 0x104a3d69 */
  if (!C.zf) goto L_104a3d69;
  /* 104a3d68 int3  */
  x86_unimpl("int3 @ 0x104a3d68");
L_104a3d69:;
  /* 104a3d69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a3d6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a3d6d jne 0x104a3d3c */
  if (!C.zf) goto L_104a3d3c;
  /* 104a3d6f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104a3d76:;
  /* 104a3d76 jmp 0x104a3b83 */
  goto L_104a3b83;
L_104a3d7b:;
  /* 104a3d7b push 9 */
  push32((uint32_t)(0x9u));
  /* 104a3d7d call 0x104a6330 */
  push32(0x104a3d82u); f_104a6330();
  /* 104a3d82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3d85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104a3d88:;
  /* 104a3d88 pop edi */
  EDI = (pop32());
  /* 104a3d89 pop esi */
  ESI = (pop32());
  /* 104a3d8a pop ebx */
  EBX = (pop32());
  /* 104a3d8b mov esp, ebp */
  ESP = (EBP);
  /* 104a3d8d pop ebp */
  EBP = (pop32());
  /* 104a3d8e ret  */
  ESPCHK(0x104a3a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003da0 @ 0x104a3da0 (34 bytes, 13 insns) */
void f_104a3da0(void) {
  FTRACE(0x104a3da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a3da0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a3da1 mov ebp, esp */
  EBP = (ESP);
  /* 104a3da3 push ecx */
  push32((uint32_t)(ECX));
  /* 104a3da4 mov eax, dword ptr [0x104cca84] */
  EAX = (r32((uint32_t)(0x104cca84)));
  /* 104a3da9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a3dac cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3db0 je 0x104a3dbb */
  if (C.zf) goto L_104a3dbb;
  /* 104a3db2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a3db5 mov dword ptr [0x104cca84], ecx */
  w32((uint32_t)(0x104cca84), (ECX));
L_104a3dbb:;
  /* 104a3dbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3dbe mov esp, ebp */
  ESP = (EBP);
  /* 104a3dc0 pop ebp */
  EBP = (pop32());
  /* 104a3dc1 ret  */
  ESPCHK(0x104a3da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003dd0 @ 0x104a3dd0 (103 bytes, 38 insns) */
void f_104a3dd0(void) {
  FTRACE(0x104a3dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a3dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a3dd1 mov ebp, esp */
  EBP = (ESP);
  /* 104a3dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 104a3dd4 mov eax, dword ptr [0x104cca84] */
  EAX = (r32((uint32_t)(0x104cca84)));
  /* 104a3dd9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 104a3ddc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a3dde jne 0x104a3de2 */
  if (!C.zf) goto L_104a3de2;
  /* 104a3de0 jmp 0x104a3e33 */
  goto L_104a3e33;
L_104a3de2:;
  /* 104a3de2 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a3de4 call 0x104a6290 */
  push32(0x104a3de9u); f_104a6290();
  /* 104a3de9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3dec mov ecx, dword ptr [0x104ce46c] */
  ECX = (r32((uint32_t)(0x104ce46c)));
  /* 104a3df2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104a3df5 jmp 0x104a3dff */
  goto L_104a3dff;
L_104a3df7:;
  /* 104a3df7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3dfa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104a3dfc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104a3dff:;
  /* 104a3dff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3e03 je 0x104a3e29 */
  if (C.zf) goto L_104a3e29;
  /* 104a3e05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3e08 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 104a3e0b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104a3e11 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3e14 jne 0x104a3e27 */
  if (!C.zf) goto L_104a3e27;
  /* 104a3e16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a3e19 push eax */
  push32((uint32_t)(EAX));
  /* 104a3e1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3e1d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3e20 push ecx */
  push32((uint32_t)(ECX));
  /* 104a3e21 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x104a3e24u);
  /* 104a3e24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a3e27:;
  /* 104a3e27 jmp 0x104a3df7 */
  goto L_104a3df7;
L_104a3e29:;
  /* 104a3e29 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a3e2b call 0x104a6330 */
  push32(0x104a3e30u); f_104a6330();
  /* 104a3e30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a3e33:;
  /* 104a3e33 mov esp, ebp */
  ESP = (EBP);
  /* 104a3e35 pop ebp */
  EBP = (pop32());
  /* 104a3e36 ret  */
  ESPCHK(0x104a3dd0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x104a3e40 (75 bytes, 28 insns) */
void f_104a3e40(void) {
  FTRACE(0x104a3e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a3e40 push ebp */
  push32((uint32_t)(EBP));
  /* 104a3e41 mov ebp, esp */
  EBP = (ESP);
  /* 104a3e43 push ecx */
  push32((uint32_t)(ECX));
  /* 104a3e44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3e48 je 0x104a3e7d */
  if (C.zf) goto L_104a3e7d;
  /* 104a3e4a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a3e4d push eax */
  push32((uint32_t)(EAX));
  /* 104a3e4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a3e51 push ecx */
  push32((uint32_t)(ECX));
  /* 104a3e52 call dword ptr [0x104d02b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02b8))), 0x104a3e58u);
  /* 104a3e58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a3e5a jne 0x104a3e7d */
  if (!C.zf) goto L_104a3e7d;
  /* 104a3e5c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3e60 je 0x104a3e74 */
  if (C.zf) goto L_104a3e74;
  /* 104a3e62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a3e65 push edx */
  push32((uint32_t)(EDX));
  /* 104a3e66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a3e69 push eax */
  push32((uint32_t)(EAX));
  /* 104a3e6a call dword ptr [0x104d02b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02b4))), 0x104a3e70u);
  /* 104a3e70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a3e72 jne 0x104a3e7d */
  if (!C.zf) goto L_104a3e7d;
L_104a3e74:;
  /* 104a3e74 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104a3e7b jmp 0x104a3e84 */
  goto L_104a3e84;
L_104a3e7d:;
  /* 104a3e7d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104a3e84:;
  /* 104a3e84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3e87 mov esp, ebp */
  ESP = (EBP);
  /* 104a3e89 pop ebp */
  EBP = (pop32());
  /* 104a3e8a ret  */
  ESPCHK(0x104a3e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e90 @ 0x104a3e90 (134 bytes, 50 insns) */
void f_104a3e90(void) {
  FTRACE(0x104a3e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a3e90 push ebp */
  push32((uint32_t)(EBP));
  /* 104a3e91 mov ebp, esp */
  EBP = (ESP);
  /* 104a3e93 push ecx */
  push32((uint32_t)(ECX));
  /* 104a3e94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3e98 jne 0x104a3e9e */
  if (!C.zf) goto L_104a3e9e;
  /* 104a3e9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a3e9c jmp 0x104a3f12 */
  goto L_104a3f12;
L_104a3e9e:;
  /* 104a3e9e push 1 */
  push32((uint32_t)(0x1u));
  /* 104a3ea0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 104a3ea2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a3ea5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a3ea8 push eax */
  push32((uint32_t)(EAX));
  /* 104a3ea9 call 0x104a3e40 */
  push32(0x104a3eaeu); f_104a3e40();
  /* 104a3eae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3eb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a3eb3 jne 0x104a3eb9 */
  if (!C.zf) goto L_104a3eb9;
  /* 104a3eb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a3eb7 jmp 0x104a3f12 */
  goto L_104a3f12;
L_104a3eb9:;
  /* 104a3eb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a3ebc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a3ebf push ecx */
  push32((uint32_t)(ECX));
  /* 104a3ec0 call 0x104a6b90 */
  push32(0x104a3ec5u); f_104a6b90();
  /* 104a3ec5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3ec8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a3ecb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3ecf je 0x104a3ee6 */
  if (C.zf) goto L_104a3ee6;
  /* 104a3ed1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a3ed4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a3ed7 push edx */
  push32((uint32_t)(EDX));
  /* 104a3ed8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3edb push eax */
  push32((uint32_t)(EAX));
  /* 104a3edc call 0x104a6bf0 */
  push32(0x104a3ee1u); f_104a6bf0();
  /* 104a3ee1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3ee4 jmp 0x104a3f12 */
  goto L_104a3f12;
L_104a3ee6:;
  /* 104a3ee6 mov ecx, dword ptr [0x104ce420] */
  ECX = (r32((uint32_t)(0x104ce420)));
  /* 104a3eec and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 104a3ef2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a3ef4 je 0x104a3efd */
  if (C.zf) goto L_104a3efd;
  /* 104a3ef6 mov eax, 1 */
  EAX = (0x1u);
  /* 104a3efb jmp 0x104a3f12 */
  goto L_104a3f12;
L_104a3efd:;
  /* 104a3efd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a3f00 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a3f03 push edx */
  push32((uint32_t)(EDX));
  /* 104a3f04 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a3f06 mov eax, dword ptr [0x104cfdcc] */
  EAX = (r32((uint32_t)(0x104cfdcc)));
  /* 104a3f0b push eax */
  push32((uint32_t)(EAX));
  /* 104a3f0c call dword ptr [0x104d02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02bc))), 0x104a3f12u);
L_104a3f12:;
  /* 104a3f12 mov esp, ebp */
  ESP = (EBP);
  /* 104a3f14 pop ebp */
  EBP = (pop32());
  /* 104a3f15 ret  */
  ESPCHK(0x104a3e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f20 @ 0x104a3f20 (227 bytes, 80 insns) */
void f_104a3f20(void) {
  FTRACE(0x104a3f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a3f20 push ebp */
  push32((uint32_t)(EBP));
  /* 104a3f21 mov ebp, esp */
  EBP = (ESP);
  /* 104a3f23 push ecx */
  push32((uint32_t)(ECX));
  /* 104a3f24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a3f27 push eax */
  push32((uint32_t)(EAX));
  /* 104a3f28 call 0x104a3e90 */
  push32(0x104a3f2du); f_104a3e90();
  /* 104a3f2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3f30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a3f32 jne 0x104a3f3b */
  if (!C.zf) goto L_104a3f3b;
  /* 104a3f34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a3f36 jmp 0x104a3fff */
  goto L_104a3fff;
L_104a3f3b:;
  /* 104a3f3b push 9 */
  push32((uint32_t)(0x9u));
  /* 104a3f3d call 0x104a6290 */
  push32(0x104a3f42u); f_104a6290();
  /* 104a3f42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3f45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a3f48 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a3f4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104a3f4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3f51 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104a3f54 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a3f59 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3f5c je 0x104a3f80 */
  if (C.zf) goto L_104a3f80;
  /* 104a3f5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3f61 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3f65 je 0x104a3f80 */
  if (C.zf) goto L_104a3f80;
  /* 104a3f67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3f6a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104a3f6d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a3f72 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3f75 je 0x104a3f80 */
  if (C.zf) goto L_104a3f80;
  /* 104a3f77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3f7a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3f7e jne 0x104a3ff3 */
  if (!C.zf) goto L_104a3ff3;
L_104a3f80:;
  /* 104a3f80 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a3f82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a3f85 push edx */
  push32((uint32_t)(EDX));
  /* 104a3f86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a3f89 push eax */
  push32((uint32_t)(EAX));
  /* 104a3f8a call 0x104a3e40 */
  push32(0x104a3f8fu); f_104a3e40();
  /* 104a3f8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3f92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a3f94 je 0x104a3ff3 */
  if (C.zf) goto L_104a3ff3;
  /* 104a3f96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3f99 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 104a3f9c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3f9f jne 0x104a3ff3 */
  if (!C.zf) goto L_104a3ff3;
  /* 104a3fa1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3fa4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 104a3fa7 cmp ecx, dword ptr [0x104cca88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x104cca88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3fad jg 0x104a3ff3 */
  if ((!C.zf&&C.sf==C.of)) goto L_104a3ff3;
  /* 104a3faf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3fb3 je 0x104a3fc0 */
  if (C.zf) goto L_104a3fc0;
  /* 104a3fb5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a3fb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3fbb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 104a3fbe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_104a3fc0:;
  /* 104a3fc0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3fc4 je 0x104a3fd1 */
  if (C.zf) goto L_104a3fd1;
  /* 104a3fc6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a3fc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3fcc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104a3fcf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_104a3fd1:;
  /* 104a3fd1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a3fd5 je 0x104a3fe2 */
  if (C.zf) goto L_104a3fe2;
  /* 104a3fd7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a3fda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a3fdd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104a3fe0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_104a3fe2:;
  /* 104a3fe2 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a3fe4 call 0x104a6330 */
  push32(0x104a3fe9u); f_104a6330();
  /* 104a3fe9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3fec mov eax, 1 */
  EAX = (0x1u);
  /* 104a3ff1 jmp 0x104a3fff */
  goto L_104a3fff;
L_104a3ff3:;
  /* 104a3ff3 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a3ff5 call 0x104a6330 */
  push32(0x104a3ffau); f_104a6330();
  /* 104a3ffa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a3ffd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104a3fff:;
  /* 104a3fff mov esp, ebp */
  ESP = (EBP);
  /* 104a4001 pop ebp */
  EBP = (pop32());
  /* 104a4002 ret  */
  ESPCHK(0x104a3f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004010 @ 0x104a4010 (28 bytes, 11 insns) */
void f_104a4010(void) {
  FTRACE(0x104a4010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a4010 push ebp */
  push32((uint32_t)(EBP));
  /* 104a4011 mov ebp, esp */
  EBP = (ESP);
  /* 104a4013 push ecx */
  push32((uint32_t)(ECX));
  /* 104a4014 mov eax, dword ptr [0x104cfdd8] */
  EAX = (r32((uint32_t)(0x104cfdd8)));
  /* 104a4019 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a401c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a401f mov dword ptr [0x104cfdd8], ecx */
  w32((uint32_t)(0x104cfdd8), (ECX));
  /* 104a4025 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4028 mov esp, ebp */
  ESP = (EBP);
  /* 104a402a pop ebp */
  EBP = (pop32());
  /* 104a402b ret  */
  ESPCHK(0x104a4010u, _esp0);
  ESP += 4; return;
}

/* FUN_10004030 @ 0x104a4030 (362 bytes, 116 insns) */
void f_104a4030(void) {
  FTRACE(0x104a4030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a4030 push ebp */
  push32((uint32_t)(EBP));
  /* 104a4031 mov ebp, esp */
  EBP = (ESP);
  /* 104a4033 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a4036 push ebx */
  push32((uint32_t)(EBX));
  /* 104a4037 push esi */
  push32((uint32_t)(ESI));
  /* 104a4038 push edi */
  push32((uint32_t)(EDI));
  /* 104a4039 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a403d jne 0x104a406a */
  if (!C.zf) goto L_104a406a;
L_104a403f:;
  /* 104a403f push 0x104c990c */
  push32((uint32_t)(0x104c990cu));
  /* 104a4044 push 0x104c9424 */
  push32((uint32_t)(0x104c9424u));
  /* 104a4049 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a404b push 0 */
  push32((uint32_t)(0x0u));
  /* 104a404d push 0 */
  push32((uint32_t)(0x0u));
  /* 104a404f push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4051 call 0x104a1950 */
  push32(0x104a4056u); f_104a1950();
  /* 104a4056 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4059 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a405c jne 0x104a405f */
  if (!C.zf) goto L_104a405f;
  /* 104a405e int3  */
  x86_unimpl("int3 @ 0x104a405e");
L_104a405f:;
  /* 104a405f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a4061 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a4063 jne 0x104a403f */
  if (!C.zf) goto L_104a403f;
  /* 104a4065 jmp 0x104a4193 */
  goto L_104a4193;
L_104a406a:;
  /* 104a406a push 9 */
  push32((uint32_t)(0x9u));
  /* 104a406c call 0x104a6290 */
  push32(0x104a4071u); f_104a6290();
  /* 104a4071 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4074 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a4077 mov edx, dword ptr [0x104ce46c] */
  EDX = (r32((uint32_t)(0x104ce46c)));
  /* 104a407d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 104a407f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104a4086 jmp 0x104a4091 */
  goto L_104a4091;
L_104a4088:;
  /* 104a4088 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a408b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a408e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104a4091:;
  /* 104a4091 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4095 jge 0x104a40b5 */
  if ((C.sf==C.of)) goto L_104a40b5;
  /* 104a4097 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a409a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a409d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 104a40a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a40a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a40ab mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 104a40b3 jmp 0x104a4088 */
  goto L_104a4088;
L_104a40b5:;
  /* 104a40b5 mov edx, dword ptr [0x104ce46c] */
  EDX = (r32((uint32_t)(0x104ce46c)));
  /* 104a40bb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104a40be jmp 0x104a40c8 */
  goto L_104a40c8;
L_104a40c0:;
  /* 104a40c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a40c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104a40c5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_104a40c8:;
  /* 104a40c8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a40cc je 0x104a4171 */
  if (C.zf) goto L_104a4171;
  /* 104a40d2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a40d5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104a40d8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a40dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a40df jl 0x104a4147 */
  if ((C.sf!=C.of)) goto L_104a4147;
  /* 104a40e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a40e4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 104a40e7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104a40ed cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a40f0 jge 0x104a4147 */
  if ((C.sf==C.of)) goto L_104a4147;
  /* 104a40f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a40f5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104a40f8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104a40fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a4101 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 104a4105 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4108 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a410b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 104a410e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104a4114 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a4117 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 104a411b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a411e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104a4121 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a4126 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a4129 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 104a412d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a4130 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4133 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a4136 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 104a4139 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a413e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a4141 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 104a4145 jmp 0x104a416c */
  goto L_104a416c;
L_104a4147:;
  /* 104a4147 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a414a push edx */
  push32((uint32_t)(EDX));
  /* 104a414b push 0x104c98e8 */
  push32((uint32_t)(0x104c98e8u));
  /* 104a4150 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4152 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4154 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4156 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4158 call 0x104a1950 */
  push32(0x104a415du); f_104a1950();
  /* 104a415d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4160 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4163 jne 0x104a4166 */
  if (!C.zf) goto L_104a4166;
  /* 104a4165 int3  */
  x86_unimpl("int3 @ 0x104a4165");
L_104a4166:;
  /* 104a4166 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a4168 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a416a jne 0x104a4147 */
  if (!C.zf) goto L_104a4147;
L_104a416c:;
  /* 104a416c jmp 0x104a40c0 */
  goto L_104a40c0;
L_104a4171:;
  /* 104a4171 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a4174 mov edx, dword ptr [0x104ce474] */
  EDX = (r32((uint32_t)(0x104ce474)));
  /* 104a417a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 104a417d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a4180 mov ecx, dword ptr [0x104ce468] */
  ECX = (r32((uint32_t)(0x104ce468)));
  /* 104a4186 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 104a4189 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a418b call 0x104a6330 */
  push32(0x104a4190u); f_104a6330();
  /* 104a4190 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a4193:;
  /* 104a4193 pop edi */
  EDI = (pop32());
  /* 104a4194 pop esi */
  ESI = (pop32());
  /* 104a4195 pop ebx */
  EBX = (pop32());
  /* 104a4196 mov esp, ebp */
  ESP = (EBP);
  /* 104a4198 pop ebp */
  EBP = (pop32());
  /* 104a4199 ret  */
  ESPCHK(0x104a4030u, _esp0);
  ESP += 4; return;
}

/* FUN_100041a0 @ 0x104a41a0 (291 bytes, 95 insns) */
void f_104a41a0(void) {
  FTRACE(0x104a41a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a41a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a41a1 mov ebp, esp */
  EBP = (ESP);
  /* 104a41a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a41a6 push ebx */
  push32((uint32_t)(EBX));
  /* 104a41a7 push esi */
  push32((uint32_t)(ESI));
  /* 104a41a8 push edi */
  push32((uint32_t)(EDI));
  /* 104a41a9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104a41b0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a41b4 je 0x104a41c2 */
  if (C.zf) goto L_104a41c2;
  /* 104a41b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a41ba je 0x104a41c2 */
  if (C.zf) goto L_104a41c2;
  /* 104a41bc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a41c0 jne 0x104a41f0 */
  if (!C.zf) goto L_104a41f0;
L_104a41c2:;
  /* 104a41c2 push 0x104c9934 */
  push32((uint32_t)(0x104c9934u));
  /* 104a41c7 push 0x104c9424 */
  push32((uint32_t)(0x104c9424u));
  /* 104a41cc push 0 */
  push32((uint32_t)(0x0u));
  /* 104a41ce push 0 */
  push32((uint32_t)(0x0u));
  /* 104a41d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a41d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a41d4 call 0x104a1950 */
  push32(0x104a41d9u); f_104a1950();
  /* 104a41d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a41dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a41df jne 0x104a41e2 */
  if (!C.zf) goto L_104a41e2;
  /* 104a41e1 int3  */
  x86_unimpl("int3 @ 0x104a41e1");
L_104a41e2:;
  /* 104a41e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a41e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a41e6 jne 0x104a41c2 */
  if (!C.zf) goto L_104a41c2;
  /* 104a41e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a41eb jmp 0x104a42bc */
  goto L_104a42bc;
L_104a41f0:;
  /* 104a41f0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104a41f7 jmp 0x104a4202 */
  goto L_104a4202;
L_104a41f9:;
  /* 104a41f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a41fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a41ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104a4202:;
  /* 104a4202 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4206 jge 0x104a428c */
  if ((C.sf==C.of)) goto L_104a428c;
  /* 104a420c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a420f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a4212 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4215 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 104a4218 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 104a421c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a4220 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4223 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a4226 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 104a422a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a422d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a4230 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4233 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 104a4236 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 104a423a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a423e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4241 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a4244 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 104a4248 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a424b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a424e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4253 jne 0x104a4262 */
  if (!C.zf) goto L_104a4262;
  /* 104a4255 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4258 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a425b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4260 je 0x104a4287 */
  if (C.zf) goto L_104a4287;
L_104a4262:;
  /* 104a4262 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4266 je 0x104a4287 */
  if (C.zf) goto L_104a4287;
  /* 104a4268 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a426c jne 0x104a4280 */
  if (!C.zf) goto L_104a4280;
  /* 104a426e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4272 jne 0x104a4287 */
  if (!C.zf) goto L_104a4287;
  /* 104a4274 mov eax, dword ptr [0x104cca84] */
  EAX = (r32((uint32_t)(0x104cca84)));
  /* 104a4279 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 104a427c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a427e je 0x104a4287 */
  if (C.zf) goto L_104a4287;
L_104a4280:;
  /* 104a4280 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_104a4287:;
  /* 104a4287 jmp 0x104a41f9 */
  goto L_104a41f9;
L_104a428c:;
  /* 104a428c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a428f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a4292 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 104a4295 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a4298 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a429b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 104a429e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a42a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a42a4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 104a42a7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a42aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a42ad mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 104a42b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a42b3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104a42b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_104a42bc:;
  /* 104a42bc pop edi */
  EDI = (pop32());
  /* 104a42bd pop esi */
  ESI = (pop32());
  /* 104a42be pop ebx */
  EBX = (pop32());
  /* 104a42bf mov esp, ebp */
  ESP = (EBP);
  /* 104a42c1 pop ebp */
  EBP = (pop32());
  /* 104a42c2 ret  */
  ESPCHK(0x104a41a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100042d0 @ 0x104a42d0 (697 bytes, 253 insns) */
void f_104a42d0(void) {
  FTRACE(0x104a42d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a42d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a42d1 mov ebp, esp */
  EBP = (ESP);
  /* 104a42d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a42d6 push ebx */
  push32((uint32_t)(EBX));
  /* 104a42d7 push esi */
  push32((uint32_t)(ESI));
  /* 104a42d8 push edi */
  push32((uint32_t)(EDI));
  /* 104a42d9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104a42e0 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a42e2 call 0x104a6290 */
  push32(0x104a42e7u); f_104a6290();
  /* 104a42e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a42ea:;
  /* 104a42ea push 0x104c9a2c */
  push32((uint32_t)(0x104c9a2cu));
  /* 104a42ef push 0x104c9424 */
  push32((uint32_t)(0x104c9424u));
  /* 104a42f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a42f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a42f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a42fa push 0 */
  push32((uint32_t)(0x0u));
  /* 104a42fc call 0x104a1950 */
  push32(0x104a4301u); f_104a1950();
  /* 104a4301 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4304 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4307 jne 0x104a430a */
  if (!C.zf) goto L_104a430a;
  /* 104a4309 int3  */
  x86_unimpl("int3 @ 0x104a4309");
L_104a430a:;
  /* 104a430a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a430c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a430e jne 0x104a42ea */
  if (!C.zf) goto L_104a42ea;
  /* 104a4310 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4314 je 0x104a431e */
  if (C.zf) goto L_104a431e;
  /* 104a4316 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a4319 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a431b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_104a431e:;
  /* 104a431e mov eax, dword ptr [0x104ce46c] */
  EAX = (r32((uint32_t)(0x104ce46c)));
  /* 104a4323 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a4326 jmp 0x104a4330 */
  goto L_104a4330;
L_104a4328:;
  /* 104a4328 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a432b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a432d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104a4330:;
  /* 104a4330 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4334 je 0x104a4552 */
  if (C.zf) goto L_104a4552;
  /* 104a433a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a433d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4340 je 0x104a4552 */
  if (C.zf) goto L_104a4552;
  /* 104a4346 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4349 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 104a434c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104a4352 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4355 je 0x104a4384 */
  if (C.zf) goto L_104a4384;
  /* 104a4357 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a435a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104a435d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104a4363 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a4365 je 0x104a4384 */
  if (C.zf) goto L_104a4384;
  /* 104a4367 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a436a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104a436d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a4372 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4375 jne 0x104a4389 */
  if (!C.zf) goto L_104a4389;
  /* 104a4377 mov ecx, dword ptr [0x104cca84] */
  ECX = (r32((uint32_t)(0x104cca84)));
  /* 104a437d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 104a4380 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a4382 jne 0x104a4389 */
  if (!C.zf) goto L_104a4389;
L_104a4384:;
  /* 104a4384 jmp 0x104a454d */
  goto L_104a454d;
L_104a4389:;
  /* 104a4389 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a438c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4390 je 0x104a4402 */
  if (C.zf) goto L_104a4402;
  /* 104a4392 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4394 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a4396 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4399 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104a439c push ecx */
  push32((uint32_t)(ECX));
  /* 104a439d call 0x104a3e40 */
  push32(0x104a43a2u); f_104a3e40();
  /* 104a43a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a43a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a43a7 jne 0x104a43d3 */
  if (!C.zf) goto L_104a43d3;
L_104a43a9:;
  /* 104a43a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a43ac mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 104a43af push eax */
  push32((uint32_t)(EAX));
  /* 104a43b0 push 0x104c9a18 */
  push32((uint32_t)(0x104c9a18u));
  /* 104a43b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a43b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a43b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a43bb push 0 */
  push32((uint32_t)(0x0u));
  /* 104a43bd call 0x104a1950 */
  push32(0x104a43c2u); f_104a1950();
  /* 104a43c2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a43c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a43c8 jne 0x104a43cb */
  if (!C.zf) goto L_104a43cb;
  /* 104a43ca int3  */
  x86_unimpl("int3 @ 0x104a43ca");
L_104a43cb:;
  /* 104a43cb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a43cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a43cf jne 0x104a43a9 */
  if (!C.zf) goto L_104a43a9;
  /* 104a43d1 jmp 0x104a4402 */
  goto L_104a4402;
L_104a43d3:;
  /* 104a43d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a43d6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 104a43d9 push eax */
  push32((uint32_t)(EAX));
  /* 104a43da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a43dd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104a43e0 push edx */
  push32((uint32_t)(EDX));
  /* 104a43e1 push 0x104c9a0c */
  push32((uint32_t)(0x104c9a0cu));
  /* 104a43e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a43e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a43ea push 0 */
  push32((uint32_t)(0x0u));
  /* 104a43ec push 0 */
  push32((uint32_t)(0x0u));
  /* 104a43ee call 0x104a1950 */
  push32(0x104a43f3u); f_104a1950();
  /* 104a43f3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a43f6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a43f9 jne 0x104a43fc */
  if (!C.zf) goto L_104a43fc;
  /* 104a43fb int3  */
  x86_unimpl("int3 @ 0x104a43fb");
L_104a43fc:;
  /* 104a43fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a43fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a4400 jne 0x104a43d3 */
  if (!C.zf) goto L_104a43d3;
L_104a4402:;
  /* 104a4402 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4405 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 104a4408 push edx */
  push32((uint32_t)(EDX));
  /* 104a4409 push 0x104c9a04 */
  push32((uint32_t)(0x104c9a04u));
  /* 104a440e push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4410 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4412 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4414 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4416 call 0x104a1950 */
  push32(0x104a441bu); f_104a1950();
  /* 104a441b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a441e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4421 jne 0x104a4424 */
  if (!C.zf) goto L_104a4424;
  /* 104a4423 int3  */
  x86_unimpl("int3 @ 0x104a4423");
L_104a4424:;
  /* 104a4424 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a4426 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a4428 jne 0x104a4402 */
  if (!C.zf) goto L_104a4402;
  /* 104a442a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a442d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 104a4430 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104a4436 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4439 jne 0x104a44ac */
  if (!C.zf) goto L_104a44ac;
L_104a443b:;
  /* 104a443b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a443e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104a4441 push ecx */
  push32((uint32_t)(ECX));
  /* 104a4442 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4445 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104a4448 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 104a444b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a4450 push eax */
  push32((uint32_t)(EAX));
  /* 104a4451 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4454 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4457 push ecx */
  push32((uint32_t)(ECX));
  /* 104a4458 push 0x104c99d0 */
  push32((uint32_t)(0x104c99d0u));
  /* 104a445d push 0 */
  push32((uint32_t)(0x0u));
  /* 104a445f push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4461 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4463 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4465 call 0x104a1950 */
  push32(0x104a446au); f_104a1950();
  /* 104a446a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a446d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4470 jne 0x104a4473 */
  if (!C.zf) goto L_104a4473;
  /* 104a4472 int3  */
  x86_unimpl("int3 @ 0x104a4472");
L_104a4473:;
  /* 104a4473 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a4475 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a4477 jne 0x104a443b */
  if (!C.zf) goto L_104a443b;
  /* 104a4479 cmp dword ptr [0x104cfdd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104cfdd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4480 je 0x104a449b */
  if (C.zf) goto L_104a449b;
  /* 104a4482 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4485 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104a4488 push ecx */
  push32((uint32_t)(ECX));
  /* 104a4489 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a448c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a448f push edx */
  push32((uint32_t)(EDX));
  /* 104a4490 call dword ptr [0x104cfdd8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104cfdd8))), 0x104a4496u);
  /* 104a4496 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4499 jmp 0x104a44a7 */
  goto L_104a44a7;
L_104a449b:;
  /* 104a449b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a449e push eax */
  push32((uint32_t)(EAX));
  /* 104a449f call 0x104a4590 */
  push32(0x104a44a4u); f_104a4590();
  /* 104a44a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a44a7:;
  /* 104a44a7 jmp 0x104a454d */
  goto L_104a454d;
L_104a44ac:;
  /* 104a44ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a44af cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a44b3 jne 0x104a44f2 */
  if (!C.zf) goto L_104a44f2;
L_104a44b5:;
  /* 104a44b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a44b8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104a44bb push eax */
  push32((uint32_t)(EAX));
  /* 104a44bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a44bf add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a44c2 push ecx */
  push32((uint32_t)(ECX));
  /* 104a44c3 push 0x104c99a8 */
  push32((uint32_t)(0x104c99a8u));
  /* 104a44c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a44ca push 0 */
  push32((uint32_t)(0x0u));
  /* 104a44cc push 0 */
  push32((uint32_t)(0x0u));
  /* 104a44ce push 0 */
  push32((uint32_t)(0x0u));
  /* 104a44d0 call 0x104a1950 */
  push32(0x104a44d5u); f_104a1950();
  /* 104a44d5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a44d8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a44db jne 0x104a44de */
  if (!C.zf) goto L_104a44de;
  /* 104a44dd int3  */
  x86_unimpl("int3 @ 0x104a44dd");
L_104a44de:;
  /* 104a44de xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a44e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a44e2 jne 0x104a44b5 */
  if (!C.zf) goto L_104a44b5;
  /* 104a44e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a44e7 push eax */
  push32((uint32_t)(EAX));
  /* 104a44e8 call 0x104a4590 */
  push32(0x104a44edu); f_104a4590();
  /* 104a44ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a44f0 jmp 0x104a454d */
  goto L_104a454d;
L_104a44f2:;
  /* 104a44f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a44f5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 104a44f8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104a44fe cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4501 jne 0x104a454d */
  if (!C.zf) goto L_104a454d;
L_104a4503:;
  /* 104a4503 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4506 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104a4509 push ecx */
  push32((uint32_t)(ECX));
  /* 104a450a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a450d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104a4510 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 104a4513 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a4518 push eax */
  push32((uint32_t)(EAX));
  /* 104a4519 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a451c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a451f push ecx */
  push32((uint32_t)(ECX));
  /* 104a4520 push 0x104c9974 */
  push32((uint32_t)(0x104c9974u));
  /* 104a4525 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4527 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4529 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a452b push 0 */
  push32((uint32_t)(0x0u));
  /* 104a452d call 0x104a1950 */
  push32(0x104a4532u); f_104a1950();
  /* 104a4532 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4535 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4538 jne 0x104a453b */
  if (!C.zf) goto L_104a453b;
  /* 104a453a int3  */
  x86_unimpl("int3 @ 0x104a453a");
L_104a453b:;
  /* 104a453b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a453d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a453f jne 0x104a4503 */
  if (!C.zf) goto L_104a4503;
  /* 104a4541 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4544 push eax */
  push32((uint32_t)(EAX));
  /* 104a4545 call 0x104a4590 */
  push32(0x104a454au); f_104a4590();
  /* 104a454a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a454d:;
  /* 104a454d jmp 0x104a4328 */
  goto L_104a4328;
L_104a4552:;
  /* 104a4552 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a4554 call 0x104a6330 */
  push32(0x104a4559u); f_104a6330();
  /* 104a4559 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a455c:;
  /* 104a455c push 0x104c995c */
  push32((uint32_t)(0x104c995cu));
  /* 104a4561 push 0x104c9424 */
  push32((uint32_t)(0x104c9424u));
  /* 104a4566 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4568 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a456a push 0 */
  push32((uint32_t)(0x0u));
  /* 104a456c push 0 */
  push32((uint32_t)(0x0u));
  /* 104a456e call 0x104a1950 */
  push32(0x104a4573u); f_104a1950();
  /* 104a4573 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4576 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4579 jne 0x104a457c */
  if (!C.zf) goto L_104a457c;
  /* 104a457b int3  */
  x86_unimpl("int3 @ 0x104a457b");
L_104a457c:;
  /* 104a457c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a457e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a4580 jne 0x104a455c */
  if (!C.zf) goto L_104a455c;
  /* 104a4582 pop edi */
  EDI = (pop32());
  /* 104a4583 pop esi */
  ESI = (pop32());
  /* 104a4584 pop ebx */
  EBX = (pop32());
  /* 104a4585 mov esp, ebp */
  ESP = (EBP);
  /* 104a4587 pop ebp */
  EBP = (pop32());
  /* 104a4588 ret  */
  ESPCHK(0x104a42d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004590 @ 0x104a4590 (276 bytes, 89 insns) */
void f_104a4590(void) {
  FTRACE(0x104a4590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a4590 push ebp */
  push32((uint32_t)(EBP));
  /* 104a4591 mov ebp, esp */
  EBP = (ESP);
  /* 104a4593 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a4596 push ebx */
  push32((uint32_t)(EBX));
  /* 104a4597 push esi */
  push32((uint32_t)(ESI));
  /* 104a4598 push edi */
  push32((uint32_t)(EDI));
  /* 104a4599 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 104a45a0 jmp 0x104a45ab */
  goto L_104a45ab;
L_104a45a2:;
  /* 104a45a2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 104a45a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a45a8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_104a45ab:;
  /* 104a45ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a45ae cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a45b2 jge 0x104a45bf */
  if ((C.sf==C.of)) goto L_104a45bf;
  /* 104a45b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a45b7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104a45ba mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 104a45bd jmp 0x104a45c6 */
  goto L_104a45c6;
L_104a45bf:;
  /* 104a45bf mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_104a45c6:;
  /* 104a45c6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 104a45c9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a45cc jge 0x104a466c */
  if ((C.sf==C.of)) goto L_104a466c;
  /* 104a45d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a45d5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a45d8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 104a45db mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 104a45de cmp dword ptr [0x104ccea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ccea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a45e5 jle 0x104a4603 */
  if ((C.zf||C.sf!=C.of)) goto L_104a4603;
  /* 104a45e7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 104a45ec mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a45ef and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104a45f5 push ecx */
  push32((uint32_t)(ECX));
  /* 104a45f6 call 0x104a88a0 */
  push32(0x104a45fbu); f_104a88a0();
  /* 104a45fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a45fe mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 104a4601 jmp 0x104a4620 */
  goto L_104a4620;
L_104a4603:;
  /* 104a4603 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a4606 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104a460c mov eax, dword ptr [0x104ccc98] */
  EAX = (r32((uint32_t)(0x104ccc98)));
  /* 104a4611 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a4613 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 104a4617 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 104a461d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_104a4620:;
  /* 104a4620 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4624 je 0x104a4634 */
  if (C.zf) goto L_104a4634;
  /* 104a4626 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a4629 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104a462f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 104a4632 jmp 0x104a463b */
  goto L_104a463b;
L_104a4634:;
  /* 104a4634 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_104a463b:;
  /* 104a463b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 104a463e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 104a4641 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 104a4645 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 104a4648 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104a464e push edx */
  push32((uint32_t)(EDX));
  /* 104a464f push 0x104c9a50 */
  push32((uint32_t)(0x104c9a50u));
  /* 104a4654 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 104a4657 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a465a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 104a465e push ecx */
  push32((uint32_t)(ECX));
  /* 104a465f call 0x104a87a0 */
  push32(0x104a4664u); f_104a87a0();
  /* 104a4664 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4667 jmp 0x104a45a2 */
  goto L_104a45a2;
L_104a466c:;
  /* 104a466c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 104a466f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_104a4674:;
  /* 104a4674 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 104a4677 push eax */
  push32((uint32_t)(EAX));
  /* 104a4678 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 104a467b push ecx */
  push32((uint32_t)(ECX));
  /* 104a467c push 0x104c9a40 */
  push32((uint32_t)(0x104c9a40u));
  /* 104a4681 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4683 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4685 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4687 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4689 call 0x104a1950 */
  push32(0x104a468eu); f_104a1950();
  /* 104a468e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4691 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4694 jne 0x104a4697 */
  if (!C.zf) goto L_104a4697;
  /* 104a4696 int3  */
  x86_unimpl("int3 @ 0x104a4696");
L_104a4697:;
  /* 104a4697 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a4699 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a469b jne 0x104a4674 */
  if (!C.zf) goto L_104a4674;
  /* 104a469d pop edi */
  EDI = (pop32());
  /* 104a469e pop esi */
  ESI = (pop32());
  /* 104a469f pop ebx */
  EBX = (pop32());
  /* 104a46a0 mov esp, ebp */
  ESP = (EBP);
  /* 104a46a2 pop ebp */
  EBP = (pop32());
  /* 104a46a3 ret  */
  ESPCHK(0x104a4590u, _esp0);
  ESP += 4; return;
}

/* FUN_100046b0 @ 0x104a46b0 (116 bytes, 46 insns) */
void f_104a46b0(void) {
  FTRACE(0x104a46b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a46b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a46b1 mov ebp, esp */
  EBP = (ESP);
  /* 104a46b3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a46b6 push ebx */
  push32((uint32_t)(EBX));
  /* 104a46b7 push esi */
  push32((uint32_t)(ESI));
  /* 104a46b8 push edi */
  push32((uint32_t)(EDI));
  /* 104a46b9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 104a46bc push eax */
  push32((uint32_t)(EAX));
  /* 104a46bd call 0x104a4030 */
  push32(0x104a46c2u); f_104a4030();
  /* 104a46c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a46c5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a46c9 jne 0x104a46e4 */
  if (!C.zf) goto L_104a46e4;
  /* 104a46cb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a46cf jne 0x104a46e4 */
  if (!C.zf) goto L_104a46e4;
  /* 104a46d1 mov ecx, dword ptr [0x104cca84] */
  ECX = (r32((uint32_t)(0x104cca84)));
  /* 104a46d7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 104a46da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a46dc je 0x104a471b */
  if (C.zf) goto L_104a471b;
  /* 104a46de cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a46e2 je 0x104a471b */
  if (C.zf) goto L_104a471b;
L_104a46e4:;
  /* 104a46e4 push 0x104c9a58 */
  push32((uint32_t)(0x104c9a58u));
  /* 104a46e9 push 0x104c9424 */
  push32((uint32_t)(0x104c9424u));
  /* 104a46ee push 0 */
  push32((uint32_t)(0x0u));
  /* 104a46f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a46f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a46f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a46f6 call 0x104a1950 */
  push32(0x104a46fbu); f_104a1950();
  /* 104a46fb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a46fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4701 jne 0x104a4704 */
  if (!C.zf) goto L_104a4704;
  /* 104a4703 int3  */
  x86_unimpl("int3 @ 0x104a4703");
L_104a4704:;
  /* 104a4704 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a4706 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a4708 jne 0x104a46e4 */
  if (!C.zf) goto L_104a46e4;
  /* 104a470a push 0 */
  push32((uint32_t)(0x0u));
  /* 104a470c call 0x104a42d0 */
  push32(0x104a4711u); f_104a42d0();
  /* 104a4711 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4714 mov eax, 1 */
  EAX = (0x1u);
  /* 104a4719 jmp 0x104a471d */
  goto L_104a471d;
L_104a471b:;
  /* 104a471b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104a471d:;
  /* 104a471d pop edi */
  EDI = (pop32());
  /* 104a471e pop esi */
  ESI = (pop32());
  /* 104a471f pop ebx */
  EBX = (pop32());
  /* 104a4720 mov esp, ebp */
  ESP = (EBP);
  /* 104a4722 pop ebp */
  EBP = (pop32());
  /* 104a4723 ret  */
  ESPCHK(0x104a46b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004730 @ 0x104a4730 (197 bytes, 79 insns) */
void f_104a4730(void) {
  FTRACE(0x104a4730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a4730 push ebp */
  push32((uint32_t)(EBP));
  /* 104a4731 mov ebp, esp */
  EBP = (ESP);
  /* 104a4733 push ecx */
  push32((uint32_t)(ECX));
  /* 104a4734 push ebx */
  push32((uint32_t)(EBX));
  /* 104a4735 push esi */
  push32((uint32_t)(ESI));
  /* 104a4736 push edi */
  push32((uint32_t)(EDI));
  /* 104a4737 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a473b jne 0x104a4742 */
  if (!C.zf) goto L_104a4742;
  /* 104a473d jmp 0x104a47ee */
  goto L_104a47ee;
L_104a4742:;
  /* 104a4742 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104a4749 jmp 0x104a4754 */
  goto L_104a4754;
L_104a474b:;
  /* 104a474b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a474e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4751 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104a4754:;
  /* 104a4754 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4758 jge 0x104a479e */
  if ((C.sf==C.of)) goto L_104a479e;
L_104a475a:;
  /* 104a475a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a475d mov edx, dword ptr [ecx*4 + 0x104cca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x104cca94)));
  /* 104a4764 push edx */
  push32((uint32_t)(EDX));
  /* 104a4765 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4768 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a476b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 104a476f push edx */
  push32((uint32_t)(EDX));
  /* 104a4770 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4773 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a4776 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 104a477a push edx */
  push32((uint32_t)(EDX));
  /* 104a477b push 0x104c9ab4 */
  push32((uint32_t)(0x104c9ab4u));
  /* 104a4780 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4782 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4784 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4786 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4788 call 0x104a1950 */
  push32(0x104a478du); f_104a1950();
  /* 104a478d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4790 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4793 jne 0x104a4796 */
  if (!C.zf) goto L_104a4796;
  /* 104a4795 int3  */
  x86_unimpl("int3 @ 0x104a4795");
L_104a4796:;
  /* 104a4796 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a4798 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a479a jne 0x104a475a */
  if (!C.zf) goto L_104a475a;
  /* 104a479c jmp 0x104a474b */
  goto L_104a474b;
L_104a479e:;
  /* 104a479e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a47a1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 104a47a4 push edx */
  push32((uint32_t)(EDX));
  /* 104a47a5 push 0x104c9a90 */
  push32((uint32_t)(0x104c9a90u));
  /* 104a47aa push 0 */
  push32((uint32_t)(0x0u));
  /* 104a47ac push 0 */
  push32((uint32_t)(0x0u));
  /* 104a47ae push 0 */
  push32((uint32_t)(0x0u));
  /* 104a47b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a47b2 call 0x104a1950 */
  push32(0x104a47b7u); f_104a1950();
  /* 104a47b7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a47ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a47bd jne 0x104a47c0 */
  if (!C.zf) goto L_104a47c0;
  /* 104a47bf int3  */
  x86_unimpl("int3 @ 0x104a47bf");
L_104a47c0:;
  /* 104a47c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a47c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a47c4 jne 0x104a479e */
  if (!C.zf) goto L_104a479e;
L_104a47c6:;
  /* 104a47c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a47c9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 104a47cc push edx */
  push32((uint32_t)(EDX));
  /* 104a47cd push 0x104c9a70 */
  push32((uint32_t)(0x104c9a70u));
  /* 104a47d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a47d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a47d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a47d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a47da call 0x104a1950 */
  push32(0x104a47dfu); f_104a1950();
  /* 104a47df add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a47e2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a47e5 jne 0x104a47e8 */
  if (!C.zf) goto L_104a47e8;
  /* 104a47e7 int3  */
  x86_unimpl("int3 @ 0x104a47e7");
L_104a47e8:;
  /* 104a47e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a47ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a47ec jne 0x104a47c6 */
  if (!C.zf) goto L_104a47c6;
L_104a47ee:;
  /* 104a47ee pop edi */
  EDI = (pop32());
  /* 104a47ef pop esi */
  ESI = (pop32());
  /* 104a47f0 pop ebx */
  EBX = (pop32());
  /* 104a47f1 mov esp, ebp */
  ESP = (EBP);
  /* 104a47f3 pop ebp */
  EBP = (pop32());
  /* 104a47f4 ret  */
  ESPCHK(0x104a4730u, _esp0);
  ESP += 4; return;
}

/* FUN_10004800 @ 0x104a4800 (329 bytes, 102 insns) */
void f_104a4800(void) {
  FTRACE(0x104a4800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a4800 push ebp */
  push32((uint32_t)(EBP));
  /* 104a4801 mov ebp, esp */
  EBP = (ESP);
  /* 104a4803 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a4806 cmp dword ptr [0x104cff50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104cff50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a480d jne 0x104a4814 */
  if (!C.zf) goto L_104a4814;
  /* 104a480f call 0x104a9140 */
  push32(0x104a4814u); f_104a9140();
L_104a4814:;
  /* 104a4814 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104a481b mov eax, dword ptr [0x104ce408] */
  EAX = (r32((uint32_t)(0x104ce408)));
  /* 104a4820 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104a4823:;
  /* 104a4823 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4826 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104a4829 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a482b je 0x104a4859 */
  if (C.zf) goto L_104a4859;
  /* 104a482d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4830 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104a4833 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4836 je 0x104a4841 */
  if (C.zf) goto L_104a4841;
  /* 104a4838 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a483b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a483e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_104a4841:;
  /* 104a4841 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4844 push eax */
  push32((uint32_t)(EAX));
  /* 104a4845 call 0x104a56c0 */
  push32(0x104a484au); f_104a56c0();
  /* 104a484a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a484d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4850 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 104a4854 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104a4857 jmp 0x104a4823 */
  goto L_104a4823;
L_104a4859:;
  /* 104a4859 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 104a485b push 0x104c9ad4 */
  push32((uint32_t)(0x104c9ad4u));
  /* 104a4860 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a4862 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a4865 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 104a486c push ecx */
  push32((uint32_t)(ECX));
  /* 104a486d call 0x104a2890 */
  push32(0x104a4872u); f_104a2890();
  /* 104a4872 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4875 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104a4878 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a487b mov dword ptr [0x104ce43c], edx */
  w32((uint32_t)(0x104ce43c), (EDX));
  /* 104a4881 cmp dword ptr [0x104ce43c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce43c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4888 jne 0x104a4894 */
  if (!C.zf) goto L_104a4894;
  /* 104a488a push 9 */
  push32((uint32_t)(0x9u));
  /* 104a488c call 0x104a1800 */
  push32(0x104a4891u); f_104a1800();
  /* 104a4891 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a4894:;
  /* 104a4894 mov eax, dword ptr [0x104ce408] */
  EAX = (r32((uint32_t)(0x104ce408)));
  /* 104a4899 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a489c jmp 0x104a48a7 */
  goto L_104a48a7;
L_104a489e:;
  /* 104a489e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a48a1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a48a4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104a48a7:;
  /* 104a48a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a48aa movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104a48ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a48af je 0x104a4917 */
  if (C.zf) goto L_104a4917;
  /* 104a48b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a48b4 push ecx */
  push32((uint32_t)(ECX));
  /* 104a48b5 call 0x104a56c0 */
  push32(0x104a48bau); f_104a56c0();
  /* 104a48ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a48bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a48c0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104a48c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a48c6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104a48c9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a48cc je 0x104a4915 */
  if (C.zf) goto L_104a4915;
  /* 104a48ce push 0x79 */
  push32((uint32_t)(0x79u));
  /* 104a48d0 push 0x104c9ad4 */
  push32((uint32_t)(0x104c9ad4u));
  /* 104a48d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a48d7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a48da push ecx */
  push32((uint32_t)(ECX));
  /* 104a48db call 0x104a2890 */
  push32(0x104a48e0u); f_104a2890();
  /* 104a48e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a48e3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a48e6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 104a48e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a48eb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a48ee jne 0x104a48fa */
  if (!C.zf) goto L_104a48fa;
  /* 104a48f0 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a48f2 call 0x104a1800 */
  push32(0x104a48f7u); f_104a1800();
  /* 104a48f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a48fa:;
  /* 104a48fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a48fd push ecx */
  push32((uint32_t)(ECX));
  /* 104a48fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a4901 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104a4903 push eax */
  push32((uint32_t)(EAX));
  /* 104a4904 call 0x104a5840 */
  push32(0x104a4909u); f_104a5840();
  /* 104a4909 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a490c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a490f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4912 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_104a4915:;
  /* 104a4915 jmp 0x104a489e */
  goto L_104a489e;
L_104a4917:;
  /* 104a4917 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a4919 mov edx, dword ptr [0x104ce408] */
  EDX = (r32((uint32_t)(0x104ce408)));
  /* 104a491f push edx */
  push32((uint32_t)(EDX));
  /* 104a4920 call 0x104a3320 */
  push32(0x104a4925u); f_104a3320();
  /* 104a4925 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4928 mov dword ptr [0x104ce408], 0 */
  w32((uint32_t)(0x104ce408), (0x0u));
  /* 104a4932 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a4935 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104a493b mov dword ptr [0x104cff40], 1 */
  w32((uint32_t)(0x104cff40), (0x1u));
  /* 104a4945 mov esp, ebp */
  ESP = (EBP);
  /* 104a4947 pop ebp */
  EBP = (pop32());
  /* 104a4948 ret  */
  ESPCHK(0x104a4800u, _esp0);
  ESP += 4; return;
}

/* FUN_10004950 @ 0x104a4950 (216 bytes, 69 insns) */
void f_104a4950(void) {
  FTRACE(0x104a4950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a4950 push ebp */
  push32((uint32_t)(EBP));
  /* 104a4951 mov ebp, esp */
  EBP = (ESP);
  /* 104a4953 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a4956 cmp dword ptr [0x104cff50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104cff50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a495d jne 0x104a4964 */
  if (!C.zf) goto L_104a4964;
  /* 104a495f call 0x104a9140 */
  push32(0x104a4964u); f_104a9140();
L_104a4964:;
  /* 104a4964 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 104a4969 push 0x104ce478 */
  push32((uint32_t)(0x104ce478u));
  /* 104a496e push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4970 call dword ptr [0x104d0274] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0274))), 0x104a4976u);
  /* 104a4976 mov dword ptr [0x104ce44c], 0x104ce478 */
  w32((uint32_t)(0x104ce44c), (0x104ce478u));
  /* 104a4980 mov eax, dword ptr [0x104cff6c] */
  EAX = (r32((uint32_t)(0x104cff6c)));
  /* 104a4985 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104a4988 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a498a jne 0x104a4997 */
  if (!C.zf) goto L_104a4997;
  /* 104a498c mov edx, dword ptr [0x104ce44c] */
  EDX = (r32((uint32_t)(0x104ce44c)));
  /* 104a4992 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104a4995 jmp 0x104a499f */
  goto L_104a499f;
L_104a4997:;
  /* 104a4997 mov eax, dword ptr [0x104cff6c] */
  EAX = (r32((uint32_t)(0x104cff6c)));
  /* 104a499c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_104a499f:;
  /* 104a499f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a49a2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104a49a5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 104a49a8 push edx */
  push32((uint32_t)(EDX));
  /* 104a49a9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 104a49ac push eax */
  push32((uint32_t)(EAX));
  /* 104a49ad push 0 */
  push32((uint32_t)(0x0u));
  /* 104a49af push 0 */
  push32((uint32_t)(0x0u));
  /* 104a49b1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a49b4 push ecx */
  push32((uint32_t)(ECX));
  /* 104a49b5 call 0x104a4a30 */
  push32(0x104a49bau); f_104a4a30();
  /* 104a49ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a49bd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 104a49c2 push 0x104c9ae0 */
  push32((uint32_t)(0x104c9ae0u));
  /* 104a49c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a49c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a49cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a49cf lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 104a49d2 push ecx */
  push32((uint32_t)(ECX));
  /* 104a49d3 call 0x104a2890 */
  push32(0x104a49d8u); f_104a2890();
  /* 104a49d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a49db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104a49de cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a49e2 jne 0x104a49ee */
  if (!C.zf) goto L_104a49ee;
  /* 104a49e4 push 8 */
  push32((uint32_t)(0x8u));
  /* 104a49e6 call 0x104a1800 */
  push32(0x104a49ebu); f_104a1800();
  /* 104a49eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a49ee:;
  /* 104a49ee lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 104a49f1 push edx */
  push32((uint32_t)(EDX));
  /* 104a49f2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 104a49f5 push eax */
  push32((uint32_t)(EAX));
  /* 104a49f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a49f9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a49fc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 104a49ff push eax */
  push32((uint32_t)(EAX));
  /* 104a4a00 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a4a03 push ecx */
  push32((uint32_t)(ECX));
  /* 104a4a04 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a4a07 push edx */
  push32((uint32_t)(EDX));
  /* 104a4a08 call 0x104a4a30 */
  push32(0x104a4a0du); f_104a4a30();
  /* 104a4a0d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4a10 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a4a13 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a4a16 mov dword ptr [0x104ce430], eax */
  w32((uint32_t)(0x104ce430), (EAX));
  /* 104a4a1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a4a1e mov dword ptr [0x104ce434], ecx */
  w32((uint32_t)(0x104ce434), (ECX));
  /* 104a4a24 mov esp, ebp */
  ESP = (EBP);
  /* 104a4a26 pop ebp */
  EBP = (pop32());
  /* 104a4a27 ret  */
  ESPCHK(0x104a4950u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a30 @ 0x104a4a30 (1060 bytes, 360 insns) */
void f_104a4a30(void) {
  FTRACE(0x104a4a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a4a30 push ebp */
  push32((uint32_t)(EBP));
  /* 104a4a31 mov ebp, esp */
  EBP = (ESP);
  /* 104a4a33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a4a36 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a4a39 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104a4a3f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a4a42 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 104a4a48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a4a4b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104a4a4e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4a52 je 0x104a4a65 */
  if (C.zf) goto L_104a4a65;
  /* 104a4a54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a4a57 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a4a5a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 104a4a5c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a4a5f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4a62 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_104a4a65:;
  /* 104a4a65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4a68 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104a4a6b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4a6e jne 0x104a4b3d */
  if (!C.zf) goto L_104a4b3d;
L_104a4a74:;
  /* 104a4a74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4a77 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4a7a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104a4a7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4a80 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104a4a83 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4a86 je 0x104a4b02 */
  if (C.zf) goto L_104a4b02;
  /* 104a4a88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4a8b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104a4a8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a4a90 je 0x104a4b02 */
  if (C.zf) goto L_104a4b02;
  /* 104a4a92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4a95 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a4a97 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104a4a99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a4a9b mov al, byte ptr [edx + 0x104cfca1] */
  AL = (r8((uint32_t)(EDX + 0x104cfca1)));
  /* 104a4aa1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 104a4aa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a4aa6 je 0x104a4ad7 */
  if (C.zf) goto L_104a4ad7;
  /* 104a4aa8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a4aab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a4aad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4ab0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a4ab3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104a4ab5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4ab9 je 0x104a4ad7 */
  if (C.zf) goto L_104a4ad7;
  /* 104a4abb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a4abe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4ac1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104a4ac3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 104a4ac5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a4ac8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4acb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 104a4ace mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4ad1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4ad4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104a4ad7:;
  /* 104a4ad7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a4ada mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104a4adc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4adf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a4ae2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104a4ae4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4ae8 je 0x104a4afd */
  if (C.zf) goto L_104a4afd;
  /* 104a4aea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a4aed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4af0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104a4af2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104a4af4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a4af7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4afa mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_104a4afd:;
  /* 104a4afd jmp 0x104a4a74 */
  goto L_104a4a74;
L_104a4b02:;
  /* 104a4b02 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a4b05 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a4b07 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4b0a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a4b0d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104a4b0f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4b13 je 0x104a4b24 */
  if (C.zf) goto L_104a4b24;
  /* 104a4b15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a4b18 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 104a4b1b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a4b1e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4b21 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_104a4b24:;
  /* 104a4b24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4b27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104a4b2a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4b2d jne 0x104a4b38 */
  if (!C.zf) goto L_104a4b38;
  /* 104a4b2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4b32 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4b35 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104a4b38:;
  /* 104a4b38 jmp 0x104a4c0c */
  goto L_104a4c0c;
L_104a4b3d:;
  /* 104a4b3d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a4b40 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104a4b42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4b45 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a4b48 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104a4b4a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4b4e je 0x104a4b63 */
  if (C.zf) goto L_104a4b63;
  /* 104a4b50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a4b53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4b56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104a4b58 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104a4b5a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a4b5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4b60 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_104a4b63:;
  /* 104a4b63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4b66 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104a4b68 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 104a4b6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4b6e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4b71 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a4b74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a4b77 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104a4b7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a4b7f mov dl, byte ptr [ecx + 0x104cfca1] */
  DL = (r8((uint32_t)(ECX + 0x104cfca1)));
  /* 104a4b85 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 104a4b88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a4b8a je 0x104a4bbb */
  if (C.zf) goto L_104a4bbb;
  /* 104a4b8c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a4b8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104a4b91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4b94 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a4b97 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104a4b99 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4b9d je 0x104a4bb2 */
  if (C.zf) goto L_104a4bb2;
  /* 104a4b9f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a4ba2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4ba5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104a4ba7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104a4ba9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a4bac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4baf mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_104a4bb2:;
  /* 104a4bb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4bb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4bb8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104a4bbb:;
  /* 104a4bbb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a4bbe and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104a4bc4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4bc7 je 0x104a4be7 */
  if (C.zf) goto L_104a4be7;
  /* 104a4bc9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a4bcc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a4bd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a4bd3 je 0x104a4be7 */
  if (C.zf) goto L_104a4be7;
  /* 104a4bd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a4bd8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104a4bde cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4be1 jne 0x104a4b3d */
  if (!C.zf) goto L_104a4b3d;
L_104a4be7:;
  /* 104a4be7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a4bea and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104a4bf0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a4bf2 jne 0x104a4bff */
  if (!C.zf) goto L_104a4bff;
  /* 104a4bf4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4bf7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a4bfa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a4bfd jmp 0x104a4c0c */
  goto L_104a4c0c;
L_104a4bff:;
  /* 104a4bff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4c03 je 0x104a4c0c */
  if (C.zf) goto L_104a4c0c;
  /* 104a4c05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a4c08 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_104a4c0c:;
  /* 104a4c0c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_104a4c13:;
  /* 104a4c13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4c16 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104a4c19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a4c1b je 0x104a4c3e */
  if (C.zf) goto L_104a4c3e;
L_104a4c1d:;
  /* 104a4c1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4c20 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104a4c23 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4c26 je 0x104a4c33 */
  if (C.zf) goto L_104a4c33;
  /* 104a4c28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4c2b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104a4c2e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4c31 jne 0x104a4c3e */
  if (!C.zf) goto L_104a4c3e;
L_104a4c33:;
  /* 104a4c33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4c36 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4c39 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104a4c3c jmp 0x104a4c1d */
  goto L_104a4c1d;
L_104a4c3e:;
  /* 104a4c3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4c41 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104a4c44 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a4c46 jne 0x104a4c4d */
  if (!C.zf) goto L_104a4c4d;
  /* 104a4c48 jmp 0x104a4e2b */
  goto L_104a4e2b;
L_104a4c4d:;
  /* 104a4c4d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4c51 je 0x104a4c64 */
  if (C.zf) goto L_104a4c64;
  /* 104a4c53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a4c56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a4c59 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 104a4c5b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a4c5e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4c61 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_104a4c64:;
  /* 104a4c64 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a4c67 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104a4c69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4c6c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a4c6f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_104a4c71:;
  /* 104a4c71 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 104a4c78 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_104a4c7f:;
  /* 104a4c7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4c82 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104a4c85 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4c88 jne 0x104a4c9e */
  if (!C.zf) goto L_104a4c9e;
  /* 104a4c8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4c8d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4c90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104a4c93 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a4c96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4c99 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 104a4c9c jmp 0x104a4c7f */
  goto L_104a4c7f;
L_104a4c9e:;
  /* 104a4c9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4ca1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104a4ca4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4ca7 jne 0x104a4cfa */
  if (!C.zf) goto L_104a4cfa;
  /* 104a4ca9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a4cac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a4cae mov ecx, 2 */
  ECX = (0x2u);
  /* 104a4cb3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104a4cb5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a4cb7 jne 0x104a4cf2 */
  if (!C.zf) goto L_104a4cf2;
  /* 104a4cb9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4cbd je 0x104a4cdf */
  if (C.zf) goto L_104a4cdf;
  /* 104a4cbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4cc2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 104a4cc6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4cc9 jne 0x104a4cd6 */
  if (!C.zf) goto L_104a4cd6;
  /* 104a4ccb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4cce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4cd1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104a4cd4 jmp 0x104a4cdd */
  goto L_104a4cdd;
L_104a4cd6:;
  /* 104a4cd6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_104a4cdd:;
  /* 104a4cdd jmp 0x104a4ce6 */
  goto L_104a4ce6;
L_104a4cdf:;
  /* 104a4cdf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_104a4ce6:;
  /* 104a4ce6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a4ce8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4cec sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 104a4cef mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_104a4cf2:;
  /* 104a4cf2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a4cf5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104a4cf7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_104a4cfa:;
  /* 104a4cfa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a4cfd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a4d00 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a4d03 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 104a4d06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a4d08 je 0x104a4d2e */
  if (C.zf) goto L_104a4d2e;
  /* 104a4d0a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4d0e je 0x104a4d1f */
  if (C.zf) goto L_104a4d1f;
  /* 104a4d10 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a4d13 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 104a4d16 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a4d19 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4d1c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_104a4d1f:;
  /* 104a4d1f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a4d22 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104a4d24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4d27 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a4d2a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104a4d2c jmp 0x104a4cfa */
  goto L_104a4cfa;
L_104a4d2e:;
  /* 104a4d2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4d31 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104a4d34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a4d36 je 0x104a4d54 */
  if (C.zf) goto L_104a4d54;
  /* 104a4d38 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4d3c jne 0x104a4d59 */
  if (!C.zf) goto L_104a4d59;
  /* 104a4d3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4d41 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104a4d44 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4d47 je 0x104a4d54 */
  if (C.zf) goto L_104a4d54;
  /* 104a4d49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4d4c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104a4d4f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4d52 jne 0x104a4d59 */
  if (!C.zf) goto L_104a4d59;
L_104a4d54:;
  /* 104a4d54 jmp 0x104a4e04 */
  goto L_104a4e04;
L_104a4d59:;
  /* 104a4d59 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4d5d je 0x104a4df6 */
  if (C.zf) goto L_104a4df6;
  /* 104a4d63 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4d67 je 0x104a4dbd */
  if (C.zf) goto L_104a4dbd;
  /* 104a4d69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4d6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a4d6e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104a4d70 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a4d72 mov cl, byte ptr [eax + 0x104cfca1] */
  CL = (r8((uint32_t)(EAX + 0x104cfca1)));
  /* 104a4d78 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 104a4d7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a4d7d je 0x104a4da8 */
  if (C.zf) goto L_104a4da8;
  /* 104a4d7f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a4d82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4d85 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104a4d87 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 104a4d89 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a4d8c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4d8f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 104a4d92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4d95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4d98 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a4d9b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a4d9e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a4da0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4da3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a4da6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_104a4da8:;
  /* 104a4da8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a4dab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4dae mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104a4db0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 104a4db2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a4db5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4db8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 104a4dbb jmp 0x104a4de9 */
  goto L_104a4de9;
L_104a4dbd:;
  /* 104a4dbd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4dc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a4dc2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104a4dc4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a4dc6 mov cl, byte ptr [eax + 0x104cfca1] */
  CL = (r8((uint32_t)(EAX + 0x104cfca1)));
  /* 104a4dcc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 104a4dcf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a4dd1 je 0x104a4de9 */
  if (C.zf) goto L_104a4de9;
  /* 104a4dd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4dd6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4dd9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104a4ddc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a4ddf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104a4de1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4de4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a4de7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_104a4de9:;
  /* 104a4de9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a4dec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104a4dee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4df1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a4df4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_104a4df6:;
  /* 104a4df6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4df9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4dfc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a4dff jmp 0x104a4c71 */
  goto L_104a4c71;
L_104a4e04:;
  /* 104a4e04 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4e08 je 0x104a4e19 */
  if (C.zf) goto L_104a4e19;
  /* 104a4e0a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a4e0d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 104a4e10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a4e13 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4e16 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_104a4e19:;
  /* 104a4e19 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a4e1c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104a4e1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4e21 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104a4e24 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104a4e26 jmp 0x104a4c13 */
  goto L_104a4c13;
L_104a4e2b:;
  /* 104a4e2b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4e2f je 0x104a4e43 */
  if (C.zf) goto L_104a4e43;
  /* 104a4e31 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a4e34 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104a4e3a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a4e3d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4e40 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_104a4e43:;
  /* 104a4e43 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a4e46 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104a4e48 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4e4b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a4e4e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104a4e50 mov esp, ebp */
  ESP = (EBP);
  /* 104a4e52 pop ebp */
  EBP = (pop32());
  /* 104a4e53 ret  */
  ESPCHK(0x104a4a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e60 @ 0x104a4e60 (537 bytes, 173 insns) */
void f_104a4e60(void) {
  FTRACE(0x104a4e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a4e60 push ebp */
  push32((uint32_t)(EBP));
  /* 104a4e61 mov ebp, esp */
  EBP = (ESP);
  /* 104a4e63 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a4e66 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 104a4e6d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 104a4e74 cmp dword ptr [0x104ce57c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce57c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4e7b jne 0x104a4eba */
  if (!C.zf) goto L_104a4eba;
  /* 104a4e7d call dword ptr [0x104d02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02d0))), 0x104a4e83u);
  /* 104a4e83 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104a4e86 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4e8a je 0x104a4e98 */
  if (C.zf) goto L_104a4e98;
  /* 104a4e8c mov dword ptr [0x104ce57c], 1 */
  w32((uint32_t)(0x104ce57c), (0x1u));
  /* 104a4e96 jmp 0x104a4eba */
  goto L_104a4eba;
L_104a4e98:;
  /* 104a4e98 call dword ptr [0x104d02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02cc))), 0x104a4e9eu);
  /* 104a4e9e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104a4ea1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4ea5 je 0x104a4eb3 */
  if (C.zf) goto L_104a4eb3;
  /* 104a4ea7 mov dword ptr [0x104ce57c], 2 */
  w32((uint32_t)(0x104ce57c), (0x2u));
  /* 104a4eb1 jmp 0x104a4eba */
  goto L_104a4eba;
L_104a4eb3:;
  /* 104a4eb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a4eb5 jmp 0x104a5075 */
  goto L_104a5075;
L_104a4eba:;
  /* 104a4eba cmp dword ptr [0x104ce57c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ce57c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4ec1 jne 0x104a4fbe */
  if (!C.zf) goto L_104a4fbe;
  /* 104a4ec7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4ecb jne 0x104a4ee3 */
  if (!C.zf) goto L_104a4ee3;
  /* 104a4ecd call dword ptr [0x104d02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02d0))), 0x104a4ed3u);
  /* 104a4ed3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104a4ed6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4eda jne 0x104a4ee3 */
  if (!C.zf) goto L_104a4ee3;
  /* 104a4edc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a4ede jmp 0x104a5075 */
  goto L_104a5075;
L_104a4ee3:;
  /* 104a4ee3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a4ee6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104a4ee9:;
  /* 104a4ee9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a4eec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a4eee mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 104a4ef1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a4ef3 je 0x104a4f15 */
  if (C.zf) goto L_104a4f15;
  /* 104a4ef5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a4ef8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4efb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104a4efe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a4f01 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a4f03 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 104a4f06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a4f08 jne 0x104a4f13 */
  if (!C.zf) goto L_104a4f13;
  /* 104a4f0a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a4f0d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4f10 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104a4f13:;
  /* 104a4f13 jmp 0x104a4ee9 */
  goto L_104a4ee9;
L_104a4f15:;
  /* 104a4f15 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a4f18 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a4f1b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 104a4f1d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4f20 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104a4f23 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4f25 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4f27 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4f29 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4f2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4f2e push edx */
  push32((uint32_t)(EDX));
  /* 104a4f2f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a4f32 push eax */
  push32((uint32_t)(EAX));
  /* 104a4f33 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4f35 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4f37 call dword ptr [0x104d0224] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0224))), 0x104a4f3du);
  /* 104a4f3d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104a4f40 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4f44 je 0x104a4f64 */
  if (C.zf) goto L_104a4f64;
  /* 104a4f46 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 104a4f48 push 0x104c9aec */
  push32((uint32_t)(0x104c9aecu));
  /* 104a4f4d push 2 */
  push32((uint32_t)(0x2u));
  /* 104a4f4f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a4f52 push ecx */
  push32((uint32_t)(ECX));
  /* 104a4f53 call 0x104a2890 */
  push32(0x104a4f58u); f_104a2890();
  /* 104a4f58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4f5b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104a4f5e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4f62 jne 0x104a4f75 */
  if (!C.zf) goto L_104a4f75;
L_104a4f64:;
  /* 104a4f64 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a4f67 push edx */
  push32((uint32_t)(EDX));
  /* 104a4f68 call dword ptr [0x104d0220] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0220))), 0x104a4f6eu);
  /* 104a4f6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a4f70 jmp 0x104a5075 */
  goto L_104a5075;
L_104a4f75:;
  /* 104a4f75 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4f77 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4f79 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a4f7c push eax */
  push32((uint32_t)(EAX));
  /* 104a4f7d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a4f80 push ecx */
  push32((uint32_t)(ECX));
  /* 104a4f81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a4f84 push edx */
  push32((uint32_t)(EDX));
  /* 104a4f85 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a4f88 push eax */
  push32((uint32_t)(EAX));
  /* 104a4f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 104a4f8d call dword ptr [0x104d0224] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0224))), 0x104a4f93u);
  /* 104a4f93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a4f95 jne 0x104a4fac */
  if (!C.zf) goto L_104a4fac;
  /* 104a4f97 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a4f99 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a4f9c push ecx */
  push32((uint32_t)(ECX));
  /* 104a4f9d call 0x104a3320 */
  push32(0x104a4fa2u); f_104a3320();
  /* 104a4fa2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4fa5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_104a4fac:;
  /* 104a4fac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a4faf push edx */
  push32((uint32_t)(EDX));
  /* 104a4fb0 call dword ptr [0x104d0220] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0220))), 0x104a4fb6u);
  /* 104a4fb6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a4fb9 jmp 0x104a5075 */
  goto L_104a5075;
L_104a4fbe:;
  /* 104a4fbe cmp dword ptr [0x104ce57c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x104ce57c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4fc5 jne 0x104a5073 */
  if (!C.zf) goto L_104a5073;
  /* 104a4fcb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4fcf jne 0x104a4fe7 */
  if (!C.zf) goto L_104a4fe7;
  /* 104a4fd1 call dword ptr [0x104d02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02cc))), 0x104a4fd7u);
  /* 104a4fd7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104a4fda cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a4fde jne 0x104a4fe7 */
  if (!C.zf) goto L_104a4fe7;
  /* 104a4fe0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a4fe2 jmp 0x104a5075 */
  goto L_104a5075;
L_104a4fe7:;
  /* 104a4fe7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a4fea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_104a4fed:;
  /* 104a4fed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a4ff0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104a4ff3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a4ff5 je 0x104a5015 */
  if (C.zf) goto L_104a5015;
  /* 104a4ff7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a4ffa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a4ffd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104a5000 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a5003 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104a5006 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a5008 jne 0x104a5013 */
  if (!C.zf) goto L_104a5013;
  /* 104a500a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a500d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5010 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_104a5013:;
  /* 104a5013 jmp 0x104a4fed */
  goto L_104a4fed;
L_104a5015:;
  /* 104a5015 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a5018 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a501b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a501e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104a5021 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 104a5026 push 0x104c9aec */
  push32((uint32_t)(0x104c9aecu));
  /* 104a502b push 2 */
  push32((uint32_t)(0x2u));
  /* 104a502d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a5030 push edx */
  push32((uint32_t)(EDX));
  /* 104a5031 call 0x104a2890 */
  push32(0x104a5036u); f_104a2890();
  /* 104a5036 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5039 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104a503c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5040 jne 0x104a5050 */
  if (!C.zf) goto L_104a5050;
  /* 104a5042 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a5045 push eax */
  push32((uint32_t)(EAX));
  /* 104a5046 call dword ptr [0x104d02c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02c0))), 0x104a504cu);
  /* 104a504c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a504e jmp 0x104a5075 */
  goto L_104a5075;
L_104a5050:;
  /* 104a5050 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a5053 push ecx */
  push32((uint32_t)(ECX));
  /* 104a5054 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a5057 push edx */
  push32((uint32_t)(EDX));
  /* 104a5058 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a505b push eax */
  push32((uint32_t)(EAX));
  /* 104a505c call 0x104a9170 */
  push32(0x104a5061u); f_104a9170();
  /* 104a5061 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5064 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a5067 push ecx */
  push32((uint32_t)(ECX));
  /* 104a5068 call dword ptr [0x104d02c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02c0))), 0x104a506eu);
  /* 104a506e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a5071 jmp 0x104a5075 */
  goto L_104a5075;
L_104a5073:;
  /* 104a5073 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104a5075:;
  /* 104a5075 mov esp, ebp */
  ESP = (EBP);
  /* 104a5077 pop ebp */
  EBP = (pop32());
  /* 104a5078 ret  */
  ESPCHK(0x104a4e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10005080 @ 0x104a5080 (77 bytes, 25 insns) */
void f_104a5080(void) {
  FTRACE(0x104a5080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a5080 push ebp */
  push32((uint32_t)(EBP));
  /* 104a5081 mov ebp, esp */
  EBP = (ESP);
  /* 104a5083 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a5085 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 104a508a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a508c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5090 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 104a5093 push eax */
  push32((uint32_t)(EAX));
  /* 104a5094 call dword ptr [0x104d02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02d8))), 0x104a509au);
  /* 104a509a mov dword ptr [0x104cfdcc], eax */
  w32((uint32_t)(0x104cfdcc), (EAX));
  /* 104a509f cmp dword ptr [0x104cfdcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104cfdcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a50a6 jne 0x104a50ac */
  if (!C.zf) goto L_104a50ac;
  /* 104a50a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a50aa jmp 0x104a50cb */
  goto L_104a50cb;
L_104a50ac:;
  /* 104a50ac call 0x104a6b30 */
  push32(0x104a50b1u); f_104a6b30();
  /* 104a50b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a50b3 jne 0x104a50c6 */
  if (!C.zf) goto L_104a50c6;
  /* 104a50b5 mov ecx, dword ptr [0x104cfdcc] */
  ECX = (r32((uint32_t)(0x104cfdcc)));
  /* 104a50bb push ecx */
  push32((uint32_t)(ECX));
  /* 104a50bc call dword ptr [0x104d02d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02d4))), 0x104a50c2u);
  /* 104a50c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a50c4 jmp 0x104a50cb */
  goto L_104a50cb;
L_104a50c6:;
  /* 104a50c6 mov eax, 1 */
  EAX = (0x1u);
L_104a50cb:;
  /* 104a50cb pop ebp */
  EBP = (pop32());
  /* 104a50cc ret  */
  ESPCHK(0x104a5080u, _esp0);
  ESP += 4; return;
}

/* FUN_100050d0 @ 0x104a50d0 (156 bytes, 48 insns) */
void f_104a50d0(void) {
  FTRACE(0x104a50d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a50d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a50d1 mov ebp, esp */
  EBP = (ESP);
  /* 104a50d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a50d6 mov eax, dword ptr [0x104cfdc8] */
  EAX = (r32((uint32_t)(0x104cfdc8)));
  /* 104a50db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104a50de mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104a50e5 jmp 0x104a50f0 */
  goto L_104a50f0;
L_104a50e7:;
  /* 104a50e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a50ea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a50ed mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104a50f0:;
  /* 104a50f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a50f3 cmp edx, dword ptr [0x104cfdc4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x104cfdc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a50f9 jge 0x104a5146 */
  if ((C.sf==C.of)) goto L_104a5146;
  /* 104a50fb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 104a5100 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 104a5105 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a5108 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104a510b push ecx */
  push32((uint32_t)(ECX));
  /* 104a510c call dword ptr [0x104d02e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02e0))), 0x104a5112u);
  /* 104a5112 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 104a5117 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a5119 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a511c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 104a511f push eax */
  push32((uint32_t)(EAX));
  /* 104a5120 call dword ptr [0x104d02e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02e0))), 0x104a5126u);
  /* 104a5126 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a5129 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 104a512c push edx */
  push32((uint32_t)(EDX));
  /* 104a512d push 0 */
  push32((uint32_t)(0x0u));
  /* 104a512f mov eax, dword ptr [0x104cfdcc] */
  EAX = (r32((uint32_t)(0x104cfdcc)));
  /* 104a5134 push eax */
  push32((uint32_t)(EAX));
  /* 104a5135 call dword ptr [0x104d02dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02dc))), 0x104a513bu);
  /* 104a513b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a513e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5141 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104a5144 jmp 0x104a50e7 */
  goto L_104a50e7;
L_104a5146:;
  /* 104a5146 mov edx, dword ptr [0x104cfdc8] */
  EDX = (r32((uint32_t)(0x104cfdc8)));
  /* 104a514c push edx */
  push32((uint32_t)(EDX));
  /* 104a514d push 0 */
  push32((uint32_t)(0x0u));
  /* 104a514f mov eax, dword ptr [0x104cfdcc] */
  EAX = (r32((uint32_t)(0x104cfdcc)));
  /* 104a5154 push eax */
  push32((uint32_t)(EAX));
  /* 104a5155 call dword ptr [0x104d02dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02dc))), 0x104a515bu);
  /* 104a515b mov ecx, dword ptr [0x104cfdcc] */
  ECX = (r32((uint32_t)(0x104cfdcc)));
  /* 104a5161 push ecx */
  push32((uint32_t)(ECX));
  /* 104a5162 call dword ptr [0x104d02d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02d4))), 0x104a5168u);
  /* 104a5168 mov esp, ebp */
  ESP = (EBP);
  /* 104a516a pop ebp */
  EBP = (pop32());
  /* 104a516b ret  */
  ESPCHK(0x104a50d0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x104a5170 (73 bytes, 19 insns) */
void f_104a5170(void) {
  FTRACE(0x104a5170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a5170 push ebp */
  push32((uint32_t)(EBP));
  /* 104a5171 mov ebp, esp */
  EBP = (ESP);
  /* 104a5173 cmp dword ptr [0x104ce410], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ce410))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a517a je 0x104a518e */
  if (C.zf) goto L_104a518e;
  /* 104a517c cmp dword ptr [0x104ce410], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce410))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5183 jne 0x104a51b7 */
  if (!C.zf) goto L_104a51b7;
  /* 104a5185 cmp dword ptr [0x104ce414], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ce414))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a518c jne 0x104a51b7 */
  if (!C.zf) goto L_104a51b7;
L_104a518e:;
  /* 104a518e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 104a5193 call 0x104a51c0 */
  push32(0x104a5198u); f_104a51c0();
  /* 104a5198 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a519b cmp dword ptr [0x104ce580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a51a2 je 0x104a51aa */
  if (C.zf) goto L_104a51aa;
  /* 104a51a4 call dword ptr [0x104ce580] */
  call_ind((uint32_t)(r32((uint32_t)(0x104ce580))), 0x104a51aau);
L_104a51aa:;
  /* 104a51aa push 0xff */
  push32((uint32_t)(0xffu));
  /* 104a51af call 0x104a51c0 */
  push32(0x104a51b4u); f_104a51c0();
  /* 104a51b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a51b7:;
  /* 104a51b7 pop ebp */
  EBP = (pop32());
  /* 104a51b8 ret  */
  ESPCHK(0x104a5170u, _esp0);
  ESP += 4; return;
}

/* FUN_100051c0 @ 0x104a51c0 (447 bytes, 131 insns) */
void f_104a51c0(void) {
  FTRACE(0x104a51c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a51c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a51c1 mov ebp, esp */
  EBP = (ESP);
  /* 104a51c3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a51c9 push ebx */
  push32((uint32_t)(EBX));
  /* 104a51ca push esi */
  push32((uint32_t)(ESI));
  /* 104a51cb push edi */
  push32((uint32_t)(EDI));
  /* 104a51cc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104a51d3 jmp 0x104a51de */
  goto L_104a51de;
L_104a51d5:;
  /* 104a51d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a51d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a51db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104a51de:;
  /* 104a51de cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a51e2 jae 0x104a51f7 */
  if (!C.cf) goto L_104a51f7;
  /* 104a51e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a51e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a51ea cmp edx, dword ptr [ecx*8 + 0x104ccab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x104ccab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a51f1 jne 0x104a51f5 */
  if (!C.zf) goto L_104a51f5;
  /* 104a51f3 jmp 0x104a51f7 */
  goto L_104a51f7;
L_104a51f5:;
  /* 104a51f5 jmp 0x104a51d5 */
  goto L_104a51d5;
L_104a51f7:;
  /* 104a51f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a51fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a51fd cmp ecx, dword ptr [eax*8 + 0x104ccab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x104ccab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5204 jne 0x104a5378 */
  if (!C.zf) goto L_104a5378;
  /* 104a520a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5211 je 0x104a5234 */
  if (C.zf) goto L_104a5234;
  /* 104a5213 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a5216 mov eax, dword ptr [edx*8 + 0x104ccab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x104ccab4)));
  /* 104a521d push eax */
  push32((uint32_t)(EAX));
  /* 104a521e push 0 */
  push32((uint32_t)(0x0u));
  /* 104a5220 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a5222 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a5224 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a5226 call 0x104a1950 */
  push32(0x104a522bu); f_104a1950();
  /* 104a522b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a522e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5231 jne 0x104a5234 */
  if (!C.zf) goto L_104a5234;
  /* 104a5233 int3  */
  x86_unimpl("int3 @ 0x104a5233");
L_104a5234:;
  /* 104a5234 cmp dword ptr [0x104ce410], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ce410))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a523b je 0x104a524f */
  if (C.zf) goto L_104a524f;
  /* 104a523d cmp dword ptr [0x104ce410], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce410))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5244 jne 0x104a5288 */
  if (!C.zf) goto L_104a5288;
  /* 104a5246 cmp dword ptr [0x104ce414], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104ce414))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a524d jne 0x104a5288 */
  if (!C.zf) goto L_104a5288;
L_104a524f:;
  /* 104a524f push 0 */
  push32((uint32_t)(0x0u));
  /* 104a5251 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 104a5254 push ecx */
  push32((uint32_t)(ECX));
  /* 104a5255 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a5258 mov eax, dword ptr [edx*8 + 0x104ccab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x104ccab4)));
  /* 104a525f push eax */
  push32((uint32_t)(EAX));
  /* 104a5260 call 0x104a56c0 */
  push32(0x104a5265u); f_104a56c0();
  /* 104a5265 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5268 push eax */
  push32((uint32_t)(EAX));
  /* 104a5269 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a526c mov edx, dword ptr [ecx*8 + 0x104ccab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x104ccab4)));
  /* 104a5273 push edx */
  push32((uint32_t)(EDX));
  /* 104a5274 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 104a5276 call dword ptr [0x104d0258] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0258))), 0x104a527cu);
  /* 104a527c push eax */
  push32((uint32_t)(EAX));
  /* 104a527d call dword ptr [0x104d025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d025c))), 0x104a5283u);
  /* 104a5283 jmp 0x104a5378 */
  goto L_104a5378;
L_104a5288:;
  /* 104a5288 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a528f je 0x104a5378 */
  if (C.zf) goto L_104a5378;
  /* 104a5295 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 104a529a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 104a52a0 push eax */
  push32((uint32_t)(EAX));
  /* 104a52a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a52a3 call dword ptr [0x104d0274] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0274))), 0x104a52a9u);
  /* 104a52a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a52ab jne 0x104a52c1 */
  if (!C.zf) goto L_104a52c1;
  /* 104a52ad push 0x104c9354 */
  push32((uint32_t)(0x104c9354u));
  /* 104a52b2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 104a52b8 push ecx */
  push32((uint32_t)(ECX));
  /* 104a52b9 call 0x104a5840 */
  push32(0x104a52beu); f_104a5840();
  /* 104a52be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a52c1:;
  /* 104a52c1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 104a52c7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104a52ca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a52cd push eax */
  push32((uint32_t)(EAX));
  /* 104a52ce call 0x104a56c0 */
  push32(0x104a52d3u); f_104a56c0();
  /* 104a52d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a52d6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a52d9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a52dc jbe 0x104a530a */
  if ((C.cf||C.zf)) goto L_104a530a;
  /* 104a52de lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 104a52e4 push ecx */
  push32((uint32_t)(ECX));
  /* 104a52e5 call 0x104a56c0 */
  push32(0x104a52eau); f_104a56c0();
  /* 104a52ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a52ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a52f0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 104a52f4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104a52f7 push 3 */
  push32((uint32_t)(0x3u));
  /* 104a52f9 push 0x104c9350 */
  push32((uint32_t)(0x104c9350u));
  /* 104a52fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a5301 push ecx */
  push32((uint32_t)(ECX));
  /* 104a5302 call 0x104a60b0 */
  push32(0x104a5307u); f_104a60b0();
  /* 104a5307 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a530a:;
  /* 104a530a push 0x104c9da8 */
  push32((uint32_t)(0x104c9da8u));
  /* 104a530f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 104a5315 push edx */
  push32((uint32_t)(EDX));
  /* 104a5316 call 0x104a5840 */
  push32(0x104a531bu); f_104a5840();
  /* 104a531b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a531e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a5321 push eax */
  push32((uint32_t)(EAX));
  /* 104a5322 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 104a5328 push ecx */
  push32((uint32_t)(ECX));
  /* 104a5329 call 0x104a5850 */
  push32(0x104a532eu); f_104a5850();
  /* 104a532e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5331 push 0x104c92c8 */
  push32((uint32_t)(0x104c92c8u));
  /* 104a5336 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 104a533c push edx */
  push32((uint32_t)(EDX));
  /* 104a533d call 0x104a5850 */
  push32(0x104a5342u); f_104a5850();
  /* 104a5342 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5345 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a5348 mov ecx, dword ptr [eax*8 + 0x104ccab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x104ccab4)));
  /* 104a534f push ecx */
  push32((uint32_t)(ECX));
  /* 104a5350 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 104a5356 push edx */
  push32((uint32_t)(EDX));
  /* 104a5357 call 0x104a5850 */
  push32(0x104a535cu); f_104a5850();
  /* 104a535c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a535f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 104a5364 push 0x104c9d80 */
  push32((uint32_t)(0x104c9d80u));
  /* 104a5369 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 104a536f push eax */
  push32((uint32_t)(EAX));
  /* 104a5370 call 0x104a5ff0 */
  push32(0x104a5375u); f_104a5ff0();
  /* 104a5375 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a5378:;
  /* 104a5378 pop edi */
  EDI = (pop32());
  /* 104a5379 pop esi */
  ESI = (pop32());
  /* 104a537a pop ebx */
  EBX = (pop32());
  /* 104a537b mov esp, ebp */
  ESP = (EBP);
  /* 104a537d pop ebp */
  EBP = (pop32());
  /* 104a537e ret  */
  ESPCHK(0x104a51c0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x104a5380 (80 bytes, 27 insns) */
void f_104a5380(void) {
  FTRACE(0x104a5380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a5380 push ebp */
  push32((uint32_t)(EBP));
  /* 104a5381 mov ebp, esp */
  EBP = (ESP);
  /* 104a5383 push ecx */
  push32((uint32_t)(ECX));
  /* 104a5384 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104a538b jmp 0x104a5396 */
  goto L_104a5396;
L_104a538d:;
  /* 104a538d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5390 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5393 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104a5396:;
  /* 104a5396 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a539a jae 0x104a53af */
  if (!C.cf) goto L_104a53af;
  /* 104a539c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a539f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a53a2 cmp edx, dword ptr [ecx*8 + 0x104ccab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x104ccab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a53a9 jne 0x104a53ad */
  if (!C.zf) goto L_104a53ad;
  /* 104a53ab jmp 0x104a53af */
  goto L_104a53af;
L_104a53ad:;
  /* 104a53ad jmp 0x104a538d */
  goto L_104a538d;
L_104a53af:;
  /* 104a53af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a53b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a53b5 cmp ecx, dword ptr [eax*8 + 0x104ccab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x104ccab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a53bc jne 0x104a53ca */
  if (!C.zf) goto L_104a53ca;
  /* 104a53be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a53c1 mov eax, dword ptr [edx*8 + 0x104ccab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x104ccab4)));
  /* 104a53c8 jmp 0x104a53cc */
  goto L_104a53cc;
L_104a53ca:;
  /* 104a53ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104a53cc:;
  /* 104a53cc mov esp, ebp */
  ESP = (EBP);
  /* 104a53ce pop ebp */
  EBP = (pop32());
  /* 104a53cf ret  */
  ESPCHK(0x104a5380u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x104a53d0 (66 bytes, 28 insns) */
void f_104a53d0(void) {
  FTRACE(0x104a53d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a53d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a53d1 mov ebp, esp */
  EBP = (ESP);
  /* 104a53d3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a53d7 jne 0x104a53f7 */
  if (!C.zf) goto L_104a53f7;
  /* 104a53d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a53dd jge 0x104a53f7 */
  if ((C.sf==C.of)) goto L_104a53f7;
  /* 104a53df push 1 */
  push32((uint32_t)(0x1u));
  /* 104a53e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a53e4 push eax */
  push32((uint32_t)(EAX));
  /* 104a53e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a53e8 push ecx */
  push32((uint32_t)(ECX));
  /* 104a53e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a53ec push edx */
  push32((uint32_t)(EDX));
  /* 104a53ed call 0x104a5420 */
  push32(0x104a53f2u); f_104a5420();
  /* 104a53f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a53f5 jmp 0x104a540d */
  goto L_104a540d;
L_104a53f7:;
  /* 104a53f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a53f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a53fc push eax */
  push32((uint32_t)(EAX));
  /* 104a53fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a5400 push ecx */
  push32((uint32_t)(ECX));
  /* 104a5401 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a5404 push edx */
  push32((uint32_t)(EDX));
  /* 104a5405 call 0x104a5420 */
  push32(0x104a540au); f_104a5420();
  /* 104a540a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a540d:;
  /* 104a540d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a5410 pop ebp */
  EBP = (pop32());
  /* 104a5411 ret  */
  ESPCHK(0x104a53d0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x104a5420 (194 bytes, 71 insns) */
void f_104a5420(void) {
  FTRACE(0x104a5420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a5420 push ebp */
  push32((uint32_t)(EBP));
  /* 104a5421 mov ebp, esp */
  EBP = (ESP);
  /* 104a5423 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a5426 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a5429 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a542c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5430 je 0x104a5449 */
  if (C.zf) goto L_104a5449;
  /* 104a5432 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5435 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 104a5438 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a543b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a543e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104a5441 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a5444 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104a5446 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_104a5449:;
  /* 104a5449 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a544c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_104a544f:;
  /* 104a544f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a5452 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a5454 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104a5457 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104a545a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a545d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a545f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104a5462 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104a5465 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5469 jbe 0x104a5481 */
  if ((C.cf||C.zf)) goto L_104a5481;
  /* 104a546b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a546e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5471 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5474 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104a5476 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5479 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a547c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104a547f jmp 0x104a5495 */
  goto L_104a5495;
L_104a5481:;
  /* 104a5481 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a5484 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5487 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a548a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104a548c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a548f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5492 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104a5495:;
  /* 104a5495 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5499 ja 0x104a544f */
  if ((!C.cf&&!C.zf)) goto L_104a544f;
  /* 104a549b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a549e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 104a54a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a54a4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a54a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104a54aa:;
  /* 104a54aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a54ad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104a54af mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 104a54b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a54b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a54b8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104a54ba mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104a54bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a54bf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 104a54c2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 104a54c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a54c7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a54ca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104a54cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a54d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a54d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104a54d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a54d9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a54dc jb 0x104a54aa */
  if (C.cf) goto L_104a54aa;
  /* 104a54de mov esp, ebp */
  ESP = (EBP);
  /* 104a54e0 pop ebp */
  EBP = (pop32());
  /* 104a54e1 ret  */
  ESPCHK(0x104a5420u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x104a54f0 (63 bytes, 24 insns) */
void f_104a54f0(void) {
  FTRACE(0x104a54f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a54f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a54f1 mov ebp, esp */
  EBP = (ESP);
  /* 104a54f3 push ecx */
  push32((uint32_t)(ECX));
  /* 104a54f4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a54f8 jne 0x104a5509 */
  if (!C.zf) goto L_104a5509;
  /* 104a54fa cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a54fe jge 0x104a5509 */
  if ((C.sf==C.of)) goto L_104a5509;
  /* 104a5500 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104a5507 jmp 0x104a5510 */
  goto L_104a5510;
L_104a5509:;
  /* 104a5509 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104a5510:;
  /* 104a5510 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5513 push eax */
  push32((uint32_t)(EAX));
  /* 104a5514 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a5517 push ecx */
  push32((uint32_t)(ECX));
  /* 104a5518 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a551b push edx */
  push32((uint32_t)(EDX));
  /* 104a551c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a551f push eax */
  push32((uint32_t)(EAX));
  /* 104a5520 call 0x104a5420 */
  push32(0x104a5525u); f_104a5420();
  /* 104a5525 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5528 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a552b mov esp, ebp */
  ESP = (EBP);
  /* 104a552d pop ebp */
  EBP = (pop32());
  /* 104a552e ret  */
  ESPCHK(0x104a54f0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x104a5530 (30 bytes, 14 insns) */
void f_104a5530(void) {
  FTRACE(0x104a5530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a5530 push ebp */
  push32((uint32_t)(EBP));
  /* 104a5531 mov ebp, esp */
  EBP = (ESP);
  /* 104a5533 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a5535 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a5538 push eax */
  push32((uint32_t)(EAX));
  /* 104a5539 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a553c push ecx */
  push32((uint32_t)(ECX));
  /* 104a553d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a5540 push edx */
  push32((uint32_t)(EDX));
  /* 104a5541 call 0x104a5420 */
  push32(0x104a5546u); f_104a5420();
  /* 104a5546 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5549 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a554c pop ebp */
  EBP = (pop32());
  /* 104a554d ret  */
  ESPCHK(0x104a5530u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x104a5550 (72 bytes, 28 insns) */
void f_104a5550(void) {
  FTRACE(0x104a5550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a5550 push ebp */
  push32((uint32_t)(EBP));
  /* 104a5551 mov ebp, esp */
  EBP = (ESP);
  /* 104a5553 push ecx */
  push32((uint32_t)(ECX));
  /* 104a5554 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5558 jne 0x104a5571 */
  if (!C.zf) goto L_104a5571;
  /* 104a555a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a555e jg 0x104a5571 */
  if ((!C.zf&&C.sf==C.of)) goto L_104a5571;
  /* 104a5560 jl 0x104a5568 */
  if ((C.sf!=C.of)) goto L_104a5568;
  /* 104a5562 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5566 jae 0x104a5571 */
  if (!C.cf) goto L_104a5571;
L_104a5568:;
  /* 104a5568 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104a556f jmp 0x104a5578 */
  goto L_104a5578;
L_104a5571:;
  /* 104a5571 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104a5578:;
  /* 104a5578 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a557b push eax */
  push32((uint32_t)(EAX));
  /* 104a557c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a557f push ecx */
  push32((uint32_t)(ECX));
  /* 104a5580 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a5583 push edx */
  push32((uint32_t)(EDX));
  /* 104a5584 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a5587 push eax */
  push32((uint32_t)(EAX));
  /* 104a5588 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a558b push ecx */
  push32((uint32_t)(ECX));
  /* 104a558c call 0x104a55a0 */
  push32(0x104a5591u); f_104a55a0();
  /* 104a5591 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a5594 mov esp, ebp */
  ESP = (EBP);
  /* 104a5596 pop ebp */
  EBP = (pop32());
  /* 104a5597 ret  */
  ESPCHK(0x104a5550u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x104a55a0 (242 bytes, 91 insns) */
void f_104a55a0(void) {
  FTRACE(0x104a55a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a55a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a55a1 mov ebp, esp */
  EBP = (ESP);
  /* 104a55a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a55a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a55a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a55ac cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a55b0 je 0x104a55d4 */
  if (C.zf) goto L_104a55d4;
  /* 104a55b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a55b5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 104a55b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a55bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a55be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104a55c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a55c4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104a55c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a55c9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a55cc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104a55ce mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104a55d1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_104a55d4:;
  /* 104a55d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a55d7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_104a55da:;
  /* 104a55da mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a55dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a55df push ecx */
  push32((uint32_t)(ECX));
  /* 104a55e0 push eax */
  push32((uint32_t)(EAX));
  /* 104a55e1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a55e4 push edx */
  push32((uint32_t)(EDX));
  /* 104a55e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a55e8 push eax */
  push32((uint32_t)(EAX));
  /* 104a55e9 call 0x104a9520 */
  push32(0x104a55eeu); f_104a9520();
  /* 104a55ee mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104a55f1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a55f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a55f6 push edx */
  push32((uint32_t)(EDX));
  /* 104a55f7 push ecx */
  push32((uint32_t)(ECX));
  /* 104a55f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a55fb push eax */
  push32((uint32_t)(EAX));
  /* 104a55fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a55ff push ecx */
  push32((uint32_t)(ECX));
  /* 104a5600 call 0x104a94b0 */
  push32(0x104a5605u); f_104a94b0();
  /* 104a5605 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104a5608 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 104a560b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a560f jbe 0x104a5627 */
  if ((C.cf||C.zf)) goto L_104a5627;
  /* 104a5611 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a5614 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5617 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a561a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104a561c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a561f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5622 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104a5625 jmp 0x104a563b */
  goto L_104a563b;
L_104a5627:;
  /* 104a5627 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a562a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a562d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5630 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104a5632 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5635 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5638 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104a563b:;
  /* 104a563b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a563f ja 0x104a55da */
  if ((!C.cf&&!C.zf)) goto L_104a55da;
  /* 104a5641 jb 0x104a5649 */
  if (C.cf) goto L_104a5649;
  /* 104a5643 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5647 ja 0x104a55da */
  if ((!C.cf&&!C.zf)) goto L_104a55da;
L_104a5649:;
  /* 104a5649 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a564c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 104a564f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5652 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a5655 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104a5658:;
  /* 104a5658 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a565b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104a565d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 104a5660 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5663 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a5666 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104a5668 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104a566a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a566d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 104a5670 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 104a5672 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5675 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a5678 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104a567b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a567e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5681 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104a5684 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a5687 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a568a jb 0x104a5658 */
  if (C.cf) goto L_104a5658;
  /* 104a568c mov esp, ebp */
  ESP = (EBP);
  /* 104a568e pop ebp */
  EBP = (pop32());
  /* 104a568f ret 0x14 */
  ESPCHK(0x104a55a0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x104a56a0 (31 bytes, 15 insns) */
void f_104a56a0(void) {
  FTRACE(0x104a56a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a56a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a56a1 mov ebp, esp */
  EBP = (ESP);
  /* 104a56a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a56a5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a56a8 push eax */
  push32((uint32_t)(EAX));
  /* 104a56a9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a56ac push ecx */
  push32((uint32_t)(ECX));
  /* 104a56ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a56b0 push edx */
  push32((uint32_t)(EDX));
  /* 104a56b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a56b4 push eax */
  push32((uint32_t)(EAX));
  /* 104a56b5 call 0x104a55a0 */
  push32(0x104a56bau); f_104a55a0();
  /* 104a56ba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a56bd pop ebp */
  EBP = (pop32());
  /* 104a56be ret  */
  ESPCHK(0x104a56a0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x104a56c0 (123 bytes, 44 insns) */
void f_104a56c0(void) {
  FTRACE(0x104a56c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a56c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 104a56c4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 104a56ca je 0x104a56e0 */
  if (C.zf) goto L_104a56e0;
L_104a56cc:;
  /* 104a56cc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 104a56ce inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 104a56cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 104a56d1 je 0x104a5713 */
  if (C.zf) goto L_104a5713;
  /* 104a56d3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 104a56d9 jne 0x104a56cc */
  if (!C.zf) goto L_104a56cc;
  /* 104a56db add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_104a56e0:;
  /* 104a56e0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 104a56e2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 104a56e7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a56e9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a56ec xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104a56ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a56f1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 104a56f6 je 0x104a56e0 */
  if (C.zf) goto L_104a56e0;
  /* 104a56f8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 104a56fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 104a56fd je 0x104a5731 */
  if (C.zf) goto L_104a5731;
  /* 104a56ff test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 104a5701 je 0x104a5727 */
  if (C.zf) goto L_104a5727;
  /* 104a5703 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 104a5708 je 0x104a571d */
  if (C.zf) goto L_104a571d;
  /* 104a570a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 104a570f je 0x104a5713 */
  if (C.zf) goto L_104a5713;
  /* 104a5711 jmp 0x104a56e0 */
  goto L_104a56e0;
L_104a5713:;
  /* 104a5713 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 104a5716 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 104a571a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a571c ret  */
  ESPCHK(0x104a56c0u, _esp0);
  ESP += 4; return;
L_104a571d:;
  /* 104a571d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 104a5720 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 104a5724 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a5726 ret  */
  ESPCHK(0x104a56c0u, _esp0);
  ESP += 4; return;
L_104a5727:;
  /* 104a5727 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 104a572a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 104a572e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a5730 ret  */
  ESPCHK(0x104a56c0u, _esp0);
  ESP += 4; return;
L_104a5731:;
  /* 104a5731 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 104a5734 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 104a5738 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a573a ret  */
  ESPCHK(0x104a56c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005740 @ 0x104a5740 (249 bytes, 93 insns) */
void f_104a5740(void) {
  FTRACE(0x104a5740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a5740 push ebp */
  push32((uint32_t)(EBP));
  /* 104a5741 mov ebp, esp */
  EBP = (ESP);
  /* 104a5743 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a5746 push ebx */
  push32((uint32_t)(EBX));
  /* 104a5747 push esi */
  push32((uint32_t)(ESI));
  /* 104a5748 push edi */
  push32((uint32_t)(EDI));
  /* 104a5749 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 104a574c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104a574f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 104a5752 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_104a5755:;
  /* 104a5755 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5759 jne 0x104a5779 */
  if (!C.zf) goto L_104a5779;
  /* 104a575b push 0x104c9de0 */
  push32((uint32_t)(0x104c9de0u));
  /* 104a5760 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a5762 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 104a5764 push 0x104c9dd4 */
  push32((uint32_t)(0x104c9dd4u));
  /* 104a5769 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a576b call 0x104a1950 */
  push32(0x104a5770u); f_104a1950();
  /* 104a5770 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5773 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5776 jne 0x104a5779 */
  if (!C.zf) goto L_104a5779;
  /* 104a5778 int3  */
  x86_unimpl("int3 @ 0x104a5778");
L_104a5779:;
  /* 104a5779 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a577b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a577d jne 0x104a5755 */
  if (!C.zf) goto L_104a5755;
L_104a577f:;
  /* 104a577f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5783 jne 0x104a57a3 */
  if (!C.zf) goto L_104a57a3;
  /* 104a5785 push 0x104c9dc4 */
  push32((uint32_t)(0x104c9dc4u));
  /* 104a578a push 0 */
  push32((uint32_t)(0x0u));
  /* 104a578c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 104a578e push 0x104c9dd4 */
  push32((uint32_t)(0x104c9dd4u));
  /* 104a5793 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a5795 call 0x104a1950 */
  push32(0x104a579au); f_104a1950();
  /* 104a579a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a579d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a57a0 jne 0x104a57a3 */
  if (!C.zf) goto L_104a57a3;
  /* 104a57a2 int3  */
  x86_unimpl("int3 @ 0x104a57a2");
L_104a57a3:;
  /* 104a57a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a57a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a57a7 jne 0x104a577f */
  if (!C.zf) goto L_104a577f;
  /* 104a57a9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a57ac mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 104a57b3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a57b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a57b9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 104a57bc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a57bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a57c2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 104a57c4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a57c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a57ca mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 104a57cd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104a57d0 push edx */
  push32((uint32_t)(EDX));
  /* 104a57d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a57d4 push eax */
  push32((uint32_t)(EAX));
  /* 104a57d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a57d8 push ecx */
  push32((uint32_t)(ECX));
  /* 104a57d9 call 0x104a9820 */
  push32(0x104a57deu); f_104a9820();
  /* 104a57de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a57e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104a57e4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a57e7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104a57ea sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a57ed mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a57f0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 104a57f3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a57f6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a57fa jl 0x104a581e */
  if ((C.sf!=C.of)) goto L_104a581e;
  /* 104a57fc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a57ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104a5801 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 104a5804 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a5806 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104a580c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 104a580f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a5812 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104a5814 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5817 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a581a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104a581c jmp 0x104a582f */
  goto L_104a582f;
L_104a581e:;
  /* 104a581e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a5821 push eax */
  push32((uint32_t)(EAX));
  /* 104a5822 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a5824 call 0x104a95a0 */
  push32(0x104a5829u); f_104a95a0();
  /* 104a5829 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a582c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_104a582f:;
  /* 104a582f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a5832 pop edi */
  EDI = (pop32());
  /* 104a5833 pop esi */
  ESI = (pop32());
  /* 104a5834 pop ebx */
  EBX = (pop32());
  /* 104a5835 mov esp, ebp */
  ESP = (EBP);
  /* 104a5837 pop ebp */
  EBP = (pop32());
  /* 104a5838 ret  */
  ESPCHK(0x104a5740u, _esp0);
  ESP += 4; return;
}

/* FUN_10005840 @ 0x104a5840 (7 bytes, 3 insns) */
void f_104a5840(void) {
  FTRACE(0x104a5840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a5840 push edi */
  push32((uint32_t)(EDI));
  /* 104a5841 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 104a5845 jmp 0x104a58b1 */
  jmp_ind(0x104a58b1u); return;
}

/* FUN_10005850 @ 0x104a5850 (224 bytes, 84 insns) */
void f_104a5850(void) {
  FTRACE(0x104a5850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a5850 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 104a5854 push edi */
  push32((uint32_t)(EDI));
  /* 104a5855 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 104a585b je 0x104a586c */
  if (C.zf) goto L_104a586c;
L_104a585d:;
  /* 104a585d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 104a585f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 104a5860 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 104a5862 je 0x104a589f */
  if (C.zf) goto L_104a589f;
  /* 104a5864 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 104a586a jne 0x104a585d */
  if (!C.zf) goto L_104a585d;
L_104a586c:;
  /* 104a586c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 104a586e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 104a5873 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5875 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a5878 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104a587a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a587d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 104a5882 je 0x104a586c */
  if (C.zf) goto L_104a586c;
  /* 104a5884 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 104a5887 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 104a5889 je 0x104a58ae */
  if (C.zf) goto L_104a58ae;
  /* 104a588b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 104a588d je 0x104a58a9 */
  if (C.zf) goto L_104a58a9;
  /* 104a588f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 104a5894 je 0x104a58a4 */
  if (C.zf) goto L_104a58a4;
  /* 104a5896 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 104a589b je 0x104a589f */
  if (C.zf) goto L_104a589f;
  /* 104a589d jmp 0x104a586c */
  goto L_104a586c;
L_104a589f:;
  /* 104a589f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 104a58a2 jmp 0x104a58b1 */
  goto L_104a58b1;
L_104a58a4:;
  /* 104a58a4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 104a58a7 jmp 0x104a58b1 */
  goto L_104a58b1;
L_104a58a9:;
  /* 104a58a9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 104a58ac jmp 0x104a58b1 */
  goto L_104a58b1;
L_104a58ae:;
  /* 104a58ae lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_104a58b1:;
  /* 104a58b1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 104a58b5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 104a58bb je 0x104a58d6 */
  if (C.zf) goto L_104a58d6;
L_104a58bd:;
  /* 104a58bd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104a58bf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 104a58c0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 104a58c2 je 0x104a5928 */
  if (C.zf) goto L_104a5928;
  /* 104a58c4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 104a58c6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104a58c7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 104a58cd jne 0x104a58bd */
  if (!C.zf) goto L_104a58bd;
  /* 104a58cf jmp 0x104a58d6 */
  goto L_104a58d6;
L_104a58d1:;
  /* 104a58d1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 104a58d3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_104a58d6:;
  /* 104a58d6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 104a58db mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 104a58dd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a58df xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a58e2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104a58e4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a58e6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a58e9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 104a58ee je 0x104a58d1 */
  if (C.zf) goto L_104a58d1;
  /* 104a58f0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 104a58f2 je 0x104a5928 */
  if (C.zf) goto L_104a5928;
  /* 104a58f4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 104a58f6 je 0x104a591f */
  if (C.zf) goto L_104a591f;
  /* 104a58f8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 104a58fe je 0x104a5912 */
  if (C.zf) goto L_104a5912;
  /* 104a5900 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 104a5906 je 0x104a590a */
  if (C.zf) goto L_104a590a;
  /* 104a5908 jmp 0x104a58d1 */
  goto L_104a58d1;
L_104a590a:;
  /* 104a590a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 104a590c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 104a5910 pop edi */
  EDI = (pop32());
  /* 104a5911 ret  */
  ESPCHK(0x104a5850u, _esp0);
  ESP += 4; return;
L_104a5912:;
  /* 104a5912 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 104a5915 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 104a5919 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 104a591d pop edi */
  EDI = (pop32());
  /* 104a591e ret  */
  ESPCHK(0x104a5850u, _esp0);
  ESP += 4; return;
L_104a591f:;
  /* 104a591f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 104a5922 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 104a5926 pop edi */
  EDI = (pop32());
  /* 104a5927 ret  */
  ESPCHK(0x104a5850u, _esp0);
  ESP += 4; return;
L_104a5928:;
  /* 104a5928 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 104a592a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 104a592e pop edi */
  EDI = (pop32());
  /* 104a592f ret  */
  ESPCHK(0x104a5850u, _esp0);
  ESP += 4; return;
}

/* FUN_10005930 @ 0x104a5930 (243 bytes, 91 insns) */
void f_104a5930(void) {
  FTRACE(0x104a5930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a5930 push ebp */
  push32((uint32_t)(EBP));
  /* 104a5931 mov ebp, esp */
  EBP = (ESP);
  /* 104a5933 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a5936 push ebx */
  push32((uint32_t)(EBX));
  /* 104a5937 push esi */
  push32((uint32_t)(ESI));
  /* 104a5938 push edi */
  push32((uint32_t)(EDI));
  /* 104a5939 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 104a593c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_104a593f:;
  /* 104a593f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5943 jne 0x104a5963 */
  if (!C.zf) goto L_104a5963;
  /* 104a5945 push 0x104c9de0 */
  push32((uint32_t)(0x104c9de0u));
  /* 104a594a push 0 */
  push32((uint32_t)(0x0u));
  /* 104a594c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 104a594e push 0x104c9df0 */
  push32((uint32_t)(0x104c9df0u));
  /* 104a5953 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a5955 call 0x104a1950 */
  push32(0x104a595au); f_104a1950();
  /* 104a595a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a595d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5960 jne 0x104a5963 */
  if (!C.zf) goto L_104a5963;
  /* 104a5962 int3  */
  x86_unimpl("int3 @ 0x104a5962");
L_104a5963:;
  /* 104a5963 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a5965 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a5967 jne 0x104a593f */
  if (!C.zf) goto L_104a593f;
L_104a5969:;
  /* 104a5969 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a596d jne 0x104a598d */
  if (!C.zf) goto L_104a598d;
  /* 104a596f push 0x104c9dc4 */
  push32((uint32_t)(0x104c9dc4u));
  /* 104a5974 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a5976 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 104a5978 push 0x104c9df0 */
  push32((uint32_t)(0x104c9df0u));
  /* 104a597d push 2 */
  push32((uint32_t)(0x2u));
  /* 104a597f call 0x104a1950 */
  push32(0x104a5984u); f_104a1950();
  /* 104a5984 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5987 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a598a jne 0x104a598d */
  if (!C.zf) goto L_104a598d;
  /* 104a598c int3  */
  x86_unimpl("int3 @ 0x104a598c");
L_104a598d:;
  /* 104a598d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a598f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a5991 jne 0x104a5969 */
  if (!C.zf) goto L_104a5969;
  /* 104a5993 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a5996 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 104a599d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a59a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a59a3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 104a59a6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a59a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a59ac mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 104a59ae mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a59b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a59b4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 104a59b7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104a59ba push ecx */
  push32((uint32_t)(ECX));
  /* 104a59bb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a59be push edx */
  push32((uint32_t)(EDX));
  /* 104a59bf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a59c2 push eax */
  push32((uint32_t)(EAX));
  /* 104a59c3 call 0x104a9820 */
  push32(0x104a59c8u); f_104a9820();
  /* 104a59c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a59cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104a59ce mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a59d1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104a59d4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a59d7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a59da mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 104a59dd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a59e0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a59e4 jl 0x104a5a08 */
  if ((C.sf!=C.of)) goto L_104a5a08;
  /* 104a59e6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a59e9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104a59eb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 104a59ee xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104a59f0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104a59f6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 104a59f9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a59fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104a59fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5a01 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a5a04 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104a5a06 jmp 0x104a5a19 */
  goto L_104a5a19;
L_104a5a08:;
  /* 104a5a08 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104a5a0b push edx */
  push32((uint32_t)(EDX));
  /* 104a5a0c push 0 */
  push32((uint32_t)(0x0u));
  /* 104a5a0e call 0x104a95a0 */
  push32(0x104a5a13u); f_104a95a0();
  /* 104a5a13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5a16 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_104a5a19:;
  /* 104a5a19 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104a5a1c pop edi */
  EDI = (pop32());
  /* 104a5a1d pop esi */
  ESI = (pop32());
  /* 104a5a1e pop ebx */
  EBX = (pop32());
  /* 104a5a1f mov esp, ebp */
  ESP = (EBP);
  /* 104a5a21 pop ebp */
  EBP = (pop32());
  /* 104a5a22 ret  */
  ESPCHK(0x104a5930u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a30 @ 0x104a5a30 (47 bytes, 17 insns) */
void f_104a5a30(void) {
  FTRACE(0x104a5a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a5a30 push ecx */
  push32((uint32_t)(ECX));
  /* 104a5a31 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5a36 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 104a5a3a jb 0x104a5a50 */
  if (C.cf) goto L_104a5a50;
L_104a5a3c:;
  /* 104a5a3c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a5a42 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a5a47 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 104a5a49 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5a4e jae 0x104a5a3c */
  if (!C.cf) goto L_104a5a3c;
L_104a5a50:;
  /* 104a5a50 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a5a52 mov eax, esp */
  EAX = (ESP);
  /* 104a5a54 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 104a5a56 mov esp, ecx */
  ESP = (ECX);
  /* 104a5a58 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104a5a5a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 104a5a5d push eax */
  push32((uint32_t)(EAX));
  /* 104a5a5e ret  */
  ESPCHK(0x104a5a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a60 @ 0x104a5a60 (507 bytes, 151 insns) [1 switch table(s)] */
void f_104a5a60(void) {
  FTRACE(0x104a5a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a5a60 push ebp */
  push32((uint32_t)(EBP));
  /* 104a5a61 mov ebp, esp */
  EBP = (ESP);
  /* 104a5a63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a5a66 push esi */
  push32((uint32_t)(ESI));
  /* 104a5a67 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5a6b je 0x104a5a73 */
  if (C.zf) goto L_104a5a73;
  /* 104a5a6d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5a71 jne 0x104a5a78 */
  if (!C.zf) goto L_104a5a78;
L_104a5a73:;
  /* 104a5a73 jmp 0x104a5c48 */
  goto L_104a5c48;
L_104a5a78:;
  /* 104a5a78 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5a7c je 0x104a5a94 */
  if (C.zf) goto L_104a5a94;
  /* 104a5a7e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5a82 je 0x104a5a94 */
  if (C.zf) goto L_104a5a94;
  /* 104a5a84 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5a88 je 0x104a5a94 */
  if (C.zf) goto L_104a5a94;
  /* 104a5a8a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5a8e jne 0x104a5b71 */
  if (!C.zf) goto L_104a5b71;
L_104a5a94:;
  /* 104a5a94 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a5a96 call 0x104a6290 */
  push32(0x104a5a9bu); f_104a6290();
  /* 104a5a9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5a9e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5aa2 je 0x104a5aaa */
  if (C.zf) goto L_104a5aaa;
  /* 104a5aa4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5aa8 jne 0x104a5aef */
  if (!C.zf) goto L_104a5aef;
L_104a5aaa:;
  /* 104a5aaa cmp dword ptr [0x104ce594], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce594))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5ab1 jne 0x104a5aef */
  if (!C.zf) goto L_104a5aef;
  /* 104a5ab3 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a5ab5 push 0x104a5c90 */
  push32((uint32_t)(0x104a5c90u));
  /* 104a5aba call dword ptr [0x104d02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02e4))), 0x104a5ac0u);
  /* 104a5ac0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5ac3 jne 0x104a5ad1 */
  if (!C.zf) goto L_104a5ad1;
  /* 104a5ac5 mov dword ptr [0x104ce594], 1 */
  w32((uint32_t)(0x104ce594), (0x1u));
  /* 104a5acf jmp 0x104a5aef */
  goto L_104a5aef;
L_104a5ad1:;
  /* 104a5ad1 call dword ptr [0x104d029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d029c))), 0x104a5ad7u);
  /* 104a5ad7 mov esi, eax */
  ESI = (EAX);
  /* 104a5ad9 call 0x104aa770 */
  push32(0x104a5adeu); f_104aa770();
  /* 104a5ade mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 104a5ae0 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a5ae2 call 0x104a6330 */
  push32(0x104a5ae7u); f_104a6330();
  /* 104a5ae7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5aea jmp 0x104a5c48 */
  goto L_104a5c48;
L_104a5aef:;
  /* 104a5aef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a5af2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104a5af5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a5af8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a5afb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104a5afe cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5b02 ja 0x104a5b62 */
  if ((!C.cf&&!C.zf)) goto L_104a5b62;
  /* 104a5b04 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a5b07 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a5b09 mov dl, byte ptr [eax + 0x104a5c6f] */
  DL = (r8((uint32_t)(EAX + 0x104a5c6f)));
  /* 104a5b0f jmp dword ptr [edx*4 + 0x104a5c5b] */
  switch (EDX) {
    case 0: goto L_104a5b16;
    case 1: goto L_104a5b50;
    case 2: goto L_104a5b2a;
    case 3: goto L_104a5b3d;
    case 4: goto L_104a5b62;
    default: x86_unimpl("switch@0x104a5b0f out of table"); return;
  }
L_104a5b16:;
  /* 104a5b16 mov ecx, dword ptr [0x104ce584] */
  ECX = (r32((uint32_t)(0x104ce584)));
  /* 104a5b1c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104a5b1f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a5b22 mov dword ptr [0x104ce584], edx */
  w32((uint32_t)(0x104ce584), (EDX));
  /* 104a5b28 jmp 0x104a5b62 */
  goto L_104a5b62;
L_104a5b2a:;
  /* 104a5b2a mov eax, dword ptr [0x104ce588] */
  EAX = (r32((uint32_t)(0x104ce588)));
  /* 104a5b2f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104a5b32 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a5b35 mov dword ptr [0x104ce588], ecx */
  w32((uint32_t)(0x104ce588), (ECX));
  /* 104a5b3b jmp 0x104a5b62 */
  goto L_104a5b62;
L_104a5b3d:;
  /* 104a5b3d mov edx, dword ptr [0x104ce58c] */
  EDX = (r32((uint32_t)(0x104ce58c)));
  /* 104a5b43 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104a5b46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a5b49 mov dword ptr [0x104ce58c], eax */
  w32((uint32_t)(0x104ce58c), (EAX));
  /* 104a5b4e jmp 0x104a5b62 */
  goto L_104a5b62;
L_104a5b50:;
  /* 104a5b50 mov ecx, dword ptr [0x104ce590] */
  ECX = (r32((uint32_t)(0x104ce590)));
  /* 104a5b56 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104a5b59 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a5b5c mov dword ptr [0x104ce590], edx */
  w32((uint32_t)(0x104ce590), (EDX));
L_104a5b62:;
  /* 104a5b62 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a5b64 call 0x104a6330 */
  push32(0x104a5b69u); f_104a6330();
  /* 104a5b69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5b6c jmp 0x104a5c43 */
  goto L_104a5c43;
L_104a5b71:;
  /* 104a5b71 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5b75 je 0x104a5b88 */
  if (C.zf) goto L_104a5b88;
  /* 104a5b77 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5b7b je 0x104a5b88 */
  if (C.zf) goto L_104a5b88;
  /* 104a5b7d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5b81 je 0x104a5b88 */
  if (C.zf) goto L_104a5b88;
  /* 104a5b83 jmp 0x104a5c48 */
  goto L_104a5c48;
L_104a5b88:;
  /* 104a5b88 call 0x104a22d0 */
  push32(0x104a5b8du); f_104a22d0();
  /* 104a5b8d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a5b90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5b93 cmp dword ptr [eax + 0x50], 0x104ccc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x104ccc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5b9a jne 0x104a5be5 */
  if (!C.zf) goto L_104a5be5;
  /* 104a5b9c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 104a5ba1 push 0x104c9dfc */
  push32((uint32_t)(0x104c9dfcu));
  /* 104a5ba6 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a5ba8 mov ecx, dword ptr [0x104ccc80] */
  ECX = (r32((uint32_t)(0x104ccc80)));
  /* 104a5bae push ecx */
  push32((uint32_t)(ECX));
  /* 104a5baf call 0x104a2890 */
  push32(0x104a5bb4u); f_104a2890();
  /* 104a5bb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5bb7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5bba mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 104a5bbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5bc0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5bc4 je 0x104a5be3 */
  if (C.zf) goto L_104a5be3;
  /* 104a5bc6 mov ecx, dword ptr [0x104ccc80] */
  ECX = (r32((uint32_t)(0x104ccc80)));
  /* 104a5bcc push ecx */
  push32((uint32_t)(ECX));
  /* 104a5bcd push 0x104ccc00 */
  push32((uint32_t)(0x104ccc00u));
  /* 104a5bd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5bd5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 104a5bd8 push eax */
  push32((uint32_t)(EAX));
  /* 104a5bd9 call 0x104a9170 */
  push32(0x104a5bdeu); f_104a9170();
  /* 104a5bde add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5be1 jmp 0x104a5be5 */
  goto L_104a5be5;
L_104a5be3:;
  /* 104a5be3 jmp 0x104a5c48 */
  goto L_104a5c48;
L_104a5be5:;
  /* 104a5be5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5be8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 104a5beb push edx */
  push32((uint32_t)(EDX));
  /* 104a5bec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a5bef push eax */
  push32((uint32_t)(EAX));
  /* 104a5bf0 call 0x104a5f70 */
  push32(0x104a5bf5u); f_104a5f70();
  /* 104a5bf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5bf8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104a5bfb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5bff jne 0x104a5c03 */
  if (!C.zf) goto L_104a5c03;
  /* 104a5c01 jmp 0x104a5c48 */
  goto L_104a5c48;
L_104a5c03:;
  /* 104a5c03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a5c06 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104a5c09 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_104a5c0c:;
  /* 104a5c0c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a5c0f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104a5c12 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5c15 jne 0x104a5c43 */
  if (!C.zf) goto L_104a5c43;
  /* 104a5c17 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a5c1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a5c1d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 104a5c20 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a5c23 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5c26 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104a5c29 mov edx, dword ptr [0x104ccc84] */
  EDX = (r32((uint32_t)(0x104ccc84)));
  /* 104a5c2f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a5c32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5c35 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 104a5c38 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5c3a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5c3d jb 0x104a5c41 */
  if (C.cf) goto L_104a5c41;
  /* 104a5c3f jmp 0x104a5c43 */
  goto L_104a5c43;
L_104a5c41:;
  /* 104a5c41 jmp 0x104a5c0c */
  goto L_104a5c0c;
L_104a5c43:;
  /* 104a5c43 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a5c46 jmp 0x104a5c56 */
  goto L_104a5c56;
L_104a5c48:;
  /* 104a5c48 call 0x104aa760 */
  push32(0x104a5c4du); f_104aa760();
  /* 104a5c4d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 104a5c53 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_104a5c56:;
  /* 104a5c56 pop esi */
  ESI = (pop32());
  /* 104a5c57 mov esp, ebp */
  ESP = (EBP);
  /* 104a5c59 pop ebp */
  EBP = (pop32());
  /* 104a5c5a ret  */
  ESPCHK(0x104a5a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c90 @ 0x104a5c90 (146 bytes, 45 insns) */
void f_104a5c90(void) {
  FTRACE(0x104a5c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a5c90 push ebp */
  push32((uint32_t)(EBP));
  /* 104a5c91 mov ebp, esp */
  EBP = (ESP);
  /* 104a5c93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a5c96 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a5c98 call 0x104a6290 */
  push32(0x104a5c9du); f_104a6290();
  /* 104a5c9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5ca0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5ca4 jne 0x104a5cbe */
  if (!C.zf) goto L_104a5cbe;
  /* 104a5ca6 mov dword ptr [ebp - 8], 0x104ce584 */
  w32((uint32_t)(EBP + -0x8), (0x104ce584u));
  /* 104a5cad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a5cb0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104a5cb2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104a5cb5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 104a5cbc jmp 0x104a5cd4 */
  goto L_104a5cd4;
L_104a5cbe:;
  /* 104a5cbe mov dword ptr [ebp - 8], 0x104ce588 */
  w32((uint32_t)(EBP + -0x8), (0x104ce588u));
  /* 104a5cc5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a5cc8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104a5cca mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104a5ccd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_104a5cd4:;
  /* 104a5cd4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5cd8 jne 0x104a5ce8 */
  if (!C.zf) goto L_104a5ce8;
  /* 104a5cda push 1 */
  push32((uint32_t)(0x1u));
  /* 104a5cdc call 0x104a6330 */
  push32(0x104a5ce1u); f_104a6330();
  /* 104a5ce1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5ce4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a5ce6 jmp 0x104a5d1c */
  goto L_104a5d1c;
L_104a5ce8:;
  /* 104a5ce8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5cec je 0x104a5d0d */
  if (C.zf) goto L_104a5d0d;
  /* 104a5cee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a5cf1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 104a5cf7 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a5cf9 call 0x104a6330 */
  push32(0x104a5cfeu); f_104a6330();
  /* 104a5cfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5d01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5d04 push edx */
  push32((uint32_t)(EDX));
  /* 104a5d05 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x104a5d08u);
  /* 104a5d08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5d0b jmp 0x104a5d17 */
  goto L_104a5d17;
L_104a5d0d:;
  /* 104a5d0d push 1 */
  push32((uint32_t)(0x1u));
  /* 104a5d0f call 0x104a6330 */
  push32(0x104a5d14u); f_104a6330();
  /* 104a5d14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a5d17:;
  /* 104a5d17 mov eax, 1 */
  EAX = (0x1u);
L_104a5d1c:;
  /* 104a5d1c mov esp, ebp */
  ESP = (EBP);
  /* 104a5d1e pop ebp */
  EBP = (pop32());
  /* 104a5d1f ret 4 */
  ESPCHK(0x104a5c90u, _esp0);
  ESP += 8; return;
}

/* FUN_10005d30 @ 0x104a5d30 (522 bytes, 162 insns) [1 switch table(s)] */
void f_104a5d30(void) {
  FTRACE(0x104a5d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a5d30 push ebp */
  push32((uint32_t)(EBP));
  /* 104a5d31 mov ebp, esp */
  EBP = (ESP);
  /* 104a5d33 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a5d36 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104a5d3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a5d40 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104a5d43 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a5d46 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a5d49 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 104a5d4c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5d50 ja 0x104a5dfe */
  if ((!C.cf&&!C.zf)) goto L_104a5dfe;
  /* 104a5d56 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104a5d59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a5d5b mov dl, byte ptr [eax + 0x104a5f52] */
  DL = (r8((uint32_t)(EAX + 0x104a5f52)));
  /* 104a5d61 jmp dword ptr [edx*4 + 0x104a5f3a] */
  switch (EDX) {
    case 0: goto L_104a5d68;
    case 1: goto L_104a5dd3;
    case 2: goto L_104a5db9;
    case 3: goto L_104a5d85;
    case 4: goto L_104a5d9f;
    case 5: goto L_104a5dfe;
    default: x86_unimpl("switch@0x104a5d61 out of table"); return;
  }
L_104a5d68:;
  /* 104a5d68 mov dword ptr [ebp - 0x18], 0x104ce584 */
  w32((uint32_t)(EBP + -0x18), (0x104ce584u));
  /* 104a5d6f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a5d72 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a5d74 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 104a5d77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a5d7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5d7d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104a5d80 jmp 0x104a5e06 */
  goto L_104a5e06;
L_104a5d85:;
  /* 104a5d85 mov dword ptr [ebp - 0x18], 0x104ce588 */
  w32((uint32_t)(EBP + -0x18), (0x104ce588u));
  /* 104a5d8c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a5d8f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a5d91 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 104a5d94 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a5d97 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5d9a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104a5d9d jmp 0x104a5e06 */
  goto L_104a5e06;
L_104a5d9f:;
  /* 104a5d9f mov dword ptr [ebp - 0x18], 0x104ce58c */
  w32((uint32_t)(EBP + -0x18), (0x104ce58cu));
  /* 104a5da6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a5da9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a5dab mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 104a5dae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a5db1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5db4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104a5db7 jmp 0x104a5e06 */
  goto L_104a5e06;
L_104a5db9:;
  /* 104a5db9 mov dword ptr [ebp - 0x18], 0x104ce590 */
  w32((uint32_t)(EBP + -0x18), (0x104ce590u));
  /* 104a5dc0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a5dc3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a5dc5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 104a5dc8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a5dcb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5dce mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104a5dd1 jmp 0x104a5e06 */
  goto L_104a5e06;
L_104a5dd3:;
  /* 104a5dd3 call 0x104a22d0 */
  push32(0x104a5dd8u); f_104a22d0();
  /* 104a5dd8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a5ddb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5dde mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 104a5de1 push edx */
  push32((uint32_t)(EDX));
  /* 104a5de2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a5de5 push eax */
  push32((uint32_t)(EAX));
  /* 104a5de6 call 0x104a5f70 */
  push32(0x104a5debu); f_104a5f70();
  /* 104a5deb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5dee add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5df1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104a5df4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a5df7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a5df9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 104a5dfc jmp 0x104a5e06 */
  goto L_104a5e06;
L_104a5dfe:;
  /* 104a5dfe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a5e01 jmp 0x104a5f36 */
  goto L_104a5f36;
L_104a5e06:;
  /* 104a5e06 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5e0a je 0x104a5e16 */
  if (C.zf) goto L_104a5e16;
  /* 104a5e0c push 1 */
  push32((uint32_t)(0x1u));
  /* 104a5e0e call 0x104a6290 */
  push32(0x104a5e13u); f_104a6290();
  /* 104a5e13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a5e16:;
  /* 104a5e16 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5e1a jne 0x104a5e33 */
  if (!C.zf) goto L_104a5e33;
  /* 104a5e1c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5e20 je 0x104a5e2c */
  if (C.zf) goto L_104a5e2c;
  /* 104a5e22 push 1 */
  push32((uint32_t)(0x1u));
  /* 104a5e24 call 0x104a6330 */
  push32(0x104a5e29u); f_104a6330();
  /* 104a5e29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a5e2c:;
  /* 104a5e2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a5e2e jmp 0x104a5f36 */
  goto L_104a5f36;
L_104a5e33:;
  /* 104a5e33 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5e37 jne 0x104a5e50 */
  if (!C.zf) goto L_104a5e50;
  /* 104a5e39 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5e3d je 0x104a5e49 */
  if (C.zf) goto L_104a5e49;
  /* 104a5e3f push 1 */
  push32((uint32_t)(0x1u));
  /* 104a5e41 call 0x104a6330 */
  push32(0x104a5e46u); f_104a6330();
  /* 104a5e46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a5e49:;
  /* 104a5e49 push 3 */
  push32((uint32_t)(0x3u));
  /* 104a5e4b call 0x104a2050 */
  push32(0x104a5e50u); f_104a2050();
L_104a5e50:;
  /* 104a5e50 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5e54 je 0x104a5e62 */
  if (C.zf) goto L_104a5e62;
  /* 104a5e56 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5e5a je 0x104a5e62 */
  if (C.zf) goto L_104a5e62;
  /* 104a5e5c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5e60 jne 0x104a5e8e */
  if (!C.zf) goto L_104a5e8e;
L_104a5e62:;
  /* 104a5e62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5e65 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 104a5e68 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104a5e6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5e6e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 104a5e75 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5e79 jne 0x104a5e8e */
  if (!C.zf) goto L_104a5e8e;
  /* 104a5e7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5e7e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 104a5e81 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104a5e84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5e87 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_104a5e8e:;
  /* 104a5e8e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5e92 jne 0x104a5ed0 */
  if (!C.zf) goto L_104a5ed0;
  /* 104a5e94 mov eax, dword ptr [0x104ccc78] */
  EAX = (r32((uint32_t)(0x104ccc78)));
  /* 104a5e99 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104a5e9c jmp 0x104a5ea7 */
  goto L_104a5ea7;
L_104a5e9e:;
  /* 104a5e9e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a5ea1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5ea4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_104a5ea7:;
  /* 104a5ea7 mov edx, dword ptr [0x104ccc78] */
  EDX = (r32((uint32_t)(0x104ccc78)));
  /* 104a5ead add edx, dword ptr [0x104ccc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x104ccc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5eb3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5eb6 jge 0x104a5ece */
  if ((C.sf==C.of)) goto L_104a5ece;
  /* 104a5eb8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a5ebb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a5ebe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5ec1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 104a5ec4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 104a5ecc jmp 0x104a5e9e */
  goto L_104a5e9e;
L_104a5ece:;
  /* 104a5ece jmp 0x104a5ed9 */
  goto L_104a5ed9;
L_104a5ed0:;
  /* 104a5ed0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a5ed3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_104a5ed9:;
  /* 104a5ed9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5edd je 0x104a5ee9 */
  if (C.zf) goto L_104a5ee9;
  /* 104a5edf push 1 */
  push32((uint32_t)(0x1u));
  /* 104a5ee1 call 0x104a6330 */
  push32(0x104a5ee6u); f_104a6330();
  /* 104a5ee6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a5ee9:;
  /* 104a5ee9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5eed jne 0x104a5f00 */
  if (!C.zf) goto L_104a5f00;
  /* 104a5eef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5ef2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 104a5ef5 push edx */
  push32((uint32_t)(EDX));
  /* 104a5ef6 push 8 */
  push32((uint32_t)(0x8u));
  /* 104a5ef8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x104a5efbu);
  /* 104a5efb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5efe jmp 0x104a5f0a */
  goto L_104a5f0a;
L_104a5f00:;
  /* 104a5f00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a5f03 push eax */
  push32((uint32_t)(EAX));
  /* 104a5f04 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x104a5f07u);
  /* 104a5f07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a5f0a:;
  /* 104a5f0a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5f0e je 0x104a5f1c */
  if (C.zf) goto L_104a5f1c;
  /* 104a5f10 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5f14 je 0x104a5f1c */
  if (C.zf) goto L_104a5f1c;
  /* 104a5f16 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5f1a jne 0x104a5f34 */
  if (!C.zf) goto L_104a5f34;
L_104a5f1c:;
  /* 104a5f1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5f1f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a5f22 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 104a5f25 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5f29 jne 0x104a5f34 */
  if (!C.zf) goto L_104a5f34;
  /* 104a5f2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5f2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a5f31 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_104a5f34:;
  /* 104a5f34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104a5f36:;
  /* 104a5f36 mov esp, ebp */
  ESP = (EBP);
  /* 104a5f38 pop ebp */
  EBP = (pop32());
  /* 104a5f39 ret  */
  ESPCHK(0x104a5d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f70 @ 0x104a5f70 (91 bytes, 35 insns) */
void f_104a5f70(void) {
  FTRACE(0x104a5f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a5f70 push ebp */
  push32((uint32_t)(EBP));
  /* 104a5f71 mov ebp, esp */
  EBP = (ESP);
  /* 104a5f73 push ecx */
  push32((uint32_t)(ECX));
  /* 104a5f74 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a5f77 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104a5f7a:;
  /* 104a5f7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5f7d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104a5f80 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5f83 je 0x104a5fa3 */
  if (C.zf) goto L_104a5fa3;
  /* 104a5f85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5f88 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5f8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a5f8e mov ecx, dword ptr [0x104ccc84] */
  ECX = (r32((uint32_t)(0x104ccc84)));
  /* 104a5f94 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a5f97 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a5f9a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5f9c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5f9f jae 0x104a5fa3 */
  if (!C.cf) goto L_104a5fa3;
  /* 104a5fa1 jmp 0x104a5f7a */
  goto L_104a5f7a;
L_104a5fa3:;
  /* 104a5fa3 mov eax, dword ptr [0x104ccc84] */
  EAX = (r32((uint32_t)(0x104ccc84)));
  /* 104a5fa8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a5fab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a5fae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5fb0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5fb3 jae 0x104a5fc5 */
  if (!C.cf) goto L_104a5fc5;
  /* 104a5fb5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5fb8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104a5fbb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a5fbe jne 0x104a5fc5 */
  if (!C.zf) goto L_104a5fc5;
  /* 104a5fc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a5fc3 jmp 0x104a5fc7 */
  goto L_104a5fc7;
L_104a5fc5:;
  /* 104a5fc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104a5fc7:;
  /* 104a5fc7 mov esp, ebp */
  ESP = (EBP);
  /* 104a5fc9 pop ebp */
  EBP = (pop32());
  /* 104a5fca ret  */
  ESPCHK(0x104a5f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fd0 @ 0x104a5fd0 (13 bytes, 6 insns) */
void f_104a5fd0(void) {
  FTRACE(0x104a5fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a5fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a5fd1 mov ebp, esp */
  EBP = (ESP);
  /* 104a5fd3 call 0x104a22d0 */
  push32(0x104a5fd8u); f_104a22d0();
  /* 104a5fd8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5fdb pop ebp */
  EBP = (pop32());
  /* 104a5fdc ret  */
  ESPCHK(0x104a5fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fe0 @ 0x104a5fe0 (13 bytes, 6 insns) */
void f_104a5fe0(void) {
  FTRACE(0x104a5fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a5fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a5fe1 mov ebp, esp */
  EBP = (ESP);
  /* 104a5fe3 call 0x104a22d0 */
  push32(0x104a5fe8u); f_104a22d0();
  /* 104a5fe8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a5feb pop ebp */
  EBP = (pop32());
  /* 104a5fec ret  */
  ESPCHK(0x104a5fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ff0 @ 0x104a5ff0 (187 bytes, 54 insns) */
void f_104a5ff0(void) {
  FTRACE(0x104a5ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a5ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a5ff1 mov ebp, esp */
  EBP = (ESP);
  /* 104a5ff3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a5ff6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104a5ffd cmp dword ptr [0x104ce598], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce598))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6004 jne 0x104a6063 */
  if (!C.zf) goto L_104a6063;
  /* 104a6006 push 0x104c9228 */
  push32((uint32_t)(0x104c9228u));
  /* 104a600b call dword ptr [0x104d026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d026c))), 0x104a6011u);
  /* 104a6011 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104a6014 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6018 je 0x104a6037 */
  if (C.zf) goto L_104a6037;
  /* 104a601a push 0x104c9e2c */
  push32((uint32_t)(0x104c9e2cu));
  /* 104a601f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a6022 push eax */
  push32((uint32_t)(EAX));
  /* 104a6023 call dword ptr [0x104d0268] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0268))), 0x104a6029u);
  /* 104a6029 mov dword ptr [0x104ce598], eax */
  w32((uint32_t)(0x104ce598), (EAX));
  /* 104a602e cmp dword ptr [0x104ce598], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce598))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6035 jne 0x104a603b */
  if (!C.zf) goto L_104a603b;
L_104a6037:;
  /* 104a6037 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a6039 jmp 0x104a60a7 */
  goto L_104a60a7;
L_104a603b:;
  /* 104a603b push 0x104c9e1c */
  push32((uint32_t)(0x104c9e1cu));
  /* 104a6040 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a6043 push ecx */
  push32((uint32_t)(ECX));
  /* 104a6044 call dword ptr [0x104d0268] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0268))), 0x104a604au);
  /* 104a604a mov dword ptr [0x104ce59c], eax */
  w32((uint32_t)(0x104ce59c), (EAX));
  /* 104a604f push 0x104c9e08 */
  push32((uint32_t)(0x104c9e08u));
  /* 104a6054 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a6057 push edx */
  push32((uint32_t)(EDX));
  /* 104a6058 call dword ptr [0x104d0268] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0268))), 0x104a605eu);
  /* 104a605e mov dword ptr [0x104ce5a0], eax */
  w32((uint32_t)(0x104ce5a0), (EAX));
L_104a6063:;
  /* 104a6063 cmp dword ptr [0x104ce59c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce59c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a606a je 0x104a6075 */
  if (C.zf) goto L_104a6075;
  /* 104a606c call dword ptr [0x104ce59c] */
  call_ind((uint32_t)(r32((uint32_t)(0x104ce59c))), 0x104a6072u);
  /* 104a6072 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104a6075:;
  /* 104a6075 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6079 je 0x104a6091 */
  if (C.zf) goto L_104a6091;
  /* 104a607b cmp dword ptr [0x104ce5a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce5a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6082 je 0x104a6091 */
  if (C.zf) goto L_104a6091;
  /* 104a6084 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a6087 push eax */
  push32((uint32_t)(EAX));
  /* 104a6088 call dword ptr [0x104ce5a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104ce5a0))), 0x104a608eu);
  /* 104a608e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104a6091:;
  /* 104a6091 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104a6094 push ecx */
  push32((uint32_t)(ECX));
  /* 104a6095 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a6098 push edx */
  push32((uint32_t)(EDX));
  /* 104a6099 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a609c push eax */
  push32((uint32_t)(EAX));
  /* 104a609d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a60a0 push ecx */
  push32((uint32_t)(ECX));
  /* 104a60a1 call dword ptr [0x104ce598] */
  call_ind((uint32_t)(r32((uint32_t)(0x104ce598))), 0x104a60a7u);
L_104a60a7:;
  /* 104a60a7 mov esp, ebp */
  ESP = (EBP);
  /* 104a60a9 pop ebp */
  EBP = (pop32());
  /* 104a60aa ret  */
  ESPCHK(0x104a5ff0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x104a60b0 (254 bytes, 109 insns) */
void f_104a60b0(void) {
  FTRACE(0x104a60b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a60b0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 104a60b4 push edi */
  push32((uint32_t)(EDI));
  /* 104a60b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104a60b7 je 0x104a6133 */
  if (C.zf) goto L_104a6133;
  /* 104a60b9 push esi */
  push32((uint32_t)(ESI));
  /* 104a60ba push ebx */
  push32((uint32_t)(EBX));
  /* 104a60bb mov ebx, ecx */
  EBX = (ECX);
  /* 104a60bd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 104a60c1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 104a60c7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 104a60cb jne 0x104a60d4 */
  if (!C.zf) goto L_104a60d4;
  /* 104a60cd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104a60d0 jne 0x104a6141 */
  if (!C.zf) goto L_104a6141;
  /* 104a60d2 jmp 0x104a60f5 */
  goto L_104a60f5;
L_104a60d4:;
  /* 104a60d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104a60d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104a60d7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104a60d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104a60da dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 104a60db je 0x104a6102 */
  if (C.zf) goto L_104a6102;
  /* 104a60dd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 104a60df je 0x104a610a */
  if (C.zf) goto L_104a610a;
  /* 104a60e1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 104a60e7 jne 0x104a60d4 */
  if (!C.zf) goto L_104a60d4;
  /* 104a60e9 mov ebx, ecx */
  EBX = (ECX);
  /* 104a60eb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104a60ee jne 0x104a6141 */
  if (!C.zf) goto L_104a6141;
L_104a60f0:;
  /* 104a60f0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 104a60f3 je 0x104a6102 */
  if (C.zf) goto L_104a6102;
L_104a60f5:;
  /* 104a60f5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104a60f7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104a60f8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104a60fa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104a60fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 104a60fd je 0x104a612e */
  if (C.zf) goto L_104a612e;
  /* 104a60ff dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 104a6100 jne 0x104a60f5 */
  if (!C.zf) goto L_104a60f5;
L_104a6102:;
  /* 104a6102 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 104a6106 pop ebx */
  EBX = (pop32());
  /* 104a6107 pop esi */
  ESI = (pop32());
  /* 104a6108 pop edi */
  EDI = (pop32());
  /* 104a6109 ret  */
  ESPCHK(0x104a60b0u, _esp0);
  ESP += 4; return;
L_104a610a:;
  /* 104a610a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 104a6110 je 0x104a6124 */
  if (C.zf) goto L_104a6124;
L_104a6112:;
  /* 104a6112 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104a6114 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104a6115 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 104a6116 je 0x104a61a6 */
  if (C.zf) goto L_104a61a6;
  /* 104a611c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 104a6122 jne 0x104a6112 */
  if (!C.zf) goto L_104a6112;
L_104a6124:;
  /* 104a6124 mov ebx, ecx */
  EBX = (ECX);
  /* 104a6126 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104a6129 jne 0x104a6197 */
  if (!C.zf) goto L_104a6197;
L_104a612b:;
  /* 104a612b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104a612d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_104a612e:;
  /* 104a612e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 104a612f jne 0x104a612b */
  if (!C.zf) goto L_104a612b;
  /* 104a6131 pop ebx */
  EBX = (pop32());
  /* 104a6132 pop esi */
  ESI = (pop32());
L_104a6133:;
  /* 104a6133 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 104a6137 pop edi */
  EDI = (pop32());
  /* 104a6138 ret  */
  ESPCHK(0x104a60b0u, _esp0);
  ESP += 4; return;
L_104a6139:;
  /* 104a6139 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 104a613b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 104a613e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 104a613f je 0x104a60f0 */
  if (C.zf) goto L_104a60f0;
L_104a6141:;
  /* 104a6141 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 104a6146 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 104a6148 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a614a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a614d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104a614f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 104a6151 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6154 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 104a6159 je 0x104a6139 */
  if (C.zf) goto L_104a6139;
  /* 104a615b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 104a615d je 0x104a618b */
  if (C.zf) goto L_104a618b;
  /* 104a615f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 104a6161 je 0x104a6181 */
  if (C.zf) goto L_104a6181;
  /* 104a6163 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 104a6169 je 0x104a6177 */
  if (C.zf) goto L_104a6177;
  /* 104a616b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 104a6171 jne 0x104a6139 */
  if (!C.zf) goto L_104a6139;
  /* 104a6173 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 104a6175 jmp 0x104a618f */
  goto L_104a618f;
L_104a6177:;
  /* 104a6177 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104a617d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 104a617f jmp 0x104a618f */
  goto L_104a618f;
L_104a6181:;
  /* 104a6181 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104a6187 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 104a6189 jmp 0x104a618f */
  goto L_104a618f;
L_104a618b:;
  /* 104a618b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104a618d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_104a618f:;
  /* 104a618f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6192 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a6194 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 104a6195 je 0x104a61a1 */
  if (C.zf) goto L_104a61a1;
L_104a6197:;
  /* 104a6197 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104a6199:;
  /* 104a6199 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 104a619b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 104a619e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 104a619f jne 0x104a6199 */
  if (!C.zf) goto L_104a6199;
L_104a61a1:;
  /* 104a61a1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 104a61a4 jne 0x104a612b */
  if (!C.zf) goto L_104a612b;
L_104a61a6:;
  /* 104a61a6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 104a61aa pop ebx */
  EBX = (pop32());
  /* 104a61ab pop esi */
  ESI = (pop32());
  /* 104a61ac pop edi */
  EDI = (pop32());
  /* 104a61ad ret  */
  ESPCHK(0x104a60b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061b0 @ 0x104a61b0 (55 bytes, 16 insns) */
void f_104a61b0(void) {
  FTRACE(0x104a61b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a61b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a61b1 mov ebp, esp */
  EBP = (ESP);
  /* 104a61b3 mov eax, dword ptr [0x104ccb84] */
  EAX = (r32((uint32_t)(0x104ccb84)));
  /* 104a61b8 push eax */
  push32((uint32_t)(EAX));
  /* 104a61b9 call dword ptr [0x104d02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02e8))), 0x104a61bfu);
  /* 104a61bf mov ecx, dword ptr [0x104ccb74] */
  ECX = (r32((uint32_t)(0x104ccb74)));
  /* 104a61c5 push ecx */
  push32((uint32_t)(ECX));
  /* 104a61c6 call dword ptr [0x104d02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02e8))), 0x104a61ccu);
  /* 104a61cc mov edx, dword ptr [0x104ccb64] */
  EDX = (r32((uint32_t)(0x104ccb64)));
  /* 104a61d2 push edx */
  push32((uint32_t)(EDX));
  /* 104a61d3 call dword ptr [0x104d02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02e8))), 0x104a61d9u);
  /* 104a61d9 mov eax, dword ptr [0x104ccb44] */
  EAX = (r32((uint32_t)(0x104ccb44)));
  /* 104a61de push eax */
  push32((uint32_t)(EAX));
  /* 104a61df call dword ptr [0x104d02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02e8))), 0x104a61e5u);
  /* 104a61e5 pop ebp */
  EBP = (pop32());
  /* 104a61e6 ret  */
  ESPCHK(0x104a61b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061f0 @ 0x104a61f0 (159 bytes, 47 insns) */
void f_104a61f0(void) {
  FTRACE(0x104a61f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a61f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a61f1 mov ebp, esp */
  EBP = (ESP);
  /* 104a61f3 push ecx */
  push32((uint32_t)(ECX));
  /* 104a61f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104a61fb jmp 0x104a6206 */
  goto L_104a6206;
L_104a61fd:;
  /* 104a61fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a6200 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6203 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104a6206:;
  /* 104a6206 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a620a jge 0x104a6259 */
  if ((C.sf==C.of)) goto L_104a6259;
  /* 104a620c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a620f cmp dword ptr [ecx*4 + 0x104ccb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x104ccb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6217 je 0x104a6257 */
  if (C.zf) goto L_104a6257;
  /* 104a6219 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a621d je 0x104a6257 */
  if (C.zf) goto L_104a6257;
  /* 104a621f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6223 je 0x104a6257 */
  if (C.zf) goto L_104a6257;
  /* 104a6225 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6229 je 0x104a6257 */
  if (C.zf) goto L_104a6257;
  /* 104a622b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a622f je 0x104a6257 */
  if (C.zf) goto L_104a6257;
  /* 104a6231 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a6234 mov eax, dword ptr [edx*4 + 0x104ccb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x104ccb40)));
  /* 104a623b push eax */
  push32((uint32_t)(EAX));
  /* 104a623c call dword ptr [0x104d02b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02b0))), 0x104a6242u);
  /* 104a6242 push 2 */
  push32((uint32_t)(0x2u));
  /* 104a6244 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a6247 mov edx, dword ptr [ecx*4 + 0x104ccb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x104ccb40)));
  /* 104a624e push edx */
  push32((uint32_t)(EDX));
  /* 104a624f call 0x104a3320 */
  push32(0x104a6254u); f_104a3320();
  /* 104a6254 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a6257:;
  /* 104a6257 jmp 0x104a61fd */
  goto L_104a61fd;
L_104a6259:;
  /* 104a6259 mov eax, dword ptr [0x104ccb64] */
  EAX = (r32((uint32_t)(0x104ccb64)));
  /* 104a625e push eax */
  push32((uint32_t)(EAX));
  /* 104a625f call dword ptr [0x104d02b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02b0))), 0x104a6265u);
  /* 104a6265 mov ecx, dword ptr [0x104ccb74] */
  ECX = (r32((uint32_t)(0x104ccb74)));
  /* 104a626b push ecx */
  push32((uint32_t)(ECX));
  /* 104a626c call dword ptr [0x104d02b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02b0))), 0x104a6272u);
  /* 104a6272 mov edx, dword ptr [0x104ccb84] */
  EDX = (r32((uint32_t)(0x104ccb84)));
  /* 104a6278 push edx */
  push32((uint32_t)(EDX));
  /* 104a6279 call dword ptr [0x104d02b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02b0))), 0x104a627fu);
  /* 104a627f mov eax, dword ptr [0x104ccb44] */
  EAX = (r32((uint32_t)(0x104ccb44)));
  /* 104a6284 push eax */
  push32((uint32_t)(EAX));
  /* 104a6285 call dword ptr [0x104d02b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02b0))), 0x104a628bu);
  /* 104a628b mov esp, ebp */
  ESP = (EBP);
  /* 104a628d pop ebp */
  EBP = (pop32());
  /* 104a628e ret  */
  ESPCHK(0x104a61f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006290 @ 0x104a6290 (151 bytes, 46 insns) */
void f_104a6290(void) {
  FTRACE(0x104a6290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a6290 push ebp */
  push32((uint32_t)(EBP));
  /* 104a6291 mov ebp, esp */
  EBP = (ESP);
  /* 104a6293 push ecx */
  push32((uint32_t)(ECX));
  /* 104a6294 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6297 cmp dword ptr [eax*4 + 0x104ccb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x104ccb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a629f jne 0x104a6312 */
  if (!C.zf) goto L_104a6312;
  /* 104a62a1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 104a62a6 push 0x104c9e38 */
  push32((uint32_t)(0x104c9e38u));
  /* 104a62ab push 2 */
  push32((uint32_t)(0x2u));
  /* 104a62ad push 0x18 */
  push32((uint32_t)(0x18u));
  /* 104a62af call 0x104a2890 */
  push32(0x104a62b4u); f_104a2890();
  /* 104a62b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a62b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a62ba cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a62be jne 0x104a62ca */
  if (!C.zf) goto L_104a62ca;
  /* 104a62c0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 104a62c2 call 0x104a1800 */
  push32(0x104a62c7u); f_104a1800();
  /* 104a62c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a62ca:;
  /* 104a62ca push 0x11 */
  push32((uint32_t)(0x11u));
  /* 104a62cc call 0x104a6290 */
  push32(0x104a62d1u); f_104a6290();
  /* 104a62d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a62d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a62d7 cmp dword ptr [ecx*4 + 0x104ccb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x104ccb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a62df jne 0x104a62fa */
  if (!C.zf) goto L_104a62fa;
  /* 104a62e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a62e4 push edx */
  push32((uint32_t)(EDX));
  /* 104a62e5 call dword ptr [0x104d02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02e8))), 0x104a62ebu);
  /* 104a62eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a62ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a62f1 mov dword ptr [eax*4 + 0x104ccb40], ecx */
  w32((uint32_t)(EAX*4 + 0x104ccb40), (ECX));
  /* 104a62f8 jmp 0x104a6308 */
  goto L_104a6308;
L_104a62fa:;
  /* 104a62fa push 2 */
  push32((uint32_t)(0x2u));
  /* 104a62fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a62ff push edx */
  push32((uint32_t)(EDX));
  /* 104a6300 call 0x104a3320 */
  push32(0x104a6305u); f_104a3320();
  /* 104a6305 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a6308:;
  /* 104a6308 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 104a630a call 0x104a6330 */
  push32(0x104a630fu); f_104a6330();
  /* 104a630f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a6312:;
  /* 104a6312 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6315 mov ecx, dword ptr [eax*4 + 0x104ccb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x104ccb40)));
  /* 104a631c push ecx */
  push32((uint32_t)(ECX));
  /* 104a631d call dword ptr [0x104d02ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02ec))), 0x104a6323u);
  /* 104a6323 mov esp, ebp */
  ESP = (EBP);
  /* 104a6325 pop ebp */
  EBP = (pop32());
  /* 104a6326 ret  */
  ESPCHK(0x104a6290u, _esp0);
  ESP += 4; return;
}

/* FUN_10006330 @ 0x104a6330 (22 bytes, 8 insns) */
void f_104a6330(void) {
  FTRACE(0x104a6330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a6330 push ebp */
  push32((uint32_t)(EBP));
  /* 104a6331 mov ebp, esp */
  EBP = (ESP);
  /* 104a6333 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6336 mov ecx, dword ptr [eax*4 + 0x104ccb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x104ccb40)));
  /* 104a633d push ecx */
  push32((uint32_t)(ECX));
  /* 104a633e call dword ptr [0x104d02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02f0))), 0x104a6344u);
  /* 104a6344 pop ebp */
  EBP = (pop32());
  /* 104a6345 ret  */
  ESPCHK(0x104a6330u, _esp0);
  ESP += 4; return;
}

/* FUN_10006350 @ 0x104a6350 (26 bytes, 10 insns) */
void f_104a6350(void) {
  FTRACE(0x104a6350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a6350 push ebp */
  push32((uint32_t)(EBP));
  /* 104a6351 mov ebp, esp */
  EBP = (ESP);
  /* 104a6353 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6356 push eax */
  push32((uint32_t)(EAX));
  /* 104a6357 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a6359 call dword ptr [0x104d02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02f4))), 0x104a635fu);
  /* 104a635f push 0xff */
  push32((uint32_t)(0xffu));
  /* 104a6364 call dword ptr [0x104d0278] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0278))), 0x104a636au);
  /* 104a636a pop ebp */
  EBP = (pop32());
  /* 104a636b ret  */
  ESPCHK(0x104a6350u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x104a6370 (446 bytes, 130 insns) */
void f_104a6370(void) {
  FTRACE(0x104a6370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a6370 push ebp */
  push32((uint32_t)(EBP));
  /* 104a6371 mov ebp, esp */
  EBP = (ESP);
  /* 104a6373 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a6376 call 0x104a22d0 */
  push32(0x104a637bu); f_104a22d0();
  /* 104a637b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104a637e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a6381 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 104a6384 push ecx */
  push32((uint32_t)(ECX));
  /* 104a6385 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6388 push edx */
  push32((uint32_t)(EDX));
  /* 104a6389 call 0x104a6530 */
  push32(0x104a638eu); f_104a6530();
  /* 104a638e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6391 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104a6394 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6398 je 0x104a63a3 */
  if (C.zf) goto L_104a63a3;
  /* 104a639a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a639d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a63a1 jne 0x104a63b2 */
  if (!C.zf) goto L_104a63b2;
L_104a63a3:;
  /* 104a63a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a63a6 push ecx */
  push32((uint32_t)(ECX));
  /* 104a63a7 call dword ptr [0x104d02f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02f8))), 0x104a63adu);
  /* 104a63ad jmp 0x104a652a */
  goto L_104a652a;
L_104a63b2:;
  /* 104a63b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a63b5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a63b9 jne 0x104a63cf */
  if (!C.zf) goto L_104a63cf;
  /* 104a63bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a63be mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 104a63c5 mov eax, 1 */
  EAX = (0x1u);
  /* 104a63ca jmp 0x104a652a */
  goto L_104a652a;
L_104a63cf:;
  /* 104a63cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a63d2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a63d6 jne 0x104a63e0 */
  if (!C.zf) goto L_104a63e0;
  /* 104a63d8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104a63db jmp 0x104a652a */
  goto L_104a652a;
L_104a63e0:;
  /* 104a63e0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a63e3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104a63e6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a63e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a63ec mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 104a63ef mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 104a63f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a63f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a63f8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 104a63fb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a63fe cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6402 jne 0x104a6507 */
  if (!C.zf) goto L_104a6507;
  /* 104a6408 mov eax, dword ptr [0x104ccc78] */
  EAX = (r32((uint32_t)(0x104ccc78)));
  /* 104a640d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104a6410 jmp 0x104a641b */
  goto L_104a641b;
L_104a6412:;
  /* 104a6412 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a6415 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6418 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_104a641b:;
  /* 104a641b mov edx, dword ptr [0x104ccc78] */
  EDX = (r32((uint32_t)(0x104ccc78)));
  /* 104a6421 add edx, dword ptr [0x104ccc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x104ccc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6427 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a642a jge 0x104a6442 */
  if ((C.sf==C.of)) goto L_104a6442;
  /* 104a642c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a642f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a6432 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a6435 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 104a6438 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 104a6440 jmp 0x104a6412 */
  goto L_104a6412;
L_104a6442:;
  /* 104a6442 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a6445 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 104a6448 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104a644b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a644e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6454 jne 0x104a6465 */
  if (!C.zf) goto L_104a6465;
  /* 104a6456 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a6459 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 104a6460 jmp 0x104a64ed */
  goto L_104a64ed;
L_104a6465:;
  /* 104a6465 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a6468 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a646e jne 0x104a647c */
  if (!C.zf) goto L_104a647c;
  /* 104a6470 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a6473 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 104a647a jmp 0x104a64ed */
  goto L_104a64ed;
L_104a647c:;
  /* 104a647c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a647f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6485 jne 0x104a6493 */
  if (!C.zf) goto L_104a6493;
  /* 104a6487 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a648a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 104a6491 jmp 0x104a64ed */
  goto L_104a64ed;
L_104a6493:;
  /* 104a6493 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a6496 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a649c jne 0x104a64aa */
  if (!C.zf) goto L_104a64aa;
  /* 104a649e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a64a1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 104a64a8 jmp 0x104a64ed */
  goto L_104a64ed;
L_104a64aa:;
  /* 104a64aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a64ad cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a64b3 jne 0x104a64c1 */
  if (!C.zf) goto L_104a64c1;
  /* 104a64b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a64b8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 104a64bf jmp 0x104a64ed */
  goto L_104a64ed;
L_104a64c1:;
  /* 104a64c1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a64c4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a64ca jne 0x104a64d8 */
  if (!C.zf) goto L_104a64d8;
  /* 104a64cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a64cf mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 104a64d6 jmp 0x104a64ed */
  goto L_104a64ed;
L_104a64d8:;
  /* 104a64d8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a64db cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a64e1 jne 0x104a64ed */
  if (!C.zf) goto L_104a64ed;
  /* 104a64e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a64e6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_104a64ed:;
  /* 104a64ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a64f0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 104a64f3 push edx */
  push32((uint32_t)(EDX));
  /* 104a64f4 push 8 */
  push32((uint32_t)(0x8u));
  /* 104a64f6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x104a64f9u);
  /* 104a64f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a64fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a64ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a6502 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 104a6505 jmp 0x104a651e */
  goto L_104a651e;
L_104a6507:;
  /* 104a6507 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a650a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 104a6511 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a6514 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104a6517 push ecx */
  push32((uint32_t)(ECX));
  /* 104a6518 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x104a651bu);
  /* 104a651b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a651e:;
  /* 104a651e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a6521 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104a6524 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 104a6527 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_104a652a:;
  /* 104a652a mov esp, ebp */
  ESP = (EBP);
  /* 104a652c pop ebp */
  EBP = (pop32());
  /* 104a652d ret  */
  ESPCHK(0x104a6370u, _esp0);
  ESP += 4; return;
}

/* FUN_10006530 @ 0x104a6530 (89 bytes, 35 insns) */
void f_104a6530(void) {
  FTRACE(0x104a6530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a6530 push ebp */
  push32((uint32_t)(EBP));
  /* 104a6531 mov ebp, esp */
  EBP = (ESP);
  /* 104a6533 push ecx */
  push32((uint32_t)(ECX));
  /* 104a6534 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a6537 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104a653a:;
  /* 104a653a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a653d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104a653f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6542 je 0x104a6562 */
  if (C.zf) goto L_104a6562;
  /* 104a6544 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a6547 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a654a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a654d mov ecx, dword ptr [0x104ccc84] */
  ECX = (r32((uint32_t)(0x104ccc84)));
  /* 104a6553 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a6556 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a6559 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a655b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a655e jae 0x104a6562 */
  if (!C.cf) goto L_104a6562;
  /* 104a6560 jmp 0x104a653a */
  goto L_104a653a;
L_104a6562:;
  /* 104a6562 mov eax, dword ptr [0x104ccc84] */
  EAX = (r32((uint32_t)(0x104ccc84)));
  /* 104a6567 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104a656a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a656d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a656f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6572 jae 0x104a657e */
  if (!C.cf) goto L_104a657e;
  /* 104a6574 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a6577 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104a6579 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a657c je 0x104a6582 */
  if (C.zf) goto L_104a6582;
L_104a657e:;
  /* 104a657e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a6580 jmp 0x104a6585 */
  goto L_104a6585;
L_104a6582:;
  /* 104a6582 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104a6585:;
  /* 104a6585 mov esp, ebp */
  ESP = (EBP);
  /* 104a6587 pop ebp */
  EBP = (pop32());
  /* 104a6588 ret  */
  ESPCHK(0x104a6530u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x104a6590 (48 bytes, 17 insns) */
void f_104a6590(void) {
  FTRACE(0x104a6590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a6590 push ebp */
  push32((uint32_t)(EBP));
  /* 104a6591 mov ebp, esp */
  EBP = (ESP);
  /* 104a6593 push ecx */
  push32((uint32_t)(ECX));
  /* 104a6594 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a6596 call 0x104a6290 */
  push32(0x104a659bu); f_104a6290();
  /* 104a659b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a659e mov eax, dword ptr [0x104ce60c] */
  EAX = (r32((uint32_t)(0x104ce60c)));
  /* 104a65a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a65a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a65a9 mov dword ptr [0x104ce60c], ecx */
  w32((uint32_t)(0x104ce60c), (ECX));
  /* 104a65af push 9 */
  push32((uint32_t)(0x9u));
  /* 104a65b1 call 0x104a6330 */
  push32(0x104a65b6u); f_104a6330();
  /* 104a65b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a65b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a65bc mov esp, ebp */
  ESP = (EBP);
  /* 104a65be pop ebp */
  EBP = (pop32());
  /* 104a65bf ret  */
  ESPCHK(0x104a6590u, _esp0);
  ESP += 4; return;
}

/* FUN_100065c0 @ 0x104a65c0 (10 bytes, 5 insns) */
void f_104a65c0(void) {
  FTRACE(0x104a65c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a65c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a65c1 mov ebp, esp */
  EBP = (ESP);
  /* 104a65c3 mov eax, dword ptr [0x104ce60c] */
  EAX = (r32((uint32_t)(0x104ce60c)));
  /* 104a65c8 pop ebp */
  EBP = (pop32());
  /* 104a65c9 ret  */
  ESPCHK(0x104a65c0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x104a65d0 (45 bytes, 19 insns) */
void f_104a65d0(void) {
  FTRACE(0x104a65d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a65d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a65d1 mov ebp, esp */
  EBP = (ESP);
  /* 104a65d3 push ecx */
  push32((uint32_t)(ECX));
  /* 104a65d4 mov eax, dword ptr [0x104ce60c] */
  EAX = (r32((uint32_t)(0x104ce60c)));
  /* 104a65d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a65dc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a65e0 je 0x104a65f0 */
  if (C.zf) goto L_104a65f0;
  /* 104a65e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a65e5 push ecx */
  push32((uint32_t)(ECX));
  /* 104a65e6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x104a65e9u);
  /* 104a65e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a65ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a65ee jne 0x104a65f4 */
  if (!C.zf) goto L_104a65f4;
L_104a65f0:;
  /* 104a65f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a65f2 jmp 0x104a65f9 */
  goto L_104a65f9;
L_104a65f4:;
  /* 104a65f4 mov eax, 1 */
  EAX = (0x1u);
L_104a65f9:;
  /* 104a65f9 mov esp, ebp */
  ESP = (EBP);
  /* 104a65fb pop ebp */
  EBP = (pop32());
  /* 104a65fc ret  */
  ESPCHK(0x104a65d0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x104a6600 (88 bytes, 40 insns) */
void f_104a6600(void) {
  FTRACE(0x104a6600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a6600 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 104a6604 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 104a6608 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a660a je 0x104a6653 */
  if (C.zf) goto L_104a6653;
  /* 104a660c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a660e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 104a6612 push edi */
  push32((uint32_t)(EDI));
  /* 104a6613 mov edi, ecx */
  EDI = (ECX);
  /* 104a6615 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6618 jb 0x104a6647 */
  if (C.cf) goto L_104a6647;
  /* 104a661a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104a661c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 104a661f je 0x104a6629 */
  if (C.zf) goto L_104a6629;
  /* 104a6621 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_104a6623:;
  /* 104a6623 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104a6625 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104a6626 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 104a6627 jne 0x104a6623 */
  if (!C.zf) goto L_104a6623;
L_104a6629:;
  /* 104a6629 mov ecx, eax */
  ECX = (EAX);
  /* 104a662b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 104a662e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6630 mov ecx, eax */
  ECX = (EAX);
  /* 104a6632 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 104a6635 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6637 mov ecx, edx */
  ECX = (EDX);
  /* 104a6639 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 104a663c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104a663f je 0x104a6647 */
  if (C.zf) goto L_104a6647;
  /* 104a6641 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 104a6643 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104a6645 je 0x104a664d */
  if (C.zf) goto L_104a664d;
L_104a6647:;
  /* 104a6647 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104a6649 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104a664a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 104a664b jne 0x104a6647 */
  if (!C.zf) goto L_104a6647;
L_104a664d:;
  /* 104a664d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 104a6651 pop edi */
  EDI = (pop32());
  /* 104a6652 ret  */
  ESPCHK(0x104a6600u, _esp0);
  ESP += 4; return;
L_104a6653:;
  /* 104a6653 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 104a6657 ret  */
  ESPCHK(0x104a6600u, _esp0);
  ESP += 4; return;
}

/* FUN_10006660 @ 0x104a6660 (23 bytes, 10 insns) */
void f_104a6660(void) {
  FTRACE(0x104a6660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a6660 push ebp */
  push32((uint32_t)(EBP));
  /* 104a6661 mov ebp, esp */
  EBP = (ESP);
  /* 104a6663 mov eax, dword ptr [0x104ce608] */
  EAX = (r32((uint32_t)(0x104ce608)));
  /* 104a6668 push eax */
  push32((uint32_t)(EAX));
  /* 104a6669 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a666c push ecx */
  push32((uint32_t)(ECX));
  /* 104a666d call 0x104a6680 */
  push32(0x104a6672u); f_104a6680();
  /* 104a6672 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6675 pop ebp */
  EBP = (pop32());
  /* 104a6676 ret  */
  ESPCHK(0x104a6660u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x104a6680 (87 bytes, 34 insns) */
void f_104a6680(void) {
  FTRACE(0x104a6680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a6680 push ebp */
  push32((uint32_t)(EBP));
  /* 104a6681 mov ebp, esp */
  EBP = (ESP);
  /* 104a6683 push ecx */
  push32((uint32_t)(ECX));
  /* 104a6684 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6688 jbe 0x104a668e */
  if ((C.cf||C.zf)) goto L_104a668e;
  /* 104a668a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a668c jmp 0x104a66d3 */
  goto L_104a66d3;
L_104a668e:;
  /* 104a668e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6692 ja 0x104a66a5 */
  if ((!C.cf&&!C.zf)) goto L_104a66a5;
  /* 104a6694 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6697 push eax */
  push32((uint32_t)(EAX));
  /* 104a6698 call 0x104a66e0 */
  push32(0x104a669du); f_104a66e0();
  /* 104a669d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a66a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a66a3 jmp 0x104a66ac */
  goto L_104a66ac;
L_104a66a5:;
  /* 104a66a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104a66ac:;
  /* 104a66ac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a66b0 jne 0x104a66b8 */
  if (!C.zf) goto L_104a66b8;
  /* 104a66b2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a66b6 jne 0x104a66bd */
  if (!C.zf) goto L_104a66bd;
L_104a66b8:;
  /* 104a66b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a66bb jmp 0x104a66d3 */
  goto L_104a66d3;
L_104a66bd:;
  /* 104a66bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a66c0 push ecx */
  push32((uint32_t)(ECX));
  /* 104a66c1 call 0x104a65d0 */
  push32(0x104a66c6u); f_104a65d0();
  /* 104a66c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a66c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a66cb jne 0x104a66d1 */
  if (!C.zf) goto L_104a66d1;
  /* 104a66cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a66cf jmp 0x104a66d3 */
  goto L_104a66d3;
L_104a66d1:;
  /* 104a66d1 jmp 0x104a668e */
  goto L_104a668e;
L_104a66d3:;
  /* 104a66d3 mov esp, ebp */
  ESP = (EBP);
  /* 104a66d5 pop ebp */
  EBP = (pop32());
  /* 104a66d6 ret  */
  ESPCHK(0x104a6680u, _esp0);
  ESP += 4; return;
}

/* FUN_100066e0 @ 0x104a66e0 (109 bytes, 37 insns) */
void f_104a66e0(void) {
  FTRACE(0x104a66e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a66e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104a66e1 mov ebp, esp */
  EBP = (ESP);
  /* 104a66e3 push ecx */
  push32((uint32_t)(ECX));
  /* 104a66e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a66e7 cmp eax, dword ptr [0x104ccc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104ccc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a66ed ja 0x104a671d */
  if ((!C.cf&&!C.zf)) goto L_104a671d;
  /* 104a66ef push 9 */
  push32((uint32_t)(0x9u));
  /* 104a66f1 call 0x104a6290 */
  push32(0x104a66f6u); f_104a6290();
  /* 104a66f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a66f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a66fc push ecx */
  push32((uint32_t)(ECX));
  /* 104a66fd call 0x104a7220 */
  push32(0x104a6702u); f_104a7220();
  /* 104a6702 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6705 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a6708 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a670a call 0x104a6330 */
  push32(0x104a670fu); f_104a6330();
  /* 104a670f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6712 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6716 je 0x104a671d */
  if (C.zf) goto L_104a671d;
  /* 104a6718 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a671b jmp 0x104a6749 */
  goto L_104a6749;
L_104a671d:;
  /* 104a671d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6721 jne 0x104a672a */
  if (!C.zf) goto L_104a672a;
  /* 104a6723 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_104a672a:;
  /* 104a672a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a672d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6730 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 104a6733 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 104a6736 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6739 push eax */
  push32((uint32_t)(EAX));
  /* 104a673a push 0 */
  push32((uint32_t)(0x0u));
  /* 104a673c mov ecx, dword ptr [0x104cfdcc] */
  ECX = (r32((uint32_t)(0x104cfdcc)));
  /* 104a6742 push ecx */
  push32((uint32_t)(ECX));
  /* 104a6743 call dword ptr [0x104d02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02fc))), 0x104a6749u);
L_104a6749:;
  /* 104a6749 mov esp, ebp */
  ESP = (EBP);
  /* 104a674b pop ebp */
  EBP = (pop32());
  /* 104a674c ret  */
  ESPCHK(0x104a66e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006750 @ 0x104a6750 (10 bytes, 5 insns) */
void f_104a6750(void) {
  FTRACE(0x104a6750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a6750 push ebp */
  push32((uint32_t)(EBP));
  /* 104a6751 mov ebp, esp */
  EBP = (ESP);
  /* 104a6753 mov eax, 1 */
  EAX = (0x1u);
  /* 104a6758 pop ebp */
  EBP = (pop32());
  /* 104a6759 ret  */
  ESPCHK(0x104a6750u, _esp0);
  ESP += 4; return;
}

/* FUN_10006760 @ 0x104a6760 (173 bytes, 59 insns) */
void f_104a6760(void) {
  FTRACE(0x104a6760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a6760 push ebp */
  push32((uint32_t)(EBP));
  /* 104a6761 mov ebp, esp */
  EBP = (ESP);
  /* 104a6763 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a6766 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a676a jbe 0x104a6773 */
  if ((C.cf||C.zf)) goto L_104a6773;
  /* 104a676c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a676e jmp 0x104a6809 */
  goto L_104a6809;
L_104a6773:;
  /* 104a6773 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a6775 call 0x104a6290 */
  push32(0x104a677au); f_104a6290();
  /* 104a677a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a677d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6780 push eax */
  push32((uint32_t)(EAX));
  /* 104a6781 call 0x104a6b90 */
  push32(0x104a6786u); f_104a6b90();
  /* 104a6786 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6789 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104a678c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6790 je 0x104a67d1 */
  if (C.zf) goto L_104a67d1;
  /* 104a6792 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104a6799 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a679c cmp ecx, dword ptr [0x104ccc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x104ccc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a67a2 ja 0x104a67c2 */
  if ((!C.cf&&!C.zf)) goto L_104a67c2;
  /* 104a67a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a67a7 push edx */
  push32((uint32_t)(EDX));
  /* 104a67a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a67ab push eax */
  push32((uint32_t)(EAX));
  /* 104a67ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a67af push ecx */
  push32((uint32_t)(ECX));
  /* 104a67b0 call 0x104a7a60 */
  push32(0x104a67b5u); f_104a7a60();
  /* 104a67b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a67b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a67ba je 0x104a67c2 */
  if (C.zf) goto L_104a67c2;
  /* 104a67bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a67bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104a67c2:;
  /* 104a67c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a67c4 call 0x104a6330 */
  push32(0x104a67c9u); f_104a6330();
  /* 104a67c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a67cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a67cf jmp 0x104a6809 */
  goto L_104a6809;
L_104a67d1:;
  /* 104a67d1 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a67d3 call 0x104a6330 */
  push32(0x104a67d8u); f_104a6330();
  /* 104a67d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a67db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a67df jne 0x104a67e8 */
  if (!C.zf) goto L_104a67e8;
  /* 104a67e1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_104a67e8:;
  /* 104a67e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a67eb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a67ee and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 104a67f0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 104a67f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a67f6 push ecx */
  push32((uint32_t)(ECX));
  /* 104a67f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a67fa push edx */
  push32((uint32_t)(EDX));
  /* 104a67fb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 104a67fd mov eax, dword ptr [0x104cfdcc] */
  EAX = (r32((uint32_t)(0x104cfdcc)));
  /* 104a6802 push eax */
  push32((uint32_t)(EAX));
  /* 104a6803 call dword ptr [0x104d0300] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0300))), 0x104a6809u);
L_104a6809:;
  /* 104a6809 mov esp, ebp */
  ESP = (EBP);
  /* 104a680b pop ebp */
  EBP = (pop32());
  /* 104a680c ret  */
  ESPCHK(0x104a6760u, _esp0);
  ESP += 4; return;
}

/* FUN_10006810 @ 0x104a6810 (490 bytes, 165 insns) */
void f_104a6810(void) {
  FTRACE(0x104a6810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a6810 push ebp */
  push32((uint32_t)(EBP));
  /* 104a6811 mov ebp, esp */
  EBP = (ESP);
  /* 104a6813 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a6816 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a681a jne 0x104a682d */
  if (!C.zf) goto L_104a682d;
  /* 104a681c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a681f push eax */
  push32((uint32_t)(EAX));
  /* 104a6820 call 0x104a6660 */
  push32(0x104a6825u); f_104a6660();
  /* 104a6825 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6828 jmp 0x104a69f6 */
  goto L_104a69f6;
L_104a682d:;
  /* 104a682d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6831 jne 0x104a6846 */
  if (!C.zf) goto L_104a6846;
  /* 104a6833 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6836 push ecx */
  push32((uint32_t)(ECX));
  /* 104a6837 call 0x104a6a00 */
  push32(0x104a683cu); f_104a6a00();
  /* 104a683c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a683f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a6841 jmp 0x104a69f6 */
  goto L_104a69f6;
L_104a6846:;
  /* 104a6846 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104a684d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6851 ja 0x104a69c9 */
  if ((!C.cf&&!C.zf)) goto L_104a69c9;
  /* 104a6857 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a6859 call 0x104a6290 */
  push32(0x104a685eu); f_104a6290();
  /* 104a685e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6861 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6864 push edx */
  push32((uint32_t)(EDX));
  /* 104a6865 call 0x104a6b90 */
  push32(0x104a686au); f_104a6b90();
  /* 104a686a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a686d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104a6870 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6874 je 0x104a698c */
  if (C.zf) goto L_104a698c;
  /* 104a687a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a687d cmp eax, dword ptr [0x104ccc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x104ccc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6883 ja 0x104a6900 */
  if ((!C.cf&&!C.zf)) goto L_104a6900;
  /* 104a6885 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a6888 push ecx */
  push32((uint32_t)(ECX));
  /* 104a6889 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a688c push edx */
  push32((uint32_t)(EDX));
  /* 104a688d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a6890 push eax */
  push32((uint32_t)(EAX));
  /* 104a6891 call 0x104a7a60 */
  push32(0x104a6896u); f_104a7a60();
  /* 104a6896 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6899 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a689b je 0x104a68a5 */
  if (C.zf) goto L_104a68a5;
  /* 104a689d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a68a0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104a68a3 jmp 0x104a6900 */
  goto L_104a6900;
L_104a68a5:;
  /* 104a68a5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a68a8 push edx */
  push32((uint32_t)(EDX));
  /* 104a68a9 call 0x104a7220 */
  push32(0x104a68aeu); f_104a7220();
  /* 104a68ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a68b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104a68b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a68b8 je 0x104a6900 */
  if (C.zf) goto L_104a6900;
  /* 104a68ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a68bd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 104a68c0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a68c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104a68c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a68c9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a68cc jae 0x104a68d6 */
  if (!C.cf) goto L_104a68d6;
  /* 104a68ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a68d1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104a68d4 jmp 0x104a68dc */
  goto L_104a68dc;
L_104a68d6:;
  /* 104a68d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a68d9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_104a68dc:;
  /* 104a68dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104a68df push edx */
  push32((uint32_t)(EDX));
  /* 104a68e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a68e3 push eax */
  push32((uint32_t)(EAX));
  /* 104a68e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a68e7 push ecx */
  push32((uint32_t)(ECX));
  /* 104a68e8 call 0x104a9170 */
  push32(0x104a68edu); f_104a9170();
  /* 104a68ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a68f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a68f3 push edx */
  push32((uint32_t)(EDX));
  /* 104a68f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a68f7 push eax */
  push32((uint32_t)(EAX));
  /* 104a68f8 call 0x104a6c50 */
  push32(0x104a68fdu); f_104a6c50();
  /* 104a68fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a6900:;
  /* 104a6900 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6904 jne 0x104a6980 */
  if (!C.zf) goto L_104a6980;
  /* 104a6906 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a690a jne 0x104a6913 */
  if (!C.zf) goto L_104a6913;
  /* 104a690c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_104a6913:;
  /* 104a6913 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a6916 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6919 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 104a691c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 104a691f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a6922 push edx */
  push32((uint32_t)(EDX));
  /* 104a6923 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a6925 mov eax, dword ptr [0x104cfdcc] */
  EAX = (r32((uint32_t)(0x104cfdcc)));
  /* 104a692a push eax */
  push32((uint32_t)(EAX));
  /* 104a692b call dword ptr [0x104d02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02fc))), 0x104a6931u);
  /* 104a6931 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104a6934 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6938 je 0x104a6980 */
  if (C.zf) goto L_104a6980;
  /* 104a693a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a693d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 104a6940 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104a6943 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104a6946 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a6949 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a694c jae 0x104a6956 */
  if (!C.cf) goto L_104a6956;
  /* 104a694e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a6951 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104a6954 jmp 0x104a695c */
  goto L_104a695c;
L_104a6956:;
  /* 104a6956 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a6959 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_104a695c:;
  /* 104a695c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104a695f push eax */
  push32((uint32_t)(EAX));
  /* 104a6960 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6963 push ecx */
  push32((uint32_t)(ECX));
  /* 104a6964 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a6967 push edx */
  push32((uint32_t)(EDX));
  /* 104a6968 call 0x104a9170 */
  push32(0x104a696du); f_104a9170();
  /* 104a696d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6973 push eax */
  push32((uint32_t)(EAX));
  /* 104a6974 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104a6977 push ecx */
  push32((uint32_t)(ECX));
  /* 104a6978 call 0x104a6c50 */
  push32(0x104a697du); f_104a6c50();
  /* 104a697d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104a6980:;
  /* 104a6980 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a6982 call 0x104a6330 */
  push32(0x104a6987u); f_104a6330();
  /* 104a6987 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a698a jmp 0x104a69c9 */
  goto L_104a69c9;
L_104a698c:;
  /* 104a698c push 9 */
  push32((uint32_t)(0x9u));
  /* 104a698e call 0x104a6330 */
  push32(0x104a6993u); f_104a6330();
  /* 104a6993 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6996 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a699a jne 0x104a69a3 */
  if (!C.zf) goto L_104a69a3;
  /* 104a699c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_104a69a3:;
  /* 104a69a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a69a6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104a69a9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 104a69ac mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 104a69af mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a69b2 push eax */
  push32((uint32_t)(EAX));
  /* 104a69b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a69b6 push ecx */
  push32((uint32_t)(ECX));
  /* 104a69b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a69b9 mov edx, dword ptr [0x104cfdcc] */
  EDX = (r32((uint32_t)(0x104cfdcc)));
  /* 104a69bf push edx */
  push32((uint32_t)(EDX));
  /* 104a69c0 call dword ptr [0x104d0300] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d0300))), 0x104a69c6u);
  /* 104a69c6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104a69c9:;
  /* 104a69c9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a69cd jne 0x104a69d8 */
  if (!C.zf) goto L_104a69d8;
  /* 104a69cf cmp dword ptr [0x104ce608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104ce608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a69d6 jne 0x104a69dd */
  if (!C.zf) goto L_104a69dd;
L_104a69d8:;
  /* 104a69d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104a69db jmp 0x104a69f6 */
  goto L_104a69f6;
L_104a69dd:;
  /* 104a69dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104a69e0 push eax */
  push32((uint32_t)(EAX));
  /* 104a69e1 call 0x104a65d0 */
  push32(0x104a69e6u); f_104a65d0();
  /* 104a69e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a69e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104a69eb jne 0x104a69f1 */
  if (!C.zf) goto L_104a69f1;
  /* 104a69ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104a69ef jmp 0x104a69f6 */
  goto L_104a69f6;
L_104a69f1:;
  /* 104a69f1 jmp 0x104a6846 */
  goto L_104a6846;
L_104a69f6:;
  /* 104a69f6 mov esp, ebp */
  ESP = (EBP);
  /* 104a69f8 pop ebp */
  EBP = (pop32());
  /* 104a69f9 ret  */
  ESPCHK(0x104a6810u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a00 @ 0x104a6a00 (104 bytes, 38 insns) */
void f_104a6a00(void) {
  FTRACE(0x104a6a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104a6a00 push ebp */
  push32((uint32_t)(EBP));
  /* 104a6a01 mov ebp, esp */
  EBP = (ESP);
  /* 104a6a03 push ecx */
  push32((uint32_t)(ECX));
  /* 104a6a04 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6a08 jne 0x104a6a0c */
  if (!C.zf) goto L_104a6a0c;
  /* 104a6a0a jmp 0x104a6a64 */
  goto L_104a6a64;
L_104a6a0c:;
  /* 104a6a0c push 9 */
  push32((uint32_t)(0x9u));
  /* 104a6a0e call 0x104a6290 */
  push32(0x104a6a13u); f_104a6290();
  /* 104a6a13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6a16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6a19 push eax */
  push32((uint32_t)(EAX));
  /* 104a6a1a call 0x104a6b90 */
  push32(0x104a6a1fu); f_104a6b90();
  /* 104a6a1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6a22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104a6a25 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104a6a29 je 0x104a6a47 */
  if (C.zf) goto L_104a6a47;
  /* 104a6a2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6a2e push ecx */
  push32((uint32_t)(ECX));
  /* 104a6a2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104a6a32 push edx */
  push32((uint32_t)(EDX));
  /* 104a6a33 call 0x104a6c50 */
  push32(0x104a6a38u); f_104a6c50();
  /* 104a6a38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6a3b push 9 */
  push32((uint32_t)(0x9u));
  /* 104a6a3d call 0x104a6330 */
  push32(0x104a6a42u); f_104a6330();
  /* 104a6a42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6a45 jmp 0x104a6a64 */
  goto L_104a6a64;
L_104a6a47:;
  /* 104a6a47 push 9 */
  push32((uint32_t)(0x9u));
  /* 104a6a49 call 0x104a6330 */
  push32(0x104a6a4eu); f_104a6330();
  /* 104a6a4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104a6a51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104a6a54 push eax */
  push32((uint32_t)(EAX));
  /* 104a6a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 104a6a57 mov ecx, dword ptr [0x104cfdcc] */
  ECX = (r32((uint32_t)(0x104cfdcc)));
  /* 104a6a5d push ecx */
  push32((uint32_t)(ECX));
  /* 104a6a5e call dword ptr [0x104d02dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104d02dc))), 0x104a6a64u);
L_104a6a64:;
  /* 104a6a64 mov esp, ebp */
  ESP = (EBP);
  /* 104a6a66 pop ebp */
  EBP = (pop32());
  /* 104a6a67 ret  */
  ESPCHK(0x104a6a00u, _esp0);
  ESP += 4; return;
}

