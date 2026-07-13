#include "recomp.h"

/* thunk_FUN_100024b0 @ 0x12dc1005 (5 bytes, 1 insns) */
void f_12dc1005(void) {
  FTRACE(0x12dc1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc1005 jmp 0x12dc24b0 */
  f_12dc24b0(); return;
}

/* OnInit @ 0x12dc100a (5 bytes, 1 insns) */
void f_12dc100a(void) {
  FTRACE(0x12dc100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc100a jmp 0x12dc1600 */
  f_12dc1600(); return;
}

/* thunk_FUN_10001060 @ 0x12dc100f (5 bytes, 1 insns) */
void f_12dc100f(void) {
  FTRACE(0x12dc100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc100f jmp 0x12dc1060 */
  f_12dc1060(); return;
}

/* thunk_FUN_10001540 @ 0x12dc1014 (5 bytes, 1 insns) */
void f_12dc1014(void) {
  FTRACE(0x12dc1014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc1014 jmp 0x12dc1540 */
  f_12dc1540(); return;
}

/* thunk_FUN_100010c0 @ 0x12dc1019 (5 bytes, 1 insns) */
void f_12dc1019(void) {
  FTRACE(0x12dc1019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc1019 jmp 0x12dc10c0 */
  f_12dc10c0(); return;
}

/* ProcessScenary @ 0x12dc101e (5 bytes, 1 insns) */
void f_12dc101e(void) {
  FTRACE(0x12dc101eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc101e jmp 0x12dc1ae0 */
  f_12dc1ae0(); return;
}

/* thunk_FUN_10001340 @ 0x12dc1023 (5 bytes, 1 insns) */
void f_12dc1023(void) {
  FTRACE(0x12dc1023u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc1023 jmp 0x12dc1340 */
  f_12dc1340(); return;
}

/* thunk_FUN_10001140 @ 0x12dc1028 (5 bytes, 1 insns) */
void f_12dc1028(void) {
  FTRACE(0x12dc1028u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc1028 jmp 0x12dc1140 */
  f_12dc1140(); return;
}

/* FUN_10001060 @ 0x12dc1060 (67 bytes, 26 insns) */
void f_12dc1060(void) {
  FTRACE(0x12dc1060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc1060 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc1061 mov ebp, esp */
  EBP = (ESP);
  /* 12dc1063 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc1066 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc1067 push esi */
  push32((uint32_t)(ESI));
  /* 12dc1068 push edi */
  push32((uint32_t)(EDI));
  /* 12dc1069 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 12dc106c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12dc1071 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12dc1076 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12dc1078 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc107b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc107e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1082 je 0x12dc1086 */
  if (C.zf) goto L_12dc1086;
  /* 12dc1084 jmp 0x12dc108b */
  goto L_12dc108b;
L_12dc1086:;
  /* 12dc1086 call 0x12dc100a */
  push32(0x12dc108bu); f_12dc100a();
L_12dc108b:;
  /* 12dc108b mov eax, 1 */
  EAX = (0x1u);
  /* 12dc1090 pop edi */
  EDI = (pop32());
  /* 12dc1091 pop esi */
  ESI = (pop32());
  /* 12dc1092 pop ebx */
  EBX = (pop32());
  /* 12dc1093 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1096 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1098 call 0x12dc25e0 */
  push32(0x12dc109du); f_12dc25e0();
  /* 12dc109d mov esp, ebp */
  ESP = (EBP);
  /* 12dc109f pop ebp */
  EBP = (pop32());
  /* 12dc10a0 ret 0xc */
  ESPCHK(0x12dc1060u, _esp0);
  ESP += 16; return;
}

/* FUN_100010c0 @ 0x12dc10c0 (93 bytes, 34 insns) */
void f_12dc10c0(void) {
  FTRACE(0x12dc10c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc10c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc10c1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc10c3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc10c6 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc10c7 push esi */
  push32((uint32_t)(ESI));
  /* 12dc10c8 push edi */
  push32((uint32_t)(EDI));
  /* 12dc10c9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12dc10cc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12dc10d1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12dc10d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12dc10d8 mov esi, esp */
  ESI = (ESP);
  /* 12dc10da call dword ptr [0x12de24ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de24ac))), 0x12dc10e0u);
  /* 12dc10e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc10e2 call 0x12dc25e0 */
  push32(0x12dc10e7u); f_12dc25e0();
  /* 12dc10e7 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc10ea jne 0x12dc10fd */
  if (!C.zf) goto L_12dc10fd;
  /* 12dc10ec mov esi, esp */
  ESI = (ESP);
  /* 12dc10ee call dword ptr [0x12de24b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de24b0))), 0x12dc10f4u);
  /* 12dc10f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc10f6 call 0x12dc25e0 */
  push32(0x12dc10fbu); f_12dc25e0();
  /* 12dc10fb jmp 0x12dc110c */
  goto L_12dc110c;
L_12dc10fd:;
  /* 12dc10fd mov esi, esp */
  ESI = (ESP);
  /* 12dc10ff call dword ptr [0x12de24a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de24a8))), 0x12dc1105u);
  /* 12dc1105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1107 call 0x12dc25e0 */
  push32(0x12dc110cu); f_12dc25e0();
L_12dc110c:;
  /* 12dc110c pop edi */
  EDI = (pop32());
  /* 12dc110d pop esi */
  ESI = (pop32());
  /* 12dc110e pop ebx */
  EBX = (pop32());
  /* 12dc110f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1112 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1114 call 0x12dc25e0 */
  push32(0x12dc1119u); f_12dc25e0();
  /* 12dc1119 mov esp, ebp */
  ESP = (EBP);
  /* 12dc111b pop ebp */
  EBP = (pop32());
  /* 12dc111c ret  */
  ESPCHK(0x12dc10c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001140 @ 0x12dc1140 (399 bytes, 128 insns) */
void f_12dc1140(void) {
  FTRACE(0x12dc1140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc1140 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc1141 mov ebp, esp */
  EBP = (ESP);
  /* 12dc1143 sub esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc1146 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc1147 push esi */
  push32((uint32_t)(ESI));
  /* 12dc1148 push edi */
  push32((uint32_t)(EDI));
  /* 12dc1149 lea edi, [ebp - 0x78] */
  EDI = ((uint32_t)(EBP + -0x78));
  /* 12dc114c mov ecx, 0x1e */
  ECX = (0x1eu);
  /* 12dc1151 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12dc1156 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12dc1158 mov esi, esp */
  ESI = (ESP);
  /* 12dc115a push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 12dc115f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc1162 push eax */
  push32((uint32_t)(EAX));
  /* 12dc1163 push 0x12ddf4b0 */
  push32((uint32_t)(0x12ddf4b0u));
  /* 12dc1168 call dword ptr [0x12de2488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2488))), 0x12dc116eu);
  /* 12dc116e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1171 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1173 call 0x12dc25e0 */
  push32(0x12dc1178u); f_12dc25e0();
  /* 12dc1178 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dc117f jmp 0x12dc118a */
  goto L_12dc118a;
L_12dc1181:;
  /* 12dc1181 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc1184 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1187 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dc118a:;
  /* 12dc118a cmp dword ptr [ebp - 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc118e jge 0x12dc12be */
  if ((C.sf==C.of)) goto L_12dc12be;
  /* 12dc1194 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc1196 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc119a setne dl */
  DL = ((!C.zf) ? 1u : 0u);
  /* 12dc119d mov esi, esp */
  ESI = (ESP);
  /* 12dc119f push edx */
  push32((uint32_t)(EDX));
  /* 12dc11a0 push 0x12ddf3e8 */
  push32((uint32_t)(0x12ddf3e8u));
  /* 12dc11a5 mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 12dc11a8 push eax */
  push32((uint32_t)(EAX));
  /* 12dc11a9 call dword ptr [0x12de248c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de248c))), 0x12dc11afu);
  /* 12dc11af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc11b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc11b4 call 0x12dc25e0 */
  push32(0x12dc11b9u); f_12dc25e0();
  /* 12dc11b9 mov esi, esp */
  ESI = (ESP);
  /* 12dc11bb mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 12dc11be push ecx */
  push32((uint32_t)(ECX));
  /* 12dc11bf call dword ptr [0x12de2484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2484))), 0x12dc11c5u);
  /* 12dc11c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc11c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc11ca call 0x12dc25e0 */
  push32(0x12dc11cfu); f_12dc25e0();
  /* 12dc11cf mov esi, esp */
  ESI = (ESP);
  /* 12dc11d1 mov dl, byte ptr [ebp - 4] */
  DL = (r8((uint32_t)(EBP + -0x4)));
  /* 12dc11d4 push edx */
  push32((uint32_t)(EDX));
  /* 12dc11d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc11d8 push eax */
  push32((uint32_t)(EAX));
  /* 12dc11d9 call dword ptr [0x12de2494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2494))), 0x12dc11dfu);
  /* 12dc11df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc11e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc11e4 call 0x12dc25e0 */
  push32(0x12dc11e9u); f_12dc25e0();
  /* 12dc11e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc11eb je 0x12dc129c */
  if (C.zf) goto L_12dc129c;
  /* 12dc11f1 mov esi, esp */
  ESI = (ESP);
  /* 12dc11f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc11f5 mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 12dc11f8 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc11f9 push 0x12ddf4b0 */
  push32((uint32_t)(0x12ddf4b0u));
  /* 12dc11fe call dword ptr [0x12de2498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2498))), 0x12dc1204u);
  /* 12dc1204 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1207 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1209 call 0x12dc25e0 */
  push32(0x12dc120eu); f_12dc25e0();
  /* 12dc120e mov esi, esp */
  ESI = (ESP);
  /* 12dc1210 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1212 push 0x12ddf3e0 */
  push32((uint32_t)(0x12ddf3e0u));
  /* 12dc1217 mov dl, byte ptr [ebp - 4] */
  DL = (r8((uint32_t)(EBP + -0x4)));
  /* 12dc121a push edx */
  push32((uint32_t)(EDX));
  /* 12dc121b call dword ptr [0x12de248c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de248c))), 0x12dc1221u);
  /* 12dc1221 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1224 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1226 call 0x12dc25e0 */
  push32(0x12dc122bu); f_12dc25e0();
  /* 12dc122b mov esi, esp */
  ESI = (ESP);
  /* 12dc122d push 0x12ddf3e0 */
  push32((uint32_t)(0x12ddf3e0u));
  /* 12dc1232 call dword ptr [0x12de2490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2490))), 0x12dc1238u);
  /* 12dc1238 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc123b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc123d call 0x12dc25e0 */
  push32(0x12dc1242u); f_12dc25e0();
  /* 12dc1242 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dc1245 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 12dc124c jmp 0x12dc1257 */
  goto L_12dc1257;
L_12dc124e:;
  /* 12dc124e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc1251 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1254 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
L_12dc1257:;
  /* 12dc1257 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc125a cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc125d jge 0x12dc129c */
  if ((C.sf==C.of)) goto L_12dc129c;
  /* 12dc125f mov esi, esp */
  ESI = (ESP);
  /* 12dc1261 lea edx, [ebp - 0x34] */
  EDX = ((uint32_t)(EBP + -0x34));
  /* 12dc1264 push edx */
  push32((uint32_t)(EDX));
  /* 12dc1265 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc1268 push eax */
  push32((uint32_t)(EAX));
  /* 12dc1269 push 0x12ddf3e0 */
  push32((uint32_t)(0x12ddf3e0u));
  /* 12dc126e call dword ptr [0x12de24a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de24a0))), 0x12dc1274u);
  /* 12dc1274 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1277 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1279 call 0x12dc25e0 */
  push32(0x12dc127eu); f_12dc25e0();
  /* 12dc127e mov cl, byte ptr [ebp + 0xc] */
  CL = (r8((uint32_t)(EBP + 0xc)));
  /* 12dc1281 mov byte ptr [ebp - 0x2c], cl */
  w8((uint32_t)(EBP + -0x2c), (CL));
  /* 12dc1284 mov esi, esp */
  ESI = (ESP);
  /* 12dc1286 lea edx, [ebp - 0x34] */
  EDX = ((uint32_t)(EBP + -0x34));
  /* 12dc1289 push edx */
  push32((uint32_t)(EDX));
  /* 12dc128a call dword ptr [0x12de24a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de24a4))), 0x12dc1290u);
  /* 12dc1290 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1293 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1295 call 0x12dc25e0 */
  push32(0x12dc129au); f_12dc25e0();
  /* 12dc129a jmp 0x12dc124e */
  goto L_12dc124e;
L_12dc129c:;
  /* 12dc129c mov esi, esp */
  ESI = (ESP);
  /* 12dc129e push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc12a0 push 0x12ddf3e8 */
  push32((uint32_t)(0x12ddf3e8u));
  /* 12dc12a5 mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 12dc12a8 push eax */
  push32((uint32_t)(EAX));
  /* 12dc12a9 call dword ptr [0x12de249c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de249c))), 0x12dc12afu);
  /* 12dc12af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc12b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc12b4 call 0x12dc25e0 */
  push32(0x12dc12b9u); f_12dc25e0();
  /* 12dc12b9 jmp 0x12dc1181 */
  goto L_12dc1181;
L_12dc12be:;
  /* 12dc12be pop edi */
  EDI = (pop32());
  /* 12dc12bf pop esi */
  ESI = (pop32());
  /* 12dc12c0 pop ebx */
  EBX = (pop32());
  /* 12dc12c1 add esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc12c4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc12c6 call 0x12dc25e0 */
  push32(0x12dc12cbu); f_12dc25e0();
  /* 12dc12cb mov esp, ebp */
  ESP = (EBP);
  /* 12dc12cd pop ebp */
  EBP = (pop32());
  /* 12dc12ce ret  */
  ESPCHK(0x12dc1140u, _esp0);
  ESP += 4; return;
}

/* FUN_10001340 @ 0x12dc1340 (399 bytes, 128 insns) */
void f_12dc1340(void) {
  FTRACE(0x12dc1340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc1340 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc1341 mov ebp, esp */
  EBP = (ESP);
  /* 12dc1343 sub esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc1346 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc1347 push esi */
  push32((uint32_t)(ESI));
  /* 12dc1348 push edi */
  push32((uint32_t)(EDI));
  /* 12dc1349 lea edi, [ebp - 0x78] */
  EDI = ((uint32_t)(EBP + -0x78));
  /* 12dc134c mov ecx, 0x1e */
  ECX = (0x1eu);
  /* 12dc1351 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12dc1356 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12dc1358 mov esi, esp */
  ESI = (ESP);
  /* 12dc135a push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 12dc135f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc1362 push eax */
  push32((uint32_t)(EAX));
  /* 12dc1363 push 0x12ddf4b0 */
  push32((uint32_t)(0x12ddf4b0u));
  /* 12dc1368 call dword ptr [0x12de2488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2488))), 0x12dc136eu);
  /* 12dc136e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1371 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1373 call 0x12dc25e0 */
  push32(0x12dc1378u); f_12dc25e0();
  /* 12dc1378 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dc137f jmp 0x12dc138a */
  goto L_12dc138a;
L_12dc1381:;
  /* 12dc1381 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc1384 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1387 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dc138a:;
  /* 12dc138a cmp dword ptr [ebp - 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc138e jge 0x12dc14be */
  if ((C.sf==C.of)) goto L_12dc14be;
  /* 12dc1394 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc1396 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc139a setne dl */
  DL = ((!C.zf) ? 1u : 0u);
  /* 12dc139d mov esi, esp */
  ESI = (ESP);
  /* 12dc139f push edx */
  push32((uint32_t)(EDX));
  /* 12dc13a0 push 0x12ddf3e8 */
  push32((uint32_t)(0x12ddf3e8u));
  /* 12dc13a5 mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 12dc13a8 push eax */
  push32((uint32_t)(EAX));
  /* 12dc13a9 call dword ptr [0x12de248c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de248c))), 0x12dc13afu);
  /* 12dc13af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc13b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc13b4 call 0x12dc25e0 */
  push32(0x12dc13b9u); f_12dc25e0();
  /* 12dc13b9 mov esi, esp */
  ESI = (ESP);
  /* 12dc13bb mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 12dc13be push ecx */
  push32((uint32_t)(ECX));
  /* 12dc13bf call dword ptr [0x12de2484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2484))), 0x12dc13c5u);
  /* 12dc13c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc13c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc13ca call 0x12dc25e0 */
  push32(0x12dc13cfu); f_12dc25e0();
  /* 12dc13cf mov esi, esp */
  ESI = (ESP);
  /* 12dc13d1 mov dl, byte ptr [ebp - 4] */
  DL = (r8((uint32_t)(EBP + -0x4)));
  /* 12dc13d4 push edx */
  push32((uint32_t)(EDX));
  /* 12dc13d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc13d8 push eax */
  push32((uint32_t)(EAX));
  /* 12dc13d9 call dword ptr [0x12de2494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2494))), 0x12dc13dfu);
  /* 12dc13df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc13e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc13e4 call 0x12dc25e0 */
  push32(0x12dc13e9u); f_12dc25e0();
  /* 12dc13e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc13eb je 0x12dc149c */
  if (C.zf) goto L_12dc149c;
  /* 12dc13f1 mov esi, esp */
  ESI = (ESP);
  /* 12dc13f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc13f5 mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 12dc13f8 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc13f9 push 0x12ddf4b0 */
  push32((uint32_t)(0x12ddf4b0u));
  /* 12dc13fe call dword ptr [0x12de2498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2498))), 0x12dc1404u);
  /* 12dc1404 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1407 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1409 call 0x12dc25e0 */
  push32(0x12dc140eu); f_12dc25e0();
  /* 12dc140e mov esi, esp */
  ESI = (ESP);
  /* 12dc1410 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1412 push 0x12ddf3e0 */
  push32((uint32_t)(0x12ddf3e0u));
  /* 12dc1417 mov dl, byte ptr [ebp - 4] */
  DL = (r8((uint32_t)(EBP + -0x4)));
  /* 12dc141a push edx */
  push32((uint32_t)(EDX));
  /* 12dc141b call dword ptr [0x12de248c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de248c))), 0x12dc1421u);
  /* 12dc1421 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1424 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1426 call 0x12dc25e0 */
  push32(0x12dc142bu); f_12dc25e0();
  /* 12dc142b mov esi, esp */
  ESI = (ESP);
  /* 12dc142d push 0x12ddf3e0 */
  push32((uint32_t)(0x12ddf3e0u));
  /* 12dc1432 call dword ptr [0x12de2490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2490))), 0x12dc1438u);
  /* 12dc1438 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc143b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc143d call 0x12dc25e0 */
  push32(0x12dc1442u); f_12dc25e0();
  /* 12dc1442 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dc1445 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 12dc144c jmp 0x12dc1457 */
  goto L_12dc1457;
L_12dc144e:;
  /* 12dc144e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc1451 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1454 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
L_12dc1457:;
  /* 12dc1457 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc145a cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc145d jge 0x12dc149c */
  if ((C.sf==C.of)) goto L_12dc149c;
  /* 12dc145f mov esi, esp */
  ESI = (ESP);
  /* 12dc1461 lea edx, [ebp - 0x34] */
  EDX = ((uint32_t)(EBP + -0x34));
  /* 12dc1464 push edx */
  push32((uint32_t)(EDX));
  /* 12dc1465 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc1468 push eax */
  push32((uint32_t)(EAX));
  /* 12dc1469 push 0x12ddf3e0 */
  push32((uint32_t)(0x12ddf3e0u));
  /* 12dc146e call dword ptr [0x12de24a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de24a0))), 0x12dc1474u);
  /* 12dc1474 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1477 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1479 call 0x12dc25e0 */
  push32(0x12dc147eu); f_12dc25e0();
  /* 12dc147e mov cl, byte ptr [ebp + 0xc] */
  CL = (r8((uint32_t)(EBP + 0xc)));
  /* 12dc1481 mov byte ptr [ebp - 0x2b], cl */
  w8((uint32_t)(EBP + -0x2b), (CL));
  /* 12dc1484 mov esi, esp */
  ESI = (ESP);
  /* 12dc1486 lea edx, [ebp - 0x34] */
  EDX = ((uint32_t)(EBP + -0x34));
  /* 12dc1489 push edx */
  push32((uint32_t)(EDX));
  /* 12dc148a call dword ptr [0x12de24a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de24a4))), 0x12dc1490u);
  /* 12dc1490 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1493 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1495 call 0x12dc25e0 */
  push32(0x12dc149au); f_12dc25e0();
  /* 12dc149a jmp 0x12dc144e */
  goto L_12dc144e;
L_12dc149c:;
  /* 12dc149c mov esi, esp */
  ESI = (ESP);
  /* 12dc149e push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc14a0 push 0x12ddf3e8 */
  push32((uint32_t)(0x12ddf3e8u));
  /* 12dc14a5 mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 12dc14a8 push eax */
  push32((uint32_t)(EAX));
  /* 12dc14a9 call dword ptr [0x12de249c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de249c))), 0x12dc14afu);
  /* 12dc14af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc14b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc14b4 call 0x12dc25e0 */
  push32(0x12dc14b9u); f_12dc25e0();
  /* 12dc14b9 jmp 0x12dc1381 */
  goto L_12dc1381;
L_12dc14be:;
  /* 12dc14be pop edi */
  EDI = (pop32());
  /* 12dc14bf pop esi */
  ESI = (pop32());
  /* 12dc14c0 pop ebx */
  EBX = (pop32());
  /* 12dc14c1 add esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc14c4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc14c6 call 0x12dc25e0 */
  push32(0x12dc14cbu); f_12dc25e0();
  /* 12dc14cb mov esp, ebp */
  ESP = (EBP);
  /* 12dc14cd pop ebp */
  EBP = (pop32());
  /* 12dc14ce ret  */
  ESPCHK(0x12dc1340u, _esp0);
  ESP += 4; return;
}

/* FUN_10001540 @ 0x12dc1540 (154 bytes, 56 insns) */
void f_12dc1540(void) {
  FTRACE(0x12dc1540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc1540 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc1541 mov ebp, esp */
  EBP = (ESP);
  /* 12dc1543 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc1546 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc1547 push esi */
  push32((uint32_t)(ESI));
  /* 12dc1548 push edi */
  push32((uint32_t)(EDI));
  /* 12dc1549 lea edi, [ebp - 0x74] */
  EDI = ((uint32_t)(EBP + -0x74));
  /* 12dc154c mov ecx, 0x1d */
  ECX = (0x1du);
  /* 12dc1551 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12dc1556 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12dc1558 mov esi, esp */
  ESI = (ESP);
  /* 12dc155a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc155d push eax */
  push32((uint32_t)(EAX));
  /* 12dc155e call dword ptr [0x12de2490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2490))), 0x12dc1564u);
  /* 12dc1564 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1567 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1569 call 0x12dc25e0 */
  push32(0x12dc156eu); f_12dc25e0();
  /* 12dc156e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc1571 mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 12dc1578 jmp 0x12dc1583 */
  goto L_12dc1583;
L_12dc157a:;
  /* 12dc157a mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dc157d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1580 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
L_12dc1583:;
  /* 12dc1583 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dc1586 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1589 jge 0x12dc15c9 */
  if ((C.sf==C.of)) goto L_12dc15c9;
  /* 12dc158b mov esi, esp */
  ESI = (ESP);
  /* 12dc158d lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 12dc1590 push eax */
  push32((uint32_t)(EAX));
  /* 12dc1591 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dc1594 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc1595 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc1598 push edx */
  push32((uint32_t)(EDX));
  /* 12dc1599 call dword ptr [0x12de24a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de24a0))), 0x12dc159fu);
  /* 12dc159f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc15a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc15a4 call 0x12dc25e0 */
  push32(0x12dc15a9u); f_12dc25e0();
  /* 12dc15a9 mov byte ptr [ebp - 0x28], 0 */
  w8((uint32_t)(EBP + -0x28), (0x0u));
  /* 12dc15ad mov byte ptr [ebp - 0x27], 0 */
  w8((uint32_t)(EBP + -0x27), (0x0u));
  /* 12dc15b1 mov esi, esp */
  ESI = (ESP);
  /* 12dc15b3 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 12dc15b6 push eax */
  push32((uint32_t)(EAX));
  /* 12dc15b7 call dword ptr [0x12de24a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de24a4))), 0x12dc15bdu);
  /* 12dc15bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc15c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc15c2 call 0x12dc25e0 */
  push32(0x12dc15c7u); f_12dc25e0();
  /* 12dc15c7 jmp 0x12dc157a */
  goto L_12dc157a;
L_12dc15c9:;
  /* 12dc15c9 pop edi */
  EDI = (pop32());
  /* 12dc15ca pop esi */
  ESI = (pop32());
  /* 12dc15cb pop ebx */
  EBX = (pop32());
  /* 12dc15cc add esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc15cf cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc15d1 call 0x12dc25e0 */
  push32(0x12dc15d6u); f_12dc25e0();
  /* 12dc15d6 mov esp, ebp */
  ESP = (EBP);
  /* 12dc15d8 pop ebp */
  EBP = (pop32());
  /* 12dc15d9 ret  */
  ESPCHK(0x12dc1540u, _esp0);
  ESP += 4; return;
}

/* FUN_10001600 @ 0x12dc1600 (994 bytes, 264 insns) */
void f_12dc1600(void) {
  FTRACE(0x12dc1600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc1600 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc1601 mov ebp, esp */
  EBP = (ESP);
  /* 12dc1603 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc1606 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc1607 push esi */
  push32((uint32_t)(ESI));
  /* 12dc1608 push edi */
  push32((uint32_t)(EDI));
  /* 12dc1609 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12dc160c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12dc1611 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12dc1616 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12dc1618 mov esi, esp */
  ESI = (ESP);
  /* 12dc161a push 0x12dda1b4 */
  push32((uint32_t)(0x12dda1b4u));
  /* 12dc161f push 0x12ddf470 */
  push32((uint32_t)(0x12ddf470u));
  /* 12dc1624 call dword ptr [0x12de2464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2464))), 0x12dc162au);
  /* 12dc162a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc162d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc162f call 0x12dc25e0 */
  push32(0x12dc1634u); f_12dc25e0();
  /* 12dc1634 mov esi, esp */
  ESI = (ESP);
  /* 12dc1636 push 0x12dda1ac */
  push32((uint32_t)(0x12dda1acu));
  /* 12dc163b push 0x12ddf478 */
  push32((uint32_t)(0x12ddf478u));
  /* 12dc1640 call dword ptr [0x12de2464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2464))), 0x12dc1646u);
  /* 12dc1646 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1649 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc164b call 0x12dc25e0 */
  push32(0x12dc1650u); f_12dc25e0();
  /* 12dc1650 mov esi, esp */
  ESI = (ESP);
  /* 12dc1652 push 0x12dda1a0 */
  push32((uint32_t)(0x12dda1a0u));
  /* 12dc1657 push 0x12ddf428 */
  push32((uint32_t)(0x12ddf428u));
  /* 12dc165c call dword ptr [0x12de2464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2464))), 0x12dc1662u);
  /* 12dc1662 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1665 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1667 call 0x12dc25e0 */
  push32(0x12dc166cu); f_12dc25e0();
  /* 12dc166c mov esi, esp */
  ESI = (ESP);
  /* 12dc166e push 0x12dda198 */
  push32((uint32_t)(0x12dda198u));
  /* 12dc1673 push 0x12ddf408 */
  push32((uint32_t)(0x12ddf408u));
  /* 12dc1678 call dword ptr [0x12de2464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2464))), 0x12dc167eu);
  /* 12dc167e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1681 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1683 call 0x12dc25e0 */
  push32(0x12dc1688u); f_12dc25e0();
  /* 12dc1688 mov esi, esp */
  ESI = (ESP);
  /* 12dc168a push 0x12dda190 */
  push32((uint32_t)(0x12dda190u));
  /* 12dc168f push 0x12ddf4b8 */
  push32((uint32_t)(0x12ddf4b8u));
  /* 12dc1694 call dword ptr [0x12de2464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2464))), 0x12dc169au);
  /* 12dc169a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc169d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc169f call 0x12dc25e0 */
  push32(0x12dc16a4u); f_12dc25e0();
  /* 12dc16a4 mov esi, esp */
  ESI = (ESP);
  /* 12dc16a6 push 0x12dda184 */
  push32((uint32_t)(0x12dda184u));
  /* 12dc16ab push 0x12ddf490 */
  push32((uint32_t)(0x12ddf490u));
  /* 12dc16b0 call dword ptr [0x12de2464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2464))), 0x12dc16b6u);
  /* 12dc16b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc16b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc16bb call 0x12dc25e0 */
  push32(0x12dc16c0u); f_12dc25e0();
  /* 12dc16c0 mov esi, esp */
  ESI = (ESP);
  /* 12dc16c2 push 0x12dda17c */
  push32((uint32_t)(0x12dda17cu));
  /* 12dc16c7 push 0x12ddf498 */
  push32((uint32_t)(0x12ddf498u));
  /* 12dc16cc call dword ptr [0x12de2464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2464))), 0x12dc16d2u);
  /* 12dc16d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc16d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc16d7 call 0x12dc25e0 */
  push32(0x12dc16dcu); f_12dc25e0();
  /* 12dc16dc mov esi, esp */
  ESI = (ESP);
  /* 12dc16de push 0x12ddf3e0 */
  push32((uint32_t)(0x12ddf3e0u));
  /* 12dc16e3 call dword ptr [0x12de2468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2468))), 0x12dc16e9u);
  /* 12dc16e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc16ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc16ee call 0x12dc25e0 */
  push32(0x12dc16f3u); f_12dc25e0();
  /* 12dc16f3 mov esi, esp */
  ESI = (ESP);
  /* 12dc16f5 push 0x12ddf3e8 */
  push32((uint32_t)(0x12ddf3e8u));
  /* 12dc16fa call dword ptr [0x12de2468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2468))), 0x12dc1700u);
  /* 12dc1700 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1703 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1705 call 0x12dc25e0 */
  push32(0x12dc170au); f_12dc25e0();
  /* 12dc170a mov esi, esp */
  ESI = (ESP);
  /* 12dc170c push 0x12dda170 */
  push32((uint32_t)(0x12dda170u));
  /* 12dc1711 push 0x12ddf460 */
  push32((uint32_t)(0x12ddf460u));
  /* 12dc1716 call dword ptr [0x12de2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2460))), 0x12dc171cu);
  /* 12dc171c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc171f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1721 call 0x12dc25e0 */
  push32(0x12dc1726u); f_12dc25e0();
  /* 12dc1726 mov esi, esp */
  ESI = (ESP);
  /* 12dc1728 push 0x12dda160 */
  push32((uint32_t)(0x12dda160u));
  /* 12dc172d push 0x12ddf4d0 */
  push32((uint32_t)(0x12ddf4d0u));
  /* 12dc1732 call dword ptr [0x12de2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2460))), 0x12dc1738u);
  /* 12dc1738 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc173b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc173d call 0x12dc25e0 */
  push32(0x12dc1742u); f_12dc25e0();
  /* 12dc1742 mov esi, esp */
  ESI = (ESP);
  /* 12dc1744 push 0x12dda158 */
  push32((uint32_t)(0x12dda158u));
  /* 12dc1749 push 0x12ddf420 */
  push32((uint32_t)(0x12ddf420u));
  /* 12dc174e call dword ptr [0x12de2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2460))), 0x12dc1754u);
  /* 12dc1754 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1757 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1759 call 0x12dc25e0 */
  push32(0x12dc175eu); f_12dc25e0();
  /* 12dc175e mov esi, esp */
  ESI = (ESP);
  /* 12dc1760 push 0x12dda14c */
  push32((uint32_t)(0x12dda14cu));
  /* 12dc1765 push 0x12ddf4a8 */
  push32((uint32_t)(0x12ddf4a8u));
  /* 12dc176a call dword ptr [0x12de2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2460))), 0x12dc1770u);
  /* 12dc1770 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1773 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1775 call 0x12dc25e0 */
  push32(0x12dc177au); f_12dc25e0();
  /* 12dc177a mov esi, esp */
  ESI = (ESP);
  /* 12dc177c push 0x12dda144 */
  push32((uint32_t)(0x12dda144u));
  /* 12dc1781 push 0x12ddf458 */
  push32((uint32_t)(0x12ddf458u));
  /* 12dc1786 call dword ptr [0x12de2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2460))), 0x12dc178cu);
  /* 12dc178c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc178f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1791 call 0x12dc25e0 */
  push32(0x12dc1796u); f_12dc25e0();
  /* 12dc1796 mov esi, esp */
  ESI = (ESP);
  /* 12dc1798 push 0x12dda130 */
  push32((uint32_t)(0x12dda130u));
  /* 12dc179d push 0x12ddf4c0 */
  push32((uint32_t)(0x12ddf4c0u));
  /* 12dc17a2 call dword ptr [0x12de2470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2470))), 0x12dc17a8u);
  /* 12dc17a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc17ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc17ad call 0x12dc25e0 */
  push32(0x12dc17b2u); f_12dc25e0();
  /* 12dc17b2 mov esi, esp */
  ESI = (ESP);
  /* 12dc17b4 push 0x12dda118 */
  push32((uint32_t)(0x12dda118u));
  /* 12dc17b9 push 0x12ddf440 */
  push32((uint32_t)(0x12ddf440u));
  /* 12dc17be call dword ptr [0x12de2474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2474))), 0x12dc17c4u);
  /* 12dc17c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc17c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc17c9 call 0x12dc25e0 */
  push32(0x12dc17ceu); f_12dc25e0();
  /* 12dc17ce mov esi, esp */
  ESI = (ESP);
  /* 12dc17d0 push 0x12dda100 */
  push32((uint32_t)(0x12dda100u));
  /* 12dc17d5 push 0x12ddf400 */
  push32((uint32_t)(0x12ddf400u));
  /* 12dc17da call dword ptr [0x12de2474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2474))), 0x12dc17e0u);
  /* 12dc17e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc17e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc17e5 call 0x12dc25e0 */
  push32(0x12dc17eau); f_12dc25e0();
  /* 12dc17ea mov esi, esp */
  ESI = (ESP);
  /* 12dc17ec push 0x12dda0f0 */
  push32((uint32_t)(0x12dda0f0u));
  /* 12dc17f1 push 0x12ddf4c8 */
  push32((uint32_t)(0x12ddf4c8u));
  /* 12dc17f6 call dword ptr [0x12de2474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2474))), 0x12dc17fcu);
  /* 12dc17fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc17ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1801 call 0x12dc25e0 */
  push32(0x12dc1806u); f_12dc25e0();
  /* 12dc1806 mov esi, esp */
  ESI = (ESP);
  /* 12dc1808 push 0x12dda0e0 */
  push32((uint32_t)(0x12dda0e0u));
  /* 12dc180d push 0x12ddf480 */
  push32((uint32_t)(0x12ddf480u));
  /* 12dc1812 call dword ptr [0x12de2474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2474))), 0x12dc1818u);
  /* 12dc1818 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc181b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc181d call 0x12dc25e0 */
  push32(0x12dc1822u); f_12dc25e0();
  /* 12dc1822 mov esi, esp */
  ESI = (ESP);
  /* 12dc1824 push 0x12dda0cc */
  push32((uint32_t)(0x12dda0ccu));
  /* 12dc1829 push 0x12ddf418 */
  push32((uint32_t)(0x12ddf418u));
  /* 12dc182e call dword ptr [0x12de2474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2474))), 0x12dc1834u);
  /* 12dc1834 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1837 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1839 call 0x12dc25e0 */
  push32(0x12dc183eu); f_12dc25e0();
  /* 12dc183e mov esi, esp */
  ESI = (ESP);
  /* 12dc1840 push 0x12dda0b8 */
  push32((uint32_t)(0x12dda0b8u));
  /* 12dc1845 push 0x12ddf410 */
  push32((uint32_t)(0x12ddf410u));
  /* 12dc184a call dword ptr [0x12de2474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2474))), 0x12dc1850u);
  /* 12dc1850 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1853 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1855 call 0x12dc25e0 */
  push32(0x12dc185au); f_12dc25e0();
  /* 12dc185a mov esi, esp */
  ESI = (ESP);
  /* 12dc185c push 0x12dda0a4 */
  push32((uint32_t)(0x12dda0a4u));
  /* 12dc1861 push 0x12ddf430 */
  push32((uint32_t)(0x12ddf430u));
  /* 12dc1866 call dword ptr [0x12de2474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2474))), 0x12dc186cu);
  /* 12dc186c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc186f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1871 call 0x12dc25e0 */
  push32(0x12dc1876u); f_12dc25e0();
  /* 12dc1876 mov esi, esp */
  ESI = (ESP);
  /* 12dc1878 push 0x12dda088 */
  push32((uint32_t)(0x12dda088u));
  /* 12dc187d push 0x12ddf438 */
  push32((uint32_t)(0x12ddf438u));
  /* 12dc1882 call dword ptr [0x12de2474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2474))), 0x12dc1888u);
  /* 12dc1888 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc188b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc188d call 0x12dc25e0 */
  push32(0x12dc1892u); f_12dc25e0();
  /* 12dc1892 mov esi, esp */
  ESI = (ESP);
  /* 12dc1894 push 0x12dda074 */
  push32((uint32_t)(0x12dda074u));
  /* 12dc1899 push 0x12ddf448 */
  push32((uint32_t)(0x12ddf448u));
  /* 12dc189e call dword ptr [0x12de2474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2474))), 0x12dc18a4u);
  /* 12dc18a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc18a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc18a9 call 0x12dc25e0 */
  push32(0x12dc18aeu); f_12dc25e0();
  /* 12dc18ae mov esi, esp */
  ESI = (ESP);
  /* 12dc18b0 push 0x12dda05c */
  push32((uint32_t)(0x12dda05cu));
  /* 12dc18b5 push 0x12ddf4d8 */
  push32((uint32_t)(0x12ddf4d8u));
  /* 12dc18ba call dword ptr [0x12de2474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2474))), 0x12dc18c0u);
  /* 12dc18c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc18c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc18c5 call 0x12dc25e0 */
  push32(0x12dc18cau); f_12dc25e0();
  /* 12dc18ca mov esi, esp */
  ESI = (ESP);
  /* 12dc18cc push 0x12dda048 */
  push32((uint32_t)(0x12dda048u));
  /* 12dc18d1 push 0x12ddf3f0 */
  push32((uint32_t)(0x12ddf3f0u));
  /* 12dc18d6 call dword ptr [0x12de2474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2474))), 0x12dc18dcu);
  /* 12dc18dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc18df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc18e1 call 0x12dc25e0 */
  push32(0x12dc18e6u); f_12dc25e0();
  /* 12dc18e6 mov esi, esp */
  ESI = (ESP);
  /* 12dc18e8 push 0x12dda034 */
  push32((uint32_t)(0x12dda034u));
  /* 12dc18ed push 0x12ddf3f8 */
  push32((uint32_t)(0x12ddf3f8u));
  /* 12dc18f2 call dword ptr [0x12de2474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2474))), 0x12dc18f8u);
  /* 12dc18f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc18fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc18fd call 0x12dc25e0 */
  push32(0x12dc1902u); f_12dc25e0();
  /* 12dc1902 mov esi, esp */
  ESI = (ESP);
  /* 12dc1904 push 0x12dda018 */
  push32((uint32_t)(0x12dda018u));
  /* 12dc1909 push 0x12ddf468 */
  push32((uint32_t)(0x12ddf468u));
  /* 12dc190e call dword ptr [0x12de2474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2474))), 0x12dc1914u);
  /* 12dc1914 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1917 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1919 call 0x12dc25e0 */
  push32(0x12dc191eu); f_12dc25e0();
  /* 12dc191e mov esi, esp */
  ESI = (ESP);
  /* 12dc1920 push 0x12dda010 */
  push32((uint32_t)(0x12dda010u));
  /* 12dc1925 push 0x12ddf488 */
  push32((uint32_t)(0x12ddf488u));
  /* 12dc192a call dword ptr [0x12de246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de246c))), 0x12dc1930u);
  /* 12dc1930 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1933 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1935 call 0x12dc25e0 */
  push32(0x12dc193au); f_12dc25e0();
  /* 12dc193a mov esi, esp */
  ESI = (ESP);
  /* 12dc193c push 0x12dda000 */
  push32((uint32_t)(0x12dda000u));
  /* 12dc1941 push 0x12ddf4a0 */
  push32((uint32_t)(0x12ddf4a0u));
  /* 12dc1946 call dword ptr [0x12de247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de247c))), 0x12dc194cu);
  /* 12dc194c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc194f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1951 call 0x12dc25e0 */
  push32(0x12dc1956u); f_12dc25e0();
  /* 12dc1956 mov esi, esp */
  ESI = (ESP);
  /* 12dc1958 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc195a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc195c call dword ptr [0x12de2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2480))), 0x12dc1962u);
  /* 12dc1962 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1965 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1967 call 0x12dc25e0 */
  push32(0x12dc196cu); f_12dc25e0();
  /* 12dc196c mov esi, esp */
  ESI = (ESP);
  /* 12dc196e push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1970 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc1972 call dword ptr [0x12de2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2480))), 0x12dc1978u);
  /* 12dc1978 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc197b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc197d call 0x12dc25e0 */
  push32(0x12dc1982u); f_12dc25e0();
  /* 12dc1982 mov esi, esp */
  ESI = (ESP);
  /* 12dc1984 push 0x83 */
  push32((uint32_t)(0x83u));
  /* 12dc1989 push 7 */
  push32((uint32_t)(0x7u));
  /* 12dc198b call dword ptr [0x12de2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2480))), 0x12dc1991u);
  /* 12dc1991 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1994 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1996 call 0x12dc25e0 */
  push32(0x12dc199bu); f_12dc25e0();
  /* 12dc199b mov esi, esp */
  ESI = (ESP);
  /* 12dc199d push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc199f push 0x12ddf440 */
  push32((uint32_t)(0x12ddf440u));
  /* 12dc19a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc19a6 call dword ptr [0x12de2478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2478))), 0x12dc19acu);
  /* 12dc19ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc19af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc19b1 call 0x12dc25e0 */
  push32(0x12dc19b6u); f_12dc25e0();
  /* 12dc19b6 mov esi, esp */
  ESI = (ESP);
  /* 12dc19b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc19ba push 0x12ddf440 */
  push32((uint32_t)(0x12ddf440u));
  /* 12dc19bf push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc19c1 call dword ptr [0x12de2478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2478))), 0x12dc19c7u);
  /* 12dc19c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc19ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc19cc call 0x12dc25e0 */
  push32(0x12dc19d1u); f_12dc25e0();
  /* 12dc19d1 pop edi */
  EDI = (pop32());
  /* 12dc19d2 pop esi */
  ESI = (pop32());
  /* 12dc19d3 pop ebx */
  EBX = (pop32());
  /* 12dc19d4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc19d7 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc19d9 call 0x12dc25e0 */
  push32(0x12dc19deu); f_12dc25e0();
  /* 12dc19de mov esp, ebp */
  ESP = (EBP);
  /* 12dc19e0 pop ebp */
  EBP = (pop32());
  /* 12dc19e1 ret  */
  ESPCHK(0x12dc1600u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ae0 @ 0x12dc1ae0 (1998 bytes, 599 insns) */
void f_12dc1ae0(void) {
  FTRACE(0x12dc1ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc1ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc1ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc1ae3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc1ae6 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc1ae7 push esi */
  push32((uint32_t)(ESI));
  /* 12dc1ae8 push edi */
  push32((uint32_t)(EDI));
  /* 12dc1ae9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12dc1aec mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12dc1af1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12dc1af6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12dc1af8 push 0x12ddf428 */
  push32((uint32_t)(0x12ddf428u));
  /* 12dc1afd call 0x12dc1005 */
  push32(0x12dc1b02u); f_12dc1005();
  /* 12dc1b02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1b05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc1b07 jne 0x12dc1b56 */
  if (!C.zf) goto L_12dc1b56;
  /* 12dc1b09 mov esi, esp */
  ESI = (ESP);
  /* 12dc1b0b call dword ptr [0x12de24ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de24ac))), 0x12dc1b11u);
  /* 12dc1b11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1b13 call 0x12dc25e0 */
  push32(0x12dc1b18u); f_12dc25e0();
  /* 12dc1b18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc1b1a jne 0x12dc1b35 */
  if (!C.zf) goto L_12dc1b35;
  /* 12dc1b1c mov esi, esp */
  ESI = (ESP);
  /* 12dc1b1e push 0x12dda26c */
  push32((uint32_t)(0x12dda26cu));
  /* 12dc1b23 call dword ptr [0x12de2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2428))), 0x12dc1b29u);
  /* 12dc1b29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1b2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1b2e call 0x12dc25e0 */
  push32(0x12dc1b33u); f_12dc25e0();
  /* 12dc1b33 jmp 0x12dc1b4c */
  goto L_12dc1b4c;
L_12dc1b35:;
  /* 12dc1b35 mov esi, esp */
  ESI = (ESP);
  /* 12dc1b37 push 0x12dda258 */
  push32((uint32_t)(0x12dda258u));
  /* 12dc1b3c call dword ptr [0x12de2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2428))), 0x12dc1b42u);
  /* 12dc1b42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1b45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1b47 call 0x12dc25e0 */
  push32(0x12dc1b4cu); f_12dc25e0();
L_12dc1b4c:;
  /* 12dc1b4c push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1b4e call 0x12dc1019 */
  push32(0x12dc1b53u); f_12dc1019();
  /* 12dc1b53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc1b56:;
  /* 12dc1b56 push 0x12ddf478 */
  push32((uint32_t)(0x12ddf478u));
  /* 12dc1b5b call 0x12dc1005 */
  push32(0x12dc1b60u); f_12dc1005();
  /* 12dc1b60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1b63 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1b66 jge 0x12dc1bb5 */
  if ((C.sf==C.of)) goto L_12dc1bb5;
  /* 12dc1b68 mov esi, esp */
  ESI = (ESP);
  /* 12dc1b6a call dword ptr [0x12de24ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de24ac))), 0x12dc1b70u);
  /* 12dc1b70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1b72 call 0x12dc25e0 */
  push32(0x12dc1b77u); f_12dc25e0();
  /* 12dc1b77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc1b79 jne 0x12dc1b94 */
  if (!C.zf) goto L_12dc1b94;
  /* 12dc1b7b mov esi, esp */
  ESI = (ESP);
  /* 12dc1b7d push 0x12dda23c */
  push32((uint32_t)(0x12dda23cu));
  /* 12dc1b82 call dword ptr [0x12de2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2428))), 0x12dc1b88u);
  /* 12dc1b88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1b8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1b8d call 0x12dc25e0 */
  push32(0x12dc1b92u); f_12dc25e0();
  /* 12dc1b92 jmp 0x12dc1bab */
  goto L_12dc1bab;
L_12dc1b94:;
  /* 12dc1b94 mov esi, esp */
  ESI = (ESP);
  /* 12dc1b96 push 0x12dda220 */
  push32((uint32_t)(0x12dda220u));
  /* 12dc1b9b call dword ptr [0x12de2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2428))), 0x12dc1ba1u);
  /* 12dc1ba1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1ba4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1ba6 call 0x12dc25e0 */
  push32(0x12dc1babu); f_12dc25e0();
L_12dc1bab:;
  /* 12dc1bab push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1bad call 0x12dc1019 */
  push32(0x12dc1bb2u); f_12dc1019();
  /* 12dc1bb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc1bb5:;
  /* 12dc1bb5 mov esi, esp */
  ESI = (ESP);
  /* 12dc1bb7 push 0x12ddf428 */
  push32((uint32_t)(0x12ddf428u));
  /* 12dc1bbc push 0x12ddf458 */
  push32((uint32_t)(0x12ddf458u));
  /* 12dc1bc1 call dword ptr [0x12de242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de242c))), 0x12dc1bc7u);
  /* 12dc1bc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1bca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1bcc call 0x12dc25e0 */
  push32(0x12dc1bd1u); f_12dc25e0();
  /* 12dc1bd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc1bd3 jle 0x12dc1c22 */
  if ((C.zf||C.sf!=C.of)) goto L_12dc1c22;
  /* 12dc1bd5 mov esi, esp */
  ESI = (ESP);
  /* 12dc1bd7 call dword ptr [0x12de24ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de24ac))), 0x12dc1bddu);
  /* 12dc1bdd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1bdf call 0x12dc25e0 */
  push32(0x12dc1be4u); f_12dc25e0();
  /* 12dc1be4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc1be6 jne 0x12dc1c01 */
  if (!C.zf) goto L_12dc1c01;
  /* 12dc1be8 mov esi, esp */
  ESI = (ESP);
  /* 12dc1bea push 0x12dda208 */
  push32((uint32_t)(0x12dda208u));
  /* 12dc1bef call dword ptr [0x12de2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2428))), 0x12dc1bf5u);
  /* 12dc1bf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1bf8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1bfa call 0x12dc25e0 */
  push32(0x12dc1bffu); f_12dc25e0();
  /* 12dc1bff jmp 0x12dc1c18 */
  goto L_12dc1c18;
L_12dc1c01:;
  /* 12dc1c01 mov esi, esp */
  ESI = (ESP);
  /* 12dc1c03 push 0x12dda1f0 */
  push32((uint32_t)(0x12dda1f0u));
  /* 12dc1c08 call dword ptr [0x12de2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2428))), 0x12dc1c0eu);
  /* 12dc1c0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1c11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1c13 call 0x12dc25e0 */
  push32(0x12dc1c18u); f_12dc25e0();
L_12dc1c18:;
  /* 12dc1c18 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc1c1a call 0x12dc1019 */
  push32(0x12dc1c1fu); f_12dc1019();
  /* 12dc1c1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc1c22:;
  /* 12dc1c22 push 0x12ddf470 */
  push32((uint32_t)(0x12ddf470u));
  /* 12dc1c27 call 0x12dc1005 */
  push32(0x12dc1c2cu); f_12dc1005();
  /* 12dc1c2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1c2f cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1c32 jge 0x12dc1c81 */
  if ((C.sf==C.of)) goto L_12dc1c81;
  /* 12dc1c34 mov esi, esp */
  ESI = (ESP);
  /* 12dc1c36 call dword ptr [0x12de24ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de24ac))), 0x12dc1c3cu);
  /* 12dc1c3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1c3e call 0x12dc25e0 */
  push32(0x12dc1c43u); f_12dc25e0();
  /* 12dc1c43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc1c45 jne 0x12dc1c60 */
  if (!C.zf) goto L_12dc1c60;
  /* 12dc1c47 mov esi, esp */
  ESI = (ESP);
  /* 12dc1c49 push 0x12dda208 */
  push32((uint32_t)(0x12dda208u));
  /* 12dc1c4e call dword ptr [0x12de2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2428))), 0x12dc1c54u);
  /* 12dc1c54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1c57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1c59 call 0x12dc25e0 */
  push32(0x12dc1c5eu); f_12dc25e0();
  /* 12dc1c5e jmp 0x12dc1c77 */
  goto L_12dc1c77;
L_12dc1c60:;
  /* 12dc1c60 mov esi, esp */
  ESI = (ESP);
  /* 12dc1c62 push 0x12dda1f0 */
  push32((uint32_t)(0x12dda1f0u));
  /* 12dc1c67 call dword ptr [0x12de2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2428))), 0x12dc1c6du);
  /* 12dc1c6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1c70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1c72 call 0x12dc25e0 */
  push32(0x12dc1c77u); f_12dc25e0();
L_12dc1c77:;
  /* 12dc1c77 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc1c79 call 0x12dc1019 */
  push32(0x12dc1c7eu); f_12dc1019();
  /* 12dc1c7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc1c81:;
  /* 12dc1c81 mov esi, esp */
  ESI = (ESP);
  /* 12dc1c83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1c85 call dword ptr [0x12de2424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2424))), 0x12dc1c8bu);
  /* 12dc1c8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1c8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1c90 call 0x12dc25e0 */
  push32(0x12dc1c95u); f_12dc25e0();
  /* 12dc1c95 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc1c9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc1c9c je 0x12dc1ccd */
  if (C.zf) goto L_12dc1ccd;
  /* 12dc1c9e mov esi, esp */
  ESI = (ESP);
  /* 12dc1ca0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1ca2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1ca4 call dword ptr [0x12de2434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2434))), 0x12dc1caau);
  /* 12dc1caa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1cad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1caf call 0x12dc25e0 */
  push32(0x12dc1cb4u); f_12dc25e0();
  /* 12dc1cb4 mov esi, esp */
  ESI = (ESP);
  /* 12dc1cb6 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12dc1cbb push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1cbd call dword ptr [0x12de2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2438))), 0x12dc1cc3u);
  /* 12dc1cc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1cc6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1cc8 call 0x12dc25e0 */
  push32(0x12dc1ccdu); f_12dc25e0();
L_12dc1ccd:;
  /* 12dc1ccd mov esi, esp */
  ESI = (ESP);
  /* 12dc1ccf push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc1cd1 call dword ptr [0x12de2424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2424))), 0x12dc1cd7u);
  /* 12dc1cd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1cda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1cdc call 0x12dc25e0 */
  push32(0x12dc1ce1u); f_12dc25e0();
  /* 12dc1ce1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc1ce6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc1ce8 je 0x12dc1da1 */
  if (C.zf) goto L_12dc1da1;
  /* 12dc1cee mov esi, esp */
  ESI = (ESP);
  /* 12dc1cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1cf2 call dword ptr [0x12de2430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2430))), 0x12dc1cf8u);
  /* 12dc1cf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1cfb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1cfd call 0x12dc25e0 */
  push32(0x12dc1d02u); f_12dc25e0();
  /* 12dc1d02 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc1d07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc1d09 je 0x12dc1da1 */
  if (C.zf) goto L_12dc1da1;
  /* 12dc1d0f mov esi, esp */
  ESI = (ESP);
  /* 12dc1d11 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc1d13 push 0x12ddf4a8 */
  push32((uint32_t)(0x12ddf4a8u));
  /* 12dc1d18 call dword ptr [0x12de2440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2440))), 0x12dc1d1eu);
  /* 12dc1d1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1d21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1d23 call 0x12dc25e0 */
  push32(0x12dc1d28u); f_12dc25e0();
  /* 12dc1d28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc1d2a jne 0x12dc1da1 */
  if (!C.zf) goto L_12dc1da1;
  /* 12dc1d2c mov esi, esp */
  ESI = (ESP);
  /* 12dc1d2e push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1d30 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc1d32 call dword ptr [0x12de2434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2434))), 0x12dc1d38u);
  /* 12dc1d38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1d3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1d3d call 0x12dc25e0 */
  push32(0x12dc1d42u); f_12dc25e0();
  /* 12dc1d42 mov esi, esp */
  ESI = (ESP);
  /* 12dc1d44 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12dc1d46 push 0x12dda1dc */
  push32((uint32_t)(0x12dda1dcu));
  /* 12dc1d4b call dword ptr [0x12de2444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2444))), 0x12dc1d51u);
  /* 12dc1d51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1d54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1d56 call 0x12dc25e0 */
  push32(0x12dc1d5bu); f_12dc25e0();
  /* 12dc1d5b mov esi, esp */
  ESI = (ESP);
  /* 12dc1d5d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12dc1d5f push 0x12ddf4c0 */
  push32((uint32_t)(0x12ddf4c0u));
  /* 12dc1d64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1d66 push 0x12ddf468 */
  push32((uint32_t)(0x12ddf468u));
  /* 12dc1d6b push 0x12ddf4a0 */
  push32((uint32_t)(0x12ddf4a0u));
  /* 12dc1d70 push 0x12ddf450 */
  push32((uint32_t)(0x12ddf450u));
  /* 12dc1d75 call dword ptr [0x12de243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de243c))), 0x12dc1d7bu);
  /* 12dc1d7b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1d7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1d80 call 0x12dc25e0 */
  push32(0x12dc1d85u); f_12dc25e0();
  /* 12dc1d85 mov esi, esp */
  ESI = (ESP);
  /* 12dc1d87 push 0x12ddf470 */
  push32((uint32_t)(0x12ddf470u));
  /* 12dc1d8c push 0x12ddf450 */
  push32((uint32_t)(0x12ddf450u));
  /* 12dc1d91 call dword ptr [0x12de244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de244c))), 0x12dc1d97u);
  /* 12dc1d97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1d9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1d9c call 0x12dc25e0 */
  push32(0x12dc1da1u); f_12dc25e0();
L_12dc1da1:;
  /* 12dc1da1 mov esi, esp */
  ESI = (ESP);
  /* 12dc1da3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1da5 call dword ptr [0x12de2424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2424))), 0x12dc1dabu);
  /* 12dc1dab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1dae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1db0 call 0x12dc25e0 */
  push32(0x12dc1db5u); f_12dc25e0();
  /* 12dc1db5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc1dba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc1dbc je 0x12dc1edf */
  if (C.zf) goto L_12dc1edf;
  /* 12dc1dc2 push 0x12ddf498 */
  push32((uint32_t)(0x12ddf498u));
  /* 12dc1dc7 call 0x12dc1005 */
  push32(0x12dc1dccu); f_12dc1005();
  /* 12dc1dcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1dcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc1dd1 jne 0x12dc1edf */
  if (!C.zf) goto L_12dc1edf;
  /* 12dc1dd7 mov esi, esp */
  ESI = (ESP);
  /* 12dc1dd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1ddb push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1ddd call dword ptr [0x12de2434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2434))), 0x12dc1de3u);
  /* 12dc1de3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1de6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1de8 call 0x12dc25e0 */
  push32(0x12dc1dedu); f_12dc25e0();
  /* 12dc1ded mov esi, esp */
  ESI = (ESP);
  /* 12dc1def push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12dc1df1 push 0x12dda1cc */
  push32((uint32_t)(0x12dda1ccu));
  /* 12dc1df6 call dword ptr [0x12de2444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2444))), 0x12dc1dfcu);
  /* 12dc1dfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1dff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1e01 call 0x12dc25e0 */
  push32(0x12dc1e06u); f_12dc25e0();
  /* 12dc1e06 mov esi, esp */
  ESI = (ESP);
  /* 12dc1e08 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1e0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1e0c push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1e0e push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc1e10 push 0x12ddf3f8 */
  push32((uint32_t)(0x12ddf3f8u));
  /* 12dc1e15 call dword ptr [0x12de2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2450))), 0x12dc1e1bu);
  /* 12dc1e1b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1e1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1e20 call 0x12dc25e0 */
  push32(0x12dc1e25u); f_12dc25e0();
  /* 12dc1e25 mov esi, esp */
  ESI = (ESP);
  /* 12dc1e27 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1e29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1e2b push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1e2d push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc1e2f push 0x12ddf468 */
  push32((uint32_t)(0x12ddf468u));
  /* 12dc1e34 call dword ptr [0x12de2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2450))), 0x12dc1e3au);
  /* 12dc1e3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1e3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1e3f call 0x12dc25e0 */
  push32(0x12dc1e44u); f_12dc25e0();
  /* 12dc1e44 mov esi, esp */
  ESI = (ESP);
  /* 12dc1e46 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1e48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1e4a push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1e4c push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc1e4e push 0x12ddf480 */
  push32((uint32_t)(0x12ddf480u));
  /* 12dc1e53 call dword ptr [0x12de2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2450))), 0x12dc1e59u);
  /* 12dc1e59 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1e5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1e5e call 0x12dc25e0 */
  push32(0x12dc1e63u); f_12dc25e0();
  /* 12dc1e63 mov esi, esp */
  ESI = (ESP);
  /* 12dc1e65 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1e67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1e69 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1e6b push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc1e6d push 0x12ddf418 */
  push32((uint32_t)(0x12ddf418u));
  /* 12dc1e72 call dword ptr [0x12de2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2450))), 0x12dc1e78u);
  /* 12dc1e78 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1e7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1e7d call 0x12dc25e0 */
  push32(0x12dc1e82u); f_12dc25e0();
  /* 12dc1e82 mov esi, esp */
  ESI = (ESP);
  /* 12dc1e84 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1e86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1e88 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1e8a push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc1e8c push 0x12ddf430 */
  push32((uint32_t)(0x12ddf430u));
  /* 12dc1e91 call dword ptr [0x12de2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2450))), 0x12dc1e97u);
  /* 12dc1e97 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1e9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1e9c call 0x12dc25e0 */
  push32(0x12dc1ea1u); f_12dc25e0();
  /* 12dc1ea1 mov esi, esp */
  ESI = (ESP);
  /* 12dc1ea3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1ea5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1ea7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1ea9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc1eab push 0x12ddf448 */
  push32((uint32_t)(0x12ddf448u));
  /* 12dc1eb0 call dword ptr [0x12de2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2450))), 0x12dc1eb6u);
  /* 12dc1eb6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1eb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1ebb call 0x12dc25e0 */
  push32(0x12dc1ec0u); f_12dc25e0();
  /* 12dc1ec0 mov esi, esp */
  ESI = (ESP);
  /* 12dc1ec2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1ec4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1ec6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1ec8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc1eca push 0x12ddf438 */
  push32((uint32_t)(0x12ddf438u));
  /* 12dc1ecf call dword ptr [0x12de2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2450))), 0x12dc1ed5u);
  /* 12dc1ed5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1ed8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1eda call 0x12dc25e0 */
  push32(0x12dc1edfu); f_12dc25e0();
L_12dc1edf:;
  /* 12dc1edf mov esi, esp */
  ESI = (ESP);
  /* 12dc1ee1 push 3 */
  push32((uint32_t)(0x3u));
  /* 12dc1ee3 call dword ptr [0x12de2424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2424))), 0x12dc1ee9u);
  /* 12dc1ee9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1eec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1eee call 0x12dc25e0 */
  push32(0x12dc1ef3u); f_12dc25e0();
  /* 12dc1ef3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc1ef8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc1efa je 0x12dc201d */
  if (C.zf) goto L_12dc201d;
  /* 12dc1f00 push 0x12ddf4b8 */
  push32((uint32_t)(0x12ddf4b8u));
  /* 12dc1f05 call 0x12dc1005 */
  push32(0x12dc1f0au); f_12dc1005();
  /* 12dc1f0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1f0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc1f0f jne 0x12dc201d */
  if (!C.zf) goto L_12dc201d;
  /* 12dc1f15 mov esi, esp */
  ESI = (ESP);
  /* 12dc1f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1f19 push 3 */
  push32((uint32_t)(0x3u));
  /* 12dc1f1b call dword ptr [0x12de2434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2434))), 0x12dc1f21u);
  /* 12dc1f21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1f24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1f26 call 0x12dc25e0 */
  push32(0x12dc1f2bu); f_12dc25e0();
  /* 12dc1f2b mov esi, esp */
  ESI = (ESP);
  /* 12dc1f2d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12dc1f2f push 0x12dda1bc */
  push32((uint32_t)(0x12dda1bcu));
  /* 12dc1f34 call dword ptr [0x12de2444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2444))), 0x12dc1f3au);
  /* 12dc1f3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1f3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1f3f call 0x12dc25e0 */
  push32(0x12dc1f44u); f_12dc25e0();
  /* 12dc1f44 mov esi, esp */
  ESI = (ESP);
  /* 12dc1f46 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1f48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1f4a push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1f4c push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1f4e push 0x12ddf400 */
  push32((uint32_t)(0x12ddf400u));
  /* 12dc1f53 call dword ptr [0x12de2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2450))), 0x12dc1f59u);
  /* 12dc1f59 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1f5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1f5e call 0x12dc25e0 */
  push32(0x12dc1f63u); f_12dc25e0();
  /* 12dc1f63 mov esi, esp */
  ESI = (ESP);
  /* 12dc1f65 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1f67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1f69 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1f6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1f6d push 0x12ddf480 */
  push32((uint32_t)(0x12ddf480u));
  /* 12dc1f72 call dword ptr [0x12de2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2450))), 0x12dc1f78u);
  /* 12dc1f78 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1f7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1f7d call 0x12dc25e0 */
  push32(0x12dc1f82u); f_12dc25e0();
  /* 12dc1f82 mov esi, esp */
  ESI = (ESP);
  /* 12dc1f84 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1f86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1f88 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1f8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1f8c push 0x12ddf410 */
  push32((uint32_t)(0x12ddf410u));
  /* 12dc1f91 call dword ptr [0x12de2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2450))), 0x12dc1f97u);
  /* 12dc1f97 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1f9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1f9c call 0x12dc25e0 */
  push32(0x12dc1fa1u); f_12dc25e0();
  /* 12dc1fa1 mov esi, esp */
  ESI = (ESP);
  /* 12dc1fa3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1fa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1fa7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1fa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1fab push 0x12ddf4d8 */
  push32((uint32_t)(0x12ddf4d8u));
  /* 12dc1fb0 call dword ptr [0x12de2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2450))), 0x12dc1fb6u);
  /* 12dc1fb6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1fb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1fbb call 0x12dc25e0 */
  push32(0x12dc1fc0u); f_12dc25e0();
  /* 12dc1fc0 mov esi, esp */
  ESI = (ESP);
  /* 12dc1fc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1fc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1fc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1fc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1fca push 0x12ddf4c8 */
  push32((uint32_t)(0x12ddf4c8u));
  /* 12dc1fcf call dword ptr [0x12de2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2450))), 0x12dc1fd5u);
  /* 12dc1fd5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1fd8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1fda call 0x12dc25e0 */
  push32(0x12dc1fdfu); f_12dc25e0();
  /* 12dc1fdf mov esi, esp */
  ESI = (ESP);
  /* 12dc1fe1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1fe3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1fe5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc1fe7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc1fe9 push 0x12ddf3f0 */
  push32((uint32_t)(0x12ddf3f0u));
  /* 12dc1fee call dword ptr [0x12de2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2450))), 0x12dc1ff4u);
  /* 12dc1ff4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc1ff7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc1ff9 call 0x12dc25e0 */
  push32(0x12dc1ffeu); f_12dc25e0();
  /* 12dc1ffe mov esi, esp */
  ESI = (ESP);
  /* 12dc2000 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc2002 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc2004 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc2006 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc2008 push 0x12ddf468 */
  push32((uint32_t)(0x12ddf468u));
  /* 12dc200d call dword ptr [0x12de2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2450))), 0x12dc2013u);
  /* 12dc2013 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2016 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2018 call 0x12dc25e0 */
  push32(0x12dc201du); f_12dc25e0();
L_12dc201d:;
  /* 12dc201d mov esi, esp */
  ESI = (ESP);
  /* 12dc201f push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc2021 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc2023 call dword ptr [0x12de2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2448))), 0x12dc2029u);
  /* 12dc2029 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc202c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc202e call 0x12dc25e0 */
  push32(0x12dc2033u); f_12dc25e0();
  /* 12dc2033 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc2035 jne 0x12dc2052 */
  if (!C.zf) goto L_12dc2052;
  /* 12dc2037 mov esi, esp */
  ESI = (ESP);
  /* 12dc2039 push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 12dc203e push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc2040 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc2042 call dword ptr [0x12de2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2458))), 0x12dc2048u);
  /* 12dc2048 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc204b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc204d call 0x12dc25e0 */
  push32(0x12dc2052u); f_12dc25e0();
L_12dc2052:;
  /* 12dc2052 mov esi, esp */
  ESI = (ESP);
  /* 12dc2054 push 0x12ddf428 */
  push32((uint32_t)(0x12ddf428u));
  /* 12dc2059 push 0x12ddf4d0 */
  push32((uint32_t)(0x12ddf4d0u));
  /* 12dc205e call dword ptr [0x12de242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de242c))), 0x12dc2064u);
  /* 12dc2064 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2067 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2069 call 0x12dc25e0 */
  push32(0x12dc206eu); f_12dc25e0();
  /* 12dc206e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc2070 jne 0x12dc2107 */
  if (!C.zf) goto L_12dc2107;
  /* 12dc2076 mov esi, esp */
  ESI = (ESP);
  /* 12dc2078 push 4 */
  push32((uint32_t)(0x4u));
  /* 12dc207a call dword ptr [0x12de2424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2424))), 0x12dc2080u);
  /* 12dc2080 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2083 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2085 call 0x12dc25e0 */
  push32(0x12dc208au); f_12dc25e0();
  /* 12dc208a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc208f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc2091 je 0x12dc2107 */
  if (C.zf) goto L_12dc2107;
  /* 12dc2093 mov esi, esp */
  ESI = (ESP);
  /* 12dc2095 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc2097 push 4 */
  push32((uint32_t)(0x4u));
  /* 12dc2099 call dword ptr [0x12de2434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2434))), 0x12dc209fu);
  /* 12dc209f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc20a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc20a4 call 0x12dc25e0 */
  push32(0x12dc20a9u); f_12dc25e0();
  /* 12dc20a9 mov esi, esp */
  ESI = (ESP);
  /* 12dc20ab push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 12dc20b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 12dc20b2 call dword ptr [0x12de2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2438))), 0x12dc20b8u);
  /* 12dc20b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc20bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc20bd call 0x12dc25e0 */
  push32(0x12dc20c2u); f_12dc25e0();
  /* 12dc20c2 mov esi, esp */
  ESI = (ESP);
  /* 12dc20c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc20c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc20c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc20ca call dword ptr [0x12de2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2458))), 0x12dc20d0u);
  /* 12dc20d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc20d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc20d5 call 0x12dc25e0 */
  push32(0x12dc20dau); f_12dc25e0();
  /* 12dc20da mov esi, esp */
  ESI = (ESP);
  /* 12dc20dc call dword ptr [0x12de24ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de24ac))), 0x12dc20e2u);
  /* 12dc20e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc20e4 call 0x12dc25e0 */
  push32(0x12dc20e9u); f_12dc25e0();
  /* 12dc20e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc20ec jne 0x12dc2107 */
  if (!C.zf) goto L_12dc2107;
  /* 12dc20ee mov esi, esp */
  ESI = (ESP);
  /* 12dc20f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12dc20f2 push 0x12ddf488 */
  push32((uint32_t)(0x12ddf488u));
  /* 12dc20f7 call dword ptr [0x12de245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de245c))), 0x12dc20fdu);
  /* 12dc20fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2100 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2102 call 0x12dc25e0 */
  push32(0x12dc2107u); f_12dc25e0();
L_12dc2107:;
  /* 12dc2107 mov esi, esp */
  ESI = (ESP);
  /* 12dc2109 push 4 */
  push32((uint32_t)(0x4u));
  /* 12dc210b call dword ptr [0x12de2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2454))), 0x12dc2111u);
  /* 12dc2111 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2114 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2116 call 0x12dc25e0 */
  push32(0x12dc211bu); f_12dc25e0();
  /* 12dc211b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc2120 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc2122 je 0x12dc213a */
  if (C.zf) goto L_12dc213a;
  /* 12dc2124 mov esi, esp */
  ESI = (ESP);
  /* 12dc2126 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc2128 push 4 */
  push32((uint32_t)(0x4u));
  /* 12dc212a call dword ptr [0x12de2434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2434))), 0x12dc2130u);
  /* 12dc2130 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2133 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2135 call 0x12dc25e0 */
  push32(0x12dc213au); f_12dc25e0();
L_12dc213a:;
  /* 12dc213a mov esi, esp */
  ESI = (ESP);
  /* 12dc213c push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc213e push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc2140 call dword ptr [0x12de2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2448))), 0x12dc2146u);
  /* 12dc2146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc214b call 0x12dc25e0 */
  push32(0x12dc2150u); f_12dc25e0();
  /* 12dc2150 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc2152 jne 0x12dc216f */
  if (!C.zf) goto L_12dc216f;
  /* 12dc2154 mov esi, esp */
  ESI = (ESP);
  /* 12dc2156 push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 12dc215b push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc215d push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc215f call dword ptr [0x12de2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2458))), 0x12dc2165u);
  /* 12dc2165 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2168 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc216a call 0x12dc25e0 */
  push32(0x12dc216fu); f_12dc25e0();
L_12dc216f:;
  /* 12dc216f mov esi, esp */
  ESI = (ESP);
  /* 12dc2171 push 0x12ddf408 */
  push32((uint32_t)(0x12ddf408u));
  /* 12dc2176 push 0x12ddf460 */
  push32((uint32_t)(0x12ddf460u));
  /* 12dc217b call dword ptr [0x12de242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de242c))), 0x12dc2181u);
  /* 12dc2181 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2184 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2186 call 0x12dc25e0 */
  push32(0x12dc218bu); f_12dc25e0();
  /* 12dc218b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc218d jne 0x12dc2223 */
  if (!C.zf) goto L_12dc2223;
  /* 12dc2193 mov esi, esp */
  ESI = (ESP);
  /* 12dc2195 push 5 */
  push32((uint32_t)(0x5u));
  /* 12dc2197 call dword ptr [0x12de2424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2424))), 0x12dc219du);
  /* 12dc219d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc21a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc21a2 call 0x12dc25e0 */
  push32(0x12dc21a7u); f_12dc25e0();
  /* 12dc21a7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc21ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc21ae je 0x12dc2223 */
  if (C.zf) goto L_12dc2223;
  /* 12dc21b0 mov esi, esp */
  ESI = (ESP);
  /* 12dc21b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc21b4 push 5 */
  push32((uint32_t)(0x5u));
  /* 12dc21b6 call dword ptr [0x12de2434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2434))), 0x12dc21bcu);
  /* 12dc21bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc21bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc21c1 call 0x12dc25e0 */
  push32(0x12dc21c6u); f_12dc25e0();
  /* 12dc21c6 mov esi, esp */
  ESI = (ESP);
  /* 12dc21c8 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 12dc21cd push 5 */
  push32((uint32_t)(0x5u));
  /* 12dc21cf call dword ptr [0x12de2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2438))), 0x12dc21d5u);
  /* 12dc21d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc21d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc21da call 0x12dc25e0 */
  push32(0x12dc21dfu); f_12dc25e0();
  /* 12dc21df mov esi, esp */
  ESI = (ESP);
  /* 12dc21e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc21e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc21e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc21e7 call dword ptr [0x12de2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2458))), 0x12dc21edu);
  /* 12dc21ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc21f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc21f2 call 0x12dc25e0 */
  push32(0x12dc21f7u); f_12dc25e0();
  /* 12dc21f7 mov esi, esp */
  ESI = (ESP);
  /* 12dc21f9 call dword ptr [0x12de24ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de24ac))), 0x12dc21ffu);
  /* 12dc21ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2201 call 0x12dc25e0 */
  push32(0x12dc2206u); f_12dc25e0();
  /* 12dc2206 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc2208 jne 0x12dc2223 */
  if (!C.zf) goto L_12dc2223;
  /* 12dc220a mov esi, esp */
  ESI = (ESP);
  /* 12dc220c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12dc220e push 0x12ddf488 */
  push32((uint32_t)(0x12ddf488u));
  /* 12dc2213 call dword ptr [0x12de245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de245c))), 0x12dc2219u);
  /* 12dc2219 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc221c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc221e call 0x12dc25e0 */
  push32(0x12dc2223u); f_12dc25e0();
L_12dc2223:;
  /* 12dc2223 mov esi, esp */
  ESI = (ESP);
  /* 12dc2225 push 5 */
  push32((uint32_t)(0x5u));
  /* 12dc2227 call dword ptr [0x12de2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2454))), 0x12dc222du);
  /* 12dc222d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2230 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2232 call 0x12dc25e0 */
  push32(0x12dc2237u); f_12dc25e0();
  /* 12dc2237 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc223c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc223e je 0x12dc2256 */
  if (C.zf) goto L_12dc2256;
  /* 12dc2240 mov esi, esp */
  ESI = (ESP);
  /* 12dc2242 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc2244 push 5 */
  push32((uint32_t)(0x5u));
  /* 12dc2246 call dword ptr [0x12de2434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2434))), 0x12dc224cu);
  /* 12dc224c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc224f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2251 call 0x12dc25e0 */
  push32(0x12dc2256u); f_12dc25e0();
L_12dc2256:;
  /* 12dc2256 push 0x12ddf470 */
  push32((uint32_t)(0x12ddf470u));
  /* 12dc225b call 0x12dc1014 */
  push32(0x12dc2260u); f_12dc1014();
  /* 12dc2260 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2263 push 0x12ddf478 */
  push32((uint32_t)(0x12ddf478u));
  /* 12dc2268 call 0x12dc1014 */
  push32(0x12dc226du); f_12dc1014();
  /* 12dc226d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2270 push 4 */
  push32((uint32_t)(0x4u));
  /* 12dc2272 push 0x12ddf428 */
  push32((uint32_t)(0x12ddf428u));
  /* 12dc2277 call 0x12dc1023 */
  push32(0x12dc227cu); f_12dc1023();
  /* 12dc227c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc227f push 4 */
  push32((uint32_t)(0x4u));
  /* 12dc2281 push 0x12ddf490 */
  push32((uint32_t)(0x12ddf490u));
  /* 12dc2286 call 0x12dc1028 */
  push32(0x12dc228bu); f_12dc1028();
  /* 12dc228b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc228e push 4 */
  push32((uint32_t)(0x4u));
  /* 12dc2290 push 0x12ddf408 */
  push32((uint32_t)(0x12ddf408u));
  /* 12dc2295 call 0x12dc1023 */
  push32(0x12dc229au); f_12dc1023();
  /* 12dc229a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc229d pop edi */
  EDI = (pop32());
  /* 12dc229e pop esi */
  ESI = (pop32());
  /* 12dc229f pop ebx */
  EBX = (pop32());
  /* 12dc22a0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc22a3 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc22a5 call 0x12dc25e0 */
  push32(0x12dc22aau); f_12dc25e0();
  /* 12dc22aa mov esp, ebp */
  ESP = (EBP);
  /* 12dc22ac pop ebp */
  EBP = (pop32());
  /* 12dc22ad ret  */
  ESPCHK(0x12dc1ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_100024b0 @ 0x12dc24b0 (63 bytes, 26 insns) */
void f_12dc24b0(void) {
  FTRACE(0x12dc24b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc24b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc24b1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc24b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc24b6 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc24b7 push esi */
  push32((uint32_t)(ESI));
  /* 12dc24b8 push edi */
  push32((uint32_t)(EDI));
  /* 12dc24b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12dc24bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12dc24c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12dc24c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12dc24c8 mov esi, esp */
  ESI = (ESP);
  /* 12dc24ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc24cd push eax */
  push32((uint32_t)(EAX));
  /* 12dc24ce call dword ptr [0x12de2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2420))), 0x12dc24d4u);
  /* 12dc24d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc24d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc24d9 call 0x12dc25e0 */
  push32(0x12dc24deu); f_12dc25e0();
  /* 12dc24de pop edi */
  EDI = (pop32());
  /* 12dc24df pop esi */
  ESI = (pop32());
  /* 12dc24e0 pop ebx */
  EBX = (pop32());
  /* 12dc24e1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc24e4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc24e6 call 0x12dc25e0 */
  push32(0x12dc24ebu); f_12dc25e0();
  /* 12dc24eb mov esp, ebp */
  ESP = (EBP);
  /* 12dc24ed pop ebp */
  EBP = (pop32());
  /* 12dc24ee ret  */
  ESPCHK(0x12dc24b0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12dc25e0 (56 bytes, 28 insns) */
void f_12dc25e0(void) {
  FTRACE(0x12dc25e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc25e0 jne 0x12dc25e3 */
  if (!C.zf) goto L_12dc25e3;
  /* 12dc25e2 ret  */
  ESPCHK(0x12dc25e0u, _esp0);
  ESP += 4; return;
L_12dc25e3:;
  /* 12dc25e3 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc25e4 mov ebp, esp */
  EBP = (ESP);
  /* 12dc25e6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc25e9 push eax */
  push32((uint32_t)(EAX));
  /* 12dc25ea push edx */
  push32((uint32_t)(EDX));
  /* 12dc25eb push ebx */
  push32((uint32_t)(EBX));
  /* 12dc25ec push esi */
  push32((uint32_t)(ESI));
  /* 12dc25ed push edi */
  push32((uint32_t)(EDI));
  /* 12dc25ee push 0x12dda294 */
  push32((uint32_t)(0x12dda294u));
  /* 12dc25f3 push 0x12dda290 */
  push32((uint32_t)(0x12dda290u));
  /* 12dc25f8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12dc25fa push 0x12dda280 */
  push32((uint32_t)(0x12dda280u));
  /* 12dc25ff push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc2601 call 0x12dc29b0 */
  push32(0x12dc2606u); f_12dc29b0();
  /* 12dc2606 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2609 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc260c jne 0x12dc260f */
  if (!C.zf) goto L_12dc260f;
  /* 12dc260e int3  */
  x86_unimpl("int3 @ 0x12dc260e");
L_12dc260f:;
  /* 12dc260f pop edi */
  EDI = (pop32());
  /* 12dc2610 pop esi */
  ESI = (pop32());
  /* 12dc2611 pop ebx */
  EBX = (pop32());
  /* 12dc2612 pop edx */
  EDX = (pop32());
  /* 12dc2613 pop eax */
  EAX = (pop32());
  /* 12dc2614 mov esp, ebp */
  ESP = (EBP);
  /* 12dc2616 pop ebp */
  EBP = (pop32());
  /* 12dc2617 ret  */
  ESPCHK(0x12dc25e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002620 @ 0x12dc2620 (313 bytes, 78 insns) */
void f_12dc2620(void) {
  FTRACE(0x12dc2620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc2620 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc2621 mov ebp, esp */
  EBP = (ESP);
  /* 12dc2623 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2627 jne 0x12dc26e7 */
  if (!C.zf) goto L_12dc26e7;
  /* 12dc262d call dword ptr [0x12de2334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2334))), 0x12dc2633u);
  /* 12dc2633 mov dword ptr [0x12ddf534], eax */
  w32((uint32_t)(0x12ddf534), (EAX));
  /* 12dc2638 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc263a call 0x12dc60e0 */
  push32(0x12dc263fu); f_12dc60e0();
  /* 12dc263f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2642 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc2644 jne 0x12dc264d */
  if (!C.zf) goto L_12dc264d;
  /* 12dc2646 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc2648 jmp 0x12dc2755 */
  goto L_12dc2755;
L_12dc264d:;
  /* 12dc264d mov eax, dword ptr [0x12ddf534] */
  EAX = (r32((uint32_t)(0x12ddf534)));
  /* 12dc2652 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12dc2655 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc265a mov dword ptr [0x12ddf540], eax */
  w32((uint32_t)(0x12ddf540), (EAX));
  /* 12dc265f mov ecx, dword ptr [0x12ddf534] */
  ECX = (r32((uint32_t)(0x12ddf534)));
  /* 12dc2665 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc266b mov dword ptr [0x12ddf53c], ecx */
  w32((uint32_t)(0x12ddf53c), (ECX));
  /* 12dc2671 mov edx, dword ptr [0x12ddf53c] */
  EDX = (r32((uint32_t)(0x12ddf53c)));
  /* 12dc2677 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12dc267a add edx, dword ptr [0x12ddf540] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12ddf540))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2680 mov dword ptr [0x12ddf538], edx */
  w32((uint32_t)(0x12ddf538), (EDX));
  /* 12dc2686 mov eax, dword ptr [0x12ddf534] */
  EAX = (r32((uint32_t)(0x12ddf534)));
  /* 12dc268b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12dc268e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc2693 mov dword ptr [0x12ddf534], eax */
  w32((uint32_t)(0x12ddf534), (EAX));
  /* 12dc2698 call 0x12dc3250 */
  push32(0x12dc269du); f_12dc3250();
  /* 12dc269d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc269f jne 0x12dc26ad */
  if (!C.zf) goto L_12dc26ad;
  /* 12dc26a1 call 0x12dc6130 */
  push32(0x12dc26a6u); f_12dc6130();
  /* 12dc26a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc26a8 jmp 0x12dc2755 */
  goto L_12dc2755;
L_12dc26ad:;
  /* 12dc26ad call dword ptr [0x12de2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2330))), 0x12dc26b3u);
  /* 12dc26b3 mov dword ptr [0x12de106c], eax */
  w32((uint32_t)(0x12de106c), (EAX));
  /* 12dc26b8 call 0x12dc5ec0 */
  push32(0x12dc26bdu); f_12dc5ec0();
  /* 12dc26bd mov dword ptr [0x12ddf51c], eax */
  w32((uint32_t)(0x12ddf51c), (EAX));
  /* 12dc26c2 call 0x12dc3500 */
  push32(0x12dc26c7u); f_12dc3500();
  /* 12dc26c7 call 0x12dc59b0 */
  push32(0x12dc26ccu); f_12dc59b0();
  /* 12dc26cc call 0x12dc5860 */
  push32(0x12dc26d1u); f_12dc5860();
  /* 12dc26d1 call 0x12dc3050 */
  push32(0x12dc26d6u); f_12dc3050();
  /* 12dc26d6 mov ecx, dword ptr [0x12ddf518] */
  ECX = (r32((uint32_t)(0x12ddf518)));
  /* 12dc26dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc26df mov dword ptr [0x12ddf518], ecx */
  w32((uint32_t)(0x12ddf518), (ECX));
  /* 12dc26e5 jmp 0x12dc2750 */
  goto L_12dc2750;
L_12dc26e7:;
  /* 12dc26e7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc26eb jne 0x12dc2740 */
  if (!C.zf) goto L_12dc2740;
  /* 12dc26ed cmp dword ptr [0x12ddf518], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf518))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc26f4 jle 0x12dc273a */
  if ((C.zf||C.sf!=C.of)) goto L_12dc273a;
  /* 12dc26f6 mov edx, dword ptr [0x12ddf518] */
  EDX = (r32((uint32_t)(0x12ddf518)));
  /* 12dc26fc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc26ff mov dword ptr [0x12ddf518], edx */
  w32((uint32_t)(0x12ddf518), (EDX));
  /* 12dc2705 cmp dword ptr [0x12ddf56c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf56c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc270c jne 0x12dc2713 */
  if (!C.zf) goto L_12dc2713;
  /* 12dc270e call 0x12dc30d0 */
  push32(0x12dc2713u); f_12dc30d0();
L_12dc2713:;
  /* 12dc2713 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12dc2715 call 0x12dc4e00 */
  push32(0x12dc271au); f_12dc4e00();
  /* 12dc271a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc271d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12dc2720 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc2722 je 0x12dc2729 */
  if (C.zf) goto L_12dc2729;
  /* 12dc2724 call 0x12dc5710 */
  push32(0x12dc2729u); f_12dc5710();
L_12dc2729:;
  /* 12dc2729 call 0x12dc3830 */
  push32(0x12dc272eu); f_12dc3830();
  /* 12dc272e call 0x12dc32e0 */
  push32(0x12dc2733u); f_12dc32e0();
  /* 12dc2733 call 0x12dc6130 */
  push32(0x12dc2738u); f_12dc6130();
  /* 12dc2738 jmp 0x12dc273e */
  goto L_12dc273e;
L_12dc273a:;
  /* 12dc273a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc273c jmp 0x12dc2755 */
  goto L_12dc2755;
L_12dc273e:;
  /* 12dc273e jmp 0x12dc2750 */
  goto L_12dc2750;
L_12dc2740:;
  /* 12dc2740 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2744 jne 0x12dc2750 */
  if (!C.zf) goto L_12dc2750;
  /* 12dc2746 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc2748 call 0x12dc33d0 */
  push32(0x12dc274du); f_12dc33d0();
  /* 12dc274d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc2750:;
  /* 12dc2750 mov eax, 1 */
  EAX = (0x1u);
L_12dc2755:;
  /* 12dc2755 pop ebp */
  EBP = (pop32());
  /* 12dc2756 ret 0xc */
  ESPCHK(0x12dc2620u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12dc2760 (243 bytes, 86 insns) */
void f_12dc2760(void) {
  FTRACE(0x12dc2760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc2760 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc2761 mov ebp, esp */
  EBP = (ESP);
  /* 12dc2763 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc2764 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12dc276b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc276f jne 0x12dc2781 */
  if (!C.zf) goto L_12dc2781;
  /* 12dc2771 cmp dword ptr [0x12ddf518], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf518))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2778 jne 0x12dc2781 */
  if (!C.zf) goto L_12dc2781;
  /* 12dc277a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc277c jmp 0x12dc284d */
  goto L_12dc284d;
L_12dc2781:;
  /* 12dc2781 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2785 je 0x12dc278d */
  if (C.zf) goto L_12dc278d;
  /* 12dc2787 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc278b jne 0x12dc27cf */
  if (!C.zf) goto L_12dc27cf;
L_12dc278d:;
  /* 12dc278d cmp dword ptr [0x12de107c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12de107c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2794 je 0x12dc27ab */
  if (C.zf) goto L_12dc27ab;
  /* 12dc2796 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc2799 push eax */
  push32((uint32_t)(EAX));
  /* 12dc279a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc279d push ecx */
  push32((uint32_t)(ECX));
  /* 12dc279e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc27a1 push edx */
  push32((uint32_t)(EDX));
  /* 12dc27a2 call dword ptr [0x12de107c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de107c))), 0x12dc27a8u);
  /* 12dc27a8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dc27ab:;
  /* 12dc27ab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc27af je 0x12dc27c5 */
  if (C.zf) goto L_12dc27c5;
  /* 12dc27b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc27b4 push eax */
  push32((uint32_t)(EAX));
  /* 12dc27b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc27b8 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc27b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc27bc push edx */
  push32((uint32_t)(EDX));
  /* 12dc27bd call 0x12dc2620 */
  push32(0x12dc27c2u); f_12dc2620();
  /* 12dc27c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dc27c5:;
  /* 12dc27c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc27c9 jne 0x12dc27cf */
  if (!C.zf) goto L_12dc27cf;
  /* 12dc27cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc27cd jmp 0x12dc284d */
  goto L_12dc284d;
L_12dc27cf:;
  /* 12dc27cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc27d2 push eax */
  push32((uint32_t)(EAX));
  /* 12dc27d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc27d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc27d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc27da push edx */
  push32((uint32_t)(EDX));
  /* 12dc27db call 0x12dc100f */
  push32(0x12dc27e0u); f_12dc100f();
  /* 12dc27e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc27e3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc27e7 jne 0x12dc27fe */
  if (!C.zf) goto L_12dc27fe;
  /* 12dc27e9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc27ed jne 0x12dc27fe */
  if (!C.zf) goto L_12dc27fe;
  /* 12dc27ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc27f2 push eax */
  push32((uint32_t)(EAX));
  /* 12dc27f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc27f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc27f8 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc27f9 call 0x12dc2620 */
  push32(0x12dc27feu); f_12dc2620();
L_12dc27fe:;
  /* 12dc27fe cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2802 je 0x12dc280a */
  if (C.zf) goto L_12dc280a;
  /* 12dc2804 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2808 jne 0x12dc284a */
  if (!C.zf) goto L_12dc284a;
L_12dc280a:;
  /* 12dc280a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc280d push edx */
  push32((uint32_t)(EDX));
  /* 12dc280e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc2811 push eax */
  push32((uint32_t)(EAX));
  /* 12dc2812 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc2815 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc2816 call 0x12dc2620 */
  push32(0x12dc281bu); f_12dc2620();
  /* 12dc281b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc281d jne 0x12dc2826 */
  if (!C.zf) goto L_12dc2826;
  /* 12dc281f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12dc2826:;
  /* 12dc2826 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc282a je 0x12dc284a */
  if (C.zf) goto L_12dc284a;
  /* 12dc282c cmp dword ptr [0x12de107c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12de107c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2833 je 0x12dc284a */
  if (C.zf) goto L_12dc284a;
  /* 12dc2835 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc2838 push edx */
  push32((uint32_t)(EDX));
  /* 12dc2839 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc283c push eax */
  push32((uint32_t)(EAX));
  /* 12dc283d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc2840 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc2841 call dword ptr [0x12de107c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de107c))), 0x12dc2847u);
  /* 12dc2847 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dc284a:;
  /* 12dc284a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12dc284d:;
  /* 12dc284d mov esp, ebp */
  ESP = (EBP);
  /* 12dc284f pop ebp */
  EBP = (pop32());
  /* 12dc2850 ret 0xc */
  ESPCHK(0x12dc2760u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12dc2860 (58 bytes, 18 insns) */
void f_12dc2860(void) {
  FTRACE(0x12dc2860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc2860 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc2861 mov ebp, esp */
  EBP = (ESP);
  /* 12dc2863 cmp dword ptr [0x12ddf524], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf524))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc286a je 0x12dc287e */
  if (C.zf) goto L_12dc287e;
  /* 12dc286c cmp dword ptr [0x12ddf524], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf524))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2873 jne 0x12dc2883 */
  if (!C.zf) goto L_12dc2883;
  /* 12dc2875 cmp dword ptr [0x12ddf528], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf528))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc287c jne 0x12dc2883 */
  if (!C.zf) goto L_12dc2883;
L_12dc287e:;
  /* 12dc287e call 0x12dc61d0 */
  push32(0x12dc2883u); f_12dc61d0();
L_12dc2883:;
  /* 12dc2883 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc2886 push eax */
  push32((uint32_t)(EAX));
  /* 12dc2887 call 0x12dc6220 */
  push32(0x12dc288cu); f_12dc6220();
  /* 12dc288c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc288f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12dc2894 call dword ptr [0x12ddda30] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ddda30))), 0x12dc289au);
  /* 12dc289a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc289d pop ebp */
  EBP = (pop32());
  /* 12dc289e ret  */
  ESPCHK(0x12dc2860u, _esp0);
  ESP += 4; return;
}

/* FUN_100028a0 @ 0x12dc28a0 (11 bytes, 5 insns) */
void f_12dc28a0(void) {
  FTRACE(0x12dc28a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc28a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc28a1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc28a3 call dword ptr [0x12de2338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2338))), 0x12dc28a9u);
  /* 12dc28a9 pop ebp */
  EBP = (pop32());
  /* 12dc28aa ret  */
  ESPCHK(0x12dc28a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100028b0 @ 0x12dc28b0 (87 bytes, 30 insns) */
void f_12dc28b0(void) {
  FTRACE(0x12dc28b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc28b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc28b1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc28b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc28b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc28b8 jl 0x12dc28c0 */
  if ((C.sf!=C.of)) goto L_12dc28c0;
  /* 12dc28ba cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc28be jl 0x12dc28c5 */
  if ((C.sf!=C.of)) goto L_12dc28c5;
L_12dc28c0:;
  /* 12dc28c0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc28c3 jmp 0x12dc2903 */
  goto L_12dc2903;
L_12dc28c5:;
  /* 12dc28c5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc28c9 jne 0x12dc28d7 */
  if (!C.zf) goto L_12dc28d7;
  /* 12dc28cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc28ce mov eax, dword ptr [eax*4 + 0x12ddda38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12ddda38)));
  /* 12dc28d5 jmp 0x12dc2903 */
  goto L_12dc2903;
L_12dc28d7:;
  /* 12dc28d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc28da and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 12dc28dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc28df je 0x12dc28e6 */
  if (C.zf) goto L_12dc28e6;
  /* 12dc28e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc28e4 jmp 0x12dc2903 */
  goto L_12dc2903;
L_12dc28e6:;
  /* 12dc28e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc28e9 mov eax, dword ptr [edx*4 + 0x12ddda38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12ddda38)));
  /* 12dc28f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc28f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc28f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc28f9 mov dword ptr [ecx*4 + 0x12ddda38], edx */
  w32((uint32_t)(ECX*4 + 0x12ddda38), (EDX));
  /* 12dc2900 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12dc2903:;
  /* 12dc2903 mov esp, ebp */
  ESP = (EBP);
  /* 12dc2905 pop ebp */
  EBP = (pop32());
  /* 12dc2906 ret  */
  ESPCHK(0x12dc28b0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12dc2910 (126 bytes, 38 insns) */
void f_12dc2910(void) {
  FTRACE(0x12dc2910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc2910 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc2911 mov ebp, esp */
  EBP = (ESP);
  /* 12dc2913 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc2914 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2918 jl 0x12dc2920 */
  if ((C.sf!=C.of)) goto L_12dc2920;
  /* 12dc291a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc291e jl 0x12dc2927 */
  if ((C.sf!=C.of)) goto L_12dc2927;
L_12dc2920:;
  /* 12dc2920 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12dc2925 jmp 0x12dc298a */
  goto L_12dc298a;
L_12dc2927:;
  /* 12dc2927 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc292b jne 0x12dc2939 */
  if (!C.zf) goto L_12dc2939;
  /* 12dc292d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc2930 mov eax, dword ptr [eax*4 + 0x12ddda44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12ddda44)));
  /* 12dc2937 jmp 0x12dc298a */
  goto L_12dc298a;
L_12dc2939:;
  /* 12dc2939 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc293c mov edx, dword ptr [ecx*4 + 0x12ddda44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ddda44)));
  /* 12dc2943 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dc2946 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc294a jne 0x12dc2960 */
  if (!C.zf) goto L_12dc2960;
  /* 12dc294c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12dc294e call dword ptr [0x12de233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de233c))), 0x12dc2954u);
  /* 12dc2954 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc2957 mov dword ptr [ecx*4 + 0x12ddda44], eax */
  w32((uint32_t)(ECX*4 + 0x12ddda44), (EAX));
  /* 12dc295e jmp 0x12dc2987 */
  goto L_12dc2987;
L_12dc2960:;
  /* 12dc2960 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2964 jne 0x12dc297a */
  if (!C.zf) goto L_12dc297a;
  /* 12dc2966 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12dc2968 call dword ptr [0x12de233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de233c))), 0x12dc296eu);
  /* 12dc296e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc2971 mov dword ptr [edx*4 + 0x12ddda44], eax */
  w32((uint32_t)(EDX*4 + 0x12ddda44), (EAX));
  /* 12dc2978 jmp 0x12dc2987 */
  goto L_12dc2987;
L_12dc297a:;
  /* 12dc297a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc297d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc2980 mov dword ptr [eax*4 + 0x12ddda44], ecx */
  w32((uint32_t)(EAX*4 + 0x12ddda44), (ECX));
L_12dc2987:;
  /* 12dc2987 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12dc298a:;
  /* 12dc298a mov esp, ebp */
  ESP = (EBP);
  /* 12dc298c pop ebp */
  EBP = (pop32());
  /* 12dc298d ret  */
  ESPCHK(0x12dc2910u, _esp0);
  ESP += 4; return;
}

/* FUN_10002990 @ 0x12dc2990 (28 bytes, 11 insns) */
void f_12dc2990(void) {
  FTRACE(0x12dc2990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc2990 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc2991 mov ebp, esp */
  EBP = (ESP);
  /* 12dc2993 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc2994 mov eax, dword ptr [0x12de1060] */
  EAX = (r32((uint32_t)(0x12de1060)));
  /* 12dc2999 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc299c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc299f mov dword ptr [0x12de1060], ecx */
  w32((uint32_t)(0x12de1060), (ECX));
  /* 12dc29a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc29a8 mov esp, ebp */
  ESP = (EBP);
  /* 12dc29aa pop ebp */
  EBP = (pop32());
  /* 12dc29ab ret  */
  ESPCHK(0x12dc2990u, _esp0);
  ESP += 4; return;
}

/* FUN_100029b0 @ 0x12dc29b0 (912 bytes, 248 insns) */
void f_12dc29b0(void) {
  FTRACE(0x12dc29b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc29b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc29b1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc29b3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12dc29b8 call 0x12dc6a90 */
  push32(0x12dc29bdu); f_12dc6a90();
  /* 12dc29bd push edi */
  push32((uint32_t)(EDI));
  /* 12dc29be mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12dc29c5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12dc29ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc29cc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12dc29d2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12dc29d4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12dc29d6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12dc29d7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 12dc29de mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12dc29e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc29e5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 12dc29eb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12dc29ed stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12dc29ef stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12dc29f0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12dc29f7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12dc29fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc29fe lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12dc2a04 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12dc2a06 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12dc2a08 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12dc2a09 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 12dc2a0c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12dc2a12 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2a16 jl 0x12dc2a1e */
  if ((C.sf!=C.of)) goto L_12dc2a1e;
  /* 12dc2a18 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2a1c jl 0x12dc2a26 */
  if ((C.sf!=C.of)) goto L_12dc2a26;
L_12dc2a1e:;
  /* 12dc2a1e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc2a21 jmp 0x12dc2d3b */
  goto L_12dc2d3b;
L_12dc2a26:;
  /* 12dc2a26 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2a2a jne 0x12dc2ad0 */
  if (!C.zf) goto L_12dc2ad0;
  /* 12dc2a30 push 0x12ddda34 */
  push32((uint32_t)(0x12ddda34u));
  /* 12dc2a35 call dword ptr [0x12de2354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2354))), 0x12dc2a3bu);
  /* 12dc2a3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc2a3d jle 0x12dc2ad0 */
  if ((C.zf||C.sf!=C.of)) goto L_12dc2ad0;
  /* 12dc2a43 cmp dword ptr [0x12ddf52c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf52c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2a4a jne 0x12dc2a8e */
  if (!C.zf) goto L_12dc2a8e;
  /* 12dc2a4c push 0x12dda43c */
  push32((uint32_t)(0x12dda43cu));
  /* 12dc2a51 call dword ptr [0x12de2350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2350))), 0x12dc2a57u);
  /* 12dc2a57 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12dc2a5d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2a64 je 0x12dc2a86 */
  if (C.zf) goto L_12dc2a86;
  /* 12dc2a66 push 0x12dda430 */
  push32((uint32_t)(0x12dda430u));
  /* 12dc2a6b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12dc2a71 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc2a72 call dword ptr [0x12de234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de234c))), 0x12dc2a78u);
  /* 12dc2a78 mov dword ptr [0x12ddf52c], eax */
  w32((uint32_t)(0x12ddf52c), (EAX));
  /* 12dc2a7d cmp dword ptr [0x12ddf52c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf52c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2a84 jne 0x12dc2a8e */
  if (!C.zf) goto L_12dc2a8e;
L_12dc2a86:;
  /* 12dc2a86 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc2a89 jmp 0x12dc2d3b */
  goto L_12dc2d3b;
L_12dc2a8e:;
  /* 12dc2a8e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc2a91 push edx */
  push32((uint32_t)(EDX));
  /* 12dc2a92 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc2a95 push eax */
  push32((uint32_t)(EAX));
  /* 12dc2a96 push 0x12dda3fc */
  push32((uint32_t)(0x12dda3fcu));
  /* 12dc2a9b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12dc2aa1 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc2aa2 call dword ptr [0x12ddf52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ddf52c))), 0x12dc2aa8u);
  /* 12dc2aa8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2aab lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12dc2ab1 push edx */
  push32((uint32_t)(EDX));
  /* 12dc2ab2 call dword ptr [0x12de2348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2348))), 0x12dc2ab8u);
  /* 12dc2ab8 push 0x12ddda34 */
  push32((uint32_t)(0x12ddda34u));
  /* 12dc2abd call dword ptr [0x12de2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2344))), 0x12dc2ac3u);
  /* 12dc2ac3 call 0x12dc28a0 */
  push32(0x12dc2ac8u); f_12dc28a0();
  /* 12dc2ac8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc2acb jmp 0x12dc2d3b */
  goto L_12dc2d3b;
L_12dc2ad0:;
  /* 12dc2ad0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2ad4 je 0x12dc2b0d */
  if (C.zf) goto L_12dc2b0d;
  /* 12dc2ad6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12dc2adc push eax */
  push32((uint32_t)(EAX));
  /* 12dc2add mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc2ae0 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc2ae1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12dc2ae6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12dc2aec push edx */
  push32((uint32_t)(EDX));
  /* 12dc2aed call 0x12dc6990 */
  push32(0x12dc2af2u); f_12dc6990();
  /* 12dc2af2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2af5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc2af7 jge 0x12dc2b0d */
  if ((C.sf==C.of)) goto L_12dc2b0d;
  /* 12dc2af9 push 0x12dda3d0 */
  push32((uint32_t)(0x12dda3d0u));
  /* 12dc2afe lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12dc2b04 push eax */
  push32((uint32_t)(EAX));
  /* 12dc2b05 call 0x12dc68a0 */
  push32(0x12dc2b0au); f_12dc68a0();
  /* 12dc2b0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc2b0d:;
  /* 12dc2b0d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2b11 jne 0x12dc2b45 */
  if (!C.zf) goto L_12dc2b45;
  /* 12dc2b13 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2b17 je 0x12dc2b25 */
  if (C.zf) goto L_12dc2b25;
  /* 12dc2b19 mov dword ptr [ebp - 0x3028], 0x12dda3bc */
  w32((uint32_t)(EBP + -0x3028), (0x12dda3bcu));
  /* 12dc2b23 jmp 0x12dc2b2f */
  goto L_12dc2b2f;
L_12dc2b25:;
  /* 12dc2b25 mov dword ptr [ebp - 0x3028], 0x12dda3a8 */
  w32((uint32_t)(EBP + -0x3028), (0x12dda3a8u));
L_12dc2b2f:;
  /* 12dc2b2f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12dc2b35 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc2b36 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12dc2b3c push edx */
  push32((uint32_t)(EDX));
  /* 12dc2b3d call 0x12dc68a0 */
  push32(0x12dc2b42u); f_12dc68a0();
  /* 12dc2b42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc2b45:;
  /* 12dc2b45 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12dc2b4b push eax */
  push32((uint32_t)(EAX));
  /* 12dc2b4c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12dc2b52 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc2b53 call 0x12dc68b0 */
  push32(0x12dc2b58u); f_12dc68b0();
  /* 12dc2b58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2b5b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2b5f jne 0x12dc2b9a */
  if (!C.zf) goto L_12dc2b9a;
  /* 12dc2b61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc2b64 mov eax, dword ptr [edx*4 + 0x12ddda38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12ddda38)));
  /* 12dc2b6b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12dc2b6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc2b70 je 0x12dc2b86 */
  if (C.zf) goto L_12dc2b86;
  /* 12dc2b72 push 0x12dda3a4 */
  push32((uint32_t)(0x12dda3a4u));
  /* 12dc2b77 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12dc2b7d push ecx */
  push32((uint32_t)(ECX));
  /* 12dc2b7e call 0x12dc68b0 */
  push32(0x12dc2b83u); f_12dc68b0();
  /* 12dc2b83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc2b86:;
  /* 12dc2b86 push 0x12dda3a0 */
  push32((uint32_t)(0x12dda3a0u));
  /* 12dc2b8b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12dc2b91 push edx */
  push32((uint32_t)(EDX));
  /* 12dc2b92 call 0x12dc68b0 */
  push32(0x12dc2b97u); f_12dc68b0();
  /* 12dc2b97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc2b9a:;
  /* 12dc2b9a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2b9e je 0x12dc2be2 */
  if (C.zf) goto L_12dc2be2;
  /* 12dc2ba0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12dc2ba6 push eax */
  push32((uint32_t)(EAX));
  /* 12dc2ba7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc2baa push ecx */
  push32((uint32_t)(ECX));
  /* 12dc2bab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc2bae push edx */
  push32((uint32_t)(EDX));
  /* 12dc2baf push 0x12dda394 */
  push32((uint32_t)(0x12dda394u));
  /* 12dc2bb4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12dc2bb9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12dc2bbf push eax */
  push32((uint32_t)(EAX));
  /* 12dc2bc0 call 0x12dc67a0 */
  push32(0x12dc2bc5u); f_12dc67a0();
  /* 12dc2bc5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2bc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc2bca jge 0x12dc2be0 */
  if ((C.sf==C.of)) goto L_12dc2be0;
  /* 12dc2bcc push 0x12dda3d0 */
  push32((uint32_t)(0x12dda3d0u));
  /* 12dc2bd1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12dc2bd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc2bd8 call 0x12dc68a0 */
  push32(0x12dc2bddu); f_12dc68a0();
  /* 12dc2bdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc2be0:;
  /* 12dc2be0 jmp 0x12dc2bf8 */
  goto L_12dc2bf8;
L_12dc2be2:;
  /* 12dc2be2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12dc2be8 push edx */
  push32((uint32_t)(EDX));
  /* 12dc2be9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12dc2bef push eax */
  push32((uint32_t)(EAX));
  /* 12dc2bf0 call 0x12dc68a0 */
  push32(0x12dc2bf5u); f_12dc68a0();
  /* 12dc2bf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc2bf8:;
  /* 12dc2bf8 cmp dword ptr [0x12de1060], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12de1060))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2bff je 0x12dc2c3c */
  if (C.zf) goto L_12dc2c3c;
  /* 12dc2c01 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12dc2c07 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc2c08 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12dc2c0e push edx */
  push32((uint32_t)(EDX));
  /* 12dc2c0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc2c12 push eax */
  push32((uint32_t)(EAX));
  /* 12dc2c13 call dword ptr [0x12de1060] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de1060))), 0x12dc2c19u);
  /* 12dc2c19 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2c1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc2c1e je 0x12dc2c3c */
  if (C.zf) goto L_12dc2c3c;
  /* 12dc2c20 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2c24 jne 0x12dc2c31 */
  if (!C.zf) goto L_12dc2c31;
  /* 12dc2c26 push 0x12ddda34 */
  push32((uint32_t)(0x12ddda34u));
  /* 12dc2c2b call dword ptr [0x12de2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2344))), 0x12dc2c31u);
L_12dc2c31:;
  /* 12dc2c31 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12dc2c37 jmp 0x12dc2d3b */
  goto L_12dc2d3b;
L_12dc2c3c:;
  /* 12dc2c3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc2c3f mov edx, dword ptr [ecx*4 + 0x12ddda38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ddda38)));
  /* 12dc2c46 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12dc2c49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc2c4b je 0x12dc2c8b */
  if (C.zf) goto L_12dc2c8b;
  /* 12dc2c4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc2c50 cmp dword ptr [eax*4 + 0x12ddda44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12ddda44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2c58 je 0x12dc2c8b */
  if (C.zf) goto L_12dc2c8b;
  /* 12dc2c5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc2c5c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12dc2c62 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc2c63 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12dc2c69 push edx */
  push32((uint32_t)(EDX));
  /* 12dc2c6a call 0x12dc6720 */
  push32(0x12dc2c6fu); f_12dc6720();
  /* 12dc2c6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2c72 push eax */
  push32((uint32_t)(EAX));
  /* 12dc2c73 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12dc2c79 push eax */
  push32((uint32_t)(EAX));
  /* 12dc2c7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc2c7d mov edx, dword ptr [ecx*4 + 0x12ddda44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ddda44)));
  /* 12dc2c84 push edx */
  push32((uint32_t)(EDX));
  /* 12dc2c85 call dword ptr [0x12de2340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2340))), 0x12dc2c8bu);
L_12dc2c8b:;
  /* 12dc2c8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc2c8e mov ecx, dword ptr [eax*4 + 0x12ddda38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12ddda38)));
  /* 12dc2c95 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12dc2c98 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc2c9a je 0x12dc2ca9 */
  if (C.zf) goto L_12dc2ca9;
  /* 12dc2c9c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12dc2ca2 push edx */
  push32((uint32_t)(EDX));
  /* 12dc2ca3 call dword ptr [0x12de2348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2348))), 0x12dc2ca9u);
L_12dc2ca9:;
  /* 12dc2ca9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc2cac mov ecx, dword ptr [eax*4 + 0x12ddda38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12ddda38)));
  /* 12dc2cb3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12dc2cb6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc2cb8 je 0x12dc2d28 */
  if (C.zf) goto L_12dc2d28;
  /* 12dc2cba cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2cbe je 0x12dc2cdd */
  if (C.zf) goto L_12dc2cdd;
  /* 12dc2cc0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12dc2cc2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12dc2cc8 push edx */
  push32((uint32_t)(EDX));
  /* 12dc2cc9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc2ccc push eax */
  push32((uint32_t)(EAX));
  /* 12dc2ccd call 0x12dc6430 */
  push32(0x12dc2cd2u); f_12dc6430();
  /* 12dc2cd2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2cd5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12dc2cdb jmp 0x12dc2ce7 */
  goto L_12dc2ce7;
L_12dc2cdd:;
  /* 12dc2cdd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12dc2ce7:;
  /* 12dc2ce7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12dc2ced push ecx */
  push32((uint32_t)(ECX));
  /* 12dc2cee mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc2cf1 push edx */
  push32((uint32_t)(EDX));
  /* 12dc2cf2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12dc2cf8 push eax */
  push32((uint32_t)(EAX));
  /* 12dc2cf9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc2cfc push ecx */
  push32((uint32_t)(ECX));
  /* 12dc2cfd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc2d00 push edx */
  push32((uint32_t)(EDX));
  /* 12dc2d01 call 0x12dc2d40 */
  push32(0x12dc2d06u); f_12dc2d40();
  /* 12dc2d06 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2d09 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12dc2d0f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2d13 jne 0x12dc2d20 */
  if (!C.zf) goto L_12dc2d20;
  /* 12dc2d15 push 0x12ddda34 */
  push32((uint32_t)(0x12ddda34u));
  /* 12dc2d1a call dword ptr [0x12de2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2344))), 0x12dc2d20u);
L_12dc2d20:;
  /* 12dc2d20 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12dc2d26 jmp 0x12dc2d3b */
  goto L_12dc2d3b;
L_12dc2d28:;
  /* 12dc2d28 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2d2c jne 0x12dc2d39 */
  if (!C.zf) goto L_12dc2d39;
  /* 12dc2d2e push 0x12ddda34 */
  push32((uint32_t)(0x12ddda34u));
  /* 12dc2d33 call dword ptr [0x12de2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2344))), 0x12dc2d39u);
L_12dc2d39:;
  /* 12dc2d39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dc2d3b:;
  /* 12dc2d3b pop edi */
  EDI = (pop32());
  /* 12dc2d3c mov esp, ebp */
  ESP = (EBP);
  /* 12dc2d3e pop ebp */
  EBP = (pop32());
  /* 12dc2d3f ret  */
  ESPCHK(0x12dc29b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d40 @ 0x12dc2d40 (780 bytes, 197 insns) */
void f_12dc2d40(void) {
  FTRACE(0x12dc2d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc2d40 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc2d41 mov ebp, esp */
  EBP = (ESP);
  /* 12dc2d43 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12dc2d48 call 0x12dc6a90 */
  push32(0x12dc2d4du); f_12dc6a90();
L_12dc2d4d:;
  /* 12dc2d4d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2d51 jne 0x12dc2d78 */
  if (!C.zf) goto L_12dc2d78;
  /* 12dc2d53 push 0x12dda58c */
  push32((uint32_t)(0x12dda58cu));
  /* 12dc2d58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc2d5a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12dc2d5f push 0x12dda580 */
  push32((uint32_t)(0x12dda580u));
  /* 12dc2d64 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc2d66 call 0x12dc29b0 */
  push32(0x12dc2d6bu); f_12dc29b0();
  /* 12dc2d6b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2d6e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2d71 jne 0x12dc2d78 */
  if (!C.zf) goto L_12dc2d78;
  /* 12dc2d73 call 0x12dc28a0 */
  push32(0x12dc2d78u); f_12dc28a0();
L_12dc2d78:;
  /* 12dc2d78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc2d7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc2d7c jne 0x12dc2d4d */
  if (!C.zf) goto L_12dc2d4d;
  /* 12dc2d7e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12dc2d83 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12dc2d89 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc2d8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc2d8c call dword ptr [0x12de2358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2358))), 0x12dc2d92u);
  /* 12dc2d92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc2d94 jne 0x12dc2daa */
  if (!C.zf) goto L_12dc2daa;
  /* 12dc2d96 push 0x12dda568 */
  push32((uint32_t)(0x12dda568u));
  /* 12dc2d9b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12dc2da1 push edx */
  push32((uint32_t)(EDX));
  /* 12dc2da2 call 0x12dc68a0 */
  push32(0x12dc2da7u); f_12dc68a0();
  /* 12dc2da7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc2daa:;
  /* 12dc2daa lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12dc2db0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc2db3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc2db6 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc2db7 call 0x12dc6720 */
  push32(0x12dc2dbcu); f_12dc6720();
  /* 12dc2dbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2dbf cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2dc2 jbe 0x12dc2ded */
  if ((C.cf||C.zf)) goto L_12dc2ded;
  /* 12dc2dc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc2dc7 push edx */
  push32((uint32_t)(EDX));
  /* 12dc2dc8 call 0x12dc6720 */
  push32(0x12dc2dcdu); f_12dc6720();
  /* 12dc2dcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2dd0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc2dd3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12dc2dd7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dc2dda push 3 */
  push32((uint32_t)(0x3u));
  /* 12dc2ddc push 0x12dda564 */
  push32((uint32_t)(0x12dda564u));
  /* 12dc2de1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc2de4 push eax */
  push32((uint32_t)(EAX));
  /* 12dc2de5 call 0x12dc7110 */
  push32(0x12dc2deau); f_12dc7110();
  /* 12dc2dea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc2ded:;
  /* 12dc2ded mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc2df0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12dc2df6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2dfd je 0x12dc2e48 */
  if (C.zf) goto L_12dc2e48;
  /* 12dc2dff mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12dc2e05 push edx */
  push32((uint32_t)(EDX));
  /* 12dc2e06 call 0x12dc6720 */
  push32(0x12dc2e0bu); f_12dc6720();
  /* 12dc2e0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2e0e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2e11 jbe 0x12dc2e48 */
  if ((C.cf||C.zf)) goto L_12dc2e48;
  /* 12dc2e13 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12dc2e19 push eax */
  push32((uint32_t)(EAX));
  /* 12dc2e1a call 0x12dc6720 */
  push32(0x12dc2e1fu); f_12dc6720();
  /* 12dc2e1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2e22 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12dc2e28 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12dc2e2c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12dc2e32 push 3 */
  push32((uint32_t)(0x3u));
  /* 12dc2e34 push 0x12dda564 */
  push32((uint32_t)(0x12dda564u));
  /* 12dc2e39 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12dc2e3f push eax */
  push32((uint32_t)(EAX));
  /* 12dc2e40 call 0x12dc7110 */
  push32(0x12dc2e45u); f_12dc7110();
  /* 12dc2e45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc2e48:;
  /* 12dc2e48 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2e4c jne 0x12dc2e5a */
  if (!C.zf) goto L_12dc2e5a;
  /* 12dc2e4e mov dword ptr [ebp - 0x1114], 0x12dda4f0 */
  w32((uint32_t)(EBP + -0x1114), (0x12dda4f0u));
  /* 12dc2e58 jmp 0x12dc2e64 */
  goto L_12dc2e64;
L_12dc2e5a:;
  /* 12dc2e5a mov dword ptr [ebp - 0x1114], 0x12dda290 */
  w32((uint32_t)(EBP + -0x1114), (0x12dda290u));
L_12dc2e64:;
  /* 12dc2e64 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc2e67 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dc2e6a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc2e6c je 0x12dc2e79 */
  if (C.zf) goto L_12dc2e79;
  /* 12dc2e6e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc2e71 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12dc2e77 jmp 0x12dc2e83 */
  goto L_12dc2e83;
L_12dc2e79:;
  /* 12dc2e79 mov dword ptr [ebp - 0x1118], 0x12dda290 */
  w32((uint32_t)(EBP + -0x1118), (0x12dda290u));
L_12dc2e83:;
  /* 12dc2e83 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc2e86 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dc2e89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc2e8b je 0x12dc2e9f */
  if (C.zf) goto L_12dc2e9f;
  /* 12dc2e8d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2e91 jne 0x12dc2e9f */
  if (!C.zf) goto L_12dc2e9f;
  /* 12dc2e93 mov dword ptr [ebp - 0x111c], 0x12dda4e0 */
  w32((uint32_t)(EBP + -0x111c), (0x12dda4e0u));
  /* 12dc2e9d jmp 0x12dc2ea9 */
  goto L_12dc2ea9;
L_12dc2e9f:;
  /* 12dc2e9f mov dword ptr [ebp - 0x111c], 0x12dda290 */
  w32((uint32_t)(EBP + -0x111c), (0x12dda290u));
L_12dc2ea9:;
  /* 12dc2ea9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc2eac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dc2eaf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc2eb1 je 0x12dc2ebf */
  if (C.zf) goto L_12dc2ebf;
  /* 12dc2eb3 mov dword ptr [ebp - 0x1120], 0x12dda4dc */
  w32((uint32_t)(EBP + -0x1120), (0x12dda4dcu));
  /* 12dc2ebd jmp 0x12dc2ec9 */
  goto L_12dc2ec9;
L_12dc2ebf:;
  /* 12dc2ebf mov dword ptr [ebp - 0x1120], 0x12dda290 */
  w32((uint32_t)(EBP + -0x1120), (0x12dda290u));
L_12dc2ec9:;
  /* 12dc2ec9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2ecd je 0x12dc2eda */
  if (C.zf) goto L_12dc2eda;
  /* 12dc2ecf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc2ed2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12dc2ed8 jmp 0x12dc2ee4 */
  goto L_12dc2ee4;
L_12dc2eda:;
  /* 12dc2eda mov dword ptr [ebp - 0x1124], 0x12dda290 */
  w32((uint32_t)(EBP + -0x1124), (0x12dda290u));
L_12dc2ee4:;
  /* 12dc2ee4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2ee8 je 0x12dc2ef6 */
  if (C.zf) goto L_12dc2ef6;
  /* 12dc2eea mov dword ptr [ebp - 0x1128], 0x12dda4d4 */
  w32((uint32_t)(EBP + -0x1128), (0x12dda4d4u));
  /* 12dc2ef4 jmp 0x12dc2f00 */
  goto L_12dc2f00;
L_12dc2ef6:;
  /* 12dc2ef6 mov dword ptr [ebp - 0x1128], 0x12dda290 */
  w32((uint32_t)(EBP + -0x1128), (0x12dda290u));
L_12dc2f00:;
  /* 12dc2f00 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2f04 je 0x12dc2f11 */
  if (C.zf) goto L_12dc2f11;
  /* 12dc2f06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc2f09 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 12dc2f0f jmp 0x12dc2f1b */
  goto L_12dc2f1b;
L_12dc2f11:;
  /* 12dc2f11 mov dword ptr [ebp - 0x112c], 0x12dda290 */
  w32((uint32_t)(EBP + -0x112c), (0x12dda290u));
L_12dc2f1b:;
  /* 12dc2f1b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2f1f je 0x12dc2f2d */
  if (C.zf) goto L_12dc2f2d;
  /* 12dc2f21 mov dword ptr [ebp - 0x1130], 0x12dda4cc */
  w32((uint32_t)(EBP + -0x1130), (0x12dda4ccu));
  /* 12dc2f2b jmp 0x12dc2f37 */
  goto L_12dc2f37;
L_12dc2f2d:;
  /* 12dc2f2d mov dword ptr [ebp - 0x1130], 0x12dda290 */
  w32((uint32_t)(EBP + -0x1130), (0x12dda290u));
L_12dc2f37:;
  /* 12dc2f37 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2f3e je 0x12dc2f4e */
  if (C.zf) goto L_12dc2f4e;
  /* 12dc2f40 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12dc2f46 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 12dc2f4c jmp 0x12dc2f58 */
  goto L_12dc2f58;
L_12dc2f4e:;
  /* 12dc2f4e mov dword ptr [ebp - 0x1134], 0x12dda290 */
  w32((uint32_t)(EBP + -0x1134), (0x12dda290u));
L_12dc2f58:;
  /* 12dc2f58 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc2f5f je 0x12dc2f6d */
  if (C.zf) goto L_12dc2f6d;
  /* 12dc2f61 mov dword ptr [ebp - 0x1138], 0x12dda4c0 */
  w32((uint32_t)(EBP + -0x1138), (0x12dda4c0u));
  /* 12dc2f6b jmp 0x12dc2f77 */
  goto L_12dc2f77;
L_12dc2f6d:;
  /* 12dc2f6d mov dword ptr [ebp - 0x1138], 0x12dda290 */
  w32((uint32_t)(EBP + -0x1138), (0x12dda290u));
L_12dc2f77:;
  /* 12dc2f77 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 12dc2f7d push edx */
  push32((uint32_t)(EDX));
  /* 12dc2f7e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12dc2f84 push eax */
  push32((uint32_t)(EAX));
  /* 12dc2f85 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 12dc2f8b push ecx */
  push32((uint32_t)(ECX));
  /* 12dc2f8c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12dc2f92 push edx */
  push32((uint32_t)(EDX));
  /* 12dc2f93 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12dc2f99 push eax */
  push32((uint32_t)(EAX));
  /* 12dc2f9a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12dc2fa0 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc2fa1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12dc2fa7 push edx */
  push32((uint32_t)(EDX));
  /* 12dc2fa8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 12dc2fae push eax */
  push32((uint32_t)(EAX));
  /* 12dc2faf mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12dc2fb5 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc2fb6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 12dc2fbc push edx */
  push32((uint32_t)(EDX));
  /* 12dc2fbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc2fc0 push eax */
  push32((uint32_t)(EAX));
  /* 12dc2fc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc2fc4 mov edx, dword ptr [ecx*4 + 0x12ddda50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ddda50)));
  /* 12dc2fcb push edx */
  push32((uint32_t)(EDX));
  /* 12dc2fcc push 0x12dda46c */
  push32((uint32_t)(0x12dda46cu));
  /* 12dc2fd1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12dc2fd6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 12dc2fdc push eax */
  push32((uint32_t)(EAX));
  /* 12dc2fdd call 0x12dc67a0 */
  push32(0x12dc2fe2u); f_12dc67a0();
  /* 12dc2fe2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc2fe5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc2fe7 jge 0x12dc2ffd */
  if ((C.sf==C.of)) goto L_12dc2ffd;
  /* 12dc2fe9 push 0x12dda3d0 */
  push32((uint32_t)(0x12dda3d0u));
  /* 12dc2fee lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12dc2ff4 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc2ff5 call 0x12dc68a0 */
  push32(0x12dc2ffau); f_12dc68a0();
  /* 12dc2ffa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc2ffd:;
  /* 12dc2ffd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12dc3002 push 0x12dda448 */
  push32((uint32_t)(0x12dda448u));
  /* 12dc3007 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 12dc300d push edx */
  push32((uint32_t)(EDX));
  /* 12dc300e call 0x12dc7050 */
  push32(0x12dc3013u); f_12dc7050();
  /* 12dc3013 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3016 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 12dc301c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3023 jne 0x12dc3036 */
  if (!C.zf) goto L_12dc3036;
  /* 12dc3025 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12dc3027 call 0x12dc6d90 */
  push32(0x12dc302cu); f_12dc6d90();
  /* 12dc302c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc302f push 3 */
  push32((uint32_t)(0x3u));
  /* 12dc3031 call 0x12dc30b0 */
  push32(0x12dc3036u); f_12dc30b0();
L_12dc3036:;
  /* 12dc3036 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc303d jne 0x12dc3046 */
  if (!C.zf) goto L_12dc3046;
  /* 12dc303f mov eax, 1 */
  EAX = (0x1u);
  /* 12dc3044 jmp 0x12dc3048 */
  goto L_12dc3048;
L_12dc3046:;
  /* 12dc3046 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dc3048:;
  /* 12dc3048 mov esp, ebp */
  ESP = (EBP);
  /* 12dc304a pop ebp */
  EBP = (pop32());
  /* 12dc304b ret  */
  ESPCHK(0x12dc2d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003050 @ 0x12dc3050 (56 bytes, 15 insns) */
void f_12dc3050(void) {
  FTRACE(0x12dc3050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc3050 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc3051 mov ebp, esp */
  EBP = (ESP);
  /* 12dc3053 cmp dword ptr [0x12de105c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12de105c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc305a je 0x12dc3062 */
  if (C.zf) goto L_12dc3062;
  /* 12dc305c call dword ptr [0x12de105c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de105c))), 0x12dc3062u);
L_12dc3062:;
  /* 12dc3062 push 0x12ddd418 */
  push32((uint32_t)(0x12ddd418u));
  /* 12dc3067 push 0x12ddd208 */
  push32((uint32_t)(0x12ddd208u));
  /* 12dc306c call 0x12dc3220 */
  push32(0x12dc3071u); f_12dc3220();
  /* 12dc3071 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3074 push 0x12ddd104 */
  push32((uint32_t)(0x12ddd104u));
  /* 12dc3079 push 0x12ddd000 */
  push32((uint32_t)(0x12ddd000u));
  /* 12dc307e call 0x12dc3220 */
  push32(0x12dc3083u); f_12dc3220();
  /* 12dc3083 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3086 pop ebp */
  EBP = (pop32());
  /* 12dc3087 ret  */
  ESPCHK(0x12dc3050u, _esp0);
  ESP += 4; return;
}

/* FUN_10003090 @ 0x12dc3090 (21 bytes, 10 insns) */
void f_12dc3090(void) {
  FTRACE(0x12dc3090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc3090 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc3091 mov ebp, esp */
  EBP = (ESP);
  /* 12dc3093 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3095 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3097 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc309a push eax */
  push32((uint32_t)(EAX));
  /* 12dc309b call 0x12dc3110 */
  push32(0x12dc30a0u); f_12dc3110();
  /* 12dc30a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc30a3 pop ebp */
  EBP = (pop32());
  /* 12dc30a4 ret  */
  ESPCHK(0x12dc3090u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12dc30b0 (21 bytes, 10 insns) */
void f_12dc30b0(void) {
  FTRACE(0x12dc30b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc30b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc30b1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc30b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc30b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc30b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc30ba push eax */
  push32((uint32_t)(EAX));
  /* 12dc30bb call 0x12dc3110 */
  push32(0x12dc30c0u); f_12dc3110();
  /* 12dc30c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc30c3 pop ebp */
  EBP = (pop32());
  /* 12dc30c4 ret  */
  ESPCHK(0x12dc30b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100030d0 @ 0x12dc30d0 (19 bytes, 9 insns) */
void f_12dc30d0(void) {
  FTRACE(0x12dc30d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc30d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc30d1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc30d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc30d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc30d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc30d9 call 0x12dc3110 */
  push32(0x12dc30deu); f_12dc3110();
  /* 12dc30de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc30e1 pop ebp */
  EBP = (pop32());
  /* 12dc30e2 ret  */
  ESPCHK(0x12dc30d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100030f0 @ 0x12dc30f0 (19 bytes, 9 insns) */
void f_12dc30f0(void) {
  FTRACE(0x12dc30f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc30f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc30f1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc30f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc30f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc30f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc30f9 call 0x12dc3110 */
  push32(0x12dc30feu); f_12dc3110();
  /* 12dc30fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3101 pop ebp */
  EBP = (pop32());
  /* 12dc3102 ret  */
  ESPCHK(0x12dc30f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003110 @ 0x12dc3110 (227 bytes, 61 insns) */
void f_12dc3110(void) {
  FTRACE(0x12dc3110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc3110 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc3111 mov ebp, esp */
  EBP = (ESP);
  /* 12dc3113 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3114 call 0x12dc3200 */
  push32(0x12dc3119u); f_12dc3200();
  /* 12dc3119 cmp dword ptr [0x12ddf570], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf570))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3120 jne 0x12dc3133 */
  if (!C.zf) goto L_12dc3133;
  /* 12dc3122 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3125 push eax */
  push32((uint32_t)(EAX));
  /* 12dc3126 call dword ptr [0x12de2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2364))), 0x12dc312cu);
  /* 12dc312c push eax */
  push32((uint32_t)(EAX));
  /* 12dc312d call dword ptr [0x12de2360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2360))), 0x12dc3133u);
L_12dc3133:;
  /* 12dc3133 mov dword ptr [0x12ddf56c], 1 */
  w32((uint32_t)(0x12ddf56c), (0x1u));
  /* 12dc313d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12dc3140 mov byte ptr [0x12ddf568], cl */
  w8((uint32_t)(0x12ddf568), (CL));
  /* 12dc3146 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc314a jne 0x12dc3193 */
  if (!C.zf) goto L_12dc3193;
  /* 12dc314c cmp dword ptr [0x12de1058], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12de1058))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3153 je 0x12dc3181 */
  if (C.zf) goto L_12dc3181;
  /* 12dc3155 mov edx, dword ptr [0x12de1054] */
  EDX = (r32((uint32_t)(0x12de1054)));
  /* 12dc315b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12dc315e:;
  /* 12dc315e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3161 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc3164 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc3167 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc316a cmp ecx, dword ptr [0x12de1058] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12de1058))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3170 jb 0x12dc3181 */
  if (C.cf) goto L_12dc3181;
  /* 12dc3172 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3175 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3178 je 0x12dc317f */
  if (C.zf) goto L_12dc317f;
  /* 12dc317a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc317d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x12dc317fu);
L_12dc317f:;
  /* 12dc317f jmp 0x12dc315e */
  goto L_12dc315e;
L_12dc3181:;
  /* 12dc3181 push 0x12ddd724 */
  push32((uint32_t)(0x12ddd724u));
  /* 12dc3186 push 0x12ddd51c */
  push32((uint32_t)(0x12ddd51cu));
  /* 12dc318b call 0x12dc3220 */
  push32(0x12dc3190u); f_12dc3220();
  /* 12dc3190 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc3193:;
  /* 12dc3193 push 0x12ddd92c */
  push32((uint32_t)(0x12ddd92cu));
  /* 12dc3198 push 0x12ddd828 */
  push32((uint32_t)(0x12ddd828u));
  /* 12dc319d call 0x12dc3220 */
  push32(0x12dc31a2u); f_12dc3220();
  /* 12dc31a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc31a5 cmp dword ptr [0x12ddf574], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf574))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc31ac jne 0x12dc31ce */
  if (!C.zf) goto L_12dc31ce;
  /* 12dc31ae push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12dc31b0 call 0x12dc4e00 */
  push32(0x12dc31b5u); f_12dc4e00();
  /* 12dc31b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc31b8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12dc31bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc31bd je 0x12dc31ce */
  if (C.zf) goto L_12dc31ce;
  /* 12dc31bf mov dword ptr [0x12ddf574], 1 */
  w32((uint32_t)(0x12ddf574), (0x1u));
  /* 12dc31c9 call 0x12dc5710 */
  push32(0x12dc31ceu); f_12dc5710();
L_12dc31ce:;
  /* 12dc31ce cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc31d2 je 0x12dc31db */
  if (C.zf) goto L_12dc31db;
  /* 12dc31d4 call 0x12dc3210 */
  push32(0x12dc31d9u); f_12dc3210();
  /* 12dc31d9 jmp 0x12dc31ef */
  goto L_12dc31ef;
L_12dc31db:;
  /* 12dc31db mov dword ptr [0x12ddf570], 1 */
  w32((uint32_t)(0x12ddf570), (0x1u));
  /* 12dc31e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc31e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc31e9 call dword ptr [0x12de235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de235c))), 0x12dc31efu);
L_12dc31ef:;
  /* 12dc31ef mov esp, ebp */
  ESP = (EBP);
  /* 12dc31f1 pop ebp */
  EBP = (pop32());
  /* 12dc31f2 ret  */
  ESPCHK(0x12dc3110u, _esp0);
  ESP += 4; return;
}

/* FUN_10003200 @ 0x12dc3200 (15 bytes, 7 insns) */
void f_12dc3200(void) {
  FTRACE(0x12dc3200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc3200 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc3201 mov ebp, esp */
  EBP = (ESP);
  /* 12dc3203 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12dc3205 call 0x12dc72f0 */
  push32(0x12dc320au); f_12dc72f0();
  /* 12dc320a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc320d pop ebp */
  EBP = (pop32());
  /* 12dc320e ret  */
  ESPCHK(0x12dc3200u, _esp0);
  ESP += 4; return;
}

/* FUN_10003210 @ 0x12dc3210 (15 bytes, 7 insns) */
void f_12dc3210(void) {
  FTRACE(0x12dc3210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc3210 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc3211 mov ebp, esp */
  EBP = (ESP);
  /* 12dc3213 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12dc3215 call 0x12dc7390 */
  push32(0x12dc321au); f_12dc7390();
  /* 12dc321a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc321d pop ebp */
  EBP = (pop32());
  /* 12dc321e ret  */
  ESPCHK(0x12dc3210u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12dc3220 (37 bytes, 16 insns) */
void f_12dc3220(void) {
  FTRACE(0x12dc3220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc3220 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc3221 mov ebp, esp */
  EBP = (ESP);
L_12dc3223:;
  /* 12dc3223 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3226 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3229 jae 0x12dc3243 */
  if (!C.cf) goto L_12dc3243;
  /* 12dc322b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc322e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3231 je 0x12dc3238 */
  if (C.zf) goto L_12dc3238;
  /* 12dc3233 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3236 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12dc3238u);
L_12dc3238:;
  /* 12dc3238 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc323b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc323e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12dc3241 jmp 0x12dc3223 */
  goto L_12dc3223;
L_12dc3243:;
  /* 12dc3243 pop ebp */
  EBP = (pop32());
  /* 12dc3244 ret  */
  ESPCHK(0x12dc3220u, _esp0);
  ESP += 4; return;
}

/* FUN_10003250 @ 0x12dc3250 (130 bytes, 42 insns) */
void f_12dc3250(void) {
  FTRACE(0x12dc3250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc3250 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc3251 mov ebp, esp */
  EBP = (ESP);
  /* 12dc3253 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3254 call 0x12dc7210 */
  push32(0x12dc3259u); f_12dc7210();
  /* 12dc3259 call dword ptr [0x12de2370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2370))), 0x12dc325fu);
  /* 12dc325f mov dword ptr [0x12ddda5c], eax */
  w32((uint32_t)(0x12ddda5c), (EAX));
  /* 12dc3264 cmp dword ptr [0x12ddda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12ddda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc326b jne 0x12dc3271 */
  if (!C.zf) goto L_12dc3271;
  /* 12dc326d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc326f jmp 0x12dc32ce */
  goto L_12dc32ce;
L_12dc3271:;
  /* 12dc3271 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12dc3273 push 0x12dda5a4 */
  push32((uint32_t)(0x12dda5a4u));
  /* 12dc3278 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc327a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12dc327c push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc327e call 0x12dc3d00 */
  push32(0x12dc3283u); f_12dc3d00();
  /* 12dc3283 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3286 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc3289 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc328d je 0x12dc32a4 */
  if (C.zf) goto L_12dc32a4;
  /* 12dc328f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3292 push eax */
  push32((uint32_t)(EAX));
  /* 12dc3293 mov ecx, dword ptr [0x12ddda5c] */
  ECX = (r32((uint32_t)(0x12ddda5c)));
  /* 12dc3299 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc329a call dword ptr [0x12de236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de236c))), 0x12dc32a0u);
  /* 12dc32a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc32a2 jne 0x12dc32a8 */
  if (!C.zf) goto L_12dc32a8;
L_12dc32a4:;
  /* 12dc32a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc32a6 jmp 0x12dc32ce */
  goto L_12dc32ce;
L_12dc32a8:;
  /* 12dc32a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc32ab push edx */
  push32((uint32_t)(EDX));
  /* 12dc32ac call 0x12dc3310 */
  push32(0x12dc32b1u); f_12dc3310();
  /* 12dc32b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc32b4 call dword ptr [0x12de2368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2368))), 0x12dc32bau);
  /* 12dc32ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc32bd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12dc32bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc32c2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12dc32c9 mov eax, 1 */
  EAX = (0x1u);
L_12dc32ce:;
  /* 12dc32ce mov esp, ebp */
  ESP = (EBP);
  /* 12dc32d0 pop ebp */
  EBP = (pop32());
  /* 12dc32d1 ret  */
  ESPCHK(0x12dc3250u, _esp0);
  ESP += 4; return;
}

/* FUN_100032e0 @ 0x12dc32e0 (41 bytes, 11 insns) */
void f_12dc32e0(void) {
  FTRACE(0x12dc32e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc32e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc32e1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc32e3 call 0x12dc7250 */
  push32(0x12dc32e8u); f_12dc7250();
  /* 12dc32e8 cmp dword ptr [0x12ddda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12ddda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc32ef je 0x12dc3307 */
  if (C.zf) goto L_12dc3307;
  /* 12dc32f1 mov eax, dword ptr [0x12ddda5c] */
  EAX = (r32((uint32_t)(0x12ddda5c)));
  /* 12dc32f6 push eax */
  push32((uint32_t)(EAX));
  /* 12dc32f7 call dword ptr [0x12de229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de229c))), 0x12dc32fdu);
  /* 12dc32fd mov dword ptr [0x12ddda5c], 0xffffffff */
  w32((uint32_t)(0x12ddda5c), (0xffffffffu));
L_12dc3307:;
  /* 12dc3307 pop ebp */
  EBP = (pop32());
  /* 12dc3308 ret  */
  ESPCHK(0x12dc32e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003310 @ 0x12dc3310 (25 bytes, 8 insns) */
void f_12dc3310(void) {
  FTRACE(0x12dc3310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc3310 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc3311 mov ebp, esp */
  EBP = (ESP);
  /* 12dc3313 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3316 mov dword ptr [eax + 0x50], 0x12dddc00 */
  w32((uint32_t)(EAX + 0x50), (0x12dddc00u));
  /* 12dc331d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3320 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12dc3327 pop ebp */
  EBP = (pop32());
  /* 12dc3328 ret  */
  ESPCHK(0x12dc3310u, _esp0);
  ESP += 4; return;
}

/* FUN_10003330 @ 0x12dc3330 (152 bytes, 48 insns) */
void f_12dc3330(void) {
  FTRACE(0x12dc3330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc3330 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc3331 mov ebp, esp */
  EBP = (ESP);
  /* 12dc3333 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc3336 call dword ptr [0x12de2380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2380))), 0x12dc333cu);
  /* 12dc333c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dc333f mov eax, dword ptr [0x12ddda5c] */
  EAX = (r32((uint32_t)(0x12ddda5c)));
  /* 12dc3344 push eax */
  push32((uint32_t)(EAX));
  /* 12dc3345 call dword ptr [0x12de237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de237c))), 0x12dc334bu);
  /* 12dc334b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc334e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3352 jne 0x12dc33b7 */
  if (!C.zf) goto L_12dc33b7;
  /* 12dc3354 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12dc3359 push 0x12dda5a4 */
  push32((uint32_t)(0x12dda5a4u));
  /* 12dc335e push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc3360 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12dc3362 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc3364 call 0x12dc3d00 */
  push32(0x12dc3369u); f_12dc3d00();
  /* 12dc3369 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc336c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc336f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3373 je 0x12dc33ad */
  if (C.zf) goto L_12dc33ad;
  /* 12dc3375 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3378 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3379 mov edx, dword ptr [0x12ddda5c] */
  EDX = (r32((uint32_t)(0x12ddda5c)));
  /* 12dc337f push edx */
  push32((uint32_t)(EDX));
  /* 12dc3380 call dword ptr [0x12de236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de236c))), 0x12dc3386u);
  /* 12dc3386 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc3388 je 0x12dc33ad */
  if (C.zf) goto L_12dc33ad;
  /* 12dc338a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc338d push eax */
  push32((uint32_t)(EAX));
  /* 12dc338e call 0x12dc3310 */
  push32(0x12dc3393u); f_12dc3310();
  /* 12dc3393 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3396 call dword ptr [0x12de2368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2368))), 0x12dc339cu);
  /* 12dc339c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc339f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12dc33a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc33a4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12dc33ab jmp 0x12dc33b7 */
  goto L_12dc33b7;
L_12dc33ad:;
  /* 12dc33ad push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12dc33af call 0x12dc2860 */
  push32(0x12dc33b4u); f_12dc2860();
  /* 12dc33b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc33b7:;
  /* 12dc33b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc33ba push eax */
  push32((uint32_t)(EAX));
  /* 12dc33bb call dword ptr [0x12de22a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22a0))), 0x12dc33c1u);
  /* 12dc33c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc33c4 mov esp, ebp */
  ESP = (EBP);
  /* 12dc33c6 pop ebp */
  EBP = (pop32());
  /* 12dc33c7 ret  */
  ESPCHK(0x12dc3330u, _esp0);
  ESP += 4; return;
}

/* FUN_100033d0 @ 0x12dc33d0 (263 bytes, 86 insns) */
void f_12dc33d0(void) {
  FTRACE(0x12dc33d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc33d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc33d1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc33d3 cmp dword ptr [0x12ddda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12ddda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc33da je 0x12dc34d5 */
  if (C.zf) goto L_12dc34d5;
  /* 12dc33e0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc33e4 jne 0x12dc33f5 */
  if (!C.zf) goto L_12dc33f5;
  /* 12dc33e6 mov eax, dword ptr [0x12ddda5c] */
  EAX = (r32((uint32_t)(0x12ddda5c)));
  /* 12dc33eb push eax */
  push32((uint32_t)(EAX));
  /* 12dc33ec call dword ptr [0x12de237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de237c))), 0x12dc33f2u);
  /* 12dc33f2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12dc33f5:;
  /* 12dc33f5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc33f9 je 0x12dc34c6 */
  if (C.zf) goto L_12dc34c6;
  /* 12dc33ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3402 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3406 je 0x12dc3419 */
  if (C.zf) goto L_12dc3419;
  /* 12dc3408 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc340a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc340d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12dc3410 push eax */
  push32((uint32_t)(EAX));
  /* 12dc3411 call 0x12dc4380 */
  push32(0x12dc3416u); f_12dc4380();
  /* 12dc3416 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc3419:;
  /* 12dc3419 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc341c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3420 je 0x12dc3433 */
  if (C.zf) goto L_12dc3433;
  /* 12dc3422 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc3424 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3427 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 12dc342a push eax */
  push32((uint32_t)(EAX));
  /* 12dc342b call 0x12dc4380 */
  push32(0x12dc3430u); f_12dc4380();
  /* 12dc3430 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc3433:;
  /* 12dc3433 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3436 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc343a je 0x12dc344d */
  if (C.zf) goto L_12dc344d;
  /* 12dc343c push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc343e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3441 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12dc3444 push eax */
  push32((uint32_t)(EAX));
  /* 12dc3445 call 0x12dc4380 */
  push32(0x12dc344au); f_12dc4380();
  /* 12dc344a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc344d:;
  /* 12dc344d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3450 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3454 je 0x12dc3467 */
  if (C.zf) goto L_12dc3467;
  /* 12dc3456 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc3458 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc345b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 12dc345e push eax */
  push32((uint32_t)(EAX));
  /* 12dc345f call 0x12dc4380 */
  push32(0x12dc3464u); f_12dc4380();
  /* 12dc3464 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc3467:;
  /* 12dc3467 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc346a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc346e je 0x12dc3481 */
  if (C.zf) goto L_12dc3481;
  /* 12dc3470 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc3472 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3475 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12dc3478 push eax */
  push32((uint32_t)(EAX));
  /* 12dc3479 call 0x12dc4380 */
  push32(0x12dc347eu); f_12dc4380();
  /* 12dc347e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc3481:;
  /* 12dc3481 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3484 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3488 je 0x12dc349b */
  if (C.zf) goto L_12dc349b;
  /* 12dc348a push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc348c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc348f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12dc3492 push eax */
  push32((uint32_t)(EAX));
  /* 12dc3493 call 0x12dc4380 */
  push32(0x12dc3498u); f_12dc4380();
  /* 12dc3498 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc349b:;
  /* 12dc349b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc349e cmp dword ptr [ecx + 0x50], 0x12dddc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x12dddc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc34a5 je 0x12dc34b8 */
  if (C.zf) goto L_12dc34b8;
  /* 12dc34a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc34a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc34ac mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12dc34af push eax */
  push32((uint32_t)(EAX));
  /* 12dc34b0 call 0x12dc4380 */
  push32(0x12dc34b5u); f_12dc4380();
  /* 12dc34b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc34b8:;
  /* 12dc34b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc34ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc34bd push ecx */
  push32((uint32_t)(ECX));
  /* 12dc34be call 0x12dc4380 */
  push32(0x12dc34c3u); f_12dc4380();
  /* 12dc34c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc34c6:;
  /* 12dc34c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc34c8 mov edx, dword ptr [0x12ddda5c] */
  EDX = (r32((uint32_t)(0x12ddda5c)));
  /* 12dc34ce push edx */
  push32((uint32_t)(EDX));
  /* 12dc34cf call dword ptr [0x12de236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de236c))), 0x12dc34d5u);
L_12dc34d5:;
  /* 12dc34d5 pop ebp */
  EBP = (pop32());
  /* 12dc34d6 ret  */
  ESPCHK(0x12dc33d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100034e0 @ 0x12dc34e0 (11 bytes, 5 insns) */
void f_12dc34e0(void) {
  FTRACE(0x12dc34e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc34e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc34e1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc34e3 call dword ptr [0x12de2368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2368))), 0x12dc34e9u);
  /* 12dc34e9 pop ebp */
  EBP = (pop32());
  /* 12dc34ea ret  */
  ESPCHK(0x12dc34e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100034f0 @ 0x12dc34f0 (11 bytes, 5 insns) */
void f_12dc34f0(void) {
  FTRACE(0x12dc34f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc34f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc34f1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc34f3 call dword ptr [0x12de2384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2384))), 0x12dc34f9u);
  /* 12dc34f9 pop ebp */
  EBP = (pop32());
  /* 12dc34fa ret  */
  ESPCHK(0x12dc34f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003500 @ 0x12dc3500 (804 bytes, 236 insns) */
void f_12dc3500(void) {
  FTRACE(0x12dc3500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc3500 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc3501 mov ebp, esp */
  EBP = (ESP);
  /* 12dc3503 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc3506 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 12dc350b push 0x12dda5b0 */
  push32((uint32_t)(0x12dda5b0u));
  /* 12dc3510 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc3512 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12dc3517 call 0x12dc38f0 */
  push32(0x12dc351cu); f_12dc38f0();
  /* 12dc351c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc351f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12dc3522 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3526 jne 0x12dc3532 */
  if (!C.zf) goto L_12dc3532;
  /* 12dc3528 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12dc352a call 0x12dc2860 */
  push32(0x12dc352fu); f_12dc2860();
  /* 12dc352f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc3532:;
  /* 12dc3532 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc3535 mov dword ptr [0x12de0f00], eax */
  w32((uint32_t)(0x12de0f00), (EAX));
  /* 12dc353a mov dword ptr [0x12de103c], 0x20 */
  w32((uint32_t)(0x12de103c), (0x20u));
  /* 12dc3544 jmp 0x12dc354f */
  goto L_12dc354f;
L_12dc3546:;
  /* 12dc3546 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc3549 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc354c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_12dc354f:;
  /* 12dc354f mov edx, dword ptr [0x12de0f00] */
  EDX = (r32((uint32_t)(0x12de0f00)));
  /* 12dc3555 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc355b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc355e jae 0x12dc3583 */
  if (!C.cf) goto L_12dc3583;
  /* 12dc3560 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc3563 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12dc3567 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc356a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12dc3570 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc3573 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12dc3577 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc357a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12dc3581 jmp 0x12dc3546 */
  goto L_12dc3546;
L_12dc3583:;
  /* 12dc3583 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12dc3586 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3587 call dword ptr [0x12de2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2390))), 0x12dc358du);
  /* 12dc358d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12dc3590 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dc3596 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc3598 je 0x12dc3725 */
  if (C.zf) goto L_12dc3725;
  /* 12dc359e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc35a2 je 0x12dc3725 */
  if (C.zf) goto L_12dc3725;
  /* 12dc35a8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc35ab mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dc35ad mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12dc35b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc35b3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc35b6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dc35b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc35bc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc35bf mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12dc35c2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc35c9 jge 0x12dc35d3 */
  if ((C.sf==C.of)) goto L_12dc35d3;
  /* 12dc35cb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 12dc35ce mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12dc35d1 jmp 0x12dc35da */
  goto L_12dc35da;
L_12dc35d3:;
  /* 12dc35d3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_12dc35da:;
  /* 12dc35da mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 12dc35dd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12dc35e0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12dc35e7 jmp 0x12dc35f2 */
  goto L_12dc35f2;
L_12dc35e9:;
  /* 12dc35e9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12dc35ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc35ef mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12dc35f2:;
  /* 12dc35f2 mov ecx, dword ptr [0x12de103c] */
  ECX = (r32((uint32_t)(0x12de103c)));
  /* 12dc35f8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc35fb jge 0x12dc3692 */
  if ((C.sf==C.of)) goto L_12dc3692;
  /* 12dc3601 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12dc3606 push 0x12dda5b0 */
  push32((uint32_t)(0x12dda5b0u));
  /* 12dc360b push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc360d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12dc3612 call 0x12dc38f0 */
  push32(0x12dc3617u); f_12dc38f0();
  /* 12dc3617 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc361a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12dc361d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3621 jne 0x12dc362e */
  if (!C.zf) goto L_12dc362e;
  /* 12dc3623 mov edx, dword ptr [0x12de103c] */
  EDX = (r32((uint32_t)(0x12de103c)));
  /* 12dc3629 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12dc362c jmp 0x12dc3692 */
  goto L_12dc3692;
L_12dc362e:;
  /* 12dc362e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12dc3631 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc3634 mov dword ptr [eax*4 + 0x12de0f00], ecx */
  w32((uint32_t)(EAX*4 + 0x12de0f00), (ECX));
  /* 12dc363b mov edx, dword ptr [0x12de103c] */
  EDX = (r32((uint32_t)(0x12de103c)));
  /* 12dc3641 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3644 mov dword ptr [0x12de103c], edx */
  w32((uint32_t)(0x12de103c), (EDX));
  /* 12dc364a jmp 0x12dc3655 */
  goto L_12dc3655;
L_12dc364c:;
  /* 12dc364c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc364f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3652 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12dc3655:;
  /* 12dc3655 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12dc3658 mov edx, dword ptr [ecx*4 + 0x12de0f00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12de0f00)));
  /* 12dc365f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3665 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3668 jae 0x12dc368d */
  if (!C.cf) goto L_12dc368d;
  /* 12dc366a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc366d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12dc3671 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc3674 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12dc367a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc367d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12dc3681 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc3684 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12dc368b jmp 0x12dc364c */
  goto L_12dc364c;
L_12dc368d:;
  /* 12dc368d jmp 0x12dc35e9 */
  goto L_12dc35e9;
L_12dc3692:;
  /* 12dc3692 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12dc3699 jmp 0x12dc36b6 */
  goto L_12dc36b6;
L_12dc369b:;
  /* 12dc369b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12dc369e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc36a1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12dc36a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc36a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc36aa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dc36ad mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12dc36b0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc36b3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12dc36b6:;
  /* 12dc36b6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12dc36b9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc36bc jge 0x12dc3725 */
  if ((C.sf==C.of)) goto L_12dc3725;
  /* 12dc36be mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12dc36c1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc36c4 je 0x12dc3720 */
  if (C.zf) goto L_12dc3720;
  /* 12dc36c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc36c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dc36cc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12dc36cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc36d1 je 0x12dc3720 */
  if (C.zf) goto L_12dc3720;
  /* 12dc36d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc36d6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dc36d9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12dc36dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc36de jne 0x12dc36f0 */
  if (!C.zf) goto L_12dc36f0;
  /* 12dc36e0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12dc36e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dc36e5 push edx */
  push32((uint32_t)(EDX));
  /* 12dc36e6 call dword ptr [0x12de238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de238c))), 0x12dc36ecu);
  /* 12dc36ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc36ee je 0x12dc3720 */
  if (C.zf) goto L_12dc3720;
L_12dc36f0:;
  /* 12dc36f0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12dc36f3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12dc36f6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12dc36f9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc36fc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc36ff mov edx, dword ptr [eax*4 + 0x12de0f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12de0f00)));
  /* 12dc3706 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3708 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12dc370b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc370e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12dc3711 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dc3713 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12dc3715 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc3718 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc371b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dc371d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12dc3720:;
  /* 12dc3720 jmp 0x12dc369b */
  goto L_12dc369b;
L_12dc3725:;
  /* 12dc3725 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12dc372c jmp 0x12dc3737 */
  goto L_12dc3737;
L_12dc372e:;
  /* 12dc372e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12dc3731 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3734 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12dc3737:;
  /* 12dc3737 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc373b jge 0x12dc3814 */
  if ((C.sf==C.of)) goto L_12dc3814;
  /* 12dc3741 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12dc3744 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc3747 mov edx, dword ptr [0x12de0f00] */
  EDX = (r32((uint32_t)(0x12de0f00)));
  /* 12dc374d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc374f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12dc3752 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc3755 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3758 jne 0x12dc3800 */
  if (!C.zf) goto L_12dc3800;
  /* 12dc375e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc3761 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12dc3765 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3769 jne 0x12dc3774 */
  if (!C.zf) goto L_12dc3774;
  /* 12dc376b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12dc3772 jmp 0x12dc3784 */
  goto L_12dc3784;
L_12dc3774:;
  /* 12dc3774 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12dc3777 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc377a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dc377c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc377e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3781 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12dc3784:;
  /* 12dc3784 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12dc3787 push eax */
  push32((uint32_t)(EAX));
  /* 12dc3788 call dword ptr [0x12de233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de233c))), 0x12dc378eu);
  /* 12dc378e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12dc3791 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3795 je 0x12dc37ef */
  if (C.zf) goto L_12dc37ef;
  /* 12dc3797 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12dc379a push ecx */
  push32((uint32_t)(ECX));
  /* 12dc379b call dword ptr [0x12de238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de238c))), 0x12dc37a1u);
  /* 12dc37a1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12dc37a4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc37a8 je 0x12dc37ef */
  if (C.zf) goto L_12dc37ef;
  /* 12dc37aa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc37ad mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12dc37b0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12dc37b2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12dc37b5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc37bb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc37be jne 0x12dc37d0 */
  if (!C.zf) goto L_12dc37d0;
  /* 12dc37c0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc37c3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12dc37c6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12dc37c8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc37cb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 12dc37ce jmp 0x12dc37ed */
  goto L_12dc37ed;
L_12dc37d0:;
  /* 12dc37d0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12dc37d3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dc37d9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc37dc jne 0x12dc37ed */
  if (!C.zf) goto L_12dc37ed;
  /* 12dc37de mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc37e1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12dc37e4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12dc37e7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc37ea mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12dc37ed:;
  /* 12dc37ed jmp 0x12dc37fe */
  goto L_12dc37fe;
L_12dc37ef:;
  /* 12dc37ef mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc37f2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12dc37f5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12dc37f8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc37fb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12dc37fe:;
  /* 12dc37fe jmp 0x12dc380f */
  goto L_12dc380f;
L_12dc3800:;
  /* 12dc3800 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc3803 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12dc3806 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12dc3809 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc380c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12dc380f:;
  /* 12dc380f jmp 0x12dc372e */
  goto L_12dc372e;
L_12dc3814:;
  /* 12dc3814 mov eax, dword ptr [0x12de103c] */
  EAX = (r32((uint32_t)(0x12de103c)));
  /* 12dc3819 push eax */
  push32((uint32_t)(EAX));
  /* 12dc381a call dword ptr [0x12de2388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2388))), 0x12dc3820u);
  /* 12dc3820 mov esp, ebp */
  ESP = (EBP);
  /* 12dc3822 pop ebp */
  EBP = (pop32());
  /* 12dc3823 ret  */
  ESPCHK(0x12dc3500u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12dc3830 (155 bytes, 45 insns) */
void f_12dc3830(void) {
  FTRACE(0x12dc3830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc3830 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc3831 mov ebp, esp */
  EBP = (ESP);
  /* 12dc3833 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc3836 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12dc383d jmp 0x12dc3848 */
  goto L_12dc3848;
L_12dc383f:;
  /* 12dc383f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc3842 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3845 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12dc3848:;
  /* 12dc3848 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc384c jge 0x12dc38c7 */
  if ((C.sf==C.of)) goto L_12dc38c7;
  /* 12dc384e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc3851 cmp dword ptr [ecx*4 + 0x12de0f00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12de0f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3859 je 0x12dc38c2 */
  if (C.zf) goto L_12dc38c2;
  /* 12dc385b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc385e mov eax, dword ptr [edx*4 + 0x12de0f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12de0f00)));
  /* 12dc3865 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc3868 jmp 0x12dc3873 */
  goto L_12dc3873;
L_12dc386a:;
  /* 12dc386a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc386d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3870 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dc3873:;
  /* 12dc3873 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc3876 mov eax, dword ptr [edx*4 + 0x12de0f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12de0f00)));
  /* 12dc387d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3882 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3885 jae 0x12dc389f */
  if (!C.cf) goto L_12dc389f;
  /* 12dc3887 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc388a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc388e je 0x12dc389d */
  if (C.zf) goto L_12dc389d;
  /* 12dc3890 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3893 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3896 push edx */
  push32((uint32_t)(EDX));
  /* 12dc3897 call dword ptr [0x12de2394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2394))), 0x12dc389du);
L_12dc389d:;
  /* 12dc389d jmp 0x12dc386a */
  goto L_12dc386a;
L_12dc389f:;
  /* 12dc389f push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc38a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc38a4 mov ecx, dword ptr [eax*4 + 0x12de0f00] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12de0f00)));
  /* 12dc38ab push ecx */
  push32((uint32_t)(ECX));
  /* 12dc38ac call 0x12dc4380 */
  push32(0x12dc38b1u); f_12dc4380();
  /* 12dc38b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc38b4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc38b7 mov dword ptr [edx*4 + 0x12de0f00], 0 */
  w32((uint32_t)(EDX*4 + 0x12de0f00), (0x0u));
L_12dc38c2:;
  /* 12dc38c2 jmp 0x12dc383f */
  goto L_12dc383f;
L_12dc38c7:;
  /* 12dc38c7 mov esp, ebp */
  ESP = (EBP);
  /* 12dc38c9 pop ebp */
  EBP = (pop32());
  /* 12dc38ca ret  */
  ESPCHK(0x12dc3830u, _esp0);
  ESP += 4; return;
}

/* FUN_100038d0 @ 0x12dc38d0 (29 bytes, 13 insns) */
void f_12dc38d0(void) {
  FTRACE(0x12dc38d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc38d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc38d1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc38d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc38d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc38d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc38d9 mov eax, dword ptr [0x12ddf718] */
  EAX = (r32((uint32_t)(0x12ddf718)));
  /* 12dc38de push eax */
  push32((uint32_t)(EAX));
  /* 12dc38df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc38e2 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc38e3 call 0x12dc3940 */
  push32(0x12dc38e8u); f_12dc3940();
  /* 12dc38e8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc38eb pop ebp */
  EBP = (pop32());
  /* 12dc38ec ret  */
  ESPCHK(0x12dc38d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100038f0 @ 0x12dc38f0 (35 bytes, 16 insns) */
void f_12dc38f0(void) {
  FTRACE(0x12dc38f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc38f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc38f1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc38f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc38f6 push eax */
  push32((uint32_t)(EAX));
  /* 12dc38f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc38fa push ecx */
  push32((uint32_t)(ECX));
  /* 12dc38fb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc38fe push edx */
  push32((uint32_t)(EDX));
  /* 12dc38ff mov eax, dword ptr [0x12ddf718] */
  EAX = (r32((uint32_t)(0x12ddf718)));
  /* 12dc3904 push eax */
  push32((uint32_t)(EAX));
  /* 12dc3905 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3908 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3909 call 0x12dc3940 */
  push32(0x12dc390eu); f_12dc3940();
  /* 12dc390e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3911 pop ebp */
  EBP = (pop32());
  /* 12dc3912 ret  */
  ESPCHK(0x12dc38f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003920 @ 0x12dc3920 (27 bytes, 13 insns) */
void f_12dc3920(void) {
  FTRACE(0x12dc3920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc3920 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc3921 mov ebp, esp */
  EBP = (ESP);
  /* 12dc3923 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3925 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3927 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc3929 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc392c push eax */
  push32((uint32_t)(EAX));
  /* 12dc392d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3930 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3931 call 0x12dc3940 */
  push32(0x12dc3936u); f_12dc3940();
  /* 12dc3936 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3939 pop ebp */
  EBP = (pop32());
  /* 12dc393a ret  */
  ESPCHK(0x12dc3920u, _esp0);
  ESP += 4; return;
}

/* FUN_10003940 @ 0x12dc3940 (94 bytes, 38 insns) */
void f_12dc3940(void) {
  FTRACE(0x12dc3940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc3940 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc3941 mov ebp, esp */
  EBP = (ESP);
  /* 12dc3943 push ecx */
  push32((uint32_t)(ECX));
L_12dc3944:;
  /* 12dc3944 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc3946 call 0x12dc72f0 */
  push32(0x12dc394bu); f_12dc72f0();
  /* 12dc394b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc394e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc3951 push eax */
  push32((uint32_t)(EAX));
  /* 12dc3952 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc3955 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3956 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc3959 push edx */
  push32((uint32_t)(EDX));
  /* 12dc395a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc395d push eax */
  push32((uint32_t)(EAX));
  /* 12dc395e call 0x12dc39c0 */
  push32(0x12dc3963u); f_12dc39c0();
  /* 12dc3963 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3966 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc3969 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc396b call 0x12dc7390 */
  push32(0x12dc3970u); f_12dc7390();
  /* 12dc3970 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3973 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3977 jne 0x12dc397f */
  if (!C.zf) goto L_12dc397f;
  /* 12dc3979 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc397d jne 0x12dc3984 */
  if (!C.zf) goto L_12dc3984;
L_12dc397f:;
  /* 12dc397f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3982 jmp 0x12dc399a */
  goto L_12dc399a;
L_12dc3984:;
  /* 12dc3984 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3987 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3988 call 0x12dc7630 */
  push32(0x12dc398du); f_12dc7630();
  /* 12dc398d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3990 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc3992 jne 0x12dc3998 */
  if (!C.zf) goto L_12dc3998;
  /* 12dc3994 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc3996 jmp 0x12dc399a */
  goto L_12dc399a;
L_12dc3998:;
  /* 12dc3998 jmp 0x12dc3944 */
  goto L_12dc3944;
L_12dc399a:;
  /* 12dc399a mov esp, ebp */
  ESP = (EBP);
  /* 12dc399c pop ebp */
  EBP = (pop32());
  /* 12dc399d ret  */
  ESPCHK(0x12dc3940u, _esp0);
  ESP += 4; return;
}

/* FUN_100039a0 @ 0x12dc39a0 (23 bytes, 11 insns) */
void f_12dc39a0(void) {
  FTRACE(0x12dc39a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc39a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc39a1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc39a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc39a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc39a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc39a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc39ac push eax */
  push32((uint32_t)(EAX));
  /* 12dc39ad call 0x12dc39c0 */
  push32(0x12dc39b2u); f_12dc39c0();
  /* 12dc39b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc39b5 pop ebp */
  EBP = (pop32());
  /* 12dc39b6 ret  */
  ESPCHK(0x12dc39a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100039c0 @ 0x12dc39c0 (787 bytes, 254 insns) */
void f_12dc39c0(void) {
  FTRACE(0x12dc39c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc39c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc39c1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc39c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc39c6 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc39c7 push esi */
  push32((uint32_t)(ESI));
  /* 12dc39c8 push edi */
  push32((uint32_t)(EDI));
  /* 12dc39c9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12dc39d0 mov eax, dword ptr [0x12ddda84] */
  EAX = (r32((uint32_t)(0x12ddda84)));
  /* 12dc39d5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12dc39d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc39da je 0x12dc3a0c */
  if (C.zf) goto L_12dc3a0c;
L_12dc39dc:;
  /* 12dc39dc call 0x12dc4a90 */
  push32(0x12dc39e1u); f_12dc4a90();
  /* 12dc39e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc39e3 jne 0x12dc3a06 */
  if (!C.zf) goto L_12dc3a06;
  /* 12dc39e5 push 0x12dda6a4 */
  push32((uint32_t)(0x12dda6a4u));
  /* 12dc39ea push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc39ec push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12dc39f1 push 0x12dda698 */
  push32((uint32_t)(0x12dda698u));
  /* 12dc39f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc39f8 call 0x12dc29b0 */
  push32(0x12dc39fdu); f_12dc29b0();
  /* 12dc39fd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3a00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3a03 jne 0x12dc3a06 */
  if (!C.zf) goto L_12dc3a06;
  /* 12dc3a05 int3  */
  x86_unimpl("int3 @ 0x12dc3a05");
L_12dc3a06:;
  /* 12dc3a06 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc3a08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc3a0a jne 0x12dc39dc */
  if (!C.zf) goto L_12dc39dc;
L_12dc3a0c:;
  /* 12dc3a0c mov edx, dword ptr [0x12ddda88] */
  EDX = (r32((uint32_t)(0x12ddda88)));
  /* 12dc3a12 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12dc3a15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc3a18 cmp eax, dword ptr [0x12ddda8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ddda8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3a1e jne 0x12dc3a21 */
  if (!C.zf) goto L_12dc3a21;
  /* 12dc3a20 int3  */
  x86_unimpl("int3 @ 0x12dc3a20");
L_12dc3a21:;
  /* 12dc3a21 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc3a24 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3a25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc3a28 push edx */
  push32((uint32_t)(EDX));
  /* 12dc3a29 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc3a2c push eax */
  push32((uint32_t)(EAX));
  /* 12dc3a2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc3a30 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3a31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3a34 push edx */
  push32((uint32_t)(EDX));
  /* 12dc3a35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3a37 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc3a39 call dword ptr [0x12dddc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dddc90))), 0x12dc3a3fu);
  /* 12dc3a3f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc3a44 jne 0x12dc3aa4 */
  if (!C.zf) goto L_12dc3aa4;
  /* 12dc3a46 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3a4a je 0x12dc3a77 */
  if (C.zf) goto L_12dc3a77;
L_12dc3a4c:;
  /* 12dc3a4c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc3a4f push eax */
  push32((uint32_t)(EAX));
  /* 12dc3a50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc3a53 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3a54 push 0x12dda660 */
  push32((uint32_t)(0x12dda660u));
  /* 12dc3a59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3a5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3a5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3a5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3a61 call 0x12dc29b0 */
  push32(0x12dc3a66u); f_12dc29b0();
  /* 12dc3a66 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3a69 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3a6c jne 0x12dc3a6f */
  if (!C.zf) goto L_12dc3a6f;
  /* 12dc3a6e int3  */
  x86_unimpl("int3 @ 0x12dc3a6e");
L_12dc3a6f:;
  /* 12dc3a6f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc3a71 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc3a73 jne 0x12dc3a4c */
  if (!C.zf) goto L_12dc3a4c;
  /* 12dc3a75 jmp 0x12dc3a9d */
  goto L_12dc3a9d;
L_12dc3a77:;
  /* 12dc3a77 push 0x12dda63c */
  push32((uint32_t)(0x12dda63cu));
  /* 12dc3a7c push 0x12dda638 */
  push32((uint32_t)(0x12dda638u));
  /* 12dc3a81 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3a83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3a85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3a87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3a89 call 0x12dc29b0 */
  push32(0x12dc3a8eu); f_12dc29b0();
  /* 12dc3a8e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3a91 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3a94 jne 0x12dc3a97 */
  if (!C.zf) goto L_12dc3a97;
  /* 12dc3a96 int3  */
  x86_unimpl("int3 @ 0x12dc3a96");
L_12dc3a97:;
  /* 12dc3a97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc3a99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc3a9b jne 0x12dc3a77 */
  if (!C.zf) goto L_12dc3a77;
L_12dc3a9d:;
  /* 12dc3a9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc3a9f jmp 0x12dc3ccc */
  goto L_12dc3ccc;
L_12dc3aa4:;
  /* 12dc3aa4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc3aa7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc3aad cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3ab0 je 0x12dc3ac6 */
  if (C.zf) goto L_12dc3ac6;
  /* 12dc3ab2 mov edx, dword ptr [0x12ddda84] */
  EDX = (r32((uint32_t)(0x12ddda84)));
  /* 12dc3ab8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12dc3abb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc3abd jne 0x12dc3ac6 */
  if (!C.zf) goto L_12dc3ac6;
  /* 12dc3abf mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12dc3ac6:;
  /* 12dc3ac6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3aca ja 0x12dc3ad7 */
  if ((!C.cf&&!C.zf)) goto L_12dc3ad7;
  /* 12dc3acc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3acf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3ad2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3ad5 jbe 0x12dc3b03 */
  if ((C.cf||C.zf)) goto L_12dc3b03;
L_12dc3ad7:;
  /* 12dc3ad7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3ada push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3adb push 0x12dda614 */
  push32((uint32_t)(0x12dda614u));
  /* 12dc3ae0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3ae2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3ae4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3ae6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc3ae8 call 0x12dc29b0 */
  push32(0x12dc3aedu); f_12dc29b0();
  /* 12dc3aed add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3af0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3af3 jne 0x12dc3af6 */
  if (!C.zf) goto L_12dc3af6;
  /* 12dc3af5 int3  */
  x86_unimpl("int3 @ 0x12dc3af5");
L_12dc3af6:;
  /* 12dc3af6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc3af8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc3afa jne 0x12dc3ad7 */
  if (!C.zf) goto L_12dc3ad7;
  /* 12dc3afc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc3afe jmp 0x12dc3ccc */
  goto L_12dc3ccc;
L_12dc3b03:;
  /* 12dc3b03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc3b06 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc3b0b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3b0e je 0x12dc3b50 */
  if (C.zf) goto L_12dc3b50;
  /* 12dc3b10 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3b14 je 0x12dc3b50 */
  if (C.zf) goto L_12dc3b50;
  /* 12dc3b16 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc3b19 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc3b1f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3b22 je 0x12dc3b50 */
  if (C.zf) goto L_12dc3b50;
  /* 12dc3b24 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3b28 je 0x12dc3b50 */
  if (C.zf) goto L_12dc3b50;
L_12dc3b2a:;
  /* 12dc3b2a push 0x12dda5e0 */
  push32((uint32_t)(0x12dda5e0u));
  /* 12dc3b2f push 0x12dda638 */
  push32((uint32_t)(0x12dda638u));
  /* 12dc3b34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3b36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3b38 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3b3a push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc3b3c call 0x12dc29b0 */
  push32(0x12dc3b41u); f_12dc29b0();
  /* 12dc3b41 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3b44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3b47 jne 0x12dc3b4a */
  if (!C.zf) goto L_12dc3b4a;
  /* 12dc3b49 int3  */
  x86_unimpl("int3 @ 0x12dc3b49");
L_12dc3b4a:;
  /* 12dc3b4a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc3b4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc3b4e jne 0x12dc3b2a */
  if (!C.zf) goto L_12dc3b2a;
L_12dc3b50:;
  /* 12dc3b50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3b53 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3b56 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12dc3b59 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc3b5c push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3b5d call 0x12dc7740 */
  push32(0x12dc3b62u); f_12dc7740();
  /* 12dc3b62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3b65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc3b68 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3b6c jne 0x12dc3b75 */
  if (!C.zf) goto L_12dc3b75;
  /* 12dc3b6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc3b70 jmp 0x12dc3ccc */
  goto L_12dc3ccc;
L_12dc3b75:;
  /* 12dc3b75 mov edx, dword ptr [0x12ddda88] */
  EDX = (r32((uint32_t)(0x12ddda88)));
  /* 12dc3b7b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3b7e mov dword ptr [0x12ddda88], edx */
  w32((uint32_t)(0x12ddda88), (EDX));
  /* 12dc3b84 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3b88 je 0x12dc3bd3 */
  if (C.zf) goto L_12dc3bd3;
  /* 12dc3b8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3b8d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12dc3b93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3b96 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12dc3b9d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3ba0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12dc3ba7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3baa mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12dc3bb1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3bb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3bb7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12dc3bba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3bbd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12dc3bc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3bc7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12dc3bce jmp 0x12dc3c73 */
  goto L_12dc3c73;
L_12dc3bd3:;
  /* 12dc3bd3 mov edx, dword ptr [0x12ddf57c] */
  EDX = (r32((uint32_t)(0x12ddf57c)));
  /* 12dc3bd9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3bdc mov dword ptr [0x12ddf57c], edx */
  w32((uint32_t)(0x12ddf57c), (EDX));
  /* 12dc3be2 mov eax, dword ptr [0x12ddf584] */
  EAX = (r32((uint32_t)(0x12ddf584)));
  /* 12dc3be7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3bea mov dword ptr [0x12ddf584], eax */
  w32((uint32_t)(0x12ddf584), (EAX));
  /* 12dc3bef mov ecx, dword ptr [0x12ddf584] */
  ECX = (r32((uint32_t)(0x12ddf584)));
  /* 12dc3bf5 cmp ecx, dword ptr [0x12ddf588] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ddf588))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3bfb jbe 0x12dc3c09 */
  if ((C.cf||C.zf)) goto L_12dc3c09;
  /* 12dc3bfd mov edx, dword ptr [0x12ddf584] */
  EDX = (r32((uint32_t)(0x12ddf584)));
  /* 12dc3c03 mov dword ptr [0x12ddf588], edx */
  w32((uint32_t)(0x12ddf588), (EDX));
L_12dc3c09:;
  /* 12dc3c09 cmp dword ptr [0x12ddf580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3c10 je 0x12dc3c1f */
  if (C.zf) goto L_12dc3c1f;
  /* 12dc3c12 mov eax, dword ptr [0x12ddf580] */
  EAX = (r32((uint32_t)(0x12ddf580)));
  /* 12dc3c17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3c1a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12dc3c1d jmp 0x12dc3c28 */
  goto L_12dc3c28;
L_12dc3c1f:;
  /* 12dc3c1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3c22 mov dword ptr [0x12ddf578], edx */
  w32((uint32_t)(0x12ddf578), (EDX));
L_12dc3c28:;
  /* 12dc3c28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3c2b mov ecx, dword ptr [0x12ddf580] */
  ECX = (r32((uint32_t)(0x12ddf580)));
  /* 12dc3c31 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12dc3c33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3c36 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 12dc3c3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3c40 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc3c43 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12dc3c46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3c49 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc3c4c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 12dc3c4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3c52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3c55 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12dc3c58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3c5b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc3c5e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12dc3c61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3c64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc3c67 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12dc3c6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3c6d mov dword ptr [0x12ddf580], ecx */
  w32((uint32_t)(0x12ddf580), (ECX));
L_12dc3c73:;
  /* 12dc3c73 push 4 */
  push32((uint32_t)(0x4u));
  /* 12dc3c75 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc3c77 mov dl, byte ptr [0x12ddda90] */
  DL = (r8((uint32_t)(0x12ddda90)));
  /* 12dc3c7d push edx */
  push32((uint32_t)(EDX));
  /* 12dc3c7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3c81 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3c84 push eax */
  push32((uint32_t)(EAX));
  /* 12dc3c85 call 0x12dc7660 */
  push32(0x12dc3c8au); f_12dc7660();
  /* 12dc3c8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3c8d push 4 */
  push32((uint32_t)(0x4u));
  /* 12dc3c8f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc3c91 mov cl, byte ptr [0x12ddda90] */
  CL = (r8((uint32_t)(0x12ddda90)));
  /* 12dc3c97 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3c98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3c9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3c9e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12dc3ca2 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3ca3 call 0x12dc7660 */
  push32(0x12dc3ca8u); f_12dc7660();
  /* 12dc3ca8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3cab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3cae push edx */
  push32((uint32_t)(EDX));
  /* 12dc3caf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc3cb1 mov al, byte ptr [0x12ddda92] */
  AL = (r8((uint32_t)(0x12ddda92)));
  /* 12dc3cb6 push eax */
  push32((uint32_t)(EAX));
  /* 12dc3cb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3cba add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3cbd push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3cbe call 0x12dc7660 */
  push32(0x12dc3cc3u); f_12dc7660();
  /* 12dc3cc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3cc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3cc9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12dc3ccc:;
  /* 12dc3ccc pop edi */
  EDI = (pop32());
  /* 12dc3ccd pop esi */
  ESI = (pop32());
  /* 12dc3cce pop ebx */
  EBX = (pop32());
  /* 12dc3ccf mov esp, ebp */
  ESP = (EBP);
  /* 12dc3cd1 pop ebp */
  EBP = (pop32());
  /* 12dc3cd2 ret  */
  ESPCHK(0x12dc39c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ce0 @ 0x12dc3ce0 (27 bytes, 13 insns) */
void f_12dc3ce0(void) {
  FTRACE(0x12dc3ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc3ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc3ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc3ce3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3ce5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3ce7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc3ce9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc3cec push eax */
  push32((uint32_t)(EAX));
  /* 12dc3ced mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3cf0 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3cf1 call 0x12dc3d00 */
  push32(0x12dc3cf6u); f_12dc3d00();
  /* 12dc3cf6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3cf9 pop ebp */
  EBP = (pop32());
  /* 12dc3cfa ret  */
  ESPCHK(0x12dc3ce0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12dc3d00 (96 bytes, 37 insns) */
void f_12dc3d00(void) {
  FTRACE(0x12dc3d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc3d00 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc3d01 mov ebp, esp */
  EBP = (ESP);
  /* 12dc3d03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc3d06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc3d09 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc3d0d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12dc3d10 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc3d13 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3d14 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc3d17 push edx */
  push32((uint32_t)(EDX));
  /* 12dc3d18 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc3d1b push eax */
  push32((uint32_t)(EAX));
  /* 12dc3d1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc3d1f push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3d20 call 0x12dc38f0 */
  push32(0x12dc3d25u); f_12dc38f0();
  /* 12dc3d25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3d28 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dc3d2b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3d2f je 0x12dc3d59 */
  if (C.zf) goto L_12dc3d59;
  /* 12dc3d31 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc3d34 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12dc3d37 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc3d3a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3d3d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dc3d40:;
  /* 12dc3d40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc3d43 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3d46 jae 0x12dc3d59 */
  if (!C.cf) goto L_12dc3d59;
  /* 12dc3d48 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc3d4b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12dc3d4e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc3d51 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3d54 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dc3d57 jmp 0x12dc3d40 */
  goto L_12dc3d40;
L_12dc3d59:;
  /* 12dc3d59 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc3d5c mov esp, ebp */
  ESP = (EBP);
  /* 12dc3d5e pop ebp */
  EBP = (pop32());
  /* 12dc3d5f ret  */
  ESPCHK(0x12dc3d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d60 @ 0x12dc3d60 (27 bytes, 13 insns) */
void f_12dc3d60(void) {
  FTRACE(0x12dc3d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc3d60 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc3d61 mov ebp, esp */
  EBP = (ESP);
  /* 12dc3d63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3d65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3d67 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc3d69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc3d6c push eax */
  push32((uint32_t)(EAX));
  /* 12dc3d6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3d70 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3d71 call 0x12dc3d80 */
  push32(0x12dc3d76u); f_12dc3d80();
  /* 12dc3d76 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3d79 pop ebp */
  EBP = (pop32());
  /* 12dc3d7a ret  */
  ESPCHK(0x12dc3d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d80 @ 0x12dc3d80 (64 bytes, 27 insns) */
void f_12dc3d80(void) {
  FTRACE(0x12dc3d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc3d80 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc3d81 mov ebp, esp */
  EBP = (ESP);
  /* 12dc3d83 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3d84 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc3d86 call 0x12dc72f0 */
  push32(0x12dc3d8bu); f_12dc72f0();
  /* 12dc3d8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3d8e push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc3d90 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc3d93 push eax */
  push32((uint32_t)(EAX));
  /* 12dc3d94 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc3d97 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3d98 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc3d9b push edx */
  push32((uint32_t)(EDX));
  /* 12dc3d9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc3d9f push eax */
  push32((uint32_t)(EAX));
  /* 12dc3da0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3da3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3da4 call 0x12dc3dc0 */
  push32(0x12dc3da9u); f_12dc3dc0();
  /* 12dc3da9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3dac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc3daf push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc3db1 call 0x12dc7390 */
  push32(0x12dc3db6u); f_12dc7390();
  /* 12dc3db6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3db9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc3dbc mov esp, ebp */
  ESP = (EBP);
  /* 12dc3dbe pop ebp */
  EBP = (pop32());
  /* 12dc3dbf ret  */
  ESPCHK(0x12dc3d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003dc0 @ 0x12dc3dc0 (1297 bytes, 431 insns) */
void f_12dc3dc0(void) {
  FTRACE(0x12dc3dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc3dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc3dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc3dc3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc3dc6 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc3dc7 push esi */
  push32((uint32_t)(ESI));
  /* 12dc3dc8 push edi */
  push32((uint32_t)(EDI));
  /* 12dc3dc9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12dc3dd0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3dd4 jne 0x12dc3df3 */
  if (!C.zf) goto L_12dc3df3;
  /* 12dc3dd6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc3dd9 push eax */
  push32((uint32_t)(EAX));
  /* 12dc3dda mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc3ddd push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3dde mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc3de1 push edx */
  push32((uint32_t)(EDX));
  /* 12dc3de2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc3de5 push eax */
  push32((uint32_t)(EAX));
  /* 12dc3de6 call 0x12dc38f0 */
  push32(0x12dc3debu); f_12dc38f0();
  /* 12dc3deb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3dee jmp 0x12dc42ca */
  goto L_12dc42ca;
L_12dc3df3:;
  /* 12dc3df3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3df7 je 0x12dc3e16 */
  if (C.zf) goto L_12dc3e16;
  /* 12dc3df9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3dfd jne 0x12dc3e16 */
  if (!C.zf) goto L_12dc3e16;
  /* 12dc3dff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc3e02 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3e03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3e06 push edx */
  push32((uint32_t)(EDX));
  /* 12dc3e07 call 0x12dc4380 */
  push32(0x12dc3e0cu); f_12dc4380();
  /* 12dc3e0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3e0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc3e11 jmp 0x12dc42ca */
  goto L_12dc42ca;
L_12dc3e16:;
  /* 12dc3e16 mov eax, dword ptr [0x12ddda84] */
  EAX = (r32((uint32_t)(0x12ddda84)));
  /* 12dc3e1b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12dc3e1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc3e20 je 0x12dc3e52 */
  if (C.zf) goto L_12dc3e52;
L_12dc3e22:;
  /* 12dc3e22 call 0x12dc4a90 */
  push32(0x12dc3e27u); f_12dc4a90();
  /* 12dc3e27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc3e29 jne 0x12dc3e4c */
  if (!C.zf) goto L_12dc3e4c;
  /* 12dc3e2b push 0x12dda6a4 */
  push32((uint32_t)(0x12dda6a4u));
  /* 12dc3e30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3e32 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12dc3e37 push 0x12dda698 */
  push32((uint32_t)(0x12dda698u));
  /* 12dc3e3c push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc3e3e call 0x12dc29b0 */
  push32(0x12dc3e43u); f_12dc29b0();
  /* 12dc3e43 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3e46 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3e49 jne 0x12dc3e4c */
  if (!C.zf) goto L_12dc3e4c;
  /* 12dc3e4b int3  */
  x86_unimpl("int3 @ 0x12dc3e4b");
L_12dc3e4c:;
  /* 12dc3e4c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc3e4e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc3e50 jne 0x12dc3e22 */
  if (!C.zf) goto L_12dc3e22;
L_12dc3e52:;
  /* 12dc3e52 mov edx, dword ptr [0x12ddda88] */
  EDX = (r32((uint32_t)(0x12ddda88)));
  /* 12dc3e58 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12dc3e5b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc3e5e cmp eax, dword ptr [0x12ddda8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ddda8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3e64 jne 0x12dc3e67 */
  if (!C.zf) goto L_12dc3e67;
  /* 12dc3e66 int3  */
  x86_unimpl("int3 @ 0x12dc3e66");
L_12dc3e67:;
  /* 12dc3e67 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc3e6a push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3e6b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc3e6e push edx */
  push32((uint32_t)(EDX));
  /* 12dc3e6f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc3e72 push eax */
  push32((uint32_t)(EAX));
  /* 12dc3e73 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc3e76 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3e77 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc3e7a push edx */
  push32((uint32_t)(EDX));
  /* 12dc3e7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3e7e push eax */
  push32((uint32_t)(EAX));
  /* 12dc3e7f push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc3e81 call dword ptr [0x12dddc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dddc90))), 0x12dc3e87u);
  /* 12dc3e87 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3e8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc3e8c jne 0x12dc3eec */
  if (!C.zf) goto L_12dc3eec;
  /* 12dc3e8e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3e92 je 0x12dc3ebf */
  if (C.zf) goto L_12dc3ebf;
L_12dc3e94:;
  /* 12dc3e94 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc3e97 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3e98 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc3e9b push edx */
  push32((uint32_t)(EDX));
  /* 12dc3e9c push 0x12dda820 */
  push32((uint32_t)(0x12dda820u));
  /* 12dc3ea1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3ea3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3ea5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3ea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3ea9 call 0x12dc29b0 */
  push32(0x12dc3eaeu); f_12dc29b0();
  /* 12dc3eae add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3eb1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3eb4 jne 0x12dc3eb7 */
  if (!C.zf) goto L_12dc3eb7;
  /* 12dc3eb6 int3  */
  x86_unimpl("int3 @ 0x12dc3eb6");
L_12dc3eb7:;
  /* 12dc3eb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc3eb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc3ebb jne 0x12dc3e94 */
  if (!C.zf) goto L_12dc3e94;
  /* 12dc3ebd jmp 0x12dc3ee5 */
  goto L_12dc3ee5;
L_12dc3ebf:;
  /* 12dc3ebf push 0x12dda7fc */
  push32((uint32_t)(0x12dda7fcu));
  /* 12dc3ec4 push 0x12dda638 */
  push32((uint32_t)(0x12dda638u));
  /* 12dc3ec9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3ecb push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3ecd push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3ecf push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3ed1 call 0x12dc29b0 */
  push32(0x12dc3ed6u); f_12dc29b0();
  /* 12dc3ed6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3ed9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3edc jne 0x12dc3edf */
  if (!C.zf) goto L_12dc3edf;
  /* 12dc3ede int3  */
  x86_unimpl("int3 @ 0x12dc3ede");
L_12dc3edf:;
  /* 12dc3edf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc3ee1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc3ee3 jne 0x12dc3ebf */
  if (!C.zf) goto L_12dc3ebf;
L_12dc3ee5:;
  /* 12dc3ee5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc3ee7 jmp 0x12dc42ca */
  goto L_12dc42ca;
L_12dc3eec:;
  /* 12dc3eec cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3ef0 jbe 0x12dc3f1e */
  if ((C.cf||C.zf)) goto L_12dc3f1e;
L_12dc3ef2:;
  /* 12dc3ef2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc3ef5 push edx */
  push32((uint32_t)(EDX));
  /* 12dc3ef6 push 0x12dda7cc */
  push32((uint32_t)(0x12dda7ccu));
  /* 12dc3efb push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3efd push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3eff push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3f01 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc3f03 call 0x12dc29b0 */
  push32(0x12dc3f08u); f_12dc29b0();
  /* 12dc3f08 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3f0b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3f0e jne 0x12dc3f11 */
  if (!C.zf) goto L_12dc3f11;
  /* 12dc3f10 int3  */
  x86_unimpl("int3 @ 0x12dc3f10");
L_12dc3f11:;
  /* 12dc3f11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc3f13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc3f15 jne 0x12dc3ef2 */
  if (!C.zf) goto L_12dc3ef2;
  /* 12dc3f17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc3f19 jmp 0x12dc42ca */
  goto L_12dc42ca;
L_12dc3f1e:;
  /* 12dc3f1e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3f22 je 0x12dc3f66 */
  if (C.zf) goto L_12dc3f66;
  /* 12dc3f24 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc3f27 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc3f2d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3f30 je 0x12dc3f66 */
  if (C.zf) goto L_12dc3f66;
  /* 12dc3f32 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc3f35 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dc3f3b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3f3e je 0x12dc3f66 */
  if (C.zf) goto L_12dc3f66;
L_12dc3f40:;
  /* 12dc3f40 push 0x12dda5e0 */
  push32((uint32_t)(0x12dda5e0u));
  /* 12dc3f45 push 0x12dda638 */
  push32((uint32_t)(0x12dda638u));
  /* 12dc3f4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3f4c push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3f4e push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3f50 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc3f52 call 0x12dc29b0 */
  push32(0x12dc3f57u); f_12dc29b0();
  /* 12dc3f57 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3f5a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3f5d jne 0x12dc3f60 */
  if (!C.zf) goto L_12dc3f60;
  /* 12dc3f5f int3  */
  x86_unimpl("int3 @ 0x12dc3f5f");
L_12dc3f60:;
  /* 12dc3f60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc3f62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc3f64 jne 0x12dc3f40 */
  if (!C.zf) goto L_12dc3f40;
L_12dc3f66:;
  /* 12dc3f66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3f69 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc3f6a call 0x12dc4ef0 */
  push32(0x12dc3f6fu); f_12dc4ef0();
  /* 12dc3f6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3f72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc3f74 jne 0x12dc3f97 */
  if (!C.zf) goto L_12dc3f97;
  /* 12dc3f76 push 0x12dda7a8 */
  push32((uint32_t)(0x12dda7a8u));
  /* 12dc3f7b push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3f7d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12dc3f82 push 0x12dda698 */
  push32((uint32_t)(0x12dda698u));
  /* 12dc3f87 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc3f89 call 0x12dc29b0 */
  push32(0x12dc3f8eu); f_12dc29b0();
  /* 12dc3f8e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3f91 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3f94 jne 0x12dc3f97 */
  if (!C.zf) goto L_12dc3f97;
  /* 12dc3f96 int3  */
  x86_unimpl("int3 @ 0x12dc3f96");
L_12dc3f97:;
  /* 12dc3f97 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc3f99 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc3f9b jne 0x12dc3f66 */
  if (!C.zf) goto L_12dc3f66;
  /* 12dc3f9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc3fa0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc3fa3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dc3fa6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc3fa9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3fad jne 0x12dc3fb6 */
  if (!C.zf) goto L_12dc3fb6;
  /* 12dc3faf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12dc3fb6:;
  /* 12dc3fb6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3fba je 0x12dc3ffa */
  if (C.zf) goto L_12dc3ffa;
L_12dc3fbc:;
  /* 12dc3fbc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc3fbf cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3fc6 jne 0x12dc3fd1 */
  if (!C.zf) goto L_12dc3fd1;
  /* 12dc3fc8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc3fcb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3fcf je 0x12dc3ff2 */
  if (C.zf) goto L_12dc3ff2;
L_12dc3fd1:;
  /* 12dc3fd1 push 0x12dda760 */
  push32((uint32_t)(0x12dda760u));
  /* 12dc3fd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc3fd8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12dc3fdd push 0x12dda698 */
  push32((uint32_t)(0x12dda698u));
  /* 12dc3fe2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc3fe4 call 0x12dc29b0 */
  push32(0x12dc3fe9u); f_12dc29b0();
  /* 12dc3fe9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc3fec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc3fef jne 0x12dc3ff2 */
  if (!C.zf) goto L_12dc3ff2;
  /* 12dc3ff1 int3  */
  x86_unimpl("int3 @ 0x12dc3ff1");
L_12dc3ff2:;
  /* 12dc3ff2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc3ff4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc3ff6 jne 0x12dc3fbc */
  if (!C.zf) goto L_12dc3fbc;
  /* 12dc3ff8 jmp 0x12dc405e */
  goto L_12dc405e;
L_12dc3ffa:;
  /* 12dc3ffa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc3ffd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dc4000 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc4005 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4008 jne 0x12dc401f */
  if (!C.zf) goto L_12dc401f;
  /* 12dc400a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc400d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc4013 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4016 jne 0x12dc401f */
  if (!C.zf) goto L_12dc401f;
  /* 12dc4018 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12dc401f:;
  /* 12dc401f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4022 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dc4025 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc402a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc402d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc4033 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4035 je 0x12dc4058 */
  if (C.zf) goto L_12dc4058;
  /* 12dc4037 push 0x12dda724 */
  push32((uint32_t)(0x12dda724u));
  /* 12dc403c push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc403e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12dc4043 push 0x12dda698 */
  push32((uint32_t)(0x12dda698u));
  /* 12dc4048 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc404a call 0x12dc29b0 */
  push32(0x12dc404fu); f_12dc29b0();
  /* 12dc404f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4052 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4055 jne 0x12dc4058 */
  if (!C.zf) goto L_12dc4058;
  /* 12dc4057 int3  */
  x86_unimpl("int3 @ 0x12dc4057");
L_12dc4058:;
  /* 12dc4058 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc405a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc405c jne 0x12dc401f */
  if (!C.zf) goto L_12dc401f;
L_12dc405e:;
  /* 12dc405e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4062 je 0x12dc4089 */
  if (C.zf) goto L_12dc4089;
  /* 12dc4064 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc4067 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc406a push eax */
  push32((uint32_t)(EAX));
  /* 12dc406b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc406e push ecx */
  push32((uint32_t)(ECX));
  /* 12dc406f call 0x12dc7870 */
  push32(0x12dc4074u); f_12dc7870();
  /* 12dc4074 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4077 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dc407a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc407e jne 0x12dc4087 */
  if (!C.zf) goto L_12dc4087;
  /* 12dc4080 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc4082 jmp 0x12dc42ca */
  goto L_12dc42ca;
L_12dc4087:;
  /* 12dc4087 jmp 0x12dc40ac */
  goto L_12dc40ac;
L_12dc4089:;
  /* 12dc4089 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc408c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc408f push edx */
  push32((uint32_t)(EDX));
  /* 12dc4090 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4093 push eax */
  push32((uint32_t)(EAX));
  /* 12dc4094 call 0x12dc77c0 */
  push32(0x12dc4099u); f_12dc77c0();
  /* 12dc4099 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc409c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dc409f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc40a3 jne 0x12dc40ac */
  if (!C.zf) goto L_12dc40ac;
  /* 12dc40a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc40a7 jmp 0x12dc42ca */
  goto L_12dc42ca;
L_12dc40ac:;
  /* 12dc40ac mov ecx, dword ptr [0x12ddda88] */
  ECX = (r32((uint32_t)(0x12ddda88)));
  /* 12dc40b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc40b5 mov dword ptr [0x12ddda88], ecx */
  w32((uint32_t)(0x12ddda88), (ECX));
  /* 12dc40bb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc40bf jne 0x12dc4117 */
  if (!C.zf) goto L_12dc4117;
  /* 12dc40c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc40c4 mov eax, dword ptr [0x12ddf57c] */
  EAX = (r32((uint32_t)(0x12ddf57c)));
  /* 12dc40c9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc40cc mov dword ptr [0x12ddf57c], eax */
  w32((uint32_t)(0x12ddf57c), (EAX));
  /* 12dc40d1 mov ecx, dword ptr [0x12ddf57c] */
  ECX = (r32((uint32_t)(0x12ddf57c)));
  /* 12dc40d7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc40da mov dword ptr [0x12ddf57c], ecx */
  w32((uint32_t)(0x12ddf57c), (ECX));
  /* 12dc40e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc40e3 mov eax, dword ptr [0x12ddf584] */
  EAX = (r32((uint32_t)(0x12ddf584)));
  /* 12dc40e8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc40eb mov dword ptr [0x12ddf584], eax */
  w32((uint32_t)(0x12ddf584), (EAX));
  /* 12dc40f0 mov ecx, dword ptr [0x12ddf584] */
  ECX = (r32((uint32_t)(0x12ddf584)));
  /* 12dc40f6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc40f9 mov dword ptr [0x12ddf584], ecx */
  w32((uint32_t)(0x12ddf584), (ECX));
  /* 12dc40ff mov edx, dword ptr [0x12ddf584] */
  EDX = (r32((uint32_t)(0x12ddf584)));
  /* 12dc4105 cmp edx, dword ptr [0x12ddf588] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12ddf588))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc410b jbe 0x12dc4117 */
  if ((C.cf||C.zf)) goto L_12dc4117;
  /* 12dc410d mov eax, dword ptr [0x12ddf584] */
  EAX = (r32((uint32_t)(0x12ddf584)));
  /* 12dc4112 mov dword ptr [0x12ddf588], eax */
  w32((uint32_t)(0x12ddf588), (EAX));
L_12dc4117:;
  /* 12dc4117 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc411a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc411d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dc4120 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc4123 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc4126 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4129 jbe 0x12dc414f */
  if ((C.cf||C.zf)) goto L_12dc414f;
  /* 12dc412b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc412e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc4131 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc4134 push edx */
  push32((uint32_t)(EDX));
  /* 12dc4135 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc4137 mov al, byte ptr [0x12ddda92] */
  AL = (r8((uint32_t)(0x12ddda92)));
  /* 12dc413c push eax */
  push32((uint32_t)(EAX));
  /* 12dc413d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc4140 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4143 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4146 push edx */
  push32((uint32_t)(EDX));
  /* 12dc4147 call 0x12dc7660 */
  push32(0x12dc414cu); f_12dc7660();
  /* 12dc414c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc414f:;
  /* 12dc414f push 4 */
  push32((uint32_t)(0x4u));
  /* 12dc4151 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc4153 mov al, byte ptr [0x12ddda90] */
  AL = (r8((uint32_t)(0x12ddda90)));
  /* 12dc4158 push eax */
  push32((uint32_t)(EAX));
  /* 12dc4159 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc415c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc415f push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4160 call 0x12dc7660 */
  push32(0x12dc4165u); f_12dc7660();
  /* 12dc4165 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4168 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc416c jne 0x12dc4189 */
  if (!C.zf) goto L_12dc4189;
  /* 12dc416e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc4171 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc4174 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12dc4177 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc417a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc417d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12dc4180 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc4183 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc4186 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12dc4189:;
  /* 12dc4189 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc418c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc418f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12dc4192:;
  /* 12dc4192 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4196 jne 0x12dc41c7 */
  if (!C.zf) goto L_12dc41c7;
  /* 12dc4198 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc419c jne 0x12dc41a6 */
  if (!C.zf) goto L_12dc41a6;
  /* 12dc419e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc41a1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc41a4 je 0x12dc41c7 */
  if (C.zf) goto L_12dc41c7;
L_12dc41a6:;
  /* 12dc41a6 push 0x12dda6f0 */
  push32((uint32_t)(0x12dda6f0u));
  /* 12dc41ab push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc41ad push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12dc41b2 push 0x12dda698 */
  push32((uint32_t)(0x12dda698u));
  /* 12dc41b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc41b9 call 0x12dc29b0 */
  push32(0x12dc41beu); f_12dc29b0();
  /* 12dc41be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc41c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc41c4 jne 0x12dc41c7 */
  if (!C.zf) goto L_12dc41c7;
  /* 12dc41c6 int3  */
  x86_unimpl("int3 @ 0x12dc41c6");
L_12dc41c7:;
  /* 12dc41c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc41c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc41cb jne 0x12dc4192 */
  if (!C.zf) goto L_12dc4192;
  /* 12dc41cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc41d0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc41d3 je 0x12dc41db */
  if (C.zf) goto L_12dc41db;
  /* 12dc41d5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc41d9 je 0x12dc41e3 */
  if (C.zf) goto L_12dc41e3;
L_12dc41db:;
  /* 12dc41db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc41de jmp 0x12dc42ca */
  goto L_12dc42ca;
L_12dc41e3:;
  /* 12dc41e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc41e6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc41e9 je 0x12dc41fb */
  if (C.zf) goto L_12dc41fb;
  /* 12dc41eb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc41ee mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dc41f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc41f3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dc41f6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12dc41f9 jmp 0x12dc4237 */
  goto L_12dc4237;
L_12dc41fb:;
  /* 12dc41fb mov eax, dword ptr [0x12ddf578] */
  EAX = (r32((uint32_t)(0x12ddf578)));
  /* 12dc4200 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4203 je 0x12dc4226 */
  if (C.zf) goto L_12dc4226;
  /* 12dc4205 push 0x12dda6d4 */
  push32((uint32_t)(0x12dda6d4u));
  /* 12dc420a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc420c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12dc4211 push 0x12dda698 */
  push32((uint32_t)(0x12dda698u));
  /* 12dc4216 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc4218 call 0x12dc29b0 */
  push32(0x12dc421du); f_12dc29b0();
  /* 12dc421d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4220 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4223 jne 0x12dc4226 */
  if (!C.zf) goto L_12dc4226;
  /* 12dc4225 int3  */
  x86_unimpl("int3 @ 0x12dc4225");
L_12dc4226:;
  /* 12dc4226 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc4228 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc422a jne 0x12dc41fb */
  if (!C.zf) goto L_12dc41fb;
  /* 12dc422c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc422f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12dc4232 mov dword ptr [0x12ddf578], eax */
  w32((uint32_t)(0x12ddf578), (EAX));
L_12dc4237:;
  /* 12dc4237 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc423a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc423e je 0x12dc424f */
  if (C.zf) goto L_12dc424f;
  /* 12dc4240 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc4243 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12dc4246 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc4249 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dc424b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12dc424d jmp 0x12dc428a */
  goto L_12dc428a;
L_12dc424f:;
  /* 12dc424f mov eax, dword ptr [0x12ddf580] */
  EAX = (r32((uint32_t)(0x12ddf580)));
  /* 12dc4254 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4257 je 0x12dc427a */
  if (C.zf) goto L_12dc427a;
  /* 12dc4259 push 0x12dda6b8 */
  push32((uint32_t)(0x12dda6b8u));
  /* 12dc425e push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4260 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12dc4265 push 0x12dda698 */
  push32((uint32_t)(0x12dda698u));
  /* 12dc426a push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc426c call 0x12dc29b0 */
  push32(0x12dc4271u); f_12dc29b0();
  /* 12dc4271 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4274 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4277 jne 0x12dc427a */
  if (!C.zf) goto L_12dc427a;
  /* 12dc4279 int3  */
  x86_unimpl("int3 @ 0x12dc4279");
L_12dc427a:;
  /* 12dc427a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc427c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc427e jne 0x12dc424f */
  if (!C.zf) goto L_12dc424f;
  /* 12dc4280 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc4283 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dc4285 mov dword ptr [0x12ddf580], eax */
  w32((uint32_t)(0x12ddf580), (EAX));
L_12dc428a:;
  /* 12dc428a cmp dword ptr [0x12ddf580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4291 je 0x12dc42a1 */
  if (C.zf) goto L_12dc42a1;
  /* 12dc4293 mov ecx, dword ptr [0x12ddf580] */
  ECX = (r32((uint32_t)(0x12ddf580)));
  /* 12dc4299 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc429c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12dc429f jmp 0x12dc42a9 */
  goto L_12dc42a9;
L_12dc42a1:;
  /* 12dc42a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc42a4 mov dword ptr [0x12ddf578], eax */
  w32((uint32_t)(0x12ddf578), (EAX));
L_12dc42a9:;
  /* 12dc42a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc42ac mov edx, dword ptr [0x12ddf580] */
  EDX = (r32((uint32_t)(0x12ddf580)));
  /* 12dc42b2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12dc42b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc42b7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12dc42be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc42c1 mov dword ptr [0x12ddf580], ecx */
  w32((uint32_t)(0x12ddf580), (ECX));
  /* 12dc42c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12dc42ca:;
  /* 12dc42ca pop edi */
  EDI = (pop32());
  /* 12dc42cb pop esi */
  ESI = (pop32());
  /* 12dc42cc pop ebx */
  EBX = (pop32());
  /* 12dc42cd mov esp, ebp */
  ESP = (EBP);
  /* 12dc42cf pop ebp */
  EBP = (pop32());
  /* 12dc42d0 ret  */
  ESPCHK(0x12dc3dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_100042e0 @ 0x12dc42e0 (27 bytes, 13 insns) */
void f_12dc42e0(void) {
  FTRACE(0x12dc42e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc42e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc42e1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc42e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc42e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc42e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc42e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc42ec push eax */
  push32((uint32_t)(EAX));
  /* 12dc42ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc42f0 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc42f1 call 0x12dc4300 */
  push32(0x12dc42f6u); f_12dc4300();
  /* 12dc42f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc42f9 pop ebp */
  EBP = (pop32());
  /* 12dc42fa ret  */
  ESPCHK(0x12dc42e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004300 @ 0x12dc4300 (64 bytes, 27 insns) */
void f_12dc4300(void) {
  FTRACE(0x12dc4300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc4300 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc4301 mov ebp, esp */
  EBP = (ESP);
  /* 12dc4303 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4304 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc4306 call 0x12dc72f0 */
  push32(0x12dc430bu); f_12dc72f0();
  /* 12dc430b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc430e push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4310 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc4313 push eax */
  push32((uint32_t)(EAX));
  /* 12dc4314 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc4317 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4318 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc431b push edx */
  push32((uint32_t)(EDX));
  /* 12dc431c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc431f push eax */
  push32((uint32_t)(EAX));
  /* 12dc4320 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc4323 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4324 call 0x12dc3dc0 */
  push32(0x12dc4329u); f_12dc3dc0();
  /* 12dc4329 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc432c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc432f push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc4331 call 0x12dc7390 */
  push32(0x12dc4336u); f_12dc7390();
  /* 12dc4336 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4339 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc433c mov esp, ebp */
  ESP = (EBP);
  /* 12dc433e pop ebp */
  EBP = (pop32());
  /* 12dc433f ret  */
  ESPCHK(0x12dc4300u, _esp0);
  ESP += 4; return;
}

/* FUN_10004340 @ 0x12dc4340 (19 bytes, 9 insns) */
void f_12dc4340(void) {
  FTRACE(0x12dc4340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc4340 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc4341 mov ebp, esp */
  EBP = (ESP);
  /* 12dc4343 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc4345 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc4348 push eax */
  push32((uint32_t)(EAX));
  /* 12dc4349 call 0x12dc4380 */
  push32(0x12dc434eu); f_12dc4380();
  /* 12dc434e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4351 pop ebp */
  EBP = (pop32());
  /* 12dc4352 ret  */
  ESPCHK(0x12dc4340u, _esp0);
  ESP += 4; return;
}

/* FUN_10004360 @ 0x12dc4360 (19 bytes, 9 insns) */
void f_12dc4360(void) {
  FTRACE(0x12dc4360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc4360 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc4361 mov ebp, esp */
  EBP = (ESP);
  /* 12dc4363 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc4365 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc4368 push eax */
  push32((uint32_t)(EAX));
  /* 12dc4369 call 0x12dc43b0 */
  push32(0x12dc436eu); f_12dc43b0();
  /* 12dc436e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4371 pop ebp */
  EBP = (pop32());
  /* 12dc4372 ret  */
  ESPCHK(0x12dc4360u, _esp0);
  ESP += 4; return;
}

/* FUN_10004380 @ 0x12dc4380 (41 bytes, 16 insns) */
void f_12dc4380(void) {
  FTRACE(0x12dc4380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc4380 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc4381 mov ebp, esp */
  EBP = (ESP);
  /* 12dc4383 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc4385 call 0x12dc72f0 */
  push32(0x12dc438au); f_12dc72f0();
  /* 12dc438a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc438d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc4390 push eax */
  push32((uint32_t)(EAX));
  /* 12dc4391 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc4394 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4395 call 0x12dc43b0 */
  push32(0x12dc439au); f_12dc43b0();
  /* 12dc439a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc439d push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc439f call 0x12dc7390 */
  push32(0x12dc43a4u); f_12dc7390();
  /* 12dc43a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc43a7 pop ebp */
  EBP = (pop32());
  /* 12dc43a8 ret  */
  ESPCHK(0x12dc4380u, _esp0);
  ESP += 4; return;
}

/* FUN_100043b0 @ 0x12dc43b0 (1004 bytes, 342 insns) */
void f_12dc43b0(void) {
  FTRACE(0x12dc43b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc43b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc43b1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc43b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc43b4 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc43b5 push esi */
  push32((uint32_t)(ESI));
  /* 12dc43b6 push edi */
  push32((uint32_t)(EDI));
  /* 12dc43b7 mov eax, dword ptr [0x12ddda84] */
  EAX = (r32((uint32_t)(0x12ddda84)));
  /* 12dc43bc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12dc43bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc43c1 je 0x12dc43f3 */
  if (C.zf) goto L_12dc43f3;
L_12dc43c3:;
  /* 12dc43c3 call 0x12dc4a90 */
  push32(0x12dc43c8u); f_12dc4a90();
  /* 12dc43c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc43ca jne 0x12dc43ed */
  if (!C.zf) goto L_12dc43ed;
  /* 12dc43cc push 0x12dda6a4 */
  push32((uint32_t)(0x12dda6a4u));
  /* 12dc43d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc43d3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12dc43d8 push 0x12dda698 */
  push32((uint32_t)(0x12dda698u));
  /* 12dc43dd push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc43df call 0x12dc29b0 */
  push32(0x12dc43e4u); f_12dc29b0();
  /* 12dc43e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc43e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc43ea jne 0x12dc43ed */
  if (!C.zf) goto L_12dc43ed;
  /* 12dc43ec int3  */
  x86_unimpl("int3 @ 0x12dc43ec");
L_12dc43ed:;
  /* 12dc43ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc43ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc43f1 jne 0x12dc43c3 */
  if (!C.zf) goto L_12dc43c3;
L_12dc43f3:;
  /* 12dc43f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc43f7 jne 0x12dc43fe */
  if (!C.zf) goto L_12dc43fe;
  /* 12dc43f9 jmp 0x12dc4795 */
  goto L_12dc4795;
L_12dc43fe:;
  /* 12dc43fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4400 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4402 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4404 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc4407 push edx */
  push32((uint32_t)(EDX));
  /* 12dc4408 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc440a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc440d push eax */
  push32((uint32_t)(EAX));
  /* 12dc440e push 3 */
  push32((uint32_t)(0x3u));
  /* 12dc4410 call dword ptr [0x12dddc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dddc90))), 0x12dc4416u);
  /* 12dc4416 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4419 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc441b jne 0x12dc4448 */
  if (!C.zf) goto L_12dc4448;
L_12dc441d:;
  /* 12dc441d push 0x12dda968 */
  push32((uint32_t)(0x12dda968u));
  /* 12dc4422 push 0x12dda638 */
  push32((uint32_t)(0x12dda638u));
  /* 12dc4427 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4429 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc442b push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc442d push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc442f call 0x12dc29b0 */
  push32(0x12dc4434u); f_12dc29b0();
  /* 12dc4434 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4437 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc443a jne 0x12dc443d */
  if (!C.zf) goto L_12dc443d;
  /* 12dc443c int3  */
  x86_unimpl("int3 @ 0x12dc443c");
L_12dc443d:;
  /* 12dc443d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc443f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc4441 jne 0x12dc441d */
  if (!C.zf) goto L_12dc441d;
  /* 12dc4443 jmp 0x12dc4795 */
  goto L_12dc4795;
L_12dc4448:;
  /* 12dc4448 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc444b push edx */
  push32((uint32_t)(EDX));
  /* 12dc444c call 0x12dc4ef0 */
  push32(0x12dc4451u); f_12dc4ef0();
  /* 12dc4451 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4454 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc4456 jne 0x12dc4479 */
  if (!C.zf) goto L_12dc4479;
  /* 12dc4458 push 0x12dda7a8 */
  push32((uint32_t)(0x12dda7a8u));
  /* 12dc445d push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc445f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12dc4464 push 0x12dda698 */
  push32((uint32_t)(0x12dda698u));
  /* 12dc4469 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc446b call 0x12dc29b0 */
  push32(0x12dc4470u); f_12dc29b0();
  /* 12dc4470 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4473 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4476 jne 0x12dc4479 */
  if (!C.zf) goto L_12dc4479;
  /* 12dc4478 int3  */
  x86_unimpl("int3 @ 0x12dc4478");
L_12dc4479:;
  /* 12dc4479 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc447b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc447d jne 0x12dc4448 */
  if (!C.zf) goto L_12dc4448;
  /* 12dc447f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc4482 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc4485 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dc4488:;
  /* 12dc4488 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc448b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dc448e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc4493 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4496 je 0x12dc44db */
  if (C.zf) goto L_12dc44db;
  /* 12dc4498 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc449b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc449f je 0x12dc44db */
  if (C.zf) goto L_12dc44db;
  /* 12dc44a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc44a4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dc44a7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc44ac cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc44af je 0x12dc44db */
  if (C.zf) goto L_12dc44db;
  /* 12dc44b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc44b4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc44b8 je 0x12dc44db */
  if (C.zf) goto L_12dc44db;
  /* 12dc44ba push 0x12dda940 */
  push32((uint32_t)(0x12dda940u));
  /* 12dc44bf push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc44c1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12dc44c6 push 0x12dda698 */
  push32((uint32_t)(0x12dda698u));
  /* 12dc44cb push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc44cd call 0x12dc29b0 */
  push32(0x12dc44d2u); f_12dc29b0();
  /* 12dc44d2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc44d5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc44d8 jne 0x12dc44db */
  if (!C.zf) goto L_12dc44db;
  /* 12dc44da int3  */
  x86_unimpl("int3 @ 0x12dc44da");
L_12dc44db:;
  /* 12dc44db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc44dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc44df jne 0x12dc4488 */
  if (!C.zf) goto L_12dc4488;
  /* 12dc44e1 mov eax, dword ptr [0x12ddda84] */
  EAX = (r32((uint32_t)(0x12ddda84)));
  /* 12dc44e6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12dc44e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc44eb jne 0x12dc45b6 */
  if (!C.zf) goto L_12dc45b6;
  /* 12dc44f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 12dc44f3 mov cl, byte ptr [0x12ddda90] */
  CL = (r8((uint32_t)(0x12ddda90)));
  /* 12dc44f9 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc44fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc44fd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4500 push edx */
  push32((uint32_t)(EDX));
  /* 12dc4501 call 0x12dc4a00 */
  push32(0x12dc4506u); f_12dc4a00();
  /* 12dc4506 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4509 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc450b jne 0x12dc4550 */
  if (!C.zf) goto L_12dc4550;
L_12dc450d:;
  /* 12dc450d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4510 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4513 push eax */
  push32((uint32_t)(EAX));
  /* 12dc4514 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4517 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12dc451a push edx */
  push32((uint32_t)(EDX));
  /* 12dc451b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc451e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12dc4521 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc4527 mov edx, dword ptr [ecx*4 + 0x12ddda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ddda94)));
  /* 12dc452e push edx */
  push32((uint32_t)(EDX));
  /* 12dc452f push 0x12dda914 */
  push32((uint32_t)(0x12dda914u));
  /* 12dc4534 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4536 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4538 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc453a push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc453c call 0x12dc29b0 */
  push32(0x12dc4541u); f_12dc29b0();
  /* 12dc4541 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4544 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4547 jne 0x12dc454a */
  if (!C.zf) goto L_12dc454a;
  /* 12dc4549 int3  */
  x86_unimpl("int3 @ 0x12dc4549");
L_12dc454a:;
  /* 12dc454a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc454c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc454e jne 0x12dc450d */
  if (!C.zf) goto L_12dc450d;
L_12dc4550:;
  /* 12dc4550 push 4 */
  push32((uint32_t)(0x4u));
  /* 12dc4552 mov cl, byte ptr [0x12ddda90] */
  CL = (r8((uint32_t)(0x12ddda90)));
  /* 12dc4558 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4559 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc455c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12dc455f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4562 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12dc4566 push edx */
  push32((uint32_t)(EDX));
  /* 12dc4567 call 0x12dc4a00 */
  push32(0x12dc456cu); f_12dc4a00();
  /* 12dc456c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc456f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc4571 jne 0x12dc45b6 */
  if (!C.zf) goto L_12dc45b6;
L_12dc4573:;
  /* 12dc4573 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4576 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4579 push eax */
  push32((uint32_t)(EAX));
  /* 12dc457a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc457d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12dc4580 push edx */
  push32((uint32_t)(EDX));
  /* 12dc4581 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4584 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12dc4587 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc458d mov edx, dword ptr [ecx*4 + 0x12ddda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ddda94)));
  /* 12dc4594 push edx */
  push32((uint32_t)(EDX));
  /* 12dc4595 push 0x12dda8e8 */
  push32((uint32_t)(0x12dda8e8u));
  /* 12dc459a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc459c push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc459e push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc45a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc45a2 call 0x12dc29b0 */
  push32(0x12dc45a7u); f_12dc29b0();
  /* 12dc45a7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc45aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc45ad jne 0x12dc45b0 */
  if (!C.zf) goto L_12dc45b0;
  /* 12dc45af int3  */
  x86_unimpl("int3 @ 0x12dc45af");
L_12dc45b0:;
  /* 12dc45b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc45b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc45b4 jne 0x12dc4573 */
  if (!C.zf) goto L_12dc4573;
L_12dc45b6:;
  /* 12dc45b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc45b9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc45bd jne 0x12dc462b */
  if (!C.zf) goto L_12dc462b;
L_12dc45bf:;
  /* 12dc45bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc45c2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc45c9 jne 0x12dc45d4 */
  if (!C.zf) goto L_12dc45d4;
  /* 12dc45cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc45ce cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc45d2 je 0x12dc45f5 */
  if (C.zf) goto L_12dc45f5;
L_12dc45d4:;
  /* 12dc45d4 push 0x12dda8a8 */
  push32((uint32_t)(0x12dda8a8u));
  /* 12dc45d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc45db push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12dc45e0 push 0x12dda698 */
  push32((uint32_t)(0x12dda698u));
  /* 12dc45e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc45e7 call 0x12dc29b0 */
  push32(0x12dc45ecu); f_12dc29b0();
  /* 12dc45ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc45ef cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc45f2 jne 0x12dc45f5 */
  if (!C.zf) goto L_12dc45f5;
  /* 12dc45f4 int3  */
  x86_unimpl("int3 @ 0x12dc45f4");
L_12dc45f5:;
  /* 12dc45f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc45f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc45f9 jne 0x12dc45bf */
  if (!C.zf) goto L_12dc45bf;
  /* 12dc45fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc45fe mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12dc4601 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4604 push eax */
  push32((uint32_t)(EAX));
  /* 12dc4605 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc4607 mov cl, byte ptr [0x12ddda91] */
  CL = (r8((uint32_t)(0x12ddda91)));
  /* 12dc460d push ecx */
  push32((uint32_t)(ECX));
  /* 12dc460e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4611 push edx */
  push32((uint32_t)(EDX));
  /* 12dc4612 call 0x12dc7660 */
  push32(0x12dc4617u); f_12dc7660();
  /* 12dc4617 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc461a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc461d push eax */
  push32((uint32_t)(EAX));
  /* 12dc461e call 0x12dc7a60 */
  push32(0x12dc4623u); f_12dc7a60();
  /* 12dc4623 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4626 jmp 0x12dc4795 */
  goto L_12dc4795;
L_12dc462b:;
  /* 12dc462b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc462e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4632 jne 0x12dc4641 */
  if (!C.zf) goto L_12dc4641;
  /* 12dc4634 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4638 jne 0x12dc4641 */
  if (!C.zf) goto L_12dc4641;
  /* 12dc463a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12dc4641:;
  /* 12dc4641 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4644 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dc4647 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc464a je 0x12dc466d */
  if (C.zf) goto L_12dc466d;
  /* 12dc464c push 0x12dda888 */
  push32((uint32_t)(0x12dda888u));
  /* 12dc4651 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4653 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12dc4658 push 0x12dda698 */
  push32((uint32_t)(0x12dda698u));
  /* 12dc465d push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc465f call 0x12dc29b0 */
  push32(0x12dc4664u); f_12dc29b0();
  /* 12dc4664 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4667 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc466a jne 0x12dc466d */
  if (!C.zf) goto L_12dc466d;
  /* 12dc466c int3  */
  x86_unimpl("int3 @ 0x12dc466c");
L_12dc466d:;
  /* 12dc466d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc466f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc4671 jne 0x12dc4641 */
  if (!C.zf) goto L_12dc4641;
  /* 12dc4673 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4676 mov eax, dword ptr [0x12ddf584] */
  EAX = (r32((uint32_t)(0x12ddf584)));
  /* 12dc467b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc467e mov dword ptr [0x12ddf584], eax */
  w32((uint32_t)(0x12ddf584), (EAX));
  /* 12dc4683 mov ecx, dword ptr [0x12ddda84] */
  ECX = (r32((uint32_t)(0x12ddda84)));
  /* 12dc4689 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12dc468c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc468e jne 0x12dc476c */
  if (!C.zf) goto L_12dc476c;
  /* 12dc4694 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4697 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc469a je 0x12dc46ac */
  if (C.zf) goto L_12dc46ac;
  /* 12dc469c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc469f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dc46a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc46a4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12dc46a7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12dc46aa jmp 0x12dc46ea */
  goto L_12dc46ea;
L_12dc46ac:;
  /* 12dc46ac mov ecx, dword ptr [0x12ddf578] */
  ECX = (r32((uint32_t)(0x12ddf578)));
  /* 12dc46b2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc46b5 je 0x12dc46d8 */
  if (C.zf) goto L_12dc46d8;
  /* 12dc46b7 push 0x12dda870 */
  push32((uint32_t)(0x12dda870u));
  /* 12dc46bc push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc46be push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12dc46c3 push 0x12dda698 */
  push32((uint32_t)(0x12dda698u));
  /* 12dc46c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc46ca call 0x12dc29b0 */
  push32(0x12dc46cfu); f_12dc29b0();
  /* 12dc46cf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc46d2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc46d5 jne 0x12dc46d8 */
  if (!C.zf) goto L_12dc46d8;
  /* 12dc46d7 int3  */
  x86_unimpl("int3 @ 0x12dc46d7");
L_12dc46d8:;
  /* 12dc46d8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc46da test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc46dc jne 0x12dc46ac */
  if (!C.zf) goto L_12dc46ac;
  /* 12dc46de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc46e1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dc46e4 mov dword ptr [0x12ddf578], ecx */
  w32((uint32_t)(0x12ddf578), (ECX));
L_12dc46ea:;
  /* 12dc46ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc46ed cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc46f1 je 0x12dc4702 */
  if (C.zf) goto L_12dc4702;
  /* 12dc46f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc46f6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dc46f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc46fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dc46fe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12dc4700 jmp 0x12dc473f */
  goto L_12dc473f;
L_12dc4702:;
  /* 12dc4702 mov ecx, dword ptr [0x12ddf580] */
  ECX = (r32((uint32_t)(0x12ddf580)));
  /* 12dc4708 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc470b je 0x12dc472e */
  if (C.zf) goto L_12dc472e;
  /* 12dc470d push 0x12dda858 */
  push32((uint32_t)(0x12dda858u));
  /* 12dc4712 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4714 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12dc4719 push 0x12dda698 */
  push32((uint32_t)(0x12dda698u));
  /* 12dc471e push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc4720 call 0x12dc29b0 */
  push32(0x12dc4725u); f_12dc29b0();
  /* 12dc4725 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4728 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc472b jne 0x12dc472e */
  if (!C.zf) goto L_12dc472e;
  /* 12dc472d int3  */
  x86_unimpl("int3 @ 0x12dc472d");
L_12dc472e:;
  /* 12dc472e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc4730 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc4732 jne 0x12dc4702 */
  if (!C.zf) goto L_12dc4702;
  /* 12dc4734 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4737 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dc4739 mov dword ptr [0x12ddf580], ecx */
  w32((uint32_t)(0x12ddf580), (ECX));
L_12dc473f:;
  /* 12dc473f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4742 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12dc4745 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4748 push eax */
  push32((uint32_t)(EAX));
  /* 12dc4749 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc474b mov cl, byte ptr [0x12ddda91] */
  CL = (r8((uint32_t)(0x12ddda91)));
  /* 12dc4751 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4752 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4755 push edx */
  push32((uint32_t)(EDX));
  /* 12dc4756 call 0x12dc7660 */
  push32(0x12dc475bu); f_12dc7660();
  /* 12dc475b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc475e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4761 push eax */
  push32((uint32_t)(EAX));
  /* 12dc4762 call 0x12dc7a60 */
  push32(0x12dc4767u); f_12dc7a60();
  /* 12dc4767 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc476a jmp 0x12dc4795 */
  goto L_12dc4795;
L_12dc476c:;
  /* 12dc476c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc476f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12dc4776 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4779 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12dc477c push eax */
  push32((uint32_t)(EAX));
  /* 12dc477d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc477f mov cl, byte ptr [0x12ddda91] */
  CL = (r8((uint32_t)(0x12ddda91)));
  /* 12dc4785 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4786 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4789 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc478c push edx */
  push32((uint32_t)(EDX));
  /* 12dc478d call 0x12dc7660 */
  push32(0x12dc4792u); f_12dc7660();
  /* 12dc4792 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc4795:;
  /* 12dc4795 pop edi */
  EDI = (pop32());
  /* 12dc4796 pop esi */
  ESI = (pop32());
  /* 12dc4797 pop ebx */
  EBX = (pop32());
  /* 12dc4798 mov esp, ebp */
  ESP = (EBP);
  /* 12dc479a pop ebp */
  EBP = (pop32());
  /* 12dc479b ret  */
  ESPCHK(0x12dc43b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100047a0 @ 0x12dc47a0 (19 bytes, 9 insns) */
void f_12dc47a0(void) {
  FTRACE(0x12dc47a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc47a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc47a1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc47a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc47a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc47a8 push eax */
  push32((uint32_t)(EAX));
  /* 12dc47a9 call 0x12dc47c0 */
  push32(0x12dc47aeu); f_12dc47c0();
  /* 12dc47ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc47b1 pop ebp */
  EBP = (pop32());
  /* 12dc47b2 ret  */
  ESPCHK(0x12dc47a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100047c0 @ 0x12dc47c0 (342 bytes, 119 insns) */
void f_12dc47c0(void) {
  FTRACE(0x12dc47c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc47c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc47c1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc47c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc47c6 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc47c7 push esi */
  push32((uint32_t)(ESI));
  /* 12dc47c8 push edi */
  push32((uint32_t)(EDI));
  /* 12dc47c9 mov eax, dword ptr [0x12ddda84] */
  EAX = (r32((uint32_t)(0x12ddda84)));
  /* 12dc47ce and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12dc47d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc47d3 je 0x12dc4805 */
  if (C.zf) goto L_12dc4805;
L_12dc47d5:;
  /* 12dc47d5 call 0x12dc4a90 */
  push32(0x12dc47dau); f_12dc4a90();
  /* 12dc47da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc47dc jne 0x12dc47ff */
  if (!C.zf) goto L_12dc47ff;
  /* 12dc47de push 0x12dda6a4 */
  push32((uint32_t)(0x12dda6a4u));
  /* 12dc47e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc47e5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 12dc47ea push 0x12dda698 */
  push32((uint32_t)(0x12dda698u));
  /* 12dc47ef push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc47f1 call 0x12dc29b0 */
  push32(0x12dc47f6u); f_12dc29b0();
  /* 12dc47f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc47f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc47fc jne 0x12dc47ff */
  if (!C.zf) goto L_12dc47ff;
  /* 12dc47fe int3  */
  x86_unimpl("int3 @ 0x12dc47fe");
L_12dc47ff:;
  /* 12dc47ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc4801 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc4803 jne 0x12dc47d5 */
  if (!C.zf) goto L_12dc47d5;
L_12dc4805:;
  /* 12dc4805 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc4807 call 0x12dc72f0 */
  push32(0x12dc480cu); f_12dc72f0();
  /* 12dc480c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc480f:;
  /* 12dc480f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc4812 push edx */
  push32((uint32_t)(EDX));
  /* 12dc4813 call 0x12dc4ef0 */
  push32(0x12dc4818u); f_12dc4ef0();
  /* 12dc4818 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc481b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc481d jne 0x12dc4840 */
  if (!C.zf) goto L_12dc4840;
  /* 12dc481f push 0x12dda7a8 */
  push32((uint32_t)(0x12dda7a8u));
  /* 12dc4824 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4826 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 12dc482b push 0x12dda698 */
  push32((uint32_t)(0x12dda698u));
  /* 12dc4830 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc4832 call 0x12dc29b0 */
  push32(0x12dc4837u); f_12dc29b0();
  /* 12dc4837 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc483a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc483d jne 0x12dc4840 */
  if (!C.zf) goto L_12dc4840;
  /* 12dc483f int3  */
  x86_unimpl("int3 @ 0x12dc483f");
L_12dc4840:;
  /* 12dc4840 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc4842 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc4844 jne 0x12dc480f */
  if (!C.zf) goto L_12dc480f;
  /* 12dc4846 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc4849 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc484c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12dc484f:;
  /* 12dc484f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4852 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dc4855 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc485a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc485d je 0x12dc48a2 */
  if (C.zf) goto L_12dc48a2;
  /* 12dc485f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4862 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4866 je 0x12dc48a2 */
  if (C.zf) goto L_12dc48a2;
  /* 12dc4868 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc486b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dc486e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc4873 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4876 je 0x12dc48a2 */
  if (C.zf) goto L_12dc48a2;
  /* 12dc4878 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc487b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc487f je 0x12dc48a2 */
  if (C.zf) goto L_12dc48a2;
  /* 12dc4881 push 0x12dda940 */
  push32((uint32_t)(0x12dda940u));
  /* 12dc4886 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4888 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 12dc488d push 0x12dda698 */
  push32((uint32_t)(0x12dda698u));
  /* 12dc4892 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc4894 call 0x12dc29b0 */
  push32(0x12dc4899u); f_12dc29b0();
  /* 12dc4899 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc489c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc489f jne 0x12dc48a2 */
  if (!C.zf) goto L_12dc48a2;
  /* 12dc48a1 int3  */
  x86_unimpl("int3 @ 0x12dc48a1");
L_12dc48a2:;
  /* 12dc48a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc48a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc48a6 jne 0x12dc484f */
  if (!C.zf) goto L_12dc484f;
  /* 12dc48a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc48ab cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc48af jne 0x12dc48be */
  if (!C.zf) goto L_12dc48be;
  /* 12dc48b1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc48b5 jne 0x12dc48be */
  if (!C.zf) goto L_12dc48be;
  /* 12dc48b7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12dc48be:;
  /* 12dc48be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc48c1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc48c5 je 0x12dc48f9 */
  if (C.zf) goto L_12dc48f9;
L_12dc48c7:;
  /* 12dc48c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc48ca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dc48cd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc48d0 je 0x12dc48f3 */
  if (C.zf) goto L_12dc48f3;
  /* 12dc48d2 push 0x12dda888 */
  push32((uint32_t)(0x12dda888u));
  /* 12dc48d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc48d9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12dc48de push 0x12dda698 */
  push32((uint32_t)(0x12dda698u));
  /* 12dc48e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc48e5 call 0x12dc29b0 */
  push32(0x12dc48eau); f_12dc29b0();
  /* 12dc48ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc48ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc48f0 jne 0x12dc48f3 */
  if (!C.zf) goto L_12dc48f3;
  /* 12dc48f2 int3  */
  x86_unimpl("int3 @ 0x12dc48f2");
L_12dc48f3:;
  /* 12dc48f3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc48f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc48f7 jne 0x12dc48c7 */
  if (!C.zf) goto L_12dc48c7;
L_12dc48f9:;
  /* 12dc48f9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc48fc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12dc48ff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc4902 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc4904 call 0x12dc7390 */
  push32(0x12dc4909u); f_12dc7390();
  /* 12dc4909 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc490c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc490f pop edi */
  EDI = (pop32());
  /* 12dc4910 pop esi */
  ESI = (pop32());
  /* 12dc4911 pop ebx */
  EBX = (pop32());
  /* 12dc4912 mov esp, ebp */
  ESP = (EBP);
  /* 12dc4914 pop ebp */
  EBP = (pop32());
  /* 12dc4915 ret  */
  ESPCHK(0x12dc47c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004920 @ 0x12dc4920 (28 bytes, 11 insns) */
void f_12dc4920(void) {
  FTRACE(0x12dc4920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc4920 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc4921 mov ebp, esp */
  EBP = (ESP);
  /* 12dc4923 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4924 mov eax, dword ptr [0x12ddda8c] */
  EAX = (r32((uint32_t)(0x12ddda8c)));
  /* 12dc4929 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc492c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc492f mov dword ptr [0x12ddda8c], ecx */
  w32((uint32_t)(0x12ddda8c), (ECX));
  /* 12dc4935 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4938 mov esp, ebp */
  ESP = (EBP);
  /* 12dc493a pop ebp */
  EBP = (pop32());
  /* 12dc493b ret  */
  ESPCHK(0x12dc4920u, _esp0);
  ESP += 4; return;
}

/* FUN_10004940 @ 0x12dc4940 (157 bytes, 59 insns) */
void f_12dc4940(void) {
  FTRACE(0x12dc4940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc4940 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc4941 mov ebp, esp */
  EBP = (ESP);
  /* 12dc4943 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4944 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc4945 push esi */
  push32((uint32_t)(ESI));
  /* 12dc4946 push edi */
  push32((uint32_t)(EDI));
  /* 12dc4947 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc4949 call 0x12dc72f0 */
  push32(0x12dc494eu); f_12dc72f0();
  /* 12dc494e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4951 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc4954 push eax */
  push32((uint32_t)(EAX));
  /* 12dc4955 call 0x12dc4ef0 */
  push32(0x12dc495au); f_12dc4ef0();
  /* 12dc495a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc495d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc495f je 0x12dc49cc */
  if (C.zf) goto L_12dc49cc;
  /* 12dc4961 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc4964 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc4967 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dc496a:;
  /* 12dc496a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc496d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dc4970 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc4975 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4978 je 0x12dc49bd */
  if (C.zf) goto L_12dc49bd;
  /* 12dc497a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc497d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4981 je 0x12dc49bd */
  if (C.zf) goto L_12dc49bd;
  /* 12dc4983 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4986 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dc4989 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc498e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4991 je 0x12dc49bd */
  if (C.zf) goto L_12dc49bd;
  /* 12dc4993 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4996 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc499a je 0x12dc49bd */
  if (C.zf) goto L_12dc49bd;
  /* 12dc499c push 0x12dda940 */
  push32((uint32_t)(0x12dda940u));
  /* 12dc49a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc49a3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12dc49a8 push 0x12dda698 */
  push32((uint32_t)(0x12dda698u));
  /* 12dc49ad push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc49af call 0x12dc29b0 */
  push32(0x12dc49b4u); f_12dc29b0();
  /* 12dc49b4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc49b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc49ba jne 0x12dc49bd */
  if (!C.zf) goto L_12dc49bd;
  /* 12dc49bc int3  */
  x86_unimpl("int3 @ 0x12dc49bc");
L_12dc49bd:;
  /* 12dc49bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc49bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc49c1 jne 0x12dc496a */
  if (!C.zf) goto L_12dc496a;
  /* 12dc49c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc49c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc49c9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_12dc49cc:;
  /* 12dc49cc push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc49ce call 0x12dc7390 */
  push32(0x12dc49d3u); f_12dc7390();
  /* 12dc49d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc49d6 pop edi */
  EDI = (pop32());
  /* 12dc49d7 pop esi */
  ESI = (pop32());
  /* 12dc49d8 pop ebx */
  EBX = (pop32());
  /* 12dc49d9 mov esp, ebp */
  ESP = (EBP);
  /* 12dc49db pop ebp */
  EBP = (pop32());
  /* 12dc49dc ret  */
  ESPCHK(0x12dc4940u, _esp0);
  ESP += 4; return;
}

/* FUN_100049e0 @ 0x12dc49e0 (28 bytes, 11 insns) */
void f_12dc49e0(void) {
  FTRACE(0x12dc49e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc49e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc49e1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc49e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc49e4 mov eax, dword ptr [0x12dddc90] */
  EAX = (r32((uint32_t)(0x12dddc90)));
  /* 12dc49e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc49ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc49ef mov dword ptr [0x12dddc90], ecx */
  w32((uint32_t)(0x12dddc90), (ECX));
  /* 12dc49f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc49f8 mov esp, ebp */
  ESP = (EBP);
  /* 12dc49fa pop ebp */
  EBP = (pop32());
  /* 12dc49fb ret  */
  ESPCHK(0x12dc49e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a00 @ 0x12dc4a00 (136 bytes, 55 insns) */
void f_12dc4a00(void) {
  FTRACE(0x12dc4a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc4a00 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc4a01 mov ebp, esp */
  EBP = (ESP);
  /* 12dc4a03 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4a04 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc4a05 push esi */
  push32((uint32_t)(ESI));
  /* 12dc4a06 push edi */
  push32((uint32_t)(EDI));
  /* 12dc4a07 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12dc4a0e:;
  /* 12dc4a0e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc4a11 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc4a14 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc4a17 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12dc4a1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc4a1c je 0x12dc4a7e */
  if (C.zf) goto L_12dc4a7e;
  /* 12dc4a1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc4a21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc4a23 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dc4a25 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc4a28 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc4a2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc4a31 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4a34 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12dc4a37 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4a39 je 0x12dc4a7c */
  if (C.zf) goto L_12dc4a7c;
L_12dc4a3b:;
  /* 12dc4a3b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc4a3e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc4a43 push eax */
  push32((uint32_t)(EAX));
  /* 12dc4a44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc4a47 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc4a49 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12dc4a4c push edx */
  push32((uint32_t)(EDX));
  /* 12dc4a4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc4a50 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc4a53 push eax */
  push32((uint32_t)(EAX));
  /* 12dc4a54 push 0x12dda984 */
  push32((uint32_t)(0x12dda984u));
  /* 12dc4a59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4a5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4a5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4a5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4a61 call 0x12dc29b0 */
  push32(0x12dc4a66u); f_12dc29b0();
  /* 12dc4a66 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4a69 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4a6c jne 0x12dc4a6f */
  if (!C.zf) goto L_12dc4a6f;
  /* 12dc4a6e int3  */
  x86_unimpl("int3 @ 0x12dc4a6e");
L_12dc4a6f:;
  /* 12dc4a6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc4a71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc4a73 jne 0x12dc4a3b */
  if (!C.zf) goto L_12dc4a3b;
  /* 12dc4a75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12dc4a7c:;
  /* 12dc4a7c jmp 0x12dc4a0e */
  goto L_12dc4a0e;
L_12dc4a7e:;
  /* 12dc4a7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4a81 pop edi */
  EDI = (pop32());
  /* 12dc4a82 pop esi */
  ESI = (pop32());
  /* 12dc4a83 pop ebx */
  EBX = (pop32());
  /* 12dc4a84 mov esp, ebp */
  ESP = (EBP);
  /* 12dc4a86 pop ebp */
  EBP = (pop32());
  /* 12dc4a87 ret  */
  ESPCHK(0x12dc4a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a90 @ 0x12dc4a90 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12dc4a90(void) {
  FTRACE(0x12dc4a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc4a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc4a91 mov ebp, esp */
  EBP = (ESP);
  /* 12dc4a93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc4a96 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc4a97 push esi */
  push32((uint32_t)(ESI));
  /* 12dc4a98 push edi */
  push32((uint32_t)(EDI));
  /* 12dc4a99 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12dc4aa0 mov eax, dword ptr [0x12ddda84] */
  EAX = (r32((uint32_t)(0x12ddda84)));
  /* 12dc4aa5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12dc4aa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc4aaa jne 0x12dc4ab6 */
  if (!C.zf) goto L_12dc4ab6;
  /* 12dc4aac mov eax, 1 */
  EAX = (0x1u);
  /* 12dc4ab1 jmp 0x12dc4de8 */
  goto L_12dc4de8;
L_12dc4ab6:;
  /* 12dc4ab6 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc4ab8 call 0x12dc72f0 */
  push32(0x12dc4abdu); f_12dc72f0();
  /* 12dc4abd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4ac0 call 0x12dc7ad0 */
  push32(0x12dc4ac5u); f_12dc7ad0();
  /* 12dc4ac5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dc4ac8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4acc je 0x12dc4bd9 */
  if (C.zf) goto L_12dc4bd9;
  /* 12dc4ad2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4ad6 je 0x12dc4bd9 */
  if (C.zf) goto L_12dc4bd9;
  /* 12dc4adc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc4adf mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12dc4ae2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc4ae5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4ae8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12dc4aeb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4aef ja 0x12dc4ba2 */
  if ((!C.cf&&!C.zf)) goto L_12dc4ba2;
  /* 12dc4af5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc4af8 jmp dword ptr [eax*4 + 0x12dc4def] */
  switch (EAX) {
    case 0: goto L_12dc4b7a;
    case 1: goto L_12dc4b52;
    case 2: goto L_12dc4b2a;
    case 3: goto L_12dc4aff;
    default: x86_unimpl("switch@0x12dc4af8 out of table"); return;
  }
L_12dc4aff:;
  /* 12dc4aff push 0x12ddaad8 */
  push32((uint32_t)(0x12ddaad8u));
  /* 12dc4b04 push 0x12dda638 */
  push32((uint32_t)(0x12dda638u));
  /* 12dc4b09 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4b0b push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4b0d push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4b0f push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4b11 call 0x12dc29b0 */
  push32(0x12dc4b16u); f_12dc29b0();
  /* 12dc4b16 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4b19 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4b1c jne 0x12dc4b1f */
  if (!C.zf) goto L_12dc4b1f;
  /* 12dc4b1e int3  */
  x86_unimpl("int3 @ 0x12dc4b1e");
L_12dc4b1f:;
  /* 12dc4b1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc4b21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc4b23 jne 0x12dc4aff */
  if (!C.zf) goto L_12dc4aff;
  /* 12dc4b25 jmp 0x12dc4bc8 */
  goto L_12dc4bc8;
L_12dc4b2a:;
  /* 12dc4b2a push 0x12ddaab4 */
  push32((uint32_t)(0x12ddaab4u));
  /* 12dc4b2f push 0x12dda638 */
  push32((uint32_t)(0x12dda638u));
  /* 12dc4b34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4b36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4b38 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4b3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4b3c call 0x12dc29b0 */
  push32(0x12dc4b41u); f_12dc29b0();
  /* 12dc4b41 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4b44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4b47 jne 0x12dc4b4a */
  if (!C.zf) goto L_12dc4b4a;
  /* 12dc4b49 int3  */
  x86_unimpl("int3 @ 0x12dc4b49");
L_12dc4b4a:;
  /* 12dc4b4a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc4b4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc4b4e jne 0x12dc4b2a */
  if (!C.zf) goto L_12dc4b2a;
  /* 12dc4b50 jmp 0x12dc4bc8 */
  goto L_12dc4bc8;
L_12dc4b52:;
  /* 12dc4b52 push 0x12ddaa90 */
  push32((uint32_t)(0x12ddaa90u));
  /* 12dc4b57 push 0x12dda638 */
  push32((uint32_t)(0x12dda638u));
  /* 12dc4b5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4b5e push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4b60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4b62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4b64 call 0x12dc29b0 */
  push32(0x12dc4b69u); f_12dc29b0();
  /* 12dc4b69 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4b6c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4b6f jne 0x12dc4b72 */
  if (!C.zf) goto L_12dc4b72;
  /* 12dc4b71 int3  */
  x86_unimpl("int3 @ 0x12dc4b71");
L_12dc4b72:;
  /* 12dc4b72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc4b74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc4b76 jne 0x12dc4b52 */
  if (!C.zf) goto L_12dc4b52;
  /* 12dc4b78 jmp 0x12dc4bc8 */
  goto L_12dc4bc8;
L_12dc4b7a:;
  /* 12dc4b7a push 0x12ddaa6c */
  push32((uint32_t)(0x12ddaa6cu));
  /* 12dc4b7f push 0x12dda638 */
  push32((uint32_t)(0x12dda638u));
  /* 12dc4b84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4b86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4b88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4b8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4b8c call 0x12dc29b0 */
  push32(0x12dc4b91u); f_12dc29b0();
  /* 12dc4b91 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4b94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4b97 jne 0x12dc4b9a */
  if (!C.zf) goto L_12dc4b9a;
  /* 12dc4b99 int3  */
  x86_unimpl("int3 @ 0x12dc4b99");
L_12dc4b9a:;
  /* 12dc4b9a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc4b9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc4b9e jne 0x12dc4b7a */
  if (!C.zf) goto L_12dc4b7a;
  /* 12dc4ba0 jmp 0x12dc4bc8 */
  goto L_12dc4bc8;
L_12dc4ba2:;
  /* 12dc4ba2 push 0x12ddaa40 */
  push32((uint32_t)(0x12ddaa40u));
  /* 12dc4ba7 push 0x12dda638 */
  push32((uint32_t)(0x12dda638u));
  /* 12dc4bac push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4bae push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4bb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4bb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4bb4 call 0x12dc29b0 */
  push32(0x12dc4bb9u); f_12dc29b0();
  /* 12dc4bb9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4bbc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4bbf jne 0x12dc4bc2 */
  if (!C.zf) goto L_12dc4bc2;
  /* 12dc4bc1 int3  */
  x86_unimpl("int3 @ 0x12dc4bc1");
L_12dc4bc2:;
  /* 12dc4bc2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc4bc4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc4bc6 jne 0x12dc4ba2 */
  if (!C.zf) goto L_12dc4ba2;
L_12dc4bc8:;
  /* 12dc4bc8 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc4bca call 0x12dc7390 */
  push32(0x12dc4bcfu); f_12dc7390();
  /* 12dc4bcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4bd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc4bd4 jmp 0x12dc4de8 */
  goto L_12dc4de8;
L_12dc4bd9:;
  /* 12dc4bd9 mov eax, dword ptr [0x12ddf580] */
  EAX = (r32((uint32_t)(0x12ddf580)));
  /* 12dc4bde mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dc4be1 jmp 0x12dc4beb */
  goto L_12dc4beb;
L_12dc4be3:;
  /* 12dc4be3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4be6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dc4be8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12dc4beb:;
  /* 12dc4beb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4bef je 0x12dc4ddb */
  if (C.zf) goto L_12dc4ddb;
  /* 12dc4bf5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12dc4bfc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4bff mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12dc4c02 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc4c08 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4c0b je 0x12dc4c30 */
  if (C.zf) goto L_12dc4c30;
  /* 12dc4c0d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4c10 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4c14 je 0x12dc4c30 */
  if (C.zf) goto L_12dc4c30;
  /* 12dc4c16 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4c19 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12dc4c1c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc4c22 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4c25 je 0x12dc4c30 */
  if (C.zf) goto L_12dc4c30;
  /* 12dc4c27 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4c2a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4c2e jne 0x12dc4c48 */
  if (!C.zf) goto L_12dc4c48;
L_12dc4c30:;
  /* 12dc4c30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4c33 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12dc4c36 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc4c3c mov edx, dword ptr [ecx*4 + 0x12ddda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ddda94)));
  /* 12dc4c43 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12dc4c46 jmp 0x12dc4c4f */
  goto L_12dc4c4f;
L_12dc4c48:;
  /* 12dc4c48 mov dword ptr [ebp - 0x14], 0x12ddaa38 */
  w32((uint32_t)(EBP + -0x14), (0x12ddaa38u));
L_12dc4c4f:;
  /* 12dc4c4f push 4 */
  push32((uint32_t)(0x4u));
  /* 12dc4c51 mov al, byte ptr [0x12ddda90] */
  AL = (r8((uint32_t)(0x12ddda90)));
  /* 12dc4c56 push eax */
  push32((uint32_t)(EAX));
  /* 12dc4c57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4c5a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4c5d push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4c5e call 0x12dc4a00 */
  push32(0x12dc4c63u); f_12dc4a00();
  /* 12dc4c63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4c66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc4c68 jne 0x12dc4ca4 */
  if (!C.zf) goto L_12dc4ca4;
L_12dc4c6a:;
  /* 12dc4c6a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4c6d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4c70 push edx */
  push32((uint32_t)(EDX));
  /* 12dc4c71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4c74 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12dc4c77 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4c78 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc4c7b push edx */
  push32((uint32_t)(EDX));
  /* 12dc4c7c push 0x12dda914 */
  push32((uint32_t)(0x12dda914u));
  /* 12dc4c81 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4c83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4c85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4c87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4c89 call 0x12dc29b0 */
  push32(0x12dc4c8eu); f_12dc29b0();
  /* 12dc4c8e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4c91 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4c94 jne 0x12dc4c97 */
  if (!C.zf) goto L_12dc4c97;
  /* 12dc4c96 int3  */
  x86_unimpl("int3 @ 0x12dc4c96");
L_12dc4c97:;
  /* 12dc4c97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc4c99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc4c9b jne 0x12dc4c6a */
  if (!C.zf) goto L_12dc4c6a;
  /* 12dc4c9d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12dc4ca4:;
  /* 12dc4ca4 push 4 */
  push32((uint32_t)(0x4u));
  /* 12dc4ca6 mov cl, byte ptr [0x12ddda90] */
  CL = (r8((uint32_t)(0x12ddda90)));
  /* 12dc4cac push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4cad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4cb0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12dc4cb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4cb6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12dc4cba push edx */
  push32((uint32_t)(EDX));
  /* 12dc4cbb call 0x12dc4a00 */
  push32(0x12dc4cc0u); f_12dc4a00();
  /* 12dc4cc0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4cc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc4cc5 jne 0x12dc4d01 */
  if (!C.zf) goto L_12dc4d01;
L_12dc4cc7:;
  /* 12dc4cc7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4cca add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4ccd push eax */
  push32((uint32_t)(EAX));
  /* 12dc4cce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4cd1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12dc4cd4 push edx */
  push32((uint32_t)(EDX));
  /* 12dc4cd5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc4cd8 push eax */
  push32((uint32_t)(EAX));
  /* 12dc4cd9 push 0x12dda8e8 */
  push32((uint32_t)(0x12dda8e8u));
  /* 12dc4cde push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4ce0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4ce2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4ce4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4ce6 call 0x12dc29b0 */
  push32(0x12dc4cebu); f_12dc29b0();
  /* 12dc4ceb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4cee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4cf1 jne 0x12dc4cf4 */
  if (!C.zf) goto L_12dc4cf4;
  /* 12dc4cf3 int3  */
  x86_unimpl("int3 @ 0x12dc4cf3");
L_12dc4cf4:;
  /* 12dc4cf4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc4cf6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc4cf8 jne 0x12dc4cc7 */
  if (!C.zf) goto L_12dc4cc7;
  /* 12dc4cfa mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12dc4d01:;
  /* 12dc4d01 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4d04 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4d08 jne 0x12dc4d5a */
  if (!C.zf) goto L_12dc4d5a;
  /* 12dc4d0a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4d0d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dc4d10 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4d11 mov dl, byte ptr [0x12ddda91] */
  DL = (r8((uint32_t)(0x12ddda91)));
  /* 12dc4d17 push edx */
  push32((uint32_t)(EDX));
  /* 12dc4d18 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4d1b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4d1e push eax */
  push32((uint32_t)(EAX));
  /* 12dc4d1f call 0x12dc4a00 */
  push32(0x12dc4d24u); f_12dc4a00();
  /* 12dc4d24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4d27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc4d29 jne 0x12dc4d5a */
  if (!C.zf) goto L_12dc4d5a;
L_12dc4d2b:;
  /* 12dc4d2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4d2e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4d31 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4d32 push 0x12ddaa0c */
  push32((uint32_t)(0x12ddaa0cu));
  /* 12dc4d37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4d39 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4d3b push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4d3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4d3f call 0x12dc29b0 */
  push32(0x12dc4d44u); f_12dc29b0();
  /* 12dc4d44 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4d47 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4d4a jne 0x12dc4d4d */
  if (!C.zf) goto L_12dc4d4d;
  /* 12dc4d4c int3  */
  x86_unimpl("int3 @ 0x12dc4d4c");
L_12dc4d4d:;
  /* 12dc4d4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc4d4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc4d51 jne 0x12dc4d2b */
  if (!C.zf) goto L_12dc4d2b;
  /* 12dc4d53 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12dc4d5a:;
  /* 12dc4d5a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4d5e jne 0x12dc4dd6 */
  if (!C.zf) goto L_12dc4dd6;
  /* 12dc4d60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4d63 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4d67 je 0x12dc4d9c */
  if (C.zf) goto L_12dc4d9c;
L_12dc4d69:;
  /* 12dc4d69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4d6c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dc4d6f push edx */
  push32((uint32_t)(EDX));
  /* 12dc4d70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4d73 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dc4d76 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4d77 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc4d7a push edx */
  push32((uint32_t)(EDX));
  /* 12dc4d7b push 0x12dda9ec */
  push32((uint32_t)(0x12dda9ecu));
  /* 12dc4d80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4d82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4d84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4d86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4d88 call 0x12dc29b0 */
  push32(0x12dc4d8du); f_12dc29b0();
  /* 12dc4d8d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4d90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4d93 jne 0x12dc4d96 */
  if (!C.zf) goto L_12dc4d96;
  /* 12dc4d95 int3  */
  x86_unimpl("int3 @ 0x12dc4d95");
L_12dc4d96:;
  /* 12dc4d96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc4d98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc4d9a jne 0x12dc4d69 */
  if (!C.zf) goto L_12dc4d69;
L_12dc4d9c:;
  /* 12dc4d9c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4d9f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12dc4da2 push edx */
  push32((uint32_t)(EDX));
  /* 12dc4da3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc4da6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4da9 push eax */
  push32((uint32_t)(EAX));
  /* 12dc4daa mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc4dad push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4dae push 0x12dda9c0 */
  push32((uint32_t)(0x12dda9c0u));
  /* 12dc4db3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4db5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4db7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4db9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4dbb call 0x12dc29b0 */
  push32(0x12dc4dc0u); f_12dc29b0();
  /* 12dc4dc0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4dc3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4dc6 jne 0x12dc4dc9 */
  if (!C.zf) goto L_12dc4dc9;
  /* 12dc4dc8 int3  */
  x86_unimpl("int3 @ 0x12dc4dc8");
L_12dc4dc9:;
  /* 12dc4dc9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc4dcb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc4dcd jne 0x12dc4d9c */
  if (!C.zf) goto L_12dc4d9c;
  /* 12dc4dcf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12dc4dd6:;
  /* 12dc4dd6 jmp 0x12dc4be3 */
  goto L_12dc4be3;
L_12dc4ddb:;
  /* 12dc4ddb push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc4ddd call 0x12dc7390 */
  push32(0x12dc4de2u); f_12dc7390();
  /* 12dc4de2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4de5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12dc4de8:;
  /* 12dc4de8 pop edi */
  EDI = (pop32());
  /* 12dc4de9 pop esi */
  ESI = (pop32());
  /* 12dc4dea pop ebx */
  EBX = (pop32());
  /* 12dc4deb mov esp, ebp */
  ESP = (EBP);
  /* 12dc4ded pop ebp */
  EBP = (pop32());
  /* 12dc4dee ret  */
  ESPCHK(0x12dc4a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e00 @ 0x12dc4e00 (34 bytes, 13 insns) */
void f_12dc4e00(void) {
  FTRACE(0x12dc4e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc4e00 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc4e01 mov ebp, esp */
  EBP = (ESP);
  /* 12dc4e03 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4e04 mov eax, dword ptr [0x12ddda84] */
  EAX = (r32((uint32_t)(0x12ddda84)));
  /* 12dc4e09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc4e0c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4e10 je 0x12dc4e1b */
  if (C.zf) goto L_12dc4e1b;
  /* 12dc4e12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc4e15 mov dword ptr [0x12ddda84], ecx */
  w32((uint32_t)(0x12ddda84), (ECX));
L_12dc4e1b:;
  /* 12dc4e1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4e1e mov esp, ebp */
  ESP = (EBP);
  /* 12dc4e20 pop ebp */
  EBP = (pop32());
  /* 12dc4e21 ret  */
  ESPCHK(0x12dc4e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e30 @ 0x12dc4e30 (103 bytes, 38 insns) */
void f_12dc4e30(void) {
  FTRACE(0x12dc4e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc4e30 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc4e31 mov ebp, esp */
  EBP = (ESP);
  /* 12dc4e33 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4e34 mov eax, dword ptr [0x12ddda84] */
  EAX = (r32((uint32_t)(0x12ddda84)));
  /* 12dc4e39 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12dc4e3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc4e3e jne 0x12dc4e42 */
  if (!C.zf) goto L_12dc4e42;
  /* 12dc4e40 jmp 0x12dc4e93 */
  goto L_12dc4e93;
L_12dc4e42:;
  /* 12dc4e42 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc4e44 call 0x12dc72f0 */
  push32(0x12dc4e49u); f_12dc72f0();
  /* 12dc4e49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4e4c mov ecx, dword ptr [0x12ddf580] */
  ECX = (r32((uint32_t)(0x12ddf580)));
  /* 12dc4e52 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dc4e55 jmp 0x12dc4e5f */
  goto L_12dc4e5f;
L_12dc4e57:;
  /* 12dc4e57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4e5a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dc4e5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dc4e5f:;
  /* 12dc4e5f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4e63 je 0x12dc4e89 */
  if (C.zf) goto L_12dc4e89;
  /* 12dc4e65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4e68 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12dc4e6b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dc4e71 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4e74 jne 0x12dc4e87 */
  if (!C.zf) goto L_12dc4e87;
  /* 12dc4e76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc4e79 push eax */
  push32((uint32_t)(EAX));
  /* 12dc4e7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4e7d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4e80 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4e81 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12dc4e84u);
  /* 12dc4e84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc4e87:;
  /* 12dc4e87 jmp 0x12dc4e57 */
  goto L_12dc4e57;
L_12dc4e89:;
  /* 12dc4e89 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc4e8b call 0x12dc7390 */
  push32(0x12dc4e90u); f_12dc7390();
  /* 12dc4e90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc4e93:;
  /* 12dc4e93 mov esp, ebp */
  ESP = (EBP);
  /* 12dc4e95 pop ebp */
  EBP = (pop32());
  /* 12dc4e96 ret  */
  ESPCHK(0x12dc4e30u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12dc4ea0 (75 bytes, 28 insns) */
void f_12dc4ea0(void) {
  FTRACE(0x12dc4ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc4ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc4ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc4ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4ea4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4ea8 je 0x12dc4edd */
  if (C.zf) goto L_12dc4edd;
  /* 12dc4eaa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc4ead push eax */
  push32((uint32_t)(EAX));
  /* 12dc4eae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc4eb1 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4eb2 call dword ptr [0x12de2374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2374))), 0x12dc4eb8u);
  /* 12dc4eb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc4eba jne 0x12dc4edd */
  if (!C.zf) goto L_12dc4edd;
  /* 12dc4ebc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4ec0 je 0x12dc4ed4 */
  if (C.zf) goto L_12dc4ed4;
  /* 12dc4ec2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc4ec5 push edx */
  push32((uint32_t)(EDX));
  /* 12dc4ec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc4ec9 push eax */
  push32((uint32_t)(EAX));
  /* 12dc4eca call dword ptr [0x12de2378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2378))), 0x12dc4ed0u);
  /* 12dc4ed0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc4ed2 jne 0x12dc4edd */
  if (!C.zf) goto L_12dc4edd;
L_12dc4ed4:;
  /* 12dc4ed4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12dc4edb jmp 0x12dc4ee4 */
  goto L_12dc4ee4;
L_12dc4edd:;
  /* 12dc4edd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12dc4ee4:;
  /* 12dc4ee4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4ee7 mov esp, ebp */
  ESP = (EBP);
  /* 12dc4ee9 pop ebp */
  EBP = (pop32());
  /* 12dc4eea ret  */
  ESPCHK(0x12dc4ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ef0 @ 0x12dc4ef0 (134 bytes, 50 insns) */
void f_12dc4ef0(void) {
  FTRACE(0x12dc4ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc4ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc4ef1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc4ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4ef4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4ef8 jne 0x12dc4efe */
  if (!C.zf) goto L_12dc4efe;
  /* 12dc4efa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc4efc jmp 0x12dc4f72 */
  goto L_12dc4f72;
L_12dc4efe:;
  /* 12dc4efe push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc4f00 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12dc4f02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc4f05 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc4f08 push eax */
  push32((uint32_t)(EAX));
  /* 12dc4f09 call 0x12dc4ea0 */
  push32(0x12dc4f0eu); f_12dc4ea0();
  /* 12dc4f0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4f11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc4f13 jne 0x12dc4f19 */
  if (!C.zf) goto L_12dc4f19;
  /* 12dc4f15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc4f17 jmp 0x12dc4f72 */
  goto L_12dc4f72;
L_12dc4f19:;
  /* 12dc4f19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc4f1c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc4f1f push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4f20 call 0x12dc7bf0 */
  push32(0x12dc4f25u); f_12dc7bf0();
  /* 12dc4f25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4f28 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc4f2b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4f2f je 0x12dc4f46 */
  if (C.zf) goto L_12dc4f46;
  /* 12dc4f31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc4f34 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc4f37 push edx */
  push32((uint32_t)(EDX));
  /* 12dc4f38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4f3b push eax */
  push32((uint32_t)(EAX));
  /* 12dc4f3c call 0x12dc7c50 */
  push32(0x12dc4f41u); f_12dc7c50();
  /* 12dc4f41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4f44 jmp 0x12dc4f72 */
  goto L_12dc4f72;
L_12dc4f46:;
  /* 12dc4f46 mov ecx, dword ptr [0x12ddf534] */
  ECX = (r32((uint32_t)(0x12ddf534)));
  /* 12dc4f4c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12dc4f52 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc4f54 je 0x12dc4f5d */
  if (C.zf) goto L_12dc4f5d;
  /* 12dc4f56 mov eax, 1 */
  EAX = (0x1u);
  /* 12dc4f5b jmp 0x12dc4f72 */
  goto L_12dc4f72;
L_12dc4f5d:;
  /* 12dc4f5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc4f60 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc4f63 push edx */
  push32((uint32_t)(EDX));
  /* 12dc4f64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc4f66 mov eax, dword ptr [0x12de0ecc] */
  EAX = (r32((uint32_t)(0x12de0ecc)));
  /* 12dc4f6b push eax */
  push32((uint32_t)(EAX));
  /* 12dc4f6c call dword ptr [0x12de23a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23a0))), 0x12dc4f72u);
L_12dc4f72:;
  /* 12dc4f72 mov esp, ebp */
  ESP = (EBP);
  /* 12dc4f74 pop ebp */
  EBP = (pop32());
  /* 12dc4f75 ret  */
  ESPCHK(0x12dc4ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f80 @ 0x12dc4f80 (227 bytes, 80 insns) */
void f_12dc4f80(void) {
  FTRACE(0x12dc4f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc4f80 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc4f81 mov ebp, esp */
  EBP = (ESP);
  /* 12dc4f83 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc4f84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc4f87 push eax */
  push32((uint32_t)(EAX));
  /* 12dc4f88 call 0x12dc4ef0 */
  push32(0x12dc4f8du); f_12dc4ef0();
  /* 12dc4f8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4f90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc4f92 jne 0x12dc4f9b */
  if (!C.zf) goto L_12dc4f9b;
  /* 12dc4f94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc4f96 jmp 0x12dc505f */
  goto L_12dc505f;
L_12dc4f9b:;
  /* 12dc4f9b push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc4f9d call 0x12dc72f0 */
  push32(0x12dc4fa2u); f_12dc72f0();
  /* 12dc4fa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4fa5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc4fa8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc4fab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dc4fae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4fb1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dc4fb4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc4fb9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4fbc je 0x12dc4fe0 */
  if (C.zf) goto L_12dc4fe0;
  /* 12dc4fbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4fc1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4fc5 je 0x12dc4fe0 */
  if (C.zf) goto L_12dc4fe0;
  /* 12dc4fc7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4fca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dc4fcd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc4fd2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4fd5 je 0x12dc4fe0 */
  if (C.zf) goto L_12dc4fe0;
  /* 12dc4fd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4fda cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4fde jne 0x12dc5053 */
  if (!C.zf) goto L_12dc5053;
L_12dc4fe0:;
  /* 12dc4fe0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc4fe2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc4fe5 push edx */
  push32((uint32_t)(EDX));
  /* 12dc4fe6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc4fe9 push eax */
  push32((uint32_t)(EAX));
  /* 12dc4fea call 0x12dc4ea0 */
  push32(0x12dc4fefu); f_12dc4ea0();
  /* 12dc4fef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc4ff2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc4ff4 je 0x12dc5053 */
  if (C.zf) goto L_12dc5053;
  /* 12dc4ff6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc4ff9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12dc4ffc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc4fff jne 0x12dc5053 */
  if (!C.zf) goto L_12dc5053;
  /* 12dc5001 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5004 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12dc5007 cmp ecx, dword ptr [0x12ddda88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ddda88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc500d jg 0x12dc5053 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dc5053;
  /* 12dc500f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5013 je 0x12dc5020 */
  if (C.zf) goto L_12dc5020;
  /* 12dc5015 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5018 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc501b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12dc501e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12dc5020:;
  /* 12dc5020 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5024 je 0x12dc5031 */
  if (C.zf) goto L_12dc5031;
  /* 12dc5026 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc5029 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc502c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dc502f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12dc5031:;
  /* 12dc5031 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5035 je 0x12dc5042 */
  if (C.zf) goto L_12dc5042;
  /* 12dc5037 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc503a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc503d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12dc5040 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12dc5042:;
  /* 12dc5042 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc5044 call 0x12dc7390 */
  push32(0x12dc5049u); f_12dc7390();
  /* 12dc5049 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc504c mov eax, 1 */
  EAX = (0x1u);
  /* 12dc5051 jmp 0x12dc505f */
  goto L_12dc505f;
L_12dc5053:;
  /* 12dc5053 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc5055 call 0x12dc7390 */
  push32(0x12dc505au); f_12dc7390();
  /* 12dc505a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc505d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dc505f:;
  /* 12dc505f mov esp, ebp */
  ESP = (EBP);
  /* 12dc5061 pop ebp */
  EBP = (pop32());
  /* 12dc5062 ret  */
  ESPCHK(0x12dc4f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005070 @ 0x12dc5070 (28 bytes, 11 insns) */
void f_12dc5070(void) {
  FTRACE(0x12dc5070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc5070 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc5071 mov ebp, esp */
  EBP = (ESP);
  /* 12dc5073 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc5074 mov eax, dword ptr [0x12de0ed8] */
  EAX = (r32((uint32_t)(0x12de0ed8)));
  /* 12dc5079 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc507c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc507f mov dword ptr [0x12de0ed8], ecx */
  w32((uint32_t)(0x12de0ed8), (ECX));
  /* 12dc5085 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5088 mov esp, ebp */
  ESP = (EBP);
  /* 12dc508a pop ebp */
  EBP = (pop32());
  /* 12dc508b ret  */
  ESPCHK(0x12dc5070u, _esp0);
  ESP += 4; return;
}

/* FUN_10005090 @ 0x12dc5090 (362 bytes, 116 insns) */
void f_12dc5090(void) {
  FTRACE(0x12dc5090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc5090 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc5091 mov ebp, esp */
  EBP = (ESP);
  /* 12dc5093 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc5096 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc5097 push esi */
  push32((uint32_t)(ESI));
  /* 12dc5098 push edi */
  push32((uint32_t)(EDI));
  /* 12dc5099 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc509d jne 0x12dc50ca */
  if (!C.zf) goto L_12dc50ca;
L_12dc509f:;
  /* 12dc509f push 0x12ddab20 */
  push32((uint32_t)(0x12ddab20u));
  /* 12dc50a4 push 0x12dda638 */
  push32((uint32_t)(0x12dda638u));
  /* 12dc50a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc50ab push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc50ad push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc50af push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc50b1 call 0x12dc29b0 */
  push32(0x12dc50b6u); f_12dc29b0();
  /* 12dc50b6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc50b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc50bc jne 0x12dc50bf */
  if (!C.zf) goto L_12dc50bf;
  /* 12dc50be int3  */
  x86_unimpl("int3 @ 0x12dc50be");
L_12dc50bf:;
  /* 12dc50bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc50c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc50c3 jne 0x12dc509f */
  if (!C.zf) goto L_12dc509f;
  /* 12dc50c5 jmp 0x12dc51f3 */
  goto L_12dc51f3;
L_12dc50ca:;
  /* 12dc50ca push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc50cc call 0x12dc72f0 */
  push32(0x12dc50d1u); f_12dc72f0();
  /* 12dc50d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc50d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc50d7 mov edx, dword ptr [0x12ddf580] */
  EDX = (r32((uint32_t)(0x12ddf580)));
  /* 12dc50dd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12dc50df mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dc50e6 jmp 0x12dc50f1 */
  goto L_12dc50f1;
L_12dc50e8:;
  /* 12dc50e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc50eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc50ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dc50f1:;
  /* 12dc50f1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc50f5 jge 0x12dc5115 */
  if ((C.sf==C.of)) goto L_12dc5115;
  /* 12dc50f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc50fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc50fd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12dc5105 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5108 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc510b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12dc5113 jmp 0x12dc50e8 */
  goto L_12dc50e8;
L_12dc5115:;
  /* 12dc5115 mov edx, dword ptr [0x12ddf580] */
  EDX = (r32((uint32_t)(0x12ddf580)));
  /* 12dc511b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12dc511e jmp 0x12dc5128 */
  goto L_12dc5128;
L_12dc5120:;
  /* 12dc5120 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc5123 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dc5125 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12dc5128:;
  /* 12dc5128 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc512c je 0x12dc51d1 */
  if (C.zf) goto L_12dc51d1;
  /* 12dc5132 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc5135 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dc5138 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc513d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc513f jl 0x12dc51a7 */
  if ((C.sf!=C.of)) goto L_12dc51a7;
  /* 12dc5141 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc5144 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12dc5147 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dc514d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5150 jge 0x12dc51a7 */
  if ((C.sf==C.of)) goto L_12dc51a7;
  /* 12dc5152 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc5155 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12dc5158 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc515e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc5161 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12dc5165 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5168 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc516b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12dc516e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dc5174 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc5177 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 12dc517b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc517e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dc5181 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc5186 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc5189 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12dc518d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc5190 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5193 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc5196 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12dc5199 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc519e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc51a1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12dc51a5 jmp 0x12dc51cc */
  goto L_12dc51cc;
L_12dc51a7:;
  /* 12dc51a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc51aa push edx */
  push32((uint32_t)(EDX));
  /* 12dc51ab push 0x12ddaafc */
  push32((uint32_t)(0x12ddaafcu));
  /* 12dc51b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc51b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc51b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc51b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc51b8 call 0x12dc29b0 */
  push32(0x12dc51bdu); f_12dc29b0();
  /* 12dc51bd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc51c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc51c3 jne 0x12dc51c6 */
  if (!C.zf) goto L_12dc51c6;
  /* 12dc51c5 int3  */
  x86_unimpl("int3 @ 0x12dc51c5");
L_12dc51c6:;
  /* 12dc51c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc51c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc51ca jne 0x12dc51a7 */
  if (!C.zf) goto L_12dc51a7;
L_12dc51cc:;
  /* 12dc51cc jmp 0x12dc5120 */
  goto L_12dc5120;
L_12dc51d1:;
  /* 12dc51d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc51d4 mov edx, dword ptr [0x12ddf588] */
  EDX = (r32((uint32_t)(0x12ddf588)));
  /* 12dc51da mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 12dc51dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc51e0 mov ecx, dword ptr [0x12ddf57c] */
  ECX = (r32((uint32_t)(0x12ddf57c)));
  /* 12dc51e6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12dc51e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc51eb call 0x12dc7390 */
  push32(0x12dc51f0u); f_12dc7390();
  /* 12dc51f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc51f3:;
  /* 12dc51f3 pop edi */
  EDI = (pop32());
  /* 12dc51f4 pop esi */
  ESI = (pop32());
  /* 12dc51f5 pop ebx */
  EBX = (pop32());
  /* 12dc51f6 mov esp, ebp */
  ESP = (EBP);
  /* 12dc51f8 pop ebp */
  EBP = (pop32());
  /* 12dc51f9 ret  */
  ESPCHK(0x12dc5090u, _esp0);
  ESP += 4; return;
}

/* FUN_10005200 @ 0x12dc5200 (291 bytes, 95 insns) */
void f_12dc5200(void) {
  FTRACE(0x12dc5200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc5200 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc5201 mov ebp, esp */
  EBP = (ESP);
  /* 12dc5203 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc5206 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc5207 push esi */
  push32((uint32_t)(ESI));
  /* 12dc5208 push edi */
  push32((uint32_t)(EDI));
  /* 12dc5209 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12dc5210 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5214 je 0x12dc5222 */
  if (C.zf) goto L_12dc5222;
  /* 12dc5216 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc521a je 0x12dc5222 */
  if (C.zf) goto L_12dc5222;
  /* 12dc521c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5220 jne 0x12dc5250 */
  if (!C.zf) goto L_12dc5250;
L_12dc5222:;
  /* 12dc5222 push 0x12ddab48 */
  push32((uint32_t)(0x12ddab48u));
  /* 12dc5227 push 0x12dda638 */
  push32((uint32_t)(0x12dda638u));
  /* 12dc522c push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc522e push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5230 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5232 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5234 call 0x12dc29b0 */
  push32(0x12dc5239u); f_12dc29b0();
  /* 12dc5239 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc523c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc523f jne 0x12dc5242 */
  if (!C.zf) goto L_12dc5242;
  /* 12dc5241 int3  */
  x86_unimpl("int3 @ 0x12dc5241");
L_12dc5242:;
  /* 12dc5242 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc5244 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc5246 jne 0x12dc5222 */
  if (!C.zf) goto L_12dc5222;
  /* 12dc5248 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc524b jmp 0x12dc531c */
  goto L_12dc531c;
L_12dc5250:;
  /* 12dc5250 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dc5257 jmp 0x12dc5262 */
  goto L_12dc5262;
L_12dc5259:;
  /* 12dc5259 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc525c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc525f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dc5262:;
  /* 12dc5262 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5266 jge 0x12dc52ec */
  if ((C.sf==C.of)) goto L_12dc52ec;
  /* 12dc526c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc526f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5272 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5275 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc5278 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 12dc527c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc5280 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5283 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc5286 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12dc528a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc528d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5290 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5293 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc5296 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 12dc529a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc529e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc52a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc52a4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12dc52a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc52ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc52ae cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc52b3 jne 0x12dc52c2 */
  if (!C.zf) goto L_12dc52c2;
  /* 12dc52b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc52b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc52bb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc52c0 je 0x12dc52e7 */
  if (C.zf) goto L_12dc52e7;
L_12dc52c2:;
  /* 12dc52c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc52c6 je 0x12dc52e7 */
  if (C.zf) goto L_12dc52e7;
  /* 12dc52c8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc52cc jne 0x12dc52e0 */
  if (!C.zf) goto L_12dc52e0;
  /* 12dc52ce cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc52d2 jne 0x12dc52e7 */
  if (!C.zf) goto L_12dc52e7;
  /* 12dc52d4 mov eax, dword ptr [0x12ddda84] */
  EAX = (r32((uint32_t)(0x12ddda84)));
  /* 12dc52d9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12dc52dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc52de je 0x12dc52e7 */
  if (C.zf) goto L_12dc52e7;
L_12dc52e0:;
  /* 12dc52e0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12dc52e7:;
  /* 12dc52e7 jmp 0x12dc5259 */
  goto L_12dc5259;
L_12dc52ec:;
  /* 12dc52ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc52ef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc52f2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12dc52f5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc52f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc52fb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 12dc52fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5301 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc5304 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12dc5307 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc530a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc530d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12dc5310 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc5313 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12dc5319 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12dc531c:;
  /* 12dc531c pop edi */
  EDI = (pop32());
  /* 12dc531d pop esi */
  ESI = (pop32());
  /* 12dc531e pop ebx */
  EBX = (pop32());
  /* 12dc531f mov esp, ebp */
  ESP = (EBP);
  /* 12dc5321 pop ebp */
  EBP = (pop32());
  /* 12dc5322 ret  */
  ESPCHK(0x12dc5200u, _esp0);
  ESP += 4; return;
}

/* FUN_10005330 @ 0x12dc5330 (697 bytes, 253 insns) */
void f_12dc5330(void) {
  FTRACE(0x12dc5330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc5330 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc5331 mov ebp, esp */
  EBP = (ESP);
  /* 12dc5333 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc5336 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc5337 push esi */
  push32((uint32_t)(ESI));
  /* 12dc5338 push edi */
  push32((uint32_t)(EDI));
  /* 12dc5339 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12dc5340 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc5342 call 0x12dc72f0 */
  push32(0x12dc5347u); f_12dc72f0();
  /* 12dc5347 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc534a:;
  /* 12dc534a push 0x12ddac40 */
  push32((uint32_t)(0x12ddac40u));
  /* 12dc534f push 0x12dda638 */
  push32((uint32_t)(0x12dda638u));
  /* 12dc5354 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5356 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5358 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc535a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc535c call 0x12dc29b0 */
  push32(0x12dc5361u); f_12dc29b0();
  /* 12dc5361 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5364 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5367 jne 0x12dc536a */
  if (!C.zf) goto L_12dc536a;
  /* 12dc5369 int3  */
  x86_unimpl("int3 @ 0x12dc5369");
L_12dc536a:;
  /* 12dc536a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc536c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc536e jne 0x12dc534a */
  if (!C.zf) goto L_12dc534a;
  /* 12dc5370 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5374 je 0x12dc537e */
  if (C.zf) goto L_12dc537e;
  /* 12dc5376 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc5379 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dc537b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12dc537e:;
  /* 12dc537e mov eax, dword ptr [0x12ddf580] */
  EAX = (r32((uint32_t)(0x12ddf580)));
  /* 12dc5383 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc5386 jmp 0x12dc5390 */
  goto L_12dc5390;
L_12dc5388:;
  /* 12dc5388 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc538b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dc538d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12dc5390:;
  /* 12dc5390 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5394 je 0x12dc55b2 */
  if (C.zf) goto L_12dc55b2;
  /* 12dc539a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc539d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc53a0 je 0x12dc55b2 */
  if (C.zf) goto L_12dc55b2;
  /* 12dc53a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc53a9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12dc53ac and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dc53b2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc53b5 je 0x12dc53e4 */
  if (C.zf) goto L_12dc53e4;
  /* 12dc53b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc53ba mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12dc53bd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc53c3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc53c5 je 0x12dc53e4 */
  if (C.zf) goto L_12dc53e4;
  /* 12dc53c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc53ca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dc53cd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc53d2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc53d5 jne 0x12dc53e9 */
  if (!C.zf) goto L_12dc53e9;
  /* 12dc53d7 mov ecx, dword ptr [0x12ddda84] */
  ECX = (r32((uint32_t)(0x12ddda84)));
  /* 12dc53dd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12dc53e0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc53e2 jne 0x12dc53e9 */
  if (!C.zf) goto L_12dc53e9;
L_12dc53e4:;
  /* 12dc53e4 jmp 0x12dc55ad */
  goto L_12dc55ad;
L_12dc53e9:;
  /* 12dc53e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc53ec cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc53f0 je 0x12dc5462 */
  if (C.zf) goto L_12dc5462;
  /* 12dc53f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc53f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc53f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc53f9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dc53fc push ecx */
  push32((uint32_t)(ECX));
  /* 12dc53fd call 0x12dc4ea0 */
  push32(0x12dc5402u); f_12dc4ea0();
  /* 12dc5402 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5405 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc5407 jne 0x12dc5433 */
  if (!C.zf) goto L_12dc5433;
L_12dc5409:;
  /* 12dc5409 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc540c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12dc540f push eax */
  push32((uint32_t)(EAX));
  /* 12dc5410 push 0x12ddac2c */
  push32((uint32_t)(0x12ddac2cu));
  /* 12dc5415 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5417 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5419 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc541b push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc541d call 0x12dc29b0 */
  push32(0x12dc5422u); f_12dc29b0();
  /* 12dc5422 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5425 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5428 jne 0x12dc542b */
  if (!C.zf) goto L_12dc542b;
  /* 12dc542a int3  */
  x86_unimpl("int3 @ 0x12dc542a");
L_12dc542b:;
  /* 12dc542b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc542d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc542f jne 0x12dc5409 */
  if (!C.zf) goto L_12dc5409;
  /* 12dc5431 jmp 0x12dc5462 */
  goto L_12dc5462;
L_12dc5433:;
  /* 12dc5433 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5436 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12dc5439 push eax */
  push32((uint32_t)(EAX));
  /* 12dc543a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc543d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12dc5440 push edx */
  push32((uint32_t)(EDX));
  /* 12dc5441 push 0x12ddac20 */
  push32((uint32_t)(0x12ddac20u));
  /* 12dc5446 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5448 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc544a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc544c push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc544e call 0x12dc29b0 */
  push32(0x12dc5453u); f_12dc29b0();
  /* 12dc5453 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5456 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5459 jne 0x12dc545c */
  if (!C.zf) goto L_12dc545c;
  /* 12dc545b int3  */
  x86_unimpl("int3 @ 0x12dc545b");
L_12dc545c:;
  /* 12dc545c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc545e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc5460 jne 0x12dc5433 */
  if (!C.zf) goto L_12dc5433;
L_12dc5462:;
  /* 12dc5462 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5465 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12dc5468 push edx */
  push32((uint32_t)(EDX));
  /* 12dc5469 push 0x12ddac18 */
  push32((uint32_t)(0x12ddac18u));
  /* 12dc546e push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5470 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5472 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5474 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5476 call 0x12dc29b0 */
  push32(0x12dc547bu); f_12dc29b0();
  /* 12dc547b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc547e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5481 jne 0x12dc5484 */
  if (!C.zf) goto L_12dc5484;
  /* 12dc5483 int3  */
  x86_unimpl("int3 @ 0x12dc5483");
L_12dc5484:;
  /* 12dc5484 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc5486 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc5488 jne 0x12dc5462 */
  if (!C.zf) goto L_12dc5462;
  /* 12dc548a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc548d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12dc5490 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dc5496 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5499 jne 0x12dc550c */
  if (!C.zf) goto L_12dc550c;
L_12dc549b:;
  /* 12dc549b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc549e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dc54a1 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc54a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc54a5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dc54a8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12dc54ab and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc54b0 push eax */
  push32((uint32_t)(EAX));
  /* 12dc54b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc54b4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc54b7 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc54b8 push 0x12ddabe4 */
  push32((uint32_t)(0x12ddabe4u));
  /* 12dc54bd push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc54bf push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc54c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc54c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc54c5 call 0x12dc29b0 */
  push32(0x12dc54cau); f_12dc29b0();
  /* 12dc54ca add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc54cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc54d0 jne 0x12dc54d3 */
  if (!C.zf) goto L_12dc54d3;
  /* 12dc54d2 int3  */
  x86_unimpl("int3 @ 0x12dc54d2");
L_12dc54d3:;
  /* 12dc54d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc54d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc54d7 jne 0x12dc549b */
  if (!C.zf) goto L_12dc549b;
  /* 12dc54d9 cmp dword ptr [0x12de0ed8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12de0ed8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc54e0 je 0x12dc54fb */
  if (C.zf) goto L_12dc54fb;
  /* 12dc54e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc54e5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dc54e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc54e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc54ec add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc54ef push edx */
  push32((uint32_t)(EDX));
  /* 12dc54f0 call dword ptr [0x12de0ed8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de0ed8))), 0x12dc54f6u);
  /* 12dc54f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc54f9 jmp 0x12dc5507 */
  goto L_12dc5507;
L_12dc54fb:;
  /* 12dc54fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc54fe push eax */
  push32((uint32_t)(EAX));
  /* 12dc54ff call 0x12dc55f0 */
  push32(0x12dc5504u); f_12dc55f0();
  /* 12dc5504 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc5507:;
  /* 12dc5507 jmp 0x12dc55ad */
  goto L_12dc55ad;
L_12dc550c:;
  /* 12dc550c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc550f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5513 jne 0x12dc5552 */
  if (!C.zf) goto L_12dc5552;
L_12dc5515:;
  /* 12dc5515 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5518 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12dc551b push eax */
  push32((uint32_t)(EAX));
  /* 12dc551c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc551f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5522 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc5523 push 0x12ddabbc */
  push32((uint32_t)(0x12ddabbcu));
  /* 12dc5528 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc552a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc552c push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc552e push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5530 call 0x12dc29b0 */
  push32(0x12dc5535u); f_12dc29b0();
  /* 12dc5535 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5538 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc553b jne 0x12dc553e */
  if (!C.zf) goto L_12dc553e;
  /* 12dc553d int3  */
  x86_unimpl("int3 @ 0x12dc553d");
L_12dc553e:;
  /* 12dc553e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc5540 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc5542 jne 0x12dc5515 */
  if (!C.zf) goto L_12dc5515;
  /* 12dc5544 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5547 push eax */
  push32((uint32_t)(EAX));
  /* 12dc5548 call 0x12dc55f0 */
  push32(0x12dc554du); f_12dc55f0();
  /* 12dc554d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5550 jmp 0x12dc55ad */
  goto L_12dc55ad;
L_12dc5552:;
  /* 12dc5552 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5555 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12dc5558 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dc555e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5561 jne 0x12dc55ad */
  if (!C.zf) goto L_12dc55ad;
L_12dc5563:;
  /* 12dc5563 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5566 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dc5569 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc556a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc556d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dc5570 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12dc5573 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc5578 push eax */
  push32((uint32_t)(EAX));
  /* 12dc5579 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc557c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc557f push ecx */
  push32((uint32_t)(ECX));
  /* 12dc5580 push 0x12ddab88 */
  push32((uint32_t)(0x12ddab88u));
  /* 12dc5585 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5587 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5589 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc558b push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc558d call 0x12dc29b0 */
  push32(0x12dc5592u); f_12dc29b0();
  /* 12dc5592 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5595 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5598 jne 0x12dc559b */
  if (!C.zf) goto L_12dc559b;
  /* 12dc559a int3  */
  x86_unimpl("int3 @ 0x12dc559a");
L_12dc559b:;
  /* 12dc559b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc559d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc559f jne 0x12dc5563 */
  if (!C.zf) goto L_12dc5563;
  /* 12dc55a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc55a4 push eax */
  push32((uint32_t)(EAX));
  /* 12dc55a5 call 0x12dc55f0 */
  push32(0x12dc55aau); f_12dc55f0();
  /* 12dc55aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc55ad:;
  /* 12dc55ad jmp 0x12dc5388 */
  goto L_12dc5388;
L_12dc55b2:;
  /* 12dc55b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc55b4 call 0x12dc7390 */
  push32(0x12dc55b9u); f_12dc7390();
  /* 12dc55b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc55bc:;
  /* 12dc55bc push 0x12ddab70 */
  push32((uint32_t)(0x12ddab70u));
  /* 12dc55c1 push 0x12dda638 */
  push32((uint32_t)(0x12dda638u));
  /* 12dc55c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc55c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc55ca push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc55cc push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc55ce call 0x12dc29b0 */
  push32(0x12dc55d3u); f_12dc29b0();
  /* 12dc55d3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc55d6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc55d9 jne 0x12dc55dc */
  if (!C.zf) goto L_12dc55dc;
  /* 12dc55db int3  */
  x86_unimpl("int3 @ 0x12dc55db");
L_12dc55dc:;
  /* 12dc55dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc55de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc55e0 jne 0x12dc55bc */
  if (!C.zf) goto L_12dc55bc;
  /* 12dc55e2 pop edi */
  EDI = (pop32());
  /* 12dc55e3 pop esi */
  ESI = (pop32());
  /* 12dc55e4 pop ebx */
  EBX = (pop32());
  /* 12dc55e5 mov esp, ebp */
  ESP = (EBP);
  /* 12dc55e7 pop ebp */
  EBP = (pop32());
  /* 12dc55e8 ret  */
  ESPCHK(0x12dc5330u, _esp0);
  ESP += 4; return;
}

/* FUN_100055f0 @ 0x12dc55f0 (276 bytes, 89 insns) */
void f_12dc55f0(void) {
  FTRACE(0x12dc55f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc55f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc55f1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc55f3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc55f6 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc55f7 push esi */
  push32((uint32_t)(ESI));
  /* 12dc55f8 push edi */
  push32((uint32_t)(EDI));
  /* 12dc55f9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12dc5600 jmp 0x12dc560b */
  goto L_12dc560b;
L_12dc5602:;
  /* 12dc5602 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12dc5605 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5608 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_12dc560b:;
  /* 12dc560b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc560e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5612 jge 0x12dc561f */
  if ((C.sf==C.of)) goto L_12dc561f;
  /* 12dc5614 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc5617 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12dc561a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12dc561d jmp 0x12dc5626 */
  goto L_12dc5626;
L_12dc561f:;
  /* 12dc561f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12dc5626:;
  /* 12dc5626 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12dc5629 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc562c jge 0x12dc56cc */
  if ((C.sf==C.of)) goto L_12dc56cc;
  /* 12dc5632 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc5635 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5638 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 12dc563b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 12dc563e cmp dword ptr [0x12dddea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dddea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5645 jle 0x12dc5663 */
  if ((C.zf||C.sf!=C.of)) goto L_12dc5663;
  /* 12dc5647 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 12dc564c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc564f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc5655 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc5656 call 0x12dc9900 */
  push32(0x12dc565bu); f_12dc9900();
  /* 12dc565b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc565e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12dc5661 jmp 0x12dc5680 */
  goto L_12dc5680;
L_12dc5663:;
  /* 12dc5663 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc5666 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dc566c mov eax, dword ptr [0x12dddc98] */
  EAX = (r32((uint32_t)(0x12dddc98)));
  /* 12dc5671 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc5673 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12dc5677 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 12dc567d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12dc5680:;
  /* 12dc5680 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5684 je 0x12dc5694 */
  if (C.zf) goto L_12dc5694;
  /* 12dc5686 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc5689 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dc568f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12dc5692 jmp 0x12dc569b */
  goto L_12dc569b;
L_12dc5694:;
  /* 12dc5694 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_12dc569b:;
  /* 12dc569b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12dc569e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12dc56a1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12dc56a5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12dc56a8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dc56ae push edx */
  push32((uint32_t)(EDX));
  /* 12dc56af push 0x12ddac64 */
  push32((uint32_t)(0x12ddac64u));
  /* 12dc56b4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12dc56b7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc56ba lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 12dc56be push ecx */
  push32((uint32_t)(ECX));
  /* 12dc56bf call 0x12dc9800 */
  push32(0x12dc56c4u); f_12dc9800();
  /* 12dc56c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc56c7 jmp 0x12dc5602 */
  goto L_12dc5602;
L_12dc56cc:;
  /* 12dc56cc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12dc56cf mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12dc56d4:;
  /* 12dc56d4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12dc56d7 push eax */
  push32((uint32_t)(EAX));
  /* 12dc56d8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12dc56db push ecx */
  push32((uint32_t)(ECX));
  /* 12dc56dc push 0x12ddac54 */
  push32((uint32_t)(0x12ddac54u));
  /* 12dc56e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc56e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc56e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc56e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc56e9 call 0x12dc29b0 */
  push32(0x12dc56eeu); f_12dc29b0();
  /* 12dc56ee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc56f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc56f4 jne 0x12dc56f7 */
  if (!C.zf) goto L_12dc56f7;
  /* 12dc56f6 int3  */
  x86_unimpl("int3 @ 0x12dc56f6");
L_12dc56f7:;
  /* 12dc56f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc56f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc56fb jne 0x12dc56d4 */
  if (!C.zf) goto L_12dc56d4;
  /* 12dc56fd pop edi */
  EDI = (pop32());
  /* 12dc56fe pop esi */
  ESI = (pop32());
  /* 12dc56ff pop ebx */
  EBX = (pop32());
  /* 12dc5700 mov esp, ebp */
  ESP = (EBP);
  /* 12dc5702 pop ebp */
  EBP = (pop32());
  /* 12dc5703 ret  */
  ESPCHK(0x12dc55f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005710 @ 0x12dc5710 (116 bytes, 46 insns) */
void f_12dc5710(void) {
  FTRACE(0x12dc5710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc5710 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc5711 mov ebp, esp */
  EBP = (ESP);
  /* 12dc5713 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc5716 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc5717 push esi */
  push32((uint32_t)(ESI));
  /* 12dc5718 push edi */
  push32((uint32_t)(EDI));
  /* 12dc5719 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12dc571c push eax */
  push32((uint32_t)(EAX));
  /* 12dc571d call 0x12dc5090 */
  push32(0x12dc5722u); f_12dc5090();
  /* 12dc5722 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5725 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5729 jne 0x12dc5744 */
  if (!C.zf) goto L_12dc5744;
  /* 12dc572b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc572f jne 0x12dc5744 */
  if (!C.zf) goto L_12dc5744;
  /* 12dc5731 mov ecx, dword ptr [0x12ddda84] */
  ECX = (r32((uint32_t)(0x12ddda84)));
  /* 12dc5737 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12dc573a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc573c je 0x12dc577b */
  if (C.zf) goto L_12dc577b;
  /* 12dc573e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5742 je 0x12dc577b */
  if (C.zf) goto L_12dc577b;
L_12dc5744:;
  /* 12dc5744 push 0x12ddac6c */
  push32((uint32_t)(0x12ddac6cu));
  /* 12dc5749 push 0x12dda638 */
  push32((uint32_t)(0x12dda638u));
  /* 12dc574e push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5750 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5752 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5754 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5756 call 0x12dc29b0 */
  push32(0x12dc575bu); f_12dc29b0();
  /* 12dc575b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc575e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5761 jne 0x12dc5764 */
  if (!C.zf) goto L_12dc5764;
  /* 12dc5763 int3  */
  x86_unimpl("int3 @ 0x12dc5763");
L_12dc5764:;
  /* 12dc5764 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc5766 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc5768 jne 0x12dc5744 */
  if (!C.zf) goto L_12dc5744;
  /* 12dc576a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc576c call 0x12dc5330 */
  push32(0x12dc5771u); f_12dc5330();
  /* 12dc5771 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5774 mov eax, 1 */
  EAX = (0x1u);
  /* 12dc5779 jmp 0x12dc577d */
  goto L_12dc577d;
L_12dc577b:;
  /* 12dc577b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dc577d:;
  /* 12dc577d pop edi */
  EDI = (pop32());
  /* 12dc577e pop esi */
  ESI = (pop32());
  /* 12dc577f pop ebx */
  EBX = (pop32());
  /* 12dc5780 mov esp, ebp */
  ESP = (EBP);
  /* 12dc5782 pop ebp */
  EBP = (pop32());
  /* 12dc5783 ret  */
  ESPCHK(0x12dc5710u, _esp0);
  ESP += 4; return;
}

/* FUN_10005790 @ 0x12dc5790 (197 bytes, 79 insns) */
void f_12dc5790(void) {
  FTRACE(0x12dc5790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc5790 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc5791 mov ebp, esp */
  EBP = (ESP);
  /* 12dc5793 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc5794 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc5795 push esi */
  push32((uint32_t)(ESI));
  /* 12dc5796 push edi */
  push32((uint32_t)(EDI));
  /* 12dc5797 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc579b jne 0x12dc57a2 */
  if (!C.zf) goto L_12dc57a2;
  /* 12dc579d jmp 0x12dc584e */
  goto L_12dc584e;
L_12dc57a2:;
  /* 12dc57a2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dc57a9 jmp 0x12dc57b4 */
  goto L_12dc57b4;
L_12dc57ab:;
  /* 12dc57ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc57ae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc57b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dc57b4:;
  /* 12dc57b4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc57b8 jge 0x12dc57fe */
  if ((C.sf==C.of)) goto L_12dc57fe;
L_12dc57ba:;
  /* 12dc57ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc57bd mov edx, dword ptr [ecx*4 + 0x12ddda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ddda94)));
  /* 12dc57c4 push edx */
  push32((uint32_t)(EDX));
  /* 12dc57c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc57c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc57cb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 12dc57cf push edx */
  push32((uint32_t)(EDX));
  /* 12dc57d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc57d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc57d6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12dc57da push edx */
  push32((uint32_t)(EDX));
  /* 12dc57db push 0x12ddacc8 */
  push32((uint32_t)(0x12ddacc8u));
  /* 12dc57e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc57e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc57e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc57e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc57e8 call 0x12dc29b0 */
  push32(0x12dc57edu); f_12dc29b0();
  /* 12dc57ed add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc57f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc57f3 jne 0x12dc57f6 */
  if (!C.zf) goto L_12dc57f6;
  /* 12dc57f5 int3  */
  x86_unimpl("int3 @ 0x12dc57f5");
L_12dc57f6:;
  /* 12dc57f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc57f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc57fa jne 0x12dc57ba */
  if (!C.zf) goto L_12dc57ba;
  /* 12dc57fc jmp 0x12dc57ab */
  goto L_12dc57ab;
L_12dc57fe:;
  /* 12dc57fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc5801 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12dc5804 push edx */
  push32((uint32_t)(EDX));
  /* 12dc5805 push 0x12ddaca4 */
  push32((uint32_t)(0x12ddaca4u));
  /* 12dc580a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc580c push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc580e push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5810 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5812 call 0x12dc29b0 */
  push32(0x12dc5817u); f_12dc29b0();
  /* 12dc5817 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc581a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc581d jne 0x12dc5820 */
  if (!C.zf) goto L_12dc5820;
  /* 12dc581f int3  */
  x86_unimpl("int3 @ 0x12dc581f");
L_12dc5820:;
  /* 12dc5820 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc5822 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc5824 jne 0x12dc57fe */
  if (!C.zf) goto L_12dc57fe;
L_12dc5826:;
  /* 12dc5826 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc5829 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12dc582c push edx */
  push32((uint32_t)(EDX));
  /* 12dc582d push 0x12ddac84 */
  push32((uint32_t)(0x12ddac84u));
  /* 12dc5832 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5834 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5836 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5838 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc583a call 0x12dc29b0 */
  push32(0x12dc583fu); f_12dc29b0();
  /* 12dc583f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5842 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5845 jne 0x12dc5848 */
  if (!C.zf) goto L_12dc5848;
  /* 12dc5847 int3  */
  x86_unimpl("int3 @ 0x12dc5847");
L_12dc5848:;
  /* 12dc5848 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc584a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc584c jne 0x12dc5826 */
  if (!C.zf) goto L_12dc5826;
L_12dc584e:;
  /* 12dc584e pop edi */
  EDI = (pop32());
  /* 12dc584f pop esi */
  ESI = (pop32());
  /* 12dc5850 pop ebx */
  EBX = (pop32());
  /* 12dc5851 mov esp, ebp */
  ESP = (EBP);
  /* 12dc5853 pop ebp */
  EBP = (pop32());
  /* 12dc5854 ret  */
  ESPCHK(0x12dc5790u, _esp0);
  ESP += 4; return;
}

/* FUN_10005860 @ 0x12dc5860 (329 bytes, 102 insns) */
void f_12dc5860(void) {
  FTRACE(0x12dc5860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc5860 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc5861 mov ebp, esp */
  EBP = (ESP);
  /* 12dc5863 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc5866 cmp dword ptr [0x12de1050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12de1050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc586d jne 0x12dc5874 */
  if (!C.zf) goto L_12dc5874;
  /* 12dc586f call 0x12dca1a0 */
  push32(0x12dc5874u); f_12dca1a0();
L_12dc5874:;
  /* 12dc5874 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12dc587b mov eax, dword ptr [0x12ddf51c] */
  EAX = (r32((uint32_t)(0x12ddf51c)));
  /* 12dc5880 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dc5883:;
  /* 12dc5883 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5886 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dc5889 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc588b je 0x12dc58b9 */
  if (C.zf) goto L_12dc58b9;
  /* 12dc588d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5890 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dc5893 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5896 je 0x12dc58a1 */
  if (C.zf) goto L_12dc58a1;
  /* 12dc5898 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc589b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc589e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12dc58a1:;
  /* 12dc58a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc58a4 push eax */
  push32((uint32_t)(EAX));
  /* 12dc58a5 call 0x12dc6720 */
  push32(0x12dc58aau); f_12dc6720();
  /* 12dc58aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc58ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc58b0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12dc58b4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dc58b7 jmp 0x12dc5883 */
  goto L_12dc5883;
L_12dc58b9:;
  /* 12dc58b9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12dc58bb push 0x12ddace8 */
  push32((uint32_t)(0x12ddace8u));
  /* 12dc58c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc58c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc58c5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12dc58cc push ecx */
  push32((uint32_t)(ECX));
  /* 12dc58cd call 0x12dc38f0 */
  push32(0x12dc58d2u); f_12dc38f0();
  /* 12dc58d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc58d5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dc58d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc58db mov dword ptr [0x12ddf550], edx */
  w32((uint32_t)(0x12ddf550), (EDX));
  /* 12dc58e1 cmp dword ptr [0x12ddf550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc58e8 jne 0x12dc58f4 */
  if (!C.zf) goto L_12dc58f4;
  /* 12dc58ea push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc58ec call 0x12dc2860 */
  push32(0x12dc58f1u); f_12dc2860();
  /* 12dc58f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc58f4:;
  /* 12dc58f4 mov eax, dword ptr [0x12ddf51c] */
  EAX = (r32((uint32_t)(0x12ddf51c)));
  /* 12dc58f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc58fc jmp 0x12dc5907 */
  goto L_12dc5907;
L_12dc58fe:;
  /* 12dc58fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5901 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5904 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dc5907:;
  /* 12dc5907 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc590a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dc590d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc590f je 0x12dc5977 */
  if (C.zf) goto L_12dc5977;
  /* 12dc5911 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5914 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc5915 call 0x12dc6720 */
  push32(0x12dc591au); f_12dc6720();
  /* 12dc591a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc591d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5920 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12dc5923 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5926 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dc5929 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc592c je 0x12dc5975 */
  if (C.zf) goto L_12dc5975;
  /* 12dc592e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12dc5930 push 0x12ddace8 */
  push32((uint32_t)(0x12ddace8u));
  /* 12dc5935 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc5937 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc593a push ecx */
  push32((uint32_t)(ECX));
  /* 12dc593b call 0x12dc38f0 */
  push32(0x12dc5940u); f_12dc38f0();
  /* 12dc5940 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5943 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc5946 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12dc5948 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc594b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc594e jne 0x12dc595a */
  if (!C.zf) goto L_12dc595a;
  /* 12dc5950 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc5952 call 0x12dc2860 */
  push32(0x12dc5957u); f_12dc2860();
  /* 12dc5957 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc595a:;
  /* 12dc595a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc595d push ecx */
  push32((uint32_t)(ECX));
  /* 12dc595e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc5961 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dc5963 push eax */
  push32((uint32_t)(EAX));
  /* 12dc5964 call 0x12dc68a0 */
  push32(0x12dc5969u); f_12dc68a0();
  /* 12dc5969 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc596c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc596f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5972 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12dc5975:;
  /* 12dc5975 jmp 0x12dc58fe */
  goto L_12dc58fe;
L_12dc5977:;
  /* 12dc5977 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc5979 mov edx, dword ptr [0x12ddf51c] */
  EDX = (r32((uint32_t)(0x12ddf51c)));
  /* 12dc597f push edx */
  push32((uint32_t)(EDX));
  /* 12dc5980 call 0x12dc4380 */
  push32(0x12dc5985u); f_12dc4380();
  /* 12dc5985 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5988 mov dword ptr [0x12ddf51c], 0 */
  w32((uint32_t)(0x12ddf51c), (0x0u));
  /* 12dc5992 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc5995 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12dc599b mov dword ptr [0x12de1040], 1 */
  w32((uint32_t)(0x12de1040), (0x1u));
  /* 12dc59a5 mov esp, ebp */
  ESP = (EBP);
  /* 12dc59a7 pop ebp */
  EBP = (pop32());
  /* 12dc59a8 ret  */
  ESPCHK(0x12dc5860u, _esp0);
  ESP += 4; return;
}

/* FUN_100059b0 @ 0x12dc59b0 (216 bytes, 69 insns) */
void f_12dc59b0(void) {
  FTRACE(0x12dc59b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc59b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc59b1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc59b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc59b6 cmp dword ptr [0x12de1050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12de1050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc59bd jne 0x12dc59c4 */
  if (!C.zf) goto L_12dc59c4;
  /* 12dc59bf call 0x12dca1a0 */
  push32(0x12dc59c4u); f_12dca1a0();
L_12dc59c4:;
  /* 12dc59c4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12dc59c9 push 0x12ddf58c */
  push32((uint32_t)(0x12ddf58cu));
  /* 12dc59ce push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc59d0 call dword ptr [0x12de2358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2358))), 0x12dc59d6u);
  /* 12dc59d6 mov dword ptr [0x12ddf560], 0x12ddf58c */
  w32((uint32_t)(0x12ddf560), (0x12ddf58cu));
  /* 12dc59e0 mov eax, dword ptr [0x12de106c] */
  EAX = (r32((uint32_t)(0x12de106c)));
  /* 12dc59e5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dc59e8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc59ea jne 0x12dc59f7 */
  if (!C.zf) goto L_12dc59f7;
  /* 12dc59ec mov edx, dword ptr [0x12ddf560] */
  EDX = (r32((uint32_t)(0x12ddf560)));
  /* 12dc59f2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12dc59f5 jmp 0x12dc59ff */
  goto L_12dc59ff;
L_12dc59f7:;
  /* 12dc59f7 mov eax, dword ptr [0x12de106c] */
  EAX = (r32((uint32_t)(0x12de106c)));
  /* 12dc59fc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12dc59ff:;
  /* 12dc59ff mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc5a02 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12dc5a05 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12dc5a08 push edx */
  push32((uint32_t)(EDX));
  /* 12dc5a09 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12dc5a0c push eax */
  push32((uint32_t)(EAX));
  /* 12dc5a0d push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5a11 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc5a14 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc5a15 call 0x12dc5a90 */
  push32(0x12dc5a1au); f_12dc5a90();
  /* 12dc5a1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5a1d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12dc5a22 push 0x12ddacf4 */
  push32((uint32_t)(0x12ddacf4u));
  /* 12dc5a27 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc5a29 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc5a2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5a2f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12dc5a32 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc5a33 call 0x12dc38f0 */
  push32(0x12dc5a38u); f_12dc38f0();
  /* 12dc5a38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5a3b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dc5a3e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5a42 jne 0x12dc5a4e */
  if (!C.zf) goto L_12dc5a4e;
  /* 12dc5a44 push 8 */
  push32((uint32_t)(0x8u));
  /* 12dc5a46 call 0x12dc2860 */
  push32(0x12dc5a4bu); f_12dc2860();
  /* 12dc5a4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc5a4e:;
  /* 12dc5a4e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12dc5a51 push edx */
  push32((uint32_t)(EDX));
  /* 12dc5a52 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12dc5a55 push eax */
  push32((uint32_t)(EAX));
  /* 12dc5a56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc5a59 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc5a5c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12dc5a5f push eax */
  push32((uint32_t)(EAX));
  /* 12dc5a60 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc5a63 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc5a64 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc5a67 push edx */
  push32((uint32_t)(EDX));
  /* 12dc5a68 call 0x12dc5a90 */
  push32(0x12dc5a6du); f_12dc5a90();
  /* 12dc5a6d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5a70 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc5a73 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc5a76 mov dword ptr [0x12ddf544], eax */
  w32((uint32_t)(0x12ddf544), (EAX));
  /* 12dc5a7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc5a7e mov dword ptr [0x12ddf548], ecx */
  w32((uint32_t)(0x12ddf548), (ECX));
  /* 12dc5a84 mov esp, ebp */
  ESP = (EBP);
  /* 12dc5a86 pop ebp */
  EBP = (pop32());
  /* 12dc5a87 ret  */
  ESPCHK(0x12dc59b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a90 @ 0x12dc5a90 (1060 bytes, 360 insns) */
void f_12dc5a90(void) {
  FTRACE(0x12dc5a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc5a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc5a91 mov ebp, esp */
  EBP = (ESP);
  /* 12dc5a93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc5a96 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc5a99 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12dc5a9f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc5aa2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12dc5aa8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc5aab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dc5aae cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5ab2 je 0x12dc5ac5 */
  if (C.zf) goto L_12dc5ac5;
  /* 12dc5ab4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc5ab7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5aba mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12dc5abc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc5abf add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5ac2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12dc5ac5:;
  /* 12dc5ac5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5ac8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dc5acb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5ace jne 0x12dc5b9d */
  if (!C.zf) goto L_12dc5b9d;
L_12dc5ad4:;
  /* 12dc5ad4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5ad7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5ada mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dc5add mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5ae0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dc5ae3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5ae6 je 0x12dc5b62 */
  if (C.zf) goto L_12dc5b62;
  /* 12dc5ae8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5aeb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dc5aee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc5af0 je 0x12dc5b62 */
  if (C.zf) goto L_12dc5b62;
  /* 12dc5af2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5af5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc5af7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dc5af9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc5afb mov al, byte ptr [edx + 0x12de0da1] */
  AL = (r8((uint32_t)(EDX + 0x12de0da1)));
  /* 12dc5b01 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12dc5b04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc5b06 je 0x12dc5b37 */
  if (C.zf) goto L_12dc5b37;
  /* 12dc5b08 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc5b0b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dc5b0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5b10 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc5b13 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12dc5b15 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5b19 je 0x12dc5b37 */
  if (C.zf) goto L_12dc5b37;
  /* 12dc5b1b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5b1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5b21 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dc5b23 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12dc5b25 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5b28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5b2b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12dc5b2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5b31 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5b34 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12dc5b37:;
  /* 12dc5b37 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc5b3a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dc5b3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5b3f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc5b42 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12dc5b44 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5b48 je 0x12dc5b5d */
  if (C.zf) goto L_12dc5b5d;
  /* 12dc5b4a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5b4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5b50 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dc5b52 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12dc5b54 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5b57 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5b5a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12dc5b5d:;
  /* 12dc5b5d jmp 0x12dc5ad4 */
  goto L_12dc5ad4;
L_12dc5b62:;
  /* 12dc5b62 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc5b65 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dc5b67 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5b6a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc5b6d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12dc5b6f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5b73 je 0x12dc5b84 */
  if (C.zf) goto L_12dc5b84;
  /* 12dc5b75 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5b78 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12dc5b7b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5b7e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5b81 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12dc5b84:;
  /* 12dc5b84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5b87 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dc5b8a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5b8d jne 0x12dc5b98 */
  if (!C.zf) goto L_12dc5b98;
  /* 12dc5b8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5b92 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5b95 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12dc5b98:;
  /* 12dc5b98 jmp 0x12dc5c6c */
  goto L_12dc5c6c;
L_12dc5b9d:;
  /* 12dc5b9d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc5ba0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dc5ba2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5ba5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc5ba8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12dc5baa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5bae je 0x12dc5bc3 */
  if (C.zf) goto L_12dc5bc3;
  /* 12dc5bb0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5bb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5bb6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dc5bb8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12dc5bba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5bbd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5bc0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12dc5bc3:;
  /* 12dc5bc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5bc6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dc5bc8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12dc5bcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5bce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5bd1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc5bd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc5bd7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc5bdd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc5bdf mov dl, byte ptr [ecx + 0x12de0da1] */
  DL = (r8((uint32_t)(ECX + 0x12de0da1)));
  /* 12dc5be5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12dc5be8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc5bea je 0x12dc5c1b */
  if (C.zf) goto L_12dc5c1b;
  /* 12dc5bec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc5bef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dc5bf1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5bf4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc5bf7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12dc5bf9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5bfd je 0x12dc5c12 */
  if (C.zf) goto L_12dc5c12;
  /* 12dc5bff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5c02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5c05 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dc5c07 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12dc5c09 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5c0c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5c0f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12dc5c12:;
  /* 12dc5c12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5c15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5c18 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dc5c1b:;
  /* 12dc5c1b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc5c1e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dc5c24 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5c27 je 0x12dc5c47 */
  if (C.zf) goto L_12dc5c47;
  /* 12dc5c29 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc5c2c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc5c31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc5c33 je 0x12dc5c47 */
  if (C.zf) goto L_12dc5c47;
  /* 12dc5c35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc5c38 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc5c3e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5c41 jne 0x12dc5b9d */
  if (!C.zf) goto L_12dc5b9d;
L_12dc5c47:;
  /* 12dc5c47 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc5c4a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dc5c50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc5c52 jne 0x12dc5c5f */
  if (!C.zf) goto L_12dc5c5f;
  /* 12dc5c54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5c57 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc5c5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc5c5d jmp 0x12dc5c6c */
  goto L_12dc5c6c;
L_12dc5c5f:;
  /* 12dc5c5f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5c63 je 0x12dc5c6c */
  if (C.zf) goto L_12dc5c6c;
  /* 12dc5c65 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5c68 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12dc5c6c:;
  /* 12dc5c6c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12dc5c73:;
  /* 12dc5c73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5c76 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dc5c79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc5c7b je 0x12dc5c9e */
  if (C.zf) goto L_12dc5c9e;
L_12dc5c7d:;
  /* 12dc5c7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5c80 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dc5c83 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5c86 je 0x12dc5c93 */
  if (C.zf) goto L_12dc5c93;
  /* 12dc5c88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5c8b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dc5c8e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5c91 jne 0x12dc5c9e */
  if (!C.zf) goto L_12dc5c9e;
L_12dc5c93:;
  /* 12dc5c93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5c96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5c99 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dc5c9c jmp 0x12dc5c7d */
  goto L_12dc5c7d;
L_12dc5c9e:;
  /* 12dc5c9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5ca1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dc5ca4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc5ca6 jne 0x12dc5cad */
  if (!C.zf) goto L_12dc5cad;
  /* 12dc5ca8 jmp 0x12dc5e8b */
  goto L_12dc5e8b;
L_12dc5cad:;
  /* 12dc5cad cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5cb1 je 0x12dc5cc4 */
  if (C.zf) goto L_12dc5cc4;
  /* 12dc5cb3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc5cb6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5cb9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12dc5cbb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc5cbe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5cc1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12dc5cc4:;
  /* 12dc5cc4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc5cc7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dc5cc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5ccc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc5ccf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12dc5cd1:;
  /* 12dc5cd1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12dc5cd8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12dc5cdf:;
  /* 12dc5cdf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5ce2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dc5ce5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5ce8 jne 0x12dc5cfe */
  if (!C.zf) goto L_12dc5cfe;
  /* 12dc5cea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5ced add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5cf0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dc5cf3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc5cf6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5cf9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12dc5cfc jmp 0x12dc5cdf */
  goto L_12dc5cdf;
L_12dc5cfe:;
  /* 12dc5cfe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5d01 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dc5d04 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5d07 jne 0x12dc5d5a */
  if (!C.zf) goto L_12dc5d5a;
  /* 12dc5d09 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc5d0c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc5d0e mov ecx, 2 */
  ECX = (0x2u);
  /* 12dc5d13 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12dc5d15 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc5d17 jne 0x12dc5d52 */
  if (!C.zf) goto L_12dc5d52;
  /* 12dc5d19 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5d1d je 0x12dc5d3f */
  if (C.zf) goto L_12dc5d3f;
  /* 12dc5d1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5d22 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12dc5d26 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5d29 jne 0x12dc5d36 */
  if (!C.zf) goto L_12dc5d36;
  /* 12dc5d2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5d2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5d31 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dc5d34 jmp 0x12dc5d3d */
  goto L_12dc5d3d;
L_12dc5d36:;
  /* 12dc5d36 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12dc5d3d:;
  /* 12dc5d3d jmp 0x12dc5d46 */
  goto L_12dc5d46;
L_12dc5d3f:;
  /* 12dc5d3f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12dc5d46:;
  /* 12dc5d46 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc5d48 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5d4c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12dc5d4f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12dc5d52:;
  /* 12dc5d52 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc5d55 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12dc5d57 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12dc5d5a:;
  /* 12dc5d5a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc5d5d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc5d60 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc5d63 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12dc5d66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc5d68 je 0x12dc5d8e */
  if (C.zf) goto L_12dc5d8e;
  /* 12dc5d6a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5d6e je 0x12dc5d7f */
  if (C.zf) goto L_12dc5d7f;
  /* 12dc5d70 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5d73 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12dc5d76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5d79 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5d7c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12dc5d7f:;
  /* 12dc5d7f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc5d82 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dc5d84 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5d87 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc5d8a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12dc5d8c jmp 0x12dc5d5a */
  goto L_12dc5d5a;
L_12dc5d8e:;
  /* 12dc5d8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5d91 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dc5d94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc5d96 je 0x12dc5db4 */
  if (C.zf) goto L_12dc5db4;
  /* 12dc5d98 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5d9c jne 0x12dc5db9 */
  if (!C.zf) goto L_12dc5db9;
  /* 12dc5d9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5da1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dc5da4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5da7 je 0x12dc5db4 */
  if (C.zf) goto L_12dc5db4;
  /* 12dc5da9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5dac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dc5daf cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5db2 jne 0x12dc5db9 */
  if (!C.zf) goto L_12dc5db9;
L_12dc5db4:;
  /* 12dc5db4 jmp 0x12dc5e64 */
  goto L_12dc5e64;
L_12dc5db9:;
  /* 12dc5db9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5dbd je 0x12dc5e56 */
  if (C.zf) goto L_12dc5e56;
  /* 12dc5dc3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5dc7 je 0x12dc5e1d */
  if (C.zf) goto L_12dc5e1d;
  /* 12dc5dc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5dcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc5dce mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dc5dd0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc5dd2 mov cl, byte ptr [eax + 0x12de0da1] */
  CL = (r8((uint32_t)(EAX + 0x12de0da1)));
  /* 12dc5dd8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12dc5ddb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc5ddd je 0x12dc5e08 */
  if (C.zf) goto L_12dc5e08;
  /* 12dc5ddf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5de2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5de5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12dc5de7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12dc5de9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5dec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5def mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12dc5df2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5df5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5df8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc5dfb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc5dfe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dc5e00 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5e03 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc5e06 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12dc5e08:;
  /* 12dc5e08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5e0b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5e0e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dc5e10 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12dc5e12 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5e15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5e18 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12dc5e1b jmp 0x12dc5e49 */
  goto L_12dc5e49;
L_12dc5e1d:;
  /* 12dc5e1d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5e20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc5e22 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dc5e24 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc5e26 mov cl, byte ptr [eax + 0x12de0da1] */
  CL = (r8((uint32_t)(EAX + 0x12de0da1)));
  /* 12dc5e2c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12dc5e2f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc5e31 je 0x12dc5e49 */
  if (C.zf) goto L_12dc5e49;
  /* 12dc5e33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5e36 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5e39 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dc5e3c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc5e3f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dc5e41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5e44 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc5e47 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12dc5e49:;
  /* 12dc5e49 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc5e4c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dc5e4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5e51 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc5e54 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12dc5e56:;
  /* 12dc5e56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5e59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5e5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc5e5f jmp 0x12dc5cd1 */
  goto L_12dc5cd1;
L_12dc5e64:;
  /* 12dc5e64 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5e68 je 0x12dc5e79 */
  if (C.zf) goto L_12dc5e79;
  /* 12dc5e6a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5e6d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12dc5e70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc5e73 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5e76 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12dc5e79:;
  /* 12dc5e79 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc5e7c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dc5e7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5e81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dc5e84 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12dc5e86 jmp 0x12dc5c73 */
  goto L_12dc5c73;
L_12dc5e8b:;
  /* 12dc5e8b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5e8f je 0x12dc5ea3 */
  if (C.zf) goto L_12dc5ea3;
  /* 12dc5e91 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc5e94 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12dc5e9a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc5e9d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5ea0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12dc5ea3:;
  /* 12dc5ea3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc5ea6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dc5ea8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5eab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc5eae mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12dc5eb0 mov esp, ebp */
  ESP = (EBP);
  /* 12dc5eb2 pop ebp */
  EBP = (pop32());
  /* 12dc5eb3 ret  */
  ESPCHK(0x12dc5a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ec0 @ 0x12dc5ec0 (537 bytes, 173 insns) */
void f_12dc5ec0(void) {
  FTRACE(0x12dc5ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc5ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc5ec1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc5ec3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc5ec6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12dc5ecd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12dc5ed4 cmp dword ptr [0x12ddf690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5edb jne 0x12dc5f1a */
  if (!C.zf) goto L_12dc5f1a;
  /* 12dc5edd call dword ptr [0x12de23b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23b4))), 0x12dc5ee3u);
  /* 12dc5ee3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12dc5ee6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5eea je 0x12dc5ef8 */
  if (C.zf) goto L_12dc5ef8;
  /* 12dc5eec mov dword ptr [0x12ddf690], 1 */
  w32((uint32_t)(0x12ddf690), (0x1u));
  /* 12dc5ef6 jmp 0x12dc5f1a */
  goto L_12dc5f1a;
L_12dc5ef8:;
  /* 12dc5ef8 call dword ptr [0x12de23b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23b0))), 0x12dc5efeu);
  /* 12dc5efe mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dc5f01 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5f05 je 0x12dc5f13 */
  if (C.zf) goto L_12dc5f13;
  /* 12dc5f07 mov dword ptr [0x12ddf690], 2 */
  w32((uint32_t)(0x12ddf690), (0x2u));
  /* 12dc5f11 jmp 0x12dc5f1a */
  goto L_12dc5f1a;
L_12dc5f13:;
  /* 12dc5f13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc5f15 jmp 0x12dc60d5 */
  goto L_12dc60d5;
L_12dc5f1a:;
  /* 12dc5f1a cmp dword ptr [0x12ddf690], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf690))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5f21 jne 0x12dc601e */
  if (!C.zf) goto L_12dc601e;
  /* 12dc5f27 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5f2b jne 0x12dc5f43 */
  if (!C.zf) goto L_12dc5f43;
  /* 12dc5f2d call dword ptr [0x12de23b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23b4))), 0x12dc5f33u);
  /* 12dc5f33 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12dc5f36 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5f3a jne 0x12dc5f43 */
  if (!C.zf) goto L_12dc5f43;
  /* 12dc5f3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc5f3e jmp 0x12dc60d5 */
  goto L_12dc60d5;
L_12dc5f43:;
  /* 12dc5f43 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc5f46 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12dc5f49:;
  /* 12dc5f49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc5f4c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc5f4e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12dc5f51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc5f53 je 0x12dc5f75 */
  if (C.zf) goto L_12dc5f75;
  /* 12dc5f55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc5f58 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5f5b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dc5f5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc5f61 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc5f63 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12dc5f66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc5f68 jne 0x12dc5f73 */
  if (!C.zf) goto L_12dc5f73;
  /* 12dc5f6a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc5f6d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5f70 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12dc5f73:;
  /* 12dc5f73 jmp 0x12dc5f49 */
  goto L_12dc5f49;
L_12dc5f75:;
  /* 12dc5f75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc5f78 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc5f7b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12dc5f7d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5f80 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dc5f83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5f85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5f87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5f8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5f8e push edx */
  push32((uint32_t)(EDX));
  /* 12dc5f8f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc5f92 push eax */
  push32((uint32_t)(EAX));
  /* 12dc5f93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5f95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5f97 call dword ptr [0x12de23ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23ac))), 0x12dc5f9du);
  /* 12dc5f9d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12dc5fa0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5fa4 je 0x12dc5fc4 */
  if (C.zf) goto L_12dc5fc4;
  /* 12dc5fa6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12dc5fa8 push 0x12ddad00 */
  push32((uint32_t)(0x12ddad00u));
  /* 12dc5fad push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc5faf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc5fb2 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc5fb3 call 0x12dc38f0 */
  push32(0x12dc5fb8u); f_12dc38f0();
  /* 12dc5fb8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc5fbb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dc5fbe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc5fc2 jne 0x12dc5fd5 */
  if (!C.zf) goto L_12dc5fd5;
L_12dc5fc4:;
  /* 12dc5fc4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc5fc7 push edx */
  push32((uint32_t)(EDX));
  /* 12dc5fc8 call dword ptr [0x12de23a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23a8))), 0x12dc5fceu);
  /* 12dc5fce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc5fd0 jmp 0x12dc60d5 */
  goto L_12dc60d5;
L_12dc5fd5:;
  /* 12dc5fd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5fd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5fd9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc5fdc push eax */
  push32((uint32_t)(EAX));
  /* 12dc5fdd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc5fe0 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc5fe1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc5fe4 push edx */
  push32((uint32_t)(EDX));
  /* 12dc5fe5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc5fe8 push eax */
  push32((uint32_t)(EAX));
  /* 12dc5fe9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5feb push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc5fed call dword ptr [0x12de23ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23ac))), 0x12dc5ff3u);
  /* 12dc5ff3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc5ff5 jne 0x12dc600c */
  if (!C.zf) goto L_12dc600c;
  /* 12dc5ff7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc5ff9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc5ffc push ecx */
  push32((uint32_t)(ECX));
  /* 12dc5ffd call 0x12dc4380 */
  push32(0x12dc6002u); f_12dc4380();
  /* 12dc6002 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6005 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12dc600c:;
  /* 12dc600c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc600f push edx */
  push32((uint32_t)(EDX));
  /* 12dc6010 call dword ptr [0x12de23a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23a8))), 0x12dc6016u);
  /* 12dc6016 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc6019 jmp 0x12dc60d5 */
  goto L_12dc60d5;
L_12dc601e:;
  /* 12dc601e cmp dword ptr [0x12ddf690], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf690))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6025 jne 0x12dc60d3 */
  if (!C.zf) goto L_12dc60d3;
  /* 12dc602b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc602f jne 0x12dc6047 */
  if (!C.zf) goto L_12dc6047;
  /* 12dc6031 call dword ptr [0x12de23b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23b0))), 0x12dc6037u);
  /* 12dc6037 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dc603a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc603e jne 0x12dc6047 */
  if (!C.zf) goto L_12dc6047;
  /* 12dc6040 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc6042 jmp 0x12dc60d5 */
  goto L_12dc60d5;
L_12dc6047:;
  /* 12dc6047 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc604a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12dc604d:;
  /* 12dc604d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc6050 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dc6053 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc6055 je 0x12dc6075 */
  if (C.zf) goto L_12dc6075;
  /* 12dc6057 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc605a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc605d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dc6060 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc6063 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dc6066 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc6068 jne 0x12dc6073 */
  if (!C.zf) goto L_12dc6073;
  /* 12dc606a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc606d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6070 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12dc6073:;
  /* 12dc6073 jmp 0x12dc604d */
  goto L_12dc604d;
L_12dc6075:;
  /* 12dc6075 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc6078 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc607b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc607e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12dc6081 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12dc6086 push 0x12ddad00 */
  push32((uint32_t)(0x12ddad00u));
  /* 12dc608b push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc608d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc6090 push edx */
  push32((uint32_t)(EDX));
  /* 12dc6091 call 0x12dc38f0 */
  push32(0x12dc6096u); f_12dc38f0();
  /* 12dc6096 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6099 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dc609c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc60a0 jne 0x12dc60b0 */
  if (!C.zf) goto L_12dc60b0;
  /* 12dc60a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc60a5 push eax */
  push32((uint32_t)(EAX));
  /* 12dc60a6 call dword ptr [0x12de23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23a4))), 0x12dc60acu);
  /* 12dc60ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc60ae jmp 0x12dc60d5 */
  goto L_12dc60d5;
L_12dc60b0:;
  /* 12dc60b0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc60b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc60b4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc60b7 push edx */
  push32((uint32_t)(EDX));
  /* 12dc60b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc60bb push eax */
  push32((uint32_t)(EAX));
  /* 12dc60bc call 0x12dca1d0 */
  push32(0x12dc60c1u); f_12dca1d0();
  /* 12dc60c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc60c4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc60c7 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc60c8 call dword ptr [0x12de23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23a4))), 0x12dc60ceu);
  /* 12dc60ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc60d1 jmp 0x12dc60d5 */
  goto L_12dc60d5;
L_12dc60d3:;
  /* 12dc60d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dc60d5:;
  /* 12dc60d5 mov esp, ebp */
  ESP = (EBP);
  /* 12dc60d7 pop ebp */
  EBP = (pop32());
  /* 12dc60d8 ret  */
  ESPCHK(0x12dc5ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_100060e0 @ 0x12dc60e0 (77 bytes, 25 insns) */
void f_12dc60e0(void) {
  FTRACE(0x12dc60e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc60e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc60e1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc60e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc60e5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12dc60ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc60ec cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc60f0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12dc60f3 push eax */
  push32((uint32_t)(EAX));
  /* 12dc60f4 call dword ptr [0x12de2398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2398))), 0x12dc60fau);
  /* 12dc60fa mov dword ptr [0x12de0ecc], eax */
  w32((uint32_t)(0x12de0ecc), (EAX));
  /* 12dc60ff cmp dword ptr [0x12de0ecc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12de0ecc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6106 jne 0x12dc610c */
  if (!C.zf) goto L_12dc610c;
  /* 12dc6108 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc610a jmp 0x12dc612b */
  goto L_12dc612b;
L_12dc610c:;
  /* 12dc610c call 0x12dc7b90 */
  push32(0x12dc6111u); f_12dc7b90();
  /* 12dc6111 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc6113 jne 0x12dc6126 */
  if (!C.zf) goto L_12dc6126;
  /* 12dc6115 mov ecx, dword ptr [0x12de0ecc] */
  ECX = (r32((uint32_t)(0x12de0ecc)));
  /* 12dc611b push ecx */
  push32((uint32_t)(ECX));
  /* 12dc611c call dword ptr [0x12de23b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23b8))), 0x12dc6122u);
  /* 12dc6122 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc6124 jmp 0x12dc612b */
  goto L_12dc612b;
L_12dc6126:;
  /* 12dc6126 mov eax, 1 */
  EAX = (0x1u);
L_12dc612b:;
  /* 12dc612b pop ebp */
  EBP = (pop32());
  /* 12dc612c ret  */
  ESPCHK(0x12dc60e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006130 @ 0x12dc6130 (156 bytes, 48 insns) */
void f_12dc6130(void) {
  FTRACE(0x12dc6130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc6130 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc6131 mov ebp, esp */
  EBP = (ESP);
  /* 12dc6133 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc6136 mov eax, dword ptr [0x12de0ec8] */
  EAX = (r32((uint32_t)(0x12de0ec8)));
  /* 12dc613b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dc613e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dc6145 jmp 0x12dc6150 */
  goto L_12dc6150;
L_12dc6147:;
  /* 12dc6147 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc614a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc614d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dc6150:;
  /* 12dc6150 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6153 cmp edx, dword ptr [0x12de0ec4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12de0ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6159 jge 0x12dc61a6 */
  if ((C.sf==C.of)) goto L_12dc61a6;
  /* 12dc615b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12dc6160 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12dc6165 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc6168 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12dc616b push ecx */
  push32((uint32_t)(ECX));
  /* 12dc616c call dword ptr [0x12de2328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2328))), 0x12dc6172u);
  /* 12dc6172 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12dc6177 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc6179 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc617c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12dc617f push eax */
  push32((uint32_t)(EAX));
  /* 12dc6180 call dword ptr [0x12de2328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2328))), 0x12dc6186u);
  /* 12dc6186 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc6189 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12dc618c push edx */
  push32((uint32_t)(EDX));
  /* 12dc618d push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc618f mov eax, dword ptr [0x12de0ecc] */
  EAX = (r32((uint32_t)(0x12de0ecc)));
  /* 12dc6194 push eax */
  push32((uint32_t)(EAX));
  /* 12dc6195 call dword ptr [0x12de239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de239c))), 0x12dc619bu);
  /* 12dc619b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc619e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc61a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dc61a4 jmp 0x12dc6147 */
  goto L_12dc6147;
L_12dc61a6:;
  /* 12dc61a6 mov edx, dword ptr [0x12de0ec8] */
  EDX = (r32((uint32_t)(0x12de0ec8)));
  /* 12dc61ac push edx */
  push32((uint32_t)(EDX));
  /* 12dc61ad push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc61af mov eax, dword ptr [0x12de0ecc] */
  EAX = (r32((uint32_t)(0x12de0ecc)));
  /* 12dc61b4 push eax */
  push32((uint32_t)(EAX));
  /* 12dc61b5 call dword ptr [0x12de239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de239c))), 0x12dc61bbu);
  /* 12dc61bb mov ecx, dword ptr [0x12de0ecc] */
  ECX = (r32((uint32_t)(0x12de0ecc)));
  /* 12dc61c1 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc61c2 call dword ptr [0x12de23b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23b8))), 0x12dc61c8u);
  /* 12dc61c8 mov esp, ebp */
  ESP = (EBP);
  /* 12dc61ca pop ebp */
  EBP = (pop32());
  /* 12dc61cb ret  */
  ESPCHK(0x12dc6130u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12dc61d0 (73 bytes, 19 insns) */
void f_12dc61d0(void) {
  FTRACE(0x12dc61d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc61d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc61d1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc61d3 cmp dword ptr [0x12ddf524], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf524))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc61da je 0x12dc61ee */
  if (C.zf) goto L_12dc61ee;
  /* 12dc61dc cmp dword ptr [0x12ddf524], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf524))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc61e3 jne 0x12dc6217 */
  if (!C.zf) goto L_12dc6217;
  /* 12dc61e5 cmp dword ptr [0x12ddf528], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf528))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc61ec jne 0x12dc6217 */
  if (!C.zf) goto L_12dc6217;
L_12dc61ee:;
  /* 12dc61ee push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12dc61f3 call 0x12dc6220 */
  push32(0x12dc61f8u); f_12dc6220();
  /* 12dc61f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc61fb cmp dword ptr [0x12ddf694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6202 je 0x12dc620a */
  if (C.zf) goto L_12dc620a;
  /* 12dc6204 call dword ptr [0x12ddf694] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ddf694))), 0x12dc620au);
L_12dc620a:;
  /* 12dc620a push 0xff */
  push32((uint32_t)(0xffu));
  /* 12dc620f call 0x12dc6220 */
  push32(0x12dc6214u); f_12dc6220();
  /* 12dc6214 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc6217:;
  /* 12dc6217 pop ebp */
  EBP = (pop32());
  /* 12dc6218 ret  */
  ESPCHK(0x12dc61d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006220 @ 0x12dc6220 (447 bytes, 131 insns) */
void f_12dc6220(void) {
  FTRACE(0x12dc6220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc6220 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc6221 mov ebp, esp */
  EBP = (ESP);
  /* 12dc6223 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc6229 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc622a push esi */
  push32((uint32_t)(ESI));
  /* 12dc622b push edi */
  push32((uint32_t)(EDI));
  /* 12dc622c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12dc6233 jmp 0x12dc623e */
  goto L_12dc623e;
L_12dc6235:;
  /* 12dc6235 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc6238 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc623b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12dc623e:;
  /* 12dc623e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6242 jae 0x12dc6257 */
  if (!C.cf) goto L_12dc6257;
  /* 12dc6244 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc6247 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc624a cmp edx, dword ptr [ecx*8 + 0x12dddab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12dddab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6251 jne 0x12dc6255 */
  if (!C.zf) goto L_12dc6255;
  /* 12dc6253 jmp 0x12dc6257 */
  goto L_12dc6257;
L_12dc6255:;
  /* 12dc6255 jmp 0x12dc6235 */
  goto L_12dc6235;
L_12dc6257:;
  /* 12dc6257 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc625a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc625d cmp ecx, dword ptr [eax*8 + 0x12dddab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12dddab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6264 jne 0x12dc63d8 */
  if (!C.zf) goto L_12dc63d8;
  /* 12dc626a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6271 je 0x12dc6294 */
  if (C.zf) goto L_12dc6294;
  /* 12dc6273 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc6276 mov eax, dword ptr [edx*8 + 0x12dddab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12dddab4)));
  /* 12dc627d push eax */
  push32((uint32_t)(EAX));
  /* 12dc627e push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc6280 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc6282 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc6284 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc6286 call 0x12dc29b0 */
  push32(0x12dc628bu); f_12dc29b0();
  /* 12dc628b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc628e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6291 jne 0x12dc6294 */
  if (!C.zf) goto L_12dc6294;
  /* 12dc6293 int3  */
  x86_unimpl("int3 @ 0x12dc6293");
L_12dc6294:;
  /* 12dc6294 cmp dword ptr [0x12ddf524], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf524))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc629b je 0x12dc62af */
  if (C.zf) goto L_12dc62af;
  /* 12dc629d cmp dword ptr [0x12ddf524], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf524))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc62a4 jne 0x12dc62e8 */
  if (!C.zf) goto L_12dc62e8;
  /* 12dc62a6 cmp dword ptr [0x12ddf528], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf528))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc62ad jne 0x12dc62e8 */
  if (!C.zf) goto L_12dc62e8;
L_12dc62af:;
  /* 12dc62af push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc62b1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12dc62b4 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc62b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc62b8 mov eax, dword ptr [edx*8 + 0x12dddab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12dddab4)));
  /* 12dc62bf push eax */
  push32((uint32_t)(EAX));
  /* 12dc62c0 call 0x12dc6720 */
  push32(0x12dc62c5u); f_12dc6720();
  /* 12dc62c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc62c8 push eax */
  push32((uint32_t)(EAX));
  /* 12dc62c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc62cc mov edx, dword ptr [ecx*8 + 0x12dddab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x12dddab4)));
  /* 12dc62d3 push edx */
  push32((uint32_t)(EDX));
  /* 12dc62d4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12dc62d6 call dword ptr [0x12de233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de233c))), 0x12dc62dcu);
  /* 12dc62dc push eax */
  push32((uint32_t)(EAX));
  /* 12dc62dd call dword ptr [0x12de2340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2340))), 0x12dc62e3u);
  /* 12dc62e3 jmp 0x12dc63d8 */
  goto L_12dc63d8;
L_12dc62e8:;
  /* 12dc62e8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc62ef je 0x12dc63d8 */
  if (C.zf) goto L_12dc63d8;
  /* 12dc62f5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12dc62fa lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12dc6300 push eax */
  push32((uint32_t)(EAX));
  /* 12dc6301 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc6303 call dword ptr [0x12de2358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2358))), 0x12dc6309u);
  /* 12dc6309 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc630b jne 0x12dc6321 */
  if (!C.zf) goto L_12dc6321;
  /* 12dc630d push 0x12dda568 */
  push32((uint32_t)(0x12dda568u));
  /* 12dc6312 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12dc6318 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc6319 call 0x12dc68a0 */
  push32(0x12dc631eu); f_12dc68a0();
  /* 12dc631e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc6321:;
  /* 12dc6321 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12dc6327 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12dc632a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc632d push eax */
  push32((uint32_t)(EAX));
  /* 12dc632e call 0x12dc6720 */
  push32(0x12dc6333u); f_12dc6720();
  /* 12dc6333 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6336 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6339 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc633c jbe 0x12dc636a */
  if ((C.cf||C.zf)) goto L_12dc636a;
  /* 12dc633e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12dc6344 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc6345 call 0x12dc6720 */
  push32(0x12dc634au); f_12dc6720();
  /* 12dc634a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc634d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc6350 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12dc6354 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dc6357 push 3 */
  push32((uint32_t)(0x3u));
  /* 12dc6359 push 0x12dda564 */
  push32((uint32_t)(0x12dda564u));
  /* 12dc635e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc6361 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc6362 call 0x12dc7110 */
  push32(0x12dc6367u); f_12dc7110();
  /* 12dc6367 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc636a:;
  /* 12dc636a push 0x12ddafbc */
  push32((uint32_t)(0x12ddafbcu));
  /* 12dc636f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12dc6375 push edx */
  push32((uint32_t)(EDX));
  /* 12dc6376 call 0x12dc68a0 */
  push32(0x12dc637bu); f_12dc68a0();
  /* 12dc637b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc637e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc6381 push eax */
  push32((uint32_t)(EAX));
  /* 12dc6382 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12dc6388 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc6389 call 0x12dc68b0 */
  push32(0x12dc638eu); f_12dc68b0();
  /* 12dc638e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6391 push 0x12dda4dc */
  push32((uint32_t)(0x12dda4dcu));
  /* 12dc6396 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12dc639c push edx */
  push32((uint32_t)(EDX));
  /* 12dc639d call 0x12dc68b0 */
  push32(0x12dc63a2u); f_12dc68b0();
  /* 12dc63a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc63a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc63a8 mov ecx, dword ptr [eax*8 + 0x12dddab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x12dddab4)));
  /* 12dc63af push ecx */
  push32((uint32_t)(ECX));
  /* 12dc63b0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12dc63b6 push edx */
  push32((uint32_t)(EDX));
  /* 12dc63b7 call 0x12dc68b0 */
  push32(0x12dc63bcu); f_12dc68b0();
  /* 12dc63bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc63bf push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12dc63c4 push 0x12ddaf94 */
  push32((uint32_t)(0x12ddaf94u));
  /* 12dc63c9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 12dc63cf push eax */
  push32((uint32_t)(EAX));
  /* 12dc63d0 call 0x12dc7050 */
  push32(0x12dc63d5u); f_12dc7050();
  /* 12dc63d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc63d8:;
  /* 12dc63d8 pop edi */
  EDI = (pop32());
  /* 12dc63d9 pop esi */
  ESI = (pop32());
  /* 12dc63da pop ebx */
  EBX = (pop32());
  /* 12dc63db mov esp, ebp */
  ESP = (EBP);
  /* 12dc63dd pop ebp */
  EBP = (pop32());
  /* 12dc63de ret  */
  ESPCHK(0x12dc6220u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12dc63e0 (80 bytes, 27 insns) */
void f_12dc63e0(void) {
  FTRACE(0x12dc63e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc63e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc63e1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc63e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc63e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dc63eb jmp 0x12dc63f6 */
  goto L_12dc63f6;
L_12dc63ed:;
  /* 12dc63ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc63f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc63f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dc63f6:;
  /* 12dc63f6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc63fa jae 0x12dc640f */
  if (!C.cf) goto L_12dc640f;
  /* 12dc63fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc63ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc6402 cmp edx, dword ptr [ecx*8 + 0x12dddab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12dddab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6409 jne 0x12dc640d */
  if (!C.zf) goto L_12dc640d;
  /* 12dc640b jmp 0x12dc640f */
  goto L_12dc640f;
L_12dc640d:;
  /* 12dc640d jmp 0x12dc63ed */
  goto L_12dc63ed;
L_12dc640f:;
  /* 12dc640f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6412 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc6415 cmp ecx, dword ptr [eax*8 + 0x12dddab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12dddab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc641c jne 0x12dc642a */
  if (!C.zf) goto L_12dc642a;
  /* 12dc641e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6421 mov eax, dword ptr [edx*8 + 0x12dddab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12dddab4)));
  /* 12dc6428 jmp 0x12dc642c */
  goto L_12dc642c;
L_12dc642a:;
  /* 12dc642a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dc642c:;
  /* 12dc642c mov esp, ebp */
  ESP = (EBP);
  /* 12dc642e pop ebp */
  EBP = (pop32());
  /* 12dc642f ret  */
  ESPCHK(0x12dc63e0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12dc6430 (66 bytes, 28 insns) */
void f_12dc6430(void) {
  FTRACE(0x12dc6430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc6430 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc6431 mov ebp, esp */
  EBP = (ESP);
  /* 12dc6433 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6437 jne 0x12dc6457 */
  if (!C.zf) goto L_12dc6457;
  /* 12dc6439 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc643d jge 0x12dc6457 */
  if ((C.sf==C.of)) goto L_12dc6457;
  /* 12dc643f push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc6441 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc6444 push eax */
  push32((uint32_t)(EAX));
  /* 12dc6445 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc6448 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc6449 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc644c push edx */
  push32((uint32_t)(EDX));
  /* 12dc644d call 0x12dc6480 */
  push32(0x12dc6452u); f_12dc6480();
  /* 12dc6452 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6455 jmp 0x12dc646d */
  goto L_12dc646d;
L_12dc6457:;
  /* 12dc6457 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc6459 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc645c push eax */
  push32((uint32_t)(EAX));
  /* 12dc645d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc6460 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc6461 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc6464 push edx */
  push32((uint32_t)(EDX));
  /* 12dc6465 call 0x12dc6480 */
  push32(0x12dc646au); f_12dc6480();
  /* 12dc646a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc646d:;
  /* 12dc646d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc6470 pop ebp */
  EBP = (pop32());
  /* 12dc6471 ret  */
  ESPCHK(0x12dc6430u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12dc6480 (194 bytes, 71 insns) */
void f_12dc6480(void) {
  FTRACE(0x12dc6480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc6480 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc6481 mov ebp, esp */
  EBP = (ESP);
  /* 12dc6483 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc6486 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc6489 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc648c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6490 je 0x12dc64a9 */
  if (C.zf) goto L_12dc64a9;
  /* 12dc6492 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6495 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12dc6498 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc649b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc649e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dc64a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc64a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dc64a6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12dc64a9:;
  /* 12dc64a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc64ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12dc64af:;
  /* 12dc64af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc64b2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc64b4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12dc64b7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12dc64ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc64bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc64bf div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12dc64c2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12dc64c5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc64c9 jbe 0x12dc64e1 */
  if ((C.cf||C.zf)) goto L_12dc64e1;
  /* 12dc64cb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc64ce add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc64d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc64d4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12dc64d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc64d9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc64dc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dc64df jmp 0x12dc64f5 */
  goto L_12dc64f5;
L_12dc64e1:;
  /* 12dc64e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc64e4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc64e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc64ea mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12dc64ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc64ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc64f2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dc64f5:;
  /* 12dc64f5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc64f9 ja 0x12dc64af */
  if ((!C.cf&&!C.zf)) goto L_12dc64af;
  /* 12dc64fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc64fe mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12dc6501 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6504 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc6507 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dc650a:;
  /* 12dc650a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc650d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dc650f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12dc6512 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6515 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc6518 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dc651a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12dc651c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc651f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12dc6522 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12dc6524 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6527 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc652a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dc652d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc6530 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6533 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dc6536 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc6539 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc653c jb 0x12dc650a */
  if (C.cf) goto L_12dc650a;
  /* 12dc653e mov esp, ebp */
  ESP = (EBP);
  /* 12dc6540 pop ebp */
  EBP = (pop32());
  /* 12dc6541 ret  */
  ESPCHK(0x12dc6480u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12dc6550 (63 bytes, 24 insns) */
void f_12dc6550(void) {
  FTRACE(0x12dc6550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc6550 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc6551 mov ebp, esp */
  EBP = (ESP);
  /* 12dc6553 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc6554 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6558 jne 0x12dc6569 */
  if (!C.zf) goto L_12dc6569;
  /* 12dc655a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc655e jge 0x12dc6569 */
  if ((C.sf==C.of)) goto L_12dc6569;
  /* 12dc6560 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12dc6567 jmp 0x12dc6570 */
  goto L_12dc6570;
L_12dc6569:;
  /* 12dc6569 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12dc6570:;
  /* 12dc6570 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6573 push eax */
  push32((uint32_t)(EAX));
  /* 12dc6574 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc6577 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc6578 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc657b push edx */
  push32((uint32_t)(EDX));
  /* 12dc657c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc657f push eax */
  push32((uint32_t)(EAX));
  /* 12dc6580 call 0x12dc6480 */
  push32(0x12dc6585u); f_12dc6480();
  /* 12dc6585 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6588 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc658b mov esp, ebp */
  ESP = (EBP);
  /* 12dc658d pop ebp */
  EBP = (pop32());
  /* 12dc658e ret  */
  ESPCHK(0x12dc6550u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12dc6590 (30 bytes, 14 insns) */
void f_12dc6590(void) {
  FTRACE(0x12dc6590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc6590 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc6591 mov ebp, esp */
  EBP = (ESP);
  /* 12dc6593 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc6595 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc6598 push eax */
  push32((uint32_t)(EAX));
  /* 12dc6599 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc659c push ecx */
  push32((uint32_t)(ECX));
  /* 12dc659d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc65a0 push edx */
  push32((uint32_t)(EDX));
  /* 12dc65a1 call 0x12dc6480 */
  push32(0x12dc65a6u); f_12dc6480();
  /* 12dc65a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc65a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc65ac pop ebp */
  EBP = (pop32());
  /* 12dc65ad ret  */
  ESPCHK(0x12dc6590u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12dc65b0 (72 bytes, 28 insns) */
void f_12dc65b0(void) {
  FTRACE(0x12dc65b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc65b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc65b1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc65b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc65b4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc65b8 jne 0x12dc65d1 */
  if (!C.zf) goto L_12dc65d1;
  /* 12dc65ba cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc65be jg 0x12dc65d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dc65d1;
  /* 12dc65c0 jl 0x12dc65c8 */
  if ((C.sf!=C.of)) goto L_12dc65c8;
  /* 12dc65c2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc65c6 jae 0x12dc65d1 */
  if (!C.cf) goto L_12dc65d1;
L_12dc65c8:;
  /* 12dc65c8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12dc65cf jmp 0x12dc65d8 */
  goto L_12dc65d8;
L_12dc65d1:;
  /* 12dc65d1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12dc65d8:;
  /* 12dc65d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc65db push eax */
  push32((uint32_t)(EAX));
  /* 12dc65dc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc65df push ecx */
  push32((uint32_t)(ECX));
  /* 12dc65e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc65e3 push edx */
  push32((uint32_t)(EDX));
  /* 12dc65e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc65e7 push eax */
  push32((uint32_t)(EAX));
  /* 12dc65e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc65eb push ecx */
  push32((uint32_t)(ECX));
  /* 12dc65ec call 0x12dc6600 */
  push32(0x12dc65f1u); f_12dc6600();
  /* 12dc65f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc65f4 mov esp, ebp */
  ESP = (EBP);
  /* 12dc65f6 pop ebp */
  EBP = (pop32());
  /* 12dc65f7 ret  */
  ESPCHK(0x12dc65b0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12dc6600 (242 bytes, 91 insns) */
void f_12dc6600(void) {
  FTRACE(0x12dc6600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc6600 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc6601 mov ebp, esp */
  EBP = (ESP);
  /* 12dc6603 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc6606 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc6609 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc660c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6610 je 0x12dc6634 */
  if (C.zf) goto L_12dc6634;
  /* 12dc6612 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6615 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12dc6618 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc661b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc661e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dc6621 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc6624 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dc6626 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc6629 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc662c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dc662e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12dc6631 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12dc6634:;
  /* 12dc6634 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6637 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12dc663a:;
  /* 12dc663a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc663d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc663f push ecx */
  push32((uint32_t)(ECX));
  /* 12dc6640 push eax */
  push32((uint32_t)(EAX));
  /* 12dc6641 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc6644 push edx */
  push32((uint32_t)(EDX));
  /* 12dc6645 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc6648 push eax */
  push32((uint32_t)(EAX));
  /* 12dc6649 call 0x12dca580 */
  push32(0x12dc664eu); f_12dca580();
  /* 12dc664e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dc6651 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc6654 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc6656 push edx */
  push32((uint32_t)(EDX));
  /* 12dc6657 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc6658 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc665b push eax */
  push32((uint32_t)(EAX));
  /* 12dc665c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc665f push ecx */
  push32((uint32_t)(ECX));
  /* 12dc6660 call 0x12dca510 */
  push32(0x12dc6665u); f_12dca510();
  /* 12dc6665 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12dc6668 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12dc666b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc666f jbe 0x12dc6687 */
  if ((C.cf||C.zf)) goto L_12dc6687;
  /* 12dc6671 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc6674 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6677 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc667a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12dc667c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc667f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6682 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dc6685 jmp 0x12dc669b */
  goto L_12dc669b;
L_12dc6687:;
  /* 12dc6687 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc668a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc668d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6690 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12dc6692 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6695 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6698 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dc669b:;
  /* 12dc669b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc669f ja 0x12dc663a */
  if ((!C.cf&&!C.zf)) goto L_12dc663a;
  /* 12dc66a1 jb 0x12dc66a9 */
  if (C.cf) goto L_12dc66a9;
  /* 12dc66a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc66a7 ja 0x12dc663a */
  if ((!C.cf&&!C.zf)) goto L_12dc663a;
L_12dc66a9:;
  /* 12dc66a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc66ac mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12dc66af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc66b2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc66b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dc66b8:;
  /* 12dc66b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc66bb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dc66bd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12dc66c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc66c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc66c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dc66c8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12dc66ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc66cd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12dc66d0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12dc66d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc66d5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc66d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dc66db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc66de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc66e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dc66e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc66e7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc66ea jb 0x12dc66b8 */
  if (C.cf) goto L_12dc66b8;
  /* 12dc66ec mov esp, ebp */
  ESP = (EBP);
  /* 12dc66ee pop ebp */
  EBP = (pop32());
  /* 12dc66ef ret 0x14 */
  ESPCHK(0x12dc6600u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12dc6700 (31 bytes, 15 insns) */
void f_12dc6700(void) {
  FTRACE(0x12dc6700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc6700 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc6701 mov ebp, esp */
  EBP = (ESP);
  /* 12dc6703 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc6705 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc6708 push eax */
  push32((uint32_t)(EAX));
  /* 12dc6709 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc670c push ecx */
  push32((uint32_t)(ECX));
  /* 12dc670d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc6710 push edx */
  push32((uint32_t)(EDX));
  /* 12dc6711 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc6714 push eax */
  push32((uint32_t)(EAX));
  /* 12dc6715 call 0x12dc6600 */
  push32(0x12dc671au); f_12dc6600();
  /* 12dc671a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc671d pop ebp */
  EBP = (pop32());
  /* 12dc671e ret  */
  ESPCHK(0x12dc6700u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12dc6720 (123 bytes, 44 insns) */
void f_12dc6720(void) {
  FTRACE(0x12dc6720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc6720 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12dc6724 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12dc672a je 0x12dc6740 */
  if (C.zf) goto L_12dc6740;
L_12dc672c:;
  /* 12dc672c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12dc672e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12dc672f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12dc6731 je 0x12dc6773 */
  if (C.zf) goto L_12dc6773;
  /* 12dc6733 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12dc6739 jne 0x12dc672c */
  if (!C.zf) goto L_12dc672c;
  /* 12dc673b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12dc6740:;
  /* 12dc6740 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12dc6742 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12dc6747 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6749 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc674c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc674e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6751 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12dc6756 je 0x12dc6740 */
  if (C.zf) goto L_12dc6740;
  /* 12dc6758 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12dc675b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12dc675d je 0x12dc6791 */
  if (C.zf) goto L_12dc6791;
  /* 12dc675f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12dc6761 je 0x12dc6787 */
  if (C.zf) goto L_12dc6787;
  /* 12dc6763 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12dc6768 je 0x12dc677d */
  if (C.zf) goto L_12dc677d;
  /* 12dc676a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12dc676f je 0x12dc6773 */
  if (C.zf) goto L_12dc6773;
  /* 12dc6771 jmp 0x12dc6740 */
  goto L_12dc6740;
L_12dc6773:;
  /* 12dc6773 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12dc6776 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12dc677a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc677c ret  */
  ESPCHK(0x12dc6720u, _esp0);
  ESP += 4; return;
L_12dc677d:;
  /* 12dc677d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12dc6780 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12dc6784 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc6786 ret  */
  ESPCHK(0x12dc6720u, _esp0);
  ESP += 4; return;
L_12dc6787:;
  /* 12dc6787 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 12dc678a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12dc678e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc6790 ret  */
  ESPCHK(0x12dc6720u, _esp0);
  ESP += 4; return;
L_12dc6791:;
  /* 12dc6791 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12dc6794 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12dc6798 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc679a ret  */
  ESPCHK(0x12dc6720u, _esp0);
  ESP += 4; return;
}

/* FUN_100067a0 @ 0x12dc67a0 (249 bytes, 93 insns) */
void f_12dc67a0(void) {
  FTRACE(0x12dc67a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc67a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc67a1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc67a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc67a6 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc67a7 push esi */
  push32((uint32_t)(ESI));
  /* 12dc67a8 push edi */
  push32((uint32_t)(EDI));
  /* 12dc67a9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12dc67ac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12dc67af lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12dc67b2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12dc67b5:;
  /* 12dc67b5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc67b9 jne 0x12dc67d9 */
  if (!C.zf) goto L_12dc67d9;
  /* 12dc67bb push 0x12ddaff4 */
  push32((uint32_t)(0x12ddaff4u));
  /* 12dc67c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc67c2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12dc67c4 push 0x12ddafe8 */
  push32((uint32_t)(0x12ddafe8u));
  /* 12dc67c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc67cb call 0x12dc29b0 */
  push32(0x12dc67d0u); f_12dc29b0();
  /* 12dc67d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc67d3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc67d6 jne 0x12dc67d9 */
  if (!C.zf) goto L_12dc67d9;
  /* 12dc67d8 int3  */
  x86_unimpl("int3 @ 0x12dc67d8");
L_12dc67d9:;
  /* 12dc67d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc67db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc67dd jne 0x12dc67b5 */
  if (!C.zf) goto L_12dc67b5;
L_12dc67df:;
  /* 12dc67df cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc67e3 jne 0x12dc6803 */
  if (!C.zf) goto L_12dc6803;
  /* 12dc67e5 push 0x12ddafd8 */
  push32((uint32_t)(0x12ddafd8u));
  /* 12dc67ea push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc67ec push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12dc67ee push 0x12ddafe8 */
  push32((uint32_t)(0x12ddafe8u));
  /* 12dc67f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc67f5 call 0x12dc29b0 */
  push32(0x12dc67fau); f_12dc29b0();
  /* 12dc67fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc67fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6800 jne 0x12dc6803 */
  if (!C.zf) goto L_12dc6803;
  /* 12dc6802 int3  */
  x86_unimpl("int3 @ 0x12dc6802");
L_12dc6803:;
  /* 12dc6803 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc6805 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc6807 jne 0x12dc67df */
  if (!C.zf) goto L_12dc67df;
  /* 12dc6809 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc680c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12dc6813 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc6816 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc6819 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12dc681c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc681f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc6822 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12dc6824 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc6827 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc682a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12dc682d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc6830 push edx */
  push32((uint32_t)(EDX));
  /* 12dc6831 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc6834 push eax */
  push32((uint32_t)(EAX));
  /* 12dc6835 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc6838 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc6839 call 0x12dca880 */
  push32(0x12dc683eu); f_12dca880();
  /* 12dc683e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6841 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12dc6844 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc6847 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12dc684a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc684d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc6850 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12dc6853 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc6856 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc685a jl 0x12dc687e */
  if ((C.sf!=C.of)) goto L_12dc687e;
  /* 12dc685c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc685f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dc6861 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12dc6864 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc6866 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dc686c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12dc686f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc6872 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dc6874 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6877 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc687a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12dc687c jmp 0x12dc688f */
  goto L_12dc688f;
L_12dc687e:;
  /* 12dc687e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc6881 push eax */
  push32((uint32_t)(EAX));
  /* 12dc6882 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc6884 call 0x12dca600 */
  push32(0x12dc6889u); f_12dca600();
  /* 12dc6889 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc688c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12dc688f:;
  /* 12dc688f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc6892 pop edi */
  EDI = (pop32());
  /* 12dc6893 pop esi */
  ESI = (pop32());
  /* 12dc6894 pop ebx */
  EBX = (pop32());
  /* 12dc6895 mov esp, ebp */
  ESP = (EBP);
  /* 12dc6897 pop ebp */
  EBP = (pop32());
  /* 12dc6898 ret  */
  ESPCHK(0x12dc67a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068a0 @ 0x12dc68a0 (7 bytes, 3 insns) */
void f_12dc68a0(void) {
  FTRACE(0x12dc68a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc68a0 push edi */
  push32((uint32_t)(EDI));
  /* 12dc68a1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12dc68a5 jmp 0x12dc6911 */
  jmp_ind(0x12dc6911u); return;
}

/* FUN_100068b0 @ 0x12dc68b0 (224 bytes, 84 insns) */
void f_12dc68b0(void) {
  FTRACE(0x12dc68b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc68b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12dc68b4 push edi */
  push32((uint32_t)(EDI));
  /* 12dc68b5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12dc68bb je 0x12dc68cc */
  if (C.zf) goto L_12dc68cc;
L_12dc68bd:;
  /* 12dc68bd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12dc68bf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12dc68c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12dc68c2 je 0x12dc68ff */
  if (C.zf) goto L_12dc68ff;
  /* 12dc68c4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12dc68ca jne 0x12dc68bd */
  if (!C.zf) goto L_12dc68bd;
L_12dc68cc:;
  /* 12dc68cc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12dc68ce mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12dc68d3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc68d5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc68d8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc68da add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc68dd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12dc68e2 je 0x12dc68cc */
  if (C.zf) goto L_12dc68cc;
  /* 12dc68e4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12dc68e7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12dc68e9 je 0x12dc690e */
  if (C.zf) goto L_12dc690e;
  /* 12dc68eb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12dc68ed je 0x12dc6909 */
  if (C.zf) goto L_12dc6909;
  /* 12dc68ef test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12dc68f4 je 0x12dc6904 */
  if (C.zf) goto L_12dc6904;
  /* 12dc68f6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12dc68fb je 0x12dc68ff */
  if (C.zf) goto L_12dc68ff;
  /* 12dc68fd jmp 0x12dc68cc */
  goto L_12dc68cc;
L_12dc68ff:;
  /* 12dc68ff lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12dc6902 jmp 0x12dc6911 */
  goto L_12dc6911;
L_12dc6904:;
  /* 12dc6904 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12dc6907 jmp 0x12dc6911 */
  goto L_12dc6911;
L_12dc6909:;
  /* 12dc6909 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 12dc690c jmp 0x12dc6911 */
  goto L_12dc6911;
L_12dc690e:;
  /* 12dc690e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12dc6911:;
  /* 12dc6911 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12dc6915 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12dc691b je 0x12dc6936 */
  if (C.zf) goto L_12dc6936;
L_12dc691d:;
  /* 12dc691d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dc691f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12dc6920 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12dc6922 je 0x12dc6988 */
  if (C.zf) goto L_12dc6988;
  /* 12dc6924 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12dc6926 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12dc6927 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12dc692d jne 0x12dc691d */
  if (!C.zf) goto L_12dc691d;
  /* 12dc692f jmp 0x12dc6936 */
  goto L_12dc6936;
L_12dc6931:;
  /* 12dc6931 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12dc6933 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12dc6936:;
  /* 12dc6936 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12dc693b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12dc693d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc693f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc6942 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc6944 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dc6946 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6949 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12dc694e je 0x12dc6931 */
  if (C.zf) goto L_12dc6931;
  /* 12dc6950 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12dc6952 je 0x12dc6988 */
  if (C.zf) goto L_12dc6988;
  /* 12dc6954 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12dc6956 je 0x12dc697f */
  if (C.zf) goto L_12dc697f;
  /* 12dc6958 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12dc695e je 0x12dc6972 */
  if (C.zf) goto L_12dc6972;
  /* 12dc6960 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12dc6966 je 0x12dc696a */
  if (C.zf) goto L_12dc696a;
  /* 12dc6968 jmp 0x12dc6931 */
  goto L_12dc6931;
L_12dc696a:;
  /* 12dc696a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12dc696c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12dc6970 pop edi */
  EDI = (pop32());
  /* 12dc6971 ret  */
  ESPCHK(0x12dc68b0u, _esp0);
  ESP += 4; return;
L_12dc6972:;
  /* 12dc6972 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12dc6975 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12dc6979 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 12dc697d pop edi */
  EDI = (pop32());
  /* 12dc697e ret  */
  ESPCHK(0x12dc68b0u, _esp0);
  ESP += 4; return;
L_12dc697f:;
  /* 12dc697f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12dc6982 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12dc6986 pop edi */
  EDI = (pop32());
  /* 12dc6987 ret  */
  ESPCHK(0x12dc68b0u, _esp0);
  ESP += 4; return;
L_12dc6988:;
  /* 12dc6988 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12dc698a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12dc698e pop edi */
  EDI = (pop32());
  /* 12dc698f ret  */
  ESPCHK(0x12dc68b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006990 @ 0x12dc6990 (243 bytes, 91 insns) */
void f_12dc6990(void) {
  FTRACE(0x12dc6990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc6990 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc6991 mov ebp, esp */
  EBP = (ESP);
  /* 12dc6993 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc6996 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc6997 push esi */
  push32((uint32_t)(ESI));
  /* 12dc6998 push edi */
  push32((uint32_t)(EDI));
  /* 12dc6999 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12dc699c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12dc699f:;
  /* 12dc699f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc69a3 jne 0x12dc69c3 */
  if (!C.zf) goto L_12dc69c3;
  /* 12dc69a5 push 0x12ddaff4 */
  push32((uint32_t)(0x12ddaff4u));
  /* 12dc69aa push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc69ac push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12dc69ae push 0x12ddb004 */
  push32((uint32_t)(0x12ddb004u));
  /* 12dc69b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc69b5 call 0x12dc29b0 */
  push32(0x12dc69bau); f_12dc29b0();
  /* 12dc69ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc69bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc69c0 jne 0x12dc69c3 */
  if (!C.zf) goto L_12dc69c3;
  /* 12dc69c2 int3  */
  x86_unimpl("int3 @ 0x12dc69c2");
L_12dc69c3:;
  /* 12dc69c3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc69c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc69c7 jne 0x12dc699f */
  if (!C.zf) goto L_12dc699f;
L_12dc69c9:;
  /* 12dc69c9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc69cd jne 0x12dc69ed */
  if (!C.zf) goto L_12dc69ed;
  /* 12dc69cf push 0x12ddafd8 */
  push32((uint32_t)(0x12ddafd8u));
  /* 12dc69d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc69d6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12dc69d8 push 0x12ddb004 */
  push32((uint32_t)(0x12ddb004u));
  /* 12dc69dd push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc69df call 0x12dc29b0 */
  push32(0x12dc69e4u); f_12dc29b0();
  /* 12dc69e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc69e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc69ea jne 0x12dc69ed */
  if (!C.zf) goto L_12dc69ed;
  /* 12dc69ec int3  */
  x86_unimpl("int3 @ 0x12dc69ec");
L_12dc69ed:;
  /* 12dc69ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc69ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc69f1 jne 0x12dc69c9 */
  if (!C.zf) goto L_12dc69c9;
  /* 12dc69f3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc69f6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 12dc69fd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc6a00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc6a03 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12dc6a06 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc6a09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc6a0c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12dc6a0e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc6a11 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc6a14 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12dc6a17 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dc6a1a push ecx */
  push32((uint32_t)(ECX));
  /* 12dc6a1b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc6a1e push edx */
  push32((uint32_t)(EDX));
  /* 12dc6a1f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc6a22 push eax */
  push32((uint32_t)(EAX));
  /* 12dc6a23 call 0x12dca880 */
  push32(0x12dc6a28u); f_12dca880();
  /* 12dc6a28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6a2b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12dc6a2e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc6a31 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dc6a34 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc6a37 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc6a3a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12dc6a3d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc6a40 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6a44 jl 0x12dc6a68 */
  if ((C.sf!=C.of)) goto L_12dc6a68;
  /* 12dc6a46 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc6a49 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dc6a4b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12dc6a4e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc6a50 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc6a56 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12dc6a59 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc6a5c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dc6a5e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6a61 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc6a64 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12dc6a66 jmp 0x12dc6a79 */
  goto L_12dc6a79;
L_12dc6a68:;
  /* 12dc6a68 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc6a6b push edx */
  push32((uint32_t)(EDX));
  /* 12dc6a6c push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc6a6e call 0x12dca600 */
  push32(0x12dc6a73u); f_12dca600();
  /* 12dc6a73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6a76 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12dc6a79:;
  /* 12dc6a79 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc6a7c pop edi */
  EDI = (pop32());
  /* 12dc6a7d pop esi */
  ESI = (pop32());
  /* 12dc6a7e pop ebx */
  EBX = (pop32());
  /* 12dc6a7f mov esp, ebp */
  ESP = (EBP);
  /* 12dc6a81 pop ebp */
  EBP = (pop32());
  /* 12dc6a82 ret  */
  ESPCHK(0x12dc6990u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a90 @ 0x12dc6a90 (47 bytes, 17 insns) */
void f_12dc6a90(void) {
  FTRACE(0x12dc6a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc6a90 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc6a91 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6a96 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12dc6a9a jb 0x12dc6ab0 */
  if (C.cf) goto L_12dc6ab0;
L_12dc6a9c:;
  /* 12dc6a9c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc6aa2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc6aa7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12dc6aa9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6aae jae 0x12dc6a9c */
  if (!C.cf) goto L_12dc6a9c;
L_12dc6ab0:;
  /* 12dc6ab0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc6ab2 mov eax, esp */
  EAX = (ESP);
  /* 12dc6ab4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12dc6ab6 mov esp, ecx */
  ESP = (ECX);
  /* 12dc6ab8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dc6aba mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dc6abd push eax */
  push32((uint32_t)(EAX));
  /* 12dc6abe ret  */
  ESPCHK(0x12dc6a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ac0 @ 0x12dc6ac0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12dc6ac0(void) {
  FTRACE(0x12dc6ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc6ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc6ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc6ac3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc6ac6 push esi */
  push32((uint32_t)(ESI));
  /* 12dc6ac7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6acb je 0x12dc6ad3 */
  if (C.zf) goto L_12dc6ad3;
  /* 12dc6acd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6ad1 jne 0x12dc6ad8 */
  if (!C.zf) goto L_12dc6ad8;
L_12dc6ad3:;
  /* 12dc6ad3 jmp 0x12dc6ca8 */
  goto L_12dc6ca8;
L_12dc6ad8:;
  /* 12dc6ad8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6adc je 0x12dc6af4 */
  if (C.zf) goto L_12dc6af4;
  /* 12dc6ade cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6ae2 je 0x12dc6af4 */
  if (C.zf) goto L_12dc6af4;
  /* 12dc6ae4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6ae8 je 0x12dc6af4 */
  if (C.zf) goto L_12dc6af4;
  /* 12dc6aea cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6aee jne 0x12dc6bd1 */
  if (!C.zf) goto L_12dc6bd1;
L_12dc6af4:;
  /* 12dc6af4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc6af6 call 0x12dc72f0 */
  push32(0x12dc6afbu); f_12dc72f0();
  /* 12dc6afb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6afe cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6b02 je 0x12dc6b0a */
  if (C.zf) goto L_12dc6b0a;
  /* 12dc6b04 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6b08 jne 0x12dc6b4f */
  if (!C.zf) goto L_12dc6b4f;
L_12dc6b0a:;
  /* 12dc6b0a cmp dword ptr [0x12ddf6a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf6a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6b11 jne 0x12dc6b4f */
  if (!C.zf) goto L_12dc6b4f;
  /* 12dc6b13 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc6b15 push 0x12dc6cf0 */
  push32((uint32_t)(0x12dc6cf0u));
  /* 12dc6b1a call dword ptr [0x12de2324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2324))), 0x12dc6b20u);
  /* 12dc6b20 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6b23 jne 0x12dc6b31 */
  if (!C.zf) goto L_12dc6b31;
  /* 12dc6b25 mov dword ptr [0x12ddf6a8], 1 */
  w32((uint32_t)(0x12ddf6a8), (0x1u));
  /* 12dc6b2f jmp 0x12dc6b4f */
  goto L_12dc6b4f;
L_12dc6b31:;
  /* 12dc6b31 call dword ptr [0x12de2380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2380))), 0x12dc6b37u);
  /* 12dc6b37 mov esi, eax */
  ESI = (EAX);
  /* 12dc6b39 call 0x12dcb7d0 */
  push32(0x12dc6b3eu); f_12dcb7d0();
  /* 12dc6b3e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12dc6b40 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc6b42 call 0x12dc7390 */
  push32(0x12dc6b47u); f_12dc7390();
  /* 12dc6b47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6b4a jmp 0x12dc6ca8 */
  goto L_12dc6ca8;
L_12dc6b4f:;
  /* 12dc6b4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc6b52 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12dc6b55 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc6b58 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc6b5b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12dc6b5e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6b62 ja 0x12dc6bc2 */
  if ((!C.cf&&!C.zf)) goto L_12dc6bc2;
  /* 12dc6b64 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc6b67 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc6b69 mov dl, byte ptr [eax + 0x12dc6ccf] */
  DL = (r8((uint32_t)(EAX + 0x12dc6ccf)));
  /* 12dc6b6f jmp dword ptr [edx*4 + 0x12dc6cbb] */
  switch (EDX) {
    case 0: goto L_12dc6b76;
    case 1: goto L_12dc6bb0;
    case 2: goto L_12dc6b8a;
    case 3: goto L_12dc6b9d;
    case 4: goto L_12dc6bc2;
    default: x86_unimpl("switch@0x12dc6b6f out of table"); return;
  }
L_12dc6b76:;
  /* 12dc6b76 mov ecx, dword ptr [0x12ddf698] */
  ECX = (r32((uint32_t)(0x12ddf698)));
  /* 12dc6b7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dc6b7f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc6b82 mov dword ptr [0x12ddf698], edx */
  w32((uint32_t)(0x12ddf698), (EDX));
  /* 12dc6b88 jmp 0x12dc6bc2 */
  goto L_12dc6bc2;
L_12dc6b8a:;
  /* 12dc6b8a mov eax, dword ptr [0x12ddf69c] */
  EAX = (r32((uint32_t)(0x12ddf69c)));
  /* 12dc6b8f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dc6b92 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc6b95 mov dword ptr [0x12ddf69c], ecx */
  w32((uint32_t)(0x12ddf69c), (ECX));
  /* 12dc6b9b jmp 0x12dc6bc2 */
  goto L_12dc6bc2;
L_12dc6b9d:;
  /* 12dc6b9d mov edx, dword ptr [0x12ddf6a0] */
  EDX = (r32((uint32_t)(0x12ddf6a0)));
  /* 12dc6ba3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12dc6ba6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc6ba9 mov dword ptr [0x12ddf6a0], eax */
  w32((uint32_t)(0x12ddf6a0), (EAX));
  /* 12dc6bae jmp 0x12dc6bc2 */
  goto L_12dc6bc2;
L_12dc6bb0:;
  /* 12dc6bb0 mov ecx, dword ptr [0x12ddf6a4] */
  ECX = (r32((uint32_t)(0x12ddf6a4)));
  /* 12dc6bb6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dc6bb9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc6bbc mov dword ptr [0x12ddf6a4], edx */
  w32((uint32_t)(0x12ddf6a4), (EDX));
L_12dc6bc2:;
  /* 12dc6bc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc6bc4 call 0x12dc7390 */
  push32(0x12dc6bc9u); f_12dc7390();
  /* 12dc6bc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6bcc jmp 0x12dc6ca3 */
  goto L_12dc6ca3;
L_12dc6bd1:;
  /* 12dc6bd1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6bd5 je 0x12dc6be8 */
  if (C.zf) goto L_12dc6be8;
  /* 12dc6bd7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6bdb je 0x12dc6be8 */
  if (C.zf) goto L_12dc6be8;
  /* 12dc6bdd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6be1 je 0x12dc6be8 */
  if (C.zf) goto L_12dc6be8;
  /* 12dc6be3 jmp 0x12dc6ca8 */
  goto L_12dc6ca8;
L_12dc6be8:;
  /* 12dc6be8 call 0x12dc3330 */
  push32(0x12dc6bedu); f_12dc3330();
  /* 12dc6bed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc6bf0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6bf3 cmp dword ptr [eax + 0x50], 0x12dddc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x12dddc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6bfa jne 0x12dc6c45 */
  if (!C.zf) goto L_12dc6c45;
  /* 12dc6bfc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12dc6c01 push 0x12ddb010 */
  push32((uint32_t)(0x12ddb010u));
  /* 12dc6c06 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc6c08 mov ecx, dword ptr [0x12dddc80] */
  ECX = (r32((uint32_t)(0x12dddc80)));
  /* 12dc6c0e push ecx */
  push32((uint32_t)(ECX));
  /* 12dc6c0f call 0x12dc38f0 */
  push32(0x12dc6c14u); f_12dc38f0();
  /* 12dc6c14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6c17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6c1a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 12dc6c1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6c20 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6c24 je 0x12dc6c43 */
  if (C.zf) goto L_12dc6c43;
  /* 12dc6c26 mov ecx, dword ptr [0x12dddc80] */
  ECX = (r32((uint32_t)(0x12dddc80)));
  /* 12dc6c2c push ecx */
  push32((uint32_t)(ECX));
  /* 12dc6c2d push 0x12dddc00 */
  push32((uint32_t)(0x12dddc00u));
  /* 12dc6c32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6c35 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12dc6c38 push eax */
  push32((uint32_t)(EAX));
  /* 12dc6c39 call 0x12dca1d0 */
  push32(0x12dc6c3eu); f_12dca1d0();
  /* 12dc6c3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6c41 jmp 0x12dc6c45 */
  goto L_12dc6c45;
L_12dc6c43:;
  /* 12dc6c43 jmp 0x12dc6ca8 */
  goto L_12dc6ca8;
L_12dc6c45:;
  /* 12dc6c45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6c48 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12dc6c4b push edx */
  push32((uint32_t)(EDX));
  /* 12dc6c4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc6c4f push eax */
  push32((uint32_t)(EAX));
  /* 12dc6c50 call 0x12dc6fd0 */
  push32(0x12dc6c55u); f_12dc6fd0();
  /* 12dc6c55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6c58 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dc6c5b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6c5f jne 0x12dc6c63 */
  if (!C.zf) goto L_12dc6c63;
  /* 12dc6c61 jmp 0x12dc6ca8 */
  goto L_12dc6ca8;
L_12dc6c63:;
  /* 12dc6c63 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc6c66 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12dc6c69 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12dc6c6c:;
  /* 12dc6c6c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc6c6f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dc6c72 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6c75 jne 0x12dc6ca3 */
  if (!C.zf) goto L_12dc6ca3;
  /* 12dc6c77 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc6c7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc6c7d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12dc6c80 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc6c83 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6c86 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dc6c89 mov edx, dword ptr [0x12dddc84] */
  EDX = (r32((uint32_t)(0x12dddc84)));
  /* 12dc6c8f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc6c92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6c95 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12dc6c98 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6c9a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6c9d jb 0x12dc6ca1 */
  if (C.cf) goto L_12dc6ca1;
  /* 12dc6c9f jmp 0x12dc6ca3 */
  goto L_12dc6ca3;
L_12dc6ca1:;
  /* 12dc6ca1 jmp 0x12dc6c6c */
  goto L_12dc6c6c;
L_12dc6ca3:;
  /* 12dc6ca3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc6ca6 jmp 0x12dc6cb6 */
  goto L_12dc6cb6;
L_12dc6ca8:;
  /* 12dc6ca8 call 0x12dcb7c0 */
  push32(0x12dc6cadu); f_12dcb7c0();
  /* 12dc6cad mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12dc6cb3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12dc6cb6:;
  /* 12dc6cb6 pop esi */
  ESI = (pop32());
  /* 12dc6cb7 mov esp, ebp */
  ESP = (EBP);
  /* 12dc6cb9 pop ebp */
  EBP = (pop32());
  /* 12dc6cba ret  */
  ESPCHK(0x12dc6ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cf0 @ 0x12dc6cf0 (146 bytes, 45 insns) */
void f_12dc6cf0(void) {
  FTRACE(0x12dc6cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc6cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc6cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc6cf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc6cf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc6cf8 call 0x12dc72f0 */
  push32(0x12dc6cfdu); f_12dc72f0();
  /* 12dc6cfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6d00 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6d04 jne 0x12dc6d1e */
  if (!C.zf) goto L_12dc6d1e;
  /* 12dc6d06 mov dword ptr [ebp - 8], 0x12ddf698 */
  w32((uint32_t)(EBP + -0x8), (0x12ddf698u));
  /* 12dc6d0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc6d10 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dc6d12 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dc6d15 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12dc6d1c jmp 0x12dc6d34 */
  goto L_12dc6d34;
L_12dc6d1e:;
  /* 12dc6d1e mov dword ptr [ebp - 8], 0x12ddf69c */
  w32((uint32_t)(EBP + -0x8), (0x12ddf69cu));
  /* 12dc6d25 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc6d28 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dc6d2a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dc6d2d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12dc6d34:;
  /* 12dc6d34 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6d38 jne 0x12dc6d48 */
  if (!C.zf) goto L_12dc6d48;
  /* 12dc6d3a push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc6d3c call 0x12dc7390 */
  push32(0x12dc6d41u); f_12dc7390();
  /* 12dc6d41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6d44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc6d46 jmp 0x12dc6d7c */
  goto L_12dc6d7c;
L_12dc6d48:;
  /* 12dc6d48 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6d4c je 0x12dc6d6d */
  if (C.zf) goto L_12dc6d6d;
  /* 12dc6d4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc6d51 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12dc6d57 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc6d59 call 0x12dc7390 */
  push32(0x12dc6d5eu); f_12dc7390();
  /* 12dc6d5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6d61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6d64 push edx */
  push32((uint32_t)(EDX));
  /* 12dc6d65 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12dc6d68u);
  /* 12dc6d68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6d6b jmp 0x12dc6d77 */
  goto L_12dc6d77;
L_12dc6d6d:;
  /* 12dc6d6d push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc6d6f call 0x12dc7390 */
  push32(0x12dc6d74u); f_12dc7390();
  /* 12dc6d74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc6d77:;
  /* 12dc6d77 mov eax, 1 */
  EAX = (0x1u);
L_12dc6d7c:;
  /* 12dc6d7c mov esp, ebp */
  ESP = (EBP);
  /* 12dc6d7e pop ebp */
  EBP = (pop32());
  /* 12dc6d7f ret 4 */
  ESPCHK(0x12dc6cf0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006d90 @ 0x12dc6d90 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12dc6d90(void) {
  FTRACE(0x12dc6d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc6d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc6d91 mov ebp, esp */
  EBP = (ESP);
  /* 12dc6d93 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc6d96 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12dc6d9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc6da0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12dc6da3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc6da6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc6da9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12dc6dac cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6db0 ja 0x12dc6e5e */
  if ((!C.cf&&!C.zf)) goto L_12dc6e5e;
  /* 12dc6db6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc6db9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc6dbb mov dl, byte ptr [eax + 0x12dc6fb2] */
  DL = (r8((uint32_t)(EAX + 0x12dc6fb2)));
  /* 12dc6dc1 jmp dword ptr [edx*4 + 0x12dc6f9a] */
  switch (EDX) {
    case 0: goto L_12dc6dc8;
    case 1: goto L_12dc6e33;
    case 2: goto L_12dc6e19;
    case 3: goto L_12dc6de5;
    case 4: goto L_12dc6dff;
    case 5: goto L_12dc6e5e;
    default: x86_unimpl("switch@0x12dc6dc1 out of table"); return;
  }
L_12dc6dc8:;
  /* 12dc6dc8 mov dword ptr [ebp - 0x18], 0x12ddf698 */
  w32((uint32_t)(EBP + -0x18), (0x12ddf698u));
  /* 12dc6dcf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc6dd2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dc6dd4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12dc6dd7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc6dda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6ddd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dc6de0 jmp 0x12dc6e66 */
  goto L_12dc6e66;
L_12dc6de5:;
  /* 12dc6de5 mov dword ptr [ebp - 0x18], 0x12ddf69c */
  w32((uint32_t)(EBP + -0x18), (0x12ddf69cu));
  /* 12dc6dec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc6def mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dc6df1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12dc6df4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc6df7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6dfa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dc6dfd jmp 0x12dc6e66 */
  goto L_12dc6e66;
L_12dc6dff:;
  /* 12dc6dff mov dword ptr [ebp - 0x18], 0x12ddf6a0 */
  w32((uint32_t)(EBP + -0x18), (0x12ddf6a0u));
  /* 12dc6e06 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc6e09 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dc6e0b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12dc6e0e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc6e11 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6e14 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dc6e17 jmp 0x12dc6e66 */
  goto L_12dc6e66;
L_12dc6e19:;
  /* 12dc6e19 mov dword ptr [ebp - 0x18], 0x12ddf6a4 */
  w32((uint32_t)(EBP + -0x18), (0x12ddf6a4u));
  /* 12dc6e20 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc6e23 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dc6e25 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12dc6e28 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc6e2b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6e2e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dc6e31 jmp 0x12dc6e66 */
  goto L_12dc6e66;
L_12dc6e33:;
  /* 12dc6e33 call 0x12dc3330 */
  push32(0x12dc6e38u); f_12dc3330();
  /* 12dc6e38 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc6e3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6e3e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12dc6e41 push edx */
  push32((uint32_t)(EDX));
  /* 12dc6e42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc6e45 push eax */
  push32((uint32_t)(EAX));
  /* 12dc6e46 call 0x12dc6fd0 */
  push32(0x12dc6e4bu); f_12dc6fd0();
  /* 12dc6e4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6e4e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6e51 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dc6e54 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc6e57 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dc6e59 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12dc6e5c jmp 0x12dc6e66 */
  goto L_12dc6e66;
L_12dc6e5e:;
  /* 12dc6e5e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc6e61 jmp 0x12dc6f96 */
  goto L_12dc6f96;
L_12dc6e66:;
  /* 12dc6e66 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6e6a je 0x12dc6e76 */
  if (C.zf) goto L_12dc6e76;
  /* 12dc6e6c push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc6e6e call 0x12dc72f0 */
  push32(0x12dc6e73u); f_12dc72f0();
  /* 12dc6e73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc6e76:;
  /* 12dc6e76 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6e7a jne 0x12dc6e93 */
  if (!C.zf) goto L_12dc6e93;
  /* 12dc6e7c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6e80 je 0x12dc6e8c */
  if (C.zf) goto L_12dc6e8c;
  /* 12dc6e82 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc6e84 call 0x12dc7390 */
  push32(0x12dc6e89u); f_12dc7390();
  /* 12dc6e89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc6e8c:;
  /* 12dc6e8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc6e8e jmp 0x12dc6f96 */
  goto L_12dc6f96;
L_12dc6e93:;
  /* 12dc6e93 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6e97 jne 0x12dc6eb0 */
  if (!C.zf) goto L_12dc6eb0;
  /* 12dc6e99 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6e9d je 0x12dc6ea9 */
  if (C.zf) goto L_12dc6ea9;
  /* 12dc6e9f push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc6ea1 call 0x12dc7390 */
  push32(0x12dc6ea6u); f_12dc7390();
  /* 12dc6ea6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc6ea9:;
  /* 12dc6ea9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12dc6eab call 0x12dc30b0 */
  push32(0x12dc6eb0u); f_12dc30b0();
L_12dc6eb0:;
  /* 12dc6eb0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6eb4 je 0x12dc6ec2 */
  if (C.zf) goto L_12dc6ec2;
  /* 12dc6eb6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6eba je 0x12dc6ec2 */
  if (C.zf) goto L_12dc6ec2;
  /* 12dc6ebc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6ec0 jne 0x12dc6eee */
  if (!C.zf) goto L_12dc6eee;
L_12dc6ec2:;
  /* 12dc6ec2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6ec5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12dc6ec8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12dc6ecb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6ece mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12dc6ed5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6ed9 jne 0x12dc6eee */
  if (!C.zf) goto L_12dc6eee;
  /* 12dc6edb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6ede mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12dc6ee1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dc6ee4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6ee7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_12dc6eee:;
  /* 12dc6eee cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6ef2 jne 0x12dc6f30 */
  if (!C.zf) goto L_12dc6f30;
  /* 12dc6ef4 mov eax, dword ptr [0x12dddc78] */
  EAX = (r32((uint32_t)(0x12dddc78)));
  /* 12dc6ef9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12dc6efc jmp 0x12dc6f07 */
  goto L_12dc6f07;
L_12dc6efe:;
  /* 12dc6efe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc6f01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6f04 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12dc6f07:;
  /* 12dc6f07 mov edx, dword ptr [0x12dddc78] */
  EDX = (r32((uint32_t)(0x12dddc78)));
  /* 12dc6f0d add edx, dword ptr [0x12dddc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12dddc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6f13 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6f16 jge 0x12dc6f2e */
  if ((C.sf==C.of)) goto L_12dc6f2e;
  /* 12dc6f18 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc6f1b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc6f1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6f21 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12dc6f24 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12dc6f2c jmp 0x12dc6efe */
  goto L_12dc6efe;
L_12dc6f2e:;
  /* 12dc6f2e jmp 0x12dc6f39 */
  goto L_12dc6f39;
L_12dc6f30:;
  /* 12dc6f30 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc6f33 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12dc6f39:;
  /* 12dc6f39 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6f3d je 0x12dc6f49 */
  if (C.zf) goto L_12dc6f49;
  /* 12dc6f3f push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc6f41 call 0x12dc7390 */
  push32(0x12dc6f46u); f_12dc7390();
  /* 12dc6f46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc6f49:;
  /* 12dc6f49 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6f4d jne 0x12dc6f60 */
  if (!C.zf) goto L_12dc6f60;
  /* 12dc6f4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6f52 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12dc6f55 push edx */
  push32((uint32_t)(EDX));
  /* 12dc6f56 push 8 */
  push32((uint32_t)(0x8u));
  /* 12dc6f58 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12dc6f5bu);
  /* 12dc6f5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6f5e jmp 0x12dc6f6a */
  goto L_12dc6f6a;
L_12dc6f60:;
  /* 12dc6f60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc6f63 push eax */
  push32((uint32_t)(EAX));
  /* 12dc6f64 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12dc6f67u);
  /* 12dc6f67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc6f6a:;
  /* 12dc6f6a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6f6e je 0x12dc6f7c */
  if (C.zf) goto L_12dc6f7c;
  /* 12dc6f70 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6f74 je 0x12dc6f7c */
  if (C.zf) goto L_12dc6f7c;
  /* 12dc6f76 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6f7a jne 0x12dc6f94 */
  if (!C.zf) goto L_12dc6f94;
L_12dc6f7c:;
  /* 12dc6f7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6f7f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc6f82 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12dc6f85 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6f89 jne 0x12dc6f94 */
  if (!C.zf) goto L_12dc6f94;
  /* 12dc6f8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6f8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc6f91 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12dc6f94:;
  /* 12dc6f94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dc6f96:;
  /* 12dc6f96 mov esp, ebp */
  ESP = (EBP);
  /* 12dc6f98 pop ebp */
  EBP = (pop32());
  /* 12dc6f99 ret  */
  ESPCHK(0x12dc6d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fd0 @ 0x12dc6fd0 (91 bytes, 35 insns) */
void f_12dc6fd0(void) {
  FTRACE(0x12dc6fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc6fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc6fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc6fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc6fd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc6fd7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dc6fda:;
  /* 12dc6fda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6fdd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dc6fe0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6fe3 je 0x12dc7003 */
  if (C.zf) goto L_12dc7003;
  /* 12dc6fe5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc6fe8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6feb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc6fee mov ecx, dword ptr [0x12dddc84] */
  ECX = (r32((uint32_t)(0x12dddc84)));
  /* 12dc6ff4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc6ff7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc6ffa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc6ffc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc6fff jae 0x12dc7003 */
  if (!C.cf) goto L_12dc7003;
  /* 12dc7001 jmp 0x12dc6fda */
  goto L_12dc6fda;
L_12dc7003:;
  /* 12dc7003 mov eax, dword ptr [0x12dddc84] */
  EAX = (r32((uint32_t)(0x12dddc84)));
  /* 12dc7008 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc700b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc700e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7010 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7013 jae 0x12dc7025 */
  if (!C.cf) goto L_12dc7025;
  /* 12dc7015 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc7018 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12dc701b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc701e jne 0x12dc7025 */
  if (!C.zf) goto L_12dc7025;
  /* 12dc7020 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc7023 jmp 0x12dc7027 */
  goto L_12dc7027;
L_12dc7025:;
  /* 12dc7025 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dc7027:;
  /* 12dc7027 mov esp, ebp */
  ESP = (EBP);
  /* 12dc7029 pop ebp */
  EBP = (pop32());
  /* 12dc702a ret  */
  ESPCHK(0x12dc6fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007030 @ 0x12dc7030 (13 bytes, 6 insns) */
void f_12dc7030(void) {
  FTRACE(0x12dc7030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc7030 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc7031 mov ebp, esp */
  EBP = (ESP);
  /* 12dc7033 call 0x12dc3330 */
  push32(0x12dc7038u); f_12dc3330();
  /* 12dc7038 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc703b pop ebp */
  EBP = (pop32());
  /* 12dc703c ret  */
  ESPCHK(0x12dc7030u, _esp0);
  ESP += 4; return;
}

/* FUN_10007040 @ 0x12dc7040 (13 bytes, 6 insns) */
void f_12dc7040(void) {
  FTRACE(0x12dc7040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc7040 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc7041 mov ebp, esp */
  EBP = (ESP);
  /* 12dc7043 call 0x12dc3330 */
  push32(0x12dc7048u); f_12dc3330();
  /* 12dc7048 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc704b pop ebp */
  EBP = (pop32());
  /* 12dc704c ret  */
  ESPCHK(0x12dc7040u, _esp0);
  ESP += 4; return;
}

/* FUN_10007050 @ 0x12dc7050 (187 bytes, 54 insns) */
void f_12dc7050(void) {
  FTRACE(0x12dc7050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc7050 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc7051 mov ebp, esp */
  EBP = (ESP);
  /* 12dc7053 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc7056 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dc705d cmp dword ptr [0x12ddf6ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf6ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7064 jne 0x12dc70c3 */
  if (!C.zf) goto L_12dc70c3;
  /* 12dc7066 push 0x12dda43c */
  push32((uint32_t)(0x12dda43cu));
  /* 12dc706b call dword ptr [0x12de2350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2350))), 0x12dc7071u);
  /* 12dc7071 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dc7074 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7078 je 0x12dc7097 */
  if (C.zf) goto L_12dc7097;
  /* 12dc707a push 0x12ddb040 */
  push32((uint32_t)(0x12ddb040u));
  /* 12dc707f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc7082 push eax */
  push32((uint32_t)(EAX));
  /* 12dc7083 call dword ptr [0x12de234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de234c))), 0x12dc7089u);
  /* 12dc7089 mov dword ptr [0x12ddf6ac], eax */
  w32((uint32_t)(0x12ddf6ac), (EAX));
  /* 12dc708e cmp dword ptr [0x12ddf6ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf6ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7095 jne 0x12dc709b */
  if (!C.zf) goto L_12dc709b;
L_12dc7097:;
  /* 12dc7097 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc7099 jmp 0x12dc7107 */
  goto L_12dc7107;
L_12dc709b:;
  /* 12dc709b push 0x12ddb030 */
  push32((uint32_t)(0x12ddb030u));
  /* 12dc70a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc70a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc70a4 call dword ptr [0x12de234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de234c))), 0x12dc70aau);
  /* 12dc70aa mov dword ptr [0x12ddf6b0], eax */
  w32((uint32_t)(0x12ddf6b0), (EAX));
  /* 12dc70af push 0x12ddb01c */
  push32((uint32_t)(0x12ddb01cu));
  /* 12dc70b4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc70b7 push edx */
  push32((uint32_t)(EDX));
  /* 12dc70b8 call dword ptr [0x12de234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de234c))), 0x12dc70beu);
  /* 12dc70be mov dword ptr [0x12ddf6b4], eax */
  w32((uint32_t)(0x12ddf6b4), (EAX));
L_12dc70c3:;
  /* 12dc70c3 cmp dword ptr [0x12ddf6b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf6b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc70ca je 0x12dc70d5 */
  if (C.zf) goto L_12dc70d5;
  /* 12dc70cc call dword ptr [0x12ddf6b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ddf6b0))), 0x12dc70d2u);
  /* 12dc70d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dc70d5:;
  /* 12dc70d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc70d9 je 0x12dc70f1 */
  if (C.zf) goto L_12dc70f1;
  /* 12dc70db cmp dword ptr [0x12ddf6b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf6b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc70e2 je 0x12dc70f1 */
  if (C.zf) goto L_12dc70f1;
  /* 12dc70e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc70e7 push eax */
  push32((uint32_t)(EAX));
  /* 12dc70e8 call dword ptr [0x12ddf6b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ddf6b4))), 0x12dc70eeu);
  /* 12dc70ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dc70f1:;
  /* 12dc70f1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc70f4 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc70f5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc70f8 push edx */
  push32((uint32_t)(EDX));
  /* 12dc70f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc70fc push eax */
  push32((uint32_t)(EAX));
  /* 12dc70fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc7100 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc7101 call dword ptr [0x12ddf6ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ddf6ac))), 0x12dc7107u);
L_12dc7107:;
  /* 12dc7107 mov esp, ebp */
  ESP = (EBP);
  /* 12dc7109 pop ebp */
  EBP = (pop32());
  /* 12dc710a ret  */
  ESPCHK(0x12dc7050u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12dc7110 (254 bytes, 109 insns) */
void f_12dc7110(void) {
  FTRACE(0x12dc7110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc7110 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12dc7114 push edi */
  push32((uint32_t)(EDI));
  /* 12dc7115 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc7117 je 0x12dc7193 */
  if (C.zf) goto L_12dc7193;
  /* 12dc7119 push esi */
  push32((uint32_t)(ESI));
  /* 12dc711a push ebx */
  push32((uint32_t)(EBX));
  /* 12dc711b mov ebx, ecx */
  EBX = (ECX);
  /* 12dc711d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12dc7121 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12dc7127 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12dc712b jne 0x12dc7134 */
  if (!C.zf) goto L_12dc7134;
  /* 12dc712d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dc7130 jne 0x12dc71a1 */
  if (!C.zf) goto L_12dc71a1;
  /* 12dc7132 jmp 0x12dc7155 */
  goto L_12dc7155;
L_12dc7134:;
  /* 12dc7134 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dc7136 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12dc7137 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dc7139 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12dc713a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12dc713b je 0x12dc7162 */
  if (C.zf) goto L_12dc7162;
  /* 12dc713d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12dc713f je 0x12dc716a */
  if (C.zf) goto L_12dc716a;
  /* 12dc7141 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12dc7147 jne 0x12dc7134 */
  if (!C.zf) goto L_12dc7134;
  /* 12dc7149 mov ebx, ecx */
  EBX = (ECX);
  /* 12dc714b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dc714e jne 0x12dc71a1 */
  if (!C.zf) goto L_12dc71a1;
L_12dc7150:;
  /* 12dc7150 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12dc7153 je 0x12dc7162 */
  if (C.zf) goto L_12dc7162;
L_12dc7155:;
  /* 12dc7155 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dc7157 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12dc7158 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dc715a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12dc715b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12dc715d je 0x12dc718e */
  if (C.zf) goto L_12dc718e;
  /* 12dc715f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12dc7160 jne 0x12dc7155 */
  if (!C.zf) goto L_12dc7155;
L_12dc7162:;
  /* 12dc7162 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12dc7166 pop ebx */
  EBX = (pop32());
  /* 12dc7167 pop esi */
  ESI = (pop32());
  /* 12dc7168 pop edi */
  EDI = (pop32());
  /* 12dc7169 ret  */
  ESPCHK(0x12dc7110u, _esp0);
  ESP += 4; return;
L_12dc716a:;
  /* 12dc716a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12dc7170 je 0x12dc7184 */
  if (C.zf) goto L_12dc7184;
L_12dc7172:;
  /* 12dc7172 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dc7174 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12dc7175 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12dc7176 je 0x12dc7206 */
  if (C.zf) goto L_12dc7206;
  /* 12dc717c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12dc7182 jne 0x12dc7172 */
  if (!C.zf) goto L_12dc7172;
L_12dc7184:;
  /* 12dc7184 mov ebx, ecx */
  EBX = (ECX);
  /* 12dc7186 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dc7189 jne 0x12dc71f7 */
  if (!C.zf) goto L_12dc71f7;
L_12dc718b:;
  /* 12dc718b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dc718d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_12dc718e:;
  /* 12dc718e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12dc718f jne 0x12dc718b */
  if (!C.zf) goto L_12dc718b;
  /* 12dc7191 pop ebx */
  EBX = (pop32());
  /* 12dc7192 pop esi */
  ESI = (pop32());
L_12dc7193:;
  /* 12dc7193 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12dc7197 pop edi */
  EDI = (pop32());
  /* 12dc7198 ret  */
  ESPCHK(0x12dc7110u, _esp0);
  ESP += 4; return;
L_12dc7199:;
  /* 12dc7199 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12dc719b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc719e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12dc719f je 0x12dc7150 */
  if (C.zf) goto L_12dc7150;
L_12dc71a1:;
  /* 12dc71a1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12dc71a6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12dc71a8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc71aa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc71ad xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc71af mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12dc71b1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc71b4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12dc71b9 je 0x12dc7199 */
  if (C.zf) goto L_12dc7199;
  /* 12dc71bb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12dc71bd je 0x12dc71eb */
  if (C.zf) goto L_12dc71eb;
  /* 12dc71bf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12dc71c1 je 0x12dc71e1 */
  if (C.zf) goto L_12dc71e1;
  /* 12dc71c3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12dc71c9 je 0x12dc71d7 */
  if (C.zf) goto L_12dc71d7;
  /* 12dc71cb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12dc71d1 jne 0x12dc7199 */
  if (!C.zf) goto L_12dc7199;
  /* 12dc71d3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12dc71d5 jmp 0x12dc71ef */
  goto L_12dc71ef;
L_12dc71d7:;
  /* 12dc71d7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dc71dd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12dc71df jmp 0x12dc71ef */
  goto L_12dc71ef;
L_12dc71e1:;
  /* 12dc71e1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dc71e7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12dc71e9 jmp 0x12dc71ef */
  goto L_12dc71ef;
L_12dc71eb:;
  /* 12dc71eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc71ed mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_12dc71ef:;
  /* 12dc71ef add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc71f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc71f4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12dc71f5 je 0x12dc7201 */
  if (C.zf) goto L_12dc7201;
L_12dc71f7:;
  /* 12dc71f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dc71f9:;
  /* 12dc71f9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12dc71fb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc71fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12dc71ff jne 0x12dc71f9 */
  if (!C.zf) goto L_12dc71f9;
L_12dc7201:;
  /* 12dc7201 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12dc7204 jne 0x12dc718b */
  if (!C.zf) goto L_12dc718b;
L_12dc7206:;
  /* 12dc7206 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12dc720a pop ebx */
  EBX = (pop32());
  /* 12dc720b pop esi */
  ESI = (pop32());
  /* 12dc720c pop edi */
  EDI = (pop32());
  /* 12dc720d ret  */
  ESPCHK(0x12dc7110u, _esp0);
  ESP += 4; return;
}

/* FUN_10007210 @ 0x12dc7210 (55 bytes, 16 insns) */
void f_12dc7210(void) {
  FTRACE(0x12dc7210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc7210 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc7211 mov ebp, esp */
  EBP = (ESP);
  /* 12dc7213 mov eax, dword ptr [0x12dddb84] */
  EAX = (r32((uint32_t)(0x12dddb84)));
  /* 12dc7218 push eax */
  push32((uint32_t)(EAX));
  /* 12dc7219 call dword ptr [0x12de232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de232c))), 0x12dc721fu);
  /* 12dc721f mov ecx, dword ptr [0x12dddb74] */
  ECX = (r32((uint32_t)(0x12dddb74)));
  /* 12dc7225 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc7226 call dword ptr [0x12de232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de232c))), 0x12dc722cu);
  /* 12dc722c mov edx, dword ptr [0x12dddb64] */
  EDX = (r32((uint32_t)(0x12dddb64)));
  /* 12dc7232 push edx */
  push32((uint32_t)(EDX));
  /* 12dc7233 call dword ptr [0x12de232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de232c))), 0x12dc7239u);
  /* 12dc7239 mov eax, dword ptr [0x12dddb44] */
  EAX = (r32((uint32_t)(0x12dddb44)));
  /* 12dc723e push eax */
  push32((uint32_t)(EAX));
  /* 12dc723f call dword ptr [0x12de232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de232c))), 0x12dc7245u);
  /* 12dc7245 pop ebp */
  EBP = (pop32());
  /* 12dc7246 ret  */
  ESPCHK(0x12dc7210u, _esp0);
  ESP += 4; return;
}

/* FUN_10007250 @ 0x12dc7250 (159 bytes, 47 insns) */
void f_12dc7250(void) {
  FTRACE(0x12dc7250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc7250 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc7251 mov ebp, esp */
  EBP = (ESP);
  /* 12dc7253 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc7254 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dc725b jmp 0x12dc7266 */
  goto L_12dc7266;
L_12dc725d:;
  /* 12dc725d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc7260 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7263 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dc7266:;
  /* 12dc7266 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc726a jge 0x12dc72b9 */
  if ((C.sf==C.of)) goto L_12dc72b9;
  /* 12dc726c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc726f cmp dword ptr [ecx*4 + 0x12dddb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12dddb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7277 je 0x12dc72b7 */
  if (C.zf) goto L_12dc72b7;
  /* 12dc7279 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc727d je 0x12dc72b7 */
  if (C.zf) goto L_12dc72b7;
  /* 12dc727f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7283 je 0x12dc72b7 */
  if (C.zf) goto L_12dc72b7;
  /* 12dc7285 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7289 je 0x12dc72b7 */
  if (C.zf) goto L_12dc72b7;
  /* 12dc728b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc728f je 0x12dc72b7 */
  if (C.zf) goto L_12dc72b7;
  /* 12dc7291 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc7294 mov eax, dword ptr [edx*4 + 0x12dddb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12dddb40)));
  /* 12dc729b push eax */
  push32((uint32_t)(EAX));
  /* 12dc729c call dword ptr [0x12de2394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2394))), 0x12dc72a2u);
  /* 12dc72a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc72a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc72a7 mov edx, dword ptr [ecx*4 + 0x12dddb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12dddb40)));
  /* 12dc72ae push edx */
  push32((uint32_t)(EDX));
  /* 12dc72af call 0x12dc4380 */
  push32(0x12dc72b4u); f_12dc4380();
  /* 12dc72b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc72b7:;
  /* 12dc72b7 jmp 0x12dc725d */
  goto L_12dc725d;
L_12dc72b9:;
  /* 12dc72b9 mov eax, dword ptr [0x12dddb64] */
  EAX = (r32((uint32_t)(0x12dddb64)));
  /* 12dc72be push eax */
  push32((uint32_t)(EAX));
  /* 12dc72bf call dword ptr [0x12de2394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2394))), 0x12dc72c5u);
  /* 12dc72c5 mov ecx, dword ptr [0x12dddb74] */
  ECX = (r32((uint32_t)(0x12dddb74)));
  /* 12dc72cb push ecx */
  push32((uint32_t)(ECX));
  /* 12dc72cc call dword ptr [0x12de2394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2394))), 0x12dc72d2u);
  /* 12dc72d2 mov edx, dword ptr [0x12dddb84] */
  EDX = (r32((uint32_t)(0x12dddb84)));
  /* 12dc72d8 push edx */
  push32((uint32_t)(EDX));
  /* 12dc72d9 call dword ptr [0x12de2394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2394))), 0x12dc72dfu);
  /* 12dc72df mov eax, dword ptr [0x12dddb44] */
  EAX = (r32((uint32_t)(0x12dddb44)));
  /* 12dc72e4 push eax */
  push32((uint32_t)(EAX));
  /* 12dc72e5 call dword ptr [0x12de2394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2394))), 0x12dc72ebu);
  /* 12dc72eb mov esp, ebp */
  ESP = (EBP);
  /* 12dc72ed pop ebp */
  EBP = (pop32());
  /* 12dc72ee ret  */
  ESPCHK(0x12dc7250u, _esp0);
  ESP += 4; return;
}

/* FUN_100072f0 @ 0x12dc72f0 (151 bytes, 46 insns) */
void f_12dc72f0(void) {
  FTRACE(0x12dc72f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc72f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc72f1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc72f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc72f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc72f7 cmp dword ptr [eax*4 + 0x12dddb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12dddb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc72ff jne 0x12dc7372 */
  if (!C.zf) goto L_12dc7372;
  /* 12dc7301 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12dc7306 push 0x12ddb04c */
  push32((uint32_t)(0x12ddb04cu));
  /* 12dc730b push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc730d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12dc730f call 0x12dc38f0 */
  push32(0x12dc7314u); f_12dc38f0();
  /* 12dc7314 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7317 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc731a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc731e jne 0x12dc732a */
  if (!C.zf) goto L_12dc732a;
  /* 12dc7320 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12dc7322 call 0x12dc2860 */
  push32(0x12dc7327u); f_12dc2860();
  /* 12dc7327 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc732a:;
  /* 12dc732a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12dc732c call 0x12dc72f0 */
  push32(0x12dc7331u); f_12dc72f0();
  /* 12dc7331 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7334 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7337 cmp dword ptr [ecx*4 + 0x12dddb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12dddb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc733f jne 0x12dc735a */
  if (!C.zf) goto L_12dc735a;
  /* 12dc7341 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc7344 push edx */
  push32((uint32_t)(EDX));
  /* 12dc7345 call dword ptr [0x12de232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de232c))), 0x12dc734bu);
  /* 12dc734b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc734e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc7351 mov dword ptr [eax*4 + 0x12dddb40], ecx */
  w32((uint32_t)(EAX*4 + 0x12dddb40), (ECX));
  /* 12dc7358 jmp 0x12dc7368 */
  goto L_12dc7368;
L_12dc735a:;
  /* 12dc735a push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc735c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc735f push edx */
  push32((uint32_t)(EDX));
  /* 12dc7360 call 0x12dc4380 */
  push32(0x12dc7365u); f_12dc4380();
  /* 12dc7365 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc7368:;
  /* 12dc7368 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12dc736a call 0x12dc7390 */
  push32(0x12dc736fu); f_12dc7390();
  /* 12dc736f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc7372:;
  /* 12dc7372 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7375 mov ecx, dword ptr [eax*4 + 0x12dddb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12dddb40)));
  /* 12dc737c push ecx */
  push32((uint32_t)(ECX));
  /* 12dc737d call dword ptr [0x12de231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de231c))), 0x12dc7383u);
  /* 12dc7383 mov esp, ebp */
  ESP = (EBP);
  /* 12dc7385 pop ebp */
  EBP = (pop32());
  /* 12dc7386 ret  */
  ESPCHK(0x12dc72f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007390 @ 0x12dc7390 (22 bytes, 8 insns) */
void f_12dc7390(void) {
  FTRACE(0x12dc7390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc7390 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc7391 mov ebp, esp */
  EBP = (ESP);
  /* 12dc7393 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7396 mov ecx, dword ptr [eax*4 + 0x12dddb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12dddb40)));
  /* 12dc739d push ecx */
  push32((uint32_t)(ECX));
  /* 12dc739e call dword ptr [0x12de2318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2318))), 0x12dc73a4u);
  /* 12dc73a4 pop ebp */
  EBP = (pop32());
  /* 12dc73a5 ret  */
  ESPCHK(0x12dc7390u, _esp0);
  ESP += 4; return;
}

/* FUN_100073b0 @ 0x12dc73b0 (26 bytes, 10 insns) */
void f_12dc73b0(void) {
  FTRACE(0x12dc73b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc73b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc73b1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc73b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc73b6 push eax */
  push32((uint32_t)(EAX));
  /* 12dc73b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc73b9 call dword ptr [0x12de2320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2320))), 0x12dc73bfu);
  /* 12dc73bf push 0xff */
  push32((uint32_t)(0xffu));
  /* 12dc73c4 call dword ptr [0x12de235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de235c))), 0x12dc73cau);
  /* 12dc73ca pop ebp */
  EBP = (pop32());
  /* 12dc73cb ret  */
  ESPCHK(0x12dc73b0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12dc73d0 (446 bytes, 130 insns) */
void f_12dc73d0(void) {
  FTRACE(0x12dc73d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc73d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc73d1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc73d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc73d6 call 0x12dc3330 */
  push32(0x12dc73dbu); f_12dc3330();
  /* 12dc73db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dc73de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc73e1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12dc73e4 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc73e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc73e8 push edx */
  push32((uint32_t)(EDX));
  /* 12dc73e9 call 0x12dc7590 */
  push32(0x12dc73eeu); f_12dc7590();
  /* 12dc73ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc73f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12dc73f4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc73f8 je 0x12dc7403 */
  if (C.zf) goto L_12dc7403;
  /* 12dc73fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc73fd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7401 jne 0x12dc7412 */
  if (!C.zf) goto L_12dc7412;
L_12dc7403:;
  /* 12dc7403 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc7406 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc7407 call dword ptr [0x12de2310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2310))), 0x12dc740du);
  /* 12dc740d jmp 0x12dc758a */
  goto L_12dc758a;
L_12dc7412:;
  /* 12dc7412 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc7415 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7419 jne 0x12dc742f */
  if (!C.zf) goto L_12dc742f;
  /* 12dc741b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc741e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12dc7425 mov eax, 1 */
  EAX = (0x1u);
  /* 12dc742a jmp 0x12dc758a */
  goto L_12dc758a;
L_12dc742f:;
  /* 12dc742f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc7432 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7436 jne 0x12dc7440 */
  if (!C.zf) goto L_12dc7440;
  /* 12dc7438 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc743b jmp 0x12dc758a */
  goto L_12dc758a;
L_12dc7440:;
  /* 12dc7440 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc7443 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12dc7446 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc7449 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc744c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 12dc744f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12dc7452 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc7455 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc7458 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 12dc745b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc745e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7462 jne 0x12dc7567 */
  if (!C.zf) goto L_12dc7567;
  /* 12dc7468 mov eax, dword ptr [0x12dddc78] */
  EAX = (r32((uint32_t)(0x12dddc78)));
  /* 12dc746d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12dc7470 jmp 0x12dc747b */
  goto L_12dc747b;
L_12dc7472:;
  /* 12dc7472 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc7475 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7478 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12dc747b:;
  /* 12dc747b mov edx, dword ptr [0x12dddc78] */
  EDX = (r32((uint32_t)(0x12dddc78)));
  /* 12dc7481 add edx, dword ptr [0x12dddc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12dddc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7487 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc748a jge 0x12dc74a2 */
  if ((C.sf==C.of)) goto L_12dc74a2;
  /* 12dc748c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc748f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc7492 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc7495 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12dc7498 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12dc74a0 jmp 0x12dc7472 */
  goto L_12dc7472;
L_12dc74a2:;
  /* 12dc74a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc74a5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12dc74a8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dc74ab mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc74ae cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc74b4 jne 0x12dc74c5 */
  if (!C.zf) goto L_12dc74c5;
  /* 12dc74b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc74b9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12dc74c0 jmp 0x12dc754d */
  goto L_12dc754d;
L_12dc74c5:;
  /* 12dc74c5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc74c8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc74ce jne 0x12dc74dc */
  if (!C.zf) goto L_12dc74dc;
  /* 12dc74d0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc74d3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 12dc74da jmp 0x12dc754d */
  goto L_12dc754d;
L_12dc74dc:;
  /* 12dc74dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc74df cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc74e5 jne 0x12dc74f3 */
  if (!C.zf) goto L_12dc74f3;
  /* 12dc74e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc74ea mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12dc74f1 jmp 0x12dc754d */
  goto L_12dc754d;
L_12dc74f3:;
  /* 12dc74f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc74f6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc74fc jne 0x12dc750a */
  if (!C.zf) goto L_12dc750a;
  /* 12dc74fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc7501 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12dc7508 jmp 0x12dc754d */
  goto L_12dc754d;
L_12dc750a:;
  /* 12dc750a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc750d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7513 jne 0x12dc7521 */
  if (!C.zf) goto L_12dc7521;
  /* 12dc7515 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc7518 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 12dc751f jmp 0x12dc754d */
  goto L_12dc754d;
L_12dc7521:;
  /* 12dc7521 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc7524 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc752a jne 0x12dc7538 */
  if (!C.zf) goto L_12dc7538;
  /* 12dc752c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc752f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12dc7536 jmp 0x12dc754d */
  goto L_12dc754d;
L_12dc7538:;
  /* 12dc7538 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc753b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7541 jne 0x12dc754d */
  if (!C.zf) goto L_12dc754d;
  /* 12dc7543 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc7546 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_12dc754d:;
  /* 12dc754d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc7550 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12dc7553 push edx */
  push32((uint32_t)(EDX));
  /* 12dc7554 push 8 */
  push32((uint32_t)(0x8u));
  /* 12dc7556 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12dc7559u);
  /* 12dc7559 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc755c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc755f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc7562 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12dc7565 jmp 0x12dc757e */
  goto L_12dc757e;
L_12dc7567:;
  /* 12dc7567 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc756a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12dc7571 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc7574 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dc7577 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc7578 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12dc757bu);
  /* 12dc757b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc757e:;
  /* 12dc757e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc7581 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc7584 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12dc7587 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12dc758a:;
  /* 12dc758a mov esp, ebp */
  ESP = (EBP);
  /* 12dc758c pop ebp */
  EBP = (pop32());
  /* 12dc758d ret  */
  ESPCHK(0x12dc73d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007590 @ 0x12dc7590 (89 bytes, 35 insns) */
void f_12dc7590(void) {
  FTRACE(0x12dc7590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc7590 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc7591 mov ebp, esp */
  EBP = (ESP);
  /* 12dc7593 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc7594 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc7597 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dc759a:;
  /* 12dc759a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc759d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dc759f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc75a2 je 0x12dc75c2 */
  if (C.zf) goto L_12dc75c2;
  /* 12dc75a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc75a7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc75aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc75ad mov ecx, dword ptr [0x12dddc84] */
  ECX = (r32((uint32_t)(0x12dddc84)));
  /* 12dc75b3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc75b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc75b9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc75bb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc75be jae 0x12dc75c2 */
  if (!C.cf) goto L_12dc75c2;
  /* 12dc75c0 jmp 0x12dc759a */
  goto L_12dc759a;
L_12dc75c2:;
  /* 12dc75c2 mov eax, dword ptr [0x12dddc84] */
  EAX = (r32((uint32_t)(0x12dddc84)));
  /* 12dc75c7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc75ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc75cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc75cf cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc75d2 jae 0x12dc75de */
  if (!C.cf) goto L_12dc75de;
  /* 12dc75d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc75d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dc75d9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc75dc je 0x12dc75e2 */
  if (C.zf) goto L_12dc75e2;
L_12dc75de:;
  /* 12dc75de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc75e0 jmp 0x12dc75e5 */
  goto L_12dc75e5;
L_12dc75e2:;
  /* 12dc75e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12dc75e5:;
  /* 12dc75e5 mov esp, ebp */
  ESP = (EBP);
  /* 12dc75e7 pop ebp */
  EBP = (pop32());
  /* 12dc75e8 ret  */
  ESPCHK(0x12dc7590u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x12dc75f0 (48 bytes, 17 insns) */
void f_12dc75f0(void) {
  FTRACE(0x12dc75f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc75f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc75f1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc75f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc75f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc75f6 call 0x12dc72f0 */
  push32(0x12dc75fbu); f_12dc72f0();
  /* 12dc75fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc75fe mov eax, dword ptr [0x12ddf71c] */
  EAX = (r32((uint32_t)(0x12ddf71c)));
  /* 12dc7603 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc7606 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7609 mov dword ptr [0x12ddf71c], ecx */
  w32((uint32_t)(0x12ddf71c), (ECX));
  /* 12dc760f push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc7611 call 0x12dc7390 */
  push32(0x12dc7616u); f_12dc7390();
  /* 12dc7616 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7619 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc761c mov esp, ebp */
  ESP = (EBP);
  /* 12dc761e pop ebp */
  EBP = (pop32());
  /* 12dc761f ret  */
  ESPCHK(0x12dc75f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007620 @ 0x12dc7620 (10 bytes, 5 insns) */
void f_12dc7620(void) {
  FTRACE(0x12dc7620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc7620 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc7621 mov ebp, esp */
  EBP = (ESP);
  /* 12dc7623 mov eax, dword ptr [0x12ddf71c] */
  EAX = (r32((uint32_t)(0x12ddf71c)));
  /* 12dc7628 pop ebp */
  EBP = (pop32());
  /* 12dc7629 ret  */
  ESPCHK(0x12dc7620u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12dc7630 (45 bytes, 19 insns) */
void f_12dc7630(void) {
  FTRACE(0x12dc7630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc7630 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc7631 mov ebp, esp */
  EBP = (ESP);
  /* 12dc7633 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc7634 mov eax, dword ptr [0x12ddf71c] */
  EAX = (r32((uint32_t)(0x12ddf71c)));
  /* 12dc7639 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc763c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7640 je 0x12dc7650 */
  if (C.zf) goto L_12dc7650;
  /* 12dc7642 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7645 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc7646 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12dc7649u);
  /* 12dc7649 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc764c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc764e jne 0x12dc7654 */
  if (!C.zf) goto L_12dc7654;
L_12dc7650:;
  /* 12dc7650 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc7652 jmp 0x12dc7659 */
  goto L_12dc7659;
L_12dc7654:;
  /* 12dc7654 mov eax, 1 */
  EAX = (0x1u);
L_12dc7659:;
  /* 12dc7659 mov esp, ebp */
  ESP = (EBP);
  /* 12dc765b pop ebp */
  EBP = (pop32());
  /* 12dc765c ret  */
  ESPCHK(0x12dc7630u, _esp0);
  ESP += 4; return;
}

