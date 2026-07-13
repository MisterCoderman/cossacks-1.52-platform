#include "recomp.h"

/* OnInit @ 0x10cd1005 (5 bytes, 1 insns) */
void f_10cd1005(void) {
  FTRACE(0x10cd1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd1005 jmp 0x10cd1090 */
  f_10cd1090(); return;
}

/* thunk_FUN_10001030 @ 0x10cd100a (5 bytes, 1 insns) */
void f_10cd100a(void) {
  FTRACE(0x10cd100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd100a jmp 0x10cd1030 */
  f_10cd1030(); return;
}

/* ProcessScenary @ 0x10cd100f (5 bytes, 1 insns) */
void f_10cd100f(void) {
  FTRACE(0x10cd100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd100f jmp 0x10cd1120 */
  f_10cd1120(); return;
}

/* FUN_10001030 @ 0x10cd1030 (67 bytes, 26 insns) */
void f_10cd1030(void) {
  FTRACE(0x10cd1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd1030 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd1031 mov ebp, esp */
  EBP = (ESP);
  /* 10cd1033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd1036 push ebx */
  push32((uint32_t)(EBX));
  /* 10cd1037 push esi */
  push32((uint32_t)(ESI));
  /* 10cd1038 push edi */
  push32((uint32_t)(EDI));
  /* 10cd1039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10cd103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10cd1041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10cd1046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10cd1048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1052 je 0x10cd1056 */
  if (C.zf) goto L_10cd1056;
  /* 10cd1054 jmp 0x10cd105b */
  goto L_10cd105b;
L_10cd1056:;
  /* 10cd1056 call 0x10cd1005 */
  push32(0x10cd105bu); f_10cd1005();
L_10cd105b:;
  /* 10cd105b mov eax, 1 */
  EAX = (0x1u);
  /* 10cd1060 pop edi */
  EDI = (pop32());
  /* 10cd1061 pop esi */
  ESI = (pop32());
  /* 10cd1062 pop ebx */
  EBX = (pop32());
  /* 10cd1063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1068 call 0x10cd1380 */
  push32(0x10cd106du); f_10cd1380();
  /* 10cd106d mov esp, ebp */
  ESP = (EBP);
  /* 10cd106f pop ebp */
  EBP = (pop32());
  /* 10cd1070 ret 0xc */
  ESPCHK(0x10cd1030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x10cd1090 (106 bytes, 37 insns) */
void f_10cd1090(void) {
  FTRACE(0x10cd1090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd1090 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd1091 mov ebp, esp */
  EBP = (ESP);
  /* 10cd1093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd1096 push ebx */
  push32((uint32_t)(EBX));
  /* 10cd1097 push esi */
  push32((uint32_t)(ESI));
  /* 10cd1098 push edi */
  push32((uint32_t)(EDI));
  /* 10cd1099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10cd109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10cd10a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10cd10a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10cd10a8 mov esi, esp */
  ESI = (ESP);
  /* 10cd10aa push 0x10cf9028 */
  push32((uint32_t)(0x10cf9028u));
  /* 10cd10af push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd10b1 call dword ptr [0x10d0039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0039c))), 0x10cd10b7u);
  /* 10cd10b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd10ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd10bc call 0x10cd1380 */
  push32(0x10cd10c1u); f_10cd1380();
  /* 10cd10c1 mov esi, esp */
  ESI = (ESP);
  /* 10cd10c3 push 0x10cf901c */
  push32((uint32_t)(0x10cf901cu));
  /* 10cd10c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd10ca call dword ptr [0x10d0039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0039c))), 0x10cd10d0u);
  /* 10cd10d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd10d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd10d5 call 0x10cd1380 */
  push32(0x10cd10dau); f_10cd1380();
  /* 10cd10da mov esi, esp */
  ESI = (ESP);
  /* 10cd10dc call dword ptr [0x10d003a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d003a0))), 0x10cd10e2u);
  /* 10cd10e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd10e4 call 0x10cd1380 */
  push32(0x10cd10e9u); f_10cd1380();
  /* 10cd10e9 pop edi */
  EDI = (pop32());
  /* 10cd10ea pop esi */
  ESI = (pop32());
  /* 10cd10eb pop ebx */
  EBX = (pop32());
  /* 10cd10ec add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd10ef cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd10f1 call 0x10cd1380 */
  push32(0x10cd10f6u); f_10cd1380();
  /* 10cd10f6 mov esp, ebp */
  ESP = (EBP);
  /* 10cd10f8 pop ebp */
  EBP = (pop32());
  /* 10cd10f9 ret  */
  ESPCHK(0x10cd1090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001120 @ 0x10cd1120 (453 bytes, 142 insns) */
void f_10cd1120(void) {
  FTRACE(0x10cd1120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd1120 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd1121 mov ebp, esp */
  EBP = (ESP);
  /* 10cd1123 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd1126 push ebx */
  push32((uint32_t)(EBX));
  /* 10cd1127 push esi */
  push32((uint32_t)(ESI));
  /* 10cd1128 push edi */
  push32((uint32_t)(EDI));
  /* 10cd1129 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10cd112c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10cd1131 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10cd1136 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10cd1138 mov esi, esp */
  ESI = (ESP);
  /* 10cd113a push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd113c call dword ptr [0x10d0038c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0038c))), 0x10cd1142u);
  /* 10cd1142 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1145 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1147 call 0x10cd1380 */
  push32(0x10cd114cu); f_10cd1380();
  /* 10cd114c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd1151 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd1153 je 0x10cd12d4 */
  if (C.zf) goto L_10cd12d4;
  /* 10cd1159 mov esi, esp */
  ESI = (ESP);
  /* 10cd115b push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd115d push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd115f call dword ptr [0x10d00390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00390))), 0x10cd1165u);
  /* 10cd1165 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1168 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd116a call 0x10cd1380 */
  push32(0x10cd116fu); f_10cd1380();
  /* 10cd116f mov esi, esp */
  ESI = (ESP);
  /* 10cd1171 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10cd1176 push 3 */
  push32((uint32_t)(0x3u));
  /* 10cd1178 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd117a call dword ptr [0x10d00394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00394))), 0x10cd1180u);
  /* 10cd1180 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1183 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1185 call 0x10cd1380 */
  push32(0x10cd118au); f_10cd1380();
  /* 10cd118a mov esi, esp */
  ESI = (ESP);
  /* 10cd118c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10cd1191 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd1193 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd1195 call dword ptr [0x10d00394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00394))), 0x10cd119bu);
  /* 10cd119b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd119e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd11a0 call 0x10cd1380 */
  push32(0x10cd11a5u); f_10cd1380();
  /* 10cd11a5 mov esi, esp */
  ESI = (ESP);
  /* 10cd11a7 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10cd11ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd11ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd11b0 call dword ptr [0x10d00394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00394))), 0x10cd11b6u);
  /* 10cd11b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd11b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd11bb call 0x10cd1380 */
  push32(0x10cd11c0u); f_10cd1380();
  /* 10cd11c0 mov esi, esp */
  ESI = (ESP);
  /* 10cd11c2 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10cd11c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd11c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd11cb call dword ptr [0x10d00394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00394))), 0x10cd11d1u);
  /* 10cd11d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd11d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd11d6 call 0x10cd1380 */
  push32(0x10cd11dbu); f_10cd1380();
  /* 10cd11db mov esi, esp */
  ESI = (ESP);
  /* 10cd11dd push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10cd11e2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10cd11e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd11e6 call dword ptr [0x10d00394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00394))), 0x10cd11ecu);
  /* 10cd11ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd11ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd11f1 call 0x10cd1380 */
  push32(0x10cd11f6u); f_10cd1380();
  /* 10cd11f6 mov esi, esp */
  ESI = (ESP);
  /* 10cd11f8 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10cd11fd push 4 */
  push32((uint32_t)(0x4u));
  /* 10cd11ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd1201 call dword ptr [0x10d00394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00394))), 0x10cd1207u);
  /* 10cd1207 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd120a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd120c call 0x10cd1380 */
  push32(0x10cd1211u); f_10cd1380();
  /* 10cd1211 mov esi, esp */
  ESI = (ESP);
  /* 10cd1213 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10cd1218 push 3 */
  push32((uint32_t)(0x3u));
  /* 10cd121a push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd121c call dword ptr [0x10d00394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00394))), 0x10cd1222u);
  /* 10cd1222 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1225 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1227 call 0x10cd1380 */
  push32(0x10cd122cu); f_10cd1380();
  /* 10cd122c mov esi, esp */
  ESI = (ESP);
  /* 10cd122e push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10cd1233 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd1235 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd1237 call dword ptr [0x10d00394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00394))), 0x10cd123du);
  /* 10cd123d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1240 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1242 call 0x10cd1380 */
  push32(0x10cd1247u); f_10cd1380();
  /* 10cd1247 mov esi, esp */
  ESI = (ESP);
  /* 10cd1249 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10cd124e push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd1250 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd1252 call dword ptr [0x10d00394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00394))), 0x10cd1258u);
  /* 10cd1258 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd125b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd125d call 0x10cd1380 */
  push32(0x10cd1262u); f_10cd1380();
  /* 10cd1262 mov esi, esp */
  ESI = (ESP);
  /* 10cd1264 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10cd1269 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd126b push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd126d call dword ptr [0x10d00394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00394))), 0x10cd1273u);
  /* 10cd1273 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1276 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1278 call 0x10cd1380 */
  push32(0x10cd127du); f_10cd1380();
  /* 10cd127d mov esi, esp */
  ESI = (ESP);
  /* 10cd127f push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10cd1284 push 5 */
  push32((uint32_t)(0x5u));
  /* 10cd1286 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd1288 call dword ptr [0x10d00394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00394))), 0x10cd128eu);
  /* 10cd128e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1291 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1293 call 0x10cd1380 */
  push32(0x10cd1298u); f_10cd1380();
  /* 10cd1298 mov esi, esp */
  ESI = (ESP);
  /* 10cd129a push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10cd129f push 4 */
  push32((uint32_t)(0x4u));
  /* 10cd12a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd12a3 call dword ptr [0x10d00394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00394))), 0x10cd12a9u);
  /* 10cd12a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd12ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd12ae call 0x10cd1380 */
  push32(0x10cd12b3u); f_10cd1380();
  /* 10cd12b3 mov esi, esp */
  ESI = (ESP);
  /* 10cd12b5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10cd12b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd12b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd12bb push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd12bd push 0x10cf9030 */
  push32((uint32_t)(0x10cf9030u));
  /* 10cd12c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd12c4 call dword ptr [0x10d00398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00398))), 0x10cd12cau);
  /* 10cd12ca add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd12cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd12cf call 0x10cd1380 */
  push32(0x10cd12d4u); f_10cd1380();
L_10cd12d4:;
  /* 10cd12d4 pop edi */
  EDI = (pop32());
  /* 10cd12d5 pop esi */
  ESI = (pop32());
  /* 10cd12d6 pop ebx */
  EBX = (pop32());
  /* 10cd12d7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd12da cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd12dc call 0x10cd1380 */
  push32(0x10cd12e1u); f_10cd1380();
  /* 10cd12e1 mov esp, ebp */
  ESP = (EBP);
  /* 10cd12e3 pop ebp */
  EBP = (pop32());
  /* 10cd12e4 ret  */
  ESPCHK(0x10cd1120u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10cd1380 (56 bytes, 28 insns) */
void f_10cd1380(void) {
  FTRACE(0x10cd1380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd1380 jne 0x10cd1383 */
  if (!C.zf) goto L_10cd1383;
  /* 10cd1382 ret  */
  ESPCHK(0x10cd1380u, _esp0);
  ESP += 4; return;
L_10cd1383:;
  /* 10cd1383 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd1384 mov ebp, esp */
  EBP = (ESP);
  /* 10cd1386 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd1389 push eax */
  push32((uint32_t)(EAX));
  /* 10cd138a push edx */
  push32((uint32_t)(EDX));
  /* 10cd138b push ebx */
  push32((uint32_t)(EBX));
  /* 10cd138c push esi */
  push32((uint32_t)(ESI));
  /* 10cd138d push edi */
  push32((uint32_t)(EDI));
  /* 10cd138e push 0x10cf9050 */
  push32((uint32_t)(0x10cf9050u));
  /* 10cd1393 push 0x10cf904c */
  push32((uint32_t)(0x10cf904cu));
  /* 10cd1398 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10cd139a push 0x10cf903c */
  push32((uint32_t)(0x10cf903cu));
  /* 10cd139f push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd13a1 call 0x10cd1750 */
  push32(0x10cd13a6u); f_10cd1750();
  /* 10cd13a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd13a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd13ac jne 0x10cd13af */
  if (!C.zf) goto L_10cd13af;
  /* 10cd13ae int3  */
  x86_unimpl("int3 @ 0x10cd13ae");
L_10cd13af:;
  /* 10cd13af pop edi */
  EDI = (pop32());
  /* 10cd13b0 pop esi */
  ESI = (pop32());
  /* 10cd13b1 pop ebx */
  EBX = (pop32());
  /* 10cd13b2 pop edx */
  EDX = (pop32());
  /* 10cd13b3 pop eax */
  EAX = (pop32());
  /* 10cd13b4 mov esp, ebp */
  ESP = (EBP);
  /* 10cd13b6 pop ebp */
  EBP = (pop32());
  /* 10cd13b7 ret  */
  ESPCHK(0x10cd1380u, _esp0);
  ESP += 4; return;
}

/* FUN_100013c0 @ 0x10cd13c0 (313 bytes, 78 insns) */
void f_10cd13c0(void) {
  FTRACE(0x10cd13c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd13c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd13c1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd13c3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd13c7 jne 0x10cd1487 */
  if (!C.zf) goto L_10cd1487;
  /* 10cd13cd call dword ptr [0x10d00224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00224))), 0x10cd13d3u);
  /* 10cd13d3 mov dword ptr [0x10cfe400], eax */
  w32((uint32_t)(0x10cfe400), (EAX));
  /* 10cd13d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd13da call 0x10cd4e80 */
  push32(0x10cd13dfu); f_10cd4e80();
  /* 10cd13df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd13e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd13e4 jne 0x10cd13ed */
  if (!C.zf) goto L_10cd13ed;
  /* 10cd13e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd13e8 jmp 0x10cd14f5 */
  goto L_10cd14f5;
L_10cd13ed:;
  /* 10cd13ed mov eax, dword ptr [0x10cfe400] */
  EAX = (r32((uint32_t)(0x10cfe400)));
  /* 10cd13f2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10cd13f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd13fa mov dword ptr [0x10cfe40c], eax */
  w32((uint32_t)(0x10cfe40c), (EAX));
  /* 10cd13ff mov ecx, dword ptr [0x10cfe400] */
  ECX = (r32((uint32_t)(0x10cfe400)));
  /* 10cd1405 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd140b mov dword ptr [0x10cfe408], ecx */
  w32((uint32_t)(0x10cfe408), (ECX));
  /* 10cd1411 mov edx, dword ptr [0x10cfe408] */
  EDX = (r32((uint32_t)(0x10cfe408)));
  /* 10cd1417 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10cd141a add edx, dword ptr [0x10cfe40c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10cfe40c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1420 mov dword ptr [0x10cfe404], edx */
  w32((uint32_t)(0x10cfe404), (EDX));
  /* 10cd1426 mov eax, dword ptr [0x10cfe400] */
  EAX = (r32((uint32_t)(0x10cfe400)));
  /* 10cd142b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10cd142e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd1433 mov dword ptr [0x10cfe400], eax */
  w32((uint32_t)(0x10cfe400), (EAX));
  /* 10cd1438 call 0x10cd1ff0 */
  push32(0x10cd143du); f_10cd1ff0();
  /* 10cd143d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd143f jne 0x10cd144d */
  if (!C.zf) goto L_10cd144d;
  /* 10cd1441 call 0x10cd4ed0 */
  push32(0x10cd1446u); f_10cd4ed0();
  /* 10cd1446 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd1448 jmp 0x10cd14f5 */
  goto L_10cd14f5;
L_10cd144d:;
  /* 10cd144d call dword ptr [0x10d00220] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00220))), 0x10cd1453u);
  /* 10cd1453 mov dword ptr [0x10cfff4c], eax */
  w32((uint32_t)(0x10cfff4c), (EAX));
  /* 10cd1458 call 0x10cd4c60 */
  push32(0x10cd145du); f_10cd4c60();
  /* 10cd145d mov dword ptr [0x10cfe3e8], eax */
  w32((uint32_t)(0x10cfe3e8), (EAX));
  /* 10cd1462 call 0x10cd22a0 */
  push32(0x10cd1467u); f_10cd22a0();
  /* 10cd1467 call 0x10cd4750 */
  push32(0x10cd146cu); f_10cd4750();
  /* 10cd146c call 0x10cd4600 */
  push32(0x10cd1471u); f_10cd4600();
  /* 10cd1471 call 0x10cd1df0 */
  push32(0x10cd1476u); f_10cd1df0();
  /* 10cd1476 mov ecx, dword ptr [0x10cfe3e4] */
  ECX = (r32((uint32_t)(0x10cfe3e4)));
  /* 10cd147c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd147f mov dword ptr [0x10cfe3e4], ecx */
  w32((uint32_t)(0x10cfe3e4), (ECX));
  /* 10cd1485 jmp 0x10cd14f0 */
  goto L_10cd14f0;
L_10cd1487:;
  /* 10cd1487 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd148b jne 0x10cd14e0 */
  if (!C.zf) goto L_10cd14e0;
  /* 10cd148d cmp dword ptr [0x10cfe3e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe3e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1494 jle 0x10cd14da */
  if ((C.zf||C.sf!=C.of)) goto L_10cd14da;
  /* 10cd1496 mov edx, dword ptr [0x10cfe3e4] */
  EDX = (r32((uint32_t)(0x10cfe3e4)));
  /* 10cd149c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd149f mov dword ptr [0x10cfe3e4], edx */
  w32((uint32_t)(0x10cfe3e4), (EDX));
  /* 10cd14a5 cmp dword ptr [0x10cfe438], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe438))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd14ac jne 0x10cd14b3 */
  if (!C.zf) goto L_10cd14b3;
  /* 10cd14ae call 0x10cd1e70 */
  push32(0x10cd14b3u); f_10cd1e70();
L_10cd14b3:;
  /* 10cd14b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10cd14b5 call 0x10cd3ba0 */
  push32(0x10cd14bau); f_10cd3ba0();
  /* 10cd14ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd14bd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd14c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd14c2 je 0x10cd14c9 */
  if (C.zf) goto L_10cd14c9;
  /* 10cd14c4 call 0x10cd44b0 */
  push32(0x10cd14c9u); f_10cd44b0();
L_10cd14c9:;
  /* 10cd14c9 call 0x10cd25d0 */
  push32(0x10cd14ceu); f_10cd25d0();
  /* 10cd14ce call 0x10cd2080 */
  push32(0x10cd14d3u); f_10cd2080();
  /* 10cd14d3 call 0x10cd4ed0 */
  push32(0x10cd14d8u); f_10cd4ed0();
  /* 10cd14d8 jmp 0x10cd14de */
  goto L_10cd14de;
L_10cd14da:;
  /* 10cd14da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd14dc jmp 0x10cd14f5 */
  goto L_10cd14f5;
L_10cd14de:;
  /* 10cd14de jmp 0x10cd14f0 */
  goto L_10cd14f0;
L_10cd14e0:;
  /* 10cd14e0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd14e4 jne 0x10cd14f0 */
  if (!C.zf) goto L_10cd14f0;
  /* 10cd14e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd14e8 call 0x10cd2170 */
  push32(0x10cd14edu); f_10cd2170();
  /* 10cd14ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd14f0:;
  /* 10cd14f0 mov eax, 1 */
  EAX = (0x1u);
L_10cd14f5:;
  /* 10cd14f5 pop ebp */
  EBP = (pop32());
  /* 10cd14f6 ret 0xc */
  ESPCHK(0x10cd13c0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10cd1500 (243 bytes, 86 insns) */
void f_10cd1500(void) {
  FTRACE(0x10cd1500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd1500 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd1501 mov ebp, esp */
  EBP = (ESP);
  /* 10cd1503 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd1504 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10cd150b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd150f jne 0x10cd1521 */
  if (!C.zf) goto L_10cd1521;
  /* 10cd1511 cmp dword ptr [0x10cfe3e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe3e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1518 jne 0x10cd1521 */
  if (!C.zf) goto L_10cd1521;
  /* 10cd151a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd151c jmp 0x10cd15ed */
  goto L_10cd15ed;
L_10cd1521:;
  /* 10cd1521 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1525 je 0x10cd152d */
  if (C.zf) goto L_10cd152d;
  /* 10cd1527 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd152b jne 0x10cd156f */
  if (!C.zf) goto L_10cd156f;
L_10cd152d:;
  /* 10cd152d cmp dword ptr [0x10cfff5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfff5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1534 je 0x10cd154b */
  if (C.zf) goto L_10cd154b;
  /* 10cd1536 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd1539 push eax */
  push32((uint32_t)(EAX));
  /* 10cd153a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd153d push ecx */
  push32((uint32_t)(ECX));
  /* 10cd153e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd1541 push edx */
  push32((uint32_t)(EDX));
  /* 10cd1542 call dword ptr [0x10cfff5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfff5c))), 0x10cd1548u);
  /* 10cd1548 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cd154b:;
  /* 10cd154b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd154f je 0x10cd1565 */
  if (C.zf) goto L_10cd1565;
  /* 10cd1551 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd1554 push eax */
  push32((uint32_t)(EAX));
  /* 10cd1555 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd1558 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd1559 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd155c push edx */
  push32((uint32_t)(EDX));
  /* 10cd155d call 0x10cd13c0 */
  push32(0x10cd1562u); f_10cd13c0();
  /* 10cd1562 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cd1565:;
  /* 10cd1565 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1569 jne 0x10cd156f */
  if (!C.zf) goto L_10cd156f;
  /* 10cd156b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd156d jmp 0x10cd15ed */
  goto L_10cd15ed;
L_10cd156f:;
  /* 10cd156f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd1572 push eax */
  push32((uint32_t)(EAX));
  /* 10cd1573 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd1576 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd1577 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd157a push edx */
  push32((uint32_t)(EDX));
  /* 10cd157b call 0x10cd100a */
  push32(0x10cd1580u); f_10cd100a();
  /* 10cd1580 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd1583 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1587 jne 0x10cd159e */
  if (!C.zf) goto L_10cd159e;
  /* 10cd1589 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd158d jne 0x10cd159e */
  if (!C.zf) goto L_10cd159e;
  /* 10cd158f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd1592 push eax */
  push32((uint32_t)(EAX));
  /* 10cd1593 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd1595 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd1598 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd1599 call 0x10cd13c0 */
  push32(0x10cd159eu); f_10cd13c0();
L_10cd159e:;
  /* 10cd159e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd15a2 je 0x10cd15aa */
  if (C.zf) goto L_10cd15aa;
  /* 10cd15a4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd15a8 jne 0x10cd15ea */
  if (!C.zf) goto L_10cd15ea;
L_10cd15aa:;
  /* 10cd15aa mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd15ad push edx */
  push32((uint32_t)(EDX));
  /* 10cd15ae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd15b1 push eax */
  push32((uint32_t)(EAX));
  /* 10cd15b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd15b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd15b6 call 0x10cd13c0 */
  push32(0x10cd15bbu); f_10cd13c0();
  /* 10cd15bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd15bd jne 0x10cd15c6 */
  if (!C.zf) goto L_10cd15c6;
  /* 10cd15bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10cd15c6:;
  /* 10cd15c6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd15ca je 0x10cd15ea */
  if (C.zf) goto L_10cd15ea;
  /* 10cd15cc cmp dword ptr [0x10cfff5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfff5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd15d3 je 0x10cd15ea */
  if (C.zf) goto L_10cd15ea;
  /* 10cd15d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd15d8 push edx */
  push32((uint32_t)(EDX));
  /* 10cd15d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd15dc push eax */
  push32((uint32_t)(EAX));
  /* 10cd15dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd15e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd15e1 call dword ptr [0x10cfff5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfff5c))), 0x10cd15e7u);
  /* 10cd15e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cd15ea:;
  /* 10cd15ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10cd15ed:;
  /* 10cd15ed mov esp, ebp */
  ESP = (EBP);
  /* 10cd15ef pop ebp */
  EBP = (pop32());
  /* 10cd15f0 ret 0xc */
  ESPCHK(0x10cd1500u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10cd1600 (58 bytes, 18 insns) */
void f_10cd1600(void) {
  FTRACE(0x10cd1600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd1600 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd1601 mov ebp, esp */
  EBP = (ESP);
  /* 10cd1603 cmp dword ptr [0x10cfe3f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe3f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd160a je 0x10cd161e */
  if (C.zf) goto L_10cd161e;
  /* 10cd160c cmp dword ptr [0x10cfe3f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe3f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1613 jne 0x10cd1623 */
  if (!C.zf) goto L_10cd1623;
  /* 10cd1615 cmp dword ptr [0x10cfe3f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe3f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd161c jne 0x10cd1623 */
  if (!C.zf) goto L_10cd1623;
L_10cd161e:;
  /* 10cd161e call 0x10cd4f70 */
  push32(0x10cd1623u); f_10cd4f70();
L_10cd1623:;
  /* 10cd1623 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd1626 push eax */
  push32((uint32_t)(EAX));
  /* 10cd1627 call 0x10cd4fc0 */
  push32(0x10cd162cu); f_10cd4fc0();
  /* 10cd162c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd162f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10cd1634 call dword ptr [0x10cfca30] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfca30))), 0x10cd163au);
  /* 10cd163a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd163d pop ebp */
  EBP = (pop32());
  /* 10cd163e ret  */
  ESPCHK(0x10cd1600u, _esp0);
  ESP += 4; return;
}

/* FUN_10001640 @ 0x10cd1640 (11 bytes, 5 insns) */
void f_10cd1640(void) {
  FTRACE(0x10cd1640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd1640 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd1641 mov ebp, esp */
  EBP = (ESP);
  /* 10cd1643 call dword ptr [0x10d00228] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00228))), 0x10cd1649u);
  /* 10cd1649 pop ebp */
  EBP = (pop32());
  /* 10cd164a ret  */
  ESPCHK(0x10cd1640u, _esp0);
  ESP += 4; return;
}

/* FUN_10001650 @ 0x10cd1650 (87 bytes, 30 insns) */
void f_10cd1650(void) {
  FTRACE(0x10cd1650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd1650 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd1651 mov ebp, esp */
  EBP = (ESP);
  /* 10cd1653 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd1654 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1658 jl 0x10cd1660 */
  if ((C.sf!=C.of)) goto L_10cd1660;
  /* 10cd165a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd165e jl 0x10cd1665 */
  if ((C.sf!=C.of)) goto L_10cd1665;
L_10cd1660:;
  /* 10cd1660 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd1663 jmp 0x10cd16a3 */
  goto L_10cd16a3;
L_10cd1665:;
  /* 10cd1665 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1669 jne 0x10cd1677 */
  if (!C.zf) goto L_10cd1677;
  /* 10cd166b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd166e mov eax, dword ptr [eax*4 + 0x10cfca38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10cfca38)));
  /* 10cd1675 jmp 0x10cd16a3 */
  goto L_10cd16a3;
L_10cd1677:;
  /* 10cd1677 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd167a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd167d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd167f je 0x10cd1686 */
  if (C.zf) goto L_10cd1686;
  /* 10cd1681 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd1684 jmp 0x10cd16a3 */
  goto L_10cd16a3;
L_10cd1686:;
  /* 10cd1686 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd1689 mov eax, dword ptr [edx*4 + 0x10cfca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10cfca38)));
  /* 10cd1690 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd1693 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd1696 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd1699 mov dword ptr [ecx*4 + 0x10cfca38], edx */
  w32((uint32_t)(ECX*4 + 0x10cfca38), (EDX));
  /* 10cd16a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10cd16a3:;
  /* 10cd16a3 mov esp, ebp */
  ESP = (EBP);
  /* 10cd16a5 pop ebp */
  EBP = (pop32());
  /* 10cd16a6 ret  */
  ESPCHK(0x10cd1650u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10cd16b0 (126 bytes, 38 insns) */
void f_10cd16b0(void) {
  FTRACE(0x10cd16b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd16b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd16b1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd16b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd16b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd16b8 jl 0x10cd16c0 */
  if ((C.sf!=C.of)) goto L_10cd16c0;
  /* 10cd16ba cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd16be jl 0x10cd16c7 */
  if ((C.sf!=C.of)) goto L_10cd16c7;
L_10cd16c0:;
  /* 10cd16c0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10cd16c5 jmp 0x10cd172a */
  goto L_10cd172a;
L_10cd16c7:;
  /* 10cd16c7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd16cb jne 0x10cd16d9 */
  if (!C.zf) goto L_10cd16d9;
  /* 10cd16cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd16d0 mov eax, dword ptr [eax*4 + 0x10cfca44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10cfca44)));
  /* 10cd16d7 jmp 0x10cd172a */
  goto L_10cd172a;
L_10cd16d9:;
  /* 10cd16d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd16dc mov edx, dword ptr [ecx*4 + 0x10cfca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cfca44)));
  /* 10cd16e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd16e6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd16ea jne 0x10cd1700 */
  if (!C.zf) goto L_10cd1700;
  /* 10cd16ec push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10cd16ee call dword ptr [0x10d0022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0022c))), 0x10cd16f4u);
  /* 10cd16f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd16f7 mov dword ptr [ecx*4 + 0x10cfca44], eax */
  w32((uint32_t)(ECX*4 + 0x10cfca44), (EAX));
  /* 10cd16fe jmp 0x10cd1727 */
  goto L_10cd1727;
L_10cd1700:;
  /* 10cd1700 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1704 jne 0x10cd171a */
  if (!C.zf) goto L_10cd171a;
  /* 10cd1706 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10cd1708 call dword ptr [0x10d0022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0022c))), 0x10cd170eu);
  /* 10cd170e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd1711 mov dword ptr [edx*4 + 0x10cfca44], eax */
  w32((uint32_t)(EDX*4 + 0x10cfca44), (EAX));
  /* 10cd1718 jmp 0x10cd1727 */
  goto L_10cd1727;
L_10cd171a:;
  /* 10cd171a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd171d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd1720 mov dword ptr [eax*4 + 0x10cfca44], ecx */
  w32((uint32_t)(EAX*4 + 0x10cfca44), (ECX));
L_10cd1727:;
  /* 10cd1727 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10cd172a:;
  /* 10cd172a mov esp, ebp */
  ESP = (EBP);
  /* 10cd172c pop ebp */
  EBP = (pop32());
  /* 10cd172d ret  */
  ESPCHK(0x10cd16b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001730 @ 0x10cd1730 (28 bytes, 11 insns) */
void f_10cd1730(void) {
  FTRACE(0x10cd1730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd1730 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd1731 mov ebp, esp */
  EBP = (ESP);
  /* 10cd1733 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd1734 mov eax, dword ptr [0x10cfff40] */
  EAX = (r32((uint32_t)(0x10cfff40)));
  /* 10cd1739 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd173c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd173f mov dword ptr [0x10cfff40], ecx */
  w32((uint32_t)(0x10cfff40), (ECX));
  /* 10cd1745 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd1748 mov esp, ebp */
  ESP = (EBP);
  /* 10cd174a pop ebp */
  EBP = (pop32());
  /* 10cd174b ret  */
  ESPCHK(0x10cd1730u, _esp0);
  ESP += 4; return;
}

/* FUN_10001750 @ 0x10cd1750 (912 bytes, 248 insns) */
void f_10cd1750(void) {
  FTRACE(0x10cd1750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd1750 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd1751 mov ebp, esp */
  EBP = (ESP);
  /* 10cd1753 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10cd1758 call 0x10cd5830 */
  push32(0x10cd175du); f_10cd5830();
  /* 10cd175d push edi */
  push32((uint32_t)(EDI));
  /* 10cd175e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10cd1765 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10cd176a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd176c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10cd1772 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10cd1774 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10cd1776 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10cd1777 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10cd177e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10cd1783 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd1785 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10cd178b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10cd178d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10cd178f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10cd1790 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10cd1797 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10cd179c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd179e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10cd17a4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10cd17a6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10cd17a8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10cd17a9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10cd17ac mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10cd17b2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd17b6 jl 0x10cd17be */
  if ((C.sf!=C.of)) goto L_10cd17be;
  /* 10cd17b8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd17bc jl 0x10cd17c6 */
  if ((C.sf!=C.of)) goto L_10cd17c6;
L_10cd17be:;
  /* 10cd17be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd17c1 jmp 0x10cd1adb */
  goto L_10cd1adb;
L_10cd17c6:;
  /* 10cd17c6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd17ca jne 0x10cd1870 */
  if (!C.zf) goto L_10cd1870;
  /* 10cd17d0 push 0x10cfca34 */
  push32((uint32_t)(0x10cfca34u));
  /* 10cd17d5 call dword ptr [0x10d00244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00244))), 0x10cd17dbu);
  /* 10cd17db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd17dd jle 0x10cd1870 */
  if ((C.zf||C.sf!=C.of)) goto L_10cd1870;
  /* 10cd17e3 cmp dword ptr [0x10cfe3f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe3f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd17ea jne 0x10cd182e */
  if (!C.zf) goto L_10cd182e;
  /* 10cd17ec push 0x10cf91f8 */
  push32((uint32_t)(0x10cf91f8u));
  /* 10cd17f1 call dword ptr [0x10d00240] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00240))), 0x10cd17f7u);
  /* 10cd17f7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10cd17fd cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1804 je 0x10cd1826 */
  if (C.zf) goto L_10cd1826;
  /* 10cd1806 push 0x10cf91ec */
  push32((uint32_t)(0x10cf91ecu));
  /* 10cd180b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10cd1811 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd1812 call dword ptr [0x10d0023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0023c))), 0x10cd1818u);
  /* 10cd1818 mov dword ptr [0x10cfe3f8], eax */
  w32((uint32_t)(0x10cfe3f8), (EAX));
  /* 10cd181d cmp dword ptr [0x10cfe3f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe3f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1824 jne 0x10cd182e */
  if (!C.zf) goto L_10cd182e;
L_10cd1826:;
  /* 10cd1826 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd1829 jmp 0x10cd1adb */
  goto L_10cd1adb;
L_10cd182e:;
  /* 10cd182e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd1831 push edx */
  push32((uint32_t)(EDX));
  /* 10cd1832 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd1835 push eax */
  push32((uint32_t)(EAX));
  /* 10cd1836 push 0x10cf91b8 */
  push32((uint32_t)(0x10cf91b8u));
  /* 10cd183b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10cd1841 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd1842 call dword ptr [0x10cfe3f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfe3f8))), 0x10cd1848u);
  /* 10cd1848 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd184b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10cd1851 push edx */
  push32((uint32_t)(EDX));
  /* 10cd1852 call dword ptr [0x10d00238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00238))), 0x10cd1858u);
  /* 10cd1858 push 0x10cfca34 */
  push32((uint32_t)(0x10cfca34u));
  /* 10cd185d call dword ptr [0x10d00234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00234))), 0x10cd1863u);
  /* 10cd1863 call 0x10cd1640 */
  push32(0x10cd1868u); f_10cd1640();
  /* 10cd1868 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd186b jmp 0x10cd1adb */
  goto L_10cd1adb;
L_10cd1870:;
  /* 10cd1870 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1874 je 0x10cd18ad */
  if (C.zf) goto L_10cd18ad;
  /* 10cd1876 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10cd187c push eax */
  push32((uint32_t)(EAX));
  /* 10cd187d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd1880 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd1881 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10cd1886 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10cd188c push edx */
  push32((uint32_t)(EDX));
  /* 10cd188d call 0x10cd5730 */
  push32(0x10cd1892u); f_10cd5730();
  /* 10cd1892 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1895 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd1897 jge 0x10cd18ad */
  if ((C.sf==C.of)) goto L_10cd18ad;
  /* 10cd1899 push 0x10cf918c */
  push32((uint32_t)(0x10cf918cu));
  /* 10cd189e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10cd18a4 push eax */
  push32((uint32_t)(EAX));
  /* 10cd18a5 call 0x10cd5640 */
  push32(0x10cd18aau); f_10cd5640();
  /* 10cd18aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd18ad:;
  /* 10cd18ad cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd18b1 jne 0x10cd18e5 */
  if (!C.zf) goto L_10cd18e5;
  /* 10cd18b3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd18b7 je 0x10cd18c5 */
  if (C.zf) goto L_10cd18c5;
  /* 10cd18b9 mov dword ptr [ebp - 0x3028], 0x10cf9178 */
  w32((uint32_t)(EBP + -0x3028), (0x10cf9178u));
  /* 10cd18c3 jmp 0x10cd18cf */
  goto L_10cd18cf;
L_10cd18c5:;
  /* 10cd18c5 mov dword ptr [ebp - 0x3028], 0x10cf9164 */
  w32((uint32_t)(EBP + -0x3028), (0x10cf9164u));
L_10cd18cf:;
  /* 10cd18cf mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10cd18d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd18d6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10cd18dc push edx */
  push32((uint32_t)(EDX));
  /* 10cd18dd call 0x10cd5640 */
  push32(0x10cd18e2u); f_10cd5640();
  /* 10cd18e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd18e5:;
  /* 10cd18e5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10cd18eb push eax */
  push32((uint32_t)(EAX));
  /* 10cd18ec lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10cd18f2 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd18f3 call 0x10cd5650 */
  push32(0x10cd18f8u); f_10cd5650();
  /* 10cd18f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd18fb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd18ff jne 0x10cd193a */
  if (!C.zf) goto L_10cd193a;
  /* 10cd1901 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd1904 mov eax, dword ptr [edx*4 + 0x10cfca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10cfca38)));
  /* 10cd190b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd190e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd1910 je 0x10cd1926 */
  if (C.zf) goto L_10cd1926;
  /* 10cd1912 push 0x10cf9160 */
  push32((uint32_t)(0x10cf9160u));
  /* 10cd1917 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10cd191d push ecx */
  push32((uint32_t)(ECX));
  /* 10cd191e call 0x10cd5650 */
  push32(0x10cd1923u); f_10cd5650();
  /* 10cd1923 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd1926:;
  /* 10cd1926 push 0x10cf915c */
  push32((uint32_t)(0x10cf915cu));
  /* 10cd192b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10cd1931 push edx */
  push32((uint32_t)(EDX));
  /* 10cd1932 call 0x10cd5650 */
  push32(0x10cd1937u); f_10cd5650();
  /* 10cd1937 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd193a:;
  /* 10cd193a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd193e je 0x10cd1982 */
  if (C.zf) goto L_10cd1982;
  /* 10cd1940 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10cd1946 push eax */
  push32((uint32_t)(EAX));
  /* 10cd1947 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd194a push ecx */
  push32((uint32_t)(ECX));
  /* 10cd194b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd194e push edx */
  push32((uint32_t)(EDX));
  /* 10cd194f push 0x10cf9150 */
  push32((uint32_t)(0x10cf9150u));
  /* 10cd1954 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10cd1959 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10cd195f push eax */
  push32((uint32_t)(EAX));
  /* 10cd1960 call 0x10cd5540 */
  push32(0x10cd1965u); f_10cd5540();
  /* 10cd1965 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1968 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd196a jge 0x10cd1980 */
  if ((C.sf==C.of)) goto L_10cd1980;
  /* 10cd196c push 0x10cf918c */
  push32((uint32_t)(0x10cf918cu));
  /* 10cd1971 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10cd1977 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd1978 call 0x10cd5640 */
  push32(0x10cd197du); f_10cd5640();
  /* 10cd197d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd1980:;
  /* 10cd1980 jmp 0x10cd1998 */
  goto L_10cd1998;
L_10cd1982:;
  /* 10cd1982 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10cd1988 push edx */
  push32((uint32_t)(EDX));
  /* 10cd1989 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10cd198f push eax */
  push32((uint32_t)(EAX));
  /* 10cd1990 call 0x10cd5640 */
  push32(0x10cd1995u); f_10cd5640();
  /* 10cd1995 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd1998:;
  /* 10cd1998 cmp dword ptr [0x10cfff40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfff40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd199f je 0x10cd19dc */
  if (C.zf) goto L_10cd19dc;
  /* 10cd19a1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10cd19a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd19a8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10cd19ae push edx */
  push32((uint32_t)(EDX));
  /* 10cd19af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd19b2 push eax */
  push32((uint32_t)(EAX));
  /* 10cd19b3 call dword ptr [0x10cfff40] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfff40))), 0x10cd19b9u);
  /* 10cd19b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd19bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd19be je 0x10cd19dc */
  if (C.zf) goto L_10cd19dc;
  /* 10cd19c0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd19c4 jne 0x10cd19d1 */
  if (!C.zf) goto L_10cd19d1;
  /* 10cd19c6 push 0x10cfca34 */
  push32((uint32_t)(0x10cfca34u));
  /* 10cd19cb call dword ptr [0x10d00234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00234))), 0x10cd19d1u);
L_10cd19d1:;
  /* 10cd19d1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10cd19d7 jmp 0x10cd1adb */
  goto L_10cd1adb;
L_10cd19dc:;
  /* 10cd19dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd19df mov edx, dword ptr [ecx*4 + 0x10cfca38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cfca38)));
  /* 10cd19e6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd19e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd19eb je 0x10cd1a2b */
  if (C.zf) goto L_10cd1a2b;
  /* 10cd19ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd19f0 cmp dword ptr [eax*4 + 0x10cfca44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10cfca44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd19f8 je 0x10cd1a2b */
  if (C.zf) goto L_10cd1a2b;
  /* 10cd19fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd19fc lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10cd1a02 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd1a03 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10cd1a09 push edx */
  push32((uint32_t)(EDX));
  /* 10cd1a0a call 0x10cd54c0 */
  push32(0x10cd1a0fu); f_10cd54c0();
  /* 10cd1a0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1a12 push eax */
  push32((uint32_t)(EAX));
  /* 10cd1a13 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10cd1a19 push eax */
  push32((uint32_t)(EAX));
  /* 10cd1a1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd1a1d mov edx, dword ptr [ecx*4 + 0x10cfca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cfca44)));
  /* 10cd1a24 push edx */
  push32((uint32_t)(EDX));
  /* 10cd1a25 call dword ptr [0x10d00230] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00230))), 0x10cd1a2bu);
L_10cd1a2b:;
  /* 10cd1a2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd1a2e mov ecx, dword ptr [eax*4 + 0x10cfca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10cfca38)));
  /* 10cd1a35 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd1a38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd1a3a je 0x10cd1a49 */
  if (C.zf) goto L_10cd1a49;
  /* 10cd1a3c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10cd1a42 push edx */
  push32((uint32_t)(EDX));
  /* 10cd1a43 call dword ptr [0x10d00238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00238))), 0x10cd1a49u);
L_10cd1a49:;
  /* 10cd1a49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd1a4c mov ecx, dword ptr [eax*4 + 0x10cfca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10cfca38)));
  /* 10cd1a53 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd1a56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd1a58 je 0x10cd1ac8 */
  if (C.zf) goto L_10cd1ac8;
  /* 10cd1a5a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1a5e je 0x10cd1a7d */
  if (C.zf) goto L_10cd1a7d;
  /* 10cd1a60 push 0xa */
  push32((uint32_t)(0xau));
  /* 10cd1a62 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10cd1a68 push edx */
  push32((uint32_t)(EDX));
  /* 10cd1a69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd1a6c push eax */
  push32((uint32_t)(EAX));
  /* 10cd1a6d call 0x10cd51d0 */
  push32(0x10cd1a72u); f_10cd51d0();
  /* 10cd1a72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1a75 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10cd1a7b jmp 0x10cd1a87 */
  goto L_10cd1a87;
L_10cd1a7d:;
  /* 10cd1a7d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10cd1a87:;
  /* 10cd1a87 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10cd1a8d push ecx */
  push32((uint32_t)(ECX));
  /* 10cd1a8e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd1a91 push edx */
  push32((uint32_t)(EDX));
  /* 10cd1a92 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10cd1a98 push eax */
  push32((uint32_t)(EAX));
  /* 10cd1a99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd1a9c push ecx */
  push32((uint32_t)(ECX));
  /* 10cd1a9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd1aa0 push edx */
  push32((uint32_t)(EDX));
  /* 10cd1aa1 call 0x10cd1ae0 */
  push32(0x10cd1aa6u); f_10cd1ae0();
  /* 10cd1aa6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1aa9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10cd1aaf cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1ab3 jne 0x10cd1ac0 */
  if (!C.zf) goto L_10cd1ac0;
  /* 10cd1ab5 push 0x10cfca34 */
  push32((uint32_t)(0x10cfca34u));
  /* 10cd1aba call dword ptr [0x10d00234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00234))), 0x10cd1ac0u);
L_10cd1ac0:;
  /* 10cd1ac0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10cd1ac6 jmp 0x10cd1adb */
  goto L_10cd1adb;
L_10cd1ac8:;
  /* 10cd1ac8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1acc jne 0x10cd1ad9 */
  if (!C.zf) goto L_10cd1ad9;
  /* 10cd1ace push 0x10cfca34 */
  push32((uint32_t)(0x10cfca34u));
  /* 10cd1ad3 call dword ptr [0x10d00234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00234))), 0x10cd1ad9u);
L_10cd1ad9:;
  /* 10cd1ad9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10cd1adb:;
  /* 10cd1adb pop edi */
  EDI = (pop32());
  /* 10cd1adc mov esp, ebp */
  ESP = (EBP);
  /* 10cd1ade pop ebp */
  EBP = (pop32());
  /* 10cd1adf ret  */
  ESPCHK(0x10cd1750u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ae0 @ 0x10cd1ae0 (780 bytes, 197 insns) */
void f_10cd1ae0(void) {
  FTRACE(0x10cd1ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd1ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd1ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd1ae3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10cd1ae8 call 0x10cd5830 */
  push32(0x10cd1aedu); f_10cd5830();
L_10cd1aed:;
  /* 10cd1aed cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1af1 jne 0x10cd1b18 */
  if (!C.zf) goto L_10cd1b18;
  /* 10cd1af3 push 0x10cf9348 */
  push32((uint32_t)(0x10cf9348u));
  /* 10cd1af8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd1afa push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10cd1aff push 0x10cf933c */
  push32((uint32_t)(0x10cf933cu));
  /* 10cd1b04 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd1b06 call 0x10cd1750 */
  push32(0x10cd1b0bu); f_10cd1750();
  /* 10cd1b0b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1b0e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1b11 jne 0x10cd1b18 */
  if (!C.zf) goto L_10cd1b18;
  /* 10cd1b13 call 0x10cd1640 */
  push32(0x10cd1b18u); f_10cd1640();
L_10cd1b18:;
  /* 10cd1b18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd1b1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd1b1c jne 0x10cd1aed */
  if (!C.zf) goto L_10cd1aed;
  /* 10cd1b1e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10cd1b23 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10cd1b29 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd1b2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd1b2c call dword ptr [0x10d00248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00248))), 0x10cd1b32u);
  /* 10cd1b32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd1b34 jne 0x10cd1b4a */
  if (!C.zf) goto L_10cd1b4a;
  /* 10cd1b36 push 0x10cf9324 */
  push32((uint32_t)(0x10cf9324u));
  /* 10cd1b3b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10cd1b41 push edx */
  push32((uint32_t)(EDX));
  /* 10cd1b42 call 0x10cd5640 */
  push32(0x10cd1b47u); f_10cd5640();
  /* 10cd1b47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd1b4a:;
  /* 10cd1b4a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10cd1b50 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd1b53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd1b56 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd1b57 call 0x10cd54c0 */
  push32(0x10cd1b5cu); f_10cd54c0();
  /* 10cd1b5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1b5f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1b62 jbe 0x10cd1b8d */
  if ((C.cf||C.zf)) goto L_10cd1b8d;
  /* 10cd1b64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd1b67 push edx */
  push32((uint32_t)(EDX));
  /* 10cd1b68 call 0x10cd54c0 */
  push32(0x10cd1b6du); f_10cd54c0();
  /* 10cd1b6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1b70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd1b73 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10cd1b77 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd1b7a push 3 */
  push32((uint32_t)(0x3u));
  /* 10cd1b7c push 0x10cf9320 */
  push32((uint32_t)(0x10cf9320u));
  /* 10cd1b81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd1b84 push eax */
  push32((uint32_t)(EAX));
  /* 10cd1b85 call 0x10cd5eb0 */
  push32(0x10cd1b8au); f_10cd5eb0();
  /* 10cd1b8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd1b8d:;
  /* 10cd1b8d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd1b90 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10cd1b96 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1b9d je 0x10cd1be8 */
  if (C.zf) goto L_10cd1be8;
  /* 10cd1b9f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10cd1ba5 push edx */
  push32((uint32_t)(EDX));
  /* 10cd1ba6 call 0x10cd54c0 */
  push32(0x10cd1babu); f_10cd54c0();
  /* 10cd1bab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1bae cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1bb1 jbe 0x10cd1be8 */
  if ((C.cf||C.zf)) goto L_10cd1be8;
  /* 10cd1bb3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10cd1bb9 push eax */
  push32((uint32_t)(EAX));
  /* 10cd1bba call 0x10cd54c0 */
  push32(0x10cd1bbfu); f_10cd54c0();
  /* 10cd1bbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1bc2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10cd1bc8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10cd1bcc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10cd1bd2 push 3 */
  push32((uint32_t)(0x3u));
  /* 10cd1bd4 push 0x10cf9320 */
  push32((uint32_t)(0x10cf9320u));
  /* 10cd1bd9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10cd1bdf push eax */
  push32((uint32_t)(EAX));
  /* 10cd1be0 call 0x10cd5eb0 */
  push32(0x10cd1be5u); f_10cd5eb0();
  /* 10cd1be5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd1be8:;
  /* 10cd1be8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1bec jne 0x10cd1bfa */
  if (!C.zf) goto L_10cd1bfa;
  /* 10cd1bee mov dword ptr [ebp - 0x1114], 0x10cf92ac */
  w32((uint32_t)(EBP + -0x1114), (0x10cf92acu));
  /* 10cd1bf8 jmp 0x10cd1c04 */
  goto L_10cd1c04;
L_10cd1bfa:;
  /* 10cd1bfa mov dword ptr [ebp - 0x1114], 0x10cf904c */
  w32((uint32_t)(EBP + -0x1114), (0x10cf904cu));
L_10cd1c04:;
  /* 10cd1c04 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd1c07 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10cd1c0a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd1c0c je 0x10cd1c19 */
  if (C.zf) goto L_10cd1c19;
  /* 10cd1c0e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd1c11 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10cd1c17 jmp 0x10cd1c23 */
  goto L_10cd1c23;
L_10cd1c19:;
  /* 10cd1c19 mov dword ptr [ebp - 0x1118], 0x10cf904c */
  w32((uint32_t)(EBP + -0x1118), (0x10cf904cu));
L_10cd1c23:;
  /* 10cd1c23 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd1c26 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10cd1c29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd1c2b je 0x10cd1c3f */
  if (C.zf) goto L_10cd1c3f;
  /* 10cd1c2d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1c31 jne 0x10cd1c3f */
  if (!C.zf) goto L_10cd1c3f;
  /* 10cd1c33 mov dword ptr [ebp - 0x111c], 0x10cf929c */
  w32((uint32_t)(EBP + -0x111c), (0x10cf929cu));
  /* 10cd1c3d jmp 0x10cd1c49 */
  goto L_10cd1c49;
L_10cd1c3f:;
  /* 10cd1c3f mov dword ptr [ebp - 0x111c], 0x10cf904c */
  w32((uint32_t)(EBP + -0x111c), (0x10cf904cu));
L_10cd1c49:;
  /* 10cd1c49 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd1c4c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cd1c4f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd1c51 je 0x10cd1c5f */
  if (C.zf) goto L_10cd1c5f;
  /* 10cd1c53 mov dword ptr [ebp - 0x1120], 0x10cf9298 */
  w32((uint32_t)(EBP + -0x1120), (0x10cf9298u));
  /* 10cd1c5d jmp 0x10cd1c69 */
  goto L_10cd1c69;
L_10cd1c5f:;
  /* 10cd1c5f mov dword ptr [ebp - 0x1120], 0x10cf904c */
  w32((uint32_t)(EBP + -0x1120), (0x10cf904cu));
L_10cd1c69:;
  /* 10cd1c69 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1c6d je 0x10cd1c7a */
  if (C.zf) goto L_10cd1c7a;
  /* 10cd1c6f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd1c72 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10cd1c78 jmp 0x10cd1c84 */
  goto L_10cd1c84;
L_10cd1c7a:;
  /* 10cd1c7a mov dword ptr [ebp - 0x1124], 0x10cf904c */
  w32((uint32_t)(EBP + -0x1124), (0x10cf904cu));
L_10cd1c84:;
  /* 10cd1c84 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1c88 je 0x10cd1c96 */
  if (C.zf) goto L_10cd1c96;
  /* 10cd1c8a mov dword ptr [ebp - 0x1128], 0x10cf9290 */
  w32((uint32_t)(EBP + -0x1128), (0x10cf9290u));
  /* 10cd1c94 jmp 0x10cd1ca0 */
  goto L_10cd1ca0;
L_10cd1c96:;
  /* 10cd1c96 mov dword ptr [ebp - 0x1128], 0x10cf904c */
  w32((uint32_t)(EBP + -0x1128), (0x10cf904cu));
L_10cd1ca0:;
  /* 10cd1ca0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1ca4 je 0x10cd1cb1 */
  if (C.zf) goto L_10cd1cb1;
  /* 10cd1ca6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd1ca9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10cd1caf jmp 0x10cd1cbb */
  goto L_10cd1cbb;
L_10cd1cb1:;
  /* 10cd1cb1 mov dword ptr [ebp - 0x112c], 0x10cf904c */
  w32((uint32_t)(EBP + -0x112c), (0x10cf904cu));
L_10cd1cbb:;
  /* 10cd1cbb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1cbf je 0x10cd1ccd */
  if (C.zf) goto L_10cd1ccd;
  /* 10cd1cc1 mov dword ptr [ebp - 0x1130], 0x10cf9288 */
  w32((uint32_t)(EBP + -0x1130), (0x10cf9288u));
  /* 10cd1ccb jmp 0x10cd1cd7 */
  goto L_10cd1cd7;
L_10cd1ccd:;
  /* 10cd1ccd mov dword ptr [ebp - 0x1130], 0x10cf904c */
  w32((uint32_t)(EBP + -0x1130), (0x10cf904cu));
L_10cd1cd7:;
  /* 10cd1cd7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1cde je 0x10cd1cee */
  if (C.zf) goto L_10cd1cee;
  /* 10cd1ce0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10cd1ce6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10cd1cec jmp 0x10cd1cf8 */
  goto L_10cd1cf8;
L_10cd1cee:;
  /* 10cd1cee mov dword ptr [ebp - 0x1134], 0x10cf904c */
  w32((uint32_t)(EBP + -0x1134), (0x10cf904cu));
L_10cd1cf8:;
  /* 10cd1cf8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1cff je 0x10cd1d0d */
  if (C.zf) goto L_10cd1d0d;
  /* 10cd1d01 mov dword ptr [ebp - 0x1138], 0x10cf927c */
  w32((uint32_t)(EBP + -0x1138), (0x10cf927cu));
  /* 10cd1d0b jmp 0x10cd1d17 */
  goto L_10cd1d17;
L_10cd1d0d:;
  /* 10cd1d0d mov dword ptr [ebp - 0x1138], 0x10cf904c */
  w32((uint32_t)(EBP + -0x1138), (0x10cf904cu));
L_10cd1d17:;
  /* 10cd1d17 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10cd1d1d push edx */
  push32((uint32_t)(EDX));
  /* 10cd1d1e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10cd1d24 push eax */
  push32((uint32_t)(EAX));
  /* 10cd1d25 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10cd1d2b push ecx */
  push32((uint32_t)(ECX));
  /* 10cd1d2c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10cd1d32 push edx */
  push32((uint32_t)(EDX));
  /* 10cd1d33 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10cd1d39 push eax */
  push32((uint32_t)(EAX));
  /* 10cd1d3a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10cd1d40 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd1d41 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10cd1d47 push edx */
  push32((uint32_t)(EDX));
  /* 10cd1d48 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10cd1d4e push eax */
  push32((uint32_t)(EAX));
  /* 10cd1d4f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10cd1d55 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd1d56 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10cd1d5c push edx */
  push32((uint32_t)(EDX));
  /* 10cd1d5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd1d60 push eax */
  push32((uint32_t)(EAX));
  /* 10cd1d61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd1d64 mov edx, dword ptr [ecx*4 + 0x10cfca50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cfca50)));
  /* 10cd1d6b push edx */
  push32((uint32_t)(EDX));
  /* 10cd1d6c push 0x10cf9228 */
  push32((uint32_t)(0x10cf9228u));
  /* 10cd1d71 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10cd1d76 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10cd1d7c push eax */
  push32((uint32_t)(EAX));
  /* 10cd1d7d call 0x10cd5540 */
  push32(0x10cd1d82u); f_10cd5540();
  /* 10cd1d82 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1d85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd1d87 jge 0x10cd1d9d */
  if ((C.sf==C.of)) goto L_10cd1d9d;
  /* 10cd1d89 push 0x10cf918c */
  push32((uint32_t)(0x10cf918cu));
  /* 10cd1d8e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10cd1d94 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd1d95 call 0x10cd5640 */
  push32(0x10cd1d9au); f_10cd5640();
  /* 10cd1d9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd1d9d:;
  /* 10cd1d9d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10cd1da2 push 0x10cf9204 */
  push32((uint32_t)(0x10cf9204u));
  /* 10cd1da7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10cd1dad push edx */
  push32((uint32_t)(EDX));
  /* 10cd1dae call 0x10cd5df0 */
  push32(0x10cd1db3u); f_10cd5df0();
  /* 10cd1db3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1db6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 10cd1dbc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1dc3 jne 0x10cd1dd6 */
  if (!C.zf) goto L_10cd1dd6;
  /* 10cd1dc5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10cd1dc7 call 0x10cd5b30 */
  push32(0x10cd1dccu); f_10cd5b30();
  /* 10cd1dcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1dcf push 3 */
  push32((uint32_t)(0x3u));
  /* 10cd1dd1 call 0x10cd1e50 */
  push32(0x10cd1dd6u); f_10cd1e50();
L_10cd1dd6:;
  /* 10cd1dd6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1ddd jne 0x10cd1de6 */
  if (!C.zf) goto L_10cd1de6;
  /* 10cd1ddf mov eax, 1 */
  EAX = (0x1u);
  /* 10cd1de4 jmp 0x10cd1de8 */
  goto L_10cd1de8;
L_10cd1de6:;
  /* 10cd1de6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10cd1de8:;
  /* 10cd1de8 mov esp, ebp */
  ESP = (EBP);
  /* 10cd1dea pop ebp */
  EBP = (pop32());
  /* 10cd1deb ret  */
  ESPCHK(0x10cd1ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001df0 @ 0x10cd1df0 (56 bytes, 15 insns) */
void f_10cd1df0(void) {
  FTRACE(0x10cd1df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd1df0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd1df1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd1df3 cmp dword ptr [0x10cfff3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfff3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1dfa je 0x10cd1e02 */
  if (C.zf) goto L_10cd1e02;
  /* 10cd1dfc call dword ptr [0x10cfff3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfff3c))), 0x10cd1e02u);
L_10cd1e02:;
  /* 10cd1e02 push 0x10cfc418 */
  push32((uint32_t)(0x10cfc418u));
  /* 10cd1e07 push 0x10cfc208 */
  push32((uint32_t)(0x10cfc208u));
  /* 10cd1e0c call 0x10cd1fc0 */
  push32(0x10cd1e11u); f_10cd1fc0();
  /* 10cd1e11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1e14 push 0x10cfc104 */
  push32((uint32_t)(0x10cfc104u));
  /* 10cd1e19 push 0x10cfc000 */
  push32((uint32_t)(0x10cfc000u));
  /* 10cd1e1e call 0x10cd1fc0 */
  push32(0x10cd1e23u); f_10cd1fc0();
  /* 10cd1e23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1e26 pop ebp */
  EBP = (pop32());
  /* 10cd1e27 ret  */
  ESPCHK(0x10cd1df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e30 @ 0x10cd1e30 (21 bytes, 10 insns) */
void f_10cd1e30(void) {
  FTRACE(0x10cd1e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd1e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd1e31 mov ebp, esp */
  EBP = (ESP);
  /* 10cd1e33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd1e35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd1e37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd1e3a push eax */
  push32((uint32_t)(EAX));
  /* 10cd1e3b call 0x10cd1eb0 */
  push32(0x10cd1e40u); f_10cd1eb0();
  /* 10cd1e40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1e43 pop ebp */
  EBP = (pop32());
  /* 10cd1e44 ret  */
  ESPCHK(0x10cd1e30u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10cd1e50 (21 bytes, 10 insns) */
void f_10cd1e50(void) {
  FTRACE(0x10cd1e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd1e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd1e51 mov ebp, esp */
  EBP = (ESP);
  /* 10cd1e53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd1e55 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd1e57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd1e5a push eax */
  push32((uint32_t)(EAX));
  /* 10cd1e5b call 0x10cd1eb0 */
  push32(0x10cd1e60u); f_10cd1eb0();
  /* 10cd1e60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1e63 pop ebp */
  EBP = (pop32());
  /* 10cd1e64 ret  */
  ESPCHK(0x10cd1e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e70 @ 0x10cd1e70 (19 bytes, 9 insns) */
void f_10cd1e70(void) {
  FTRACE(0x10cd1e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd1e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd1e71 mov ebp, esp */
  EBP = (ESP);
  /* 10cd1e73 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd1e75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd1e77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd1e79 call 0x10cd1eb0 */
  push32(0x10cd1e7eu); f_10cd1eb0();
  /* 10cd1e7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1e81 pop ebp */
  EBP = (pop32());
  /* 10cd1e82 ret  */
  ESPCHK(0x10cd1e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e90 @ 0x10cd1e90 (19 bytes, 9 insns) */
void f_10cd1e90(void) {
  FTRACE(0x10cd1e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd1e90 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd1e91 mov ebp, esp */
  EBP = (ESP);
  /* 10cd1e93 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd1e95 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd1e97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd1e99 call 0x10cd1eb0 */
  push32(0x10cd1e9eu); f_10cd1eb0();
  /* 10cd1e9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1ea1 pop ebp */
  EBP = (pop32());
  /* 10cd1ea2 ret  */
  ESPCHK(0x10cd1e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10001eb0 @ 0x10cd1eb0 (227 bytes, 61 insns) */
void f_10cd1eb0(void) {
  FTRACE(0x10cd1eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd1eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd1eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd1eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd1eb4 call 0x10cd1fa0 */
  push32(0x10cd1eb9u); f_10cd1fa0();
  /* 10cd1eb9 cmp dword ptr [0x10cfe43c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe43c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1ec0 jne 0x10cd1ed3 */
  if (!C.zf) goto L_10cd1ed3;
  /* 10cd1ec2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd1ec5 push eax */
  push32((uint32_t)(EAX));
  /* 10cd1ec6 call dword ptr [0x10d00254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00254))), 0x10cd1eccu);
  /* 10cd1ecc push eax */
  push32((uint32_t)(EAX));
  /* 10cd1ecd call dword ptr [0x10d00250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00250))), 0x10cd1ed3u);
L_10cd1ed3:;
  /* 10cd1ed3 mov dword ptr [0x10cfe438], 1 */
  w32((uint32_t)(0x10cfe438), (0x1u));
  /* 10cd1edd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10cd1ee0 mov byte ptr [0x10cfe434], cl */
  w8((uint32_t)(0x10cfe434), (CL));
  /* 10cd1ee6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1eea jne 0x10cd1f33 */
  if (!C.zf) goto L_10cd1f33;
  /* 10cd1eec cmp dword ptr [0x10cfff38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfff38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1ef3 je 0x10cd1f21 */
  if (C.zf) goto L_10cd1f21;
  /* 10cd1ef5 mov edx, dword ptr [0x10cfff34] */
  EDX = (r32((uint32_t)(0x10cfff34)));
  /* 10cd1efb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10cd1efe:;
  /* 10cd1efe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd1f01 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd1f04 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd1f07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd1f0a cmp ecx, dword ptr [0x10cfff38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cfff38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1f10 jb 0x10cd1f21 */
  if (C.cf) goto L_10cd1f21;
  /* 10cd1f12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd1f15 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1f18 je 0x10cd1f1f */
  if (C.zf) goto L_10cd1f1f;
  /* 10cd1f1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd1f1d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10cd1f1fu);
L_10cd1f1f:;
  /* 10cd1f1f jmp 0x10cd1efe */
  goto L_10cd1efe;
L_10cd1f21:;
  /* 10cd1f21 push 0x10cfc724 */
  push32((uint32_t)(0x10cfc724u));
  /* 10cd1f26 push 0x10cfc51c */
  push32((uint32_t)(0x10cfc51cu));
  /* 10cd1f2b call 0x10cd1fc0 */
  push32(0x10cd1f30u); f_10cd1fc0();
  /* 10cd1f30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd1f33:;
  /* 10cd1f33 push 0x10cfc92c */
  push32((uint32_t)(0x10cfc92cu));
  /* 10cd1f38 push 0x10cfc828 */
  push32((uint32_t)(0x10cfc828u));
  /* 10cd1f3d call 0x10cd1fc0 */
  push32(0x10cd1f42u); f_10cd1fc0();
  /* 10cd1f42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1f45 cmp dword ptr [0x10cfe440], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe440))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1f4c jne 0x10cd1f6e */
  if (!C.zf) goto L_10cd1f6e;
  /* 10cd1f4e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10cd1f50 call 0x10cd3ba0 */
  push32(0x10cd1f55u); f_10cd3ba0();
  /* 10cd1f55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1f58 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd1f5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd1f5d je 0x10cd1f6e */
  if (C.zf) goto L_10cd1f6e;
  /* 10cd1f5f mov dword ptr [0x10cfe440], 1 */
  w32((uint32_t)(0x10cfe440), (0x1u));
  /* 10cd1f69 call 0x10cd44b0 */
  push32(0x10cd1f6eu); f_10cd44b0();
L_10cd1f6e:;
  /* 10cd1f6e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1f72 je 0x10cd1f7b */
  if (C.zf) goto L_10cd1f7b;
  /* 10cd1f74 call 0x10cd1fb0 */
  push32(0x10cd1f79u); f_10cd1fb0();
  /* 10cd1f79 jmp 0x10cd1f8f */
  goto L_10cd1f8f;
L_10cd1f7b:;
  /* 10cd1f7b mov dword ptr [0x10cfe43c], 1 */
  w32((uint32_t)(0x10cfe43c), (0x1u));
  /* 10cd1f85 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd1f88 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd1f89 call dword ptr [0x10d0024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0024c))), 0x10cd1f8fu);
L_10cd1f8f:;
  /* 10cd1f8f mov esp, ebp */
  ESP = (EBP);
  /* 10cd1f91 pop ebp */
  EBP = (pop32());
  /* 10cd1f92 ret  */
  ESPCHK(0x10cd1eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fa0 @ 0x10cd1fa0 (15 bytes, 7 insns) */
void f_10cd1fa0(void) {
  FTRACE(0x10cd1fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd1fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd1fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd1fa3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10cd1fa5 call 0x10cd6090 */
  push32(0x10cd1faau); f_10cd6090();
  /* 10cd1faa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1fad pop ebp */
  EBP = (pop32());
  /* 10cd1fae ret  */
  ESPCHK(0x10cd1fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fb0 @ 0x10cd1fb0 (15 bytes, 7 insns) */
void f_10cd1fb0(void) {
  FTRACE(0x10cd1fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd1fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd1fb1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd1fb3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10cd1fb5 call 0x10cd6130 */
  push32(0x10cd1fbau); f_10cd6130();
  /* 10cd1fba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1fbd pop ebp */
  EBP = (pop32());
  /* 10cd1fbe ret  */
  ESPCHK(0x10cd1fb0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10cd1fc0 (37 bytes, 16 insns) */
void f_10cd1fc0(void) {
  FTRACE(0x10cd1fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd1fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd1fc1 mov ebp, esp */
  EBP = (ESP);
L_10cd1fc3:;
  /* 10cd1fc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd1fc6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1fc9 jae 0x10cd1fe3 */
  if (!C.cf) goto L_10cd1fe3;
  /* 10cd1fcb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd1fce cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd1fd1 je 0x10cd1fd8 */
  if (C.zf) goto L_10cd1fd8;
  /* 10cd1fd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd1fd6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10cd1fd8u);
L_10cd1fd8:;
  /* 10cd1fd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd1fdb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd1fde mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10cd1fe1 jmp 0x10cd1fc3 */
  goto L_10cd1fc3;
L_10cd1fe3:;
  /* 10cd1fe3 pop ebp */
  EBP = (pop32());
  /* 10cd1fe4 ret  */
  ESPCHK(0x10cd1fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ff0 @ 0x10cd1ff0 (130 bytes, 42 insns) */
void f_10cd1ff0(void) {
  FTRACE(0x10cd1ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd1ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd1ff1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd1ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd1ff4 call 0x10cd5fb0 */
  push32(0x10cd1ff9u); f_10cd5fb0();
  /* 10cd1ff9 call dword ptr [0x10d00260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00260))), 0x10cd1fffu);
  /* 10cd1fff mov dword ptr [0x10cfca5c], eax */
  w32((uint32_t)(0x10cfca5c), (EAX));
  /* 10cd2004 cmp dword ptr [0x10cfca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd200b jne 0x10cd2011 */
  if (!C.zf) goto L_10cd2011;
  /* 10cd200d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd200f jmp 0x10cd206e */
  goto L_10cd206e;
L_10cd2011:;
  /* 10cd2011 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10cd2013 push 0x10cf9360 */
  push32((uint32_t)(0x10cf9360u));
  /* 10cd2018 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd201a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10cd201c push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd201e call 0x10cd2aa0 */
  push32(0x10cd2023u); f_10cd2aa0();
  /* 10cd2023 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2026 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd2029 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd202d je 0x10cd2044 */
  if (C.zf) goto L_10cd2044;
  /* 10cd202f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd2032 push eax */
  push32((uint32_t)(EAX));
  /* 10cd2033 mov ecx, dword ptr [0x10cfca5c] */
  ECX = (r32((uint32_t)(0x10cfca5c)));
  /* 10cd2039 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd203a call dword ptr [0x10d0025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0025c))), 0x10cd2040u);
  /* 10cd2040 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd2042 jne 0x10cd2048 */
  if (!C.zf) goto L_10cd2048;
L_10cd2044:;
  /* 10cd2044 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd2046 jmp 0x10cd206e */
  goto L_10cd206e;
L_10cd2048:;
  /* 10cd2048 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd204b push edx */
  push32((uint32_t)(EDX));
  /* 10cd204c call 0x10cd20b0 */
  push32(0x10cd2051u); f_10cd20b0();
  /* 10cd2051 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2054 call dword ptr [0x10d00258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00258))), 0x10cd205au);
  /* 10cd205a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd205d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10cd205f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd2062 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10cd2069 mov eax, 1 */
  EAX = (0x1u);
L_10cd206e:;
  /* 10cd206e mov esp, ebp */
  ESP = (EBP);
  /* 10cd2070 pop ebp */
  EBP = (pop32());
  /* 10cd2071 ret  */
  ESPCHK(0x10cd1ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002080 @ 0x10cd2080 (41 bytes, 11 insns) */
void f_10cd2080(void) {
  FTRACE(0x10cd2080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd2080 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd2081 mov ebp, esp */
  EBP = (ESP);
  /* 10cd2083 call 0x10cd5ff0 */
  push32(0x10cd2088u); f_10cd5ff0();
  /* 10cd2088 cmp dword ptr [0x10cfca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd208f je 0x10cd20a7 */
  if (C.zf) goto L_10cd20a7;
  /* 10cd2091 mov eax, dword ptr [0x10cfca5c] */
  EAX = (r32((uint32_t)(0x10cfca5c)));
  /* 10cd2096 push eax */
  push32((uint32_t)(EAX));
  /* 10cd2097 call dword ptr [0x10d00264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00264))), 0x10cd209du);
  /* 10cd209d mov dword ptr [0x10cfca5c], 0xffffffff */
  w32((uint32_t)(0x10cfca5c), (0xffffffffu));
L_10cd20a7:;
  /* 10cd20a7 pop ebp */
  EBP = (pop32());
  /* 10cd20a8 ret  */
  ESPCHK(0x10cd2080u, _esp0);
  ESP += 4; return;
}

/* FUN_100020b0 @ 0x10cd20b0 (25 bytes, 8 insns) */
void f_10cd20b0(void) {
  FTRACE(0x10cd20b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd20b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd20b1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd20b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd20b6 mov dword ptr [eax + 0x50], 0x10cfcc00 */
  w32((uint32_t)(EAX + 0x50), (0x10cfcc00u));
  /* 10cd20bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd20c0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10cd20c7 pop ebp */
  EBP = (pop32());
  /* 10cd20c8 ret  */
  ESPCHK(0x10cd20b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100020d0 @ 0x10cd20d0 (152 bytes, 48 insns) */
void f_10cd20d0(void) {
  FTRACE(0x10cd20d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd20d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd20d1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd20d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd20d6 call dword ptr [0x10d00270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00270))), 0x10cd20dcu);
  /* 10cd20dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cd20df mov eax, dword ptr [0x10cfca5c] */
  EAX = (r32((uint32_t)(0x10cfca5c)));
  /* 10cd20e4 push eax */
  push32((uint32_t)(EAX));
  /* 10cd20e5 call dword ptr [0x10d0026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0026c))), 0x10cd20ebu);
  /* 10cd20eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd20ee cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd20f2 jne 0x10cd2157 */
  if (!C.zf) goto L_10cd2157;
  /* 10cd20f4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10cd20f9 push 0x10cf9360 */
  push32((uint32_t)(0x10cf9360u));
  /* 10cd20fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd2100 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10cd2102 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd2104 call 0x10cd2aa0 */
  push32(0x10cd2109u); f_10cd2aa0();
  /* 10cd2109 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd210c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd210f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2113 je 0x10cd214d */
  if (C.zf) goto L_10cd214d;
  /* 10cd2115 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd2118 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd2119 mov edx, dword ptr [0x10cfca5c] */
  EDX = (r32((uint32_t)(0x10cfca5c)));
  /* 10cd211f push edx */
  push32((uint32_t)(EDX));
  /* 10cd2120 call dword ptr [0x10d0025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0025c))), 0x10cd2126u);
  /* 10cd2126 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd2128 je 0x10cd214d */
  if (C.zf) goto L_10cd214d;
  /* 10cd212a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd212d push eax */
  push32((uint32_t)(EAX));
  /* 10cd212e call 0x10cd20b0 */
  push32(0x10cd2133u); f_10cd20b0();
  /* 10cd2133 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2136 call dword ptr [0x10d00258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00258))), 0x10cd213cu);
  /* 10cd213c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd213f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10cd2141 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd2144 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10cd214b jmp 0x10cd2157 */
  goto L_10cd2157;
L_10cd214d:;
  /* 10cd214d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10cd214f call 0x10cd1600 */
  push32(0x10cd2154u); f_10cd1600();
  /* 10cd2154 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd2157:;
  /* 10cd2157 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd215a push eax */
  push32((uint32_t)(EAX));
  /* 10cd215b call dword ptr [0x10d00268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00268))), 0x10cd2161u);
  /* 10cd2161 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd2164 mov esp, ebp */
  ESP = (EBP);
  /* 10cd2166 pop ebp */
  EBP = (pop32());
  /* 10cd2167 ret  */
  ESPCHK(0x10cd20d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002170 @ 0x10cd2170 (263 bytes, 86 insns) */
void f_10cd2170(void) {
  FTRACE(0x10cd2170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd2170 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd2171 mov ebp, esp */
  EBP = (ESP);
  /* 10cd2173 cmp dword ptr [0x10cfca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd217a je 0x10cd2275 */
  if (C.zf) goto L_10cd2275;
  /* 10cd2180 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2184 jne 0x10cd2195 */
  if (!C.zf) goto L_10cd2195;
  /* 10cd2186 mov eax, dword ptr [0x10cfca5c] */
  EAX = (r32((uint32_t)(0x10cfca5c)));
  /* 10cd218b push eax */
  push32((uint32_t)(EAX));
  /* 10cd218c call dword ptr [0x10d0026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0026c))), 0x10cd2192u);
  /* 10cd2192 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10cd2195:;
  /* 10cd2195 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2199 je 0x10cd2266 */
  if (C.zf) goto L_10cd2266;
  /* 10cd219f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd21a2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd21a6 je 0x10cd21b9 */
  if (C.zf) goto L_10cd21b9;
  /* 10cd21a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd21aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd21ad mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10cd21b0 push eax */
  push32((uint32_t)(EAX));
  /* 10cd21b1 call 0x10cd3120 */
  push32(0x10cd21b6u); f_10cd3120();
  /* 10cd21b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd21b9:;
  /* 10cd21b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd21bc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd21c0 je 0x10cd21d3 */
  if (C.zf) goto L_10cd21d3;
  /* 10cd21c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd21c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd21c7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10cd21ca push eax */
  push32((uint32_t)(EAX));
  /* 10cd21cb call 0x10cd3120 */
  push32(0x10cd21d0u); f_10cd3120();
  /* 10cd21d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd21d3:;
  /* 10cd21d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd21d6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd21da je 0x10cd21ed */
  if (C.zf) goto L_10cd21ed;
  /* 10cd21dc push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd21de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd21e1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10cd21e4 push eax */
  push32((uint32_t)(EAX));
  /* 10cd21e5 call 0x10cd3120 */
  push32(0x10cd21eau); f_10cd3120();
  /* 10cd21ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd21ed:;
  /* 10cd21ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd21f0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd21f4 je 0x10cd2207 */
  if (C.zf) goto L_10cd2207;
  /* 10cd21f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd21f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd21fb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 10cd21fe push eax */
  push32((uint32_t)(EAX));
  /* 10cd21ff call 0x10cd3120 */
  push32(0x10cd2204u); f_10cd3120();
  /* 10cd2204 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd2207:;
  /* 10cd2207 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd220a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd220e je 0x10cd2221 */
  if (C.zf) goto L_10cd2221;
  /* 10cd2210 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd2212 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd2215 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10cd2218 push eax */
  push32((uint32_t)(EAX));
  /* 10cd2219 call 0x10cd3120 */
  push32(0x10cd221eu); f_10cd3120();
  /* 10cd221e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd2221:;
  /* 10cd2221 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd2224 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2228 je 0x10cd223b */
  if (C.zf) goto L_10cd223b;
  /* 10cd222a push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd222c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd222f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10cd2232 push eax */
  push32((uint32_t)(EAX));
  /* 10cd2233 call 0x10cd3120 */
  push32(0x10cd2238u); f_10cd3120();
  /* 10cd2238 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd223b:;
  /* 10cd223b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd223e cmp dword ptr [ecx + 0x50], 0x10cfcc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x10cfcc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2245 je 0x10cd2258 */
  if (C.zf) goto L_10cd2258;
  /* 10cd2247 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd2249 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd224c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10cd224f push eax */
  push32((uint32_t)(EAX));
  /* 10cd2250 call 0x10cd3120 */
  push32(0x10cd2255u); f_10cd3120();
  /* 10cd2255 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd2258:;
  /* 10cd2258 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd225a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd225d push ecx */
  push32((uint32_t)(ECX));
  /* 10cd225e call 0x10cd3120 */
  push32(0x10cd2263u); f_10cd3120();
  /* 10cd2263 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd2266:;
  /* 10cd2266 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2268 mov edx, dword ptr [0x10cfca5c] */
  EDX = (r32((uint32_t)(0x10cfca5c)));
  /* 10cd226e push edx */
  push32((uint32_t)(EDX));
  /* 10cd226f call dword ptr [0x10d0025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0025c))), 0x10cd2275u);
L_10cd2275:;
  /* 10cd2275 pop ebp */
  EBP = (pop32());
  /* 10cd2276 ret  */
  ESPCHK(0x10cd2170u, _esp0);
  ESP += 4; return;
}

/* FUN_10002280 @ 0x10cd2280 (11 bytes, 5 insns) */
void f_10cd2280(void) {
  FTRACE(0x10cd2280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd2280 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd2281 mov ebp, esp */
  EBP = (ESP);
  /* 10cd2283 call dword ptr [0x10d00258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00258))), 0x10cd2289u);
  /* 10cd2289 pop ebp */
  EBP = (pop32());
  /* 10cd228a ret  */
  ESPCHK(0x10cd2280u, _esp0);
  ESP += 4; return;
}

/* FUN_10002290 @ 0x10cd2290 (11 bytes, 5 insns) */
void f_10cd2290(void) {
  FTRACE(0x10cd2290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd2290 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd2291 mov ebp, esp */
  EBP = (ESP);
  /* 10cd2293 call dword ptr [0x10d00274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00274))), 0x10cd2299u);
  /* 10cd2299 pop ebp */
  EBP = (pop32());
  /* 10cd229a ret  */
  ESPCHK(0x10cd2290u, _esp0);
  ESP += 4; return;
}

/* FUN_100022a0 @ 0x10cd22a0 (804 bytes, 236 insns) */
void f_10cd22a0(void) {
  FTRACE(0x10cd22a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd22a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd22a1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd22a3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd22a6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 10cd22ab push 0x10cf936c */
  push32((uint32_t)(0x10cf936cu));
  /* 10cd22b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd22b2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10cd22b7 call 0x10cd2690 */
  push32(0x10cd22bcu); f_10cd2690();
  /* 10cd22bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd22bf mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10cd22c2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd22c6 jne 0x10cd22d2 */
  if (!C.zf) goto L_10cd22d2;
  /* 10cd22c8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10cd22ca call 0x10cd1600 */
  push32(0x10cd22cfu); f_10cd1600();
  /* 10cd22cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd22d2:;
  /* 10cd22d2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd22d5 mov dword ptr [0x10cffde0], eax */
  w32((uint32_t)(0x10cffde0), (EAX));
  /* 10cd22da mov dword ptr [0x10cfff1c], 0x20 */
  w32((uint32_t)(0x10cfff1c), (0x20u));
  /* 10cd22e4 jmp 0x10cd22ef */
  goto L_10cd22ef;
L_10cd22e6:;
  /* 10cd22e6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd22e9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd22ec mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_10cd22ef:;
  /* 10cd22ef mov edx, dword ptr [0x10cffde0] */
  EDX = (r32((uint32_t)(0x10cffde0)));
  /* 10cd22f5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd22fb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd22fe jae 0x10cd2323 */
  if (!C.cf) goto L_10cd2323;
  /* 10cd2300 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd2303 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10cd2307 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd230a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10cd2310 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd2313 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10cd2317 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd231a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10cd2321 jmp 0x10cd22e6 */
  goto L_10cd22e6;
L_10cd2323:;
  /* 10cd2323 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10cd2326 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd2327 call dword ptr [0x10d00280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00280))), 0x10cd232du);
  /* 10cd232d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10cd2330 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10cd2336 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd2338 je 0x10cd24c5 */
  if (C.zf) goto L_10cd24c5;
  /* 10cd233e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2342 je 0x10cd24c5 */
  if (C.zf) goto L_10cd24c5;
  /* 10cd2348 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd234b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cd234d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10cd2350 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd2353 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2356 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd2359 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd235c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd235f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10cd2362 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2369 jge 0x10cd2373 */
  if ((C.sf==C.of)) goto L_10cd2373;
  /* 10cd236b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10cd236e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10cd2371 jmp 0x10cd237a */
  goto L_10cd237a;
L_10cd2373:;
  /* 10cd2373 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_10cd237a:;
  /* 10cd237a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10cd237d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10cd2380 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10cd2387 jmp 0x10cd2392 */
  goto L_10cd2392;
L_10cd2389:;
  /* 10cd2389 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10cd238c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd238f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10cd2392:;
  /* 10cd2392 mov ecx, dword ptr [0x10cfff1c] */
  ECX = (r32((uint32_t)(0x10cfff1c)));
  /* 10cd2398 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd239b jge 0x10cd2432 */
  if ((C.sf==C.of)) goto L_10cd2432;
  /* 10cd23a1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10cd23a6 push 0x10cf936c */
  push32((uint32_t)(0x10cf936cu));
  /* 10cd23ab push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd23ad push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10cd23b2 call 0x10cd2690 */
  push32(0x10cd23b7u); f_10cd2690();
  /* 10cd23b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd23ba mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10cd23bd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd23c1 jne 0x10cd23ce */
  if (!C.zf) goto L_10cd23ce;
  /* 10cd23c3 mov edx, dword ptr [0x10cfff1c] */
  EDX = (r32((uint32_t)(0x10cfff1c)));
  /* 10cd23c9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10cd23cc jmp 0x10cd2432 */
  goto L_10cd2432;
L_10cd23ce:;
  /* 10cd23ce mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10cd23d1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd23d4 mov dword ptr [eax*4 + 0x10cffde0], ecx */
  w32((uint32_t)(EAX*4 + 0x10cffde0), (ECX));
  /* 10cd23db mov edx, dword ptr [0x10cfff1c] */
  EDX = (r32((uint32_t)(0x10cfff1c)));
  /* 10cd23e1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd23e4 mov dword ptr [0x10cfff1c], edx */
  w32((uint32_t)(0x10cfff1c), (EDX));
  /* 10cd23ea jmp 0x10cd23f5 */
  goto L_10cd23f5;
L_10cd23ec:;
  /* 10cd23ec mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd23ef add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd23f2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10cd23f5:;
  /* 10cd23f5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10cd23f8 mov edx, dword ptr [ecx*4 + 0x10cffde0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cffde0)));
  /* 10cd23ff add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2405 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2408 jae 0x10cd242d */
  if (!C.cf) goto L_10cd242d;
  /* 10cd240a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd240d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10cd2411 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd2414 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10cd241a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd241d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10cd2421 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd2424 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10cd242b jmp 0x10cd23ec */
  goto L_10cd23ec;
L_10cd242d:;
  /* 10cd242d jmp 0x10cd2389 */
  goto L_10cd2389;
L_10cd2432:;
  /* 10cd2432 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10cd2439 jmp 0x10cd2456 */
  goto L_10cd2456;
L_10cd243b:;
  /* 10cd243b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10cd243e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2441 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10cd2444 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd2447 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd244a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd244d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10cd2450 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2453 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10cd2456:;
  /* 10cd2456 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10cd2459 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd245c jge 0x10cd24c5 */
  if ((C.sf==C.of)) goto L_10cd24c5;
  /* 10cd245e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10cd2461 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2464 je 0x10cd24c0 */
  if (C.zf) goto L_10cd24c0;
  /* 10cd2466 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd2469 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cd246c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd246f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd2471 je 0x10cd24c0 */
  if (C.zf) goto L_10cd24c0;
  /* 10cd2473 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd2476 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10cd2479 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd247c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd247e jne 0x10cd2490 */
  if (!C.zf) goto L_10cd2490;
  /* 10cd2480 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10cd2483 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd2485 push edx */
  push32((uint32_t)(EDX));
  /* 10cd2486 call dword ptr [0x10d0027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0027c))), 0x10cd248cu);
  /* 10cd248c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd248e je 0x10cd24c0 */
  if (C.zf) goto L_10cd24c0;
L_10cd2490:;
  /* 10cd2490 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10cd2493 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10cd2496 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10cd2499 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd249c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd249f mov edx, dword ptr [eax*4 + 0x10cffde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10cffde0)));
  /* 10cd24a6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd24a8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10cd24ab mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd24ae mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10cd24b1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd24b3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10cd24b5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd24b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd24bb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10cd24bd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10cd24c0:;
  /* 10cd24c0 jmp 0x10cd243b */
  goto L_10cd243b;
L_10cd24c5:;
  /* 10cd24c5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10cd24cc jmp 0x10cd24d7 */
  goto L_10cd24d7;
L_10cd24ce:;
  /* 10cd24ce mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10cd24d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd24d4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10cd24d7:;
  /* 10cd24d7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd24db jge 0x10cd25b4 */
  if ((C.sf==C.of)) goto L_10cd25b4;
  /* 10cd24e1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10cd24e4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd24e7 mov edx, dword ptr [0x10cffde0] */
  EDX = (r32((uint32_t)(0x10cffde0)));
  /* 10cd24ed add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd24ef mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10cd24f2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd24f5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd24f8 jne 0x10cd25a0 */
  if (!C.zf) goto L_10cd25a0;
  /* 10cd24fe mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd2501 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10cd2505 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2509 jne 0x10cd2514 */
  if (!C.zf) goto L_10cd2514;
  /* 10cd250b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10cd2512 jmp 0x10cd2524 */
  goto L_10cd2524;
L_10cd2514:;
  /* 10cd2514 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10cd2517 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd251a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10cd251c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd251e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2521 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10cd2524:;
  /* 10cd2524 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10cd2527 push eax */
  push32((uint32_t)(EAX));
  /* 10cd2528 call dword ptr [0x10d0022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0022c))), 0x10cd252eu);
  /* 10cd252e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10cd2531 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2535 je 0x10cd258f */
  if (C.zf) goto L_10cd258f;
  /* 10cd2537 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10cd253a push ecx */
  push32((uint32_t)(ECX));
  /* 10cd253b call dword ptr [0x10d0027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0027c))), 0x10cd2541u);
  /* 10cd2541 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10cd2544 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2548 je 0x10cd258f */
  if (C.zf) goto L_10cd258f;
  /* 10cd254a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd254d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10cd2550 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10cd2552 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10cd2555 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd255b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd255e jne 0x10cd2570 */
  if (!C.zf) goto L_10cd2570;
  /* 10cd2560 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd2563 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10cd2566 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10cd2568 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd256b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10cd256e jmp 0x10cd258d */
  goto L_10cd258d;
L_10cd2570:;
  /* 10cd2570 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10cd2573 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10cd2579 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd257c jne 0x10cd258d */
  if (!C.zf) goto L_10cd258d;
  /* 10cd257e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd2581 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10cd2584 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10cd2587 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd258a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10cd258d:;
  /* 10cd258d jmp 0x10cd259e */
  goto L_10cd259e;
L_10cd258f:;
  /* 10cd258f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd2592 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10cd2595 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10cd2598 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd259b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10cd259e:;
  /* 10cd259e jmp 0x10cd25af */
  goto L_10cd25af;
L_10cd25a0:;
  /* 10cd25a0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd25a3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10cd25a6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10cd25a9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd25ac mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10cd25af:;
  /* 10cd25af jmp 0x10cd24ce */
  goto L_10cd24ce;
L_10cd25b4:;
  /* 10cd25b4 mov eax, dword ptr [0x10cfff1c] */
  EAX = (r32((uint32_t)(0x10cfff1c)));
  /* 10cd25b9 push eax */
  push32((uint32_t)(EAX));
  /* 10cd25ba call dword ptr [0x10d00278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00278))), 0x10cd25c0u);
  /* 10cd25c0 mov esp, ebp */
  ESP = (EBP);
  /* 10cd25c2 pop ebp */
  EBP = (pop32());
  /* 10cd25c3 ret  */
  ESPCHK(0x10cd22a0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10cd25d0 (155 bytes, 45 insns) */
void f_10cd25d0(void) {
  FTRACE(0x10cd25d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd25d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd25d1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd25d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd25d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10cd25dd jmp 0x10cd25e8 */
  goto L_10cd25e8;
L_10cd25df:;
  /* 10cd25df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd25e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd25e5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10cd25e8:;
  /* 10cd25e8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd25ec jge 0x10cd2667 */
  if ((C.sf==C.of)) goto L_10cd2667;
  /* 10cd25ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd25f1 cmp dword ptr [ecx*4 + 0x10cffde0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10cffde0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd25f9 je 0x10cd2662 */
  if (C.zf) goto L_10cd2662;
  /* 10cd25fb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd25fe mov eax, dword ptr [edx*4 + 0x10cffde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10cffde0)));
  /* 10cd2605 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd2608 jmp 0x10cd2613 */
  goto L_10cd2613;
L_10cd260a:;
  /* 10cd260a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd260d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2610 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10cd2613:;
  /* 10cd2613 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd2616 mov eax, dword ptr [edx*4 + 0x10cffde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10cffde0)));
  /* 10cd261d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2622 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2625 jae 0x10cd263f */
  if (!C.cf) goto L_10cd263f;
  /* 10cd2627 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd262a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd262e je 0x10cd263d */
  if (C.zf) goto L_10cd263d;
  /* 10cd2630 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd2633 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2636 push edx */
  push32((uint32_t)(EDX));
  /* 10cd2637 call dword ptr [0x10d00284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00284))), 0x10cd263du);
L_10cd263d:;
  /* 10cd263d jmp 0x10cd260a */
  goto L_10cd260a;
L_10cd263f:;
  /* 10cd263f push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd2641 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd2644 mov ecx, dword ptr [eax*4 + 0x10cffde0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10cffde0)));
  /* 10cd264b push ecx */
  push32((uint32_t)(ECX));
  /* 10cd264c call 0x10cd3120 */
  push32(0x10cd2651u); f_10cd3120();
  /* 10cd2651 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2654 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd2657 mov dword ptr [edx*4 + 0x10cffde0], 0 */
  w32((uint32_t)(EDX*4 + 0x10cffde0), (0x0u));
L_10cd2662:;
  /* 10cd2662 jmp 0x10cd25df */
  goto L_10cd25df;
L_10cd2667:;
  /* 10cd2667 mov esp, ebp */
  ESP = (EBP);
  /* 10cd2669 pop ebp */
  EBP = (pop32());
  /* 10cd266a ret  */
  ESPCHK(0x10cd25d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002670 @ 0x10cd2670 (29 bytes, 13 insns) */
void f_10cd2670(void) {
  FTRACE(0x10cd2670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd2670 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd2671 mov ebp, esp */
  EBP = (ESP);
  /* 10cd2673 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2675 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2677 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd2679 mov eax, dword ptr [0x10cfe5e8] */
  EAX = (r32((uint32_t)(0x10cfe5e8)));
  /* 10cd267e push eax */
  push32((uint32_t)(EAX));
  /* 10cd267f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd2682 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd2683 call 0x10cd26e0 */
  push32(0x10cd2688u); f_10cd26e0();
  /* 10cd2688 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd268b pop ebp */
  EBP = (pop32());
  /* 10cd268c ret  */
  ESPCHK(0x10cd2670u, _esp0);
  ESP += 4; return;
}

/* FUN_10002690 @ 0x10cd2690 (35 bytes, 16 insns) */
void f_10cd2690(void) {
  FTRACE(0x10cd2690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd2690 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd2691 mov ebp, esp */
  EBP = (ESP);
  /* 10cd2693 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd2696 push eax */
  push32((uint32_t)(EAX));
  /* 10cd2697 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd269a push ecx */
  push32((uint32_t)(ECX));
  /* 10cd269b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd269e push edx */
  push32((uint32_t)(EDX));
  /* 10cd269f mov eax, dword ptr [0x10cfe5e8] */
  EAX = (r32((uint32_t)(0x10cfe5e8)));
  /* 10cd26a4 push eax */
  push32((uint32_t)(EAX));
  /* 10cd26a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd26a8 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd26a9 call 0x10cd26e0 */
  push32(0x10cd26aeu); f_10cd26e0();
  /* 10cd26ae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd26b1 pop ebp */
  EBP = (pop32());
  /* 10cd26b2 ret  */
  ESPCHK(0x10cd2690u, _esp0);
  ESP += 4; return;
}

/* FUN_100026c0 @ 0x10cd26c0 (27 bytes, 13 insns) */
void f_10cd26c0(void) {
  FTRACE(0x10cd26c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd26c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd26c1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd26c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd26c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd26c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd26c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd26cc push eax */
  push32((uint32_t)(EAX));
  /* 10cd26cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd26d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd26d1 call 0x10cd26e0 */
  push32(0x10cd26d6u); f_10cd26e0();
  /* 10cd26d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd26d9 pop ebp */
  EBP = (pop32());
  /* 10cd26da ret  */
  ESPCHK(0x10cd26c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026e0 @ 0x10cd26e0 (94 bytes, 38 insns) */
void f_10cd26e0(void) {
  FTRACE(0x10cd26e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd26e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd26e1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd26e3 push ecx */
  push32((uint32_t)(ECX));
L_10cd26e4:;
  /* 10cd26e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd26e6 call 0x10cd6090 */
  push32(0x10cd26ebu); f_10cd6090();
  /* 10cd26eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd26ee mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd26f1 push eax */
  push32((uint32_t)(EAX));
  /* 10cd26f2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd26f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd26f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd26f9 push edx */
  push32((uint32_t)(EDX));
  /* 10cd26fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd26fd push eax */
  push32((uint32_t)(EAX));
  /* 10cd26fe call 0x10cd2760 */
  push32(0x10cd2703u); f_10cd2760();
  /* 10cd2703 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2706 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd2709 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd270b call 0x10cd6130 */
  push32(0x10cd2710u); f_10cd6130();
  /* 10cd2710 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2713 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2717 jne 0x10cd271f */
  if (!C.zf) goto L_10cd271f;
  /* 10cd2719 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd271d jne 0x10cd2724 */
  if (!C.zf) goto L_10cd2724;
L_10cd271f:;
  /* 10cd271f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd2722 jmp 0x10cd273a */
  goto L_10cd273a;
L_10cd2724:;
  /* 10cd2724 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd2727 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd2728 call 0x10cd63d0 */
  push32(0x10cd272du); f_10cd63d0();
  /* 10cd272d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2730 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd2732 jne 0x10cd2738 */
  if (!C.zf) goto L_10cd2738;
  /* 10cd2734 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd2736 jmp 0x10cd273a */
  goto L_10cd273a;
L_10cd2738:;
  /* 10cd2738 jmp 0x10cd26e4 */
  goto L_10cd26e4;
L_10cd273a:;
  /* 10cd273a mov esp, ebp */
  ESP = (EBP);
  /* 10cd273c pop ebp */
  EBP = (pop32());
  /* 10cd273d ret  */
  ESPCHK(0x10cd26e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x10cd2740 (23 bytes, 11 insns) */
void f_10cd2740(void) {
  FTRACE(0x10cd2740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd2740 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd2741 mov ebp, esp */
  EBP = (ESP);
  /* 10cd2743 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2745 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2747 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd2749 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd274c push eax */
  push32((uint32_t)(EAX));
  /* 10cd274d call 0x10cd2760 */
  push32(0x10cd2752u); f_10cd2760();
  /* 10cd2752 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2755 pop ebp */
  EBP = (pop32());
  /* 10cd2756 ret  */
  ESPCHK(0x10cd2740u, _esp0);
  ESP += 4; return;
}

/* FUN_10002760 @ 0x10cd2760 (787 bytes, 254 insns) */
void f_10cd2760(void) {
  FTRACE(0x10cd2760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd2760 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd2761 mov ebp, esp */
  EBP = (ESP);
  /* 10cd2763 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd2766 push ebx */
  push32((uint32_t)(EBX));
  /* 10cd2767 push esi */
  push32((uint32_t)(ESI));
  /* 10cd2768 push edi */
  push32((uint32_t)(EDI));
  /* 10cd2769 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10cd2770 mov eax, dword ptr [0x10cfca84] */
  EAX = (r32((uint32_t)(0x10cfca84)));
  /* 10cd2775 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd2778 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd277a je 0x10cd27ac */
  if (C.zf) goto L_10cd27ac;
L_10cd277c:;
  /* 10cd277c call 0x10cd3830 */
  push32(0x10cd2781u); f_10cd3830();
  /* 10cd2781 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd2783 jne 0x10cd27a6 */
  if (!C.zf) goto L_10cd27a6;
  /* 10cd2785 push 0x10cf9460 */
  push32((uint32_t)(0x10cf9460u));
  /* 10cd278a push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd278c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10cd2791 push 0x10cf9454 */
  push32((uint32_t)(0x10cf9454u));
  /* 10cd2796 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd2798 call 0x10cd1750 */
  push32(0x10cd279du); f_10cd1750();
  /* 10cd279d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd27a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd27a3 jne 0x10cd27a6 */
  if (!C.zf) goto L_10cd27a6;
  /* 10cd27a5 int3  */
  x86_unimpl("int3 @ 0x10cd27a5");
L_10cd27a6:;
  /* 10cd27a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd27a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd27aa jne 0x10cd277c */
  if (!C.zf) goto L_10cd277c;
L_10cd27ac:;
  /* 10cd27ac mov edx, dword ptr [0x10cfca88] */
  EDX = (r32((uint32_t)(0x10cfca88)));
  /* 10cd27b2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10cd27b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd27b8 cmp eax, dword ptr [0x10cfca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cfca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd27be jne 0x10cd27c1 */
  if (!C.zf) goto L_10cd27c1;
  /* 10cd27c0 int3  */
  x86_unimpl("int3 @ 0x10cd27c0");
L_10cd27c1:;
  /* 10cd27c1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd27c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd27c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd27c8 push edx */
  push32((uint32_t)(EDX));
  /* 10cd27c9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd27cc push eax */
  push32((uint32_t)(EAX));
  /* 10cd27cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd27d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd27d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd27d4 push edx */
  push32((uint32_t)(EDX));
  /* 10cd27d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd27d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd27d9 call dword ptr [0x10cfcc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfcc90))), 0x10cd27dfu);
  /* 10cd27df add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd27e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd27e4 jne 0x10cd2844 */
  if (!C.zf) goto L_10cd2844;
  /* 10cd27e6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd27ea je 0x10cd2817 */
  if (C.zf) goto L_10cd2817;
L_10cd27ec:;
  /* 10cd27ec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd27ef push eax */
  push32((uint32_t)(EAX));
  /* 10cd27f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd27f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd27f4 push 0x10cf941c */
  push32((uint32_t)(0x10cf941cu));
  /* 10cd27f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd27fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd27fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd27ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2801 call 0x10cd1750 */
  push32(0x10cd2806u); f_10cd1750();
  /* 10cd2806 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2809 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd280c jne 0x10cd280f */
  if (!C.zf) goto L_10cd280f;
  /* 10cd280e int3  */
  x86_unimpl("int3 @ 0x10cd280e");
L_10cd280f:;
  /* 10cd280f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd2811 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd2813 jne 0x10cd27ec */
  if (!C.zf) goto L_10cd27ec;
  /* 10cd2815 jmp 0x10cd283d */
  goto L_10cd283d;
L_10cd2817:;
  /* 10cd2817 push 0x10cf93f8 */
  push32((uint32_t)(0x10cf93f8u));
  /* 10cd281c push 0x10cf93f4 */
  push32((uint32_t)(0x10cf93f4u));
  /* 10cd2821 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2823 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2825 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2827 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2829 call 0x10cd1750 */
  push32(0x10cd282eu); f_10cd1750();
  /* 10cd282e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2831 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2834 jne 0x10cd2837 */
  if (!C.zf) goto L_10cd2837;
  /* 10cd2836 int3  */
  x86_unimpl("int3 @ 0x10cd2836");
L_10cd2837:;
  /* 10cd2837 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd2839 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd283b jne 0x10cd2817 */
  if (!C.zf) goto L_10cd2817;
L_10cd283d:;
  /* 10cd283d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd283f jmp 0x10cd2a6c */
  goto L_10cd2a6c;
L_10cd2844:;
  /* 10cd2844 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd2847 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd284d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2850 je 0x10cd2866 */
  if (C.zf) goto L_10cd2866;
  /* 10cd2852 mov edx, dword ptr [0x10cfca84] */
  EDX = (r32((uint32_t)(0x10cfca84)));
  /* 10cd2858 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd285b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd285d jne 0x10cd2866 */
  if (!C.zf) goto L_10cd2866;
  /* 10cd285f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10cd2866:;
  /* 10cd2866 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd286a ja 0x10cd2877 */
  if ((!C.cf&&!C.zf)) goto L_10cd2877;
  /* 10cd286c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd286f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2872 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2875 jbe 0x10cd28a3 */
  if ((C.cf||C.zf)) goto L_10cd28a3;
L_10cd2877:;
  /* 10cd2877 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd287a push ecx */
  push32((uint32_t)(ECX));
  /* 10cd287b push 0x10cf93d0 */
  push32((uint32_t)(0x10cf93d0u));
  /* 10cd2880 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2882 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2884 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2886 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd2888 call 0x10cd1750 */
  push32(0x10cd288du); f_10cd1750();
  /* 10cd288d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2890 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2893 jne 0x10cd2896 */
  if (!C.zf) goto L_10cd2896;
  /* 10cd2895 int3  */
  x86_unimpl("int3 @ 0x10cd2895");
L_10cd2896:;
  /* 10cd2896 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd2898 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd289a jne 0x10cd2877 */
  if (!C.zf) goto L_10cd2877;
  /* 10cd289c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd289e jmp 0x10cd2a6c */
  goto L_10cd2a6c;
L_10cd28a3:;
  /* 10cd28a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd28a6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd28ab cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd28ae je 0x10cd28f0 */
  if (C.zf) goto L_10cd28f0;
  /* 10cd28b0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd28b4 je 0x10cd28f0 */
  if (C.zf) goto L_10cd28f0;
  /* 10cd28b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd28b9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd28bf cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd28c2 je 0x10cd28f0 */
  if (C.zf) goto L_10cd28f0;
  /* 10cd28c4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd28c8 je 0x10cd28f0 */
  if (C.zf) goto L_10cd28f0;
L_10cd28ca:;
  /* 10cd28ca push 0x10cf939c */
  push32((uint32_t)(0x10cf939cu));
  /* 10cd28cf push 0x10cf93f4 */
  push32((uint32_t)(0x10cf93f4u));
  /* 10cd28d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd28d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd28d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd28da push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd28dc call 0x10cd1750 */
  push32(0x10cd28e1u); f_10cd1750();
  /* 10cd28e1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd28e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd28e7 jne 0x10cd28ea */
  if (!C.zf) goto L_10cd28ea;
  /* 10cd28e9 int3  */
  x86_unimpl("int3 @ 0x10cd28e9");
L_10cd28ea:;
  /* 10cd28ea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd28ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd28ee jne 0x10cd28ca */
  if (!C.zf) goto L_10cd28ca;
L_10cd28f0:;
  /* 10cd28f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd28f3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd28f6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10cd28f9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd28fc push ecx */
  push32((uint32_t)(ECX));
  /* 10cd28fd call 0x10cd64e0 */
  push32(0x10cd2902u); f_10cd64e0();
  /* 10cd2902 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2905 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd2908 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd290c jne 0x10cd2915 */
  if (!C.zf) goto L_10cd2915;
  /* 10cd290e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd2910 jmp 0x10cd2a6c */
  goto L_10cd2a6c;
L_10cd2915:;
  /* 10cd2915 mov edx, dword ptr [0x10cfca88] */
  EDX = (r32((uint32_t)(0x10cfca88)));
  /* 10cd291b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd291e mov dword ptr [0x10cfca88], edx */
  w32((uint32_t)(0x10cfca88), (EDX));
  /* 10cd2924 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2928 je 0x10cd2973 */
  if (C.zf) goto L_10cd2973;
  /* 10cd292a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd292d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10cd2933 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd2936 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10cd293d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd2940 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10cd2947 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd294a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10cd2951 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd2954 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd2957 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10cd295a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd295d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10cd2964 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd2967 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10cd296e jmp 0x10cd2a13 */
  goto L_10cd2a13;
L_10cd2973:;
  /* 10cd2973 mov edx, dword ptr [0x10cfe448] */
  EDX = (r32((uint32_t)(0x10cfe448)));
  /* 10cd2979 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd297c mov dword ptr [0x10cfe448], edx */
  w32((uint32_t)(0x10cfe448), (EDX));
  /* 10cd2982 mov eax, dword ptr [0x10cfe450] */
  EAX = (r32((uint32_t)(0x10cfe450)));
  /* 10cd2987 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd298a mov dword ptr [0x10cfe450], eax */
  w32((uint32_t)(0x10cfe450), (EAX));
  /* 10cd298f mov ecx, dword ptr [0x10cfe450] */
  ECX = (r32((uint32_t)(0x10cfe450)));
  /* 10cd2995 cmp ecx, dword ptr [0x10cfe454] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cfe454))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd299b jbe 0x10cd29a9 */
  if ((C.cf||C.zf)) goto L_10cd29a9;
  /* 10cd299d mov edx, dword ptr [0x10cfe450] */
  EDX = (r32((uint32_t)(0x10cfe450)));
  /* 10cd29a3 mov dword ptr [0x10cfe454], edx */
  w32((uint32_t)(0x10cfe454), (EDX));
L_10cd29a9:;
  /* 10cd29a9 cmp dword ptr [0x10cfe44c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe44c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd29b0 je 0x10cd29bf */
  if (C.zf) goto L_10cd29bf;
  /* 10cd29b2 mov eax, dword ptr [0x10cfe44c] */
  EAX = (r32((uint32_t)(0x10cfe44c)));
  /* 10cd29b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd29ba mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10cd29bd jmp 0x10cd29c8 */
  goto L_10cd29c8;
L_10cd29bf:;
  /* 10cd29bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd29c2 mov dword ptr [0x10cfe444], edx */
  w32((uint32_t)(0x10cfe444), (EDX));
L_10cd29c8:;
  /* 10cd29c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd29cb mov ecx, dword ptr [0x10cfe44c] */
  ECX = (r32((uint32_t)(0x10cfe44c)));
  /* 10cd29d1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10cd29d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd29d6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10cd29dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd29e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd29e3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10cd29e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd29e9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd29ec mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10cd29ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd29f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd29f5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10cd29f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd29fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd29fe mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10cd2a01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd2a04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd2a07 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10cd2a0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd2a0d mov dword ptr [0x10cfe44c], ecx */
  w32((uint32_t)(0x10cfe44c), (ECX));
L_10cd2a13:;
  /* 10cd2a13 push 4 */
  push32((uint32_t)(0x4u));
  /* 10cd2a15 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd2a17 mov dl, byte ptr [0x10cfca90] */
  DL = (r8((uint32_t)(0x10cfca90)));
  /* 10cd2a1d push edx */
  push32((uint32_t)(EDX));
  /* 10cd2a1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd2a21 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2a24 push eax */
  push32((uint32_t)(EAX));
  /* 10cd2a25 call 0x10cd6400 */
  push32(0x10cd2a2au); f_10cd6400();
  /* 10cd2a2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2a2d push 4 */
  push32((uint32_t)(0x4u));
  /* 10cd2a2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd2a31 mov cl, byte ptr [0x10cfca90] */
  CL = (r8((uint32_t)(0x10cfca90)));
  /* 10cd2a37 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd2a38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd2a3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd2a3e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10cd2a42 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd2a43 call 0x10cd6400 */
  push32(0x10cd2a48u); f_10cd6400();
  /* 10cd2a48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2a4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd2a4e push edx */
  push32((uint32_t)(EDX));
  /* 10cd2a4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd2a51 mov al, byte ptr [0x10cfca92] */
  AL = (r8((uint32_t)(0x10cfca92)));
  /* 10cd2a56 push eax */
  push32((uint32_t)(EAX));
  /* 10cd2a57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd2a5a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2a5d push ecx */
  push32((uint32_t)(ECX));
  /* 10cd2a5e call 0x10cd6400 */
  push32(0x10cd2a63u); f_10cd6400();
  /* 10cd2a63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2a66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd2a69 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10cd2a6c:;
  /* 10cd2a6c pop edi */
  EDI = (pop32());
  /* 10cd2a6d pop esi */
  ESI = (pop32());
  /* 10cd2a6e pop ebx */
  EBX = (pop32());
  /* 10cd2a6f mov esp, ebp */
  ESP = (EBP);
  /* 10cd2a71 pop ebp */
  EBP = (pop32());
  /* 10cd2a72 ret  */
  ESPCHK(0x10cd2760u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a80 @ 0x10cd2a80 (27 bytes, 13 insns) */
void f_10cd2a80(void) {
  FTRACE(0x10cd2a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd2a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd2a81 mov ebp, esp */
  EBP = (ESP);
  /* 10cd2a83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2a85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2a87 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd2a89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd2a8c push eax */
  push32((uint32_t)(EAX));
  /* 10cd2a8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd2a90 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd2a91 call 0x10cd2aa0 */
  push32(0x10cd2a96u); f_10cd2aa0();
  /* 10cd2a96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2a99 pop ebp */
  EBP = (pop32());
  /* 10cd2a9a ret  */
  ESPCHK(0x10cd2a80u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10cd2aa0 (96 bytes, 37 insns) */
void f_10cd2aa0(void) {
  FTRACE(0x10cd2aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd2aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd2aa1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd2aa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd2aa6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd2aa9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd2aad mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10cd2ab0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd2ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd2ab4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd2ab7 push edx */
  push32((uint32_t)(EDX));
  /* 10cd2ab8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd2abb push eax */
  push32((uint32_t)(EAX));
  /* 10cd2abc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd2abf push ecx */
  push32((uint32_t)(ECX));
  /* 10cd2ac0 call 0x10cd2690 */
  push32(0x10cd2ac5u); f_10cd2690();
  /* 10cd2ac5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2ac8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cd2acb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2acf je 0x10cd2af9 */
  if (C.zf) goto L_10cd2af9;
  /* 10cd2ad1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd2ad4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10cd2ad7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd2ada add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2add mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cd2ae0:;
  /* 10cd2ae0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd2ae3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2ae6 jae 0x10cd2af9 */
  if (!C.cf) goto L_10cd2af9;
  /* 10cd2ae8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd2aeb mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10cd2aee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd2af1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2af4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cd2af7 jmp 0x10cd2ae0 */
  goto L_10cd2ae0;
L_10cd2af9:;
  /* 10cd2af9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd2afc mov esp, ebp */
  ESP = (EBP);
  /* 10cd2afe pop ebp */
  EBP = (pop32());
  /* 10cd2aff ret  */
  ESPCHK(0x10cd2aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b00 @ 0x10cd2b00 (27 bytes, 13 insns) */
void f_10cd2b00(void) {
  FTRACE(0x10cd2b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd2b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd2b01 mov ebp, esp */
  EBP = (ESP);
  /* 10cd2b03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2b05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2b07 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd2b09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd2b0c push eax */
  push32((uint32_t)(EAX));
  /* 10cd2b0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd2b10 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd2b11 call 0x10cd2b20 */
  push32(0x10cd2b16u); f_10cd2b20();
  /* 10cd2b16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2b19 pop ebp */
  EBP = (pop32());
  /* 10cd2b1a ret  */
  ESPCHK(0x10cd2b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b20 @ 0x10cd2b20 (64 bytes, 27 insns) */
void f_10cd2b20(void) {
  FTRACE(0x10cd2b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd2b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd2b21 mov ebp, esp */
  EBP = (ESP);
  /* 10cd2b23 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd2b24 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd2b26 call 0x10cd6090 */
  push32(0x10cd2b2bu); f_10cd6090();
  /* 10cd2b2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2b2e push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd2b30 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd2b33 push eax */
  push32((uint32_t)(EAX));
  /* 10cd2b34 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd2b37 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd2b38 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd2b3b push edx */
  push32((uint32_t)(EDX));
  /* 10cd2b3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd2b3f push eax */
  push32((uint32_t)(EAX));
  /* 10cd2b40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd2b43 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd2b44 call 0x10cd2b60 */
  push32(0x10cd2b49u); f_10cd2b60();
  /* 10cd2b49 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2b4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd2b4f push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd2b51 call 0x10cd6130 */
  push32(0x10cd2b56u); f_10cd6130();
  /* 10cd2b56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2b59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd2b5c mov esp, ebp */
  ESP = (EBP);
  /* 10cd2b5e pop ebp */
  EBP = (pop32());
  /* 10cd2b5f ret  */
  ESPCHK(0x10cd2b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b60 @ 0x10cd2b60 (1297 bytes, 431 insns) */
void f_10cd2b60(void) {
  FTRACE(0x10cd2b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd2b60 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd2b61 mov ebp, esp */
  EBP = (ESP);
  /* 10cd2b63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd2b66 push ebx */
  push32((uint32_t)(EBX));
  /* 10cd2b67 push esi */
  push32((uint32_t)(ESI));
  /* 10cd2b68 push edi */
  push32((uint32_t)(EDI));
  /* 10cd2b69 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10cd2b70 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2b74 jne 0x10cd2b93 */
  if (!C.zf) goto L_10cd2b93;
  /* 10cd2b76 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd2b79 push eax */
  push32((uint32_t)(EAX));
  /* 10cd2b7a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd2b7d push ecx */
  push32((uint32_t)(ECX));
  /* 10cd2b7e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd2b81 push edx */
  push32((uint32_t)(EDX));
  /* 10cd2b82 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd2b85 push eax */
  push32((uint32_t)(EAX));
  /* 10cd2b86 call 0x10cd2690 */
  push32(0x10cd2b8bu); f_10cd2690();
  /* 10cd2b8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2b8e jmp 0x10cd306a */
  goto L_10cd306a;
L_10cd2b93:;
  /* 10cd2b93 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2b97 je 0x10cd2bb6 */
  if (C.zf) goto L_10cd2bb6;
  /* 10cd2b99 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2b9d jne 0x10cd2bb6 */
  if (!C.zf) goto L_10cd2bb6;
  /* 10cd2b9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd2ba2 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd2ba3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd2ba6 push edx */
  push32((uint32_t)(EDX));
  /* 10cd2ba7 call 0x10cd3120 */
  push32(0x10cd2bacu); f_10cd3120();
  /* 10cd2bac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2baf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd2bb1 jmp 0x10cd306a */
  goto L_10cd306a;
L_10cd2bb6:;
  /* 10cd2bb6 mov eax, dword ptr [0x10cfca84] */
  EAX = (r32((uint32_t)(0x10cfca84)));
  /* 10cd2bbb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd2bbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd2bc0 je 0x10cd2bf2 */
  if (C.zf) goto L_10cd2bf2;
L_10cd2bc2:;
  /* 10cd2bc2 call 0x10cd3830 */
  push32(0x10cd2bc7u); f_10cd3830();
  /* 10cd2bc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd2bc9 jne 0x10cd2bec */
  if (!C.zf) goto L_10cd2bec;
  /* 10cd2bcb push 0x10cf9460 */
  push32((uint32_t)(0x10cf9460u));
  /* 10cd2bd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2bd2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10cd2bd7 push 0x10cf9454 */
  push32((uint32_t)(0x10cf9454u));
  /* 10cd2bdc push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd2bde call 0x10cd1750 */
  push32(0x10cd2be3u); f_10cd1750();
  /* 10cd2be3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2be6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2be9 jne 0x10cd2bec */
  if (!C.zf) goto L_10cd2bec;
  /* 10cd2beb int3  */
  x86_unimpl("int3 @ 0x10cd2beb");
L_10cd2bec:;
  /* 10cd2bec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd2bee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd2bf0 jne 0x10cd2bc2 */
  if (!C.zf) goto L_10cd2bc2;
L_10cd2bf2:;
  /* 10cd2bf2 mov edx, dword ptr [0x10cfca88] */
  EDX = (r32((uint32_t)(0x10cfca88)));
  /* 10cd2bf8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10cd2bfb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd2bfe cmp eax, dword ptr [0x10cfca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cfca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2c04 jne 0x10cd2c07 */
  if (!C.zf) goto L_10cd2c07;
  /* 10cd2c06 int3  */
  x86_unimpl("int3 @ 0x10cd2c06");
L_10cd2c07:;
  /* 10cd2c07 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd2c0a push ecx */
  push32((uint32_t)(ECX));
  /* 10cd2c0b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd2c0e push edx */
  push32((uint32_t)(EDX));
  /* 10cd2c0f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd2c12 push eax */
  push32((uint32_t)(EAX));
  /* 10cd2c13 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd2c16 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd2c17 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd2c1a push edx */
  push32((uint32_t)(EDX));
  /* 10cd2c1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd2c1e push eax */
  push32((uint32_t)(EAX));
  /* 10cd2c1f push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd2c21 call dword ptr [0x10cfcc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfcc90))), 0x10cd2c27u);
  /* 10cd2c27 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2c2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd2c2c jne 0x10cd2c8c */
  if (!C.zf) goto L_10cd2c8c;
  /* 10cd2c2e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2c32 je 0x10cd2c5f */
  if (C.zf) goto L_10cd2c5f;
L_10cd2c34:;
  /* 10cd2c34 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd2c37 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd2c38 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd2c3b push edx */
  push32((uint32_t)(EDX));
  /* 10cd2c3c push 0x10cf95dc */
  push32((uint32_t)(0x10cf95dcu));
  /* 10cd2c41 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2c47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2c49 call 0x10cd1750 */
  push32(0x10cd2c4eu); f_10cd1750();
  /* 10cd2c4e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2c51 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2c54 jne 0x10cd2c57 */
  if (!C.zf) goto L_10cd2c57;
  /* 10cd2c56 int3  */
  x86_unimpl("int3 @ 0x10cd2c56");
L_10cd2c57:;
  /* 10cd2c57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd2c59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd2c5b jne 0x10cd2c34 */
  if (!C.zf) goto L_10cd2c34;
  /* 10cd2c5d jmp 0x10cd2c85 */
  goto L_10cd2c85;
L_10cd2c5f:;
  /* 10cd2c5f push 0x10cf95b8 */
  push32((uint32_t)(0x10cf95b8u));
  /* 10cd2c64 push 0x10cf93f4 */
  push32((uint32_t)(0x10cf93f4u));
  /* 10cd2c69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2c6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2c6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2c71 call 0x10cd1750 */
  push32(0x10cd2c76u); f_10cd1750();
  /* 10cd2c76 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2c79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2c7c jne 0x10cd2c7f */
  if (!C.zf) goto L_10cd2c7f;
  /* 10cd2c7e int3  */
  x86_unimpl("int3 @ 0x10cd2c7e");
L_10cd2c7f:;
  /* 10cd2c7f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd2c81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd2c83 jne 0x10cd2c5f */
  if (!C.zf) goto L_10cd2c5f;
L_10cd2c85:;
  /* 10cd2c85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd2c87 jmp 0x10cd306a */
  goto L_10cd306a;
L_10cd2c8c:;
  /* 10cd2c8c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2c90 jbe 0x10cd2cbe */
  if ((C.cf||C.zf)) goto L_10cd2cbe;
L_10cd2c92:;
  /* 10cd2c92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd2c95 push edx */
  push32((uint32_t)(EDX));
  /* 10cd2c96 push 0x10cf9588 */
  push32((uint32_t)(0x10cf9588u));
  /* 10cd2c9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2c9d push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2c9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2ca1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd2ca3 call 0x10cd1750 */
  push32(0x10cd2ca8u); f_10cd1750();
  /* 10cd2ca8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2cab cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2cae jne 0x10cd2cb1 */
  if (!C.zf) goto L_10cd2cb1;
  /* 10cd2cb0 int3  */
  x86_unimpl("int3 @ 0x10cd2cb0");
L_10cd2cb1:;
  /* 10cd2cb1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd2cb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd2cb5 jne 0x10cd2c92 */
  if (!C.zf) goto L_10cd2c92;
  /* 10cd2cb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd2cb9 jmp 0x10cd306a */
  goto L_10cd306a;
L_10cd2cbe:;
  /* 10cd2cbe cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2cc2 je 0x10cd2d06 */
  if (C.zf) goto L_10cd2d06;
  /* 10cd2cc4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd2cc7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd2ccd cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2cd0 je 0x10cd2d06 */
  if (C.zf) goto L_10cd2d06;
  /* 10cd2cd2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd2cd5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10cd2cdb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2cde je 0x10cd2d06 */
  if (C.zf) goto L_10cd2d06;
L_10cd2ce0:;
  /* 10cd2ce0 push 0x10cf939c */
  push32((uint32_t)(0x10cf939cu));
  /* 10cd2ce5 push 0x10cf93f4 */
  push32((uint32_t)(0x10cf93f4u));
  /* 10cd2cea push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2cec push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2cee push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2cf0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd2cf2 call 0x10cd1750 */
  push32(0x10cd2cf7u); f_10cd1750();
  /* 10cd2cf7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2cfa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2cfd jne 0x10cd2d00 */
  if (!C.zf) goto L_10cd2d00;
  /* 10cd2cff int3  */
  x86_unimpl("int3 @ 0x10cd2cff");
L_10cd2d00:;
  /* 10cd2d00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd2d02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd2d04 jne 0x10cd2ce0 */
  if (!C.zf) goto L_10cd2ce0;
L_10cd2d06:;
  /* 10cd2d06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd2d09 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd2d0a call 0x10cd3c90 */
  push32(0x10cd2d0fu); f_10cd3c90();
  /* 10cd2d0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2d12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd2d14 jne 0x10cd2d37 */
  if (!C.zf) goto L_10cd2d37;
  /* 10cd2d16 push 0x10cf9564 */
  push32((uint32_t)(0x10cf9564u));
  /* 10cd2d1b push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2d1d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10cd2d22 push 0x10cf9454 */
  push32((uint32_t)(0x10cf9454u));
  /* 10cd2d27 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd2d29 call 0x10cd1750 */
  push32(0x10cd2d2eu); f_10cd1750();
  /* 10cd2d2e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2d31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2d34 jne 0x10cd2d37 */
  if (!C.zf) goto L_10cd2d37;
  /* 10cd2d36 int3  */
  x86_unimpl("int3 @ 0x10cd2d36");
L_10cd2d37:;
  /* 10cd2d37 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd2d39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd2d3b jne 0x10cd2d06 */
  if (!C.zf) goto L_10cd2d06;
  /* 10cd2d3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd2d40 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd2d43 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cd2d46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd2d49 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2d4d jne 0x10cd2d56 */
  if (!C.zf) goto L_10cd2d56;
  /* 10cd2d4f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10cd2d56:;
  /* 10cd2d56 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2d5a je 0x10cd2d9a */
  if (C.zf) goto L_10cd2d9a;
L_10cd2d5c:;
  /* 10cd2d5c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd2d5f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2d66 jne 0x10cd2d71 */
  if (!C.zf) goto L_10cd2d71;
  /* 10cd2d68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd2d6b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2d6f je 0x10cd2d92 */
  if (C.zf) goto L_10cd2d92;
L_10cd2d71:;
  /* 10cd2d71 push 0x10cf951c */
  push32((uint32_t)(0x10cf951cu));
  /* 10cd2d76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2d78 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10cd2d7d push 0x10cf9454 */
  push32((uint32_t)(0x10cf9454u));
  /* 10cd2d82 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd2d84 call 0x10cd1750 */
  push32(0x10cd2d89u); f_10cd1750();
  /* 10cd2d89 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2d8c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2d8f jne 0x10cd2d92 */
  if (!C.zf) goto L_10cd2d92;
  /* 10cd2d91 int3  */
  x86_unimpl("int3 @ 0x10cd2d91");
L_10cd2d92:;
  /* 10cd2d92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd2d94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd2d96 jne 0x10cd2d5c */
  if (!C.zf) goto L_10cd2d5c;
  /* 10cd2d98 jmp 0x10cd2dfe */
  goto L_10cd2dfe;
L_10cd2d9a:;
  /* 10cd2d9a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd2d9d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10cd2da0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd2da5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2da8 jne 0x10cd2dbf */
  if (!C.zf) goto L_10cd2dbf;
  /* 10cd2daa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd2dad and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd2db3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2db6 jne 0x10cd2dbf */
  if (!C.zf) goto L_10cd2dbf;
  /* 10cd2db8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_10cd2dbf:;
  /* 10cd2dbf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd2dc2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10cd2dc5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd2dca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd2dcd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd2dd3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2dd5 je 0x10cd2df8 */
  if (C.zf) goto L_10cd2df8;
  /* 10cd2dd7 push 0x10cf94e0 */
  push32((uint32_t)(0x10cf94e0u));
  /* 10cd2ddc push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2dde push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10cd2de3 push 0x10cf9454 */
  push32((uint32_t)(0x10cf9454u));
  /* 10cd2de8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd2dea call 0x10cd1750 */
  push32(0x10cd2defu); f_10cd1750();
  /* 10cd2def add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2df2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2df5 jne 0x10cd2df8 */
  if (!C.zf) goto L_10cd2df8;
  /* 10cd2df7 int3  */
  x86_unimpl("int3 @ 0x10cd2df7");
L_10cd2df8:;
  /* 10cd2df8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd2dfa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd2dfc jne 0x10cd2dbf */
  if (!C.zf) goto L_10cd2dbf;
L_10cd2dfe:;
  /* 10cd2dfe cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2e02 je 0x10cd2e29 */
  if (C.zf) goto L_10cd2e29;
  /* 10cd2e04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd2e07 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2e0a push eax */
  push32((uint32_t)(EAX));
  /* 10cd2e0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd2e0e push ecx */
  push32((uint32_t)(ECX));
  /* 10cd2e0f call 0x10cd6610 */
  push32(0x10cd2e14u); f_10cd6610();
  /* 10cd2e14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2e17 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cd2e1a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2e1e jne 0x10cd2e27 */
  if (!C.zf) goto L_10cd2e27;
  /* 10cd2e20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd2e22 jmp 0x10cd306a */
  goto L_10cd306a;
L_10cd2e27:;
  /* 10cd2e27 jmp 0x10cd2e4c */
  goto L_10cd2e4c;
L_10cd2e29:;
  /* 10cd2e29 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd2e2c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2e2f push edx */
  push32((uint32_t)(EDX));
  /* 10cd2e30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd2e33 push eax */
  push32((uint32_t)(EAX));
  /* 10cd2e34 call 0x10cd6560 */
  push32(0x10cd2e39u); f_10cd6560();
  /* 10cd2e39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2e3c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cd2e3f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2e43 jne 0x10cd2e4c */
  if (!C.zf) goto L_10cd2e4c;
  /* 10cd2e45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd2e47 jmp 0x10cd306a */
  goto L_10cd306a;
L_10cd2e4c:;
  /* 10cd2e4c mov ecx, dword ptr [0x10cfca88] */
  ECX = (r32((uint32_t)(0x10cfca88)));
  /* 10cd2e52 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2e55 mov dword ptr [0x10cfca88], ecx */
  w32((uint32_t)(0x10cfca88), (ECX));
  /* 10cd2e5b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2e5f jne 0x10cd2eb7 */
  if (!C.zf) goto L_10cd2eb7;
  /* 10cd2e61 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd2e64 mov eax, dword ptr [0x10cfe448] */
  EAX = (r32((uint32_t)(0x10cfe448)));
  /* 10cd2e69 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd2e6c mov dword ptr [0x10cfe448], eax */
  w32((uint32_t)(0x10cfe448), (EAX));
  /* 10cd2e71 mov ecx, dword ptr [0x10cfe448] */
  ECX = (r32((uint32_t)(0x10cfe448)));
  /* 10cd2e77 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2e7a mov dword ptr [0x10cfe448], ecx */
  w32((uint32_t)(0x10cfe448), (ECX));
  /* 10cd2e80 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd2e83 mov eax, dword ptr [0x10cfe450] */
  EAX = (r32((uint32_t)(0x10cfe450)));
  /* 10cd2e88 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd2e8b mov dword ptr [0x10cfe450], eax */
  w32((uint32_t)(0x10cfe450), (EAX));
  /* 10cd2e90 mov ecx, dword ptr [0x10cfe450] */
  ECX = (r32((uint32_t)(0x10cfe450)));
  /* 10cd2e96 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2e99 mov dword ptr [0x10cfe450], ecx */
  w32((uint32_t)(0x10cfe450), (ECX));
  /* 10cd2e9f mov edx, dword ptr [0x10cfe450] */
  EDX = (r32((uint32_t)(0x10cfe450)));
  /* 10cd2ea5 cmp edx, dword ptr [0x10cfe454] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10cfe454))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2eab jbe 0x10cd2eb7 */
  if ((C.cf||C.zf)) goto L_10cd2eb7;
  /* 10cd2ead mov eax, dword ptr [0x10cfe450] */
  EAX = (r32((uint32_t)(0x10cfe450)));
  /* 10cd2eb2 mov dword ptr [0x10cfe454], eax */
  w32((uint32_t)(0x10cfe454), (EAX));
L_10cd2eb7:;
  /* 10cd2eb7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd2eba add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2ebd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10cd2ec0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd2ec3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd2ec6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2ec9 jbe 0x10cd2eef */
  if ((C.cf||C.zf)) goto L_10cd2eef;
  /* 10cd2ecb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd2ece mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd2ed1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd2ed4 push edx */
  push32((uint32_t)(EDX));
  /* 10cd2ed5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd2ed7 mov al, byte ptr [0x10cfca92] */
  AL = (r8((uint32_t)(0x10cfca92)));
  /* 10cd2edc push eax */
  push32((uint32_t)(EAX));
  /* 10cd2edd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd2ee0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd2ee3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2ee6 push edx */
  push32((uint32_t)(EDX));
  /* 10cd2ee7 call 0x10cd6400 */
  push32(0x10cd2eecu); f_10cd6400();
  /* 10cd2eec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd2eef:;
  /* 10cd2eef push 4 */
  push32((uint32_t)(0x4u));
  /* 10cd2ef1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd2ef3 mov al, byte ptr [0x10cfca90] */
  AL = (r8((uint32_t)(0x10cfca90)));
  /* 10cd2ef8 push eax */
  push32((uint32_t)(EAX));
  /* 10cd2ef9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd2efc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2eff push ecx */
  push32((uint32_t)(ECX));
  /* 10cd2f00 call 0x10cd6400 */
  push32(0x10cd2f05u); f_10cd6400();
  /* 10cd2f05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2f08 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2f0c jne 0x10cd2f29 */
  if (!C.zf) goto L_10cd2f29;
  /* 10cd2f0e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd2f11 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd2f14 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10cd2f17 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd2f1a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd2f1d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10cd2f20 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd2f23 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd2f26 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10cd2f29:;
  /* 10cd2f29 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd2f2c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd2f2f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10cd2f32:;
  /* 10cd2f32 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2f36 jne 0x10cd2f67 */
  if (!C.zf) goto L_10cd2f67;
  /* 10cd2f38 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2f3c jne 0x10cd2f46 */
  if (!C.zf) goto L_10cd2f46;
  /* 10cd2f3e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd2f41 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2f44 je 0x10cd2f67 */
  if (C.zf) goto L_10cd2f67;
L_10cd2f46:;
  /* 10cd2f46 push 0x10cf94ac */
  push32((uint32_t)(0x10cf94acu));
  /* 10cd2f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2f4d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10cd2f52 push 0x10cf9454 */
  push32((uint32_t)(0x10cf9454u));
  /* 10cd2f57 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd2f59 call 0x10cd1750 */
  push32(0x10cd2f5eu); f_10cd1750();
  /* 10cd2f5e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2f61 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2f64 jne 0x10cd2f67 */
  if (!C.zf) goto L_10cd2f67;
  /* 10cd2f66 int3  */
  x86_unimpl("int3 @ 0x10cd2f66");
L_10cd2f67:;
  /* 10cd2f67 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd2f69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd2f6b jne 0x10cd2f32 */
  if (!C.zf) goto L_10cd2f32;
  /* 10cd2f6d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd2f70 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2f73 je 0x10cd2f7b */
  if (C.zf) goto L_10cd2f7b;
  /* 10cd2f75 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2f79 je 0x10cd2f83 */
  if (C.zf) goto L_10cd2f83;
L_10cd2f7b:;
  /* 10cd2f7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd2f7e jmp 0x10cd306a */
  goto L_10cd306a;
L_10cd2f83:;
  /* 10cd2f83 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd2f86 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2f89 je 0x10cd2f9b */
  if (C.zf) goto L_10cd2f9b;
  /* 10cd2f8b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd2f8e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cd2f90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd2f93 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cd2f96 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10cd2f99 jmp 0x10cd2fd7 */
  goto L_10cd2fd7;
L_10cd2f9b:;
  /* 10cd2f9b mov eax, dword ptr [0x10cfe444] */
  EAX = (r32((uint32_t)(0x10cfe444)));
  /* 10cd2fa0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2fa3 je 0x10cd2fc6 */
  if (C.zf) goto L_10cd2fc6;
  /* 10cd2fa5 push 0x10cf9490 */
  push32((uint32_t)(0x10cf9490u));
  /* 10cd2faa push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd2fac push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10cd2fb1 push 0x10cf9454 */
  push32((uint32_t)(0x10cf9454u));
  /* 10cd2fb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd2fb8 call 0x10cd1750 */
  push32(0x10cd2fbdu); f_10cd1750();
  /* 10cd2fbd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd2fc0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2fc3 jne 0x10cd2fc6 */
  if (!C.zf) goto L_10cd2fc6;
  /* 10cd2fc5 int3  */
  x86_unimpl("int3 @ 0x10cd2fc5");
L_10cd2fc6:;
  /* 10cd2fc6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd2fc8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd2fca jne 0x10cd2f9b */
  if (!C.zf) goto L_10cd2f9b;
  /* 10cd2fcc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd2fcf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10cd2fd2 mov dword ptr [0x10cfe444], eax */
  w32((uint32_t)(0x10cfe444), (EAX));
L_10cd2fd7:;
  /* 10cd2fd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd2fda cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2fde je 0x10cd2fef */
  if (C.zf) goto L_10cd2fef;
  /* 10cd2fe0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd2fe3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10cd2fe6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd2fe9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd2feb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10cd2fed jmp 0x10cd302a */
  goto L_10cd302a;
L_10cd2fef:;
  /* 10cd2fef mov eax, dword ptr [0x10cfe44c] */
  EAX = (r32((uint32_t)(0x10cfe44c)));
  /* 10cd2ff4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd2ff7 je 0x10cd301a */
  if (C.zf) goto L_10cd301a;
  /* 10cd2ff9 push 0x10cf9474 */
  push32((uint32_t)(0x10cf9474u));
  /* 10cd2ffe push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3000 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10cd3005 push 0x10cf9454 */
  push32((uint32_t)(0x10cf9454u));
  /* 10cd300a push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd300c call 0x10cd1750 */
  push32(0x10cd3011u); f_10cd1750();
  /* 10cd3011 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3014 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3017 jne 0x10cd301a */
  if (!C.zf) goto L_10cd301a;
  /* 10cd3019 int3  */
  x86_unimpl("int3 @ 0x10cd3019");
L_10cd301a:;
  /* 10cd301a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd301c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd301e jne 0x10cd2fef */
  if (!C.zf) goto L_10cd2fef;
  /* 10cd3020 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd3023 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cd3025 mov dword ptr [0x10cfe44c], eax */
  w32((uint32_t)(0x10cfe44c), (EAX));
L_10cd302a:;
  /* 10cd302a cmp dword ptr [0x10cfe44c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe44c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3031 je 0x10cd3041 */
  if (C.zf) goto L_10cd3041;
  /* 10cd3033 mov ecx, dword ptr [0x10cfe44c] */
  ECX = (r32((uint32_t)(0x10cfe44c)));
  /* 10cd3039 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd303c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10cd303f jmp 0x10cd3049 */
  goto L_10cd3049;
L_10cd3041:;
  /* 10cd3041 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd3044 mov dword ptr [0x10cfe444], eax */
  w32((uint32_t)(0x10cfe444), (EAX));
L_10cd3049:;
  /* 10cd3049 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd304c mov edx, dword ptr [0x10cfe44c] */
  EDX = (r32((uint32_t)(0x10cfe44c)));
  /* 10cd3052 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10cd3054 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd3057 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10cd305e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd3061 mov dword ptr [0x10cfe44c], ecx */
  w32((uint32_t)(0x10cfe44c), (ECX));
  /* 10cd3067 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10cd306a:;
  /* 10cd306a pop edi */
  EDI = (pop32());
  /* 10cd306b pop esi */
  ESI = (pop32());
  /* 10cd306c pop ebx */
  EBX = (pop32());
  /* 10cd306d mov esp, ebp */
  ESP = (EBP);
  /* 10cd306f pop ebp */
  EBP = (pop32());
  /* 10cd3070 ret  */
  ESPCHK(0x10cd2b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003080 @ 0x10cd3080 (27 bytes, 13 insns) */
void f_10cd3080(void) {
  FTRACE(0x10cd3080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd3080 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd3081 mov ebp, esp */
  EBP = (ESP);
  /* 10cd3083 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3085 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3087 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd3089 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd308c push eax */
  push32((uint32_t)(EAX));
  /* 10cd308d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3090 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd3091 call 0x10cd30a0 */
  push32(0x10cd3096u); f_10cd30a0();
  /* 10cd3096 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3099 pop ebp */
  EBP = (pop32());
  /* 10cd309a ret  */
  ESPCHK(0x10cd3080u, _esp0);
  ESP += 4; return;
}

/* FUN_100030a0 @ 0x10cd30a0 (64 bytes, 27 insns) */
void f_10cd30a0(void) {
  FTRACE(0x10cd30a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd30a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd30a1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd30a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd30a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd30a6 call 0x10cd6090 */
  push32(0x10cd30abu); f_10cd6090();
  /* 10cd30ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd30ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd30b0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd30b3 push eax */
  push32((uint32_t)(EAX));
  /* 10cd30b4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd30b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd30b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd30bb push edx */
  push32((uint32_t)(EDX));
  /* 10cd30bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd30bf push eax */
  push32((uint32_t)(EAX));
  /* 10cd30c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd30c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd30c4 call 0x10cd2b60 */
  push32(0x10cd30c9u); f_10cd2b60();
  /* 10cd30c9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd30cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd30cf push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd30d1 call 0x10cd6130 */
  push32(0x10cd30d6u); f_10cd6130();
  /* 10cd30d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd30d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd30dc mov esp, ebp */
  ESP = (EBP);
  /* 10cd30de pop ebp */
  EBP = (pop32());
  /* 10cd30df ret  */
  ESPCHK(0x10cd30a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100030e0 @ 0x10cd30e0 (19 bytes, 9 insns) */
void f_10cd30e0(void) {
  FTRACE(0x10cd30e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd30e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd30e1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd30e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd30e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd30e8 push eax */
  push32((uint32_t)(EAX));
  /* 10cd30e9 call 0x10cd3120 */
  push32(0x10cd30eeu); f_10cd3120();
  /* 10cd30ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd30f1 pop ebp */
  EBP = (pop32());
  /* 10cd30f2 ret  */
  ESPCHK(0x10cd30e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003100 @ 0x10cd3100 (19 bytes, 9 insns) */
void f_10cd3100(void) {
  FTRACE(0x10cd3100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd3100 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd3101 mov ebp, esp */
  EBP = (ESP);
  /* 10cd3103 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd3105 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3108 push eax */
  push32((uint32_t)(EAX));
  /* 10cd3109 call 0x10cd3150 */
  push32(0x10cd310eu); f_10cd3150();
  /* 10cd310e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3111 pop ebp */
  EBP = (pop32());
  /* 10cd3112 ret  */
  ESPCHK(0x10cd3100u, _esp0);
  ESP += 4; return;
}

/* FUN_10003120 @ 0x10cd3120 (41 bytes, 16 insns) */
void f_10cd3120(void) {
  FTRACE(0x10cd3120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd3120 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd3121 mov ebp, esp */
  EBP = (ESP);
  /* 10cd3123 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd3125 call 0x10cd6090 */
  push32(0x10cd312au); f_10cd6090();
  /* 10cd312a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd312d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd3130 push eax */
  push32((uint32_t)(EAX));
  /* 10cd3131 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3134 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd3135 call 0x10cd3150 */
  push32(0x10cd313au); f_10cd3150();
  /* 10cd313a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd313d push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd313f call 0x10cd6130 */
  push32(0x10cd3144u); f_10cd6130();
  /* 10cd3144 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3147 pop ebp */
  EBP = (pop32());
  /* 10cd3148 ret  */
  ESPCHK(0x10cd3120u, _esp0);
  ESP += 4; return;
}

/* FUN_10003150 @ 0x10cd3150 (1004 bytes, 342 insns) */
void f_10cd3150(void) {
  FTRACE(0x10cd3150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd3150 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd3151 mov ebp, esp */
  EBP = (ESP);
  /* 10cd3153 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd3154 push ebx */
  push32((uint32_t)(EBX));
  /* 10cd3155 push esi */
  push32((uint32_t)(ESI));
  /* 10cd3156 push edi */
  push32((uint32_t)(EDI));
  /* 10cd3157 mov eax, dword ptr [0x10cfca84] */
  EAX = (r32((uint32_t)(0x10cfca84)));
  /* 10cd315c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd315f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd3161 je 0x10cd3193 */
  if (C.zf) goto L_10cd3193;
L_10cd3163:;
  /* 10cd3163 call 0x10cd3830 */
  push32(0x10cd3168u); f_10cd3830();
  /* 10cd3168 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd316a jne 0x10cd318d */
  if (!C.zf) goto L_10cd318d;
  /* 10cd316c push 0x10cf9460 */
  push32((uint32_t)(0x10cf9460u));
  /* 10cd3171 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3173 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10cd3178 push 0x10cf9454 */
  push32((uint32_t)(0x10cf9454u));
  /* 10cd317d push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd317f call 0x10cd1750 */
  push32(0x10cd3184u); f_10cd1750();
  /* 10cd3184 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3187 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd318a jne 0x10cd318d */
  if (!C.zf) goto L_10cd318d;
  /* 10cd318c int3  */
  x86_unimpl("int3 @ 0x10cd318c");
L_10cd318d:;
  /* 10cd318d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd318f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd3191 jne 0x10cd3163 */
  if (!C.zf) goto L_10cd3163;
L_10cd3193:;
  /* 10cd3193 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3197 jne 0x10cd319e */
  if (!C.zf) goto L_10cd319e;
  /* 10cd3199 jmp 0x10cd3535 */
  goto L_10cd3535;
L_10cd319e:;
  /* 10cd319e push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd31a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd31a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd31a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd31a7 push edx */
  push32((uint32_t)(EDX));
  /* 10cd31a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd31aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd31ad push eax */
  push32((uint32_t)(EAX));
  /* 10cd31ae push 3 */
  push32((uint32_t)(0x3u));
  /* 10cd31b0 call dword ptr [0x10cfcc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfcc90))), 0x10cd31b6u);
  /* 10cd31b6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd31b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd31bb jne 0x10cd31e8 */
  if (!C.zf) goto L_10cd31e8;
L_10cd31bd:;
  /* 10cd31bd push 0x10cf9724 */
  push32((uint32_t)(0x10cf9724u));
  /* 10cd31c2 push 0x10cf93f4 */
  push32((uint32_t)(0x10cf93f4u));
  /* 10cd31c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd31c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd31cb push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd31cd push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd31cf call 0x10cd1750 */
  push32(0x10cd31d4u); f_10cd1750();
  /* 10cd31d4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd31d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd31da jne 0x10cd31dd */
  if (!C.zf) goto L_10cd31dd;
  /* 10cd31dc int3  */
  x86_unimpl("int3 @ 0x10cd31dc");
L_10cd31dd:;
  /* 10cd31dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd31df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd31e1 jne 0x10cd31bd */
  if (!C.zf) goto L_10cd31bd;
  /* 10cd31e3 jmp 0x10cd3535 */
  goto L_10cd3535;
L_10cd31e8:;
  /* 10cd31e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd31eb push edx */
  push32((uint32_t)(EDX));
  /* 10cd31ec call 0x10cd3c90 */
  push32(0x10cd31f1u); f_10cd3c90();
  /* 10cd31f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd31f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd31f6 jne 0x10cd3219 */
  if (!C.zf) goto L_10cd3219;
  /* 10cd31f8 push 0x10cf9564 */
  push32((uint32_t)(0x10cf9564u));
  /* 10cd31fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd31ff push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10cd3204 push 0x10cf9454 */
  push32((uint32_t)(0x10cf9454u));
  /* 10cd3209 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd320b call 0x10cd1750 */
  push32(0x10cd3210u); f_10cd1750();
  /* 10cd3210 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3213 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3216 jne 0x10cd3219 */
  if (!C.zf) goto L_10cd3219;
  /* 10cd3218 int3  */
  x86_unimpl("int3 @ 0x10cd3218");
L_10cd3219:;
  /* 10cd3219 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd321b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd321d jne 0x10cd31e8 */
  if (!C.zf) goto L_10cd31e8;
  /* 10cd321f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3222 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd3225 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10cd3228:;
  /* 10cd3228 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd322b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10cd322e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd3233 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3236 je 0x10cd327b */
  if (C.zf) goto L_10cd327b;
  /* 10cd3238 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd323b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd323f je 0x10cd327b */
  if (C.zf) goto L_10cd327b;
  /* 10cd3241 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3244 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10cd3247 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd324c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd324f je 0x10cd327b */
  if (C.zf) goto L_10cd327b;
  /* 10cd3251 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3254 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3258 je 0x10cd327b */
  if (C.zf) goto L_10cd327b;
  /* 10cd325a push 0x10cf96fc */
  push32((uint32_t)(0x10cf96fcu));
  /* 10cd325f push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3261 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10cd3266 push 0x10cf9454 */
  push32((uint32_t)(0x10cf9454u));
  /* 10cd326b push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd326d call 0x10cd1750 */
  push32(0x10cd3272u); f_10cd1750();
  /* 10cd3272 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3275 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3278 jne 0x10cd327b */
  if (!C.zf) goto L_10cd327b;
  /* 10cd327a int3  */
  x86_unimpl("int3 @ 0x10cd327a");
L_10cd327b:;
  /* 10cd327b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd327d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd327f jne 0x10cd3228 */
  if (!C.zf) goto L_10cd3228;
  /* 10cd3281 mov eax, dword ptr [0x10cfca84] */
  EAX = (r32((uint32_t)(0x10cfca84)));
  /* 10cd3286 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd3289 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd328b jne 0x10cd3356 */
  if (!C.zf) goto L_10cd3356;
  /* 10cd3291 push 4 */
  push32((uint32_t)(0x4u));
  /* 10cd3293 mov cl, byte ptr [0x10cfca90] */
  CL = (r8((uint32_t)(0x10cfca90)));
  /* 10cd3299 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd329a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd329d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd32a0 push edx */
  push32((uint32_t)(EDX));
  /* 10cd32a1 call 0x10cd37a0 */
  push32(0x10cd32a6u); f_10cd37a0();
  /* 10cd32a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd32a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd32ab jne 0x10cd32f0 */
  if (!C.zf) goto L_10cd32f0;
L_10cd32ad:;
  /* 10cd32ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd32b0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd32b3 push eax */
  push32((uint32_t)(EAX));
  /* 10cd32b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd32b7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10cd32ba push edx */
  push32((uint32_t)(EDX));
  /* 10cd32bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd32be mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10cd32c1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd32c7 mov edx, dword ptr [ecx*4 + 0x10cfca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cfca94)));
  /* 10cd32ce push edx */
  push32((uint32_t)(EDX));
  /* 10cd32cf push 0x10cf96d0 */
  push32((uint32_t)(0x10cf96d0u));
  /* 10cd32d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd32d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd32d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd32da push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd32dc call 0x10cd1750 */
  push32(0x10cd32e1u); f_10cd1750();
  /* 10cd32e1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd32e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd32e7 jne 0x10cd32ea */
  if (!C.zf) goto L_10cd32ea;
  /* 10cd32e9 int3  */
  x86_unimpl("int3 @ 0x10cd32e9");
L_10cd32ea:;
  /* 10cd32ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd32ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd32ee jne 0x10cd32ad */
  if (!C.zf) goto L_10cd32ad;
L_10cd32f0:;
  /* 10cd32f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10cd32f2 mov cl, byte ptr [0x10cfca90] */
  CL = (r8((uint32_t)(0x10cfca90)));
  /* 10cd32f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd32f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd32fc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10cd32ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3302 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10cd3306 push edx */
  push32((uint32_t)(EDX));
  /* 10cd3307 call 0x10cd37a0 */
  push32(0x10cd330cu); f_10cd37a0();
  /* 10cd330c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd330f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd3311 jne 0x10cd3356 */
  if (!C.zf) goto L_10cd3356;
L_10cd3313:;
  /* 10cd3313 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3316 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3319 push eax */
  push32((uint32_t)(EAX));
  /* 10cd331a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd331d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10cd3320 push edx */
  push32((uint32_t)(EDX));
  /* 10cd3321 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3324 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10cd3327 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd332d mov edx, dword ptr [ecx*4 + 0x10cfca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cfca94)));
  /* 10cd3334 push edx */
  push32((uint32_t)(EDX));
  /* 10cd3335 push 0x10cf96a4 */
  push32((uint32_t)(0x10cf96a4u));
  /* 10cd333a push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd333c push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd333e push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3340 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd3342 call 0x10cd1750 */
  push32(0x10cd3347u); f_10cd1750();
  /* 10cd3347 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd334a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd334d jne 0x10cd3350 */
  if (!C.zf) goto L_10cd3350;
  /* 10cd334f int3  */
  x86_unimpl("int3 @ 0x10cd334f");
L_10cd3350:;
  /* 10cd3350 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd3352 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd3354 jne 0x10cd3313 */
  if (!C.zf) goto L_10cd3313;
L_10cd3356:;
  /* 10cd3356 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3359 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd335d jne 0x10cd33cb */
  if (!C.zf) goto L_10cd33cb;
L_10cd335f:;
  /* 10cd335f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3362 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3369 jne 0x10cd3374 */
  if (!C.zf) goto L_10cd3374;
  /* 10cd336b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd336e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3372 je 0x10cd3395 */
  if (C.zf) goto L_10cd3395;
L_10cd3374:;
  /* 10cd3374 push 0x10cf9664 */
  push32((uint32_t)(0x10cf9664u));
  /* 10cd3379 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd337b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10cd3380 push 0x10cf9454 */
  push32((uint32_t)(0x10cf9454u));
  /* 10cd3385 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd3387 call 0x10cd1750 */
  push32(0x10cd338cu); f_10cd1750();
  /* 10cd338c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd338f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3392 jne 0x10cd3395 */
  if (!C.zf) goto L_10cd3395;
  /* 10cd3394 int3  */
  x86_unimpl("int3 @ 0x10cd3394");
L_10cd3395:;
  /* 10cd3395 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd3397 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd3399 jne 0x10cd335f */
  if (!C.zf) goto L_10cd335f;
  /* 10cd339b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd339e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10cd33a1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd33a4 push eax */
  push32((uint32_t)(EAX));
  /* 10cd33a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd33a7 mov cl, byte ptr [0x10cfca91] */
  CL = (r8((uint32_t)(0x10cfca91)));
  /* 10cd33ad push ecx */
  push32((uint32_t)(ECX));
  /* 10cd33ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd33b1 push edx */
  push32((uint32_t)(EDX));
  /* 10cd33b2 call 0x10cd6400 */
  push32(0x10cd33b7u); f_10cd6400();
  /* 10cd33b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd33ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd33bd push eax */
  push32((uint32_t)(EAX));
  /* 10cd33be call 0x10cd6800 */
  push32(0x10cd33c3u); f_10cd6800();
  /* 10cd33c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd33c6 jmp 0x10cd3535 */
  goto L_10cd3535;
L_10cd33cb:;
  /* 10cd33cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd33ce cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd33d2 jne 0x10cd33e1 */
  if (!C.zf) goto L_10cd33e1;
  /* 10cd33d4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd33d8 jne 0x10cd33e1 */
  if (!C.zf) goto L_10cd33e1;
  /* 10cd33da mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10cd33e1:;
  /* 10cd33e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd33e4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10cd33e7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd33ea je 0x10cd340d */
  if (C.zf) goto L_10cd340d;
  /* 10cd33ec push 0x10cf9644 */
  push32((uint32_t)(0x10cf9644u));
  /* 10cd33f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd33f3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10cd33f8 push 0x10cf9454 */
  push32((uint32_t)(0x10cf9454u));
  /* 10cd33fd push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd33ff call 0x10cd1750 */
  push32(0x10cd3404u); f_10cd1750();
  /* 10cd3404 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3407 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd340a jne 0x10cd340d */
  if (!C.zf) goto L_10cd340d;
  /* 10cd340c int3  */
  x86_unimpl("int3 @ 0x10cd340c");
L_10cd340d:;
  /* 10cd340d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd340f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd3411 jne 0x10cd33e1 */
  if (!C.zf) goto L_10cd33e1;
  /* 10cd3413 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3416 mov eax, dword ptr [0x10cfe450] */
  EAX = (r32((uint32_t)(0x10cfe450)));
  /* 10cd341b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd341e mov dword ptr [0x10cfe450], eax */
  w32((uint32_t)(0x10cfe450), (EAX));
  /* 10cd3423 mov ecx, dword ptr [0x10cfca84] */
  ECX = (r32((uint32_t)(0x10cfca84)));
  /* 10cd3429 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd342c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd342e jne 0x10cd350c */
  if (!C.zf) goto L_10cd350c;
  /* 10cd3434 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3437 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd343a je 0x10cd344c */
  if (C.zf) goto L_10cd344c;
  /* 10cd343c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd343f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cd3441 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3444 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10cd3447 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10cd344a jmp 0x10cd348a */
  goto L_10cd348a;
L_10cd344c:;
  /* 10cd344c mov ecx, dword ptr [0x10cfe444] */
  ECX = (r32((uint32_t)(0x10cfe444)));
  /* 10cd3452 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3455 je 0x10cd3478 */
  if (C.zf) goto L_10cd3478;
  /* 10cd3457 push 0x10cf962c */
  push32((uint32_t)(0x10cf962cu));
  /* 10cd345c push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd345e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10cd3463 push 0x10cf9454 */
  push32((uint32_t)(0x10cf9454u));
  /* 10cd3468 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd346a call 0x10cd1750 */
  push32(0x10cd346fu); f_10cd1750();
  /* 10cd346f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3472 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3475 jne 0x10cd3478 */
  if (!C.zf) goto L_10cd3478;
  /* 10cd3477 int3  */
  x86_unimpl("int3 @ 0x10cd3477");
L_10cd3478:;
  /* 10cd3478 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd347a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd347c jne 0x10cd344c */
  if (!C.zf) goto L_10cd344c;
  /* 10cd347e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3481 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cd3484 mov dword ptr [0x10cfe444], ecx */
  w32((uint32_t)(0x10cfe444), (ECX));
L_10cd348a:;
  /* 10cd348a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd348d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3491 je 0x10cd34a2 */
  if (C.zf) goto L_10cd34a2;
  /* 10cd3493 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3496 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cd3499 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd349c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cd349e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10cd34a0 jmp 0x10cd34df */
  goto L_10cd34df;
L_10cd34a2:;
  /* 10cd34a2 mov ecx, dword ptr [0x10cfe44c] */
  ECX = (r32((uint32_t)(0x10cfe44c)));
  /* 10cd34a8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd34ab je 0x10cd34ce */
  if (C.zf) goto L_10cd34ce;
  /* 10cd34ad push 0x10cf9614 */
  push32((uint32_t)(0x10cf9614u));
  /* 10cd34b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd34b4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10cd34b9 push 0x10cf9454 */
  push32((uint32_t)(0x10cf9454u));
  /* 10cd34be push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd34c0 call 0x10cd1750 */
  push32(0x10cd34c5u); f_10cd1750();
  /* 10cd34c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd34c8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd34cb jne 0x10cd34ce */
  if (!C.zf) goto L_10cd34ce;
  /* 10cd34cd int3  */
  x86_unimpl("int3 @ 0x10cd34cd");
L_10cd34ce:;
  /* 10cd34ce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd34d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd34d2 jne 0x10cd34a2 */
  if (!C.zf) goto L_10cd34a2;
  /* 10cd34d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd34d7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cd34d9 mov dword ptr [0x10cfe44c], ecx */
  w32((uint32_t)(0x10cfe44c), (ECX));
L_10cd34df:;
  /* 10cd34df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd34e2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10cd34e5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd34e8 push eax */
  push32((uint32_t)(EAX));
  /* 10cd34e9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd34eb mov cl, byte ptr [0x10cfca91] */
  CL = (r8((uint32_t)(0x10cfca91)));
  /* 10cd34f1 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd34f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd34f5 push edx */
  push32((uint32_t)(EDX));
  /* 10cd34f6 call 0x10cd6400 */
  push32(0x10cd34fbu); f_10cd6400();
  /* 10cd34fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd34fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3501 push eax */
  push32((uint32_t)(EAX));
  /* 10cd3502 call 0x10cd6800 */
  push32(0x10cd3507u); f_10cd6800();
  /* 10cd3507 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd350a jmp 0x10cd3535 */
  goto L_10cd3535;
L_10cd350c:;
  /* 10cd350c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd350f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10cd3516 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3519 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10cd351c push eax */
  push32((uint32_t)(EAX));
  /* 10cd351d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd351f mov cl, byte ptr [0x10cfca91] */
  CL = (r8((uint32_t)(0x10cfca91)));
  /* 10cd3525 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd3526 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3529 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd352c push edx */
  push32((uint32_t)(EDX));
  /* 10cd352d call 0x10cd6400 */
  push32(0x10cd3532u); f_10cd6400();
  /* 10cd3532 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd3535:;
  /* 10cd3535 pop edi */
  EDI = (pop32());
  /* 10cd3536 pop esi */
  ESI = (pop32());
  /* 10cd3537 pop ebx */
  EBX = (pop32());
  /* 10cd3538 mov esp, ebp */
  ESP = (EBP);
  /* 10cd353a pop ebp */
  EBP = (pop32());
  /* 10cd353b ret  */
  ESPCHK(0x10cd3150u, _esp0);
  ESP += 4; return;
}

/* FUN_10003540 @ 0x10cd3540 (19 bytes, 9 insns) */
void f_10cd3540(void) {
  FTRACE(0x10cd3540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd3540 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd3541 mov ebp, esp */
  EBP = (ESP);
  /* 10cd3543 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd3545 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3548 push eax */
  push32((uint32_t)(EAX));
  /* 10cd3549 call 0x10cd3560 */
  push32(0x10cd354eu); f_10cd3560();
  /* 10cd354e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3551 pop ebp */
  EBP = (pop32());
  /* 10cd3552 ret  */
  ESPCHK(0x10cd3540u, _esp0);
  ESP += 4; return;
}

/* FUN_10003560 @ 0x10cd3560 (342 bytes, 119 insns) */
void f_10cd3560(void) {
  FTRACE(0x10cd3560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd3560 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd3561 mov ebp, esp */
  EBP = (ESP);
  /* 10cd3563 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd3566 push ebx */
  push32((uint32_t)(EBX));
  /* 10cd3567 push esi */
  push32((uint32_t)(ESI));
  /* 10cd3568 push edi */
  push32((uint32_t)(EDI));
  /* 10cd3569 mov eax, dword ptr [0x10cfca84] */
  EAX = (r32((uint32_t)(0x10cfca84)));
  /* 10cd356e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd3571 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd3573 je 0x10cd35a5 */
  if (C.zf) goto L_10cd35a5;
L_10cd3575:;
  /* 10cd3575 call 0x10cd3830 */
  push32(0x10cd357au); f_10cd3830();
  /* 10cd357a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd357c jne 0x10cd359f */
  if (!C.zf) goto L_10cd359f;
  /* 10cd357e push 0x10cf9460 */
  push32((uint32_t)(0x10cf9460u));
  /* 10cd3583 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3585 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10cd358a push 0x10cf9454 */
  push32((uint32_t)(0x10cf9454u));
  /* 10cd358f push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd3591 call 0x10cd1750 */
  push32(0x10cd3596u); f_10cd1750();
  /* 10cd3596 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3599 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd359c jne 0x10cd359f */
  if (!C.zf) goto L_10cd359f;
  /* 10cd359e int3  */
  x86_unimpl("int3 @ 0x10cd359e");
L_10cd359f:;
  /* 10cd359f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd35a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd35a3 jne 0x10cd3575 */
  if (!C.zf) goto L_10cd3575;
L_10cd35a5:;
  /* 10cd35a5 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd35a7 call 0x10cd6090 */
  push32(0x10cd35acu); f_10cd6090();
  /* 10cd35ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd35af:;
  /* 10cd35af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd35b2 push edx */
  push32((uint32_t)(EDX));
  /* 10cd35b3 call 0x10cd3c90 */
  push32(0x10cd35b8u); f_10cd3c90();
  /* 10cd35b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd35bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd35bd jne 0x10cd35e0 */
  if (!C.zf) goto L_10cd35e0;
  /* 10cd35bf push 0x10cf9564 */
  push32((uint32_t)(0x10cf9564u));
  /* 10cd35c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd35c6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10cd35cb push 0x10cf9454 */
  push32((uint32_t)(0x10cf9454u));
  /* 10cd35d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd35d2 call 0x10cd1750 */
  push32(0x10cd35d7u); f_10cd1750();
  /* 10cd35d7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd35da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd35dd jne 0x10cd35e0 */
  if (!C.zf) goto L_10cd35e0;
  /* 10cd35df int3  */
  x86_unimpl("int3 @ 0x10cd35df");
L_10cd35e0:;
  /* 10cd35e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd35e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd35e4 jne 0x10cd35af */
  if (!C.zf) goto L_10cd35af;
  /* 10cd35e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd35e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd35ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10cd35ef:;
  /* 10cd35ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd35f2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10cd35f5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd35fa cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd35fd je 0x10cd3642 */
  if (C.zf) goto L_10cd3642;
  /* 10cd35ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3602 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3606 je 0x10cd3642 */
  if (C.zf) goto L_10cd3642;
  /* 10cd3608 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd360b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10cd360e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd3613 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3616 je 0x10cd3642 */
  if (C.zf) goto L_10cd3642;
  /* 10cd3618 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd361b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd361f je 0x10cd3642 */
  if (C.zf) goto L_10cd3642;
  /* 10cd3621 push 0x10cf96fc */
  push32((uint32_t)(0x10cf96fcu));
  /* 10cd3626 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3628 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10cd362d push 0x10cf9454 */
  push32((uint32_t)(0x10cf9454u));
  /* 10cd3632 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd3634 call 0x10cd1750 */
  push32(0x10cd3639u); f_10cd1750();
  /* 10cd3639 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd363c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd363f jne 0x10cd3642 */
  if (!C.zf) goto L_10cd3642;
  /* 10cd3641 int3  */
  x86_unimpl("int3 @ 0x10cd3641");
L_10cd3642:;
  /* 10cd3642 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd3644 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd3646 jne 0x10cd35ef */
  if (!C.zf) goto L_10cd35ef;
  /* 10cd3648 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd364b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd364f jne 0x10cd365e */
  if (!C.zf) goto L_10cd365e;
  /* 10cd3651 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3655 jne 0x10cd365e */
  if (!C.zf) goto L_10cd365e;
  /* 10cd3657 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10cd365e:;
  /* 10cd365e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3661 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3665 je 0x10cd3699 */
  if (C.zf) goto L_10cd3699;
L_10cd3667:;
  /* 10cd3667 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd366a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10cd366d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3670 je 0x10cd3693 */
  if (C.zf) goto L_10cd3693;
  /* 10cd3672 push 0x10cf9644 */
  push32((uint32_t)(0x10cf9644u));
  /* 10cd3677 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3679 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10cd367e push 0x10cf9454 */
  push32((uint32_t)(0x10cf9454u));
  /* 10cd3683 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd3685 call 0x10cd1750 */
  push32(0x10cd368au); f_10cd1750();
  /* 10cd368a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd368d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3690 jne 0x10cd3693 */
  if (!C.zf) goto L_10cd3693;
  /* 10cd3692 int3  */
  x86_unimpl("int3 @ 0x10cd3692");
L_10cd3693:;
  /* 10cd3693 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd3695 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd3697 jne 0x10cd3667 */
  if (!C.zf) goto L_10cd3667;
L_10cd3699:;
  /* 10cd3699 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd369c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10cd369f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd36a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd36a4 call 0x10cd6130 */
  push32(0x10cd36a9u); f_10cd6130();
  /* 10cd36a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd36ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd36af pop edi */
  EDI = (pop32());
  /* 10cd36b0 pop esi */
  ESI = (pop32());
  /* 10cd36b1 pop ebx */
  EBX = (pop32());
  /* 10cd36b2 mov esp, ebp */
  ESP = (EBP);
  /* 10cd36b4 pop ebp */
  EBP = (pop32());
  /* 10cd36b5 ret  */
  ESPCHK(0x10cd3560u, _esp0);
  ESP += 4; return;
}

/* FUN_100036c0 @ 0x10cd36c0 (28 bytes, 11 insns) */
void f_10cd36c0(void) {
  FTRACE(0x10cd36c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd36c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd36c1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd36c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd36c4 mov eax, dword ptr [0x10cfca8c] */
  EAX = (r32((uint32_t)(0x10cfca8c)));
  /* 10cd36c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd36cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd36cf mov dword ptr [0x10cfca8c], ecx */
  w32((uint32_t)(0x10cfca8c), (ECX));
  /* 10cd36d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd36d8 mov esp, ebp */
  ESP = (EBP);
  /* 10cd36da pop ebp */
  EBP = (pop32());
  /* 10cd36db ret  */
  ESPCHK(0x10cd36c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100036e0 @ 0x10cd36e0 (157 bytes, 59 insns) */
void f_10cd36e0(void) {
  FTRACE(0x10cd36e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd36e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd36e1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd36e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd36e4 push ebx */
  push32((uint32_t)(EBX));
  /* 10cd36e5 push esi */
  push32((uint32_t)(ESI));
  /* 10cd36e6 push edi */
  push32((uint32_t)(EDI));
  /* 10cd36e7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd36e9 call 0x10cd6090 */
  push32(0x10cd36eeu); f_10cd6090();
  /* 10cd36ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd36f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd36f4 push eax */
  push32((uint32_t)(EAX));
  /* 10cd36f5 call 0x10cd3c90 */
  push32(0x10cd36fau); f_10cd3c90();
  /* 10cd36fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd36fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd36ff je 0x10cd376c */
  if (C.zf) goto L_10cd376c;
  /* 10cd3701 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3704 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd3707 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10cd370a:;
  /* 10cd370a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd370d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10cd3710 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd3715 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3718 je 0x10cd375d */
  if (C.zf) goto L_10cd375d;
  /* 10cd371a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd371d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3721 je 0x10cd375d */
  if (C.zf) goto L_10cd375d;
  /* 10cd3723 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3726 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10cd3729 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd372e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3731 je 0x10cd375d */
  if (C.zf) goto L_10cd375d;
  /* 10cd3733 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3736 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd373a je 0x10cd375d */
  if (C.zf) goto L_10cd375d;
  /* 10cd373c push 0x10cf96fc */
  push32((uint32_t)(0x10cf96fcu));
  /* 10cd3741 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3743 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10cd3748 push 0x10cf9454 */
  push32((uint32_t)(0x10cf9454u));
  /* 10cd374d push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd374f call 0x10cd1750 */
  push32(0x10cd3754u); f_10cd1750();
  /* 10cd3754 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3757 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd375a jne 0x10cd375d */
  if (!C.zf) goto L_10cd375d;
  /* 10cd375c int3  */
  x86_unimpl("int3 @ 0x10cd375c");
L_10cd375d:;
  /* 10cd375d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd375f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd3761 jne 0x10cd370a */
  if (!C.zf) goto L_10cd370a;
  /* 10cd3763 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3766 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd3769 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10cd376c:;
  /* 10cd376c push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd376e call 0x10cd6130 */
  push32(0x10cd3773u); f_10cd6130();
  /* 10cd3773 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3776 pop edi */
  EDI = (pop32());
  /* 10cd3777 pop esi */
  ESI = (pop32());
  /* 10cd3778 pop ebx */
  EBX = (pop32());
  /* 10cd3779 mov esp, ebp */
  ESP = (EBP);
  /* 10cd377b pop ebp */
  EBP = (pop32());
  /* 10cd377c ret  */
  ESPCHK(0x10cd36e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003780 @ 0x10cd3780 (28 bytes, 11 insns) */
void f_10cd3780(void) {
  FTRACE(0x10cd3780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd3780 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd3781 mov ebp, esp */
  EBP = (ESP);
  /* 10cd3783 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd3784 mov eax, dword ptr [0x10cfcc90] */
  EAX = (r32((uint32_t)(0x10cfcc90)));
  /* 10cd3789 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd378c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd378f mov dword ptr [0x10cfcc90], ecx */
  w32((uint32_t)(0x10cfcc90), (ECX));
  /* 10cd3795 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3798 mov esp, ebp */
  ESP = (EBP);
  /* 10cd379a pop ebp */
  EBP = (pop32());
  /* 10cd379b ret  */
  ESPCHK(0x10cd3780u, _esp0);
  ESP += 4; return;
}

/* FUN_100037a0 @ 0x10cd37a0 (136 bytes, 55 insns) */
void f_10cd37a0(void) {
  FTRACE(0x10cd37a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd37a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd37a1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd37a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd37a4 push ebx */
  push32((uint32_t)(EBX));
  /* 10cd37a5 push esi */
  push32((uint32_t)(ESI));
  /* 10cd37a6 push edi */
  push32((uint32_t)(EDI));
  /* 10cd37a7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10cd37ae:;
  /* 10cd37ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd37b1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd37b4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd37b7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10cd37ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd37bc je 0x10cd381e */
  if (C.zf) goto L_10cd381e;
  /* 10cd37be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd37c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd37c3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10cd37c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd37c8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd37ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd37d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd37d4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10cd37d7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd37d9 je 0x10cd381c */
  if (C.zf) goto L_10cd381c;
L_10cd37db:;
  /* 10cd37db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd37de and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd37e3 push eax */
  push32((uint32_t)(EAX));
  /* 10cd37e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd37e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd37e9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10cd37ec push edx */
  push32((uint32_t)(EDX));
  /* 10cd37ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd37f0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd37f3 push eax */
  push32((uint32_t)(EAX));
  /* 10cd37f4 push 0x10cf9740 */
  push32((uint32_t)(0x10cf9740u));
  /* 10cd37f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd37fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd37fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd37ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3801 call 0x10cd1750 */
  push32(0x10cd3806u); f_10cd1750();
  /* 10cd3806 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3809 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd380c jne 0x10cd380f */
  if (!C.zf) goto L_10cd380f;
  /* 10cd380e int3  */
  x86_unimpl("int3 @ 0x10cd380e");
L_10cd380f:;
  /* 10cd380f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd3811 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd3813 jne 0x10cd37db */
  if (!C.zf) goto L_10cd37db;
  /* 10cd3815 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10cd381c:;
  /* 10cd381c jmp 0x10cd37ae */
  goto L_10cd37ae;
L_10cd381e:;
  /* 10cd381e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3821 pop edi */
  EDI = (pop32());
  /* 10cd3822 pop esi */
  ESI = (pop32());
  /* 10cd3823 pop ebx */
  EBX = (pop32());
  /* 10cd3824 mov esp, ebp */
  ESP = (EBP);
  /* 10cd3826 pop ebp */
  EBP = (pop32());
  /* 10cd3827 ret  */
  ESPCHK(0x10cd37a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003830 @ 0x10cd3830 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10cd3830(void) {
  FTRACE(0x10cd3830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd3830 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd3831 mov ebp, esp */
  EBP = (ESP);
  /* 10cd3833 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd3836 push ebx */
  push32((uint32_t)(EBX));
  /* 10cd3837 push esi */
  push32((uint32_t)(ESI));
  /* 10cd3838 push edi */
  push32((uint32_t)(EDI));
  /* 10cd3839 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10cd3840 mov eax, dword ptr [0x10cfca84] */
  EAX = (r32((uint32_t)(0x10cfca84)));
  /* 10cd3845 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd3848 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd384a jne 0x10cd3856 */
  if (!C.zf) goto L_10cd3856;
  /* 10cd384c mov eax, 1 */
  EAX = (0x1u);
  /* 10cd3851 jmp 0x10cd3b88 */
  goto L_10cd3b88;
L_10cd3856:;
  /* 10cd3856 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd3858 call 0x10cd6090 */
  push32(0x10cd385du); f_10cd6090();
  /* 10cd385d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3860 call 0x10cd6870 */
  push32(0x10cd3865u); f_10cd6870();
  /* 10cd3865 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cd3868 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd386c je 0x10cd3979 */
  if (C.zf) goto L_10cd3979;
  /* 10cd3872 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3876 je 0x10cd3979 */
  if (C.zf) goto L_10cd3979;
  /* 10cd387c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd387f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10cd3882 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd3885 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3888 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10cd388b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd388f ja 0x10cd3942 */
  if ((!C.cf&&!C.zf)) goto L_10cd3942;
  /* 10cd3895 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd3898 jmp dword ptr [eax*4 + 0x10cd3b8f] */
  switch (EAX) {
    case 0: goto L_10cd391a;
    case 1: goto L_10cd38f2;
    case 2: goto L_10cd38ca;
    case 3: goto L_10cd389f;
    default: x86_unimpl("switch@0x10cd3898 out of table"); return;
  }
L_10cd389f:;
  /* 10cd389f push 0x10cf9894 */
  push32((uint32_t)(0x10cf9894u));
  /* 10cd38a4 push 0x10cf93f4 */
  push32((uint32_t)(0x10cf93f4u));
  /* 10cd38a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd38ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd38ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd38af push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd38b1 call 0x10cd1750 */
  push32(0x10cd38b6u); f_10cd1750();
  /* 10cd38b6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd38b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd38bc jne 0x10cd38bf */
  if (!C.zf) goto L_10cd38bf;
  /* 10cd38be int3  */
  x86_unimpl("int3 @ 0x10cd38be");
L_10cd38bf:;
  /* 10cd38bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd38c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd38c3 jne 0x10cd389f */
  if (!C.zf) goto L_10cd389f;
  /* 10cd38c5 jmp 0x10cd3968 */
  goto L_10cd3968;
L_10cd38ca:;
  /* 10cd38ca push 0x10cf9870 */
  push32((uint32_t)(0x10cf9870u));
  /* 10cd38cf push 0x10cf93f4 */
  push32((uint32_t)(0x10cf93f4u));
  /* 10cd38d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd38d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd38d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd38da push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd38dc call 0x10cd1750 */
  push32(0x10cd38e1u); f_10cd1750();
  /* 10cd38e1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd38e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd38e7 jne 0x10cd38ea */
  if (!C.zf) goto L_10cd38ea;
  /* 10cd38e9 int3  */
  x86_unimpl("int3 @ 0x10cd38e9");
L_10cd38ea:;
  /* 10cd38ea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd38ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd38ee jne 0x10cd38ca */
  if (!C.zf) goto L_10cd38ca;
  /* 10cd38f0 jmp 0x10cd3968 */
  goto L_10cd3968;
L_10cd38f2:;
  /* 10cd38f2 push 0x10cf984c */
  push32((uint32_t)(0x10cf984cu));
  /* 10cd38f7 push 0x10cf93f4 */
  push32((uint32_t)(0x10cf93f4u));
  /* 10cd38fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd38fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3900 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3902 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3904 call 0x10cd1750 */
  push32(0x10cd3909u); f_10cd1750();
  /* 10cd3909 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd390c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd390f jne 0x10cd3912 */
  if (!C.zf) goto L_10cd3912;
  /* 10cd3911 int3  */
  x86_unimpl("int3 @ 0x10cd3911");
L_10cd3912:;
  /* 10cd3912 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd3914 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd3916 jne 0x10cd38f2 */
  if (!C.zf) goto L_10cd38f2;
  /* 10cd3918 jmp 0x10cd3968 */
  goto L_10cd3968;
L_10cd391a:;
  /* 10cd391a push 0x10cf9828 */
  push32((uint32_t)(0x10cf9828u));
  /* 10cd391f push 0x10cf93f4 */
  push32((uint32_t)(0x10cf93f4u));
  /* 10cd3924 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3926 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3928 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd392a push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd392c call 0x10cd1750 */
  push32(0x10cd3931u); f_10cd1750();
  /* 10cd3931 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3934 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3937 jne 0x10cd393a */
  if (!C.zf) goto L_10cd393a;
  /* 10cd3939 int3  */
  x86_unimpl("int3 @ 0x10cd3939");
L_10cd393a:;
  /* 10cd393a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd393c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd393e jne 0x10cd391a */
  if (!C.zf) goto L_10cd391a;
  /* 10cd3940 jmp 0x10cd3968 */
  goto L_10cd3968;
L_10cd3942:;
  /* 10cd3942 push 0x10cf97fc */
  push32((uint32_t)(0x10cf97fcu));
  /* 10cd3947 push 0x10cf93f4 */
  push32((uint32_t)(0x10cf93f4u));
  /* 10cd394c push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd394e push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3950 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3952 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3954 call 0x10cd1750 */
  push32(0x10cd3959u); f_10cd1750();
  /* 10cd3959 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd395c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd395f jne 0x10cd3962 */
  if (!C.zf) goto L_10cd3962;
  /* 10cd3961 int3  */
  x86_unimpl("int3 @ 0x10cd3961");
L_10cd3962:;
  /* 10cd3962 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd3964 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd3966 jne 0x10cd3942 */
  if (!C.zf) goto L_10cd3942;
L_10cd3968:;
  /* 10cd3968 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd396a call 0x10cd6130 */
  push32(0x10cd396fu); f_10cd6130();
  /* 10cd396f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3972 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd3974 jmp 0x10cd3b88 */
  goto L_10cd3b88;
L_10cd3979:;
  /* 10cd3979 mov eax, dword ptr [0x10cfe44c] */
  EAX = (r32((uint32_t)(0x10cfe44c)));
  /* 10cd397e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cd3981 jmp 0x10cd398b */
  goto L_10cd398b;
L_10cd3983:;
  /* 10cd3983 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3986 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd3988 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10cd398b:;
  /* 10cd398b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd398f je 0x10cd3b7b */
  if (C.zf) goto L_10cd3b7b;
  /* 10cd3995 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10cd399c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd399f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10cd39a2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd39a8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd39ab je 0x10cd39d0 */
  if (C.zf) goto L_10cd39d0;
  /* 10cd39ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd39b0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd39b4 je 0x10cd39d0 */
  if (C.zf) goto L_10cd39d0;
  /* 10cd39b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd39b9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10cd39bc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd39c2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd39c5 je 0x10cd39d0 */
  if (C.zf) goto L_10cd39d0;
  /* 10cd39c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd39ca cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd39ce jne 0x10cd39e8 */
  if (!C.zf) goto L_10cd39e8;
L_10cd39d0:;
  /* 10cd39d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd39d3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10cd39d6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd39dc mov edx, dword ptr [ecx*4 + 0x10cfca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cfca94)));
  /* 10cd39e3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10cd39e6 jmp 0x10cd39ef */
  goto L_10cd39ef;
L_10cd39e8:;
  /* 10cd39e8 mov dword ptr [ebp - 0x14], 0x10cf97f4 */
  w32((uint32_t)(EBP + -0x14), (0x10cf97f4u));
L_10cd39ef:;
  /* 10cd39ef push 4 */
  push32((uint32_t)(0x4u));
  /* 10cd39f1 mov al, byte ptr [0x10cfca90] */
  AL = (r8((uint32_t)(0x10cfca90)));
  /* 10cd39f6 push eax */
  push32((uint32_t)(EAX));
  /* 10cd39f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd39fa add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd39fd push ecx */
  push32((uint32_t)(ECX));
  /* 10cd39fe call 0x10cd37a0 */
  push32(0x10cd3a03u); f_10cd37a0();
  /* 10cd3a03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3a06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd3a08 jne 0x10cd3a44 */
  if (!C.zf) goto L_10cd3a44;
L_10cd3a0a:;
  /* 10cd3a0a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3a0d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3a10 push edx */
  push32((uint32_t)(EDX));
  /* 10cd3a11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3a14 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10cd3a17 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd3a18 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd3a1b push edx */
  push32((uint32_t)(EDX));
  /* 10cd3a1c push 0x10cf96d0 */
  push32((uint32_t)(0x10cf96d0u));
  /* 10cd3a21 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3a23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3a25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3a27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3a29 call 0x10cd1750 */
  push32(0x10cd3a2eu); f_10cd1750();
  /* 10cd3a2e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3a31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3a34 jne 0x10cd3a37 */
  if (!C.zf) goto L_10cd3a37;
  /* 10cd3a36 int3  */
  x86_unimpl("int3 @ 0x10cd3a36");
L_10cd3a37:;
  /* 10cd3a37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd3a39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd3a3b jne 0x10cd3a0a */
  if (!C.zf) goto L_10cd3a0a;
  /* 10cd3a3d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10cd3a44:;
  /* 10cd3a44 push 4 */
  push32((uint32_t)(0x4u));
  /* 10cd3a46 mov cl, byte ptr [0x10cfca90] */
  CL = (r8((uint32_t)(0x10cfca90)));
  /* 10cd3a4c push ecx */
  push32((uint32_t)(ECX));
  /* 10cd3a4d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3a50 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10cd3a53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3a56 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10cd3a5a push edx */
  push32((uint32_t)(EDX));
  /* 10cd3a5b call 0x10cd37a0 */
  push32(0x10cd3a60u); f_10cd37a0();
  /* 10cd3a60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3a63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd3a65 jne 0x10cd3aa1 */
  if (!C.zf) goto L_10cd3aa1;
L_10cd3a67:;
  /* 10cd3a67 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3a6a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3a6d push eax */
  push32((uint32_t)(EAX));
  /* 10cd3a6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3a71 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10cd3a74 push edx */
  push32((uint32_t)(EDX));
  /* 10cd3a75 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd3a78 push eax */
  push32((uint32_t)(EAX));
  /* 10cd3a79 push 0x10cf96a4 */
  push32((uint32_t)(0x10cf96a4u));
  /* 10cd3a7e push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3a80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3a82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3a84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3a86 call 0x10cd1750 */
  push32(0x10cd3a8bu); f_10cd1750();
  /* 10cd3a8b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3a8e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3a91 jne 0x10cd3a94 */
  if (!C.zf) goto L_10cd3a94;
  /* 10cd3a93 int3  */
  x86_unimpl("int3 @ 0x10cd3a93");
L_10cd3a94:;
  /* 10cd3a94 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd3a96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd3a98 jne 0x10cd3a67 */
  if (!C.zf) goto L_10cd3a67;
  /* 10cd3a9a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10cd3aa1:;
  /* 10cd3aa1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3aa4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3aa8 jne 0x10cd3afa */
  if (!C.zf) goto L_10cd3afa;
  /* 10cd3aaa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3aad mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10cd3ab0 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd3ab1 mov dl, byte ptr [0x10cfca91] */
  DL = (r8((uint32_t)(0x10cfca91)));
  /* 10cd3ab7 push edx */
  push32((uint32_t)(EDX));
  /* 10cd3ab8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3abb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3abe push eax */
  push32((uint32_t)(EAX));
  /* 10cd3abf call 0x10cd37a0 */
  push32(0x10cd3ac4u); f_10cd37a0();
  /* 10cd3ac4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3ac7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd3ac9 jne 0x10cd3afa */
  if (!C.zf) goto L_10cd3afa;
L_10cd3acb:;
  /* 10cd3acb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3ace add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3ad1 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd3ad2 push 0x10cf97c8 */
  push32((uint32_t)(0x10cf97c8u));
  /* 10cd3ad7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3ad9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3adb push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3add push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3adf call 0x10cd1750 */
  push32(0x10cd3ae4u); f_10cd1750();
  /* 10cd3ae4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3ae7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3aea jne 0x10cd3aed */
  if (!C.zf) goto L_10cd3aed;
  /* 10cd3aec int3  */
  x86_unimpl("int3 @ 0x10cd3aec");
L_10cd3aed:;
  /* 10cd3aed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd3aef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd3af1 jne 0x10cd3acb */
  if (!C.zf) goto L_10cd3acb;
  /* 10cd3af3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10cd3afa:;
  /* 10cd3afa cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3afe jne 0x10cd3b76 */
  if (!C.zf) goto L_10cd3b76;
  /* 10cd3b00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3b03 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3b07 je 0x10cd3b3c */
  if (C.zf) goto L_10cd3b3c;
L_10cd3b09:;
  /* 10cd3b09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3b0c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10cd3b0f push edx */
  push32((uint32_t)(EDX));
  /* 10cd3b10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3b13 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10cd3b16 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd3b17 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd3b1a push edx */
  push32((uint32_t)(EDX));
  /* 10cd3b1b push 0x10cf97a8 */
  push32((uint32_t)(0x10cf97a8u));
  /* 10cd3b20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3b22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3b24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3b28 call 0x10cd1750 */
  push32(0x10cd3b2du); f_10cd1750();
  /* 10cd3b2d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3b30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3b33 jne 0x10cd3b36 */
  if (!C.zf) goto L_10cd3b36;
  /* 10cd3b35 int3  */
  x86_unimpl("int3 @ 0x10cd3b35");
L_10cd3b36:;
  /* 10cd3b36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd3b38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd3b3a jne 0x10cd3b09 */
  if (!C.zf) goto L_10cd3b09;
L_10cd3b3c:;
  /* 10cd3b3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3b3f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10cd3b42 push edx */
  push32((uint32_t)(EDX));
  /* 10cd3b43 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3b46 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3b49 push eax */
  push32((uint32_t)(EAX));
  /* 10cd3b4a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd3b4d push ecx */
  push32((uint32_t)(ECX));
  /* 10cd3b4e push 0x10cf977c */
  push32((uint32_t)(0x10cf977cu));
  /* 10cd3b53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3b55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3b57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3b59 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3b5b call 0x10cd1750 */
  push32(0x10cd3b60u); f_10cd1750();
  /* 10cd3b60 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3b63 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3b66 jne 0x10cd3b69 */
  if (!C.zf) goto L_10cd3b69;
  /* 10cd3b68 int3  */
  x86_unimpl("int3 @ 0x10cd3b68");
L_10cd3b69:;
  /* 10cd3b69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd3b6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd3b6d jne 0x10cd3b3c */
  if (!C.zf) goto L_10cd3b3c;
  /* 10cd3b6f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10cd3b76:;
  /* 10cd3b76 jmp 0x10cd3983 */
  goto L_10cd3983;
L_10cd3b7b:;
  /* 10cd3b7b push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd3b7d call 0x10cd6130 */
  push32(0x10cd3b82u); f_10cd6130();
  /* 10cd3b82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3b85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10cd3b88:;
  /* 10cd3b88 pop edi */
  EDI = (pop32());
  /* 10cd3b89 pop esi */
  ESI = (pop32());
  /* 10cd3b8a pop ebx */
  EBX = (pop32());
  /* 10cd3b8b mov esp, ebp */
  ESP = (EBP);
  /* 10cd3b8d pop ebp */
  EBP = (pop32());
  /* 10cd3b8e ret  */
  ESPCHK(0x10cd3830u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ba0 @ 0x10cd3ba0 (34 bytes, 13 insns) */
void f_10cd3ba0(void) {
  FTRACE(0x10cd3ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd3ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd3ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd3ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd3ba4 mov eax, dword ptr [0x10cfca84] */
  EAX = (r32((uint32_t)(0x10cfca84)));
  /* 10cd3ba9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd3bac cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3bb0 je 0x10cd3bbb */
  if (C.zf) goto L_10cd3bbb;
  /* 10cd3bb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3bb5 mov dword ptr [0x10cfca84], ecx */
  w32((uint32_t)(0x10cfca84), (ECX));
L_10cd3bbb:;
  /* 10cd3bbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3bbe mov esp, ebp */
  ESP = (EBP);
  /* 10cd3bc0 pop ebp */
  EBP = (pop32());
  /* 10cd3bc1 ret  */
  ESPCHK(0x10cd3ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bd0 @ 0x10cd3bd0 (103 bytes, 38 insns) */
void f_10cd3bd0(void) {
  FTRACE(0x10cd3bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd3bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd3bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd3bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd3bd4 mov eax, dword ptr [0x10cfca84] */
  EAX = (r32((uint32_t)(0x10cfca84)));
  /* 10cd3bd9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd3bdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd3bde jne 0x10cd3be2 */
  if (!C.zf) goto L_10cd3be2;
  /* 10cd3be0 jmp 0x10cd3c33 */
  goto L_10cd3c33;
L_10cd3be2:;
  /* 10cd3be2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd3be4 call 0x10cd6090 */
  push32(0x10cd3be9u); f_10cd6090();
  /* 10cd3be9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3bec mov ecx, dword ptr [0x10cfe44c] */
  ECX = (r32((uint32_t)(0x10cfe44c)));
  /* 10cd3bf2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10cd3bf5 jmp 0x10cd3bff */
  goto L_10cd3bff;
L_10cd3bf7:;
  /* 10cd3bf7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3bfa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cd3bfc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cd3bff:;
  /* 10cd3bff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3c03 je 0x10cd3c29 */
  if (C.zf) goto L_10cd3c29;
  /* 10cd3c05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3c08 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10cd3c0b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10cd3c11 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3c14 jne 0x10cd3c27 */
  if (!C.zf) goto L_10cd3c27;
  /* 10cd3c16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd3c19 push eax */
  push32((uint32_t)(EAX));
  /* 10cd3c1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3c1d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3c20 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd3c21 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10cd3c24u);
  /* 10cd3c24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd3c27:;
  /* 10cd3c27 jmp 0x10cd3bf7 */
  goto L_10cd3bf7;
L_10cd3c29:;
  /* 10cd3c29 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd3c2b call 0x10cd6130 */
  push32(0x10cd3c30u); f_10cd6130();
  /* 10cd3c30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd3c33:;
  /* 10cd3c33 mov esp, ebp */
  ESP = (EBP);
  /* 10cd3c35 pop ebp */
  EBP = (pop32());
  /* 10cd3c36 ret  */
  ESPCHK(0x10cd3bd0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10cd3c40 (75 bytes, 28 insns) */
void f_10cd3c40(void) {
  FTRACE(0x10cd3c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd3c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd3c41 mov ebp, esp */
  EBP = (ESP);
  /* 10cd3c43 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd3c44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3c48 je 0x10cd3c7d */
  if (C.zf) goto L_10cd3c7d;
  /* 10cd3c4a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd3c4d push eax */
  push32((uint32_t)(EAX));
  /* 10cd3c4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3c51 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd3c52 call dword ptr [0x10d0028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0028c))), 0x10cd3c58u);
  /* 10cd3c58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd3c5a jne 0x10cd3c7d */
  if (!C.zf) goto L_10cd3c7d;
  /* 10cd3c5c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3c60 je 0x10cd3c74 */
  if (C.zf) goto L_10cd3c74;
  /* 10cd3c62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd3c65 push edx */
  push32((uint32_t)(EDX));
  /* 10cd3c66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3c69 push eax */
  push32((uint32_t)(EAX));
  /* 10cd3c6a call dword ptr [0x10d00288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00288))), 0x10cd3c70u);
  /* 10cd3c70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd3c72 jne 0x10cd3c7d */
  if (!C.zf) goto L_10cd3c7d;
L_10cd3c74:;
  /* 10cd3c74 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10cd3c7b jmp 0x10cd3c84 */
  goto L_10cd3c84;
L_10cd3c7d:;
  /* 10cd3c7d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10cd3c84:;
  /* 10cd3c84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3c87 mov esp, ebp */
  ESP = (EBP);
  /* 10cd3c89 pop ebp */
  EBP = (pop32());
  /* 10cd3c8a ret  */
  ESPCHK(0x10cd3c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c90 @ 0x10cd3c90 (134 bytes, 50 insns) */
void f_10cd3c90(void) {
  FTRACE(0x10cd3c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd3c90 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd3c91 mov ebp, esp */
  EBP = (ESP);
  /* 10cd3c93 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd3c94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3c98 jne 0x10cd3c9e */
  if (!C.zf) goto L_10cd3c9e;
  /* 10cd3c9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd3c9c jmp 0x10cd3d12 */
  goto L_10cd3d12;
L_10cd3c9e:;
  /* 10cd3c9e push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd3ca0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10cd3ca2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3ca5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd3ca8 push eax */
  push32((uint32_t)(EAX));
  /* 10cd3ca9 call 0x10cd3c40 */
  push32(0x10cd3caeu); f_10cd3c40();
  /* 10cd3cae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3cb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd3cb3 jne 0x10cd3cb9 */
  if (!C.zf) goto L_10cd3cb9;
  /* 10cd3cb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd3cb7 jmp 0x10cd3d12 */
  goto L_10cd3d12;
L_10cd3cb9:;
  /* 10cd3cb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3cbc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd3cbf push ecx */
  push32((uint32_t)(ECX));
  /* 10cd3cc0 call 0x10cd6990 */
  push32(0x10cd3cc5u); f_10cd6990();
  /* 10cd3cc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3cc8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd3ccb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3ccf je 0x10cd3ce6 */
  if (C.zf) goto L_10cd3ce6;
  /* 10cd3cd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3cd4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd3cd7 push edx */
  push32((uint32_t)(EDX));
  /* 10cd3cd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3cdb push eax */
  push32((uint32_t)(EAX));
  /* 10cd3cdc call 0x10cd69f0 */
  push32(0x10cd3ce1u); f_10cd69f0();
  /* 10cd3ce1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3ce4 jmp 0x10cd3d12 */
  goto L_10cd3d12;
L_10cd3ce6:;
  /* 10cd3ce6 mov ecx, dword ptr [0x10cfe400] */
  ECX = (r32((uint32_t)(0x10cfe400)));
  /* 10cd3cec and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd3cf2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd3cf4 je 0x10cd3cfd */
  if (C.zf) goto L_10cd3cfd;
  /* 10cd3cf6 mov eax, 1 */
  EAX = (0x1u);
  /* 10cd3cfb jmp 0x10cd3d12 */
  goto L_10cd3d12;
L_10cd3cfd:;
  /* 10cd3cfd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3d00 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd3d03 push edx */
  push32((uint32_t)(EDX));
  /* 10cd3d04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3d06 mov eax, dword ptr [0x10cffdac] */
  EAX = (r32((uint32_t)(0x10cffdac)));
  /* 10cd3d0b push eax */
  push32((uint32_t)(EAX));
  /* 10cd3d0c call dword ptr [0x10d00290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00290))), 0x10cd3d12u);
L_10cd3d12:;
  /* 10cd3d12 mov esp, ebp */
  ESP = (EBP);
  /* 10cd3d14 pop ebp */
  EBP = (pop32());
  /* 10cd3d15 ret  */
  ESPCHK(0x10cd3c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d20 @ 0x10cd3d20 (227 bytes, 80 insns) */
void f_10cd3d20(void) {
  FTRACE(0x10cd3d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd3d20 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd3d21 mov ebp, esp */
  EBP = (ESP);
  /* 10cd3d23 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd3d24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3d27 push eax */
  push32((uint32_t)(EAX));
  /* 10cd3d28 call 0x10cd3c90 */
  push32(0x10cd3d2du); f_10cd3c90();
  /* 10cd3d2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3d30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd3d32 jne 0x10cd3d3b */
  if (!C.zf) goto L_10cd3d3b;
  /* 10cd3d34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd3d36 jmp 0x10cd3dff */
  goto L_10cd3dff;
L_10cd3d3b:;
  /* 10cd3d3b push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd3d3d call 0x10cd6090 */
  push32(0x10cd3d42u); f_10cd6090();
  /* 10cd3d42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3d45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3d48 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd3d4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10cd3d4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3d51 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10cd3d54 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd3d59 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3d5c je 0x10cd3d80 */
  if (C.zf) goto L_10cd3d80;
  /* 10cd3d5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3d61 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3d65 je 0x10cd3d80 */
  if (C.zf) goto L_10cd3d80;
  /* 10cd3d67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3d6a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10cd3d6d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd3d72 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3d75 je 0x10cd3d80 */
  if (C.zf) goto L_10cd3d80;
  /* 10cd3d77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3d7a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3d7e jne 0x10cd3df3 */
  if (!C.zf) goto L_10cd3df3;
L_10cd3d80:;
  /* 10cd3d80 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd3d82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd3d85 push edx */
  push32((uint32_t)(EDX));
  /* 10cd3d86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3d89 push eax */
  push32((uint32_t)(EAX));
  /* 10cd3d8a call 0x10cd3c40 */
  push32(0x10cd3d8fu); f_10cd3c40();
  /* 10cd3d8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3d92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd3d94 je 0x10cd3df3 */
  if (C.zf) goto L_10cd3df3;
  /* 10cd3d96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3d99 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10cd3d9c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3d9f jne 0x10cd3df3 */
  if (!C.zf) goto L_10cd3df3;
  /* 10cd3da1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3da4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10cd3da7 cmp ecx, dword ptr [0x10cfca88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cfca88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3dad jg 0x10cd3df3 */
  if ((!C.zf&&C.sf==C.of)) goto L_10cd3df3;
  /* 10cd3daf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3db3 je 0x10cd3dc0 */
  if (C.zf) goto L_10cd3dc0;
  /* 10cd3db5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd3db8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3dbb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10cd3dbe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10cd3dc0:;
  /* 10cd3dc0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3dc4 je 0x10cd3dd1 */
  if (C.zf) goto L_10cd3dd1;
  /* 10cd3dc6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd3dc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3dcc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10cd3dcf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10cd3dd1:;
  /* 10cd3dd1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3dd5 je 0x10cd3de2 */
  if (C.zf) goto L_10cd3de2;
  /* 10cd3dd7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd3dda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3ddd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10cd3de0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10cd3de2:;
  /* 10cd3de2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd3de4 call 0x10cd6130 */
  push32(0x10cd3de9u); f_10cd6130();
  /* 10cd3de9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3dec mov eax, 1 */
  EAX = (0x1u);
  /* 10cd3df1 jmp 0x10cd3dff */
  goto L_10cd3dff;
L_10cd3df3:;
  /* 10cd3df3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd3df5 call 0x10cd6130 */
  push32(0x10cd3dfau); f_10cd6130();
  /* 10cd3dfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3dfd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10cd3dff:;
  /* 10cd3dff mov esp, ebp */
  ESP = (EBP);
  /* 10cd3e01 pop ebp */
  EBP = (pop32());
  /* 10cd3e02 ret  */
  ESPCHK(0x10cd3d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e10 @ 0x10cd3e10 (28 bytes, 11 insns) */
void f_10cd3e10(void) {
  FTRACE(0x10cd3e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd3e10 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd3e11 mov ebp, esp */
  EBP = (ESP);
  /* 10cd3e13 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd3e14 mov eax, dword ptr [0x10cffdb8] */
  EAX = (r32((uint32_t)(0x10cffdb8)));
  /* 10cd3e19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd3e1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3e1f mov dword ptr [0x10cffdb8], ecx */
  w32((uint32_t)(0x10cffdb8), (ECX));
  /* 10cd3e25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3e28 mov esp, ebp */
  ESP = (EBP);
  /* 10cd3e2a pop ebp */
  EBP = (pop32());
  /* 10cd3e2b ret  */
  ESPCHK(0x10cd3e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e30 @ 0x10cd3e30 (362 bytes, 116 insns) */
void f_10cd3e30(void) {
  FTRACE(0x10cd3e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd3e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd3e31 mov ebp, esp */
  EBP = (ESP);
  /* 10cd3e33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd3e36 push ebx */
  push32((uint32_t)(EBX));
  /* 10cd3e37 push esi */
  push32((uint32_t)(ESI));
  /* 10cd3e38 push edi */
  push32((uint32_t)(EDI));
  /* 10cd3e39 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3e3d jne 0x10cd3e6a */
  if (!C.zf) goto L_10cd3e6a;
L_10cd3e3f:;
  /* 10cd3e3f push 0x10cf98dc */
  push32((uint32_t)(0x10cf98dcu));
  /* 10cd3e44 push 0x10cf93f4 */
  push32((uint32_t)(0x10cf93f4u));
  /* 10cd3e49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3e4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3e4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3e4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3e51 call 0x10cd1750 */
  push32(0x10cd3e56u); f_10cd1750();
  /* 10cd3e56 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3e59 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3e5c jne 0x10cd3e5f */
  if (!C.zf) goto L_10cd3e5f;
  /* 10cd3e5e int3  */
  x86_unimpl("int3 @ 0x10cd3e5e");
L_10cd3e5f:;
  /* 10cd3e5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd3e61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd3e63 jne 0x10cd3e3f */
  if (!C.zf) goto L_10cd3e3f;
  /* 10cd3e65 jmp 0x10cd3f93 */
  goto L_10cd3f93;
L_10cd3e6a:;
  /* 10cd3e6a push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd3e6c call 0x10cd6090 */
  push32(0x10cd3e71u); f_10cd6090();
  /* 10cd3e71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3e74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3e77 mov edx, dword ptr [0x10cfe44c] */
  EDX = (r32((uint32_t)(0x10cfe44c)));
  /* 10cd3e7d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10cd3e7f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cd3e86 jmp 0x10cd3e91 */
  goto L_10cd3e91;
L_10cd3e88:;
  /* 10cd3e88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3e8b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3e8e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cd3e91:;
  /* 10cd3e91 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3e95 jge 0x10cd3eb5 */
  if ((C.sf==C.of)) goto L_10cd3eb5;
  /* 10cd3e97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3e9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3e9d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10cd3ea5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3ea8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3eab mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10cd3eb3 jmp 0x10cd3e88 */
  goto L_10cd3e88;
L_10cd3eb5:;
  /* 10cd3eb5 mov edx, dword ptr [0x10cfe44c] */
  EDX = (r32((uint32_t)(0x10cfe44c)));
  /* 10cd3ebb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10cd3ebe jmp 0x10cd3ec8 */
  goto L_10cd3ec8;
L_10cd3ec0:;
  /* 10cd3ec0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3ec3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cd3ec5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10cd3ec8:;
  /* 10cd3ec8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3ecc je 0x10cd3f71 */
  if (C.zf) goto L_10cd3f71;
  /* 10cd3ed2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3ed5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10cd3ed8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd3edd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd3edf jl 0x10cd3f47 */
  if ((C.sf!=C.of)) goto L_10cd3f47;
  /* 10cd3ee1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3ee4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10cd3ee7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10cd3eed cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3ef0 jge 0x10cd3f47 */
  if ((C.sf==C.of)) goto L_10cd3f47;
  /* 10cd3ef2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3ef5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10cd3ef8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd3efe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3f01 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10cd3f05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3f08 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3f0b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10cd3f0e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10cd3f14 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3f17 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 10cd3f1b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3f1e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10cd3f21 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd3f26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3f29 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10cd3f2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3f30 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3f33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3f36 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10cd3f39 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd3f3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3f41 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10cd3f45 jmp 0x10cd3f6c */
  goto L_10cd3f6c;
L_10cd3f47:;
  /* 10cd3f47 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3f4a push edx */
  push32((uint32_t)(EDX));
  /* 10cd3f4b push 0x10cf98b8 */
  push32((uint32_t)(0x10cf98b8u));
  /* 10cd3f50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3f52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3f54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3f56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3f58 call 0x10cd1750 */
  push32(0x10cd3f5du); f_10cd1750();
  /* 10cd3f5d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3f60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3f63 jne 0x10cd3f66 */
  if (!C.zf) goto L_10cd3f66;
  /* 10cd3f65 int3  */
  x86_unimpl("int3 @ 0x10cd3f65");
L_10cd3f66:;
  /* 10cd3f66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd3f68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd3f6a jne 0x10cd3f47 */
  if (!C.zf) goto L_10cd3f47;
L_10cd3f6c:;
  /* 10cd3f6c jmp 0x10cd3ec0 */
  goto L_10cd3ec0;
L_10cd3f71:;
  /* 10cd3f71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3f74 mov edx, dword ptr [0x10cfe454] */
  EDX = (r32((uint32_t)(0x10cfe454)));
  /* 10cd3f7a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 10cd3f7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd3f80 mov ecx, dword ptr [0x10cfe448] */
  ECX = (r32((uint32_t)(0x10cfe448)));
  /* 10cd3f86 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10cd3f89 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd3f8b call 0x10cd6130 */
  push32(0x10cd3f90u); f_10cd6130();
  /* 10cd3f90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd3f93:;
  /* 10cd3f93 pop edi */
  EDI = (pop32());
  /* 10cd3f94 pop esi */
  ESI = (pop32());
  /* 10cd3f95 pop ebx */
  EBX = (pop32());
  /* 10cd3f96 mov esp, ebp */
  ESP = (EBP);
  /* 10cd3f98 pop ebp */
  EBP = (pop32());
  /* 10cd3f99 ret  */
  ESPCHK(0x10cd3e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fa0 @ 0x10cd3fa0 (291 bytes, 95 insns) */
void f_10cd3fa0(void) {
  FTRACE(0x10cd3fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd3fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd3fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd3fa3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd3fa6 push ebx */
  push32((uint32_t)(EBX));
  /* 10cd3fa7 push esi */
  push32((uint32_t)(ESI));
  /* 10cd3fa8 push edi */
  push32((uint32_t)(EDI));
  /* 10cd3fa9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10cd3fb0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3fb4 je 0x10cd3fc2 */
  if (C.zf) goto L_10cd3fc2;
  /* 10cd3fb6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3fba je 0x10cd3fc2 */
  if (C.zf) goto L_10cd3fc2;
  /* 10cd3fbc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3fc0 jne 0x10cd3ff0 */
  if (!C.zf) goto L_10cd3ff0;
L_10cd3fc2:;
  /* 10cd3fc2 push 0x10cf9904 */
  push32((uint32_t)(0x10cf9904u));
  /* 10cd3fc7 push 0x10cf93f4 */
  push32((uint32_t)(0x10cf93f4u));
  /* 10cd3fcc push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3fce push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3fd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3fd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd3fd4 call 0x10cd1750 */
  push32(0x10cd3fd9u); f_10cd1750();
  /* 10cd3fd9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3fdc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd3fdf jne 0x10cd3fe2 */
  if (!C.zf) goto L_10cd3fe2;
  /* 10cd3fe1 int3  */
  x86_unimpl("int3 @ 0x10cd3fe1");
L_10cd3fe2:;
  /* 10cd3fe2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd3fe4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd3fe6 jne 0x10cd3fc2 */
  if (!C.zf) goto L_10cd3fc2;
  /* 10cd3fe8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd3feb jmp 0x10cd40bc */
  goto L_10cd40bc;
L_10cd3ff0:;
  /* 10cd3ff0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cd3ff7 jmp 0x10cd4002 */
  goto L_10cd4002;
L_10cd3ff9:;
  /* 10cd3ff9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd3ffc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd3fff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10cd4002:;
  /* 10cd4002 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4006 jge 0x10cd408c */
  if ((C.sf==C.of)) goto L_10cd408c;
  /* 10cd400c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd400f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd4012 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4015 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd4018 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 10cd401c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd4020 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4023 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd4026 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10cd402a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd402d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd4030 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4033 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd4036 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 10cd403a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd403e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4041 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd4044 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10cd4048 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd404b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd404e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4053 jne 0x10cd4062 */
  if (!C.zf) goto L_10cd4062;
  /* 10cd4055 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4058 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd405b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4060 je 0x10cd4087 */
  if (C.zf) goto L_10cd4087;
L_10cd4062:;
  /* 10cd4062 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4066 je 0x10cd4087 */
  if (C.zf) goto L_10cd4087;
  /* 10cd4068 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd406c jne 0x10cd4080 */
  if (!C.zf) goto L_10cd4080;
  /* 10cd406e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4072 jne 0x10cd4087 */
  if (!C.zf) goto L_10cd4087;
  /* 10cd4074 mov eax, dword ptr [0x10cfca84] */
  EAX = (r32((uint32_t)(0x10cfca84)));
  /* 10cd4079 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd407c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd407e je 0x10cd4087 */
  if (C.zf) goto L_10cd4087;
L_10cd4080:;
  /* 10cd4080 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10cd4087:;
  /* 10cd4087 jmp 0x10cd3ff9 */
  goto L_10cd3ff9;
L_10cd408c:;
  /* 10cd408c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd408f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd4092 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10cd4095 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd4098 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd409b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 10cd409e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd40a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd40a4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10cd40a7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd40aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd40ad mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10cd40b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd40b3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10cd40b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10cd40bc:;
  /* 10cd40bc pop edi */
  EDI = (pop32());
  /* 10cd40bd pop esi */
  ESI = (pop32());
  /* 10cd40be pop ebx */
  EBX = (pop32());
  /* 10cd40bf mov esp, ebp */
  ESP = (EBP);
  /* 10cd40c1 pop ebp */
  EBP = (pop32());
  /* 10cd40c2 ret  */
  ESPCHK(0x10cd3fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_100040d0 @ 0x10cd40d0 (697 bytes, 253 insns) */
void f_10cd40d0(void) {
  FTRACE(0x10cd40d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd40d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd40d1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd40d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd40d6 push ebx */
  push32((uint32_t)(EBX));
  /* 10cd40d7 push esi */
  push32((uint32_t)(ESI));
  /* 10cd40d8 push edi */
  push32((uint32_t)(EDI));
  /* 10cd40d9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10cd40e0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd40e2 call 0x10cd6090 */
  push32(0x10cd40e7u); f_10cd6090();
  /* 10cd40e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd40ea:;
  /* 10cd40ea push 0x10cf99fc */
  push32((uint32_t)(0x10cf99fcu));
  /* 10cd40ef push 0x10cf93f4 */
  push32((uint32_t)(0x10cf93f4u));
  /* 10cd40f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd40f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd40f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd40fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd40fc call 0x10cd1750 */
  push32(0x10cd4101u); f_10cd1750();
  /* 10cd4101 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4104 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4107 jne 0x10cd410a */
  if (!C.zf) goto L_10cd410a;
  /* 10cd4109 int3  */
  x86_unimpl("int3 @ 0x10cd4109");
L_10cd410a:;
  /* 10cd410a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd410c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd410e jne 0x10cd40ea */
  if (!C.zf) goto L_10cd40ea;
  /* 10cd4110 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4114 je 0x10cd411e */
  if (C.zf) goto L_10cd411e;
  /* 10cd4116 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd4119 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd411b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10cd411e:;
  /* 10cd411e mov eax, dword ptr [0x10cfe44c] */
  EAX = (r32((uint32_t)(0x10cfe44c)));
  /* 10cd4123 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd4126 jmp 0x10cd4130 */
  goto L_10cd4130;
L_10cd4128:;
  /* 10cd4128 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd412b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd412d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10cd4130:;
  /* 10cd4130 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4134 je 0x10cd4352 */
  if (C.zf) goto L_10cd4352;
  /* 10cd413a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd413d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4140 je 0x10cd4352 */
  if (C.zf) goto L_10cd4352;
  /* 10cd4146 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4149 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10cd414c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10cd4152 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4155 je 0x10cd4184 */
  if (C.zf) goto L_10cd4184;
  /* 10cd4157 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd415a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10cd415d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd4163 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd4165 je 0x10cd4184 */
  if (C.zf) goto L_10cd4184;
  /* 10cd4167 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd416a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10cd416d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd4172 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4175 jne 0x10cd4189 */
  if (!C.zf) goto L_10cd4189;
  /* 10cd4177 mov ecx, dword ptr [0x10cfca84] */
  ECX = (r32((uint32_t)(0x10cfca84)));
  /* 10cd417d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd4180 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd4182 jne 0x10cd4189 */
  if (!C.zf) goto L_10cd4189;
L_10cd4184:;
  /* 10cd4184 jmp 0x10cd434d */
  goto L_10cd434d;
L_10cd4189:;
  /* 10cd4189 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd418c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4190 je 0x10cd4202 */
  if (C.zf) goto L_10cd4202;
  /* 10cd4192 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4194 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd4196 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4199 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10cd419c push ecx */
  push32((uint32_t)(ECX));
  /* 10cd419d call 0x10cd3c40 */
  push32(0x10cd41a2u); f_10cd3c40();
  /* 10cd41a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd41a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd41a7 jne 0x10cd41d3 */
  if (!C.zf) goto L_10cd41d3;
L_10cd41a9:;
  /* 10cd41a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd41ac mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10cd41af push eax */
  push32((uint32_t)(EAX));
  /* 10cd41b0 push 0x10cf99e8 */
  push32((uint32_t)(0x10cf99e8u));
  /* 10cd41b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd41b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd41b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd41bb push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd41bd call 0x10cd1750 */
  push32(0x10cd41c2u); f_10cd1750();
  /* 10cd41c2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd41c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd41c8 jne 0x10cd41cb */
  if (!C.zf) goto L_10cd41cb;
  /* 10cd41ca int3  */
  x86_unimpl("int3 @ 0x10cd41ca");
L_10cd41cb:;
  /* 10cd41cb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd41cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd41cf jne 0x10cd41a9 */
  if (!C.zf) goto L_10cd41a9;
  /* 10cd41d1 jmp 0x10cd4202 */
  goto L_10cd4202;
L_10cd41d3:;
  /* 10cd41d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd41d6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10cd41d9 push eax */
  push32((uint32_t)(EAX));
  /* 10cd41da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd41dd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10cd41e0 push edx */
  push32((uint32_t)(EDX));
  /* 10cd41e1 push 0x10cf99dc */
  push32((uint32_t)(0x10cf99dcu));
  /* 10cd41e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd41e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd41ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd41ec push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd41ee call 0x10cd1750 */
  push32(0x10cd41f3u); f_10cd1750();
  /* 10cd41f3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd41f6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd41f9 jne 0x10cd41fc */
  if (!C.zf) goto L_10cd41fc;
  /* 10cd41fb int3  */
  x86_unimpl("int3 @ 0x10cd41fb");
L_10cd41fc:;
  /* 10cd41fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd41fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd4200 jne 0x10cd41d3 */
  if (!C.zf) goto L_10cd41d3;
L_10cd4202:;
  /* 10cd4202 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4205 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10cd4208 push edx */
  push32((uint32_t)(EDX));
  /* 10cd4209 push 0x10cf99d4 */
  push32((uint32_t)(0x10cf99d4u));
  /* 10cd420e push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4210 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4212 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4214 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4216 call 0x10cd1750 */
  push32(0x10cd421bu); f_10cd1750();
  /* 10cd421b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd421e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4221 jne 0x10cd4224 */
  if (!C.zf) goto L_10cd4224;
  /* 10cd4223 int3  */
  x86_unimpl("int3 @ 0x10cd4223");
L_10cd4224:;
  /* 10cd4224 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd4226 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd4228 jne 0x10cd4202 */
  if (!C.zf) goto L_10cd4202;
  /* 10cd422a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd422d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10cd4230 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10cd4236 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4239 jne 0x10cd42ac */
  if (!C.zf) goto L_10cd42ac;
L_10cd423b:;
  /* 10cd423b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd423e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10cd4241 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd4242 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4245 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10cd4248 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10cd424b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd4250 push eax */
  push32((uint32_t)(EAX));
  /* 10cd4251 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4254 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4257 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd4258 push 0x10cf99a0 */
  push32((uint32_t)(0x10cf99a0u));
  /* 10cd425d push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd425f push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4261 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4263 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4265 call 0x10cd1750 */
  push32(0x10cd426au); f_10cd1750();
  /* 10cd426a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd426d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4270 jne 0x10cd4273 */
  if (!C.zf) goto L_10cd4273;
  /* 10cd4272 int3  */
  x86_unimpl("int3 @ 0x10cd4272");
L_10cd4273:;
  /* 10cd4273 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd4275 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd4277 jne 0x10cd423b */
  if (!C.zf) goto L_10cd423b;
  /* 10cd4279 cmp dword ptr [0x10cffdb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cffdb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4280 je 0x10cd429b */
  if (C.zf) goto L_10cd429b;
  /* 10cd4282 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4285 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10cd4288 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd4289 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd428c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd428f push edx */
  push32((uint32_t)(EDX));
  /* 10cd4290 call dword ptr [0x10cffdb8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cffdb8))), 0x10cd4296u);
  /* 10cd4296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4299 jmp 0x10cd42a7 */
  goto L_10cd42a7;
L_10cd429b:;
  /* 10cd429b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd429e push eax */
  push32((uint32_t)(EAX));
  /* 10cd429f call 0x10cd4390 */
  push32(0x10cd42a4u); f_10cd4390();
  /* 10cd42a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd42a7:;
  /* 10cd42a7 jmp 0x10cd434d */
  goto L_10cd434d;
L_10cd42ac:;
  /* 10cd42ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd42af cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd42b3 jne 0x10cd42f2 */
  if (!C.zf) goto L_10cd42f2;
L_10cd42b5:;
  /* 10cd42b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd42b8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10cd42bb push eax */
  push32((uint32_t)(EAX));
  /* 10cd42bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd42bf add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd42c2 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd42c3 push 0x10cf9978 */
  push32((uint32_t)(0x10cf9978u));
  /* 10cd42c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd42ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd42cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd42ce push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd42d0 call 0x10cd1750 */
  push32(0x10cd42d5u); f_10cd1750();
  /* 10cd42d5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd42d8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd42db jne 0x10cd42de */
  if (!C.zf) goto L_10cd42de;
  /* 10cd42dd int3  */
  x86_unimpl("int3 @ 0x10cd42dd");
L_10cd42de:;
  /* 10cd42de xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd42e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd42e2 jne 0x10cd42b5 */
  if (!C.zf) goto L_10cd42b5;
  /* 10cd42e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd42e7 push eax */
  push32((uint32_t)(EAX));
  /* 10cd42e8 call 0x10cd4390 */
  push32(0x10cd42edu); f_10cd4390();
  /* 10cd42ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd42f0 jmp 0x10cd434d */
  goto L_10cd434d;
L_10cd42f2:;
  /* 10cd42f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd42f5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10cd42f8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10cd42fe cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4301 jne 0x10cd434d */
  if (!C.zf) goto L_10cd434d;
L_10cd4303:;
  /* 10cd4303 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4306 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10cd4309 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd430a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd430d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10cd4310 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10cd4313 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd4318 push eax */
  push32((uint32_t)(EAX));
  /* 10cd4319 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd431c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd431f push ecx */
  push32((uint32_t)(ECX));
  /* 10cd4320 push 0x10cf9944 */
  push32((uint32_t)(0x10cf9944u));
  /* 10cd4325 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4327 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4329 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd432b push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd432d call 0x10cd1750 */
  push32(0x10cd4332u); f_10cd1750();
  /* 10cd4332 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4335 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4338 jne 0x10cd433b */
  if (!C.zf) goto L_10cd433b;
  /* 10cd433a int3  */
  x86_unimpl("int3 @ 0x10cd433a");
L_10cd433b:;
  /* 10cd433b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd433d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd433f jne 0x10cd4303 */
  if (!C.zf) goto L_10cd4303;
  /* 10cd4341 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4344 push eax */
  push32((uint32_t)(EAX));
  /* 10cd4345 call 0x10cd4390 */
  push32(0x10cd434au); f_10cd4390();
  /* 10cd434a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd434d:;
  /* 10cd434d jmp 0x10cd4128 */
  goto L_10cd4128;
L_10cd4352:;
  /* 10cd4352 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd4354 call 0x10cd6130 */
  push32(0x10cd4359u); f_10cd6130();
  /* 10cd4359 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd435c:;
  /* 10cd435c push 0x10cf992c */
  push32((uint32_t)(0x10cf992cu));
  /* 10cd4361 push 0x10cf93f4 */
  push32((uint32_t)(0x10cf93f4u));
  /* 10cd4366 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4368 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd436a push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd436c push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd436e call 0x10cd1750 */
  push32(0x10cd4373u); f_10cd1750();
  /* 10cd4373 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4376 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4379 jne 0x10cd437c */
  if (!C.zf) goto L_10cd437c;
  /* 10cd437b int3  */
  x86_unimpl("int3 @ 0x10cd437b");
L_10cd437c:;
  /* 10cd437c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd437e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd4380 jne 0x10cd435c */
  if (!C.zf) goto L_10cd435c;
  /* 10cd4382 pop edi */
  EDI = (pop32());
  /* 10cd4383 pop esi */
  ESI = (pop32());
  /* 10cd4384 pop ebx */
  EBX = (pop32());
  /* 10cd4385 mov esp, ebp */
  ESP = (EBP);
  /* 10cd4387 pop ebp */
  EBP = (pop32());
  /* 10cd4388 ret  */
  ESPCHK(0x10cd40d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004390 @ 0x10cd4390 (276 bytes, 89 insns) */
void f_10cd4390(void) {
  FTRACE(0x10cd4390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd4390 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd4391 mov ebp, esp */
  EBP = (ESP);
  /* 10cd4393 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd4396 push ebx */
  push32((uint32_t)(EBX));
  /* 10cd4397 push esi */
  push32((uint32_t)(ESI));
  /* 10cd4398 push edi */
  push32((uint32_t)(EDI));
  /* 10cd4399 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10cd43a0 jmp 0x10cd43ab */
  goto L_10cd43ab;
L_10cd43a2:;
  /* 10cd43a2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10cd43a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd43a8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_10cd43ab:;
  /* 10cd43ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd43ae cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd43b2 jge 0x10cd43bf */
  if ((C.sf==C.of)) goto L_10cd43bf;
  /* 10cd43b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd43b7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10cd43ba mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10cd43bd jmp 0x10cd43c6 */
  goto L_10cd43c6;
L_10cd43bf:;
  /* 10cd43bf mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10cd43c6:;
  /* 10cd43c6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10cd43c9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd43cc jge 0x10cd446c */
  if ((C.sf==C.of)) goto L_10cd446c;
  /* 10cd43d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd43d5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd43d8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 10cd43db mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 10cd43de cmp dword ptr [0x10cfcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd43e5 jle 0x10cd4403 */
  if ((C.zf||C.sf!=C.of)) goto L_10cd4403;
  /* 10cd43e7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 10cd43ec mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd43ef and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd43f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd43f6 call 0x10cd86a0 */
  push32(0x10cd43fbu); f_10cd86a0();
  /* 10cd43fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd43fe mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10cd4401 jmp 0x10cd4420 */
  goto L_10cd4420;
L_10cd4403:;
  /* 10cd4403 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd4406 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10cd440c mov eax, dword ptr [0x10cfcc98] */
  EAX = (r32((uint32_t)(0x10cfcc98)));
  /* 10cd4411 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd4413 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10cd4417 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd441d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10cd4420:;
  /* 10cd4420 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4424 je 0x10cd4434 */
  if (C.zf) goto L_10cd4434;
  /* 10cd4426 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd4429 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10cd442f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10cd4432 jmp 0x10cd443b */
  goto L_10cd443b;
L_10cd4434:;
  /* 10cd4434 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_10cd443b:;
  /* 10cd443b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10cd443e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10cd4441 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10cd4445 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10cd4448 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10cd444e push edx */
  push32((uint32_t)(EDX));
  /* 10cd444f push 0x10cf9a20 */
  push32((uint32_t)(0x10cf9a20u));
  /* 10cd4454 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10cd4457 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd445a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 10cd445e push ecx */
  push32((uint32_t)(ECX));
  /* 10cd445f call 0x10cd85a0 */
  push32(0x10cd4464u); f_10cd85a0();
  /* 10cd4464 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4467 jmp 0x10cd43a2 */
  goto L_10cd43a2;
L_10cd446c:;
  /* 10cd446c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10cd446f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10cd4474:;
  /* 10cd4474 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10cd4477 push eax */
  push32((uint32_t)(EAX));
  /* 10cd4478 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10cd447b push ecx */
  push32((uint32_t)(ECX));
  /* 10cd447c push 0x10cf9a10 */
  push32((uint32_t)(0x10cf9a10u));
  /* 10cd4481 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4483 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4485 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4487 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4489 call 0x10cd1750 */
  push32(0x10cd448eu); f_10cd1750();
  /* 10cd448e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4491 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4494 jne 0x10cd4497 */
  if (!C.zf) goto L_10cd4497;
  /* 10cd4496 int3  */
  x86_unimpl("int3 @ 0x10cd4496");
L_10cd4497:;
  /* 10cd4497 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd4499 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd449b jne 0x10cd4474 */
  if (!C.zf) goto L_10cd4474;
  /* 10cd449d pop edi */
  EDI = (pop32());
  /* 10cd449e pop esi */
  ESI = (pop32());
  /* 10cd449f pop ebx */
  EBX = (pop32());
  /* 10cd44a0 mov esp, ebp */
  ESP = (EBP);
  /* 10cd44a2 pop ebp */
  EBP = (pop32());
  /* 10cd44a3 ret  */
  ESPCHK(0x10cd4390u, _esp0);
  ESP += 4; return;
}

/* FUN_100044b0 @ 0x10cd44b0 (116 bytes, 46 insns) */
void f_10cd44b0(void) {
  FTRACE(0x10cd44b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd44b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd44b1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd44b3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd44b6 push ebx */
  push32((uint32_t)(EBX));
  /* 10cd44b7 push esi */
  push32((uint32_t)(ESI));
  /* 10cd44b8 push edi */
  push32((uint32_t)(EDI));
  /* 10cd44b9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10cd44bc push eax */
  push32((uint32_t)(EAX));
  /* 10cd44bd call 0x10cd3e30 */
  push32(0x10cd44c2u); f_10cd3e30();
  /* 10cd44c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd44c5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd44c9 jne 0x10cd44e4 */
  if (!C.zf) goto L_10cd44e4;
  /* 10cd44cb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd44cf jne 0x10cd44e4 */
  if (!C.zf) goto L_10cd44e4;
  /* 10cd44d1 mov ecx, dword ptr [0x10cfca84] */
  ECX = (r32((uint32_t)(0x10cfca84)));
  /* 10cd44d7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd44da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd44dc je 0x10cd451b */
  if (C.zf) goto L_10cd451b;
  /* 10cd44de cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd44e2 je 0x10cd451b */
  if (C.zf) goto L_10cd451b;
L_10cd44e4:;
  /* 10cd44e4 push 0x10cf9a28 */
  push32((uint32_t)(0x10cf9a28u));
  /* 10cd44e9 push 0x10cf93f4 */
  push32((uint32_t)(0x10cf93f4u));
  /* 10cd44ee push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd44f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd44f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd44f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd44f6 call 0x10cd1750 */
  push32(0x10cd44fbu); f_10cd1750();
  /* 10cd44fb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd44fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4501 jne 0x10cd4504 */
  if (!C.zf) goto L_10cd4504;
  /* 10cd4503 int3  */
  x86_unimpl("int3 @ 0x10cd4503");
L_10cd4504:;
  /* 10cd4504 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd4506 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd4508 jne 0x10cd44e4 */
  if (!C.zf) goto L_10cd44e4;
  /* 10cd450a push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd450c call 0x10cd40d0 */
  push32(0x10cd4511u); f_10cd40d0();
  /* 10cd4511 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4514 mov eax, 1 */
  EAX = (0x1u);
  /* 10cd4519 jmp 0x10cd451d */
  goto L_10cd451d;
L_10cd451b:;
  /* 10cd451b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10cd451d:;
  /* 10cd451d pop edi */
  EDI = (pop32());
  /* 10cd451e pop esi */
  ESI = (pop32());
  /* 10cd451f pop ebx */
  EBX = (pop32());
  /* 10cd4520 mov esp, ebp */
  ESP = (EBP);
  /* 10cd4522 pop ebp */
  EBP = (pop32());
  /* 10cd4523 ret  */
  ESPCHK(0x10cd44b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004530 @ 0x10cd4530 (197 bytes, 79 insns) */
void f_10cd4530(void) {
  FTRACE(0x10cd4530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd4530 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd4531 mov ebp, esp */
  EBP = (ESP);
  /* 10cd4533 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd4534 push ebx */
  push32((uint32_t)(EBX));
  /* 10cd4535 push esi */
  push32((uint32_t)(ESI));
  /* 10cd4536 push edi */
  push32((uint32_t)(EDI));
  /* 10cd4537 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd453b jne 0x10cd4542 */
  if (!C.zf) goto L_10cd4542;
  /* 10cd453d jmp 0x10cd45ee */
  goto L_10cd45ee;
L_10cd4542:;
  /* 10cd4542 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cd4549 jmp 0x10cd4554 */
  goto L_10cd4554;
L_10cd454b:;
  /* 10cd454b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd454e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4551 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cd4554:;
  /* 10cd4554 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4558 jge 0x10cd459e */
  if ((C.sf==C.of)) goto L_10cd459e;
L_10cd455a:;
  /* 10cd455a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd455d mov edx, dword ptr [ecx*4 + 0x10cfca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cfca94)));
  /* 10cd4564 push edx */
  push32((uint32_t)(EDX));
  /* 10cd4565 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4568 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd456b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10cd456f push edx */
  push32((uint32_t)(EDX));
  /* 10cd4570 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4573 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd4576 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10cd457a push edx */
  push32((uint32_t)(EDX));
  /* 10cd457b push 0x10cf9a84 */
  push32((uint32_t)(0x10cf9a84u));
  /* 10cd4580 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4582 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4584 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4586 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4588 call 0x10cd1750 */
  push32(0x10cd458du); f_10cd1750();
  /* 10cd458d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4590 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4593 jne 0x10cd4596 */
  if (!C.zf) goto L_10cd4596;
  /* 10cd4595 int3  */
  x86_unimpl("int3 @ 0x10cd4595");
L_10cd4596:;
  /* 10cd4596 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd4598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd459a jne 0x10cd455a */
  if (!C.zf) goto L_10cd455a;
  /* 10cd459c jmp 0x10cd454b */
  goto L_10cd454b;
L_10cd459e:;
  /* 10cd459e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd45a1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10cd45a4 push edx */
  push32((uint32_t)(EDX));
  /* 10cd45a5 push 0x10cf9a60 */
  push32((uint32_t)(0x10cf9a60u));
  /* 10cd45aa push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd45ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd45ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd45b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd45b2 call 0x10cd1750 */
  push32(0x10cd45b7u); f_10cd1750();
  /* 10cd45b7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd45ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd45bd jne 0x10cd45c0 */
  if (!C.zf) goto L_10cd45c0;
  /* 10cd45bf int3  */
  x86_unimpl("int3 @ 0x10cd45bf");
L_10cd45c0:;
  /* 10cd45c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd45c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd45c4 jne 0x10cd459e */
  if (!C.zf) goto L_10cd459e;
L_10cd45c6:;
  /* 10cd45c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd45c9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10cd45cc push edx */
  push32((uint32_t)(EDX));
  /* 10cd45cd push 0x10cf9a40 */
  push32((uint32_t)(0x10cf9a40u));
  /* 10cd45d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd45d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd45d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd45d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd45da call 0x10cd1750 */
  push32(0x10cd45dfu); f_10cd1750();
  /* 10cd45df add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd45e2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd45e5 jne 0x10cd45e8 */
  if (!C.zf) goto L_10cd45e8;
  /* 10cd45e7 int3  */
  x86_unimpl("int3 @ 0x10cd45e7");
L_10cd45e8:;
  /* 10cd45e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd45ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd45ec jne 0x10cd45c6 */
  if (!C.zf) goto L_10cd45c6;
L_10cd45ee:;
  /* 10cd45ee pop edi */
  EDI = (pop32());
  /* 10cd45ef pop esi */
  ESI = (pop32());
  /* 10cd45f0 pop ebx */
  EBX = (pop32());
  /* 10cd45f1 mov esp, ebp */
  ESP = (EBP);
  /* 10cd45f3 pop ebp */
  EBP = (pop32());
  /* 10cd45f4 ret  */
  ESPCHK(0x10cd4530u, _esp0);
  ESP += 4; return;
}

/* FUN_10004600 @ 0x10cd4600 (329 bytes, 102 insns) */
void f_10cd4600(void) {
  FTRACE(0x10cd4600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd4600 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd4601 mov ebp, esp */
  EBP = (ESP);
  /* 10cd4603 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd4606 cmp dword ptr [0x10cfff30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfff30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd460d jne 0x10cd4614 */
  if (!C.zf) goto L_10cd4614;
  /* 10cd460f call 0x10cd8f40 */
  push32(0x10cd4614u); f_10cd8f40();
L_10cd4614:;
  /* 10cd4614 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10cd461b mov eax, dword ptr [0x10cfe3e8] */
  EAX = (r32((uint32_t)(0x10cfe3e8)));
  /* 10cd4620 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cd4623:;
  /* 10cd4623 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4626 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10cd4629 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd462b je 0x10cd4659 */
  if (C.zf) goto L_10cd4659;
  /* 10cd462d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4630 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cd4633 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4636 je 0x10cd4641 */
  if (C.zf) goto L_10cd4641;
  /* 10cd4638 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd463b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd463e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10cd4641:;
  /* 10cd4641 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4644 push eax */
  push32((uint32_t)(EAX));
  /* 10cd4645 call 0x10cd54c0 */
  push32(0x10cd464au); f_10cd54c0();
  /* 10cd464a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd464d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4650 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10cd4654 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd4657 jmp 0x10cd4623 */
  goto L_10cd4623;
L_10cd4659:;
  /* 10cd4659 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10cd465b push 0x10cf9aa4 */
  push32((uint32_t)(0x10cf9aa4u));
  /* 10cd4660 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd4662 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd4665 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10cd466c push ecx */
  push32((uint32_t)(ECX));
  /* 10cd466d call 0x10cd2690 */
  push32(0x10cd4672u); f_10cd2690();
  /* 10cd4672 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4675 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cd4678 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd467b mov dword ptr [0x10cfe41c], edx */
  w32((uint32_t)(0x10cfe41c), (EDX));
  /* 10cd4681 cmp dword ptr [0x10cfe41c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe41c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4688 jne 0x10cd4694 */
  if (!C.zf) goto L_10cd4694;
  /* 10cd468a push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd468c call 0x10cd1600 */
  push32(0x10cd4691u); f_10cd1600();
  /* 10cd4691 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd4694:;
  /* 10cd4694 mov eax, dword ptr [0x10cfe3e8] */
  EAX = (r32((uint32_t)(0x10cfe3e8)));
  /* 10cd4699 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd469c jmp 0x10cd46a7 */
  goto L_10cd46a7;
L_10cd469e:;
  /* 10cd469e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd46a1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd46a4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10cd46a7:;
  /* 10cd46a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd46aa movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10cd46ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd46af je 0x10cd4717 */
  if (C.zf) goto L_10cd4717;
  /* 10cd46b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd46b4 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd46b5 call 0x10cd54c0 */
  push32(0x10cd46bau); f_10cd54c0();
  /* 10cd46ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd46bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd46c0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10cd46c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd46c6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10cd46c9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd46cc je 0x10cd4715 */
  if (C.zf) goto L_10cd4715;
  /* 10cd46ce push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10cd46d0 push 0x10cf9aa4 */
  push32((uint32_t)(0x10cf9aa4u));
  /* 10cd46d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd46d7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd46da push ecx */
  push32((uint32_t)(ECX));
  /* 10cd46db call 0x10cd2690 */
  push32(0x10cd46e0u); f_10cd2690();
  /* 10cd46e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd46e3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd46e6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10cd46e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd46eb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd46ee jne 0x10cd46fa */
  if (!C.zf) goto L_10cd46fa;
  /* 10cd46f0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd46f2 call 0x10cd1600 */
  push32(0x10cd46f7u); f_10cd1600();
  /* 10cd46f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd46fa:;
  /* 10cd46fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd46fd push ecx */
  push32((uint32_t)(ECX));
  /* 10cd46fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd4701 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cd4703 push eax */
  push32((uint32_t)(EAX));
  /* 10cd4704 call 0x10cd5640 */
  push32(0x10cd4709u); f_10cd5640();
  /* 10cd4709 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd470c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd470f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4712 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10cd4715:;
  /* 10cd4715 jmp 0x10cd469e */
  goto L_10cd469e;
L_10cd4717:;
  /* 10cd4717 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd4719 mov edx, dword ptr [0x10cfe3e8] */
  EDX = (r32((uint32_t)(0x10cfe3e8)));
  /* 10cd471f push edx */
  push32((uint32_t)(EDX));
  /* 10cd4720 call 0x10cd3120 */
  push32(0x10cd4725u); f_10cd3120();
  /* 10cd4725 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4728 mov dword ptr [0x10cfe3e8], 0 */
  w32((uint32_t)(0x10cfe3e8), (0x0u));
  /* 10cd4732 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd4735 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10cd473b mov dword ptr [0x10cfff20], 1 */
  w32((uint32_t)(0x10cfff20), (0x1u));
  /* 10cd4745 mov esp, ebp */
  ESP = (EBP);
  /* 10cd4747 pop ebp */
  EBP = (pop32());
  /* 10cd4748 ret  */
  ESPCHK(0x10cd4600u, _esp0);
  ESP += 4; return;
}

/* FUN_10004750 @ 0x10cd4750 (216 bytes, 69 insns) */
void f_10cd4750(void) {
  FTRACE(0x10cd4750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd4750 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd4751 mov ebp, esp */
  EBP = (ESP);
  /* 10cd4753 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd4756 cmp dword ptr [0x10cfff30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfff30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd475d jne 0x10cd4764 */
  if (!C.zf) goto L_10cd4764;
  /* 10cd475f call 0x10cd8f40 */
  push32(0x10cd4764u); f_10cd8f40();
L_10cd4764:;
  /* 10cd4764 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10cd4769 push 0x10cfe458 */
  push32((uint32_t)(0x10cfe458u));
  /* 10cd476e push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4770 call dword ptr [0x10d00248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00248))), 0x10cd4776u);
  /* 10cd4776 mov dword ptr [0x10cfe42c], 0x10cfe458 */
  w32((uint32_t)(0x10cfe42c), (0x10cfe458u));
  /* 10cd4780 mov eax, dword ptr [0x10cfff4c] */
  EAX = (r32((uint32_t)(0x10cfff4c)));
  /* 10cd4785 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cd4788 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd478a jne 0x10cd4797 */
  if (!C.zf) goto L_10cd4797;
  /* 10cd478c mov edx, dword ptr [0x10cfe42c] */
  EDX = (r32((uint32_t)(0x10cfe42c)));
  /* 10cd4792 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10cd4795 jmp 0x10cd479f */
  goto L_10cd479f;
L_10cd4797:;
  /* 10cd4797 mov eax, dword ptr [0x10cfff4c] */
  EAX = (r32((uint32_t)(0x10cfff4c)));
  /* 10cd479c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10cd479f:;
  /* 10cd479f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd47a2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10cd47a5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10cd47a8 push edx */
  push32((uint32_t)(EDX));
  /* 10cd47a9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10cd47ac push eax */
  push32((uint32_t)(EAX));
  /* 10cd47ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd47af push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd47b1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd47b4 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd47b5 call 0x10cd4830 */
  push32(0x10cd47bau); f_10cd4830();
  /* 10cd47ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd47bd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10cd47c2 push 0x10cf9ab0 */
  push32((uint32_t)(0x10cf9ab0u));
  /* 10cd47c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd47c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd47cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd47cf lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10cd47d2 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd47d3 call 0x10cd2690 */
  push32(0x10cd47d8u); f_10cd2690();
  /* 10cd47d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd47db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cd47de cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd47e2 jne 0x10cd47ee */
  if (!C.zf) goto L_10cd47ee;
  /* 10cd47e4 push 8 */
  push32((uint32_t)(0x8u));
  /* 10cd47e6 call 0x10cd1600 */
  push32(0x10cd47ebu); f_10cd1600();
  /* 10cd47eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd47ee:;
  /* 10cd47ee lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10cd47f1 push edx */
  push32((uint32_t)(EDX));
  /* 10cd47f2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10cd47f5 push eax */
  push32((uint32_t)(EAX));
  /* 10cd47f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd47f9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd47fc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10cd47ff push eax */
  push32((uint32_t)(EAX));
  /* 10cd4800 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd4803 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd4804 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd4807 push edx */
  push32((uint32_t)(EDX));
  /* 10cd4808 call 0x10cd4830 */
  push32(0x10cd480du); f_10cd4830();
  /* 10cd480d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4810 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd4813 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd4816 mov dword ptr [0x10cfe410], eax */
  w32((uint32_t)(0x10cfe410), (EAX));
  /* 10cd481b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd481e mov dword ptr [0x10cfe414], ecx */
  w32((uint32_t)(0x10cfe414), (ECX));
  /* 10cd4824 mov esp, ebp */
  ESP = (EBP);
  /* 10cd4826 pop ebp */
  EBP = (pop32());
  /* 10cd4827 ret  */
  ESPCHK(0x10cd4750u, _esp0);
  ESP += 4; return;
}

/* FUN_10004830 @ 0x10cd4830 (1060 bytes, 360 insns) */
void f_10cd4830(void) {
  FTRACE(0x10cd4830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd4830 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd4831 mov ebp, esp */
  EBP = (ESP);
  /* 10cd4833 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd4836 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd4839 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10cd483f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd4842 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10cd4848 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd484b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd484e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4852 je 0x10cd4865 */
  if (C.zf) goto L_10cd4865;
  /* 10cd4854 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd4857 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd485a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10cd485c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd485f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4862 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10cd4865:;
  /* 10cd4865 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4868 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cd486b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd486e jne 0x10cd493d */
  if (!C.zf) goto L_10cd493d;
L_10cd4874:;
  /* 10cd4874 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4877 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd487a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd487d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4880 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cd4883 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4886 je 0x10cd4902 */
  if (C.zf) goto L_10cd4902;
  /* 10cd4888 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd488b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10cd488e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd4890 je 0x10cd4902 */
  if (C.zf) goto L_10cd4902;
  /* 10cd4892 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4895 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd4897 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10cd4899 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd489b mov al, byte ptr [edx + 0x10cffc81] */
  AL = (r8((uint32_t)(EDX + 0x10cffc81)));
  /* 10cd48a1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10cd48a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd48a6 je 0x10cd48d7 */
  if (C.zf) goto L_10cd48d7;
  /* 10cd48a8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd48ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd48ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd48b0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd48b3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10cd48b5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd48b9 je 0x10cd48d7 */
  if (C.zf) goto L_10cd48d7;
  /* 10cd48bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd48be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd48c1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10cd48c3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10cd48c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd48c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd48cb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10cd48ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd48d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd48d4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10cd48d7:;
  /* 10cd48d7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd48da mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cd48dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd48df mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd48e2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10cd48e4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd48e8 je 0x10cd48fd */
  if (C.zf) goto L_10cd48fd;
  /* 10cd48ea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd48ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd48f0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10cd48f2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10cd48f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd48f7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd48fa mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10cd48fd:;
  /* 10cd48fd jmp 0x10cd4874 */
  goto L_10cd4874;
L_10cd4902:;
  /* 10cd4902 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd4905 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd4907 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd490a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd490d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10cd490f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4913 je 0x10cd4924 */
  if (C.zf) goto L_10cd4924;
  /* 10cd4915 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd4918 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10cd491b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd491e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4921 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10cd4924:;
  /* 10cd4924 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4927 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cd492a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd492d jne 0x10cd4938 */
  if (!C.zf) goto L_10cd4938;
  /* 10cd492f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4932 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4935 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10cd4938:;
  /* 10cd4938 jmp 0x10cd4a0c */
  goto L_10cd4a0c;
L_10cd493d:;
  /* 10cd493d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd4940 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cd4942 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4945 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd4948 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10cd494a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd494e je 0x10cd4963 */
  if (C.zf) goto L_10cd4963;
  /* 10cd4950 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd4953 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4956 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10cd4958 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10cd495a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd495d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4960 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10cd4963:;
  /* 10cd4963 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4966 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10cd4968 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10cd496b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd496e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4971 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd4974 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd4977 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd497d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd497f mov dl, byte ptr [ecx + 0x10cffc81] */
  DL = (r8((uint32_t)(ECX + 0x10cffc81)));
  /* 10cd4985 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd4988 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd498a je 0x10cd49bb */
  if (C.zf) goto L_10cd49bb;
  /* 10cd498c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd498f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cd4991 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4994 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd4997 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10cd4999 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd499d je 0x10cd49b2 */
  if (C.zf) goto L_10cd49b2;
  /* 10cd499f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd49a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd49a5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10cd49a7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10cd49a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd49ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd49af mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10cd49b2:;
  /* 10cd49b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd49b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd49b8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10cd49bb:;
  /* 10cd49bb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd49be and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10cd49c4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd49c7 je 0x10cd49e7 */
  if (C.zf) goto L_10cd49e7;
  /* 10cd49c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd49cc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd49d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd49d3 je 0x10cd49e7 */
  if (C.zf) goto L_10cd49e7;
  /* 10cd49d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd49d8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd49de cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd49e1 jne 0x10cd493d */
  if (!C.zf) goto L_10cd493d;
L_10cd49e7:;
  /* 10cd49e7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd49ea and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10cd49f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd49f2 jne 0x10cd49ff */
  if (!C.zf) goto L_10cd49ff;
  /* 10cd49f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd49f7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd49fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd49fd jmp 0x10cd4a0c */
  goto L_10cd4a0c;
L_10cd49ff:;
  /* 10cd49ff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4a03 je 0x10cd4a0c */
  if (C.zf) goto L_10cd4a0c;
  /* 10cd4a05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd4a08 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10cd4a0c:;
  /* 10cd4a0c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10cd4a13:;
  /* 10cd4a13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4a16 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10cd4a19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd4a1b je 0x10cd4a3e */
  if (C.zf) goto L_10cd4a3e;
L_10cd4a1d:;
  /* 10cd4a1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4a20 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10cd4a23 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4a26 je 0x10cd4a33 */
  if (C.zf) goto L_10cd4a33;
  /* 10cd4a28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4a2b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cd4a2e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4a31 jne 0x10cd4a3e */
  if (!C.zf) goto L_10cd4a3e;
L_10cd4a33:;
  /* 10cd4a33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4a36 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4a39 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd4a3c jmp 0x10cd4a1d */
  goto L_10cd4a1d;
L_10cd4a3e:;
  /* 10cd4a3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4a41 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cd4a44 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd4a46 jne 0x10cd4a4d */
  if (!C.zf) goto L_10cd4a4d;
  /* 10cd4a48 jmp 0x10cd4c2b */
  goto L_10cd4c2b;
L_10cd4a4d:;
  /* 10cd4a4d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4a51 je 0x10cd4a64 */
  if (C.zf) goto L_10cd4a64;
  /* 10cd4a53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd4a56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd4a59 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10cd4a5b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd4a5e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4a61 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10cd4a64:;
  /* 10cd4a64 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd4a67 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cd4a69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4a6c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd4a6f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10cd4a71:;
  /* 10cd4a71 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10cd4a78 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10cd4a7f:;
  /* 10cd4a7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4a82 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10cd4a85 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4a88 jne 0x10cd4a9e */
  if (!C.zf) goto L_10cd4a9e;
  /* 10cd4a8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4a8d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4a90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10cd4a93 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd4a96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4a99 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10cd4a9c jmp 0x10cd4a7f */
  goto L_10cd4a7f;
L_10cd4a9e:;
  /* 10cd4a9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4aa1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cd4aa4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4aa7 jne 0x10cd4afa */
  if (!C.zf) goto L_10cd4afa;
  /* 10cd4aa9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd4aac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd4aae mov ecx, 2 */
  ECX = (0x2u);
  /* 10cd4ab3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10cd4ab5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd4ab7 jne 0x10cd4af2 */
  if (!C.zf) goto L_10cd4af2;
  /* 10cd4ab9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4abd je 0x10cd4adf */
  if (C.zf) goto L_10cd4adf;
  /* 10cd4abf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4ac2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10cd4ac6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4ac9 jne 0x10cd4ad6 */
  if (!C.zf) goto L_10cd4ad6;
  /* 10cd4acb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4ace add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4ad1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10cd4ad4 jmp 0x10cd4add */
  goto L_10cd4add;
L_10cd4ad6:;
  /* 10cd4ad6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10cd4add:;
  /* 10cd4add jmp 0x10cd4ae6 */
  goto L_10cd4ae6;
L_10cd4adf:;
  /* 10cd4adf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10cd4ae6:;
  /* 10cd4ae6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd4ae8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4aec sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10cd4aef mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10cd4af2:;
  /* 10cd4af2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd4af5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10cd4af7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10cd4afa:;
  /* 10cd4afa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd4afd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd4b00 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd4b03 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10cd4b06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd4b08 je 0x10cd4b2e */
  if (C.zf) goto L_10cd4b2e;
  /* 10cd4b0a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4b0e je 0x10cd4b1f */
  if (C.zf) goto L_10cd4b1f;
  /* 10cd4b10 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd4b13 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10cd4b16 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd4b19 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4b1c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10cd4b1f:;
  /* 10cd4b1f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd4b22 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cd4b24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4b27 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd4b2a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10cd4b2c jmp 0x10cd4afa */
  goto L_10cd4afa;
L_10cd4b2e:;
  /* 10cd4b2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4b31 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10cd4b34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd4b36 je 0x10cd4b54 */
  if (C.zf) goto L_10cd4b54;
  /* 10cd4b38 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4b3c jne 0x10cd4b59 */
  if (!C.zf) goto L_10cd4b59;
  /* 10cd4b3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4b41 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10cd4b44 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4b47 je 0x10cd4b54 */
  if (C.zf) goto L_10cd4b54;
  /* 10cd4b49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4b4c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10cd4b4f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4b52 jne 0x10cd4b59 */
  if (!C.zf) goto L_10cd4b59;
L_10cd4b54:;
  /* 10cd4b54 jmp 0x10cd4c04 */
  goto L_10cd4c04;
L_10cd4b59:;
  /* 10cd4b59 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4b5d je 0x10cd4bf6 */
  if (C.zf) goto L_10cd4bf6;
  /* 10cd4b63 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4b67 je 0x10cd4bbd */
  if (C.zf) goto L_10cd4bbd;
  /* 10cd4b69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4b6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd4b6e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10cd4b70 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd4b72 mov cl, byte ptr [eax + 0x10cffc81] */
  CL = (r8((uint32_t)(EAX + 0x10cffc81)));
  /* 10cd4b78 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd4b7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd4b7d je 0x10cd4ba8 */
  if (C.zf) goto L_10cd4ba8;
  /* 10cd4b7f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd4b82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4b85 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10cd4b87 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10cd4b89 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd4b8c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4b8f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10cd4b92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4b95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4b98 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd4b9b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd4b9e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd4ba0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4ba3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd4ba6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10cd4ba8:;
  /* 10cd4ba8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd4bab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4bae mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10cd4bb0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10cd4bb2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd4bb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4bb8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10cd4bbb jmp 0x10cd4be9 */
  goto L_10cd4be9;
L_10cd4bbd:;
  /* 10cd4bbd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4bc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd4bc2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10cd4bc4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd4bc6 mov cl, byte ptr [eax + 0x10cffc81] */
  CL = (r8((uint32_t)(EAX + 0x10cffc81)));
  /* 10cd4bcc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd4bcf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd4bd1 je 0x10cd4be9 */
  if (C.zf) goto L_10cd4be9;
  /* 10cd4bd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4bd6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4bd9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd4bdc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd4bdf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cd4be1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4be4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd4be7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10cd4be9:;
  /* 10cd4be9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd4bec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cd4bee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4bf1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd4bf4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10cd4bf6:;
  /* 10cd4bf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4bf9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4bfc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd4bff jmp 0x10cd4a71 */
  goto L_10cd4a71;
L_10cd4c04:;
  /* 10cd4c04 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4c08 je 0x10cd4c19 */
  if (C.zf) goto L_10cd4c19;
  /* 10cd4c0a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd4c0d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10cd4c10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd4c13 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4c16 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10cd4c19:;
  /* 10cd4c19 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd4c1c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cd4c1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4c21 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10cd4c24 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10cd4c26 jmp 0x10cd4a13 */
  goto L_10cd4a13;
L_10cd4c2b:;
  /* 10cd4c2b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4c2f je 0x10cd4c43 */
  if (C.zf) goto L_10cd4c43;
  /* 10cd4c31 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd4c34 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10cd4c3a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd4c3d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4c40 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10cd4c43:;
  /* 10cd4c43 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd4c46 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cd4c48 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4c4b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd4c4e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10cd4c50 mov esp, ebp */
  ESP = (EBP);
  /* 10cd4c52 pop ebp */
  EBP = (pop32());
  /* 10cd4c53 ret  */
  ESPCHK(0x10cd4830u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c60 @ 0x10cd4c60 (537 bytes, 173 insns) */
void f_10cd4c60(void) {
  FTRACE(0x10cd4c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd4c60 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd4c61 mov ebp, esp */
  EBP = (ESP);
  /* 10cd4c63 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd4c66 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10cd4c6d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10cd4c74 cmp dword ptr [0x10cfe55c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe55c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4c7b jne 0x10cd4cba */
  if (!C.zf) goto L_10cd4cba;
  /* 10cd4c7d call dword ptr [0x10d00208] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00208))), 0x10cd4c83u);
  /* 10cd4c83 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10cd4c86 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4c8a je 0x10cd4c98 */
  if (C.zf) goto L_10cd4c98;
  /* 10cd4c8c mov dword ptr [0x10cfe55c], 1 */
  w32((uint32_t)(0x10cfe55c), (0x1u));
  /* 10cd4c96 jmp 0x10cd4cba */
  goto L_10cd4cba;
L_10cd4c98:;
  /* 10cd4c98 call dword ptr [0x10d0020c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0020c))), 0x10cd4c9eu);
  /* 10cd4c9e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10cd4ca1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4ca5 je 0x10cd4cb3 */
  if (C.zf) goto L_10cd4cb3;
  /* 10cd4ca7 mov dword ptr [0x10cfe55c], 2 */
  w32((uint32_t)(0x10cfe55c), (0x2u));
  /* 10cd4cb1 jmp 0x10cd4cba */
  goto L_10cd4cba;
L_10cd4cb3:;
  /* 10cd4cb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd4cb5 jmp 0x10cd4e75 */
  goto L_10cd4e75;
L_10cd4cba:;
  /* 10cd4cba cmp dword ptr [0x10cfe55c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe55c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4cc1 jne 0x10cd4dbe */
  if (!C.zf) goto L_10cd4dbe;
  /* 10cd4cc7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4ccb jne 0x10cd4ce3 */
  if (!C.zf) goto L_10cd4ce3;
  /* 10cd4ccd call dword ptr [0x10d00208] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00208))), 0x10cd4cd3u);
  /* 10cd4cd3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10cd4cd6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4cda jne 0x10cd4ce3 */
  if (!C.zf) goto L_10cd4ce3;
  /* 10cd4cdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd4cde jmp 0x10cd4e75 */
  goto L_10cd4e75;
L_10cd4ce3:;
  /* 10cd4ce3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd4ce6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10cd4ce9:;
  /* 10cd4ce9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd4cec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd4cee mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10cd4cf1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd4cf3 je 0x10cd4d15 */
  if (C.zf) goto L_10cd4d15;
  /* 10cd4cf5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd4cf8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4cfb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cd4cfe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd4d01 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd4d03 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10cd4d06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd4d08 jne 0x10cd4d13 */
  if (!C.zf) goto L_10cd4d13;
  /* 10cd4d0a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd4d0d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4d10 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10cd4d13:;
  /* 10cd4d13 jmp 0x10cd4ce9 */
  goto L_10cd4ce9;
L_10cd4d15:;
  /* 10cd4d15 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd4d18 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd4d1b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10cd4d1d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4d20 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10cd4d23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4d25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4d27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4d29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4d2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4d2e push edx */
  push32((uint32_t)(EDX));
  /* 10cd4d2f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd4d32 push eax */
  push32((uint32_t)(EAX));
  /* 10cd4d33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4d35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4d37 call dword ptr [0x10d0029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0029c))), 0x10cd4d3du);
  /* 10cd4d3d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10cd4d40 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4d44 je 0x10cd4d64 */
  if (C.zf) goto L_10cd4d64;
  /* 10cd4d46 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10cd4d48 push 0x10cf9abc */
  push32((uint32_t)(0x10cf9abcu));
  /* 10cd4d4d push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd4d4f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd4d52 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd4d53 call 0x10cd2690 */
  push32(0x10cd4d58u); f_10cd2690();
  /* 10cd4d58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4d5b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10cd4d5e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4d62 jne 0x10cd4d75 */
  if (!C.zf) goto L_10cd4d75;
L_10cd4d64:;
  /* 10cd4d64 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd4d67 push edx */
  push32((uint32_t)(EDX));
  /* 10cd4d68 call dword ptr [0x10d00298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00298))), 0x10cd4d6eu);
  /* 10cd4d6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd4d70 jmp 0x10cd4e75 */
  goto L_10cd4e75;
L_10cd4d75:;
  /* 10cd4d75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4d77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4d79 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd4d7c push eax */
  push32((uint32_t)(EAX));
  /* 10cd4d7d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd4d80 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd4d81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4d84 push edx */
  push32((uint32_t)(EDX));
  /* 10cd4d85 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd4d88 push eax */
  push32((uint32_t)(EAX));
  /* 10cd4d89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4d8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4d8d call dword ptr [0x10d0029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0029c))), 0x10cd4d93u);
  /* 10cd4d93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd4d95 jne 0x10cd4dac */
  if (!C.zf) goto L_10cd4dac;
  /* 10cd4d97 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd4d99 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd4d9c push ecx */
  push32((uint32_t)(ECX));
  /* 10cd4d9d call 0x10cd3120 */
  push32(0x10cd4da2u); f_10cd3120();
  /* 10cd4da2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4da5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10cd4dac:;
  /* 10cd4dac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd4daf push edx */
  push32((uint32_t)(EDX));
  /* 10cd4db0 call dword ptr [0x10d00298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00298))), 0x10cd4db6u);
  /* 10cd4db6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd4db9 jmp 0x10cd4e75 */
  goto L_10cd4e75;
L_10cd4dbe:;
  /* 10cd4dbe cmp dword ptr [0x10cfe55c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe55c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4dc5 jne 0x10cd4e73 */
  if (!C.zf) goto L_10cd4e73;
  /* 10cd4dcb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4dcf jne 0x10cd4de7 */
  if (!C.zf) goto L_10cd4de7;
  /* 10cd4dd1 call dword ptr [0x10d0020c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0020c))), 0x10cd4dd7u);
  /* 10cd4dd7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10cd4dda cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4dde jne 0x10cd4de7 */
  if (!C.zf) goto L_10cd4de7;
  /* 10cd4de0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd4de2 jmp 0x10cd4e75 */
  goto L_10cd4e75;
L_10cd4de7:;
  /* 10cd4de7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd4dea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10cd4ded:;
  /* 10cd4ded mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd4df0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10cd4df3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd4df5 je 0x10cd4e15 */
  if (C.zf) goto L_10cd4e15;
  /* 10cd4df7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd4dfa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4dfd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cd4e00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd4e03 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10cd4e06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd4e08 jne 0x10cd4e13 */
  if (!C.zf) goto L_10cd4e13;
  /* 10cd4e0a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd4e0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4e10 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10cd4e13:;
  /* 10cd4e13 jmp 0x10cd4ded */
  goto L_10cd4ded;
L_10cd4e15:;
  /* 10cd4e15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd4e18 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd4e1b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4e1e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10cd4e21 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10cd4e26 push 0x10cf9abc */
  push32((uint32_t)(0x10cf9abcu));
  /* 10cd4e2b push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd4e2d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd4e30 push edx */
  push32((uint32_t)(EDX));
  /* 10cd4e31 call 0x10cd2690 */
  push32(0x10cd4e36u); f_10cd2690();
  /* 10cd4e36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4e39 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cd4e3c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4e40 jne 0x10cd4e50 */
  if (!C.zf) goto L_10cd4e50;
  /* 10cd4e42 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd4e45 push eax */
  push32((uint32_t)(EAX));
  /* 10cd4e46 call dword ptr [0x10d00294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00294))), 0x10cd4e4cu);
  /* 10cd4e4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd4e4e jmp 0x10cd4e75 */
  goto L_10cd4e75;
L_10cd4e50:;
  /* 10cd4e50 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd4e53 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd4e54 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd4e57 push edx */
  push32((uint32_t)(EDX));
  /* 10cd4e58 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd4e5b push eax */
  push32((uint32_t)(EAX));
  /* 10cd4e5c call 0x10cd8f70 */
  push32(0x10cd4e61u); f_10cd8f70();
  /* 10cd4e61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4e64 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd4e67 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd4e68 call dword ptr [0x10d00294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00294))), 0x10cd4e6eu);
  /* 10cd4e6e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd4e71 jmp 0x10cd4e75 */
  goto L_10cd4e75;
L_10cd4e73:;
  /* 10cd4e73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10cd4e75:;
  /* 10cd4e75 mov esp, ebp */
  ESP = (EBP);
  /* 10cd4e77 pop ebp */
  EBP = (pop32());
  /* 10cd4e78 ret  */
  ESPCHK(0x10cd4c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e80 @ 0x10cd4e80 (77 bytes, 25 insns) */
void f_10cd4e80(void) {
  FTRACE(0x10cd4e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd4e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd4e81 mov ebp, esp */
  EBP = (ESP);
  /* 10cd4e83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4e85 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10cd4e8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd4e8c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4e90 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10cd4e93 push eax */
  push32((uint32_t)(EAX));
  /* 10cd4e94 call dword ptr [0x10d002ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002ac))), 0x10cd4e9au);
  /* 10cd4e9a mov dword ptr [0x10cffdac], eax */
  w32((uint32_t)(0x10cffdac), (EAX));
  /* 10cd4e9f cmp dword ptr [0x10cffdac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cffdac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4ea6 jne 0x10cd4eac */
  if (!C.zf) goto L_10cd4eac;
  /* 10cd4ea8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd4eaa jmp 0x10cd4ecb */
  goto L_10cd4ecb;
L_10cd4eac:;
  /* 10cd4eac call 0x10cd6930 */
  push32(0x10cd4eb1u); f_10cd6930();
  /* 10cd4eb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd4eb3 jne 0x10cd4ec6 */
  if (!C.zf) goto L_10cd4ec6;
  /* 10cd4eb5 mov ecx, dword ptr [0x10cffdac] */
  ECX = (r32((uint32_t)(0x10cffdac)));
  /* 10cd4ebb push ecx */
  push32((uint32_t)(ECX));
  /* 10cd4ebc call dword ptr [0x10d002a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002a8))), 0x10cd4ec2u);
  /* 10cd4ec2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd4ec4 jmp 0x10cd4ecb */
  goto L_10cd4ecb;
L_10cd4ec6:;
  /* 10cd4ec6 mov eax, 1 */
  EAX = (0x1u);
L_10cd4ecb:;
  /* 10cd4ecb pop ebp */
  EBP = (pop32());
  /* 10cd4ecc ret  */
  ESPCHK(0x10cd4e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ed0 @ 0x10cd4ed0 (156 bytes, 48 insns) */
void f_10cd4ed0(void) {
  FTRACE(0x10cd4ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd4ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd4ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd4ed3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd4ed6 mov eax, dword ptr [0x10cffda8] */
  EAX = (r32((uint32_t)(0x10cffda8)));
  /* 10cd4edb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cd4ede mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cd4ee5 jmp 0x10cd4ef0 */
  goto L_10cd4ef0;
L_10cd4ee7:;
  /* 10cd4ee7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4eea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4eed mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10cd4ef0:;
  /* 10cd4ef0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd4ef3 cmp edx, dword ptr [0x10cffda4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10cffda4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4ef9 jge 0x10cd4f46 */
  if ((C.sf==C.of)) goto L_10cd4f46;
  /* 10cd4efb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10cd4f00 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10cd4f05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd4f08 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10cd4f0b push ecx */
  push32((uint32_t)(ECX));
  /* 10cd4f0c call dword ptr [0x10d002b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002b4))), 0x10cd4f12u);
  /* 10cd4f12 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10cd4f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4f19 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd4f1c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10cd4f1f push eax */
  push32((uint32_t)(EAX));
  /* 10cd4f20 call dword ptr [0x10d002b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002b4))), 0x10cd4f26u);
  /* 10cd4f26 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd4f29 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10cd4f2c push edx */
  push32((uint32_t)(EDX));
  /* 10cd4f2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4f2f mov eax, dword ptr [0x10cffdac] */
  EAX = (r32((uint32_t)(0x10cffdac)));
  /* 10cd4f34 push eax */
  push32((uint32_t)(EAX));
  /* 10cd4f35 call dword ptr [0x10d002b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002b0))), 0x10cd4f3bu);
  /* 10cd4f3b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd4f3e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4f41 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cd4f44 jmp 0x10cd4ee7 */
  goto L_10cd4ee7;
L_10cd4f46:;
  /* 10cd4f46 mov edx, dword ptr [0x10cffda8] */
  EDX = (r32((uint32_t)(0x10cffda8)));
  /* 10cd4f4c push edx */
  push32((uint32_t)(EDX));
  /* 10cd4f4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd4f4f mov eax, dword ptr [0x10cffdac] */
  EAX = (r32((uint32_t)(0x10cffdac)));
  /* 10cd4f54 push eax */
  push32((uint32_t)(EAX));
  /* 10cd4f55 call dword ptr [0x10d002b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002b0))), 0x10cd4f5bu);
  /* 10cd4f5b mov ecx, dword ptr [0x10cffdac] */
  ECX = (r32((uint32_t)(0x10cffdac)));
  /* 10cd4f61 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd4f62 call dword ptr [0x10d002a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002a8))), 0x10cd4f68u);
  /* 10cd4f68 mov esp, ebp */
  ESP = (EBP);
  /* 10cd4f6a pop ebp */
  EBP = (pop32());
  /* 10cd4f6b ret  */
  ESPCHK(0x10cd4ed0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10cd4f70 (73 bytes, 19 insns) */
void f_10cd4f70(void) {
  FTRACE(0x10cd4f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd4f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd4f71 mov ebp, esp */
  EBP = (ESP);
  /* 10cd4f73 cmp dword ptr [0x10cfe3f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe3f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4f7a je 0x10cd4f8e */
  if (C.zf) goto L_10cd4f8e;
  /* 10cd4f7c cmp dword ptr [0x10cfe3f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe3f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4f83 jne 0x10cd4fb7 */
  if (!C.zf) goto L_10cd4fb7;
  /* 10cd4f85 cmp dword ptr [0x10cfe3f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe3f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4f8c jne 0x10cd4fb7 */
  if (!C.zf) goto L_10cd4fb7;
L_10cd4f8e:;
  /* 10cd4f8e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10cd4f93 call 0x10cd4fc0 */
  push32(0x10cd4f98u); f_10cd4fc0();
  /* 10cd4f98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4f9b cmp dword ptr [0x10cfe560], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe560))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4fa2 je 0x10cd4faa */
  if (C.zf) goto L_10cd4faa;
  /* 10cd4fa4 call dword ptr [0x10cfe560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfe560))), 0x10cd4faau);
L_10cd4faa:;
  /* 10cd4faa push 0xff */
  push32((uint32_t)(0xffu));
  /* 10cd4faf call 0x10cd4fc0 */
  push32(0x10cd4fb4u); f_10cd4fc0();
  /* 10cd4fb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd4fb7:;
  /* 10cd4fb7 pop ebp */
  EBP = (pop32());
  /* 10cd4fb8 ret  */
  ESPCHK(0x10cd4f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fc0 @ 0x10cd4fc0 (447 bytes, 131 insns) */
void f_10cd4fc0(void) {
  FTRACE(0x10cd4fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd4fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd4fc1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd4fc3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd4fc9 push ebx */
  push32((uint32_t)(EBX));
  /* 10cd4fca push esi */
  push32((uint32_t)(ESI));
  /* 10cd4fcb push edi */
  push32((uint32_t)(EDI));
  /* 10cd4fcc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10cd4fd3 jmp 0x10cd4fde */
  goto L_10cd4fde;
L_10cd4fd5:;
  /* 10cd4fd5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd4fd8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd4fdb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10cd4fde:;
  /* 10cd4fde cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4fe2 jae 0x10cd4ff7 */
  if (!C.cf) goto L_10cd4ff7;
  /* 10cd4fe4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd4fe7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd4fea cmp edx, dword ptr [ecx*8 + 0x10cfcab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10cfcab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd4ff1 jne 0x10cd4ff5 */
  if (!C.zf) goto L_10cd4ff5;
  /* 10cd4ff3 jmp 0x10cd4ff7 */
  goto L_10cd4ff7;
L_10cd4ff5:;
  /* 10cd4ff5 jmp 0x10cd4fd5 */
  goto L_10cd4fd5;
L_10cd4ff7:;
  /* 10cd4ff7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd4ffa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd4ffd cmp ecx, dword ptr [eax*8 + 0x10cfcab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10cfcab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5004 jne 0x10cd5178 */
  if (!C.zf) goto L_10cd5178;
  /* 10cd500a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5011 je 0x10cd5034 */
  if (C.zf) goto L_10cd5034;
  /* 10cd5013 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd5016 mov eax, dword ptr [edx*8 + 0x10cfcab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10cfcab4)));
  /* 10cd501d push eax */
  push32((uint32_t)(EAX));
  /* 10cd501e push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd5020 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd5022 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd5024 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd5026 call 0x10cd1750 */
  push32(0x10cd502bu); f_10cd1750();
  /* 10cd502b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd502e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5031 jne 0x10cd5034 */
  if (!C.zf) goto L_10cd5034;
  /* 10cd5033 int3  */
  x86_unimpl("int3 @ 0x10cd5033");
L_10cd5034:;
  /* 10cd5034 cmp dword ptr [0x10cfe3f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe3f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd503b je 0x10cd504f */
  if (C.zf) goto L_10cd504f;
  /* 10cd503d cmp dword ptr [0x10cfe3f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe3f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5044 jne 0x10cd5088 */
  if (!C.zf) goto L_10cd5088;
  /* 10cd5046 cmp dword ptr [0x10cfe3f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe3f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd504d jne 0x10cd5088 */
  if (!C.zf) goto L_10cd5088;
L_10cd504f:;
  /* 10cd504f push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd5051 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10cd5054 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd5055 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd5058 mov eax, dword ptr [edx*8 + 0x10cfcab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10cfcab4)));
  /* 10cd505f push eax */
  push32((uint32_t)(EAX));
  /* 10cd5060 call 0x10cd54c0 */
  push32(0x10cd5065u); f_10cd54c0();
  /* 10cd5065 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5068 push eax */
  push32((uint32_t)(EAX));
  /* 10cd5069 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd506c mov edx, dword ptr [ecx*8 + 0x10cfcab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x10cfcab4)));
  /* 10cd5073 push edx */
  push32((uint32_t)(EDX));
  /* 10cd5074 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10cd5076 call dword ptr [0x10d0022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0022c))), 0x10cd507cu);
  /* 10cd507c push eax */
  push32((uint32_t)(EAX));
  /* 10cd507d call dword ptr [0x10d00230] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00230))), 0x10cd5083u);
  /* 10cd5083 jmp 0x10cd5178 */
  goto L_10cd5178;
L_10cd5088:;
  /* 10cd5088 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd508f je 0x10cd5178 */
  if (C.zf) goto L_10cd5178;
  /* 10cd5095 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10cd509a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10cd50a0 push eax */
  push32((uint32_t)(EAX));
  /* 10cd50a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd50a3 call dword ptr [0x10d00248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00248))), 0x10cd50a9u);
  /* 10cd50a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd50ab jne 0x10cd50c1 */
  if (!C.zf) goto L_10cd50c1;
  /* 10cd50ad push 0x10cf9324 */
  push32((uint32_t)(0x10cf9324u));
  /* 10cd50b2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10cd50b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd50b9 call 0x10cd5640 */
  push32(0x10cd50beu); f_10cd5640();
  /* 10cd50be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd50c1:;
  /* 10cd50c1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10cd50c7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10cd50ca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd50cd push eax */
  push32((uint32_t)(EAX));
  /* 10cd50ce call 0x10cd54c0 */
  push32(0x10cd50d3u); f_10cd54c0();
  /* 10cd50d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd50d6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd50d9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd50dc jbe 0x10cd510a */
  if ((C.cf||C.zf)) goto L_10cd510a;
  /* 10cd50de lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10cd50e4 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd50e5 call 0x10cd54c0 */
  push32(0x10cd50eau); f_10cd54c0();
  /* 10cd50ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd50ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd50f0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10cd50f4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cd50f7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10cd50f9 push 0x10cf9320 */
  push32((uint32_t)(0x10cf9320u));
  /* 10cd50fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd5101 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd5102 call 0x10cd5eb0 */
  push32(0x10cd5107u); f_10cd5eb0();
  /* 10cd5107 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd510a:;
  /* 10cd510a push 0x10cf9d78 */
  push32((uint32_t)(0x10cf9d78u));
  /* 10cd510f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10cd5115 push edx */
  push32((uint32_t)(EDX));
  /* 10cd5116 call 0x10cd5640 */
  push32(0x10cd511bu); f_10cd5640();
  /* 10cd511b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd511e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd5121 push eax */
  push32((uint32_t)(EAX));
  /* 10cd5122 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10cd5128 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd5129 call 0x10cd5650 */
  push32(0x10cd512eu); f_10cd5650();
  /* 10cd512e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5131 push 0x10cf9298 */
  push32((uint32_t)(0x10cf9298u));
  /* 10cd5136 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10cd513c push edx */
  push32((uint32_t)(EDX));
  /* 10cd513d call 0x10cd5650 */
  push32(0x10cd5142u); f_10cd5650();
  /* 10cd5142 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5145 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd5148 mov ecx, dword ptr [eax*8 + 0x10cfcab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x10cfcab4)));
  /* 10cd514f push ecx */
  push32((uint32_t)(ECX));
  /* 10cd5150 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10cd5156 push edx */
  push32((uint32_t)(EDX));
  /* 10cd5157 call 0x10cd5650 */
  push32(0x10cd515cu); f_10cd5650();
  /* 10cd515c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd515f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10cd5164 push 0x10cf9d50 */
  push32((uint32_t)(0x10cf9d50u));
  /* 10cd5169 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 10cd516f push eax */
  push32((uint32_t)(EAX));
  /* 10cd5170 call 0x10cd5df0 */
  push32(0x10cd5175u); f_10cd5df0();
  /* 10cd5175 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd5178:;
  /* 10cd5178 pop edi */
  EDI = (pop32());
  /* 10cd5179 pop esi */
  ESI = (pop32());
  /* 10cd517a pop ebx */
  EBX = (pop32());
  /* 10cd517b mov esp, ebp */
  ESP = (EBP);
  /* 10cd517d pop ebp */
  EBP = (pop32());
  /* 10cd517e ret  */
  ESPCHK(0x10cd4fc0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10cd5180 (80 bytes, 27 insns) */
void f_10cd5180(void) {
  FTRACE(0x10cd5180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd5180 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd5181 mov ebp, esp */
  EBP = (ESP);
  /* 10cd5183 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd5184 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cd518b jmp 0x10cd5196 */
  goto L_10cd5196;
L_10cd518d:;
  /* 10cd518d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5190 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5193 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cd5196:;
  /* 10cd5196 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd519a jae 0x10cd51af */
  if (!C.cf) goto L_10cd51af;
  /* 10cd519c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd519f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd51a2 cmp edx, dword ptr [ecx*8 + 0x10cfcab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10cfcab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd51a9 jne 0x10cd51ad */
  if (!C.zf) goto L_10cd51ad;
  /* 10cd51ab jmp 0x10cd51af */
  goto L_10cd51af;
L_10cd51ad:;
  /* 10cd51ad jmp 0x10cd518d */
  goto L_10cd518d;
L_10cd51af:;
  /* 10cd51af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd51b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd51b5 cmp ecx, dword ptr [eax*8 + 0x10cfcab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10cfcab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd51bc jne 0x10cd51ca */
  if (!C.zf) goto L_10cd51ca;
  /* 10cd51be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd51c1 mov eax, dword ptr [edx*8 + 0x10cfcab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10cfcab4)));
  /* 10cd51c8 jmp 0x10cd51cc */
  goto L_10cd51cc;
L_10cd51ca:;
  /* 10cd51ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10cd51cc:;
  /* 10cd51cc mov esp, ebp */
  ESP = (EBP);
  /* 10cd51ce pop ebp */
  EBP = (pop32());
  /* 10cd51cf ret  */
  ESPCHK(0x10cd5180u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10cd51d0 (66 bytes, 28 insns) */
void f_10cd51d0(void) {
  FTRACE(0x10cd51d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd51d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd51d1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd51d3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd51d7 jne 0x10cd51f7 */
  if (!C.zf) goto L_10cd51f7;
  /* 10cd51d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd51dd jge 0x10cd51f7 */
  if ((C.sf==C.of)) goto L_10cd51f7;
  /* 10cd51df push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd51e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd51e4 push eax */
  push32((uint32_t)(EAX));
  /* 10cd51e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd51e8 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd51e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd51ec push edx */
  push32((uint32_t)(EDX));
  /* 10cd51ed call 0x10cd5220 */
  push32(0x10cd51f2u); f_10cd5220();
  /* 10cd51f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd51f5 jmp 0x10cd520d */
  goto L_10cd520d;
L_10cd51f7:;
  /* 10cd51f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd51f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd51fc push eax */
  push32((uint32_t)(EAX));
  /* 10cd51fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd5200 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd5201 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd5204 push edx */
  push32((uint32_t)(EDX));
  /* 10cd5205 call 0x10cd5220 */
  push32(0x10cd520au); f_10cd5220();
  /* 10cd520a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd520d:;
  /* 10cd520d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd5210 pop ebp */
  EBP = (pop32());
  /* 10cd5211 ret  */
  ESPCHK(0x10cd51d0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10cd5220 (194 bytes, 71 insns) */
void f_10cd5220(void) {
  FTRACE(0x10cd5220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd5220 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd5221 mov ebp, esp */
  EBP = (ESP);
  /* 10cd5223 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd5226 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd5229 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd522c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5230 je 0x10cd5249 */
  if (C.zf) goto L_10cd5249;
  /* 10cd5232 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5235 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10cd5238 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd523b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd523e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd5241 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd5244 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10cd5246 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10cd5249:;
  /* 10cd5249 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd524c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10cd524f:;
  /* 10cd524f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd5252 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd5254 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10cd5257 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10cd525a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd525d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd525f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10cd5262 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10cd5265 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5269 jbe 0x10cd5281 */
  if ((C.cf||C.zf)) goto L_10cd5281;
  /* 10cd526b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd526e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5271 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5274 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10cd5276 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5279 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd527c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10cd527f jmp 0x10cd5295 */
  goto L_10cd5295;
L_10cd5281:;
  /* 10cd5281 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd5284 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5287 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd528a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10cd528c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd528f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5292 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10cd5295:;
  /* 10cd5295 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5299 ja 0x10cd524f */
  if ((!C.cf&&!C.zf)) goto L_10cd524f;
  /* 10cd529b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd529e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10cd52a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd52a4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd52a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cd52aa:;
  /* 10cd52aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd52ad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10cd52af mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10cd52b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd52b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd52b8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10cd52ba mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10cd52bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd52bf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10cd52c2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10cd52c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd52c7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd52ca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd52cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd52d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd52d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cd52d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd52d9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd52dc jb 0x10cd52aa */
  if (C.cf) goto L_10cd52aa;
  /* 10cd52de mov esp, ebp */
  ESP = (EBP);
  /* 10cd52e0 pop ebp */
  EBP = (pop32());
  /* 10cd52e1 ret  */
  ESPCHK(0x10cd5220u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10cd52f0 (63 bytes, 24 insns) */
void f_10cd52f0(void) {
  FTRACE(0x10cd52f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd52f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd52f1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd52f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd52f4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd52f8 jne 0x10cd5309 */
  if (!C.zf) goto L_10cd5309;
  /* 10cd52fa cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd52fe jge 0x10cd5309 */
  if ((C.sf==C.of)) goto L_10cd5309;
  /* 10cd5300 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10cd5307 jmp 0x10cd5310 */
  goto L_10cd5310;
L_10cd5309:;
  /* 10cd5309 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10cd5310:;
  /* 10cd5310 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5313 push eax */
  push32((uint32_t)(EAX));
  /* 10cd5314 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd5317 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd5318 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd531b push edx */
  push32((uint32_t)(EDX));
  /* 10cd531c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd531f push eax */
  push32((uint32_t)(EAX));
  /* 10cd5320 call 0x10cd5220 */
  push32(0x10cd5325u); f_10cd5220();
  /* 10cd5325 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5328 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd532b mov esp, ebp */
  ESP = (EBP);
  /* 10cd532d pop ebp */
  EBP = (pop32());
  /* 10cd532e ret  */
  ESPCHK(0x10cd52f0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10cd5330 (30 bytes, 14 insns) */
void f_10cd5330(void) {
  FTRACE(0x10cd5330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd5330 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd5331 mov ebp, esp */
  EBP = (ESP);
  /* 10cd5333 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd5335 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd5338 push eax */
  push32((uint32_t)(EAX));
  /* 10cd5339 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd533c push ecx */
  push32((uint32_t)(ECX));
  /* 10cd533d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd5340 push edx */
  push32((uint32_t)(EDX));
  /* 10cd5341 call 0x10cd5220 */
  push32(0x10cd5346u); f_10cd5220();
  /* 10cd5346 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5349 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd534c pop ebp */
  EBP = (pop32());
  /* 10cd534d ret  */
  ESPCHK(0x10cd5330u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10cd5350 (72 bytes, 28 insns) */
void f_10cd5350(void) {
  FTRACE(0x10cd5350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd5350 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd5351 mov ebp, esp */
  EBP = (ESP);
  /* 10cd5353 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd5354 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5358 jne 0x10cd5371 */
  if (!C.zf) goto L_10cd5371;
  /* 10cd535a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd535e jg 0x10cd5371 */
  if ((!C.zf&&C.sf==C.of)) goto L_10cd5371;
  /* 10cd5360 jl 0x10cd5368 */
  if ((C.sf!=C.of)) goto L_10cd5368;
  /* 10cd5362 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5366 jae 0x10cd5371 */
  if (!C.cf) goto L_10cd5371;
L_10cd5368:;
  /* 10cd5368 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10cd536f jmp 0x10cd5378 */
  goto L_10cd5378;
L_10cd5371:;
  /* 10cd5371 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10cd5378:;
  /* 10cd5378 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd537b push eax */
  push32((uint32_t)(EAX));
  /* 10cd537c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd537f push ecx */
  push32((uint32_t)(ECX));
  /* 10cd5380 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd5383 push edx */
  push32((uint32_t)(EDX));
  /* 10cd5384 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd5387 push eax */
  push32((uint32_t)(EAX));
  /* 10cd5388 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd538b push ecx */
  push32((uint32_t)(ECX));
  /* 10cd538c call 0x10cd53a0 */
  push32(0x10cd5391u); f_10cd53a0();
  /* 10cd5391 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd5394 mov esp, ebp */
  ESP = (EBP);
  /* 10cd5396 pop ebp */
  EBP = (pop32());
  /* 10cd5397 ret  */
  ESPCHK(0x10cd5350u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10cd53a0 (242 bytes, 91 insns) */
void f_10cd53a0(void) {
  FTRACE(0x10cd53a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd53a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd53a1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd53a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd53a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd53a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd53ac cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd53b0 je 0x10cd53d4 */
  if (C.zf) goto L_10cd53d4;
  /* 10cd53b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd53b5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10cd53b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd53bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd53be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd53c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd53c4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10cd53c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd53c9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd53cc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10cd53ce mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10cd53d1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10cd53d4:;
  /* 10cd53d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd53d7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10cd53da:;
  /* 10cd53da mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd53dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd53df push ecx */
  push32((uint32_t)(ECX));
  /* 10cd53e0 push eax */
  push32((uint32_t)(EAX));
  /* 10cd53e1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd53e4 push edx */
  push32((uint32_t)(EDX));
  /* 10cd53e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd53e8 push eax */
  push32((uint32_t)(EAX));
  /* 10cd53e9 call 0x10cd9320 */
  push32(0x10cd53eeu); f_10cd9320();
  /* 10cd53ee mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cd53f1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd53f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd53f6 push edx */
  push32((uint32_t)(EDX));
  /* 10cd53f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd53f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd53fb push eax */
  push32((uint32_t)(EAX));
  /* 10cd53fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd53ff push ecx */
  push32((uint32_t)(ECX));
  /* 10cd5400 call 0x10cd92b0 */
  push32(0x10cd5405u); f_10cd92b0();
  /* 10cd5405 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10cd5408 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10cd540b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd540f jbe 0x10cd5427 */
  if ((C.cf||C.zf)) goto L_10cd5427;
  /* 10cd5411 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd5414 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5417 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd541a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10cd541c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd541f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5422 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10cd5425 jmp 0x10cd543b */
  goto L_10cd543b;
L_10cd5427:;
  /* 10cd5427 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd542a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd542d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5430 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10cd5432 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5435 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5438 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10cd543b:;
  /* 10cd543b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd543f ja 0x10cd53da */
  if ((!C.cf&&!C.zf)) goto L_10cd53da;
  /* 10cd5441 jb 0x10cd5449 */
  if (C.cf) goto L_10cd5449;
  /* 10cd5443 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5447 ja 0x10cd53da */
  if ((!C.cf&&!C.zf)) goto L_10cd53da;
L_10cd5449:;
  /* 10cd5449 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd544c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10cd544f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5452 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd5455 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cd5458:;
  /* 10cd5458 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd545b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10cd545d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10cd5460 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5463 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd5466 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10cd5468 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10cd546a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd546d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10cd5470 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10cd5472 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5475 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd5478 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd547b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd547e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5481 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cd5484 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd5487 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd548a jb 0x10cd5458 */
  if (C.cf) goto L_10cd5458;
  /* 10cd548c mov esp, ebp */
  ESP = (EBP);
  /* 10cd548e pop ebp */
  EBP = (pop32());
  /* 10cd548f ret 0x14 */
  ESPCHK(0x10cd53a0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10cd54a0 (31 bytes, 15 insns) */
void f_10cd54a0(void) {
  FTRACE(0x10cd54a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd54a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd54a1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd54a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd54a5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd54a8 push eax */
  push32((uint32_t)(EAX));
  /* 10cd54a9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd54ac push ecx */
  push32((uint32_t)(ECX));
  /* 10cd54ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd54b0 push edx */
  push32((uint32_t)(EDX));
  /* 10cd54b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd54b4 push eax */
  push32((uint32_t)(EAX));
  /* 10cd54b5 call 0x10cd53a0 */
  push32(0x10cd54bau); f_10cd53a0();
  /* 10cd54ba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd54bd pop ebp */
  EBP = (pop32());
  /* 10cd54be ret  */
  ESPCHK(0x10cd54a0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10cd54c0 (123 bytes, 44 insns) */
void f_10cd54c0(void) {
  FTRACE(0x10cd54c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd54c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10cd54c4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10cd54ca je 0x10cd54e0 */
  if (C.zf) goto L_10cd54e0;
L_10cd54cc:;
  /* 10cd54cc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10cd54ce inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10cd54cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10cd54d1 je 0x10cd5513 */
  if (C.zf) goto L_10cd5513;
  /* 10cd54d3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10cd54d9 jne 0x10cd54cc */
  if (!C.zf) goto L_10cd54cc;
  /* 10cd54db add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10cd54e0:;
  /* 10cd54e0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10cd54e2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10cd54e7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd54e9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd54ec xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd54ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd54f1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10cd54f6 je 0x10cd54e0 */
  if (C.zf) goto L_10cd54e0;
  /* 10cd54f8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10cd54fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10cd54fd je 0x10cd5531 */
  if (C.zf) goto L_10cd5531;
  /* 10cd54ff test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10cd5501 je 0x10cd5527 */
  if (C.zf) goto L_10cd5527;
  /* 10cd5503 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10cd5508 je 0x10cd551d */
  if (C.zf) goto L_10cd551d;
  /* 10cd550a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10cd550f je 0x10cd5513 */
  if (C.zf) goto L_10cd5513;
  /* 10cd5511 jmp 0x10cd54e0 */
  goto L_10cd54e0;
L_10cd5513:;
  /* 10cd5513 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10cd5516 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10cd551a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd551c ret  */
  ESPCHK(0x10cd54c0u, _esp0);
  ESP += 4; return;
L_10cd551d:;
  /* 10cd551d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10cd5520 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10cd5524 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd5526 ret  */
  ESPCHK(0x10cd54c0u, _esp0);
  ESP += 4; return;
L_10cd5527:;
  /* 10cd5527 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10cd552a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10cd552e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd5530 ret  */
  ESPCHK(0x10cd54c0u, _esp0);
  ESP += 4; return;
L_10cd5531:;
  /* 10cd5531 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10cd5534 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10cd5538 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd553a ret  */
  ESPCHK(0x10cd54c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005540 @ 0x10cd5540 (249 bytes, 93 insns) */
void f_10cd5540(void) {
  FTRACE(0x10cd5540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd5540 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd5541 mov ebp, esp */
  EBP = (ESP);
  /* 10cd5543 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd5546 push ebx */
  push32((uint32_t)(EBX));
  /* 10cd5547 push esi */
  push32((uint32_t)(ESI));
  /* 10cd5548 push edi */
  push32((uint32_t)(EDI));
  /* 10cd5549 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10cd554c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10cd554f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10cd5552 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10cd5555:;
  /* 10cd5555 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5559 jne 0x10cd5579 */
  if (!C.zf) goto L_10cd5579;
  /* 10cd555b push 0x10cf9db0 */
  push32((uint32_t)(0x10cf9db0u));
  /* 10cd5560 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd5562 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10cd5564 push 0x10cf9da4 */
  push32((uint32_t)(0x10cf9da4u));
  /* 10cd5569 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd556b call 0x10cd1750 */
  push32(0x10cd5570u); f_10cd1750();
  /* 10cd5570 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5573 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5576 jne 0x10cd5579 */
  if (!C.zf) goto L_10cd5579;
  /* 10cd5578 int3  */
  x86_unimpl("int3 @ 0x10cd5578");
L_10cd5579:;
  /* 10cd5579 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd557b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd557d jne 0x10cd5555 */
  if (!C.zf) goto L_10cd5555;
L_10cd557f:;
  /* 10cd557f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5583 jne 0x10cd55a3 */
  if (!C.zf) goto L_10cd55a3;
  /* 10cd5585 push 0x10cf9d94 */
  push32((uint32_t)(0x10cf9d94u));
  /* 10cd558a push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd558c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10cd558e push 0x10cf9da4 */
  push32((uint32_t)(0x10cf9da4u));
  /* 10cd5593 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd5595 call 0x10cd1750 */
  push32(0x10cd559au); f_10cd1750();
  /* 10cd559a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd559d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd55a0 jne 0x10cd55a3 */
  if (!C.zf) goto L_10cd55a3;
  /* 10cd55a2 int3  */
  x86_unimpl("int3 @ 0x10cd55a2");
L_10cd55a3:;
  /* 10cd55a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd55a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd55a7 jne 0x10cd557f */
  if (!C.zf) goto L_10cd557f;
  /* 10cd55a9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd55ac mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10cd55b3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd55b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd55b9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10cd55bc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd55bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd55c2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10cd55c4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd55c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd55ca mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10cd55cd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10cd55d0 push edx */
  push32((uint32_t)(EDX));
  /* 10cd55d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd55d4 push eax */
  push32((uint32_t)(EAX));
  /* 10cd55d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd55d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd55d9 call 0x10cd9620 */
  push32(0x10cd55deu); f_10cd9620();
  /* 10cd55de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd55e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10cd55e4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd55e7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10cd55ea sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd55ed mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd55f0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10cd55f3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd55f6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd55fa jl 0x10cd561e */
  if ((C.sf!=C.of)) goto L_10cd561e;
  /* 10cd55fc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd55ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cd5601 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10cd5604 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd5606 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10cd560c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10cd560f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd5612 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cd5614 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5617 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd561a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10cd561c jmp 0x10cd562f */
  goto L_10cd562f;
L_10cd561e:;
  /* 10cd561e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd5621 push eax */
  push32((uint32_t)(EAX));
  /* 10cd5622 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd5624 call 0x10cd93a0 */
  push32(0x10cd5629u); f_10cd93a0();
  /* 10cd5629 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd562c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10cd562f:;
  /* 10cd562f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd5632 pop edi */
  EDI = (pop32());
  /* 10cd5633 pop esi */
  ESI = (pop32());
  /* 10cd5634 pop ebx */
  EBX = (pop32());
  /* 10cd5635 mov esp, ebp */
  ESP = (EBP);
  /* 10cd5637 pop ebp */
  EBP = (pop32());
  /* 10cd5638 ret  */
  ESPCHK(0x10cd5540u, _esp0);
  ESP += 4; return;
}

/* FUN_10005640 @ 0x10cd5640 (7 bytes, 3 insns) */
void f_10cd5640(void) {
  FTRACE(0x10cd5640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd5640 push edi */
  push32((uint32_t)(EDI));
  /* 10cd5641 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10cd5645 jmp 0x10cd56b1 */
  jmp_ind(0x10cd56b1u); return;
}

/* FUN_10005650 @ 0x10cd5650 (224 bytes, 84 insns) */
void f_10cd5650(void) {
  FTRACE(0x10cd5650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd5650 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10cd5654 push edi */
  push32((uint32_t)(EDI));
  /* 10cd5655 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10cd565b je 0x10cd566c */
  if (C.zf) goto L_10cd566c;
L_10cd565d:;
  /* 10cd565d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10cd565f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10cd5660 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10cd5662 je 0x10cd569f */
  if (C.zf) goto L_10cd569f;
  /* 10cd5664 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10cd566a jne 0x10cd565d */
  if (!C.zf) goto L_10cd565d;
L_10cd566c:;
  /* 10cd566c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10cd566e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10cd5673 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5675 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd5678 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd567a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd567d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10cd5682 je 0x10cd566c */
  if (C.zf) goto L_10cd566c;
  /* 10cd5684 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10cd5687 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10cd5689 je 0x10cd56ae */
  if (C.zf) goto L_10cd56ae;
  /* 10cd568b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10cd568d je 0x10cd56a9 */
  if (C.zf) goto L_10cd56a9;
  /* 10cd568f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10cd5694 je 0x10cd56a4 */
  if (C.zf) goto L_10cd56a4;
  /* 10cd5696 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10cd569b je 0x10cd569f */
  if (C.zf) goto L_10cd569f;
  /* 10cd569d jmp 0x10cd566c */
  goto L_10cd566c;
L_10cd569f:;
  /* 10cd569f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10cd56a2 jmp 0x10cd56b1 */
  goto L_10cd56b1;
L_10cd56a4:;
  /* 10cd56a4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10cd56a7 jmp 0x10cd56b1 */
  goto L_10cd56b1;
L_10cd56a9:;
  /* 10cd56a9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10cd56ac jmp 0x10cd56b1 */
  goto L_10cd56b1;
L_10cd56ae:;
  /* 10cd56ae lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10cd56b1:;
  /* 10cd56b1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10cd56b5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10cd56bb je 0x10cd56d6 */
  if (C.zf) goto L_10cd56d6;
L_10cd56bd:;
  /* 10cd56bd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10cd56bf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10cd56c0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10cd56c2 je 0x10cd5728 */
  if (C.zf) goto L_10cd5728;
  /* 10cd56c4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10cd56c6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10cd56c7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10cd56cd jne 0x10cd56bd */
  if (!C.zf) goto L_10cd56bd;
  /* 10cd56cf jmp 0x10cd56d6 */
  goto L_10cd56d6;
L_10cd56d1:;
  /* 10cd56d1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10cd56d3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10cd56d6:;
  /* 10cd56d6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10cd56db mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10cd56dd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd56df xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd56e2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd56e4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd56e6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd56e9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10cd56ee je 0x10cd56d1 */
  if (C.zf) goto L_10cd56d1;
  /* 10cd56f0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10cd56f2 je 0x10cd5728 */
  if (C.zf) goto L_10cd5728;
  /* 10cd56f4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10cd56f6 je 0x10cd571f */
  if (C.zf) goto L_10cd571f;
  /* 10cd56f8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10cd56fe je 0x10cd5712 */
  if (C.zf) goto L_10cd5712;
  /* 10cd5700 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10cd5706 je 0x10cd570a */
  if (C.zf) goto L_10cd570a;
  /* 10cd5708 jmp 0x10cd56d1 */
  goto L_10cd56d1;
L_10cd570a:;
  /* 10cd570a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10cd570c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10cd5710 pop edi */
  EDI = (pop32());
  /* 10cd5711 ret  */
  ESPCHK(0x10cd5650u, _esp0);
  ESP += 4; return;
L_10cd5712:;
  /* 10cd5712 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10cd5715 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10cd5719 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10cd571d pop edi */
  EDI = (pop32());
  /* 10cd571e ret  */
  ESPCHK(0x10cd5650u, _esp0);
  ESP += 4; return;
L_10cd571f:;
  /* 10cd571f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10cd5722 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10cd5726 pop edi */
  EDI = (pop32());
  /* 10cd5727 ret  */
  ESPCHK(0x10cd5650u, _esp0);
  ESP += 4; return;
L_10cd5728:;
  /* 10cd5728 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10cd572a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10cd572e pop edi */
  EDI = (pop32());
  /* 10cd572f ret  */
  ESPCHK(0x10cd5650u, _esp0);
  ESP += 4; return;
}

/* FUN_10005730 @ 0x10cd5730 (243 bytes, 91 insns) */
void f_10cd5730(void) {
  FTRACE(0x10cd5730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd5730 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd5731 mov ebp, esp */
  EBP = (ESP);
  /* 10cd5733 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd5736 push ebx */
  push32((uint32_t)(EBX));
  /* 10cd5737 push esi */
  push32((uint32_t)(ESI));
  /* 10cd5738 push edi */
  push32((uint32_t)(EDI));
  /* 10cd5739 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10cd573c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10cd573f:;
  /* 10cd573f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5743 jne 0x10cd5763 */
  if (!C.zf) goto L_10cd5763;
  /* 10cd5745 push 0x10cf9db0 */
  push32((uint32_t)(0x10cf9db0u));
  /* 10cd574a push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd574c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10cd574e push 0x10cf9dc0 */
  push32((uint32_t)(0x10cf9dc0u));
  /* 10cd5753 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd5755 call 0x10cd1750 */
  push32(0x10cd575au); f_10cd1750();
  /* 10cd575a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd575d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5760 jne 0x10cd5763 */
  if (!C.zf) goto L_10cd5763;
  /* 10cd5762 int3  */
  x86_unimpl("int3 @ 0x10cd5762");
L_10cd5763:;
  /* 10cd5763 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd5765 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd5767 jne 0x10cd573f */
  if (!C.zf) goto L_10cd573f;
L_10cd5769:;
  /* 10cd5769 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd576d jne 0x10cd578d */
  if (!C.zf) goto L_10cd578d;
  /* 10cd576f push 0x10cf9d94 */
  push32((uint32_t)(0x10cf9d94u));
  /* 10cd5774 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd5776 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10cd5778 push 0x10cf9dc0 */
  push32((uint32_t)(0x10cf9dc0u));
  /* 10cd577d push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd577f call 0x10cd1750 */
  push32(0x10cd5784u); f_10cd1750();
  /* 10cd5784 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5787 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd578a jne 0x10cd578d */
  if (!C.zf) goto L_10cd578d;
  /* 10cd578c int3  */
  x86_unimpl("int3 @ 0x10cd578c");
L_10cd578d:;
  /* 10cd578d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd578f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd5791 jne 0x10cd5769 */
  if (!C.zf) goto L_10cd5769;
  /* 10cd5793 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd5796 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10cd579d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd57a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd57a3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10cd57a6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd57a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd57ac mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10cd57ae mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd57b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd57b4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10cd57b7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10cd57ba push ecx */
  push32((uint32_t)(ECX));
  /* 10cd57bb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd57be push edx */
  push32((uint32_t)(EDX));
  /* 10cd57bf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd57c2 push eax */
  push32((uint32_t)(EAX));
  /* 10cd57c3 call 0x10cd9620 */
  push32(0x10cd57c8u); f_10cd9620();
  /* 10cd57c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd57cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10cd57ce mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd57d1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cd57d4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd57d7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd57da mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10cd57dd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd57e0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd57e4 jl 0x10cd5808 */
  if ((C.sf!=C.of)) goto L_10cd5808;
  /* 10cd57e6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd57e9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cd57eb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10cd57ee xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10cd57f0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10cd57f6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10cd57f9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd57fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cd57fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5801 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd5804 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10cd5806 jmp 0x10cd5819 */
  goto L_10cd5819;
L_10cd5808:;
  /* 10cd5808 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10cd580b push edx */
  push32((uint32_t)(EDX));
  /* 10cd580c push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd580e call 0x10cd93a0 */
  push32(0x10cd5813u); f_10cd93a0();
  /* 10cd5813 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5816 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10cd5819:;
  /* 10cd5819 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10cd581c pop edi */
  EDI = (pop32());
  /* 10cd581d pop esi */
  ESI = (pop32());
  /* 10cd581e pop ebx */
  EBX = (pop32());
  /* 10cd581f mov esp, ebp */
  ESP = (EBP);
  /* 10cd5821 pop ebp */
  EBP = (pop32());
  /* 10cd5822 ret  */
  ESPCHK(0x10cd5730u, _esp0);
  ESP += 4; return;
}

/* FUN_10005830 @ 0x10cd5830 (47 bytes, 17 insns) */
void f_10cd5830(void) {
  FTRACE(0x10cd5830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd5830 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd5831 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5836 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10cd583a jb 0x10cd5850 */
  if (C.cf) goto L_10cd5850;
L_10cd583c:;
  /* 10cd583c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd5842 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd5847 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10cd5849 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd584e jae 0x10cd583c */
  if (!C.cf) goto L_10cd583c;
L_10cd5850:;
  /* 10cd5850 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd5852 mov eax, esp */
  EAX = (ESP);
  /* 10cd5854 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10cd5856 mov esp, ecx */
  ESP = (ECX);
  /* 10cd5858 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cd585a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cd585d push eax */
  push32((uint32_t)(EAX));
  /* 10cd585e ret  */
  ESPCHK(0x10cd5830u, _esp0);
  ESP += 4; return;
}

/* FUN_10005860 @ 0x10cd5860 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10cd5860(void) {
  FTRACE(0x10cd5860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd5860 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd5861 mov ebp, esp */
  EBP = (ESP);
  /* 10cd5863 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd5866 push esi */
  push32((uint32_t)(ESI));
  /* 10cd5867 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd586b je 0x10cd5873 */
  if (C.zf) goto L_10cd5873;
  /* 10cd586d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5871 jne 0x10cd5878 */
  if (!C.zf) goto L_10cd5878;
L_10cd5873:;
  /* 10cd5873 jmp 0x10cd5a48 */
  goto L_10cd5a48;
L_10cd5878:;
  /* 10cd5878 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd587c je 0x10cd5894 */
  if (C.zf) goto L_10cd5894;
  /* 10cd587e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5882 je 0x10cd5894 */
  if (C.zf) goto L_10cd5894;
  /* 10cd5884 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5888 je 0x10cd5894 */
  if (C.zf) goto L_10cd5894;
  /* 10cd588a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd588e jne 0x10cd5971 */
  if (!C.zf) goto L_10cd5971;
L_10cd5894:;
  /* 10cd5894 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd5896 call 0x10cd6090 */
  push32(0x10cd589bu); f_10cd6090();
  /* 10cd589b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd589e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd58a2 je 0x10cd58aa */
  if (C.zf) goto L_10cd58aa;
  /* 10cd58a4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd58a8 jne 0x10cd58ef */
  if (!C.zf) goto L_10cd58ef;
L_10cd58aa:;
  /* 10cd58aa cmp dword ptr [0x10cfe574], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe574))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd58b1 jne 0x10cd58ef */
  if (!C.zf) goto L_10cd58ef;
  /* 10cd58b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd58b5 push 0x10cd5a90 */
  push32((uint32_t)(0x10cd5a90u));
  /* 10cd58ba call dword ptr [0x10d002b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002b8))), 0x10cd58c0u);
  /* 10cd58c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd58c3 jne 0x10cd58d1 */
  if (!C.zf) goto L_10cd58d1;
  /* 10cd58c5 mov dword ptr [0x10cfe574], 1 */
  w32((uint32_t)(0x10cfe574), (0x1u));
  /* 10cd58cf jmp 0x10cd58ef */
  goto L_10cd58ef;
L_10cd58d1:;
  /* 10cd58d1 call dword ptr [0x10d00270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00270))), 0x10cd58d7u);
  /* 10cd58d7 mov esi, eax */
  ESI = (EAX);
  /* 10cd58d9 call 0x10cda570 */
  push32(0x10cd58deu); f_10cda570();
  /* 10cd58de mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10cd58e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd58e2 call 0x10cd6130 */
  push32(0x10cd58e7u); f_10cd6130();
  /* 10cd58e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd58ea jmp 0x10cd5a48 */
  goto L_10cd5a48;
L_10cd58ef:;
  /* 10cd58ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd58f2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10cd58f5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd58f8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd58fb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10cd58fe cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5902 ja 0x10cd5962 */
  if ((!C.cf&&!C.zf)) goto L_10cd5962;
  /* 10cd5904 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd5907 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd5909 mov dl, byte ptr [eax + 0x10cd5a6f] */
  DL = (r8((uint32_t)(EAX + 0x10cd5a6f)));
  /* 10cd590f jmp dword ptr [edx*4 + 0x10cd5a5b] */
  switch (EDX) {
    case 0: goto L_10cd5916;
    case 1: goto L_10cd5950;
    case 2: goto L_10cd592a;
    case 3: goto L_10cd593d;
    case 4: goto L_10cd5962;
    default: x86_unimpl("switch@0x10cd590f out of table"); return;
  }
L_10cd5916:;
  /* 10cd5916 mov ecx, dword ptr [0x10cfe564] */
  ECX = (r32((uint32_t)(0x10cfe564)));
  /* 10cd591c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cd591f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd5922 mov dword ptr [0x10cfe564], edx */
  w32((uint32_t)(0x10cfe564), (EDX));
  /* 10cd5928 jmp 0x10cd5962 */
  goto L_10cd5962;
L_10cd592a:;
  /* 10cd592a mov eax, dword ptr [0x10cfe568] */
  EAX = (r32((uint32_t)(0x10cfe568)));
  /* 10cd592f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cd5932 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd5935 mov dword ptr [0x10cfe568], ecx */
  w32((uint32_t)(0x10cfe568), (ECX));
  /* 10cd593b jmp 0x10cd5962 */
  goto L_10cd5962;
L_10cd593d:;
  /* 10cd593d mov edx, dword ptr [0x10cfe56c] */
  EDX = (r32((uint32_t)(0x10cfe56c)));
  /* 10cd5943 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10cd5946 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd5949 mov dword ptr [0x10cfe56c], eax */
  w32((uint32_t)(0x10cfe56c), (EAX));
  /* 10cd594e jmp 0x10cd5962 */
  goto L_10cd5962;
L_10cd5950:;
  /* 10cd5950 mov ecx, dword ptr [0x10cfe570] */
  ECX = (r32((uint32_t)(0x10cfe570)));
  /* 10cd5956 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cd5959 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd595c mov dword ptr [0x10cfe570], edx */
  w32((uint32_t)(0x10cfe570), (EDX));
L_10cd5962:;
  /* 10cd5962 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd5964 call 0x10cd6130 */
  push32(0x10cd5969u); f_10cd6130();
  /* 10cd5969 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd596c jmp 0x10cd5a43 */
  goto L_10cd5a43;
L_10cd5971:;
  /* 10cd5971 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5975 je 0x10cd5988 */
  if (C.zf) goto L_10cd5988;
  /* 10cd5977 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd597b je 0x10cd5988 */
  if (C.zf) goto L_10cd5988;
  /* 10cd597d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5981 je 0x10cd5988 */
  if (C.zf) goto L_10cd5988;
  /* 10cd5983 jmp 0x10cd5a48 */
  goto L_10cd5a48;
L_10cd5988:;
  /* 10cd5988 call 0x10cd20d0 */
  push32(0x10cd598du); f_10cd20d0();
  /* 10cd598d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd5990 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5993 cmp dword ptr [eax + 0x50], 0x10cfcc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x10cfcc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd599a jne 0x10cd59e5 */
  if (!C.zf) goto L_10cd59e5;
  /* 10cd599c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10cd59a1 push 0x10cf9dcc */
  push32((uint32_t)(0x10cf9dccu));
  /* 10cd59a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd59a8 mov ecx, dword ptr [0x10cfcc80] */
  ECX = (r32((uint32_t)(0x10cfcc80)));
  /* 10cd59ae push ecx */
  push32((uint32_t)(ECX));
  /* 10cd59af call 0x10cd2690 */
  push32(0x10cd59b4u); f_10cd2690();
  /* 10cd59b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd59b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd59ba mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10cd59bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd59c0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd59c4 je 0x10cd59e3 */
  if (C.zf) goto L_10cd59e3;
  /* 10cd59c6 mov ecx, dword ptr [0x10cfcc80] */
  ECX = (r32((uint32_t)(0x10cfcc80)));
  /* 10cd59cc push ecx */
  push32((uint32_t)(ECX));
  /* 10cd59cd push 0x10cfcc00 */
  push32((uint32_t)(0x10cfcc00u));
  /* 10cd59d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd59d5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10cd59d8 push eax */
  push32((uint32_t)(EAX));
  /* 10cd59d9 call 0x10cd8f70 */
  push32(0x10cd59deu); f_10cd8f70();
  /* 10cd59de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd59e1 jmp 0x10cd59e5 */
  goto L_10cd59e5;
L_10cd59e3:;
  /* 10cd59e3 jmp 0x10cd5a48 */
  goto L_10cd5a48;
L_10cd59e5:;
  /* 10cd59e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd59e8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10cd59eb push edx */
  push32((uint32_t)(EDX));
  /* 10cd59ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd59ef push eax */
  push32((uint32_t)(EAX));
  /* 10cd59f0 call 0x10cd5d70 */
  push32(0x10cd59f5u); f_10cd5d70();
  /* 10cd59f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd59f8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cd59fb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd59ff jne 0x10cd5a03 */
  if (!C.zf) goto L_10cd5a03;
  /* 10cd5a01 jmp 0x10cd5a48 */
  goto L_10cd5a48;
L_10cd5a03:;
  /* 10cd5a03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd5a06 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10cd5a09 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10cd5a0c:;
  /* 10cd5a0c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd5a0f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cd5a12 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5a15 jne 0x10cd5a43 */
  if (!C.zf) goto L_10cd5a43;
  /* 10cd5a17 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd5a1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd5a1d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10cd5a20 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd5a23 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5a26 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cd5a29 mov edx, dword ptr [0x10cfcc84] */
  EDX = (r32((uint32_t)(0x10cfcc84)));
  /* 10cd5a2f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd5a32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5a35 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10cd5a38 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5a3a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5a3d jb 0x10cd5a41 */
  if (C.cf) goto L_10cd5a41;
  /* 10cd5a3f jmp 0x10cd5a43 */
  goto L_10cd5a43;
L_10cd5a41:;
  /* 10cd5a41 jmp 0x10cd5a0c */
  goto L_10cd5a0c;
L_10cd5a43:;
  /* 10cd5a43 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd5a46 jmp 0x10cd5a56 */
  goto L_10cd5a56;
L_10cd5a48:;
  /* 10cd5a48 call 0x10cda560 */
  push32(0x10cd5a4du); f_10cda560();
  /* 10cd5a4d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10cd5a53 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10cd5a56:;
  /* 10cd5a56 pop esi */
  ESI = (pop32());
  /* 10cd5a57 mov esp, ebp */
  ESP = (EBP);
  /* 10cd5a59 pop ebp */
  EBP = (pop32());
  /* 10cd5a5a ret  */
  ESPCHK(0x10cd5860u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a90 @ 0x10cd5a90 (146 bytes, 45 insns) */
void f_10cd5a90(void) {
  FTRACE(0x10cd5a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd5a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd5a91 mov ebp, esp */
  EBP = (ESP);
  /* 10cd5a93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd5a96 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd5a98 call 0x10cd6090 */
  push32(0x10cd5a9du); f_10cd6090();
  /* 10cd5a9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5aa0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5aa4 jne 0x10cd5abe */
  if (!C.zf) goto L_10cd5abe;
  /* 10cd5aa6 mov dword ptr [ebp - 8], 0x10cfe564 */
  w32((uint32_t)(EBP + -0x8), (0x10cfe564u));
  /* 10cd5aad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd5ab0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10cd5ab2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cd5ab5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10cd5abc jmp 0x10cd5ad4 */
  goto L_10cd5ad4;
L_10cd5abe:;
  /* 10cd5abe mov dword ptr [ebp - 8], 0x10cfe568 */
  w32((uint32_t)(EBP + -0x8), (0x10cfe568u));
  /* 10cd5ac5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd5ac8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cd5aca mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cd5acd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10cd5ad4:;
  /* 10cd5ad4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5ad8 jne 0x10cd5ae8 */
  if (!C.zf) goto L_10cd5ae8;
  /* 10cd5ada push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd5adc call 0x10cd6130 */
  push32(0x10cd5ae1u); f_10cd6130();
  /* 10cd5ae1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5ae4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd5ae6 jmp 0x10cd5b1c */
  goto L_10cd5b1c;
L_10cd5ae8:;
  /* 10cd5ae8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5aec je 0x10cd5b0d */
  if (C.zf) goto L_10cd5b0d;
  /* 10cd5aee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd5af1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10cd5af7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd5af9 call 0x10cd6130 */
  push32(0x10cd5afeu); f_10cd6130();
  /* 10cd5afe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5b01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5b04 push edx */
  push32((uint32_t)(EDX));
  /* 10cd5b05 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10cd5b08u);
  /* 10cd5b08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5b0b jmp 0x10cd5b17 */
  goto L_10cd5b17;
L_10cd5b0d:;
  /* 10cd5b0d push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd5b0f call 0x10cd6130 */
  push32(0x10cd5b14u); f_10cd6130();
  /* 10cd5b14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd5b17:;
  /* 10cd5b17 mov eax, 1 */
  EAX = (0x1u);
L_10cd5b1c:;
  /* 10cd5b1c mov esp, ebp */
  ESP = (EBP);
  /* 10cd5b1e pop ebp */
  EBP = (pop32());
  /* 10cd5b1f ret 4 */
  ESPCHK(0x10cd5a90u, _esp0);
  ESP += 8; return;
}

/* FUN_10005b30 @ 0x10cd5b30 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10cd5b30(void) {
  FTRACE(0x10cd5b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd5b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd5b31 mov ebp, esp */
  EBP = (ESP);
  /* 10cd5b33 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd5b36 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10cd5b3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd5b40 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10cd5b43 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd5b46 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd5b49 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10cd5b4c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5b50 ja 0x10cd5bfe */
  if ((!C.cf&&!C.zf)) goto L_10cd5bfe;
  /* 10cd5b56 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10cd5b59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd5b5b mov dl, byte ptr [eax + 0x10cd5d52] */
  DL = (r8((uint32_t)(EAX + 0x10cd5d52)));
  /* 10cd5b61 jmp dword ptr [edx*4 + 0x10cd5d3a] */
  switch (EDX) {
    case 0: goto L_10cd5b68;
    case 1: goto L_10cd5bd3;
    case 2: goto L_10cd5bb9;
    case 3: goto L_10cd5b85;
    case 4: goto L_10cd5b9f;
    case 5: goto L_10cd5bfe;
    default: x86_unimpl("switch@0x10cd5b61 out of table"); return;
  }
L_10cd5b68:;
  /* 10cd5b68 mov dword ptr [ebp - 0x18], 0x10cfe564 */
  w32((uint32_t)(EBP + -0x18), (0x10cfe564u));
  /* 10cd5b6f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd5b72 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd5b74 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10cd5b77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd5b7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5b7d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cd5b80 jmp 0x10cd5c06 */
  goto L_10cd5c06;
L_10cd5b85:;
  /* 10cd5b85 mov dword ptr [ebp - 0x18], 0x10cfe568 */
  w32((uint32_t)(EBP + -0x18), (0x10cfe568u));
  /* 10cd5b8c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd5b8f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd5b91 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10cd5b94 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd5b97 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5b9a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cd5b9d jmp 0x10cd5c06 */
  goto L_10cd5c06;
L_10cd5b9f:;
  /* 10cd5b9f mov dword ptr [ebp - 0x18], 0x10cfe56c */
  w32((uint32_t)(EBP + -0x18), (0x10cfe56cu));
  /* 10cd5ba6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd5ba9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd5bab mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10cd5bae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd5bb1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5bb4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cd5bb7 jmp 0x10cd5c06 */
  goto L_10cd5c06;
L_10cd5bb9:;
  /* 10cd5bb9 mov dword ptr [ebp - 0x18], 0x10cfe570 */
  w32((uint32_t)(EBP + -0x18), (0x10cfe570u));
  /* 10cd5bc0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd5bc3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd5bc5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10cd5bc8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd5bcb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5bce mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cd5bd1 jmp 0x10cd5c06 */
  goto L_10cd5c06;
L_10cd5bd3:;
  /* 10cd5bd3 call 0x10cd20d0 */
  push32(0x10cd5bd8u); f_10cd20d0();
  /* 10cd5bd8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd5bdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5bde mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10cd5be1 push edx */
  push32((uint32_t)(EDX));
  /* 10cd5be2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd5be5 push eax */
  push32((uint32_t)(EAX));
  /* 10cd5be6 call 0x10cd5d70 */
  push32(0x10cd5bebu); f_10cd5d70();
  /* 10cd5beb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5bee add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5bf1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10cd5bf4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd5bf7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd5bf9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10cd5bfc jmp 0x10cd5c06 */
  goto L_10cd5c06;
L_10cd5bfe:;
  /* 10cd5bfe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd5c01 jmp 0x10cd5d36 */
  goto L_10cd5d36;
L_10cd5c06:;
  /* 10cd5c06 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5c0a je 0x10cd5c16 */
  if (C.zf) goto L_10cd5c16;
  /* 10cd5c0c push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd5c0e call 0x10cd6090 */
  push32(0x10cd5c13u); f_10cd6090();
  /* 10cd5c13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd5c16:;
  /* 10cd5c16 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5c1a jne 0x10cd5c33 */
  if (!C.zf) goto L_10cd5c33;
  /* 10cd5c1c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5c20 je 0x10cd5c2c */
  if (C.zf) goto L_10cd5c2c;
  /* 10cd5c22 push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd5c24 call 0x10cd6130 */
  push32(0x10cd5c29u); f_10cd6130();
  /* 10cd5c29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd5c2c:;
  /* 10cd5c2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd5c2e jmp 0x10cd5d36 */
  goto L_10cd5d36;
L_10cd5c33:;
  /* 10cd5c33 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5c37 jne 0x10cd5c50 */
  if (!C.zf) goto L_10cd5c50;
  /* 10cd5c39 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5c3d je 0x10cd5c49 */
  if (C.zf) goto L_10cd5c49;
  /* 10cd5c3f push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd5c41 call 0x10cd6130 */
  push32(0x10cd5c46u); f_10cd6130();
  /* 10cd5c46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd5c49:;
  /* 10cd5c49 push 3 */
  push32((uint32_t)(0x3u));
  /* 10cd5c4b call 0x10cd1e50 */
  push32(0x10cd5c50u); f_10cd1e50();
L_10cd5c50:;
  /* 10cd5c50 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5c54 je 0x10cd5c62 */
  if (C.zf) goto L_10cd5c62;
  /* 10cd5c56 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5c5a je 0x10cd5c62 */
  if (C.zf) goto L_10cd5c62;
  /* 10cd5c5c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5c60 jne 0x10cd5c8e */
  if (!C.zf) goto L_10cd5c8e;
L_10cd5c62:;
  /* 10cd5c62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5c65 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10cd5c68 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10cd5c6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5c6e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10cd5c75 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5c79 jne 0x10cd5c8e */
  if (!C.zf) goto L_10cd5c8e;
  /* 10cd5c7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5c7e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10cd5c81 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cd5c84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5c87 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10cd5c8e:;
  /* 10cd5c8e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5c92 jne 0x10cd5cd0 */
  if (!C.zf) goto L_10cd5cd0;
  /* 10cd5c94 mov eax, dword ptr [0x10cfcc78] */
  EAX = (r32((uint32_t)(0x10cfcc78)));
  /* 10cd5c99 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10cd5c9c jmp 0x10cd5ca7 */
  goto L_10cd5ca7;
L_10cd5c9e:;
  /* 10cd5c9e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd5ca1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5ca4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10cd5ca7:;
  /* 10cd5ca7 mov edx, dword ptr [0x10cfcc78] */
  EDX = (r32((uint32_t)(0x10cfcc78)));
  /* 10cd5cad add edx, dword ptr [0x10cfcc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10cfcc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5cb3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5cb6 jge 0x10cd5cce */
  if ((C.sf==C.of)) goto L_10cd5cce;
  /* 10cd5cb8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd5cbb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd5cbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5cc1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10cd5cc4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10cd5ccc jmp 0x10cd5c9e */
  goto L_10cd5c9e;
L_10cd5cce:;
  /* 10cd5cce jmp 0x10cd5cd9 */
  goto L_10cd5cd9;
L_10cd5cd0:;
  /* 10cd5cd0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd5cd3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10cd5cd9:;
  /* 10cd5cd9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5cdd je 0x10cd5ce9 */
  if (C.zf) goto L_10cd5ce9;
  /* 10cd5cdf push 1 */
  push32((uint32_t)(0x1u));
  /* 10cd5ce1 call 0x10cd6130 */
  push32(0x10cd5ce6u); f_10cd6130();
  /* 10cd5ce6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd5ce9:;
  /* 10cd5ce9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5ced jne 0x10cd5d00 */
  if (!C.zf) goto L_10cd5d00;
  /* 10cd5cef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5cf2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10cd5cf5 push edx */
  push32((uint32_t)(EDX));
  /* 10cd5cf6 push 8 */
  push32((uint32_t)(0x8u));
  /* 10cd5cf8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10cd5cfbu);
  /* 10cd5cfb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5cfe jmp 0x10cd5d0a */
  goto L_10cd5d0a;
L_10cd5d00:;
  /* 10cd5d00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd5d03 push eax */
  push32((uint32_t)(EAX));
  /* 10cd5d04 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10cd5d07u);
  /* 10cd5d07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd5d0a:;
  /* 10cd5d0a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5d0e je 0x10cd5d1c */
  if (C.zf) goto L_10cd5d1c;
  /* 10cd5d10 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5d14 je 0x10cd5d1c */
  if (C.zf) goto L_10cd5d1c;
  /* 10cd5d16 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5d1a jne 0x10cd5d34 */
  if (!C.zf) goto L_10cd5d34;
L_10cd5d1c:;
  /* 10cd5d1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5d1f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd5d22 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10cd5d25 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5d29 jne 0x10cd5d34 */
  if (!C.zf) goto L_10cd5d34;
  /* 10cd5d2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5d2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd5d31 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10cd5d34:;
  /* 10cd5d34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10cd5d36:;
  /* 10cd5d36 mov esp, ebp */
  ESP = (EBP);
  /* 10cd5d38 pop ebp */
  EBP = (pop32());
  /* 10cd5d39 ret  */
  ESPCHK(0x10cd5b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d70 @ 0x10cd5d70 (91 bytes, 35 insns) */
void f_10cd5d70(void) {
  FTRACE(0x10cd5d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd5d70 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd5d71 mov ebp, esp */
  EBP = (ESP);
  /* 10cd5d73 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd5d74 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd5d77 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cd5d7a:;
  /* 10cd5d7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5d7d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10cd5d80 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5d83 je 0x10cd5da3 */
  if (C.zf) goto L_10cd5da3;
  /* 10cd5d85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5d88 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5d8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd5d8e mov ecx, dword ptr [0x10cfcc84] */
  ECX = (r32((uint32_t)(0x10cfcc84)));
  /* 10cd5d94 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd5d97 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd5d9a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5d9c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5d9f jae 0x10cd5da3 */
  if (!C.cf) goto L_10cd5da3;
  /* 10cd5da1 jmp 0x10cd5d7a */
  goto L_10cd5d7a;
L_10cd5da3:;
  /* 10cd5da3 mov eax, dword ptr [0x10cfcc84] */
  EAX = (r32((uint32_t)(0x10cfcc84)));
  /* 10cd5da8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd5dab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd5dae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5db0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5db3 jae 0x10cd5dc5 */
  if (!C.cf) goto L_10cd5dc5;
  /* 10cd5db5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5db8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10cd5dbb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5dbe jne 0x10cd5dc5 */
  if (!C.zf) goto L_10cd5dc5;
  /* 10cd5dc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5dc3 jmp 0x10cd5dc7 */
  goto L_10cd5dc7;
L_10cd5dc5:;
  /* 10cd5dc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10cd5dc7:;
  /* 10cd5dc7 mov esp, ebp */
  ESP = (EBP);
  /* 10cd5dc9 pop ebp */
  EBP = (pop32());
  /* 10cd5dca ret  */
  ESPCHK(0x10cd5d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dd0 @ 0x10cd5dd0 (13 bytes, 6 insns) */
void f_10cd5dd0(void) {
  FTRACE(0x10cd5dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd5dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd5dd1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd5dd3 call 0x10cd20d0 */
  push32(0x10cd5dd8u); f_10cd20d0();
  /* 10cd5dd8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5ddb pop ebp */
  EBP = (pop32());
  /* 10cd5ddc ret  */
  ESPCHK(0x10cd5dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005de0 @ 0x10cd5de0 (13 bytes, 6 insns) */
void f_10cd5de0(void) {
  FTRACE(0x10cd5de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd5de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd5de1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd5de3 call 0x10cd20d0 */
  push32(0x10cd5de8u); f_10cd20d0();
  /* 10cd5de8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5deb pop ebp */
  EBP = (pop32());
  /* 10cd5dec ret  */
  ESPCHK(0x10cd5de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005df0 @ 0x10cd5df0 (187 bytes, 54 insns) */
void f_10cd5df0(void) {
  FTRACE(0x10cd5df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd5df0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd5df1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd5df3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd5df6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cd5dfd cmp dword ptr [0x10cfe578], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe578))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5e04 jne 0x10cd5e63 */
  if (!C.zf) goto L_10cd5e63;
  /* 10cd5e06 push 0x10cf91f8 */
  push32((uint32_t)(0x10cf91f8u));
  /* 10cd5e0b call dword ptr [0x10d00240] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00240))), 0x10cd5e11u);
  /* 10cd5e11 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cd5e14 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5e18 je 0x10cd5e37 */
  if (C.zf) goto L_10cd5e37;
  /* 10cd5e1a push 0x10cf9dfc */
  push32((uint32_t)(0x10cf9dfcu));
  /* 10cd5e1f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd5e22 push eax */
  push32((uint32_t)(EAX));
  /* 10cd5e23 call dword ptr [0x10d0023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0023c))), 0x10cd5e29u);
  /* 10cd5e29 mov dword ptr [0x10cfe578], eax */
  w32((uint32_t)(0x10cfe578), (EAX));
  /* 10cd5e2e cmp dword ptr [0x10cfe578], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe578))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5e35 jne 0x10cd5e3b */
  if (!C.zf) goto L_10cd5e3b;
L_10cd5e37:;
  /* 10cd5e37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd5e39 jmp 0x10cd5ea7 */
  goto L_10cd5ea7;
L_10cd5e3b:;
  /* 10cd5e3b push 0x10cf9dec */
  push32((uint32_t)(0x10cf9decu));
  /* 10cd5e40 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd5e43 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd5e44 call dword ptr [0x10d0023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0023c))), 0x10cd5e4au);
  /* 10cd5e4a mov dword ptr [0x10cfe57c], eax */
  w32((uint32_t)(0x10cfe57c), (EAX));
  /* 10cd5e4f push 0x10cf9dd8 */
  push32((uint32_t)(0x10cf9dd8u));
  /* 10cd5e54 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd5e57 push edx */
  push32((uint32_t)(EDX));
  /* 10cd5e58 call dword ptr [0x10d0023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0023c))), 0x10cd5e5eu);
  /* 10cd5e5e mov dword ptr [0x10cfe580], eax */
  w32((uint32_t)(0x10cfe580), (EAX));
L_10cd5e63:;
  /* 10cd5e63 cmp dword ptr [0x10cfe57c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe57c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5e6a je 0x10cd5e75 */
  if (C.zf) goto L_10cd5e75;
  /* 10cd5e6c call dword ptr [0x10cfe57c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfe57c))), 0x10cd5e72u);
  /* 10cd5e72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cd5e75:;
  /* 10cd5e75 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5e79 je 0x10cd5e91 */
  if (C.zf) goto L_10cd5e91;
  /* 10cd5e7b cmp dword ptr [0x10cfe580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd5e82 je 0x10cd5e91 */
  if (C.zf) goto L_10cd5e91;
  /* 10cd5e84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5e87 push eax */
  push32((uint32_t)(EAX));
  /* 10cd5e88 call dword ptr [0x10cfe580] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfe580))), 0x10cd5e8eu);
  /* 10cd5e8e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cd5e91:;
  /* 10cd5e91 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10cd5e94 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd5e95 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd5e98 push edx */
  push32((uint32_t)(EDX));
  /* 10cd5e99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd5e9c push eax */
  push32((uint32_t)(EAX));
  /* 10cd5e9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd5ea0 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd5ea1 call dword ptr [0x10cfe578] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cfe578))), 0x10cd5ea7u);
L_10cd5ea7:;
  /* 10cd5ea7 mov esp, ebp */
  ESP = (EBP);
  /* 10cd5ea9 pop ebp */
  EBP = (pop32());
  /* 10cd5eaa ret  */
  ESPCHK(0x10cd5df0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10cd5eb0 (254 bytes, 109 insns) */
void f_10cd5eb0(void) {
  FTRACE(0x10cd5eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd5eb0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10cd5eb4 push edi */
  push32((uint32_t)(EDI));
  /* 10cd5eb5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10cd5eb7 je 0x10cd5f33 */
  if (C.zf) goto L_10cd5f33;
  /* 10cd5eb9 push esi */
  push32((uint32_t)(ESI));
  /* 10cd5eba push ebx */
  push32((uint32_t)(EBX));
  /* 10cd5ebb mov ebx, ecx */
  EBX = (ECX);
  /* 10cd5ebd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10cd5ec1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10cd5ec7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10cd5ecb jne 0x10cd5ed4 */
  if (!C.zf) goto L_10cd5ed4;
  /* 10cd5ecd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10cd5ed0 jne 0x10cd5f41 */
  if (!C.zf) goto L_10cd5f41;
  /* 10cd5ed2 jmp 0x10cd5ef5 */
  goto L_10cd5ef5;
L_10cd5ed4:;
  /* 10cd5ed4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10cd5ed6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10cd5ed7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10cd5ed9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10cd5eda dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10cd5edb je 0x10cd5f02 */
  if (C.zf) goto L_10cd5f02;
  /* 10cd5edd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10cd5edf je 0x10cd5f0a */
  if (C.zf) goto L_10cd5f0a;
  /* 10cd5ee1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10cd5ee7 jne 0x10cd5ed4 */
  if (!C.zf) goto L_10cd5ed4;
  /* 10cd5ee9 mov ebx, ecx */
  EBX = (ECX);
  /* 10cd5eeb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10cd5eee jne 0x10cd5f41 */
  if (!C.zf) goto L_10cd5f41;
L_10cd5ef0:;
  /* 10cd5ef0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10cd5ef3 je 0x10cd5f02 */
  if (C.zf) goto L_10cd5f02;
L_10cd5ef5:;
  /* 10cd5ef5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10cd5ef7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10cd5ef8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10cd5efa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10cd5efb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10cd5efd je 0x10cd5f2e */
  if (C.zf) goto L_10cd5f2e;
  /* 10cd5eff dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10cd5f00 jne 0x10cd5ef5 */
  if (!C.zf) goto L_10cd5ef5;
L_10cd5f02:;
  /* 10cd5f02 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10cd5f06 pop ebx */
  EBX = (pop32());
  /* 10cd5f07 pop esi */
  ESI = (pop32());
  /* 10cd5f08 pop edi */
  EDI = (pop32());
  /* 10cd5f09 ret  */
  ESPCHK(0x10cd5eb0u, _esp0);
  ESP += 4; return;
L_10cd5f0a:;
  /* 10cd5f0a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10cd5f10 je 0x10cd5f24 */
  if (C.zf) goto L_10cd5f24;
L_10cd5f12:;
  /* 10cd5f12 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10cd5f14 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10cd5f15 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10cd5f16 je 0x10cd5fa6 */
  if (C.zf) goto L_10cd5fa6;
  /* 10cd5f1c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10cd5f22 jne 0x10cd5f12 */
  if (!C.zf) goto L_10cd5f12;
L_10cd5f24:;
  /* 10cd5f24 mov ebx, ecx */
  EBX = (ECX);
  /* 10cd5f26 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10cd5f29 jne 0x10cd5f97 */
  if (!C.zf) goto L_10cd5f97;
L_10cd5f2b:;
  /* 10cd5f2b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10cd5f2d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10cd5f2e:;
  /* 10cd5f2e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10cd5f2f jne 0x10cd5f2b */
  if (!C.zf) goto L_10cd5f2b;
  /* 10cd5f31 pop ebx */
  EBX = (pop32());
  /* 10cd5f32 pop esi */
  ESI = (pop32());
L_10cd5f33:;
  /* 10cd5f33 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10cd5f37 pop edi */
  EDI = (pop32());
  /* 10cd5f38 ret  */
  ESPCHK(0x10cd5eb0u, _esp0);
  ESP += 4; return;
L_10cd5f39:;
  /* 10cd5f39 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10cd5f3b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5f3e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10cd5f3f je 0x10cd5ef0 */
  if (C.zf) goto L_10cd5ef0;
L_10cd5f41:;
  /* 10cd5f41 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10cd5f46 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10cd5f48 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5f4a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd5f4d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd5f4f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10cd5f51 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5f54 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10cd5f59 je 0x10cd5f39 */
  if (C.zf) goto L_10cd5f39;
  /* 10cd5f5b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10cd5f5d je 0x10cd5f8b */
  if (C.zf) goto L_10cd5f8b;
  /* 10cd5f5f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10cd5f61 je 0x10cd5f81 */
  if (C.zf) goto L_10cd5f81;
  /* 10cd5f63 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10cd5f69 je 0x10cd5f77 */
  if (C.zf) goto L_10cd5f77;
  /* 10cd5f6b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10cd5f71 jne 0x10cd5f39 */
  if (!C.zf) goto L_10cd5f39;
  /* 10cd5f73 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10cd5f75 jmp 0x10cd5f8f */
  goto L_10cd5f8f;
L_10cd5f77:;
  /* 10cd5f77 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10cd5f7d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10cd5f7f jmp 0x10cd5f8f */
  goto L_10cd5f8f;
L_10cd5f81:;
  /* 10cd5f81 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10cd5f87 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10cd5f89 jmp 0x10cd5f8f */
  goto L_10cd5f8f;
L_10cd5f8b:;
  /* 10cd5f8b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10cd5f8d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10cd5f8f:;
  /* 10cd5f8f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5f92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd5f94 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10cd5f95 je 0x10cd5fa1 */
  if (C.zf) goto L_10cd5fa1;
L_10cd5f97:;
  /* 10cd5f97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10cd5f99:;
  /* 10cd5f99 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10cd5f9b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd5f9e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10cd5f9f jne 0x10cd5f99 */
  if (!C.zf) goto L_10cd5f99;
L_10cd5fa1:;
  /* 10cd5fa1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10cd5fa4 jne 0x10cd5f2b */
  if (!C.zf) goto L_10cd5f2b;
L_10cd5fa6:;
  /* 10cd5fa6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10cd5faa pop ebx */
  EBX = (pop32());
  /* 10cd5fab pop esi */
  ESI = (pop32());
  /* 10cd5fac pop edi */
  EDI = (pop32());
  /* 10cd5fad ret  */
  ESPCHK(0x10cd5eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fb0 @ 0x10cd5fb0 (55 bytes, 16 insns) */
void f_10cd5fb0(void) {
  FTRACE(0x10cd5fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd5fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd5fb1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd5fb3 mov eax, dword ptr [0x10cfcb84] */
  EAX = (r32((uint32_t)(0x10cfcb84)));
  /* 10cd5fb8 push eax */
  push32((uint32_t)(EAX));
  /* 10cd5fb9 call dword ptr [0x10d002bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002bc))), 0x10cd5fbfu);
  /* 10cd5fbf mov ecx, dword ptr [0x10cfcb74] */
  ECX = (r32((uint32_t)(0x10cfcb74)));
  /* 10cd5fc5 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd5fc6 call dword ptr [0x10d002bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002bc))), 0x10cd5fccu);
  /* 10cd5fcc mov edx, dword ptr [0x10cfcb64] */
  EDX = (r32((uint32_t)(0x10cfcb64)));
  /* 10cd5fd2 push edx */
  push32((uint32_t)(EDX));
  /* 10cd5fd3 call dword ptr [0x10d002bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002bc))), 0x10cd5fd9u);
  /* 10cd5fd9 mov eax, dword ptr [0x10cfcb44] */
  EAX = (r32((uint32_t)(0x10cfcb44)));
  /* 10cd5fde push eax */
  push32((uint32_t)(EAX));
  /* 10cd5fdf call dword ptr [0x10d002bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002bc))), 0x10cd5fe5u);
  /* 10cd5fe5 pop ebp */
  EBP = (pop32());
  /* 10cd5fe6 ret  */
  ESPCHK(0x10cd5fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ff0 @ 0x10cd5ff0 (159 bytes, 47 insns) */
void f_10cd5ff0(void) {
  FTRACE(0x10cd5ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd5ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd5ff1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd5ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd5ff4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cd5ffb jmp 0x10cd6006 */
  goto L_10cd6006;
L_10cd5ffd:;
  /* 10cd5ffd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd6000 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6003 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cd6006:;
  /* 10cd6006 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd600a jge 0x10cd6059 */
  if ((C.sf==C.of)) goto L_10cd6059;
  /* 10cd600c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd600f cmp dword ptr [ecx*4 + 0x10cfcb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10cfcb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6017 je 0x10cd6057 */
  if (C.zf) goto L_10cd6057;
  /* 10cd6019 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd601d je 0x10cd6057 */
  if (C.zf) goto L_10cd6057;
  /* 10cd601f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6023 je 0x10cd6057 */
  if (C.zf) goto L_10cd6057;
  /* 10cd6025 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6029 je 0x10cd6057 */
  if (C.zf) goto L_10cd6057;
  /* 10cd602b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd602f je 0x10cd6057 */
  if (C.zf) goto L_10cd6057;
  /* 10cd6031 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd6034 mov eax, dword ptr [edx*4 + 0x10cfcb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10cfcb40)));
  /* 10cd603b push eax */
  push32((uint32_t)(EAX));
  /* 10cd603c call dword ptr [0x10d00284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00284))), 0x10cd6042u);
  /* 10cd6042 push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd6044 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd6047 mov edx, dword ptr [ecx*4 + 0x10cfcb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cfcb40)));
  /* 10cd604e push edx */
  push32((uint32_t)(EDX));
  /* 10cd604f call 0x10cd3120 */
  push32(0x10cd6054u); f_10cd3120();
  /* 10cd6054 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd6057:;
  /* 10cd6057 jmp 0x10cd5ffd */
  goto L_10cd5ffd;
L_10cd6059:;
  /* 10cd6059 mov eax, dword ptr [0x10cfcb64] */
  EAX = (r32((uint32_t)(0x10cfcb64)));
  /* 10cd605e push eax */
  push32((uint32_t)(EAX));
  /* 10cd605f call dword ptr [0x10d00284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00284))), 0x10cd6065u);
  /* 10cd6065 mov ecx, dword ptr [0x10cfcb74] */
  ECX = (r32((uint32_t)(0x10cfcb74)));
  /* 10cd606b push ecx */
  push32((uint32_t)(ECX));
  /* 10cd606c call dword ptr [0x10d00284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00284))), 0x10cd6072u);
  /* 10cd6072 mov edx, dword ptr [0x10cfcb84] */
  EDX = (r32((uint32_t)(0x10cfcb84)));
  /* 10cd6078 push edx */
  push32((uint32_t)(EDX));
  /* 10cd6079 call dword ptr [0x10d00284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00284))), 0x10cd607fu);
  /* 10cd607f mov eax, dword ptr [0x10cfcb44] */
  EAX = (r32((uint32_t)(0x10cfcb44)));
  /* 10cd6084 push eax */
  push32((uint32_t)(EAX));
  /* 10cd6085 call dword ptr [0x10d00284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00284))), 0x10cd608bu);
  /* 10cd608b mov esp, ebp */
  ESP = (EBP);
  /* 10cd608d pop ebp */
  EBP = (pop32());
  /* 10cd608e ret  */
  ESPCHK(0x10cd5ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006090 @ 0x10cd6090 (151 bytes, 46 insns) */
void f_10cd6090(void) {
  FTRACE(0x10cd6090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd6090 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd6091 mov ebp, esp */
  EBP = (ESP);
  /* 10cd6093 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd6094 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6097 cmp dword ptr [eax*4 + 0x10cfcb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10cfcb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd609f jne 0x10cd6112 */
  if (!C.zf) goto L_10cd6112;
  /* 10cd60a1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10cd60a6 push 0x10cf9e08 */
  push32((uint32_t)(0x10cf9e08u));
  /* 10cd60ab push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd60ad push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10cd60af call 0x10cd2690 */
  push32(0x10cd60b4u); f_10cd2690();
  /* 10cd60b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd60b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd60ba cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd60be jne 0x10cd60ca */
  if (!C.zf) goto L_10cd60ca;
  /* 10cd60c0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10cd60c2 call 0x10cd1600 */
  push32(0x10cd60c7u); f_10cd1600();
  /* 10cd60c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd60ca:;
  /* 10cd60ca push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10cd60cc call 0x10cd6090 */
  push32(0x10cd60d1u); f_10cd6090();
  /* 10cd60d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd60d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd60d7 cmp dword ptr [ecx*4 + 0x10cfcb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10cfcb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd60df jne 0x10cd60fa */
  if (!C.zf) goto L_10cd60fa;
  /* 10cd60e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd60e4 push edx */
  push32((uint32_t)(EDX));
  /* 10cd60e5 call dword ptr [0x10d002bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002bc))), 0x10cd60ebu);
  /* 10cd60eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd60ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd60f1 mov dword ptr [eax*4 + 0x10cfcb40], ecx */
  w32((uint32_t)(EAX*4 + 0x10cfcb40), (ECX));
  /* 10cd60f8 jmp 0x10cd6108 */
  goto L_10cd6108;
L_10cd60fa:;
  /* 10cd60fa push 2 */
  push32((uint32_t)(0x2u));
  /* 10cd60fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd60ff push edx */
  push32((uint32_t)(EDX));
  /* 10cd6100 call 0x10cd3120 */
  push32(0x10cd6105u); f_10cd3120();
  /* 10cd6105 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd6108:;
  /* 10cd6108 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10cd610a call 0x10cd6130 */
  push32(0x10cd610fu); f_10cd6130();
  /* 10cd610f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd6112:;
  /* 10cd6112 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6115 mov ecx, dword ptr [eax*4 + 0x10cfcb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10cfcb40)));
  /* 10cd611c push ecx */
  push32((uint32_t)(ECX));
  /* 10cd611d call dword ptr [0x10d002c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002c0))), 0x10cd6123u);
  /* 10cd6123 mov esp, ebp */
  ESP = (EBP);
  /* 10cd6125 pop ebp */
  EBP = (pop32());
  /* 10cd6126 ret  */
  ESPCHK(0x10cd6090u, _esp0);
  ESP += 4; return;
}

/* FUN_10006130 @ 0x10cd6130 (22 bytes, 8 insns) */
void f_10cd6130(void) {
  FTRACE(0x10cd6130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd6130 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd6131 mov ebp, esp */
  EBP = (ESP);
  /* 10cd6133 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6136 mov ecx, dword ptr [eax*4 + 0x10cfcb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10cfcb40)));
  /* 10cd613d push ecx */
  push32((uint32_t)(ECX));
  /* 10cd613e call dword ptr [0x10d002c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002c4))), 0x10cd6144u);
  /* 10cd6144 pop ebp */
  EBP = (pop32());
  /* 10cd6145 ret  */
  ESPCHK(0x10cd6130u, _esp0);
  ESP += 4; return;
}

/* FUN_10006150 @ 0x10cd6150 (26 bytes, 10 insns) */
void f_10cd6150(void) {
  FTRACE(0x10cd6150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd6150 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd6151 mov ebp, esp */
  EBP = (ESP);
  /* 10cd6153 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6156 push eax */
  push32((uint32_t)(EAX));
  /* 10cd6157 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd6159 call dword ptr [0x10d002c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002c8))), 0x10cd615fu);
  /* 10cd615f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10cd6164 call dword ptr [0x10d0024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d0024c))), 0x10cd616au);
  /* 10cd616a pop ebp */
  EBP = (pop32());
  /* 10cd616b ret  */
  ESPCHK(0x10cd6150u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10cd6170 (446 bytes, 130 insns) */
void f_10cd6170(void) {
  FTRACE(0x10cd6170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd6170 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd6171 mov ebp, esp */
  EBP = (ESP);
  /* 10cd6173 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd6176 call 0x10cd20d0 */
  push32(0x10cd617bu); f_10cd20d0();
  /* 10cd617b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cd617e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd6181 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10cd6184 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd6185 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6188 push edx */
  push32((uint32_t)(EDX));
  /* 10cd6189 call 0x10cd6330 */
  push32(0x10cd618eu); f_10cd6330();
  /* 10cd618e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6191 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10cd6194 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6198 je 0x10cd61a3 */
  if (C.zf) goto L_10cd61a3;
  /* 10cd619a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd619d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd61a1 jne 0x10cd61b2 */
  if (!C.zf) goto L_10cd61b2;
L_10cd61a3:;
  /* 10cd61a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd61a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd61a7 call dword ptr [0x10d002cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002cc))), 0x10cd61adu);
  /* 10cd61ad jmp 0x10cd632a */
  goto L_10cd632a;
L_10cd61b2:;
  /* 10cd61b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd61b5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd61b9 jne 0x10cd61cf */
  if (!C.zf) goto L_10cd61cf;
  /* 10cd61bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd61be mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10cd61c5 mov eax, 1 */
  EAX = (0x1u);
  /* 10cd61ca jmp 0x10cd632a */
  goto L_10cd632a;
L_10cd61cf:;
  /* 10cd61cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd61d2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd61d6 jne 0x10cd61e0 */
  if (!C.zf) goto L_10cd61e0;
  /* 10cd61d8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10cd61db jmp 0x10cd632a */
  goto L_10cd632a;
L_10cd61e0:;
  /* 10cd61e0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd61e3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10cd61e6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd61e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd61ec mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 10cd61ef mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10cd61f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd61f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd61f8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 10cd61fb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd61fe cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6202 jne 0x10cd6307 */
  if (!C.zf) goto L_10cd6307;
  /* 10cd6208 mov eax, dword ptr [0x10cfcc78] */
  EAX = (r32((uint32_t)(0x10cfcc78)));
  /* 10cd620d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10cd6210 jmp 0x10cd621b */
  goto L_10cd621b;
L_10cd6212:;
  /* 10cd6212 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd6215 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6218 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10cd621b:;
  /* 10cd621b mov edx, dword ptr [0x10cfcc78] */
  EDX = (r32((uint32_t)(0x10cfcc78)));
  /* 10cd6221 add edx, dword ptr [0x10cfcc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10cfcc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6227 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd622a jge 0x10cd6242 */
  if ((C.sf==C.of)) goto L_10cd6242;
  /* 10cd622c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd622f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd6232 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd6235 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10cd6238 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10cd6240 jmp 0x10cd6212 */
  goto L_10cd6212;
L_10cd6242:;
  /* 10cd6242 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd6245 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10cd6248 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10cd624b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd624e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6254 jne 0x10cd6265 */
  if (!C.zf) goto L_10cd6265;
  /* 10cd6256 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd6259 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10cd6260 jmp 0x10cd62ed */
  goto L_10cd62ed;
L_10cd6265:;
  /* 10cd6265 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd6268 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd626e jne 0x10cd627c */
  if (!C.zf) goto L_10cd627c;
  /* 10cd6270 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd6273 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 10cd627a jmp 0x10cd62ed */
  goto L_10cd62ed;
L_10cd627c:;
  /* 10cd627c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd627f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6285 jne 0x10cd6293 */
  if (!C.zf) goto L_10cd6293;
  /* 10cd6287 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd628a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10cd6291 jmp 0x10cd62ed */
  goto L_10cd62ed;
L_10cd6293:;
  /* 10cd6293 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd6296 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd629c jne 0x10cd62aa */
  if (!C.zf) goto L_10cd62aa;
  /* 10cd629e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd62a1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10cd62a8 jmp 0x10cd62ed */
  goto L_10cd62ed;
L_10cd62aa:;
  /* 10cd62aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd62ad cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd62b3 jne 0x10cd62c1 */
  if (!C.zf) goto L_10cd62c1;
  /* 10cd62b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd62b8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 10cd62bf jmp 0x10cd62ed */
  goto L_10cd62ed;
L_10cd62c1:;
  /* 10cd62c1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd62c4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd62ca jne 0x10cd62d8 */
  if (!C.zf) goto L_10cd62d8;
  /* 10cd62cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd62cf mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10cd62d6 jmp 0x10cd62ed */
  goto L_10cd62ed;
L_10cd62d8:;
  /* 10cd62d8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd62db cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd62e1 jne 0x10cd62ed */
  if (!C.zf) goto L_10cd62ed;
  /* 10cd62e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd62e6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_10cd62ed:;
  /* 10cd62ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd62f0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10cd62f3 push edx */
  push32((uint32_t)(EDX));
  /* 10cd62f4 push 8 */
  push32((uint32_t)(0x8u));
  /* 10cd62f6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10cd62f9u);
  /* 10cd62f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd62fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd62ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd6302 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10cd6305 jmp 0x10cd631e */
  goto L_10cd631e;
L_10cd6307:;
  /* 10cd6307 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd630a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10cd6311 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd6314 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10cd6317 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd6318 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10cd631bu);
  /* 10cd631b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd631e:;
  /* 10cd631e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd6321 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10cd6324 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10cd6327 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10cd632a:;
  /* 10cd632a mov esp, ebp */
  ESP = (EBP);
  /* 10cd632c pop ebp */
  EBP = (pop32());
  /* 10cd632d ret  */
  ESPCHK(0x10cd6170u, _esp0);
  ESP += 4; return;
}

/* FUN_10006330 @ 0x10cd6330 (89 bytes, 35 insns) */
void f_10cd6330(void) {
  FTRACE(0x10cd6330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd6330 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd6331 mov ebp, esp */
  EBP = (ESP);
  /* 10cd6333 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd6334 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd6337 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10cd633a:;
  /* 10cd633a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd633d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10cd633f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6342 je 0x10cd6362 */
  if (C.zf) goto L_10cd6362;
  /* 10cd6344 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd6347 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd634a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd634d mov ecx, dword ptr [0x10cfcc84] */
  ECX = (r32((uint32_t)(0x10cfcc84)));
  /* 10cd6353 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd6356 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd6359 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd635b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd635e jae 0x10cd6362 */
  if (!C.cf) goto L_10cd6362;
  /* 10cd6360 jmp 0x10cd633a */
  goto L_10cd633a;
L_10cd6362:;
  /* 10cd6362 mov eax, dword ptr [0x10cfcc84] */
  EAX = (r32((uint32_t)(0x10cfcc84)));
  /* 10cd6367 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10cd636a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd636d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd636f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6372 jae 0x10cd637e */
  if (!C.cf) goto L_10cd637e;
  /* 10cd6374 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd6377 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10cd6379 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd637c je 0x10cd6382 */
  if (C.zf) goto L_10cd6382;
L_10cd637e:;
  /* 10cd637e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd6380 jmp 0x10cd6385 */
  goto L_10cd6385;
L_10cd6382:;
  /* 10cd6382 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10cd6385:;
  /* 10cd6385 mov esp, ebp */
  ESP = (EBP);
  /* 10cd6387 pop ebp */
  EBP = (pop32());
  /* 10cd6388 ret  */
  ESPCHK(0x10cd6330u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10cd6390 (48 bytes, 17 insns) */
void f_10cd6390(void) {
  FTRACE(0x10cd6390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd6390 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd6391 mov ebp, esp */
  EBP = (ESP);
  /* 10cd6393 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd6394 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd6396 call 0x10cd6090 */
  push32(0x10cd639bu); f_10cd6090();
  /* 10cd639b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd639e mov eax, dword ptr [0x10cfe5ec] */
  EAX = (r32((uint32_t)(0x10cfe5ec)));
  /* 10cd63a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd63a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd63a9 mov dword ptr [0x10cfe5ec], ecx */
  w32((uint32_t)(0x10cfe5ec), (ECX));
  /* 10cd63af push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd63b1 call 0x10cd6130 */
  push32(0x10cd63b6u); f_10cd6130();
  /* 10cd63b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd63b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd63bc mov esp, ebp */
  ESP = (EBP);
  /* 10cd63be pop ebp */
  EBP = (pop32());
  /* 10cd63bf ret  */
  ESPCHK(0x10cd6390u, _esp0);
  ESP += 4; return;
}

/* FUN_100063c0 @ 0x10cd63c0 (10 bytes, 5 insns) */
void f_10cd63c0(void) {
  FTRACE(0x10cd63c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd63c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd63c1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd63c3 mov eax, dword ptr [0x10cfe5ec] */
  EAX = (r32((uint32_t)(0x10cfe5ec)));
  /* 10cd63c8 pop ebp */
  EBP = (pop32());
  /* 10cd63c9 ret  */
  ESPCHK(0x10cd63c0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10cd63d0 (45 bytes, 19 insns) */
void f_10cd63d0(void) {
  FTRACE(0x10cd63d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd63d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd63d1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd63d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd63d4 mov eax, dword ptr [0x10cfe5ec] */
  EAX = (r32((uint32_t)(0x10cfe5ec)));
  /* 10cd63d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd63dc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd63e0 je 0x10cd63f0 */
  if (C.zf) goto L_10cd63f0;
  /* 10cd63e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd63e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd63e6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10cd63e9u);
  /* 10cd63e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd63ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd63ee jne 0x10cd63f4 */
  if (!C.zf) goto L_10cd63f4;
L_10cd63f0:;
  /* 10cd63f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd63f2 jmp 0x10cd63f9 */
  goto L_10cd63f9;
L_10cd63f4:;
  /* 10cd63f4 mov eax, 1 */
  EAX = (0x1u);
L_10cd63f9:;
  /* 10cd63f9 mov esp, ebp */
  ESP = (EBP);
  /* 10cd63fb pop ebp */
  EBP = (pop32());
  /* 10cd63fc ret  */
  ESPCHK(0x10cd63d0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10cd6400 (88 bytes, 40 insns) */
void f_10cd6400(void) {
  FTRACE(0x10cd6400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd6400 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10cd6404 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10cd6408 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd640a je 0x10cd6453 */
  if (C.zf) goto L_10cd6453;
  /* 10cd640c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd640e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10cd6412 push edi */
  push32((uint32_t)(EDI));
  /* 10cd6413 mov edi, ecx */
  EDI = (ECX);
  /* 10cd6415 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6418 jb 0x10cd6447 */
  if (C.cf) goto L_10cd6447;
  /* 10cd641a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10cd641c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd641f je 0x10cd6429 */
  if (C.zf) goto L_10cd6429;
  /* 10cd6421 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10cd6423:;
  /* 10cd6423 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10cd6425 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10cd6426 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10cd6427 jne 0x10cd6423 */
  if (!C.zf) goto L_10cd6423;
L_10cd6429:;
  /* 10cd6429 mov ecx, eax */
  ECX = (EAX);
  /* 10cd642b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10cd642e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6430 mov ecx, eax */
  ECX = (EAX);
  /* 10cd6432 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10cd6435 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6437 mov ecx, edx */
  ECX = (EDX);
  /* 10cd6439 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd643c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10cd643f je 0x10cd6447 */
  if (C.zf) goto L_10cd6447;
  /* 10cd6441 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10cd6443 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10cd6445 je 0x10cd644d */
  if (C.zf) goto L_10cd644d;
L_10cd6447:;
  /* 10cd6447 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10cd6449 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10cd644a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10cd644b jne 0x10cd6447 */
  if (!C.zf) goto L_10cd6447;
L_10cd644d:;
  /* 10cd644d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10cd6451 pop edi */
  EDI = (pop32());
  /* 10cd6452 ret  */
  ESPCHK(0x10cd6400u, _esp0);
  ESP += 4; return;
L_10cd6453:;
  /* 10cd6453 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10cd6457 ret  */
  ESPCHK(0x10cd6400u, _esp0);
  ESP += 4; return;
}

/* FUN_10006460 @ 0x10cd6460 (23 bytes, 10 insns) */
void f_10cd6460(void) {
  FTRACE(0x10cd6460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd6460 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd6461 mov ebp, esp */
  EBP = (ESP);
  /* 10cd6463 mov eax, dword ptr [0x10cfe5e8] */
  EAX = (r32((uint32_t)(0x10cfe5e8)));
  /* 10cd6468 push eax */
  push32((uint32_t)(EAX));
  /* 10cd6469 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd646c push ecx */
  push32((uint32_t)(ECX));
  /* 10cd646d call 0x10cd6480 */
  push32(0x10cd6472u); f_10cd6480();
  /* 10cd6472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6475 pop ebp */
  EBP = (pop32());
  /* 10cd6476 ret  */
  ESPCHK(0x10cd6460u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10cd6480 (87 bytes, 34 insns) */
void f_10cd6480(void) {
  FTRACE(0x10cd6480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd6480 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd6481 mov ebp, esp */
  EBP = (ESP);
  /* 10cd6483 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd6484 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6488 jbe 0x10cd648e */
  if ((C.cf||C.zf)) goto L_10cd648e;
  /* 10cd648a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd648c jmp 0x10cd64d3 */
  goto L_10cd64d3;
L_10cd648e:;
  /* 10cd648e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6492 ja 0x10cd64a5 */
  if ((!C.cf&&!C.zf)) goto L_10cd64a5;
  /* 10cd6494 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6497 push eax */
  push32((uint32_t)(EAX));
  /* 10cd6498 call 0x10cd64e0 */
  push32(0x10cd649du); f_10cd64e0();
  /* 10cd649d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd64a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd64a3 jmp 0x10cd64ac */
  goto L_10cd64ac;
L_10cd64a5:;
  /* 10cd64a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10cd64ac:;
  /* 10cd64ac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd64b0 jne 0x10cd64b8 */
  if (!C.zf) goto L_10cd64b8;
  /* 10cd64b2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd64b6 jne 0x10cd64bd */
  if (!C.zf) goto L_10cd64bd;
L_10cd64b8:;
  /* 10cd64b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd64bb jmp 0x10cd64d3 */
  goto L_10cd64d3;
L_10cd64bd:;
  /* 10cd64bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd64c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd64c1 call 0x10cd63d0 */
  push32(0x10cd64c6u); f_10cd63d0();
  /* 10cd64c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd64c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd64cb jne 0x10cd64d1 */
  if (!C.zf) goto L_10cd64d1;
  /* 10cd64cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd64cf jmp 0x10cd64d3 */
  goto L_10cd64d3;
L_10cd64d1:;
  /* 10cd64d1 jmp 0x10cd648e */
  goto L_10cd648e;
L_10cd64d3:;
  /* 10cd64d3 mov esp, ebp */
  ESP = (EBP);
  /* 10cd64d5 pop ebp */
  EBP = (pop32());
  /* 10cd64d6 ret  */
  ESPCHK(0x10cd6480u, _esp0);
  ESP += 4; return;
}

/* FUN_100064e0 @ 0x10cd64e0 (109 bytes, 37 insns) */
void f_10cd64e0(void) {
  FTRACE(0x10cd64e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd64e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd64e1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd64e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd64e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd64e7 cmp eax, dword ptr [0x10cfcc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cfcc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd64ed ja 0x10cd651d */
  if ((!C.cf&&!C.zf)) goto L_10cd651d;
  /* 10cd64ef push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd64f1 call 0x10cd6090 */
  push32(0x10cd64f6u); f_10cd6090();
  /* 10cd64f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd64f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd64fc push ecx */
  push32((uint32_t)(ECX));
  /* 10cd64fd call 0x10cd7020 */
  push32(0x10cd6502u); f_10cd7020();
  /* 10cd6502 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6505 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd6508 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd650a call 0x10cd6130 */
  push32(0x10cd650fu); f_10cd6130();
  /* 10cd650f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6512 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6516 je 0x10cd651d */
  if (C.zf) goto L_10cd651d;
  /* 10cd6518 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd651b jmp 0x10cd6549 */
  goto L_10cd6549;
L_10cd651d:;
  /* 10cd651d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6521 jne 0x10cd652a */
  if (!C.zf) goto L_10cd652a;
  /* 10cd6523 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10cd652a:;
  /* 10cd652a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd652d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6530 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd6533 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10cd6536 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6539 push eax */
  push32((uint32_t)(EAX));
  /* 10cd653a push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd653c mov ecx, dword ptr [0x10cffdac] */
  ECX = (r32((uint32_t)(0x10cffdac)));
  /* 10cd6542 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd6543 call dword ptr [0x10d002d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002d0))), 0x10cd6549u);
L_10cd6549:;
  /* 10cd6549 mov esp, ebp */
  ESP = (EBP);
  /* 10cd654b pop ebp */
  EBP = (pop32());
  /* 10cd654c ret  */
  ESPCHK(0x10cd64e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006550 @ 0x10cd6550 (10 bytes, 5 insns) */
void f_10cd6550(void) {
  FTRACE(0x10cd6550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd6550 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd6551 mov ebp, esp */
  EBP = (ESP);
  /* 10cd6553 mov eax, 1 */
  EAX = (0x1u);
  /* 10cd6558 pop ebp */
  EBP = (pop32());
  /* 10cd6559 ret  */
  ESPCHK(0x10cd6550u, _esp0);
  ESP += 4; return;
}

/* FUN_10006560 @ 0x10cd6560 (173 bytes, 59 insns) */
void f_10cd6560(void) {
  FTRACE(0x10cd6560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd6560 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd6561 mov ebp, esp */
  EBP = (ESP);
  /* 10cd6563 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd6566 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd656a jbe 0x10cd6573 */
  if ((C.cf||C.zf)) goto L_10cd6573;
  /* 10cd656c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd656e jmp 0x10cd6609 */
  goto L_10cd6609;
L_10cd6573:;
  /* 10cd6573 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd6575 call 0x10cd6090 */
  push32(0x10cd657au); f_10cd6090();
  /* 10cd657a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd657d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6580 push eax */
  push32((uint32_t)(EAX));
  /* 10cd6581 call 0x10cd6990 */
  push32(0x10cd6586u); f_10cd6990();
  /* 10cd6586 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6589 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cd658c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6590 je 0x10cd65d1 */
  if (C.zf) goto L_10cd65d1;
  /* 10cd6592 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10cd6599 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd659c cmp ecx, dword ptr [0x10cfcc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cfcc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd65a2 ja 0x10cd65c2 */
  if ((!C.cf&&!C.zf)) goto L_10cd65c2;
  /* 10cd65a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd65a7 push edx */
  push32((uint32_t)(EDX));
  /* 10cd65a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd65ab push eax */
  push32((uint32_t)(EAX));
  /* 10cd65ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd65af push ecx */
  push32((uint32_t)(ECX));
  /* 10cd65b0 call 0x10cd7860 */
  push32(0x10cd65b5u); f_10cd7860();
  /* 10cd65b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd65b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd65ba je 0x10cd65c2 */
  if (C.zf) goto L_10cd65c2;
  /* 10cd65bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd65bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10cd65c2:;
  /* 10cd65c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd65c4 call 0x10cd6130 */
  push32(0x10cd65c9u); f_10cd6130();
  /* 10cd65c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd65cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd65cf jmp 0x10cd6609 */
  goto L_10cd6609;
L_10cd65d1:;
  /* 10cd65d1 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd65d3 call 0x10cd6130 */
  push32(0x10cd65d8u); f_10cd6130();
  /* 10cd65d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd65db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd65df jne 0x10cd65e8 */
  if (!C.zf) goto L_10cd65e8;
  /* 10cd65e1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10cd65e8:;
  /* 10cd65e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd65eb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd65ee and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10cd65f0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10cd65f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd65f6 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd65f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd65fa push edx */
  push32((uint32_t)(EDX));
  /* 10cd65fb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10cd65fd mov eax, dword ptr [0x10cffdac] */
  EAX = (r32((uint32_t)(0x10cffdac)));
  /* 10cd6602 push eax */
  push32((uint32_t)(EAX));
  /* 10cd6603 call dword ptr [0x10d002d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002d4))), 0x10cd6609u);
L_10cd6609:;
  /* 10cd6609 mov esp, ebp */
  ESP = (EBP);
  /* 10cd660b pop ebp */
  EBP = (pop32());
  /* 10cd660c ret  */
  ESPCHK(0x10cd6560u, _esp0);
  ESP += 4; return;
}

/* FUN_10006610 @ 0x10cd6610 (490 bytes, 165 insns) */
void f_10cd6610(void) {
  FTRACE(0x10cd6610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd6610 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd6611 mov ebp, esp */
  EBP = (ESP);
  /* 10cd6613 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd6616 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd661a jne 0x10cd662d */
  if (!C.zf) goto L_10cd662d;
  /* 10cd661c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd661f push eax */
  push32((uint32_t)(EAX));
  /* 10cd6620 call 0x10cd6460 */
  push32(0x10cd6625u); f_10cd6460();
  /* 10cd6625 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6628 jmp 0x10cd67f6 */
  goto L_10cd67f6;
L_10cd662d:;
  /* 10cd662d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6631 jne 0x10cd6646 */
  if (!C.zf) goto L_10cd6646;
  /* 10cd6633 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6636 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd6637 call 0x10cd6800 */
  push32(0x10cd663cu); f_10cd6800();
  /* 10cd663c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd663f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd6641 jmp 0x10cd67f6 */
  goto L_10cd67f6;
L_10cd6646:;
  /* 10cd6646 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10cd664d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6651 ja 0x10cd67c9 */
  if ((!C.cf&&!C.zf)) goto L_10cd67c9;
  /* 10cd6657 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd6659 call 0x10cd6090 */
  push32(0x10cd665eu); f_10cd6090();
  /* 10cd665e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6661 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6664 push edx */
  push32((uint32_t)(EDX));
  /* 10cd6665 call 0x10cd6990 */
  push32(0x10cd666au); f_10cd6990();
  /* 10cd666a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd666d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10cd6670 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6674 je 0x10cd678c */
  if (C.zf) goto L_10cd678c;
  /* 10cd667a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd667d cmp eax, dword ptr [0x10cfcc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cfcc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6683 ja 0x10cd6700 */
  if ((!C.cf&&!C.zf)) goto L_10cd6700;
  /* 10cd6685 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd6688 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd6689 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd668c push edx */
  push32((uint32_t)(EDX));
  /* 10cd668d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd6690 push eax */
  push32((uint32_t)(EAX));
  /* 10cd6691 call 0x10cd7860 */
  push32(0x10cd6696u); f_10cd7860();
  /* 10cd6696 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6699 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd669b je 0x10cd66a5 */
  if (C.zf) goto L_10cd66a5;
  /* 10cd669d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd66a0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10cd66a3 jmp 0x10cd6700 */
  goto L_10cd6700;
L_10cd66a5:;
  /* 10cd66a5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd66a8 push edx */
  push32((uint32_t)(EDX));
  /* 10cd66a9 call 0x10cd7020 */
  push32(0x10cd66aeu); f_10cd7020();
  /* 10cd66ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd66b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cd66b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd66b8 je 0x10cd6700 */
  if (C.zf) goto L_10cd6700;
  /* 10cd66ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd66bd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10cd66c0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd66c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10cd66c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd66c9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd66cc jae 0x10cd66d6 */
  if (!C.cf) goto L_10cd66d6;
  /* 10cd66ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd66d1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10cd66d4 jmp 0x10cd66dc */
  goto L_10cd66dc;
L_10cd66d6:;
  /* 10cd66d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd66d9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10cd66dc:;
  /* 10cd66dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10cd66df push edx */
  push32((uint32_t)(EDX));
  /* 10cd66e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd66e3 push eax */
  push32((uint32_t)(EAX));
  /* 10cd66e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd66e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd66e8 call 0x10cd8f70 */
  push32(0x10cd66edu); f_10cd8f70();
  /* 10cd66ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd66f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd66f3 push edx */
  push32((uint32_t)(EDX));
  /* 10cd66f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd66f7 push eax */
  push32((uint32_t)(EAX));
  /* 10cd66f8 call 0x10cd6a50 */
  push32(0x10cd66fdu); f_10cd6a50();
  /* 10cd66fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd6700:;
  /* 10cd6700 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6704 jne 0x10cd6780 */
  if (!C.zf) goto L_10cd6780;
  /* 10cd6706 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd670a jne 0x10cd6713 */
  if (!C.zf) goto L_10cd6713;
  /* 10cd670c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10cd6713:;
  /* 10cd6713 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd6716 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6719 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10cd671c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10cd671f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd6722 push edx */
  push32((uint32_t)(EDX));
  /* 10cd6723 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd6725 mov eax, dword ptr [0x10cffdac] */
  EAX = (r32((uint32_t)(0x10cffdac)));
  /* 10cd672a push eax */
  push32((uint32_t)(EAX));
  /* 10cd672b call dword ptr [0x10d002d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002d0))), 0x10cd6731u);
  /* 10cd6731 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10cd6734 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6738 je 0x10cd6780 */
  if (C.zf) goto L_10cd6780;
  /* 10cd673a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd673d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10cd6740 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10cd6743 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10cd6746 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd6749 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd674c jae 0x10cd6756 */
  if (!C.cf) goto L_10cd6756;
  /* 10cd674e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd6751 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10cd6754 jmp 0x10cd675c */
  goto L_10cd675c;
L_10cd6756:;
  /* 10cd6756 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd6759 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10cd675c:;
  /* 10cd675c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10cd675f push eax */
  push32((uint32_t)(EAX));
  /* 10cd6760 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6763 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd6764 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd6767 push edx */
  push32((uint32_t)(EDX));
  /* 10cd6768 call 0x10cd8f70 */
  push32(0x10cd676du); f_10cd8f70();
  /* 10cd676d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6770 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6773 push eax */
  push32((uint32_t)(EAX));
  /* 10cd6774 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10cd6777 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd6778 call 0x10cd6a50 */
  push32(0x10cd677du); f_10cd6a50();
  /* 10cd677d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10cd6780:;
  /* 10cd6780 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd6782 call 0x10cd6130 */
  push32(0x10cd6787u); f_10cd6130();
  /* 10cd6787 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd678a jmp 0x10cd67c9 */
  goto L_10cd67c9;
L_10cd678c:;
  /* 10cd678c push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd678e call 0x10cd6130 */
  push32(0x10cd6793u); f_10cd6130();
  /* 10cd6793 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6796 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd679a jne 0x10cd67a3 */
  if (!C.zf) goto L_10cd67a3;
  /* 10cd679c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10cd67a3:;
  /* 10cd67a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd67a6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd67a9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10cd67ac mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10cd67af mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd67b2 push eax */
  push32((uint32_t)(EAX));
  /* 10cd67b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd67b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd67b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd67b9 mov edx, dword ptr [0x10cffdac] */
  EDX = (r32((uint32_t)(0x10cffdac)));
  /* 10cd67bf push edx */
  push32((uint32_t)(EDX));
  /* 10cd67c0 call dword ptr [0x10d002d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002d4))), 0x10cd67c6u);
  /* 10cd67c6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10cd67c9:;
  /* 10cd67c9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd67cd jne 0x10cd67d8 */
  if (!C.zf) goto L_10cd67d8;
  /* 10cd67cf cmp dword ptr [0x10cfe5e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cfe5e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd67d6 jne 0x10cd67dd */
  if (!C.zf) goto L_10cd67dd;
L_10cd67d8:;
  /* 10cd67d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10cd67db jmp 0x10cd67f6 */
  goto L_10cd67f6;
L_10cd67dd:;
  /* 10cd67dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10cd67e0 push eax */
  push32((uint32_t)(EAX));
  /* 10cd67e1 call 0x10cd63d0 */
  push32(0x10cd67e6u); f_10cd63d0();
  /* 10cd67e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd67e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd67eb jne 0x10cd67f1 */
  if (!C.zf) goto L_10cd67f1;
  /* 10cd67ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10cd67ef jmp 0x10cd67f6 */
  goto L_10cd67f6;
L_10cd67f1:;
  /* 10cd67f1 jmp 0x10cd6646 */
  goto L_10cd6646;
L_10cd67f6:;
  /* 10cd67f6 mov esp, ebp */
  ESP = (EBP);
  /* 10cd67f8 pop ebp */
  EBP = (pop32());
  /* 10cd67f9 ret  */
  ESPCHK(0x10cd6610u, _esp0);
  ESP += 4; return;
}

/* FUN_10006800 @ 0x10cd6800 (104 bytes, 38 insns) */
void f_10cd6800(void) {
  FTRACE(0x10cd6800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd6800 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd6801 mov ebp, esp */
  EBP = (ESP);
  /* 10cd6803 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd6804 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6808 jne 0x10cd680c */
  if (!C.zf) goto L_10cd680c;
  /* 10cd680a jmp 0x10cd6864 */
  goto L_10cd6864;
L_10cd680c:;
  /* 10cd680c push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd680e call 0x10cd6090 */
  push32(0x10cd6813u); f_10cd6090();
  /* 10cd6813 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6816 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6819 push eax */
  push32((uint32_t)(EAX));
  /* 10cd681a call 0x10cd6990 */
  push32(0x10cd681fu); f_10cd6990();
  /* 10cd681f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6822 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10cd6825 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd6829 je 0x10cd6847 */
  if (C.zf) goto L_10cd6847;
  /* 10cd682b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd682e push ecx */
  push32((uint32_t)(ECX));
  /* 10cd682f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd6832 push edx */
  push32((uint32_t)(EDX));
  /* 10cd6833 call 0x10cd6a50 */
  push32(0x10cd6838u); f_10cd6a50();
  /* 10cd6838 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd683b push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd683d call 0x10cd6130 */
  push32(0x10cd6842u); f_10cd6130();
  /* 10cd6842 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6845 jmp 0x10cd6864 */
  goto L_10cd6864;
L_10cd6847:;
  /* 10cd6847 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd6849 call 0x10cd6130 */
  push32(0x10cd684eu); f_10cd6130();
  /* 10cd684e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6851 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10cd6854 push eax */
  push32((uint32_t)(EAX));
  /* 10cd6855 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd6857 mov ecx, dword ptr [0x10cffdac] */
  ECX = (r32((uint32_t)(0x10cffdac)));
  /* 10cd685d push ecx */
  push32((uint32_t)(ECX));
  /* 10cd685e call dword ptr [0x10d002b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d002b0))), 0x10cd6864u);
L_10cd6864:;
  /* 10cd6864 mov esp, ebp */
  ESP = (EBP);
  /* 10cd6866 pop ebp */
  EBP = (pop32());
  /* 10cd6867 ret  */
  ESPCHK(0x10cd6800u, _esp0);
  ESP += 4; return;
}

/* FUN_10006870 @ 0x10cd6870 (116 bytes, 34 insns) */
void f_10cd6870(void) {
  FTRACE(0x10cd6870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd6870 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd6871 mov ebp, esp */
  EBP = (ESP);
  /* 10cd6873 push ecx */
  push32((uint32_t)(ECX));
  /* 10cd6874 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10cd687b push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd687d call 0x10cd6090 */
  push32(0x10cd6882u); f_10cd6090();
  /* 10cd6882 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd6885 call 0x10cd7f80 */
  push32(0x10cd688au); f_10cd7f80();
  /* 10cd688a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd688c jge 0x10cd6895 */
  if ((C.sf==C.of)) goto L_10cd6895;
  /* 10cd688e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10cd6895:;
  /* 10cd6895 push 9 */
  push32((uint32_t)(0x9u));
  /* 10cd6897 call 0x10cd6130 */
  push32(0x10cd689cu); f_10cd6130();
  /* 10cd689c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10cd689f push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd68a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10cd68a3 mov eax, dword ptr [0x10cffdac] */
  EAX = (r32((uint32_t)(0x10cffdac)));
  /* 10cd68a8 push eax */
  push32((uint32_t)(EAX));
  /* 10cd68a9 call dword ptr [0x10d00290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00290))), 0x10cd68afu);
  /* 10cd68af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10cd68b1 jne 0x10cd68dd */
  if (!C.zf) goto L_10cd68dd;
  /* 10cd68b3 call dword ptr [0x10d00270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d00270))), 0x10cd68b9u);
  /* 10cd68b9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10cd68bc jne 0x10cd68d6 */
  if (!C.zf) goto L_10cd68d6;
  /* 10cd68be call 0x10cda570 */
  push32(0x10cd68c3u); f_10cda570();
  /* 10cd68c3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10cd68c9 call 0x10cda560 */
  push32(0x10cd68ceu); f_10cda560();
  /* 10cd68ce mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10cd68d4 jmp 0x10cd68dd */
  goto L_10cd68dd;
L_10cd68d6:;
  /* 10cd68d6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10cd68dd:;
  /* 10cd68dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10cd68e0 mov esp, ebp */
  ESP = (EBP);
  /* 10cd68e2 pop ebp */
  EBP = (pop32());
  /* 10cd68e3 ret  */
  ESPCHK(0x10cd6870u, _esp0);
  ESP += 4; return;
}

/* FUN_100068f0 @ 0x10cd68f0 (10 bytes, 5 insns) */
void f_10cd68f0(void) {
  FTRACE(0x10cd68f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10cd68f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10cd68f1 mov ebp, esp */
  EBP = (ESP);
  /* 10cd68f3 call 0x10cd6870 */
  push32(0x10cd68f8u); f_10cd6870();
  /* 10cd68f8 pop ebp */
  EBP = (pop32());
  /* 10cd68f9 ret  */
  ESPCHK(0x10cd68f0u, _esp0);
  ESP += 4; return;
}

