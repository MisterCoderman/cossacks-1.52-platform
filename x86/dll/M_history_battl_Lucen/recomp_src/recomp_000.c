#include "recomp.h"

/* thunk_FUN_10001a00 @ 0x129c1005 (5 bytes, 1 insns) */
void f_129c1005(void) {
  FTRACE(0x129c1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c1005 jmp 0x129c1a00 */
  f_129c1a00(); return;
}

/* OnInit @ 0x129c100a (5 bytes, 1 insns) */
void f_129c100a(void) {
  FTRACE(0x129c100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c100a jmp 0x129c12a0 */
  f_129c12a0(); return;
}

/* thunk_FUN_10001140 @ 0x129c100f (5 bytes, 1 insns) */
void f_129c100f(void) {
  FTRACE(0x129c100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c100f jmp 0x129c1140 */
  f_129c1140(); return;
}

/* thunk_FUN_10001a50 @ 0x129c1014 (5 bytes, 1 insns) */
void f_129c1014(void) {
  FTRACE(0x129c1014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c1014 jmp 0x129c1a50 */
  f_129c1a50(); return;
}

/* thunk_FUN_10001060 @ 0x129c1019 (5 bytes, 1 insns) */
void f_129c1019(void) {
  FTRACE(0x129c1019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c1019 jmp 0x129c1060 */
  f_129c1060(); return;
}

/* thunk_FUN_100011c0 @ 0x129c101e (5 bytes, 1 insns) */
void f_129c101e(void) {
  FTRACE(0x129c101eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c101e jmp 0x129c11c0 */
  f_129c11c0(); return;
}

/* thunk_FUN_100010c0 @ 0x129c1023 (5 bytes, 1 insns) */
void f_129c1023(void) {
  FTRACE(0x129c1023u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c1023 jmp 0x129c10c0 */
  f_129c10c0(); return;
}

/* ProcessScenary @ 0x129c1028 (5 bytes, 1 insns) */
void f_129c1028(void) {
  FTRACE(0x129c1028u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c1028 jmp 0x129c14a0 */
  f_129c14a0(); return;
}

/* thunk_FUN_10001230 @ 0x129c102d (5 bytes, 1 insns) */
void f_129c102d(void) {
  FTRACE(0x129c102du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c102d jmp 0x129c1230 */
  f_129c1230(); return;
}

/* FUN_10001060 @ 0x129c1060 (67 bytes, 26 insns) */
void f_129c1060(void) {
  FTRACE(0x129c1060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c1060 push ebp */
  push32((uint32_t)(EBP));
  /* 129c1061 mov ebp, esp */
  EBP = (ESP);
  /* 129c1063 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c1066 push ebx */
  push32((uint32_t)(EBX));
  /* 129c1067 push esi */
  push32((uint32_t)(ESI));
  /* 129c1068 push edi */
  push32((uint32_t)(EDI));
  /* 129c1069 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 129c106c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 129c1071 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 129c1076 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129c1078 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c107b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c107e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1082 je 0x129c1086 */
  if (C.zf) goto L_129c1086;
  /* 129c1084 jmp 0x129c108b */
  goto L_129c108b;
L_129c1086:;
  /* 129c1086 call 0x129c100a */
  push32(0x129c108bu); f_129c100a();
L_129c108b:;
  /* 129c108b mov eax, 1 */
  EAX = (0x1u);
  /* 129c1090 pop edi */
  EDI = (pop32());
  /* 129c1091 pop esi */
  ESI = (pop32());
  /* 129c1092 pop ebx */
  EBX = (pop32());
  /* 129c1093 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1096 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1098 call 0x129c1b10 */
  push32(0x129c109du); f_129c1b10();
  /* 129c109d mov esp, ebp */
  ESP = (EBP);
  /* 129c109f pop ebp */
  EBP = (pop32());
  /* 129c10a0 ret 0xc */
  ESPCHK(0x129c1060u, _esp0);
  ESP += 16; return;
}

/* FUN_100010c0 @ 0x129c10c0 (92 bytes, 34 insns) */
void f_129c10c0(void) {
  FTRACE(0x129c10c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c10c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c10c1 mov ebp, esp */
  EBP = (ESP);
  /* 129c10c3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c10c6 push ebx */
  push32((uint32_t)(EBX));
  /* 129c10c7 push esi */
  push32((uint32_t)(ESI));
  /* 129c10c8 push edi */
  push32((uint32_t)(EDI));
  /* 129c10c9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 129c10cc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 129c10d1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 129c10d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129c10d8 mov esi, esp */
  ESI = (ESP);
  /* 129c10da call dword ptr [0x129f03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03fc))), 0x129c10e0u);
  /* 129c10e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c10e2 call 0x129c1b10 */
  push32(0x129c10e7u); f_129c1b10();
  /* 129c10e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c10e9 jne 0x129c10fc */
  if (!C.zf) goto L_129c10fc;
  /* 129c10eb mov esi, esp */
  ESI = (ESP);
  /* 129c10ed call dword ptr [0x129f0400] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0400))), 0x129c10f3u);
  /* 129c10f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c10f5 call 0x129c1b10 */
  push32(0x129c10fau); f_129c1b10();
  /* 129c10fa jmp 0x129c110b */
  goto L_129c110b;
L_129c10fc:;
  /* 129c10fc mov esi, esp */
  ESI = (ESP);
  /* 129c10fe call dword ptr [0x129f03f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03f8))), 0x129c1104u);
  /* 129c1104 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1106 call 0x129c1b10 */
  push32(0x129c110bu); f_129c1b10();
L_129c110b:;
  /* 129c110b pop edi */
  EDI = (pop32());
  /* 129c110c pop esi */
  ESI = (pop32());
  /* 129c110d pop ebx */
  EBX = (pop32());
  /* 129c110e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1111 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1113 call 0x129c1b10 */
  push32(0x129c1118u); f_129c1b10();
  /* 129c1118 mov esp, ebp */
  ESP = (EBP);
  /* 129c111a pop ebp */
  EBP = (pop32());
  /* 129c111b ret  */
  ESPCHK(0x129c10c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001140 @ 0x129c1140 (93 bytes, 34 insns) */
void f_129c1140(void) {
  FTRACE(0x129c1140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c1140 push ebp */
  push32((uint32_t)(EBP));
  /* 129c1141 mov ebp, esp */
  EBP = (ESP);
  /* 129c1143 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c1146 push ebx */
  push32((uint32_t)(EBX));
  /* 129c1147 push esi */
  push32((uint32_t)(ESI));
  /* 129c1148 push edi */
  push32((uint32_t)(EDI));
  /* 129c1149 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 129c114c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 129c1151 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 129c1156 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129c1158 mov esi, esp */
  ESI = (ESP);
  /* 129c115a call dword ptr [0x129f03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03fc))), 0x129c1160u);
  /* 129c1160 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1162 call 0x129c1b10 */
  push32(0x129c1167u); f_129c1b10();
  /* 129c1167 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c116a jne 0x129c117d */
  if (!C.zf) goto L_129c117d;
  /* 129c116c mov esi, esp */
  ESI = (ESP);
  /* 129c116e call dword ptr [0x129f0400] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0400))), 0x129c1174u);
  /* 129c1174 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1176 call 0x129c1b10 */
  push32(0x129c117bu); f_129c1b10();
  /* 129c117b jmp 0x129c118c */
  goto L_129c118c;
L_129c117d:;
  /* 129c117d mov esi, esp */
  ESI = (ESP);
  /* 129c117f call dword ptr [0x129f03f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03f8))), 0x129c1185u);
  /* 129c1185 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1187 call 0x129c1b10 */
  push32(0x129c118cu); f_129c1b10();
L_129c118c:;
  /* 129c118c pop edi */
  EDI = (pop32());
  /* 129c118d pop esi */
  ESI = (pop32());
  /* 129c118e pop ebx */
  EBX = (pop32());
  /* 129c118f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1192 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1194 call 0x129c1b10 */
  push32(0x129c1199u); f_129c1b10();
  /* 129c1199 mov esp, ebp */
  ESP = (EBP);
  /* 129c119b pop ebp */
  EBP = (pop32());
  /* 129c119c ret  */
  ESPCHK(0x129c1140u, _esp0);
  ESP += 4; return;
}

/* FUN_100011c0 @ 0x129c11c0 (90 bytes, 34 insns) */
void f_129c11c0(void) {
  FTRACE(0x129c11c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c11c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c11c1 mov ebp, esp */
  EBP = (ESP);
  /* 129c11c3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c11c6 push ebx */
  push32((uint32_t)(EBX));
  /* 129c11c7 push esi */
  push32((uint32_t)(ESI));
  /* 129c11c8 push edi */
  push32((uint32_t)(EDI));
  /* 129c11c9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 129c11cc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 129c11d1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 129c11d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129c11d8 mov esi, esp */
  ESI = (ESP);
  /* 129c11da push 0 */
  push32((uint32_t)(0x0u));
  /* 129c11dc push 5 */
  push32((uint32_t)(0x5u));
  /* 129c11de push 0 */
  push32((uint32_t)(0x0u));
  /* 129c11e0 call dword ptr [0x129f03f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03f4))), 0x129c11e6u);
  /* 129c11e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c11e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c11eb call 0x129c1b10 */
  push32(0x129c11f0u); f_129c1b10();
  /* 129c11f0 mov esi, esp */
  ESI = (ESP);
  /* 129c11f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 129c11f4 push 0x129e901c */
  push32((uint32_t)(0x129e901cu));
  /* 129c11f9 call dword ptr [0x129f03ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03ec))), 0x129c11ffu);
  /* 129c11ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1202 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1204 call 0x129c1b10 */
  push32(0x129c1209u); f_129c1b10();
  /* 129c1209 pop edi */
  EDI = (pop32());
  /* 129c120a pop esi */
  ESI = (pop32());
  /* 129c120b pop ebx */
  EBX = (pop32());
  /* 129c120c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c120f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1211 call 0x129c1b10 */
  push32(0x129c1216u); f_129c1b10();
  /* 129c1216 mov esp, ebp */
  ESP = (EBP);
  /* 129c1218 pop ebp */
  EBP = (pop32());
  /* 129c1219 ret  */
  ESPCHK(0x129c11c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001230 @ 0x129c1230 (90 bytes, 34 insns) */
void f_129c1230(void) {
  FTRACE(0x129c1230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c1230 push ebp */
  push32((uint32_t)(EBP));
  /* 129c1231 mov ebp, esp */
  EBP = (ESP);
  /* 129c1233 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c1236 push ebx */
  push32((uint32_t)(EBX));
  /* 129c1237 push esi */
  push32((uint32_t)(ESI));
  /* 129c1238 push edi */
  push32((uint32_t)(EDI));
  /* 129c1239 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 129c123c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 129c1241 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 129c1246 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129c1248 mov esi, esp */
  ESI = (ESP);
  /* 129c124a push 0 */
  push32((uint32_t)(0x0u));
  /* 129c124c push 5 */
  push32((uint32_t)(0x5u));
  /* 129c124e push 1 */
  push32((uint32_t)(0x1u));
  /* 129c1250 call dword ptr [0x129f03f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03f4))), 0x129c1256u);
  /* 129c1256 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1259 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c125b call 0x129c1b10 */
  push32(0x129c1260u); f_129c1b10();
  /* 129c1260 mov esi, esp */
  ESI = (ESP);
  /* 129c1262 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 129c1264 push 0x129e9024 */
  push32((uint32_t)(0x129e9024u));
  /* 129c1269 call dword ptr [0x129f03ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03ec))), 0x129c126fu);
  /* 129c126f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1272 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1274 call 0x129c1b10 */
  push32(0x129c1279u); f_129c1b10();
  /* 129c1279 pop edi */
  EDI = (pop32());
  /* 129c127a pop esi */
  ESI = (pop32());
  /* 129c127b pop ebx */
  EBX = (pop32());
  /* 129c127c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c127f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1281 call 0x129c1b10 */
  push32(0x129c1286u); f_129c1b10();
  /* 129c1286 mov esp, ebp */
  ESP = (EBP);
  /* 129c1288 pop ebp */
  EBP = (pop32());
  /* 129c1289 ret  */
  ESPCHK(0x129c1230u, _esp0);
  ESP += 4; return;
}

/* FUN_100012a0 @ 0x129c12a0 (404 bytes, 108 insns) */
void f_129c12a0(void) {
  FTRACE(0x129c12a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c12a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c12a1 mov ebp, esp */
  EBP = (ESP);
  /* 129c12a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c12a6 push ebx */
  push32((uint32_t)(EBX));
  /* 129c12a7 push esi */
  push32((uint32_t)(ESI));
  /* 129c12a8 push edi */
  push32((uint32_t)(EDI));
  /* 129c12a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 129c12ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 129c12b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 129c12b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129c12b8 mov esi, esp */
  ESI = (ESP);
  /* 129c12ba push 0x129e906c */
  push32((uint32_t)(0x129e906cu));
  /* 129c12bf push 0x129ee428 */
  push32((uint32_t)(0x129ee428u));
  /* 129c12c4 call dword ptr [0x129f03e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03e4))), 0x129c12cau);
  /* 129c12ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c12cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c12cf call 0x129c1b10 */
  push32(0x129c12d4u); f_129c1b10();
  /* 129c12d4 mov esi, esp */
  ESI = (ESP);
  /* 129c12d6 push 0x129e9064 */
  push32((uint32_t)(0x129e9064u));
  /* 129c12db push 0x129ee430 */
  push32((uint32_t)(0x129ee430u));
  /* 129c12e0 call dword ptr [0x129f03e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03e4))), 0x129c12e6u);
  /* 129c12e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c12e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c12eb call 0x129c1b10 */
  push32(0x129c12f0u); f_129c1b10();
  /* 129c12f0 mov esi, esp */
  ESI = (ESP);
  /* 129c12f2 push 0x129e905c */
  push32((uint32_t)(0x129e905cu));
  /* 129c12f7 push 0x129ee438 */
  push32((uint32_t)(0x129ee438u));
  /* 129c12fc call dword ptr [0x129f03e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03e4))), 0x129c1302u);
  /* 129c1302 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1305 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1307 call 0x129c1b10 */
  push32(0x129c130cu); f_129c1b10();
  /* 129c130c mov esi, esp */
  ESI = (ESP);
  /* 129c130e push 0x129e9054 */
  push32((uint32_t)(0x129e9054u));
  /* 129c1313 push 0x129ee440 */
  push32((uint32_t)(0x129ee440u));
  /* 129c1318 call dword ptr [0x129f03e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03e4))), 0x129c131eu);
  /* 129c131e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1321 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1323 call 0x129c1b10 */
  push32(0x129c1328u); f_129c1b10();
  /* 129c1328 mov esi, esp */
  ESI = (ESP);
  /* 129c132a push 0x129e904c */
  push32((uint32_t)(0x129e904cu));
  /* 129c132f push 0x129ee448 */
  push32((uint32_t)(0x129ee448u));
  /* 129c1334 call dword ptr [0x129f03e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03e4))), 0x129c133au);
  /* 129c133a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c133d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c133f call 0x129c1b10 */
  push32(0x129c1344u); f_129c1b10();
  /* 129c1344 mov esi, esp */
  ESI = (ESP);
  /* 129c1346 push 0x129e903c */
  push32((uint32_t)(0x129e903cu));
  /* 129c134b push 0x129ee420 */
  push32((uint32_t)(0x129ee420u));
  /* 129c1350 call dword ptr [0x129f03e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03e8))), 0x129c1356u);
  /* 129c1356 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1359 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c135b call 0x129c1b10 */
  push32(0x129c1360u); f_129c1b10();
  /* 129c1360 mov esi, esp */
  ESI = (ESP);
  /* 129c1362 push 0x129e9034 */
  push32((uint32_t)(0x129e9034u));
  /* 129c1367 push 0x129ee410 */
  push32((uint32_t)(0x129ee410u));
  /* 129c136c call dword ptr [0x129f03e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03e0))), 0x129c1372u);
  /* 129c1372 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1375 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1377 call 0x129c1b10 */
  push32(0x129c137cu); f_129c1b10();
  /* 129c137c mov esi, esp */
  ESI = (ESP);
  /* 129c137e push 0x129e902c */
  push32((uint32_t)(0x129e902cu));
  /* 129c1383 push 0x129ee418 */
  push32((uint32_t)(0x129ee418u));
  /* 129c1388 call dword ptr [0x129f03e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03e0))), 0x129c138eu);
  /* 129c138e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1391 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1393 call 0x129c1b10 */
  push32(0x129c1398u); f_129c1b10();
  /* 129c1398 mov esi, esp */
  ESI = (ESP);
  /* 129c139a push 1 */
  push32((uint32_t)(0x1u));
  /* 129c139c push 0 */
  push32((uint32_t)(0x0u));
  /* 129c139e call dword ptr [0x129f03f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03f0))), 0x129c13a4u);
  /* 129c13a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c13a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c13a9 call 0x129c1b10 */
  push32(0x129c13aeu); f_129c1b10();
  /* 129c13ae mov esi, esp */
  ESI = (ESP);
  /* 129c13b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c13b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c13b4 call dword ptr [0x129f03f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03f0))), 0x129c13bau);
  /* 129c13ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c13bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c13bf call 0x129c1b10 */
  push32(0x129c13c4u); f_129c1b10();
  /* 129c13c4 mov esi, esp */
  ESI = (ESP);
  /* 129c13c6 push 0x83 */
  push32((uint32_t)(0x83u));
  /* 129c13cb push 7 */
  push32((uint32_t)(0x7u));
  /* 129c13cd call dword ptr [0x129f03f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03f0))), 0x129c13d3u);
  /* 129c13d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c13d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c13d8 call 0x129c1b10 */
  push32(0x129c13ddu); f_129c1b10();
  /* 129c13dd mov dword ptr [0x129ee3e0], 0 */
  w32((uint32_t)(0x129ee3e0), (0x0u));
  /* 129c13e7 jmp 0x129c13f6 */
  goto L_129c13f6;
L_129c13e9:;
  /* 129c13e9 mov eax, dword ptr [0x129ee3e0] */
  EAX = (r32((uint32_t)(0x129ee3e0)));
  /* 129c13ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c13f1 mov dword ptr [0x129ee3e0], eax */
  w32((uint32_t)(0x129ee3e0), (EAX));
L_129c13f6:;
  /* 129c13f6 cmp dword ptr [0x129ee3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x129ee3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c13fd jge 0x129c1423 */
  if ((C.sf==C.of)) goto L_129c1423;
  /* 129c13ff mov ecx, dword ptr [0x129ee3e0] */
  ECX = (r32((uint32_t)(0x129ee3e0)));
  /* 129c1405 mov dword ptr [ecx*4 + 0x129ee3e4], 0 */
  w32((uint32_t)(ECX*4 + 0x129ee3e4), (0x0u));
  /* 129c1410 mov edx, dword ptr [0x129ee3e0] */
  EDX = (r32((uint32_t)(0x129ee3e0)));
  /* 129c1416 mov dword ptr [edx*4 + 0x129ee3f8], 0 */
  w32((uint32_t)(EDX*4 + 0x129ee3f8), (0x0u));
  /* 129c1421 jmp 0x129c13e9 */
  goto L_129c13e9;
L_129c1423:;
  /* 129c1423 pop edi */
  EDI = (pop32());
  /* 129c1424 pop esi */
  ESI = (pop32());
  /* 129c1425 pop ebx */
  EBX = (pop32());
  /* 129c1426 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1429 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c142b call 0x129c1b10 */
  push32(0x129c1430u); f_129c1b10();
  /* 129c1430 mov esp, ebp */
  ESP = (EBP);
  /* 129c1432 pop ebp */
  EBP = (pop32());
  /* 129c1433 ret  */
  ESPCHK(0x129c12a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100014a0 @ 0x129c14a0 (1093 bytes, 298 insns) */
void f_129c14a0(void) {
  FTRACE(0x129c14a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c14a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c14a1 mov ebp, esp */
  EBP = (ESP);
  /* 129c14a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c14a6 push ebx */
  push32((uint32_t)(EBX));
  /* 129c14a7 push esi */
  push32((uint32_t)(ESI));
  /* 129c14a8 push edi */
  push32((uint32_t)(EDI));
  /* 129c14a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 129c14ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 129c14b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 129c14b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129c14b8 mov esi, esp */
  ESI = (ESP);
  /* 129c14ba push 0xff */
  push32((uint32_t)(0xffu));
  /* 129c14bf call dword ptr [0x129f03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03cc))), 0x129c14c5u);
  /* 129c14c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c14c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c14ca call 0x129c1b10 */
  push32(0x129c14cfu); f_129c1b10();
  /* 129c14cf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c14d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c14d6 je 0x129c1507 */
  if (C.zf) goto L_129c1507;
  /* 129c14d8 mov esi, esp */
  ESI = (ESP);
  /* 129c14da push 0x64 */
  push32((uint32_t)(0x64u));
  /* 129c14dc push 0 */
  push32((uint32_t)(0x0u));
  /* 129c14de call dword ptr [0x129f03d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03d0))), 0x129c14e4u);
  /* 129c14e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c14e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c14e9 call 0x129c1b10 */
  push32(0x129c14eeu); f_129c1b10();
  /* 129c14ee mov esi, esp */
  ESI = (ESP);
  /* 129c14f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c14f2 push 0xff */
  push32((uint32_t)(0xffu));
  /* 129c14f7 call dword ptr [0x129f03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03c8))), 0x129c14fdu);
  /* 129c14fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1500 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1502 call 0x129c1b10 */
  push32(0x129c1507u); f_129c1b10();
L_129c1507:;
  /* 129c1507 mov esi, esp */
  ESI = (ESP);
  /* 129c1509 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c150b call dword ptr [0x129f03d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03d8))), 0x129c1511u);
  /* 129c1511 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1514 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1516 call 0x129c1b10 */
  push32(0x129c151bu); f_129c1b10();
  /* 129c151b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c1520 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c1522 jne 0x129c1529 */
  if (!C.zf) goto L_129c1529;
  /* 129c1524 jmp 0x129c18d4 */
  goto L_129c18d4;
L_129c1529:;
  /* 129c1529 mov dword ptr [0x129ee3e0], 0 */
  w32((uint32_t)(0x129ee3e0), (0x0u));
  /* 129c1533 jmp 0x129c1542 */
  goto L_129c1542;
L_129c1535:;
  /* 129c1535 mov eax, dword ptr [0x129ee3e0] */
  EAX = (r32((uint32_t)(0x129ee3e0)));
  /* 129c153a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c153d mov dword ptr [0x129ee3e0], eax */
  w32((uint32_t)(0x129ee3e0), (EAX));
L_129c1542:;
  /* 129c1542 cmp dword ptr [0x129ee3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x129ee3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1549 jge 0x129c162c */
  if ((C.sf==C.of)) goto L_129c162c;
  /* 129c154f mov esi, esp */
  ESI = (ESP);
  /* 129c1551 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c1553 mov ecx, dword ptr [0x129ee3e0] */
  ECX = (r32((uint32_t)(0x129ee3e0)));
  /* 129c1559 lea edx, [ecx*8 + 0x129ee428] */
  EDX = ((uint32_t)(ECX*8 + 0x129ee428));
  /* 129c1560 push edx */
  push32((uint32_t)(EDX));
  /* 129c1561 call dword ptr [0x129f03dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03dc))), 0x129c1567u);
  /* 129c1567 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c156a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c156c call 0x129c1b10 */
  push32(0x129c1571u); f_129c1b10();
  /* 129c1571 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c1573 jle 0x129c15bb */
  if ((C.zf||C.sf!=C.of)) goto L_129c15bb;
  /* 129c1575 mov esi, esp */
  ESI = (ESP);
  /* 129c1577 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c1579 mov eax, dword ptr [0x129ee3e0] */
  EAX = (r32((uint32_t)(0x129ee3e0)));
  /* 129c157e lea ecx, [eax*8 + 0x129ee428] */
  ECX = ((uint32_t)(EAX*8 + 0x129ee428));
  /* 129c1585 push ecx */
  push32((uint32_t)(ECX));
  /* 129c1586 call dword ptr [0x129f03dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03dc))), 0x129c158cu);
  /* 129c158c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c158f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1591 call 0x129c1b10 */
  push32(0x129c1596u); f_129c1b10();
  /* 129c1596 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c1598 jne 0x129c15bb */
  if (!C.zf) goto L_129c15bb;
  /* 129c159a mov edx, dword ptr [0x129ee3e0] */
  EDX = (r32((uint32_t)(0x129ee3e0)));
  /* 129c15a0 mov dword ptr [edx*4 + 0x129ee3e4], 1 */
  w32((uint32_t)(EDX*4 + 0x129ee3e4), (0x1u));
  /* 129c15ab mov eax, dword ptr [0x129ee3e0] */
  EAX = (r32((uint32_t)(0x129ee3e0)));
  /* 129c15b0 mov dword ptr [eax*4 + 0x129ee3f8], 0 */
  w32((uint32_t)(EAX*4 + 0x129ee3f8), (0x0u));
L_129c15bb:;
  /* 129c15bb mov esi, esp */
  ESI = (ESP);
  /* 129c15bd push 1 */
  push32((uint32_t)(0x1u));
  /* 129c15bf mov ecx, dword ptr [0x129ee3e0] */
  ECX = (r32((uint32_t)(0x129ee3e0)));
  /* 129c15c5 lea edx, [ecx*8 + 0x129ee428] */
  EDX = ((uint32_t)(ECX*8 + 0x129ee428));
  /* 129c15cc push edx */
  push32((uint32_t)(EDX));
  /* 129c15cd call dword ptr [0x129f03dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03dc))), 0x129c15d3u);
  /* 129c15d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c15d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c15d8 call 0x129c1b10 */
  push32(0x129c15ddu); f_129c1b10();
  /* 129c15dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c15df jle 0x129c1627 */
  if ((C.zf||C.sf!=C.of)) goto L_129c1627;
  /* 129c15e1 mov esi, esp */
  ESI = (ESP);
  /* 129c15e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c15e5 mov eax, dword ptr [0x129ee3e0] */
  EAX = (r32((uint32_t)(0x129ee3e0)));
  /* 129c15ea lea ecx, [eax*8 + 0x129ee428] */
  ECX = ((uint32_t)(EAX*8 + 0x129ee428));
  /* 129c15f1 push ecx */
  push32((uint32_t)(ECX));
  /* 129c15f2 call dword ptr [0x129f03dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03dc))), 0x129c15f8u);
  /* 129c15f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c15fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c15fd call 0x129c1b10 */
  push32(0x129c1602u); f_129c1b10();
  /* 129c1602 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c1604 jne 0x129c1627 */
  if (!C.zf) goto L_129c1627;
  /* 129c1606 mov edx, dword ptr [0x129ee3e0] */
  EDX = (r32((uint32_t)(0x129ee3e0)));
  /* 129c160c mov dword ptr [edx*4 + 0x129ee3e4], 0 */
  w32((uint32_t)(EDX*4 + 0x129ee3e4), (0x0u));
  /* 129c1617 mov eax, dword ptr [0x129ee3e0] */
  EAX = (r32((uint32_t)(0x129ee3e0)));
  /* 129c161c mov dword ptr [eax*4 + 0x129ee3f8], 1 */
  w32((uint32_t)(EAX*4 + 0x129ee3f8), (0x1u));
L_129c1627:;
  /* 129c1627 jmp 0x129c1535 */
  goto L_129c1535;
L_129c162c:;
  /* 129c162c mov dword ptr [0x129ee450], 0 */
  w32((uint32_t)(0x129ee450), (0x0u));
  /* 129c1636 mov dword ptr [0x129ee454], 0 */
  w32((uint32_t)(0x129ee454), (0x0u));
  /* 129c1640 mov dword ptr [0x129ee3e0], 0 */
  w32((uint32_t)(0x129ee3e0), (0x0u));
  /* 129c164a jmp 0x129c165b */
  goto L_129c165b;
L_129c164c:;
  /* 129c164c mov ecx, dword ptr [0x129ee3e0] */
  ECX = (r32((uint32_t)(0x129ee3e0)));
  /* 129c1652 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1655 mov dword ptr [0x129ee3e0], ecx */
  w32((uint32_t)(0x129ee3e0), (ECX));
L_129c165b:;
  /* 129c165b cmp dword ptr [0x129ee3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x129ee3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1662 jge 0x129c1696 */
  if ((C.sf==C.of)) goto L_129c1696;
  /* 129c1664 mov edx, dword ptr [0x129ee3e0] */
  EDX = (r32((uint32_t)(0x129ee3e0)));
  /* 129c166a mov eax, dword ptr [0x129ee450] */
  EAX = (r32((uint32_t)(0x129ee450)));
  /* 129c166f add eax, dword ptr [edx*4 + 0x129ee3e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x129ee3e4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1676 mov dword ptr [0x129ee450], eax */
  w32((uint32_t)(0x129ee450), (EAX));
  /* 129c167b mov ecx, dword ptr [0x129ee3e0] */
  ECX = (r32((uint32_t)(0x129ee3e0)));
  /* 129c1681 mov edx, dword ptr [0x129ee454] */
  EDX = (r32((uint32_t)(0x129ee454)));
  /* 129c1687 add edx, dword ptr [ecx*4 + 0x129ee3f8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*4 + 0x129ee3f8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c168e mov dword ptr [0x129ee454], edx */
  w32((uint32_t)(0x129ee454), (EDX));
  /* 129c1694 jmp 0x129c164c */
  goto L_129c164c;
L_129c1696:;
  /* 129c1696 cmp dword ptr [0x129ee450], 3 */
  { uint32_t _a=(r32((uint32_t)(0x129ee450))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c169d jl 0x129c16a1 */
  if ((C.sf!=C.of)) goto L_129c16a1;
  /* 129c169f jmp 0x129c16af */
  goto L_129c16af;
L_129c16a1:;
  /* 129c16a1 cmp dword ptr [0x129ee454], 3 */
  { uint32_t _a=(r32((uint32_t)(0x129ee454))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c16a8 jl 0x129c16af */
  if ((C.sf!=C.of)) goto L_129c16af;
  /* 129c16aa call 0x129c100f */
  push32(0x129c16afu); f_129c100f();
L_129c16af:;
  /* 129c16af mov esi, esp */
  ESI = (ESP);
  /* 129c16b1 push 0xa */
  push32((uint32_t)(0xau));
  /* 129c16b3 call dword ptr [0x129f03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03cc))), 0x129c16b9u);
  /* 129c16b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c16bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c16be call 0x129c1b10 */
  push32(0x129c16c3u); f_129c1b10();
  /* 129c16c3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c16c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c16ca je 0x129c1714 */
  if (C.zf) goto L_129c1714;
  /* 129c16cc mov esi, esp */
  ESI = (ESP);
  /* 129c16ce call dword ptr [0x129f03d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03d4))), 0x129c16d4u);
  /* 129c16d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c16d6 call 0x129c1b10 */
  push32(0x129c16dbu); f_129c1b10();
  /* 129c16db cmp eax, 0xbb80 */
  { uint32_t _a=(EAX),_b=(0xbb80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c16e0 jle 0x129c1714 */
  if ((C.zf||C.sf!=C.of)) goto L_129c1714;
  /* 129c16e2 mov esi, esp */
  ESI = (ESP);
  /* 129c16e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c16e6 push 0xa */
  push32((uint32_t)(0xau));
  /* 129c16e8 call dword ptr [0x129f03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03c8))), 0x129c16eeu);
  /* 129c16ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c16f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c16f3 call 0x129c1b10 */
  push32(0x129c16f8u); f_129c1b10();
  /* 129c16f8 mov esi, esp */
  ESI = (ESP);
  /* 129c16fa push 0x96 */
  push32((uint32_t)(0x96u));
  /* 129c16ff push 0x129e907c */
  push32((uint32_t)(0x129e907cu));
  /* 129c1704 call dword ptr [0x129f03ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03ec))), 0x129c170au);
  /* 129c170a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c170d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c170f call 0x129c1b10 */
  push32(0x129c1714u); f_129c1b10();
L_129c1714:;
  /* 129c1714 mov esi, esp */
  ESI = (ESP);
  /* 129c1716 call dword ptr [0x129f03d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03d4))), 0x129c171cu);
  /* 129c171c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c171e call 0x129c1b10 */
  push32(0x129c1723u); f_129c1b10();
  /* 129c1723 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1728 jle 0x129c172f */
  if ((C.zf||C.sf!=C.of)) goto L_129c172f;
  /* 129c172a call 0x129c1023 */
  push32(0x129c172fu); f_129c1023();
L_129c172f:;
  /* 129c172f mov esi, esp */
  ESI = (ESP);
  /* 129c1731 push 0xf */
  push32((uint32_t)(0xfu));
  /* 129c1733 call dword ptr [0x129f03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03cc))), 0x129c1739u);
  /* 129c1739 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c173c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c173e call 0x129c1b10 */
  push32(0x129c1743u); f_129c1b10();
  /* 129c1743 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c1748 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c174a je 0x129c17a1 */
  if (C.zf) goto L_129c17a1;
  /* 129c174c push 0x129ee410 */
  push32((uint32_t)(0x129ee410u));
  /* 129c1751 call 0x129c1005 */
  push32(0x129c1756u); f_129c1005();
  /* 129c1756 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1759 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c175c jge 0x129c17a1 */
  if ((C.sf==C.of)) goto L_129c17a1;
  /* 129c175e mov esi, esp */
  ESI = (ESP);
  /* 129c1760 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c1762 push 0xf */
  push32((uint32_t)(0xfu));
  /* 129c1764 call dword ptr [0x129f03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03c8))), 0x129c176au);
  /* 129c176a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c176d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c176f call 0x129c1b10 */
  push32(0x129c1774u); f_129c1b10();
  /* 129c1774 mov esi, esp */
  ESI = (ESP);
  /* 129c1776 call dword ptr [0x129f03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03fc))), 0x129c177cu);
  /* 129c177c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c177e call 0x129c1b10 */
  push32(0x129c1783u); f_129c1b10();
  /* 129c1783 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1786 jne 0x129c17a1 */
  if (!C.zf) goto L_129c17a1;
  /* 129c1788 mov esi, esp */
  ESI = (ESP);
  /* 129c178a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 129c178c push 0x129e9074 */
  push32((uint32_t)(0x129e9074u));
  /* 129c1791 call dword ptr [0x129f03ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03ec))), 0x129c1797u);
  /* 129c1797 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c179a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c179c call 0x129c1b10 */
  push32(0x129c17a1u); f_129c1b10();
L_129c17a1:;
  /* 129c17a1 mov esi, esp */
  ESI = (ESP);
  /* 129c17a3 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 129c17a5 call dword ptr [0x129f03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03cc))), 0x129c17abu);
  /* 129c17ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c17ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c17b0 call 0x129c1b10 */
  push32(0x129c17b5u); f_129c1b10();
  /* 129c17b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c17ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c17bc je 0x129c1812 */
  if (C.zf) goto L_129c1812;
  /* 129c17be push 0x129ee418 */
  push32((uint32_t)(0x129ee418u));
  /* 129c17c3 call 0x129c1005 */
  push32(0x129c17c8u); f_129c1005();
  /* 129c17c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c17cb cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c17ce jge 0x129c1812 */
  if ((C.sf==C.of)) goto L_129c1812;
  /* 129c17d0 mov esi, esp */
  ESI = (ESP);
  /* 129c17d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c17d4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 129c17d6 call dword ptr [0x129f03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03c8))), 0x129c17dcu);
  /* 129c17dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c17df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c17e1 call 0x129c1b10 */
  push32(0x129c17e6u); f_129c1b10();
  /* 129c17e6 mov esi, esp */
  ESI = (ESP);
  /* 129c17e8 call dword ptr [0x129f03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03fc))), 0x129c17eeu);
  /* 129c17ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c17f0 call 0x129c1b10 */
  push32(0x129c17f5u); f_129c1b10();
  /* 129c17f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c17f7 jne 0x129c1812 */
  if (!C.zf) goto L_129c1812;
  /* 129c17f9 mov esi, esp */
  ESI = (ESP);
  /* 129c17fb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 129c17fd push 0x129e9074 */
  push32((uint32_t)(0x129e9074u));
  /* 129c1802 call dword ptr [0x129f03ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03ec))), 0x129c1808u);
  /* 129c1808 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c180b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c180d call 0x129c1b10 */
  push32(0x129c1812u); f_129c1b10();
L_129c1812:;
  /* 129c1812 push 0x129ee410 */
  push32((uint32_t)(0x129ee410u));
  /* 129c1817 call 0x129c1005 */
  push32(0x129c181cu); f_129c1005();
  /* 129c181c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c181f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c1821 jne 0x129c1828 */
  if (!C.zf) goto L_129c1828;
  /* 129c1823 call 0x129c100f */
  push32(0x129c1828u); f_129c100f();
L_129c1828:;
  /* 129c1828 push 0x129ee418 */
  push32((uint32_t)(0x129ee418u));
  /* 129c182d call 0x129c1005 */
  push32(0x129c1832u); f_129c1005();
  /* 129c1832 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1835 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c1837 jne 0x129c183e */
  if (!C.zf) goto L_129c183e;
  /* 129c1839 call 0x129c1023 */
  push32(0x129c183eu); f_129c1023();
L_129c183e:;
  /* 129c183e mov esi, esp */
  ESI = (ESP);
  /* 129c1840 push 0xb */
  push32((uint32_t)(0xbu));
  /* 129c1842 call dword ptr [0x129f03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03cc))), 0x129c1848u);
  /* 129c1848 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c184b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c184d call 0x129c1b10 */
  push32(0x129c1852u); f_129c1b10();
  /* 129c1852 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c1857 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c1859 je 0x129c1889 */
  if (C.zf) goto L_129c1889;
  /* 129c185b push 0 */
  push32((uint32_t)(0x0u));
  /* 129c185d push 0x129ee420 */
  push32((uint32_t)(0x129ee420u));
  /* 129c1862 call 0x129c1014 */
  push32(0x129c1867u); f_129c1014();
  /* 129c1867 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c186a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c186c jne 0x129c1889 */
  if (!C.zf) goto L_129c1889;
  /* 129c186e mov esi, esp */
  ESI = (ESP);
  /* 129c1870 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c1872 push 0xb */
  push32((uint32_t)(0xbu));
  /* 129c1874 call dword ptr [0x129f03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03c8))), 0x129c187au);
  /* 129c187a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c187d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c187f call 0x129c1b10 */
  push32(0x129c1884u); f_129c1b10();
  /* 129c1884 call 0x129c101e */
  push32(0x129c1889u); f_129c101e();
L_129c1889:;
  /* 129c1889 mov esi, esp */
  ESI = (ESP);
  /* 129c188b push 0xc */
  push32((uint32_t)(0xcu));
  /* 129c188d call dword ptr [0x129f03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03cc))), 0x129c1893u);
  /* 129c1893 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1896 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1898 call 0x129c1b10 */
  push32(0x129c189du); f_129c1b10();
  /* 129c189d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c18a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c18a4 je 0x129c18d4 */
  if (C.zf) goto L_129c18d4;
  /* 129c18a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c18a8 push 0x129ee420 */
  push32((uint32_t)(0x129ee420u));
  /* 129c18ad call 0x129c1014 */
  push32(0x129c18b2u); f_129c1014();
  /* 129c18b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c18b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c18b7 jne 0x129c18d4 */
  if (!C.zf) goto L_129c18d4;
  /* 129c18b9 mov esi, esp */
  ESI = (ESP);
  /* 129c18bb push 0 */
  push32((uint32_t)(0x0u));
  /* 129c18bd push 0xc */
  push32((uint32_t)(0xcu));
  /* 129c18bf call dword ptr [0x129f03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03c8))), 0x129c18c5u);
  /* 129c18c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c18c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c18ca call 0x129c1b10 */
  push32(0x129c18cfu); f_129c1b10();
  /* 129c18cf call 0x129c102d */
  push32(0x129c18d4u); f_129c102d();
L_129c18d4:;
  /* 129c18d4 pop edi */
  EDI = (pop32());
  /* 129c18d5 pop esi */
  ESI = (pop32());
  /* 129c18d6 pop ebx */
  EBX = (pop32());
  /* 129c18d7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c18da cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c18dc call 0x129c1b10 */
  push32(0x129c18e1u); f_129c1b10();
  /* 129c18e1 mov esp, ebp */
  ESP = (EBP);
  /* 129c18e3 pop ebp */
  EBP = (pop32());
  /* 129c18e4 ret  */
  ESPCHK(0x129c14a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a00 @ 0x129c1a00 (63 bytes, 26 insns) */
void f_129c1a00(void) {
  FTRACE(0x129c1a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c1a00 push ebp */
  push32((uint32_t)(EBP));
  /* 129c1a01 mov ebp, esp */
  EBP = (ESP);
  /* 129c1a03 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c1a06 push ebx */
  push32((uint32_t)(EBX));
  /* 129c1a07 push esi */
  push32((uint32_t)(ESI));
  /* 129c1a08 push edi */
  push32((uint32_t)(EDI));
  /* 129c1a09 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 129c1a0c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 129c1a11 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 129c1a16 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129c1a18 mov esi, esp */
  ESI = (ESP);
  /* 129c1a1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c1a1d push eax */
  push32((uint32_t)(EAX));
  /* 129c1a1e call dword ptr [0x129f03c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03c0))), 0x129c1a24u);
  /* 129c1a24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1a27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1a29 call 0x129c1b10 */
  push32(0x129c1a2eu); f_129c1b10();
  /* 129c1a2e pop edi */
  EDI = (pop32());
  /* 129c1a2f pop esi */
  ESI = (pop32());
  /* 129c1a30 pop ebx */
  EBX = (pop32());
  /* 129c1a31 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1a34 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1a36 call 0x129c1b10 */
  push32(0x129c1a3bu); f_129c1b10();
  /* 129c1a3b mov esp, ebp */
  ESP = (EBP);
  /* 129c1a3d pop ebp */
  EBP = (pop32());
  /* 129c1a3e ret  */
  ESPCHK(0x129c1a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a50 @ 0x129c1a50 (67 bytes, 28 insns) */
void f_129c1a50(void) {
  FTRACE(0x129c1a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c1a50 push ebp */
  push32((uint32_t)(EBP));
  /* 129c1a51 mov ebp, esp */
  EBP = (ESP);
  /* 129c1a53 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c1a56 push ebx */
  push32((uint32_t)(EBX));
  /* 129c1a57 push esi */
  push32((uint32_t)(ESI));
  /* 129c1a58 push edi */
  push32((uint32_t)(EDI));
  /* 129c1a59 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 129c1a5c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 129c1a61 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 129c1a66 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129c1a68 mov esi, esp */
  ESI = (ESP);
  /* 129c1a6a mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 129c1a6d push eax */
  push32((uint32_t)(EAX));
  /* 129c1a6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c1a71 push ecx */
  push32((uint32_t)(ECX));
  /* 129c1a72 call dword ptr [0x129f03c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f03c4))), 0x129c1a78u);
  /* 129c1a78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1a7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1a7d call 0x129c1b10 */
  push32(0x129c1a82u); f_129c1b10();
  /* 129c1a82 pop edi */
  EDI = (pop32());
  /* 129c1a83 pop esi */
  ESI = (pop32());
  /* 129c1a84 pop ebx */
  EBX = (pop32());
  /* 129c1a85 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1a88 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1a8a call 0x129c1b10 */
  push32(0x129c1a8fu); f_129c1b10();
  /* 129c1a8f mov esp, ebp */
  ESP = (EBP);
  /* 129c1a91 pop ebp */
  EBP = (pop32());
  /* 129c1a92 ret  */
  ESPCHK(0x129c1a50u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x129c1b10 (56 bytes, 28 insns) */
void f_129c1b10(void) {
  FTRACE(0x129c1b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c1b10 jne 0x129c1b13 */
  if (!C.zf) goto L_129c1b13;
  /* 129c1b12 ret  */
  ESPCHK(0x129c1b10u, _esp0);
  ESP += 4; return;
L_129c1b13:;
  /* 129c1b13 push ebp */
  push32((uint32_t)(EBP));
  /* 129c1b14 mov ebp, esp */
  EBP = (ESP);
  /* 129c1b16 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c1b19 push eax */
  push32((uint32_t)(EAX));
  /* 129c1b1a push edx */
  push32((uint32_t)(EDX));
  /* 129c1b1b push ebx */
  push32((uint32_t)(EBX));
  /* 129c1b1c push esi */
  push32((uint32_t)(ESI));
  /* 129c1b1d push edi */
  push32((uint32_t)(EDI));
  /* 129c1b1e push 0x129e9098 */
  push32((uint32_t)(0x129e9098u));
  /* 129c1b23 push 0x129e9094 */
  push32((uint32_t)(0x129e9094u));
  /* 129c1b28 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 129c1b2a push 0x129e9084 */
  push32((uint32_t)(0x129e9084u));
  /* 129c1b2f push 1 */
  push32((uint32_t)(0x1u));
  /* 129c1b31 call 0x129c1ee0 */
  push32(0x129c1b36u); f_129c1ee0();
  /* 129c1b36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1b39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1b3c jne 0x129c1b3f */
  if (!C.zf) goto L_129c1b3f;
  /* 129c1b3e int3  */
  x86_unimpl("int3 @ 0x129c1b3e");
L_129c1b3f:;
  /* 129c1b3f pop edi */
  EDI = (pop32());
  /* 129c1b40 pop esi */
  ESI = (pop32());
  /* 129c1b41 pop ebx */
  EBX = (pop32());
  /* 129c1b42 pop edx */
  EDX = (pop32());
  /* 129c1b43 pop eax */
  EAX = (pop32());
  /* 129c1b44 mov esp, ebp */
  ESP = (EBP);
  /* 129c1b46 pop ebp */
  EBP = (pop32());
  /* 129c1b47 ret  */
  ESPCHK(0x129c1b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b50 @ 0x129c1b50 (313 bytes, 78 insns) */
void f_129c1b50(void) {
  FTRACE(0x129c1b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c1b50 push ebp */
  push32((uint32_t)(EBP));
  /* 129c1b51 mov ebp, esp */
  EBP = (ESP);
  /* 129c1b53 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1b57 jne 0x129c1c17 */
  if (!C.zf) goto L_129c1c17;
  /* 129c1b5d call dword ptr [0x129f0284] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0284))), 0x129c1b63u);
  /* 129c1b63 mov dword ptr [0x129ee490], eax */
  w32((uint32_t)(0x129ee490), (EAX));
  /* 129c1b68 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c1b6a call 0x129c5610 */
  push32(0x129c1b6fu); f_129c5610();
  /* 129c1b6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1b72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c1b74 jne 0x129c1b7d */
  if (!C.zf) goto L_129c1b7d;
  /* 129c1b76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c1b78 jmp 0x129c1c85 */
  goto L_129c1c85;
L_129c1b7d:;
  /* 129c1b7d mov eax, dword ptr [0x129ee490] */
  EAX = (r32((uint32_t)(0x129ee490)));
  /* 129c1b82 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 129c1b85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c1b8a mov dword ptr [0x129ee49c], eax */
  w32((uint32_t)(0x129ee49c), (EAX));
  /* 129c1b8f mov ecx, dword ptr [0x129ee490] */
  ECX = (r32((uint32_t)(0x129ee490)));
  /* 129c1b95 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 129c1b9b mov dword ptr [0x129ee498], ecx */
  w32((uint32_t)(0x129ee498), (ECX));
  /* 129c1ba1 mov edx, dword ptr [0x129ee498] */
  EDX = (r32((uint32_t)(0x129ee498)));
  /* 129c1ba7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 129c1baa add edx, dword ptr [0x129ee49c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x129ee49c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1bb0 mov dword ptr [0x129ee494], edx */
  w32((uint32_t)(0x129ee494), (EDX));
  /* 129c1bb6 mov eax, dword ptr [0x129ee490] */
  EAX = (r32((uint32_t)(0x129ee490)));
  /* 129c1bbb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 129c1bbe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c1bc3 mov dword ptr [0x129ee490], eax */
  w32((uint32_t)(0x129ee490), (EAX));
  /* 129c1bc8 call 0x129c2780 */
  push32(0x129c1bcdu); f_129c2780();
  /* 129c1bcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c1bcf jne 0x129c1bdd */
  if (!C.zf) goto L_129c1bdd;
  /* 129c1bd1 call 0x129c5660 */
  push32(0x129c1bd6u); f_129c5660();
  /* 129c1bd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c1bd8 jmp 0x129c1c85 */
  goto L_129c1c85;
L_129c1bdd:;
  /* 129c1bdd call dword ptr [0x129f0280] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0280))), 0x129c1be3u);
  /* 129c1be3 mov dword ptr [0x129effcc], eax */
  w32((uint32_t)(0x129effcc), (EAX));
  /* 129c1be8 call 0x129c53f0 */
  push32(0x129c1bedu); f_129c53f0();
  /* 129c1bed mov dword ptr [0x129ee478], eax */
  w32((uint32_t)(0x129ee478), (EAX));
  /* 129c1bf2 call 0x129c2a30 */
  push32(0x129c1bf7u); f_129c2a30();
  /* 129c1bf7 call 0x129c4ee0 */
  push32(0x129c1bfcu); f_129c4ee0();
  /* 129c1bfc call 0x129c4d90 */
  push32(0x129c1c01u); f_129c4d90();
  /* 129c1c01 call 0x129c2580 */
  push32(0x129c1c06u); f_129c2580();
  /* 129c1c06 mov ecx, dword ptr [0x129ee474] */
  ECX = (r32((uint32_t)(0x129ee474)));
  /* 129c1c0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1c0f mov dword ptr [0x129ee474], ecx */
  w32((uint32_t)(0x129ee474), (ECX));
  /* 129c1c15 jmp 0x129c1c80 */
  goto L_129c1c80;
L_129c1c17:;
  /* 129c1c17 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1c1b jne 0x129c1c70 */
  if (!C.zf) goto L_129c1c70;
  /* 129c1c1d cmp dword ptr [0x129ee474], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee474))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1c24 jle 0x129c1c6a */
  if ((C.zf||C.sf!=C.of)) goto L_129c1c6a;
  /* 129c1c26 mov edx, dword ptr [0x129ee474] */
  EDX = (r32((uint32_t)(0x129ee474)));
  /* 129c1c2c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c1c2f mov dword ptr [0x129ee474], edx */
  w32((uint32_t)(0x129ee474), (EDX));
  /* 129c1c35 cmp dword ptr [0x129ee4c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee4c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1c3c jne 0x129c1c43 */
  if (!C.zf) goto L_129c1c43;
  /* 129c1c3e call 0x129c2600 */
  push32(0x129c1c43u); f_129c2600();
L_129c1c43:;
  /* 129c1c43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129c1c45 call 0x129c4330 */
  push32(0x129c1c4au); f_129c4330();
  /* 129c1c4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1c4d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 129c1c50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c1c52 je 0x129c1c59 */
  if (C.zf) goto L_129c1c59;
  /* 129c1c54 call 0x129c4c40 */
  push32(0x129c1c59u); f_129c4c40();
L_129c1c59:;
  /* 129c1c59 call 0x129c2d60 */
  push32(0x129c1c5eu); f_129c2d60();
  /* 129c1c5e call 0x129c2810 */
  push32(0x129c1c63u); f_129c2810();
  /* 129c1c63 call 0x129c5660 */
  push32(0x129c1c68u); f_129c5660();
  /* 129c1c68 jmp 0x129c1c6e */
  goto L_129c1c6e;
L_129c1c6a:;
  /* 129c1c6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c1c6c jmp 0x129c1c85 */
  goto L_129c1c85;
L_129c1c6e:;
  /* 129c1c6e jmp 0x129c1c80 */
  goto L_129c1c80;
L_129c1c70:;
  /* 129c1c70 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1c74 jne 0x129c1c80 */
  if (!C.zf) goto L_129c1c80;
  /* 129c1c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c1c78 call 0x129c2900 */
  push32(0x129c1c7du); f_129c2900();
  /* 129c1c7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c1c80:;
  /* 129c1c80 mov eax, 1 */
  EAX = (0x1u);
L_129c1c85:;
  /* 129c1c85 pop ebp */
  EBP = (pop32());
  /* 129c1c86 ret 0xc */
  ESPCHK(0x129c1b50u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x129c1c90 (243 bytes, 86 insns) */
void f_129c1c90(void) {
  FTRACE(0x129c1c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c1c90 push ebp */
  push32((uint32_t)(EBP));
  /* 129c1c91 mov ebp, esp */
  EBP = (ESP);
  /* 129c1c93 push ecx */
  push32((uint32_t)(ECX));
  /* 129c1c94 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 129c1c9b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1c9f jne 0x129c1cb1 */
  if (!C.zf) goto L_129c1cb1;
  /* 129c1ca1 cmp dword ptr [0x129ee474], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee474))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1ca8 jne 0x129c1cb1 */
  if (!C.zf) goto L_129c1cb1;
  /* 129c1caa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c1cac jmp 0x129c1d7d */
  goto L_129c1d7d;
L_129c1cb1:;
  /* 129c1cb1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1cb5 je 0x129c1cbd */
  if (C.zf) goto L_129c1cbd;
  /* 129c1cb7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1cbb jne 0x129c1cff */
  if (!C.zf) goto L_129c1cff;
L_129c1cbd:;
  /* 129c1cbd cmp dword ptr [0x129effdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129effdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1cc4 je 0x129c1cdb */
  if (C.zf) goto L_129c1cdb;
  /* 129c1cc6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c1cc9 push eax */
  push32((uint32_t)(EAX));
  /* 129c1cca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c1ccd push ecx */
  push32((uint32_t)(ECX));
  /* 129c1cce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c1cd1 push edx */
  push32((uint32_t)(EDX));
  /* 129c1cd2 call dword ptr [0x129effdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129effdc))), 0x129c1cd8u);
  /* 129c1cd8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129c1cdb:;
  /* 129c1cdb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1cdf je 0x129c1cf5 */
  if (C.zf) goto L_129c1cf5;
  /* 129c1ce1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c1ce4 push eax */
  push32((uint32_t)(EAX));
  /* 129c1ce5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c1ce8 push ecx */
  push32((uint32_t)(ECX));
  /* 129c1ce9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c1cec push edx */
  push32((uint32_t)(EDX));
  /* 129c1ced call 0x129c1b50 */
  push32(0x129c1cf2u); f_129c1b50();
  /* 129c1cf2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129c1cf5:;
  /* 129c1cf5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1cf9 jne 0x129c1cff */
  if (!C.zf) goto L_129c1cff;
  /* 129c1cfb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c1cfd jmp 0x129c1d7d */
  goto L_129c1d7d;
L_129c1cff:;
  /* 129c1cff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c1d02 push eax */
  push32((uint32_t)(EAX));
  /* 129c1d03 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c1d06 push ecx */
  push32((uint32_t)(ECX));
  /* 129c1d07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c1d0a push edx */
  push32((uint32_t)(EDX));
  /* 129c1d0b call 0x129c1019 */
  push32(0x129c1d10u); f_129c1019();
  /* 129c1d10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c1d13 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1d17 jne 0x129c1d2e */
  if (!C.zf) goto L_129c1d2e;
  /* 129c1d19 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1d1d jne 0x129c1d2e */
  if (!C.zf) goto L_129c1d2e;
  /* 129c1d1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c1d22 push eax */
  push32((uint32_t)(EAX));
  /* 129c1d23 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c1d25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c1d28 push ecx */
  push32((uint32_t)(ECX));
  /* 129c1d29 call 0x129c1b50 */
  push32(0x129c1d2eu); f_129c1b50();
L_129c1d2e:;
  /* 129c1d2e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1d32 je 0x129c1d3a */
  if (C.zf) goto L_129c1d3a;
  /* 129c1d34 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1d38 jne 0x129c1d7a */
  if (!C.zf) goto L_129c1d7a;
L_129c1d3a:;
  /* 129c1d3a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c1d3d push edx */
  push32((uint32_t)(EDX));
  /* 129c1d3e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c1d41 push eax */
  push32((uint32_t)(EAX));
  /* 129c1d42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c1d45 push ecx */
  push32((uint32_t)(ECX));
  /* 129c1d46 call 0x129c1b50 */
  push32(0x129c1d4bu); f_129c1b50();
  /* 129c1d4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c1d4d jne 0x129c1d56 */
  if (!C.zf) goto L_129c1d56;
  /* 129c1d4f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_129c1d56:;
  /* 129c1d56 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1d5a je 0x129c1d7a */
  if (C.zf) goto L_129c1d7a;
  /* 129c1d5c cmp dword ptr [0x129effdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129effdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1d63 je 0x129c1d7a */
  if (C.zf) goto L_129c1d7a;
  /* 129c1d65 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c1d68 push edx */
  push32((uint32_t)(EDX));
  /* 129c1d69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c1d6c push eax */
  push32((uint32_t)(EAX));
  /* 129c1d6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c1d70 push ecx */
  push32((uint32_t)(ECX));
  /* 129c1d71 call dword ptr [0x129effdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129effdc))), 0x129c1d77u);
  /* 129c1d77 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129c1d7a:;
  /* 129c1d7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_129c1d7d:;
  /* 129c1d7d mov esp, ebp */
  ESP = (EBP);
  /* 129c1d7f pop ebp */
  EBP = (pop32());
  /* 129c1d80 ret 0xc */
  ESPCHK(0x129c1c90u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x129c1d90 (58 bytes, 18 insns) */
void f_129c1d90(void) {
  FTRACE(0x129c1d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c1d90 push ebp */
  push32((uint32_t)(EBP));
  /* 129c1d91 mov ebp, esp */
  EBP = (ESP);
  /* 129c1d93 cmp dword ptr [0x129ee480], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ee480))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1d9a je 0x129c1dae */
  if (C.zf) goto L_129c1dae;
  /* 129c1d9c cmp dword ptr [0x129ee480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1da3 jne 0x129c1db3 */
  if (!C.zf) goto L_129c1db3;
  /* 129c1da5 cmp dword ptr [0x129ee484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ee484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1dac jne 0x129c1db3 */
  if (!C.zf) goto L_129c1db3;
L_129c1dae:;
  /* 129c1dae call 0x129c5700 */
  push32(0x129c1db3u); f_129c5700();
L_129c1db3:;
  /* 129c1db3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c1db6 push eax */
  push32((uint32_t)(EAX));
  /* 129c1db7 call 0x129c5750 */
  push32(0x129c1dbcu); f_129c5750();
  /* 129c1dbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1dbf push 0xff */
  push32((uint32_t)(0xffu));
  /* 129c1dc4 call dword ptr [0x129eca30] */
  call_ind((uint32_t)(r32((uint32_t)(0x129eca30))), 0x129c1dcau);
  /* 129c1dca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1dcd pop ebp */
  EBP = (pop32());
  /* 129c1dce ret  */
  ESPCHK(0x129c1d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10001dd0 @ 0x129c1dd0 (11 bytes, 5 insns) */
void f_129c1dd0(void) {
  FTRACE(0x129c1dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c1dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c1dd1 mov ebp, esp */
  EBP = (ESP);
  /* 129c1dd3 call dword ptr [0x129f0288] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0288))), 0x129c1dd9u);
  /* 129c1dd9 pop ebp */
  EBP = (pop32());
  /* 129c1dda ret  */
  ESPCHK(0x129c1dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001de0 @ 0x129c1de0 (87 bytes, 30 insns) */
void f_129c1de0(void) {
  FTRACE(0x129c1de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c1de0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c1de1 mov ebp, esp */
  EBP = (ESP);
  /* 129c1de3 push ecx */
  push32((uint32_t)(ECX));
  /* 129c1de4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1de8 jl 0x129c1df0 */
  if ((C.sf!=C.of)) goto L_129c1df0;
  /* 129c1dea cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1dee jl 0x129c1df5 */
  if ((C.sf!=C.of)) goto L_129c1df5;
L_129c1df0:;
  /* 129c1df0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c1df3 jmp 0x129c1e33 */
  goto L_129c1e33;
L_129c1df5:;
  /* 129c1df5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1df9 jne 0x129c1e07 */
  if (!C.zf) goto L_129c1e07;
  /* 129c1dfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c1dfe mov eax, dword ptr [eax*4 + 0x129eca38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x129eca38)));
  /* 129c1e05 jmp 0x129c1e33 */
  goto L_129c1e33;
L_129c1e07:;
  /* 129c1e07 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c1e0a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 129c1e0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c1e0f je 0x129c1e16 */
  if (C.zf) goto L_129c1e16;
  /* 129c1e11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c1e14 jmp 0x129c1e33 */
  goto L_129c1e33;
L_129c1e16:;
  /* 129c1e16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c1e19 mov eax, dword ptr [edx*4 + 0x129eca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x129eca38)));
  /* 129c1e20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c1e23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c1e26 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c1e29 mov dword ptr [ecx*4 + 0x129eca38], edx */
  w32((uint32_t)(ECX*4 + 0x129eca38), (EDX));
  /* 129c1e30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_129c1e33:;
  /* 129c1e33 mov esp, ebp */
  ESP = (EBP);
  /* 129c1e35 pop ebp */
  EBP = (pop32());
  /* 129c1e36 ret  */
  ESPCHK(0x129c1de0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x129c1e40 (126 bytes, 38 insns) */
void f_129c1e40(void) {
  FTRACE(0x129c1e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c1e40 push ebp */
  push32((uint32_t)(EBP));
  /* 129c1e41 mov ebp, esp */
  EBP = (ESP);
  /* 129c1e43 push ecx */
  push32((uint32_t)(ECX));
  /* 129c1e44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1e48 jl 0x129c1e50 */
  if ((C.sf!=C.of)) goto L_129c1e50;
  /* 129c1e4a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1e4e jl 0x129c1e57 */
  if ((C.sf!=C.of)) goto L_129c1e57;
L_129c1e50:;
  /* 129c1e50 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 129c1e55 jmp 0x129c1eba */
  goto L_129c1eba;
L_129c1e57:;
  /* 129c1e57 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1e5b jne 0x129c1e69 */
  if (!C.zf) goto L_129c1e69;
  /* 129c1e5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c1e60 mov eax, dword ptr [eax*4 + 0x129eca44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x129eca44)));
  /* 129c1e67 jmp 0x129c1eba */
  goto L_129c1eba;
L_129c1e69:;
  /* 129c1e69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c1e6c mov edx, dword ptr [ecx*4 + 0x129eca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129eca44)));
  /* 129c1e73 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129c1e76 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1e7a jne 0x129c1e90 */
  if (!C.zf) goto L_129c1e90;
  /* 129c1e7c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 129c1e7e call dword ptr [0x129f028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f028c))), 0x129c1e84u);
  /* 129c1e84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c1e87 mov dword ptr [ecx*4 + 0x129eca44], eax */
  w32((uint32_t)(ECX*4 + 0x129eca44), (EAX));
  /* 129c1e8e jmp 0x129c1eb7 */
  goto L_129c1eb7;
L_129c1e90:;
  /* 129c1e90 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1e94 jne 0x129c1eaa */
  if (!C.zf) goto L_129c1eaa;
  /* 129c1e96 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 129c1e98 call dword ptr [0x129f028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f028c))), 0x129c1e9eu);
  /* 129c1e9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c1ea1 mov dword ptr [edx*4 + 0x129eca44], eax */
  w32((uint32_t)(EDX*4 + 0x129eca44), (EAX));
  /* 129c1ea8 jmp 0x129c1eb7 */
  goto L_129c1eb7;
L_129c1eaa:;
  /* 129c1eaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c1ead mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c1eb0 mov dword ptr [eax*4 + 0x129eca44], ecx */
  w32((uint32_t)(EAX*4 + 0x129eca44), (ECX));
L_129c1eb7:;
  /* 129c1eb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_129c1eba:;
  /* 129c1eba mov esp, ebp */
  ESP = (EBP);
  /* 129c1ebc pop ebp */
  EBP = (pop32());
  /* 129c1ebd ret  */
  ESPCHK(0x129c1e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ec0 @ 0x129c1ec0 (28 bytes, 11 insns) */
void f_129c1ec0(void) {
  FTRACE(0x129c1ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c1ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c1ec1 mov ebp, esp */
  EBP = (ESP);
  /* 129c1ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 129c1ec4 mov eax, dword ptr [0x129effc0] */
  EAX = (r32((uint32_t)(0x129effc0)));
  /* 129c1ec9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c1ecc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c1ecf mov dword ptr [0x129effc0], ecx */
  w32((uint32_t)(0x129effc0), (ECX));
  /* 129c1ed5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c1ed8 mov esp, ebp */
  ESP = (EBP);
  /* 129c1eda pop ebp */
  EBP = (pop32());
  /* 129c1edb ret  */
  ESPCHK(0x129c1ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ee0 @ 0x129c1ee0 (912 bytes, 248 insns) */
void f_129c1ee0(void) {
  FTRACE(0x129c1ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c1ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c1ee1 mov ebp, esp */
  EBP = (ESP);
  /* 129c1ee3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 129c1ee8 call 0x129c5fc0 */
  push32(0x129c1eedu); f_129c5fc0();
  /* 129c1eed push edi */
  push32((uint32_t)(EDI));
  /* 129c1eee mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 129c1ef5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 129c1efa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c1efc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 129c1f02 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129c1f04 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 129c1f06 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 129c1f07 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 129c1f0e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 129c1f13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c1f15 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 129c1f1b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129c1f1d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 129c1f1f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 129c1f20 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 129c1f27 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 129c1f2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c1f2e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 129c1f34 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129c1f36 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 129c1f38 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 129c1f39 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 129c1f3c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 129c1f42 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1f46 jl 0x129c1f4e */
  if ((C.sf!=C.of)) goto L_129c1f4e;
  /* 129c1f48 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1f4c jl 0x129c1f56 */
  if ((C.sf!=C.of)) goto L_129c1f56;
L_129c1f4e:;
  /* 129c1f4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c1f51 jmp 0x129c226b */
  goto L_129c226b;
L_129c1f56:;
  /* 129c1f56 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1f5a jne 0x129c2000 */
  if (!C.zf) goto L_129c2000;
  /* 129c1f60 push 0x129eca34 */
  push32((uint32_t)(0x129eca34u));
  /* 129c1f65 call dword ptr [0x129f02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02a4))), 0x129c1f6bu);
  /* 129c1f6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c1f6d jle 0x129c2000 */
  if ((C.zf||C.sf!=C.of)) goto L_129c2000;
  /* 129c1f73 cmp dword ptr [0x129ee488], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee488))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1f7a jne 0x129c1fbe */
  if (!C.zf) goto L_129c1fbe;
  /* 129c1f7c push 0x129e9240 */
  push32((uint32_t)(0x129e9240u));
  /* 129c1f81 call dword ptr [0x129f02a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02a0))), 0x129c1f87u);
  /* 129c1f87 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 129c1f8d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1f94 je 0x129c1fb6 */
  if (C.zf) goto L_129c1fb6;
  /* 129c1f96 push 0x129e9234 */
  push32((uint32_t)(0x129e9234u));
  /* 129c1f9b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 129c1fa1 push ecx */
  push32((uint32_t)(ECX));
  /* 129c1fa2 call dword ptr [0x129f029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f029c))), 0x129c1fa8u);
  /* 129c1fa8 mov dword ptr [0x129ee488], eax */
  w32((uint32_t)(0x129ee488), (EAX));
  /* 129c1fad cmp dword ptr [0x129ee488], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee488))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c1fb4 jne 0x129c1fbe */
  if (!C.zf) goto L_129c1fbe;
L_129c1fb6:;
  /* 129c1fb6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c1fb9 jmp 0x129c226b */
  goto L_129c226b;
L_129c1fbe:;
  /* 129c1fbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c1fc1 push edx */
  push32((uint32_t)(EDX));
  /* 129c1fc2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c1fc5 push eax */
  push32((uint32_t)(EAX));
  /* 129c1fc6 push 0x129e9200 */
  push32((uint32_t)(0x129e9200u));
  /* 129c1fcb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 129c1fd1 push ecx */
  push32((uint32_t)(ECX));
  /* 129c1fd2 call dword ptr [0x129ee488] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ee488))), 0x129c1fd8u);
  /* 129c1fd8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c1fdb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 129c1fe1 push edx */
  push32((uint32_t)(EDX));
  /* 129c1fe2 call dword ptr [0x129f0298] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0298))), 0x129c1fe8u);
  /* 129c1fe8 push 0x129eca34 */
  push32((uint32_t)(0x129eca34u));
  /* 129c1fed call dword ptr [0x129f0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0294))), 0x129c1ff3u);
  /* 129c1ff3 call 0x129c1dd0 */
  push32(0x129c1ff8u); f_129c1dd0();
  /* 129c1ff8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c1ffb jmp 0x129c226b */
  goto L_129c226b;
L_129c2000:;
  /* 129c2000 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2004 je 0x129c203d */
  if (C.zf) goto L_129c203d;
  /* 129c2006 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 129c200c push eax */
  push32((uint32_t)(EAX));
  /* 129c200d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c2010 push ecx */
  push32((uint32_t)(ECX));
  /* 129c2011 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 129c2016 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 129c201c push edx */
  push32((uint32_t)(EDX));
  /* 129c201d call 0x129c5ec0 */
  push32(0x129c2022u); f_129c5ec0();
  /* 129c2022 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2025 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c2027 jge 0x129c203d */
  if ((C.sf==C.of)) goto L_129c203d;
  /* 129c2029 push 0x129e91d4 */
  push32((uint32_t)(0x129e91d4u));
  /* 129c202e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 129c2034 push eax */
  push32((uint32_t)(EAX));
  /* 129c2035 call 0x129c5dd0 */
  push32(0x129c203au); f_129c5dd0();
  /* 129c203a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c203d:;
  /* 129c203d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2041 jne 0x129c2075 */
  if (!C.zf) goto L_129c2075;
  /* 129c2043 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2047 je 0x129c2055 */
  if (C.zf) goto L_129c2055;
  /* 129c2049 mov dword ptr [ebp - 0x3028], 0x129e91c0 */
  w32((uint32_t)(EBP + -0x3028), (0x129e91c0u));
  /* 129c2053 jmp 0x129c205f */
  goto L_129c205f;
L_129c2055:;
  /* 129c2055 mov dword ptr [ebp - 0x3028], 0x129e91ac */
  w32((uint32_t)(EBP + -0x3028), (0x129e91acu));
L_129c205f:;
  /* 129c205f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 129c2065 push ecx */
  push32((uint32_t)(ECX));
  /* 129c2066 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 129c206c push edx */
  push32((uint32_t)(EDX));
  /* 129c206d call 0x129c5dd0 */
  push32(0x129c2072u); f_129c5dd0();
  /* 129c2072 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c2075:;
  /* 129c2075 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 129c207b push eax */
  push32((uint32_t)(EAX));
  /* 129c207c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 129c2082 push ecx */
  push32((uint32_t)(ECX));
  /* 129c2083 call 0x129c5de0 */
  push32(0x129c2088u); f_129c5de0();
  /* 129c2088 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c208b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c208f jne 0x129c20ca */
  if (!C.zf) goto L_129c20ca;
  /* 129c2091 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c2094 mov eax, dword ptr [edx*4 + 0x129eca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x129eca38)));
  /* 129c209b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 129c209e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c20a0 je 0x129c20b6 */
  if (C.zf) goto L_129c20b6;
  /* 129c20a2 push 0x129e91a8 */
  push32((uint32_t)(0x129e91a8u));
  /* 129c20a7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 129c20ad push ecx */
  push32((uint32_t)(ECX));
  /* 129c20ae call 0x129c5de0 */
  push32(0x129c20b3u); f_129c5de0();
  /* 129c20b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c20b6:;
  /* 129c20b6 push 0x129e91a4 */
  push32((uint32_t)(0x129e91a4u));
  /* 129c20bb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 129c20c1 push edx */
  push32((uint32_t)(EDX));
  /* 129c20c2 call 0x129c5de0 */
  push32(0x129c20c7u); f_129c5de0();
  /* 129c20c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c20ca:;
  /* 129c20ca cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c20ce je 0x129c2112 */
  if (C.zf) goto L_129c2112;
  /* 129c20d0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 129c20d6 push eax */
  push32((uint32_t)(EAX));
  /* 129c20d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c20da push ecx */
  push32((uint32_t)(ECX));
  /* 129c20db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c20de push edx */
  push32((uint32_t)(EDX));
  /* 129c20df push 0x129e9198 */
  push32((uint32_t)(0x129e9198u));
  /* 129c20e4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 129c20e9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 129c20ef push eax */
  push32((uint32_t)(EAX));
  /* 129c20f0 call 0x129c5cd0 */
  push32(0x129c20f5u); f_129c5cd0();
  /* 129c20f5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c20f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c20fa jge 0x129c2110 */
  if ((C.sf==C.of)) goto L_129c2110;
  /* 129c20fc push 0x129e91d4 */
  push32((uint32_t)(0x129e91d4u));
  /* 129c2101 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 129c2107 push ecx */
  push32((uint32_t)(ECX));
  /* 129c2108 call 0x129c5dd0 */
  push32(0x129c210du); f_129c5dd0();
  /* 129c210d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c2110:;
  /* 129c2110 jmp 0x129c2128 */
  goto L_129c2128;
L_129c2112:;
  /* 129c2112 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 129c2118 push edx */
  push32((uint32_t)(EDX));
  /* 129c2119 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 129c211f push eax */
  push32((uint32_t)(EAX));
  /* 129c2120 call 0x129c5dd0 */
  push32(0x129c2125u); f_129c5dd0();
  /* 129c2125 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c2128:;
  /* 129c2128 cmp dword ptr [0x129effc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129effc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c212f je 0x129c216c */
  if (C.zf) goto L_129c216c;
  /* 129c2131 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 129c2137 push ecx */
  push32((uint32_t)(ECX));
  /* 129c2138 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 129c213e push edx */
  push32((uint32_t)(EDX));
  /* 129c213f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c2142 push eax */
  push32((uint32_t)(EAX));
  /* 129c2143 call dword ptr [0x129effc0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129effc0))), 0x129c2149u);
  /* 129c2149 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c214c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c214e je 0x129c216c */
  if (C.zf) goto L_129c216c;
  /* 129c2150 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2154 jne 0x129c2161 */
  if (!C.zf) goto L_129c2161;
  /* 129c2156 push 0x129eca34 */
  push32((uint32_t)(0x129eca34u));
  /* 129c215b call dword ptr [0x129f0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0294))), 0x129c2161u);
L_129c2161:;
  /* 129c2161 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 129c2167 jmp 0x129c226b */
  goto L_129c226b;
L_129c216c:;
  /* 129c216c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c216f mov edx, dword ptr [ecx*4 + 0x129eca38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129eca38)));
  /* 129c2176 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 129c2179 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c217b je 0x129c21bb */
  if (C.zf) goto L_129c21bb;
  /* 129c217d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c2180 cmp dword ptr [eax*4 + 0x129eca44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x129eca44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2188 je 0x129c21bb */
  if (C.zf) goto L_129c21bb;
  /* 129c218a push 0 */
  push32((uint32_t)(0x0u));
  /* 129c218c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 129c2192 push ecx */
  push32((uint32_t)(ECX));
  /* 129c2193 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 129c2199 push edx */
  push32((uint32_t)(EDX));
  /* 129c219a call 0x129c5c50 */
  push32(0x129c219fu); f_129c5c50();
  /* 129c219f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c21a2 push eax */
  push32((uint32_t)(EAX));
  /* 129c21a3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 129c21a9 push eax */
  push32((uint32_t)(EAX));
  /* 129c21aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c21ad mov edx, dword ptr [ecx*4 + 0x129eca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129eca44)));
  /* 129c21b4 push edx */
  push32((uint32_t)(EDX));
  /* 129c21b5 call dword ptr [0x129f0290] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0290))), 0x129c21bbu);
L_129c21bb:;
  /* 129c21bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c21be mov ecx, dword ptr [eax*4 + 0x129eca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x129eca38)));
  /* 129c21c5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 129c21c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c21ca je 0x129c21d9 */
  if (C.zf) goto L_129c21d9;
  /* 129c21cc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 129c21d2 push edx */
  push32((uint32_t)(EDX));
  /* 129c21d3 call dword ptr [0x129f0298] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0298))), 0x129c21d9u);
L_129c21d9:;
  /* 129c21d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c21dc mov ecx, dword ptr [eax*4 + 0x129eca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x129eca38)));
  /* 129c21e3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 129c21e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c21e8 je 0x129c2258 */
  if (C.zf) goto L_129c2258;
  /* 129c21ea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c21ee je 0x129c220d */
  if (C.zf) goto L_129c220d;
  /* 129c21f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 129c21f2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 129c21f8 push edx */
  push32((uint32_t)(EDX));
  /* 129c21f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c21fc push eax */
  push32((uint32_t)(EAX));
  /* 129c21fd call 0x129c5960 */
  push32(0x129c2202u); f_129c5960();
  /* 129c2202 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2205 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 129c220b jmp 0x129c2217 */
  goto L_129c2217;
L_129c220d:;
  /* 129c220d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_129c2217:;
  /* 129c2217 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 129c221d push ecx */
  push32((uint32_t)(ECX));
  /* 129c221e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c2221 push edx */
  push32((uint32_t)(EDX));
  /* 129c2222 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 129c2228 push eax */
  push32((uint32_t)(EAX));
  /* 129c2229 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c222c push ecx */
  push32((uint32_t)(ECX));
  /* 129c222d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c2230 push edx */
  push32((uint32_t)(EDX));
  /* 129c2231 call 0x129c2270 */
  push32(0x129c2236u); f_129c2270();
  /* 129c2236 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2239 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 129c223f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2243 jne 0x129c2250 */
  if (!C.zf) goto L_129c2250;
  /* 129c2245 push 0x129eca34 */
  push32((uint32_t)(0x129eca34u));
  /* 129c224a call dword ptr [0x129f0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0294))), 0x129c2250u);
L_129c2250:;
  /* 129c2250 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 129c2256 jmp 0x129c226b */
  goto L_129c226b;
L_129c2258:;
  /* 129c2258 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c225c jne 0x129c2269 */
  if (!C.zf) goto L_129c2269;
  /* 129c225e push 0x129eca34 */
  push32((uint32_t)(0x129eca34u));
  /* 129c2263 call dword ptr [0x129f0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0294))), 0x129c2269u);
L_129c2269:;
  /* 129c2269 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129c226b:;
  /* 129c226b pop edi */
  EDI = (pop32());
  /* 129c226c mov esp, ebp */
  ESP = (EBP);
  /* 129c226e pop ebp */
  EBP = (pop32());
  /* 129c226f ret  */
  ESPCHK(0x129c1ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002270 @ 0x129c2270 (780 bytes, 197 insns) */
void f_129c2270(void) {
  FTRACE(0x129c2270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c2270 push ebp */
  push32((uint32_t)(EBP));
  /* 129c2271 mov ebp, esp */
  EBP = (ESP);
  /* 129c2273 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 129c2278 call 0x129c5fc0 */
  push32(0x129c227du); f_129c5fc0();
L_129c227d:;
  /* 129c227d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2281 jne 0x129c22a8 */
  if (!C.zf) goto L_129c22a8;
  /* 129c2283 push 0x129e9390 */
  push32((uint32_t)(0x129e9390u));
  /* 129c2288 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c228a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 129c228f push 0x129e9384 */
  push32((uint32_t)(0x129e9384u));
  /* 129c2294 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c2296 call 0x129c1ee0 */
  push32(0x129c229bu); f_129c1ee0();
  /* 129c229b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c229e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c22a1 jne 0x129c22a8 */
  if (!C.zf) goto L_129c22a8;
  /* 129c22a3 call 0x129c1dd0 */
  push32(0x129c22a8u); f_129c1dd0();
L_129c22a8:;
  /* 129c22a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c22aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c22ac jne 0x129c227d */
  if (!C.zf) goto L_129c227d;
  /* 129c22ae push 0x104 */
  push32((uint32_t)(0x104u));
  /* 129c22b3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 129c22b9 push ecx */
  push32((uint32_t)(ECX));
  /* 129c22ba push 0 */
  push32((uint32_t)(0x0u));
  /* 129c22bc call dword ptr [0x129f02a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02a8))), 0x129c22c2u);
  /* 129c22c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c22c4 jne 0x129c22da */
  if (!C.zf) goto L_129c22da;
  /* 129c22c6 push 0x129e936c */
  push32((uint32_t)(0x129e936cu));
  /* 129c22cb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 129c22d1 push edx */
  push32((uint32_t)(EDX));
  /* 129c22d2 call 0x129c5dd0 */
  push32(0x129c22d7u); f_129c5dd0();
  /* 129c22d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c22da:;
  /* 129c22da lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 129c22e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c22e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c22e6 push ecx */
  push32((uint32_t)(ECX));
  /* 129c22e7 call 0x129c5c50 */
  push32(0x129c22ecu); f_129c5c50();
  /* 129c22ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c22ef cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c22f2 jbe 0x129c231d */
  if ((C.cf||C.zf)) goto L_129c231d;
  /* 129c22f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c22f7 push edx */
  push32((uint32_t)(EDX));
  /* 129c22f8 call 0x129c5c50 */
  push32(0x129c22fdu); f_129c5c50();
  /* 129c22fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2300 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c2303 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 129c2307 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129c230a push 3 */
  push32((uint32_t)(0x3u));
  /* 129c230c push 0x129e9368 */
  push32((uint32_t)(0x129e9368u));
  /* 129c2311 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c2314 push eax */
  push32((uint32_t)(EAX));
  /* 129c2315 call 0x129c6640 */
  push32(0x129c231au); f_129c6640();
  /* 129c231a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c231d:;
  /* 129c231d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c2320 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 129c2326 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c232d je 0x129c2378 */
  if (C.zf) goto L_129c2378;
  /* 129c232f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 129c2335 push edx */
  push32((uint32_t)(EDX));
  /* 129c2336 call 0x129c5c50 */
  push32(0x129c233bu); f_129c5c50();
  /* 129c233b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c233e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2341 jbe 0x129c2378 */
  if ((C.cf||C.zf)) goto L_129c2378;
  /* 129c2343 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 129c2349 push eax */
  push32((uint32_t)(EAX));
  /* 129c234a call 0x129c5c50 */
  push32(0x129c234fu); f_129c5c50();
  /* 129c234f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2352 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 129c2358 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 129c235c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 129c2362 push 3 */
  push32((uint32_t)(0x3u));
  /* 129c2364 push 0x129e9368 */
  push32((uint32_t)(0x129e9368u));
  /* 129c2369 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 129c236f push eax */
  push32((uint32_t)(EAX));
  /* 129c2370 call 0x129c6640 */
  push32(0x129c2375u); f_129c6640();
  /* 129c2375 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c2378:;
  /* 129c2378 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c237c jne 0x129c238a */
  if (!C.zf) goto L_129c238a;
  /* 129c237e mov dword ptr [ebp - 0x1114], 0x129e92f4 */
  w32((uint32_t)(EBP + -0x1114), (0x129e92f4u));
  /* 129c2388 jmp 0x129c2394 */
  goto L_129c2394;
L_129c238a:;
  /* 129c238a mov dword ptr [ebp - 0x1114], 0x129e9094 */
  w32((uint32_t)(EBP + -0x1114), (0x129e9094u));
L_129c2394:;
  /* 129c2394 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c2397 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129c239a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c239c je 0x129c23a9 */
  if (C.zf) goto L_129c23a9;
  /* 129c239e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c23a1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 129c23a7 jmp 0x129c23b3 */
  goto L_129c23b3;
L_129c23a9:;
  /* 129c23a9 mov dword ptr [ebp - 0x1118], 0x129e9094 */
  w32((uint32_t)(EBP + -0x1118), (0x129e9094u));
L_129c23b3:;
  /* 129c23b3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c23b6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129c23b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c23bb je 0x129c23cf */
  if (C.zf) goto L_129c23cf;
  /* 129c23bd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c23c1 jne 0x129c23cf */
  if (!C.zf) goto L_129c23cf;
  /* 129c23c3 mov dword ptr [ebp - 0x111c], 0x129e92e4 */
  w32((uint32_t)(EBP + -0x111c), (0x129e92e4u));
  /* 129c23cd jmp 0x129c23d9 */
  goto L_129c23d9;
L_129c23cf:;
  /* 129c23cf mov dword ptr [ebp - 0x111c], 0x129e9094 */
  w32((uint32_t)(EBP + -0x111c), (0x129e9094u));
L_129c23d9:;
  /* 129c23d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c23dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129c23df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c23e1 je 0x129c23ef */
  if (C.zf) goto L_129c23ef;
  /* 129c23e3 mov dword ptr [ebp - 0x1120], 0x129e92e0 */
  w32((uint32_t)(EBP + -0x1120), (0x129e92e0u));
  /* 129c23ed jmp 0x129c23f9 */
  goto L_129c23f9;
L_129c23ef:;
  /* 129c23ef mov dword ptr [ebp - 0x1120], 0x129e9094 */
  w32((uint32_t)(EBP + -0x1120), (0x129e9094u));
L_129c23f9:;
  /* 129c23f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c23fd je 0x129c240a */
  if (C.zf) goto L_129c240a;
  /* 129c23ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c2402 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 129c2408 jmp 0x129c2414 */
  goto L_129c2414;
L_129c240a:;
  /* 129c240a mov dword ptr [ebp - 0x1124], 0x129e9094 */
  w32((uint32_t)(EBP + -0x1124), (0x129e9094u));
L_129c2414:;
  /* 129c2414 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2418 je 0x129c2426 */
  if (C.zf) goto L_129c2426;
  /* 129c241a mov dword ptr [ebp - 0x1128], 0x129e92d8 */
  w32((uint32_t)(EBP + -0x1128), (0x129e92d8u));
  /* 129c2424 jmp 0x129c2430 */
  goto L_129c2430;
L_129c2426:;
  /* 129c2426 mov dword ptr [ebp - 0x1128], 0x129e9094 */
  w32((uint32_t)(EBP + -0x1128), (0x129e9094u));
L_129c2430:;
  /* 129c2430 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2434 je 0x129c2441 */
  if (C.zf) goto L_129c2441;
  /* 129c2436 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c2439 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 129c243f jmp 0x129c244b */
  goto L_129c244b;
L_129c2441:;
  /* 129c2441 mov dword ptr [ebp - 0x112c], 0x129e9094 */
  w32((uint32_t)(EBP + -0x112c), (0x129e9094u));
L_129c244b:;
  /* 129c244b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c244f je 0x129c245d */
  if (C.zf) goto L_129c245d;
  /* 129c2451 mov dword ptr [ebp - 0x1130], 0x129e92d0 */
  w32((uint32_t)(EBP + -0x1130), (0x129e92d0u));
  /* 129c245b jmp 0x129c2467 */
  goto L_129c2467;
L_129c245d:;
  /* 129c245d mov dword ptr [ebp - 0x1130], 0x129e9094 */
  w32((uint32_t)(EBP + -0x1130), (0x129e9094u));
L_129c2467:;
  /* 129c2467 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c246e je 0x129c247e */
  if (C.zf) goto L_129c247e;
  /* 129c2470 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 129c2476 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 129c247c jmp 0x129c2488 */
  goto L_129c2488;
L_129c247e:;
  /* 129c247e mov dword ptr [ebp - 0x1134], 0x129e9094 */
  w32((uint32_t)(EBP + -0x1134), (0x129e9094u));
L_129c2488:;
  /* 129c2488 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c248f je 0x129c249d */
  if (C.zf) goto L_129c249d;
  /* 129c2491 mov dword ptr [ebp - 0x1138], 0x129e92c4 */
  w32((uint32_t)(EBP + -0x1138), (0x129e92c4u));
  /* 129c249b jmp 0x129c24a7 */
  goto L_129c24a7;
L_129c249d:;
  /* 129c249d mov dword ptr [ebp - 0x1138], 0x129e9094 */
  w32((uint32_t)(EBP + -0x1138), (0x129e9094u));
L_129c24a7:;
  /* 129c24a7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 129c24ad push edx */
  push32((uint32_t)(EDX));
  /* 129c24ae mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 129c24b4 push eax */
  push32((uint32_t)(EAX));
  /* 129c24b5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 129c24bb push ecx */
  push32((uint32_t)(ECX));
  /* 129c24bc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 129c24c2 push edx */
  push32((uint32_t)(EDX));
  /* 129c24c3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 129c24c9 push eax */
  push32((uint32_t)(EAX));
  /* 129c24ca mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 129c24d0 push ecx */
  push32((uint32_t)(ECX));
  /* 129c24d1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 129c24d7 push edx */
  push32((uint32_t)(EDX));
  /* 129c24d8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 129c24de push eax */
  push32((uint32_t)(EAX));
  /* 129c24df mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 129c24e5 push ecx */
  push32((uint32_t)(ECX));
  /* 129c24e6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 129c24ec push edx */
  push32((uint32_t)(EDX));
  /* 129c24ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c24f0 push eax */
  push32((uint32_t)(EAX));
  /* 129c24f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c24f4 mov edx, dword ptr [ecx*4 + 0x129eca50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129eca50)));
  /* 129c24fb push edx */
  push32((uint32_t)(EDX));
  /* 129c24fc push 0x129e9270 */
  push32((uint32_t)(0x129e9270u));
  /* 129c2501 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 129c2506 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 129c250c push eax */
  push32((uint32_t)(EAX));
  /* 129c250d call 0x129c5cd0 */
  push32(0x129c2512u); f_129c5cd0();
  /* 129c2512 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2515 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c2517 jge 0x129c252d */
  if ((C.sf==C.of)) goto L_129c252d;
  /* 129c2519 push 0x129e91d4 */
  push32((uint32_t)(0x129e91d4u));
  /* 129c251e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 129c2524 push ecx */
  push32((uint32_t)(ECX));
  /* 129c2525 call 0x129c5dd0 */
  push32(0x129c252au); f_129c5dd0();
  /* 129c252a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c252d:;
  /* 129c252d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 129c2532 push 0x129e924c */
  push32((uint32_t)(0x129e924cu));
  /* 129c2537 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 129c253d push edx */
  push32((uint32_t)(EDX));
  /* 129c253e call 0x129c6580 */
  push32(0x129c2543u); f_129c6580();
  /* 129c2543 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2546 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 129c254c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2553 jne 0x129c2566 */
  if (!C.zf) goto L_129c2566;
  /* 129c2555 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 129c2557 call 0x129c62c0 */
  push32(0x129c255cu); f_129c62c0();
  /* 129c255c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c255f push 3 */
  push32((uint32_t)(0x3u));
  /* 129c2561 call 0x129c25e0 */
  push32(0x129c2566u); f_129c25e0();
L_129c2566:;
  /* 129c2566 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c256d jne 0x129c2576 */
  if (!C.zf) goto L_129c2576;
  /* 129c256f mov eax, 1 */
  EAX = (0x1u);
  /* 129c2574 jmp 0x129c2578 */
  goto L_129c2578;
L_129c2576:;
  /* 129c2576 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129c2578:;
  /* 129c2578 mov esp, ebp */
  ESP = (EBP);
  /* 129c257a pop ebp */
  EBP = (pop32());
  /* 129c257b ret  */
  ESPCHK(0x129c2270u, _esp0);
  ESP += 4; return;
}

/* FUN_10002580 @ 0x129c2580 (56 bytes, 15 insns) */
void f_129c2580(void) {
  FTRACE(0x129c2580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c2580 push ebp */
  push32((uint32_t)(EBP));
  /* 129c2581 mov ebp, esp */
  EBP = (ESP);
  /* 129c2583 cmp dword ptr [0x129effbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129effbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c258a je 0x129c2592 */
  if (C.zf) goto L_129c2592;
  /* 129c258c call dword ptr [0x129effbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129effbc))), 0x129c2592u);
L_129c2592:;
  /* 129c2592 push 0x129ec418 */
  push32((uint32_t)(0x129ec418u));
  /* 129c2597 push 0x129ec208 */
  push32((uint32_t)(0x129ec208u));
  /* 129c259c call 0x129c2750 */
  push32(0x129c25a1u); f_129c2750();
  /* 129c25a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c25a4 push 0x129ec104 */
  push32((uint32_t)(0x129ec104u));
  /* 129c25a9 push 0x129ec000 */
  push32((uint32_t)(0x129ec000u));
  /* 129c25ae call 0x129c2750 */
  push32(0x129c25b3u); f_129c2750();
  /* 129c25b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c25b6 pop ebp */
  EBP = (pop32());
  /* 129c25b7 ret  */
  ESPCHK(0x129c2580u, _esp0);
  ESP += 4; return;
}

/* FUN_100025c0 @ 0x129c25c0 (21 bytes, 10 insns) */
void f_129c25c0(void) {
  FTRACE(0x129c25c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c25c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c25c1 mov ebp, esp */
  EBP = (ESP);
  /* 129c25c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c25c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c25c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c25ca push eax */
  push32((uint32_t)(EAX));
  /* 129c25cb call 0x129c2640 */
  push32(0x129c25d0u); f_129c2640();
  /* 129c25d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c25d3 pop ebp */
  EBP = (pop32());
  /* 129c25d4 ret  */
  ESPCHK(0x129c25c0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x129c25e0 (21 bytes, 10 insns) */
void f_129c25e0(void) {
  FTRACE(0x129c25e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c25e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c25e1 mov ebp, esp */
  EBP = (ESP);
  /* 129c25e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c25e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c25e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c25ea push eax */
  push32((uint32_t)(EAX));
  /* 129c25eb call 0x129c2640 */
  push32(0x129c25f0u); f_129c2640();
  /* 129c25f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c25f3 pop ebp */
  EBP = (pop32());
  /* 129c25f4 ret  */
  ESPCHK(0x129c25e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002600 @ 0x129c2600 (19 bytes, 9 insns) */
void f_129c2600(void) {
  FTRACE(0x129c2600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c2600 push ebp */
  push32((uint32_t)(EBP));
  /* 129c2601 mov ebp, esp */
  EBP = (ESP);
  /* 129c2603 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c2605 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c2607 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c2609 call 0x129c2640 */
  push32(0x129c260eu); f_129c2640();
  /* 129c260e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2611 pop ebp */
  EBP = (pop32());
  /* 129c2612 ret  */
  ESPCHK(0x129c2600u, _esp0);
  ESP += 4; return;
}

/* FUN_10002620 @ 0x129c2620 (19 bytes, 9 insns) */
void f_129c2620(void) {
  FTRACE(0x129c2620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c2620 push ebp */
  push32((uint32_t)(EBP));
  /* 129c2621 mov ebp, esp */
  EBP = (ESP);
  /* 129c2623 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c2625 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c2627 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c2629 call 0x129c2640 */
  push32(0x129c262eu); f_129c2640();
  /* 129c262e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2631 pop ebp */
  EBP = (pop32());
  /* 129c2632 ret  */
  ESPCHK(0x129c2620u, _esp0);
  ESP += 4; return;
}

/* FUN_10002640 @ 0x129c2640 (227 bytes, 61 insns) */
void f_129c2640(void) {
  FTRACE(0x129c2640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c2640 push ebp */
  push32((uint32_t)(EBP));
  /* 129c2641 mov ebp, esp */
  EBP = (ESP);
  /* 129c2643 push ecx */
  push32((uint32_t)(ECX));
  /* 129c2644 call 0x129c2730 */
  push32(0x129c2649u); f_129c2730();
  /* 129c2649 cmp dword ptr [0x129ee4cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ee4cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2650 jne 0x129c2663 */
  if (!C.zf) goto L_129c2663;
  /* 129c2652 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c2655 push eax */
  push32((uint32_t)(EAX));
  /* 129c2656 call dword ptr [0x129f02b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02b4))), 0x129c265cu);
  /* 129c265c push eax */
  push32((uint32_t)(EAX));
  /* 129c265d call dword ptr [0x129f02b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02b0))), 0x129c2663u);
L_129c2663:;
  /* 129c2663 mov dword ptr [0x129ee4c8], 1 */
  w32((uint32_t)(0x129ee4c8), (0x1u));
  /* 129c266d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 129c2670 mov byte ptr [0x129ee4c4], cl */
  w8((uint32_t)(0x129ee4c4), (CL));
  /* 129c2676 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c267a jne 0x129c26c3 */
  if (!C.zf) goto L_129c26c3;
  /* 129c267c cmp dword ptr [0x129effb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129effb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2683 je 0x129c26b1 */
  if (C.zf) goto L_129c26b1;
  /* 129c2685 mov edx, dword ptr [0x129effb4] */
  EDX = (r32((uint32_t)(0x129effb4)));
  /* 129c268b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_129c268e:;
  /* 129c268e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c2691 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c2694 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c2697 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c269a cmp ecx, dword ptr [0x129effb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129effb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c26a0 jb 0x129c26b1 */
  if (C.cf) goto L_129c26b1;
  /* 129c26a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c26a5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c26a8 je 0x129c26af */
  if (C.zf) goto L_129c26af;
  /* 129c26aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c26ad call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x129c26afu);
L_129c26af:;
  /* 129c26af jmp 0x129c268e */
  goto L_129c268e;
L_129c26b1:;
  /* 129c26b1 push 0x129ec724 */
  push32((uint32_t)(0x129ec724u));
  /* 129c26b6 push 0x129ec51c */
  push32((uint32_t)(0x129ec51cu));
  /* 129c26bb call 0x129c2750 */
  push32(0x129c26c0u); f_129c2750();
  /* 129c26c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c26c3:;
  /* 129c26c3 push 0x129ec92c */
  push32((uint32_t)(0x129ec92cu));
  /* 129c26c8 push 0x129ec828 */
  push32((uint32_t)(0x129ec828u));
  /* 129c26cd call 0x129c2750 */
  push32(0x129c26d2u); f_129c2750();
  /* 129c26d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c26d5 cmp dword ptr [0x129ee4d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee4d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c26dc jne 0x129c26fe */
  if (!C.zf) goto L_129c26fe;
  /* 129c26de push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129c26e0 call 0x129c4330 */
  push32(0x129c26e5u); f_129c4330();
  /* 129c26e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c26e8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 129c26eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c26ed je 0x129c26fe */
  if (C.zf) goto L_129c26fe;
  /* 129c26ef mov dword ptr [0x129ee4d0], 1 */
  w32((uint32_t)(0x129ee4d0), (0x1u));
  /* 129c26f9 call 0x129c4c40 */
  push32(0x129c26feu); f_129c4c40();
L_129c26fe:;
  /* 129c26fe cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2702 je 0x129c270b */
  if (C.zf) goto L_129c270b;
  /* 129c2704 call 0x129c2740 */
  push32(0x129c2709u); f_129c2740();
  /* 129c2709 jmp 0x129c271f */
  goto L_129c271f;
L_129c270b:;
  /* 129c270b mov dword ptr [0x129ee4cc], 1 */
  w32((uint32_t)(0x129ee4cc), (0x1u));
  /* 129c2715 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c2718 push ecx */
  push32((uint32_t)(ECX));
  /* 129c2719 call dword ptr [0x129f02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02ac))), 0x129c271fu);
L_129c271f:;
  /* 129c271f mov esp, ebp */
  ESP = (EBP);
  /* 129c2721 pop ebp */
  EBP = (pop32());
  /* 129c2722 ret  */
  ESPCHK(0x129c2640u, _esp0);
  ESP += 4; return;
}

/* FUN_10002730 @ 0x129c2730 (15 bytes, 7 insns) */
void f_129c2730(void) {
  FTRACE(0x129c2730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c2730 push ebp */
  push32((uint32_t)(EBP));
  /* 129c2731 mov ebp, esp */
  EBP = (ESP);
  /* 129c2733 push 0xd */
  push32((uint32_t)(0xdu));
  /* 129c2735 call 0x129c6820 */
  push32(0x129c273au); f_129c6820();
  /* 129c273a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c273d pop ebp */
  EBP = (pop32());
  /* 129c273e ret  */
  ESPCHK(0x129c2730u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x129c2740 (15 bytes, 7 insns) */
void f_129c2740(void) {
  FTRACE(0x129c2740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c2740 push ebp */
  push32((uint32_t)(EBP));
  /* 129c2741 mov ebp, esp */
  EBP = (ESP);
  /* 129c2743 push 0xd */
  push32((uint32_t)(0xdu));
  /* 129c2745 call 0x129c68c0 */
  push32(0x129c274au); f_129c68c0();
  /* 129c274a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c274d pop ebp */
  EBP = (pop32());
  /* 129c274e ret  */
  ESPCHK(0x129c2740u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x129c2750 (37 bytes, 16 insns) */
void f_129c2750(void) {
  FTRACE(0x129c2750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c2750 push ebp */
  push32((uint32_t)(EBP));
  /* 129c2751 mov ebp, esp */
  EBP = (ESP);
L_129c2753:;
  /* 129c2753 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c2756 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2759 jae 0x129c2773 */
  if (!C.cf) goto L_129c2773;
  /* 129c275b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c275e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2761 je 0x129c2768 */
  if (C.zf) goto L_129c2768;
  /* 129c2763 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c2766 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x129c2768u);
L_129c2768:;
  /* 129c2768 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c276b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c276e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129c2771 jmp 0x129c2753 */
  goto L_129c2753;
L_129c2773:;
  /* 129c2773 pop ebp */
  EBP = (pop32());
  /* 129c2774 ret  */
  ESPCHK(0x129c2750u, _esp0);
  ESP += 4; return;
}

/* FUN_10002780 @ 0x129c2780 (130 bytes, 42 insns) */
void f_129c2780(void) {
  FTRACE(0x129c2780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c2780 push ebp */
  push32((uint32_t)(EBP));
  /* 129c2781 mov ebp, esp */
  EBP = (ESP);
  /* 129c2783 push ecx */
  push32((uint32_t)(ECX));
  /* 129c2784 call 0x129c6740 */
  push32(0x129c2789u); f_129c6740();
  /* 129c2789 call dword ptr [0x129f02c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02c0))), 0x129c278fu);
  /* 129c278f mov dword ptr [0x129eca5c], eax */
  w32((uint32_t)(0x129eca5c), (EAX));
  /* 129c2794 cmp dword ptr [0x129eca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x129eca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c279b jne 0x129c27a1 */
  if (!C.zf) goto L_129c27a1;
  /* 129c279d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c279f jmp 0x129c27fe */
  goto L_129c27fe;
L_129c27a1:;
  /* 129c27a1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 129c27a3 push 0x129e93a8 */
  push32((uint32_t)(0x129e93a8u));
  /* 129c27a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c27aa push 0x74 */
  push32((uint32_t)(0x74u));
  /* 129c27ac push 1 */
  push32((uint32_t)(0x1u));
  /* 129c27ae call 0x129c3230 */
  push32(0x129c27b3u); f_129c3230();
  /* 129c27b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c27b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c27b9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c27bd je 0x129c27d4 */
  if (C.zf) goto L_129c27d4;
  /* 129c27bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c27c2 push eax */
  push32((uint32_t)(EAX));
  /* 129c27c3 mov ecx, dword ptr [0x129eca5c] */
  ECX = (r32((uint32_t)(0x129eca5c)));
  /* 129c27c9 push ecx */
  push32((uint32_t)(ECX));
  /* 129c27ca call dword ptr [0x129f02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02bc))), 0x129c27d0u);
  /* 129c27d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c27d2 jne 0x129c27d8 */
  if (!C.zf) goto L_129c27d8;
L_129c27d4:;
  /* 129c27d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c27d6 jmp 0x129c27fe */
  goto L_129c27fe;
L_129c27d8:;
  /* 129c27d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c27db push edx */
  push32((uint32_t)(EDX));
  /* 129c27dc call 0x129c2840 */
  push32(0x129c27e1u); f_129c2840();
  /* 129c27e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c27e4 call dword ptr [0x129f02b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02b8))), 0x129c27eau);
  /* 129c27ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c27ed mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129c27ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c27f2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 129c27f9 mov eax, 1 */
  EAX = (0x1u);
L_129c27fe:;
  /* 129c27fe mov esp, ebp */
  ESP = (EBP);
  /* 129c2800 pop ebp */
  EBP = (pop32());
  /* 129c2801 ret  */
  ESPCHK(0x129c2780u, _esp0);
  ESP += 4; return;
}

/* FUN_10002810 @ 0x129c2810 (41 bytes, 11 insns) */
void f_129c2810(void) {
  FTRACE(0x129c2810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c2810 push ebp */
  push32((uint32_t)(EBP));
  /* 129c2811 mov ebp, esp */
  EBP = (ESP);
  /* 129c2813 call 0x129c6780 */
  push32(0x129c2818u); f_129c6780();
  /* 129c2818 cmp dword ptr [0x129eca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x129eca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c281f je 0x129c2837 */
  if (C.zf) goto L_129c2837;
  /* 129c2821 mov eax, dword ptr [0x129eca5c] */
  EAX = (r32((uint32_t)(0x129eca5c)));
  /* 129c2826 push eax */
  push32((uint32_t)(EAX));
  /* 129c2827 call dword ptr [0x129f02c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02c4))), 0x129c282du);
  /* 129c282d mov dword ptr [0x129eca5c], 0xffffffff */
  w32((uint32_t)(0x129eca5c), (0xffffffffu));
L_129c2837:;
  /* 129c2837 pop ebp */
  EBP = (pop32());
  /* 129c2838 ret  */
  ESPCHK(0x129c2810u, _esp0);
  ESP += 4; return;
}

/* FUN_10002840 @ 0x129c2840 (25 bytes, 8 insns) */
void f_129c2840(void) {
  FTRACE(0x129c2840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c2840 push ebp */
  push32((uint32_t)(EBP));
  /* 129c2841 mov ebp, esp */
  EBP = (ESP);
  /* 129c2843 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c2846 mov dword ptr [eax + 0x50], 0x129ecc00 */
  w32((uint32_t)(EAX + 0x50), (0x129ecc00u));
  /* 129c284d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c2850 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 129c2857 pop ebp */
  EBP = (pop32());
  /* 129c2858 ret  */
  ESPCHK(0x129c2840u, _esp0);
  ESP += 4; return;
}

/* FUN_10002860 @ 0x129c2860 (152 bytes, 48 insns) */
void f_129c2860(void) {
  FTRACE(0x129c2860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c2860 push ebp */
  push32((uint32_t)(EBP));
  /* 129c2861 mov ebp, esp */
  EBP = (ESP);
  /* 129c2863 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c2866 call dword ptr [0x129f02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02d0))), 0x129c286cu);
  /* 129c286c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129c286f mov eax, dword ptr [0x129eca5c] */
  EAX = (r32((uint32_t)(0x129eca5c)));
  /* 129c2874 push eax */
  push32((uint32_t)(EAX));
  /* 129c2875 call dword ptr [0x129f02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02cc))), 0x129c287bu);
  /* 129c287b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c287e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2882 jne 0x129c28e7 */
  if (!C.zf) goto L_129c28e7;
  /* 129c2884 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 129c2889 push 0x129e93a8 */
  push32((uint32_t)(0x129e93a8u));
  /* 129c288e push 2 */
  push32((uint32_t)(0x2u));
  /* 129c2890 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 129c2892 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c2894 call 0x129c3230 */
  push32(0x129c2899u); f_129c3230();
  /* 129c2899 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c289c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c289f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c28a3 je 0x129c28dd */
  if (C.zf) goto L_129c28dd;
  /* 129c28a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c28a8 push ecx */
  push32((uint32_t)(ECX));
  /* 129c28a9 mov edx, dword ptr [0x129eca5c] */
  EDX = (r32((uint32_t)(0x129eca5c)));
  /* 129c28af push edx */
  push32((uint32_t)(EDX));
  /* 129c28b0 call dword ptr [0x129f02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02bc))), 0x129c28b6u);
  /* 129c28b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c28b8 je 0x129c28dd */
  if (C.zf) goto L_129c28dd;
  /* 129c28ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c28bd push eax */
  push32((uint32_t)(EAX));
  /* 129c28be call 0x129c2840 */
  push32(0x129c28c3u); f_129c2840();
  /* 129c28c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c28c6 call dword ptr [0x129f02b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02b8))), 0x129c28ccu);
  /* 129c28cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c28cf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129c28d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c28d4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 129c28db jmp 0x129c28e7 */
  goto L_129c28e7;
L_129c28dd:;
  /* 129c28dd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 129c28df call 0x129c1d90 */
  push32(0x129c28e4u); f_129c1d90();
  /* 129c28e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c28e7:;
  /* 129c28e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c28ea push eax */
  push32((uint32_t)(EAX));
  /* 129c28eb call dword ptr [0x129f02c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02c8))), 0x129c28f1u);
  /* 129c28f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c28f4 mov esp, ebp */
  ESP = (EBP);
  /* 129c28f6 pop ebp */
  EBP = (pop32());
  /* 129c28f7 ret  */
  ESPCHK(0x129c2860u, _esp0);
  ESP += 4; return;
}

/* FUN_10002900 @ 0x129c2900 (263 bytes, 86 insns) */
void f_129c2900(void) {
  FTRACE(0x129c2900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c2900 push ebp */
  push32((uint32_t)(EBP));
  /* 129c2901 mov ebp, esp */
  EBP = (ESP);
  /* 129c2903 cmp dword ptr [0x129eca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x129eca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c290a je 0x129c2a05 */
  if (C.zf) goto L_129c2a05;
  /* 129c2910 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2914 jne 0x129c2925 */
  if (!C.zf) goto L_129c2925;
  /* 129c2916 mov eax, dword ptr [0x129eca5c] */
  EAX = (r32((uint32_t)(0x129eca5c)));
  /* 129c291b push eax */
  push32((uint32_t)(EAX));
  /* 129c291c call dword ptr [0x129f02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02cc))), 0x129c2922u);
  /* 129c2922 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_129c2925:;
  /* 129c2925 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2929 je 0x129c29f6 */
  if (C.zf) goto L_129c29f6;
  /* 129c292f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c2932 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2936 je 0x129c2949 */
  if (C.zf) goto L_129c2949;
  /* 129c2938 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c293a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c293d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 129c2940 push eax */
  push32((uint32_t)(EAX));
  /* 129c2941 call 0x129c38b0 */
  push32(0x129c2946u); f_129c38b0();
  /* 129c2946 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c2949:;
  /* 129c2949 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c294c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2950 je 0x129c2963 */
  if (C.zf) goto L_129c2963;
  /* 129c2952 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c2954 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c2957 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 129c295a push eax */
  push32((uint32_t)(EAX));
  /* 129c295b call 0x129c38b0 */
  push32(0x129c2960u); f_129c38b0();
  /* 129c2960 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c2963:;
  /* 129c2963 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c2966 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c296a je 0x129c297d */
  if (C.zf) goto L_129c297d;
  /* 129c296c push 2 */
  push32((uint32_t)(0x2u));
  /* 129c296e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c2971 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 129c2974 push eax */
  push32((uint32_t)(EAX));
  /* 129c2975 call 0x129c38b0 */
  push32(0x129c297au); f_129c38b0();
  /* 129c297a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c297d:;
  /* 129c297d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c2980 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2984 je 0x129c2997 */
  if (C.zf) goto L_129c2997;
  /* 129c2986 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c2988 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c298b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 129c298e push eax */
  push32((uint32_t)(EAX));
  /* 129c298f call 0x129c38b0 */
  push32(0x129c2994u); f_129c38b0();
  /* 129c2994 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c2997:;
  /* 129c2997 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c299a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c299e je 0x129c29b1 */
  if (C.zf) goto L_129c29b1;
  /* 129c29a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c29a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c29a5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 129c29a8 push eax */
  push32((uint32_t)(EAX));
  /* 129c29a9 call 0x129c38b0 */
  push32(0x129c29aeu); f_129c38b0();
  /* 129c29ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c29b1:;
  /* 129c29b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c29b4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c29b8 je 0x129c29cb */
  if (C.zf) goto L_129c29cb;
  /* 129c29ba push 2 */
  push32((uint32_t)(0x2u));
  /* 129c29bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c29bf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 129c29c2 push eax */
  push32((uint32_t)(EAX));
  /* 129c29c3 call 0x129c38b0 */
  push32(0x129c29c8u); f_129c38b0();
  /* 129c29c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c29cb:;
  /* 129c29cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c29ce cmp dword ptr [ecx + 0x50], 0x129ecc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x129ecc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c29d5 je 0x129c29e8 */
  if (C.zf) goto L_129c29e8;
  /* 129c29d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c29d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c29dc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 129c29df push eax */
  push32((uint32_t)(EAX));
  /* 129c29e0 call 0x129c38b0 */
  push32(0x129c29e5u); f_129c38b0();
  /* 129c29e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c29e8:;
  /* 129c29e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c29ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c29ed push ecx */
  push32((uint32_t)(ECX));
  /* 129c29ee call 0x129c38b0 */
  push32(0x129c29f3u); f_129c38b0();
  /* 129c29f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c29f6:;
  /* 129c29f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c29f8 mov edx, dword ptr [0x129eca5c] */
  EDX = (r32((uint32_t)(0x129eca5c)));
  /* 129c29fe push edx */
  push32((uint32_t)(EDX));
  /* 129c29ff call dword ptr [0x129f02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02bc))), 0x129c2a05u);
L_129c2a05:;
  /* 129c2a05 pop ebp */
  EBP = (pop32());
  /* 129c2a06 ret  */
  ESPCHK(0x129c2900u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a10 @ 0x129c2a10 (11 bytes, 5 insns) */
void f_129c2a10(void) {
  FTRACE(0x129c2a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c2a10 push ebp */
  push32((uint32_t)(EBP));
  /* 129c2a11 mov ebp, esp */
  EBP = (ESP);
  /* 129c2a13 call dword ptr [0x129f02b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02b8))), 0x129c2a19u);
  /* 129c2a19 pop ebp */
  EBP = (pop32());
  /* 129c2a1a ret  */
  ESPCHK(0x129c2a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a20 @ 0x129c2a20 (11 bytes, 5 insns) */
void f_129c2a20(void) {
  FTRACE(0x129c2a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c2a20 push ebp */
  push32((uint32_t)(EBP));
  /* 129c2a21 mov ebp, esp */
  EBP = (ESP);
  /* 129c2a23 call dword ptr [0x129f02d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02d4))), 0x129c2a29u);
  /* 129c2a29 pop ebp */
  EBP = (pop32());
  /* 129c2a2a ret  */
  ESPCHK(0x129c2a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a30 @ 0x129c2a30 (804 bytes, 236 insns) */
void f_129c2a30(void) {
  FTRACE(0x129c2a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c2a30 push ebp */
  push32((uint32_t)(EBP));
  /* 129c2a31 mov ebp, esp */
  EBP = (ESP);
  /* 129c2a33 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c2a36 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 129c2a3b push 0x129e93b4 */
  push32((uint32_t)(0x129e93b4u));
  /* 129c2a40 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c2a42 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 129c2a47 call 0x129c2e20 */
  push32(0x129c2a4cu); f_129c2e20();
  /* 129c2a4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2a4f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 129c2a52 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2a56 jne 0x129c2a62 */
  if (!C.zf) goto L_129c2a62;
  /* 129c2a58 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 129c2a5a call 0x129c1d90 */
  push32(0x129c2a5fu); f_129c1d90();
  /* 129c2a5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c2a62:;
  /* 129c2a62 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2a65 mov dword ptr [0x129efe60], eax */
  w32((uint32_t)(0x129efe60), (EAX));
  /* 129c2a6a mov dword ptr [0x129eff9c], 0x20 */
  w32((uint32_t)(0x129eff9c), (0x20u));
  /* 129c2a74 jmp 0x129c2a7f */
  goto L_129c2a7f;
L_129c2a76:;
  /* 129c2a76 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2a79 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2a7c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_129c2a7f:;
  /* 129c2a7f mov edx, dword ptr [0x129efe60] */
  EDX = (r32((uint32_t)(0x129efe60)));
  /* 129c2a85 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2a8b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2a8e jae 0x129c2ab3 */
  if (!C.cf) goto L_129c2ab3;
  /* 129c2a90 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2a93 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 129c2a97 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2a9a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 129c2aa0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2aa3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 129c2aa7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2aaa mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 129c2ab1 jmp 0x129c2a76 */
  goto L_129c2a76;
L_129c2ab3:;
  /* 129c2ab3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 129c2ab6 push ecx */
  push32((uint32_t)(ECX));
  /* 129c2ab7 call dword ptr [0x129f02e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02e0))), 0x129c2abdu);
  /* 129c2abd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 129c2ac0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129c2ac6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c2ac8 je 0x129c2c55 */
  if (C.zf) goto L_129c2c55;
  /* 129c2ace cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2ad2 je 0x129c2c55 */
  if (C.zf) goto L_129c2c55;
  /* 129c2ad8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c2adb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129c2add mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 129c2ae0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c2ae3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2ae6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129c2ae9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c2aec add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2aef mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 129c2af2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2af9 jge 0x129c2b03 */
  if ((C.sf==C.of)) goto L_129c2b03;
  /* 129c2afb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 129c2afe mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 129c2b01 jmp 0x129c2b0a */
  goto L_129c2b0a;
L_129c2b03:;
  /* 129c2b03 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_129c2b0a:;
  /* 129c2b0a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 129c2b0d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 129c2b10 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 129c2b17 jmp 0x129c2b22 */
  goto L_129c2b22;
L_129c2b19:;
  /* 129c2b19 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 129c2b1c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2b1f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_129c2b22:;
  /* 129c2b22 mov ecx, dword ptr [0x129eff9c] */
  ECX = (r32((uint32_t)(0x129eff9c)));
  /* 129c2b28 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2b2b jge 0x129c2bc2 */
  if ((C.sf==C.of)) goto L_129c2bc2;
  /* 129c2b31 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 129c2b36 push 0x129e93b4 */
  push32((uint32_t)(0x129e93b4u));
  /* 129c2b3b push 2 */
  push32((uint32_t)(0x2u));
  /* 129c2b3d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 129c2b42 call 0x129c2e20 */
  push32(0x129c2b47u); f_129c2e20();
  /* 129c2b47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2b4a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 129c2b4d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2b51 jne 0x129c2b5e */
  if (!C.zf) goto L_129c2b5e;
  /* 129c2b53 mov edx, dword ptr [0x129eff9c] */
  EDX = (r32((uint32_t)(0x129eff9c)));
  /* 129c2b59 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 129c2b5c jmp 0x129c2bc2 */
  goto L_129c2bc2;
L_129c2b5e:;
  /* 129c2b5e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 129c2b61 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2b64 mov dword ptr [eax*4 + 0x129efe60], ecx */
  w32((uint32_t)(EAX*4 + 0x129efe60), (ECX));
  /* 129c2b6b mov edx, dword ptr [0x129eff9c] */
  EDX = (r32((uint32_t)(0x129eff9c)));
  /* 129c2b71 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2b74 mov dword ptr [0x129eff9c], edx */
  w32((uint32_t)(0x129eff9c), (EDX));
  /* 129c2b7a jmp 0x129c2b85 */
  goto L_129c2b85;
L_129c2b7c:;
  /* 129c2b7c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2b7f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2b82 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_129c2b85:;
  /* 129c2b85 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 129c2b88 mov edx, dword ptr [ecx*4 + 0x129efe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129efe60)));
  /* 129c2b8f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2b95 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2b98 jae 0x129c2bbd */
  if (!C.cf) goto L_129c2bbd;
  /* 129c2b9a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2b9d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 129c2ba1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2ba4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 129c2baa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2bad mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 129c2bb1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2bb4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 129c2bbb jmp 0x129c2b7c */
  goto L_129c2b7c;
L_129c2bbd:;
  /* 129c2bbd jmp 0x129c2b19 */
  goto L_129c2b19;
L_129c2bc2:;
  /* 129c2bc2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 129c2bc9 jmp 0x129c2be6 */
  goto L_129c2be6;
L_129c2bcb:;
  /* 129c2bcb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 129c2bce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2bd1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 129c2bd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c2bd7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2bda mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129c2bdd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 129c2be0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2be3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_129c2be6:;
  /* 129c2be6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 129c2be9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2bec jge 0x129c2c55 */
  if ((C.sf==C.of)) goto L_129c2c55;
  /* 129c2bee mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 129c2bf1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2bf4 je 0x129c2c50 */
  if (C.zf) goto L_129c2c50;
  /* 129c2bf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c2bf9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129c2bfc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 129c2bff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c2c01 je 0x129c2c50 */
  if (C.zf) goto L_129c2c50;
  /* 129c2c03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c2c06 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129c2c09 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 129c2c0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c2c0e jne 0x129c2c20 */
  if (!C.zf) goto L_129c2c20;
  /* 129c2c10 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 129c2c13 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129c2c15 push edx */
  push32((uint32_t)(EDX));
  /* 129c2c16 call dword ptr [0x129f02dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02dc))), 0x129c2c1cu);
  /* 129c2c1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c2c1e je 0x129c2c50 */
  if (C.zf) goto L_129c2c50;
L_129c2c20:;
  /* 129c2c20 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 129c2c23 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 129c2c26 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 129c2c29 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 129c2c2c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c2c2f mov edx, dword ptr [eax*4 + 0x129efe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x129efe60)));
  /* 129c2c36 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2c38 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 129c2c3b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2c3e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 129c2c41 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129c2c43 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129c2c45 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2c48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c2c4b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129c2c4d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_129c2c50:;
  /* 129c2c50 jmp 0x129c2bcb */
  goto L_129c2bcb;
L_129c2c55:;
  /* 129c2c55 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 129c2c5c jmp 0x129c2c67 */
  goto L_129c2c67;
L_129c2c5e:;
  /* 129c2c5e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 129c2c61 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2c64 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_129c2c67:;
  /* 129c2c67 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2c6b jge 0x129c2d44 */
  if ((C.sf==C.of)) goto L_129c2d44;
  /* 129c2c71 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 129c2c74 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c2c77 mov edx, dword ptr [0x129efe60] */
  EDX = (r32((uint32_t)(0x129efe60)));
  /* 129c2c7d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2c7f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 129c2c82 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2c85 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2c88 jne 0x129c2d30 */
  if (!C.zf) goto L_129c2d30;
  /* 129c2c8e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2c91 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 129c2c95 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2c99 jne 0x129c2ca4 */
  if (!C.zf) goto L_129c2ca4;
  /* 129c2c9b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 129c2ca2 jmp 0x129c2cb4 */
  goto L_129c2cb4;
L_129c2ca4:;
  /* 129c2ca4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 129c2ca7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c2caa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 129c2cac sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c2cae add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2cb1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_129c2cb4:;
  /* 129c2cb4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 129c2cb7 push eax */
  push32((uint32_t)(EAX));
  /* 129c2cb8 call dword ptr [0x129f028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f028c))), 0x129c2cbeu);
  /* 129c2cbe mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 129c2cc1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2cc5 je 0x129c2d1f */
  if (C.zf) goto L_129c2d1f;
  /* 129c2cc7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 129c2cca push ecx */
  push32((uint32_t)(ECX));
  /* 129c2ccb call dword ptr [0x129f02dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02dc))), 0x129c2cd1u);
  /* 129c2cd1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 129c2cd4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2cd8 je 0x129c2d1f */
  if (C.zf) goto L_129c2d1f;
  /* 129c2cda mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2cdd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 129c2ce0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 129c2ce2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 129c2ce5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 129c2ceb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2cee jne 0x129c2d00 */
  if (!C.zf) goto L_129c2d00;
  /* 129c2cf0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2cf3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 129c2cf6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 129c2cf8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2cfb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 129c2cfe jmp 0x129c2d1d */
  goto L_129c2d1d;
L_129c2d00:;
  /* 129c2d00 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 129c2d03 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 129c2d09 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2d0c jne 0x129c2d1d */
  if (!C.zf) goto L_129c2d1d;
  /* 129c2d0e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2d11 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 129c2d14 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 129c2d17 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2d1a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_129c2d1d:;
  /* 129c2d1d jmp 0x129c2d2e */
  goto L_129c2d2e;
L_129c2d1f:;
  /* 129c2d1f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2d22 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 129c2d25 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 129c2d28 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2d2b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_129c2d2e:;
  /* 129c2d2e jmp 0x129c2d3f */
  goto L_129c2d3f;
L_129c2d30:;
  /* 129c2d30 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2d33 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 129c2d36 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 129c2d39 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c2d3c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_129c2d3f:;
  /* 129c2d3f jmp 0x129c2c5e */
  goto L_129c2c5e;
L_129c2d44:;
  /* 129c2d44 mov eax, dword ptr [0x129eff9c] */
  EAX = (r32((uint32_t)(0x129eff9c)));
  /* 129c2d49 push eax */
  push32((uint32_t)(EAX));
  /* 129c2d4a call dword ptr [0x129f02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02d8))), 0x129c2d50u);
  /* 129c2d50 mov esp, ebp */
  ESP = (EBP);
  /* 129c2d52 pop ebp */
  EBP = (pop32());
  /* 129c2d53 ret  */
  ESPCHK(0x129c2a30u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x129c2d60 (155 bytes, 45 insns) */
void f_129c2d60(void) {
  FTRACE(0x129c2d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c2d60 push ebp */
  push32((uint32_t)(EBP));
  /* 129c2d61 mov ebp, esp */
  EBP = (ESP);
  /* 129c2d63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c2d66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 129c2d6d jmp 0x129c2d78 */
  goto L_129c2d78;
L_129c2d6f:;
  /* 129c2d6f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c2d72 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2d75 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_129c2d78:;
  /* 129c2d78 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2d7c jge 0x129c2df7 */
  if ((C.sf==C.of)) goto L_129c2df7;
  /* 129c2d7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c2d81 cmp dword ptr [ecx*4 + 0x129efe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x129efe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2d89 je 0x129c2df2 */
  if (C.zf) goto L_129c2df2;
  /* 129c2d8b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c2d8e mov eax, dword ptr [edx*4 + 0x129efe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x129efe60)));
  /* 129c2d95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c2d98 jmp 0x129c2da3 */
  goto L_129c2da3;
L_129c2d9a:;
  /* 129c2d9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c2d9d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2da0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129c2da3:;
  /* 129c2da3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c2da6 mov eax, dword ptr [edx*4 + 0x129efe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x129efe60)));
  /* 129c2dad add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2db2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2db5 jae 0x129c2dcf */
  if (!C.cf) goto L_129c2dcf;
  /* 129c2db7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c2dba cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2dbe je 0x129c2dcd */
  if (C.zf) goto L_129c2dcd;
  /* 129c2dc0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c2dc3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2dc6 push edx */
  push32((uint32_t)(EDX));
  /* 129c2dc7 call dword ptr [0x129f02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02e4))), 0x129c2dcdu);
L_129c2dcd:;
  /* 129c2dcd jmp 0x129c2d9a */
  goto L_129c2d9a;
L_129c2dcf:;
  /* 129c2dcf push 2 */
  push32((uint32_t)(0x2u));
  /* 129c2dd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c2dd4 mov ecx, dword ptr [eax*4 + 0x129efe60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x129efe60)));
  /* 129c2ddb push ecx */
  push32((uint32_t)(ECX));
  /* 129c2ddc call 0x129c38b0 */
  push32(0x129c2de1u); f_129c38b0();
  /* 129c2de1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2de4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c2de7 mov dword ptr [edx*4 + 0x129efe60], 0 */
  w32((uint32_t)(EDX*4 + 0x129efe60), (0x0u));
L_129c2df2:;
  /* 129c2df2 jmp 0x129c2d6f */
  goto L_129c2d6f;
L_129c2df7:;
  /* 129c2df7 mov esp, ebp */
  ESP = (EBP);
  /* 129c2df9 pop ebp */
  EBP = (pop32());
  /* 129c2dfa ret  */
  ESPCHK(0x129c2d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e00 @ 0x129c2e00 (29 bytes, 13 insns) */
void f_129c2e00(void) {
  FTRACE(0x129c2e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c2e00 push ebp */
  push32((uint32_t)(EBP));
  /* 129c2e01 mov ebp, esp */
  EBP = (ESP);
  /* 129c2e03 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c2e05 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c2e07 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c2e09 mov eax, dword ptr [0x129ee678] */
  EAX = (r32((uint32_t)(0x129ee678)));
  /* 129c2e0e push eax */
  push32((uint32_t)(EAX));
  /* 129c2e0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c2e12 push ecx */
  push32((uint32_t)(ECX));
  /* 129c2e13 call 0x129c2e70 */
  push32(0x129c2e18u); f_129c2e70();
  /* 129c2e18 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2e1b pop ebp */
  EBP = (pop32());
  /* 129c2e1c ret  */
  ESPCHK(0x129c2e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e20 @ 0x129c2e20 (35 bytes, 16 insns) */
void f_129c2e20(void) {
  FTRACE(0x129c2e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c2e20 push ebp */
  push32((uint32_t)(EBP));
  /* 129c2e21 mov ebp, esp */
  EBP = (ESP);
  /* 129c2e23 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c2e26 push eax */
  push32((uint32_t)(EAX));
  /* 129c2e27 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c2e2a push ecx */
  push32((uint32_t)(ECX));
  /* 129c2e2b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c2e2e push edx */
  push32((uint32_t)(EDX));
  /* 129c2e2f mov eax, dword ptr [0x129ee678] */
  EAX = (r32((uint32_t)(0x129ee678)));
  /* 129c2e34 push eax */
  push32((uint32_t)(EAX));
  /* 129c2e35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c2e38 push ecx */
  push32((uint32_t)(ECX));
  /* 129c2e39 call 0x129c2e70 */
  push32(0x129c2e3eu); f_129c2e70();
  /* 129c2e3e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2e41 pop ebp */
  EBP = (pop32());
  /* 129c2e42 ret  */
  ESPCHK(0x129c2e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e50 @ 0x129c2e50 (27 bytes, 13 insns) */
void f_129c2e50(void) {
  FTRACE(0x129c2e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c2e50 push ebp */
  push32((uint32_t)(EBP));
  /* 129c2e51 mov ebp, esp */
  EBP = (ESP);
  /* 129c2e53 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c2e55 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c2e57 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c2e59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c2e5c push eax */
  push32((uint32_t)(EAX));
  /* 129c2e5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c2e60 push ecx */
  push32((uint32_t)(ECX));
  /* 129c2e61 call 0x129c2e70 */
  push32(0x129c2e66u); f_129c2e70();
  /* 129c2e66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2e69 pop ebp */
  EBP = (pop32());
  /* 129c2e6a ret  */
  ESPCHK(0x129c2e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e70 @ 0x129c2e70 (94 bytes, 38 insns) */
void f_129c2e70(void) {
  FTRACE(0x129c2e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c2e70 push ebp */
  push32((uint32_t)(EBP));
  /* 129c2e71 mov ebp, esp */
  EBP = (ESP);
  /* 129c2e73 push ecx */
  push32((uint32_t)(ECX));
L_129c2e74:;
  /* 129c2e74 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c2e76 call 0x129c6820 */
  push32(0x129c2e7bu); f_129c6820();
  /* 129c2e7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2e7e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c2e81 push eax */
  push32((uint32_t)(EAX));
  /* 129c2e82 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c2e85 push ecx */
  push32((uint32_t)(ECX));
  /* 129c2e86 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c2e89 push edx */
  push32((uint32_t)(EDX));
  /* 129c2e8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c2e8d push eax */
  push32((uint32_t)(EAX));
  /* 129c2e8e call 0x129c2ef0 */
  push32(0x129c2e93u); f_129c2ef0();
  /* 129c2e93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2e96 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c2e99 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c2e9b call 0x129c68c0 */
  push32(0x129c2ea0u); f_129c68c0();
  /* 129c2ea0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2ea3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2ea7 jne 0x129c2eaf */
  if (!C.zf) goto L_129c2eaf;
  /* 129c2ea9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2ead jne 0x129c2eb4 */
  if (!C.zf) goto L_129c2eb4;
L_129c2eaf:;
  /* 129c2eaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c2eb2 jmp 0x129c2eca */
  goto L_129c2eca;
L_129c2eb4:;
  /* 129c2eb4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c2eb7 push ecx */
  push32((uint32_t)(ECX));
  /* 129c2eb8 call 0x129c6b60 */
  push32(0x129c2ebdu); f_129c6b60();
  /* 129c2ebd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2ec0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c2ec2 jne 0x129c2ec8 */
  if (!C.zf) goto L_129c2ec8;
  /* 129c2ec4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c2ec6 jmp 0x129c2eca */
  goto L_129c2eca;
L_129c2ec8:;
  /* 129c2ec8 jmp 0x129c2e74 */
  goto L_129c2e74;
L_129c2eca:;
  /* 129c2eca mov esp, ebp */
  ESP = (EBP);
  /* 129c2ecc pop ebp */
  EBP = (pop32());
  /* 129c2ecd ret  */
  ESPCHK(0x129c2e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ed0 @ 0x129c2ed0 (23 bytes, 11 insns) */
void f_129c2ed0(void) {
  FTRACE(0x129c2ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c2ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c2ed1 mov ebp, esp */
  EBP = (ESP);
  /* 129c2ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c2ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c2ed7 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c2ed9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c2edc push eax */
  push32((uint32_t)(EAX));
  /* 129c2edd call 0x129c2ef0 */
  push32(0x129c2ee2u); f_129c2ef0();
  /* 129c2ee2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2ee5 pop ebp */
  EBP = (pop32());
  /* 129c2ee6 ret  */
  ESPCHK(0x129c2ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ef0 @ 0x129c2ef0 (787 bytes, 254 insns) */
void f_129c2ef0(void) {
  FTRACE(0x129c2ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c2ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c2ef1 mov ebp, esp */
  EBP = (ESP);
  /* 129c2ef3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c2ef6 push ebx */
  push32((uint32_t)(EBX));
  /* 129c2ef7 push esi */
  push32((uint32_t)(ESI));
  /* 129c2ef8 push edi */
  push32((uint32_t)(EDI));
  /* 129c2ef9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 129c2f00 mov eax, dword ptr [0x129eca84] */
  EAX = (r32((uint32_t)(0x129eca84)));
  /* 129c2f05 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 129c2f08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c2f0a je 0x129c2f3c */
  if (C.zf) goto L_129c2f3c;
L_129c2f0c:;
  /* 129c2f0c call 0x129c3fc0 */
  push32(0x129c2f11u); f_129c3fc0();
  /* 129c2f11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c2f13 jne 0x129c2f36 */
  if (!C.zf) goto L_129c2f36;
  /* 129c2f15 push 0x129e94a8 */
  push32((uint32_t)(0x129e94a8u));
  /* 129c2f1a push 0 */
  push32((uint32_t)(0x0u));
  /* 129c2f1c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 129c2f21 push 0x129e949c */
  push32((uint32_t)(0x129e949cu));
  /* 129c2f26 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c2f28 call 0x129c1ee0 */
  push32(0x129c2f2du); f_129c1ee0();
  /* 129c2f2d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2f30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2f33 jne 0x129c2f36 */
  if (!C.zf) goto L_129c2f36;
  /* 129c2f35 int3  */
  x86_unimpl("int3 @ 0x129c2f35");
L_129c2f36:;
  /* 129c2f36 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c2f38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c2f3a jne 0x129c2f0c */
  if (!C.zf) goto L_129c2f0c;
L_129c2f3c:;
  /* 129c2f3c mov edx, dword ptr [0x129eca88] */
  EDX = (r32((uint32_t)(0x129eca88)));
  /* 129c2f42 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 129c2f45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c2f48 cmp eax, dword ptr [0x129eca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129eca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2f4e jne 0x129c2f51 */
  if (!C.zf) goto L_129c2f51;
  /* 129c2f50 int3  */
  x86_unimpl("int3 @ 0x129c2f50");
L_129c2f51:;
  /* 129c2f51 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c2f54 push ecx */
  push32((uint32_t)(ECX));
  /* 129c2f55 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c2f58 push edx */
  push32((uint32_t)(EDX));
  /* 129c2f59 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c2f5c push eax */
  push32((uint32_t)(EAX));
  /* 129c2f5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c2f60 push ecx */
  push32((uint32_t)(ECX));
  /* 129c2f61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c2f64 push edx */
  push32((uint32_t)(EDX));
  /* 129c2f65 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c2f67 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c2f69 call dword ptr [0x129ecc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ecc90))), 0x129c2f6fu);
  /* 129c2f6f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2f72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c2f74 jne 0x129c2fd4 */
  if (!C.zf) goto L_129c2fd4;
  /* 129c2f76 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2f7a je 0x129c2fa7 */
  if (C.zf) goto L_129c2fa7;
L_129c2f7c:;
  /* 129c2f7c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c2f7f push eax */
  push32((uint32_t)(EAX));
  /* 129c2f80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c2f83 push ecx */
  push32((uint32_t)(ECX));
  /* 129c2f84 push 0x129e9464 */
  push32((uint32_t)(0x129e9464u));
  /* 129c2f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c2f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 129c2f8d push 0 */
  push32((uint32_t)(0x0u));
  /* 129c2f8f push 0 */
  push32((uint32_t)(0x0u));
  /* 129c2f91 call 0x129c1ee0 */
  push32(0x129c2f96u); f_129c1ee0();
  /* 129c2f96 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2f99 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2f9c jne 0x129c2f9f */
  if (!C.zf) goto L_129c2f9f;
  /* 129c2f9e int3  */
  x86_unimpl("int3 @ 0x129c2f9e");
L_129c2f9f:;
  /* 129c2f9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c2fa1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c2fa3 jne 0x129c2f7c */
  if (!C.zf) goto L_129c2f7c;
  /* 129c2fa5 jmp 0x129c2fcd */
  goto L_129c2fcd;
L_129c2fa7:;
  /* 129c2fa7 push 0x129e9440 */
  push32((uint32_t)(0x129e9440u));
  /* 129c2fac push 0x129e943c */
  push32((uint32_t)(0x129e943cu));
  /* 129c2fb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c2fb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c2fb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c2fb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c2fb9 call 0x129c1ee0 */
  push32(0x129c2fbeu); f_129c1ee0();
  /* 129c2fbe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c2fc1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2fc4 jne 0x129c2fc7 */
  if (!C.zf) goto L_129c2fc7;
  /* 129c2fc6 int3  */
  x86_unimpl("int3 @ 0x129c2fc6");
L_129c2fc7:;
  /* 129c2fc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c2fc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c2fcb jne 0x129c2fa7 */
  if (!C.zf) goto L_129c2fa7;
L_129c2fcd:;
  /* 129c2fcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c2fcf jmp 0x129c31fc */
  goto L_129c31fc;
L_129c2fd4:;
  /* 129c2fd4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c2fd7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 129c2fdd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2fe0 je 0x129c2ff6 */
  if (C.zf) goto L_129c2ff6;
  /* 129c2fe2 mov edx, dword ptr [0x129eca84] */
  EDX = (r32((uint32_t)(0x129eca84)));
  /* 129c2fe8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 129c2feb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c2fed jne 0x129c2ff6 */
  if (!C.zf) goto L_129c2ff6;
  /* 129c2fef mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_129c2ff6:;
  /* 129c2ff6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c2ffa ja 0x129c3007 */
  if ((!C.cf&&!C.zf)) goto L_129c3007;
  /* 129c2ffc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c2fff add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3002 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3005 jbe 0x129c3033 */
  if ((C.cf||C.zf)) goto L_129c3033;
L_129c3007:;
  /* 129c3007 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c300a push ecx */
  push32((uint32_t)(ECX));
  /* 129c300b push 0x129e9418 */
  push32((uint32_t)(0x129e9418u));
  /* 129c3010 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3012 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3014 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3016 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c3018 call 0x129c1ee0 */
  push32(0x129c301du); f_129c1ee0();
  /* 129c301d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3020 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3023 jne 0x129c3026 */
  if (!C.zf) goto L_129c3026;
  /* 129c3025 int3  */
  x86_unimpl("int3 @ 0x129c3025");
L_129c3026:;
  /* 129c3026 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c3028 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c302a jne 0x129c3007 */
  if (!C.zf) goto L_129c3007;
  /* 129c302c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c302e jmp 0x129c31fc */
  goto L_129c31fc;
L_129c3033:;
  /* 129c3033 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c3036 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c303b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c303e je 0x129c3080 */
  if (C.zf) goto L_129c3080;
  /* 129c3040 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3044 je 0x129c3080 */
  if (C.zf) goto L_129c3080;
  /* 129c3046 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c3049 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 129c304f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3052 je 0x129c3080 */
  if (C.zf) goto L_129c3080;
  /* 129c3054 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3058 je 0x129c3080 */
  if (C.zf) goto L_129c3080;
L_129c305a:;
  /* 129c305a push 0x129e93e4 */
  push32((uint32_t)(0x129e93e4u));
  /* 129c305f push 0x129e943c */
  push32((uint32_t)(0x129e943cu));
  /* 129c3064 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3066 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3068 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c306a push 1 */
  push32((uint32_t)(0x1u));
  /* 129c306c call 0x129c1ee0 */
  push32(0x129c3071u); f_129c1ee0();
  /* 129c3071 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3074 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3077 jne 0x129c307a */
  if (!C.zf) goto L_129c307a;
  /* 129c3079 int3  */
  x86_unimpl("int3 @ 0x129c3079");
L_129c307a:;
  /* 129c307a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c307c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c307e jne 0x129c305a */
  if (!C.zf) goto L_129c305a;
L_129c3080:;
  /* 129c3080 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c3083 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3086 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 129c3089 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c308c push ecx */
  push32((uint32_t)(ECX));
  /* 129c308d call 0x129c6c70 */
  push32(0x129c3092u); f_129c6c70();
  /* 129c3092 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3095 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c3098 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c309c jne 0x129c30a5 */
  if (!C.zf) goto L_129c30a5;
  /* 129c309e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c30a0 jmp 0x129c31fc */
  goto L_129c31fc;
L_129c30a5:;
  /* 129c30a5 mov edx, dword ptr [0x129eca88] */
  EDX = (r32((uint32_t)(0x129eca88)));
  /* 129c30ab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c30ae mov dword ptr [0x129eca88], edx */
  w32((uint32_t)(0x129eca88), (EDX));
  /* 129c30b4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c30b8 je 0x129c3103 */
  if (C.zf) goto L_129c3103;
  /* 129c30ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c30bd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 129c30c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c30c6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 129c30cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c30d0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 129c30d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c30da mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 129c30e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c30e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c30e7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 129c30ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c30ed mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 129c30f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c30f7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 129c30fe jmp 0x129c31a3 */
  goto L_129c31a3;
L_129c3103:;
  /* 129c3103 mov edx, dword ptr [0x129ee4d8] */
  EDX = (r32((uint32_t)(0x129ee4d8)));
  /* 129c3109 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c310c mov dword ptr [0x129ee4d8], edx */
  w32((uint32_t)(0x129ee4d8), (EDX));
  /* 129c3112 mov eax, dword ptr [0x129ee4e0] */
  EAX = (r32((uint32_t)(0x129ee4e0)));
  /* 129c3117 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c311a mov dword ptr [0x129ee4e0], eax */
  w32((uint32_t)(0x129ee4e0), (EAX));
  /* 129c311f mov ecx, dword ptr [0x129ee4e0] */
  ECX = (r32((uint32_t)(0x129ee4e0)));
  /* 129c3125 cmp ecx, dword ptr [0x129ee4e4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129ee4e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c312b jbe 0x129c3139 */
  if ((C.cf||C.zf)) goto L_129c3139;
  /* 129c312d mov edx, dword ptr [0x129ee4e0] */
  EDX = (r32((uint32_t)(0x129ee4e0)));
  /* 129c3133 mov dword ptr [0x129ee4e4], edx */
  w32((uint32_t)(0x129ee4e4), (EDX));
L_129c3139:;
  /* 129c3139 cmp dword ptr [0x129ee4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3140 je 0x129c314f */
  if (C.zf) goto L_129c314f;
  /* 129c3142 mov eax, dword ptr [0x129ee4dc] */
  EAX = (r32((uint32_t)(0x129ee4dc)));
  /* 129c3147 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c314a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 129c314d jmp 0x129c3158 */
  goto L_129c3158;
L_129c314f:;
  /* 129c314f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3152 mov dword ptr [0x129ee4d4], edx */
  w32((uint32_t)(0x129ee4d4), (EDX));
L_129c3158:;
  /* 129c3158 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c315b mov ecx, dword ptr [0x129ee4dc] */
  ECX = (r32((uint32_t)(0x129ee4dc)));
  /* 129c3161 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 129c3163 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3166 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 129c316d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3170 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c3173 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 129c3176 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3179 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c317c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 129c317f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3182 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c3185 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 129c3188 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c318b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c318e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 129c3191 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3194 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c3197 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 129c319a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c319d mov dword ptr [0x129ee4dc], ecx */
  w32((uint32_t)(0x129ee4dc), (ECX));
L_129c31a3:;
  /* 129c31a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 129c31a5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c31a7 mov dl, byte ptr [0x129eca90] */
  DL = (r8((uint32_t)(0x129eca90)));
  /* 129c31ad push edx */
  push32((uint32_t)(EDX));
  /* 129c31ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c31b1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c31b4 push eax */
  push32((uint32_t)(EAX));
  /* 129c31b5 call 0x129c6b90 */
  push32(0x129c31bau); f_129c6b90();
  /* 129c31ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c31bd push 4 */
  push32((uint32_t)(0x4u));
  /* 129c31bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c31c1 mov cl, byte ptr [0x129eca90] */
  CL = (r8((uint32_t)(0x129eca90)));
  /* 129c31c7 push ecx */
  push32((uint32_t)(ECX));
  /* 129c31c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c31cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c31ce lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 129c31d2 push ecx */
  push32((uint32_t)(ECX));
  /* 129c31d3 call 0x129c6b90 */
  push32(0x129c31d8u); f_129c6b90();
  /* 129c31d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c31db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c31de push edx */
  push32((uint32_t)(EDX));
  /* 129c31df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c31e1 mov al, byte ptr [0x129eca92] */
  AL = (r8((uint32_t)(0x129eca92)));
  /* 129c31e6 push eax */
  push32((uint32_t)(EAX));
  /* 129c31e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c31ea add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c31ed push ecx */
  push32((uint32_t)(ECX));
  /* 129c31ee call 0x129c6b90 */
  push32(0x129c31f3u); f_129c6b90();
  /* 129c31f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c31f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c31f9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_129c31fc:;
  /* 129c31fc pop edi */
  EDI = (pop32());
  /* 129c31fd pop esi */
  ESI = (pop32());
  /* 129c31fe pop ebx */
  EBX = (pop32());
  /* 129c31ff mov esp, ebp */
  ESP = (EBP);
  /* 129c3201 pop ebp */
  EBP = (pop32());
  /* 129c3202 ret  */
  ESPCHK(0x129c2ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003210 @ 0x129c3210 (27 bytes, 13 insns) */
void f_129c3210(void) {
  FTRACE(0x129c3210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c3210 push ebp */
  push32((uint32_t)(EBP));
  /* 129c3211 mov ebp, esp */
  EBP = (ESP);
  /* 129c3213 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3215 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3217 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c3219 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c321c push eax */
  push32((uint32_t)(EAX));
  /* 129c321d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c3220 push ecx */
  push32((uint32_t)(ECX));
  /* 129c3221 call 0x129c3230 */
  push32(0x129c3226u); f_129c3230();
  /* 129c3226 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3229 pop ebp */
  EBP = (pop32());
  /* 129c322a ret  */
  ESPCHK(0x129c3210u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x129c3230 (96 bytes, 37 insns) */
void f_129c3230(void) {
  FTRACE(0x129c3230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c3230 push ebp */
  push32((uint32_t)(EBP));
  /* 129c3231 mov ebp, esp */
  EBP = (ESP);
  /* 129c3233 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c3236 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c3239 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c323d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 129c3240 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c3243 push ecx */
  push32((uint32_t)(ECX));
  /* 129c3244 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c3247 push edx */
  push32((uint32_t)(EDX));
  /* 129c3248 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c324b push eax */
  push32((uint32_t)(EAX));
  /* 129c324c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c324f push ecx */
  push32((uint32_t)(ECX));
  /* 129c3250 call 0x129c2e20 */
  push32(0x129c3255u); f_129c2e20();
  /* 129c3255 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3258 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129c325b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c325f je 0x129c3289 */
  if (C.zf) goto L_129c3289;
  /* 129c3261 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c3264 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 129c3267 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c326a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c326d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129c3270:;
  /* 129c3270 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c3273 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3276 jae 0x129c3289 */
  if (!C.cf) goto L_129c3289;
  /* 129c3278 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c327b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 129c327e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c3281 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3284 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129c3287 jmp 0x129c3270 */
  goto L_129c3270;
L_129c3289:;
  /* 129c3289 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c328c mov esp, ebp */
  ESP = (EBP);
  /* 129c328e pop ebp */
  EBP = (pop32());
  /* 129c328f ret  */
  ESPCHK(0x129c3230u, _esp0);
  ESP += 4; return;
}

/* FUN_10003290 @ 0x129c3290 (27 bytes, 13 insns) */
void f_129c3290(void) {
  FTRACE(0x129c3290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c3290 push ebp */
  push32((uint32_t)(EBP));
  /* 129c3291 mov ebp, esp */
  EBP = (ESP);
  /* 129c3293 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3295 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3297 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c3299 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c329c push eax */
  push32((uint32_t)(EAX));
  /* 129c329d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c32a0 push ecx */
  push32((uint32_t)(ECX));
  /* 129c32a1 call 0x129c32b0 */
  push32(0x129c32a6u); f_129c32b0();
  /* 129c32a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c32a9 pop ebp */
  EBP = (pop32());
  /* 129c32aa ret  */
  ESPCHK(0x129c3290u, _esp0);
  ESP += 4; return;
}

/* FUN_100032b0 @ 0x129c32b0 (64 bytes, 27 insns) */
void f_129c32b0(void) {
  FTRACE(0x129c32b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c32b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c32b1 mov ebp, esp */
  EBP = (ESP);
  /* 129c32b3 push ecx */
  push32((uint32_t)(ECX));
  /* 129c32b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c32b6 call 0x129c6820 */
  push32(0x129c32bbu); f_129c6820();
  /* 129c32bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c32be push 1 */
  push32((uint32_t)(0x1u));
  /* 129c32c0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c32c3 push eax */
  push32((uint32_t)(EAX));
  /* 129c32c4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c32c7 push ecx */
  push32((uint32_t)(ECX));
  /* 129c32c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c32cb push edx */
  push32((uint32_t)(EDX));
  /* 129c32cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c32cf push eax */
  push32((uint32_t)(EAX));
  /* 129c32d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c32d3 push ecx */
  push32((uint32_t)(ECX));
  /* 129c32d4 call 0x129c32f0 */
  push32(0x129c32d9u); f_129c32f0();
  /* 129c32d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c32dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c32df push 9 */
  push32((uint32_t)(0x9u));
  /* 129c32e1 call 0x129c68c0 */
  push32(0x129c32e6u); f_129c68c0();
  /* 129c32e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c32e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c32ec mov esp, ebp */
  ESP = (EBP);
  /* 129c32ee pop ebp */
  EBP = (pop32());
  /* 129c32ef ret  */
  ESPCHK(0x129c32b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032f0 @ 0x129c32f0 (1297 bytes, 431 insns) */
void f_129c32f0(void) {
  FTRACE(0x129c32f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c32f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c32f1 mov ebp, esp */
  EBP = (ESP);
  /* 129c32f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c32f6 push ebx */
  push32((uint32_t)(EBX));
  /* 129c32f7 push esi */
  push32((uint32_t)(ESI));
  /* 129c32f8 push edi */
  push32((uint32_t)(EDI));
  /* 129c32f9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 129c3300 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3304 jne 0x129c3323 */
  if (!C.zf) goto L_129c3323;
  /* 129c3306 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c3309 push eax */
  push32((uint32_t)(EAX));
  /* 129c330a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c330d push ecx */
  push32((uint32_t)(ECX));
  /* 129c330e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c3311 push edx */
  push32((uint32_t)(EDX));
  /* 129c3312 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c3315 push eax */
  push32((uint32_t)(EAX));
  /* 129c3316 call 0x129c2e20 */
  push32(0x129c331bu); f_129c2e20();
  /* 129c331b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c331e jmp 0x129c37fa */
  goto L_129c37fa;
L_129c3323:;
  /* 129c3323 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3327 je 0x129c3346 */
  if (C.zf) goto L_129c3346;
  /* 129c3329 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c332d jne 0x129c3346 */
  if (!C.zf) goto L_129c3346;
  /* 129c332f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c3332 push ecx */
  push32((uint32_t)(ECX));
  /* 129c3333 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c3336 push edx */
  push32((uint32_t)(EDX));
  /* 129c3337 call 0x129c38b0 */
  push32(0x129c333cu); f_129c38b0();
  /* 129c333c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c333f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c3341 jmp 0x129c37fa */
  goto L_129c37fa;
L_129c3346:;
  /* 129c3346 mov eax, dword ptr [0x129eca84] */
  EAX = (r32((uint32_t)(0x129eca84)));
  /* 129c334b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 129c334e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c3350 je 0x129c3382 */
  if (C.zf) goto L_129c3382;
L_129c3352:;
  /* 129c3352 call 0x129c3fc0 */
  push32(0x129c3357u); f_129c3fc0();
  /* 129c3357 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c3359 jne 0x129c337c */
  if (!C.zf) goto L_129c337c;
  /* 129c335b push 0x129e94a8 */
  push32((uint32_t)(0x129e94a8u));
  /* 129c3360 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3362 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 129c3367 push 0x129e949c */
  push32((uint32_t)(0x129e949cu));
  /* 129c336c push 2 */
  push32((uint32_t)(0x2u));
  /* 129c336e call 0x129c1ee0 */
  push32(0x129c3373u); f_129c1ee0();
  /* 129c3373 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3376 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3379 jne 0x129c337c */
  if (!C.zf) goto L_129c337c;
  /* 129c337b int3  */
  x86_unimpl("int3 @ 0x129c337b");
L_129c337c:;
  /* 129c337c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c337e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c3380 jne 0x129c3352 */
  if (!C.zf) goto L_129c3352;
L_129c3382:;
  /* 129c3382 mov edx, dword ptr [0x129eca88] */
  EDX = (r32((uint32_t)(0x129eca88)));
  /* 129c3388 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 129c338b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c338e cmp eax, dword ptr [0x129eca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129eca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3394 jne 0x129c3397 */
  if (!C.zf) goto L_129c3397;
  /* 129c3396 int3  */
  x86_unimpl("int3 @ 0x129c3396");
L_129c3397:;
  /* 129c3397 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c339a push ecx */
  push32((uint32_t)(ECX));
  /* 129c339b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c339e push edx */
  push32((uint32_t)(EDX));
  /* 129c339f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c33a2 push eax */
  push32((uint32_t)(EAX));
  /* 129c33a3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c33a6 push ecx */
  push32((uint32_t)(ECX));
  /* 129c33a7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c33aa push edx */
  push32((uint32_t)(EDX));
  /* 129c33ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c33ae push eax */
  push32((uint32_t)(EAX));
  /* 129c33af push 2 */
  push32((uint32_t)(0x2u));
  /* 129c33b1 call dword ptr [0x129ecc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ecc90))), 0x129c33b7u);
  /* 129c33b7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c33ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c33bc jne 0x129c341c */
  if (!C.zf) goto L_129c341c;
  /* 129c33be cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c33c2 je 0x129c33ef */
  if (C.zf) goto L_129c33ef;
L_129c33c4:;
  /* 129c33c4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c33c7 push ecx */
  push32((uint32_t)(ECX));
  /* 129c33c8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c33cb push edx */
  push32((uint32_t)(EDX));
  /* 129c33cc push 0x129e9624 */
  push32((uint32_t)(0x129e9624u));
  /* 129c33d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c33d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c33d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c33d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c33d9 call 0x129c1ee0 */
  push32(0x129c33deu); f_129c1ee0();
  /* 129c33de add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c33e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c33e4 jne 0x129c33e7 */
  if (!C.zf) goto L_129c33e7;
  /* 129c33e6 int3  */
  x86_unimpl("int3 @ 0x129c33e6");
L_129c33e7:;
  /* 129c33e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c33e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c33eb jne 0x129c33c4 */
  if (!C.zf) goto L_129c33c4;
  /* 129c33ed jmp 0x129c3415 */
  goto L_129c3415;
L_129c33ef:;
  /* 129c33ef push 0x129e9600 */
  push32((uint32_t)(0x129e9600u));
  /* 129c33f4 push 0x129e943c */
  push32((uint32_t)(0x129e943cu));
  /* 129c33f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c33fb push 0 */
  push32((uint32_t)(0x0u));
  /* 129c33fd push 0 */
  push32((uint32_t)(0x0u));
  /* 129c33ff push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3401 call 0x129c1ee0 */
  push32(0x129c3406u); f_129c1ee0();
  /* 129c3406 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3409 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c340c jne 0x129c340f */
  if (!C.zf) goto L_129c340f;
  /* 129c340e int3  */
  x86_unimpl("int3 @ 0x129c340e");
L_129c340f:;
  /* 129c340f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c3411 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c3413 jne 0x129c33ef */
  if (!C.zf) goto L_129c33ef;
L_129c3415:;
  /* 129c3415 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c3417 jmp 0x129c37fa */
  goto L_129c37fa;
L_129c341c:;
  /* 129c341c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3420 jbe 0x129c344e */
  if ((C.cf||C.zf)) goto L_129c344e;
L_129c3422:;
  /* 129c3422 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c3425 push edx */
  push32((uint32_t)(EDX));
  /* 129c3426 push 0x129e95d0 */
  push32((uint32_t)(0x129e95d0u));
  /* 129c342b push 0 */
  push32((uint32_t)(0x0u));
  /* 129c342d push 0 */
  push32((uint32_t)(0x0u));
  /* 129c342f push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3431 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c3433 call 0x129c1ee0 */
  push32(0x129c3438u); f_129c1ee0();
  /* 129c3438 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c343b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c343e jne 0x129c3441 */
  if (!C.zf) goto L_129c3441;
  /* 129c3440 int3  */
  x86_unimpl("int3 @ 0x129c3440");
L_129c3441:;
  /* 129c3441 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c3443 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c3445 jne 0x129c3422 */
  if (!C.zf) goto L_129c3422;
  /* 129c3447 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c3449 jmp 0x129c37fa */
  goto L_129c37fa;
L_129c344e:;
  /* 129c344e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3452 je 0x129c3496 */
  if (C.zf) goto L_129c3496;
  /* 129c3454 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c3457 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 129c345d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3460 je 0x129c3496 */
  if (C.zf) goto L_129c3496;
  /* 129c3462 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c3465 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129c346b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c346e je 0x129c3496 */
  if (C.zf) goto L_129c3496;
L_129c3470:;
  /* 129c3470 push 0x129e93e4 */
  push32((uint32_t)(0x129e93e4u));
  /* 129c3475 push 0x129e943c */
  push32((uint32_t)(0x129e943cu));
  /* 129c347a push 0 */
  push32((uint32_t)(0x0u));
  /* 129c347c push 0 */
  push32((uint32_t)(0x0u));
  /* 129c347e push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3480 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c3482 call 0x129c1ee0 */
  push32(0x129c3487u); f_129c1ee0();
  /* 129c3487 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c348a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c348d jne 0x129c3490 */
  if (!C.zf) goto L_129c3490;
  /* 129c348f int3  */
  x86_unimpl("int3 @ 0x129c348f");
L_129c3490:;
  /* 129c3490 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c3492 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c3494 jne 0x129c3470 */
  if (!C.zf) goto L_129c3470;
L_129c3496:;
  /* 129c3496 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c3499 push ecx */
  push32((uint32_t)(ECX));
  /* 129c349a call 0x129c4420 */
  push32(0x129c349fu); f_129c4420();
  /* 129c349f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c34a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c34a4 jne 0x129c34c7 */
  if (!C.zf) goto L_129c34c7;
  /* 129c34a6 push 0x129e95ac */
  push32((uint32_t)(0x129e95acu));
  /* 129c34ab push 0 */
  push32((uint32_t)(0x0u));
  /* 129c34ad push 0x261 */
  push32((uint32_t)(0x261u));
  /* 129c34b2 push 0x129e949c */
  push32((uint32_t)(0x129e949cu));
  /* 129c34b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c34b9 call 0x129c1ee0 */
  push32(0x129c34beu); f_129c1ee0();
  /* 129c34be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c34c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c34c4 jne 0x129c34c7 */
  if (!C.zf) goto L_129c34c7;
  /* 129c34c6 int3  */
  x86_unimpl("int3 @ 0x129c34c6");
L_129c34c7:;
  /* 129c34c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c34c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c34cb jne 0x129c3496 */
  if (!C.zf) goto L_129c3496;
  /* 129c34cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c34d0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c34d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129c34d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c34d9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c34dd jne 0x129c34e6 */
  if (!C.zf) goto L_129c34e6;
  /* 129c34df mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_129c34e6:;
  /* 129c34e6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c34ea je 0x129c352a */
  if (C.zf) goto L_129c352a;
L_129c34ec:;
  /* 129c34ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c34ef cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c34f6 jne 0x129c3501 */
  if (!C.zf) goto L_129c3501;
  /* 129c34f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c34fb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c34ff je 0x129c3522 */
  if (C.zf) goto L_129c3522;
L_129c3501:;
  /* 129c3501 push 0x129e9564 */
  push32((uint32_t)(0x129e9564u));
  /* 129c3506 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3508 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 129c350d push 0x129e949c */
  push32((uint32_t)(0x129e949cu));
  /* 129c3512 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c3514 call 0x129c1ee0 */
  push32(0x129c3519u); f_129c1ee0();
  /* 129c3519 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c351c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c351f jne 0x129c3522 */
  if (!C.zf) goto L_129c3522;
  /* 129c3521 int3  */
  x86_unimpl("int3 @ 0x129c3521");
L_129c3522:;
  /* 129c3522 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c3524 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c3526 jne 0x129c34ec */
  if (!C.zf) goto L_129c34ec;
  /* 129c3528 jmp 0x129c358e */
  goto L_129c358e;
L_129c352a:;
  /* 129c352a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c352d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129c3530 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c3535 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3538 jne 0x129c354f */
  if (!C.zf) goto L_129c354f;
  /* 129c353a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c353d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 129c3543 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3546 jne 0x129c354f */
  if (!C.zf) goto L_129c354f;
  /* 129c3548 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_129c354f:;
  /* 129c354f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c3552 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129c3555 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c355a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c355d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 129c3563 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3565 je 0x129c3588 */
  if (C.zf) goto L_129c3588;
  /* 129c3567 push 0x129e9528 */
  push32((uint32_t)(0x129e9528u));
  /* 129c356c push 0 */
  push32((uint32_t)(0x0u));
  /* 129c356e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 129c3573 push 0x129e949c */
  push32((uint32_t)(0x129e949cu));
  /* 129c3578 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c357a call 0x129c1ee0 */
  push32(0x129c357fu); f_129c1ee0();
  /* 129c357f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3582 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3585 jne 0x129c3588 */
  if (!C.zf) goto L_129c3588;
  /* 129c3587 int3  */
  x86_unimpl("int3 @ 0x129c3587");
L_129c3588:;
  /* 129c3588 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c358a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c358c jne 0x129c354f */
  if (!C.zf) goto L_129c354f;
L_129c358e:;
  /* 129c358e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3592 je 0x129c35b9 */
  if (C.zf) goto L_129c35b9;
  /* 129c3594 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c3597 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c359a push eax */
  push32((uint32_t)(EAX));
  /* 129c359b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c359e push ecx */
  push32((uint32_t)(ECX));
  /* 129c359f call 0x129c6da0 */
  push32(0x129c35a4u); f_129c6da0();
  /* 129c35a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c35a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129c35aa cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c35ae jne 0x129c35b7 */
  if (!C.zf) goto L_129c35b7;
  /* 129c35b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c35b2 jmp 0x129c37fa */
  goto L_129c37fa;
L_129c35b7:;
  /* 129c35b7 jmp 0x129c35dc */
  goto L_129c35dc;
L_129c35b9:;
  /* 129c35b9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c35bc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c35bf push edx */
  push32((uint32_t)(EDX));
  /* 129c35c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c35c3 push eax */
  push32((uint32_t)(EAX));
  /* 129c35c4 call 0x129c6cf0 */
  push32(0x129c35c9u); f_129c6cf0();
  /* 129c35c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c35cc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129c35cf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c35d3 jne 0x129c35dc */
  if (!C.zf) goto L_129c35dc;
  /* 129c35d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c35d7 jmp 0x129c37fa */
  goto L_129c37fa;
L_129c35dc:;
  /* 129c35dc mov ecx, dword ptr [0x129eca88] */
  ECX = (r32((uint32_t)(0x129eca88)));
  /* 129c35e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c35e5 mov dword ptr [0x129eca88], ecx */
  w32((uint32_t)(0x129eca88), (ECX));
  /* 129c35eb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c35ef jne 0x129c3647 */
  if (!C.zf) goto L_129c3647;
  /* 129c35f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c35f4 mov eax, dword ptr [0x129ee4d8] */
  EAX = (r32((uint32_t)(0x129ee4d8)));
  /* 129c35f9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c35fc mov dword ptr [0x129ee4d8], eax */
  w32((uint32_t)(0x129ee4d8), (EAX));
  /* 129c3601 mov ecx, dword ptr [0x129ee4d8] */
  ECX = (r32((uint32_t)(0x129ee4d8)));
  /* 129c3607 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c360a mov dword ptr [0x129ee4d8], ecx */
  w32((uint32_t)(0x129ee4d8), (ECX));
  /* 129c3610 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c3613 mov eax, dword ptr [0x129ee4e0] */
  EAX = (r32((uint32_t)(0x129ee4e0)));
  /* 129c3618 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c361b mov dword ptr [0x129ee4e0], eax */
  w32((uint32_t)(0x129ee4e0), (EAX));
  /* 129c3620 mov ecx, dword ptr [0x129ee4e0] */
  ECX = (r32((uint32_t)(0x129ee4e0)));
  /* 129c3626 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3629 mov dword ptr [0x129ee4e0], ecx */
  w32((uint32_t)(0x129ee4e0), (ECX));
  /* 129c362f mov edx, dword ptr [0x129ee4e0] */
  EDX = (r32((uint32_t)(0x129ee4e0)));
  /* 129c3635 cmp edx, dword ptr [0x129ee4e4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x129ee4e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c363b jbe 0x129c3647 */
  if ((C.cf||C.zf)) goto L_129c3647;
  /* 129c363d mov eax, dword ptr [0x129ee4e0] */
  EAX = (r32((uint32_t)(0x129ee4e0)));
  /* 129c3642 mov dword ptr [0x129ee4e4], eax */
  w32((uint32_t)(0x129ee4e4), (EAX));
L_129c3647:;
  /* 129c3647 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c364a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c364d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129c3650 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c3653 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c3656 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3659 jbe 0x129c367f */
  if ((C.cf||C.zf)) goto L_129c367f;
  /* 129c365b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c365e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c3661 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c3664 push edx */
  push32((uint32_t)(EDX));
  /* 129c3665 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c3667 mov al, byte ptr [0x129eca92] */
  AL = (r8((uint32_t)(0x129eca92)));
  /* 129c366c push eax */
  push32((uint32_t)(EAX));
  /* 129c366d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c3670 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3673 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3676 push edx */
  push32((uint32_t)(EDX));
  /* 129c3677 call 0x129c6b90 */
  push32(0x129c367cu); f_129c6b90();
  /* 129c367c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c367f:;
  /* 129c367f push 4 */
  push32((uint32_t)(0x4u));
  /* 129c3681 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c3683 mov al, byte ptr [0x129eca90] */
  AL = (r8((uint32_t)(0x129eca90)));
  /* 129c3688 push eax */
  push32((uint32_t)(EAX));
  /* 129c3689 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c368c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c368f push ecx */
  push32((uint32_t)(ECX));
  /* 129c3690 call 0x129c6b90 */
  push32(0x129c3695u); f_129c6b90();
  /* 129c3695 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3698 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c369c jne 0x129c36b9 */
  if (!C.zf) goto L_129c36b9;
  /* 129c369e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c36a1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c36a4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 129c36a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c36aa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c36ad mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 129c36b0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c36b3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c36b6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_129c36b9:;
  /* 129c36b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c36bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c36bf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_129c36c2:;
  /* 129c36c2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c36c6 jne 0x129c36f7 */
  if (!C.zf) goto L_129c36f7;
  /* 129c36c8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c36cc jne 0x129c36d6 */
  if (!C.zf) goto L_129c36d6;
  /* 129c36ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c36d1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c36d4 je 0x129c36f7 */
  if (C.zf) goto L_129c36f7;
L_129c36d6:;
  /* 129c36d6 push 0x129e94f4 */
  push32((uint32_t)(0x129e94f4u));
  /* 129c36db push 0 */
  push32((uint32_t)(0x0u));
  /* 129c36dd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 129c36e2 push 0x129e949c */
  push32((uint32_t)(0x129e949cu));
  /* 129c36e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c36e9 call 0x129c1ee0 */
  push32(0x129c36eeu); f_129c1ee0();
  /* 129c36ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c36f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c36f4 jne 0x129c36f7 */
  if (!C.zf) goto L_129c36f7;
  /* 129c36f6 int3  */
  x86_unimpl("int3 @ 0x129c36f6");
L_129c36f7:;
  /* 129c36f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c36f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c36fb jne 0x129c36c2 */
  if (!C.zf) goto L_129c36c2;
  /* 129c36fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c3700 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3703 je 0x129c370b */
  if (C.zf) goto L_129c370b;
  /* 129c3705 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3709 je 0x129c3713 */
  if (C.zf) goto L_129c3713;
L_129c370b:;
  /* 129c370b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c370e jmp 0x129c37fa */
  goto L_129c37fa;
L_129c3713:;
  /* 129c3713 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c3716 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3719 je 0x129c372b */
  if (C.zf) goto L_129c372b;
  /* 129c371b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c371e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129c3720 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c3723 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129c3726 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 129c3729 jmp 0x129c3767 */
  goto L_129c3767;
L_129c372b:;
  /* 129c372b mov eax, dword ptr [0x129ee4d4] */
  EAX = (r32((uint32_t)(0x129ee4d4)));
  /* 129c3730 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3733 je 0x129c3756 */
  if (C.zf) goto L_129c3756;
  /* 129c3735 push 0x129e94d8 */
  push32((uint32_t)(0x129e94d8u));
  /* 129c373a push 0 */
  push32((uint32_t)(0x0u));
  /* 129c373c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 129c3741 push 0x129e949c */
  push32((uint32_t)(0x129e949cu));
  /* 129c3746 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c3748 call 0x129c1ee0 */
  push32(0x129c374du); f_129c1ee0();
  /* 129c374d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3750 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3753 jne 0x129c3756 */
  if (!C.zf) goto L_129c3756;
  /* 129c3755 int3  */
  x86_unimpl("int3 @ 0x129c3755");
L_129c3756:;
  /* 129c3756 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c3758 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c375a jne 0x129c372b */
  if (!C.zf) goto L_129c372b;
  /* 129c375c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c375f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 129c3762 mov dword ptr [0x129ee4d4], eax */
  w32((uint32_t)(0x129ee4d4), (EAX));
L_129c3767:;
  /* 129c3767 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c376a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c376e je 0x129c377f */
  if (C.zf) goto L_129c377f;
  /* 129c3770 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c3773 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 129c3776 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c3779 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129c377b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129c377d jmp 0x129c37ba */
  goto L_129c37ba;
L_129c377f:;
  /* 129c377f mov eax, dword ptr [0x129ee4dc] */
  EAX = (r32((uint32_t)(0x129ee4dc)));
  /* 129c3784 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3787 je 0x129c37aa */
  if (C.zf) goto L_129c37aa;
  /* 129c3789 push 0x129e94bc */
  push32((uint32_t)(0x129e94bcu));
  /* 129c378e push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3790 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 129c3795 push 0x129e949c */
  push32((uint32_t)(0x129e949cu));
  /* 129c379a push 2 */
  push32((uint32_t)(0x2u));
  /* 129c379c call 0x129c1ee0 */
  push32(0x129c37a1u); f_129c1ee0();
  /* 129c37a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c37a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c37a7 jne 0x129c37aa */
  if (!C.zf) goto L_129c37aa;
  /* 129c37a9 int3  */
  x86_unimpl("int3 @ 0x129c37a9");
L_129c37aa:;
  /* 129c37aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c37ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c37ae jne 0x129c377f */
  if (!C.zf) goto L_129c377f;
  /* 129c37b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c37b3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129c37b5 mov dword ptr [0x129ee4dc], eax */
  w32((uint32_t)(0x129ee4dc), (EAX));
L_129c37ba:;
  /* 129c37ba cmp dword ptr [0x129ee4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c37c1 je 0x129c37d1 */
  if (C.zf) goto L_129c37d1;
  /* 129c37c3 mov ecx, dword ptr [0x129ee4dc] */
  ECX = (r32((uint32_t)(0x129ee4dc)));
  /* 129c37c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c37cc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 129c37cf jmp 0x129c37d9 */
  goto L_129c37d9;
L_129c37d1:;
  /* 129c37d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c37d4 mov dword ptr [0x129ee4d4], eax */
  w32((uint32_t)(0x129ee4d4), (EAX));
L_129c37d9:;
  /* 129c37d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c37dc mov edx, dword ptr [0x129ee4dc] */
  EDX = (r32((uint32_t)(0x129ee4dc)));
  /* 129c37e2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 129c37e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c37e7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 129c37ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c37f1 mov dword ptr [0x129ee4dc], ecx */
  w32((uint32_t)(0x129ee4dc), (ECX));
  /* 129c37f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_129c37fa:;
  /* 129c37fa pop edi */
  EDI = (pop32());
  /* 129c37fb pop esi */
  ESI = (pop32());
  /* 129c37fc pop ebx */
  EBX = (pop32());
  /* 129c37fd mov esp, ebp */
  ESP = (EBP);
  /* 129c37ff pop ebp */
  EBP = (pop32());
  /* 129c3800 ret  */
  ESPCHK(0x129c32f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003810 @ 0x129c3810 (27 bytes, 13 insns) */
void f_129c3810(void) {
  FTRACE(0x129c3810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c3810 push ebp */
  push32((uint32_t)(EBP));
  /* 129c3811 mov ebp, esp */
  EBP = (ESP);
  /* 129c3813 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3815 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3817 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c3819 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c381c push eax */
  push32((uint32_t)(EAX));
  /* 129c381d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c3820 push ecx */
  push32((uint32_t)(ECX));
  /* 129c3821 call 0x129c3830 */
  push32(0x129c3826u); f_129c3830();
  /* 129c3826 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3829 pop ebp */
  EBP = (pop32());
  /* 129c382a ret  */
  ESPCHK(0x129c3810u, _esp0);
  ESP += 4; return;
}

/* FUN_10003830 @ 0x129c3830 (64 bytes, 27 insns) */
void f_129c3830(void) {
  FTRACE(0x129c3830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c3830 push ebp */
  push32((uint32_t)(EBP));
  /* 129c3831 mov ebp, esp */
  EBP = (ESP);
  /* 129c3833 push ecx */
  push32((uint32_t)(ECX));
  /* 129c3834 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c3836 call 0x129c6820 */
  push32(0x129c383bu); f_129c6820();
  /* 129c383b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c383e push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3840 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c3843 push eax */
  push32((uint32_t)(EAX));
  /* 129c3844 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c3847 push ecx */
  push32((uint32_t)(ECX));
  /* 129c3848 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c384b push edx */
  push32((uint32_t)(EDX));
  /* 129c384c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c384f push eax */
  push32((uint32_t)(EAX));
  /* 129c3850 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c3853 push ecx */
  push32((uint32_t)(ECX));
  /* 129c3854 call 0x129c32f0 */
  push32(0x129c3859u); f_129c32f0();
  /* 129c3859 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c385c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c385f push 9 */
  push32((uint32_t)(0x9u));
  /* 129c3861 call 0x129c68c0 */
  push32(0x129c3866u); f_129c68c0();
  /* 129c3866 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3869 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c386c mov esp, ebp */
  ESP = (EBP);
  /* 129c386e pop ebp */
  EBP = (pop32());
  /* 129c386f ret  */
  ESPCHK(0x129c3830u, _esp0);
  ESP += 4; return;
}

/* FUN_10003870 @ 0x129c3870 (19 bytes, 9 insns) */
void f_129c3870(void) {
  FTRACE(0x129c3870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c3870 push ebp */
  push32((uint32_t)(EBP));
  /* 129c3871 mov ebp, esp */
  EBP = (ESP);
  /* 129c3873 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c3875 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c3878 push eax */
  push32((uint32_t)(EAX));
  /* 129c3879 call 0x129c38b0 */
  push32(0x129c387eu); f_129c38b0();
  /* 129c387e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3881 pop ebp */
  EBP = (pop32());
  /* 129c3882 ret  */
  ESPCHK(0x129c3870u, _esp0);
  ESP += 4; return;
}

/* FUN_10003890 @ 0x129c3890 (19 bytes, 9 insns) */
void f_129c3890(void) {
  FTRACE(0x129c3890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c3890 push ebp */
  push32((uint32_t)(EBP));
  /* 129c3891 mov ebp, esp */
  EBP = (ESP);
  /* 129c3893 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c3895 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c3898 push eax */
  push32((uint32_t)(EAX));
  /* 129c3899 call 0x129c38e0 */
  push32(0x129c389eu); f_129c38e0();
  /* 129c389e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c38a1 pop ebp */
  EBP = (pop32());
  /* 129c38a2 ret  */
  ESPCHK(0x129c3890u, _esp0);
  ESP += 4; return;
}

/* FUN_100038b0 @ 0x129c38b0 (41 bytes, 16 insns) */
void f_129c38b0(void) {
  FTRACE(0x129c38b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c38b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c38b1 mov ebp, esp */
  EBP = (ESP);
  /* 129c38b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c38b5 call 0x129c6820 */
  push32(0x129c38bau); f_129c6820();
  /* 129c38ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c38bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c38c0 push eax */
  push32((uint32_t)(EAX));
  /* 129c38c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c38c4 push ecx */
  push32((uint32_t)(ECX));
  /* 129c38c5 call 0x129c38e0 */
  push32(0x129c38cau); f_129c38e0();
  /* 129c38ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c38cd push 9 */
  push32((uint32_t)(0x9u));
  /* 129c38cf call 0x129c68c0 */
  push32(0x129c38d4u); f_129c68c0();
  /* 129c38d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c38d7 pop ebp */
  EBP = (pop32());
  /* 129c38d8 ret  */
  ESPCHK(0x129c38b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100038e0 @ 0x129c38e0 (1004 bytes, 342 insns) */
void f_129c38e0(void) {
  FTRACE(0x129c38e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c38e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c38e1 mov ebp, esp */
  EBP = (ESP);
  /* 129c38e3 push ecx */
  push32((uint32_t)(ECX));
  /* 129c38e4 push ebx */
  push32((uint32_t)(EBX));
  /* 129c38e5 push esi */
  push32((uint32_t)(ESI));
  /* 129c38e6 push edi */
  push32((uint32_t)(EDI));
  /* 129c38e7 mov eax, dword ptr [0x129eca84] */
  EAX = (r32((uint32_t)(0x129eca84)));
  /* 129c38ec and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 129c38ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c38f1 je 0x129c3923 */
  if (C.zf) goto L_129c3923;
L_129c38f3:;
  /* 129c38f3 call 0x129c3fc0 */
  push32(0x129c38f8u); f_129c3fc0();
  /* 129c38f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c38fa jne 0x129c391d */
  if (!C.zf) goto L_129c391d;
  /* 129c38fc push 0x129e94a8 */
  push32((uint32_t)(0x129e94a8u));
  /* 129c3901 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3903 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 129c3908 push 0x129e949c */
  push32((uint32_t)(0x129e949cu));
  /* 129c390d push 2 */
  push32((uint32_t)(0x2u));
  /* 129c390f call 0x129c1ee0 */
  push32(0x129c3914u); f_129c1ee0();
  /* 129c3914 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3917 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c391a jne 0x129c391d */
  if (!C.zf) goto L_129c391d;
  /* 129c391c int3  */
  x86_unimpl("int3 @ 0x129c391c");
L_129c391d:;
  /* 129c391d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c391f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c3921 jne 0x129c38f3 */
  if (!C.zf) goto L_129c38f3;
L_129c3923:;
  /* 129c3923 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3927 jne 0x129c392e */
  if (!C.zf) goto L_129c392e;
  /* 129c3929 jmp 0x129c3cc5 */
  goto L_129c3cc5;
L_129c392e:;
  /* 129c392e push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3930 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3932 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3934 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c3937 push edx */
  push32((uint32_t)(EDX));
  /* 129c3938 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c393a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c393d push eax */
  push32((uint32_t)(EAX));
  /* 129c393e push 3 */
  push32((uint32_t)(0x3u));
  /* 129c3940 call dword ptr [0x129ecc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ecc90))), 0x129c3946u);
  /* 129c3946 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3949 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c394b jne 0x129c3978 */
  if (!C.zf) goto L_129c3978;
L_129c394d:;
  /* 129c394d push 0x129e976c */
  push32((uint32_t)(0x129e976cu));
  /* 129c3952 push 0x129e943c */
  push32((uint32_t)(0x129e943cu));
  /* 129c3957 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3959 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c395b push 0 */
  push32((uint32_t)(0x0u));
  /* 129c395d push 0 */
  push32((uint32_t)(0x0u));
  /* 129c395f call 0x129c1ee0 */
  push32(0x129c3964u); f_129c1ee0();
  /* 129c3964 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3967 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c396a jne 0x129c396d */
  if (!C.zf) goto L_129c396d;
  /* 129c396c int3  */
  x86_unimpl("int3 @ 0x129c396c");
L_129c396d:;
  /* 129c396d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c396f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c3971 jne 0x129c394d */
  if (!C.zf) goto L_129c394d;
  /* 129c3973 jmp 0x129c3cc5 */
  goto L_129c3cc5;
L_129c3978:;
  /* 129c3978 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c397b push edx */
  push32((uint32_t)(EDX));
  /* 129c397c call 0x129c4420 */
  push32(0x129c3981u); f_129c4420();
  /* 129c3981 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3984 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c3986 jne 0x129c39a9 */
  if (!C.zf) goto L_129c39a9;
  /* 129c3988 push 0x129e95ac */
  push32((uint32_t)(0x129e95acu));
  /* 129c398d push 0 */
  push32((uint32_t)(0x0u));
  /* 129c398f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 129c3994 push 0x129e949c */
  push32((uint32_t)(0x129e949cu));
  /* 129c3999 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c399b call 0x129c1ee0 */
  push32(0x129c39a0u); f_129c1ee0();
  /* 129c39a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c39a3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c39a6 jne 0x129c39a9 */
  if (!C.zf) goto L_129c39a9;
  /* 129c39a8 int3  */
  x86_unimpl("int3 @ 0x129c39a8");
L_129c39a9:;
  /* 129c39a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c39ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c39ad jne 0x129c3978 */
  if (!C.zf) goto L_129c3978;
  /* 129c39af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c39b2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c39b5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129c39b8:;
  /* 129c39b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c39bb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129c39be and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c39c3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c39c6 je 0x129c3a0b */
  if (C.zf) goto L_129c3a0b;
  /* 129c39c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c39cb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c39cf je 0x129c3a0b */
  if (C.zf) goto L_129c3a0b;
  /* 129c39d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c39d4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129c39d7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c39dc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c39df je 0x129c3a0b */
  if (C.zf) goto L_129c3a0b;
  /* 129c39e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c39e4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c39e8 je 0x129c3a0b */
  if (C.zf) goto L_129c3a0b;
  /* 129c39ea push 0x129e9744 */
  push32((uint32_t)(0x129e9744u));
  /* 129c39ef push 0 */
  push32((uint32_t)(0x0u));
  /* 129c39f1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 129c39f6 push 0x129e949c */
  push32((uint32_t)(0x129e949cu));
  /* 129c39fb push 2 */
  push32((uint32_t)(0x2u));
  /* 129c39fd call 0x129c1ee0 */
  push32(0x129c3a02u); f_129c1ee0();
  /* 129c3a02 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3a05 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3a08 jne 0x129c3a0b */
  if (!C.zf) goto L_129c3a0b;
  /* 129c3a0a int3  */
  x86_unimpl("int3 @ 0x129c3a0a");
L_129c3a0b:;
  /* 129c3a0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c3a0d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c3a0f jne 0x129c39b8 */
  if (!C.zf) goto L_129c39b8;
  /* 129c3a11 mov eax, dword ptr [0x129eca84] */
  EAX = (r32((uint32_t)(0x129eca84)));
  /* 129c3a16 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 129c3a19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c3a1b jne 0x129c3ae6 */
  if (!C.zf) goto L_129c3ae6;
  /* 129c3a21 push 4 */
  push32((uint32_t)(0x4u));
  /* 129c3a23 mov cl, byte ptr [0x129eca90] */
  CL = (r8((uint32_t)(0x129eca90)));
  /* 129c3a29 push ecx */
  push32((uint32_t)(ECX));
  /* 129c3a2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3a2d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3a30 push edx */
  push32((uint32_t)(EDX));
  /* 129c3a31 call 0x129c3f30 */
  push32(0x129c3a36u); f_129c3f30();
  /* 129c3a36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3a39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c3a3b jne 0x129c3a80 */
  if (!C.zf) goto L_129c3a80;
L_129c3a3d:;
  /* 129c3a3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3a40 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3a43 push eax */
  push32((uint32_t)(EAX));
  /* 129c3a44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3a47 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 129c3a4a push edx */
  push32((uint32_t)(EDX));
  /* 129c3a4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3a4e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 129c3a51 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 129c3a57 mov edx, dword ptr [ecx*4 + 0x129eca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129eca94)));
  /* 129c3a5e push edx */
  push32((uint32_t)(EDX));
  /* 129c3a5f push 0x129e9718 */
  push32((uint32_t)(0x129e9718u));
  /* 129c3a64 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3a66 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3a68 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3a6a push 1 */
  push32((uint32_t)(0x1u));
  /* 129c3a6c call 0x129c1ee0 */
  push32(0x129c3a71u); f_129c1ee0();
  /* 129c3a71 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3a74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3a77 jne 0x129c3a7a */
  if (!C.zf) goto L_129c3a7a;
  /* 129c3a79 int3  */
  x86_unimpl("int3 @ 0x129c3a79");
L_129c3a7a:;
  /* 129c3a7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c3a7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c3a7e jne 0x129c3a3d */
  if (!C.zf) goto L_129c3a3d;
L_129c3a80:;
  /* 129c3a80 push 4 */
  push32((uint32_t)(0x4u));
  /* 129c3a82 mov cl, byte ptr [0x129eca90] */
  CL = (r8((uint32_t)(0x129eca90)));
  /* 129c3a88 push ecx */
  push32((uint32_t)(ECX));
  /* 129c3a89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3a8c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129c3a8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3a92 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 129c3a96 push edx */
  push32((uint32_t)(EDX));
  /* 129c3a97 call 0x129c3f30 */
  push32(0x129c3a9cu); f_129c3f30();
  /* 129c3a9c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3a9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c3aa1 jne 0x129c3ae6 */
  if (!C.zf) goto L_129c3ae6;
L_129c3aa3:;
  /* 129c3aa3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3aa6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3aa9 push eax */
  push32((uint32_t)(EAX));
  /* 129c3aaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3aad mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 129c3ab0 push edx */
  push32((uint32_t)(EDX));
  /* 129c3ab1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3ab4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 129c3ab7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 129c3abd mov edx, dword ptr [ecx*4 + 0x129eca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129eca94)));
  /* 129c3ac4 push edx */
  push32((uint32_t)(EDX));
  /* 129c3ac5 push 0x129e96ec */
  push32((uint32_t)(0x129e96ecu));
  /* 129c3aca push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3acc push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3ace push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3ad0 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c3ad2 call 0x129c1ee0 */
  push32(0x129c3ad7u); f_129c1ee0();
  /* 129c3ad7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3ada cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3add jne 0x129c3ae0 */
  if (!C.zf) goto L_129c3ae0;
  /* 129c3adf int3  */
  x86_unimpl("int3 @ 0x129c3adf");
L_129c3ae0:;
  /* 129c3ae0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c3ae2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c3ae4 jne 0x129c3aa3 */
  if (!C.zf) goto L_129c3aa3;
L_129c3ae6:;
  /* 129c3ae6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3ae9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3aed jne 0x129c3b5b */
  if (!C.zf) goto L_129c3b5b;
L_129c3aef:;
  /* 129c3aef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3af2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3af9 jne 0x129c3b04 */
  if (!C.zf) goto L_129c3b04;
  /* 129c3afb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3afe cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3b02 je 0x129c3b25 */
  if (C.zf) goto L_129c3b25;
L_129c3b04:;
  /* 129c3b04 push 0x129e96ac */
  push32((uint32_t)(0x129e96acu));
  /* 129c3b09 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3b0b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 129c3b10 push 0x129e949c */
  push32((uint32_t)(0x129e949cu));
  /* 129c3b15 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c3b17 call 0x129c1ee0 */
  push32(0x129c3b1cu); f_129c1ee0();
  /* 129c3b1c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3b1f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3b22 jne 0x129c3b25 */
  if (!C.zf) goto L_129c3b25;
  /* 129c3b24 int3  */
  x86_unimpl("int3 @ 0x129c3b24");
L_129c3b25:;
  /* 129c3b25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c3b27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c3b29 jne 0x129c3aef */
  if (!C.zf) goto L_129c3aef;
  /* 129c3b2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3b2e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129c3b31 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3b34 push eax */
  push32((uint32_t)(EAX));
  /* 129c3b35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c3b37 mov cl, byte ptr [0x129eca91] */
  CL = (r8((uint32_t)(0x129eca91)));
  /* 129c3b3d push ecx */
  push32((uint32_t)(ECX));
  /* 129c3b3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3b41 push edx */
  push32((uint32_t)(EDX));
  /* 129c3b42 call 0x129c6b90 */
  push32(0x129c3b47u); f_129c6b90();
  /* 129c3b47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3b4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3b4d push eax */
  push32((uint32_t)(EAX));
  /* 129c3b4e call 0x129c6f90 */
  push32(0x129c3b53u); f_129c6f90();
  /* 129c3b53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3b56 jmp 0x129c3cc5 */
  goto L_129c3cc5;
L_129c3b5b:;
  /* 129c3b5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3b5e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3b62 jne 0x129c3b71 */
  if (!C.zf) goto L_129c3b71;
  /* 129c3b64 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3b68 jne 0x129c3b71 */
  if (!C.zf) goto L_129c3b71;
  /* 129c3b6a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_129c3b71:;
  /* 129c3b71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3b74 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129c3b77 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3b7a je 0x129c3b9d */
  if (C.zf) goto L_129c3b9d;
  /* 129c3b7c push 0x129e968c */
  push32((uint32_t)(0x129e968cu));
  /* 129c3b81 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3b83 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 129c3b88 push 0x129e949c */
  push32((uint32_t)(0x129e949cu));
  /* 129c3b8d push 2 */
  push32((uint32_t)(0x2u));
  /* 129c3b8f call 0x129c1ee0 */
  push32(0x129c3b94u); f_129c1ee0();
  /* 129c3b94 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3b97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3b9a jne 0x129c3b9d */
  if (!C.zf) goto L_129c3b9d;
  /* 129c3b9c int3  */
  x86_unimpl("int3 @ 0x129c3b9c");
L_129c3b9d:;
  /* 129c3b9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c3b9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c3ba1 jne 0x129c3b71 */
  if (!C.zf) goto L_129c3b71;
  /* 129c3ba3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3ba6 mov eax, dword ptr [0x129ee4e0] */
  EAX = (r32((uint32_t)(0x129ee4e0)));
  /* 129c3bab sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c3bae mov dword ptr [0x129ee4e0], eax */
  w32((uint32_t)(0x129ee4e0), (EAX));
  /* 129c3bb3 mov ecx, dword ptr [0x129eca84] */
  ECX = (r32((uint32_t)(0x129eca84)));
  /* 129c3bb9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 129c3bbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c3bbe jne 0x129c3c9c */
  if (!C.zf) goto L_129c3c9c;
  /* 129c3bc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3bc7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3bca je 0x129c3bdc */
  if (C.zf) goto L_129c3bdc;
  /* 129c3bcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3bcf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129c3bd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3bd4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 129c3bd7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 129c3bda jmp 0x129c3c1a */
  goto L_129c3c1a;
L_129c3bdc:;
  /* 129c3bdc mov ecx, dword ptr [0x129ee4d4] */
  ECX = (r32((uint32_t)(0x129ee4d4)));
  /* 129c3be2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3be5 je 0x129c3c08 */
  if (C.zf) goto L_129c3c08;
  /* 129c3be7 push 0x129e9674 */
  push32((uint32_t)(0x129e9674u));
  /* 129c3bec push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3bee push 0x42a */
  push32((uint32_t)(0x42au));
  /* 129c3bf3 push 0x129e949c */
  push32((uint32_t)(0x129e949cu));
  /* 129c3bf8 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c3bfa call 0x129c1ee0 */
  push32(0x129c3bffu); f_129c1ee0();
  /* 129c3bff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3c02 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3c05 jne 0x129c3c08 */
  if (!C.zf) goto L_129c3c08;
  /* 129c3c07 int3  */
  x86_unimpl("int3 @ 0x129c3c07");
L_129c3c08:;
  /* 129c3c08 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c3c0a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c3c0c jne 0x129c3bdc */
  if (!C.zf) goto L_129c3bdc;
  /* 129c3c0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3c11 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129c3c14 mov dword ptr [0x129ee4d4], ecx */
  w32((uint32_t)(0x129ee4d4), (ECX));
L_129c3c1a:;
  /* 129c3c1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3c1d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3c21 je 0x129c3c32 */
  if (C.zf) goto L_129c3c32;
  /* 129c3c23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3c26 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129c3c29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3c2c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129c3c2e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129c3c30 jmp 0x129c3c6f */
  goto L_129c3c6f;
L_129c3c32:;
  /* 129c3c32 mov ecx, dword ptr [0x129ee4dc] */
  ECX = (r32((uint32_t)(0x129ee4dc)));
  /* 129c3c38 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3c3b je 0x129c3c5e */
  if (C.zf) goto L_129c3c5e;
  /* 129c3c3d push 0x129e965c */
  push32((uint32_t)(0x129e965cu));
  /* 129c3c42 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3c44 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 129c3c49 push 0x129e949c */
  push32((uint32_t)(0x129e949cu));
  /* 129c3c4e push 2 */
  push32((uint32_t)(0x2u));
  /* 129c3c50 call 0x129c1ee0 */
  push32(0x129c3c55u); f_129c1ee0();
  /* 129c3c55 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3c58 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3c5b jne 0x129c3c5e */
  if (!C.zf) goto L_129c3c5e;
  /* 129c3c5d int3  */
  x86_unimpl("int3 @ 0x129c3c5d");
L_129c3c5e:;
  /* 129c3c5e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c3c60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c3c62 jne 0x129c3c32 */
  if (!C.zf) goto L_129c3c32;
  /* 129c3c64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3c67 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129c3c69 mov dword ptr [0x129ee4dc], ecx */
  w32((uint32_t)(0x129ee4dc), (ECX));
L_129c3c6f:;
  /* 129c3c6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3c72 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129c3c75 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3c78 push eax */
  push32((uint32_t)(EAX));
  /* 129c3c79 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c3c7b mov cl, byte ptr [0x129eca91] */
  CL = (r8((uint32_t)(0x129eca91)));
  /* 129c3c81 push ecx */
  push32((uint32_t)(ECX));
  /* 129c3c82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3c85 push edx */
  push32((uint32_t)(EDX));
  /* 129c3c86 call 0x129c6b90 */
  push32(0x129c3c8bu); f_129c6b90();
  /* 129c3c8b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3c8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3c91 push eax */
  push32((uint32_t)(EAX));
  /* 129c3c92 call 0x129c6f90 */
  push32(0x129c3c97u); f_129c6f90();
  /* 129c3c97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3c9a jmp 0x129c3cc5 */
  goto L_129c3cc5;
L_129c3c9c:;
  /* 129c3c9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3c9f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 129c3ca6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3ca9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129c3cac push eax */
  push32((uint32_t)(EAX));
  /* 129c3cad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c3caf mov cl, byte ptr [0x129eca91] */
  CL = (r8((uint32_t)(0x129eca91)));
  /* 129c3cb5 push ecx */
  push32((uint32_t)(ECX));
  /* 129c3cb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3cb9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3cbc push edx */
  push32((uint32_t)(EDX));
  /* 129c3cbd call 0x129c6b90 */
  push32(0x129c3cc2u); f_129c6b90();
  /* 129c3cc2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c3cc5:;
  /* 129c3cc5 pop edi */
  EDI = (pop32());
  /* 129c3cc6 pop esi */
  ESI = (pop32());
  /* 129c3cc7 pop ebx */
  EBX = (pop32());
  /* 129c3cc8 mov esp, ebp */
  ESP = (EBP);
  /* 129c3cca pop ebp */
  EBP = (pop32());
  /* 129c3ccb ret  */
  ESPCHK(0x129c38e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cd0 @ 0x129c3cd0 (19 bytes, 9 insns) */
void f_129c3cd0(void) {
  FTRACE(0x129c3cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c3cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c3cd1 mov ebp, esp */
  EBP = (ESP);
  /* 129c3cd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c3cd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c3cd8 push eax */
  push32((uint32_t)(EAX));
  /* 129c3cd9 call 0x129c3cf0 */
  push32(0x129c3cdeu); f_129c3cf0();
  /* 129c3cde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3ce1 pop ebp */
  EBP = (pop32());
  /* 129c3ce2 ret  */
  ESPCHK(0x129c3cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cf0 @ 0x129c3cf0 (342 bytes, 119 insns) */
void f_129c3cf0(void) {
  FTRACE(0x129c3cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c3cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c3cf1 mov ebp, esp */
  EBP = (ESP);
  /* 129c3cf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c3cf6 push ebx */
  push32((uint32_t)(EBX));
  /* 129c3cf7 push esi */
  push32((uint32_t)(ESI));
  /* 129c3cf8 push edi */
  push32((uint32_t)(EDI));
  /* 129c3cf9 mov eax, dword ptr [0x129eca84] */
  EAX = (r32((uint32_t)(0x129eca84)));
  /* 129c3cfe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 129c3d01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c3d03 je 0x129c3d35 */
  if (C.zf) goto L_129c3d35;
L_129c3d05:;
  /* 129c3d05 call 0x129c3fc0 */
  push32(0x129c3d0au); f_129c3fc0();
  /* 129c3d0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c3d0c jne 0x129c3d2f */
  if (!C.zf) goto L_129c3d2f;
  /* 129c3d0e push 0x129e94a8 */
  push32((uint32_t)(0x129e94a8u));
  /* 129c3d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3d15 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 129c3d1a push 0x129e949c */
  push32((uint32_t)(0x129e949cu));
  /* 129c3d1f push 2 */
  push32((uint32_t)(0x2u));
  /* 129c3d21 call 0x129c1ee0 */
  push32(0x129c3d26u); f_129c1ee0();
  /* 129c3d26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3d29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3d2c jne 0x129c3d2f */
  if (!C.zf) goto L_129c3d2f;
  /* 129c3d2e int3  */
  x86_unimpl("int3 @ 0x129c3d2e");
L_129c3d2f:;
  /* 129c3d2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c3d31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c3d33 jne 0x129c3d05 */
  if (!C.zf) goto L_129c3d05;
L_129c3d35:;
  /* 129c3d35 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c3d37 call 0x129c6820 */
  push32(0x129c3d3cu); f_129c6820();
  /* 129c3d3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c3d3f:;
  /* 129c3d3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c3d42 push edx */
  push32((uint32_t)(EDX));
  /* 129c3d43 call 0x129c4420 */
  push32(0x129c3d48u); f_129c4420();
  /* 129c3d48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3d4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c3d4d jne 0x129c3d70 */
  if (!C.zf) goto L_129c3d70;
  /* 129c3d4f push 0x129e95ac */
  push32((uint32_t)(0x129e95acu));
  /* 129c3d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3d56 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 129c3d5b push 0x129e949c */
  push32((uint32_t)(0x129e949cu));
  /* 129c3d60 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c3d62 call 0x129c1ee0 */
  push32(0x129c3d67u); f_129c1ee0();
  /* 129c3d67 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3d6a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3d6d jne 0x129c3d70 */
  if (!C.zf) goto L_129c3d70;
  /* 129c3d6f int3  */
  x86_unimpl("int3 @ 0x129c3d6f");
L_129c3d70:;
  /* 129c3d70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c3d72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c3d74 jne 0x129c3d3f */
  if (!C.zf) goto L_129c3d3f;
  /* 129c3d76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c3d79 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c3d7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_129c3d7f:;
  /* 129c3d7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c3d82 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129c3d85 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c3d8a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3d8d je 0x129c3dd2 */
  if (C.zf) goto L_129c3dd2;
  /* 129c3d8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c3d92 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3d96 je 0x129c3dd2 */
  if (C.zf) goto L_129c3dd2;
  /* 129c3d98 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c3d9b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129c3d9e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c3da3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3da6 je 0x129c3dd2 */
  if (C.zf) goto L_129c3dd2;
  /* 129c3da8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c3dab cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3daf je 0x129c3dd2 */
  if (C.zf) goto L_129c3dd2;
  /* 129c3db1 push 0x129e9744 */
  push32((uint32_t)(0x129e9744u));
  /* 129c3db6 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3db8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 129c3dbd push 0x129e949c */
  push32((uint32_t)(0x129e949cu));
  /* 129c3dc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c3dc4 call 0x129c1ee0 */
  push32(0x129c3dc9u); f_129c1ee0();
  /* 129c3dc9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3dcc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3dcf jne 0x129c3dd2 */
  if (!C.zf) goto L_129c3dd2;
  /* 129c3dd1 int3  */
  x86_unimpl("int3 @ 0x129c3dd1");
L_129c3dd2:;
  /* 129c3dd2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c3dd4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c3dd6 jne 0x129c3d7f */
  if (!C.zf) goto L_129c3d7f;
  /* 129c3dd8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c3ddb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3ddf jne 0x129c3dee */
  if (!C.zf) goto L_129c3dee;
  /* 129c3de1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3de5 jne 0x129c3dee */
  if (!C.zf) goto L_129c3dee;
  /* 129c3de7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_129c3dee:;
  /* 129c3dee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c3df1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3df5 je 0x129c3e29 */
  if (C.zf) goto L_129c3e29;
L_129c3df7:;
  /* 129c3df7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c3dfa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129c3dfd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3e00 je 0x129c3e23 */
  if (C.zf) goto L_129c3e23;
  /* 129c3e02 push 0x129e968c */
  push32((uint32_t)(0x129e968cu));
  /* 129c3e07 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3e09 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 129c3e0e push 0x129e949c */
  push32((uint32_t)(0x129e949cu));
  /* 129c3e13 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c3e15 call 0x129c1ee0 */
  push32(0x129c3e1au); f_129c1ee0();
  /* 129c3e1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3e1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3e20 jne 0x129c3e23 */
  if (!C.zf) goto L_129c3e23;
  /* 129c3e22 int3  */
  x86_unimpl("int3 @ 0x129c3e22");
L_129c3e23:;
  /* 129c3e23 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c3e25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c3e27 jne 0x129c3df7 */
  if (!C.zf) goto L_129c3df7;
L_129c3e29:;
  /* 129c3e29 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c3e2c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129c3e2f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c3e32 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c3e34 call 0x129c68c0 */
  push32(0x129c3e39u); f_129c68c0();
  /* 129c3e39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3e3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3e3f pop edi */
  EDI = (pop32());
  /* 129c3e40 pop esi */
  ESI = (pop32());
  /* 129c3e41 pop ebx */
  EBX = (pop32());
  /* 129c3e42 mov esp, ebp */
  ESP = (EBP);
  /* 129c3e44 pop ebp */
  EBP = (pop32());
  /* 129c3e45 ret  */
  ESPCHK(0x129c3cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e50 @ 0x129c3e50 (28 bytes, 11 insns) */
void f_129c3e50(void) {
  FTRACE(0x129c3e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c3e50 push ebp */
  push32((uint32_t)(EBP));
  /* 129c3e51 mov ebp, esp */
  EBP = (ESP);
  /* 129c3e53 push ecx */
  push32((uint32_t)(ECX));
  /* 129c3e54 mov eax, dword ptr [0x129eca8c] */
  EAX = (r32((uint32_t)(0x129eca8c)));
  /* 129c3e59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c3e5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c3e5f mov dword ptr [0x129eca8c], ecx */
  w32((uint32_t)(0x129eca8c), (ECX));
  /* 129c3e65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3e68 mov esp, ebp */
  ESP = (EBP);
  /* 129c3e6a pop ebp */
  EBP = (pop32());
  /* 129c3e6b ret  */
  ESPCHK(0x129c3e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e70 @ 0x129c3e70 (157 bytes, 59 insns) */
void f_129c3e70(void) {
  FTRACE(0x129c3e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c3e70 push ebp */
  push32((uint32_t)(EBP));
  /* 129c3e71 mov ebp, esp */
  EBP = (ESP);
  /* 129c3e73 push ecx */
  push32((uint32_t)(ECX));
  /* 129c3e74 push ebx */
  push32((uint32_t)(EBX));
  /* 129c3e75 push esi */
  push32((uint32_t)(ESI));
  /* 129c3e76 push edi */
  push32((uint32_t)(EDI));
  /* 129c3e77 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c3e79 call 0x129c6820 */
  push32(0x129c3e7eu); f_129c6820();
  /* 129c3e7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3e81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c3e84 push eax */
  push32((uint32_t)(EAX));
  /* 129c3e85 call 0x129c4420 */
  push32(0x129c3e8au); f_129c4420();
  /* 129c3e8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3e8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c3e8f je 0x129c3efc */
  if (C.zf) goto L_129c3efc;
  /* 129c3e91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c3e94 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c3e97 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129c3e9a:;
  /* 129c3e9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3e9d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129c3ea0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c3ea5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3ea8 je 0x129c3eed */
  if (C.zf) goto L_129c3eed;
  /* 129c3eaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3ead cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3eb1 je 0x129c3eed */
  if (C.zf) goto L_129c3eed;
  /* 129c3eb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3eb6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129c3eb9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c3ebe cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3ec1 je 0x129c3eed */
  if (C.zf) goto L_129c3eed;
  /* 129c3ec3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3ec6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3eca je 0x129c3eed */
  if (C.zf) goto L_129c3eed;
  /* 129c3ecc push 0x129e9744 */
  push32((uint32_t)(0x129e9744u));
  /* 129c3ed1 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3ed3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 129c3ed8 push 0x129e949c */
  push32((uint32_t)(0x129e949cu));
  /* 129c3edd push 2 */
  push32((uint32_t)(0x2u));
  /* 129c3edf call 0x129c1ee0 */
  push32(0x129c3ee4u); f_129c1ee0();
  /* 129c3ee4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3ee7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3eea jne 0x129c3eed */
  if (!C.zf) goto L_129c3eed;
  /* 129c3eec int3  */
  x86_unimpl("int3 @ 0x129c3eec");
L_129c3eed:;
  /* 129c3eed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c3eef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c3ef1 jne 0x129c3e9a */
  if (!C.zf) goto L_129c3e9a;
  /* 129c3ef3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3ef6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c3ef9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_129c3efc:;
  /* 129c3efc push 9 */
  push32((uint32_t)(0x9u));
  /* 129c3efe call 0x129c68c0 */
  push32(0x129c3f03u); f_129c68c0();
  /* 129c3f03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3f06 pop edi */
  EDI = (pop32());
  /* 129c3f07 pop esi */
  ESI = (pop32());
  /* 129c3f08 pop ebx */
  EBX = (pop32());
  /* 129c3f09 mov esp, ebp */
  ESP = (EBP);
  /* 129c3f0b pop ebp */
  EBP = (pop32());
  /* 129c3f0c ret  */
  ESPCHK(0x129c3e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f10 @ 0x129c3f10 (28 bytes, 11 insns) */
void f_129c3f10(void) {
  FTRACE(0x129c3f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c3f10 push ebp */
  push32((uint32_t)(EBP));
  /* 129c3f11 mov ebp, esp */
  EBP = (ESP);
  /* 129c3f13 push ecx */
  push32((uint32_t)(ECX));
  /* 129c3f14 mov eax, dword ptr [0x129ecc90] */
  EAX = (r32((uint32_t)(0x129ecc90)));
  /* 129c3f19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c3f1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c3f1f mov dword ptr [0x129ecc90], ecx */
  w32((uint32_t)(0x129ecc90), (ECX));
  /* 129c3f25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3f28 mov esp, ebp */
  ESP = (EBP);
  /* 129c3f2a pop ebp */
  EBP = (pop32());
  /* 129c3f2b ret  */
  ESPCHK(0x129c3f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f30 @ 0x129c3f30 (136 bytes, 55 insns) */
void f_129c3f30(void) {
  FTRACE(0x129c3f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c3f30 push ebp */
  push32((uint32_t)(EBP));
  /* 129c3f31 mov ebp, esp */
  EBP = (ESP);
  /* 129c3f33 push ecx */
  push32((uint32_t)(ECX));
  /* 129c3f34 push ebx */
  push32((uint32_t)(EBX));
  /* 129c3f35 push esi */
  push32((uint32_t)(ESI));
  /* 129c3f36 push edi */
  push32((uint32_t)(EDI));
  /* 129c3f37 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_129c3f3e:;
  /* 129c3f3e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c3f41 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c3f44 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c3f47 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 129c3f4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c3f4c je 0x129c3fae */
  if (C.zf) goto L_129c3fae;
  /* 129c3f4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c3f51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c3f53 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129c3f55 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c3f58 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 129c3f5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c3f61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3f64 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 129c3f67 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3f69 je 0x129c3fac */
  if (C.zf) goto L_129c3fac;
L_129c3f6b:;
  /* 129c3f6b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c3f6e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c3f73 push eax */
  push32((uint32_t)(EAX));
  /* 129c3f74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c3f77 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c3f79 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 129c3f7c push edx */
  push32((uint32_t)(EDX));
  /* 129c3f7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c3f80 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c3f83 push eax */
  push32((uint32_t)(EAX));
  /* 129c3f84 push 0x129e9788 */
  push32((uint32_t)(0x129e9788u));
  /* 129c3f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3f8d push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3f8f push 0 */
  push32((uint32_t)(0x0u));
  /* 129c3f91 call 0x129c1ee0 */
  push32(0x129c3f96u); f_129c1ee0();
  /* 129c3f96 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3f99 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3f9c jne 0x129c3f9f */
  if (!C.zf) goto L_129c3f9f;
  /* 129c3f9e int3  */
  x86_unimpl("int3 @ 0x129c3f9e");
L_129c3f9f:;
  /* 129c3f9f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c3fa1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c3fa3 jne 0x129c3f6b */
  if (!C.zf) goto L_129c3f6b;
  /* 129c3fa5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_129c3fac:;
  /* 129c3fac jmp 0x129c3f3e */
  goto L_129c3f3e;
L_129c3fae:;
  /* 129c3fae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c3fb1 pop edi */
  EDI = (pop32());
  /* 129c3fb2 pop esi */
  ESI = (pop32());
  /* 129c3fb3 pop ebx */
  EBX = (pop32());
  /* 129c3fb4 mov esp, ebp */
  ESP = (EBP);
  /* 129c3fb6 pop ebp */
  EBP = (pop32());
  /* 129c3fb7 ret  */
  ESPCHK(0x129c3f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fc0 @ 0x129c3fc0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_129c3fc0(void) {
  FTRACE(0x129c3fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c3fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c3fc1 mov ebp, esp */
  EBP = (ESP);
  /* 129c3fc3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c3fc6 push ebx */
  push32((uint32_t)(EBX));
  /* 129c3fc7 push esi */
  push32((uint32_t)(ESI));
  /* 129c3fc8 push edi */
  push32((uint32_t)(EDI));
  /* 129c3fc9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 129c3fd0 mov eax, dword ptr [0x129eca84] */
  EAX = (r32((uint32_t)(0x129eca84)));
  /* 129c3fd5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 129c3fd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c3fda jne 0x129c3fe6 */
  if (!C.zf) goto L_129c3fe6;
  /* 129c3fdc mov eax, 1 */
  EAX = (0x1u);
  /* 129c3fe1 jmp 0x129c4318 */
  goto L_129c4318;
L_129c3fe6:;
  /* 129c3fe6 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c3fe8 call 0x129c6820 */
  push32(0x129c3fedu); f_129c6820();
  /* 129c3fed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c3ff0 call 0x129c7000 */
  push32(0x129c3ff5u); f_129c7000();
  /* 129c3ff5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129c3ff8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c3ffc je 0x129c4109 */
  if (C.zf) goto L_129c4109;
  /* 129c4002 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4006 je 0x129c4109 */
  if (C.zf) goto L_129c4109;
  /* 129c400c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c400f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 129c4012 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c4015 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4018 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 129c401b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c401f ja 0x129c40d2 */
  if ((!C.cf&&!C.zf)) goto L_129c40d2;
  /* 129c4025 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c4028 jmp dword ptr [eax*4 + 0x129c431f] */
  switch (EAX) {
    case 0: goto L_129c40aa;
    case 1: goto L_129c4082;
    case 2: goto L_129c405a;
    case 3: goto L_129c402f;
    default: x86_unimpl("switch@0x129c4028 out of table"); return;
  }
L_129c402f:;
  /* 129c402f push 0x129e98dc */
  push32((uint32_t)(0x129e98dcu));
  /* 129c4034 push 0x129e943c */
  push32((uint32_t)(0x129e943cu));
  /* 129c4039 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c403b push 0 */
  push32((uint32_t)(0x0u));
  /* 129c403d push 0 */
  push32((uint32_t)(0x0u));
  /* 129c403f push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4041 call 0x129c1ee0 */
  push32(0x129c4046u); f_129c1ee0();
  /* 129c4046 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4049 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c404c jne 0x129c404f */
  if (!C.zf) goto L_129c404f;
  /* 129c404e int3  */
  x86_unimpl("int3 @ 0x129c404e");
L_129c404f:;
  /* 129c404f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c4051 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c4053 jne 0x129c402f */
  if (!C.zf) goto L_129c402f;
  /* 129c4055 jmp 0x129c40f8 */
  goto L_129c40f8;
L_129c405a:;
  /* 129c405a push 0x129e98b8 */
  push32((uint32_t)(0x129e98b8u));
  /* 129c405f push 0x129e943c */
  push32((uint32_t)(0x129e943cu));
  /* 129c4064 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4066 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4068 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c406a push 0 */
  push32((uint32_t)(0x0u));
  /* 129c406c call 0x129c1ee0 */
  push32(0x129c4071u); f_129c1ee0();
  /* 129c4071 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4074 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4077 jne 0x129c407a */
  if (!C.zf) goto L_129c407a;
  /* 129c4079 int3  */
  x86_unimpl("int3 @ 0x129c4079");
L_129c407a:;
  /* 129c407a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c407c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c407e jne 0x129c405a */
  if (!C.zf) goto L_129c405a;
  /* 129c4080 jmp 0x129c40f8 */
  goto L_129c40f8;
L_129c4082:;
  /* 129c4082 push 0x129e9894 */
  push32((uint32_t)(0x129e9894u));
  /* 129c4087 push 0x129e943c */
  push32((uint32_t)(0x129e943cu));
  /* 129c408c push 0 */
  push32((uint32_t)(0x0u));
  /* 129c408e push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4090 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4092 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4094 call 0x129c1ee0 */
  push32(0x129c4099u); f_129c1ee0();
  /* 129c4099 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c409c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c409f jne 0x129c40a2 */
  if (!C.zf) goto L_129c40a2;
  /* 129c40a1 int3  */
  x86_unimpl("int3 @ 0x129c40a1");
L_129c40a2:;
  /* 129c40a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c40a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c40a6 jne 0x129c4082 */
  if (!C.zf) goto L_129c4082;
  /* 129c40a8 jmp 0x129c40f8 */
  goto L_129c40f8;
L_129c40aa:;
  /* 129c40aa push 0x129e9870 */
  push32((uint32_t)(0x129e9870u));
  /* 129c40af push 0x129e943c */
  push32((uint32_t)(0x129e943cu));
  /* 129c40b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c40b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c40b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c40ba push 0 */
  push32((uint32_t)(0x0u));
  /* 129c40bc call 0x129c1ee0 */
  push32(0x129c40c1u); f_129c1ee0();
  /* 129c40c1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c40c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c40c7 jne 0x129c40ca */
  if (!C.zf) goto L_129c40ca;
  /* 129c40c9 int3  */
  x86_unimpl("int3 @ 0x129c40c9");
L_129c40ca:;
  /* 129c40ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c40cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c40ce jne 0x129c40aa */
  if (!C.zf) goto L_129c40aa;
  /* 129c40d0 jmp 0x129c40f8 */
  goto L_129c40f8;
L_129c40d2:;
  /* 129c40d2 push 0x129e9844 */
  push32((uint32_t)(0x129e9844u));
  /* 129c40d7 push 0x129e943c */
  push32((uint32_t)(0x129e943cu));
  /* 129c40dc push 0 */
  push32((uint32_t)(0x0u));
  /* 129c40de push 0 */
  push32((uint32_t)(0x0u));
  /* 129c40e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c40e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c40e4 call 0x129c1ee0 */
  push32(0x129c40e9u); f_129c1ee0();
  /* 129c40e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c40ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c40ef jne 0x129c40f2 */
  if (!C.zf) goto L_129c40f2;
  /* 129c40f1 int3  */
  x86_unimpl("int3 @ 0x129c40f1");
L_129c40f2:;
  /* 129c40f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c40f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c40f6 jne 0x129c40d2 */
  if (!C.zf) goto L_129c40d2;
L_129c40f8:;
  /* 129c40f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c40fa call 0x129c68c0 */
  push32(0x129c40ffu); f_129c68c0();
  /* 129c40ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4102 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c4104 jmp 0x129c4318 */
  goto L_129c4318;
L_129c4109:;
  /* 129c4109 mov eax, dword ptr [0x129ee4dc] */
  EAX = (r32((uint32_t)(0x129ee4dc)));
  /* 129c410e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129c4111 jmp 0x129c411b */
  goto L_129c411b;
L_129c4113:;
  /* 129c4113 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c4116 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129c4118 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_129c411b:;
  /* 129c411b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c411f je 0x129c430b */
  if (C.zf) goto L_129c430b;
  /* 129c4125 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 129c412c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c412f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 129c4132 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 129c4138 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c413b je 0x129c4160 */
  if (C.zf) goto L_129c4160;
  /* 129c413d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c4140 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4144 je 0x129c4160 */
  if (C.zf) goto L_129c4160;
  /* 129c4146 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c4149 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 129c414c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 129c4152 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4155 je 0x129c4160 */
  if (C.zf) goto L_129c4160;
  /* 129c4157 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c415a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c415e jne 0x129c4178 */
  if (!C.zf) goto L_129c4178;
L_129c4160:;
  /* 129c4160 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c4163 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 129c4166 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 129c416c mov edx, dword ptr [ecx*4 + 0x129eca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129eca94)));
  /* 129c4173 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 129c4176 jmp 0x129c417f */
  goto L_129c417f;
L_129c4178:;
  /* 129c4178 mov dword ptr [ebp - 0x14], 0x129e983c */
  w32((uint32_t)(EBP + -0x14), (0x129e983cu));
L_129c417f:;
  /* 129c417f push 4 */
  push32((uint32_t)(0x4u));
  /* 129c4181 mov al, byte ptr [0x129eca90] */
  AL = (r8((uint32_t)(0x129eca90)));
  /* 129c4186 push eax */
  push32((uint32_t)(EAX));
  /* 129c4187 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c418a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c418d push ecx */
  push32((uint32_t)(ECX));
  /* 129c418e call 0x129c3f30 */
  push32(0x129c4193u); f_129c3f30();
  /* 129c4193 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4196 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c4198 jne 0x129c41d4 */
  if (!C.zf) goto L_129c41d4;
L_129c419a:;
  /* 129c419a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c419d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c41a0 push edx */
  push32((uint32_t)(EDX));
  /* 129c41a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c41a4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 129c41a7 push ecx */
  push32((uint32_t)(ECX));
  /* 129c41a8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c41ab push edx */
  push32((uint32_t)(EDX));
  /* 129c41ac push 0x129e9718 */
  push32((uint32_t)(0x129e9718u));
  /* 129c41b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c41b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c41b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c41b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c41b9 call 0x129c1ee0 */
  push32(0x129c41beu); f_129c1ee0();
  /* 129c41be add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c41c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c41c4 jne 0x129c41c7 */
  if (!C.zf) goto L_129c41c7;
  /* 129c41c6 int3  */
  x86_unimpl("int3 @ 0x129c41c6");
L_129c41c7:;
  /* 129c41c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c41c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c41cb jne 0x129c419a */
  if (!C.zf) goto L_129c419a;
  /* 129c41cd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_129c41d4:;
  /* 129c41d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 129c41d6 mov cl, byte ptr [0x129eca90] */
  CL = (r8((uint32_t)(0x129eca90)));
  /* 129c41dc push ecx */
  push32((uint32_t)(ECX));
  /* 129c41dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c41e0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129c41e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c41e6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 129c41ea push edx */
  push32((uint32_t)(EDX));
  /* 129c41eb call 0x129c3f30 */
  push32(0x129c41f0u); f_129c3f30();
  /* 129c41f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c41f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c41f5 jne 0x129c4231 */
  if (!C.zf) goto L_129c4231;
L_129c41f7:;
  /* 129c41f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c41fa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c41fd push eax */
  push32((uint32_t)(EAX));
  /* 129c41fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c4201 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 129c4204 push edx */
  push32((uint32_t)(EDX));
  /* 129c4205 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c4208 push eax */
  push32((uint32_t)(EAX));
  /* 129c4209 push 0x129e96ec */
  push32((uint32_t)(0x129e96ecu));
  /* 129c420e push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4210 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4212 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4214 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4216 call 0x129c1ee0 */
  push32(0x129c421bu); f_129c1ee0();
  /* 129c421b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c421e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4221 jne 0x129c4224 */
  if (!C.zf) goto L_129c4224;
  /* 129c4223 int3  */
  x86_unimpl("int3 @ 0x129c4223");
L_129c4224:;
  /* 129c4224 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c4226 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c4228 jne 0x129c41f7 */
  if (!C.zf) goto L_129c41f7;
  /* 129c422a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_129c4231:;
  /* 129c4231 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c4234 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4238 jne 0x129c428a */
  if (!C.zf) goto L_129c428a;
  /* 129c423a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c423d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129c4240 push ecx */
  push32((uint32_t)(ECX));
  /* 129c4241 mov dl, byte ptr [0x129eca91] */
  DL = (r8((uint32_t)(0x129eca91)));
  /* 129c4247 push edx */
  push32((uint32_t)(EDX));
  /* 129c4248 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c424b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c424e push eax */
  push32((uint32_t)(EAX));
  /* 129c424f call 0x129c3f30 */
  push32(0x129c4254u); f_129c3f30();
  /* 129c4254 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4257 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c4259 jne 0x129c428a */
  if (!C.zf) goto L_129c428a;
L_129c425b:;
  /* 129c425b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c425e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4261 push ecx */
  push32((uint32_t)(ECX));
  /* 129c4262 push 0x129e9810 */
  push32((uint32_t)(0x129e9810u));
  /* 129c4267 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4269 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c426b push 0 */
  push32((uint32_t)(0x0u));
  /* 129c426d push 0 */
  push32((uint32_t)(0x0u));
  /* 129c426f call 0x129c1ee0 */
  push32(0x129c4274u); f_129c1ee0();
  /* 129c4274 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4277 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c427a jne 0x129c427d */
  if (!C.zf) goto L_129c427d;
  /* 129c427c int3  */
  x86_unimpl("int3 @ 0x129c427c");
L_129c427d:;
  /* 129c427d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c427f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c4281 jne 0x129c425b */
  if (!C.zf) goto L_129c425b;
  /* 129c4283 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_129c428a:;
  /* 129c428a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c428e jne 0x129c4306 */
  if (!C.zf) goto L_129c4306;
  /* 129c4290 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c4293 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4297 je 0x129c42cc */
  if (C.zf) goto L_129c42cc;
L_129c4299:;
  /* 129c4299 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c429c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129c429f push edx */
  push32((uint32_t)(EDX));
  /* 129c42a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c42a3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 129c42a6 push ecx */
  push32((uint32_t)(ECX));
  /* 129c42a7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c42aa push edx */
  push32((uint32_t)(EDX));
  /* 129c42ab push 0x129e97f0 */
  push32((uint32_t)(0x129e97f0u));
  /* 129c42b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c42b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c42b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c42b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c42b8 call 0x129c1ee0 */
  push32(0x129c42bdu); f_129c1ee0();
  /* 129c42bd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c42c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c42c3 jne 0x129c42c6 */
  if (!C.zf) goto L_129c42c6;
  /* 129c42c5 int3  */
  x86_unimpl("int3 @ 0x129c42c5");
L_129c42c6:;
  /* 129c42c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c42c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c42ca jne 0x129c4299 */
  if (!C.zf) goto L_129c4299;
L_129c42cc:;
  /* 129c42cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c42cf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 129c42d2 push edx */
  push32((uint32_t)(EDX));
  /* 129c42d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c42d6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c42d9 push eax */
  push32((uint32_t)(EAX));
  /* 129c42da mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c42dd push ecx */
  push32((uint32_t)(ECX));
  /* 129c42de push 0x129e97c4 */
  push32((uint32_t)(0x129e97c4u));
  /* 129c42e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c42e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c42e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c42e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c42eb call 0x129c1ee0 */
  push32(0x129c42f0u); f_129c1ee0();
  /* 129c42f0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c42f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c42f6 jne 0x129c42f9 */
  if (!C.zf) goto L_129c42f9;
  /* 129c42f8 int3  */
  x86_unimpl("int3 @ 0x129c42f8");
L_129c42f9:;
  /* 129c42f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c42fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c42fd jne 0x129c42cc */
  if (!C.zf) goto L_129c42cc;
  /* 129c42ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_129c4306:;
  /* 129c4306 jmp 0x129c4113 */
  goto L_129c4113;
L_129c430b:;
  /* 129c430b push 9 */
  push32((uint32_t)(0x9u));
  /* 129c430d call 0x129c68c0 */
  push32(0x129c4312u); f_129c68c0();
  /* 129c4312 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4315 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_129c4318:;
  /* 129c4318 pop edi */
  EDI = (pop32());
  /* 129c4319 pop esi */
  ESI = (pop32());
  /* 129c431a pop ebx */
  EBX = (pop32());
  /* 129c431b mov esp, ebp */
  ESP = (EBP);
  /* 129c431d pop ebp */
  EBP = (pop32());
  /* 129c431e ret  */
  ESPCHK(0x129c3fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004330 @ 0x129c4330 (34 bytes, 13 insns) */
void f_129c4330(void) {
  FTRACE(0x129c4330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c4330 push ebp */
  push32((uint32_t)(EBP));
  /* 129c4331 mov ebp, esp */
  EBP = (ESP);
  /* 129c4333 push ecx */
  push32((uint32_t)(ECX));
  /* 129c4334 mov eax, dword ptr [0x129eca84] */
  EAX = (r32((uint32_t)(0x129eca84)));
  /* 129c4339 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c433c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4340 je 0x129c434b */
  if (C.zf) goto L_129c434b;
  /* 129c4342 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c4345 mov dword ptr [0x129eca84], ecx */
  w32((uint32_t)(0x129eca84), (ECX));
L_129c434b:;
  /* 129c434b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c434e mov esp, ebp */
  ESP = (EBP);
  /* 129c4350 pop ebp */
  EBP = (pop32());
  /* 129c4351 ret  */
  ESPCHK(0x129c4330u, _esp0);
  ESP += 4; return;
}

/* FUN_10004360 @ 0x129c4360 (103 bytes, 38 insns) */
void f_129c4360(void) {
  FTRACE(0x129c4360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c4360 push ebp */
  push32((uint32_t)(EBP));
  /* 129c4361 mov ebp, esp */
  EBP = (ESP);
  /* 129c4363 push ecx */
  push32((uint32_t)(ECX));
  /* 129c4364 mov eax, dword ptr [0x129eca84] */
  EAX = (r32((uint32_t)(0x129eca84)));
  /* 129c4369 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 129c436c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c436e jne 0x129c4372 */
  if (!C.zf) goto L_129c4372;
  /* 129c4370 jmp 0x129c43c3 */
  goto L_129c43c3;
L_129c4372:;
  /* 129c4372 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c4374 call 0x129c6820 */
  push32(0x129c4379u); f_129c6820();
  /* 129c4379 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c437c mov ecx, dword ptr [0x129ee4dc] */
  ECX = (r32((uint32_t)(0x129ee4dc)));
  /* 129c4382 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129c4385 jmp 0x129c438f */
  goto L_129c438f;
L_129c4387:;
  /* 129c4387 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c438a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129c438c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129c438f:;
  /* 129c438f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4393 je 0x129c43b9 */
  if (C.zf) goto L_129c43b9;
  /* 129c4395 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4398 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 129c439b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129c43a1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c43a4 jne 0x129c43b7 */
  if (!C.zf) goto L_129c43b7;
  /* 129c43a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c43a9 push eax */
  push32((uint32_t)(EAX));
  /* 129c43aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c43ad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c43b0 push ecx */
  push32((uint32_t)(ECX));
  /* 129c43b1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x129c43b4u);
  /* 129c43b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c43b7:;
  /* 129c43b7 jmp 0x129c4387 */
  goto L_129c4387;
L_129c43b9:;
  /* 129c43b9 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c43bb call 0x129c68c0 */
  push32(0x129c43c0u); f_129c68c0();
  /* 129c43c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c43c3:;
  /* 129c43c3 mov esp, ebp */
  ESP = (EBP);
  /* 129c43c5 pop ebp */
  EBP = (pop32());
  /* 129c43c6 ret  */
  ESPCHK(0x129c4360u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x129c43d0 (75 bytes, 28 insns) */
void f_129c43d0(void) {
  FTRACE(0x129c43d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c43d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c43d1 mov ebp, esp */
  EBP = (ESP);
  /* 129c43d3 push ecx */
  push32((uint32_t)(ECX));
  /* 129c43d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c43d8 je 0x129c440d */
  if (C.zf) goto L_129c440d;
  /* 129c43da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c43dd push eax */
  push32((uint32_t)(EAX));
  /* 129c43de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c43e1 push ecx */
  push32((uint32_t)(ECX));
  /* 129c43e2 call dword ptr [0x129f023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f023c))), 0x129c43e8u);
  /* 129c43e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c43ea jne 0x129c440d */
  if (!C.zf) goto L_129c440d;
  /* 129c43ec cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c43f0 je 0x129c4404 */
  if (C.zf) goto L_129c4404;
  /* 129c43f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c43f5 push edx */
  push32((uint32_t)(EDX));
  /* 129c43f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c43f9 push eax */
  push32((uint32_t)(EAX));
  /* 129c43fa call dword ptr [0x129f02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02e8))), 0x129c4400u);
  /* 129c4400 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c4402 jne 0x129c440d */
  if (!C.zf) goto L_129c440d;
L_129c4404:;
  /* 129c4404 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 129c440b jmp 0x129c4414 */
  goto L_129c4414;
L_129c440d:;
  /* 129c440d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_129c4414:;
  /* 129c4414 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4417 mov esp, ebp */
  ESP = (EBP);
  /* 129c4419 pop ebp */
  EBP = (pop32());
  /* 129c441a ret  */
  ESPCHK(0x129c43d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004420 @ 0x129c4420 (134 bytes, 50 insns) */
void f_129c4420(void) {
  FTRACE(0x129c4420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c4420 push ebp */
  push32((uint32_t)(EBP));
  /* 129c4421 mov ebp, esp */
  EBP = (ESP);
  /* 129c4423 push ecx */
  push32((uint32_t)(ECX));
  /* 129c4424 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4428 jne 0x129c442e */
  if (!C.zf) goto L_129c442e;
  /* 129c442a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c442c jmp 0x129c44a2 */
  goto L_129c44a2;
L_129c442e:;
  /* 129c442e push 1 */
  push32((uint32_t)(0x1u));
  /* 129c4430 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 129c4432 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c4435 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c4438 push eax */
  push32((uint32_t)(EAX));
  /* 129c4439 call 0x129c43d0 */
  push32(0x129c443eu); f_129c43d0();
  /* 129c443e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4441 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c4443 jne 0x129c4449 */
  if (!C.zf) goto L_129c4449;
  /* 129c4445 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c4447 jmp 0x129c44a2 */
  goto L_129c44a2;
L_129c4449:;
  /* 129c4449 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c444c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c444f push ecx */
  push32((uint32_t)(ECX));
  /* 129c4450 call 0x129c7120 */
  push32(0x129c4455u); f_129c7120();
  /* 129c4455 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4458 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c445b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c445f je 0x129c4476 */
  if (C.zf) goto L_129c4476;
  /* 129c4461 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c4464 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c4467 push edx */
  push32((uint32_t)(EDX));
  /* 129c4468 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c446b push eax */
  push32((uint32_t)(EAX));
  /* 129c446c call 0x129c7180 */
  push32(0x129c4471u); f_129c7180();
  /* 129c4471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4474 jmp 0x129c44a2 */
  goto L_129c44a2;
L_129c4476:;
  /* 129c4476 mov ecx, dword ptr [0x129ee490] */
  ECX = (r32((uint32_t)(0x129ee490)));
  /* 129c447c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 129c4482 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c4484 je 0x129c448d */
  if (C.zf) goto L_129c448d;
  /* 129c4486 mov eax, 1 */
  EAX = (0x1u);
  /* 129c448b jmp 0x129c44a2 */
  goto L_129c44a2;
L_129c448d:;
  /* 129c448d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c4490 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c4493 push edx */
  push32((uint32_t)(EDX));
  /* 129c4494 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4496 mov eax, dword ptr [0x129efe2c] */
  EAX = (r32((uint32_t)(0x129efe2c)));
  /* 129c449b push eax */
  push32((uint32_t)(EAX));
  /* 129c449c call dword ptr [0x129f0240] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0240))), 0x129c44a2u);
L_129c44a2:;
  /* 129c44a2 mov esp, ebp */
  ESP = (EBP);
  /* 129c44a4 pop ebp */
  EBP = (pop32());
  /* 129c44a5 ret  */
  ESPCHK(0x129c4420u, _esp0);
  ESP += 4; return;
}

/* FUN_100044b0 @ 0x129c44b0 (227 bytes, 80 insns) */
void f_129c44b0(void) {
  FTRACE(0x129c44b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c44b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c44b1 mov ebp, esp */
  EBP = (ESP);
  /* 129c44b3 push ecx */
  push32((uint32_t)(ECX));
  /* 129c44b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c44b7 push eax */
  push32((uint32_t)(EAX));
  /* 129c44b8 call 0x129c4420 */
  push32(0x129c44bdu); f_129c4420();
  /* 129c44bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c44c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c44c2 jne 0x129c44cb */
  if (!C.zf) goto L_129c44cb;
  /* 129c44c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c44c6 jmp 0x129c458f */
  goto L_129c458f;
L_129c44cb:;
  /* 129c44cb push 9 */
  push32((uint32_t)(0x9u));
  /* 129c44cd call 0x129c6820 */
  push32(0x129c44d2u); f_129c6820();
  /* 129c44d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c44d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c44d8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c44db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129c44de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c44e1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129c44e4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c44e9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c44ec je 0x129c4510 */
  if (C.zf) goto L_129c4510;
  /* 129c44ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c44f1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c44f5 je 0x129c4510 */
  if (C.zf) goto L_129c4510;
  /* 129c44f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c44fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129c44fd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c4502 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4505 je 0x129c4510 */
  if (C.zf) goto L_129c4510;
  /* 129c4507 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c450a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c450e jne 0x129c4583 */
  if (!C.zf) goto L_129c4583;
L_129c4510:;
  /* 129c4510 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c4512 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c4515 push edx */
  push32((uint32_t)(EDX));
  /* 129c4516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c4519 push eax */
  push32((uint32_t)(EAX));
  /* 129c451a call 0x129c43d0 */
  push32(0x129c451fu); f_129c43d0();
  /* 129c451f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4522 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c4524 je 0x129c4583 */
  if (C.zf) goto L_129c4583;
  /* 129c4526 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4529 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 129c452c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c452f jne 0x129c4583 */
  if (!C.zf) goto L_129c4583;
  /* 129c4531 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4534 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 129c4537 cmp ecx, dword ptr [0x129eca88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129eca88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c453d jg 0x129c4583 */
  if ((!C.zf&&C.sf==C.of)) goto L_129c4583;
  /* 129c453f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4543 je 0x129c4550 */
  if (C.zf) goto L_129c4550;
  /* 129c4545 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c4548 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c454b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 129c454e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_129c4550:;
  /* 129c4550 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4554 je 0x129c4561 */
  if (C.zf) goto L_129c4561;
  /* 129c4556 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c4559 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c455c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 129c455f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_129c4561:;
  /* 129c4561 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4565 je 0x129c4572 */
  if (C.zf) goto L_129c4572;
  /* 129c4567 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c456a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c456d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 129c4570 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_129c4572:;
  /* 129c4572 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c4574 call 0x129c68c0 */
  push32(0x129c4579u); f_129c68c0();
  /* 129c4579 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c457c mov eax, 1 */
  EAX = (0x1u);
  /* 129c4581 jmp 0x129c458f */
  goto L_129c458f;
L_129c4583:;
  /* 129c4583 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c4585 call 0x129c68c0 */
  push32(0x129c458au); f_129c68c0();
  /* 129c458a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c458d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129c458f:;
  /* 129c458f mov esp, ebp */
  ESP = (EBP);
  /* 129c4591 pop ebp */
  EBP = (pop32());
  /* 129c4592 ret  */
  ESPCHK(0x129c44b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100045a0 @ 0x129c45a0 (28 bytes, 11 insns) */
void f_129c45a0(void) {
  FTRACE(0x129c45a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c45a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c45a1 mov ebp, esp */
  EBP = (ESP);
  /* 129c45a3 push ecx */
  push32((uint32_t)(ECX));
  /* 129c45a4 mov eax, dword ptr [0x129efe38] */
  EAX = (r32((uint32_t)(0x129efe38)));
  /* 129c45a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c45ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c45af mov dword ptr [0x129efe38], ecx */
  w32((uint32_t)(0x129efe38), (ECX));
  /* 129c45b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c45b8 mov esp, ebp */
  ESP = (EBP);
  /* 129c45ba pop ebp */
  EBP = (pop32());
  /* 129c45bb ret  */
  ESPCHK(0x129c45a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100045c0 @ 0x129c45c0 (362 bytes, 116 insns) */
void f_129c45c0(void) {
  FTRACE(0x129c45c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c45c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c45c1 mov ebp, esp */
  EBP = (ESP);
  /* 129c45c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c45c6 push ebx */
  push32((uint32_t)(EBX));
  /* 129c45c7 push esi */
  push32((uint32_t)(ESI));
  /* 129c45c8 push edi */
  push32((uint32_t)(EDI));
  /* 129c45c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c45cd jne 0x129c45fa */
  if (!C.zf) goto L_129c45fa;
L_129c45cf:;
  /* 129c45cf push 0x129e9924 */
  push32((uint32_t)(0x129e9924u));
  /* 129c45d4 push 0x129e943c */
  push32((uint32_t)(0x129e943cu));
  /* 129c45d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c45db push 0 */
  push32((uint32_t)(0x0u));
  /* 129c45dd push 0 */
  push32((uint32_t)(0x0u));
  /* 129c45df push 0 */
  push32((uint32_t)(0x0u));
  /* 129c45e1 call 0x129c1ee0 */
  push32(0x129c45e6u); f_129c1ee0();
  /* 129c45e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c45e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c45ec jne 0x129c45ef */
  if (!C.zf) goto L_129c45ef;
  /* 129c45ee int3  */
  x86_unimpl("int3 @ 0x129c45ee");
L_129c45ef:;
  /* 129c45ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c45f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c45f3 jne 0x129c45cf */
  if (!C.zf) goto L_129c45cf;
  /* 129c45f5 jmp 0x129c4723 */
  goto L_129c4723;
L_129c45fa:;
  /* 129c45fa push 9 */
  push32((uint32_t)(0x9u));
  /* 129c45fc call 0x129c6820 */
  push32(0x129c4601u); f_129c6820();
  /* 129c4601 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4604 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c4607 mov edx, dword ptr [0x129ee4dc] */
  EDX = (r32((uint32_t)(0x129ee4dc)));
  /* 129c460d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 129c460f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129c4616 jmp 0x129c4621 */
  goto L_129c4621;
L_129c4618:;
  /* 129c4618 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c461b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c461e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129c4621:;
  /* 129c4621 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4625 jge 0x129c4645 */
  if ((C.sf==C.of)) goto L_129c4645;
  /* 129c4627 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c462a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c462d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 129c4635 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4638 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c463b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 129c4643 jmp 0x129c4618 */
  goto L_129c4618;
L_129c4645:;
  /* 129c4645 mov edx, dword ptr [0x129ee4dc] */
  EDX = (r32((uint32_t)(0x129ee4dc)));
  /* 129c464b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 129c464e jmp 0x129c4658 */
  goto L_129c4658;
L_129c4650:;
  /* 129c4650 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c4653 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129c4655 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_129c4658:;
  /* 129c4658 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c465c je 0x129c4701 */
  if (C.zf) goto L_129c4701;
  /* 129c4662 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c4665 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129c4668 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c466d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c466f jl 0x129c46d7 */
  if ((C.sf!=C.of)) goto L_129c46d7;
  /* 129c4671 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c4674 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 129c4677 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129c467d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4680 jge 0x129c46d7 */
  if ((C.sf==C.of)) goto L_129c46d7;
  /* 129c4682 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c4685 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 129c4688 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 129c468e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c4691 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 129c4695 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4698 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c469b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 129c469e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129c46a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c46a7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 129c46ab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c46ae mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129c46b1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c46b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c46b9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 129c46bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c46c0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c46c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c46c6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 129c46c9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c46ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c46d1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 129c46d5 jmp 0x129c46fc */
  goto L_129c46fc;
L_129c46d7:;
  /* 129c46d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c46da push edx */
  push32((uint32_t)(EDX));
  /* 129c46db push 0x129e9900 */
  push32((uint32_t)(0x129e9900u));
  /* 129c46e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c46e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c46e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c46e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c46e8 call 0x129c1ee0 */
  push32(0x129c46edu); f_129c1ee0();
  /* 129c46ed add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c46f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c46f3 jne 0x129c46f6 */
  if (!C.zf) goto L_129c46f6;
  /* 129c46f5 int3  */
  x86_unimpl("int3 @ 0x129c46f5");
L_129c46f6:;
  /* 129c46f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c46f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c46fa jne 0x129c46d7 */
  if (!C.zf) goto L_129c46d7;
L_129c46fc:;
  /* 129c46fc jmp 0x129c4650 */
  goto L_129c4650;
L_129c4701:;
  /* 129c4701 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c4704 mov edx, dword ptr [0x129ee4e4] */
  EDX = (r32((uint32_t)(0x129ee4e4)));
  /* 129c470a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 129c470d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c4710 mov ecx, dword ptr [0x129ee4d8] */
  ECX = (r32((uint32_t)(0x129ee4d8)));
  /* 129c4716 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 129c4719 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c471b call 0x129c68c0 */
  push32(0x129c4720u); f_129c68c0();
  /* 129c4720 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c4723:;
  /* 129c4723 pop edi */
  EDI = (pop32());
  /* 129c4724 pop esi */
  ESI = (pop32());
  /* 129c4725 pop ebx */
  EBX = (pop32());
  /* 129c4726 mov esp, ebp */
  ESP = (EBP);
  /* 129c4728 pop ebp */
  EBP = (pop32());
  /* 129c4729 ret  */
  ESPCHK(0x129c45c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004730 @ 0x129c4730 (291 bytes, 95 insns) */
void f_129c4730(void) {
  FTRACE(0x129c4730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c4730 push ebp */
  push32((uint32_t)(EBP));
  /* 129c4731 mov ebp, esp */
  EBP = (ESP);
  /* 129c4733 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c4736 push ebx */
  push32((uint32_t)(EBX));
  /* 129c4737 push esi */
  push32((uint32_t)(ESI));
  /* 129c4738 push edi */
  push32((uint32_t)(EDI));
  /* 129c4739 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 129c4740 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4744 je 0x129c4752 */
  if (C.zf) goto L_129c4752;
  /* 129c4746 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c474a je 0x129c4752 */
  if (C.zf) goto L_129c4752;
  /* 129c474c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4750 jne 0x129c4780 */
  if (!C.zf) goto L_129c4780;
L_129c4752:;
  /* 129c4752 push 0x129e994c */
  push32((uint32_t)(0x129e994cu));
  /* 129c4757 push 0x129e943c */
  push32((uint32_t)(0x129e943cu));
  /* 129c475c push 0 */
  push32((uint32_t)(0x0u));
  /* 129c475e push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4760 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4762 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4764 call 0x129c1ee0 */
  push32(0x129c4769u); f_129c1ee0();
  /* 129c4769 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c476c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c476f jne 0x129c4772 */
  if (!C.zf) goto L_129c4772;
  /* 129c4771 int3  */
  x86_unimpl("int3 @ 0x129c4771");
L_129c4772:;
  /* 129c4772 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c4774 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c4776 jne 0x129c4752 */
  if (!C.zf) goto L_129c4752;
  /* 129c4778 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c477b jmp 0x129c484c */
  goto L_129c484c;
L_129c4780:;
  /* 129c4780 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129c4787 jmp 0x129c4792 */
  goto L_129c4792;
L_129c4789:;
  /* 129c4789 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c478c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c478f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129c4792:;
  /* 129c4792 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4796 jge 0x129c481c */
  if ((C.sf==C.of)) goto L_129c481c;
  /* 129c479c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c479f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c47a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c47a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 129c47a8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 129c47ac sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c47b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c47b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c47b6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 129c47ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c47bd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c47c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c47c3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 129c47c6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 129c47ca sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c47ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c47d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c47d4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 129c47d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c47db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c47de cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c47e3 jne 0x129c47f2 */
  if (!C.zf) goto L_129c47f2;
  /* 129c47e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c47e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c47eb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c47f0 je 0x129c4817 */
  if (C.zf) goto L_129c4817;
L_129c47f2:;
  /* 129c47f2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c47f6 je 0x129c4817 */
  if (C.zf) goto L_129c4817;
  /* 129c47f8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c47fc jne 0x129c4810 */
  if (!C.zf) goto L_129c4810;
  /* 129c47fe cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4802 jne 0x129c4817 */
  if (!C.zf) goto L_129c4817;
  /* 129c4804 mov eax, dword ptr [0x129eca84] */
  EAX = (r32((uint32_t)(0x129eca84)));
  /* 129c4809 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 129c480c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c480e je 0x129c4817 */
  if (C.zf) goto L_129c4817;
L_129c4810:;
  /* 129c4810 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_129c4817:;
  /* 129c4817 jmp 0x129c4789 */
  goto L_129c4789;
L_129c481c:;
  /* 129c481c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c481f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c4822 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 129c4825 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c4828 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c482b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 129c482e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c4831 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c4834 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 129c4837 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c483a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c483d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 129c4840 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c4843 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 129c4849 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_129c484c:;
  /* 129c484c pop edi */
  EDI = (pop32());
  /* 129c484d pop esi */
  ESI = (pop32());
  /* 129c484e pop ebx */
  EBX = (pop32());
  /* 129c484f mov esp, ebp */
  ESP = (EBP);
  /* 129c4851 pop ebp */
  EBP = (pop32());
  /* 129c4852 ret  */
  ESPCHK(0x129c4730u, _esp0);
  ESP += 4; return;
}

/* FUN_10004860 @ 0x129c4860 (697 bytes, 253 insns) */
void f_129c4860(void) {
  FTRACE(0x129c4860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c4860 push ebp */
  push32((uint32_t)(EBP));
  /* 129c4861 mov ebp, esp */
  EBP = (ESP);
  /* 129c4863 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c4866 push ebx */
  push32((uint32_t)(EBX));
  /* 129c4867 push esi */
  push32((uint32_t)(ESI));
  /* 129c4868 push edi */
  push32((uint32_t)(EDI));
  /* 129c4869 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 129c4870 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c4872 call 0x129c6820 */
  push32(0x129c4877u); f_129c6820();
  /* 129c4877 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c487a:;
  /* 129c487a push 0x129e9a44 */
  push32((uint32_t)(0x129e9a44u));
  /* 129c487f push 0x129e943c */
  push32((uint32_t)(0x129e943cu));
  /* 129c4884 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4886 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4888 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c488a push 0 */
  push32((uint32_t)(0x0u));
  /* 129c488c call 0x129c1ee0 */
  push32(0x129c4891u); f_129c1ee0();
  /* 129c4891 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4894 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4897 jne 0x129c489a */
  if (!C.zf) goto L_129c489a;
  /* 129c4899 int3  */
  x86_unimpl("int3 @ 0x129c4899");
L_129c489a:;
  /* 129c489a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c489c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c489e jne 0x129c487a */
  if (!C.zf) goto L_129c487a;
  /* 129c48a0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c48a4 je 0x129c48ae */
  if (C.zf) goto L_129c48ae;
  /* 129c48a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c48a9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129c48ab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_129c48ae:;
  /* 129c48ae mov eax, dword ptr [0x129ee4dc] */
  EAX = (r32((uint32_t)(0x129ee4dc)));
  /* 129c48b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c48b6 jmp 0x129c48c0 */
  goto L_129c48c0;
L_129c48b8:;
  /* 129c48b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c48bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129c48bd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_129c48c0:;
  /* 129c48c0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c48c4 je 0x129c4ae2 */
  if (C.zf) goto L_129c4ae2;
  /* 129c48ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c48cd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c48d0 je 0x129c4ae2 */
  if (C.zf) goto L_129c4ae2;
  /* 129c48d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c48d9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 129c48dc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129c48e2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c48e5 je 0x129c4914 */
  if (C.zf) goto L_129c4914;
  /* 129c48e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c48ea mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 129c48ed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 129c48f3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c48f5 je 0x129c4914 */
  if (C.zf) goto L_129c4914;
  /* 129c48f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c48fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129c48fd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c4902 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4905 jne 0x129c4919 */
  if (!C.zf) goto L_129c4919;
  /* 129c4907 mov ecx, dword ptr [0x129eca84] */
  ECX = (r32((uint32_t)(0x129eca84)));
  /* 129c490d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 129c4910 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c4912 jne 0x129c4919 */
  if (!C.zf) goto L_129c4919;
L_129c4914:;
  /* 129c4914 jmp 0x129c4add */
  goto L_129c4add;
L_129c4919:;
  /* 129c4919 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c491c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4920 je 0x129c4992 */
  if (C.zf) goto L_129c4992;
  /* 129c4922 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4924 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c4926 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4929 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 129c492c push ecx */
  push32((uint32_t)(ECX));
  /* 129c492d call 0x129c43d0 */
  push32(0x129c4932u); f_129c43d0();
  /* 129c4932 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4935 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c4937 jne 0x129c4963 */
  if (!C.zf) goto L_129c4963;
L_129c4939:;
  /* 129c4939 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c493c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 129c493f push eax */
  push32((uint32_t)(EAX));
  /* 129c4940 push 0x129e9a30 */
  push32((uint32_t)(0x129e9a30u));
  /* 129c4945 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4947 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4949 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c494b push 0 */
  push32((uint32_t)(0x0u));
  /* 129c494d call 0x129c1ee0 */
  push32(0x129c4952u); f_129c1ee0();
  /* 129c4952 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4955 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4958 jne 0x129c495b */
  if (!C.zf) goto L_129c495b;
  /* 129c495a int3  */
  x86_unimpl("int3 @ 0x129c495a");
L_129c495b:;
  /* 129c495b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c495d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c495f jne 0x129c4939 */
  if (!C.zf) goto L_129c4939;
  /* 129c4961 jmp 0x129c4992 */
  goto L_129c4992;
L_129c4963:;
  /* 129c4963 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4966 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 129c4969 push eax */
  push32((uint32_t)(EAX));
  /* 129c496a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c496d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 129c4970 push edx */
  push32((uint32_t)(EDX));
  /* 129c4971 push 0x129e9a24 */
  push32((uint32_t)(0x129e9a24u));
  /* 129c4976 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4978 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c497a push 0 */
  push32((uint32_t)(0x0u));
  /* 129c497c push 0 */
  push32((uint32_t)(0x0u));
  /* 129c497e call 0x129c1ee0 */
  push32(0x129c4983u); f_129c1ee0();
  /* 129c4983 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4986 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4989 jne 0x129c498c */
  if (!C.zf) goto L_129c498c;
  /* 129c498b int3  */
  x86_unimpl("int3 @ 0x129c498b");
L_129c498c:;
  /* 129c498c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c498e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c4990 jne 0x129c4963 */
  if (!C.zf) goto L_129c4963;
L_129c4992:;
  /* 129c4992 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4995 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 129c4998 push edx */
  push32((uint32_t)(EDX));
  /* 129c4999 push 0x129e9a1c */
  push32((uint32_t)(0x129e9a1cu));
  /* 129c499e push 0 */
  push32((uint32_t)(0x0u));
  /* 129c49a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c49a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c49a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c49a6 call 0x129c1ee0 */
  push32(0x129c49abu); f_129c1ee0();
  /* 129c49ab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c49ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c49b1 jne 0x129c49b4 */
  if (!C.zf) goto L_129c49b4;
  /* 129c49b3 int3  */
  x86_unimpl("int3 @ 0x129c49b3");
L_129c49b4:;
  /* 129c49b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c49b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c49b8 jne 0x129c4992 */
  if (!C.zf) goto L_129c4992;
  /* 129c49ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c49bd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 129c49c0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129c49c6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c49c9 jne 0x129c4a3c */
  if (!C.zf) goto L_129c4a3c;
L_129c49cb:;
  /* 129c49cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c49ce mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129c49d1 push ecx */
  push32((uint32_t)(ECX));
  /* 129c49d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c49d5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129c49d8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 129c49db and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c49e0 push eax */
  push32((uint32_t)(EAX));
  /* 129c49e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c49e4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c49e7 push ecx */
  push32((uint32_t)(ECX));
  /* 129c49e8 push 0x129e99e8 */
  push32((uint32_t)(0x129e99e8u));
  /* 129c49ed push 0 */
  push32((uint32_t)(0x0u));
  /* 129c49ef push 0 */
  push32((uint32_t)(0x0u));
  /* 129c49f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c49f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c49f5 call 0x129c1ee0 */
  push32(0x129c49fau); f_129c1ee0();
  /* 129c49fa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c49fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4a00 jne 0x129c4a03 */
  if (!C.zf) goto L_129c4a03;
  /* 129c4a02 int3  */
  x86_unimpl("int3 @ 0x129c4a02");
L_129c4a03:;
  /* 129c4a03 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c4a05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c4a07 jne 0x129c49cb */
  if (!C.zf) goto L_129c49cb;
  /* 129c4a09 cmp dword ptr [0x129efe38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129efe38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4a10 je 0x129c4a2b */
  if (C.zf) goto L_129c4a2b;
  /* 129c4a12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4a15 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129c4a18 push ecx */
  push32((uint32_t)(ECX));
  /* 129c4a19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4a1c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4a1f push edx */
  push32((uint32_t)(EDX));
  /* 129c4a20 call dword ptr [0x129efe38] */
  call_ind((uint32_t)(r32((uint32_t)(0x129efe38))), 0x129c4a26u);
  /* 129c4a26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4a29 jmp 0x129c4a37 */
  goto L_129c4a37;
L_129c4a2b:;
  /* 129c4a2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4a2e push eax */
  push32((uint32_t)(EAX));
  /* 129c4a2f call 0x129c4b20 */
  push32(0x129c4a34u); f_129c4b20();
  /* 129c4a34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c4a37:;
  /* 129c4a37 jmp 0x129c4add */
  goto L_129c4add;
L_129c4a3c:;
  /* 129c4a3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4a3f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4a43 jne 0x129c4a82 */
  if (!C.zf) goto L_129c4a82;
L_129c4a45:;
  /* 129c4a45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4a48 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129c4a4b push eax */
  push32((uint32_t)(EAX));
  /* 129c4a4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4a4f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4a52 push ecx */
  push32((uint32_t)(ECX));
  /* 129c4a53 push 0x129e99c0 */
  push32((uint32_t)(0x129e99c0u));
  /* 129c4a58 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4a5a push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4a5c push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4a5e push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4a60 call 0x129c1ee0 */
  push32(0x129c4a65u); f_129c1ee0();
  /* 129c4a65 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4a68 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4a6b jne 0x129c4a6e */
  if (!C.zf) goto L_129c4a6e;
  /* 129c4a6d int3  */
  x86_unimpl("int3 @ 0x129c4a6d");
L_129c4a6e:;
  /* 129c4a6e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c4a70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c4a72 jne 0x129c4a45 */
  if (!C.zf) goto L_129c4a45;
  /* 129c4a74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4a77 push eax */
  push32((uint32_t)(EAX));
  /* 129c4a78 call 0x129c4b20 */
  push32(0x129c4a7du); f_129c4b20();
  /* 129c4a7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4a80 jmp 0x129c4add */
  goto L_129c4add;
L_129c4a82:;
  /* 129c4a82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4a85 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 129c4a88 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129c4a8e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4a91 jne 0x129c4add */
  if (!C.zf) goto L_129c4add;
L_129c4a93:;
  /* 129c4a93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4a96 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129c4a99 push ecx */
  push32((uint32_t)(ECX));
  /* 129c4a9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4a9d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129c4aa0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 129c4aa3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c4aa8 push eax */
  push32((uint32_t)(EAX));
  /* 129c4aa9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4aac add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4aaf push ecx */
  push32((uint32_t)(ECX));
  /* 129c4ab0 push 0x129e998c */
  push32((uint32_t)(0x129e998cu));
  /* 129c4ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4ab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4abb push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4abd call 0x129c1ee0 */
  push32(0x129c4ac2u); f_129c1ee0();
  /* 129c4ac2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4ac5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4ac8 jne 0x129c4acb */
  if (!C.zf) goto L_129c4acb;
  /* 129c4aca int3  */
  x86_unimpl("int3 @ 0x129c4aca");
L_129c4acb:;
  /* 129c4acb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c4acd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c4acf jne 0x129c4a93 */
  if (!C.zf) goto L_129c4a93;
  /* 129c4ad1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4ad4 push eax */
  push32((uint32_t)(EAX));
  /* 129c4ad5 call 0x129c4b20 */
  push32(0x129c4adau); f_129c4b20();
  /* 129c4ada add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c4add:;
  /* 129c4add jmp 0x129c48b8 */
  goto L_129c48b8;
L_129c4ae2:;
  /* 129c4ae2 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c4ae4 call 0x129c68c0 */
  push32(0x129c4ae9u); f_129c68c0();
  /* 129c4ae9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c4aec:;
  /* 129c4aec push 0x129e9974 */
  push32((uint32_t)(0x129e9974u));
  /* 129c4af1 push 0x129e943c */
  push32((uint32_t)(0x129e943cu));
  /* 129c4af6 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4af8 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4afa push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4afc push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4afe call 0x129c1ee0 */
  push32(0x129c4b03u); f_129c1ee0();
  /* 129c4b03 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4b06 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4b09 jne 0x129c4b0c */
  if (!C.zf) goto L_129c4b0c;
  /* 129c4b0b int3  */
  x86_unimpl("int3 @ 0x129c4b0b");
L_129c4b0c:;
  /* 129c4b0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c4b0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c4b10 jne 0x129c4aec */
  if (!C.zf) goto L_129c4aec;
  /* 129c4b12 pop edi */
  EDI = (pop32());
  /* 129c4b13 pop esi */
  ESI = (pop32());
  /* 129c4b14 pop ebx */
  EBX = (pop32());
  /* 129c4b15 mov esp, ebp */
  ESP = (EBP);
  /* 129c4b17 pop ebp */
  EBP = (pop32());
  /* 129c4b18 ret  */
  ESPCHK(0x129c4860u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b20 @ 0x129c4b20 (276 bytes, 89 insns) */
void f_129c4b20(void) {
  FTRACE(0x129c4b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c4b20 push ebp */
  push32((uint32_t)(EBP));
  /* 129c4b21 mov ebp, esp */
  EBP = (ESP);
  /* 129c4b23 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c4b26 push ebx */
  push32((uint32_t)(EBX));
  /* 129c4b27 push esi */
  push32((uint32_t)(ESI));
  /* 129c4b28 push edi */
  push32((uint32_t)(EDI));
  /* 129c4b29 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 129c4b30 jmp 0x129c4b3b */
  goto L_129c4b3b;
L_129c4b32:;
  /* 129c4b32 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 129c4b35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4b38 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_129c4b3b:;
  /* 129c4b3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c4b3e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4b42 jge 0x129c4b4f */
  if ((C.sf==C.of)) goto L_129c4b4f;
  /* 129c4b44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c4b47 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129c4b4a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 129c4b4d jmp 0x129c4b56 */
  goto L_129c4b56;
L_129c4b4f:;
  /* 129c4b4f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_129c4b56:;
  /* 129c4b56 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 129c4b59 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4b5c jge 0x129c4bfc */
  if ((C.sf==C.of)) goto L_129c4bfc;
  /* 129c4b62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c4b65 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4b68 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 129c4b6b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 129c4b6e cmp dword ptr [0x129ecea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ecea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4b75 jle 0x129c4b93 */
  if ((C.zf||C.sf!=C.of)) goto L_129c4b93;
  /* 129c4b77 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 129c4b7c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c4b7f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 129c4b85 push ecx */
  push32((uint32_t)(ECX));
  /* 129c4b86 call 0x129c8e30 */
  push32(0x129c4b8bu); f_129c8e30();
  /* 129c4b8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4b8e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 129c4b91 jmp 0x129c4bb0 */
  goto L_129c4bb0;
L_129c4b93:;
  /* 129c4b93 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c4b96 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 129c4b9c mov eax, dword ptr [0x129ecc98] */
  EAX = (r32((uint32_t)(0x129ecc98)));
  /* 129c4ba1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c4ba3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 129c4ba7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 129c4bad mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_129c4bb0:;
  /* 129c4bb0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4bb4 je 0x129c4bc4 */
  if (C.zf) goto L_129c4bc4;
  /* 129c4bb6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c4bb9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 129c4bbf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 129c4bc2 jmp 0x129c4bcb */
  goto L_129c4bcb;
L_129c4bc4:;
  /* 129c4bc4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_129c4bcb:;
  /* 129c4bcb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 129c4bce mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 129c4bd1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 129c4bd5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 129c4bd8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 129c4bde push edx */
  push32((uint32_t)(EDX));
  /* 129c4bdf push 0x129e9a68 */
  push32((uint32_t)(0x129e9a68u));
  /* 129c4be4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 129c4be7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c4bea lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 129c4bee push ecx */
  push32((uint32_t)(ECX));
  /* 129c4bef call 0x129c8d30 */
  push32(0x129c4bf4u); f_129c8d30();
  /* 129c4bf4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4bf7 jmp 0x129c4b32 */
  goto L_129c4b32;
L_129c4bfc:;
  /* 129c4bfc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 129c4bff mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_129c4c04:;
  /* 129c4c04 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 129c4c07 push eax */
  push32((uint32_t)(EAX));
  /* 129c4c08 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 129c4c0b push ecx */
  push32((uint32_t)(ECX));
  /* 129c4c0c push 0x129e9a58 */
  push32((uint32_t)(0x129e9a58u));
  /* 129c4c11 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4c13 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4c15 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4c17 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4c19 call 0x129c1ee0 */
  push32(0x129c4c1eu); f_129c1ee0();
  /* 129c4c1e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4c21 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4c24 jne 0x129c4c27 */
  if (!C.zf) goto L_129c4c27;
  /* 129c4c26 int3  */
  x86_unimpl("int3 @ 0x129c4c26");
L_129c4c27:;
  /* 129c4c27 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c4c29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c4c2b jne 0x129c4c04 */
  if (!C.zf) goto L_129c4c04;
  /* 129c4c2d pop edi */
  EDI = (pop32());
  /* 129c4c2e pop esi */
  ESI = (pop32());
  /* 129c4c2f pop ebx */
  EBX = (pop32());
  /* 129c4c30 mov esp, ebp */
  ESP = (EBP);
  /* 129c4c32 pop ebp */
  EBP = (pop32());
  /* 129c4c33 ret  */
  ESPCHK(0x129c4b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c40 @ 0x129c4c40 (116 bytes, 46 insns) */
void f_129c4c40(void) {
  FTRACE(0x129c4c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c4c40 push ebp */
  push32((uint32_t)(EBP));
  /* 129c4c41 mov ebp, esp */
  EBP = (ESP);
  /* 129c4c43 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c4c46 push ebx */
  push32((uint32_t)(EBX));
  /* 129c4c47 push esi */
  push32((uint32_t)(ESI));
  /* 129c4c48 push edi */
  push32((uint32_t)(EDI));
  /* 129c4c49 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 129c4c4c push eax */
  push32((uint32_t)(EAX));
  /* 129c4c4d call 0x129c45c0 */
  push32(0x129c4c52u); f_129c45c0();
  /* 129c4c52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4c55 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4c59 jne 0x129c4c74 */
  if (!C.zf) goto L_129c4c74;
  /* 129c4c5b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4c5f jne 0x129c4c74 */
  if (!C.zf) goto L_129c4c74;
  /* 129c4c61 mov ecx, dword ptr [0x129eca84] */
  ECX = (r32((uint32_t)(0x129eca84)));
  /* 129c4c67 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 129c4c6a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c4c6c je 0x129c4cab */
  if (C.zf) goto L_129c4cab;
  /* 129c4c6e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4c72 je 0x129c4cab */
  if (C.zf) goto L_129c4cab;
L_129c4c74:;
  /* 129c4c74 push 0x129e9a70 */
  push32((uint32_t)(0x129e9a70u));
  /* 129c4c79 push 0x129e943c */
  push32((uint32_t)(0x129e943cu));
  /* 129c4c7e push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4c80 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4c82 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4c84 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4c86 call 0x129c1ee0 */
  push32(0x129c4c8bu); f_129c1ee0();
  /* 129c4c8b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4c8e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4c91 jne 0x129c4c94 */
  if (!C.zf) goto L_129c4c94;
  /* 129c4c93 int3  */
  x86_unimpl("int3 @ 0x129c4c93");
L_129c4c94:;
  /* 129c4c94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c4c96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c4c98 jne 0x129c4c74 */
  if (!C.zf) goto L_129c4c74;
  /* 129c4c9a push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4c9c call 0x129c4860 */
  push32(0x129c4ca1u); f_129c4860();
  /* 129c4ca1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4ca4 mov eax, 1 */
  EAX = (0x1u);
  /* 129c4ca9 jmp 0x129c4cad */
  goto L_129c4cad;
L_129c4cab:;
  /* 129c4cab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129c4cad:;
  /* 129c4cad pop edi */
  EDI = (pop32());
  /* 129c4cae pop esi */
  ESI = (pop32());
  /* 129c4caf pop ebx */
  EBX = (pop32());
  /* 129c4cb0 mov esp, ebp */
  ESP = (EBP);
  /* 129c4cb2 pop ebp */
  EBP = (pop32());
  /* 129c4cb3 ret  */
  ESPCHK(0x129c4c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cc0 @ 0x129c4cc0 (197 bytes, 79 insns) */
void f_129c4cc0(void) {
  FTRACE(0x129c4cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c4cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c4cc1 mov ebp, esp */
  EBP = (ESP);
  /* 129c4cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 129c4cc4 push ebx */
  push32((uint32_t)(EBX));
  /* 129c4cc5 push esi */
  push32((uint32_t)(ESI));
  /* 129c4cc6 push edi */
  push32((uint32_t)(EDI));
  /* 129c4cc7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4ccb jne 0x129c4cd2 */
  if (!C.zf) goto L_129c4cd2;
  /* 129c4ccd jmp 0x129c4d7e */
  goto L_129c4d7e;
L_129c4cd2:;
  /* 129c4cd2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129c4cd9 jmp 0x129c4ce4 */
  goto L_129c4ce4;
L_129c4cdb:;
  /* 129c4cdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4cde add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4ce1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129c4ce4:;
  /* 129c4ce4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4ce8 jge 0x129c4d2e */
  if ((C.sf==C.of)) goto L_129c4d2e;
L_129c4cea:;
  /* 129c4cea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4ced mov edx, dword ptr [ecx*4 + 0x129eca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129eca94)));
  /* 129c4cf4 push edx */
  push32((uint32_t)(EDX));
  /* 129c4cf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4cf8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c4cfb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 129c4cff push edx */
  push32((uint32_t)(EDX));
  /* 129c4d00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4d03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c4d06 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 129c4d0a push edx */
  push32((uint32_t)(EDX));
  /* 129c4d0b push 0x129e9acc */
  push32((uint32_t)(0x129e9accu));
  /* 129c4d10 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4d12 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4d14 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4d16 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4d18 call 0x129c1ee0 */
  push32(0x129c4d1du); f_129c1ee0();
  /* 129c4d1d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4d20 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4d23 jne 0x129c4d26 */
  if (!C.zf) goto L_129c4d26;
  /* 129c4d25 int3  */
  x86_unimpl("int3 @ 0x129c4d25");
L_129c4d26:;
  /* 129c4d26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c4d28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c4d2a jne 0x129c4cea */
  if (!C.zf) goto L_129c4cea;
  /* 129c4d2c jmp 0x129c4cdb */
  goto L_129c4cdb;
L_129c4d2e:;
  /* 129c4d2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c4d31 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 129c4d34 push edx */
  push32((uint32_t)(EDX));
  /* 129c4d35 push 0x129e9aa8 */
  push32((uint32_t)(0x129e9aa8u));
  /* 129c4d3a push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4d3c push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4d3e push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4d42 call 0x129c1ee0 */
  push32(0x129c4d47u); f_129c1ee0();
  /* 129c4d47 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4d4a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4d4d jne 0x129c4d50 */
  if (!C.zf) goto L_129c4d50;
  /* 129c4d4f int3  */
  x86_unimpl("int3 @ 0x129c4d4f");
L_129c4d50:;
  /* 129c4d50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c4d52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c4d54 jne 0x129c4d2e */
  if (!C.zf) goto L_129c4d2e;
L_129c4d56:;
  /* 129c4d56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c4d59 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 129c4d5c push edx */
  push32((uint32_t)(EDX));
  /* 129c4d5d push 0x129e9a88 */
  push32((uint32_t)(0x129e9a88u));
  /* 129c4d62 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4d64 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4d66 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4d68 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4d6a call 0x129c1ee0 */
  push32(0x129c4d6fu); f_129c1ee0();
  /* 129c4d6f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4d72 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4d75 jne 0x129c4d78 */
  if (!C.zf) goto L_129c4d78;
  /* 129c4d77 int3  */
  x86_unimpl("int3 @ 0x129c4d77");
L_129c4d78:;
  /* 129c4d78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c4d7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c4d7c jne 0x129c4d56 */
  if (!C.zf) goto L_129c4d56;
L_129c4d7e:;
  /* 129c4d7e pop edi */
  EDI = (pop32());
  /* 129c4d7f pop esi */
  ESI = (pop32());
  /* 129c4d80 pop ebx */
  EBX = (pop32());
  /* 129c4d81 mov esp, ebp */
  ESP = (EBP);
  /* 129c4d83 pop ebp */
  EBP = (pop32());
  /* 129c4d84 ret  */
  ESPCHK(0x129c4cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d90 @ 0x129c4d90 (329 bytes, 102 insns) */
void f_129c4d90(void) {
  FTRACE(0x129c4d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c4d90 push ebp */
  push32((uint32_t)(EBP));
  /* 129c4d91 mov ebp, esp */
  EBP = (ESP);
  /* 129c4d93 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c4d96 cmp dword ptr [0x129effb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129effb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4d9d jne 0x129c4da4 */
  if (!C.zf) goto L_129c4da4;
  /* 129c4d9f call 0x129c96d0 */
  push32(0x129c4da4u); f_129c96d0();
L_129c4da4:;
  /* 129c4da4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 129c4dab mov eax, dword ptr [0x129ee478] */
  EAX = (r32((uint32_t)(0x129ee478)));
  /* 129c4db0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129c4db3:;
  /* 129c4db3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4db6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129c4db9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c4dbb je 0x129c4de9 */
  if (C.zf) goto L_129c4de9;
  /* 129c4dbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4dc0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129c4dc3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4dc6 je 0x129c4dd1 */
  if (C.zf) goto L_129c4dd1;
  /* 129c4dc8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c4dcb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4dce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_129c4dd1:;
  /* 129c4dd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4dd4 push eax */
  push32((uint32_t)(EAX));
  /* 129c4dd5 call 0x129c5c50 */
  push32(0x129c4ddau); f_129c5c50();
  /* 129c4dda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4ddd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4de0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 129c4de4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129c4de7 jmp 0x129c4db3 */
  goto L_129c4db3;
L_129c4de9:;
  /* 129c4de9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 129c4deb push 0x129e9aec */
  push32((uint32_t)(0x129e9aecu));
  /* 129c4df0 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c4df2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c4df5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 129c4dfc push ecx */
  push32((uint32_t)(ECX));
  /* 129c4dfd call 0x129c2e20 */
  push32(0x129c4e02u); f_129c2e20();
  /* 129c4e02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4e05 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129c4e08 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c4e0b mov dword ptr [0x129ee4ac], edx */
  w32((uint32_t)(0x129ee4ac), (EDX));
  /* 129c4e11 cmp dword ptr [0x129ee4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4e18 jne 0x129c4e24 */
  if (!C.zf) goto L_129c4e24;
  /* 129c4e1a push 9 */
  push32((uint32_t)(0x9u));
  /* 129c4e1c call 0x129c1d90 */
  push32(0x129c4e21u); f_129c1d90();
  /* 129c4e21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c4e24:;
  /* 129c4e24 mov eax, dword ptr [0x129ee478] */
  EAX = (r32((uint32_t)(0x129ee478)));
  /* 129c4e29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c4e2c jmp 0x129c4e37 */
  goto L_129c4e37;
L_129c4e2e:;
  /* 129c4e2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4e31 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4e34 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129c4e37:;
  /* 129c4e37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4e3a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129c4e3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c4e3f je 0x129c4ea7 */
  if (C.zf) goto L_129c4ea7;
  /* 129c4e41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4e44 push ecx */
  push32((uint32_t)(ECX));
  /* 129c4e45 call 0x129c5c50 */
  push32(0x129c4e4au); f_129c5c50();
  /* 129c4e4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4e4d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4e50 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 129c4e53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4e56 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129c4e59 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4e5c je 0x129c4ea5 */
  if (C.zf) goto L_129c4ea5;
  /* 129c4e5e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 129c4e60 push 0x129e9aec */
  push32((uint32_t)(0x129e9aecu));
  /* 129c4e65 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c4e67 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c4e6a push ecx */
  push32((uint32_t)(ECX));
  /* 129c4e6b call 0x129c2e20 */
  push32(0x129c4e70u); f_129c2e20();
  /* 129c4e70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4e73 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c4e76 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 129c4e78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c4e7b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4e7e jne 0x129c4e8a */
  if (!C.zf) goto L_129c4e8a;
  /* 129c4e80 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c4e82 call 0x129c1d90 */
  push32(0x129c4e87u); f_129c1d90();
  /* 129c4e87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c4e8a:;
  /* 129c4e8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4e8d push ecx */
  push32((uint32_t)(ECX));
  /* 129c4e8e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c4e91 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129c4e93 push eax */
  push32((uint32_t)(EAX));
  /* 129c4e94 call 0x129c5dd0 */
  push32(0x129c4e99u); f_129c5dd0();
  /* 129c4e99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4e9c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c4e9f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4ea2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_129c4ea5:;
  /* 129c4ea5 jmp 0x129c4e2e */
  goto L_129c4e2e;
L_129c4ea7:;
  /* 129c4ea7 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c4ea9 mov edx, dword ptr [0x129ee478] */
  EDX = (r32((uint32_t)(0x129ee478)));
  /* 129c4eaf push edx */
  push32((uint32_t)(EDX));
  /* 129c4eb0 call 0x129c38b0 */
  push32(0x129c4eb5u); f_129c38b0();
  /* 129c4eb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4eb8 mov dword ptr [0x129ee478], 0 */
  w32((uint32_t)(0x129ee478), (0x0u));
  /* 129c4ec2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c4ec5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 129c4ecb mov dword ptr [0x129effa0], 1 */
  w32((uint32_t)(0x129effa0), (0x1u));
  /* 129c4ed5 mov esp, ebp */
  ESP = (EBP);
  /* 129c4ed7 pop ebp */
  EBP = (pop32());
  /* 129c4ed8 ret  */
  ESPCHK(0x129c4d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ee0 @ 0x129c4ee0 (216 bytes, 69 insns) */
void f_129c4ee0(void) {
  FTRACE(0x129c4ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c4ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c4ee1 mov ebp, esp */
  EBP = (ESP);
  /* 129c4ee3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c4ee6 cmp dword ptr [0x129effb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129effb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4eed jne 0x129c4ef4 */
  if (!C.zf) goto L_129c4ef4;
  /* 129c4eef call 0x129c96d0 */
  push32(0x129c4ef4u); f_129c96d0();
L_129c4ef4:;
  /* 129c4ef4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 129c4ef9 push 0x129ee4e8 */
  push32((uint32_t)(0x129ee4e8u));
  /* 129c4efe push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4f00 call dword ptr [0x129f02a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02a8))), 0x129c4f06u);
  /* 129c4f06 mov dword ptr [0x129ee4bc], 0x129ee4e8 */
  w32((uint32_t)(0x129ee4bc), (0x129ee4e8u));
  /* 129c4f10 mov eax, dword ptr [0x129effcc] */
  EAX = (r32((uint32_t)(0x129effcc)));
  /* 129c4f15 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129c4f18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c4f1a jne 0x129c4f27 */
  if (!C.zf) goto L_129c4f27;
  /* 129c4f1c mov edx, dword ptr [0x129ee4bc] */
  EDX = (r32((uint32_t)(0x129ee4bc)));
  /* 129c4f22 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 129c4f25 jmp 0x129c4f2f */
  goto L_129c4f2f;
L_129c4f27:;
  /* 129c4f27 mov eax, dword ptr [0x129effcc] */
  EAX = (r32((uint32_t)(0x129effcc)));
  /* 129c4f2c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_129c4f2f:;
  /* 129c4f2f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c4f32 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 129c4f35 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 129c4f38 push edx */
  push32((uint32_t)(EDX));
  /* 129c4f39 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 129c4f3c push eax */
  push32((uint32_t)(EAX));
  /* 129c4f3d push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4f3f push 0 */
  push32((uint32_t)(0x0u));
  /* 129c4f41 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c4f44 push ecx */
  push32((uint32_t)(ECX));
  /* 129c4f45 call 0x129c4fc0 */
  push32(0x129c4f4au); f_129c4fc0();
  /* 129c4f4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4f4d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 129c4f52 push 0x129e9af8 */
  push32((uint32_t)(0x129e9af8u));
  /* 129c4f57 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c4f59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c4f5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4f5f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 129c4f62 push ecx */
  push32((uint32_t)(ECX));
  /* 129c4f63 call 0x129c2e20 */
  push32(0x129c4f68u); f_129c2e20();
  /* 129c4f68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4f6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129c4f6e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4f72 jne 0x129c4f7e */
  if (!C.zf) goto L_129c4f7e;
  /* 129c4f74 push 8 */
  push32((uint32_t)(0x8u));
  /* 129c4f76 call 0x129c1d90 */
  push32(0x129c4f7bu); f_129c1d90();
  /* 129c4f7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c4f7e:;
  /* 129c4f7e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 129c4f81 push edx */
  push32((uint32_t)(EDX));
  /* 129c4f82 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 129c4f85 push eax */
  push32((uint32_t)(EAX));
  /* 129c4f86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c4f89 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c4f8c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 129c4f8f push eax */
  push32((uint32_t)(EAX));
  /* 129c4f90 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c4f93 push ecx */
  push32((uint32_t)(ECX));
  /* 129c4f94 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c4f97 push edx */
  push32((uint32_t)(EDX));
  /* 129c4f98 call 0x129c4fc0 */
  push32(0x129c4f9du); f_129c4fc0();
  /* 129c4f9d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4fa0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c4fa3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c4fa6 mov dword ptr [0x129ee4a0], eax */
  w32((uint32_t)(0x129ee4a0), (EAX));
  /* 129c4fab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c4fae mov dword ptr [0x129ee4a4], ecx */
  w32((uint32_t)(0x129ee4a4), (ECX));
  /* 129c4fb4 mov esp, ebp */
  ESP = (EBP);
  /* 129c4fb6 pop ebp */
  EBP = (pop32());
  /* 129c4fb7 ret  */
  ESPCHK(0x129c4ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fc0 @ 0x129c4fc0 (1060 bytes, 360 insns) */
void f_129c4fc0(void) {
  FTRACE(0x129c4fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c4fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c4fc1 mov ebp, esp */
  EBP = (ESP);
  /* 129c4fc3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c4fc6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c4fc9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 129c4fcf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c4fd2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 129c4fd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c4fdb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129c4fde cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4fe2 je 0x129c4ff5 */
  if (C.zf) goto L_129c4ff5;
  /* 129c4fe4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c4fe7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c4fea mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 129c4fec mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c4fef add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c4ff2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_129c4ff5:;
  /* 129c4ff5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c4ff8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129c4ffb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c4ffe jne 0x129c50cd */
  if (!C.zf) goto L_129c50cd;
L_129c5004:;
  /* 129c5004 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5007 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c500a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129c500d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5010 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129c5013 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5016 je 0x129c5092 */
  if (C.zf) goto L_129c5092;
  /* 129c5018 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c501b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129c501e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c5020 je 0x129c5092 */
  if (C.zf) goto L_129c5092;
  /* 129c5022 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5025 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c5027 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129c5029 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c502b mov al, byte ptr [edx + 0x129efd01] */
  AL = (r8((uint32_t)(EDX + 0x129efd01)));
  /* 129c5031 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 129c5034 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c5036 je 0x129c5067 */
  if (C.zf) goto L_129c5067;
  /* 129c5038 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c503b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129c503d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5040 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c5043 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129c5045 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5049 je 0x129c5067 */
  if (C.zf) goto L_129c5067;
  /* 129c504b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c504e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5051 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129c5053 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 129c5055 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c5058 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c505b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 129c505e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5061 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5064 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_129c5067:;
  /* 129c5067 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c506a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129c506c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c506f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c5072 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 129c5074 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5078 je 0x129c508d */
  if (C.zf) goto L_129c508d;
  /* 129c507a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c507d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5080 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129c5082 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 129c5084 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c5087 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c508a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_129c508d:;
  /* 129c508d jmp 0x129c5004 */
  goto L_129c5004;
L_129c5092:;
  /* 129c5092 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c5095 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129c5097 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c509a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c509d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129c509f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c50a3 je 0x129c50b4 */
  if (C.zf) goto L_129c50b4;
  /* 129c50a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c50a8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 129c50ab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c50ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c50b1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_129c50b4:;
  /* 129c50b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c50b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129c50ba cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c50bd jne 0x129c50c8 */
  if (!C.zf) goto L_129c50c8;
  /* 129c50bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c50c2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c50c5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_129c50c8:;
  /* 129c50c8 jmp 0x129c519c */
  goto L_129c519c;
L_129c50cd:;
  /* 129c50cd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c50d0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129c50d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c50d5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c50d8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 129c50da cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c50de je 0x129c50f3 */
  if (C.zf) goto L_129c50f3;
  /* 129c50e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c50e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c50e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129c50e8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 129c50ea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c50ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c50f0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_129c50f3:;
  /* 129c50f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c50f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129c50f8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 129c50fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c50fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5101 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c5104 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c5107 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 129c510d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c510f mov dl, byte ptr [ecx + 0x129efd01] */
  DL = (r8((uint32_t)(ECX + 0x129efd01)));
  /* 129c5115 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 129c5118 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c511a je 0x129c514b */
  if (C.zf) goto L_129c514b;
  /* 129c511c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c511f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129c5121 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5124 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c5127 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 129c5129 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c512d je 0x129c5142 */
  if (C.zf) goto L_129c5142;
  /* 129c512f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c5132 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5135 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129c5137 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 129c5139 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c513c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c513f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_129c5142:;
  /* 129c5142 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5145 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5148 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129c514b:;
  /* 129c514b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c514e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 129c5154 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5157 je 0x129c5177 */
  if (C.zf) goto L_129c5177;
  /* 129c5159 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c515c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c5161 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c5163 je 0x129c5177 */
  if (C.zf) goto L_129c5177;
  /* 129c5165 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c5168 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 129c516e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5171 jne 0x129c50cd */
  if (!C.zf) goto L_129c50cd;
L_129c5177:;
  /* 129c5177 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c517a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 129c5180 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c5182 jne 0x129c518f */
  if (!C.zf) goto L_129c518f;
  /* 129c5184 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5187 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c518a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c518d jmp 0x129c519c */
  goto L_129c519c;
L_129c518f:;
  /* 129c518f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5193 je 0x129c519c */
  if (C.zf) goto L_129c519c;
  /* 129c5195 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c5198 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_129c519c:;
  /* 129c519c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_129c51a3:;
  /* 129c51a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c51a6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129c51a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c51ab je 0x129c51ce */
  if (C.zf) goto L_129c51ce;
L_129c51ad:;
  /* 129c51ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c51b0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129c51b3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c51b6 je 0x129c51c3 */
  if (C.zf) goto L_129c51c3;
  /* 129c51b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c51bb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129c51be cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c51c1 jne 0x129c51ce */
  if (!C.zf) goto L_129c51ce;
L_129c51c3:;
  /* 129c51c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c51c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c51c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129c51cc jmp 0x129c51ad */
  goto L_129c51ad;
L_129c51ce:;
  /* 129c51ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c51d1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129c51d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c51d6 jne 0x129c51dd */
  if (!C.zf) goto L_129c51dd;
  /* 129c51d8 jmp 0x129c53bb */
  goto L_129c53bb;
L_129c51dd:;
  /* 129c51dd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c51e1 je 0x129c51f4 */
  if (C.zf) goto L_129c51f4;
  /* 129c51e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c51e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c51e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 129c51eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c51ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c51f1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_129c51f4:;
  /* 129c51f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c51f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129c51f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c51fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c51ff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_129c5201:;
  /* 129c5201 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 129c5208 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_129c520f:;
  /* 129c520f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5212 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129c5215 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5218 jne 0x129c522e */
  if (!C.zf) goto L_129c522e;
  /* 129c521a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c521d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5220 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129c5223 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c5226 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5229 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 129c522c jmp 0x129c520f */
  goto L_129c520f;
L_129c522e:;
  /* 129c522e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5231 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129c5234 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5237 jne 0x129c528a */
  if (!C.zf) goto L_129c528a;
  /* 129c5239 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c523c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c523e mov ecx, 2 */
  ECX = (0x2u);
  /* 129c5243 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129c5245 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c5247 jne 0x129c5282 */
  if (!C.zf) goto L_129c5282;
  /* 129c5249 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c524d je 0x129c526f */
  if (C.zf) goto L_129c526f;
  /* 129c524f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5252 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 129c5256 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5259 jne 0x129c5266 */
  if (!C.zf) goto L_129c5266;
  /* 129c525b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c525e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5261 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129c5264 jmp 0x129c526d */
  goto L_129c526d;
L_129c5266:;
  /* 129c5266 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_129c526d:;
  /* 129c526d jmp 0x129c5276 */
  goto L_129c5276;
L_129c526f:;
  /* 129c526f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_129c5276:;
  /* 129c5276 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c5278 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c527c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 129c527f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_129c5282:;
  /* 129c5282 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c5285 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 129c5287 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_129c528a:;
  /* 129c528a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c528d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c5290 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c5293 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 129c5296 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c5298 je 0x129c52be */
  if (C.zf) goto L_129c52be;
  /* 129c529a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c529e je 0x129c52af */
  if (C.zf) goto L_129c52af;
  /* 129c52a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c52a3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 129c52a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c52a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c52ac mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_129c52af:;
  /* 129c52af mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c52b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129c52b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c52b7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c52ba mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129c52bc jmp 0x129c528a */
  goto L_129c528a;
L_129c52be:;
  /* 129c52be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c52c1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129c52c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c52c6 je 0x129c52e4 */
  if (C.zf) goto L_129c52e4;
  /* 129c52c8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c52cc jne 0x129c52e9 */
  if (!C.zf) goto L_129c52e9;
  /* 129c52ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c52d1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129c52d4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c52d7 je 0x129c52e4 */
  if (C.zf) goto L_129c52e4;
  /* 129c52d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c52dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129c52df cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c52e2 jne 0x129c52e9 */
  if (!C.zf) goto L_129c52e9;
L_129c52e4:;
  /* 129c52e4 jmp 0x129c5394 */
  goto L_129c5394;
L_129c52e9:;
  /* 129c52e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c52ed je 0x129c5386 */
  if (C.zf) goto L_129c5386;
  /* 129c52f3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c52f7 je 0x129c534d */
  if (C.zf) goto L_129c534d;
  /* 129c52f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c52fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c52fe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129c5300 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c5302 mov cl, byte ptr [eax + 0x129efd01] */
  CL = (r8((uint32_t)(EAX + 0x129efd01)));
  /* 129c5308 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 129c530b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c530d je 0x129c5338 */
  if (C.zf) goto L_129c5338;
  /* 129c530f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c5312 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5315 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129c5317 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 129c5319 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c531c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c531f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 129c5322 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5325 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5328 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c532b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c532e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129c5330 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5333 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c5336 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_129c5338:;
  /* 129c5338 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c533b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c533e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129c5340 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 129c5342 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c5345 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5348 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 129c534b jmp 0x129c5379 */
  goto L_129c5379;
L_129c534d:;
  /* 129c534d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5350 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c5352 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129c5354 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c5356 mov cl, byte ptr [eax + 0x129efd01] */
  CL = (r8((uint32_t)(EAX + 0x129efd01)));
  /* 129c535c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 129c535f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c5361 je 0x129c5379 */
  if (C.zf) goto L_129c5379;
  /* 129c5363 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5366 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5369 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129c536c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c536f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129c5371 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5374 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c5377 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_129c5379:;
  /* 129c5379 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c537c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129c537e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5381 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c5384 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_129c5386:;
  /* 129c5386 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5389 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c538c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c538f jmp 0x129c5201 */
  goto L_129c5201;
L_129c5394:;
  /* 129c5394 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5398 je 0x129c53a9 */
  if (C.zf) goto L_129c53a9;
  /* 129c539a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c539d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 129c53a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c53a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c53a6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_129c53a9:;
  /* 129c53a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c53ac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129c53ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c53b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129c53b4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 129c53b6 jmp 0x129c51a3 */
  goto L_129c51a3;
L_129c53bb:;
  /* 129c53bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c53bf je 0x129c53d3 */
  if (C.zf) goto L_129c53d3;
  /* 129c53c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c53c4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 129c53ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c53cd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c53d0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_129c53d3:;
  /* 129c53d3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c53d6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129c53d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c53db mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c53de mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129c53e0 mov esp, ebp */
  ESP = (EBP);
  /* 129c53e2 pop ebp */
  EBP = (pop32());
  /* 129c53e3 ret  */
  ESPCHK(0x129c4fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_100053f0 @ 0x129c53f0 (537 bytes, 173 insns) */
void f_129c53f0(void) {
  FTRACE(0x129c53f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c53f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c53f1 mov ebp, esp */
  EBP = (ESP);
  /* 129c53f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c53f6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 129c53fd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 129c5404 cmp dword ptr [0x129ee5ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee5ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c540b jne 0x129c544a */
  if (!C.zf) goto L_129c544a;
  /* 129c540d call dword ptr [0x129f0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0304))), 0x129c5413u);
  /* 129c5413 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 129c5416 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c541a je 0x129c5428 */
  if (C.zf) goto L_129c5428;
  /* 129c541c mov dword ptr [0x129ee5ec], 1 */
  w32((uint32_t)(0x129ee5ec), (0x1u));
  /* 129c5426 jmp 0x129c544a */
  goto L_129c544a;
L_129c5428:;
  /* 129c5428 call dword ptr [0x129f0300] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0300))), 0x129c542eu);
  /* 129c542e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129c5431 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5435 je 0x129c5443 */
  if (C.zf) goto L_129c5443;
  /* 129c5437 mov dword ptr [0x129ee5ec], 2 */
  w32((uint32_t)(0x129ee5ec), (0x2u));
  /* 129c5441 jmp 0x129c544a */
  goto L_129c544a;
L_129c5443:;
  /* 129c5443 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c5445 jmp 0x129c5605 */
  goto L_129c5605;
L_129c544a:;
  /* 129c544a cmp dword ptr [0x129ee5ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ee5ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5451 jne 0x129c554e */
  if (!C.zf) goto L_129c554e;
  /* 129c5457 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c545b jne 0x129c5473 */
  if (!C.zf) goto L_129c5473;
  /* 129c545d call dword ptr [0x129f0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0304))), 0x129c5463u);
  /* 129c5463 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 129c5466 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c546a jne 0x129c5473 */
  if (!C.zf) goto L_129c5473;
  /* 129c546c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c546e jmp 0x129c5605 */
  goto L_129c5605;
L_129c5473:;
  /* 129c5473 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c5476 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_129c5479:;
  /* 129c5479 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c547c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c547e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 129c5481 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c5483 je 0x129c54a5 */
  if (C.zf) goto L_129c54a5;
  /* 129c5485 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c5488 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c548b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129c548e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c5491 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c5493 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 129c5496 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c5498 jne 0x129c54a3 */
  if (!C.zf) goto L_129c54a3;
  /* 129c549a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c549d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c54a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_129c54a3:;
  /* 129c54a3 jmp 0x129c5479 */
  goto L_129c5479;
L_129c54a5:;
  /* 129c54a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c54a8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c54ab sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 129c54ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c54b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129c54b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c54b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c54b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c54b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c54bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c54be push edx */
  push32((uint32_t)(EDX));
  /* 129c54bf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c54c2 push eax */
  push32((uint32_t)(EAX));
  /* 129c54c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c54c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c54c7 call dword ptr [0x129f02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02fc))), 0x129c54cdu);
  /* 129c54cd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 129c54d0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c54d4 je 0x129c54f4 */
  if (C.zf) goto L_129c54f4;
  /* 129c54d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 129c54d8 push 0x129e9b04 */
  push32((uint32_t)(0x129e9b04u));
  /* 129c54dd push 2 */
  push32((uint32_t)(0x2u));
  /* 129c54df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c54e2 push ecx */
  push32((uint32_t)(ECX));
  /* 129c54e3 call 0x129c2e20 */
  push32(0x129c54e8u); f_129c2e20();
  /* 129c54e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c54eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129c54ee cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c54f2 jne 0x129c5505 */
  if (!C.zf) goto L_129c5505;
L_129c54f4:;
  /* 129c54f4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c54f7 push edx */
  push32((uint32_t)(EDX));
  /* 129c54f8 call dword ptr [0x129f02f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02f8))), 0x129c54feu);
  /* 129c54fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c5500 jmp 0x129c5605 */
  goto L_129c5605;
L_129c5505:;
  /* 129c5505 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c5507 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c5509 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c550c push eax */
  push32((uint32_t)(EAX));
  /* 129c550d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c5510 push ecx */
  push32((uint32_t)(ECX));
  /* 129c5511 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5514 push edx */
  push32((uint32_t)(EDX));
  /* 129c5515 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c5518 push eax */
  push32((uint32_t)(EAX));
  /* 129c5519 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c551b push 0 */
  push32((uint32_t)(0x0u));
  /* 129c551d call dword ptr [0x129f02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02fc))), 0x129c5523u);
  /* 129c5523 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c5525 jne 0x129c553c */
  if (!C.zf) goto L_129c553c;
  /* 129c5527 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c5529 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c552c push ecx */
  push32((uint32_t)(ECX));
  /* 129c552d call 0x129c38b0 */
  push32(0x129c5532u); f_129c38b0();
  /* 129c5532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5535 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_129c553c:;
  /* 129c553c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c553f push edx */
  push32((uint32_t)(EDX));
  /* 129c5540 call dword ptr [0x129f02f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02f8))), 0x129c5546u);
  /* 129c5546 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c5549 jmp 0x129c5605 */
  goto L_129c5605;
L_129c554e:;
  /* 129c554e cmp dword ptr [0x129ee5ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x129ee5ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5555 jne 0x129c5603 */
  if (!C.zf) goto L_129c5603;
  /* 129c555b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c555f jne 0x129c5577 */
  if (!C.zf) goto L_129c5577;
  /* 129c5561 call dword ptr [0x129f0300] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0300))), 0x129c5567u);
  /* 129c5567 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129c556a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c556e jne 0x129c5577 */
  if (!C.zf) goto L_129c5577;
  /* 129c5570 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c5572 jmp 0x129c5605 */
  goto L_129c5605;
L_129c5577:;
  /* 129c5577 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c557a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_129c557d:;
  /* 129c557d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c5580 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129c5583 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c5585 je 0x129c55a5 */
  if (C.zf) goto L_129c55a5;
  /* 129c5587 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c558a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c558d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129c5590 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c5593 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129c5596 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c5598 jne 0x129c55a3 */
  if (!C.zf) goto L_129c55a3;
  /* 129c559a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c559d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c55a0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_129c55a3:;
  /* 129c55a3 jmp 0x129c557d */
  goto L_129c557d;
L_129c55a5:;
  /* 129c55a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c55a8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c55ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c55ae mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 129c55b1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 129c55b6 push 0x129e9b04 */
  push32((uint32_t)(0x129e9b04u));
  /* 129c55bb push 2 */
  push32((uint32_t)(0x2u));
  /* 129c55bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c55c0 push edx */
  push32((uint32_t)(EDX));
  /* 129c55c1 call 0x129c2e20 */
  push32(0x129c55c6u); f_129c2e20();
  /* 129c55c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c55c9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129c55cc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c55d0 jne 0x129c55e0 */
  if (!C.zf) goto L_129c55e0;
  /* 129c55d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c55d5 push eax */
  push32((uint32_t)(EAX));
  /* 129c55d6 call dword ptr [0x129f02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02f4))), 0x129c55dcu);
  /* 129c55dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c55de jmp 0x129c5605 */
  goto L_129c5605;
L_129c55e0:;
  /* 129c55e0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c55e3 push ecx */
  push32((uint32_t)(ECX));
  /* 129c55e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c55e7 push edx */
  push32((uint32_t)(EDX));
  /* 129c55e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c55eb push eax */
  push32((uint32_t)(EAX));
  /* 129c55ec call 0x129c9700 */
  push32(0x129c55f1u); f_129c9700();
  /* 129c55f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c55f4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c55f7 push ecx */
  push32((uint32_t)(ECX));
  /* 129c55f8 call dword ptr [0x129f02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02f4))), 0x129c55feu);
  /* 129c55fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c5601 jmp 0x129c5605 */
  goto L_129c5605;
L_129c5603:;
  /* 129c5603 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129c5605:;
  /* 129c5605 mov esp, ebp */
  ESP = (EBP);
  /* 129c5607 pop ebp */
  EBP = (pop32());
  /* 129c5608 ret  */
  ESPCHK(0x129c53f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005610 @ 0x129c5610 (77 bytes, 25 insns) */
void f_129c5610(void) {
  FTRACE(0x129c5610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c5610 push ebp */
  push32((uint32_t)(EBP));
  /* 129c5611 mov ebp, esp */
  EBP = (ESP);
  /* 129c5613 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c5615 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 129c561a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c561c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5620 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 129c5623 push eax */
  push32((uint32_t)(EAX));
  /* 129c5624 call dword ptr [0x129f030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f030c))), 0x129c562au);
  /* 129c562a mov dword ptr [0x129efe2c], eax */
  w32((uint32_t)(0x129efe2c), (EAX));
  /* 129c562f cmp dword ptr [0x129efe2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129efe2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5636 jne 0x129c563c */
  if (!C.zf) goto L_129c563c;
  /* 129c5638 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c563a jmp 0x129c565b */
  goto L_129c565b;
L_129c563c:;
  /* 129c563c call 0x129c70c0 */
  push32(0x129c5641u); f_129c70c0();
  /* 129c5641 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c5643 jne 0x129c5656 */
  if (!C.zf) goto L_129c5656;
  /* 129c5645 mov ecx, dword ptr [0x129efe2c] */
  ECX = (r32((uint32_t)(0x129efe2c)));
  /* 129c564b push ecx */
  push32((uint32_t)(ECX));
  /* 129c564c call dword ptr [0x129f0308] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0308))), 0x129c5652u);
  /* 129c5652 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c5654 jmp 0x129c565b */
  goto L_129c565b;
L_129c5656:;
  /* 129c5656 mov eax, 1 */
  EAX = (0x1u);
L_129c565b:;
  /* 129c565b pop ebp */
  EBP = (pop32());
  /* 129c565c ret  */
  ESPCHK(0x129c5610u, _esp0);
  ESP += 4; return;
}

/* FUN_10005660 @ 0x129c5660 (156 bytes, 48 insns) */
void f_129c5660(void) {
  FTRACE(0x129c5660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c5660 push ebp */
  push32((uint32_t)(EBP));
  /* 129c5661 mov ebp, esp */
  EBP = (ESP);
  /* 129c5663 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c5666 mov eax, dword ptr [0x129efe28] */
  EAX = (r32((uint32_t)(0x129efe28)));
  /* 129c566b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129c566e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129c5675 jmp 0x129c5680 */
  goto L_129c5680;
L_129c5677:;
  /* 129c5677 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c567a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c567d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129c5680:;
  /* 129c5680 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5683 cmp edx, dword ptr [0x129efe24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x129efe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5689 jge 0x129c56d6 */
  if ((C.sf==C.of)) goto L_129c56d6;
  /* 129c568b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 129c5690 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 129c5695 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c5698 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 129c569b push ecx */
  push32((uint32_t)(ECX));
  /* 129c569c call dword ptr [0x129f0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0314))), 0x129c56a2u);
  /* 129c56a2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 129c56a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c56a9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c56ac mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 129c56af push eax */
  push32((uint32_t)(EAX));
  /* 129c56b0 call dword ptr [0x129f0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0314))), 0x129c56b6u);
  /* 129c56b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c56b9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 129c56bc push edx */
  push32((uint32_t)(EDX));
  /* 129c56bd push 0 */
  push32((uint32_t)(0x0u));
  /* 129c56bf mov eax, dword ptr [0x129efe2c] */
  EAX = (r32((uint32_t)(0x129efe2c)));
  /* 129c56c4 push eax */
  push32((uint32_t)(EAX));
  /* 129c56c5 call dword ptr [0x129f0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0310))), 0x129c56cbu);
  /* 129c56cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c56ce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c56d1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129c56d4 jmp 0x129c5677 */
  goto L_129c5677;
L_129c56d6:;
  /* 129c56d6 mov edx, dword ptr [0x129efe28] */
  EDX = (r32((uint32_t)(0x129efe28)));
  /* 129c56dc push edx */
  push32((uint32_t)(EDX));
  /* 129c56dd push 0 */
  push32((uint32_t)(0x0u));
  /* 129c56df mov eax, dword ptr [0x129efe2c] */
  EAX = (r32((uint32_t)(0x129efe2c)));
  /* 129c56e4 push eax */
  push32((uint32_t)(EAX));
  /* 129c56e5 call dword ptr [0x129f0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0310))), 0x129c56ebu);
  /* 129c56eb mov ecx, dword ptr [0x129efe2c] */
  ECX = (r32((uint32_t)(0x129efe2c)));
  /* 129c56f1 push ecx */
  push32((uint32_t)(ECX));
  /* 129c56f2 call dword ptr [0x129f0308] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0308))), 0x129c56f8u);
  /* 129c56f8 mov esp, ebp */
  ESP = (EBP);
  /* 129c56fa pop ebp */
  EBP = (pop32());
  /* 129c56fb ret  */
  ESPCHK(0x129c5660u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x129c5700 (73 bytes, 19 insns) */
void f_129c5700(void) {
  FTRACE(0x129c5700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c5700 push ebp */
  push32((uint32_t)(EBP));
  /* 129c5701 mov ebp, esp */
  EBP = (ESP);
  /* 129c5703 cmp dword ptr [0x129ee480], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ee480))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c570a je 0x129c571e */
  if (C.zf) goto L_129c571e;
  /* 129c570c cmp dword ptr [0x129ee480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5713 jne 0x129c5747 */
  if (!C.zf) goto L_129c5747;
  /* 129c5715 cmp dword ptr [0x129ee484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ee484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c571c jne 0x129c5747 */
  if (!C.zf) goto L_129c5747;
L_129c571e:;
  /* 129c571e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 129c5723 call 0x129c5750 */
  push32(0x129c5728u); f_129c5750();
  /* 129c5728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c572b cmp dword ptr [0x129ee5f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee5f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5732 je 0x129c573a */
  if (C.zf) goto L_129c573a;
  /* 129c5734 call dword ptr [0x129ee5f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ee5f0))), 0x129c573au);
L_129c573a:;
  /* 129c573a push 0xff */
  push32((uint32_t)(0xffu));
  /* 129c573f call 0x129c5750 */
  push32(0x129c5744u); f_129c5750();
  /* 129c5744 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c5747:;
  /* 129c5747 pop ebp */
  EBP = (pop32());
  /* 129c5748 ret  */
  ESPCHK(0x129c5700u, _esp0);
  ESP += 4; return;
}

/* FUN_10005750 @ 0x129c5750 (447 bytes, 131 insns) */
void f_129c5750(void) {
  FTRACE(0x129c5750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c5750 push ebp */
  push32((uint32_t)(EBP));
  /* 129c5751 mov ebp, esp */
  EBP = (ESP);
  /* 129c5753 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c5759 push ebx */
  push32((uint32_t)(EBX));
  /* 129c575a push esi */
  push32((uint32_t)(ESI));
  /* 129c575b push edi */
  push32((uint32_t)(EDI));
  /* 129c575c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 129c5763 jmp 0x129c576e */
  goto L_129c576e;
L_129c5765:;
  /* 129c5765 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c5768 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c576b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_129c576e:;
  /* 129c576e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5772 jae 0x129c5787 */
  if (!C.cf) goto L_129c5787;
  /* 129c5774 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c5777 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c577a cmp edx, dword ptr [ecx*8 + 0x129ecab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x129ecab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5781 jne 0x129c5785 */
  if (!C.zf) goto L_129c5785;
  /* 129c5783 jmp 0x129c5787 */
  goto L_129c5787;
L_129c5785:;
  /* 129c5785 jmp 0x129c5765 */
  goto L_129c5765;
L_129c5787:;
  /* 129c5787 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c578a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c578d cmp ecx, dword ptr [eax*8 + 0x129ecab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x129ecab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5794 jne 0x129c5908 */
  if (!C.zf) goto L_129c5908;
  /* 129c579a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c57a1 je 0x129c57c4 */
  if (C.zf) goto L_129c57c4;
  /* 129c57a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c57a6 mov eax, dword ptr [edx*8 + 0x129ecab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x129ecab4)));
  /* 129c57ad push eax */
  push32((uint32_t)(EAX));
  /* 129c57ae push 0 */
  push32((uint32_t)(0x0u));
  /* 129c57b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c57b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c57b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c57b6 call 0x129c1ee0 */
  push32(0x129c57bbu); f_129c1ee0();
  /* 129c57bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c57be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c57c1 jne 0x129c57c4 */
  if (!C.zf) goto L_129c57c4;
  /* 129c57c3 int3  */
  x86_unimpl("int3 @ 0x129c57c3");
L_129c57c4:;
  /* 129c57c4 cmp dword ptr [0x129ee480], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ee480))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c57cb je 0x129c57df */
  if (C.zf) goto L_129c57df;
  /* 129c57cd cmp dword ptr [0x129ee480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c57d4 jne 0x129c5818 */
  if (!C.zf) goto L_129c5818;
  /* 129c57d6 cmp dword ptr [0x129ee484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ee484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c57dd jne 0x129c5818 */
  if (!C.zf) goto L_129c5818;
L_129c57df:;
  /* 129c57df push 0 */
  push32((uint32_t)(0x0u));
  /* 129c57e1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 129c57e4 push ecx */
  push32((uint32_t)(ECX));
  /* 129c57e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c57e8 mov eax, dword ptr [edx*8 + 0x129ecab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x129ecab4)));
  /* 129c57ef push eax */
  push32((uint32_t)(EAX));
  /* 129c57f0 call 0x129c5c50 */
  push32(0x129c57f5u); f_129c5c50();
  /* 129c57f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c57f8 push eax */
  push32((uint32_t)(EAX));
  /* 129c57f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c57fc mov edx, dword ptr [ecx*8 + 0x129ecab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x129ecab4)));
  /* 129c5803 push edx */
  push32((uint32_t)(EDX));
  /* 129c5804 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 129c5806 call dword ptr [0x129f028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f028c))), 0x129c580cu);
  /* 129c580c push eax */
  push32((uint32_t)(EAX));
  /* 129c580d call dword ptr [0x129f0290] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0290))), 0x129c5813u);
  /* 129c5813 jmp 0x129c5908 */
  goto L_129c5908;
L_129c5818:;
  /* 129c5818 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c581f je 0x129c5908 */
  if (C.zf) goto L_129c5908;
  /* 129c5825 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 129c582a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 129c5830 push eax */
  push32((uint32_t)(EAX));
  /* 129c5831 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c5833 call dword ptr [0x129f02a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02a8))), 0x129c5839u);
  /* 129c5839 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c583b jne 0x129c5851 */
  if (!C.zf) goto L_129c5851;
  /* 129c583d push 0x129e936c */
  push32((uint32_t)(0x129e936cu));
  /* 129c5842 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 129c5848 push ecx */
  push32((uint32_t)(ECX));
  /* 129c5849 call 0x129c5dd0 */
  push32(0x129c584eu); f_129c5dd0();
  /* 129c584e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c5851:;
  /* 129c5851 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 129c5857 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 129c585a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c585d push eax */
  push32((uint32_t)(EAX));
  /* 129c585e call 0x129c5c50 */
  push32(0x129c5863u); f_129c5c50();
  /* 129c5863 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5866 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5869 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c586c jbe 0x129c589a */
  if ((C.cf||C.zf)) goto L_129c589a;
  /* 129c586e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 129c5874 push ecx */
  push32((uint32_t)(ECX));
  /* 129c5875 call 0x129c5c50 */
  push32(0x129c587au); f_129c5c50();
  /* 129c587a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c587d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c5880 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 129c5884 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129c5887 push 3 */
  push32((uint32_t)(0x3u));
  /* 129c5889 push 0x129e9368 */
  push32((uint32_t)(0x129e9368u));
  /* 129c588e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c5891 push ecx */
  push32((uint32_t)(ECX));
  /* 129c5892 call 0x129c6640 */
  push32(0x129c5897u); f_129c6640();
  /* 129c5897 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c589a:;
  /* 129c589a push 0x129e9dc0 */
  push32((uint32_t)(0x129e9dc0u));
  /* 129c589f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 129c58a5 push edx */
  push32((uint32_t)(EDX));
  /* 129c58a6 call 0x129c5dd0 */
  push32(0x129c58abu); f_129c5dd0();
  /* 129c58ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c58ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c58b1 push eax */
  push32((uint32_t)(EAX));
  /* 129c58b2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 129c58b8 push ecx */
  push32((uint32_t)(ECX));
  /* 129c58b9 call 0x129c5de0 */
  push32(0x129c58beu); f_129c5de0();
  /* 129c58be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c58c1 push 0x129e92e0 */
  push32((uint32_t)(0x129e92e0u));
  /* 129c58c6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 129c58cc push edx */
  push32((uint32_t)(EDX));
  /* 129c58cd call 0x129c5de0 */
  push32(0x129c58d2u); f_129c5de0();
  /* 129c58d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c58d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c58d8 mov ecx, dword ptr [eax*8 + 0x129ecab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x129ecab4)));
  /* 129c58df push ecx */
  push32((uint32_t)(ECX));
  /* 129c58e0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 129c58e6 push edx */
  push32((uint32_t)(EDX));
  /* 129c58e7 call 0x129c5de0 */
  push32(0x129c58ecu); f_129c5de0();
  /* 129c58ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c58ef push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 129c58f4 push 0x129e9d98 */
  push32((uint32_t)(0x129e9d98u));
  /* 129c58f9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 129c58ff push eax */
  push32((uint32_t)(EAX));
  /* 129c5900 call 0x129c6580 */
  push32(0x129c5905u); f_129c6580();
  /* 129c5905 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c5908:;
  /* 129c5908 pop edi */
  EDI = (pop32());
  /* 129c5909 pop esi */
  ESI = (pop32());
  /* 129c590a pop ebx */
  EBX = (pop32());
  /* 129c590b mov esp, ebp */
  ESP = (EBP);
  /* 129c590d pop ebp */
  EBP = (pop32());
  /* 129c590e ret  */
  ESPCHK(0x129c5750u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x129c5910 (80 bytes, 27 insns) */
void f_129c5910(void) {
  FTRACE(0x129c5910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c5910 push ebp */
  push32((uint32_t)(EBP));
  /* 129c5911 mov ebp, esp */
  EBP = (ESP);
  /* 129c5913 push ecx */
  push32((uint32_t)(ECX));
  /* 129c5914 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129c591b jmp 0x129c5926 */
  goto L_129c5926;
L_129c591d:;
  /* 129c591d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5920 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5923 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129c5926:;
  /* 129c5926 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c592a jae 0x129c593f */
  if (!C.cf) goto L_129c593f;
  /* 129c592c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c592f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c5932 cmp edx, dword ptr [ecx*8 + 0x129ecab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x129ecab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5939 jne 0x129c593d */
  if (!C.zf) goto L_129c593d;
  /* 129c593b jmp 0x129c593f */
  goto L_129c593f;
L_129c593d:;
  /* 129c593d jmp 0x129c591d */
  goto L_129c591d;
L_129c593f:;
  /* 129c593f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5942 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c5945 cmp ecx, dword ptr [eax*8 + 0x129ecab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x129ecab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c594c jne 0x129c595a */
  if (!C.zf) goto L_129c595a;
  /* 129c594e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5951 mov eax, dword ptr [edx*8 + 0x129ecab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x129ecab4)));
  /* 129c5958 jmp 0x129c595c */
  goto L_129c595c;
L_129c595a:;
  /* 129c595a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129c595c:;
  /* 129c595c mov esp, ebp */
  ESP = (EBP);
  /* 129c595e pop ebp */
  EBP = (pop32());
  /* 129c595f ret  */
  ESPCHK(0x129c5910u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x129c5960 (66 bytes, 28 insns) */
void f_129c5960(void) {
  FTRACE(0x129c5960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c5960 push ebp */
  push32((uint32_t)(EBP));
  /* 129c5961 mov ebp, esp */
  EBP = (ESP);
  /* 129c5963 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5967 jne 0x129c5987 */
  if (!C.zf) goto L_129c5987;
  /* 129c5969 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c596d jge 0x129c5987 */
  if ((C.sf==C.of)) goto L_129c5987;
  /* 129c596f push 1 */
  push32((uint32_t)(0x1u));
  /* 129c5971 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c5974 push eax */
  push32((uint32_t)(EAX));
  /* 129c5975 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c5978 push ecx */
  push32((uint32_t)(ECX));
  /* 129c5979 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c597c push edx */
  push32((uint32_t)(EDX));
  /* 129c597d call 0x129c59b0 */
  push32(0x129c5982u); f_129c59b0();
  /* 129c5982 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5985 jmp 0x129c599d */
  goto L_129c599d;
L_129c5987:;
  /* 129c5987 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c5989 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c598c push eax */
  push32((uint32_t)(EAX));
  /* 129c598d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c5990 push ecx */
  push32((uint32_t)(ECX));
  /* 129c5991 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c5994 push edx */
  push32((uint32_t)(EDX));
  /* 129c5995 call 0x129c59b0 */
  push32(0x129c599au); f_129c59b0();
  /* 129c599a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c599d:;
  /* 129c599d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c59a0 pop ebp */
  EBP = (pop32());
  /* 129c59a1 ret  */
  ESPCHK(0x129c5960u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x129c59b0 (194 bytes, 71 insns) */
void f_129c59b0(void) {
  FTRACE(0x129c59b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c59b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c59b1 mov ebp, esp */
  EBP = (ESP);
  /* 129c59b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c59b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c59b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c59bc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c59c0 je 0x129c59d9 */
  if (C.zf) goto L_129c59d9;
  /* 129c59c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c59c5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 129c59c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c59cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c59ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129c59d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c59d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 129c59d6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_129c59d9:;
  /* 129c59d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c59dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_129c59df:;
  /* 129c59df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c59e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c59e4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129c59e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 129c59ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c59ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c59ef div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129c59f2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129c59f5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c59f9 jbe 0x129c5a11 */
  if ((C.cf||C.zf)) goto L_129c5a11;
  /* 129c59fb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c59fe add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5a01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5a04 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 129c5a06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5a09 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5a0c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129c5a0f jmp 0x129c5a25 */
  goto L_129c5a25;
L_129c5a11:;
  /* 129c5a11 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c5a14 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5a17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5a1a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 129c5a1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5a1f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5a22 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129c5a25:;
  /* 129c5a25 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5a29 ja 0x129c59df */
  if ((!C.cf&&!C.zf)) goto L_129c59df;
  /* 129c5a2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5a2e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 129c5a31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5a34 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c5a37 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129c5a3a:;
  /* 129c5a3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5a3d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129c5a3f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 129c5a42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5a45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c5a48 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129c5a4a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 129c5a4c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c5a4f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 129c5a52 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 129c5a54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5a57 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c5a5a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129c5a5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c5a60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5a63 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129c5a66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c5a69 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5a6c jb 0x129c5a3a */
  if (C.cf) goto L_129c5a3a;
  /* 129c5a6e mov esp, ebp */
  ESP = (EBP);
  /* 129c5a70 pop ebp */
  EBP = (pop32());
  /* 129c5a71 ret  */
  ESPCHK(0x129c59b0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x129c5a80 (63 bytes, 24 insns) */
void f_129c5a80(void) {
  FTRACE(0x129c5a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c5a80 push ebp */
  push32((uint32_t)(EBP));
  /* 129c5a81 mov ebp, esp */
  EBP = (ESP);
  /* 129c5a83 push ecx */
  push32((uint32_t)(ECX));
  /* 129c5a84 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5a88 jne 0x129c5a99 */
  if (!C.zf) goto L_129c5a99;
  /* 129c5a8a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5a8e jge 0x129c5a99 */
  if ((C.sf==C.of)) goto L_129c5a99;
  /* 129c5a90 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 129c5a97 jmp 0x129c5aa0 */
  goto L_129c5aa0;
L_129c5a99:;
  /* 129c5a99 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_129c5aa0:;
  /* 129c5aa0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5aa3 push eax */
  push32((uint32_t)(EAX));
  /* 129c5aa4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c5aa7 push ecx */
  push32((uint32_t)(ECX));
  /* 129c5aa8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c5aab push edx */
  push32((uint32_t)(EDX));
  /* 129c5aac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c5aaf push eax */
  push32((uint32_t)(EAX));
  /* 129c5ab0 call 0x129c59b0 */
  push32(0x129c5ab5u); f_129c59b0();
  /* 129c5ab5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5ab8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c5abb mov esp, ebp */
  ESP = (EBP);
  /* 129c5abd pop ebp */
  EBP = (pop32());
  /* 129c5abe ret  */
  ESPCHK(0x129c5a80u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x129c5ac0 (30 bytes, 14 insns) */
void f_129c5ac0(void) {
  FTRACE(0x129c5ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c5ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c5ac1 mov ebp, esp */
  EBP = (ESP);
  /* 129c5ac3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c5ac5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c5ac8 push eax */
  push32((uint32_t)(EAX));
  /* 129c5ac9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c5acc push ecx */
  push32((uint32_t)(ECX));
  /* 129c5acd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c5ad0 push edx */
  push32((uint32_t)(EDX));
  /* 129c5ad1 call 0x129c59b0 */
  push32(0x129c5ad6u); f_129c59b0();
  /* 129c5ad6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5ad9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c5adc pop ebp */
  EBP = (pop32());
  /* 129c5add ret  */
  ESPCHK(0x129c5ac0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x129c5ae0 (72 bytes, 28 insns) */
void f_129c5ae0(void) {
  FTRACE(0x129c5ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c5ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c5ae1 mov ebp, esp */
  EBP = (ESP);
  /* 129c5ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 129c5ae4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5ae8 jne 0x129c5b01 */
  if (!C.zf) goto L_129c5b01;
  /* 129c5aea cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5aee jg 0x129c5b01 */
  if ((!C.zf&&C.sf==C.of)) goto L_129c5b01;
  /* 129c5af0 jl 0x129c5af8 */
  if ((C.sf!=C.of)) goto L_129c5af8;
  /* 129c5af2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5af6 jae 0x129c5b01 */
  if (!C.cf) goto L_129c5b01;
L_129c5af8:;
  /* 129c5af8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 129c5aff jmp 0x129c5b08 */
  goto L_129c5b08;
L_129c5b01:;
  /* 129c5b01 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_129c5b08:;
  /* 129c5b08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5b0b push eax */
  push32((uint32_t)(EAX));
  /* 129c5b0c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c5b0f push ecx */
  push32((uint32_t)(ECX));
  /* 129c5b10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c5b13 push edx */
  push32((uint32_t)(EDX));
  /* 129c5b14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c5b17 push eax */
  push32((uint32_t)(EAX));
  /* 129c5b18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c5b1b push ecx */
  push32((uint32_t)(ECX));
  /* 129c5b1c call 0x129c5b30 */
  push32(0x129c5b21u); f_129c5b30();
  /* 129c5b21 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c5b24 mov esp, ebp */
  ESP = (EBP);
  /* 129c5b26 pop ebp */
  EBP = (pop32());
  /* 129c5b27 ret  */
  ESPCHK(0x129c5ae0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x129c5b30 (242 bytes, 91 insns) */
void f_129c5b30(void) {
  FTRACE(0x129c5b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c5b30 push ebp */
  push32((uint32_t)(EBP));
  /* 129c5b31 mov ebp, esp */
  EBP = (ESP);
  /* 129c5b33 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c5b36 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c5b39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c5b3c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5b40 je 0x129c5b64 */
  if (C.zf) goto L_129c5b64;
  /* 129c5b42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5b45 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 129c5b48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5b4b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5b4e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129c5b51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c5b54 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 129c5b56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c5b59 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5b5c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 129c5b5e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129c5b61 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_129c5b64:;
  /* 129c5b64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5b67 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_129c5b6a:;
  /* 129c5b6a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c5b6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c5b6f push ecx */
  push32((uint32_t)(ECX));
  /* 129c5b70 push eax */
  push32((uint32_t)(EAX));
  /* 129c5b71 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c5b74 push edx */
  push32((uint32_t)(EDX));
  /* 129c5b75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c5b78 push eax */
  push32((uint32_t)(EAX));
  /* 129c5b79 call 0x129c9ab0 */
  push32(0x129c5b7eu); f_129c9ab0();
  /* 129c5b7e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129c5b81 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c5b84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c5b86 push edx */
  push32((uint32_t)(EDX));
  /* 129c5b87 push ecx */
  push32((uint32_t)(ECX));
  /* 129c5b88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c5b8b push eax */
  push32((uint32_t)(EAX));
  /* 129c5b8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c5b8f push ecx */
  push32((uint32_t)(ECX));
  /* 129c5b90 call 0x129c9a40 */
  push32(0x129c5b95u); f_129c9a40();
  /* 129c5b95 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129c5b98 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 129c5b9b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5b9f jbe 0x129c5bb7 */
  if ((C.cf||C.zf)) goto L_129c5bb7;
  /* 129c5ba1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c5ba4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5ba7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5baa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 129c5bac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5baf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5bb2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129c5bb5 jmp 0x129c5bcb */
  goto L_129c5bcb;
L_129c5bb7:;
  /* 129c5bb7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c5bba add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5bbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5bc0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 129c5bc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5bc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5bc8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129c5bcb:;
  /* 129c5bcb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5bcf ja 0x129c5b6a */
  if ((!C.cf&&!C.zf)) goto L_129c5b6a;
  /* 129c5bd1 jb 0x129c5bd9 */
  if (C.cf) goto L_129c5bd9;
  /* 129c5bd3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5bd7 ja 0x129c5b6a */
  if ((!C.cf&&!C.zf)) goto L_129c5b6a;
L_129c5bd9:;
  /* 129c5bd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5bdc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 129c5bdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5be2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c5be5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129c5be8:;
  /* 129c5be8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5beb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129c5bed mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 129c5bf0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5bf3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c5bf6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129c5bf8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 129c5bfa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c5bfd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 129c5c00 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 129c5c02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c5c05 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c5c08 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129c5c0b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c5c0e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5c11 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129c5c14 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c5c17 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5c1a jb 0x129c5be8 */
  if (C.cf) goto L_129c5be8;
  /* 129c5c1c mov esp, ebp */
  ESP = (EBP);
  /* 129c5c1e pop ebp */
  EBP = (pop32());
  /* 129c5c1f ret 0x14 */
  ESPCHK(0x129c5b30u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x129c5c30 (31 bytes, 15 insns) */
void f_129c5c30(void) {
  FTRACE(0x129c5c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c5c30 push ebp */
  push32((uint32_t)(EBP));
  /* 129c5c31 mov ebp, esp */
  EBP = (ESP);
  /* 129c5c33 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c5c35 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c5c38 push eax */
  push32((uint32_t)(EAX));
  /* 129c5c39 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c5c3c push ecx */
  push32((uint32_t)(ECX));
  /* 129c5c3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c5c40 push edx */
  push32((uint32_t)(EDX));
  /* 129c5c41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c5c44 push eax */
  push32((uint32_t)(EAX));
  /* 129c5c45 call 0x129c5b30 */
  push32(0x129c5c4au); f_129c5b30();
  /* 129c5c4a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c5c4d pop ebp */
  EBP = (pop32());
  /* 129c5c4e ret  */
  ESPCHK(0x129c5c30u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x129c5c50 (123 bytes, 44 insns) */
void f_129c5c50(void) {
  FTRACE(0x129c5c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c5c50 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 129c5c54 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 129c5c5a je 0x129c5c70 */
  if (C.zf) goto L_129c5c70;
L_129c5c5c:;
  /* 129c5c5c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 129c5c5e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 129c5c5f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 129c5c61 je 0x129c5ca3 */
  if (C.zf) goto L_129c5ca3;
  /* 129c5c63 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 129c5c69 jne 0x129c5c5c */
  if (!C.zf) goto L_129c5c5c;
  /* 129c5c6b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_129c5c70:;
  /* 129c5c70 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 129c5c72 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 129c5c77 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5c79 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c5c7c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129c5c7e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5c81 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 129c5c86 je 0x129c5c70 */
  if (C.zf) goto L_129c5c70;
  /* 129c5c88 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 129c5c8b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 129c5c8d je 0x129c5cc1 */
  if (C.zf) goto L_129c5cc1;
  /* 129c5c8f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 129c5c91 je 0x129c5cb7 */
  if (C.zf) goto L_129c5cb7;
  /* 129c5c93 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 129c5c98 je 0x129c5cad */
  if (C.zf) goto L_129c5cad;
  /* 129c5c9a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 129c5c9f je 0x129c5ca3 */
  if (C.zf) goto L_129c5ca3;
  /* 129c5ca1 jmp 0x129c5c70 */
  goto L_129c5c70;
L_129c5ca3:;
  /* 129c5ca3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 129c5ca6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 129c5caa sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c5cac ret  */
  ESPCHK(0x129c5c50u, _esp0);
  ESP += 4; return;
L_129c5cad:;
  /* 129c5cad lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 129c5cb0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 129c5cb4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c5cb6 ret  */
  ESPCHK(0x129c5c50u, _esp0);
  ESP += 4; return;
L_129c5cb7:;
  /* 129c5cb7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 129c5cba mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 129c5cbe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c5cc0 ret  */
  ESPCHK(0x129c5c50u, _esp0);
  ESP += 4; return;
L_129c5cc1:;
  /* 129c5cc1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 129c5cc4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 129c5cc8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c5cca ret  */
  ESPCHK(0x129c5c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cd0 @ 0x129c5cd0 (249 bytes, 93 insns) */
void f_129c5cd0(void) {
  FTRACE(0x129c5cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c5cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c5cd1 mov ebp, esp */
  EBP = (ESP);
  /* 129c5cd3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c5cd6 push ebx */
  push32((uint32_t)(EBX));
  /* 129c5cd7 push esi */
  push32((uint32_t)(ESI));
  /* 129c5cd8 push edi */
  push32((uint32_t)(EDI));
  /* 129c5cd9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 129c5cdc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 129c5cdf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 129c5ce2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_129c5ce5:;
  /* 129c5ce5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5ce9 jne 0x129c5d09 */
  if (!C.zf) goto L_129c5d09;
  /* 129c5ceb push 0x129e9df8 */
  push32((uint32_t)(0x129e9df8u));
  /* 129c5cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c5cf2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 129c5cf4 push 0x129e9dec */
  push32((uint32_t)(0x129e9decu));
  /* 129c5cf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c5cfb call 0x129c1ee0 */
  push32(0x129c5d00u); f_129c1ee0();
  /* 129c5d00 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5d03 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5d06 jne 0x129c5d09 */
  if (!C.zf) goto L_129c5d09;
  /* 129c5d08 int3  */
  x86_unimpl("int3 @ 0x129c5d08");
L_129c5d09:;
  /* 129c5d09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c5d0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c5d0d jne 0x129c5ce5 */
  if (!C.zf) goto L_129c5ce5;
L_129c5d0f:;
  /* 129c5d0f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5d13 jne 0x129c5d33 */
  if (!C.zf) goto L_129c5d33;
  /* 129c5d15 push 0x129e9ddc */
  push32((uint32_t)(0x129e9ddcu));
  /* 129c5d1a push 0 */
  push32((uint32_t)(0x0u));
  /* 129c5d1c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 129c5d1e push 0x129e9dec */
  push32((uint32_t)(0x129e9decu));
  /* 129c5d23 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c5d25 call 0x129c1ee0 */
  push32(0x129c5d2au); f_129c1ee0();
  /* 129c5d2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5d2d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5d30 jne 0x129c5d33 */
  if (!C.zf) goto L_129c5d33;
  /* 129c5d32 int3  */
  x86_unimpl("int3 @ 0x129c5d32");
L_129c5d33:;
  /* 129c5d33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c5d35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129c5d37 jne 0x129c5d0f */
  if (!C.zf) goto L_129c5d0f;
  /* 129c5d39 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c5d3c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 129c5d43 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c5d46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c5d49 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 129c5d4c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c5d4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c5d52 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 129c5d54 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c5d57 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c5d5a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 129c5d5d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129c5d60 push edx */
  push32((uint32_t)(EDX));
  /* 129c5d61 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c5d64 push eax */
  push32((uint32_t)(EAX));
  /* 129c5d65 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c5d68 push ecx */
  push32((uint32_t)(ECX));
  /* 129c5d69 call 0x129c9db0 */
  push32(0x129c5d6eu); f_129c9db0();
  /* 129c5d6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5d71 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 129c5d74 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c5d77 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 129c5d7a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c5d7d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c5d80 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 129c5d83 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c5d86 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5d8a jl 0x129c5dae */
  if ((C.sf!=C.of)) goto L_129c5dae;
  /* 129c5d8c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c5d8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129c5d91 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 129c5d94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c5d96 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 129c5d9c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 129c5d9f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c5da2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129c5da4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5da7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c5daa mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 129c5dac jmp 0x129c5dbf */
  goto L_129c5dbf;
L_129c5dae:;
  /* 129c5dae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c5db1 push eax */
  push32((uint32_t)(EAX));
  /* 129c5db2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c5db4 call 0x129c9b30 */
  push32(0x129c5db9u); f_129c9b30();
  /* 129c5db9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5dbc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_129c5dbf:;
  /* 129c5dbf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c5dc2 pop edi */
  EDI = (pop32());
  /* 129c5dc3 pop esi */
  ESI = (pop32());
  /* 129c5dc4 pop ebx */
  EBX = (pop32());
  /* 129c5dc5 mov esp, ebp */
  ESP = (EBP);
  /* 129c5dc7 pop ebp */
  EBP = (pop32());
  /* 129c5dc8 ret  */
  ESPCHK(0x129c5cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dd0 @ 0x129c5dd0 (7 bytes, 3 insns) */
void f_129c5dd0(void) {
  FTRACE(0x129c5dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c5dd0 push edi */
  push32((uint32_t)(EDI));
  /* 129c5dd1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 129c5dd5 jmp 0x129c5e41 */
  jmp_ind(0x129c5e41u); return;
}

/* FUN_10005de0 @ 0x129c5de0 (224 bytes, 84 insns) */
void f_129c5de0(void) {
  FTRACE(0x129c5de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c5de0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 129c5de4 push edi */
  push32((uint32_t)(EDI));
  /* 129c5de5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 129c5deb je 0x129c5dfc */
  if (C.zf) goto L_129c5dfc;
L_129c5ded:;
  /* 129c5ded mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 129c5def inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 129c5df0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 129c5df2 je 0x129c5e2f */
  if (C.zf) goto L_129c5e2f;
  /* 129c5df4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 129c5dfa jne 0x129c5ded */
  if (!C.zf) goto L_129c5ded;
L_129c5dfc:;
  /* 129c5dfc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 129c5dfe mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 129c5e03 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5e05 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c5e08 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129c5e0a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5e0d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 129c5e12 je 0x129c5dfc */
  if (C.zf) goto L_129c5dfc;
  /* 129c5e14 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 129c5e17 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 129c5e19 je 0x129c5e3e */
  if (C.zf) goto L_129c5e3e;
  /* 129c5e1b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 129c5e1d je 0x129c5e39 */
  if (C.zf) goto L_129c5e39;
  /* 129c5e1f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 129c5e24 je 0x129c5e34 */
  if (C.zf) goto L_129c5e34;
  /* 129c5e26 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 129c5e2b je 0x129c5e2f */
  if (C.zf) goto L_129c5e2f;
  /* 129c5e2d jmp 0x129c5dfc */
  goto L_129c5dfc;
L_129c5e2f:;
  /* 129c5e2f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 129c5e32 jmp 0x129c5e41 */
  goto L_129c5e41;
L_129c5e34:;
  /* 129c5e34 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 129c5e37 jmp 0x129c5e41 */
  goto L_129c5e41;
L_129c5e39:;
  /* 129c5e39 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 129c5e3c jmp 0x129c5e41 */
  goto L_129c5e41;
L_129c5e3e:;
  /* 129c5e3e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_129c5e41:;
  /* 129c5e41 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 129c5e45 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 129c5e4b je 0x129c5e66 */
  if (C.zf) goto L_129c5e66;
L_129c5e4d:;
  /* 129c5e4d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129c5e4f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 129c5e50 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 129c5e52 je 0x129c5eb8 */
  if (C.zf) goto L_129c5eb8;
  /* 129c5e54 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 129c5e56 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129c5e57 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 129c5e5d jne 0x129c5e4d */
  if (!C.zf) goto L_129c5e4d;
  /* 129c5e5f jmp 0x129c5e66 */
  goto L_129c5e66;
L_129c5e61:;
  /* 129c5e61 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 129c5e63 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_129c5e66:;
  /* 129c5e66 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 129c5e6b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 129c5e6d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5e6f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c5e72 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129c5e74 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129c5e76 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5e79 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 129c5e7e je 0x129c5e61 */
  if (C.zf) goto L_129c5e61;
  /* 129c5e80 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 129c5e82 je 0x129c5eb8 */
  if (C.zf) goto L_129c5eb8;
  /* 129c5e84 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 129c5e86 je 0x129c5eaf */
  if (C.zf) goto L_129c5eaf;
  /* 129c5e88 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 129c5e8e je 0x129c5ea2 */
  if (C.zf) goto L_129c5ea2;
  /* 129c5e90 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 129c5e96 je 0x129c5e9a */
  if (C.zf) goto L_129c5e9a;
  /* 129c5e98 jmp 0x129c5e61 */
  goto L_129c5e61;
L_129c5e9a:;
  /* 129c5e9a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 129c5e9c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 129c5ea0 pop edi */
  EDI = (pop32());
  /* 129c5ea1 ret  */
  ESPCHK(0x129c5de0u, _esp0);
  ESP += 4; return;
L_129c5ea2:;
  /* 129c5ea2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 129c5ea5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 129c5ea9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 129c5ead pop edi */
  EDI = (pop32());
  /* 129c5eae ret  */
  ESPCHK(0x129c5de0u, _esp0);
  ESP += 4; return;
L_129c5eaf:;
  /* 129c5eaf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 129c5eb2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 129c5eb6 pop edi */
  EDI = (pop32());
  /* 129c5eb7 ret  */
  ESPCHK(0x129c5de0u, _esp0);
  ESP += 4; return;
L_129c5eb8:;
  /* 129c5eb8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 129c5eba mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 129c5ebe pop edi */
  EDI = (pop32());
  /* 129c5ebf ret  */
  ESPCHK(0x129c5de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ec0 @ 0x129c5ec0 (243 bytes, 91 insns) */
void f_129c5ec0(void) {
  FTRACE(0x129c5ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c5ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c5ec1 mov ebp, esp */
  EBP = (ESP);
  /* 129c5ec3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c5ec6 push ebx */
  push32((uint32_t)(EBX));
  /* 129c5ec7 push esi */
  push32((uint32_t)(ESI));
  /* 129c5ec8 push edi */
  push32((uint32_t)(EDI));
  /* 129c5ec9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 129c5ecc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_129c5ecf:;
  /* 129c5ecf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5ed3 jne 0x129c5ef3 */
  if (!C.zf) goto L_129c5ef3;
  /* 129c5ed5 push 0x129e9df8 */
  push32((uint32_t)(0x129e9df8u));
  /* 129c5eda push 0 */
  push32((uint32_t)(0x0u));
  /* 129c5edc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 129c5ede push 0x129e9e08 */
  push32((uint32_t)(0x129e9e08u));
  /* 129c5ee3 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c5ee5 call 0x129c1ee0 */
  push32(0x129c5eeau); f_129c1ee0();
  /* 129c5eea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5eed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5ef0 jne 0x129c5ef3 */
  if (!C.zf) goto L_129c5ef3;
  /* 129c5ef2 int3  */
  x86_unimpl("int3 @ 0x129c5ef2");
L_129c5ef3:;
  /* 129c5ef3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c5ef5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c5ef7 jne 0x129c5ecf */
  if (!C.zf) goto L_129c5ecf;
L_129c5ef9:;
  /* 129c5ef9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5efd jne 0x129c5f1d */
  if (!C.zf) goto L_129c5f1d;
  /* 129c5eff push 0x129e9ddc */
  push32((uint32_t)(0x129e9ddcu));
  /* 129c5f04 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c5f06 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 129c5f08 push 0x129e9e08 */
  push32((uint32_t)(0x129e9e08u));
  /* 129c5f0d push 2 */
  push32((uint32_t)(0x2u));
  /* 129c5f0f call 0x129c1ee0 */
  push32(0x129c5f14u); f_129c1ee0();
  /* 129c5f14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5f17 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5f1a jne 0x129c5f1d */
  if (!C.zf) goto L_129c5f1d;
  /* 129c5f1c int3  */
  x86_unimpl("int3 @ 0x129c5f1c");
L_129c5f1d:;
  /* 129c5f1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c5f1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129c5f21 jne 0x129c5ef9 */
  if (!C.zf) goto L_129c5ef9;
  /* 129c5f23 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c5f26 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 129c5f2d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c5f30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c5f33 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 129c5f36 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c5f39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c5f3c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 129c5f3e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c5f41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c5f44 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 129c5f47 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129c5f4a push ecx */
  push32((uint32_t)(ECX));
  /* 129c5f4b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c5f4e push edx */
  push32((uint32_t)(EDX));
  /* 129c5f4f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c5f52 push eax */
  push32((uint32_t)(EAX));
  /* 129c5f53 call 0x129c9db0 */
  push32(0x129c5f58u); f_129c9db0();
  /* 129c5f58 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5f5b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 129c5f5e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c5f61 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129c5f64 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c5f67 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c5f6a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 129c5f6d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c5f70 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5f74 jl 0x129c5f98 */
  if ((C.sf!=C.of)) goto L_129c5f98;
  /* 129c5f76 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c5f79 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129c5f7b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 129c5f7e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129c5f80 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 129c5f86 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 129c5f89 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c5f8c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129c5f8e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5f91 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c5f94 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129c5f96 jmp 0x129c5fa9 */
  goto L_129c5fa9;
L_129c5f98:;
  /* 129c5f98 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129c5f9b push edx */
  push32((uint32_t)(EDX));
  /* 129c5f9c push 0 */
  push32((uint32_t)(0x0u));
  /* 129c5f9e call 0x129c9b30 */
  push32(0x129c5fa3u); f_129c9b30();
  /* 129c5fa3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c5fa6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_129c5fa9:;
  /* 129c5fa9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129c5fac pop edi */
  EDI = (pop32());
  /* 129c5fad pop esi */
  ESI = (pop32());
  /* 129c5fae pop ebx */
  EBX = (pop32());
  /* 129c5faf mov esp, ebp */
  ESP = (EBP);
  /* 129c5fb1 pop ebp */
  EBP = (pop32());
  /* 129c5fb2 ret  */
  ESPCHK(0x129c5ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fc0 @ 0x129c5fc0 (47 bytes, 17 insns) */
void f_129c5fc0(void) {
  FTRACE(0x129c5fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c5fc0 push ecx */
  push32((uint32_t)(ECX));
  /* 129c5fc1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5fc6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 129c5fca jb 0x129c5fe0 */
  if (C.cf) goto L_129c5fe0;
L_129c5fcc:;
  /* 129c5fcc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c5fd2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c5fd7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 129c5fd9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5fde jae 0x129c5fcc */
  if (!C.cf) goto L_129c5fcc;
L_129c5fe0:;
  /* 129c5fe0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c5fe2 mov eax, esp */
  EAX = (ESP);
  /* 129c5fe4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 129c5fe6 mov esp, ecx */
  ESP = (ECX);
  /* 129c5fe8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129c5fea mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 129c5fed push eax */
  push32((uint32_t)(EAX));
  /* 129c5fee ret  */
  ESPCHK(0x129c5fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ff0 @ 0x129c5ff0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_129c5ff0(void) {
  FTRACE(0x129c5ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c5ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c5ff1 mov ebp, esp */
  EBP = (ESP);
  /* 129c5ff3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c5ff6 push esi */
  push32((uint32_t)(ESI));
  /* 129c5ff7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c5ffb je 0x129c6003 */
  if (C.zf) goto L_129c6003;
  /* 129c5ffd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6001 jne 0x129c6008 */
  if (!C.zf) goto L_129c6008;
L_129c6003:;
  /* 129c6003 jmp 0x129c61d8 */
  goto L_129c61d8;
L_129c6008:;
  /* 129c6008 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c600c je 0x129c6024 */
  if (C.zf) goto L_129c6024;
  /* 129c600e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6012 je 0x129c6024 */
  if (C.zf) goto L_129c6024;
  /* 129c6014 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6018 je 0x129c6024 */
  if (C.zf) goto L_129c6024;
  /* 129c601a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c601e jne 0x129c6101 */
  if (!C.zf) goto L_129c6101;
L_129c6024:;
  /* 129c6024 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c6026 call 0x129c6820 */
  push32(0x129c602bu); f_129c6820();
  /* 129c602b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c602e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6032 je 0x129c603a */
  if (C.zf) goto L_129c603a;
  /* 129c6034 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6038 jne 0x129c607f */
  if (!C.zf) goto L_129c607f;
L_129c603a:;
  /* 129c603a cmp dword ptr [0x129ee604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6041 jne 0x129c607f */
  if (!C.zf) goto L_129c607f;
  /* 129c6043 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c6045 push 0x129c6220 */
  push32((uint32_t)(0x129c6220u));
  /* 129c604a call dword ptr [0x129f0318] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0318))), 0x129c6050u);
  /* 129c6050 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6053 jne 0x129c6061 */
  if (!C.zf) goto L_129c6061;
  /* 129c6055 mov dword ptr [0x129ee604], 1 */
  w32((uint32_t)(0x129ee604), (0x1u));
  /* 129c605f jmp 0x129c607f */
  goto L_129c607f;
L_129c6061:;
  /* 129c6061 call dword ptr [0x129f02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02d0))), 0x129c6067u);
  /* 129c6067 mov esi, eax */
  ESI = (EAX);
  /* 129c6069 call 0x129cad00 */
  push32(0x129c606eu); f_129cad00();
  /* 129c606e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 129c6070 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c6072 call 0x129c68c0 */
  push32(0x129c6077u); f_129c68c0();
  /* 129c6077 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c607a jmp 0x129c61d8 */
  goto L_129c61d8;
L_129c607f:;
  /* 129c607f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6082 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 129c6085 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c6088 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c608b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 129c608e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6092 ja 0x129c60f2 */
  if ((!C.cf&&!C.zf)) goto L_129c60f2;
  /* 129c6094 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c6097 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c6099 mov dl, byte ptr [eax + 0x129c61ff] */
  DL = (r8((uint32_t)(EAX + 0x129c61ff)));
  /* 129c609f jmp dword ptr [edx*4 + 0x129c61eb] */
  switch (EDX) {
    case 0: goto L_129c60a6;
    case 1: goto L_129c60e0;
    case 2: goto L_129c60ba;
    case 3: goto L_129c60cd;
    case 4: goto L_129c60f2;
    default: x86_unimpl("switch@0x129c609f out of table"); return;
  }
L_129c60a6:;
  /* 129c60a6 mov ecx, dword ptr [0x129ee5f4] */
  ECX = (r32((uint32_t)(0x129ee5f4)));
  /* 129c60ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129c60af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c60b2 mov dword ptr [0x129ee5f4], edx */
  w32((uint32_t)(0x129ee5f4), (EDX));
  /* 129c60b8 jmp 0x129c60f2 */
  goto L_129c60f2;
L_129c60ba:;
  /* 129c60ba mov eax, dword ptr [0x129ee5f8] */
  EAX = (r32((uint32_t)(0x129ee5f8)));
  /* 129c60bf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129c60c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c60c5 mov dword ptr [0x129ee5f8], ecx */
  w32((uint32_t)(0x129ee5f8), (ECX));
  /* 129c60cb jmp 0x129c60f2 */
  goto L_129c60f2;
L_129c60cd:;
  /* 129c60cd mov edx, dword ptr [0x129ee5fc] */
  EDX = (r32((uint32_t)(0x129ee5fc)));
  /* 129c60d3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 129c60d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c60d9 mov dword ptr [0x129ee5fc], eax */
  w32((uint32_t)(0x129ee5fc), (EAX));
  /* 129c60de jmp 0x129c60f2 */
  goto L_129c60f2;
L_129c60e0:;
  /* 129c60e0 mov ecx, dword ptr [0x129ee600] */
  ECX = (r32((uint32_t)(0x129ee600)));
  /* 129c60e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129c60e9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c60ec mov dword ptr [0x129ee600], edx */
  w32((uint32_t)(0x129ee600), (EDX));
L_129c60f2:;
  /* 129c60f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c60f4 call 0x129c68c0 */
  push32(0x129c60f9u); f_129c68c0();
  /* 129c60f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c60fc jmp 0x129c61d3 */
  goto L_129c61d3;
L_129c6101:;
  /* 129c6101 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6105 je 0x129c6118 */
  if (C.zf) goto L_129c6118;
  /* 129c6107 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c610b je 0x129c6118 */
  if (C.zf) goto L_129c6118;
  /* 129c610d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6111 je 0x129c6118 */
  if (C.zf) goto L_129c6118;
  /* 129c6113 jmp 0x129c61d8 */
  goto L_129c61d8;
L_129c6118:;
  /* 129c6118 call 0x129c2860 */
  push32(0x129c611du); f_129c2860();
  /* 129c611d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c6120 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6123 cmp dword ptr [eax + 0x50], 0x129ecc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x129ecc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c612a jne 0x129c6175 */
  if (!C.zf) goto L_129c6175;
  /* 129c612c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 129c6131 push 0x129e9e14 */
  push32((uint32_t)(0x129e9e14u));
  /* 129c6136 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c6138 mov ecx, dword ptr [0x129ecc80] */
  ECX = (r32((uint32_t)(0x129ecc80)));
  /* 129c613e push ecx */
  push32((uint32_t)(ECX));
  /* 129c613f call 0x129c2e20 */
  push32(0x129c6144u); f_129c2e20();
  /* 129c6144 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6147 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c614a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 129c614d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6150 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6154 je 0x129c6173 */
  if (C.zf) goto L_129c6173;
  /* 129c6156 mov ecx, dword ptr [0x129ecc80] */
  ECX = (r32((uint32_t)(0x129ecc80)));
  /* 129c615c push ecx */
  push32((uint32_t)(ECX));
  /* 129c615d push 0x129ecc00 */
  push32((uint32_t)(0x129ecc00u));
  /* 129c6162 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6165 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 129c6168 push eax */
  push32((uint32_t)(EAX));
  /* 129c6169 call 0x129c9700 */
  push32(0x129c616eu); f_129c9700();
  /* 129c616e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6171 jmp 0x129c6175 */
  goto L_129c6175;
L_129c6173:;
  /* 129c6173 jmp 0x129c61d8 */
  goto L_129c61d8;
L_129c6175:;
  /* 129c6175 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6178 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 129c617b push edx */
  push32((uint32_t)(EDX));
  /* 129c617c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c617f push eax */
  push32((uint32_t)(EAX));
  /* 129c6180 call 0x129c6500 */
  push32(0x129c6185u); f_129c6500();
  /* 129c6185 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6188 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129c618b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c618f jne 0x129c6193 */
  if (!C.zf) goto L_129c6193;
  /* 129c6191 jmp 0x129c61d8 */
  goto L_129c61d8;
L_129c6193:;
  /* 129c6193 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c6196 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 129c6199 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_129c619c:;
  /* 129c619c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c619f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129c61a2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c61a5 jne 0x129c61d3 */
  if (!C.zf) goto L_129c61d3;
  /* 129c61a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c61aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c61ad mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 129c61b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c61b3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c61b6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129c61b9 mov edx, dword ptr [0x129ecc84] */
  EDX = (r32((uint32_t)(0x129ecc84)));
  /* 129c61bf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c61c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c61c5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 129c61c8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c61ca cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c61cd jb 0x129c61d1 */
  if (C.cf) goto L_129c61d1;
  /* 129c61cf jmp 0x129c61d3 */
  goto L_129c61d3;
L_129c61d1:;
  /* 129c61d1 jmp 0x129c619c */
  goto L_129c619c;
L_129c61d3:;
  /* 129c61d3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c61d6 jmp 0x129c61e6 */
  goto L_129c61e6;
L_129c61d8:;
  /* 129c61d8 call 0x129cacf0 */
  push32(0x129c61ddu); f_129cacf0();
  /* 129c61dd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 129c61e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_129c61e6:;
  /* 129c61e6 pop esi */
  ESI = (pop32());
  /* 129c61e7 mov esp, ebp */
  ESP = (EBP);
  /* 129c61e9 pop ebp */
  EBP = (pop32());
  /* 129c61ea ret  */
  ESPCHK(0x129c5ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006220 @ 0x129c6220 (146 bytes, 45 insns) */
void f_129c6220(void) {
  FTRACE(0x129c6220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c6220 push ebp */
  push32((uint32_t)(EBP));
  /* 129c6221 mov ebp, esp */
  EBP = (ESP);
  /* 129c6223 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c6226 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c6228 call 0x129c6820 */
  push32(0x129c622du); f_129c6820();
  /* 129c622d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6230 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6234 jne 0x129c624e */
  if (!C.zf) goto L_129c624e;
  /* 129c6236 mov dword ptr [ebp - 8], 0x129ee5f4 */
  w32((uint32_t)(EBP + -0x8), (0x129ee5f4u));
  /* 129c623d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c6240 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129c6242 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129c6245 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 129c624c jmp 0x129c6264 */
  goto L_129c6264;
L_129c624e:;
  /* 129c624e mov dword ptr [ebp - 8], 0x129ee5f8 */
  w32((uint32_t)(EBP + -0x8), (0x129ee5f8u));
  /* 129c6255 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c6258 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129c625a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129c625d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_129c6264:;
  /* 129c6264 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6268 jne 0x129c6278 */
  if (!C.zf) goto L_129c6278;
  /* 129c626a push 1 */
  push32((uint32_t)(0x1u));
  /* 129c626c call 0x129c68c0 */
  push32(0x129c6271u); f_129c68c0();
  /* 129c6271 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6274 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c6276 jmp 0x129c62ac */
  goto L_129c62ac;
L_129c6278:;
  /* 129c6278 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c627c je 0x129c629d */
  if (C.zf) goto L_129c629d;
  /* 129c627e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c6281 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 129c6287 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c6289 call 0x129c68c0 */
  push32(0x129c628eu); f_129c68c0();
  /* 129c628e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6291 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6294 push edx */
  push32((uint32_t)(EDX));
  /* 129c6295 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x129c6298u);
  /* 129c6298 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c629b jmp 0x129c62a7 */
  goto L_129c62a7;
L_129c629d:;
  /* 129c629d push 1 */
  push32((uint32_t)(0x1u));
  /* 129c629f call 0x129c68c0 */
  push32(0x129c62a4u); f_129c68c0();
  /* 129c62a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c62a7:;
  /* 129c62a7 mov eax, 1 */
  EAX = (0x1u);
L_129c62ac:;
  /* 129c62ac mov esp, ebp */
  ESP = (EBP);
  /* 129c62ae pop ebp */
  EBP = (pop32());
  /* 129c62af ret 4 */
  ESPCHK(0x129c6220u, _esp0);
  ESP += 8; return;
}

/* FUN_100062c0 @ 0x129c62c0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_129c62c0(void) {
  FTRACE(0x129c62c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c62c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c62c1 mov ebp, esp */
  EBP = (ESP);
  /* 129c62c3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c62c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 129c62cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c62d0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 129c62d3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c62d6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c62d9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 129c62dc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c62e0 ja 0x129c638e */
  if ((!C.cf&&!C.zf)) goto L_129c638e;
  /* 129c62e6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 129c62e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c62eb mov dl, byte ptr [eax + 0x129c64e2] */
  DL = (r8((uint32_t)(EAX + 0x129c64e2)));
  /* 129c62f1 jmp dword ptr [edx*4 + 0x129c64ca] */
  switch (EDX) {
    case 0: goto L_129c62f8;
    case 1: goto L_129c6363;
    case 2: goto L_129c6349;
    case 3: goto L_129c6315;
    case 4: goto L_129c632f;
    case 5: goto L_129c638e;
    default: x86_unimpl("switch@0x129c62f1 out of table"); return;
  }
L_129c62f8:;
  /* 129c62f8 mov dword ptr [ebp - 0x18], 0x129ee5f4 */
  w32((uint32_t)(EBP + -0x18), (0x129ee5f4u));
  /* 129c62ff mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c6302 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129c6304 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 129c6307 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c630a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c630d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129c6310 jmp 0x129c6396 */
  goto L_129c6396;
L_129c6315:;
  /* 129c6315 mov dword ptr [ebp - 0x18], 0x129ee5f8 */
  w32((uint32_t)(EBP + -0x18), (0x129ee5f8u));
  /* 129c631c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c631f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129c6321 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 129c6324 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c6327 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c632a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129c632d jmp 0x129c6396 */
  goto L_129c6396;
L_129c632f:;
  /* 129c632f mov dword ptr [ebp - 0x18], 0x129ee5fc */
  w32((uint32_t)(EBP + -0x18), (0x129ee5fcu));
  /* 129c6336 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c6339 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129c633b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 129c633e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c6341 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6344 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129c6347 jmp 0x129c6396 */
  goto L_129c6396;
L_129c6349:;
  /* 129c6349 mov dword ptr [ebp - 0x18], 0x129ee600 */
  w32((uint32_t)(EBP + -0x18), (0x129ee600u));
  /* 129c6350 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c6353 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129c6355 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 129c6358 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c635b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c635e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129c6361 jmp 0x129c6396 */
  goto L_129c6396;
L_129c6363:;
  /* 129c6363 call 0x129c2860 */
  push32(0x129c6368u); f_129c2860();
  /* 129c6368 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c636b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c636e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 129c6371 push edx */
  push32((uint32_t)(EDX));
  /* 129c6372 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6375 push eax */
  push32((uint32_t)(EAX));
  /* 129c6376 call 0x129c6500 */
  push32(0x129c637bu); f_129c6500();
  /* 129c637b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c637e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6381 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129c6384 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c6387 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129c6389 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 129c638c jmp 0x129c6396 */
  goto L_129c6396;
L_129c638e:;
  /* 129c638e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c6391 jmp 0x129c64c6 */
  goto L_129c64c6;
L_129c6396:;
  /* 129c6396 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c639a je 0x129c63a6 */
  if (C.zf) goto L_129c63a6;
  /* 129c639c push 1 */
  push32((uint32_t)(0x1u));
  /* 129c639e call 0x129c6820 */
  push32(0x129c63a3u); f_129c6820();
  /* 129c63a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c63a6:;
  /* 129c63a6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c63aa jne 0x129c63c3 */
  if (!C.zf) goto L_129c63c3;
  /* 129c63ac cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c63b0 je 0x129c63bc */
  if (C.zf) goto L_129c63bc;
  /* 129c63b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 129c63b4 call 0x129c68c0 */
  push32(0x129c63b9u); f_129c68c0();
  /* 129c63b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c63bc:;
  /* 129c63bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c63be jmp 0x129c64c6 */
  goto L_129c64c6;
L_129c63c3:;
  /* 129c63c3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c63c7 jne 0x129c63e0 */
  if (!C.zf) goto L_129c63e0;
  /* 129c63c9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c63cd je 0x129c63d9 */
  if (C.zf) goto L_129c63d9;
  /* 129c63cf push 1 */
  push32((uint32_t)(0x1u));
  /* 129c63d1 call 0x129c68c0 */
  push32(0x129c63d6u); f_129c68c0();
  /* 129c63d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c63d9:;
  /* 129c63d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 129c63db call 0x129c25e0 */
  push32(0x129c63e0u); f_129c25e0();
L_129c63e0:;
  /* 129c63e0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c63e4 je 0x129c63f2 */
  if (C.zf) goto L_129c63f2;
  /* 129c63e6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c63ea je 0x129c63f2 */
  if (C.zf) goto L_129c63f2;
  /* 129c63ec cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c63f0 jne 0x129c641e */
  if (!C.zf) goto L_129c641e;
L_129c63f2:;
  /* 129c63f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c63f5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 129c63f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 129c63fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c63fe mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 129c6405 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6409 jne 0x129c641e */
  if (!C.zf) goto L_129c641e;
  /* 129c640b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c640e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 129c6411 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129c6414 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6417 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_129c641e:;
  /* 129c641e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6422 jne 0x129c6460 */
  if (!C.zf) goto L_129c6460;
  /* 129c6424 mov eax, dword ptr [0x129ecc78] */
  EAX = (r32((uint32_t)(0x129ecc78)));
  /* 129c6429 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 129c642c jmp 0x129c6437 */
  goto L_129c6437;
L_129c642e:;
  /* 129c642e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c6431 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6434 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_129c6437:;
  /* 129c6437 mov edx, dword ptr [0x129ecc78] */
  EDX = (r32((uint32_t)(0x129ecc78)));
  /* 129c643d add edx, dword ptr [0x129ecc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x129ecc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6443 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6446 jge 0x129c645e */
  if ((C.sf==C.of)) goto L_129c645e;
  /* 129c6448 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c644b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c644e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6451 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 129c6454 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 129c645c jmp 0x129c642e */
  goto L_129c642e;
L_129c645e:;
  /* 129c645e jmp 0x129c6469 */
  goto L_129c6469;
L_129c6460:;
  /* 129c6460 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c6463 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_129c6469:;
  /* 129c6469 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c646d je 0x129c6479 */
  if (C.zf) goto L_129c6479;
  /* 129c646f push 1 */
  push32((uint32_t)(0x1u));
  /* 129c6471 call 0x129c68c0 */
  push32(0x129c6476u); f_129c68c0();
  /* 129c6476 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c6479:;
  /* 129c6479 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c647d jne 0x129c6490 */
  if (!C.zf) goto L_129c6490;
  /* 129c647f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6482 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 129c6485 push edx */
  push32((uint32_t)(EDX));
  /* 129c6486 push 8 */
  push32((uint32_t)(0x8u));
  /* 129c6488 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x129c648bu);
  /* 129c648b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c648e jmp 0x129c649a */
  goto L_129c649a;
L_129c6490:;
  /* 129c6490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6493 push eax */
  push32((uint32_t)(EAX));
  /* 129c6494 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x129c6497u);
  /* 129c6497 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c649a:;
  /* 129c649a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c649e je 0x129c64ac */
  if (C.zf) goto L_129c64ac;
  /* 129c64a0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c64a4 je 0x129c64ac */
  if (C.zf) goto L_129c64ac;
  /* 129c64a6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c64aa jne 0x129c64c4 */
  if (!C.zf) goto L_129c64c4;
L_129c64ac:;
  /* 129c64ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c64af mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c64b2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 129c64b5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c64b9 jne 0x129c64c4 */
  if (!C.zf) goto L_129c64c4;
  /* 129c64bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c64be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c64c1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_129c64c4:;
  /* 129c64c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129c64c6:;
  /* 129c64c6 mov esp, ebp */
  ESP = (EBP);
  /* 129c64c8 pop ebp */
  EBP = (pop32());
  /* 129c64c9 ret  */
  ESPCHK(0x129c62c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006500 @ 0x129c6500 (91 bytes, 35 insns) */
void f_129c6500(void) {
  FTRACE(0x129c6500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c6500 push ebp */
  push32((uint32_t)(EBP));
  /* 129c6501 mov ebp, esp */
  EBP = (ESP);
  /* 129c6503 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6504 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c6507 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129c650a:;
  /* 129c650a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c650d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129c6510 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6513 je 0x129c6533 */
  if (C.zf) goto L_129c6533;
  /* 129c6515 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6518 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c651b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c651e mov ecx, dword ptr [0x129ecc84] */
  ECX = (r32((uint32_t)(0x129ecc84)));
  /* 129c6524 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c6527 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c652a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c652c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c652f jae 0x129c6533 */
  if (!C.cf) goto L_129c6533;
  /* 129c6531 jmp 0x129c650a */
  goto L_129c650a;
L_129c6533:;
  /* 129c6533 mov eax, dword ptr [0x129ecc84] */
  EAX = (r32((uint32_t)(0x129ecc84)));
  /* 129c6538 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c653b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c653e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6540 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6543 jae 0x129c6555 */
  if (!C.cf) goto L_129c6555;
  /* 129c6545 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6548 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 129c654b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c654e jne 0x129c6555 */
  if (!C.zf) goto L_129c6555;
  /* 129c6550 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6553 jmp 0x129c6557 */
  goto L_129c6557;
L_129c6555:;
  /* 129c6555 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129c6557:;
  /* 129c6557 mov esp, ebp */
  ESP = (EBP);
  /* 129c6559 pop ebp */
  EBP = (pop32());
  /* 129c655a ret  */
  ESPCHK(0x129c6500u, _esp0);
  ESP += 4; return;
}

/* FUN_10006560 @ 0x129c6560 (13 bytes, 6 insns) */
void f_129c6560(void) {
  FTRACE(0x129c6560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c6560 push ebp */
  push32((uint32_t)(EBP));
  /* 129c6561 mov ebp, esp */
  EBP = (ESP);
  /* 129c6563 call 0x129c2860 */
  push32(0x129c6568u); f_129c2860();
  /* 129c6568 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c656b pop ebp */
  EBP = (pop32());
  /* 129c656c ret  */
  ESPCHK(0x129c6560u, _esp0);
  ESP += 4; return;
}

/* FUN_10006570 @ 0x129c6570 (13 bytes, 6 insns) */
void f_129c6570(void) {
  FTRACE(0x129c6570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c6570 push ebp */
  push32((uint32_t)(EBP));
  /* 129c6571 mov ebp, esp */
  EBP = (ESP);
  /* 129c6573 call 0x129c2860 */
  push32(0x129c6578u); f_129c2860();
  /* 129c6578 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c657b pop ebp */
  EBP = (pop32());
  /* 129c657c ret  */
  ESPCHK(0x129c6570u, _esp0);
  ESP += 4; return;
}

/* FUN_10006580 @ 0x129c6580 (187 bytes, 54 insns) */
void f_129c6580(void) {
  FTRACE(0x129c6580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c6580 push ebp */
  push32((uint32_t)(EBP));
  /* 129c6581 mov ebp, esp */
  EBP = (ESP);
  /* 129c6583 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c6586 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129c658d cmp dword ptr [0x129ee608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6594 jne 0x129c65f3 */
  if (!C.zf) goto L_129c65f3;
  /* 129c6596 push 0x129e9240 */
  push32((uint32_t)(0x129e9240u));
  /* 129c659b call dword ptr [0x129f02a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02a0))), 0x129c65a1u);
  /* 129c65a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129c65a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c65a8 je 0x129c65c7 */
  if (C.zf) goto L_129c65c7;
  /* 129c65aa push 0x129e9e44 */
  push32((uint32_t)(0x129e9e44u));
  /* 129c65af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c65b2 push eax */
  push32((uint32_t)(EAX));
  /* 129c65b3 call dword ptr [0x129f029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f029c))), 0x129c65b9u);
  /* 129c65b9 mov dword ptr [0x129ee608], eax */
  w32((uint32_t)(0x129ee608), (EAX));
  /* 129c65be cmp dword ptr [0x129ee608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c65c5 jne 0x129c65cb */
  if (!C.zf) goto L_129c65cb;
L_129c65c7:;
  /* 129c65c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c65c9 jmp 0x129c6637 */
  goto L_129c6637;
L_129c65cb:;
  /* 129c65cb push 0x129e9e34 */
  push32((uint32_t)(0x129e9e34u));
  /* 129c65d0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c65d3 push ecx */
  push32((uint32_t)(ECX));
  /* 129c65d4 call dword ptr [0x129f029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f029c))), 0x129c65dau);
  /* 129c65da mov dword ptr [0x129ee60c], eax */
  w32((uint32_t)(0x129ee60c), (EAX));
  /* 129c65df push 0x129e9e20 */
  push32((uint32_t)(0x129e9e20u));
  /* 129c65e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c65e7 push edx */
  push32((uint32_t)(EDX));
  /* 129c65e8 call dword ptr [0x129f029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f029c))), 0x129c65eeu);
  /* 129c65ee mov dword ptr [0x129ee610], eax */
  w32((uint32_t)(0x129ee610), (EAX));
L_129c65f3:;
  /* 129c65f3 cmp dword ptr [0x129ee60c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee60c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c65fa je 0x129c6605 */
  if (C.zf) goto L_129c6605;
  /* 129c65fc call dword ptr [0x129ee60c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ee60c))), 0x129c6602u);
  /* 129c6602 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129c6605:;
  /* 129c6605 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6609 je 0x129c6621 */
  if (C.zf) goto L_129c6621;
  /* 129c660b cmp dword ptr [0x129ee610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ee610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6612 je 0x129c6621 */
  if (C.zf) goto L_129c6621;
  /* 129c6614 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6617 push eax */
  push32((uint32_t)(EAX));
  /* 129c6618 call dword ptr [0x129ee610] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ee610))), 0x129c661eu);
  /* 129c661e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129c6621:;
  /* 129c6621 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129c6624 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6625 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c6628 push edx */
  push32((uint32_t)(EDX));
  /* 129c6629 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c662c push eax */
  push32((uint32_t)(EAX));
  /* 129c662d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6630 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6631 call dword ptr [0x129ee608] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ee608))), 0x129c6637u);
L_129c6637:;
  /* 129c6637 mov esp, ebp */
  ESP = (EBP);
  /* 129c6639 pop ebp */
  EBP = (pop32());
  /* 129c663a ret  */
  ESPCHK(0x129c6580u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x129c6640 (254 bytes, 109 insns) */
void f_129c6640(void) {
  FTRACE(0x129c6640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c6640 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 129c6644 push edi */
  push32((uint32_t)(EDI));
  /* 129c6645 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129c6647 je 0x129c66c3 */
  if (C.zf) goto L_129c66c3;
  /* 129c6649 push esi */
  push32((uint32_t)(ESI));
  /* 129c664a push ebx */
  push32((uint32_t)(EBX));
  /* 129c664b mov ebx, ecx */
  EBX = (ECX);
  /* 129c664d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 129c6651 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 129c6657 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 129c665b jne 0x129c6664 */
  if (!C.zf) goto L_129c6664;
  /* 129c665d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129c6660 jne 0x129c66d1 */
  if (!C.zf) goto L_129c66d1;
  /* 129c6662 jmp 0x129c6685 */
  goto L_129c6685;
L_129c6664:;
  /* 129c6664 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129c6666 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 129c6667 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129c6669 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129c666a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 129c666b je 0x129c6692 */
  if (C.zf) goto L_129c6692;
  /* 129c666d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 129c666f je 0x129c669a */
  if (C.zf) goto L_129c669a;
  /* 129c6671 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 129c6677 jne 0x129c6664 */
  if (!C.zf) goto L_129c6664;
  /* 129c6679 mov ebx, ecx */
  EBX = (ECX);
  /* 129c667b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129c667e jne 0x129c66d1 */
  if (!C.zf) goto L_129c66d1;
L_129c6680:;
  /* 129c6680 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 129c6683 je 0x129c6692 */
  if (C.zf) goto L_129c6692;
L_129c6685:;
  /* 129c6685 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129c6687 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 129c6688 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129c668a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129c668b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 129c668d je 0x129c66be */
  if (C.zf) goto L_129c66be;
  /* 129c668f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 129c6690 jne 0x129c6685 */
  if (!C.zf) goto L_129c6685;
L_129c6692:;
  /* 129c6692 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 129c6696 pop ebx */
  EBX = (pop32());
  /* 129c6697 pop esi */
  ESI = (pop32());
  /* 129c6698 pop edi */
  EDI = (pop32());
  /* 129c6699 ret  */
  ESPCHK(0x129c6640u, _esp0);
  ESP += 4; return;
L_129c669a:;
  /* 129c669a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 129c66a0 je 0x129c66b4 */
  if (C.zf) goto L_129c66b4;
L_129c66a2:;
  /* 129c66a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129c66a4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129c66a5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 129c66a6 je 0x129c6736 */
  if (C.zf) goto L_129c6736;
  /* 129c66ac test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 129c66b2 jne 0x129c66a2 */
  if (!C.zf) goto L_129c66a2;
L_129c66b4:;
  /* 129c66b4 mov ebx, ecx */
  EBX = (ECX);
  /* 129c66b6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129c66b9 jne 0x129c6727 */
  if (!C.zf) goto L_129c6727;
L_129c66bb:;
  /* 129c66bb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129c66bd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_129c66be:;
  /* 129c66be dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 129c66bf jne 0x129c66bb */
  if (!C.zf) goto L_129c66bb;
  /* 129c66c1 pop ebx */
  EBX = (pop32());
  /* 129c66c2 pop esi */
  ESI = (pop32());
L_129c66c3:;
  /* 129c66c3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 129c66c7 pop edi */
  EDI = (pop32());
  /* 129c66c8 ret  */
  ESPCHK(0x129c6640u, _esp0);
  ESP += 4; return;
L_129c66c9:;
  /* 129c66c9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 129c66cb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 129c66ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 129c66cf je 0x129c6680 */
  if (C.zf) goto L_129c6680;
L_129c66d1:;
  /* 129c66d1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 129c66d6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 129c66d8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c66da xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c66dd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129c66df mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 129c66e1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 129c66e4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 129c66e9 je 0x129c66c9 */
  if (C.zf) goto L_129c66c9;
  /* 129c66eb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 129c66ed je 0x129c671b */
  if (C.zf) goto L_129c671b;
  /* 129c66ef test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 129c66f1 je 0x129c6711 */
  if (C.zf) goto L_129c6711;
  /* 129c66f3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 129c66f9 je 0x129c6707 */
  if (C.zf) goto L_129c6707;
  /* 129c66fb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 129c6701 jne 0x129c66c9 */
  if (!C.zf) goto L_129c66c9;
  /* 129c6703 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 129c6705 jmp 0x129c671f */
  goto L_129c671f;
L_129c6707:;
  /* 129c6707 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129c670d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 129c670f jmp 0x129c671f */
  goto L_129c671f;
L_129c6711:;
  /* 129c6711 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 129c6717 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 129c6719 jmp 0x129c671f */
  goto L_129c671f;
L_129c671b:;
  /* 129c671b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129c671d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_129c671f:;
  /* 129c671f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6722 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c6724 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 129c6725 je 0x129c6731 */
  if (C.zf) goto L_129c6731;
L_129c6727:;
  /* 129c6727 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129c6729:;
  /* 129c6729 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 129c672b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 129c672e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 129c672f jne 0x129c6729 */
  if (!C.zf) goto L_129c6729;
L_129c6731:;
  /* 129c6731 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 129c6734 jne 0x129c66bb */
  if (!C.zf) goto L_129c66bb;
L_129c6736:;
  /* 129c6736 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 129c673a pop ebx */
  EBX = (pop32());
  /* 129c673b pop esi */
  ESI = (pop32());
  /* 129c673c pop edi */
  EDI = (pop32());
  /* 129c673d ret  */
  ESPCHK(0x129c6640u, _esp0);
  ESP += 4; return;
}

/* FUN_10006740 @ 0x129c6740 (55 bytes, 16 insns) */
void f_129c6740(void) {
  FTRACE(0x129c6740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c6740 push ebp */
  push32((uint32_t)(EBP));
  /* 129c6741 mov ebp, esp */
  EBP = (ESP);
  /* 129c6743 mov eax, dword ptr [0x129ecb84] */
  EAX = (r32((uint32_t)(0x129ecb84)));
  /* 129c6748 push eax */
  push32((uint32_t)(EAX));
  /* 129c6749 call dword ptr [0x129f031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f031c))), 0x129c674fu);
  /* 129c674f mov ecx, dword ptr [0x129ecb74] */
  ECX = (r32((uint32_t)(0x129ecb74)));
  /* 129c6755 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6756 call dword ptr [0x129f031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f031c))), 0x129c675cu);
  /* 129c675c mov edx, dword ptr [0x129ecb64] */
  EDX = (r32((uint32_t)(0x129ecb64)));
  /* 129c6762 push edx */
  push32((uint32_t)(EDX));
  /* 129c6763 call dword ptr [0x129f031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f031c))), 0x129c6769u);
  /* 129c6769 mov eax, dword ptr [0x129ecb44] */
  EAX = (r32((uint32_t)(0x129ecb44)));
  /* 129c676e push eax */
  push32((uint32_t)(EAX));
  /* 129c676f call dword ptr [0x129f031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f031c))), 0x129c6775u);
  /* 129c6775 pop ebp */
  EBP = (pop32());
  /* 129c6776 ret  */
  ESPCHK(0x129c6740u, _esp0);
  ESP += 4; return;
}

/* FUN_10006780 @ 0x129c6780 (159 bytes, 47 insns) */
void f_129c6780(void) {
  FTRACE(0x129c6780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c6780 push ebp */
  push32((uint32_t)(EBP));
  /* 129c6781 mov ebp, esp */
  EBP = (ESP);
  /* 129c6783 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6784 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129c678b jmp 0x129c6796 */
  goto L_129c6796;
L_129c678d:;
  /* 129c678d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6790 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6793 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129c6796:;
  /* 129c6796 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c679a jge 0x129c67e9 */
  if ((C.sf==C.of)) goto L_129c67e9;
  /* 129c679c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c679f cmp dword ptr [ecx*4 + 0x129ecb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x129ecb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c67a7 je 0x129c67e7 */
  if (C.zf) goto L_129c67e7;
  /* 129c67a9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c67ad je 0x129c67e7 */
  if (C.zf) goto L_129c67e7;
  /* 129c67af cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c67b3 je 0x129c67e7 */
  if (C.zf) goto L_129c67e7;
  /* 129c67b5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c67b9 je 0x129c67e7 */
  if (C.zf) goto L_129c67e7;
  /* 129c67bb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c67bf je 0x129c67e7 */
  if (C.zf) goto L_129c67e7;
  /* 129c67c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c67c4 mov eax, dword ptr [edx*4 + 0x129ecb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x129ecb40)));
  /* 129c67cb push eax */
  push32((uint32_t)(EAX));
  /* 129c67cc call dword ptr [0x129f02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02e4))), 0x129c67d2u);
  /* 129c67d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 129c67d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c67d7 mov edx, dword ptr [ecx*4 + 0x129ecb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129ecb40)));
  /* 129c67de push edx */
  push32((uint32_t)(EDX));
  /* 129c67df call 0x129c38b0 */
  push32(0x129c67e4u); f_129c38b0();
  /* 129c67e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c67e7:;
  /* 129c67e7 jmp 0x129c678d */
  goto L_129c678d;
L_129c67e9:;
  /* 129c67e9 mov eax, dword ptr [0x129ecb64] */
  EAX = (r32((uint32_t)(0x129ecb64)));
  /* 129c67ee push eax */
  push32((uint32_t)(EAX));
  /* 129c67ef call dword ptr [0x129f02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02e4))), 0x129c67f5u);
  /* 129c67f5 mov ecx, dword ptr [0x129ecb74] */
  ECX = (r32((uint32_t)(0x129ecb74)));
  /* 129c67fb push ecx */
  push32((uint32_t)(ECX));
  /* 129c67fc call dword ptr [0x129f02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02e4))), 0x129c6802u);
  /* 129c6802 mov edx, dword ptr [0x129ecb84] */
  EDX = (r32((uint32_t)(0x129ecb84)));
  /* 129c6808 push edx */
  push32((uint32_t)(EDX));
  /* 129c6809 call dword ptr [0x129f02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02e4))), 0x129c680fu);
  /* 129c680f mov eax, dword ptr [0x129ecb44] */
  EAX = (r32((uint32_t)(0x129ecb44)));
  /* 129c6814 push eax */
  push32((uint32_t)(EAX));
  /* 129c6815 call dword ptr [0x129f02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02e4))), 0x129c681bu);
  /* 129c681b mov esp, ebp */
  ESP = (EBP);
  /* 129c681d pop ebp */
  EBP = (pop32());
  /* 129c681e ret  */
  ESPCHK(0x129c6780u, _esp0);
  ESP += 4; return;
}

/* FUN_10006820 @ 0x129c6820 (151 bytes, 46 insns) */
void f_129c6820(void) {
  FTRACE(0x129c6820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c6820 push ebp */
  push32((uint32_t)(EBP));
  /* 129c6821 mov ebp, esp */
  EBP = (ESP);
  /* 129c6823 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6827 cmp dword ptr [eax*4 + 0x129ecb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x129ecb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c682f jne 0x129c68a2 */
  if (!C.zf) goto L_129c68a2;
  /* 129c6831 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 129c6836 push 0x129e9e50 */
  push32((uint32_t)(0x129e9e50u));
  /* 129c683b push 2 */
  push32((uint32_t)(0x2u));
  /* 129c683d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 129c683f call 0x129c2e20 */
  push32(0x129c6844u); f_129c2e20();
  /* 129c6844 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6847 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c684a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c684e jne 0x129c685a */
  if (!C.zf) goto L_129c685a;
  /* 129c6850 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 129c6852 call 0x129c1d90 */
  push32(0x129c6857u); f_129c1d90();
  /* 129c6857 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c685a:;
  /* 129c685a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 129c685c call 0x129c6820 */
  push32(0x129c6861u); f_129c6820();
  /* 129c6861 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6864 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6867 cmp dword ptr [ecx*4 + 0x129ecb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x129ecb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c686f jne 0x129c688a */
  if (!C.zf) goto L_129c688a;
  /* 129c6871 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6874 push edx */
  push32((uint32_t)(EDX));
  /* 129c6875 call dword ptr [0x129f031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f031c))), 0x129c687bu);
  /* 129c687b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c687e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6881 mov dword ptr [eax*4 + 0x129ecb40], ecx */
  w32((uint32_t)(EAX*4 + 0x129ecb40), (ECX));
  /* 129c6888 jmp 0x129c6898 */
  goto L_129c6898;
L_129c688a:;
  /* 129c688a push 2 */
  push32((uint32_t)(0x2u));
  /* 129c688c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c688f push edx */
  push32((uint32_t)(EDX));
  /* 129c6890 call 0x129c38b0 */
  push32(0x129c6895u); f_129c38b0();
  /* 129c6895 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c6898:;
  /* 129c6898 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 129c689a call 0x129c68c0 */
  push32(0x129c689fu); f_129c68c0();
  /* 129c689f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c68a2:;
  /* 129c68a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c68a5 mov ecx, dword ptr [eax*4 + 0x129ecb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x129ecb40)));
  /* 129c68ac push ecx */
  push32((uint32_t)(ECX));
  /* 129c68ad call dword ptr [0x129f0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0320))), 0x129c68b3u);
  /* 129c68b3 mov esp, ebp */
  ESP = (EBP);
  /* 129c68b5 pop ebp */
  EBP = (pop32());
  /* 129c68b6 ret  */
  ESPCHK(0x129c6820u, _esp0);
  ESP += 4; return;
}

/* FUN_100068c0 @ 0x129c68c0 (22 bytes, 8 insns) */
void f_129c68c0(void) {
  FTRACE(0x129c68c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c68c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c68c1 mov ebp, esp */
  EBP = (ESP);
  /* 129c68c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c68c6 mov ecx, dword ptr [eax*4 + 0x129ecb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x129ecb40)));
  /* 129c68cd push ecx */
  push32((uint32_t)(ECX));
  /* 129c68ce call dword ptr [0x129f0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0324))), 0x129c68d4u);
  /* 129c68d4 pop ebp */
  EBP = (pop32());
  /* 129c68d5 ret  */
  ESPCHK(0x129c68c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068e0 @ 0x129c68e0 (26 bytes, 10 insns) */
void f_129c68e0(void) {
  FTRACE(0x129c68e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c68e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c68e1 mov ebp, esp */
  EBP = (ESP);
  /* 129c68e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c68e6 push eax */
  push32((uint32_t)(EAX));
  /* 129c68e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129c68e9 call dword ptr [0x129f0328] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f0328))), 0x129c68efu);
  /* 129c68ef push 0xff */
  push32((uint32_t)(0xffu));
  /* 129c68f4 call dword ptr [0x129f02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f02ac))), 0x129c68fau);
  /* 129c68fa pop ebp */
  EBP = (pop32());
  /* 129c68fb ret  */
  ESPCHK(0x129c68e0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x129c6900 (446 bytes, 130 insns) */
void f_129c6900(void) {
  FTRACE(0x129c6900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c6900 push ebp */
  push32((uint32_t)(EBP));
  /* 129c6901 mov ebp, esp */
  EBP = (ESP);
  /* 129c6903 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129c6906 call 0x129c2860 */
  push32(0x129c690bu); f_129c2860();
  /* 129c690b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129c690e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c6911 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 129c6914 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6915 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6918 push edx */
  push32((uint32_t)(EDX));
  /* 129c6919 call 0x129c6ac0 */
  push32(0x129c691eu); f_129c6ac0();
  /* 129c691e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6921 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 129c6924 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6928 je 0x129c6933 */
  if (C.zf) goto L_129c6933;
  /* 129c692a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c692d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6931 jne 0x129c6942 */
  if (!C.zf) goto L_129c6942;
L_129c6933:;
  /* 129c6933 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c6936 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6937 call dword ptr [0x129f032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129f032c))), 0x129c693du);
  /* 129c693d jmp 0x129c6aba */
  goto L_129c6aba;
L_129c6942:;
  /* 129c6942 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c6945 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6949 jne 0x129c695f */
  if (!C.zf) goto L_129c695f;
  /* 129c694b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c694e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 129c6955 mov eax, 1 */
  EAX = (0x1u);
  /* 129c695a jmp 0x129c6aba */
  goto L_129c6aba;
L_129c695f:;
  /* 129c695f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c6962 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6966 jne 0x129c6970 */
  if (!C.zf) goto L_129c6970;
  /* 129c6968 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129c696b jmp 0x129c6aba */
  goto L_129c6aba;
L_129c6970:;
  /* 129c6970 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c6973 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 129c6976 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c6979 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c697c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 129c697f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 129c6982 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c6985 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c6988 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 129c698b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c698e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6992 jne 0x129c6a97 */
  if (!C.zf) goto L_129c6a97;
  /* 129c6998 mov eax, dword ptr [0x129ecc78] */
  EAX = (r32((uint32_t)(0x129ecc78)));
  /* 129c699d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 129c69a0 jmp 0x129c69ab */
  goto L_129c69ab;
L_129c69a2:;
  /* 129c69a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c69a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c69a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_129c69ab:;
  /* 129c69ab mov edx, dword ptr [0x129ecc78] */
  EDX = (r32((uint32_t)(0x129ecc78)));
  /* 129c69b1 add edx, dword ptr [0x129ecc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x129ecc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c69b7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c69ba jge 0x129c69d2 */
  if ((C.sf==C.of)) goto L_129c69d2;
  /* 129c69bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129c69bf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c69c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c69c5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 129c69c8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 129c69d0 jmp 0x129c69a2 */
  goto L_129c69a2;
L_129c69d2:;
  /* 129c69d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c69d5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 129c69d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129c69db mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c69de cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c69e4 jne 0x129c69f5 */
  if (!C.zf) goto L_129c69f5;
  /* 129c69e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c69e9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 129c69f0 jmp 0x129c6a7d */
  goto L_129c6a7d;
L_129c69f5:;
  /* 129c69f5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c69f8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c69fe jne 0x129c6a0c */
  if (!C.zf) goto L_129c6a0c;
  /* 129c6a00 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c6a03 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 129c6a0a jmp 0x129c6a7d */
  goto L_129c6a7d;
L_129c6a0c:;
  /* 129c6a0c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c6a0f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6a15 jne 0x129c6a23 */
  if (!C.zf) goto L_129c6a23;
  /* 129c6a17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c6a1a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 129c6a21 jmp 0x129c6a7d */
  goto L_129c6a7d;
L_129c6a23:;
  /* 129c6a23 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c6a26 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6a2c jne 0x129c6a3a */
  if (!C.zf) goto L_129c6a3a;
  /* 129c6a2e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c6a31 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 129c6a38 jmp 0x129c6a7d */
  goto L_129c6a7d;
L_129c6a3a:;
  /* 129c6a3a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c6a3d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6a43 jne 0x129c6a51 */
  if (!C.zf) goto L_129c6a51;
  /* 129c6a45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c6a48 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 129c6a4f jmp 0x129c6a7d */
  goto L_129c6a7d;
L_129c6a51:;
  /* 129c6a51 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c6a54 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6a5a jne 0x129c6a68 */
  if (!C.zf) goto L_129c6a68;
  /* 129c6a5c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c6a5f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 129c6a66 jmp 0x129c6a7d */
  goto L_129c6a7d;
L_129c6a68:;
  /* 129c6a68 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c6a6b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6a71 jne 0x129c6a7d */
  if (!C.zf) goto L_129c6a7d;
  /* 129c6a73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c6a76 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_129c6a7d:;
  /* 129c6a7d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c6a80 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 129c6a83 push edx */
  push32((uint32_t)(EDX));
  /* 129c6a84 push 8 */
  push32((uint32_t)(0x8u));
  /* 129c6a86 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x129c6a89u);
  /* 129c6a89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6a8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c6a8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129c6a92 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 129c6a95 jmp 0x129c6aae */
  goto L_129c6aae;
L_129c6a97:;
  /* 129c6a97 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c6a9a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 129c6aa1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129c6aa4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129c6aa7 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6aa8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x129c6aabu);
  /* 129c6aab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129c6aae:;
  /* 129c6aae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129c6ab1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129c6ab4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 129c6ab7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_129c6aba:;
  /* 129c6aba mov esp, ebp */
  ESP = (EBP);
  /* 129c6abc pop ebp */
  EBP = (pop32());
  /* 129c6abd ret  */
  ESPCHK(0x129c6900u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ac0 @ 0x129c6ac0 (89 bytes, 35 insns) */
void f_129c6ac0(void) {
  FTRACE(0x129c6ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c6ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 129c6ac1 mov ebp, esp */
  EBP = (ESP);
  /* 129c6ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6ac4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c6ac7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129c6aca:;
  /* 129c6aca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6acd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129c6acf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6ad2 je 0x129c6af2 */
  if (C.zf) goto L_129c6af2;
  /* 129c6ad4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6ad7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6ada mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c6add mov ecx, dword ptr [0x129ecc84] */
  ECX = (r32((uint32_t)(0x129ecc84)));
  /* 129c6ae3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c6ae6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c6ae9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6aeb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6aee jae 0x129c6af2 */
  if (!C.cf) goto L_129c6af2;
  /* 129c6af0 jmp 0x129c6aca */
  goto L_129c6aca;
L_129c6af2:;
  /* 129c6af2 mov eax, dword ptr [0x129ecc84] */
  EAX = (r32((uint32_t)(0x129ecc84)));
  /* 129c6af7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129c6afa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129c6afd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6aff cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6b02 jae 0x129c6b0e */
  if (!C.cf) goto L_129c6b0e;
  /* 129c6b04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6b07 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129c6b09 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129c6b0c je 0x129c6b12 */
  if (C.zf) goto L_129c6b12;
L_129c6b0e:;
  /* 129c6b0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129c6b10 jmp 0x129c6b15 */
  goto L_129c6b15;
L_129c6b12:;
  /* 129c6b12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_129c6b15:;
  /* 129c6b15 mov esp, ebp */
  ESP = (EBP);
  /* 129c6b17 pop ebp */
  EBP = (pop32());
  /* 129c6b18 ret  */
  ESPCHK(0x129c6ac0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x129c6b20 (48 bytes, 17 insns) */
void f_129c6b20(void) {
  FTRACE(0x129c6b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129c6b20 push ebp */
  push32((uint32_t)(EBP));
  /* 129c6b21 mov ebp, esp */
  EBP = (ESP);
  /* 129c6b23 push ecx */
  push32((uint32_t)(ECX));
  /* 129c6b24 push 9 */
  push32((uint32_t)(0x9u));
  /* 129c6b26 call 0x129c6820 */
  push32(0x129c6b2bu); f_129c6820();
  /* 129c6b2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6b2e mov eax, dword ptr [0x129ee67c] */
  EAX = (r32((uint32_t)(0x129ee67c)));
  /* 129c6b33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129c6b36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129c6b39 mov dword ptr [0x129ee67c], ecx */
  w32((uint32_t)(0x129ee67c), (ECX));
  /* 129c6b3f push 9 */
  push32((uint32_t)(0x9u));
  /* 129c6b41 call 0x129c68c0 */
  push32(0x129c6b46u); f_129c68c0();
  /* 129c6b46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129c6b49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129c6b4c mov esp, ebp */
  ESP = (EBP);
  /* 129c6b4e pop ebp */
  EBP = (pop32());
  /* 129c6b4f ret  */
  ESPCHK(0x129c6b20u, _esp0);
  ESP += 4; return;
}

