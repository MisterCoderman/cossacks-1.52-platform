#include "recomp.h"

/* OnInit @ 0x116e1005 (5 bytes, 1 insns) */
void f_116e1005(void) {
  FTRACE(0x116e1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e1005 jmp 0x116e1660 */
  f_116e1660(); return;
}

/* thunk_FUN_100010d0 @ 0x116e100a (5 bytes, 1 insns) */
void f_116e100a(void) {
  FTRACE(0x116e100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e100a jmp 0x116e10d0 */
  f_116e10d0(); return;
}

/* thunk_FUN_10001070 @ 0x116e100f (5 bytes, 1 insns) */
void f_116e100f(void) {
  FTRACE(0x116e100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e100f jmp 0x116e1070 */
  f_116e1070(); return;
}

/* thunk_FUN_10001170 @ 0x116e1014 (5 bytes, 1 insns) */
void f_116e1014(void) {
  FTRACE(0x116e1014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e1014 jmp 0x116e1170 */
  f_116e1170(); return;
}

/* thunk_FUN_10001590 @ 0x116e1019 (5 bytes, 1 insns) */
void f_116e1019(void) {
  FTRACE(0x116e1019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e1019 jmp 0x116e1590 */
  f_116e1590(); return;
}

/* ProcessScenary @ 0x116e1023 (5 bytes, 1 insns) */
void f_116e1023(void) {
  FTRACE(0x116e1023u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e1023 jmp 0x116e1a40 */
  f_116e1a40(); return;
}

/* thunk_FUN_100012c0 @ 0x116e1028 (5 bytes, 1 insns) */
void f_116e1028(void) {
  FTRACE(0x116e1028u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e1028 jmp 0x116e12c0 */
  f_116e12c0(); return;
}

/* thunk_FUN_10001380 @ 0x116e102d (5 bytes, 1 insns) */
void f_116e102d(void) {
  FTRACE(0x116e102du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e102d jmp 0x116e1380 */
  f_116e1380(); return;
}

/* thunk_FUN_100014c0 @ 0x116e1032 (5 bytes, 1 insns) */
void f_116e1032(void) {
  FTRACE(0x116e1032u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e1032 jmp 0x116e14c0 */
  f_116e14c0(); return;
}

/* FUN_10001070 @ 0x116e1070 (67 bytes, 26 insns) */
void f_116e1070(void) {
  FTRACE(0x116e1070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e1070 push ebp */
  push32((uint32_t)(EBP));
  /* 116e1071 mov ebp, esp */
  EBP = (ESP);
  /* 116e1073 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e1076 push ebx */
  push32((uint32_t)(EBX));
  /* 116e1077 push esi */
  push32((uint32_t)(ESI));
  /* 116e1078 push edi */
  push32((uint32_t)(EDI));
  /* 116e1079 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116e107c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116e1081 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116e1086 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116e1088 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e108b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e108e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1092 je 0x116e1096 */
  if (C.zf) goto L_116e1096;
  /* 116e1094 jmp 0x116e109b */
  goto L_116e109b;
L_116e1096:;
  /* 116e1096 call 0x116e1005 */
  push32(0x116e109bu); f_116e1005();
L_116e109b:;
  /* 116e109b mov eax, 1 */
  EAX = (0x1u);
  /* 116e10a0 pop edi */
  EDI = (pop32());
  /* 116e10a1 pop esi */
  ESI = (pop32());
  /* 116e10a2 pop ebx */
  EBX = (pop32());
  /* 116e10a3 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e10a6 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e10a8 call 0x116e2b10 */
  push32(0x116e10adu); f_116e2b10();
  /* 116e10ad mov esp, ebp */
  ESP = (EBP);
  /* 116e10af pop ebp */
  EBP = (pop32());
  /* 116e10b0 ret 0xc */
  ESPCHK(0x116e1070u, _esp0);
  ESP += 16; return;
}

/* FUN_100010d0 @ 0x116e10d0 (120 bytes, 43 insns) */
void f_116e10d0(void) {
  FTRACE(0x116e10d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e10d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e10d1 mov ebp, esp */
  EBP = (ESP);
  /* 116e10d3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e10d6 push ebx */
  push32((uint32_t)(EBX));
  /* 116e10d7 push esi */
  push32((uint32_t)(ESI));
  /* 116e10d8 push edi */
  push32((uint32_t)(EDI));
  /* 116e10d9 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 116e10dc mov ecx, 0x12 */
  ECX = (0x12u);
  /* 116e10e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116e10e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116e10e8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116e10ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116e10f6 jmp 0x116e1101 */
  goto L_116e1101;
L_116e10f8:;
  /* 116e10f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e10fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e10fe mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116e1101:;
  /* 116e1101 cmp dword ptr [ebp - 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1105 jge 0x116e1134 */
  if ((C.sf==C.of)) goto L_116e1134;
  /* 116e1107 mov esi, esp */
  ESI = (ESP);
  /* 116e1109 mov cl, byte ptr [ebp - 8] */
  CL = (r8((uint32_t)(EBP + -0x8)));
  /* 116e110c push ecx */
  push32((uint32_t)(ECX));
  /* 116e110d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e1110 push edx */
  push32((uint32_t)(EDX));
  /* 116e1111 call dword ptr [0x117124a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124a8))), 0x116e1117u);
  /* 116e1117 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e111a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e111c call 0x116e2b10 */
  push32(0x116e1121u); f_116e2b10();
  /* 116e1121 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e1123 jle 0x116e1132 */
  if ((C.zf||C.sf!=C.of)) goto L_116e1132;
  /* 116e1125 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e1128 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e112b mov dword ptr [ebp - 8], 8 */
  w32((uint32_t)(EBP + -0x8), (0x8u));
L_116e1132:;
  /* 116e1132 jmp 0x116e10f8 */
  goto L_116e10f8;
L_116e1134:;
  /* 116e1134 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e1137 pop edi */
  EDI = (pop32());
  /* 116e1138 pop esi */
  ESI = (pop32());
  /* 116e1139 pop ebx */
  EBX = (pop32());
  /* 116e113a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e113d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e113f call 0x116e2b10 */
  push32(0x116e1144u); f_116e2b10();
  /* 116e1144 mov esp, ebp */
  ESP = (EBP);
  /* 116e1146 pop ebp */
  EBP = (pop32());
  /* 116e1147 ret  */
  ESPCHK(0x116e10d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001170 @ 0x116e1170 (126 bytes, 48 insns) */
void f_116e1170(void) {
  FTRACE(0x116e1170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e1170 push ebp */
  push32((uint32_t)(EBP));
  /* 116e1171 mov ebp, esp */
  EBP = (ESP);
  /* 116e1173 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e1176 push ebx */
  push32((uint32_t)(EBX));
  /* 116e1177 push esi */
  push32((uint32_t)(ESI));
  /* 116e1178 push edi */
  push32((uint32_t)(EDI));
  /* 116e1179 push ecx */
  push32((uint32_t)(ECX));
  /* 116e117a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116e117d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116e1182 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116e1187 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116e1189 pop ecx */
  ECX = (pop32());
  /* 116e118a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116e118d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e1190 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e1193 mov dword ptr [eax + 6], ecx */
  w32((uint32_t)(EAX + 0x6), (ECX));
  /* 116e1196 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e1199 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e119c mov dword ptr [edx + 0xa], eax */
  w32((uint32_t)(EDX + 0xa), (EAX));
  /* 116e119f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e11a2 push ecx */
  push32((uint32_t)(ECX));
  /* 116e11a3 call 0x116e100a */
  push32(0x116e11a8u); f_116e100a();
  /* 116e11a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e11ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e11ae mov byte ptr [edx + 1], al */
  w8((uint32_t)(EDX + 0x1), (AL));
  /* 116e11b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e11b4 mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 116e11b7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 116e11b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e11bc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e11bf mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 116e11c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e11c5 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e11c8 mov esi, esp */
  ESI = (ESP);
  /* 116e11ca push ecx */
  push32((uint32_t)(ECX));
  /* 116e11cb call dword ptr [0x117124b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124b0))), 0x116e11d1u);
  /* 116e11d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e11d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e11d6 call 0x116e2b10 */
  push32(0x116e11dbu); f_116e2b10();
  /* 116e11db pop edi */
  EDI = (pop32());
  /* 116e11dc pop esi */
  ESI = (pop32());
  /* 116e11dd pop ebx */
  EBX = (pop32());
  /* 116e11de add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e11e1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e11e3 call 0x116e2b10 */
  push32(0x116e11e8u); f_116e2b10();
  /* 116e11e8 mov esp, ebp */
  ESP = (EBP);
  /* 116e11ea pop ebp */
  EBP = (pop32());
  /* 116e11eb ret 0x10 */
  ESPCHK(0x116e1170u, _esp0);
  ESP += 20; return;
}

/* FUN_10001210 @ 0x116e1210 (136 bytes, 54 insns) */
void f_116e1210(void) {
  FTRACE(0x116e1210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e1210 push ebp */
  push32((uint32_t)(EBP));
  /* 116e1211 mov ebp, esp */
  EBP = (ESP);
  /* 116e1213 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e1216 push ebx */
  push32((uint32_t)(EBX));
  /* 116e1217 push esi */
  push32((uint32_t)(ESI));
  /* 116e1218 push edi */
  push32((uint32_t)(EDI));
  /* 116e1219 push ecx */
  push32((uint32_t)(ECX));
  /* 116e121a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116e121d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116e1222 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116e1227 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116e1229 pop ecx */
  ECX = (pop32());
  /* 116e122a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116e122d mov esi, esp */
  ESI = (ESP);
  /* 116e122f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e1232 push eax */
  push32((uint32_t)(EAX));
  /* 116e1233 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e1236 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1239 push ecx */
  push32((uint32_t)(ECX));
  /* 116e123a call dword ptr [0x1171249c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171249c))), 0x116e1240u);
  /* 116e1240 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1243 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1245 call 0x116e2b10 */
  push32(0x116e124au); f_116e2b10();
  /* 116e124a mov esi, esp */
  ESI = (ESP);
  /* 116e124c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e124f push edx */
  push32((uint32_t)(EDX));
  /* 116e1250 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e1253 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1256 push eax */
  push32((uint32_t)(EAX));
  /* 116e1257 call dword ptr [0x117124ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124ac))), 0x116e125du);
  /* 116e125d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1260 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1262 call 0x116e2b10 */
  push32(0x116e1267u); f_116e2b10();
  /* 116e1267 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e126a push ecx */
  push32((uint32_t)(ECX));
  /* 116e126b mov dl, byte ptr [ebp + 0x10] */
  DL = (r8((uint32_t)(EBP + 0x10)));
  /* 116e126e push edx */
  push32((uint32_t)(EDX));
  /* 116e126f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e1272 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1275 push eax */
  push32((uint32_t)(EAX));
  /* 116e1276 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e1279 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e127c push ecx */
  push32((uint32_t)(ECX));
  /* 116e127d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e1280 call 0x116e1014 */
  push32(0x116e1285u); f_116e1014();
  /* 116e1285 pop edi */
  EDI = (pop32());
  /* 116e1286 pop esi */
  ESI = (pop32());
  /* 116e1287 pop ebx */
  EBX = (pop32());
  /* 116e1288 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e128b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e128d call 0x116e2b10 */
  push32(0x116e1292u); f_116e2b10();
  /* 116e1292 mov esp, ebp */
  ESP = (EBP);
  /* 116e1294 pop ebp */
  EBP = (pop32());
  /* 116e1295 ret 0x10 */
  ESPCHK(0x116e1210u, _esp0);
  ESP += 20; return;
}

/* FUN_100012c0 @ 0x116e12c0 (149 bytes, 57 insns) */
void f_116e12c0(void) {
  FTRACE(0x116e12c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e12c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e12c1 mov ebp, esp */
  EBP = (ESP);
  /* 116e12c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e12c6 push ebx */
  push32((uint32_t)(EBX));
  /* 116e12c7 push esi */
  push32((uint32_t)(ESI));
  /* 116e12c8 push edi */
  push32((uint32_t)(EDI));
  /* 116e12c9 push ecx */
  push32((uint32_t)(ECX));
  /* 116e12ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116e12cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116e12d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116e12d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116e12d9 pop ecx */
  ECX = (pop32());
  /* 116e12da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116e12dd mov esi, esp */
  ESI = (ESP);
  /* 116e12df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e12e2 push eax */
  push32((uint32_t)(EAX));
  /* 116e12e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e12e6 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e12e9 push ecx */
  push32((uint32_t)(ECX));
  /* 116e12ea call dword ptr [0x1171249c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171249c))), 0x116e12f0u);
  /* 116e12f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e12f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e12f5 call 0x116e2b10 */
  push32(0x116e12fau); f_116e2b10();
  /* 116e12fa mov esi, esp */
  ESI = (ESP);
  /* 116e12fc push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 116e1301 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e1304 add edx, 0x16 */
  { uint32_t _a=(EDX),_b=(0x16u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1307 push edx */
  push32((uint32_t)(EDX));
  /* 116e1308 push 0x1170f4a8 */
  push32((uint32_t)(0x1170f4a8u));
  /* 116e130d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e1310 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1313 push eax */
  push32((uint32_t)(EAX));
  /* 116e1314 call dword ptr [0x117124a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124a4))), 0x116e131au);
  /* 116e131a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e131d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e131f call 0x116e2b10 */
  push32(0x116e1324u); f_116e2b10();
  /* 116e1324 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e1327 push ecx */
  push32((uint32_t)(ECX));
  /* 116e1328 mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 116e132b push edx */
  push32((uint32_t)(EDX));
  /* 116e132c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e132f add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1332 push eax */
  push32((uint32_t)(EAX));
  /* 116e1333 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e1336 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1339 push ecx */
  push32((uint32_t)(ECX));
  /* 116e133a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e133d call 0x116e1014 */
  push32(0x116e1342u); f_116e1014();
  /* 116e1342 pop edi */
  EDI = (pop32());
  /* 116e1343 pop esi */
  ESI = (pop32());
  /* 116e1344 pop ebx */
  EBX = (pop32());
  /* 116e1345 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1348 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e134a call 0x116e2b10 */
  push32(0x116e134fu); f_116e2b10();
  /* 116e134f mov esp, ebp */
  ESP = (EBP);
  /* 116e1351 pop ebp */
  EBP = (pop32());
  /* 116e1352 ret 0xc */
  ESPCHK(0x116e12c0u, _esp0);
  ESP += 16; return;
}

/* FUN_10001380 @ 0x116e1380 (255 bytes, 92 insns) */
void f_116e1380(void) {
  FTRACE(0x116e1380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e1380 push ebp */
  push32((uint32_t)(EBP));
  /* 116e1381 mov ebp, esp */
  EBP = (ESP);
  /* 116e1383 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e1386 push ebx */
  push32((uint32_t)(EBX));
  /* 116e1387 push esi */
  push32((uint32_t)(ESI));
  /* 116e1388 push edi */
  push32((uint32_t)(EDI));
  /* 116e1389 push ecx */
  push32((uint32_t)(ECX));
  /* 116e138a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116e138d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116e1392 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116e1397 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116e1399 pop ecx */
  ECX = (pop32());
  /* 116e139a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116e139d mov esi, esp */
  ESI = (ESP);
  /* 116e139f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e13a2 mov cl, byte ptr [eax + 2] */
  CL = (r8((uint32_t)(EAX + 0x2)));
  /* 116e13a5 push ecx */
  push32((uint32_t)(ECX));
  /* 116e13a6 call dword ptr [0x11712498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712498))), 0x116e13acu);
  /* 116e13ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e13af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e13b1 call 0x116e2b10 */
  push32(0x116e13b6u); f_116e2b10();
  /* 116e13b6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e13bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e13bd je 0x116e1405 */
  if (C.zf) goto L_116e1405;
  /* 116e13bf mov esi, esp */
  ESI = (ESP);
  /* 116e13c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e13c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116e13c6 push eax */
  push32((uint32_t)(EAX));
  /* 116e13c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e13ca mov edx, dword ptr [ecx + 0xa] */
  EDX = (r32((uint32_t)(ECX + 0xa)));
  /* 116e13cd push edx */
  push32((uint32_t)(EDX));
  /* 116e13ce call dword ptr [0x11712490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712490))), 0x116e13d4u);
  /* 116e13d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e13d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e13d9 call 0x116e2b10 */
  push32(0x116e13deu); f_116e2b10();
  /* 116e13de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e13e0 jle 0x116e1405 */
  if ((C.zf||C.sf!=C.of)) goto L_116e1405;
  /* 116e13e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e13e5 call 0x116e1032 */
  push32(0x116e13eau); f_116e1032();
  /* 116e13ea mov esi, esp */
  ESI = (ESP);
  /* 116e13ec push 0 */
  push32((uint32_t)(0x0u));
  /* 116e13ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e13f1 mov cl, byte ptr [eax + 2] */
  CL = (r8((uint32_t)(EAX + 0x2)));
  /* 116e13f4 push ecx */
  push32((uint32_t)(ECX));
  /* 116e13f5 call dword ptr [0x117124a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124a0))), 0x116e13fbu);
  /* 116e13fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e13fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1400 call 0x116e2b10 */
  push32(0x116e1405u); f_116e2b10();
L_116e1405:;
  /* 116e1405 mov esi, esp */
  ESI = (ESP);
  /* 116e1407 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e140a mov al, byte ptr [edx + 2] */
  AL = (r8((uint32_t)(EDX + 0x2)));
  /* 116e140d push eax */
  push32((uint32_t)(EAX));
  /* 116e140e call dword ptr [0x11712498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712498))), 0x116e1414u);
  /* 116e1414 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1417 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1419 call 0x116e2b10 */
  push32(0x116e141eu); f_116e2b10();
  /* 116e141e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e1423 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e1425 jne 0x116e146e */
  if (!C.zf) goto L_116e146e;
  /* 116e1427 mov esi, esp */
  ESI = (ESP);
  /* 116e1429 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e142c mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116e142e push edx */
  push32((uint32_t)(EDX));
  /* 116e142f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e1432 mov ecx, dword ptr [eax + 0xa] */
  ECX = (r32((uint32_t)(EAX + 0xa)));
  /* 116e1435 push ecx */
  push32((uint32_t)(ECX));
  /* 116e1436 call dword ptr [0x11712490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712490))), 0x116e143cu);
  /* 116e143c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e143f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1441 call 0x116e2b10 */
  push32(0x116e1446u); f_116e2b10();
  /* 116e1446 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1449 jge 0x116e146e */
  if ((C.sf==C.of)) goto L_116e146e;
  /* 116e144b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e144e call 0x116e1019 */
  push32(0x116e1453u); f_116e1019();
  /* 116e1453 mov esi, esp */
  ESI = (ESP);
  /* 116e1455 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e1457 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e145a mov al, byte ptr [edx + 2] */
  AL = (r8((uint32_t)(EDX + 0x2)));
  /* 116e145d push eax */
  push32((uint32_t)(EAX));
  /* 116e145e call dword ptr [0x117124a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124a0))), 0x116e1464u);
  /* 116e1464 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1467 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1469 call 0x116e2b10 */
  push32(0x116e146eu); f_116e2b10();
L_116e146e:;
  /* 116e146e pop edi */
  EDI = (pop32());
  /* 116e146f pop esi */
  ESI = (pop32());
  /* 116e1470 pop ebx */
  EBX = (pop32());
  /* 116e1471 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1474 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1476 call 0x116e2b10 */
  push32(0x116e147bu); f_116e2b10();
  /* 116e147b mov esp, ebp */
  ESP = (EBP);
  /* 116e147d pop ebp */
  EBP = (pop32());
  /* 116e147e ret  */
  ESPCHK(0x116e1380u, _esp0);
  ESP += 4; return;
}

/* FUN_100014c0 @ 0x116e14c0 (158 bytes, 60 insns) */
void f_116e14c0(void) {
  FTRACE(0x116e14c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e14c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e14c1 mov ebp, esp */
  EBP = (ESP);
  /* 116e14c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e14c6 push ebx */
  push32((uint32_t)(EBX));
  /* 116e14c7 push esi */
  push32((uint32_t)(ESI));
  /* 116e14c8 push edi */
  push32((uint32_t)(EDI));
  /* 116e14c9 push ecx */
  push32((uint32_t)(ECX));
  /* 116e14ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116e14cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116e14d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116e14d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116e14d9 pop ecx */
  ECX = (pop32());
  /* 116e14da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116e14dd mov esi, esp */
  ESI = (ESP);
  /* 116e14df push 0 */
  push32((uint32_t)(0x0u));
  /* 116e14e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e14e4 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e14e7 push eax */
  push32((uint32_t)(EAX));
  /* 116e14e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e14eb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116e14ed push edx */
  push32((uint32_t)(EDX));
  /* 116e14ee call dword ptr [0x1171248c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171248c))), 0x116e14f4u);
  /* 116e14f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e14f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e14f9 call 0x116e2b10 */
  push32(0x116e14feu); f_116e2b10();
  /* 116e14fe mov esi, esp */
  ESI = (ESP);
  /* 116e1500 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1502 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e1505 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 116e1508 push ecx */
  push32((uint32_t)(ECX));
  /* 116e1509 call dword ptr [0x11712484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712484))), 0x116e150fu);
  /* 116e150f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1512 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1514 call 0x116e2b10 */
  push32(0x116e1519u); f_116e2b10();
  /* 116e1519 mov esi, esp */
  ESI = (ESP);
  /* 116e151b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e151e mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 116e1521 push eax */
  push32((uint32_t)(EAX));
  /* 116e1522 call dword ptr [0x11712494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712494))), 0x116e1528u);
  /* 116e1528 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e152b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e152d call 0x116e2b10 */
  push32(0x116e1532u); f_116e2b10();
  /* 116e1532 mov esi, esp */
  ESI = (ESP);
  /* 116e1534 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1536 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e1539 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e153c push ecx */
  push32((uint32_t)(ECX));
  /* 116e153d call dword ptr [0x11712484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712484))), 0x116e1543u);
  /* 116e1543 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1546 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1548 call 0x116e2b10 */
  push32(0x116e154du); f_116e2b10();
  /* 116e154d pop edi */
  EDI = (pop32());
  /* 116e154e pop esi */
  ESI = (pop32());
  /* 116e154f pop ebx */
  EBX = (pop32());
  /* 116e1550 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1553 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1555 call 0x116e2b10 */
  push32(0x116e155au); f_116e2b10();
  /* 116e155a mov esp, ebp */
  ESP = (EBP);
  /* 116e155c pop ebp */
  EBP = (pop32());
  /* 116e155d ret  */
  ESPCHK(0x116e14c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001590 @ 0x116e1590 (158 bytes, 60 insns) */
void f_116e1590(void) {
  FTRACE(0x116e1590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e1590 push ebp */
  push32((uint32_t)(EBP));
  /* 116e1591 mov ebp, esp */
  EBP = (ESP);
  /* 116e1593 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e1596 push ebx */
  push32((uint32_t)(EBX));
  /* 116e1597 push esi */
  push32((uint32_t)(ESI));
  /* 116e1598 push edi */
  push32((uint32_t)(EDI));
  /* 116e1599 push ecx */
  push32((uint32_t)(ECX));
  /* 116e159a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 116e159d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 116e15a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116e15a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116e15a9 pop ecx */
  ECX = (pop32());
  /* 116e15aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116e15ad mov esi, esp */
  ESI = (ESP);
  /* 116e15af push 0 */
  push32((uint32_t)(0x0u));
  /* 116e15b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e15b4 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e15b7 push eax */
  push32((uint32_t)(EAX));
  /* 116e15b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e15bb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116e15bd push edx */
  push32((uint32_t)(EDX));
  /* 116e15be call dword ptr [0x1171248c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171248c))), 0x116e15c4u);
  /* 116e15c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e15c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e15c9 call 0x116e2b10 */
  push32(0x116e15ceu); f_116e2b10();
  /* 116e15ce mov esi, esp */
  ESI = (ESP);
  /* 116e15d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e15d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e15d5 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 116e15d8 push ecx */
  push32((uint32_t)(ECX));
  /* 116e15d9 call dword ptr [0x11712484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712484))), 0x116e15dfu);
  /* 116e15df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e15e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e15e4 call 0x116e2b10 */
  push32(0x116e15e9u); f_116e2b10();
  /* 116e15e9 mov esi, esp */
  ESI = (ESP);
  /* 116e15eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e15ee mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 116e15f1 push eax */
  push32((uint32_t)(EAX));
  /* 116e15f2 call dword ptr [0x11712488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712488))), 0x116e15f8u);
  /* 116e15f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e15fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e15fd call 0x116e2b10 */
  push32(0x116e1602u); f_116e2b10();
  /* 116e1602 mov esi, esp */
  ESI = (ESP);
  /* 116e1604 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1606 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e1609 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e160c push ecx */
  push32((uint32_t)(ECX));
  /* 116e160d call dword ptr [0x11712484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712484))), 0x116e1613u);
  /* 116e1613 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1616 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1618 call 0x116e2b10 */
  push32(0x116e161du); f_116e2b10();
  /* 116e161d pop edi */
  EDI = (pop32());
  /* 116e161e pop esi */
  ESI = (pop32());
  /* 116e161f pop ebx */
  EBX = (pop32());
  /* 116e1620 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1623 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1625 call 0x116e2b10 */
  push32(0x116e162au); f_116e2b10();
  /* 116e162a mov esp, ebp */
  ESP = (EBP);
  /* 116e162c pop ebp */
  EBP = (pop32());
  /* 116e162d ret  */
  ESPCHK(0x116e1590u, _esp0);
  ESP += 4; return;
}

/* FUN_10001660 @ 0x116e1660 (789 bytes, 212 insns) */
void f_116e1660(void) {
  FTRACE(0x116e1660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e1660 push ebp */
  push32((uint32_t)(EBP));
  /* 116e1661 mov ebp, esp */
  EBP = (ESP);
  /* 116e1663 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e1666 push ebx */
  push32((uint32_t)(EBX));
  /* 116e1667 push esi */
  push32((uint32_t)(ESI));
  /* 116e1668 push edi */
  push32((uint32_t)(EDI));
  /* 116e1669 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 116e166c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 116e1671 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116e1676 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116e1678 mov esi, esp */
  ESI = (ESP);
  /* 116e167a push 0x1170a0b0 */
  push32((uint32_t)(0x1170a0b0u));
  /* 116e167f push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1681 call dword ptr [0x1171246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171246c))), 0x116e1687u);
  /* 116e1687 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e168a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e168c call 0x116e2b10 */
  push32(0x116e1691u); f_116e2b10();
  /* 116e1691 mov esi, esp */
  ESI = (ESP);
  /* 116e1693 push 0x1170a0a8 */
  push32((uint32_t)(0x1170a0a8u));
  /* 116e1698 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e169a call dword ptr [0x1171246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171246c))), 0x116e16a0u);
  /* 116e16a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e16a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e16a5 call 0x116e2b10 */
  push32(0x116e16aau); f_116e2b10();
  /* 116e16aa mov esi, esp */
  ESI = (ESP);
  /* 116e16ac push 0x1170a0a8 */
  push32((uint32_t)(0x1170a0a8u));
  /* 116e16b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e16b3 call dword ptr [0x1171246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171246c))), 0x116e16b9u);
  /* 116e16b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e16bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e16be call 0x116e2b10 */
  push32(0x116e16c3u); f_116e2b10();
  /* 116e16c3 mov esi, esp */
  ESI = (ESP);
  /* 116e16c5 push 0x1170a0a8 */
  push32((uint32_t)(0x1170a0a8u));
  /* 116e16ca push 3 */
  push32((uint32_t)(0x3u));
  /* 116e16cc call dword ptr [0x1171246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171246c))), 0x116e16d2u);
  /* 116e16d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e16d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e16d7 call 0x116e2b10 */
  push32(0x116e16dcu); f_116e2b10();
  /* 116e16dc mov esi, esp */
  ESI = (ESP);
  /* 116e16de push 0x1170a0a0 */
  push32((uint32_t)(0x1170a0a0u));
  /* 116e16e3 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e16e5 call dword ptr [0x1171246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171246c))), 0x116e16ebu);
  /* 116e16eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e16ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e16f0 call 0x116e2b10 */
  push32(0x116e16f5u); f_116e2b10();
  /* 116e16f5 mov esi, esp */
  ESI = (ESP);
  /* 116e16f7 push 0x1170a094 */
  push32((uint32_t)(0x1170a094u));
  /* 116e16fc push 0x1170f470 */
  push32((uint32_t)(0x1170f470u));
  /* 116e1701 call dword ptr [0x1171249c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171249c))), 0x116e1707u);
  /* 116e1707 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e170a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e170c call 0x116e2b10 */
  push32(0x116e1711u); f_116e2b10();
  /* 116e1711 mov esi, esp */
  ESI = (ESP);
  /* 116e1713 push 0x1170a088 */
  push32((uint32_t)(0x1170a088u));
  /* 116e1718 push 0x1170f3e8 */
  push32((uint32_t)(0x1170f3e8u));
  /* 116e171d call dword ptr [0x1171249c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171249c))), 0x116e1723u);
  /* 116e1723 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1726 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1728 call 0x116e2b10 */
  push32(0x116e172du); f_116e2b10();
  /* 116e172d mov esi, esp */
  ESI = (ESP);
  /* 116e172f push 0x1170a078 */
  push32((uint32_t)(0x1170a078u));
  /* 116e1734 push 0x1170f5a8 */
  push32((uint32_t)(0x1170f5a8u));
  /* 116e1739 call dword ptr [0x1171247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171247c))), 0x116e173fu);
  /* 116e173f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1742 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1744 call 0x116e2b10 */
  push32(0x116e1749u); f_116e2b10();
  /* 116e1749 mov esi, esp */
  ESI = (ESP);
  /* 116e174b push 0x1170a070 */
  push32((uint32_t)(0x1170a070u));
  /* 116e1750 push 0x1170f4a0 */
  push32((uint32_t)(0x1170f4a0u));
  /* 116e1755 call dword ptr [0x11712480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712480))), 0x116e175bu);
  /* 116e175b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e175e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1760 call 0x116e2b10 */
  push32(0x116e1765u); f_116e2b10();
  /* 116e1765 mov esi, esp */
  ESI = (ESP);
  /* 116e1767 push 0x1170f5a0 */
  push32((uint32_t)(0x1170f5a0u));
  /* 116e176c call dword ptr [0x117124b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124b0))), 0x116e1772u);
  /* 116e1772 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1775 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1777 call 0x116e2b10 */
  push32(0x116e177cu); f_116e2b10();
  /* 116e177c mov esi, esp */
  ESI = (ESP);
  /* 116e177e push 0x1170f3e0 */
  push32((uint32_t)(0x1170f3e0u));
  /* 116e1783 call dword ptr [0x117124b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124b0))), 0x116e1789u);
  /* 116e1789 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e178c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e178e call 0x116e2b10 */
  push32(0x116e1793u); f_116e2b10();
  /* 116e1793 mov esi, esp */
  ESI = (ESP);
  /* 116e1795 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e1797 push 0x1170f59c */
  push32((uint32_t)(0x1170f59cu));
  /* 116e179c call dword ptr [0x11712478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712478))), 0x116e17a2u);
  /* 116e17a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e17a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e17a7 call 0x116e2b10 */
  push32(0x116e17acu); f_116e2b10();
  /* 116e17ac mov esi, esp */
  ESI = (ESP);
  /* 116e17ae push 0x1170a06c */
  push32((uint32_t)(0x1170a06cu));
  /* 116e17b3 push 0x1170f4a8 */
  push32((uint32_t)(0x1170f4a8u));
  /* 116e17b8 call dword ptr [0x117124ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124ac))), 0x116e17beu);
  /* 116e17be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e17c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e17c3 call 0x116e2b10 */
  push32(0x116e17c8u); f_116e2b10();
  /* 116e17c8 mov esi, esp */
  ESI = (ESP);
  /* 116e17ca push 0x1170a068 */
  push32((uint32_t)(0x1170a068u));
  /* 116e17cf push 0x1170f4b0 */
  push32((uint32_t)(0x1170f4b0u));
  /* 116e17d4 call dword ptr [0x117124ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124ac))), 0x116e17dau);
  /* 116e17da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e17dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e17df call 0x116e2b10 */
  push32(0x116e17e4u); f_116e2b10();
  /* 116e17e4 mov esi, esp */
  ESI = (ESP);
  /* 116e17e6 push 0x1170a064 */
  push32((uint32_t)(0x1170a064u));
  /* 116e17eb push 0x1170f4b8 */
  push32((uint32_t)(0x1170f4b8u));
  /* 116e17f0 call dword ptr [0x117124ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124ac))), 0x116e17f6u);
  /* 116e17f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e17f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e17fb call 0x116e2b10 */
  push32(0x116e1800u); f_116e2b10();
  /* 116e1800 mov esi, esp */
  ESI = (ESP);
  /* 116e1802 push 0x1170a060 */
  push32((uint32_t)(0x1170a060u));
  /* 116e1807 push 0x1170f4c0 */
  push32((uint32_t)(0x1170f4c0u));
  /* 116e180c call dword ptr [0x117124ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124ac))), 0x116e1812u);
  /* 116e1812 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1815 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1817 call 0x116e2b10 */
  push32(0x116e181cu); f_116e2b10();
  /* 116e181c mov esi, esp */
  ESI = (ESP);
  /* 116e181e push 0x1170a05c */
  push32((uint32_t)(0x1170a05cu));
  /* 116e1823 push 0x1170f4c8 */
  push32((uint32_t)(0x1170f4c8u));
  /* 116e1828 call dword ptr [0x117124ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124ac))), 0x116e182eu);
  /* 116e182e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1831 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1833 call 0x116e2b10 */
  push32(0x116e1838u); f_116e2b10();
  /* 116e1838 mov esi, esp */
  ESI = (ESP);
  /* 116e183a push 0x1170a058 */
  push32((uint32_t)(0x1170a058u));
  /* 116e183f push 0x1170f4d0 */
  push32((uint32_t)(0x1170f4d0u));
  /* 116e1844 call dword ptr [0x117124ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124ac))), 0x116e184au);
  /* 116e184a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e184d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e184f call 0x116e2b10 */
  push32(0x116e1854u); f_116e2b10();
  /* 116e1854 mov esi, esp */
  ESI = (ESP);
  /* 116e1856 push 0x1170a054 */
  push32((uint32_t)(0x1170a054u));
  /* 116e185b push 0x1170f4d8 */
  push32((uint32_t)(0x1170f4d8u));
  /* 116e1860 call dword ptr [0x117124ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124ac))), 0x116e1866u);
  /* 116e1866 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1869 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e186b call 0x116e2b10 */
  push32(0x116e1870u); f_116e2b10();
  /* 116e1870 mov esi, esp */
  ESI = (ESP);
  /* 116e1872 push 0x1170a050 */
  push32((uint32_t)(0x1170a050u));
  /* 116e1877 push 0x1170f4e0 */
  push32((uint32_t)(0x1170f4e0u));
  /* 116e187c call dword ptr [0x117124ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124ac))), 0x116e1882u);
  /* 116e1882 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1885 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1887 call 0x116e2b10 */
  push32(0x116e188cu); f_116e2b10();
  /* 116e188c mov esi, esp */
  ESI = (ESP);
  /* 116e188e push 0x1170a04c */
  push32((uint32_t)(0x1170a04cu));
  /* 116e1893 push 0x1170f4e8 */
  push32((uint32_t)(0x1170f4e8u));
  /* 116e1898 call dword ptr [0x117124ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124ac))), 0x116e189eu);
  /* 116e189e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e18a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e18a3 call 0x116e2b10 */
  push32(0x116e18a8u); f_116e2b10();
  /* 116e18a8 mov esi, esp */
  ESI = (ESP);
  /* 116e18aa push 0x1170a048 */
  push32((uint32_t)(0x1170a048u));
  /* 116e18af push 0x1170f4f0 */
  push32((uint32_t)(0x1170f4f0u));
  /* 116e18b4 call dword ptr [0x117124ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124ac))), 0x116e18bau);
  /* 116e18ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e18bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e18bf call 0x116e2b10 */
  push32(0x116e18c4u); f_116e2b10();
  /* 116e18c4 mov esi, esp */
  ESI = (ESP);
  /* 116e18c6 push 0x1170a044 */
  push32((uint32_t)(0x1170a044u));
  /* 116e18cb push 0x1170f4f8 */
  push32((uint32_t)(0x1170f4f8u));
  /* 116e18d0 call dword ptr [0x117124ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124ac))), 0x116e18d6u);
  /* 116e18d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e18d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e18db call 0x116e2b10 */
  push32(0x116e18e0u); f_116e2b10();
  /* 116e18e0 mov esi, esp */
  ESI = (ESP);
  /* 116e18e2 push 0x1170a040 */
  push32((uint32_t)(0x1170a040u));
  /* 116e18e7 push 0x1170f500 */
  push32((uint32_t)(0x1170f500u));
  /* 116e18ec call dword ptr [0x117124ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124ac))), 0x116e18f2u);
  /* 116e18f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e18f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e18f7 call 0x116e2b10 */
  push32(0x116e18fcu); f_116e2b10();
  /* 116e18fc mov esi, esp */
  ESI = (ESP);
  /* 116e18fe push 0x1170a03c */
  push32((uint32_t)(0x1170a03cu));
  /* 116e1903 push 0x1170f508 */
  push32((uint32_t)(0x1170f508u));
  /* 116e1908 call dword ptr [0x117124ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124ac))), 0x116e190eu);
  /* 116e190e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1911 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1913 call 0x116e2b10 */
  push32(0x116e1918u); f_116e2b10();
  /* 116e1918 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 116e191a push 0 */
  push32((uint32_t)(0x0u));
  /* 116e191c push 0x1170a034 */
  push32((uint32_t)(0x1170a034u));
  /* 116e1921 mov ecx, 0x1170f3f8 */
  ECX = (0x1170f3f8u);
  /* 116e1926 call 0x116e1028 */
  push32(0x116e192bu); f_116e1028();
  /* 116e192b push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 116e192d push 0 */
  push32((uint32_t)(0x0u));
  /* 116e192f push 0x1170a02c */
  push32((uint32_t)(0x1170a02cu));
  /* 116e1934 mov ecx, 0x1170f420 */
  ECX = (0x1170f420u);
  /* 116e1939 call 0x116e1028 */
  push32(0x116e193eu); f_116e1028();
  /* 116e193e push 0x5d */
  push32((uint32_t)(0x5du));
  /* 116e1940 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1942 push 0x1170a024 */
  push32((uint32_t)(0x1170a024u));
  /* 116e1947 mov ecx, 0x1170f448 */
  ECX = (0x1170f448u);
  /* 116e194c call 0x116e1028 */
  push32(0x116e1951u); f_116e1028();
  /* 116e1951 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 116e1953 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1955 push 0x1170a01c */
  push32((uint32_t)(0x1170a01cu));
  /* 116e195a mov ecx, 0x1170f478 */
  ECX = (0x1170f478u);
  /* 116e195f call 0x116e1028 */
  push32(0x116e1964u); f_116e1028();
  /* 116e1964 pop edi */
  EDI = (pop32());
  /* 116e1965 pop esi */
  ESI = (pop32());
  /* 116e1966 pop ebx */
  EBX = (pop32());
  /* 116e1967 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e196a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e196c call 0x116e2b10 */
  push32(0x116e1971u); f_116e2b10();
  /* 116e1971 mov esp, ebp */
  ESP = (EBP);
  /* 116e1973 pop ebp */
  EBP = (pop32());
  /* 116e1974 ret  */
  ESPCHK(0x116e1660u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a40 @ 0x116e1a40 (3258 bytes, 936 insns) */
void f_116e1a40(void) {
  FTRACE(0x116e1a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e1a40 push ebp */
  push32((uint32_t)(EBP));
  /* 116e1a41 mov ebp, esp */
  EBP = (ESP);
  /* 116e1a43 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e1a46 push ebx */
  push32((uint32_t)(EBX));
  /* 116e1a47 push esi */
  push32((uint32_t)(ESI));
  /* 116e1a48 push edi */
  push32((uint32_t)(EDI));
  /* 116e1a49 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 116e1a4c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 116e1a51 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 116e1a56 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116e1a58 mov esi, esp */
  ESI = (ESP);
  /* 116e1a5a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 116e1a5c call dword ptr [0x11712498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712498))), 0x116e1a62u);
  /* 116e1a62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1a65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1a67 call 0x116e2b10 */
  push32(0x116e1a6cu); f_116e2b10();
  /* 116e1a6c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e1a71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e1a73 je 0x116e1e64 */
  if (C.zf) goto L_116e1e64;
  /* 116e1a79 mov esi, esp */
  ESI = (ESP);
  /* 116e1a7b push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1a7d call dword ptr [0x11712420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712420))), 0x116e1a83u);
  /* 116e1a83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1a86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1a88 call 0x116e2b10 */
  push32(0x116e1a8du); f_116e2b10();
  /* 116e1a8d mov dword ptr [0x1170f598], eax */
  w32((uint32_t)(0x1170f598), (EAX));
  /* 116e1a92 mov eax, dword ptr [0x1170f598] */
  EAX = (r32((uint32_t)(0x1170f598)));
  /* 116e1a97 imul eax, eax, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xbb8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e1a9d mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 116e1aa2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e1aa4 mov esi, esp */
  ESI = (ESP);
  /* 116e1aa6 push ecx */
  push32((uint32_t)(ECX));
  /* 116e1aa7 push 3 */
  push32((uint32_t)(0x3u));
  /* 116e1aa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1aab call dword ptr [0x11712428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712428))), 0x116e1ab1u);
  /* 116e1ab1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1ab4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1ab6 call 0x116e2b10 */
  push32(0x116e1abbu); f_116e2b10();
  /* 116e1abb mov edx, dword ptr [0x1170f598] */
  EDX = (r32((uint32_t)(0x1170f598)));
  /* 116e1ac1 imul edx, edx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xbb8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e1ac7 mov eax, 0x2710 */
  EAX = (0x2710u);
  /* 116e1acc sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e1ace mov esi, esp */
  ESI = (ESP);
  /* 116e1ad0 push eax */
  push32((uint32_t)(EAX));
  /* 116e1ad1 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e1ad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1ad5 call dword ptr [0x11712428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712428))), 0x116e1adbu);
  /* 116e1adb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1ade cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1ae0 call 0x116e2b10 */
  push32(0x116e1ae5u); f_116e2b10();
  /* 116e1ae5 mov ecx, dword ptr [0x1170f598] */
  ECX = (r32((uint32_t)(0x1170f598)));
  /* 116e1aeb imul ecx, ecx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xbb8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e1af1 mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 116e1af6 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e1af8 mov esi, esp */
  ESI = (ESP);
  /* 116e1afa push edx */
  push32((uint32_t)(EDX));
  /* 116e1afb push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1afd push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1aff call dword ptr [0x11712428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712428))), 0x116e1b05u);
  /* 116e1b05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1b08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1b0a call 0x116e2b10 */
  push32(0x116e1b0fu); f_116e2b10();
  /* 116e1b0f mov eax, dword ptr [0x1170f598] */
  EAX = (r32((uint32_t)(0x1170f598)));
  /* 116e1b14 imul eax, eax, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xbb8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e1b1a mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 116e1b1f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e1b21 mov esi, esp */
  ESI = (ESP);
  /* 116e1b23 push ecx */
  push32((uint32_t)(ECX));
  /* 116e1b24 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e1b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1b28 call dword ptr [0x11712428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712428))), 0x116e1b2eu);
  /* 116e1b2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1b31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1b33 call 0x116e2b10 */
  push32(0x116e1b38u); f_116e2b10();
  /* 116e1b38 mov edx, dword ptr [0x1170f598] */
  EDX = (r32((uint32_t)(0x1170f598)));
  /* 116e1b3e imul edx, edx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xbb8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e1b44 mov eax, 0x2710 */
  EAX = (0x2710u);
  /* 116e1b49 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e1b4b mov esi, esp */
  ESI = (ESP);
  /* 116e1b4d push eax */
  push32((uint32_t)(EAX));
  /* 116e1b4e push 5 */
  push32((uint32_t)(0x5u));
  /* 116e1b50 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1b52 call dword ptr [0x11712428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712428))), 0x116e1b58u);
  /* 116e1b58 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1b5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1b5d call 0x116e2b10 */
  push32(0x116e1b62u); f_116e2b10();
  /* 116e1b62 mov ecx, dword ptr [0x1170f598] */
  ECX = (r32((uint32_t)(0x1170f598)));
  /* 116e1b68 imul ecx, ecx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xbb8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e1b6e mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 116e1b73 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e1b75 mov esi, esp */
  ESI = (ESP);
  /* 116e1b77 push edx */
  push32((uint32_t)(EDX));
  /* 116e1b78 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e1b7a push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1b7c call dword ptr [0x11712428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712428))), 0x116e1b82u);
  /* 116e1b82 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1b85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1b87 call 0x116e2b10 */
  push32(0x116e1b8cu); f_116e2b10();
  /* 116e1b8c mov esi, esp */
  ESI = (ESP);
  /* 116e1b8e push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 116e1b93 push 3 */
  push32((uint32_t)(0x3u));
  /* 116e1b95 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e1b97 call dword ptr [0x11712428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712428))), 0x116e1b9du);
  /* 116e1b9d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1ba0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1ba2 call 0x116e2b10 */
  push32(0x116e1ba7u); f_116e2b10();
  /* 116e1ba7 mov esi, esp */
  ESI = (ESP);
  /* 116e1ba9 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 116e1bae push 1 */
  push32((uint32_t)(0x1u));
  /* 116e1bb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e1bb2 call dword ptr [0x11712428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712428))), 0x116e1bb8u);
  /* 116e1bb8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1bbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1bbd call 0x116e2b10 */
  push32(0x116e1bc2u); f_116e2b10();
  /* 116e1bc2 mov esi, esp */
  ESI = (ESP);
  /* 116e1bc4 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 116e1bc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1bcb push 1 */
  push32((uint32_t)(0x1u));
  /* 116e1bcd call dword ptr [0x11712428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712428))), 0x116e1bd3u);
  /* 116e1bd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1bd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1bd8 call 0x116e2b10 */
  push32(0x116e1bddu); f_116e2b10();
  /* 116e1bdd mov esi, esp */
  ESI = (ESP);
  /* 116e1bdf push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 116e1be4 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e1be6 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e1be8 call dword ptr [0x11712428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712428))), 0x116e1beeu);
  /* 116e1bee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1bf1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1bf3 call 0x116e2b10 */
  push32(0x116e1bf8u); f_116e2b10();
  /* 116e1bf8 mov esi, esp */
  ESI = (ESP);
  /* 116e1bfa push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 116e1bff push 5 */
  push32((uint32_t)(0x5u));
  /* 116e1c01 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e1c03 call dword ptr [0x11712428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712428))), 0x116e1c09u);
  /* 116e1c09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1c0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1c0e call 0x116e2b10 */
  push32(0x116e1c13u); f_116e2b10();
  /* 116e1c13 mov esi, esp */
  ESI = (ESP);
  /* 116e1c15 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 116e1c1a push 4 */
  push32((uint32_t)(0x4u));
  /* 116e1c1c push 1 */
  push32((uint32_t)(0x1u));
  /* 116e1c1e call dword ptr [0x11712428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712428))), 0x116e1c24u);
  /* 116e1c24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1c27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1c29 call 0x116e2b10 */
  push32(0x116e1c2eu); f_116e2b10();
  /* 116e1c2e mov esi, esp */
  ESI = (ESP);
  /* 116e1c30 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 116e1c35 push 3 */
  push32((uint32_t)(0x3u));
  /* 116e1c37 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e1c39 call dword ptr [0x11712428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712428))), 0x116e1c3fu);
  /* 116e1c3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1c42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1c44 call 0x116e2b10 */
  push32(0x116e1c49u); f_116e2b10();
  /* 116e1c49 mov esi, esp */
  ESI = (ESP);
  /* 116e1c4b push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 116e1c50 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e1c52 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e1c54 call dword ptr [0x11712428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712428))), 0x116e1c5au);
  /* 116e1c5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1c5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1c5f call 0x116e2b10 */
  push32(0x116e1c64u); f_116e2b10();
  /* 116e1c64 mov esi, esp */
  ESI = (ESP);
  /* 116e1c66 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 116e1c6b push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1c6d push 2 */
  push32((uint32_t)(0x2u));
  /* 116e1c6f call dword ptr [0x11712428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712428))), 0x116e1c75u);
  /* 116e1c75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1c78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1c7a call 0x116e2b10 */
  push32(0x116e1c7fu); f_116e2b10();
  /* 116e1c7f mov esi, esp */
  ESI = (ESP);
  /* 116e1c81 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 116e1c86 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e1c88 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e1c8a call dword ptr [0x11712428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712428))), 0x116e1c90u);
  /* 116e1c90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1c93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1c95 call 0x116e2b10 */
  push32(0x116e1c9au); f_116e2b10();
  /* 116e1c9a mov esi, esp */
  ESI = (ESP);
  /* 116e1c9c push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 116e1ca1 push 5 */
  push32((uint32_t)(0x5u));
  /* 116e1ca3 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e1ca5 call dword ptr [0x11712428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712428))), 0x116e1cabu);
  /* 116e1cab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1cae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1cb0 call 0x116e2b10 */
  push32(0x116e1cb5u); f_116e2b10();
  /* 116e1cb5 mov esi, esp */
  ESI = (ESP);
  /* 116e1cb7 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 116e1cbc push 4 */
  push32((uint32_t)(0x4u));
  /* 116e1cbe push 2 */
  push32((uint32_t)(0x2u));
  /* 116e1cc0 call dword ptr [0x11712428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712428))), 0x116e1cc6u);
  /* 116e1cc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1cc9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1ccb call 0x116e2b10 */
  push32(0x116e1cd0u); f_116e2b10();
  /* 116e1cd0 mov esi, esp */
  ESI = (ESP);
  /* 116e1cd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e1cd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e1cd6 push 0x1170f4f8 */
  push32((uint32_t)(0x1170f4f8u));
  /* 116e1cdb call dword ptr [0x1171242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171242c))), 0x116e1ce1u);
  /* 116e1ce1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1ce4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1ce6 call 0x116e2b10 */
  push32(0x116e1cebu); f_116e2b10();
  /* 116e1ceb cmp dword ptr [0x1170f598], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f598))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1cf2 jle 0x116e1d10 */
  if ((C.zf||C.sf!=C.of)) goto L_116e1d10;
  /* 116e1cf4 mov esi, esp */
  ESI = (ESP);
  /* 116e1cf6 push 0x1170a124 */
  push32((uint32_t)(0x1170a124u));
  /* 116e1cfb push 0x1170a118 */
  push32((uint32_t)(0x1170a118u));
  /* 116e1d00 call dword ptr [0x11712424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712424))), 0x116e1d06u);
  /* 116e1d06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1d09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1d0b call 0x116e2b10 */
  push32(0x116e1d10u); f_116e2b10();
L_116e1d10:;
  /* 116e1d10 cmp dword ptr [0x1170f598], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170f598))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1d17 jle 0x116e1d35 */
  if ((C.zf||C.sf!=C.of)) goto L_116e1d35;
  /* 116e1d19 mov esi, esp */
  ESI = (ESP);
  /* 116e1d1b push 0x1170a100 */
  push32((uint32_t)(0x1170a100u));
  /* 116e1d20 push 0x1170a118 */
  push32((uint32_t)(0x1170a118u));
  /* 116e1d25 call dword ptr [0x11712424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712424))), 0x116e1d2bu);
  /* 116e1d2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1d2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1d30 call 0x116e2b10 */
  push32(0x116e1d35u); f_116e2b10();
L_116e1d35:;
  /* 116e1d35 cmp dword ptr [0x1170f598], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1170f598))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1d3c jle 0x116e1d5a */
  if ((C.zf||C.sf!=C.of)) goto L_116e1d5a;
  /* 116e1d3e mov esi, esp */
  ESI = (ESP);
  /* 116e1d40 push 0x1170a0e8 */
  push32((uint32_t)(0x1170a0e8u));
  /* 116e1d45 push 0x1170a118 */
  push32((uint32_t)(0x1170a118u));
  /* 116e1d4a call dword ptr [0x11712424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712424))), 0x116e1d50u);
  /* 116e1d50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1d53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1d55 call 0x116e2b10 */
  push32(0x116e1d5au); f_116e2b10();
L_116e1d5a:;
  /* 116e1d5a mov esi, esp */
  ESI = (ESP);
  /* 116e1d5c push 0x1170a0e0 */
  push32((uint32_t)(0x1170a0e0u));
  /* 116e1d61 call dword ptr [0x11712434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712434))), 0x116e1d67u);
  /* 116e1d67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1d6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1d6c call 0x116e2b10 */
  push32(0x116e1d71u); f_116e2b10();
  /* 116e1d71 mov esi, esp */
  ESI = (ESP);
  /* 116e1d73 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1d75 push 0x1170f470 */
  push32((uint32_t)(0x1170f470u));
  /* 116e1d7a call dword ptr [0x11712484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712484))), 0x116e1d80u);
  /* 116e1d80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1d83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1d85 call 0x116e2b10 */
  push32(0x116e1d8au); f_116e2b10();
  /* 116e1d8a mov esi, esp */
  ESI = (ESP);
  /* 116e1d8c push 3 */
  push32((uint32_t)(0x3u));
  /* 116e1d8e call dword ptr [0x11712494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712494))), 0x116e1d94u);
  /* 116e1d94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1d97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1d99 call 0x116e2b10 */
  push32(0x116e1d9eu); f_116e2b10();
  /* 116e1d9e mov esi, esp */
  ESI = (ESP);
  /* 116e1da0 push 0xe */
  push32((uint32_t)(0xeu));
  /* 116e1da2 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e1da4 call dword ptr [0x11712438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712438))), 0x116e1daau);
  /* 116e1daa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1dad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1daf call 0x116e2b10 */
  push32(0x116e1db4u); f_116e2b10();
  /* 116e1db4 mov esi, esp */
  ESI = (ESP);
  /* 116e1db6 push 0xe */
  push32((uint32_t)(0xeu));
  /* 116e1db8 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e1dba call dword ptr [0x11712438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712438))), 0x116e1dc0u);
  /* 116e1dc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1dc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1dc5 call 0x116e2b10 */
  push32(0x116e1dcau); f_116e2b10();
  /* 116e1dca mov esi, esp */
  ESI = (ESP);
  /* 116e1dcc push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116e1dce push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1dd0 call dword ptr [0x11712438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712438))), 0x116e1dd6u);
  /* 116e1dd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1dd9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1ddb call 0x116e2b10 */
  push32(0x116e1de0u); f_116e2b10();
  /* 116e1de0 mov esi, esp */
  ESI = (ESP);
  /* 116e1de2 mov eax, dword ptr [0x1170f598] */
  EAX = (r32((uint32_t)(0x1170f598)));
  /* 116e1de7 push eax */
  push32((uint32_t)(EAX));
  /* 116e1de8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1dea push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1dec push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1dee push 0x1170a0d4 */
  push32((uint32_t)(0x1170a0d4u));
  /* 116e1df3 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e1df5 call dword ptr [0x11712430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712430))), 0x116e1dfbu);
  /* 116e1dfb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1dfe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1e00 call 0x116e2b10 */
  push32(0x116e1e05u); f_116e2b10();
  /* 116e1e05 mov esi, esp */
  ESI = (ESP);
  /* 116e1e07 mov ecx, dword ptr [0x1170f598] */
  ECX = (r32((uint32_t)(0x1170f598)));
  /* 116e1e0d push ecx */
  push32((uint32_t)(ECX));
  /* 116e1e0e push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1e10 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1e12 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e1e14 push 0x1170a0d4 */
  push32((uint32_t)(0x1170a0d4u));
  /* 116e1e19 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e1e1b call dword ptr [0x11712430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712430))), 0x116e1e21u);
  /* 116e1e21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1e24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1e26 call 0x116e2b10 */
  push32(0x116e1e2bu); f_116e2b10();
  /* 116e1e2b mov dword ptr [0x1170f59c], 0 */
  w32((uint32_t)(0x1170f59c), (0x0u));
  /* 116e1e35 mov esi, esp */
  ESI = (ESP);
  /* 116e1e37 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1e39 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 116e1e3b call dword ptr [0x117124a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124a0))), 0x116e1e41u);
  /* 116e1e41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1e44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1e46 call 0x116e2b10 */
  push32(0x116e1e4bu); f_116e2b10();
  /* 116e1e4b mov esi, esp */
  ESI = (ESP);
  /* 116e1e4d push 0x36b0 */
  push32((uint32_t)(0x36b0u));
  /* 116e1e52 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e1e54 call dword ptr [0x11712440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712440))), 0x116e1e5au);
  /* 116e1e5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1e5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1e5f call 0x116e2b10 */
  push32(0x116e1e64u); f_116e2b10();
L_116e1e64:;
  /* 116e1e64 mov ecx, 0x1170f3f8 */
  ECX = (0x1170f3f8u);
  /* 116e1e69 call 0x116e102d */
  push32(0x116e1e6eu); f_116e102d();
  /* 116e1e6e mov ecx, 0x1170f420 */
  ECX = (0x1170f420u);
  /* 116e1e73 call 0x116e102d */
  push32(0x116e1e78u); f_116e102d();
  /* 116e1e78 mov ecx, 0x1170f448 */
  ECX = (0x1170f448u);
  /* 116e1e7d call 0x116e102d */
  push32(0x116e1e82u); f_116e102d();
  /* 116e1e82 mov ecx, 0x1170f478 */
  ECX = (0x1170f478u);
  /* 116e1e87 call 0x116e102d */
  push32(0x116e1e8cu); f_116e102d();
  /* 116e1e8c mov esi, esp */
  ESI = (ESP);
  /* 116e1e8e push 1 */
  push32((uint32_t)(0x1u));
  /* 116e1e90 call dword ptr [0x11712444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712444))), 0x116e1e96u);
  /* 116e1e96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1e99 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1e9b call 0x116e2b10 */
  push32(0x116e1ea0u); f_116e2b10();
  /* 116e1ea0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e1ea5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e1ea7 je 0x116e1edb */
  if (C.zf) goto L_116e1edb;
  /* 116e1ea9 mov esi, esp */
  ESI = (ESP);
  /* 116e1eab push 0x1170a0cc */
  push32((uint32_t)(0x1170a0ccu));
  /* 116e1eb0 call dword ptr [0x11712434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712434))), 0x116e1eb6u);
  /* 116e1eb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1eb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1ebb call 0x116e2b10 */
  push32(0x116e1ec0u); f_116e2b10();
  /* 116e1ec0 mov esi, esp */
  ESI = (ESP);
  /* 116e1ec2 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e1ec4 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e1ec6 push 0x1170f500 */
  push32((uint32_t)(0x1170f500u));
  /* 116e1ecb call dword ptr [0x1171242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171242c))), 0x116e1ed1u);
  /* 116e1ed1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1ed4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1ed6 call 0x116e2b10 */
  push32(0x116e1edbu); f_116e2b10();
L_116e1edb:;
  /* 116e1edb mov esi, esp */
  ESI = (ESP);
  /* 116e1edd push 1 */
  push32((uint32_t)(0x1u));
  /* 116e1edf call dword ptr [0x1171243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171243c))), 0x116e1ee5u);
  /* 116e1ee5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1ee8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1eea call 0x116e2b10 */
  push32(0x116e1eefu); f_116e2b10();
  /* 116e1eef and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e1ef4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e1ef6 je 0x116e1fc0 */
  if (C.zf) goto L_116e1fc0;
  /* 116e1efc mov esi, esp */
  ESI = (ESP);
  /* 116e1efe push 1 */
  push32((uint32_t)(0x1u));
  /* 116e1f00 call dword ptr [0x11712498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712498))), 0x116e1f06u);
  /* 116e1f06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1f09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1f0b call 0x116e2b10 */
  push32(0x116e1f10u); f_116e2b10();
  /* 116e1f10 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e1f15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e1f17 je 0x116e1fc0 */
  if (C.zf) goto L_116e1fc0;
  /* 116e1f1d mov esi, esp */
  ESI = (ESP);
  /* 116e1f1f push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1f21 push 0x1170f500 */
  push32((uint32_t)(0x1170f500u));
  /* 116e1f26 call dword ptr [0x11712490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712490))), 0x116e1f2cu);
  /* 116e1f2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1f2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1f31 call 0x116e2b10 */
  push32(0x116e1f36u); f_116e2b10();
  /* 116e1f36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e1f38 jle 0x116e1fc0 */
  if ((C.zf||C.sf!=C.of)) goto L_116e1fc0;
  /* 116e1f3e mov esi, esp */
  ESI = (ESP);
  /* 116e1f40 push 0x1170a0c4 */
  push32((uint32_t)(0x1170a0c4u));
  /* 116e1f45 call dword ptr [0x1171244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171244c))), 0x116e1f4bu);
  /* 116e1f4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1f4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1f50 call 0x116e2b10 */
  push32(0x116e1f55u); f_116e2b10();
  /* 116e1f55 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e1f5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e1f5c je 0x116e1faa */
  if (C.zf) goto L_116e1faa;
  /* 116e1f5e mov esi, esp */
  ESI = (ESP);
  /* 116e1f60 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1f62 push 0x1170f3e8 */
  push32((uint32_t)(0x1170f3e8u));
  /* 116e1f67 call dword ptr [0x11712484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712484))), 0x116e1f6du);
  /* 116e1f6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1f70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1f72 call 0x116e2b10 */
  push32(0x116e1f77u); f_116e2b10();
  /* 116e1f77 mov esi, esp */
  ESI = (ESP);
  /* 116e1f79 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1f7b push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1f7d push 0x1170f508 */
  push32((uint32_t)(0x1170f508u));
  /* 116e1f82 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e1f84 call dword ptr [0x11712450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712450))), 0x116e1f8au);
  /* 116e1f8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1f8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1f8f call 0x116e2b10 */
  push32(0x116e1f94u); f_116e2b10();
  /* 116e1f94 mov esi, esp */
  ESI = (ESP);
  /* 116e1f96 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1f98 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e1f9a call dword ptr [0x117124a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124a0))), 0x116e1fa0u);
  /* 116e1fa0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1fa3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1fa5 call 0x116e2b10 */
  push32(0x116e1faau); f_116e2b10();
L_116e1faa:;
  /* 116e1faa mov esi, esp */
  ESI = (ESP);
  /* 116e1fac push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1fae push 1 */
  push32((uint32_t)(0x1u));
  /* 116e1fb0 call dword ptr [0x117124a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124a0))), 0x116e1fb6u);
  /* 116e1fb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1fb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1fbb call 0x116e2b10 */
  push32(0x116e1fc0u); f_116e2b10();
L_116e1fc0:;
  /* 116e1fc0 mov esi, esp */
  ESI = (ESP);
  /* 116e1fc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e1fc4 call dword ptr [0x11712498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712498))), 0x116e1fcau);
  /* 116e1fca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1fcd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1fcf call 0x116e2b10 */
  push32(0x116e1fd4u); f_116e2b10();
  /* 116e1fd4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e1fd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e1fdb jne 0x116e202d */
  if (!C.zf) goto L_116e202d;
  /* 116e1fdd mov esi, esp */
  ESI = (ESP);
  /* 116e1fdf push 4 */
  push32((uint32_t)(0x4u));
  /* 116e1fe1 call dword ptr [0x11712498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712498))), 0x116e1fe7u);
  /* 116e1fe7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e1fea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e1fec call 0x116e2b10 */
  push32(0x116e1ff1u); f_116e2b10();
  /* 116e1ff1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e1ff6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e1ff8 je 0x116e202d */
  if (C.zf) goto L_116e202d;
  /* 116e1ffa mov esi, esp */
  ESI = (ESP);
  /* 116e1ffc push 0 */
  push32((uint32_t)(0x0u));
  /* 116e1ffe push 0x1170f500 */
  push32((uint32_t)(0x1170f500u));
  /* 116e2003 call dword ptr [0x11712490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712490))), 0x116e2009u);
  /* 116e2009 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e200c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e200e call 0x116e2b10 */
  push32(0x116e2013u); f_116e2b10();
  /* 116e2013 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e2015 jne 0x116e202d */
  if (!C.zf) goto L_116e202d;
  /* 116e2017 mov esi, esp */
  ESI = (ESP);
  /* 116e2019 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e201b push 1 */
  push32((uint32_t)(0x1u));
  /* 116e201d call dword ptr [0x117124a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124a0))), 0x116e2023u);
  /* 116e2023 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2026 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2028 call 0x116e2b10 */
  push32(0x116e202du); f_116e2b10();
L_116e202d:;
  /* 116e202d mov esi, esp */
  ESI = (ESP);
  /* 116e202f push 4 */
  push32((uint32_t)(0x4u));
  /* 116e2031 call dword ptr [0x11712498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712498))), 0x116e2037u);
  /* 116e2037 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e203a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e203c call 0x116e2b10 */
  push32(0x116e2041u); f_116e2b10();
  /* 116e2041 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e2046 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e2048 jne 0x116e2083 */
  if (!C.zf) goto L_116e2083;
  /* 116e204a mov esi, esp */
  ESI = (ESP);
  /* 116e204c push 0x1170f3e8 */
  push32((uint32_t)(0x1170f3e8u));
  /* 116e2051 call dword ptr [0x11712448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712448))), 0x116e2057u);
  /* 116e2057 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e205a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e205c call 0x116e2b10 */
  push32(0x116e2061u); f_116e2b10();
  /* 116e2061 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e2063 jle 0x116e2083 */
  if ((C.zf||C.sf!=C.of)) goto L_116e2083;
  /* 116e2065 mov esi, esp */
  ESI = (ESP);
  /* 116e2067 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e2069 push 0x1170f508 */
  push32((uint32_t)(0x1170f508u));
  /* 116e206e push 0x1170f3e8 */
  push32((uint32_t)(0x1170f3e8u));
  /* 116e2073 call dword ptr [0x11712458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712458))), 0x116e2079u);
  /* 116e2079 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e207c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e207e call 0x116e2b10 */
  push32(0x116e2083u); f_116e2b10();
L_116e2083:;
  /* 116e2083 mov esi, esp */
  ESI = (ESP);
  /* 116e2085 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e2087 call dword ptr [0x11712498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712498))), 0x116e208du);
  /* 116e208d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2090 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2092 call 0x116e2b10 */
  push32(0x116e2097u); f_116e2b10();
  /* 116e2097 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e209c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e209e je 0x116e238b */
  if (C.zf) goto L_116e238b;
  /* 116e20a4 mov esi, esp */
  ESI = (ESP);
  /* 116e20a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e20a8 push 0x1170f4f8 */
  push32((uint32_t)(0x1170f4f8u));
  /* 116e20ad call dword ptr [0x11712490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712490))), 0x116e20b3u);
  /* 116e20b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e20b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e20b8 call 0x116e2b10 */
  push32(0x116e20bdu); f_116e2b10();
  /* 116e20bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e20bf jle 0x116e238b */
  if ((C.zf||C.sf!=C.of)) goto L_116e238b;
  /* 116e20c5 mov esi, esp */
  ESI = (ESP);
  /* 116e20c7 push 0x1170a0bc */
  push32((uint32_t)(0x1170a0bcu));
  /* 116e20cc call dword ptr [0x1171244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171244c))), 0x116e20d2u);
  /* 116e20d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e20d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e20d7 call 0x116e2b10 */
  push32(0x116e20dcu); f_116e2b10();
  /* 116e20dc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e20e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e20e3 je 0x116e2375 */
  if (C.zf) goto L_116e2375;
  /* 116e20e9 mov esi, esp */
  ESI = (ESP);
  /* 116e20eb push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 116e20f0 push 0x1170f4a8 */
  push32((uint32_t)(0x1170f4a8u));
  /* 116e20f5 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e20f7 push 0x1170f5a8 */
  push32((uint32_t)(0x1170f5a8u));
  /* 116e20fc push 0x1170f4a0 */
  push32((uint32_t)(0x1170f4a0u));
  /* 116e2101 push 0x1170f5a0 */
  push32((uint32_t)(0x1170f5a0u));
  /* 116e2106 call dword ptr [0x1171245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171245c))), 0x116e210cu);
  /* 116e210c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e210f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2111 call 0x116e2b10 */
  push32(0x116e2116u); f_116e2b10();
  /* 116e2116 mov esi, esp */
  ESI = (ESP);
  /* 116e2118 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e211a push 0x1170f5a0 */
  push32((uint32_t)(0x1170f5a0u));
  /* 116e211f call dword ptr [0x11712484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712484))), 0x116e2125u);
  /* 116e2125 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2128 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e212a call 0x116e2b10 */
  push32(0x116e212fu); f_116e2b10();
  /* 116e212f mov esi, esp */
  ESI = (ESP);
  /* 116e2131 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e2133 push 0x1170f3e0 */
  push32((uint32_t)(0x1170f3e0u));
  /* 116e2138 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e213a call dword ptr [0x1171248c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171248c))), 0x116e2140u);
  /* 116e2140 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2143 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2145 call 0x116e2b10 */
  push32(0x116e214au); f_116e2b10();
  /* 116e214a mov esi, esp */
  ESI = (ESP);
  /* 116e214c push 0 */
  push32((uint32_t)(0x0u));
  /* 116e214e push 0 */
  push32((uint32_t)(0x0u));
  /* 116e2150 push 0x1170f4d0 */
  push32((uint32_t)(0x1170f4d0u));
  /* 116e2155 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e2157 call dword ptr [0x11712450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712450))), 0x116e215du);
  /* 116e215d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2160 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2162 call 0x116e2b10 */
  push32(0x116e2167u); f_116e2b10();
  /* 116e2167 mov esi, esp */
  ESI = (ESP);
  /* 116e2169 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 116e216e push 0x1170f4b0 */
  push32((uint32_t)(0x1170f4b0u));
  /* 116e2173 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e2175 push 0x1170f5a8 */
  push32((uint32_t)(0x1170f5a8u));
  /* 116e217a push 0x1170f4a0 */
  push32((uint32_t)(0x1170f4a0u));
  /* 116e217f push 0x1170f5a0 */
  push32((uint32_t)(0x1170f5a0u));
  /* 116e2184 call dword ptr [0x1171245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171245c))), 0x116e218au);
  /* 116e218a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e218d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e218f call 0x116e2b10 */
  push32(0x116e2194u); f_116e2b10();
  /* 116e2194 mov esi, esp */
  ESI = (ESP);
  /* 116e2196 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e2198 push 0x1170f5a0 */
  push32((uint32_t)(0x1170f5a0u));
  /* 116e219d call dword ptr [0x11712484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712484))), 0x116e21a3u);
  /* 116e21a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e21a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e21a8 call 0x116e2b10 */
  push32(0x116e21adu); f_116e2b10();
  /* 116e21ad mov esi, esp */
  ESI = (ESP);
  /* 116e21af push 1 */
  push32((uint32_t)(0x1u));
  /* 116e21b1 push 0x1170f3e0 */
  push32((uint32_t)(0x1170f3e0u));
  /* 116e21b6 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e21b8 call dword ptr [0x1171248c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171248c))), 0x116e21beu);
  /* 116e21be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e21c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e21c3 call 0x116e2b10 */
  push32(0x116e21c8u); f_116e2b10();
  /* 116e21c8 mov esi, esp */
  ESI = (ESP);
  /* 116e21ca push 0 */
  push32((uint32_t)(0x0u));
  /* 116e21cc push 0 */
  push32((uint32_t)(0x0u));
  /* 116e21ce push 0x1170f4d8 */
  push32((uint32_t)(0x1170f4d8u));
  /* 116e21d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e21d5 call dword ptr [0x11712450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712450))), 0x116e21dbu);
  /* 116e21db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e21de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e21e0 call 0x116e2b10 */
  push32(0x116e21e5u); f_116e2b10();
  /* 116e21e5 mov esi, esp */
  ESI = (ESP);
  /* 116e21e7 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 116e21ec push 0x1170f4b8 */
  push32((uint32_t)(0x1170f4b8u));
  /* 116e21f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e21f3 push 0x1170f5a8 */
  push32((uint32_t)(0x1170f5a8u));
  /* 116e21f8 push 0x1170f4a0 */
  push32((uint32_t)(0x1170f4a0u));
  /* 116e21fd push 0x1170f5a0 */
  push32((uint32_t)(0x1170f5a0u));
  /* 116e2202 call dword ptr [0x1171245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171245c))), 0x116e2208u);
  /* 116e2208 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e220b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e220d call 0x116e2b10 */
  push32(0x116e2212u); f_116e2b10();
  /* 116e2212 mov esi, esp */
  ESI = (ESP);
  /* 116e2214 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e2216 push 0x1170f5a0 */
  push32((uint32_t)(0x1170f5a0u));
  /* 116e221b call dword ptr [0x11712484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712484))), 0x116e2221u);
  /* 116e2221 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2224 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2226 call 0x116e2b10 */
  push32(0x116e222bu); f_116e2b10();
  /* 116e222b mov esi, esp */
  ESI = (ESP);
  /* 116e222d push 1 */
  push32((uint32_t)(0x1u));
  /* 116e222f push 0x1170f3e0 */
  push32((uint32_t)(0x1170f3e0u));
  /* 116e2234 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e2236 call dword ptr [0x1171248c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171248c))), 0x116e223cu);
  /* 116e223c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e223f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2241 call 0x116e2b10 */
  push32(0x116e2246u); f_116e2b10();
  /* 116e2246 mov esi, esp */
  ESI = (ESP);
  /* 116e2248 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e224a push 0 */
  push32((uint32_t)(0x0u));
  /* 116e224c push 0x1170f4e0 */
  push32((uint32_t)(0x1170f4e0u));
  /* 116e2251 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e2253 call dword ptr [0x11712450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712450))), 0x116e2259u);
  /* 116e2259 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e225c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e225e call 0x116e2b10 */
  push32(0x116e2263u); f_116e2b10();
  /* 116e2263 mov esi, esp */
  ESI = (ESP);
  /* 116e2265 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 116e226a push 0x1170f4c0 */
  push32((uint32_t)(0x1170f4c0u));
  /* 116e226f push 4 */
  push32((uint32_t)(0x4u));
  /* 116e2271 push 0x1170f5a8 */
  push32((uint32_t)(0x1170f5a8u));
  /* 116e2276 push 0x1170f4a0 */
  push32((uint32_t)(0x1170f4a0u));
  /* 116e227b push 0x1170f5a0 */
  push32((uint32_t)(0x1170f5a0u));
  /* 116e2280 call dword ptr [0x1171245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171245c))), 0x116e2286u);
  /* 116e2286 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2289 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e228b call 0x116e2b10 */
  push32(0x116e2290u); f_116e2b10();
  /* 116e2290 mov esi, esp */
  ESI = (ESP);
  /* 116e2292 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e2294 push 0x1170f5a0 */
  push32((uint32_t)(0x1170f5a0u));
  /* 116e2299 call dword ptr [0x11712484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712484))), 0x116e229fu);
  /* 116e229f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e22a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e22a4 call 0x116e2b10 */
  push32(0x116e22a9u); f_116e2b10();
  /* 116e22a9 mov esi, esp */
  ESI = (ESP);
  /* 116e22ab push 1 */
  push32((uint32_t)(0x1u));
  /* 116e22ad push 0x1170f3e0 */
  push32((uint32_t)(0x1170f3e0u));
  /* 116e22b2 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e22b4 call dword ptr [0x1171248c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171248c))), 0x116e22bau);
  /* 116e22ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e22bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e22bf call 0x116e2b10 */
  push32(0x116e22c4u); f_116e2b10();
  /* 116e22c4 mov esi, esp */
  ESI = (ESP);
  /* 116e22c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e22c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e22ca push 0x1170f4e8 */
  push32((uint32_t)(0x1170f4e8u));
  /* 116e22cf push 4 */
  push32((uint32_t)(0x4u));
  /* 116e22d1 call dword ptr [0x11712450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712450))), 0x116e22d7u);
  /* 116e22d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e22da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e22dc call 0x116e2b10 */
  push32(0x116e22e1u); f_116e2b10();
  /* 116e22e1 mov esi, esp */
  ESI = (ESP);
  /* 116e22e3 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 116e22e8 push 0x1170f4c8 */
  push32((uint32_t)(0x1170f4c8u));
  /* 116e22ed push 4 */
  push32((uint32_t)(0x4u));
  /* 116e22ef push 0x1170f5a8 */
  push32((uint32_t)(0x1170f5a8u));
  /* 116e22f4 push 0x1170f4a0 */
  push32((uint32_t)(0x1170f4a0u));
  /* 116e22f9 push 0x1170f5a0 */
  push32((uint32_t)(0x1170f5a0u));
  /* 116e22fe call dword ptr [0x1171245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171245c))), 0x116e2304u);
  /* 116e2304 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2307 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2309 call 0x116e2b10 */
  push32(0x116e230eu); f_116e2b10();
  /* 116e230e mov esi, esp */
  ESI = (ESP);
  /* 116e2310 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e2312 push 0x1170f5a0 */
  push32((uint32_t)(0x1170f5a0u));
  /* 116e2317 call dword ptr [0x11712484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712484))), 0x116e231du);
  /* 116e231d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2320 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2322 call 0x116e2b10 */
  push32(0x116e2327u); f_116e2b10();
  /* 116e2327 mov esi, esp */
  ESI = (ESP);
  /* 116e2329 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e232b push 0x1170f3e0 */
  push32((uint32_t)(0x1170f3e0u));
  /* 116e2330 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e2332 call dword ptr [0x1171248c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171248c))), 0x116e2338u);
  /* 116e2338 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e233b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e233d call 0x116e2b10 */
  push32(0x116e2342u); f_116e2b10();
  /* 116e2342 mov esi, esp */
  ESI = (ESP);
  /* 116e2344 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e2346 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e2348 push 0x1170f4f0 */
  push32((uint32_t)(0x1170f4f0u));
  /* 116e234d push 4 */
  push32((uint32_t)(0x4u));
  /* 116e234f call dword ptr [0x11712450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712450))), 0x116e2355u);
  /* 116e2355 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2358 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e235a call 0x116e2b10 */
  push32(0x116e235fu); f_116e2b10();
  /* 116e235f mov esi, esp */
  ESI = (ESP);
  /* 116e2361 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e2363 push 3 */
  push32((uint32_t)(0x3u));
  /* 116e2365 call dword ptr [0x117124a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124a0))), 0x116e236bu);
  /* 116e236b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e236e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2370 call 0x116e2b10 */
  push32(0x116e2375u); f_116e2b10();
L_116e2375:;
  /* 116e2375 mov esi, esp */
  ESI = (ESP);
  /* 116e2377 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e2379 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e237b call dword ptr [0x117124a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124a0))), 0x116e2381u);
  /* 116e2381 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2384 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2386 call 0x116e2b10 */
  push32(0x116e238bu); f_116e2b10();
L_116e238b:;
  /* 116e238b mov esi, esp */
  ESI = (ESP);
  /* 116e238d push 2 */
  push32((uint32_t)(0x2u));
  /* 116e238f call dword ptr [0x11712498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712498))), 0x116e2395u);
  /* 116e2395 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2398 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e239a call 0x116e2b10 */
  push32(0x116e239fu); f_116e2b10();
  /* 116e239f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e23a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e23a6 jne 0x116e23f8 */
  if (!C.zf) goto L_116e23f8;
  /* 116e23a8 mov esi, esp */
  ESI = (ESP);
  /* 116e23aa push 3 */
  push32((uint32_t)(0x3u));
  /* 116e23ac call dword ptr [0x11712498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712498))), 0x116e23b2u);
  /* 116e23b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e23b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e23b7 call 0x116e2b10 */
  push32(0x116e23bcu); f_116e2b10();
  /* 116e23bc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e23c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e23c3 je 0x116e23f8 */
  if (C.zf) goto L_116e23f8;
  /* 116e23c5 mov esi, esp */
  ESI = (ESP);
  /* 116e23c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e23c9 push 0x1170f4f8 */
  push32((uint32_t)(0x1170f4f8u));
  /* 116e23ce call dword ptr [0x11712490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712490))), 0x116e23d4u);
  /* 116e23d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e23d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e23d9 call 0x116e2b10 */
  push32(0x116e23deu); f_116e2b10();
  /* 116e23de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e23e0 jne 0x116e23f8 */
  if (!C.zf) goto L_116e23f8;
  /* 116e23e2 mov esi, esp */
  ESI = (ESP);
  /* 116e23e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e23e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e23e8 call dword ptr [0x117124a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124a0))), 0x116e23eeu);
  /* 116e23ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e23f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e23f3 call 0x116e2b10 */
  push32(0x116e23f8u); f_116e2b10();
L_116e23f8:;
  /* 116e23f8 mov esi, esp */
  ESI = (ESP);
  /* 116e23fa push 3 */
  push32((uint32_t)(0x3u));
  /* 116e23fc call dword ptr [0x11712498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712498))), 0x116e2402u);
  /* 116e2402 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2407 call 0x116e2b10 */
  push32(0x116e240cu); f_116e2b10();
  /* 116e240c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e2411 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e2413 jne 0x116e261e */
  if (!C.zf) goto L_116e261e;
  /* 116e2419 mov esi, esp */
  ESI = (ESP);
  /* 116e241b push 0x1170f3e0 */
  push32((uint32_t)(0x1170f3e0u));
  /* 116e2420 push 0x1170f4d0 */
  push32((uint32_t)(0x1170f4d0u));
  /* 116e2425 call dword ptr [0x11712454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712454))), 0x116e242bu);
  /* 116e242b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e242e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2430 call 0x116e2b10 */
  push32(0x116e2435u); f_116e2b10();
  /* 116e2435 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e2437 jle 0x116e2477 */
  if ((C.zf||C.sf!=C.of)) goto L_116e2477;
  /* 116e2439 mov esi, esp */
  ESI = (ESP);
  /* 116e243b push 0 */
  push32((uint32_t)(0x0u));
  /* 116e243d push 4 */
  push32((uint32_t)(0x4u));
  /* 116e243f push 0x1170f4d0 */
  push32((uint32_t)(0x1170f4d0u));
  /* 116e2444 call dword ptr [0x11712464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712464))), 0x116e244au);
  /* 116e244a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e244d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e244f call 0x116e2b10 */
  push32(0x116e2454u); f_116e2b10();
  /* 116e2454 mov esi, esp */
  ESI = (ESP);
  /* 116e2456 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e2458 call dword ptr [0x11712468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712468))), 0x116e245eu);
  /* 116e245e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2461 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2463 call 0x116e2b10 */
  push32(0x116e2468u); f_116e2b10();
  /* 116e2468 mov edx, dword ptr [0x1170f59c] */
  EDX = (r32((uint32_t)(0x1170f59c)));
  /* 116e246e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2471 mov dword ptr [0x1170f59c], edx */
  w32((uint32_t)(0x1170f59c), (EDX));
L_116e2477:;
  /* 116e2477 mov esi, esp */
  ESI = (ESP);
  /* 116e2479 push 0x1170f3e0 */
  push32((uint32_t)(0x1170f3e0u));
  /* 116e247e push 0x1170f4d8 */
  push32((uint32_t)(0x1170f4d8u));
  /* 116e2483 call dword ptr [0x11712454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712454))), 0x116e2489u);
  /* 116e2489 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e248c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e248e call 0x116e2b10 */
  push32(0x116e2493u); f_116e2b10();
  /* 116e2493 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e2495 jle 0x116e24d3 */
  if ((C.zf||C.sf!=C.of)) goto L_116e24d3;
  /* 116e2497 mov esi, esp */
  ESI = (ESP);
  /* 116e2499 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e249b push 4 */
  push32((uint32_t)(0x4u));
  /* 116e249d push 0x1170f4d8 */
  push32((uint32_t)(0x1170f4d8u));
  /* 116e24a2 call dword ptr [0x11712464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712464))), 0x116e24a8u);
  /* 116e24a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e24ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e24ad call 0x116e2b10 */
  push32(0x116e24b2u); f_116e2b10();
  /* 116e24b2 mov esi, esp */
  ESI = (ESP);
  /* 116e24b4 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e24b6 call dword ptr [0x11712468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712468))), 0x116e24bcu);
  /* 116e24bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e24bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e24c1 call 0x116e2b10 */
  push32(0x116e24c6u); f_116e2b10();
  /* 116e24c6 mov eax, dword ptr [0x1170f59c] */
  EAX = (r32((uint32_t)(0x1170f59c)));
  /* 116e24cb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e24ce mov dword ptr [0x1170f59c], eax */
  w32((uint32_t)(0x1170f59c), (EAX));
L_116e24d3:;
  /* 116e24d3 mov esi, esp */
  ESI = (ESP);
  /* 116e24d5 push 0x1170f3e0 */
  push32((uint32_t)(0x1170f3e0u));
  /* 116e24da push 0x1170f4e0 */
  push32((uint32_t)(0x1170f4e0u));
  /* 116e24df call dword ptr [0x11712454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712454))), 0x116e24e5u);
  /* 116e24e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e24e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e24ea call 0x116e2b10 */
  push32(0x116e24efu); f_116e2b10();
  /* 116e24ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e24f1 jle 0x116e2531 */
  if ((C.zf||C.sf!=C.of)) goto L_116e2531;
  /* 116e24f3 mov esi, esp */
  ESI = (ESP);
  /* 116e24f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e24f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e24f9 push 0x1170f4e0 */
  push32((uint32_t)(0x1170f4e0u));
  /* 116e24fe call dword ptr [0x11712464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712464))), 0x116e2504u);
  /* 116e2504 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2507 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2509 call 0x116e2b10 */
  push32(0x116e250eu); f_116e2b10();
  /* 116e250e mov esi, esp */
  ESI = (ESP);
  /* 116e2510 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e2512 call dword ptr [0x11712468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712468))), 0x116e2518u);
  /* 116e2518 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e251b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e251d call 0x116e2b10 */
  push32(0x116e2522u); f_116e2b10();
  /* 116e2522 mov ecx, dword ptr [0x1170f59c] */
  ECX = (r32((uint32_t)(0x1170f59c)));
  /* 116e2528 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e252b mov dword ptr [0x1170f59c], ecx */
  w32((uint32_t)(0x1170f59c), (ECX));
L_116e2531:;
  /* 116e2531 mov esi, esp */
  ESI = (ESP);
  /* 116e2533 push 0x1170f3e0 */
  push32((uint32_t)(0x1170f3e0u));
  /* 116e2538 push 0x1170f4e8 */
  push32((uint32_t)(0x1170f4e8u));
  /* 116e253d call dword ptr [0x11712454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712454))), 0x116e2543u);
  /* 116e2543 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2546 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2548 call 0x116e2b10 */
  push32(0x116e254du); f_116e2b10();
  /* 116e254d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e254f jle 0x116e258f */
  if ((C.zf||C.sf!=C.of)) goto L_116e258f;
  /* 116e2551 mov esi, esp */
  ESI = (ESP);
  /* 116e2553 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e2555 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e2557 push 0x1170f4e8 */
  push32((uint32_t)(0x1170f4e8u));
  /* 116e255c call dword ptr [0x11712464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712464))), 0x116e2562u);
  /* 116e2562 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2567 call 0x116e2b10 */
  push32(0x116e256cu); f_116e2b10();
  /* 116e256c mov esi, esp */
  ESI = (ESP);
  /* 116e256e push 4 */
  push32((uint32_t)(0x4u));
  /* 116e2570 call dword ptr [0x11712468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712468))), 0x116e2576u);
  /* 116e2576 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2579 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e257b call 0x116e2b10 */
  push32(0x116e2580u); f_116e2b10();
  /* 116e2580 mov edx, dword ptr [0x1170f59c] */
  EDX = (r32((uint32_t)(0x1170f59c)));
  /* 116e2586 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2589 mov dword ptr [0x1170f59c], edx */
  w32((uint32_t)(0x1170f59c), (EDX));
L_116e258f:;
  /* 116e258f mov esi, esp */
  ESI = (ESP);
  /* 116e2591 push 0x1170f3e0 */
  push32((uint32_t)(0x1170f3e0u));
  /* 116e2596 push 0x1170f4f0 */
  push32((uint32_t)(0x1170f4f0u));
  /* 116e259b call dword ptr [0x11712454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712454))), 0x116e25a1u);
  /* 116e25a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e25a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e25a6 call 0x116e2b10 */
  push32(0x116e25abu); f_116e2b10();
  /* 116e25ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e25ad jle 0x116e25eb */
  if ((C.zf||C.sf!=C.of)) goto L_116e25eb;
  /* 116e25af mov esi, esp */
  ESI = (ESP);
  /* 116e25b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e25b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e25b5 push 0x1170f4f0 */
  push32((uint32_t)(0x1170f4f0u));
  /* 116e25ba call dword ptr [0x11712464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712464))), 0x116e25c0u);
  /* 116e25c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e25c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e25c5 call 0x116e2b10 */
  push32(0x116e25cau); f_116e2b10();
  /* 116e25ca mov esi, esp */
  ESI = (ESP);
  /* 116e25cc push 4 */
  push32((uint32_t)(0x4u));
  /* 116e25ce call dword ptr [0x11712468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712468))), 0x116e25d4u);
  /* 116e25d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e25d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e25d9 call 0x116e2b10 */
  push32(0x116e25deu); f_116e2b10();
  /* 116e25de mov eax, dword ptr [0x1170f59c] */
  EAX = (r32((uint32_t)(0x1170f59c)));
  /* 116e25e3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e25e6 mov dword ptr [0x1170f59c], eax */
  w32((uint32_t)(0x1170f59c), (EAX));
L_116e25eb:;
  /* 116e25eb mov esi, esp */
  ESI = (ESP);
  /* 116e25ed push 0x1170f3e0 */
  push32((uint32_t)(0x1170f3e0u));
  /* 116e25f2 call dword ptr [0x11712448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712448))), 0x116e25f8u);
  /* 116e25f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e25fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e25fd call 0x116e2b10 */
  push32(0x116e2602u); f_116e2b10();
  /* 116e2602 mov ecx, dword ptr [0x1170f59c] */
  ECX = (r32((uint32_t)(0x1170f59c)));
  /* 116e2608 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e260a cmp ecx, 5 */
  { uint32_t _a=(ECX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e260d jge 0x116e261e */
  if ((C.sf==C.of)) goto L_116e261e;
  /* 116e260f mov esi, esp */
  ESI = (ESP);
  /* 116e2611 call dword ptr [0x11712460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712460))), 0x116e2617u);
  /* 116e2617 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2619 call 0x116e2b10 */
  push32(0x116e261eu); f_116e2b10();
L_116e261e:;
  /* 116e261e mov esi, esp */
  ESI = (ESP);
  /* 116e2620 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 116e2622 call dword ptr [0x11712498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712498))), 0x116e2628u);
  /* 116e2628 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e262b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e262d call 0x116e2b10 */
  push32(0x116e2632u); f_116e2b10();
  /* 116e2632 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e2637 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e2639 je 0x116e26e9 */
  if (C.zf) goto L_116e26e9;
  /* 116e263f mov esi, esp */
  ESI = (ESP);
  /* 116e2641 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e2643 call dword ptr [0x11712470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712470))), 0x116e2649u);
  /* 116e2649 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e264c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e264e call 0x116e2b10 */
  push32(0x116e2653u); f_116e2b10();
  /* 116e2653 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e2658 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e265a je 0x116e2681 */
  if (C.zf) goto L_116e2681;
  /* 116e265c mov esi, esp */
  ESI = (ESP);
  /* 116e265e push 0 */
  push32((uint32_t)(0x0u));
  /* 116e2660 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 116e2662 call dword ptr [0x117124a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124a0))), 0x116e2668u);
  /* 116e2668 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e266b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e266d call 0x116e2b10 */
  push32(0x116e2672u); f_116e2b10();
  /* 116e2672 mov esi, esp */
  ESI = (ESP);
  /* 116e2674 call dword ptr [0x11712460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712460))), 0x116e267au);
  /* 116e267a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e267c call 0x116e2b10 */
  push32(0x116e2681u); f_116e2b10();
L_116e2681:;
  /* 116e2681 mov esi, esp */
  ESI = (ESP);
  /* 116e2683 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e2685 call dword ptr [0x11712470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712470))), 0x116e268bu);
  /* 116e268b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e268e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2690 call 0x116e2b10 */
  push32(0x116e2695u); f_116e2b10();
  /* 116e2695 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e269a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e269c je 0x116e26bb */
  if (C.zf) goto L_116e26bb;
  /* 116e269e mov esi, esp */
  ESI = (ESP);
  /* 116e26a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e26a2 call dword ptr [0x11712470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712470))), 0x116e26a8u);
  /* 116e26a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e26ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e26ad call 0x116e2b10 */
  push32(0x116e26b2u); f_116e2b10();
  /* 116e26b2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e26b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e26b9 jne 0x116e26c4 */
  if (!C.zf) goto L_116e26c4;
L_116e26bb:;
  /* 116e26bb cmp dword ptr [0x1170f59c], 5 */
  { uint32_t _a=(r32((uint32_t)(0x1170f59c))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e26c2 jne 0x116e26e9 */
  if (!C.zf) goto L_116e26e9;
L_116e26c4:;
  /* 116e26c4 mov esi, esp */
  ESI = (ESP);
  /* 116e26c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e26c8 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 116e26ca call dword ptr [0x117124a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117124a0))), 0x116e26d0u);
  /* 116e26d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e26d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e26d5 call 0x116e2b10 */
  push32(0x116e26dau); f_116e2b10();
  /* 116e26da mov esi, esp */
  ESI = (ESP);
  /* 116e26dc call dword ptr [0x11712474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712474))), 0x116e26e2u);
  /* 116e26e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e26e4 call 0x116e2b10 */
  push32(0x116e26e9u); f_116e2b10();
L_116e26e9:;
  /* 116e26e9 pop edi */
  EDI = (pop32());
  /* 116e26ea pop esi */
  ESI = (pop32());
  /* 116e26eb pop ebx */
  EBX = (pop32());
  /* 116e26ec add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e26ef cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e26f1 call 0x116e2b10 */
  push32(0x116e26f6u); f_116e2b10();
  /* 116e26f6 mov esp, ebp */
  ESP = (EBP);
  /* 116e26f8 pop ebp */
  EBP = (pop32());
  /* 116e26f9 ret  */
  ESPCHK(0x116e1a40u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x116e2b10 (56 bytes, 28 insns) */
void f_116e2b10(void) {
  FTRACE(0x116e2b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e2b10 jne 0x116e2b13 */
  if (!C.zf) goto L_116e2b13;
  /* 116e2b12 ret  */
  ESPCHK(0x116e2b10u, _esp0);
  ESP += 4; return;
L_116e2b13:;
  /* 116e2b13 push ebp */
  push32((uint32_t)(EBP));
  /* 116e2b14 mov ebp, esp */
  EBP = (ESP);
  /* 116e2b16 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e2b19 push eax */
  push32((uint32_t)(EAX));
  /* 116e2b1a push edx */
  push32((uint32_t)(EDX));
  /* 116e2b1b push ebx */
  push32((uint32_t)(EBX));
  /* 116e2b1c push esi */
  push32((uint32_t)(ESI));
  /* 116e2b1d push edi */
  push32((uint32_t)(EDI));
  /* 116e2b1e push 0x1170a14c */
  push32((uint32_t)(0x1170a14cu));
  /* 116e2b23 push 0x1170a148 */
  push32((uint32_t)(0x1170a148u));
  /* 116e2b28 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 116e2b2a push 0x1170a138 */
  push32((uint32_t)(0x1170a138u));
  /* 116e2b2f push 1 */
  push32((uint32_t)(0x1u));
  /* 116e2b31 call 0x116e2ee0 */
  push32(0x116e2b36u); f_116e2ee0();
  /* 116e2b36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2b39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2b3c jne 0x116e2b3f */
  if (!C.zf) goto L_116e2b3f;
  /* 116e2b3e int3  */
  x86_unimpl("int3 @ 0x116e2b3e");
L_116e2b3f:;
  /* 116e2b3f pop edi */
  EDI = (pop32());
  /* 116e2b40 pop esi */
  ESI = (pop32());
  /* 116e2b41 pop ebx */
  EBX = (pop32());
  /* 116e2b42 pop edx */
  EDX = (pop32());
  /* 116e2b43 pop eax */
  EAX = (pop32());
  /* 116e2b44 mov esp, ebp */
  ESP = (EBP);
  /* 116e2b46 pop ebp */
  EBP = (pop32());
  /* 116e2b47 ret  */
  ESPCHK(0x116e2b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b50 @ 0x116e2b50 (313 bytes, 78 insns) */
void f_116e2b50(void) {
  FTRACE(0x116e2b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e2b50 push ebp */
  push32((uint32_t)(EBP));
  /* 116e2b51 mov ebp, esp */
  EBP = (ESP);
  /* 116e2b53 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2b57 jne 0x116e2c17 */
  if (!C.zf) goto L_116e2c17;
  /* 116e2b5d call dword ptr [0x11712334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712334))), 0x116e2b63u);
  /* 116e2b63 mov dword ptr [0x1170f630], eax */
  w32((uint32_t)(0x1170f630), (EAX));
  /* 116e2b68 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e2b6a call 0x116e6610 */
  push32(0x116e2b6fu); f_116e6610();
  /* 116e2b6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2b72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e2b74 jne 0x116e2b7d */
  if (!C.zf) goto L_116e2b7d;
  /* 116e2b76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e2b78 jmp 0x116e2c85 */
  goto L_116e2c85;
L_116e2b7d:;
  /* 116e2b7d mov eax, dword ptr [0x1170f630] */
  EAX = (r32((uint32_t)(0x1170f630)));
  /* 116e2b82 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 116e2b85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e2b8a mov dword ptr [0x1170f63c], eax */
  w32((uint32_t)(0x1170f63c), (EAX));
  /* 116e2b8f mov ecx, dword ptr [0x1170f630] */
  ECX = (r32((uint32_t)(0x1170f630)));
  /* 116e2b95 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116e2b9b mov dword ptr [0x1170f638], ecx */
  w32((uint32_t)(0x1170f638), (ECX));
  /* 116e2ba1 mov edx, dword ptr [0x1170f638] */
  EDX = (r32((uint32_t)(0x1170f638)));
  /* 116e2ba7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 116e2baa add edx, dword ptr [0x1170f63c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1170f63c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2bb0 mov dword ptr [0x1170f634], edx */
  w32((uint32_t)(0x1170f634), (EDX));
  /* 116e2bb6 mov eax, dword ptr [0x1170f630] */
  EAX = (r32((uint32_t)(0x1170f630)));
  /* 116e2bbb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 116e2bbe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e2bc3 mov dword ptr [0x1170f630], eax */
  w32((uint32_t)(0x1170f630), (EAX));
  /* 116e2bc8 call 0x116e3780 */
  push32(0x116e2bcdu); f_116e3780();
  /* 116e2bcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e2bcf jne 0x116e2bdd */
  if (!C.zf) goto L_116e2bdd;
  /* 116e2bd1 call 0x116e6660 */
  push32(0x116e2bd6u); f_116e6660();
  /* 116e2bd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e2bd8 jmp 0x116e2c85 */
  goto L_116e2c85;
L_116e2bdd:;
  /* 116e2bdd call dword ptr [0x11712330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712330))), 0x116e2be3u);
  /* 116e2be3 mov dword ptr [0x1171116c], eax */
  w32((uint32_t)(0x1171116c), (EAX));
  /* 116e2be8 call 0x116e63f0 */
  push32(0x116e2bedu); f_116e63f0();
  /* 116e2bed mov dword ptr [0x1170f618], eax */
  w32((uint32_t)(0x1170f618), (EAX));
  /* 116e2bf2 call 0x116e3a30 */
  push32(0x116e2bf7u); f_116e3a30();
  /* 116e2bf7 call 0x116e5ee0 */
  push32(0x116e2bfcu); f_116e5ee0();
  /* 116e2bfc call 0x116e5d90 */
  push32(0x116e2c01u); f_116e5d90();
  /* 116e2c01 call 0x116e3580 */
  push32(0x116e2c06u); f_116e3580();
  /* 116e2c06 mov ecx, dword ptr [0x1170f614] */
  ECX = (r32((uint32_t)(0x1170f614)));
  /* 116e2c0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2c0f mov dword ptr [0x1170f614], ecx */
  w32((uint32_t)(0x1170f614), (ECX));
  /* 116e2c15 jmp 0x116e2c80 */
  goto L_116e2c80;
L_116e2c17:;
  /* 116e2c17 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2c1b jne 0x116e2c70 */
  if (!C.zf) goto L_116e2c70;
  /* 116e2c1d cmp dword ptr [0x1170f614], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f614))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2c24 jle 0x116e2c6a */
  if ((C.zf||C.sf!=C.of)) goto L_116e2c6a;
  /* 116e2c26 mov edx, dword ptr [0x1170f614] */
  EDX = (r32((uint32_t)(0x1170f614)));
  /* 116e2c2c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e2c2f mov dword ptr [0x1170f614], edx */
  w32((uint32_t)(0x1170f614), (EDX));
  /* 116e2c35 cmp dword ptr [0x1170f668], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f668))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2c3c jne 0x116e2c43 */
  if (!C.zf) goto L_116e2c43;
  /* 116e2c3e call 0x116e3600 */
  push32(0x116e2c43u); f_116e3600();
L_116e2c43:;
  /* 116e2c43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116e2c45 call 0x116e5330 */
  push32(0x116e2c4au); f_116e5330();
  /* 116e2c4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2c4d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 116e2c50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e2c52 je 0x116e2c59 */
  if (C.zf) goto L_116e2c59;
  /* 116e2c54 call 0x116e5c40 */
  push32(0x116e2c59u); f_116e5c40();
L_116e2c59:;
  /* 116e2c59 call 0x116e3d60 */
  push32(0x116e2c5eu); f_116e3d60();
  /* 116e2c5e call 0x116e3810 */
  push32(0x116e2c63u); f_116e3810();
  /* 116e2c63 call 0x116e6660 */
  push32(0x116e2c68u); f_116e6660();
  /* 116e2c68 jmp 0x116e2c6e */
  goto L_116e2c6e;
L_116e2c6a:;
  /* 116e2c6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e2c6c jmp 0x116e2c85 */
  goto L_116e2c85;
L_116e2c6e:;
  /* 116e2c6e jmp 0x116e2c80 */
  goto L_116e2c80;
L_116e2c70:;
  /* 116e2c70 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2c74 jne 0x116e2c80 */
  if (!C.zf) goto L_116e2c80;
  /* 116e2c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e2c78 call 0x116e3900 */
  push32(0x116e2c7du); f_116e3900();
  /* 116e2c7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e2c80:;
  /* 116e2c80 mov eax, 1 */
  EAX = (0x1u);
L_116e2c85:;
  /* 116e2c85 pop ebp */
  EBP = (pop32());
  /* 116e2c86 ret 0xc */
  ESPCHK(0x116e2b50u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x116e2c90 (243 bytes, 86 insns) */
void f_116e2c90(void) {
  FTRACE(0x116e2c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e2c90 push ebp */
  push32((uint32_t)(EBP));
  /* 116e2c91 mov ebp, esp */
  EBP = (ESP);
  /* 116e2c93 push ecx */
  push32((uint32_t)(ECX));
  /* 116e2c94 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116e2c9b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2c9f jne 0x116e2cb1 */
  if (!C.zf) goto L_116e2cb1;
  /* 116e2ca1 cmp dword ptr [0x1170f614], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f614))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2ca8 jne 0x116e2cb1 */
  if (!C.zf) goto L_116e2cb1;
  /* 116e2caa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e2cac jmp 0x116e2d7d */
  goto L_116e2d7d;
L_116e2cb1:;
  /* 116e2cb1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2cb5 je 0x116e2cbd */
  if (C.zf) goto L_116e2cbd;
  /* 116e2cb7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2cbb jne 0x116e2cff */
  if (!C.zf) goto L_116e2cff;
L_116e2cbd:;
  /* 116e2cbd cmp dword ptr [0x1171117c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1171117c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2cc4 je 0x116e2cdb */
  if (C.zf) goto L_116e2cdb;
  /* 116e2cc6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e2cc9 push eax */
  push32((uint32_t)(EAX));
  /* 116e2cca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e2ccd push ecx */
  push32((uint32_t)(ECX));
  /* 116e2cce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e2cd1 push edx */
  push32((uint32_t)(EDX));
  /* 116e2cd2 call dword ptr [0x1171117c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171117c))), 0x116e2cd8u);
  /* 116e2cd8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116e2cdb:;
  /* 116e2cdb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2cdf je 0x116e2cf5 */
  if (C.zf) goto L_116e2cf5;
  /* 116e2ce1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e2ce4 push eax */
  push32((uint32_t)(EAX));
  /* 116e2ce5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e2ce8 push ecx */
  push32((uint32_t)(ECX));
  /* 116e2ce9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e2cec push edx */
  push32((uint32_t)(EDX));
  /* 116e2ced call 0x116e2b50 */
  push32(0x116e2cf2u); f_116e2b50();
  /* 116e2cf2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116e2cf5:;
  /* 116e2cf5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2cf9 jne 0x116e2cff */
  if (!C.zf) goto L_116e2cff;
  /* 116e2cfb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e2cfd jmp 0x116e2d7d */
  goto L_116e2d7d;
L_116e2cff:;
  /* 116e2cff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e2d02 push eax */
  push32((uint32_t)(EAX));
  /* 116e2d03 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e2d06 push ecx */
  push32((uint32_t)(ECX));
  /* 116e2d07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e2d0a push edx */
  push32((uint32_t)(EDX));
  /* 116e2d0b call 0x116e100f */
  push32(0x116e2d10u); f_116e100f();
  /* 116e2d10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e2d13 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2d17 jne 0x116e2d2e */
  if (!C.zf) goto L_116e2d2e;
  /* 116e2d19 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2d1d jne 0x116e2d2e */
  if (!C.zf) goto L_116e2d2e;
  /* 116e2d1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e2d22 push eax */
  push32((uint32_t)(EAX));
  /* 116e2d23 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e2d25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e2d28 push ecx */
  push32((uint32_t)(ECX));
  /* 116e2d29 call 0x116e2b50 */
  push32(0x116e2d2eu); f_116e2b50();
L_116e2d2e:;
  /* 116e2d2e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2d32 je 0x116e2d3a */
  if (C.zf) goto L_116e2d3a;
  /* 116e2d34 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2d38 jne 0x116e2d7a */
  if (!C.zf) goto L_116e2d7a;
L_116e2d3a:;
  /* 116e2d3a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e2d3d push edx */
  push32((uint32_t)(EDX));
  /* 116e2d3e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e2d41 push eax */
  push32((uint32_t)(EAX));
  /* 116e2d42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e2d45 push ecx */
  push32((uint32_t)(ECX));
  /* 116e2d46 call 0x116e2b50 */
  push32(0x116e2d4bu); f_116e2b50();
  /* 116e2d4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e2d4d jne 0x116e2d56 */
  if (!C.zf) goto L_116e2d56;
  /* 116e2d4f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116e2d56:;
  /* 116e2d56 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2d5a je 0x116e2d7a */
  if (C.zf) goto L_116e2d7a;
  /* 116e2d5c cmp dword ptr [0x1171117c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1171117c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2d63 je 0x116e2d7a */
  if (C.zf) goto L_116e2d7a;
  /* 116e2d65 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e2d68 push edx */
  push32((uint32_t)(EDX));
  /* 116e2d69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e2d6c push eax */
  push32((uint32_t)(EAX));
  /* 116e2d6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e2d70 push ecx */
  push32((uint32_t)(ECX));
  /* 116e2d71 call dword ptr [0x1171117c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171117c))), 0x116e2d77u);
  /* 116e2d77 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116e2d7a:;
  /* 116e2d7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116e2d7d:;
  /* 116e2d7d mov esp, ebp */
  ESP = (EBP);
  /* 116e2d7f pop ebp */
  EBP = (pop32());
  /* 116e2d80 ret 0xc */
  ESPCHK(0x116e2c90u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x116e2d90 (58 bytes, 18 insns) */
void f_116e2d90(void) {
  FTRACE(0x116e2d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e2d90 push ebp */
  push32((uint32_t)(EBP));
  /* 116e2d91 mov ebp, esp */
  EBP = (ESP);
  /* 116e2d93 cmp dword ptr [0x1170f620], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170f620))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2d9a je 0x116e2dae */
  if (C.zf) goto L_116e2dae;
  /* 116e2d9c cmp dword ptr [0x1170f620], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f620))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2da3 jne 0x116e2db3 */
  if (!C.zf) goto L_116e2db3;
  /* 116e2da5 cmp dword ptr [0x1170f624], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170f624))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2dac jne 0x116e2db3 */
  if (!C.zf) goto L_116e2db3;
L_116e2dae:;
  /* 116e2dae call 0x116e6700 */
  push32(0x116e2db3u); f_116e6700();
L_116e2db3:;
  /* 116e2db3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e2db6 push eax */
  push32((uint32_t)(EAX));
  /* 116e2db7 call 0x116e6750 */
  push32(0x116e2dbcu); f_116e6750();
  /* 116e2dbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2dbf push 0xff */
  push32((uint32_t)(0xffu));
  /* 116e2dc4 call dword ptr [0x1170da30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1170da30))), 0x116e2dcau);
  /* 116e2dca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2dcd pop ebp */
  EBP = (pop32());
  /* 116e2dce ret  */
  ESPCHK(0x116e2d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10002dd0 @ 0x116e2dd0 (11 bytes, 5 insns) */
void f_116e2dd0(void) {
  FTRACE(0x116e2dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e2dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e2dd1 mov ebp, esp */
  EBP = (ESP);
  /* 116e2dd3 call dword ptr [0x11712338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712338))), 0x116e2dd9u);
  /* 116e2dd9 pop ebp */
  EBP = (pop32());
  /* 116e2dda ret  */
  ESPCHK(0x116e2dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002de0 @ 0x116e2de0 (87 bytes, 30 insns) */
void f_116e2de0(void) {
  FTRACE(0x116e2de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e2de0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e2de1 mov ebp, esp */
  EBP = (ESP);
  /* 116e2de3 push ecx */
  push32((uint32_t)(ECX));
  /* 116e2de4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2de8 jl 0x116e2df0 */
  if ((C.sf!=C.of)) goto L_116e2df0;
  /* 116e2dea cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2dee jl 0x116e2df5 */
  if ((C.sf!=C.of)) goto L_116e2df5;
L_116e2df0:;
  /* 116e2df0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e2df3 jmp 0x116e2e33 */
  goto L_116e2e33;
L_116e2df5:;
  /* 116e2df5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2df9 jne 0x116e2e07 */
  if (!C.zf) goto L_116e2e07;
  /* 116e2dfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e2dfe mov eax, dword ptr [eax*4 + 0x1170da38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1170da38)));
  /* 116e2e05 jmp 0x116e2e33 */
  goto L_116e2e33;
L_116e2e07:;
  /* 116e2e07 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e2e0a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 116e2e0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e2e0f je 0x116e2e16 */
  if (C.zf) goto L_116e2e16;
  /* 116e2e11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e2e14 jmp 0x116e2e33 */
  goto L_116e2e33;
L_116e2e16:;
  /* 116e2e16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e2e19 mov eax, dword ptr [edx*4 + 0x1170da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1170da38)));
  /* 116e2e20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e2e23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e2e26 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e2e29 mov dword ptr [ecx*4 + 0x1170da38], edx */
  w32((uint32_t)(ECX*4 + 0x1170da38), (EDX));
  /* 116e2e30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116e2e33:;
  /* 116e2e33 mov esp, ebp */
  ESP = (EBP);
  /* 116e2e35 pop ebp */
  EBP = (pop32());
  /* 116e2e36 ret  */
  ESPCHK(0x116e2de0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x116e2e40 (126 bytes, 38 insns) */
void f_116e2e40(void) {
  FTRACE(0x116e2e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e2e40 push ebp */
  push32((uint32_t)(EBP));
  /* 116e2e41 mov ebp, esp */
  EBP = (ESP);
  /* 116e2e43 push ecx */
  push32((uint32_t)(ECX));
  /* 116e2e44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2e48 jl 0x116e2e50 */
  if ((C.sf!=C.of)) goto L_116e2e50;
  /* 116e2e4a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2e4e jl 0x116e2e57 */
  if ((C.sf!=C.of)) goto L_116e2e57;
L_116e2e50:;
  /* 116e2e50 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 116e2e55 jmp 0x116e2eba */
  goto L_116e2eba;
L_116e2e57:;
  /* 116e2e57 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2e5b jne 0x116e2e69 */
  if (!C.zf) goto L_116e2e69;
  /* 116e2e5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e2e60 mov eax, dword ptr [eax*4 + 0x1170da44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1170da44)));
  /* 116e2e67 jmp 0x116e2eba */
  goto L_116e2eba;
L_116e2e69:;
  /* 116e2e69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e2e6c mov edx, dword ptr [ecx*4 + 0x1170da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1170da44)));
  /* 116e2e73 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116e2e76 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2e7a jne 0x116e2e90 */
  if (!C.zf) goto L_116e2e90;
  /* 116e2e7c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 116e2e7e call dword ptr [0x1171233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171233c))), 0x116e2e84u);
  /* 116e2e84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e2e87 mov dword ptr [ecx*4 + 0x1170da44], eax */
  w32((uint32_t)(ECX*4 + 0x1170da44), (EAX));
  /* 116e2e8e jmp 0x116e2eb7 */
  goto L_116e2eb7;
L_116e2e90:;
  /* 116e2e90 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2e94 jne 0x116e2eaa */
  if (!C.zf) goto L_116e2eaa;
  /* 116e2e96 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 116e2e98 call dword ptr [0x1171233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171233c))), 0x116e2e9eu);
  /* 116e2e9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e2ea1 mov dword ptr [edx*4 + 0x1170da44], eax */
  w32((uint32_t)(EDX*4 + 0x1170da44), (EAX));
  /* 116e2ea8 jmp 0x116e2eb7 */
  goto L_116e2eb7;
L_116e2eaa:;
  /* 116e2eaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e2ead mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e2eb0 mov dword ptr [eax*4 + 0x1170da44], ecx */
  w32((uint32_t)(EAX*4 + 0x1170da44), (ECX));
L_116e2eb7:;
  /* 116e2eb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116e2eba:;
  /* 116e2eba mov esp, ebp */
  ESP = (EBP);
  /* 116e2ebc pop ebp */
  EBP = (pop32());
  /* 116e2ebd ret  */
  ESPCHK(0x116e2e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ec0 @ 0x116e2ec0 (28 bytes, 11 insns) */
void f_116e2ec0(void) {
  FTRACE(0x116e2ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e2ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e2ec1 mov ebp, esp */
  EBP = (ESP);
  /* 116e2ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 116e2ec4 mov eax, dword ptr [0x11711160] */
  EAX = (r32((uint32_t)(0x11711160)));
  /* 116e2ec9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e2ecc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e2ecf mov dword ptr [0x11711160], ecx */
  w32((uint32_t)(0x11711160), (ECX));
  /* 116e2ed5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e2ed8 mov esp, ebp */
  ESP = (EBP);
  /* 116e2eda pop ebp */
  EBP = (pop32());
  /* 116e2edb ret  */
  ESPCHK(0x116e2ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ee0 @ 0x116e2ee0 (912 bytes, 248 insns) */
void f_116e2ee0(void) {
  FTRACE(0x116e2ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e2ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e2ee1 mov ebp, esp */
  EBP = (ESP);
  /* 116e2ee3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 116e2ee8 call 0x116e6fc0 */
  push32(0x116e2eedu); f_116e6fc0();
  /* 116e2eed push edi */
  push32((uint32_t)(EDI));
  /* 116e2eee mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 116e2ef5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 116e2efa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e2efc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 116e2f02 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116e2f04 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 116e2f06 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 116e2f07 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 116e2f0e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 116e2f13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e2f15 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 116e2f1b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116e2f1d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 116e2f1f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 116e2f20 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 116e2f27 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 116e2f2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e2f2e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 116e2f34 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116e2f36 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 116e2f38 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 116e2f39 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 116e2f3c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 116e2f42 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2f46 jl 0x116e2f4e */
  if ((C.sf!=C.of)) goto L_116e2f4e;
  /* 116e2f48 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2f4c jl 0x116e2f56 */
  if ((C.sf!=C.of)) goto L_116e2f56;
L_116e2f4e:;
  /* 116e2f4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e2f51 jmp 0x116e326b */
  goto L_116e326b;
L_116e2f56:;
  /* 116e2f56 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2f5a jne 0x116e3000 */
  if (!C.zf) goto L_116e3000;
  /* 116e2f60 push 0x1170da34 */
  push32((uint32_t)(0x1170da34u));
  /* 116e2f65 call dword ptr [0x11712354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712354))), 0x116e2f6bu);
  /* 116e2f6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e2f6d jle 0x116e3000 */
  if ((C.zf||C.sf!=C.of)) goto L_116e3000;
  /* 116e2f73 cmp dword ptr [0x1170f628], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f628))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2f7a jne 0x116e2fbe */
  if (!C.zf) goto L_116e2fbe;
  /* 116e2f7c push 0x1170a2f4 */
  push32((uint32_t)(0x1170a2f4u));
  /* 116e2f81 call dword ptr [0x11712350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712350))), 0x116e2f87u);
  /* 116e2f87 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 116e2f8d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2f94 je 0x116e2fb6 */
  if (C.zf) goto L_116e2fb6;
  /* 116e2f96 push 0x1170a2e8 */
  push32((uint32_t)(0x1170a2e8u));
  /* 116e2f9b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 116e2fa1 push ecx */
  push32((uint32_t)(ECX));
  /* 116e2fa2 call dword ptr [0x1171234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171234c))), 0x116e2fa8u);
  /* 116e2fa8 mov dword ptr [0x1170f628], eax */
  w32((uint32_t)(0x1170f628), (EAX));
  /* 116e2fad cmp dword ptr [0x1170f628], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f628))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e2fb4 jne 0x116e2fbe */
  if (!C.zf) goto L_116e2fbe;
L_116e2fb6:;
  /* 116e2fb6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e2fb9 jmp 0x116e326b */
  goto L_116e326b;
L_116e2fbe:;
  /* 116e2fbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e2fc1 push edx */
  push32((uint32_t)(EDX));
  /* 116e2fc2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e2fc5 push eax */
  push32((uint32_t)(EAX));
  /* 116e2fc6 push 0x1170a2b4 */
  push32((uint32_t)(0x1170a2b4u));
  /* 116e2fcb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 116e2fd1 push ecx */
  push32((uint32_t)(ECX));
  /* 116e2fd2 call dword ptr [0x1170f628] */
  call_ind((uint32_t)(r32((uint32_t)(0x1170f628))), 0x116e2fd8u);
  /* 116e2fd8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e2fdb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 116e2fe1 push edx */
  push32((uint32_t)(EDX));
  /* 116e2fe2 call dword ptr [0x11712348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712348))), 0x116e2fe8u);
  /* 116e2fe8 push 0x1170da34 */
  push32((uint32_t)(0x1170da34u));
  /* 116e2fed call dword ptr [0x11712344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712344))), 0x116e2ff3u);
  /* 116e2ff3 call 0x116e2dd0 */
  push32(0x116e2ff8u); f_116e2dd0();
  /* 116e2ff8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e2ffb jmp 0x116e326b */
  goto L_116e326b;
L_116e3000:;
  /* 116e3000 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3004 je 0x116e303d */
  if (C.zf) goto L_116e303d;
  /* 116e3006 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 116e300c push eax */
  push32((uint32_t)(EAX));
  /* 116e300d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e3010 push ecx */
  push32((uint32_t)(ECX));
  /* 116e3011 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 116e3016 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 116e301c push edx */
  push32((uint32_t)(EDX));
  /* 116e301d call 0x116e6ec0 */
  push32(0x116e3022u); f_116e6ec0();
  /* 116e3022 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3025 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e3027 jge 0x116e303d */
  if ((C.sf==C.of)) goto L_116e303d;
  /* 116e3029 push 0x1170a288 */
  push32((uint32_t)(0x1170a288u));
  /* 116e302e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 116e3034 push eax */
  push32((uint32_t)(EAX));
  /* 116e3035 call 0x116e6dd0 */
  push32(0x116e303au); f_116e6dd0();
  /* 116e303a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e303d:;
  /* 116e303d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3041 jne 0x116e3075 */
  if (!C.zf) goto L_116e3075;
  /* 116e3043 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3047 je 0x116e3055 */
  if (C.zf) goto L_116e3055;
  /* 116e3049 mov dword ptr [ebp - 0x3028], 0x1170a274 */
  w32((uint32_t)(EBP + -0x3028), (0x1170a274u));
  /* 116e3053 jmp 0x116e305f */
  goto L_116e305f;
L_116e3055:;
  /* 116e3055 mov dword ptr [ebp - 0x3028], 0x1170a260 */
  w32((uint32_t)(EBP + -0x3028), (0x1170a260u));
L_116e305f:;
  /* 116e305f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 116e3065 push ecx */
  push32((uint32_t)(ECX));
  /* 116e3066 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 116e306c push edx */
  push32((uint32_t)(EDX));
  /* 116e306d call 0x116e6dd0 */
  push32(0x116e3072u); f_116e6dd0();
  /* 116e3072 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e3075:;
  /* 116e3075 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 116e307b push eax */
  push32((uint32_t)(EAX));
  /* 116e307c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 116e3082 push ecx */
  push32((uint32_t)(ECX));
  /* 116e3083 call 0x116e6de0 */
  push32(0x116e3088u); f_116e6de0();
  /* 116e3088 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e308b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e308f jne 0x116e30ca */
  if (!C.zf) goto L_116e30ca;
  /* 116e3091 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e3094 mov eax, dword ptr [edx*4 + 0x1170da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1170da38)));
  /* 116e309b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 116e309e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e30a0 je 0x116e30b6 */
  if (C.zf) goto L_116e30b6;
  /* 116e30a2 push 0x1170a25c */
  push32((uint32_t)(0x1170a25cu));
  /* 116e30a7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 116e30ad push ecx */
  push32((uint32_t)(ECX));
  /* 116e30ae call 0x116e6de0 */
  push32(0x116e30b3u); f_116e6de0();
  /* 116e30b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e30b6:;
  /* 116e30b6 push 0x1170a258 */
  push32((uint32_t)(0x1170a258u));
  /* 116e30bb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 116e30c1 push edx */
  push32((uint32_t)(EDX));
  /* 116e30c2 call 0x116e6de0 */
  push32(0x116e30c7u); f_116e6de0();
  /* 116e30c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e30ca:;
  /* 116e30ca cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e30ce je 0x116e3112 */
  if (C.zf) goto L_116e3112;
  /* 116e30d0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 116e30d6 push eax */
  push32((uint32_t)(EAX));
  /* 116e30d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e30da push ecx */
  push32((uint32_t)(ECX));
  /* 116e30db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e30de push edx */
  push32((uint32_t)(EDX));
  /* 116e30df push 0x1170a24c */
  push32((uint32_t)(0x1170a24cu));
  /* 116e30e4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 116e30e9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 116e30ef push eax */
  push32((uint32_t)(EAX));
  /* 116e30f0 call 0x116e6cd0 */
  push32(0x116e30f5u); f_116e6cd0();
  /* 116e30f5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e30f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e30fa jge 0x116e3110 */
  if ((C.sf==C.of)) goto L_116e3110;
  /* 116e30fc push 0x1170a288 */
  push32((uint32_t)(0x1170a288u));
  /* 116e3101 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 116e3107 push ecx */
  push32((uint32_t)(ECX));
  /* 116e3108 call 0x116e6dd0 */
  push32(0x116e310du); f_116e6dd0();
  /* 116e310d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e3110:;
  /* 116e3110 jmp 0x116e3128 */
  goto L_116e3128;
L_116e3112:;
  /* 116e3112 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 116e3118 push edx */
  push32((uint32_t)(EDX));
  /* 116e3119 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 116e311f push eax */
  push32((uint32_t)(EAX));
  /* 116e3120 call 0x116e6dd0 */
  push32(0x116e3125u); f_116e6dd0();
  /* 116e3125 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e3128:;
  /* 116e3128 cmp dword ptr [0x11711160], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11711160))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e312f je 0x116e316c */
  if (C.zf) goto L_116e316c;
  /* 116e3131 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 116e3137 push ecx */
  push32((uint32_t)(ECX));
  /* 116e3138 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 116e313e push edx */
  push32((uint32_t)(EDX));
  /* 116e313f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e3142 push eax */
  push32((uint32_t)(EAX));
  /* 116e3143 call dword ptr [0x11711160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11711160))), 0x116e3149u);
  /* 116e3149 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e314c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e314e je 0x116e316c */
  if (C.zf) goto L_116e316c;
  /* 116e3150 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3154 jne 0x116e3161 */
  if (!C.zf) goto L_116e3161;
  /* 116e3156 push 0x1170da34 */
  push32((uint32_t)(0x1170da34u));
  /* 116e315b call dword ptr [0x11712344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712344))), 0x116e3161u);
L_116e3161:;
  /* 116e3161 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 116e3167 jmp 0x116e326b */
  goto L_116e326b;
L_116e316c:;
  /* 116e316c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e316f mov edx, dword ptr [ecx*4 + 0x1170da38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1170da38)));
  /* 116e3176 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116e3179 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e317b je 0x116e31bb */
  if (C.zf) goto L_116e31bb;
  /* 116e317d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e3180 cmp dword ptr [eax*4 + 0x1170da44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1170da44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3188 je 0x116e31bb */
  if (C.zf) goto L_116e31bb;
  /* 116e318a push 0 */
  push32((uint32_t)(0x0u));
  /* 116e318c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 116e3192 push ecx */
  push32((uint32_t)(ECX));
  /* 116e3193 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 116e3199 push edx */
  push32((uint32_t)(EDX));
  /* 116e319a call 0x116e6c50 */
  push32(0x116e319fu); f_116e6c50();
  /* 116e319f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e31a2 push eax */
  push32((uint32_t)(EAX));
  /* 116e31a3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 116e31a9 push eax */
  push32((uint32_t)(EAX));
  /* 116e31aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e31ad mov edx, dword ptr [ecx*4 + 0x1170da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1170da44)));
  /* 116e31b4 push edx */
  push32((uint32_t)(EDX));
  /* 116e31b5 call dword ptr [0x11712340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712340))), 0x116e31bbu);
L_116e31bb:;
  /* 116e31bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e31be mov ecx, dword ptr [eax*4 + 0x1170da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1170da38)));
  /* 116e31c5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 116e31c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e31ca je 0x116e31d9 */
  if (C.zf) goto L_116e31d9;
  /* 116e31cc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 116e31d2 push edx */
  push32((uint32_t)(EDX));
  /* 116e31d3 call dword ptr [0x11712348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712348))), 0x116e31d9u);
L_116e31d9:;
  /* 116e31d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e31dc mov ecx, dword ptr [eax*4 + 0x1170da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1170da38)));
  /* 116e31e3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 116e31e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e31e8 je 0x116e3258 */
  if (C.zf) goto L_116e3258;
  /* 116e31ea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e31ee je 0x116e320d */
  if (C.zf) goto L_116e320d;
  /* 116e31f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 116e31f2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 116e31f8 push edx */
  push32((uint32_t)(EDX));
  /* 116e31f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e31fc push eax */
  push32((uint32_t)(EAX));
  /* 116e31fd call 0x116e6960 */
  push32(0x116e3202u); f_116e6960();
  /* 116e3202 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3205 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 116e320b jmp 0x116e3217 */
  goto L_116e3217;
L_116e320d:;
  /* 116e320d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_116e3217:;
  /* 116e3217 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 116e321d push ecx */
  push32((uint32_t)(ECX));
  /* 116e321e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e3221 push edx */
  push32((uint32_t)(EDX));
  /* 116e3222 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 116e3228 push eax */
  push32((uint32_t)(EAX));
  /* 116e3229 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e322c push ecx */
  push32((uint32_t)(ECX));
  /* 116e322d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e3230 push edx */
  push32((uint32_t)(EDX));
  /* 116e3231 call 0x116e3270 */
  push32(0x116e3236u); f_116e3270();
  /* 116e3236 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3239 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 116e323f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3243 jne 0x116e3250 */
  if (!C.zf) goto L_116e3250;
  /* 116e3245 push 0x1170da34 */
  push32((uint32_t)(0x1170da34u));
  /* 116e324a call dword ptr [0x11712344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712344))), 0x116e3250u);
L_116e3250:;
  /* 116e3250 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 116e3256 jmp 0x116e326b */
  goto L_116e326b;
L_116e3258:;
  /* 116e3258 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e325c jne 0x116e3269 */
  if (!C.zf) goto L_116e3269;
  /* 116e325e push 0x1170da34 */
  push32((uint32_t)(0x1170da34u));
  /* 116e3263 call dword ptr [0x11712344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712344))), 0x116e3269u);
L_116e3269:;
  /* 116e3269 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116e326b:;
  /* 116e326b pop edi */
  EDI = (pop32());
  /* 116e326c mov esp, ebp */
  ESP = (EBP);
  /* 116e326e pop ebp */
  EBP = (pop32());
  /* 116e326f ret  */
  ESPCHK(0x116e2ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003270 @ 0x116e3270 (780 bytes, 197 insns) */
void f_116e3270(void) {
  FTRACE(0x116e3270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e3270 push ebp */
  push32((uint32_t)(EBP));
  /* 116e3271 mov ebp, esp */
  EBP = (ESP);
  /* 116e3273 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 116e3278 call 0x116e6fc0 */
  push32(0x116e327du); f_116e6fc0();
L_116e327d:;
  /* 116e327d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3281 jne 0x116e32a8 */
  if (!C.zf) goto L_116e32a8;
  /* 116e3283 push 0x1170a444 */
  push32((uint32_t)(0x1170a444u));
  /* 116e3288 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e328a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 116e328f push 0x1170a438 */
  push32((uint32_t)(0x1170a438u));
  /* 116e3294 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e3296 call 0x116e2ee0 */
  push32(0x116e329bu); f_116e2ee0();
  /* 116e329b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e329e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e32a1 jne 0x116e32a8 */
  if (!C.zf) goto L_116e32a8;
  /* 116e32a3 call 0x116e2dd0 */
  push32(0x116e32a8u); f_116e2dd0();
L_116e32a8:;
  /* 116e32a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e32aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e32ac jne 0x116e327d */
  if (!C.zf) goto L_116e327d;
  /* 116e32ae push 0x104 */
  push32((uint32_t)(0x104u));
  /* 116e32b3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 116e32b9 push ecx */
  push32((uint32_t)(ECX));
  /* 116e32ba push 0 */
  push32((uint32_t)(0x0u));
  /* 116e32bc call dword ptr [0x11712358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712358))), 0x116e32c2u);
  /* 116e32c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e32c4 jne 0x116e32da */
  if (!C.zf) goto L_116e32da;
  /* 116e32c6 push 0x1170a420 */
  push32((uint32_t)(0x1170a420u));
  /* 116e32cb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 116e32d1 push edx */
  push32((uint32_t)(EDX));
  /* 116e32d2 call 0x116e6dd0 */
  push32(0x116e32d7u); f_116e6dd0();
  /* 116e32d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e32da:;
  /* 116e32da lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 116e32e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e32e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e32e6 push ecx */
  push32((uint32_t)(ECX));
  /* 116e32e7 call 0x116e6c50 */
  push32(0x116e32ecu); f_116e6c50();
  /* 116e32ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e32ef cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e32f2 jbe 0x116e331d */
  if ((C.cf||C.zf)) goto L_116e331d;
  /* 116e32f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e32f7 push edx */
  push32((uint32_t)(EDX));
  /* 116e32f8 call 0x116e6c50 */
  push32(0x116e32fdu); f_116e6c50();
  /* 116e32fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3300 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e3303 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 116e3307 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116e330a push 3 */
  push32((uint32_t)(0x3u));
  /* 116e330c push 0x1170a41c */
  push32((uint32_t)(0x1170a41cu));
  /* 116e3311 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e3314 push eax */
  push32((uint32_t)(EAX));
  /* 116e3315 call 0x116e7640 */
  push32(0x116e331au); f_116e7640();
  /* 116e331a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e331d:;
  /* 116e331d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e3320 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 116e3326 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e332d je 0x116e3378 */
  if (C.zf) goto L_116e3378;
  /* 116e332f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 116e3335 push edx */
  push32((uint32_t)(EDX));
  /* 116e3336 call 0x116e6c50 */
  push32(0x116e333bu); f_116e6c50();
  /* 116e333b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e333e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3341 jbe 0x116e3378 */
  if ((C.cf||C.zf)) goto L_116e3378;
  /* 116e3343 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 116e3349 push eax */
  push32((uint32_t)(EAX));
  /* 116e334a call 0x116e6c50 */
  push32(0x116e334fu); f_116e6c50();
  /* 116e334f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3352 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 116e3358 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 116e335c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 116e3362 push 3 */
  push32((uint32_t)(0x3u));
  /* 116e3364 push 0x1170a41c */
  push32((uint32_t)(0x1170a41cu));
  /* 116e3369 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 116e336f push eax */
  push32((uint32_t)(EAX));
  /* 116e3370 call 0x116e7640 */
  push32(0x116e3375u); f_116e7640();
  /* 116e3375 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e3378:;
  /* 116e3378 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e337c jne 0x116e338a */
  if (!C.zf) goto L_116e338a;
  /* 116e337e mov dword ptr [ebp - 0x1114], 0x1170a3a8 */
  w32((uint32_t)(EBP + -0x1114), (0x1170a3a8u));
  /* 116e3388 jmp 0x116e3394 */
  goto L_116e3394;
L_116e338a:;
  /* 116e338a mov dword ptr [ebp - 0x1114], 0x1170a148 */
  w32((uint32_t)(EBP + -0x1114), (0x1170a148u));
L_116e3394:;
  /* 116e3394 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e3397 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116e339a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e339c je 0x116e33a9 */
  if (C.zf) goto L_116e33a9;
  /* 116e339e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e33a1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 116e33a7 jmp 0x116e33b3 */
  goto L_116e33b3;
L_116e33a9:;
  /* 116e33a9 mov dword ptr [ebp - 0x1118], 0x1170a148 */
  w32((uint32_t)(EBP + -0x1118), (0x1170a148u));
L_116e33b3:;
  /* 116e33b3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e33b6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116e33b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e33bb je 0x116e33cf */
  if (C.zf) goto L_116e33cf;
  /* 116e33bd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e33c1 jne 0x116e33cf */
  if (!C.zf) goto L_116e33cf;
  /* 116e33c3 mov dword ptr [ebp - 0x111c], 0x1170a398 */
  w32((uint32_t)(EBP + -0x111c), (0x1170a398u));
  /* 116e33cd jmp 0x116e33d9 */
  goto L_116e33d9;
L_116e33cf:;
  /* 116e33cf mov dword ptr [ebp - 0x111c], 0x1170a148 */
  w32((uint32_t)(EBP + -0x111c), (0x1170a148u));
L_116e33d9:;
  /* 116e33d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e33dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116e33df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e33e1 je 0x116e33ef */
  if (C.zf) goto L_116e33ef;
  /* 116e33e3 mov dword ptr [ebp - 0x1120], 0x1170a394 */
  w32((uint32_t)(EBP + -0x1120), (0x1170a394u));
  /* 116e33ed jmp 0x116e33f9 */
  goto L_116e33f9;
L_116e33ef:;
  /* 116e33ef mov dword ptr [ebp - 0x1120], 0x1170a148 */
  w32((uint32_t)(EBP + -0x1120), (0x1170a148u));
L_116e33f9:;
  /* 116e33f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e33fd je 0x116e340a */
  if (C.zf) goto L_116e340a;
  /* 116e33ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e3402 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 116e3408 jmp 0x116e3414 */
  goto L_116e3414;
L_116e340a:;
  /* 116e340a mov dword ptr [ebp - 0x1124], 0x1170a148 */
  w32((uint32_t)(EBP + -0x1124), (0x1170a148u));
L_116e3414:;
  /* 116e3414 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3418 je 0x116e3426 */
  if (C.zf) goto L_116e3426;
  /* 116e341a mov dword ptr [ebp - 0x1128], 0x1170a38c */
  w32((uint32_t)(EBP + -0x1128), (0x1170a38cu));
  /* 116e3424 jmp 0x116e3430 */
  goto L_116e3430;
L_116e3426:;
  /* 116e3426 mov dword ptr [ebp - 0x1128], 0x1170a148 */
  w32((uint32_t)(EBP + -0x1128), (0x1170a148u));
L_116e3430:;
  /* 116e3430 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3434 je 0x116e3441 */
  if (C.zf) goto L_116e3441;
  /* 116e3436 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e3439 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 116e343f jmp 0x116e344b */
  goto L_116e344b;
L_116e3441:;
  /* 116e3441 mov dword ptr [ebp - 0x112c], 0x1170a148 */
  w32((uint32_t)(EBP + -0x112c), (0x1170a148u));
L_116e344b:;
  /* 116e344b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e344f je 0x116e345d */
  if (C.zf) goto L_116e345d;
  /* 116e3451 mov dword ptr [ebp - 0x1130], 0x1170a384 */
  w32((uint32_t)(EBP + -0x1130), (0x1170a384u));
  /* 116e345b jmp 0x116e3467 */
  goto L_116e3467;
L_116e345d:;
  /* 116e345d mov dword ptr [ebp - 0x1130], 0x1170a148 */
  w32((uint32_t)(EBP + -0x1130), (0x1170a148u));
L_116e3467:;
  /* 116e3467 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e346e je 0x116e347e */
  if (C.zf) goto L_116e347e;
  /* 116e3470 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 116e3476 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 116e347c jmp 0x116e3488 */
  goto L_116e3488;
L_116e347e:;
  /* 116e347e mov dword ptr [ebp - 0x1134], 0x1170a148 */
  w32((uint32_t)(EBP + -0x1134), (0x1170a148u));
L_116e3488:;
  /* 116e3488 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e348f je 0x116e349d */
  if (C.zf) goto L_116e349d;
  /* 116e3491 mov dword ptr [ebp - 0x1138], 0x1170a378 */
  w32((uint32_t)(EBP + -0x1138), (0x1170a378u));
  /* 116e349b jmp 0x116e34a7 */
  goto L_116e34a7;
L_116e349d:;
  /* 116e349d mov dword ptr [ebp - 0x1138], 0x1170a148 */
  w32((uint32_t)(EBP + -0x1138), (0x1170a148u));
L_116e34a7:;
  /* 116e34a7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 116e34ad push edx */
  push32((uint32_t)(EDX));
  /* 116e34ae mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 116e34b4 push eax */
  push32((uint32_t)(EAX));
  /* 116e34b5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 116e34bb push ecx */
  push32((uint32_t)(ECX));
  /* 116e34bc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 116e34c2 push edx */
  push32((uint32_t)(EDX));
  /* 116e34c3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 116e34c9 push eax */
  push32((uint32_t)(EAX));
  /* 116e34ca mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 116e34d0 push ecx */
  push32((uint32_t)(ECX));
  /* 116e34d1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 116e34d7 push edx */
  push32((uint32_t)(EDX));
  /* 116e34d8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 116e34de push eax */
  push32((uint32_t)(EAX));
  /* 116e34df mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 116e34e5 push ecx */
  push32((uint32_t)(ECX));
  /* 116e34e6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 116e34ec push edx */
  push32((uint32_t)(EDX));
  /* 116e34ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e34f0 push eax */
  push32((uint32_t)(EAX));
  /* 116e34f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e34f4 mov edx, dword ptr [ecx*4 + 0x1170da50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1170da50)));
  /* 116e34fb push edx */
  push32((uint32_t)(EDX));
  /* 116e34fc push 0x1170a324 */
  push32((uint32_t)(0x1170a324u));
  /* 116e3501 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 116e3506 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 116e350c push eax */
  push32((uint32_t)(EAX));
  /* 116e350d call 0x116e6cd0 */
  push32(0x116e3512u); f_116e6cd0();
  /* 116e3512 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3515 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e3517 jge 0x116e352d */
  if ((C.sf==C.of)) goto L_116e352d;
  /* 116e3519 push 0x1170a288 */
  push32((uint32_t)(0x1170a288u));
  /* 116e351e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 116e3524 push ecx */
  push32((uint32_t)(ECX));
  /* 116e3525 call 0x116e6dd0 */
  push32(0x116e352au); f_116e6dd0();
  /* 116e352a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e352d:;
  /* 116e352d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 116e3532 push 0x1170a300 */
  push32((uint32_t)(0x1170a300u));
  /* 116e3537 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 116e353d push edx */
  push32((uint32_t)(EDX));
  /* 116e353e call 0x116e7580 */
  push32(0x116e3543u); f_116e7580();
  /* 116e3543 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3546 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 116e354c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3553 jne 0x116e3566 */
  if (!C.zf) goto L_116e3566;
  /* 116e3555 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 116e3557 call 0x116e72c0 */
  push32(0x116e355cu); f_116e72c0();
  /* 116e355c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e355f push 3 */
  push32((uint32_t)(0x3u));
  /* 116e3561 call 0x116e35e0 */
  push32(0x116e3566u); f_116e35e0();
L_116e3566:;
  /* 116e3566 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e356d jne 0x116e3576 */
  if (!C.zf) goto L_116e3576;
  /* 116e356f mov eax, 1 */
  EAX = (0x1u);
  /* 116e3574 jmp 0x116e3578 */
  goto L_116e3578;
L_116e3576:;
  /* 116e3576 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116e3578:;
  /* 116e3578 mov esp, ebp */
  ESP = (EBP);
  /* 116e357a pop ebp */
  EBP = (pop32());
  /* 116e357b ret  */
  ESPCHK(0x116e3270u, _esp0);
  ESP += 4; return;
}

/* FUN_10003580 @ 0x116e3580 (56 bytes, 15 insns) */
void f_116e3580(void) {
  FTRACE(0x116e3580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e3580 push ebp */
  push32((uint32_t)(EBP));
  /* 116e3581 mov ebp, esp */
  EBP = (ESP);
  /* 116e3583 cmp dword ptr [0x1171115c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1171115c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e358a je 0x116e3592 */
  if (C.zf) goto L_116e3592;
  /* 116e358c call dword ptr [0x1171115c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171115c))), 0x116e3592u);
L_116e3592:;
  /* 116e3592 push 0x1170d418 */
  push32((uint32_t)(0x1170d418u));
  /* 116e3597 push 0x1170d208 */
  push32((uint32_t)(0x1170d208u));
  /* 116e359c call 0x116e3750 */
  push32(0x116e35a1u); f_116e3750();
  /* 116e35a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e35a4 push 0x1170d104 */
  push32((uint32_t)(0x1170d104u));
  /* 116e35a9 push 0x1170d000 */
  push32((uint32_t)(0x1170d000u));
  /* 116e35ae call 0x116e3750 */
  push32(0x116e35b3u); f_116e3750();
  /* 116e35b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e35b6 pop ebp */
  EBP = (pop32());
  /* 116e35b7 ret  */
  ESPCHK(0x116e3580u, _esp0);
  ESP += 4; return;
}

/* FUN_100035c0 @ 0x116e35c0 (21 bytes, 10 insns) */
void f_116e35c0(void) {
  FTRACE(0x116e35c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e35c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e35c1 mov ebp, esp */
  EBP = (ESP);
  /* 116e35c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e35c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e35c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e35ca push eax */
  push32((uint32_t)(EAX));
  /* 116e35cb call 0x116e3640 */
  push32(0x116e35d0u); f_116e3640();
  /* 116e35d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e35d3 pop ebp */
  EBP = (pop32());
  /* 116e35d4 ret  */
  ESPCHK(0x116e35c0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x116e35e0 (21 bytes, 10 insns) */
void f_116e35e0(void) {
  FTRACE(0x116e35e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e35e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e35e1 mov ebp, esp */
  EBP = (ESP);
  /* 116e35e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e35e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e35e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e35ea push eax */
  push32((uint32_t)(EAX));
  /* 116e35eb call 0x116e3640 */
  push32(0x116e35f0u); f_116e3640();
  /* 116e35f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e35f3 pop ebp */
  EBP = (pop32());
  /* 116e35f4 ret  */
  ESPCHK(0x116e35e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003600 @ 0x116e3600 (19 bytes, 9 insns) */
void f_116e3600(void) {
  FTRACE(0x116e3600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e3600 push ebp */
  push32((uint32_t)(EBP));
  /* 116e3601 mov ebp, esp */
  EBP = (ESP);
  /* 116e3603 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e3605 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e3607 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e3609 call 0x116e3640 */
  push32(0x116e360eu); f_116e3640();
  /* 116e360e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3611 pop ebp */
  EBP = (pop32());
  /* 116e3612 ret  */
  ESPCHK(0x116e3600u, _esp0);
  ESP += 4; return;
}

/* FUN_10003620 @ 0x116e3620 (19 bytes, 9 insns) */
void f_116e3620(void) {
  FTRACE(0x116e3620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e3620 push ebp */
  push32((uint32_t)(EBP));
  /* 116e3621 mov ebp, esp */
  EBP = (ESP);
  /* 116e3623 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e3625 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e3627 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e3629 call 0x116e3640 */
  push32(0x116e362eu); f_116e3640();
  /* 116e362e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3631 pop ebp */
  EBP = (pop32());
  /* 116e3632 ret  */
  ESPCHK(0x116e3620u, _esp0);
  ESP += 4; return;
}

/* FUN_10003640 @ 0x116e3640 (227 bytes, 61 insns) */
void f_116e3640(void) {
  FTRACE(0x116e3640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e3640 push ebp */
  push32((uint32_t)(EBP));
  /* 116e3641 mov ebp, esp */
  EBP = (ESP);
  /* 116e3643 push ecx */
  push32((uint32_t)(ECX));
  /* 116e3644 call 0x116e3730 */
  push32(0x116e3649u); f_116e3730();
  /* 116e3649 cmp dword ptr [0x1170f66c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170f66c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3650 jne 0x116e3663 */
  if (!C.zf) goto L_116e3663;
  /* 116e3652 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e3655 push eax */
  push32((uint32_t)(EAX));
  /* 116e3656 call dword ptr [0x11712364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712364))), 0x116e365cu);
  /* 116e365c push eax */
  push32((uint32_t)(EAX));
  /* 116e365d call dword ptr [0x11712360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712360))), 0x116e3663u);
L_116e3663:;
  /* 116e3663 mov dword ptr [0x1170f668], 1 */
  w32((uint32_t)(0x1170f668), (0x1u));
  /* 116e366d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 116e3670 mov byte ptr [0x1170f664], cl */
  w8((uint32_t)(0x1170f664), (CL));
  /* 116e3676 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e367a jne 0x116e36c3 */
  if (!C.zf) goto L_116e36c3;
  /* 116e367c cmp dword ptr [0x11711158], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11711158))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3683 je 0x116e36b1 */
  if (C.zf) goto L_116e36b1;
  /* 116e3685 mov edx, dword ptr [0x11711154] */
  EDX = (r32((uint32_t)(0x11711154)));
  /* 116e368b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116e368e:;
  /* 116e368e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e3691 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e3694 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e3697 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e369a cmp ecx, dword ptr [0x11711158] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11711158))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e36a0 jb 0x116e36b1 */
  if (C.cf) goto L_116e36b1;
  /* 116e36a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e36a5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e36a8 je 0x116e36af */
  if (C.zf) goto L_116e36af;
  /* 116e36aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e36ad call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x116e36afu);
L_116e36af:;
  /* 116e36af jmp 0x116e368e */
  goto L_116e368e;
L_116e36b1:;
  /* 116e36b1 push 0x1170d724 */
  push32((uint32_t)(0x1170d724u));
  /* 116e36b6 push 0x1170d51c */
  push32((uint32_t)(0x1170d51cu));
  /* 116e36bb call 0x116e3750 */
  push32(0x116e36c0u); f_116e3750();
  /* 116e36c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e36c3:;
  /* 116e36c3 push 0x1170d92c */
  push32((uint32_t)(0x1170d92cu));
  /* 116e36c8 push 0x1170d828 */
  push32((uint32_t)(0x1170d828u));
  /* 116e36cd call 0x116e3750 */
  push32(0x116e36d2u); f_116e3750();
  /* 116e36d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e36d5 cmp dword ptr [0x1170f670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e36dc jne 0x116e36fe */
  if (!C.zf) goto L_116e36fe;
  /* 116e36de push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 116e36e0 call 0x116e5330 */
  push32(0x116e36e5u); f_116e5330();
  /* 116e36e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e36e8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 116e36eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e36ed je 0x116e36fe */
  if (C.zf) goto L_116e36fe;
  /* 116e36ef mov dword ptr [0x1170f670], 1 */
  w32((uint32_t)(0x1170f670), (0x1u));
  /* 116e36f9 call 0x116e5c40 */
  push32(0x116e36feu); f_116e5c40();
L_116e36fe:;
  /* 116e36fe cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3702 je 0x116e370b */
  if (C.zf) goto L_116e370b;
  /* 116e3704 call 0x116e3740 */
  push32(0x116e3709u); f_116e3740();
  /* 116e3709 jmp 0x116e371f */
  goto L_116e371f;
L_116e370b:;
  /* 116e370b mov dword ptr [0x1170f66c], 1 */
  w32((uint32_t)(0x1170f66c), (0x1u));
  /* 116e3715 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e3718 push ecx */
  push32((uint32_t)(ECX));
  /* 116e3719 call dword ptr [0x1171235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171235c))), 0x116e371fu);
L_116e371f:;
  /* 116e371f mov esp, ebp */
  ESP = (EBP);
  /* 116e3721 pop ebp */
  EBP = (pop32());
  /* 116e3722 ret  */
  ESPCHK(0x116e3640u, _esp0);
  ESP += 4; return;
}

/* FUN_10003730 @ 0x116e3730 (15 bytes, 7 insns) */
void f_116e3730(void) {
  FTRACE(0x116e3730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e3730 push ebp */
  push32((uint32_t)(EBP));
  /* 116e3731 mov ebp, esp */
  EBP = (ESP);
  /* 116e3733 push 0xd */
  push32((uint32_t)(0xdu));
  /* 116e3735 call 0x116e7820 */
  push32(0x116e373au); f_116e7820();
  /* 116e373a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e373d pop ebp */
  EBP = (pop32());
  /* 116e373e ret  */
  ESPCHK(0x116e3730u, _esp0);
  ESP += 4; return;
}

/* FUN_10003740 @ 0x116e3740 (15 bytes, 7 insns) */
void f_116e3740(void) {
  FTRACE(0x116e3740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e3740 push ebp */
  push32((uint32_t)(EBP));
  /* 116e3741 mov ebp, esp */
  EBP = (ESP);
  /* 116e3743 push 0xd */
  push32((uint32_t)(0xdu));
  /* 116e3745 call 0x116e78c0 */
  push32(0x116e374au); f_116e78c0();
  /* 116e374a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e374d pop ebp */
  EBP = (pop32());
  /* 116e374e ret  */
  ESPCHK(0x116e3740u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x116e3750 (37 bytes, 16 insns) */
void f_116e3750(void) {
  FTRACE(0x116e3750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e3750 push ebp */
  push32((uint32_t)(EBP));
  /* 116e3751 mov ebp, esp */
  EBP = (ESP);
L_116e3753:;
  /* 116e3753 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e3756 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3759 jae 0x116e3773 */
  if (!C.cf) goto L_116e3773;
  /* 116e375b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e375e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3761 je 0x116e3768 */
  if (C.zf) goto L_116e3768;
  /* 116e3763 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e3766 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x116e3768u);
L_116e3768:;
  /* 116e3768 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e376b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e376e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116e3771 jmp 0x116e3753 */
  goto L_116e3753;
L_116e3773:;
  /* 116e3773 pop ebp */
  EBP = (pop32());
  /* 116e3774 ret  */
  ESPCHK(0x116e3750u, _esp0);
  ESP += 4; return;
}

/* FUN_10003780 @ 0x116e3780 (130 bytes, 42 insns) */
void f_116e3780(void) {
  FTRACE(0x116e3780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e3780 push ebp */
  push32((uint32_t)(EBP));
  /* 116e3781 mov ebp, esp */
  EBP = (ESP);
  /* 116e3783 push ecx */
  push32((uint32_t)(ECX));
  /* 116e3784 call 0x116e7740 */
  push32(0x116e3789u); f_116e7740();
  /* 116e3789 call dword ptr [0x11712370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712370))), 0x116e378fu);
  /* 116e378f mov dword ptr [0x1170da5c], eax */
  w32((uint32_t)(0x1170da5c), (EAX));
  /* 116e3794 cmp dword ptr [0x1170da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1170da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e379b jne 0x116e37a1 */
  if (!C.zf) goto L_116e37a1;
  /* 116e379d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e379f jmp 0x116e37fe */
  goto L_116e37fe;
L_116e37a1:;
  /* 116e37a1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 116e37a3 push 0x1170a45c */
  push32((uint32_t)(0x1170a45cu));
  /* 116e37a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e37aa push 0x74 */
  push32((uint32_t)(0x74u));
  /* 116e37ac push 1 */
  push32((uint32_t)(0x1u));
  /* 116e37ae call 0x116e4230 */
  push32(0x116e37b3u); f_116e4230();
  /* 116e37b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e37b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e37b9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e37bd je 0x116e37d4 */
  if (C.zf) goto L_116e37d4;
  /* 116e37bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e37c2 push eax */
  push32((uint32_t)(EAX));
  /* 116e37c3 mov ecx, dword ptr [0x1170da5c] */
  ECX = (r32((uint32_t)(0x1170da5c)));
  /* 116e37c9 push ecx */
  push32((uint32_t)(ECX));
  /* 116e37ca call dword ptr [0x1171236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171236c))), 0x116e37d0u);
  /* 116e37d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e37d2 jne 0x116e37d8 */
  if (!C.zf) goto L_116e37d8;
L_116e37d4:;
  /* 116e37d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e37d6 jmp 0x116e37fe */
  goto L_116e37fe;
L_116e37d8:;
  /* 116e37d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e37db push edx */
  push32((uint32_t)(EDX));
  /* 116e37dc call 0x116e3840 */
  push32(0x116e37e1u); f_116e3840();
  /* 116e37e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e37e4 call dword ptr [0x11712368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712368))), 0x116e37eau);
  /* 116e37ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e37ed mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116e37ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e37f2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 116e37f9 mov eax, 1 */
  EAX = (0x1u);
L_116e37fe:;
  /* 116e37fe mov esp, ebp */
  ESP = (EBP);
  /* 116e3800 pop ebp */
  EBP = (pop32());
  /* 116e3801 ret  */
  ESPCHK(0x116e3780u, _esp0);
  ESP += 4; return;
}

/* FUN_10003810 @ 0x116e3810 (41 bytes, 11 insns) */
void f_116e3810(void) {
  FTRACE(0x116e3810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e3810 push ebp */
  push32((uint32_t)(EBP));
  /* 116e3811 mov ebp, esp */
  EBP = (ESP);
  /* 116e3813 call 0x116e7780 */
  push32(0x116e3818u); f_116e7780();
  /* 116e3818 cmp dword ptr [0x1170da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1170da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e381f je 0x116e3837 */
  if (C.zf) goto L_116e3837;
  /* 116e3821 mov eax, dword ptr [0x1170da5c] */
  EAX = (r32((uint32_t)(0x1170da5c)));
  /* 116e3826 push eax */
  push32((uint32_t)(EAX));
  /* 116e3827 call dword ptr [0x1171229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171229c))), 0x116e382du);
  /* 116e382d mov dword ptr [0x1170da5c], 0xffffffff */
  w32((uint32_t)(0x1170da5c), (0xffffffffu));
L_116e3837:;
  /* 116e3837 pop ebp */
  EBP = (pop32());
  /* 116e3838 ret  */
  ESPCHK(0x116e3810u, _esp0);
  ESP += 4; return;
}

/* FUN_10003840 @ 0x116e3840 (25 bytes, 8 insns) */
void f_116e3840(void) {
  FTRACE(0x116e3840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e3840 push ebp */
  push32((uint32_t)(EBP));
  /* 116e3841 mov ebp, esp */
  EBP = (ESP);
  /* 116e3843 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e3846 mov dword ptr [eax + 0x50], 0x1170dc00 */
  w32((uint32_t)(EAX + 0x50), (0x1170dc00u));
  /* 116e384d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e3850 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 116e3857 pop ebp */
  EBP = (pop32());
  /* 116e3858 ret  */
  ESPCHK(0x116e3840u, _esp0);
  ESP += 4; return;
}

/* FUN_10003860 @ 0x116e3860 (152 bytes, 48 insns) */
void f_116e3860(void) {
  FTRACE(0x116e3860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e3860 push ebp */
  push32((uint32_t)(EBP));
  /* 116e3861 mov ebp, esp */
  EBP = (ESP);
  /* 116e3863 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e3866 call dword ptr [0x11712380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712380))), 0x116e386cu);
  /* 116e386c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116e386f mov eax, dword ptr [0x1170da5c] */
  EAX = (r32((uint32_t)(0x1170da5c)));
  /* 116e3874 push eax */
  push32((uint32_t)(EAX));
  /* 116e3875 call dword ptr [0x1171237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171237c))), 0x116e387bu);
  /* 116e387b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e387e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3882 jne 0x116e38e7 */
  if (!C.zf) goto L_116e38e7;
  /* 116e3884 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 116e3889 push 0x1170a45c */
  push32((uint32_t)(0x1170a45cu));
  /* 116e388e push 2 */
  push32((uint32_t)(0x2u));
  /* 116e3890 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 116e3892 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e3894 call 0x116e4230 */
  push32(0x116e3899u); f_116e4230();
  /* 116e3899 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e389c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e389f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e38a3 je 0x116e38dd */
  if (C.zf) goto L_116e38dd;
  /* 116e38a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e38a8 push ecx */
  push32((uint32_t)(ECX));
  /* 116e38a9 mov edx, dword ptr [0x1170da5c] */
  EDX = (r32((uint32_t)(0x1170da5c)));
  /* 116e38af push edx */
  push32((uint32_t)(EDX));
  /* 116e38b0 call dword ptr [0x1171236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171236c))), 0x116e38b6u);
  /* 116e38b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e38b8 je 0x116e38dd */
  if (C.zf) goto L_116e38dd;
  /* 116e38ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e38bd push eax */
  push32((uint32_t)(EAX));
  /* 116e38be call 0x116e3840 */
  push32(0x116e38c3u); f_116e3840();
  /* 116e38c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e38c6 call dword ptr [0x11712368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712368))), 0x116e38ccu);
  /* 116e38cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e38cf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116e38d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e38d4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 116e38db jmp 0x116e38e7 */
  goto L_116e38e7;
L_116e38dd:;
  /* 116e38dd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 116e38df call 0x116e2d90 */
  push32(0x116e38e4u); f_116e2d90();
  /* 116e38e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e38e7:;
  /* 116e38e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e38ea push eax */
  push32((uint32_t)(EAX));
  /* 116e38eb call dword ptr [0x117122a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117122a0))), 0x116e38f1u);
  /* 116e38f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e38f4 mov esp, ebp */
  ESP = (EBP);
  /* 116e38f6 pop ebp */
  EBP = (pop32());
  /* 116e38f7 ret  */
  ESPCHK(0x116e3860u, _esp0);
  ESP += 4; return;
}

/* FUN_10003900 @ 0x116e3900 (263 bytes, 86 insns) */
void f_116e3900(void) {
  FTRACE(0x116e3900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e3900 push ebp */
  push32((uint32_t)(EBP));
  /* 116e3901 mov ebp, esp */
  EBP = (ESP);
  /* 116e3903 cmp dword ptr [0x1170da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1170da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e390a je 0x116e3a05 */
  if (C.zf) goto L_116e3a05;
  /* 116e3910 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3914 jne 0x116e3925 */
  if (!C.zf) goto L_116e3925;
  /* 116e3916 mov eax, dword ptr [0x1170da5c] */
  EAX = (r32((uint32_t)(0x1170da5c)));
  /* 116e391b push eax */
  push32((uint32_t)(EAX));
  /* 116e391c call dword ptr [0x1171237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171237c))), 0x116e3922u);
  /* 116e3922 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_116e3925:;
  /* 116e3925 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3929 je 0x116e39f6 */
  if (C.zf) goto L_116e39f6;
  /* 116e392f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e3932 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3936 je 0x116e3949 */
  if (C.zf) goto L_116e3949;
  /* 116e3938 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e393a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e393d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 116e3940 push eax */
  push32((uint32_t)(EAX));
  /* 116e3941 call 0x116e48b0 */
  push32(0x116e3946u); f_116e48b0();
  /* 116e3946 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e3949:;
  /* 116e3949 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e394c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3950 je 0x116e3963 */
  if (C.zf) goto L_116e3963;
  /* 116e3952 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e3954 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e3957 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 116e395a push eax */
  push32((uint32_t)(EAX));
  /* 116e395b call 0x116e48b0 */
  push32(0x116e3960u); f_116e48b0();
  /* 116e3960 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e3963:;
  /* 116e3963 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e3966 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e396a je 0x116e397d */
  if (C.zf) goto L_116e397d;
  /* 116e396c push 2 */
  push32((uint32_t)(0x2u));
  /* 116e396e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e3971 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 116e3974 push eax */
  push32((uint32_t)(EAX));
  /* 116e3975 call 0x116e48b0 */
  push32(0x116e397au); f_116e48b0();
  /* 116e397a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e397d:;
  /* 116e397d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e3980 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3984 je 0x116e3997 */
  if (C.zf) goto L_116e3997;
  /* 116e3986 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e3988 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e398b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 116e398e push eax */
  push32((uint32_t)(EAX));
  /* 116e398f call 0x116e48b0 */
  push32(0x116e3994u); f_116e48b0();
  /* 116e3994 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e3997:;
  /* 116e3997 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e399a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e399e je 0x116e39b1 */
  if (C.zf) goto L_116e39b1;
  /* 116e39a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e39a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e39a5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 116e39a8 push eax */
  push32((uint32_t)(EAX));
  /* 116e39a9 call 0x116e48b0 */
  push32(0x116e39aeu); f_116e48b0();
  /* 116e39ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e39b1:;
  /* 116e39b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e39b4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e39b8 je 0x116e39cb */
  if (C.zf) goto L_116e39cb;
  /* 116e39ba push 2 */
  push32((uint32_t)(0x2u));
  /* 116e39bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e39bf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 116e39c2 push eax */
  push32((uint32_t)(EAX));
  /* 116e39c3 call 0x116e48b0 */
  push32(0x116e39c8u); f_116e48b0();
  /* 116e39c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e39cb:;
  /* 116e39cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e39ce cmp dword ptr [ecx + 0x50], 0x1170dc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1170dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e39d5 je 0x116e39e8 */
  if (C.zf) goto L_116e39e8;
  /* 116e39d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e39d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e39dc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 116e39df push eax */
  push32((uint32_t)(EAX));
  /* 116e39e0 call 0x116e48b0 */
  push32(0x116e39e5u); f_116e48b0();
  /* 116e39e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e39e8:;
  /* 116e39e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e39ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e39ed push ecx */
  push32((uint32_t)(ECX));
  /* 116e39ee call 0x116e48b0 */
  push32(0x116e39f3u); f_116e48b0();
  /* 116e39f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e39f6:;
  /* 116e39f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e39f8 mov edx, dword ptr [0x1170da5c] */
  EDX = (r32((uint32_t)(0x1170da5c)));
  /* 116e39fe push edx */
  push32((uint32_t)(EDX));
  /* 116e39ff call dword ptr [0x1171236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171236c))), 0x116e3a05u);
L_116e3a05:;
  /* 116e3a05 pop ebp */
  EBP = (pop32());
  /* 116e3a06 ret  */
  ESPCHK(0x116e3900u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a10 @ 0x116e3a10 (11 bytes, 5 insns) */
void f_116e3a10(void) {
  FTRACE(0x116e3a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e3a10 push ebp */
  push32((uint32_t)(EBP));
  /* 116e3a11 mov ebp, esp */
  EBP = (ESP);
  /* 116e3a13 call dword ptr [0x11712368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712368))), 0x116e3a19u);
  /* 116e3a19 pop ebp */
  EBP = (pop32());
  /* 116e3a1a ret  */
  ESPCHK(0x116e3a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a20 @ 0x116e3a20 (11 bytes, 5 insns) */
void f_116e3a20(void) {
  FTRACE(0x116e3a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e3a20 push ebp */
  push32((uint32_t)(EBP));
  /* 116e3a21 mov ebp, esp */
  EBP = (ESP);
  /* 116e3a23 call dword ptr [0x11712384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712384))), 0x116e3a29u);
  /* 116e3a29 pop ebp */
  EBP = (pop32());
  /* 116e3a2a ret  */
  ESPCHK(0x116e3a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a30 @ 0x116e3a30 (804 bytes, 236 insns) */
void f_116e3a30(void) {
  FTRACE(0x116e3a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e3a30 push ebp */
  push32((uint32_t)(EBP));
  /* 116e3a31 mov ebp, esp */
  EBP = (ESP);
  /* 116e3a33 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e3a36 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 116e3a3b push 0x1170a468 */
  push32((uint32_t)(0x1170a468u));
  /* 116e3a40 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e3a42 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 116e3a47 call 0x116e3e20 */
  push32(0x116e3a4cu); f_116e3e20();
  /* 116e3a4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3a4f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 116e3a52 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3a56 jne 0x116e3a62 */
  if (!C.zf) goto L_116e3a62;
  /* 116e3a58 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 116e3a5a call 0x116e2d90 */
  push32(0x116e3a5fu); f_116e2d90();
  /* 116e3a5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e3a62:;
  /* 116e3a62 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3a65 mov dword ptr [0x11711000], eax */
  w32((uint32_t)(0x11711000), (EAX));
  /* 116e3a6a mov dword ptr [0x1171113c], 0x20 */
  w32((uint32_t)(0x1171113c), (0x20u));
  /* 116e3a74 jmp 0x116e3a7f */
  goto L_116e3a7f;
L_116e3a76:;
  /* 116e3a76 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3a79 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3a7c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_116e3a7f:;
  /* 116e3a7f mov edx, dword ptr [0x11711000] */
  EDX = (r32((uint32_t)(0x11711000)));
  /* 116e3a85 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3a8b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3a8e jae 0x116e3ab3 */
  if (!C.cf) goto L_116e3ab3;
  /* 116e3a90 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3a93 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 116e3a97 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3a9a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 116e3aa0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3aa3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 116e3aa7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3aaa mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 116e3ab1 jmp 0x116e3a76 */
  goto L_116e3a76;
L_116e3ab3:;
  /* 116e3ab3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 116e3ab6 push ecx */
  push32((uint32_t)(ECX));
  /* 116e3ab7 call dword ptr [0x11712390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712390))), 0x116e3abdu);
  /* 116e3abd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 116e3ac0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116e3ac6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e3ac8 je 0x116e3c55 */
  if (C.zf) goto L_116e3c55;
  /* 116e3ace cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3ad2 je 0x116e3c55 */
  if (C.zf) goto L_116e3c55;
  /* 116e3ad8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e3adb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116e3add mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 116e3ae0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e3ae3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3ae6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116e3ae9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e3aec add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3aef mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 116e3af2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3af9 jge 0x116e3b03 */
  if ((C.sf==C.of)) goto L_116e3b03;
  /* 116e3afb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 116e3afe mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 116e3b01 jmp 0x116e3b0a */
  goto L_116e3b0a;
L_116e3b03:;
  /* 116e3b03 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_116e3b0a:;
  /* 116e3b0a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 116e3b0d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 116e3b10 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 116e3b17 jmp 0x116e3b22 */
  goto L_116e3b22;
L_116e3b19:;
  /* 116e3b19 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 116e3b1c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3b1f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_116e3b22:;
  /* 116e3b22 mov ecx, dword ptr [0x1171113c] */
  ECX = (r32((uint32_t)(0x1171113c)));
  /* 116e3b28 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3b2b jge 0x116e3bc2 */
  if ((C.sf==C.of)) goto L_116e3bc2;
  /* 116e3b31 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 116e3b36 push 0x1170a468 */
  push32((uint32_t)(0x1170a468u));
  /* 116e3b3b push 2 */
  push32((uint32_t)(0x2u));
  /* 116e3b3d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 116e3b42 call 0x116e3e20 */
  push32(0x116e3b47u); f_116e3e20();
  /* 116e3b47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3b4a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 116e3b4d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3b51 jne 0x116e3b5e */
  if (!C.zf) goto L_116e3b5e;
  /* 116e3b53 mov edx, dword ptr [0x1171113c] */
  EDX = (r32((uint32_t)(0x1171113c)));
  /* 116e3b59 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 116e3b5c jmp 0x116e3bc2 */
  goto L_116e3bc2;
L_116e3b5e:;
  /* 116e3b5e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 116e3b61 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3b64 mov dword ptr [eax*4 + 0x11711000], ecx */
  w32((uint32_t)(EAX*4 + 0x11711000), (ECX));
  /* 116e3b6b mov edx, dword ptr [0x1171113c] */
  EDX = (r32((uint32_t)(0x1171113c)));
  /* 116e3b71 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3b74 mov dword ptr [0x1171113c], edx */
  w32((uint32_t)(0x1171113c), (EDX));
  /* 116e3b7a jmp 0x116e3b85 */
  goto L_116e3b85;
L_116e3b7c:;
  /* 116e3b7c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3b7f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3b82 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_116e3b85:;
  /* 116e3b85 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 116e3b88 mov edx, dword ptr [ecx*4 + 0x11711000] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11711000)));
  /* 116e3b8f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3b95 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3b98 jae 0x116e3bbd */
  if (!C.cf) goto L_116e3bbd;
  /* 116e3b9a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3b9d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 116e3ba1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3ba4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 116e3baa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3bad mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 116e3bb1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3bb4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 116e3bbb jmp 0x116e3b7c */
  goto L_116e3b7c;
L_116e3bbd:;
  /* 116e3bbd jmp 0x116e3b19 */
  goto L_116e3b19;
L_116e3bc2:;
  /* 116e3bc2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 116e3bc9 jmp 0x116e3be6 */
  goto L_116e3be6;
L_116e3bcb:;
  /* 116e3bcb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 116e3bce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3bd1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 116e3bd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e3bd7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3bda mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116e3bdd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 116e3be0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3be3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_116e3be6:;
  /* 116e3be6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 116e3be9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3bec jge 0x116e3c55 */
  if ((C.sf==C.of)) goto L_116e3c55;
  /* 116e3bee mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 116e3bf1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3bf4 je 0x116e3c50 */
  if (C.zf) goto L_116e3c50;
  /* 116e3bf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e3bf9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116e3bfc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116e3bff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e3c01 je 0x116e3c50 */
  if (C.zf) goto L_116e3c50;
  /* 116e3c03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e3c06 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116e3c09 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 116e3c0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e3c0e jne 0x116e3c20 */
  if (!C.zf) goto L_116e3c20;
  /* 116e3c10 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 116e3c13 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116e3c15 push edx */
  push32((uint32_t)(EDX));
  /* 116e3c16 call dword ptr [0x1171238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171238c))), 0x116e3c1cu);
  /* 116e3c1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e3c1e je 0x116e3c50 */
  if (C.zf) goto L_116e3c50;
L_116e3c20:;
  /* 116e3c20 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 116e3c23 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116e3c26 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 116e3c29 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116e3c2c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e3c2f mov edx, dword ptr [eax*4 + 0x11711000] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11711000)));
  /* 116e3c36 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3c38 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 116e3c3b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3c3e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 116e3c41 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116e3c43 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116e3c45 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3c48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e3c4b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116e3c4d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_116e3c50:;
  /* 116e3c50 jmp 0x116e3bcb */
  goto L_116e3bcb;
L_116e3c55:;
  /* 116e3c55 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 116e3c5c jmp 0x116e3c67 */
  goto L_116e3c67;
L_116e3c5e:;
  /* 116e3c5e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 116e3c61 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3c64 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_116e3c67:;
  /* 116e3c67 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3c6b jge 0x116e3d44 */
  if ((C.sf==C.of)) goto L_116e3d44;
  /* 116e3c71 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 116e3c74 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e3c77 mov edx, dword ptr [0x11711000] */
  EDX = (r32((uint32_t)(0x11711000)));
  /* 116e3c7d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3c7f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 116e3c82 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3c85 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3c88 jne 0x116e3d30 */
  if (!C.zf) goto L_116e3d30;
  /* 116e3c8e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3c91 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 116e3c95 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3c99 jne 0x116e3ca4 */
  if (!C.zf) goto L_116e3ca4;
  /* 116e3c9b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 116e3ca2 jmp 0x116e3cb4 */
  goto L_116e3cb4;
L_116e3ca4:;
  /* 116e3ca4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 116e3ca7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e3caa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116e3cac sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e3cae add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3cb1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_116e3cb4:;
  /* 116e3cb4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 116e3cb7 push eax */
  push32((uint32_t)(EAX));
  /* 116e3cb8 call dword ptr [0x1171233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171233c))), 0x116e3cbeu);
  /* 116e3cbe mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 116e3cc1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3cc5 je 0x116e3d1f */
  if (C.zf) goto L_116e3d1f;
  /* 116e3cc7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 116e3cca push ecx */
  push32((uint32_t)(ECX));
  /* 116e3ccb call dword ptr [0x1171238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171238c))), 0x116e3cd1u);
  /* 116e3cd1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 116e3cd4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3cd8 je 0x116e3d1f */
  if (C.zf) goto L_116e3d1f;
  /* 116e3cda mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3cdd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 116e3ce0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 116e3ce2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 116e3ce5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116e3ceb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3cee jne 0x116e3d00 */
  if (!C.zf) goto L_116e3d00;
  /* 116e3cf0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3cf3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 116e3cf6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 116e3cf8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3cfb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 116e3cfe jmp 0x116e3d1d */
  goto L_116e3d1d;
L_116e3d00:;
  /* 116e3d00 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 116e3d03 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116e3d09 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3d0c jne 0x116e3d1d */
  if (!C.zf) goto L_116e3d1d;
  /* 116e3d0e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3d11 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116e3d14 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 116e3d17 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3d1a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_116e3d1d:;
  /* 116e3d1d jmp 0x116e3d2e */
  goto L_116e3d2e;
L_116e3d1f:;
  /* 116e3d1f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3d22 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116e3d25 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 116e3d28 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3d2b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_116e3d2e:;
  /* 116e3d2e jmp 0x116e3d3f */
  goto L_116e3d3f;
L_116e3d30:;
  /* 116e3d30 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3d33 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116e3d36 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 116e3d39 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e3d3c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_116e3d3f:;
  /* 116e3d3f jmp 0x116e3c5e */
  goto L_116e3c5e;
L_116e3d44:;
  /* 116e3d44 mov eax, dword ptr [0x1171113c] */
  EAX = (r32((uint32_t)(0x1171113c)));
  /* 116e3d49 push eax */
  push32((uint32_t)(EAX));
  /* 116e3d4a call dword ptr [0x11712388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712388))), 0x116e3d50u);
  /* 116e3d50 mov esp, ebp */
  ESP = (EBP);
  /* 116e3d52 pop ebp */
  EBP = (pop32());
  /* 116e3d53 ret  */
  ESPCHK(0x116e3a30u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x116e3d60 (155 bytes, 45 insns) */
void f_116e3d60(void) {
  FTRACE(0x116e3d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e3d60 push ebp */
  push32((uint32_t)(EBP));
  /* 116e3d61 mov ebp, esp */
  EBP = (ESP);
  /* 116e3d63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e3d66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116e3d6d jmp 0x116e3d78 */
  goto L_116e3d78;
L_116e3d6f:;
  /* 116e3d6f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e3d72 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3d75 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116e3d78:;
  /* 116e3d78 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3d7c jge 0x116e3df7 */
  if ((C.sf==C.of)) goto L_116e3df7;
  /* 116e3d7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e3d81 cmp dword ptr [ecx*4 + 0x11711000], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11711000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3d89 je 0x116e3df2 */
  if (C.zf) goto L_116e3df2;
  /* 116e3d8b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e3d8e mov eax, dword ptr [edx*4 + 0x11711000] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11711000)));
  /* 116e3d95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e3d98 jmp 0x116e3da3 */
  goto L_116e3da3;
L_116e3d9a:;
  /* 116e3d9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e3d9d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3da0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116e3da3:;
  /* 116e3da3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e3da6 mov eax, dword ptr [edx*4 + 0x11711000] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11711000)));
  /* 116e3dad add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3db2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3db5 jae 0x116e3dcf */
  if (!C.cf) goto L_116e3dcf;
  /* 116e3db7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e3dba cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3dbe je 0x116e3dcd */
  if (C.zf) goto L_116e3dcd;
  /* 116e3dc0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e3dc3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3dc6 push edx */
  push32((uint32_t)(EDX));
  /* 116e3dc7 call dword ptr [0x11712394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712394))), 0x116e3dcdu);
L_116e3dcd:;
  /* 116e3dcd jmp 0x116e3d9a */
  goto L_116e3d9a;
L_116e3dcf:;
  /* 116e3dcf push 2 */
  push32((uint32_t)(0x2u));
  /* 116e3dd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e3dd4 mov ecx, dword ptr [eax*4 + 0x11711000] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11711000)));
  /* 116e3ddb push ecx */
  push32((uint32_t)(ECX));
  /* 116e3ddc call 0x116e48b0 */
  push32(0x116e3de1u); f_116e48b0();
  /* 116e3de1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3de4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e3de7 mov dword ptr [edx*4 + 0x11711000], 0 */
  w32((uint32_t)(EDX*4 + 0x11711000), (0x0u));
L_116e3df2:;
  /* 116e3df2 jmp 0x116e3d6f */
  goto L_116e3d6f;
L_116e3df7:;
  /* 116e3df7 mov esp, ebp */
  ESP = (EBP);
  /* 116e3df9 pop ebp */
  EBP = (pop32());
  /* 116e3dfa ret  */
  ESPCHK(0x116e3d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e00 @ 0x116e3e00 (29 bytes, 13 insns) */
void f_116e3e00(void) {
  FTRACE(0x116e3e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e3e00 push ebp */
  push32((uint32_t)(EBP));
  /* 116e3e01 mov ebp, esp */
  EBP = (ESP);
  /* 116e3e03 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e3e05 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e3e07 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e3e09 mov eax, dword ptr [0x1170f818] */
  EAX = (r32((uint32_t)(0x1170f818)));
  /* 116e3e0e push eax */
  push32((uint32_t)(EAX));
  /* 116e3e0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e3e12 push ecx */
  push32((uint32_t)(ECX));
  /* 116e3e13 call 0x116e3e70 */
  push32(0x116e3e18u); f_116e3e70();
  /* 116e3e18 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3e1b pop ebp */
  EBP = (pop32());
  /* 116e3e1c ret  */
  ESPCHK(0x116e3e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e20 @ 0x116e3e20 (35 bytes, 16 insns) */
void f_116e3e20(void) {
  FTRACE(0x116e3e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e3e20 push ebp */
  push32((uint32_t)(EBP));
  /* 116e3e21 mov ebp, esp */
  EBP = (ESP);
  /* 116e3e23 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e3e26 push eax */
  push32((uint32_t)(EAX));
  /* 116e3e27 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e3e2a push ecx */
  push32((uint32_t)(ECX));
  /* 116e3e2b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e3e2e push edx */
  push32((uint32_t)(EDX));
  /* 116e3e2f mov eax, dword ptr [0x1170f818] */
  EAX = (r32((uint32_t)(0x1170f818)));
  /* 116e3e34 push eax */
  push32((uint32_t)(EAX));
  /* 116e3e35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e3e38 push ecx */
  push32((uint32_t)(ECX));
  /* 116e3e39 call 0x116e3e70 */
  push32(0x116e3e3eu); f_116e3e70();
  /* 116e3e3e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3e41 pop ebp */
  EBP = (pop32());
  /* 116e3e42 ret  */
  ESPCHK(0x116e3e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e50 @ 0x116e3e50 (27 bytes, 13 insns) */
void f_116e3e50(void) {
  FTRACE(0x116e3e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e3e50 push ebp */
  push32((uint32_t)(EBP));
  /* 116e3e51 mov ebp, esp */
  EBP = (ESP);
  /* 116e3e53 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e3e55 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e3e57 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e3e59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e3e5c push eax */
  push32((uint32_t)(EAX));
  /* 116e3e5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e3e60 push ecx */
  push32((uint32_t)(ECX));
  /* 116e3e61 call 0x116e3e70 */
  push32(0x116e3e66u); f_116e3e70();
  /* 116e3e66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3e69 pop ebp */
  EBP = (pop32());
  /* 116e3e6a ret  */
  ESPCHK(0x116e3e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e70 @ 0x116e3e70 (94 bytes, 38 insns) */
void f_116e3e70(void) {
  FTRACE(0x116e3e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e3e70 push ebp */
  push32((uint32_t)(EBP));
  /* 116e3e71 mov ebp, esp */
  EBP = (ESP);
  /* 116e3e73 push ecx */
  push32((uint32_t)(ECX));
L_116e3e74:;
  /* 116e3e74 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e3e76 call 0x116e7820 */
  push32(0x116e3e7bu); f_116e7820();
  /* 116e3e7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3e7e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e3e81 push eax */
  push32((uint32_t)(EAX));
  /* 116e3e82 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e3e85 push ecx */
  push32((uint32_t)(ECX));
  /* 116e3e86 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e3e89 push edx */
  push32((uint32_t)(EDX));
  /* 116e3e8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e3e8d push eax */
  push32((uint32_t)(EAX));
  /* 116e3e8e call 0x116e3ef0 */
  push32(0x116e3e93u); f_116e3ef0();
  /* 116e3e93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3e96 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e3e99 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e3e9b call 0x116e78c0 */
  push32(0x116e3ea0u); f_116e78c0();
  /* 116e3ea0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3ea3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3ea7 jne 0x116e3eaf */
  if (!C.zf) goto L_116e3eaf;
  /* 116e3ea9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3ead jne 0x116e3eb4 */
  if (!C.zf) goto L_116e3eb4;
L_116e3eaf:;
  /* 116e3eaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e3eb2 jmp 0x116e3eca */
  goto L_116e3eca;
L_116e3eb4:;
  /* 116e3eb4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e3eb7 push ecx */
  push32((uint32_t)(ECX));
  /* 116e3eb8 call 0x116e7b60 */
  push32(0x116e3ebdu); f_116e7b60();
  /* 116e3ebd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3ec0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e3ec2 jne 0x116e3ec8 */
  if (!C.zf) goto L_116e3ec8;
  /* 116e3ec4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e3ec6 jmp 0x116e3eca */
  goto L_116e3eca;
L_116e3ec8:;
  /* 116e3ec8 jmp 0x116e3e74 */
  goto L_116e3e74;
L_116e3eca:;
  /* 116e3eca mov esp, ebp */
  ESP = (EBP);
  /* 116e3ecc pop ebp */
  EBP = (pop32());
  /* 116e3ecd ret  */
  ESPCHK(0x116e3e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ed0 @ 0x116e3ed0 (23 bytes, 11 insns) */
void f_116e3ed0(void) {
  FTRACE(0x116e3ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e3ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e3ed1 mov ebp, esp */
  EBP = (ESP);
  /* 116e3ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e3ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e3ed7 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e3ed9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e3edc push eax */
  push32((uint32_t)(EAX));
  /* 116e3edd call 0x116e3ef0 */
  push32(0x116e3ee2u); f_116e3ef0();
  /* 116e3ee2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3ee5 pop ebp */
  EBP = (pop32());
  /* 116e3ee6 ret  */
  ESPCHK(0x116e3ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ef0 @ 0x116e3ef0 (787 bytes, 254 insns) */
void f_116e3ef0(void) {
  FTRACE(0x116e3ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e3ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e3ef1 mov ebp, esp */
  EBP = (ESP);
  /* 116e3ef3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e3ef6 push ebx */
  push32((uint32_t)(EBX));
  /* 116e3ef7 push esi */
  push32((uint32_t)(ESI));
  /* 116e3ef8 push edi */
  push32((uint32_t)(EDI));
  /* 116e3ef9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116e3f00 mov eax, dword ptr [0x1170da84] */
  EAX = (r32((uint32_t)(0x1170da84)));
  /* 116e3f05 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 116e3f08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e3f0a je 0x116e3f3c */
  if (C.zf) goto L_116e3f3c;
L_116e3f0c:;
  /* 116e3f0c call 0x116e4fc0 */
  push32(0x116e3f11u); f_116e4fc0();
  /* 116e3f11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e3f13 jne 0x116e3f36 */
  if (!C.zf) goto L_116e3f36;
  /* 116e3f15 push 0x1170a55c */
  push32((uint32_t)(0x1170a55cu));
  /* 116e3f1a push 0 */
  push32((uint32_t)(0x0u));
  /* 116e3f1c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 116e3f21 push 0x1170a550 */
  push32((uint32_t)(0x1170a550u));
  /* 116e3f26 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e3f28 call 0x116e2ee0 */
  push32(0x116e3f2du); f_116e2ee0();
  /* 116e3f2d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3f30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3f33 jne 0x116e3f36 */
  if (!C.zf) goto L_116e3f36;
  /* 116e3f35 int3  */
  x86_unimpl("int3 @ 0x116e3f35");
L_116e3f36:;
  /* 116e3f36 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e3f38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e3f3a jne 0x116e3f0c */
  if (!C.zf) goto L_116e3f0c;
L_116e3f3c:;
  /* 116e3f3c mov edx, dword ptr [0x1170da88] */
  EDX = (r32((uint32_t)(0x1170da88)));
  /* 116e3f42 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116e3f45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e3f48 cmp eax, dword ptr [0x1170da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1170da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3f4e jne 0x116e3f51 */
  if (!C.zf) goto L_116e3f51;
  /* 116e3f50 int3  */
  x86_unimpl("int3 @ 0x116e3f50");
L_116e3f51:;
  /* 116e3f51 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e3f54 push ecx */
  push32((uint32_t)(ECX));
  /* 116e3f55 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e3f58 push edx */
  push32((uint32_t)(EDX));
  /* 116e3f59 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e3f5c push eax */
  push32((uint32_t)(EAX));
  /* 116e3f5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e3f60 push ecx */
  push32((uint32_t)(ECX));
  /* 116e3f61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e3f64 push edx */
  push32((uint32_t)(EDX));
  /* 116e3f65 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e3f67 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e3f69 call dword ptr [0x1170dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1170dc90))), 0x116e3f6fu);
  /* 116e3f6f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3f72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e3f74 jne 0x116e3fd4 */
  if (!C.zf) goto L_116e3fd4;
  /* 116e3f76 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3f7a je 0x116e3fa7 */
  if (C.zf) goto L_116e3fa7;
L_116e3f7c:;
  /* 116e3f7c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e3f7f push eax */
  push32((uint32_t)(EAX));
  /* 116e3f80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e3f83 push ecx */
  push32((uint32_t)(ECX));
  /* 116e3f84 push 0x1170a518 */
  push32((uint32_t)(0x1170a518u));
  /* 116e3f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e3f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 116e3f8d push 0 */
  push32((uint32_t)(0x0u));
  /* 116e3f8f push 0 */
  push32((uint32_t)(0x0u));
  /* 116e3f91 call 0x116e2ee0 */
  push32(0x116e3f96u); f_116e2ee0();
  /* 116e3f96 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3f99 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3f9c jne 0x116e3f9f */
  if (!C.zf) goto L_116e3f9f;
  /* 116e3f9e int3  */
  x86_unimpl("int3 @ 0x116e3f9e");
L_116e3f9f:;
  /* 116e3f9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e3fa1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e3fa3 jne 0x116e3f7c */
  if (!C.zf) goto L_116e3f7c;
  /* 116e3fa5 jmp 0x116e3fcd */
  goto L_116e3fcd;
L_116e3fa7:;
  /* 116e3fa7 push 0x1170a4f4 */
  push32((uint32_t)(0x1170a4f4u));
  /* 116e3fac push 0x1170a4f0 */
  push32((uint32_t)(0x1170a4f0u));
  /* 116e3fb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e3fb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e3fb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e3fb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e3fb9 call 0x116e2ee0 */
  push32(0x116e3fbeu); f_116e2ee0();
  /* 116e3fbe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e3fc1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3fc4 jne 0x116e3fc7 */
  if (!C.zf) goto L_116e3fc7;
  /* 116e3fc6 int3  */
  x86_unimpl("int3 @ 0x116e3fc6");
L_116e3fc7:;
  /* 116e3fc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e3fc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e3fcb jne 0x116e3fa7 */
  if (!C.zf) goto L_116e3fa7;
L_116e3fcd:;
  /* 116e3fcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e3fcf jmp 0x116e41fc */
  goto L_116e41fc;
L_116e3fd4:;
  /* 116e3fd4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e3fd7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116e3fdd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3fe0 je 0x116e3ff6 */
  if (C.zf) goto L_116e3ff6;
  /* 116e3fe2 mov edx, dword ptr [0x1170da84] */
  EDX = (r32((uint32_t)(0x1170da84)));
  /* 116e3fe8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116e3feb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e3fed jne 0x116e3ff6 */
  if (!C.zf) goto L_116e3ff6;
  /* 116e3fef mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_116e3ff6:;
  /* 116e3ff6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e3ffa ja 0x116e4007 */
  if ((!C.cf&&!C.zf)) goto L_116e4007;
  /* 116e3ffc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e3fff add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4002 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4005 jbe 0x116e4033 */
  if ((C.cf||C.zf)) goto L_116e4033;
L_116e4007:;
  /* 116e4007 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e400a push ecx */
  push32((uint32_t)(ECX));
  /* 116e400b push 0x1170a4cc */
  push32((uint32_t)(0x1170a4ccu));
  /* 116e4010 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4012 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4014 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4016 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e4018 call 0x116e2ee0 */
  push32(0x116e401du); f_116e2ee0();
  /* 116e401d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4020 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4023 jne 0x116e4026 */
  if (!C.zf) goto L_116e4026;
  /* 116e4025 int3  */
  x86_unimpl("int3 @ 0x116e4025");
L_116e4026:;
  /* 116e4026 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e4028 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e402a jne 0x116e4007 */
  if (!C.zf) goto L_116e4007;
  /* 116e402c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e402e jmp 0x116e41fc */
  goto L_116e41fc;
L_116e4033:;
  /* 116e4033 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e4036 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e403b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e403e je 0x116e4080 */
  if (C.zf) goto L_116e4080;
  /* 116e4040 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4044 je 0x116e4080 */
  if (C.zf) goto L_116e4080;
  /* 116e4046 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e4049 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116e404f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4052 je 0x116e4080 */
  if (C.zf) goto L_116e4080;
  /* 116e4054 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4058 je 0x116e4080 */
  if (C.zf) goto L_116e4080;
L_116e405a:;
  /* 116e405a push 0x1170a498 */
  push32((uint32_t)(0x1170a498u));
  /* 116e405f push 0x1170a4f0 */
  push32((uint32_t)(0x1170a4f0u));
  /* 116e4064 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4066 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4068 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e406a push 1 */
  push32((uint32_t)(0x1u));
  /* 116e406c call 0x116e2ee0 */
  push32(0x116e4071u); f_116e2ee0();
  /* 116e4071 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4074 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4077 jne 0x116e407a */
  if (!C.zf) goto L_116e407a;
  /* 116e4079 int3  */
  x86_unimpl("int3 @ 0x116e4079");
L_116e407a:;
  /* 116e407a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e407c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e407e jne 0x116e405a */
  if (!C.zf) goto L_116e405a;
L_116e4080:;
  /* 116e4080 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e4083 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4086 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116e4089 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e408c push ecx */
  push32((uint32_t)(ECX));
  /* 116e408d call 0x116e7c70 */
  push32(0x116e4092u); f_116e7c70();
  /* 116e4092 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4095 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e4098 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e409c jne 0x116e40a5 */
  if (!C.zf) goto L_116e40a5;
  /* 116e409e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e40a0 jmp 0x116e41fc */
  goto L_116e41fc;
L_116e40a5:;
  /* 116e40a5 mov edx, dword ptr [0x1170da88] */
  EDX = (r32((uint32_t)(0x1170da88)));
  /* 116e40ab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e40ae mov dword ptr [0x1170da88], edx */
  w32((uint32_t)(0x1170da88), (EDX));
  /* 116e40b4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e40b8 je 0x116e4103 */
  if (C.zf) goto L_116e4103;
  /* 116e40ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e40bd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116e40c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e40c6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 116e40cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e40d0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 116e40d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e40da mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 116e40e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e40e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e40e7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 116e40ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e40ed mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 116e40f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e40f7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 116e40fe jmp 0x116e41a3 */
  goto L_116e41a3;
L_116e4103:;
  /* 116e4103 mov edx, dword ptr [0x1170f678] */
  EDX = (r32((uint32_t)(0x1170f678)));
  /* 116e4109 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e410c mov dword ptr [0x1170f678], edx */
  w32((uint32_t)(0x1170f678), (EDX));
  /* 116e4112 mov eax, dword ptr [0x1170f680] */
  EAX = (r32((uint32_t)(0x1170f680)));
  /* 116e4117 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e411a mov dword ptr [0x1170f680], eax */
  w32((uint32_t)(0x1170f680), (EAX));
  /* 116e411f mov ecx, dword ptr [0x1170f680] */
  ECX = (r32((uint32_t)(0x1170f680)));
  /* 116e4125 cmp ecx, dword ptr [0x1170f684] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1170f684))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e412b jbe 0x116e4139 */
  if ((C.cf||C.zf)) goto L_116e4139;
  /* 116e412d mov edx, dword ptr [0x1170f680] */
  EDX = (r32((uint32_t)(0x1170f680)));
  /* 116e4133 mov dword ptr [0x1170f684], edx */
  w32((uint32_t)(0x1170f684), (EDX));
L_116e4139:;
  /* 116e4139 cmp dword ptr [0x1170f67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4140 je 0x116e414f */
  if (C.zf) goto L_116e414f;
  /* 116e4142 mov eax, dword ptr [0x1170f67c] */
  EAX = (r32((uint32_t)(0x1170f67c)));
  /* 116e4147 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e414a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 116e414d jmp 0x116e4158 */
  goto L_116e4158;
L_116e414f:;
  /* 116e414f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4152 mov dword ptr [0x1170f674], edx */
  w32((uint32_t)(0x1170f674), (EDX));
L_116e4158:;
  /* 116e4158 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e415b mov ecx, dword ptr [0x1170f67c] */
  ECX = (r32((uint32_t)(0x1170f67c)));
  /* 116e4161 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 116e4163 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4166 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 116e416d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4170 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e4173 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 116e4176 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4179 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e417c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 116e417f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4182 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e4185 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 116e4188 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e418b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e418e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 116e4191 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4194 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e4197 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 116e419a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e419d mov dword ptr [0x1170f67c], ecx */
  w32((uint32_t)(0x1170f67c), (ECX));
L_116e41a3:;
  /* 116e41a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e41a5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e41a7 mov dl, byte ptr [0x1170da90] */
  DL = (r8((uint32_t)(0x1170da90)));
  /* 116e41ad push edx */
  push32((uint32_t)(EDX));
  /* 116e41ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e41b1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e41b4 push eax */
  push32((uint32_t)(EAX));
  /* 116e41b5 call 0x116e7b90 */
  push32(0x116e41bau); f_116e7b90();
  /* 116e41ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e41bd push 4 */
  push32((uint32_t)(0x4u));
  /* 116e41bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e41c1 mov cl, byte ptr [0x1170da90] */
  CL = (r8((uint32_t)(0x1170da90)));
  /* 116e41c7 push ecx */
  push32((uint32_t)(ECX));
  /* 116e41c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e41cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e41ce lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 116e41d2 push ecx */
  push32((uint32_t)(ECX));
  /* 116e41d3 call 0x116e7b90 */
  push32(0x116e41d8u); f_116e7b90();
  /* 116e41d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e41db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e41de push edx */
  push32((uint32_t)(EDX));
  /* 116e41df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e41e1 mov al, byte ptr [0x1170da92] */
  AL = (r8((uint32_t)(0x1170da92)));
  /* 116e41e6 push eax */
  push32((uint32_t)(EAX));
  /* 116e41e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e41ea add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e41ed push ecx */
  push32((uint32_t)(ECX));
  /* 116e41ee call 0x116e7b90 */
  push32(0x116e41f3u); f_116e7b90();
  /* 116e41f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e41f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e41f9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_116e41fc:;
  /* 116e41fc pop edi */
  EDI = (pop32());
  /* 116e41fd pop esi */
  ESI = (pop32());
  /* 116e41fe pop ebx */
  EBX = (pop32());
  /* 116e41ff mov esp, ebp */
  ESP = (EBP);
  /* 116e4201 pop ebp */
  EBP = (pop32());
  /* 116e4202 ret  */
  ESPCHK(0x116e3ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004210 @ 0x116e4210 (27 bytes, 13 insns) */
void f_116e4210(void) {
  FTRACE(0x116e4210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e4210 push ebp */
  push32((uint32_t)(EBP));
  /* 116e4211 mov ebp, esp */
  EBP = (ESP);
  /* 116e4213 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4215 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4217 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e4219 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e421c push eax */
  push32((uint32_t)(EAX));
  /* 116e421d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e4220 push ecx */
  push32((uint32_t)(ECX));
  /* 116e4221 call 0x116e4230 */
  push32(0x116e4226u); f_116e4230();
  /* 116e4226 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4229 pop ebp */
  EBP = (pop32());
  /* 116e422a ret  */
  ESPCHK(0x116e4210u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x116e4230 (96 bytes, 37 insns) */
void f_116e4230(void) {
  FTRACE(0x116e4230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e4230 push ebp */
  push32((uint32_t)(EBP));
  /* 116e4231 mov ebp, esp */
  EBP = (ESP);
  /* 116e4233 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e4236 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e4239 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e423d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 116e4240 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e4243 push ecx */
  push32((uint32_t)(ECX));
  /* 116e4244 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e4247 push edx */
  push32((uint32_t)(EDX));
  /* 116e4248 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e424b push eax */
  push32((uint32_t)(EAX));
  /* 116e424c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e424f push ecx */
  push32((uint32_t)(ECX));
  /* 116e4250 call 0x116e3e20 */
  push32(0x116e4255u); f_116e3e20();
  /* 116e4255 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4258 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116e425b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e425f je 0x116e4289 */
  if (C.zf) goto L_116e4289;
  /* 116e4261 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e4264 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116e4267 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e426a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e426d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116e4270:;
  /* 116e4270 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e4273 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4276 jae 0x116e4289 */
  if (!C.cf) goto L_116e4289;
  /* 116e4278 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e427b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 116e427e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e4281 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4284 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116e4287 jmp 0x116e4270 */
  goto L_116e4270;
L_116e4289:;
  /* 116e4289 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e428c mov esp, ebp */
  ESP = (EBP);
  /* 116e428e pop ebp */
  EBP = (pop32());
  /* 116e428f ret  */
  ESPCHK(0x116e4230u, _esp0);
  ESP += 4; return;
}

/* FUN_10004290 @ 0x116e4290 (27 bytes, 13 insns) */
void f_116e4290(void) {
  FTRACE(0x116e4290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e4290 push ebp */
  push32((uint32_t)(EBP));
  /* 116e4291 mov ebp, esp */
  EBP = (ESP);
  /* 116e4293 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4295 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4297 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e4299 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e429c push eax */
  push32((uint32_t)(EAX));
  /* 116e429d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e42a0 push ecx */
  push32((uint32_t)(ECX));
  /* 116e42a1 call 0x116e42b0 */
  push32(0x116e42a6u); f_116e42b0();
  /* 116e42a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e42a9 pop ebp */
  EBP = (pop32());
  /* 116e42aa ret  */
  ESPCHK(0x116e4290u, _esp0);
  ESP += 4; return;
}

/* FUN_100042b0 @ 0x116e42b0 (64 bytes, 27 insns) */
void f_116e42b0(void) {
  FTRACE(0x116e42b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e42b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e42b1 mov ebp, esp */
  EBP = (ESP);
  /* 116e42b3 push ecx */
  push32((uint32_t)(ECX));
  /* 116e42b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e42b6 call 0x116e7820 */
  push32(0x116e42bbu); f_116e7820();
  /* 116e42bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e42be push 1 */
  push32((uint32_t)(0x1u));
  /* 116e42c0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e42c3 push eax */
  push32((uint32_t)(EAX));
  /* 116e42c4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e42c7 push ecx */
  push32((uint32_t)(ECX));
  /* 116e42c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e42cb push edx */
  push32((uint32_t)(EDX));
  /* 116e42cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e42cf push eax */
  push32((uint32_t)(EAX));
  /* 116e42d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e42d3 push ecx */
  push32((uint32_t)(ECX));
  /* 116e42d4 call 0x116e42f0 */
  push32(0x116e42d9u); f_116e42f0();
  /* 116e42d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e42dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e42df push 9 */
  push32((uint32_t)(0x9u));
  /* 116e42e1 call 0x116e78c0 */
  push32(0x116e42e6u); f_116e78c0();
  /* 116e42e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e42e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e42ec mov esp, ebp */
  ESP = (EBP);
  /* 116e42ee pop ebp */
  EBP = (pop32());
  /* 116e42ef ret  */
  ESPCHK(0x116e42b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100042f0 @ 0x116e42f0 (1297 bytes, 431 insns) */
void f_116e42f0(void) {
  FTRACE(0x116e42f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e42f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e42f1 mov ebp, esp */
  EBP = (ESP);
  /* 116e42f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e42f6 push ebx */
  push32((uint32_t)(EBX));
  /* 116e42f7 push esi */
  push32((uint32_t)(ESI));
  /* 116e42f8 push edi */
  push32((uint32_t)(EDI));
  /* 116e42f9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 116e4300 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4304 jne 0x116e4323 */
  if (!C.zf) goto L_116e4323;
  /* 116e4306 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e4309 push eax */
  push32((uint32_t)(EAX));
  /* 116e430a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e430d push ecx */
  push32((uint32_t)(ECX));
  /* 116e430e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e4311 push edx */
  push32((uint32_t)(EDX));
  /* 116e4312 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e4315 push eax */
  push32((uint32_t)(EAX));
  /* 116e4316 call 0x116e3e20 */
  push32(0x116e431bu); f_116e3e20();
  /* 116e431b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e431e jmp 0x116e47fa */
  goto L_116e47fa;
L_116e4323:;
  /* 116e4323 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4327 je 0x116e4346 */
  if (C.zf) goto L_116e4346;
  /* 116e4329 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e432d jne 0x116e4346 */
  if (!C.zf) goto L_116e4346;
  /* 116e432f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e4332 push ecx */
  push32((uint32_t)(ECX));
  /* 116e4333 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e4336 push edx */
  push32((uint32_t)(EDX));
  /* 116e4337 call 0x116e48b0 */
  push32(0x116e433cu); f_116e48b0();
  /* 116e433c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e433f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e4341 jmp 0x116e47fa */
  goto L_116e47fa;
L_116e4346:;
  /* 116e4346 mov eax, dword ptr [0x1170da84] */
  EAX = (r32((uint32_t)(0x1170da84)));
  /* 116e434b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 116e434e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e4350 je 0x116e4382 */
  if (C.zf) goto L_116e4382;
L_116e4352:;
  /* 116e4352 call 0x116e4fc0 */
  push32(0x116e4357u); f_116e4fc0();
  /* 116e4357 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e4359 jne 0x116e437c */
  if (!C.zf) goto L_116e437c;
  /* 116e435b push 0x1170a55c */
  push32((uint32_t)(0x1170a55cu));
  /* 116e4360 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4362 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 116e4367 push 0x1170a550 */
  push32((uint32_t)(0x1170a550u));
  /* 116e436c push 2 */
  push32((uint32_t)(0x2u));
  /* 116e436e call 0x116e2ee0 */
  push32(0x116e4373u); f_116e2ee0();
  /* 116e4373 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4376 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4379 jne 0x116e437c */
  if (!C.zf) goto L_116e437c;
  /* 116e437b int3  */
  x86_unimpl("int3 @ 0x116e437b");
L_116e437c:;
  /* 116e437c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e437e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e4380 jne 0x116e4352 */
  if (!C.zf) goto L_116e4352;
L_116e4382:;
  /* 116e4382 mov edx, dword ptr [0x1170da88] */
  EDX = (r32((uint32_t)(0x1170da88)));
  /* 116e4388 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 116e438b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e438e cmp eax, dword ptr [0x1170da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1170da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4394 jne 0x116e4397 */
  if (!C.zf) goto L_116e4397;
  /* 116e4396 int3  */
  x86_unimpl("int3 @ 0x116e4396");
L_116e4397:;
  /* 116e4397 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e439a push ecx */
  push32((uint32_t)(ECX));
  /* 116e439b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e439e push edx */
  push32((uint32_t)(EDX));
  /* 116e439f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e43a2 push eax */
  push32((uint32_t)(EAX));
  /* 116e43a3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e43a6 push ecx */
  push32((uint32_t)(ECX));
  /* 116e43a7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e43aa push edx */
  push32((uint32_t)(EDX));
  /* 116e43ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e43ae push eax */
  push32((uint32_t)(EAX));
  /* 116e43af push 2 */
  push32((uint32_t)(0x2u));
  /* 116e43b1 call dword ptr [0x1170dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1170dc90))), 0x116e43b7u);
  /* 116e43b7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e43ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e43bc jne 0x116e441c */
  if (!C.zf) goto L_116e441c;
  /* 116e43be cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e43c2 je 0x116e43ef */
  if (C.zf) goto L_116e43ef;
L_116e43c4:;
  /* 116e43c4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e43c7 push ecx */
  push32((uint32_t)(ECX));
  /* 116e43c8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e43cb push edx */
  push32((uint32_t)(EDX));
  /* 116e43cc push 0x1170a6d8 */
  push32((uint32_t)(0x1170a6d8u));
  /* 116e43d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e43d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e43d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e43d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e43d9 call 0x116e2ee0 */
  push32(0x116e43deu); f_116e2ee0();
  /* 116e43de add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e43e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e43e4 jne 0x116e43e7 */
  if (!C.zf) goto L_116e43e7;
  /* 116e43e6 int3  */
  x86_unimpl("int3 @ 0x116e43e6");
L_116e43e7:;
  /* 116e43e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e43e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e43eb jne 0x116e43c4 */
  if (!C.zf) goto L_116e43c4;
  /* 116e43ed jmp 0x116e4415 */
  goto L_116e4415;
L_116e43ef:;
  /* 116e43ef push 0x1170a6b4 */
  push32((uint32_t)(0x1170a6b4u));
  /* 116e43f4 push 0x1170a4f0 */
  push32((uint32_t)(0x1170a4f0u));
  /* 116e43f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e43fb push 0 */
  push32((uint32_t)(0x0u));
  /* 116e43fd push 0 */
  push32((uint32_t)(0x0u));
  /* 116e43ff push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4401 call 0x116e2ee0 */
  push32(0x116e4406u); f_116e2ee0();
  /* 116e4406 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4409 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e440c jne 0x116e440f */
  if (!C.zf) goto L_116e440f;
  /* 116e440e int3  */
  x86_unimpl("int3 @ 0x116e440e");
L_116e440f:;
  /* 116e440f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e4411 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e4413 jne 0x116e43ef */
  if (!C.zf) goto L_116e43ef;
L_116e4415:;
  /* 116e4415 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e4417 jmp 0x116e47fa */
  goto L_116e47fa;
L_116e441c:;
  /* 116e441c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4420 jbe 0x116e444e */
  if ((C.cf||C.zf)) goto L_116e444e;
L_116e4422:;
  /* 116e4422 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e4425 push edx */
  push32((uint32_t)(EDX));
  /* 116e4426 push 0x1170a684 */
  push32((uint32_t)(0x1170a684u));
  /* 116e442b push 0 */
  push32((uint32_t)(0x0u));
  /* 116e442d push 0 */
  push32((uint32_t)(0x0u));
  /* 116e442f push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4431 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e4433 call 0x116e2ee0 */
  push32(0x116e4438u); f_116e2ee0();
  /* 116e4438 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e443b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e443e jne 0x116e4441 */
  if (!C.zf) goto L_116e4441;
  /* 116e4440 int3  */
  x86_unimpl("int3 @ 0x116e4440");
L_116e4441:;
  /* 116e4441 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e4443 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e4445 jne 0x116e4422 */
  if (!C.zf) goto L_116e4422;
  /* 116e4447 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e4449 jmp 0x116e47fa */
  goto L_116e47fa;
L_116e444e:;
  /* 116e444e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4452 je 0x116e4496 */
  if (C.zf) goto L_116e4496;
  /* 116e4454 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e4457 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116e445d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4460 je 0x116e4496 */
  if (C.zf) goto L_116e4496;
  /* 116e4462 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e4465 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116e446b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e446e je 0x116e4496 */
  if (C.zf) goto L_116e4496;
L_116e4470:;
  /* 116e4470 push 0x1170a498 */
  push32((uint32_t)(0x1170a498u));
  /* 116e4475 push 0x1170a4f0 */
  push32((uint32_t)(0x1170a4f0u));
  /* 116e447a push 0 */
  push32((uint32_t)(0x0u));
  /* 116e447c push 0 */
  push32((uint32_t)(0x0u));
  /* 116e447e push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4480 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e4482 call 0x116e2ee0 */
  push32(0x116e4487u); f_116e2ee0();
  /* 116e4487 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e448a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e448d jne 0x116e4490 */
  if (!C.zf) goto L_116e4490;
  /* 116e448f int3  */
  x86_unimpl("int3 @ 0x116e448f");
L_116e4490:;
  /* 116e4490 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e4492 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e4494 jne 0x116e4470 */
  if (!C.zf) goto L_116e4470;
L_116e4496:;
  /* 116e4496 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e4499 push ecx */
  push32((uint32_t)(ECX));
  /* 116e449a call 0x116e5420 */
  push32(0x116e449fu); f_116e5420();
  /* 116e449f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e44a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e44a4 jne 0x116e44c7 */
  if (!C.zf) goto L_116e44c7;
  /* 116e44a6 push 0x1170a660 */
  push32((uint32_t)(0x1170a660u));
  /* 116e44ab push 0 */
  push32((uint32_t)(0x0u));
  /* 116e44ad push 0x261 */
  push32((uint32_t)(0x261u));
  /* 116e44b2 push 0x1170a550 */
  push32((uint32_t)(0x1170a550u));
  /* 116e44b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e44b9 call 0x116e2ee0 */
  push32(0x116e44beu); f_116e2ee0();
  /* 116e44be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e44c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e44c4 jne 0x116e44c7 */
  if (!C.zf) goto L_116e44c7;
  /* 116e44c6 int3  */
  x86_unimpl("int3 @ 0x116e44c6");
L_116e44c7:;
  /* 116e44c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e44c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e44cb jne 0x116e4496 */
  if (!C.zf) goto L_116e4496;
  /* 116e44cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e44d0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e44d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116e44d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e44d9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e44dd jne 0x116e44e6 */
  if (!C.zf) goto L_116e44e6;
  /* 116e44df mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_116e44e6:;
  /* 116e44e6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e44ea je 0x116e452a */
  if (C.zf) goto L_116e452a;
L_116e44ec:;
  /* 116e44ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e44ef cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e44f6 jne 0x116e4501 */
  if (!C.zf) goto L_116e4501;
  /* 116e44f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e44fb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e44ff je 0x116e4522 */
  if (C.zf) goto L_116e4522;
L_116e4501:;
  /* 116e4501 push 0x1170a618 */
  push32((uint32_t)(0x1170a618u));
  /* 116e4506 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4508 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 116e450d push 0x1170a550 */
  push32((uint32_t)(0x1170a550u));
  /* 116e4512 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e4514 call 0x116e2ee0 */
  push32(0x116e4519u); f_116e2ee0();
  /* 116e4519 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e451c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e451f jne 0x116e4522 */
  if (!C.zf) goto L_116e4522;
  /* 116e4521 int3  */
  x86_unimpl("int3 @ 0x116e4521");
L_116e4522:;
  /* 116e4522 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e4524 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e4526 jne 0x116e44ec */
  if (!C.zf) goto L_116e44ec;
  /* 116e4528 jmp 0x116e458e */
  goto L_116e458e;
L_116e452a:;
  /* 116e452a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e452d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116e4530 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e4535 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4538 jne 0x116e454f */
  if (!C.zf) goto L_116e454f;
  /* 116e453a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e453d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116e4543 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4546 jne 0x116e454f */
  if (!C.zf) goto L_116e454f;
  /* 116e4548 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_116e454f:;
  /* 116e454f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e4552 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116e4555 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e455a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e455d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116e4563 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4565 je 0x116e4588 */
  if (C.zf) goto L_116e4588;
  /* 116e4567 push 0x1170a5dc */
  push32((uint32_t)(0x1170a5dcu));
  /* 116e456c push 0 */
  push32((uint32_t)(0x0u));
  /* 116e456e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 116e4573 push 0x1170a550 */
  push32((uint32_t)(0x1170a550u));
  /* 116e4578 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e457a call 0x116e2ee0 */
  push32(0x116e457fu); f_116e2ee0();
  /* 116e457f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4582 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4585 jne 0x116e4588 */
  if (!C.zf) goto L_116e4588;
  /* 116e4587 int3  */
  x86_unimpl("int3 @ 0x116e4587");
L_116e4588:;
  /* 116e4588 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e458a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e458c jne 0x116e454f */
  if (!C.zf) goto L_116e454f;
L_116e458e:;
  /* 116e458e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4592 je 0x116e45b9 */
  if (C.zf) goto L_116e45b9;
  /* 116e4594 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e4597 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e459a push eax */
  push32((uint32_t)(EAX));
  /* 116e459b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e459e push ecx */
  push32((uint32_t)(ECX));
  /* 116e459f call 0x116e7da0 */
  push32(0x116e45a4u); f_116e7da0();
  /* 116e45a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e45a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116e45aa cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e45ae jne 0x116e45b7 */
  if (!C.zf) goto L_116e45b7;
  /* 116e45b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e45b2 jmp 0x116e47fa */
  goto L_116e47fa;
L_116e45b7:;
  /* 116e45b7 jmp 0x116e45dc */
  goto L_116e45dc;
L_116e45b9:;
  /* 116e45b9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e45bc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e45bf push edx */
  push32((uint32_t)(EDX));
  /* 116e45c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e45c3 push eax */
  push32((uint32_t)(EAX));
  /* 116e45c4 call 0x116e7cf0 */
  push32(0x116e45c9u); f_116e7cf0();
  /* 116e45c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e45cc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116e45cf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e45d3 jne 0x116e45dc */
  if (!C.zf) goto L_116e45dc;
  /* 116e45d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e45d7 jmp 0x116e47fa */
  goto L_116e47fa;
L_116e45dc:;
  /* 116e45dc mov ecx, dword ptr [0x1170da88] */
  ECX = (r32((uint32_t)(0x1170da88)));
  /* 116e45e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e45e5 mov dword ptr [0x1170da88], ecx */
  w32((uint32_t)(0x1170da88), (ECX));
  /* 116e45eb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e45ef jne 0x116e4647 */
  if (!C.zf) goto L_116e4647;
  /* 116e45f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e45f4 mov eax, dword ptr [0x1170f678] */
  EAX = (r32((uint32_t)(0x1170f678)));
  /* 116e45f9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e45fc mov dword ptr [0x1170f678], eax */
  w32((uint32_t)(0x1170f678), (EAX));
  /* 116e4601 mov ecx, dword ptr [0x1170f678] */
  ECX = (r32((uint32_t)(0x1170f678)));
  /* 116e4607 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e460a mov dword ptr [0x1170f678], ecx */
  w32((uint32_t)(0x1170f678), (ECX));
  /* 116e4610 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e4613 mov eax, dword ptr [0x1170f680] */
  EAX = (r32((uint32_t)(0x1170f680)));
  /* 116e4618 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e461b mov dword ptr [0x1170f680], eax */
  w32((uint32_t)(0x1170f680), (EAX));
  /* 116e4620 mov ecx, dword ptr [0x1170f680] */
  ECX = (r32((uint32_t)(0x1170f680)));
  /* 116e4626 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4629 mov dword ptr [0x1170f680], ecx */
  w32((uint32_t)(0x1170f680), (ECX));
  /* 116e462f mov edx, dword ptr [0x1170f680] */
  EDX = (r32((uint32_t)(0x1170f680)));
  /* 116e4635 cmp edx, dword ptr [0x1170f684] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1170f684))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e463b jbe 0x116e4647 */
  if ((C.cf||C.zf)) goto L_116e4647;
  /* 116e463d mov eax, dword ptr [0x1170f680] */
  EAX = (r32((uint32_t)(0x1170f680)));
  /* 116e4642 mov dword ptr [0x1170f684], eax */
  w32((uint32_t)(0x1170f684), (EAX));
L_116e4647:;
  /* 116e4647 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e464a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e464d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116e4650 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e4653 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e4656 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4659 jbe 0x116e467f */
  if ((C.cf||C.zf)) goto L_116e467f;
  /* 116e465b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e465e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e4661 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e4664 push edx */
  push32((uint32_t)(EDX));
  /* 116e4665 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e4667 mov al, byte ptr [0x1170da92] */
  AL = (r8((uint32_t)(0x1170da92)));
  /* 116e466c push eax */
  push32((uint32_t)(EAX));
  /* 116e466d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e4670 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4673 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4676 push edx */
  push32((uint32_t)(EDX));
  /* 116e4677 call 0x116e7b90 */
  push32(0x116e467cu); f_116e7b90();
  /* 116e467c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e467f:;
  /* 116e467f push 4 */
  push32((uint32_t)(0x4u));
  /* 116e4681 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e4683 mov al, byte ptr [0x1170da90] */
  AL = (r8((uint32_t)(0x1170da90)));
  /* 116e4688 push eax */
  push32((uint32_t)(EAX));
  /* 116e4689 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e468c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e468f push ecx */
  push32((uint32_t)(ECX));
  /* 116e4690 call 0x116e7b90 */
  push32(0x116e4695u); f_116e7b90();
  /* 116e4695 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4698 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e469c jne 0x116e46b9 */
  if (!C.zf) goto L_116e46b9;
  /* 116e469e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e46a1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e46a4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 116e46a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e46aa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e46ad mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 116e46b0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e46b3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e46b6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_116e46b9:;
  /* 116e46b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e46bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e46bf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_116e46c2:;
  /* 116e46c2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e46c6 jne 0x116e46f7 */
  if (!C.zf) goto L_116e46f7;
  /* 116e46c8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e46cc jne 0x116e46d6 */
  if (!C.zf) goto L_116e46d6;
  /* 116e46ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e46d1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e46d4 je 0x116e46f7 */
  if (C.zf) goto L_116e46f7;
L_116e46d6:;
  /* 116e46d6 push 0x1170a5a8 */
  push32((uint32_t)(0x1170a5a8u));
  /* 116e46db push 0 */
  push32((uint32_t)(0x0u));
  /* 116e46dd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 116e46e2 push 0x1170a550 */
  push32((uint32_t)(0x1170a550u));
  /* 116e46e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e46e9 call 0x116e2ee0 */
  push32(0x116e46eeu); f_116e2ee0();
  /* 116e46ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e46f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e46f4 jne 0x116e46f7 */
  if (!C.zf) goto L_116e46f7;
  /* 116e46f6 int3  */
  x86_unimpl("int3 @ 0x116e46f6");
L_116e46f7:;
  /* 116e46f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e46f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e46fb jne 0x116e46c2 */
  if (!C.zf) goto L_116e46c2;
  /* 116e46fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e4700 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4703 je 0x116e470b */
  if (C.zf) goto L_116e470b;
  /* 116e4705 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4709 je 0x116e4713 */
  if (C.zf) goto L_116e4713;
L_116e470b:;
  /* 116e470b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e470e jmp 0x116e47fa */
  goto L_116e47fa;
L_116e4713:;
  /* 116e4713 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e4716 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4719 je 0x116e472b */
  if (C.zf) goto L_116e472b;
  /* 116e471b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e471e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116e4720 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e4723 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116e4726 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 116e4729 jmp 0x116e4767 */
  goto L_116e4767;
L_116e472b:;
  /* 116e472b mov eax, dword ptr [0x1170f674] */
  EAX = (r32((uint32_t)(0x1170f674)));
  /* 116e4730 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4733 je 0x116e4756 */
  if (C.zf) goto L_116e4756;
  /* 116e4735 push 0x1170a58c */
  push32((uint32_t)(0x1170a58cu));
  /* 116e473a push 0 */
  push32((uint32_t)(0x0u));
  /* 116e473c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 116e4741 push 0x1170a550 */
  push32((uint32_t)(0x1170a550u));
  /* 116e4746 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e4748 call 0x116e2ee0 */
  push32(0x116e474du); f_116e2ee0();
  /* 116e474d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4750 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4753 jne 0x116e4756 */
  if (!C.zf) goto L_116e4756;
  /* 116e4755 int3  */
  x86_unimpl("int3 @ 0x116e4755");
L_116e4756:;
  /* 116e4756 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e4758 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e475a jne 0x116e472b */
  if (!C.zf) goto L_116e472b;
  /* 116e475c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e475f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116e4762 mov dword ptr [0x1170f674], eax */
  w32((uint32_t)(0x1170f674), (EAX));
L_116e4767:;
  /* 116e4767 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e476a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e476e je 0x116e477f */
  if (C.zf) goto L_116e477f;
  /* 116e4770 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e4773 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116e4776 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e4779 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116e477b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116e477d jmp 0x116e47ba */
  goto L_116e47ba;
L_116e477f:;
  /* 116e477f mov eax, dword ptr [0x1170f67c] */
  EAX = (r32((uint32_t)(0x1170f67c)));
  /* 116e4784 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4787 je 0x116e47aa */
  if (C.zf) goto L_116e47aa;
  /* 116e4789 push 0x1170a570 */
  push32((uint32_t)(0x1170a570u));
  /* 116e478e push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4790 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 116e4795 push 0x1170a550 */
  push32((uint32_t)(0x1170a550u));
  /* 116e479a push 2 */
  push32((uint32_t)(0x2u));
  /* 116e479c call 0x116e2ee0 */
  push32(0x116e47a1u); f_116e2ee0();
  /* 116e47a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e47a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e47a7 jne 0x116e47aa */
  if (!C.zf) goto L_116e47aa;
  /* 116e47a9 int3  */
  x86_unimpl("int3 @ 0x116e47a9");
L_116e47aa:;
  /* 116e47aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e47ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e47ae jne 0x116e477f */
  if (!C.zf) goto L_116e477f;
  /* 116e47b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e47b3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116e47b5 mov dword ptr [0x1170f67c], eax */
  w32((uint32_t)(0x1170f67c), (EAX));
L_116e47ba:;
  /* 116e47ba cmp dword ptr [0x1170f67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e47c1 je 0x116e47d1 */
  if (C.zf) goto L_116e47d1;
  /* 116e47c3 mov ecx, dword ptr [0x1170f67c] */
  ECX = (r32((uint32_t)(0x1170f67c)));
  /* 116e47c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e47cc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 116e47cf jmp 0x116e47d9 */
  goto L_116e47d9;
L_116e47d1:;
  /* 116e47d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e47d4 mov dword ptr [0x1170f674], eax */
  w32((uint32_t)(0x1170f674), (EAX));
L_116e47d9:;
  /* 116e47d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e47dc mov edx, dword ptr [0x1170f67c] */
  EDX = (r32((uint32_t)(0x1170f67c)));
  /* 116e47e2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116e47e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e47e7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 116e47ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e47f1 mov dword ptr [0x1170f67c], ecx */
  w32((uint32_t)(0x1170f67c), (ECX));
  /* 116e47f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116e47fa:;
  /* 116e47fa pop edi */
  EDI = (pop32());
  /* 116e47fb pop esi */
  ESI = (pop32());
  /* 116e47fc pop ebx */
  EBX = (pop32());
  /* 116e47fd mov esp, ebp */
  ESP = (EBP);
  /* 116e47ff pop ebp */
  EBP = (pop32());
  /* 116e4800 ret  */
  ESPCHK(0x116e42f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004810 @ 0x116e4810 (27 bytes, 13 insns) */
void f_116e4810(void) {
  FTRACE(0x116e4810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e4810 push ebp */
  push32((uint32_t)(EBP));
  /* 116e4811 mov ebp, esp */
  EBP = (ESP);
  /* 116e4813 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4815 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4817 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e4819 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e481c push eax */
  push32((uint32_t)(EAX));
  /* 116e481d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e4820 push ecx */
  push32((uint32_t)(ECX));
  /* 116e4821 call 0x116e4830 */
  push32(0x116e4826u); f_116e4830();
  /* 116e4826 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4829 pop ebp */
  EBP = (pop32());
  /* 116e482a ret  */
  ESPCHK(0x116e4810u, _esp0);
  ESP += 4; return;
}

/* FUN_10004830 @ 0x116e4830 (64 bytes, 27 insns) */
void f_116e4830(void) {
  FTRACE(0x116e4830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e4830 push ebp */
  push32((uint32_t)(EBP));
  /* 116e4831 mov ebp, esp */
  EBP = (ESP);
  /* 116e4833 push ecx */
  push32((uint32_t)(ECX));
  /* 116e4834 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e4836 call 0x116e7820 */
  push32(0x116e483bu); f_116e7820();
  /* 116e483b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e483e push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4840 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e4843 push eax */
  push32((uint32_t)(EAX));
  /* 116e4844 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e4847 push ecx */
  push32((uint32_t)(ECX));
  /* 116e4848 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e484b push edx */
  push32((uint32_t)(EDX));
  /* 116e484c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e484f push eax */
  push32((uint32_t)(EAX));
  /* 116e4850 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e4853 push ecx */
  push32((uint32_t)(ECX));
  /* 116e4854 call 0x116e42f0 */
  push32(0x116e4859u); f_116e42f0();
  /* 116e4859 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e485c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e485f push 9 */
  push32((uint32_t)(0x9u));
  /* 116e4861 call 0x116e78c0 */
  push32(0x116e4866u); f_116e78c0();
  /* 116e4866 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4869 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e486c mov esp, ebp */
  ESP = (EBP);
  /* 116e486e pop ebp */
  EBP = (pop32());
  /* 116e486f ret  */
  ESPCHK(0x116e4830u, _esp0);
  ESP += 4; return;
}

/* FUN_10004870 @ 0x116e4870 (19 bytes, 9 insns) */
void f_116e4870(void) {
  FTRACE(0x116e4870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e4870 push ebp */
  push32((uint32_t)(EBP));
  /* 116e4871 mov ebp, esp */
  EBP = (ESP);
  /* 116e4873 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e4875 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e4878 push eax */
  push32((uint32_t)(EAX));
  /* 116e4879 call 0x116e48b0 */
  push32(0x116e487eu); f_116e48b0();
  /* 116e487e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4881 pop ebp */
  EBP = (pop32());
  /* 116e4882 ret  */
  ESPCHK(0x116e4870u, _esp0);
  ESP += 4; return;
}

/* FUN_10004890 @ 0x116e4890 (19 bytes, 9 insns) */
void f_116e4890(void) {
  FTRACE(0x116e4890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e4890 push ebp */
  push32((uint32_t)(EBP));
  /* 116e4891 mov ebp, esp */
  EBP = (ESP);
  /* 116e4893 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e4895 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e4898 push eax */
  push32((uint32_t)(EAX));
  /* 116e4899 call 0x116e48e0 */
  push32(0x116e489eu); f_116e48e0();
  /* 116e489e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e48a1 pop ebp */
  EBP = (pop32());
  /* 116e48a2 ret  */
  ESPCHK(0x116e4890u, _esp0);
  ESP += 4; return;
}

/* FUN_100048b0 @ 0x116e48b0 (41 bytes, 16 insns) */
void f_116e48b0(void) {
  FTRACE(0x116e48b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e48b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e48b1 mov ebp, esp */
  EBP = (ESP);
  /* 116e48b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e48b5 call 0x116e7820 */
  push32(0x116e48bau); f_116e7820();
  /* 116e48ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e48bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e48c0 push eax */
  push32((uint32_t)(EAX));
  /* 116e48c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e48c4 push ecx */
  push32((uint32_t)(ECX));
  /* 116e48c5 call 0x116e48e0 */
  push32(0x116e48cau); f_116e48e0();
  /* 116e48ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e48cd push 9 */
  push32((uint32_t)(0x9u));
  /* 116e48cf call 0x116e78c0 */
  push32(0x116e48d4u); f_116e78c0();
  /* 116e48d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e48d7 pop ebp */
  EBP = (pop32());
  /* 116e48d8 ret  */
  ESPCHK(0x116e48b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100048e0 @ 0x116e48e0 (1004 bytes, 342 insns) */
void f_116e48e0(void) {
  FTRACE(0x116e48e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e48e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e48e1 mov ebp, esp */
  EBP = (ESP);
  /* 116e48e3 push ecx */
  push32((uint32_t)(ECX));
  /* 116e48e4 push ebx */
  push32((uint32_t)(EBX));
  /* 116e48e5 push esi */
  push32((uint32_t)(ESI));
  /* 116e48e6 push edi */
  push32((uint32_t)(EDI));
  /* 116e48e7 mov eax, dword ptr [0x1170da84] */
  EAX = (r32((uint32_t)(0x1170da84)));
  /* 116e48ec and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 116e48ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e48f1 je 0x116e4923 */
  if (C.zf) goto L_116e4923;
L_116e48f3:;
  /* 116e48f3 call 0x116e4fc0 */
  push32(0x116e48f8u); f_116e4fc0();
  /* 116e48f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e48fa jne 0x116e491d */
  if (!C.zf) goto L_116e491d;
  /* 116e48fc push 0x1170a55c */
  push32((uint32_t)(0x1170a55cu));
  /* 116e4901 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4903 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 116e4908 push 0x1170a550 */
  push32((uint32_t)(0x1170a550u));
  /* 116e490d push 2 */
  push32((uint32_t)(0x2u));
  /* 116e490f call 0x116e2ee0 */
  push32(0x116e4914u); f_116e2ee0();
  /* 116e4914 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4917 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e491a jne 0x116e491d */
  if (!C.zf) goto L_116e491d;
  /* 116e491c int3  */
  x86_unimpl("int3 @ 0x116e491c");
L_116e491d:;
  /* 116e491d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e491f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e4921 jne 0x116e48f3 */
  if (!C.zf) goto L_116e48f3;
L_116e4923:;
  /* 116e4923 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4927 jne 0x116e492e */
  if (!C.zf) goto L_116e492e;
  /* 116e4929 jmp 0x116e4cc5 */
  goto L_116e4cc5;
L_116e492e:;
  /* 116e492e push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4930 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4932 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4934 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e4937 push edx */
  push32((uint32_t)(EDX));
  /* 116e4938 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e493a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e493d push eax */
  push32((uint32_t)(EAX));
  /* 116e493e push 3 */
  push32((uint32_t)(0x3u));
  /* 116e4940 call dword ptr [0x1170dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1170dc90))), 0x116e4946u);
  /* 116e4946 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4949 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e494b jne 0x116e4978 */
  if (!C.zf) goto L_116e4978;
L_116e494d:;
  /* 116e494d push 0x1170a820 */
  push32((uint32_t)(0x1170a820u));
  /* 116e4952 push 0x1170a4f0 */
  push32((uint32_t)(0x1170a4f0u));
  /* 116e4957 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4959 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e495b push 0 */
  push32((uint32_t)(0x0u));
  /* 116e495d push 0 */
  push32((uint32_t)(0x0u));
  /* 116e495f call 0x116e2ee0 */
  push32(0x116e4964u); f_116e2ee0();
  /* 116e4964 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4967 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e496a jne 0x116e496d */
  if (!C.zf) goto L_116e496d;
  /* 116e496c int3  */
  x86_unimpl("int3 @ 0x116e496c");
L_116e496d:;
  /* 116e496d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e496f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e4971 jne 0x116e494d */
  if (!C.zf) goto L_116e494d;
  /* 116e4973 jmp 0x116e4cc5 */
  goto L_116e4cc5;
L_116e4978:;
  /* 116e4978 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e497b push edx */
  push32((uint32_t)(EDX));
  /* 116e497c call 0x116e5420 */
  push32(0x116e4981u); f_116e5420();
  /* 116e4981 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4984 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e4986 jne 0x116e49a9 */
  if (!C.zf) goto L_116e49a9;
  /* 116e4988 push 0x1170a660 */
  push32((uint32_t)(0x1170a660u));
  /* 116e498d push 0 */
  push32((uint32_t)(0x0u));
  /* 116e498f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 116e4994 push 0x1170a550 */
  push32((uint32_t)(0x1170a550u));
  /* 116e4999 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e499b call 0x116e2ee0 */
  push32(0x116e49a0u); f_116e2ee0();
  /* 116e49a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e49a3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e49a6 jne 0x116e49a9 */
  if (!C.zf) goto L_116e49a9;
  /* 116e49a8 int3  */
  x86_unimpl("int3 @ 0x116e49a8");
L_116e49a9:;
  /* 116e49a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e49ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e49ad jne 0x116e4978 */
  if (!C.zf) goto L_116e4978;
  /* 116e49af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e49b2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e49b5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116e49b8:;
  /* 116e49b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e49bb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116e49be and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e49c3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e49c6 je 0x116e4a0b */
  if (C.zf) goto L_116e4a0b;
  /* 116e49c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e49cb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e49cf je 0x116e4a0b */
  if (C.zf) goto L_116e4a0b;
  /* 116e49d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e49d4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116e49d7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e49dc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e49df je 0x116e4a0b */
  if (C.zf) goto L_116e4a0b;
  /* 116e49e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e49e4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e49e8 je 0x116e4a0b */
  if (C.zf) goto L_116e4a0b;
  /* 116e49ea push 0x1170a7f8 */
  push32((uint32_t)(0x1170a7f8u));
  /* 116e49ef push 0 */
  push32((uint32_t)(0x0u));
  /* 116e49f1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 116e49f6 push 0x1170a550 */
  push32((uint32_t)(0x1170a550u));
  /* 116e49fb push 2 */
  push32((uint32_t)(0x2u));
  /* 116e49fd call 0x116e2ee0 */
  push32(0x116e4a02u); f_116e2ee0();
  /* 116e4a02 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4a05 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4a08 jne 0x116e4a0b */
  if (!C.zf) goto L_116e4a0b;
  /* 116e4a0a int3  */
  x86_unimpl("int3 @ 0x116e4a0a");
L_116e4a0b:;
  /* 116e4a0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e4a0d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e4a0f jne 0x116e49b8 */
  if (!C.zf) goto L_116e49b8;
  /* 116e4a11 mov eax, dword ptr [0x1170da84] */
  EAX = (r32((uint32_t)(0x1170da84)));
  /* 116e4a16 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 116e4a19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e4a1b jne 0x116e4ae6 */
  if (!C.zf) goto L_116e4ae6;
  /* 116e4a21 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e4a23 mov cl, byte ptr [0x1170da90] */
  CL = (r8((uint32_t)(0x1170da90)));
  /* 116e4a29 push ecx */
  push32((uint32_t)(ECX));
  /* 116e4a2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4a2d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4a30 push edx */
  push32((uint32_t)(EDX));
  /* 116e4a31 call 0x116e4f30 */
  push32(0x116e4a36u); f_116e4f30();
  /* 116e4a36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4a39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e4a3b jne 0x116e4a80 */
  if (!C.zf) goto L_116e4a80;
L_116e4a3d:;
  /* 116e4a3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4a40 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4a43 push eax */
  push32((uint32_t)(EAX));
  /* 116e4a44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4a47 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 116e4a4a push edx */
  push32((uint32_t)(EDX));
  /* 116e4a4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4a4e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 116e4a51 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116e4a57 mov edx, dword ptr [ecx*4 + 0x1170da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1170da94)));
  /* 116e4a5e push edx */
  push32((uint32_t)(EDX));
  /* 116e4a5f push 0x1170a7cc */
  push32((uint32_t)(0x1170a7ccu));
  /* 116e4a64 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4a66 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4a68 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4a6a push 1 */
  push32((uint32_t)(0x1u));
  /* 116e4a6c call 0x116e2ee0 */
  push32(0x116e4a71u); f_116e2ee0();
  /* 116e4a71 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4a74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4a77 jne 0x116e4a7a */
  if (!C.zf) goto L_116e4a7a;
  /* 116e4a79 int3  */
  x86_unimpl("int3 @ 0x116e4a79");
L_116e4a7a:;
  /* 116e4a7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e4a7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e4a7e jne 0x116e4a3d */
  if (!C.zf) goto L_116e4a3d;
L_116e4a80:;
  /* 116e4a80 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e4a82 mov cl, byte ptr [0x1170da90] */
  CL = (r8((uint32_t)(0x1170da90)));
  /* 116e4a88 push ecx */
  push32((uint32_t)(ECX));
  /* 116e4a89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4a8c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116e4a8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4a92 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 116e4a96 push edx */
  push32((uint32_t)(EDX));
  /* 116e4a97 call 0x116e4f30 */
  push32(0x116e4a9cu); f_116e4f30();
  /* 116e4a9c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4a9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e4aa1 jne 0x116e4ae6 */
  if (!C.zf) goto L_116e4ae6;
L_116e4aa3:;
  /* 116e4aa3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4aa6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4aa9 push eax */
  push32((uint32_t)(EAX));
  /* 116e4aaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4aad mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 116e4ab0 push edx */
  push32((uint32_t)(EDX));
  /* 116e4ab1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4ab4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 116e4ab7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116e4abd mov edx, dword ptr [ecx*4 + 0x1170da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1170da94)));
  /* 116e4ac4 push edx */
  push32((uint32_t)(EDX));
  /* 116e4ac5 push 0x1170a7a0 */
  push32((uint32_t)(0x1170a7a0u));
  /* 116e4aca push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4acc push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4ace push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4ad0 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e4ad2 call 0x116e2ee0 */
  push32(0x116e4ad7u); f_116e2ee0();
  /* 116e4ad7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4ada cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4add jne 0x116e4ae0 */
  if (!C.zf) goto L_116e4ae0;
  /* 116e4adf int3  */
  x86_unimpl("int3 @ 0x116e4adf");
L_116e4ae0:;
  /* 116e4ae0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e4ae2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e4ae4 jne 0x116e4aa3 */
  if (!C.zf) goto L_116e4aa3;
L_116e4ae6:;
  /* 116e4ae6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4ae9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4aed jne 0x116e4b5b */
  if (!C.zf) goto L_116e4b5b;
L_116e4aef:;
  /* 116e4aef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4af2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4af9 jne 0x116e4b04 */
  if (!C.zf) goto L_116e4b04;
  /* 116e4afb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4afe cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4b02 je 0x116e4b25 */
  if (C.zf) goto L_116e4b25;
L_116e4b04:;
  /* 116e4b04 push 0x1170a760 */
  push32((uint32_t)(0x1170a760u));
  /* 116e4b09 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4b0b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 116e4b10 push 0x1170a550 */
  push32((uint32_t)(0x1170a550u));
  /* 116e4b15 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e4b17 call 0x116e2ee0 */
  push32(0x116e4b1cu); f_116e2ee0();
  /* 116e4b1c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4b1f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4b22 jne 0x116e4b25 */
  if (!C.zf) goto L_116e4b25;
  /* 116e4b24 int3  */
  x86_unimpl("int3 @ 0x116e4b24");
L_116e4b25:;
  /* 116e4b25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e4b27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e4b29 jne 0x116e4aef */
  if (!C.zf) goto L_116e4aef;
  /* 116e4b2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4b2e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116e4b31 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4b34 push eax */
  push32((uint32_t)(EAX));
  /* 116e4b35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e4b37 mov cl, byte ptr [0x1170da91] */
  CL = (r8((uint32_t)(0x1170da91)));
  /* 116e4b3d push ecx */
  push32((uint32_t)(ECX));
  /* 116e4b3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4b41 push edx */
  push32((uint32_t)(EDX));
  /* 116e4b42 call 0x116e7b90 */
  push32(0x116e4b47u); f_116e7b90();
  /* 116e4b47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4b4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4b4d push eax */
  push32((uint32_t)(EAX));
  /* 116e4b4e call 0x116e7f90 */
  push32(0x116e4b53u); f_116e7f90();
  /* 116e4b53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4b56 jmp 0x116e4cc5 */
  goto L_116e4cc5;
L_116e4b5b:;
  /* 116e4b5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4b5e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4b62 jne 0x116e4b71 */
  if (!C.zf) goto L_116e4b71;
  /* 116e4b64 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4b68 jne 0x116e4b71 */
  if (!C.zf) goto L_116e4b71;
  /* 116e4b6a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_116e4b71:;
  /* 116e4b71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4b74 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116e4b77 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4b7a je 0x116e4b9d */
  if (C.zf) goto L_116e4b9d;
  /* 116e4b7c push 0x1170a740 */
  push32((uint32_t)(0x1170a740u));
  /* 116e4b81 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4b83 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 116e4b88 push 0x1170a550 */
  push32((uint32_t)(0x1170a550u));
  /* 116e4b8d push 2 */
  push32((uint32_t)(0x2u));
  /* 116e4b8f call 0x116e2ee0 */
  push32(0x116e4b94u); f_116e2ee0();
  /* 116e4b94 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4b97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4b9a jne 0x116e4b9d */
  if (!C.zf) goto L_116e4b9d;
  /* 116e4b9c int3  */
  x86_unimpl("int3 @ 0x116e4b9c");
L_116e4b9d:;
  /* 116e4b9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e4b9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e4ba1 jne 0x116e4b71 */
  if (!C.zf) goto L_116e4b71;
  /* 116e4ba3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4ba6 mov eax, dword ptr [0x1170f680] */
  EAX = (r32((uint32_t)(0x1170f680)));
  /* 116e4bab sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e4bae mov dword ptr [0x1170f680], eax */
  w32((uint32_t)(0x1170f680), (EAX));
  /* 116e4bb3 mov ecx, dword ptr [0x1170da84] */
  ECX = (r32((uint32_t)(0x1170da84)));
  /* 116e4bb9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 116e4bbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e4bbe jne 0x116e4c9c */
  if (!C.zf) goto L_116e4c9c;
  /* 116e4bc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4bc7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4bca je 0x116e4bdc */
  if (C.zf) goto L_116e4bdc;
  /* 116e4bcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4bcf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116e4bd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4bd4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116e4bd7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 116e4bda jmp 0x116e4c1a */
  goto L_116e4c1a;
L_116e4bdc:;
  /* 116e4bdc mov ecx, dword ptr [0x1170f674] */
  ECX = (r32((uint32_t)(0x1170f674)));
  /* 116e4be2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4be5 je 0x116e4c08 */
  if (C.zf) goto L_116e4c08;
  /* 116e4be7 push 0x1170a728 */
  push32((uint32_t)(0x1170a728u));
  /* 116e4bec push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4bee push 0x42a */
  push32((uint32_t)(0x42au));
  /* 116e4bf3 push 0x1170a550 */
  push32((uint32_t)(0x1170a550u));
  /* 116e4bf8 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e4bfa call 0x116e2ee0 */
  push32(0x116e4bffu); f_116e2ee0();
  /* 116e4bff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4c02 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4c05 jne 0x116e4c08 */
  if (!C.zf) goto L_116e4c08;
  /* 116e4c07 int3  */
  x86_unimpl("int3 @ 0x116e4c07");
L_116e4c08:;
  /* 116e4c08 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e4c0a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e4c0c jne 0x116e4bdc */
  if (!C.zf) goto L_116e4bdc;
  /* 116e4c0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4c11 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116e4c14 mov dword ptr [0x1170f674], ecx */
  w32((uint32_t)(0x1170f674), (ECX));
L_116e4c1a:;
  /* 116e4c1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4c1d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4c21 je 0x116e4c32 */
  if (C.zf) goto L_116e4c32;
  /* 116e4c23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4c26 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116e4c29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4c2c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116e4c2e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116e4c30 jmp 0x116e4c6f */
  goto L_116e4c6f;
L_116e4c32:;
  /* 116e4c32 mov ecx, dword ptr [0x1170f67c] */
  ECX = (r32((uint32_t)(0x1170f67c)));
  /* 116e4c38 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4c3b je 0x116e4c5e */
  if (C.zf) goto L_116e4c5e;
  /* 116e4c3d push 0x1170a710 */
  push32((uint32_t)(0x1170a710u));
  /* 116e4c42 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4c44 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 116e4c49 push 0x1170a550 */
  push32((uint32_t)(0x1170a550u));
  /* 116e4c4e push 2 */
  push32((uint32_t)(0x2u));
  /* 116e4c50 call 0x116e2ee0 */
  push32(0x116e4c55u); f_116e2ee0();
  /* 116e4c55 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4c58 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4c5b jne 0x116e4c5e */
  if (!C.zf) goto L_116e4c5e;
  /* 116e4c5d int3  */
  x86_unimpl("int3 @ 0x116e4c5d");
L_116e4c5e:;
  /* 116e4c5e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e4c60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e4c62 jne 0x116e4c32 */
  if (!C.zf) goto L_116e4c32;
  /* 116e4c64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4c67 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116e4c69 mov dword ptr [0x1170f67c], ecx */
  w32((uint32_t)(0x1170f67c), (ECX));
L_116e4c6f:;
  /* 116e4c6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4c72 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116e4c75 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4c78 push eax */
  push32((uint32_t)(EAX));
  /* 116e4c79 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e4c7b mov cl, byte ptr [0x1170da91] */
  CL = (r8((uint32_t)(0x1170da91)));
  /* 116e4c81 push ecx */
  push32((uint32_t)(ECX));
  /* 116e4c82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4c85 push edx */
  push32((uint32_t)(EDX));
  /* 116e4c86 call 0x116e7b90 */
  push32(0x116e4c8bu); f_116e7b90();
  /* 116e4c8b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4c8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4c91 push eax */
  push32((uint32_t)(EAX));
  /* 116e4c92 call 0x116e7f90 */
  push32(0x116e4c97u); f_116e7f90();
  /* 116e4c97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4c9a jmp 0x116e4cc5 */
  goto L_116e4cc5;
L_116e4c9c:;
  /* 116e4c9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4c9f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 116e4ca6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4ca9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116e4cac push eax */
  push32((uint32_t)(EAX));
  /* 116e4cad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e4caf mov cl, byte ptr [0x1170da91] */
  CL = (r8((uint32_t)(0x1170da91)));
  /* 116e4cb5 push ecx */
  push32((uint32_t)(ECX));
  /* 116e4cb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4cb9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4cbc push edx */
  push32((uint32_t)(EDX));
  /* 116e4cbd call 0x116e7b90 */
  push32(0x116e4cc2u); f_116e7b90();
  /* 116e4cc2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e4cc5:;
  /* 116e4cc5 pop edi */
  EDI = (pop32());
  /* 116e4cc6 pop esi */
  ESI = (pop32());
  /* 116e4cc7 pop ebx */
  EBX = (pop32());
  /* 116e4cc8 mov esp, ebp */
  ESP = (EBP);
  /* 116e4cca pop ebp */
  EBP = (pop32());
  /* 116e4ccb ret  */
  ESPCHK(0x116e48e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cd0 @ 0x116e4cd0 (19 bytes, 9 insns) */
void f_116e4cd0(void) {
  FTRACE(0x116e4cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e4cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e4cd1 mov ebp, esp */
  EBP = (ESP);
  /* 116e4cd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e4cd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e4cd8 push eax */
  push32((uint32_t)(EAX));
  /* 116e4cd9 call 0x116e4cf0 */
  push32(0x116e4cdeu); f_116e4cf0();
  /* 116e4cde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4ce1 pop ebp */
  EBP = (pop32());
  /* 116e4ce2 ret  */
  ESPCHK(0x116e4cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cf0 @ 0x116e4cf0 (342 bytes, 119 insns) */
void f_116e4cf0(void) {
  FTRACE(0x116e4cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e4cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e4cf1 mov ebp, esp */
  EBP = (ESP);
  /* 116e4cf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e4cf6 push ebx */
  push32((uint32_t)(EBX));
  /* 116e4cf7 push esi */
  push32((uint32_t)(ESI));
  /* 116e4cf8 push edi */
  push32((uint32_t)(EDI));
  /* 116e4cf9 mov eax, dword ptr [0x1170da84] */
  EAX = (r32((uint32_t)(0x1170da84)));
  /* 116e4cfe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 116e4d01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e4d03 je 0x116e4d35 */
  if (C.zf) goto L_116e4d35;
L_116e4d05:;
  /* 116e4d05 call 0x116e4fc0 */
  push32(0x116e4d0au); f_116e4fc0();
  /* 116e4d0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e4d0c jne 0x116e4d2f */
  if (!C.zf) goto L_116e4d2f;
  /* 116e4d0e push 0x1170a55c */
  push32((uint32_t)(0x1170a55cu));
  /* 116e4d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4d15 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 116e4d1a push 0x1170a550 */
  push32((uint32_t)(0x1170a550u));
  /* 116e4d1f push 2 */
  push32((uint32_t)(0x2u));
  /* 116e4d21 call 0x116e2ee0 */
  push32(0x116e4d26u); f_116e2ee0();
  /* 116e4d26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4d29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4d2c jne 0x116e4d2f */
  if (!C.zf) goto L_116e4d2f;
  /* 116e4d2e int3  */
  x86_unimpl("int3 @ 0x116e4d2e");
L_116e4d2f:;
  /* 116e4d2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e4d31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e4d33 jne 0x116e4d05 */
  if (!C.zf) goto L_116e4d05;
L_116e4d35:;
  /* 116e4d35 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e4d37 call 0x116e7820 */
  push32(0x116e4d3cu); f_116e7820();
  /* 116e4d3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e4d3f:;
  /* 116e4d3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e4d42 push edx */
  push32((uint32_t)(EDX));
  /* 116e4d43 call 0x116e5420 */
  push32(0x116e4d48u); f_116e5420();
  /* 116e4d48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4d4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e4d4d jne 0x116e4d70 */
  if (!C.zf) goto L_116e4d70;
  /* 116e4d4f push 0x1170a660 */
  push32((uint32_t)(0x1170a660u));
  /* 116e4d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4d56 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 116e4d5b push 0x1170a550 */
  push32((uint32_t)(0x1170a550u));
  /* 116e4d60 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e4d62 call 0x116e2ee0 */
  push32(0x116e4d67u); f_116e2ee0();
  /* 116e4d67 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4d6a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4d6d jne 0x116e4d70 */
  if (!C.zf) goto L_116e4d70;
  /* 116e4d6f int3  */
  x86_unimpl("int3 @ 0x116e4d6f");
L_116e4d70:;
  /* 116e4d70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e4d72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e4d74 jne 0x116e4d3f */
  if (!C.zf) goto L_116e4d3f;
  /* 116e4d76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e4d79 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e4d7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_116e4d7f:;
  /* 116e4d7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e4d82 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116e4d85 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e4d8a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4d8d je 0x116e4dd2 */
  if (C.zf) goto L_116e4dd2;
  /* 116e4d8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e4d92 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4d96 je 0x116e4dd2 */
  if (C.zf) goto L_116e4dd2;
  /* 116e4d98 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e4d9b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116e4d9e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e4da3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4da6 je 0x116e4dd2 */
  if (C.zf) goto L_116e4dd2;
  /* 116e4da8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e4dab cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4daf je 0x116e4dd2 */
  if (C.zf) goto L_116e4dd2;
  /* 116e4db1 push 0x1170a7f8 */
  push32((uint32_t)(0x1170a7f8u));
  /* 116e4db6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4db8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 116e4dbd push 0x1170a550 */
  push32((uint32_t)(0x1170a550u));
  /* 116e4dc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e4dc4 call 0x116e2ee0 */
  push32(0x116e4dc9u); f_116e2ee0();
  /* 116e4dc9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4dcc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4dcf jne 0x116e4dd2 */
  if (!C.zf) goto L_116e4dd2;
  /* 116e4dd1 int3  */
  x86_unimpl("int3 @ 0x116e4dd1");
L_116e4dd2:;
  /* 116e4dd2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e4dd4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e4dd6 jne 0x116e4d7f */
  if (!C.zf) goto L_116e4d7f;
  /* 116e4dd8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e4ddb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4ddf jne 0x116e4dee */
  if (!C.zf) goto L_116e4dee;
  /* 116e4de1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4de5 jne 0x116e4dee */
  if (!C.zf) goto L_116e4dee;
  /* 116e4de7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_116e4dee:;
  /* 116e4dee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e4df1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4df5 je 0x116e4e29 */
  if (C.zf) goto L_116e4e29;
L_116e4df7:;
  /* 116e4df7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e4dfa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116e4dfd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4e00 je 0x116e4e23 */
  if (C.zf) goto L_116e4e23;
  /* 116e4e02 push 0x1170a740 */
  push32((uint32_t)(0x1170a740u));
  /* 116e4e07 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4e09 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 116e4e0e push 0x1170a550 */
  push32((uint32_t)(0x1170a550u));
  /* 116e4e13 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e4e15 call 0x116e2ee0 */
  push32(0x116e4e1au); f_116e2ee0();
  /* 116e4e1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4e1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4e20 jne 0x116e4e23 */
  if (!C.zf) goto L_116e4e23;
  /* 116e4e22 int3  */
  x86_unimpl("int3 @ 0x116e4e22");
L_116e4e23:;
  /* 116e4e23 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e4e25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e4e27 jne 0x116e4df7 */
  if (!C.zf) goto L_116e4df7;
L_116e4e29:;
  /* 116e4e29 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e4e2c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116e4e2f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e4e32 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e4e34 call 0x116e78c0 */
  push32(0x116e4e39u); f_116e78c0();
  /* 116e4e39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4e3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4e3f pop edi */
  EDI = (pop32());
  /* 116e4e40 pop esi */
  ESI = (pop32());
  /* 116e4e41 pop ebx */
  EBX = (pop32());
  /* 116e4e42 mov esp, ebp */
  ESP = (EBP);
  /* 116e4e44 pop ebp */
  EBP = (pop32());
  /* 116e4e45 ret  */
  ESPCHK(0x116e4cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e50 @ 0x116e4e50 (28 bytes, 11 insns) */
void f_116e4e50(void) {
  FTRACE(0x116e4e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e4e50 push ebp */
  push32((uint32_t)(EBP));
  /* 116e4e51 mov ebp, esp */
  EBP = (ESP);
  /* 116e4e53 push ecx */
  push32((uint32_t)(ECX));
  /* 116e4e54 mov eax, dword ptr [0x1170da8c] */
  EAX = (r32((uint32_t)(0x1170da8c)));
  /* 116e4e59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e4e5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e4e5f mov dword ptr [0x1170da8c], ecx */
  w32((uint32_t)(0x1170da8c), (ECX));
  /* 116e4e65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4e68 mov esp, ebp */
  ESP = (EBP);
  /* 116e4e6a pop ebp */
  EBP = (pop32());
  /* 116e4e6b ret  */
  ESPCHK(0x116e4e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e70 @ 0x116e4e70 (157 bytes, 59 insns) */
void f_116e4e70(void) {
  FTRACE(0x116e4e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e4e70 push ebp */
  push32((uint32_t)(EBP));
  /* 116e4e71 mov ebp, esp */
  EBP = (ESP);
  /* 116e4e73 push ecx */
  push32((uint32_t)(ECX));
  /* 116e4e74 push ebx */
  push32((uint32_t)(EBX));
  /* 116e4e75 push esi */
  push32((uint32_t)(ESI));
  /* 116e4e76 push edi */
  push32((uint32_t)(EDI));
  /* 116e4e77 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e4e79 call 0x116e7820 */
  push32(0x116e4e7eu); f_116e7820();
  /* 116e4e7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4e81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e4e84 push eax */
  push32((uint32_t)(EAX));
  /* 116e4e85 call 0x116e5420 */
  push32(0x116e4e8au); f_116e5420();
  /* 116e4e8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4e8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e4e8f je 0x116e4efc */
  if (C.zf) goto L_116e4efc;
  /* 116e4e91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e4e94 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e4e97 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116e4e9a:;
  /* 116e4e9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4e9d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116e4ea0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e4ea5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4ea8 je 0x116e4eed */
  if (C.zf) goto L_116e4eed;
  /* 116e4eaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4ead cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4eb1 je 0x116e4eed */
  if (C.zf) goto L_116e4eed;
  /* 116e4eb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4eb6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116e4eb9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e4ebe cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4ec1 je 0x116e4eed */
  if (C.zf) goto L_116e4eed;
  /* 116e4ec3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4ec6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4eca je 0x116e4eed */
  if (C.zf) goto L_116e4eed;
  /* 116e4ecc push 0x1170a7f8 */
  push32((uint32_t)(0x1170a7f8u));
  /* 116e4ed1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4ed3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 116e4ed8 push 0x1170a550 */
  push32((uint32_t)(0x1170a550u));
  /* 116e4edd push 2 */
  push32((uint32_t)(0x2u));
  /* 116e4edf call 0x116e2ee0 */
  push32(0x116e4ee4u); f_116e2ee0();
  /* 116e4ee4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4ee7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4eea jne 0x116e4eed */
  if (!C.zf) goto L_116e4eed;
  /* 116e4eec int3  */
  x86_unimpl("int3 @ 0x116e4eec");
L_116e4eed:;
  /* 116e4eed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e4eef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e4ef1 jne 0x116e4e9a */
  if (!C.zf) goto L_116e4e9a;
  /* 116e4ef3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4ef6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e4ef9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_116e4efc:;
  /* 116e4efc push 9 */
  push32((uint32_t)(0x9u));
  /* 116e4efe call 0x116e78c0 */
  push32(0x116e4f03u); f_116e78c0();
  /* 116e4f03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4f06 pop edi */
  EDI = (pop32());
  /* 116e4f07 pop esi */
  ESI = (pop32());
  /* 116e4f08 pop ebx */
  EBX = (pop32());
  /* 116e4f09 mov esp, ebp */
  ESP = (EBP);
  /* 116e4f0b pop ebp */
  EBP = (pop32());
  /* 116e4f0c ret  */
  ESPCHK(0x116e4e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f10 @ 0x116e4f10 (28 bytes, 11 insns) */
void f_116e4f10(void) {
  FTRACE(0x116e4f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e4f10 push ebp */
  push32((uint32_t)(EBP));
  /* 116e4f11 mov ebp, esp */
  EBP = (ESP);
  /* 116e4f13 push ecx */
  push32((uint32_t)(ECX));
  /* 116e4f14 mov eax, dword ptr [0x1170dc90] */
  EAX = (r32((uint32_t)(0x1170dc90)));
  /* 116e4f19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e4f1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e4f1f mov dword ptr [0x1170dc90], ecx */
  w32((uint32_t)(0x1170dc90), (ECX));
  /* 116e4f25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4f28 mov esp, ebp */
  ESP = (EBP);
  /* 116e4f2a pop ebp */
  EBP = (pop32());
  /* 116e4f2b ret  */
  ESPCHK(0x116e4f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f30 @ 0x116e4f30 (136 bytes, 55 insns) */
void f_116e4f30(void) {
  FTRACE(0x116e4f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e4f30 push ebp */
  push32((uint32_t)(EBP));
  /* 116e4f31 mov ebp, esp */
  EBP = (ESP);
  /* 116e4f33 push ecx */
  push32((uint32_t)(ECX));
  /* 116e4f34 push ebx */
  push32((uint32_t)(EBX));
  /* 116e4f35 push esi */
  push32((uint32_t)(ESI));
  /* 116e4f36 push edi */
  push32((uint32_t)(EDI));
  /* 116e4f37 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_116e4f3e:;
  /* 116e4f3e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e4f41 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e4f44 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e4f47 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 116e4f4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e4f4c je 0x116e4fae */
  if (C.zf) goto L_116e4fae;
  /* 116e4f4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e4f51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e4f53 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116e4f55 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e4f58 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116e4f5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e4f61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4f64 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 116e4f67 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4f69 je 0x116e4fac */
  if (C.zf) goto L_116e4fac;
L_116e4f6b:;
  /* 116e4f6b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e4f6e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e4f73 push eax */
  push32((uint32_t)(EAX));
  /* 116e4f74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e4f77 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e4f79 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 116e4f7c push edx */
  push32((uint32_t)(EDX));
  /* 116e4f7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e4f80 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e4f83 push eax */
  push32((uint32_t)(EAX));
  /* 116e4f84 push 0x1170a83c */
  push32((uint32_t)(0x1170a83cu));
  /* 116e4f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4f8d push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4f8f push 0 */
  push32((uint32_t)(0x0u));
  /* 116e4f91 call 0x116e2ee0 */
  push32(0x116e4f96u); f_116e2ee0();
  /* 116e4f96 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4f99 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4f9c jne 0x116e4f9f */
  if (!C.zf) goto L_116e4f9f;
  /* 116e4f9e int3  */
  x86_unimpl("int3 @ 0x116e4f9e");
L_116e4f9f:;
  /* 116e4f9f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e4fa1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e4fa3 jne 0x116e4f6b */
  if (!C.zf) goto L_116e4f6b;
  /* 116e4fa5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116e4fac:;
  /* 116e4fac jmp 0x116e4f3e */
  goto L_116e4f3e;
L_116e4fae:;
  /* 116e4fae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e4fb1 pop edi */
  EDI = (pop32());
  /* 116e4fb2 pop esi */
  ESI = (pop32());
  /* 116e4fb3 pop ebx */
  EBX = (pop32());
  /* 116e4fb4 mov esp, ebp */
  ESP = (EBP);
  /* 116e4fb6 pop ebp */
  EBP = (pop32());
  /* 116e4fb7 ret  */
  ESPCHK(0x116e4f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fc0 @ 0x116e4fc0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_116e4fc0(void) {
  FTRACE(0x116e4fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e4fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e4fc1 mov ebp, esp */
  EBP = (ESP);
  /* 116e4fc3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e4fc6 push ebx */
  push32((uint32_t)(EBX));
  /* 116e4fc7 push esi */
  push32((uint32_t)(ESI));
  /* 116e4fc8 push edi */
  push32((uint32_t)(EDI));
  /* 116e4fc9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116e4fd0 mov eax, dword ptr [0x1170da84] */
  EAX = (r32((uint32_t)(0x1170da84)));
  /* 116e4fd5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 116e4fd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e4fda jne 0x116e4fe6 */
  if (!C.zf) goto L_116e4fe6;
  /* 116e4fdc mov eax, 1 */
  EAX = (0x1u);
  /* 116e4fe1 jmp 0x116e5318 */
  goto L_116e5318;
L_116e4fe6:;
  /* 116e4fe6 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e4fe8 call 0x116e7820 */
  push32(0x116e4fedu); f_116e7820();
  /* 116e4fed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e4ff0 call 0x116e8000 */
  push32(0x116e4ff5u); f_116e8000();
  /* 116e4ff5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116e4ff8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e4ffc je 0x116e5109 */
  if (C.zf) goto L_116e5109;
  /* 116e5002 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5006 je 0x116e5109 */
  if (C.zf) goto L_116e5109;
  /* 116e500c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e500f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 116e5012 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e5015 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5018 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 116e501b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e501f ja 0x116e50d2 */
  if ((!C.cf&&!C.zf)) goto L_116e50d2;
  /* 116e5025 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e5028 jmp dword ptr [eax*4 + 0x116e531f] */
  switch (EAX) {
    case 0: goto L_116e50aa;
    case 1: goto L_116e5082;
    case 2: goto L_116e505a;
    case 3: goto L_116e502f;
    default: x86_unimpl("switch@0x116e5028 out of table"); return;
  }
L_116e502f:;
  /* 116e502f push 0x1170a990 */
  push32((uint32_t)(0x1170a990u));
  /* 116e5034 push 0x1170a4f0 */
  push32((uint32_t)(0x1170a4f0u));
  /* 116e5039 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e503b push 0 */
  push32((uint32_t)(0x0u));
  /* 116e503d push 0 */
  push32((uint32_t)(0x0u));
  /* 116e503f push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5041 call 0x116e2ee0 */
  push32(0x116e5046u); f_116e2ee0();
  /* 116e5046 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5049 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e504c jne 0x116e504f */
  if (!C.zf) goto L_116e504f;
  /* 116e504e int3  */
  x86_unimpl("int3 @ 0x116e504e");
L_116e504f:;
  /* 116e504f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e5051 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e5053 jne 0x116e502f */
  if (!C.zf) goto L_116e502f;
  /* 116e5055 jmp 0x116e50f8 */
  goto L_116e50f8;
L_116e505a:;
  /* 116e505a push 0x1170a96c */
  push32((uint32_t)(0x1170a96cu));
  /* 116e505f push 0x1170a4f0 */
  push32((uint32_t)(0x1170a4f0u));
  /* 116e5064 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5066 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5068 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e506a push 0 */
  push32((uint32_t)(0x0u));
  /* 116e506c call 0x116e2ee0 */
  push32(0x116e5071u); f_116e2ee0();
  /* 116e5071 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5074 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5077 jne 0x116e507a */
  if (!C.zf) goto L_116e507a;
  /* 116e5079 int3  */
  x86_unimpl("int3 @ 0x116e5079");
L_116e507a:;
  /* 116e507a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e507c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e507e jne 0x116e505a */
  if (!C.zf) goto L_116e505a;
  /* 116e5080 jmp 0x116e50f8 */
  goto L_116e50f8;
L_116e5082:;
  /* 116e5082 push 0x1170a948 */
  push32((uint32_t)(0x1170a948u));
  /* 116e5087 push 0x1170a4f0 */
  push32((uint32_t)(0x1170a4f0u));
  /* 116e508c push 0 */
  push32((uint32_t)(0x0u));
  /* 116e508e push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5090 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5092 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5094 call 0x116e2ee0 */
  push32(0x116e5099u); f_116e2ee0();
  /* 116e5099 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e509c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e509f jne 0x116e50a2 */
  if (!C.zf) goto L_116e50a2;
  /* 116e50a1 int3  */
  x86_unimpl("int3 @ 0x116e50a1");
L_116e50a2:;
  /* 116e50a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e50a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e50a6 jne 0x116e5082 */
  if (!C.zf) goto L_116e5082;
  /* 116e50a8 jmp 0x116e50f8 */
  goto L_116e50f8;
L_116e50aa:;
  /* 116e50aa push 0x1170a924 */
  push32((uint32_t)(0x1170a924u));
  /* 116e50af push 0x1170a4f0 */
  push32((uint32_t)(0x1170a4f0u));
  /* 116e50b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e50b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e50b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e50ba push 0 */
  push32((uint32_t)(0x0u));
  /* 116e50bc call 0x116e2ee0 */
  push32(0x116e50c1u); f_116e2ee0();
  /* 116e50c1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e50c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e50c7 jne 0x116e50ca */
  if (!C.zf) goto L_116e50ca;
  /* 116e50c9 int3  */
  x86_unimpl("int3 @ 0x116e50c9");
L_116e50ca:;
  /* 116e50ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e50cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e50ce jne 0x116e50aa */
  if (!C.zf) goto L_116e50aa;
  /* 116e50d0 jmp 0x116e50f8 */
  goto L_116e50f8;
L_116e50d2:;
  /* 116e50d2 push 0x1170a8f8 */
  push32((uint32_t)(0x1170a8f8u));
  /* 116e50d7 push 0x1170a4f0 */
  push32((uint32_t)(0x1170a4f0u));
  /* 116e50dc push 0 */
  push32((uint32_t)(0x0u));
  /* 116e50de push 0 */
  push32((uint32_t)(0x0u));
  /* 116e50e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e50e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e50e4 call 0x116e2ee0 */
  push32(0x116e50e9u); f_116e2ee0();
  /* 116e50e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e50ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e50ef jne 0x116e50f2 */
  if (!C.zf) goto L_116e50f2;
  /* 116e50f1 int3  */
  x86_unimpl("int3 @ 0x116e50f1");
L_116e50f2:;
  /* 116e50f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e50f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e50f6 jne 0x116e50d2 */
  if (!C.zf) goto L_116e50d2;
L_116e50f8:;
  /* 116e50f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e50fa call 0x116e78c0 */
  push32(0x116e50ffu); f_116e78c0();
  /* 116e50ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5102 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e5104 jmp 0x116e5318 */
  goto L_116e5318;
L_116e5109:;
  /* 116e5109 mov eax, dword ptr [0x1170f67c] */
  EAX = (r32((uint32_t)(0x1170f67c)));
  /* 116e510e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116e5111 jmp 0x116e511b */
  goto L_116e511b;
L_116e5113:;
  /* 116e5113 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e5116 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116e5118 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_116e511b:;
  /* 116e511b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e511f je 0x116e530b */
  if (C.zf) goto L_116e530b;
  /* 116e5125 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 116e512c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e512f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 116e5132 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116e5138 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e513b je 0x116e5160 */
  if (C.zf) goto L_116e5160;
  /* 116e513d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e5140 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5144 je 0x116e5160 */
  if (C.zf) goto L_116e5160;
  /* 116e5146 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e5149 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 116e514c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116e5152 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5155 je 0x116e5160 */
  if (C.zf) goto L_116e5160;
  /* 116e5157 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e515a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e515e jne 0x116e5178 */
  if (!C.zf) goto L_116e5178;
L_116e5160:;
  /* 116e5160 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e5163 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 116e5166 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116e516c mov edx, dword ptr [ecx*4 + 0x1170da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1170da94)));
  /* 116e5173 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116e5176 jmp 0x116e517f */
  goto L_116e517f;
L_116e5178:;
  /* 116e5178 mov dword ptr [ebp - 0x14], 0x1170a8f0 */
  w32((uint32_t)(EBP + -0x14), (0x1170a8f0u));
L_116e517f:;
  /* 116e517f push 4 */
  push32((uint32_t)(0x4u));
  /* 116e5181 mov al, byte ptr [0x1170da90] */
  AL = (r8((uint32_t)(0x1170da90)));
  /* 116e5186 push eax */
  push32((uint32_t)(EAX));
  /* 116e5187 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e518a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e518d push ecx */
  push32((uint32_t)(ECX));
  /* 116e518e call 0x116e4f30 */
  push32(0x116e5193u); f_116e4f30();
  /* 116e5193 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5196 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e5198 jne 0x116e51d4 */
  if (!C.zf) goto L_116e51d4;
L_116e519a:;
  /* 116e519a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e519d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e51a0 push edx */
  push32((uint32_t)(EDX));
  /* 116e51a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e51a4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 116e51a7 push ecx */
  push32((uint32_t)(ECX));
  /* 116e51a8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e51ab push edx */
  push32((uint32_t)(EDX));
  /* 116e51ac push 0x1170a7cc */
  push32((uint32_t)(0x1170a7ccu));
  /* 116e51b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e51b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e51b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e51b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e51b9 call 0x116e2ee0 */
  push32(0x116e51beu); f_116e2ee0();
  /* 116e51be add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e51c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e51c4 jne 0x116e51c7 */
  if (!C.zf) goto L_116e51c7;
  /* 116e51c6 int3  */
  x86_unimpl("int3 @ 0x116e51c6");
L_116e51c7:;
  /* 116e51c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e51c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e51cb jne 0x116e519a */
  if (!C.zf) goto L_116e519a;
  /* 116e51cd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_116e51d4:;
  /* 116e51d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 116e51d6 mov cl, byte ptr [0x1170da90] */
  CL = (r8((uint32_t)(0x1170da90)));
  /* 116e51dc push ecx */
  push32((uint32_t)(ECX));
  /* 116e51dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e51e0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116e51e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e51e6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 116e51ea push edx */
  push32((uint32_t)(EDX));
  /* 116e51eb call 0x116e4f30 */
  push32(0x116e51f0u); f_116e4f30();
  /* 116e51f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e51f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e51f5 jne 0x116e5231 */
  if (!C.zf) goto L_116e5231;
L_116e51f7:;
  /* 116e51f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e51fa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e51fd push eax */
  push32((uint32_t)(EAX));
  /* 116e51fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e5201 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 116e5204 push edx */
  push32((uint32_t)(EDX));
  /* 116e5205 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e5208 push eax */
  push32((uint32_t)(EAX));
  /* 116e5209 push 0x1170a7a0 */
  push32((uint32_t)(0x1170a7a0u));
  /* 116e520e push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5210 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5212 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5214 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5216 call 0x116e2ee0 */
  push32(0x116e521bu); f_116e2ee0();
  /* 116e521b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e521e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5221 jne 0x116e5224 */
  if (!C.zf) goto L_116e5224;
  /* 116e5223 int3  */
  x86_unimpl("int3 @ 0x116e5223");
L_116e5224:;
  /* 116e5224 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e5226 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e5228 jne 0x116e51f7 */
  if (!C.zf) goto L_116e51f7;
  /* 116e522a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_116e5231:;
  /* 116e5231 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e5234 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5238 jne 0x116e528a */
  if (!C.zf) goto L_116e528a;
  /* 116e523a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e523d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116e5240 push ecx */
  push32((uint32_t)(ECX));
  /* 116e5241 mov dl, byte ptr [0x1170da91] */
  DL = (r8((uint32_t)(0x1170da91)));
  /* 116e5247 push edx */
  push32((uint32_t)(EDX));
  /* 116e5248 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e524b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e524e push eax */
  push32((uint32_t)(EAX));
  /* 116e524f call 0x116e4f30 */
  push32(0x116e5254u); f_116e4f30();
  /* 116e5254 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5257 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e5259 jne 0x116e528a */
  if (!C.zf) goto L_116e528a;
L_116e525b:;
  /* 116e525b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e525e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5261 push ecx */
  push32((uint32_t)(ECX));
  /* 116e5262 push 0x1170a8c4 */
  push32((uint32_t)(0x1170a8c4u));
  /* 116e5267 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5269 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e526b push 0 */
  push32((uint32_t)(0x0u));
  /* 116e526d push 0 */
  push32((uint32_t)(0x0u));
  /* 116e526f call 0x116e2ee0 */
  push32(0x116e5274u); f_116e2ee0();
  /* 116e5274 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5277 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e527a jne 0x116e527d */
  if (!C.zf) goto L_116e527d;
  /* 116e527c int3  */
  x86_unimpl("int3 @ 0x116e527c");
L_116e527d:;
  /* 116e527d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e527f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e5281 jne 0x116e525b */
  if (!C.zf) goto L_116e525b;
  /* 116e5283 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_116e528a:;
  /* 116e528a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e528e jne 0x116e5306 */
  if (!C.zf) goto L_116e5306;
  /* 116e5290 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e5293 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5297 je 0x116e52cc */
  if (C.zf) goto L_116e52cc;
L_116e5299:;
  /* 116e5299 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e529c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116e529f push edx */
  push32((uint32_t)(EDX));
  /* 116e52a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e52a3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116e52a6 push ecx */
  push32((uint32_t)(ECX));
  /* 116e52a7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e52aa push edx */
  push32((uint32_t)(EDX));
  /* 116e52ab push 0x1170a8a4 */
  push32((uint32_t)(0x1170a8a4u));
  /* 116e52b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e52b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e52b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e52b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e52b8 call 0x116e2ee0 */
  push32(0x116e52bdu); f_116e2ee0();
  /* 116e52bd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e52c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e52c3 jne 0x116e52c6 */
  if (!C.zf) goto L_116e52c6;
  /* 116e52c5 int3  */
  x86_unimpl("int3 @ 0x116e52c5");
L_116e52c6:;
  /* 116e52c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e52c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e52ca jne 0x116e5299 */
  if (!C.zf) goto L_116e5299;
L_116e52cc:;
  /* 116e52cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e52cf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 116e52d2 push edx */
  push32((uint32_t)(EDX));
  /* 116e52d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e52d6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e52d9 push eax */
  push32((uint32_t)(EAX));
  /* 116e52da mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e52dd push ecx */
  push32((uint32_t)(ECX));
  /* 116e52de push 0x1170a878 */
  push32((uint32_t)(0x1170a878u));
  /* 116e52e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e52e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e52e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e52e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e52eb call 0x116e2ee0 */
  push32(0x116e52f0u); f_116e2ee0();
  /* 116e52f0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e52f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e52f6 jne 0x116e52f9 */
  if (!C.zf) goto L_116e52f9;
  /* 116e52f8 int3  */
  x86_unimpl("int3 @ 0x116e52f8");
L_116e52f9:;
  /* 116e52f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e52fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e52fd jne 0x116e52cc */
  if (!C.zf) goto L_116e52cc;
  /* 116e52ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116e5306:;
  /* 116e5306 jmp 0x116e5113 */
  goto L_116e5113;
L_116e530b:;
  /* 116e530b push 9 */
  push32((uint32_t)(0x9u));
  /* 116e530d call 0x116e78c0 */
  push32(0x116e5312u); f_116e78c0();
  /* 116e5312 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5315 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116e5318:;
  /* 116e5318 pop edi */
  EDI = (pop32());
  /* 116e5319 pop esi */
  ESI = (pop32());
  /* 116e531a pop ebx */
  EBX = (pop32());
  /* 116e531b mov esp, ebp */
  ESP = (EBP);
  /* 116e531d pop ebp */
  EBP = (pop32());
  /* 116e531e ret  */
  ESPCHK(0x116e4fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005330 @ 0x116e5330 (34 bytes, 13 insns) */
void f_116e5330(void) {
  FTRACE(0x116e5330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e5330 push ebp */
  push32((uint32_t)(EBP));
  /* 116e5331 mov ebp, esp */
  EBP = (ESP);
  /* 116e5333 push ecx */
  push32((uint32_t)(ECX));
  /* 116e5334 mov eax, dword ptr [0x1170da84] */
  EAX = (r32((uint32_t)(0x1170da84)));
  /* 116e5339 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e533c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5340 je 0x116e534b */
  if (C.zf) goto L_116e534b;
  /* 116e5342 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e5345 mov dword ptr [0x1170da84], ecx */
  w32((uint32_t)(0x1170da84), (ECX));
L_116e534b:;
  /* 116e534b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e534e mov esp, ebp */
  ESP = (EBP);
  /* 116e5350 pop ebp */
  EBP = (pop32());
  /* 116e5351 ret  */
  ESPCHK(0x116e5330u, _esp0);
  ESP += 4; return;
}

/* FUN_10005360 @ 0x116e5360 (103 bytes, 38 insns) */
void f_116e5360(void) {
  FTRACE(0x116e5360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e5360 push ebp */
  push32((uint32_t)(EBP));
  /* 116e5361 mov ebp, esp */
  EBP = (ESP);
  /* 116e5363 push ecx */
  push32((uint32_t)(ECX));
  /* 116e5364 mov eax, dword ptr [0x1170da84] */
  EAX = (r32((uint32_t)(0x1170da84)));
  /* 116e5369 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 116e536c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e536e jne 0x116e5372 */
  if (!C.zf) goto L_116e5372;
  /* 116e5370 jmp 0x116e53c3 */
  goto L_116e53c3;
L_116e5372:;
  /* 116e5372 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e5374 call 0x116e7820 */
  push32(0x116e5379u); f_116e7820();
  /* 116e5379 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e537c mov ecx, dword ptr [0x1170f67c] */
  ECX = (r32((uint32_t)(0x1170f67c)));
  /* 116e5382 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116e5385 jmp 0x116e538f */
  goto L_116e538f;
L_116e5387:;
  /* 116e5387 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e538a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116e538c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116e538f:;
  /* 116e538f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5393 je 0x116e53b9 */
  if (C.zf) goto L_116e53b9;
  /* 116e5395 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5398 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 116e539b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116e53a1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e53a4 jne 0x116e53b7 */
  if (!C.zf) goto L_116e53b7;
  /* 116e53a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e53a9 push eax */
  push32((uint32_t)(EAX));
  /* 116e53aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e53ad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e53b0 push ecx */
  push32((uint32_t)(ECX));
  /* 116e53b1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x116e53b4u);
  /* 116e53b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e53b7:;
  /* 116e53b7 jmp 0x116e5387 */
  goto L_116e5387;
L_116e53b9:;
  /* 116e53b9 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e53bb call 0x116e78c0 */
  push32(0x116e53c0u); f_116e78c0();
  /* 116e53c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e53c3:;
  /* 116e53c3 mov esp, ebp */
  ESP = (EBP);
  /* 116e53c5 pop ebp */
  EBP = (pop32());
  /* 116e53c6 ret  */
  ESPCHK(0x116e5360u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x116e53d0 (75 bytes, 28 insns) */
void f_116e53d0(void) {
  FTRACE(0x116e53d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e53d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e53d1 mov ebp, esp */
  EBP = (ESP);
  /* 116e53d3 push ecx */
  push32((uint32_t)(ECX));
  /* 116e53d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e53d8 je 0x116e540d */
  if (C.zf) goto L_116e540d;
  /* 116e53da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e53dd push eax */
  push32((uint32_t)(EAX));
  /* 116e53de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e53e1 push ecx */
  push32((uint32_t)(ECX));
  /* 116e53e2 call dword ptr [0x11712374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712374))), 0x116e53e8u);
  /* 116e53e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e53ea jne 0x116e540d */
  if (!C.zf) goto L_116e540d;
  /* 116e53ec cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e53f0 je 0x116e5404 */
  if (C.zf) goto L_116e5404;
  /* 116e53f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e53f5 push edx */
  push32((uint32_t)(EDX));
  /* 116e53f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e53f9 push eax */
  push32((uint32_t)(EAX));
  /* 116e53fa call dword ptr [0x11712378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712378))), 0x116e5400u);
  /* 116e5400 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e5402 jne 0x116e540d */
  if (!C.zf) goto L_116e540d;
L_116e5404:;
  /* 116e5404 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116e540b jmp 0x116e5414 */
  goto L_116e5414;
L_116e540d:;
  /* 116e540d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116e5414:;
  /* 116e5414 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5417 mov esp, ebp */
  ESP = (EBP);
  /* 116e5419 pop ebp */
  EBP = (pop32());
  /* 116e541a ret  */
  ESPCHK(0x116e53d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005420 @ 0x116e5420 (134 bytes, 50 insns) */
void f_116e5420(void) {
  FTRACE(0x116e5420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e5420 push ebp */
  push32((uint32_t)(EBP));
  /* 116e5421 mov ebp, esp */
  EBP = (ESP);
  /* 116e5423 push ecx */
  push32((uint32_t)(ECX));
  /* 116e5424 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5428 jne 0x116e542e */
  if (!C.zf) goto L_116e542e;
  /* 116e542a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e542c jmp 0x116e54a2 */
  goto L_116e54a2;
L_116e542e:;
  /* 116e542e push 1 */
  push32((uint32_t)(0x1u));
  /* 116e5430 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 116e5432 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e5435 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e5438 push eax */
  push32((uint32_t)(EAX));
  /* 116e5439 call 0x116e53d0 */
  push32(0x116e543eu); f_116e53d0();
  /* 116e543e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5441 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e5443 jne 0x116e5449 */
  if (!C.zf) goto L_116e5449;
  /* 116e5445 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e5447 jmp 0x116e54a2 */
  goto L_116e54a2;
L_116e5449:;
  /* 116e5449 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e544c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e544f push ecx */
  push32((uint32_t)(ECX));
  /* 116e5450 call 0x116e8120 */
  push32(0x116e5455u); f_116e8120();
  /* 116e5455 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5458 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e545b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e545f je 0x116e5476 */
  if (C.zf) goto L_116e5476;
  /* 116e5461 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e5464 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e5467 push edx */
  push32((uint32_t)(EDX));
  /* 116e5468 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e546b push eax */
  push32((uint32_t)(EAX));
  /* 116e546c call 0x116e8180 */
  push32(0x116e5471u); f_116e8180();
  /* 116e5471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5474 jmp 0x116e54a2 */
  goto L_116e54a2;
L_116e5476:;
  /* 116e5476 mov ecx, dword ptr [0x1170f630] */
  ECX = (r32((uint32_t)(0x1170f630)));
  /* 116e547c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 116e5482 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e5484 je 0x116e548d */
  if (C.zf) goto L_116e548d;
  /* 116e5486 mov eax, 1 */
  EAX = (0x1u);
  /* 116e548b jmp 0x116e54a2 */
  goto L_116e54a2;
L_116e548d:;
  /* 116e548d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e5490 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e5493 push edx */
  push32((uint32_t)(EDX));
  /* 116e5494 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5496 mov eax, dword ptr [0x11710fcc] */
  EAX = (r32((uint32_t)(0x11710fcc)));
  /* 116e549b push eax */
  push32((uint32_t)(EAX));
  /* 116e549c call dword ptr [0x117123a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123a0))), 0x116e54a2u);
L_116e54a2:;
  /* 116e54a2 mov esp, ebp */
  ESP = (EBP);
  /* 116e54a4 pop ebp */
  EBP = (pop32());
  /* 116e54a5 ret  */
  ESPCHK(0x116e5420u, _esp0);
  ESP += 4; return;
}

/* FUN_100054b0 @ 0x116e54b0 (227 bytes, 80 insns) */
void f_116e54b0(void) {
  FTRACE(0x116e54b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e54b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e54b1 mov ebp, esp */
  EBP = (ESP);
  /* 116e54b3 push ecx */
  push32((uint32_t)(ECX));
  /* 116e54b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e54b7 push eax */
  push32((uint32_t)(EAX));
  /* 116e54b8 call 0x116e5420 */
  push32(0x116e54bdu); f_116e5420();
  /* 116e54bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e54c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e54c2 jne 0x116e54cb */
  if (!C.zf) goto L_116e54cb;
  /* 116e54c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e54c6 jmp 0x116e558f */
  goto L_116e558f;
L_116e54cb:;
  /* 116e54cb push 9 */
  push32((uint32_t)(0x9u));
  /* 116e54cd call 0x116e7820 */
  push32(0x116e54d2u); f_116e7820();
  /* 116e54d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e54d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e54d8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e54db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116e54de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e54e1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116e54e4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e54e9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e54ec je 0x116e5510 */
  if (C.zf) goto L_116e5510;
  /* 116e54ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e54f1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e54f5 je 0x116e5510 */
  if (C.zf) goto L_116e5510;
  /* 116e54f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e54fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116e54fd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e5502 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5505 je 0x116e5510 */
  if (C.zf) goto L_116e5510;
  /* 116e5507 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e550a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e550e jne 0x116e5583 */
  if (!C.zf) goto L_116e5583;
L_116e5510:;
  /* 116e5510 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e5512 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e5515 push edx */
  push32((uint32_t)(EDX));
  /* 116e5516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e5519 push eax */
  push32((uint32_t)(EAX));
  /* 116e551a call 0x116e53d0 */
  push32(0x116e551fu); f_116e53d0();
  /* 116e551f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5522 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e5524 je 0x116e5583 */
  if (C.zf) goto L_116e5583;
  /* 116e5526 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5529 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 116e552c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e552f jne 0x116e5583 */
  if (!C.zf) goto L_116e5583;
  /* 116e5531 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5534 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 116e5537 cmp ecx, dword ptr [0x1170da88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1170da88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e553d jg 0x116e5583 */
  if ((!C.zf&&C.sf==C.of)) goto L_116e5583;
  /* 116e553f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5543 je 0x116e5550 */
  if (C.zf) goto L_116e5550;
  /* 116e5545 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e5548 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e554b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 116e554e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_116e5550:;
  /* 116e5550 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5554 je 0x116e5561 */
  if (C.zf) goto L_116e5561;
  /* 116e5556 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e5559 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e555c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116e555f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_116e5561:;
  /* 116e5561 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5565 je 0x116e5572 */
  if (C.zf) goto L_116e5572;
  /* 116e5567 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e556a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e556d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116e5570 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_116e5572:;
  /* 116e5572 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e5574 call 0x116e78c0 */
  push32(0x116e5579u); f_116e78c0();
  /* 116e5579 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e557c mov eax, 1 */
  EAX = (0x1u);
  /* 116e5581 jmp 0x116e558f */
  goto L_116e558f;
L_116e5583:;
  /* 116e5583 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e5585 call 0x116e78c0 */
  push32(0x116e558au); f_116e78c0();
  /* 116e558a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e558d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116e558f:;
  /* 116e558f mov esp, ebp */
  ESP = (EBP);
  /* 116e5591 pop ebp */
  EBP = (pop32());
  /* 116e5592 ret  */
  ESPCHK(0x116e54b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100055a0 @ 0x116e55a0 (28 bytes, 11 insns) */
void f_116e55a0(void) {
  FTRACE(0x116e55a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e55a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e55a1 mov ebp, esp */
  EBP = (ESP);
  /* 116e55a3 push ecx */
  push32((uint32_t)(ECX));
  /* 116e55a4 mov eax, dword ptr [0x11710fd8] */
  EAX = (r32((uint32_t)(0x11710fd8)));
  /* 116e55a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e55ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e55af mov dword ptr [0x11710fd8], ecx */
  w32((uint32_t)(0x11710fd8), (ECX));
  /* 116e55b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e55b8 mov esp, ebp */
  ESP = (EBP);
  /* 116e55ba pop ebp */
  EBP = (pop32());
  /* 116e55bb ret  */
  ESPCHK(0x116e55a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100055c0 @ 0x116e55c0 (362 bytes, 116 insns) */
void f_116e55c0(void) {
  FTRACE(0x116e55c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e55c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e55c1 mov ebp, esp */
  EBP = (ESP);
  /* 116e55c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e55c6 push ebx */
  push32((uint32_t)(EBX));
  /* 116e55c7 push esi */
  push32((uint32_t)(ESI));
  /* 116e55c8 push edi */
  push32((uint32_t)(EDI));
  /* 116e55c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e55cd jne 0x116e55fa */
  if (!C.zf) goto L_116e55fa;
L_116e55cf:;
  /* 116e55cf push 0x1170a9d8 */
  push32((uint32_t)(0x1170a9d8u));
  /* 116e55d4 push 0x1170a4f0 */
  push32((uint32_t)(0x1170a4f0u));
  /* 116e55d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e55db push 0 */
  push32((uint32_t)(0x0u));
  /* 116e55dd push 0 */
  push32((uint32_t)(0x0u));
  /* 116e55df push 0 */
  push32((uint32_t)(0x0u));
  /* 116e55e1 call 0x116e2ee0 */
  push32(0x116e55e6u); f_116e2ee0();
  /* 116e55e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e55e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e55ec jne 0x116e55ef */
  if (!C.zf) goto L_116e55ef;
  /* 116e55ee int3  */
  x86_unimpl("int3 @ 0x116e55ee");
L_116e55ef:;
  /* 116e55ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e55f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e55f3 jne 0x116e55cf */
  if (!C.zf) goto L_116e55cf;
  /* 116e55f5 jmp 0x116e5723 */
  goto L_116e5723;
L_116e55fa:;
  /* 116e55fa push 9 */
  push32((uint32_t)(0x9u));
  /* 116e55fc call 0x116e7820 */
  push32(0x116e5601u); f_116e7820();
  /* 116e5601 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5604 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e5607 mov edx, dword ptr [0x1170f67c] */
  EDX = (r32((uint32_t)(0x1170f67c)));
  /* 116e560d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116e560f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116e5616 jmp 0x116e5621 */
  goto L_116e5621;
L_116e5618:;
  /* 116e5618 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e561b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e561e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116e5621:;
  /* 116e5621 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5625 jge 0x116e5645 */
  if ((C.sf==C.of)) goto L_116e5645;
  /* 116e5627 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e562a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e562d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 116e5635 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5638 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e563b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 116e5643 jmp 0x116e5618 */
  goto L_116e5618;
L_116e5645:;
  /* 116e5645 mov edx, dword ptr [0x1170f67c] */
  EDX = (r32((uint32_t)(0x1170f67c)));
  /* 116e564b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116e564e jmp 0x116e5658 */
  goto L_116e5658;
L_116e5650:;
  /* 116e5650 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e5653 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116e5655 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_116e5658:;
  /* 116e5658 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e565c je 0x116e5701 */
  if (C.zf) goto L_116e5701;
  /* 116e5662 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e5665 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116e5668 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e566d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e566f jl 0x116e56d7 */
  if ((C.sf!=C.of)) goto L_116e56d7;
  /* 116e5671 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e5674 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 116e5677 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116e567d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5680 jge 0x116e56d7 */
  if ((C.sf==C.of)) goto L_116e56d7;
  /* 116e5682 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e5685 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 116e5688 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116e568e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e5691 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 116e5695 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5698 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e569b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 116e569e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116e56a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e56a7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 116e56ab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e56ae mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116e56b1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e56b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e56b9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 116e56bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e56c0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e56c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e56c6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 116e56c9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e56ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e56d1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 116e56d5 jmp 0x116e56fc */
  goto L_116e56fc;
L_116e56d7:;
  /* 116e56d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e56da push edx */
  push32((uint32_t)(EDX));
  /* 116e56db push 0x1170a9b4 */
  push32((uint32_t)(0x1170a9b4u));
  /* 116e56e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e56e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e56e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e56e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e56e8 call 0x116e2ee0 */
  push32(0x116e56edu); f_116e2ee0();
  /* 116e56ed add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e56f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e56f3 jne 0x116e56f6 */
  if (!C.zf) goto L_116e56f6;
  /* 116e56f5 int3  */
  x86_unimpl("int3 @ 0x116e56f5");
L_116e56f6:;
  /* 116e56f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e56f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e56fa jne 0x116e56d7 */
  if (!C.zf) goto L_116e56d7;
L_116e56fc:;
  /* 116e56fc jmp 0x116e5650 */
  goto L_116e5650;
L_116e5701:;
  /* 116e5701 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e5704 mov edx, dword ptr [0x1170f684] */
  EDX = (r32((uint32_t)(0x1170f684)));
  /* 116e570a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 116e570d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e5710 mov ecx, dword ptr [0x1170f678] */
  ECX = (r32((uint32_t)(0x1170f678)));
  /* 116e5716 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 116e5719 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e571b call 0x116e78c0 */
  push32(0x116e5720u); f_116e78c0();
  /* 116e5720 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e5723:;
  /* 116e5723 pop edi */
  EDI = (pop32());
  /* 116e5724 pop esi */
  ESI = (pop32());
  /* 116e5725 pop ebx */
  EBX = (pop32());
  /* 116e5726 mov esp, ebp */
  ESP = (EBP);
  /* 116e5728 pop ebp */
  EBP = (pop32());
  /* 116e5729 ret  */
  ESPCHK(0x116e55c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005730 @ 0x116e5730 (291 bytes, 95 insns) */
void f_116e5730(void) {
  FTRACE(0x116e5730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e5730 push ebp */
  push32((uint32_t)(EBP));
  /* 116e5731 mov ebp, esp */
  EBP = (ESP);
  /* 116e5733 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e5736 push ebx */
  push32((uint32_t)(EBX));
  /* 116e5737 push esi */
  push32((uint32_t)(ESI));
  /* 116e5738 push edi */
  push32((uint32_t)(EDI));
  /* 116e5739 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116e5740 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5744 je 0x116e5752 */
  if (C.zf) goto L_116e5752;
  /* 116e5746 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e574a je 0x116e5752 */
  if (C.zf) goto L_116e5752;
  /* 116e574c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5750 jne 0x116e5780 */
  if (!C.zf) goto L_116e5780;
L_116e5752:;
  /* 116e5752 push 0x1170aa00 */
  push32((uint32_t)(0x1170aa00u));
  /* 116e5757 push 0x1170a4f0 */
  push32((uint32_t)(0x1170a4f0u));
  /* 116e575c push 0 */
  push32((uint32_t)(0x0u));
  /* 116e575e push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5760 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5762 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5764 call 0x116e2ee0 */
  push32(0x116e5769u); f_116e2ee0();
  /* 116e5769 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e576c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e576f jne 0x116e5772 */
  if (!C.zf) goto L_116e5772;
  /* 116e5771 int3  */
  x86_unimpl("int3 @ 0x116e5771");
L_116e5772:;
  /* 116e5772 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e5774 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e5776 jne 0x116e5752 */
  if (!C.zf) goto L_116e5752;
  /* 116e5778 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e577b jmp 0x116e584c */
  goto L_116e584c;
L_116e5780:;
  /* 116e5780 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116e5787 jmp 0x116e5792 */
  goto L_116e5792;
L_116e5789:;
  /* 116e5789 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e578c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e578f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116e5792:;
  /* 116e5792 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5796 jge 0x116e581c */
  if ((C.sf==C.of)) goto L_116e581c;
  /* 116e579c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e579f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e57a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e57a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 116e57a8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 116e57ac sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e57b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e57b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e57b6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 116e57ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e57bd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e57c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e57c3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 116e57c6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 116e57ca sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e57ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e57d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e57d4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 116e57d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e57db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e57de cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e57e3 jne 0x116e57f2 */
  if (!C.zf) goto L_116e57f2;
  /* 116e57e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e57e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e57eb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e57f0 je 0x116e5817 */
  if (C.zf) goto L_116e5817;
L_116e57f2:;
  /* 116e57f2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e57f6 je 0x116e5817 */
  if (C.zf) goto L_116e5817;
  /* 116e57f8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e57fc jne 0x116e5810 */
  if (!C.zf) goto L_116e5810;
  /* 116e57fe cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5802 jne 0x116e5817 */
  if (!C.zf) goto L_116e5817;
  /* 116e5804 mov eax, dword ptr [0x1170da84] */
  EAX = (r32((uint32_t)(0x1170da84)));
  /* 116e5809 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 116e580c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e580e je 0x116e5817 */
  if (C.zf) goto L_116e5817;
L_116e5810:;
  /* 116e5810 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_116e5817:;
  /* 116e5817 jmp 0x116e5789 */
  goto L_116e5789;
L_116e581c:;
  /* 116e581c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e581f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e5822 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 116e5825 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e5828 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e582b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 116e582e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e5831 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e5834 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 116e5837 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e583a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e583d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 116e5840 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e5843 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116e5849 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_116e584c:;
  /* 116e584c pop edi */
  EDI = (pop32());
  /* 116e584d pop esi */
  ESI = (pop32());
  /* 116e584e pop ebx */
  EBX = (pop32());
  /* 116e584f mov esp, ebp */
  ESP = (EBP);
  /* 116e5851 pop ebp */
  EBP = (pop32());
  /* 116e5852 ret  */
  ESPCHK(0x116e5730u, _esp0);
  ESP += 4; return;
}

/* FUN_10005860 @ 0x116e5860 (697 bytes, 253 insns) */
void f_116e5860(void) {
  FTRACE(0x116e5860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e5860 push ebp */
  push32((uint32_t)(EBP));
  /* 116e5861 mov ebp, esp */
  EBP = (ESP);
  /* 116e5863 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e5866 push ebx */
  push32((uint32_t)(EBX));
  /* 116e5867 push esi */
  push32((uint32_t)(ESI));
  /* 116e5868 push edi */
  push32((uint32_t)(EDI));
  /* 116e5869 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116e5870 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e5872 call 0x116e7820 */
  push32(0x116e5877u); f_116e7820();
  /* 116e5877 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e587a:;
  /* 116e587a push 0x1170aaf8 */
  push32((uint32_t)(0x1170aaf8u));
  /* 116e587f push 0x1170a4f0 */
  push32((uint32_t)(0x1170a4f0u));
  /* 116e5884 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5886 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5888 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e588a push 0 */
  push32((uint32_t)(0x0u));
  /* 116e588c call 0x116e2ee0 */
  push32(0x116e5891u); f_116e2ee0();
  /* 116e5891 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5894 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5897 jne 0x116e589a */
  if (!C.zf) goto L_116e589a;
  /* 116e5899 int3  */
  x86_unimpl("int3 @ 0x116e5899");
L_116e589a:;
  /* 116e589a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e589c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e589e jne 0x116e587a */
  if (!C.zf) goto L_116e587a;
  /* 116e58a0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e58a4 je 0x116e58ae */
  if (C.zf) goto L_116e58ae;
  /* 116e58a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e58a9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116e58ab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_116e58ae:;
  /* 116e58ae mov eax, dword ptr [0x1170f67c] */
  EAX = (r32((uint32_t)(0x1170f67c)));
  /* 116e58b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e58b6 jmp 0x116e58c0 */
  goto L_116e58c0;
L_116e58b8:;
  /* 116e58b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e58bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116e58bd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116e58c0:;
  /* 116e58c0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e58c4 je 0x116e5ae2 */
  if (C.zf) goto L_116e5ae2;
  /* 116e58ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e58cd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e58d0 je 0x116e5ae2 */
  if (C.zf) goto L_116e5ae2;
  /* 116e58d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e58d9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 116e58dc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116e58e2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e58e5 je 0x116e5914 */
  if (C.zf) goto L_116e5914;
  /* 116e58e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e58ea mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 116e58ed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116e58f3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e58f5 je 0x116e5914 */
  if (C.zf) goto L_116e5914;
  /* 116e58f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e58fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116e58fd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e5902 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5905 jne 0x116e5919 */
  if (!C.zf) goto L_116e5919;
  /* 116e5907 mov ecx, dword ptr [0x1170da84] */
  ECX = (r32((uint32_t)(0x1170da84)));
  /* 116e590d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 116e5910 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e5912 jne 0x116e5919 */
  if (!C.zf) goto L_116e5919;
L_116e5914:;
  /* 116e5914 jmp 0x116e5add */
  goto L_116e5add;
L_116e5919:;
  /* 116e5919 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e591c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5920 je 0x116e5992 */
  if (C.zf) goto L_116e5992;
  /* 116e5922 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5924 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e5926 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5929 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116e592c push ecx */
  push32((uint32_t)(ECX));
  /* 116e592d call 0x116e53d0 */
  push32(0x116e5932u); f_116e53d0();
  /* 116e5932 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5935 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e5937 jne 0x116e5963 */
  if (!C.zf) goto L_116e5963;
L_116e5939:;
  /* 116e5939 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e593c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 116e593f push eax */
  push32((uint32_t)(EAX));
  /* 116e5940 push 0x1170aae4 */
  push32((uint32_t)(0x1170aae4u));
  /* 116e5945 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5947 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5949 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e594b push 0 */
  push32((uint32_t)(0x0u));
  /* 116e594d call 0x116e2ee0 */
  push32(0x116e5952u); f_116e2ee0();
  /* 116e5952 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5955 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5958 jne 0x116e595b */
  if (!C.zf) goto L_116e595b;
  /* 116e595a int3  */
  x86_unimpl("int3 @ 0x116e595a");
L_116e595b:;
  /* 116e595b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e595d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e595f jne 0x116e5939 */
  if (!C.zf) goto L_116e5939;
  /* 116e5961 jmp 0x116e5992 */
  goto L_116e5992;
L_116e5963:;
  /* 116e5963 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5966 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 116e5969 push eax */
  push32((uint32_t)(EAX));
  /* 116e596a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e596d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116e5970 push edx */
  push32((uint32_t)(EDX));
  /* 116e5971 push 0x1170aad8 */
  push32((uint32_t)(0x1170aad8u));
  /* 116e5976 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5978 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e597a push 0 */
  push32((uint32_t)(0x0u));
  /* 116e597c push 0 */
  push32((uint32_t)(0x0u));
  /* 116e597e call 0x116e2ee0 */
  push32(0x116e5983u); f_116e2ee0();
  /* 116e5983 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5986 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5989 jne 0x116e598c */
  if (!C.zf) goto L_116e598c;
  /* 116e598b int3  */
  x86_unimpl("int3 @ 0x116e598b");
L_116e598c:;
  /* 116e598c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e598e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e5990 jne 0x116e5963 */
  if (!C.zf) goto L_116e5963;
L_116e5992:;
  /* 116e5992 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5995 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 116e5998 push edx */
  push32((uint32_t)(EDX));
  /* 116e5999 push 0x1170aad0 */
  push32((uint32_t)(0x1170aad0u));
  /* 116e599e push 0 */
  push32((uint32_t)(0x0u));
  /* 116e59a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e59a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e59a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e59a6 call 0x116e2ee0 */
  push32(0x116e59abu); f_116e2ee0();
  /* 116e59ab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e59ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e59b1 jne 0x116e59b4 */
  if (!C.zf) goto L_116e59b4;
  /* 116e59b3 int3  */
  x86_unimpl("int3 @ 0x116e59b3");
L_116e59b4:;
  /* 116e59b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e59b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e59b8 jne 0x116e5992 */
  if (!C.zf) goto L_116e5992;
  /* 116e59ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e59bd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 116e59c0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116e59c6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e59c9 jne 0x116e5a3c */
  if (!C.zf) goto L_116e5a3c;
L_116e59cb:;
  /* 116e59cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e59ce mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116e59d1 push ecx */
  push32((uint32_t)(ECX));
  /* 116e59d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e59d5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116e59d8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 116e59db and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e59e0 push eax */
  push32((uint32_t)(EAX));
  /* 116e59e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e59e4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e59e7 push ecx */
  push32((uint32_t)(ECX));
  /* 116e59e8 push 0x1170aa9c */
  push32((uint32_t)(0x1170aa9cu));
  /* 116e59ed push 0 */
  push32((uint32_t)(0x0u));
  /* 116e59ef push 0 */
  push32((uint32_t)(0x0u));
  /* 116e59f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e59f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e59f5 call 0x116e2ee0 */
  push32(0x116e59fau); f_116e2ee0();
  /* 116e59fa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e59fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5a00 jne 0x116e5a03 */
  if (!C.zf) goto L_116e5a03;
  /* 116e5a02 int3  */
  x86_unimpl("int3 @ 0x116e5a02");
L_116e5a03:;
  /* 116e5a03 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e5a05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e5a07 jne 0x116e59cb */
  if (!C.zf) goto L_116e59cb;
  /* 116e5a09 cmp dword ptr [0x11710fd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11710fd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5a10 je 0x116e5a2b */
  if (C.zf) goto L_116e5a2b;
  /* 116e5a12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5a15 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116e5a18 push ecx */
  push32((uint32_t)(ECX));
  /* 116e5a19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5a1c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5a1f push edx */
  push32((uint32_t)(EDX));
  /* 116e5a20 call dword ptr [0x11710fd8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11710fd8))), 0x116e5a26u);
  /* 116e5a26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5a29 jmp 0x116e5a37 */
  goto L_116e5a37;
L_116e5a2b:;
  /* 116e5a2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5a2e push eax */
  push32((uint32_t)(EAX));
  /* 116e5a2f call 0x116e5b20 */
  push32(0x116e5a34u); f_116e5b20();
  /* 116e5a34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e5a37:;
  /* 116e5a37 jmp 0x116e5add */
  goto L_116e5add;
L_116e5a3c:;
  /* 116e5a3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5a3f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5a43 jne 0x116e5a82 */
  if (!C.zf) goto L_116e5a82;
L_116e5a45:;
  /* 116e5a45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5a48 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116e5a4b push eax */
  push32((uint32_t)(EAX));
  /* 116e5a4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5a4f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5a52 push ecx */
  push32((uint32_t)(ECX));
  /* 116e5a53 push 0x1170aa74 */
  push32((uint32_t)(0x1170aa74u));
  /* 116e5a58 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5a5a push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5a5c push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5a5e push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5a60 call 0x116e2ee0 */
  push32(0x116e5a65u); f_116e2ee0();
  /* 116e5a65 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5a68 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5a6b jne 0x116e5a6e */
  if (!C.zf) goto L_116e5a6e;
  /* 116e5a6d int3  */
  x86_unimpl("int3 @ 0x116e5a6d");
L_116e5a6e:;
  /* 116e5a6e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e5a70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e5a72 jne 0x116e5a45 */
  if (!C.zf) goto L_116e5a45;
  /* 116e5a74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5a77 push eax */
  push32((uint32_t)(EAX));
  /* 116e5a78 call 0x116e5b20 */
  push32(0x116e5a7du); f_116e5b20();
  /* 116e5a7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5a80 jmp 0x116e5add */
  goto L_116e5add;
L_116e5a82:;
  /* 116e5a82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5a85 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 116e5a88 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116e5a8e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5a91 jne 0x116e5add */
  if (!C.zf) goto L_116e5add;
L_116e5a93:;
  /* 116e5a93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5a96 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116e5a99 push ecx */
  push32((uint32_t)(ECX));
  /* 116e5a9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5a9d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116e5aa0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 116e5aa3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e5aa8 push eax */
  push32((uint32_t)(EAX));
  /* 116e5aa9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5aac add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5aaf push ecx */
  push32((uint32_t)(ECX));
  /* 116e5ab0 push 0x1170aa40 */
  push32((uint32_t)(0x1170aa40u));
  /* 116e5ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5ab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5abb push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5abd call 0x116e2ee0 */
  push32(0x116e5ac2u); f_116e2ee0();
  /* 116e5ac2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5ac5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5ac8 jne 0x116e5acb */
  if (!C.zf) goto L_116e5acb;
  /* 116e5aca int3  */
  x86_unimpl("int3 @ 0x116e5aca");
L_116e5acb:;
  /* 116e5acb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e5acd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e5acf jne 0x116e5a93 */
  if (!C.zf) goto L_116e5a93;
  /* 116e5ad1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5ad4 push eax */
  push32((uint32_t)(EAX));
  /* 116e5ad5 call 0x116e5b20 */
  push32(0x116e5adau); f_116e5b20();
  /* 116e5ada add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e5add:;
  /* 116e5add jmp 0x116e58b8 */
  goto L_116e58b8;
L_116e5ae2:;
  /* 116e5ae2 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e5ae4 call 0x116e78c0 */
  push32(0x116e5ae9u); f_116e78c0();
  /* 116e5ae9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e5aec:;
  /* 116e5aec push 0x1170aa28 */
  push32((uint32_t)(0x1170aa28u));
  /* 116e5af1 push 0x1170a4f0 */
  push32((uint32_t)(0x1170a4f0u));
  /* 116e5af6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5af8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5afa push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5afc push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5afe call 0x116e2ee0 */
  push32(0x116e5b03u); f_116e2ee0();
  /* 116e5b03 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5b06 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5b09 jne 0x116e5b0c */
  if (!C.zf) goto L_116e5b0c;
  /* 116e5b0b int3  */
  x86_unimpl("int3 @ 0x116e5b0b");
L_116e5b0c:;
  /* 116e5b0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e5b0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e5b10 jne 0x116e5aec */
  if (!C.zf) goto L_116e5aec;
  /* 116e5b12 pop edi */
  EDI = (pop32());
  /* 116e5b13 pop esi */
  ESI = (pop32());
  /* 116e5b14 pop ebx */
  EBX = (pop32());
  /* 116e5b15 mov esp, ebp */
  ESP = (EBP);
  /* 116e5b17 pop ebp */
  EBP = (pop32());
  /* 116e5b18 ret  */
  ESPCHK(0x116e5860u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b20 @ 0x116e5b20 (276 bytes, 89 insns) */
void f_116e5b20(void) {
  FTRACE(0x116e5b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e5b20 push ebp */
  push32((uint32_t)(EBP));
  /* 116e5b21 mov ebp, esp */
  EBP = (ESP);
  /* 116e5b23 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e5b26 push ebx */
  push32((uint32_t)(EBX));
  /* 116e5b27 push esi */
  push32((uint32_t)(ESI));
  /* 116e5b28 push edi */
  push32((uint32_t)(EDI));
  /* 116e5b29 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 116e5b30 jmp 0x116e5b3b */
  goto L_116e5b3b;
L_116e5b32:;
  /* 116e5b32 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 116e5b35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5b38 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_116e5b3b:;
  /* 116e5b3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e5b3e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5b42 jge 0x116e5b4f */
  if ((C.sf==C.of)) goto L_116e5b4f;
  /* 116e5b44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e5b47 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116e5b4a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 116e5b4d jmp 0x116e5b56 */
  goto L_116e5b56;
L_116e5b4f:;
  /* 116e5b4f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_116e5b56:;
  /* 116e5b56 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 116e5b59 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5b5c jge 0x116e5bfc */
  if ((C.sf==C.of)) goto L_116e5bfc;
  /* 116e5b62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e5b65 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5b68 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 116e5b6b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 116e5b6e cmp dword ptr [0x1170dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5b75 jle 0x116e5b93 */
  if ((C.zf||C.sf!=C.of)) goto L_116e5b93;
  /* 116e5b77 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 116e5b7c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e5b7f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116e5b85 push ecx */
  push32((uint32_t)(ECX));
  /* 116e5b86 call 0x116e9e30 */
  push32(0x116e5b8bu); f_116e9e30();
  /* 116e5b8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5b8e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 116e5b91 jmp 0x116e5bb0 */
  goto L_116e5bb0;
L_116e5b93:;
  /* 116e5b93 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e5b96 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116e5b9c mov eax, dword ptr [0x1170dc98] */
  EAX = (r32((uint32_t)(0x1170dc98)));
  /* 116e5ba1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e5ba3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 116e5ba7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 116e5bad mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_116e5bb0:;
  /* 116e5bb0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5bb4 je 0x116e5bc4 */
  if (C.zf) goto L_116e5bc4;
  /* 116e5bb6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e5bb9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116e5bbf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 116e5bc2 jmp 0x116e5bcb */
  goto L_116e5bcb;
L_116e5bc4:;
  /* 116e5bc4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_116e5bcb:;
  /* 116e5bcb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 116e5bce mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 116e5bd1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 116e5bd5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 116e5bd8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116e5bde push edx */
  push32((uint32_t)(EDX));
  /* 116e5bdf push 0x1170ab1c */
  push32((uint32_t)(0x1170ab1cu));
  /* 116e5be4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 116e5be7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e5bea lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 116e5bee push ecx */
  push32((uint32_t)(ECX));
  /* 116e5bef call 0x116e9d30 */
  push32(0x116e5bf4u); f_116e9d30();
  /* 116e5bf4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5bf7 jmp 0x116e5b32 */
  goto L_116e5b32;
L_116e5bfc:;
  /* 116e5bfc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 116e5bff mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_116e5c04:;
  /* 116e5c04 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 116e5c07 push eax */
  push32((uint32_t)(EAX));
  /* 116e5c08 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 116e5c0b push ecx */
  push32((uint32_t)(ECX));
  /* 116e5c0c push 0x1170ab0c */
  push32((uint32_t)(0x1170ab0cu));
  /* 116e5c11 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5c13 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5c15 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5c17 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5c19 call 0x116e2ee0 */
  push32(0x116e5c1eu); f_116e2ee0();
  /* 116e5c1e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5c21 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5c24 jne 0x116e5c27 */
  if (!C.zf) goto L_116e5c27;
  /* 116e5c26 int3  */
  x86_unimpl("int3 @ 0x116e5c26");
L_116e5c27:;
  /* 116e5c27 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e5c29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e5c2b jne 0x116e5c04 */
  if (!C.zf) goto L_116e5c04;
  /* 116e5c2d pop edi */
  EDI = (pop32());
  /* 116e5c2e pop esi */
  ESI = (pop32());
  /* 116e5c2f pop ebx */
  EBX = (pop32());
  /* 116e5c30 mov esp, ebp */
  ESP = (EBP);
  /* 116e5c32 pop ebp */
  EBP = (pop32());
  /* 116e5c33 ret  */
  ESPCHK(0x116e5b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c40 @ 0x116e5c40 (116 bytes, 46 insns) */
void f_116e5c40(void) {
  FTRACE(0x116e5c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e5c40 push ebp */
  push32((uint32_t)(EBP));
  /* 116e5c41 mov ebp, esp */
  EBP = (ESP);
  /* 116e5c43 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e5c46 push ebx */
  push32((uint32_t)(EBX));
  /* 116e5c47 push esi */
  push32((uint32_t)(ESI));
  /* 116e5c48 push edi */
  push32((uint32_t)(EDI));
  /* 116e5c49 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 116e5c4c push eax */
  push32((uint32_t)(EAX));
  /* 116e5c4d call 0x116e55c0 */
  push32(0x116e5c52u); f_116e55c0();
  /* 116e5c52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5c55 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5c59 jne 0x116e5c74 */
  if (!C.zf) goto L_116e5c74;
  /* 116e5c5b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5c5f jne 0x116e5c74 */
  if (!C.zf) goto L_116e5c74;
  /* 116e5c61 mov ecx, dword ptr [0x1170da84] */
  ECX = (r32((uint32_t)(0x1170da84)));
  /* 116e5c67 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 116e5c6a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e5c6c je 0x116e5cab */
  if (C.zf) goto L_116e5cab;
  /* 116e5c6e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5c72 je 0x116e5cab */
  if (C.zf) goto L_116e5cab;
L_116e5c74:;
  /* 116e5c74 push 0x1170ab24 */
  push32((uint32_t)(0x1170ab24u));
  /* 116e5c79 push 0x1170a4f0 */
  push32((uint32_t)(0x1170a4f0u));
  /* 116e5c7e push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5c80 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5c82 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5c84 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5c86 call 0x116e2ee0 */
  push32(0x116e5c8bu); f_116e2ee0();
  /* 116e5c8b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5c8e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5c91 jne 0x116e5c94 */
  if (!C.zf) goto L_116e5c94;
  /* 116e5c93 int3  */
  x86_unimpl("int3 @ 0x116e5c93");
L_116e5c94:;
  /* 116e5c94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e5c96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e5c98 jne 0x116e5c74 */
  if (!C.zf) goto L_116e5c74;
  /* 116e5c9a push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5c9c call 0x116e5860 */
  push32(0x116e5ca1u); f_116e5860();
  /* 116e5ca1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5ca4 mov eax, 1 */
  EAX = (0x1u);
  /* 116e5ca9 jmp 0x116e5cad */
  goto L_116e5cad;
L_116e5cab:;
  /* 116e5cab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116e5cad:;
  /* 116e5cad pop edi */
  EDI = (pop32());
  /* 116e5cae pop esi */
  ESI = (pop32());
  /* 116e5caf pop ebx */
  EBX = (pop32());
  /* 116e5cb0 mov esp, ebp */
  ESP = (EBP);
  /* 116e5cb2 pop ebp */
  EBP = (pop32());
  /* 116e5cb3 ret  */
  ESPCHK(0x116e5c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cc0 @ 0x116e5cc0 (197 bytes, 79 insns) */
void f_116e5cc0(void) {
  FTRACE(0x116e5cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e5cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e5cc1 mov ebp, esp */
  EBP = (ESP);
  /* 116e5cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 116e5cc4 push ebx */
  push32((uint32_t)(EBX));
  /* 116e5cc5 push esi */
  push32((uint32_t)(ESI));
  /* 116e5cc6 push edi */
  push32((uint32_t)(EDI));
  /* 116e5cc7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5ccb jne 0x116e5cd2 */
  if (!C.zf) goto L_116e5cd2;
  /* 116e5ccd jmp 0x116e5d7e */
  goto L_116e5d7e;
L_116e5cd2:;
  /* 116e5cd2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116e5cd9 jmp 0x116e5ce4 */
  goto L_116e5ce4;
L_116e5cdb:;
  /* 116e5cdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5cde add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5ce1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116e5ce4:;
  /* 116e5ce4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5ce8 jge 0x116e5d2e */
  if ((C.sf==C.of)) goto L_116e5d2e;
L_116e5cea:;
  /* 116e5cea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5ced mov edx, dword ptr [ecx*4 + 0x1170da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1170da94)));
  /* 116e5cf4 push edx */
  push32((uint32_t)(EDX));
  /* 116e5cf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5cf8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e5cfb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 116e5cff push edx */
  push32((uint32_t)(EDX));
  /* 116e5d00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5d03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e5d06 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 116e5d0a push edx */
  push32((uint32_t)(EDX));
  /* 116e5d0b push 0x1170ab80 */
  push32((uint32_t)(0x1170ab80u));
  /* 116e5d10 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5d12 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5d14 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5d16 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5d18 call 0x116e2ee0 */
  push32(0x116e5d1du); f_116e2ee0();
  /* 116e5d1d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5d20 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5d23 jne 0x116e5d26 */
  if (!C.zf) goto L_116e5d26;
  /* 116e5d25 int3  */
  x86_unimpl("int3 @ 0x116e5d25");
L_116e5d26:;
  /* 116e5d26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e5d28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e5d2a jne 0x116e5cea */
  if (!C.zf) goto L_116e5cea;
  /* 116e5d2c jmp 0x116e5cdb */
  goto L_116e5cdb;
L_116e5d2e:;
  /* 116e5d2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e5d31 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 116e5d34 push edx */
  push32((uint32_t)(EDX));
  /* 116e5d35 push 0x1170ab5c */
  push32((uint32_t)(0x1170ab5cu));
  /* 116e5d3a push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5d3c push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5d3e push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5d42 call 0x116e2ee0 */
  push32(0x116e5d47u); f_116e2ee0();
  /* 116e5d47 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5d4a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5d4d jne 0x116e5d50 */
  if (!C.zf) goto L_116e5d50;
  /* 116e5d4f int3  */
  x86_unimpl("int3 @ 0x116e5d4f");
L_116e5d50:;
  /* 116e5d50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e5d52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e5d54 jne 0x116e5d2e */
  if (!C.zf) goto L_116e5d2e;
L_116e5d56:;
  /* 116e5d56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e5d59 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 116e5d5c push edx */
  push32((uint32_t)(EDX));
  /* 116e5d5d push 0x1170ab3c */
  push32((uint32_t)(0x1170ab3cu));
  /* 116e5d62 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5d64 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5d66 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5d68 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5d6a call 0x116e2ee0 */
  push32(0x116e5d6fu); f_116e2ee0();
  /* 116e5d6f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5d72 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5d75 jne 0x116e5d78 */
  if (!C.zf) goto L_116e5d78;
  /* 116e5d77 int3  */
  x86_unimpl("int3 @ 0x116e5d77");
L_116e5d78:;
  /* 116e5d78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e5d7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e5d7c jne 0x116e5d56 */
  if (!C.zf) goto L_116e5d56;
L_116e5d7e:;
  /* 116e5d7e pop edi */
  EDI = (pop32());
  /* 116e5d7f pop esi */
  ESI = (pop32());
  /* 116e5d80 pop ebx */
  EBX = (pop32());
  /* 116e5d81 mov esp, ebp */
  ESP = (EBP);
  /* 116e5d83 pop ebp */
  EBP = (pop32());
  /* 116e5d84 ret  */
  ESPCHK(0x116e5cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d90 @ 0x116e5d90 (329 bytes, 102 insns) */
void f_116e5d90(void) {
  FTRACE(0x116e5d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e5d90 push ebp */
  push32((uint32_t)(EBP));
  /* 116e5d91 mov ebp, esp */
  EBP = (ESP);
  /* 116e5d93 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e5d96 cmp dword ptr [0x11711150], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11711150))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5d9d jne 0x116e5da4 */
  if (!C.zf) goto L_116e5da4;
  /* 116e5d9f call 0x116ea6d0 */
  push32(0x116e5da4u); f_116ea6d0();
L_116e5da4:;
  /* 116e5da4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116e5dab mov eax, dword ptr [0x1170f618] */
  EAX = (r32((uint32_t)(0x1170f618)));
  /* 116e5db0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116e5db3:;
  /* 116e5db3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5db6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116e5db9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e5dbb je 0x116e5de9 */
  if (C.zf) goto L_116e5de9;
  /* 116e5dbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5dc0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116e5dc3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5dc6 je 0x116e5dd1 */
  if (C.zf) goto L_116e5dd1;
  /* 116e5dc8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e5dcb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5dce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_116e5dd1:;
  /* 116e5dd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5dd4 push eax */
  push32((uint32_t)(EAX));
  /* 116e5dd5 call 0x116e6c50 */
  push32(0x116e5ddau); f_116e6c50();
  /* 116e5dda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5ddd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5de0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 116e5de4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116e5de7 jmp 0x116e5db3 */
  goto L_116e5db3;
L_116e5de9:;
  /* 116e5de9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 116e5deb push 0x1170aba0 */
  push32((uint32_t)(0x1170aba0u));
  /* 116e5df0 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e5df2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e5df5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 116e5dfc push ecx */
  push32((uint32_t)(ECX));
  /* 116e5dfd call 0x116e3e20 */
  push32(0x116e5e02u); f_116e3e20();
  /* 116e5e02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5e05 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116e5e08 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e5e0b mov dword ptr [0x1170f64c], edx */
  w32((uint32_t)(0x1170f64c), (EDX));
  /* 116e5e11 cmp dword ptr [0x1170f64c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f64c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5e18 jne 0x116e5e24 */
  if (!C.zf) goto L_116e5e24;
  /* 116e5e1a push 9 */
  push32((uint32_t)(0x9u));
  /* 116e5e1c call 0x116e2d90 */
  push32(0x116e5e21u); f_116e2d90();
  /* 116e5e21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e5e24:;
  /* 116e5e24 mov eax, dword ptr [0x1170f618] */
  EAX = (r32((uint32_t)(0x1170f618)));
  /* 116e5e29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e5e2c jmp 0x116e5e37 */
  goto L_116e5e37;
L_116e5e2e:;
  /* 116e5e2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5e31 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5e34 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116e5e37:;
  /* 116e5e37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5e3a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116e5e3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e5e3f je 0x116e5ea7 */
  if (C.zf) goto L_116e5ea7;
  /* 116e5e41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5e44 push ecx */
  push32((uint32_t)(ECX));
  /* 116e5e45 call 0x116e6c50 */
  push32(0x116e5e4au); f_116e6c50();
  /* 116e5e4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5e4d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5e50 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116e5e53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5e56 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116e5e59 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5e5c je 0x116e5ea5 */
  if (C.zf) goto L_116e5ea5;
  /* 116e5e5e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 116e5e60 push 0x1170aba0 */
  push32((uint32_t)(0x1170aba0u));
  /* 116e5e65 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e5e67 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e5e6a push ecx */
  push32((uint32_t)(ECX));
  /* 116e5e6b call 0x116e3e20 */
  push32(0x116e5e70u); f_116e3e20();
  /* 116e5e70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5e73 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e5e76 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 116e5e78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e5e7b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5e7e jne 0x116e5e8a */
  if (!C.zf) goto L_116e5e8a;
  /* 116e5e80 push 9 */
  push32((uint32_t)(0x9u));
  /* 116e5e82 call 0x116e2d90 */
  push32(0x116e5e87u); f_116e2d90();
  /* 116e5e87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e5e8a:;
  /* 116e5e8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5e8d push ecx */
  push32((uint32_t)(ECX));
  /* 116e5e8e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e5e91 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116e5e93 push eax */
  push32((uint32_t)(EAX));
  /* 116e5e94 call 0x116e6dd0 */
  push32(0x116e5e99u); f_116e6dd0();
  /* 116e5e99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5e9c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e5e9f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5ea2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_116e5ea5:;
  /* 116e5ea5 jmp 0x116e5e2e */
  goto L_116e5e2e;
L_116e5ea7:;
  /* 116e5ea7 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e5ea9 mov edx, dword ptr [0x1170f618] */
  EDX = (r32((uint32_t)(0x1170f618)));
  /* 116e5eaf push edx */
  push32((uint32_t)(EDX));
  /* 116e5eb0 call 0x116e48b0 */
  push32(0x116e5eb5u); f_116e48b0();
  /* 116e5eb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5eb8 mov dword ptr [0x1170f618], 0 */
  w32((uint32_t)(0x1170f618), (0x0u));
  /* 116e5ec2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e5ec5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116e5ecb mov dword ptr [0x11711140], 1 */
  w32((uint32_t)(0x11711140), (0x1u));
  /* 116e5ed5 mov esp, ebp */
  ESP = (EBP);
  /* 116e5ed7 pop ebp */
  EBP = (pop32());
  /* 116e5ed8 ret  */
  ESPCHK(0x116e5d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ee0 @ 0x116e5ee0 (216 bytes, 69 insns) */
void f_116e5ee0(void) {
  FTRACE(0x116e5ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e5ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e5ee1 mov ebp, esp */
  EBP = (ESP);
  /* 116e5ee3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e5ee6 cmp dword ptr [0x11711150], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11711150))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5eed jne 0x116e5ef4 */
  if (!C.zf) goto L_116e5ef4;
  /* 116e5eef call 0x116ea6d0 */
  push32(0x116e5ef4u); f_116ea6d0();
L_116e5ef4:;
  /* 116e5ef4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 116e5ef9 push 0x1170f688 */
  push32((uint32_t)(0x1170f688u));
  /* 116e5efe push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5f00 call dword ptr [0x11712358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712358))), 0x116e5f06u);
  /* 116e5f06 mov dword ptr [0x1170f65c], 0x1170f688 */
  w32((uint32_t)(0x1170f65c), (0x1170f688u));
  /* 116e5f10 mov eax, dword ptr [0x1171116c] */
  EAX = (r32((uint32_t)(0x1171116c)));
  /* 116e5f15 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116e5f18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e5f1a jne 0x116e5f27 */
  if (!C.zf) goto L_116e5f27;
  /* 116e5f1c mov edx, dword ptr [0x1170f65c] */
  EDX = (r32((uint32_t)(0x1170f65c)));
  /* 116e5f22 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116e5f25 jmp 0x116e5f2f */
  goto L_116e5f2f;
L_116e5f27:;
  /* 116e5f27 mov eax, dword ptr [0x1171116c] */
  EAX = (r32((uint32_t)(0x1171116c)));
  /* 116e5f2c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_116e5f2f:;
  /* 116e5f2f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e5f32 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116e5f35 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 116e5f38 push edx */
  push32((uint32_t)(EDX));
  /* 116e5f39 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 116e5f3c push eax */
  push32((uint32_t)(EAX));
  /* 116e5f3d push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5f3f push 0 */
  push32((uint32_t)(0x0u));
  /* 116e5f41 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e5f44 push ecx */
  push32((uint32_t)(ECX));
  /* 116e5f45 call 0x116e5fc0 */
  push32(0x116e5f4au); f_116e5fc0();
  /* 116e5f4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5f4d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 116e5f52 push 0x1170abac */
  push32((uint32_t)(0x1170abacu));
  /* 116e5f57 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e5f59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e5f5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5f5f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 116e5f62 push ecx */
  push32((uint32_t)(ECX));
  /* 116e5f63 call 0x116e3e20 */
  push32(0x116e5f68u); f_116e3e20();
  /* 116e5f68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5f6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116e5f6e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5f72 jne 0x116e5f7e */
  if (!C.zf) goto L_116e5f7e;
  /* 116e5f74 push 8 */
  push32((uint32_t)(0x8u));
  /* 116e5f76 call 0x116e2d90 */
  push32(0x116e5f7bu); f_116e2d90();
  /* 116e5f7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e5f7e:;
  /* 116e5f7e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 116e5f81 push edx */
  push32((uint32_t)(EDX));
  /* 116e5f82 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 116e5f85 push eax */
  push32((uint32_t)(EAX));
  /* 116e5f86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e5f89 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e5f8c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 116e5f8f push eax */
  push32((uint32_t)(EAX));
  /* 116e5f90 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e5f93 push ecx */
  push32((uint32_t)(ECX));
  /* 116e5f94 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e5f97 push edx */
  push32((uint32_t)(EDX));
  /* 116e5f98 call 0x116e5fc0 */
  push32(0x116e5f9du); f_116e5fc0();
  /* 116e5f9d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5fa0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e5fa3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e5fa6 mov dword ptr [0x1170f640], eax */
  w32((uint32_t)(0x1170f640), (EAX));
  /* 116e5fab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e5fae mov dword ptr [0x1170f644], ecx */
  w32((uint32_t)(0x1170f644), (ECX));
  /* 116e5fb4 mov esp, ebp */
  ESP = (EBP);
  /* 116e5fb6 pop ebp */
  EBP = (pop32());
  /* 116e5fb7 ret  */
  ESPCHK(0x116e5ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fc0 @ 0x116e5fc0 (1060 bytes, 360 insns) */
void f_116e5fc0(void) {
  FTRACE(0x116e5fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e5fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e5fc1 mov ebp, esp */
  EBP = (ESP);
  /* 116e5fc3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e5fc6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e5fc9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116e5fcf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e5fd2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 116e5fd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e5fdb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116e5fde cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5fe2 je 0x116e5ff5 */
  if (C.zf) goto L_116e5ff5;
  /* 116e5fe4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e5fe7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e5fea mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 116e5fec mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e5fef add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e5ff2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_116e5ff5:;
  /* 116e5ff5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e5ff8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116e5ffb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e5ffe jne 0x116e60cd */
  if (!C.zf) goto L_116e60cd;
L_116e6004:;
  /* 116e6004 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6007 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e600a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116e600d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6010 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116e6013 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6016 je 0x116e6092 */
  if (C.zf) goto L_116e6092;
  /* 116e6018 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e601b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116e601e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e6020 je 0x116e6092 */
  if (C.zf) goto L_116e6092;
  /* 116e6022 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6025 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e6027 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116e6029 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e602b mov al, byte ptr [edx + 0x11710ea1] */
  AL = (r8((uint32_t)(EDX + 0x11710ea1)));
  /* 116e6031 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 116e6034 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e6036 je 0x116e6067 */
  if (C.zf) goto L_116e6067;
  /* 116e6038 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e603b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116e603d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6040 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e6043 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116e6045 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6049 je 0x116e6067 */
  if (C.zf) goto L_116e6067;
  /* 116e604b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e604e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6051 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116e6053 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 116e6055 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e6058 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e605b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 116e605e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6061 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6064 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116e6067:;
  /* 116e6067 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e606a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116e606c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e606f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e6072 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116e6074 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6078 je 0x116e608d */
  if (C.zf) goto L_116e608d;
  /* 116e607a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e607d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6080 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116e6082 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116e6084 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e6087 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e608a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_116e608d:;
  /* 116e608d jmp 0x116e6004 */
  goto L_116e6004;
L_116e6092:;
  /* 116e6092 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e6095 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116e6097 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e609a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e609d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116e609f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e60a3 je 0x116e60b4 */
  if (C.zf) goto L_116e60b4;
  /* 116e60a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e60a8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 116e60ab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e60ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e60b1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_116e60b4:;
  /* 116e60b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e60b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116e60ba cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e60bd jne 0x116e60c8 */
  if (!C.zf) goto L_116e60c8;
  /* 116e60bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e60c2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e60c5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116e60c8:;
  /* 116e60c8 jmp 0x116e619c */
  goto L_116e619c;
L_116e60cd:;
  /* 116e60cd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e60d0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116e60d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e60d5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e60d8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116e60da cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e60de je 0x116e60f3 */
  if (C.zf) goto L_116e60f3;
  /* 116e60e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e60e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e60e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116e60e8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116e60ea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e60ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e60f0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_116e60f3:;
  /* 116e60f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e60f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116e60f8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 116e60fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e60fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6101 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e6104 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e6107 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116e610d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e610f mov dl, byte ptr [ecx + 0x11710ea1] */
  DL = (r8((uint32_t)(ECX + 0x11710ea1)));
  /* 116e6115 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116e6118 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e611a je 0x116e614b */
  if (C.zf) goto L_116e614b;
  /* 116e611c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e611f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116e6121 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6124 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e6127 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116e6129 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e612d je 0x116e6142 */
  if (C.zf) goto L_116e6142;
  /* 116e612f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e6132 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6135 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116e6137 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116e6139 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e613c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e613f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_116e6142:;
  /* 116e6142 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6145 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6148 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116e614b:;
  /* 116e614b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e614e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116e6154 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6157 je 0x116e6177 */
  if (C.zf) goto L_116e6177;
  /* 116e6159 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e615c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e6161 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e6163 je 0x116e6177 */
  if (C.zf) goto L_116e6177;
  /* 116e6165 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e6168 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116e616e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6171 jne 0x116e60cd */
  if (!C.zf) goto L_116e60cd;
L_116e6177:;
  /* 116e6177 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e617a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116e6180 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e6182 jne 0x116e618f */
  if (!C.zf) goto L_116e618f;
  /* 116e6184 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6187 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e618a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e618d jmp 0x116e619c */
  goto L_116e619c;
L_116e618f:;
  /* 116e618f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6193 je 0x116e619c */
  if (C.zf) goto L_116e619c;
  /* 116e6195 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e6198 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_116e619c:;
  /* 116e619c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_116e61a3:;
  /* 116e61a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e61a6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116e61a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e61ab je 0x116e61ce */
  if (C.zf) goto L_116e61ce;
L_116e61ad:;
  /* 116e61ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e61b0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116e61b3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e61b6 je 0x116e61c3 */
  if (C.zf) goto L_116e61c3;
  /* 116e61b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e61bb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116e61be cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e61c1 jne 0x116e61ce */
  if (!C.zf) goto L_116e61ce;
L_116e61c3:;
  /* 116e61c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e61c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e61c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116e61cc jmp 0x116e61ad */
  goto L_116e61ad;
L_116e61ce:;
  /* 116e61ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e61d1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116e61d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e61d6 jne 0x116e61dd */
  if (!C.zf) goto L_116e61dd;
  /* 116e61d8 jmp 0x116e63bb */
  goto L_116e63bb;
L_116e61dd:;
  /* 116e61dd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e61e1 je 0x116e61f4 */
  if (C.zf) goto L_116e61f4;
  /* 116e61e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e61e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e61e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 116e61eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e61ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e61f1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_116e61f4:;
  /* 116e61f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e61f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116e61f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e61fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e61ff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_116e6201:;
  /* 116e6201 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 116e6208 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_116e620f:;
  /* 116e620f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6212 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116e6215 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6218 jne 0x116e622e */
  if (!C.zf) goto L_116e622e;
  /* 116e621a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e621d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6220 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116e6223 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e6226 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6229 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 116e622c jmp 0x116e620f */
  goto L_116e620f;
L_116e622e:;
  /* 116e622e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6231 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116e6234 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6237 jne 0x116e628a */
  if (!C.zf) goto L_116e628a;
  /* 116e6239 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e623c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e623e mov ecx, 2 */
  ECX = (0x2u);
  /* 116e6243 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116e6245 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e6247 jne 0x116e6282 */
  if (!C.zf) goto L_116e6282;
  /* 116e6249 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e624d je 0x116e626f */
  if (C.zf) goto L_116e626f;
  /* 116e624f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6252 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 116e6256 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6259 jne 0x116e6266 */
  if (!C.zf) goto L_116e6266;
  /* 116e625b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e625e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6261 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116e6264 jmp 0x116e626d */
  goto L_116e626d;
L_116e6266:;
  /* 116e6266 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_116e626d:;
  /* 116e626d jmp 0x116e6276 */
  goto L_116e6276;
L_116e626f:;
  /* 116e626f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_116e6276:;
  /* 116e6276 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e6278 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e627c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 116e627f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_116e6282:;
  /* 116e6282 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e6285 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116e6287 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_116e628a:;
  /* 116e628a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e628d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e6290 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e6293 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 116e6296 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e6298 je 0x116e62be */
  if (C.zf) goto L_116e62be;
  /* 116e629a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e629e je 0x116e62af */
  if (C.zf) goto L_116e62af;
  /* 116e62a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e62a3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 116e62a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e62a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e62ac mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_116e62af:;
  /* 116e62af mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e62b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116e62b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e62b7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e62ba mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116e62bc jmp 0x116e628a */
  goto L_116e628a;
L_116e62be:;
  /* 116e62be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e62c1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116e62c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e62c6 je 0x116e62e4 */
  if (C.zf) goto L_116e62e4;
  /* 116e62c8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e62cc jne 0x116e62e9 */
  if (!C.zf) goto L_116e62e9;
  /* 116e62ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e62d1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116e62d4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e62d7 je 0x116e62e4 */
  if (C.zf) goto L_116e62e4;
  /* 116e62d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e62dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116e62df cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e62e2 jne 0x116e62e9 */
  if (!C.zf) goto L_116e62e9;
L_116e62e4:;
  /* 116e62e4 jmp 0x116e6394 */
  goto L_116e6394;
L_116e62e9:;
  /* 116e62e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e62ed je 0x116e6386 */
  if (C.zf) goto L_116e6386;
  /* 116e62f3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e62f7 je 0x116e634d */
  if (C.zf) goto L_116e634d;
  /* 116e62f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e62fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e62fe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116e6300 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e6302 mov cl, byte ptr [eax + 0x11710ea1] */
  CL = (r8((uint32_t)(EAX + 0x11710ea1)));
  /* 116e6308 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 116e630b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e630d je 0x116e6338 */
  if (C.zf) goto L_116e6338;
  /* 116e630f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e6312 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6315 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116e6317 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 116e6319 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e631c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e631f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 116e6322 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6325 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6328 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e632b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e632e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116e6330 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6333 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e6336 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_116e6338:;
  /* 116e6338 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e633b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e633e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116e6340 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 116e6342 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e6345 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6348 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 116e634b jmp 0x116e6379 */
  goto L_116e6379;
L_116e634d:;
  /* 116e634d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6350 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e6352 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116e6354 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e6356 mov cl, byte ptr [eax + 0x11710ea1] */
  CL = (r8((uint32_t)(EAX + 0x11710ea1)));
  /* 116e635c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 116e635f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e6361 je 0x116e6379 */
  if (C.zf) goto L_116e6379;
  /* 116e6363 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6366 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6369 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116e636c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e636f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116e6371 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6374 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e6377 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_116e6379:;
  /* 116e6379 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e637c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116e637e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6381 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e6384 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_116e6386:;
  /* 116e6386 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6389 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e638c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e638f jmp 0x116e6201 */
  goto L_116e6201;
L_116e6394:;
  /* 116e6394 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6398 je 0x116e63a9 */
  if (C.zf) goto L_116e63a9;
  /* 116e639a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e639d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 116e63a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e63a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e63a6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_116e63a9:;
  /* 116e63a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e63ac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116e63ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e63b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 116e63b4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116e63b6 jmp 0x116e61a3 */
  goto L_116e61a3;
L_116e63bb:;
  /* 116e63bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e63bf je 0x116e63d3 */
  if (C.zf) goto L_116e63d3;
  /* 116e63c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e63c4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116e63ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e63cd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e63d0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_116e63d3:;
  /* 116e63d3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e63d6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116e63d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e63db mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e63de mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116e63e0 mov esp, ebp */
  ESP = (EBP);
  /* 116e63e2 pop ebp */
  EBP = (pop32());
  /* 116e63e3 ret  */
  ESPCHK(0x116e5fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_100063f0 @ 0x116e63f0 (537 bytes, 173 insns) */
void f_116e63f0(void) {
  FTRACE(0x116e63f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e63f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e63f1 mov ebp, esp */
  EBP = (ESP);
  /* 116e63f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e63f6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 116e63fd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 116e6404 cmp dword ptr [0x1170f78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e640b jne 0x116e644a */
  if (!C.zf) goto L_116e644a;
  /* 116e640d call dword ptr [0x117123b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123b4))), 0x116e6413u);
  /* 116e6413 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116e6416 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e641a je 0x116e6428 */
  if (C.zf) goto L_116e6428;
  /* 116e641c mov dword ptr [0x1170f78c], 1 */
  w32((uint32_t)(0x1170f78c), (0x1u));
  /* 116e6426 jmp 0x116e644a */
  goto L_116e644a;
L_116e6428:;
  /* 116e6428 call dword ptr [0x117123b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123b0))), 0x116e642eu);
  /* 116e642e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116e6431 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6435 je 0x116e6443 */
  if (C.zf) goto L_116e6443;
  /* 116e6437 mov dword ptr [0x1170f78c], 2 */
  w32((uint32_t)(0x1170f78c), (0x2u));
  /* 116e6441 jmp 0x116e644a */
  goto L_116e644a;
L_116e6443:;
  /* 116e6443 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e6445 jmp 0x116e6605 */
  goto L_116e6605;
L_116e644a:;
  /* 116e644a cmp dword ptr [0x1170f78c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170f78c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6451 jne 0x116e654e */
  if (!C.zf) goto L_116e654e;
  /* 116e6457 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e645b jne 0x116e6473 */
  if (!C.zf) goto L_116e6473;
  /* 116e645d call dword ptr [0x117123b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123b4))), 0x116e6463u);
  /* 116e6463 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116e6466 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e646a jne 0x116e6473 */
  if (!C.zf) goto L_116e6473;
  /* 116e646c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e646e jmp 0x116e6605 */
  goto L_116e6605;
L_116e6473:;
  /* 116e6473 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e6476 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116e6479:;
  /* 116e6479 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e647c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e647e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 116e6481 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e6483 je 0x116e64a5 */
  if (C.zf) goto L_116e64a5;
  /* 116e6485 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e6488 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e648b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116e648e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e6491 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e6493 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 116e6496 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e6498 jne 0x116e64a3 */
  if (!C.zf) goto L_116e64a3;
  /* 116e649a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e649d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e64a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116e64a3:;
  /* 116e64a3 jmp 0x116e6479 */
  goto L_116e6479;
L_116e64a5:;
  /* 116e64a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e64a8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e64ab sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 116e64ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e64b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116e64b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e64b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e64b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e64b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e64bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e64be push edx */
  push32((uint32_t)(EDX));
  /* 116e64bf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e64c2 push eax */
  push32((uint32_t)(EAX));
  /* 116e64c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e64c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e64c7 call dword ptr [0x117123ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123ac))), 0x116e64cdu);
  /* 116e64cd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116e64d0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e64d4 je 0x116e64f4 */
  if (C.zf) goto L_116e64f4;
  /* 116e64d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 116e64d8 push 0x1170abb8 */
  push32((uint32_t)(0x1170abb8u));
  /* 116e64dd push 2 */
  push32((uint32_t)(0x2u));
  /* 116e64df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e64e2 push ecx */
  push32((uint32_t)(ECX));
  /* 116e64e3 call 0x116e3e20 */
  push32(0x116e64e8u); f_116e3e20();
  /* 116e64e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e64eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116e64ee cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e64f2 jne 0x116e6505 */
  if (!C.zf) goto L_116e6505;
L_116e64f4:;
  /* 116e64f4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e64f7 push edx */
  push32((uint32_t)(EDX));
  /* 116e64f8 call dword ptr [0x117123a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123a8))), 0x116e64feu);
  /* 116e64fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e6500 jmp 0x116e6605 */
  goto L_116e6605;
L_116e6505:;
  /* 116e6505 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e6507 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e6509 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e650c push eax */
  push32((uint32_t)(EAX));
  /* 116e650d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e6510 push ecx */
  push32((uint32_t)(ECX));
  /* 116e6511 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6514 push edx */
  push32((uint32_t)(EDX));
  /* 116e6515 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e6518 push eax */
  push32((uint32_t)(EAX));
  /* 116e6519 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e651b push 0 */
  push32((uint32_t)(0x0u));
  /* 116e651d call dword ptr [0x117123ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123ac))), 0x116e6523u);
  /* 116e6523 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e6525 jne 0x116e653c */
  if (!C.zf) goto L_116e653c;
  /* 116e6527 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e6529 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e652c push ecx */
  push32((uint32_t)(ECX));
  /* 116e652d call 0x116e48b0 */
  push32(0x116e6532u); f_116e48b0();
  /* 116e6532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6535 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_116e653c:;
  /* 116e653c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e653f push edx */
  push32((uint32_t)(EDX));
  /* 116e6540 call dword ptr [0x117123a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123a8))), 0x116e6546u);
  /* 116e6546 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e6549 jmp 0x116e6605 */
  goto L_116e6605;
L_116e654e:;
  /* 116e654e cmp dword ptr [0x1170f78c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1170f78c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6555 jne 0x116e6603 */
  if (!C.zf) goto L_116e6603;
  /* 116e655b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e655f jne 0x116e6577 */
  if (!C.zf) goto L_116e6577;
  /* 116e6561 call dword ptr [0x117123b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123b0))), 0x116e6567u);
  /* 116e6567 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116e656a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e656e jne 0x116e6577 */
  if (!C.zf) goto L_116e6577;
  /* 116e6570 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e6572 jmp 0x116e6605 */
  goto L_116e6605;
L_116e6577:;
  /* 116e6577 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e657a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_116e657d:;
  /* 116e657d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e6580 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116e6583 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e6585 je 0x116e65a5 */
  if (C.zf) goto L_116e65a5;
  /* 116e6587 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e658a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e658d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116e6590 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e6593 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116e6596 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e6598 jne 0x116e65a3 */
  if (!C.zf) goto L_116e65a3;
  /* 116e659a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e659d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e65a0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_116e65a3:;
  /* 116e65a3 jmp 0x116e657d */
  goto L_116e657d;
L_116e65a5:;
  /* 116e65a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e65a8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e65ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e65ae mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116e65b1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 116e65b6 push 0x1170abb8 */
  push32((uint32_t)(0x1170abb8u));
  /* 116e65bb push 2 */
  push32((uint32_t)(0x2u));
  /* 116e65bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e65c0 push edx */
  push32((uint32_t)(EDX));
  /* 116e65c1 call 0x116e3e20 */
  push32(0x116e65c6u); f_116e3e20();
  /* 116e65c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e65c9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116e65cc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e65d0 jne 0x116e65e0 */
  if (!C.zf) goto L_116e65e0;
  /* 116e65d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e65d5 push eax */
  push32((uint32_t)(EAX));
  /* 116e65d6 call dword ptr [0x117123a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123a4))), 0x116e65dcu);
  /* 116e65dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e65de jmp 0x116e6605 */
  goto L_116e6605;
L_116e65e0:;
  /* 116e65e0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e65e3 push ecx */
  push32((uint32_t)(ECX));
  /* 116e65e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e65e7 push edx */
  push32((uint32_t)(EDX));
  /* 116e65e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e65eb push eax */
  push32((uint32_t)(EAX));
  /* 116e65ec call 0x116ea700 */
  push32(0x116e65f1u); f_116ea700();
  /* 116e65f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e65f4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e65f7 push ecx */
  push32((uint32_t)(ECX));
  /* 116e65f8 call dword ptr [0x117123a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123a4))), 0x116e65feu);
  /* 116e65fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e6601 jmp 0x116e6605 */
  goto L_116e6605;
L_116e6603:;
  /* 116e6603 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116e6605:;
  /* 116e6605 mov esp, ebp */
  ESP = (EBP);
  /* 116e6607 pop ebp */
  EBP = (pop32());
  /* 116e6608 ret  */
  ESPCHK(0x116e63f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006610 @ 0x116e6610 (77 bytes, 25 insns) */
void f_116e6610(void) {
  FTRACE(0x116e6610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e6610 push ebp */
  push32((uint32_t)(EBP));
  /* 116e6611 mov ebp, esp */
  EBP = (ESP);
  /* 116e6613 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e6615 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 116e661a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e661c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6620 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 116e6623 push eax */
  push32((uint32_t)(EAX));
  /* 116e6624 call dword ptr [0x11712398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712398))), 0x116e662au);
  /* 116e662a mov dword ptr [0x11710fcc], eax */
  w32((uint32_t)(0x11710fcc), (EAX));
  /* 116e662f cmp dword ptr [0x11710fcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11710fcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6636 jne 0x116e663c */
  if (!C.zf) goto L_116e663c;
  /* 116e6638 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e663a jmp 0x116e665b */
  goto L_116e665b;
L_116e663c:;
  /* 116e663c call 0x116e80c0 */
  push32(0x116e6641u); f_116e80c0();
  /* 116e6641 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e6643 jne 0x116e6656 */
  if (!C.zf) goto L_116e6656;
  /* 116e6645 mov ecx, dword ptr [0x11710fcc] */
  ECX = (r32((uint32_t)(0x11710fcc)));
  /* 116e664b push ecx */
  push32((uint32_t)(ECX));
  /* 116e664c call dword ptr [0x117123b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123b8))), 0x116e6652u);
  /* 116e6652 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e6654 jmp 0x116e665b */
  goto L_116e665b;
L_116e6656:;
  /* 116e6656 mov eax, 1 */
  EAX = (0x1u);
L_116e665b:;
  /* 116e665b pop ebp */
  EBP = (pop32());
  /* 116e665c ret  */
  ESPCHK(0x116e6610u, _esp0);
  ESP += 4; return;
}

/* FUN_10006660 @ 0x116e6660 (156 bytes, 48 insns) */
void f_116e6660(void) {
  FTRACE(0x116e6660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e6660 push ebp */
  push32((uint32_t)(EBP));
  /* 116e6661 mov ebp, esp */
  EBP = (ESP);
  /* 116e6663 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e6666 mov eax, dword ptr [0x11710fc8] */
  EAX = (r32((uint32_t)(0x11710fc8)));
  /* 116e666b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116e666e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116e6675 jmp 0x116e6680 */
  goto L_116e6680;
L_116e6677:;
  /* 116e6677 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e667a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e667d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116e6680:;
  /* 116e6680 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6683 cmp edx, dword ptr [0x11710fc4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11710fc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6689 jge 0x116e66d6 */
  if ((C.sf==C.of)) goto L_116e66d6;
  /* 116e668b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 116e6690 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 116e6695 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e6698 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116e669b push ecx */
  push32((uint32_t)(ECX));
  /* 116e669c call dword ptr [0x11712328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712328))), 0x116e66a2u);
  /* 116e66a2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 116e66a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e66a9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e66ac mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 116e66af push eax */
  push32((uint32_t)(EAX));
  /* 116e66b0 call dword ptr [0x11712328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712328))), 0x116e66b6u);
  /* 116e66b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e66b9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 116e66bc push edx */
  push32((uint32_t)(EDX));
  /* 116e66bd push 0 */
  push32((uint32_t)(0x0u));
  /* 116e66bf mov eax, dword ptr [0x11710fcc] */
  EAX = (r32((uint32_t)(0x11710fcc)));
  /* 116e66c4 push eax */
  push32((uint32_t)(EAX));
  /* 116e66c5 call dword ptr [0x1171239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171239c))), 0x116e66cbu);
  /* 116e66cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e66ce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e66d1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116e66d4 jmp 0x116e6677 */
  goto L_116e6677;
L_116e66d6:;
  /* 116e66d6 mov edx, dword ptr [0x11710fc8] */
  EDX = (r32((uint32_t)(0x11710fc8)));
  /* 116e66dc push edx */
  push32((uint32_t)(EDX));
  /* 116e66dd push 0 */
  push32((uint32_t)(0x0u));
  /* 116e66df mov eax, dword ptr [0x11710fcc] */
  EAX = (r32((uint32_t)(0x11710fcc)));
  /* 116e66e4 push eax */
  push32((uint32_t)(EAX));
  /* 116e66e5 call dword ptr [0x1171239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171239c))), 0x116e66ebu);
  /* 116e66eb mov ecx, dword ptr [0x11710fcc] */
  ECX = (r32((uint32_t)(0x11710fcc)));
  /* 116e66f1 push ecx */
  push32((uint32_t)(ECX));
  /* 116e66f2 call dword ptr [0x117123b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117123b8))), 0x116e66f8u);
  /* 116e66f8 mov esp, ebp */
  ESP = (EBP);
  /* 116e66fa pop ebp */
  EBP = (pop32());
  /* 116e66fb ret  */
  ESPCHK(0x116e6660u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x116e6700 (73 bytes, 19 insns) */
void f_116e6700(void) {
  FTRACE(0x116e6700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e6700 push ebp */
  push32((uint32_t)(EBP));
  /* 116e6701 mov ebp, esp */
  EBP = (ESP);
  /* 116e6703 cmp dword ptr [0x1170f620], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170f620))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e670a je 0x116e671e */
  if (C.zf) goto L_116e671e;
  /* 116e670c cmp dword ptr [0x1170f620], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f620))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6713 jne 0x116e6747 */
  if (!C.zf) goto L_116e6747;
  /* 116e6715 cmp dword ptr [0x1170f624], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170f624))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e671c jne 0x116e6747 */
  if (!C.zf) goto L_116e6747;
L_116e671e:;
  /* 116e671e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 116e6723 call 0x116e6750 */
  push32(0x116e6728u); f_116e6750();
  /* 116e6728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e672b cmp dword ptr [0x1170f790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6732 je 0x116e673a */
  if (C.zf) goto L_116e673a;
  /* 116e6734 call dword ptr [0x1170f790] */
  call_ind((uint32_t)(r32((uint32_t)(0x1170f790))), 0x116e673au);
L_116e673a:;
  /* 116e673a push 0xff */
  push32((uint32_t)(0xffu));
  /* 116e673f call 0x116e6750 */
  push32(0x116e6744u); f_116e6750();
  /* 116e6744 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e6747:;
  /* 116e6747 pop ebp */
  EBP = (pop32());
  /* 116e6748 ret  */
  ESPCHK(0x116e6700u, _esp0);
  ESP += 4; return;
}

/* FUN_10006750 @ 0x116e6750 (447 bytes, 131 insns) */
void f_116e6750(void) {
  FTRACE(0x116e6750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e6750 push ebp */
  push32((uint32_t)(EBP));
  /* 116e6751 mov ebp, esp */
  EBP = (ESP);
  /* 116e6753 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e6759 push ebx */
  push32((uint32_t)(EBX));
  /* 116e675a push esi */
  push32((uint32_t)(ESI));
  /* 116e675b push edi */
  push32((uint32_t)(EDI));
  /* 116e675c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116e6763 jmp 0x116e676e */
  goto L_116e676e;
L_116e6765:;
  /* 116e6765 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e6768 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e676b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116e676e:;
  /* 116e676e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6772 jae 0x116e6787 */
  if (!C.cf) goto L_116e6787;
  /* 116e6774 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e6777 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e677a cmp edx, dword ptr [ecx*8 + 0x1170dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1170dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6781 jne 0x116e6785 */
  if (!C.zf) goto L_116e6785;
  /* 116e6783 jmp 0x116e6787 */
  goto L_116e6787;
L_116e6785:;
  /* 116e6785 jmp 0x116e6765 */
  goto L_116e6765;
L_116e6787:;
  /* 116e6787 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e678a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e678d cmp ecx, dword ptr [eax*8 + 0x1170dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1170dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6794 jne 0x116e6908 */
  if (!C.zf) goto L_116e6908;
  /* 116e679a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e67a1 je 0x116e67c4 */
  if (C.zf) goto L_116e67c4;
  /* 116e67a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e67a6 mov eax, dword ptr [edx*8 + 0x1170dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1170dab4)));
  /* 116e67ad push eax */
  push32((uint32_t)(EAX));
  /* 116e67ae push 0 */
  push32((uint32_t)(0x0u));
  /* 116e67b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e67b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e67b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e67b6 call 0x116e2ee0 */
  push32(0x116e67bbu); f_116e2ee0();
  /* 116e67bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e67be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e67c1 jne 0x116e67c4 */
  if (!C.zf) goto L_116e67c4;
  /* 116e67c3 int3  */
  x86_unimpl("int3 @ 0x116e67c3");
L_116e67c4:;
  /* 116e67c4 cmp dword ptr [0x1170f620], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170f620))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e67cb je 0x116e67df */
  if (C.zf) goto L_116e67df;
  /* 116e67cd cmp dword ptr [0x1170f620], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f620))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e67d4 jne 0x116e6818 */
  if (!C.zf) goto L_116e6818;
  /* 116e67d6 cmp dword ptr [0x1170f624], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1170f624))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e67dd jne 0x116e6818 */
  if (!C.zf) goto L_116e6818;
L_116e67df:;
  /* 116e67df push 0 */
  push32((uint32_t)(0x0u));
  /* 116e67e1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 116e67e4 push ecx */
  push32((uint32_t)(ECX));
  /* 116e67e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e67e8 mov eax, dword ptr [edx*8 + 0x1170dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1170dab4)));
  /* 116e67ef push eax */
  push32((uint32_t)(EAX));
  /* 116e67f0 call 0x116e6c50 */
  push32(0x116e67f5u); f_116e6c50();
  /* 116e67f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e67f8 push eax */
  push32((uint32_t)(EAX));
  /* 116e67f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e67fc mov edx, dword ptr [ecx*8 + 0x1170dab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1170dab4)));
  /* 116e6803 push edx */
  push32((uint32_t)(EDX));
  /* 116e6804 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 116e6806 call dword ptr [0x1171233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171233c))), 0x116e680cu);
  /* 116e680c push eax */
  push32((uint32_t)(EAX));
  /* 116e680d call dword ptr [0x11712340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712340))), 0x116e6813u);
  /* 116e6813 jmp 0x116e6908 */
  goto L_116e6908;
L_116e6818:;
  /* 116e6818 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e681f je 0x116e6908 */
  if (C.zf) goto L_116e6908;
  /* 116e6825 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 116e682a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 116e6830 push eax */
  push32((uint32_t)(EAX));
  /* 116e6831 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e6833 call dword ptr [0x11712358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712358))), 0x116e6839u);
  /* 116e6839 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e683b jne 0x116e6851 */
  if (!C.zf) goto L_116e6851;
  /* 116e683d push 0x1170a420 */
  push32((uint32_t)(0x1170a420u));
  /* 116e6842 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 116e6848 push ecx */
  push32((uint32_t)(ECX));
  /* 116e6849 call 0x116e6dd0 */
  push32(0x116e684eu); f_116e6dd0();
  /* 116e684e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e6851:;
  /* 116e6851 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 116e6857 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116e685a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e685d push eax */
  push32((uint32_t)(EAX));
  /* 116e685e call 0x116e6c50 */
  push32(0x116e6863u); f_116e6c50();
  /* 116e6863 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6866 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6869 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e686c jbe 0x116e689a */
  if ((C.cf||C.zf)) goto L_116e689a;
  /* 116e686e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 116e6874 push ecx */
  push32((uint32_t)(ECX));
  /* 116e6875 call 0x116e6c50 */
  push32(0x116e687au); f_116e6c50();
  /* 116e687a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e687d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e6880 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 116e6884 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116e6887 push 3 */
  push32((uint32_t)(0x3u));
  /* 116e6889 push 0x1170a41c */
  push32((uint32_t)(0x1170a41cu));
  /* 116e688e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e6891 push ecx */
  push32((uint32_t)(ECX));
  /* 116e6892 call 0x116e7640 */
  push32(0x116e6897u); f_116e7640();
  /* 116e6897 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e689a:;
  /* 116e689a push 0x1170ae74 */
  push32((uint32_t)(0x1170ae74u));
  /* 116e689f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 116e68a5 push edx */
  push32((uint32_t)(EDX));
  /* 116e68a6 call 0x116e6dd0 */
  push32(0x116e68abu); f_116e6dd0();
  /* 116e68ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e68ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e68b1 push eax */
  push32((uint32_t)(EAX));
  /* 116e68b2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 116e68b8 push ecx */
  push32((uint32_t)(ECX));
  /* 116e68b9 call 0x116e6de0 */
  push32(0x116e68beu); f_116e6de0();
  /* 116e68be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e68c1 push 0x1170a394 */
  push32((uint32_t)(0x1170a394u));
  /* 116e68c6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 116e68cc push edx */
  push32((uint32_t)(EDX));
  /* 116e68cd call 0x116e6de0 */
  push32(0x116e68d2u); f_116e6de0();
  /* 116e68d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e68d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e68d8 mov ecx, dword ptr [eax*8 + 0x1170dab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1170dab4)));
  /* 116e68df push ecx */
  push32((uint32_t)(ECX));
  /* 116e68e0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 116e68e6 push edx */
  push32((uint32_t)(EDX));
  /* 116e68e7 call 0x116e6de0 */
  push32(0x116e68ecu); f_116e6de0();
  /* 116e68ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e68ef push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 116e68f4 push 0x1170ae4c */
  push32((uint32_t)(0x1170ae4cu));
  /* 116e68f9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 116e68ff push eax */
  push32((uint32_t)(EAX));
  /* 116e6900 call 0x116e7580 */
  push32(0x116e6905u); f_116e7580();
  /* 116e6905 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e6908:;
  /* 116e6908 pop edi */
  EDI = (pop32());
  /* 116e6909 pop esi */
  ESI = (pop32());
  /* 116e690a pop ebx */
  EBX = (pop32());
  /* 116e690b mov esp, ebp */
  ESP = (EBP);
  /* 116e690d pop ebp */
  EBP = (pop32());
  /* 116e690e ret  */
  ESPCHK(0x116e6750u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x116e6910 (80 bytes, 27 insns) */
void f_116e6910(void) {
  FTRACE(0x116e6910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e6910 push ebp */
  push32((uint32_t)(EBP));
  /* 116e6911 mov ebp, esp */
  EBP = (ESP);
  /* 116e6913 push ecx */
  push32((uint32_t)(ECX));
  /* 116e6914 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116e691b jmp 0x116e6926 */
  goto L_116e6926;
L_116e691d:;
  /* 116e691d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6920 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6923 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116e6926:;
  /* 116e6926 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e692a jae 0x116e693f */
  if (!C.cf) goto L_116e693f;
  /* 116e692c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e692f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e6932 cmp edx, dword ptr [ecx*8 + 0x1170dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1170dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6939 jne 0x116e693d */
  if (!C.zf) goto L_116e693d;
  /* 116e693b jmp 0x116e693f */
  goto L_116e693f;
L_116e693d:;
  /* 116e693d jmp 0x116e691d */
  goto L_116e691d;
L_116e693f:;
  /* 116e693f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6942 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e6945 cmp ecx, dword ptr [eax*8 + 0x1170dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1170dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e694c jne 0x116e695a */
  if (!C.zf) goto L_116e695a;
  /* 116e694e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6951 mov eax, dword ptr [edx*8 + 0x1170dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1170dab4)));
  /* 116e6958 jmp 0x116e695c */
  goto L_116e695c;
L_116e695a:;
  /* 116e695a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116e695c:;
  /* 116e695c mov esp, ebp */
  ESP = (EBP);
  /* 116e695e pop ebp */
  EBP = (pop32());
  /* 116e695f ret  */
  ESPCHK(0x116e6910u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x116e6960 (66 bytes, 28 insns) */
void f_116e6960(void) {
  FTRACE(0x116e6960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e6960 push ebp */
  push32((uint32_t)(EBP));
  /* 116e6961 mov ebp, esp */
  EBP = (ESP);
  /* 116e6963 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6967 jne 0x116e6987 */
  if (!C.zf) goto L_116e6987;
  /* 116e6969 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e696d jge 0x116e6987 */
  if ((C.sf==C.of)) goto L_116e6987;
  /* 116e696f push 1 */
  push32((uint32_t)(0x1u));
  /* 116e6971 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e6974 push eax */
  push32((uint32_t)(EAX));
  /* 116e6975 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e6978 push ecx */
  push32((uint32_t)(ECX));
  /* 116e6979 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e697c push edx */
  push32((uint32_t)(EDX));
  /* 116e697d call 0x116e69b0 */
  push32(0x116e6982u); f_116e69b0();
  /* 116e6982 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6985 jmp 0x116e699d */
  goto L_116e699d;
L_116e6987:;
  /* 116e6987 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e6989 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e698c push eax */
  push32((uint32_t)(EAX));
  /* 116e698d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e6990 push ecx */
  push32((uint32_t)(ECX));
  /* 116e6991 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e6994 push edx */
  push32((uint32_t)(EDX));
  /* 116e6995 call 0x116e69b0 */
  push32(0x116e699au); f_116e69b0();
  /* 116e699a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e699d:;
  /* 116e699d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e69a0 pop ebp */
  EBP = (pop32());
  /* 116e69a1 ret  */
  ESPCHK(0x116e6960u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x116e69b0 (194 bytes, 71 insns) */
void f_116e69b0(void) {
  FTRACE(0x116e69b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e69b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e69b1 mov ebp, esp */
  EBP = (ESP);
  /* 116e69b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e69b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e69b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e69bc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e69c0 je 0x116e69d9 */
  if (C.zf) goto L_116e69d9;
  /* 116e69c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e69c5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 116e69c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e69cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e69ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116e69d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e69d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116e69d6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_116e69d9:;
  /* 116e69d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e69dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_116e69df:;
  /* 116e69df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e69e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e69e4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116e69e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116e69ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e69ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e69ef div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116e69f2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116e69f5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e69f9 jbe 0x116e6a11 */
  if ((C.cf||C.zf)) goto L_116e6a11;
  /* 116e69fb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e69fe add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6a01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6a04 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116e6a06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6a09 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6a0c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116e6a0f jmp 0x116e6a25 */
  goto L_116e6a25;
L_116e6a11:;
  /* 116e6a11 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e6a14 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6a17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6a1a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116e6a1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6a1f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6a22 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116e6a25:;
  /* 116e6a25 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6a29 ja 0x116e69df */
  if ((!C.cf&&!C.zf)) goto L_116e69df;
  /* 116e6a2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6a2e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 116e6a31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6a34 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e6a37 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116e6a3a:;
  /* 116e6a3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6a3d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116e6a3f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 116e6a42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6a45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e6a48 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116e6a4a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116e6a4c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e6a4f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 116e6a52 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 116e6a54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6a57 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e6a5a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116e6a5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e6a60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6a63 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116e6a66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e6a69 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6a6c jb 0x116e6a3a */
  if (C.cf) goto L_116e6a3a;
  /* 116e6a6e mov esp, ebp */
  ESP = (EBP);
  /* 116e6a70 pop ebp */
  EBP = (pop32());
  /* 116e6a71 ret  */
  ESPCHK(0x116e69b0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x116e6a80 (63 bytes, 24 insns) */
void f_116e6a80(void) {
  FTRACE(0x116e6a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e6a80 push ebp */
  push32((uint32_t)(EBP));
  /* 116e6a81 mov ebp, esp */
  EBP = (ESP);
  /* 116e6a83 push ecx */
  push32((uint32_t)(ECX));
  /* 116e6a84 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6a88 jne 0x116e6a99 */
  if (!C.zf) goto L_116e6a99;
  /* 116e6a8a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6a8e jge 0x116e6a99 */
  if ((C.sf==C.of)) goto L_116e6a99;
  /* 116e6a90 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116e6a97 jmp 0x116e6aa0 */
  goto L_116e6aa0;
L_116e6a99:;
  /* 116e6a99 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116e6aa0:;
  /* 116e6aa0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6aa3 push eax */
  push32((uint32_t)(EAX));
  /* 116e6aa4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e6aa7 push ecx */
  push32((uint32_t)(ECX));
  /* 116e6aa8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e6aab push edx */
  push32((uint32_t)(EDX));
  /* 116e6aac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e6aaf push eax */
  push32((uint32_t)(EAX));
  /* 116e6ab0 call 0x116e69b0 */
  push32(0x116e6ab5u); f_116e69b0();
  /* 116e6ab5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6ab8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e6abb mov esp, ebp */
  ESP = (EBP);
  /* 116e6abd pop ebp */
  EBP = (pop32());
  /* 116e6abe ret  */
  ESPCHK(0x116e6a80u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x116e6ac0 (30 bytes, 14 insns) */
void f_116e6ac0(void) {
  FTRACE(0x116e6ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e6ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e6ac1 mov ebp, esp */
  EBP = (ESP);
  /* 116e6ac3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e6ac5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e6ac8 push eax */
  push32((uint32_t)(EAX));
  /* 116e6ac9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e6acc push ecx */
  push32((uint32_t)(ECX));
  /* 116e6acd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e6ad0 push edx */
  push32((uint32_t)(EDX));
  /* 116e6ad1 call 0x116e69b0 */
  push32(0x116e6ad6u); f_116e69b0();
  /* 116e6ad6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6ad9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e6adc pop ebp */
  EBP = (pop32());
  /* 116e6add ret  */
  ESPCHK(0x116e6ac0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x116e6ae0 (72 bytes, 28 insns) */
void f_116e6ae0(void) {
  FTRACE(0x116e6ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e6ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e6ae1 mov ebp, esp */
  EBP = (ESP);
  /* 116e6ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 116e6ae4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6ae8 jne 0x116e6b01 */
  if (!C.zf) goto L_116e6b01;
  /* 116e6aea cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6aee jg 0x116e6b01 */
  if ((!C.zf&&C.sf==C.of)) goto L_116e6b01;
  /* 116e6af0 jl 0x116e6af8 */
  if ((C.sf!=C.of)) goto L_116e6af8;
  /* 116e6af2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6af6 jae 0x116e6b01 */
  if (!C.cf) goto L_116e6b01;
L_116e6af8:;
  /* 116e6af8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116e6aff jmp 0x116e6b08 */
  goto L_116e6b08;
L_116e6b01:;
  /* 116e6b01 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116e6b08:;
  /* 116e6b08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6b0b push eax */
  push32((uint32_t)(EAX));
  /* 116e6b0c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e6b0f push ecx */
  push32((uint32_t)(ECX));
  /* 116e6b10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e6b13 push edx */
  push32((uint32_t)(EDX));
  /* 116e6b14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e6b17 push eax */
  push32((uint32_t)(EAX));
  /* 116e6b18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e6b1b push ecx */
  push32((uint32_t)(ECX));
  /* 116e6b1c call 0x116e6b30 */
  push32(0x116e6b21u); f_116e6b30();
  /* 116e6b21 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e6b24 mov esp, ebp */
  ESP = (EBP);
  /* 116e6b26 pop ebp */
  EBP = (pop32());
  /* 116e6b27 ret  */
  ESPCHK(0x116e6ae0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x116e6b30 (242 bytes, 91 insns) */
void f_116e6b30(void) {
  FTRACE(0x116e6b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e6b30 push ebp */
  push32((uint32_t)(EBP));
  /* 116e6b31 mov ebp, esp */
  EBP = (ESP);
  /* 116e6b33 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e6b36 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e6b39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e6b3c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6b40 je 0x116e6b64 */
  if (C.zf) goto L_116e6b64;
  /* 116e6b42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6b45 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 116e6b48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6b4b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6b4e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116e6b51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e6b54 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116e6b56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e6b59 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6b5c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116e6b5e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116e6b61 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_116e6b64:;
  /* 116e6b64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6b67 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_116e6b6a:;
  /* 116e6b6a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e6b6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e6b6f push ecx */
  push32((uint32_t)(ECX));
  /* 116e6b70 push eax */
  push32((uint32_t)(EAX));
  /* 116e6b71 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e6b74 push edx */
  push32((uint32_t)(EDX));
  /* 116e6b75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e6b78 push eax */
  push32((uint32_t)(EAX));
  /* 116e6b79 call 0x116eaab0 */
  push32(0x116e6b7eu); f_116eaab0();
  /* 116e6b7e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116e6b81 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e6b84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e6b86 push edx */
  push32((uint32_t)(EDX));
  /* 116e6b87 push ecx */
  push32((uint32_t)(ECX));
  /* 116e6b88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e6b8b push eax */
  push32((uint32_t)(EAX));
  /* 116e6b8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e6b8f push ecx */
  push32((uint32_t)(ECX));
  /* 116e6b90 call 0x116eaa40 */
  push32(0x116e6b95u); f_116eaa40();
  /* 116e6b95 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116e6b98 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 116e6b9b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6b9f jbe 0x116e6bb7 */
  if ((C.cf||C.zf)) goto L_116e6bb7;
  /* 116e6ba1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e6ba4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6ba7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6baa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116e6bac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6baf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6bb2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116e6bb5 jmp 0x116e6bcb */
  goto L_116e6bcb;
L_116e6bb7:;
  /* 116e6bb7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e6bba add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6bbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6bc0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116e6bc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6bc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6bc8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116e6bcb:;
  /* 116e6bcb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6bcf ja 0x116e6b6a */
  if ((!C.cf&&!C.zf)) goto L_116e6b6a;
  /* 116e6bd1 jb 0x116e6bd9 */
  if (C.cf) goto L_116e6bd9;
  /* 116e6bd3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6bd7 ja 0x116e6b6a */
  if ((!C.cf&&!C.zf)) goto L_116e6b6a;
L_116e6bd9:;
  /* 116e6bd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6bdc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 116e6bdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6be2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e6be5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116e6be8:;
  /* 116e6be8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6beb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116e6bed mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 116e6bf0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6bf3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e6bf6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116e6bf8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116e6bfa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e6bfd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 116e6c00 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 116e6c02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e6c05 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e6c08 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116e6c0b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e6c0e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6c11 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116e6c14 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e6c17 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6c1a jb 0x116e6be8 */
  if (C.cf) goto L_116e6be8;
  /* 116e6c1c mov esp, ebp */
  ESP = (EBP);
  /* 116e6c1e pop ebp */
  EBP = (pop32());
  /* 116e6c1f ret 0x14 */
  ESPCHK(0x116e6b30u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x116e6c30 (31 bytes, 15 insns) */
void f_116e6c30(void) {
  FTRACE(0x116e6c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e6c30 push ebp */
  push32((uint32_t)(EBP));
  /* 116e6c31 mov ebp, esp */
  EBP = (ESP);
  /* 116e6c33 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e6c35 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e6c38 push eax */
  push32((uint32_t)(EAX));
  /* 116e6c39 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e6c3c push ecx */
  push32((uint32_t)(ECX));
  /* 116e6c3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e6c40 push edx */
  push32((uint32_t)(EDX));
  /* 116e6c41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e6c44 push eax */
  push32((uint32_t)(EAX));
  /* 116e6c45 call 0x116e6b30 */
  push32(0x116e6c4au); f_116e6b30();
  /* 116e6c4a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e6c4d pop ebp */
  EBP = (pop32());
  /* 116e6c4e ret  */
  ESPCHK(0x116e6c30u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x116e6c50 (123 bytes, 44 insns) */
void f_116e6c50(void) {
  FTRACE(0x116e6c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e6c50 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 116e6c54 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 116e6c5a je 0x116e6c70 */
  if (C.zf) goto L_116e6c70;
L_116e6c5c:;
  /* 116e6c5c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 116e6c5e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 116e6c5f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116e6c61 je 0x116e6ca3 */
  if (C.zf) goto L_116e6ca3;
  /* 116e6c63 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 116e6c69 jne 0x116e6c5c */
  if (!C.zf) goto L_116e6c5c;
  /* 116e6c6b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_116e6c70:;
  /* 116e6c70 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 116e6c72 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 116e6c77 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6c79 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e6c7c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116e6c7e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6c81 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 116e6c86 je 0x116e6c70 */
  if (C.zf) goto L_116e6c70;
  /* 116e6c88 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 116e6c8b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116e6c8d je 0x116e6cc1 */
  if (C.zf) goto L_116e6cc1;
  /* 116e6c8f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 116e6c91 je 0x116e6cb7 */
  if (C.zf) goto L_116e6cb7;
  /* 116e6c93 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 116e6c98 je 0x116e6cad */
  if (C.zf) goto L_116e6cad;
  /* 116e6c9a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 116e6c9f je 0x116e6ca3 */
  if (C.zf) goto L_116e6ca3;
  /* 116e6ca1 jmp 0x116e6c70 */
  goto L_116e6c70;
L_116e6ca3:;
  /* 116e6ca3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 116e6ca6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 116e6caa sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e6cac ret  */
  ESPCHK(0x116e6c50u, _esp0);
  ESP += 4; return;
L_116e6cad:;
  /* 116e6cad lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 116e6cb0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 116e6cb4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e6cb6 ret  */
  ESPCHK(0x116e6c50u, _esp0);
  ESP += 4; return;
L_116e6cb7:;
  /* 116e6cb7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 116e6cba mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 116e6cbe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e6cc0 ret  */
  ESPCHK(0x116e6c50u, _esp0);
  ESP += 4; return;
L_116e6cc1:;
  /* 116e6cc1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 116e6cc4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 116e6cc8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e6cca ret  */
  ESPCHK(0x116e6c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cd0 @ 0x116e6cd0 (249 bytes, 93 insns) */
void f_116e6cd0(void) {
  FTRACE(0x116e6cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e6cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e6cd1 mov ebp, esp */
  EBP = (ESP);
  /* 116e6cd3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e6cd6 push ebx */
  push32((uint32_t)(EBX));
  /* 116e6cd7 push esi */
  push32((uint32_t)(ESI));
  /* 116e6cd8 push edi */
  push32((uint32_t)(EDI));
  /* 116e6cd9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 116e6cdc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116e6cdf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 116e6ce2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_116e6ce5:;
  /* 116e6ce5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6ce9 jne 0x116e6d09 */
  if (!C.zf) goto L_116e6d09;
  /* 116e6ceb push 0x1170aeac */
  push32((uint32_t)(0x1170aeacu));
  /* 116e6cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e6cf2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 116e6cf4 push 0x1170aea0 */
  push32((uint32_t)(0x1170aea0u));
  /* 116e6cf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e6cfb call 0x116e2ee0 */
  push32(0x116e6d00u); f_116e2ee0();
  /* 116e6d00 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6d03 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6d06 jne 0x116e6d09 */
  if (!C.zf) goto L_116e6d09;
  /* 116e6d08 int3  */
  x86_unimpl("int3 @ 0x116e6d08");
L_116e6d09:;
  /* 116e6d09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e6d0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e6d0d jne 0x116e6ce5 */
  if (!C.zf) goto L_116e6ce5;
L_116e6d0f:;
  /* 116e6d0f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6d13 jne 0x116e6d33 */
  if (!C.zf) goto L_116e6d33;
  /* 116e6d15 push 0x1170ae90 */
  push32((uint32_t)(0x1170ae90u));
  /* 116e6d1a push 0 */
  push32((uint32_t)(0x0u));
  /* 116e6d1c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 116e6d1e push 0x1170aea0 */
  push32((uint32_t)(0x1170aea0u));
  /* 116e6d23 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e6d25 call 0x116e2ee0 */
  push32(0x116e6d2au); f_116e2ee0();
  /* 116e6d2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6d2d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6d30 jne 0x116e6d33 */
  if (!C.zf) goto L_116e6d33;
  /* 116e6d32 int3  */
  x86_unimpl("int3 @ 0x116e6d32");
L_116e6d33:;
  /* 116e6d33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e6d35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116e6d37 jne 0x116e6d0f */
  if (!C.zf) goto L_116e6d0f;
  /* 116e6d39 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e6d3c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 116e6d43 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e6d46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e6d49 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 116e6d4c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e6d4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e6d52 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116e6d54 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e6d57 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e6d5a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 116e6d5d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116e6d60 push edx */
  push32((uint32_t)(EDX));
  /* 116e6d61 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e6d64 push eax */
  push32((uint32_t)(EAX));
  /* 116e6d65 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e6d68 push ecx */
  push32((uint32_t)(ECX));
  /* 116e6d69 call 0x116eadb0 */
  push32(0x116e6d6eu); f_116eadb0();
  /* 116e6d6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6d71 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116e6d74 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e6d77 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116e6d7a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e6d7d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e6d80 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 116e6d83 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e6d86 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6d8a jl 0x116e6dae */
  if ((C.sf!=C.of)) goto L_116e6dae;
  /* 116e6d8c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e6d8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116e6d91 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 116e6d94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e6d96 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116e6d9c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 116e6d9f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e6da2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116e6da4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6da7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e6daa mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116e6dac jmp 0x116e6dbf */
  goto L_116e6dbf;
L_116e6dae:;
  /* 116e6dae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e6db1 push eax */
  push32((uint32_t)(EAX));
  /* 116e6db2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e6db4 call 0x116eab30 */
  push32(0x116e6db9u); f_116eab30();
  /* 116e6db9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6dbc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_116e6dbf:;
  /* 116e6dbf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e6dc2 pop edi */
  EDI = (pop32());
  /* 116e6dc3 pop esi */
  ESI = (pop32());
  /* 116e6dc4 pop ebx */
  EBX = (pop32());
  /* 116e6dc5 mov esp, ebp */
  ESP = (EBP);
  /* 116e6dc7 pop ebp */
  EBP = (pop32());
  /* 116e6dc8 ret  */
  ESPCHK(0x116e6cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dd0 @ 0x116e6dd0 (7 bytes, 3 insns) */
void f_116e6dd0(void) {
  FTRACE(0x116e6dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e6dd0 push edi */
  push32((uint32_t)(EDI));
  /* 116e6dd1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 116e6dd5 jmp 0x116e6e41 */
  jmp_ind(0x116e6e41u); return;
}

/* FUN_10006de0 @ 0x116e6de0 (224 bytes, 84 insns) */
void f_116e6de0(void) {
  FTRACE(0x116e6de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e6de0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 116e6de4 push edi */
  push32((uint32_t)(EDI));
  /* 116e6de5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 116e6deb je 0x116e6dfc */
  if (C.zf) goto L_116e6dfc;
L_116e6ded:;
  /* 116e6ded mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 116e6def inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 116e6df0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116e6df2 je 0x116e6e2f */
  if (C.zf) goto L_116e6e2f;
  /* 116e6df4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 116e6dfa jne 0x116e6ded */
  if (!C.zf) goto L_116e6ded;
L_116e6dfc:;
  /* 116e6dfc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 116e6dfe mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 116e6e03 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6e05 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e6e08 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116e6e0a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6e0d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 116e6e12 je 0x116e6dfc */
  if (C.zf) goto L_116e6dfc;
  /* 116e6e14 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 116e6e17 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116e6e19 je 0x116e6e3e */
  if (C.zf) goto L_116e6e3e;
  /* 116e6e1b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 116e6e1d je 0x116e6e39 */
  if (C.zf) goto L_116e6e39;
  /* 116e6e1f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 116e6e24 je 0x116e6e34 */
  if (C.zf) goto L_116e6e34;
  /* 116e6e26 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 116e6e2b je 0x116e6e2f */
  if (C.zf) goto L_116e6e2f;
  /* 116e6e2d jmp 0x116e6dfc */
  goto L_116e6dfc;
L_116e6e2f:;
  /* 116e6e2f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 116e6e32 jmp 0x116e6e41 */
  goto L_116e6e41;
L_116e6e34:;
  /* 116e6e34 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 116e6e37 jmp 0x116e6e41 */
  goto L_116e6e41;
L_116e6e39:;
  /* 116e6e39 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 116e6e3c jmp 0x116e6e41 */
  goto L_116e6e41;
L_116e6e3e:;
  /* 116e6e3e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_116e6e41:;
  /* 116e6e41 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 116e6e45 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 116e6e4b je 0x116e6e66 */
  if (C.zf) goto L_116e6e66;
L_116e6e4d:;
  /* 116e6e4d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116e6e4f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 116e6e50 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 116e6e52 je 0x116e6eb8 */
  if (C.zf) goto L_116e6eb8;
  /* 116e6e54 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 116e6e56 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116e6e57 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 116e6e5d jne 0x116e6e4d */
  if (!C.zf) goto L_116e6e4d;
  /* 116e6e5f jmp 0x116e6e66 */
  goto L_116e6e66;
L_116e6e61:;
  /* 116e6e61 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 116e6e63 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_116e6e66:;
  /* 116e6e66 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 116e6e6b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 116e6e6d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6e6f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e6e72 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116e6e74 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116e6e76 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6e79 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 116e6e7e je 0x116e6e61 */
  if (C.zf) goto L_116e6e61;
  /* 116e6e80 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 116e6e82 je 0x116e6eb8 */
  if (C.zf) goto L_116e6eb8;
  /* 116e6e84 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 116e6e86 je 0x116e6eaf */
  if (C.zf) goto L_116e6eaf;
  /* 116e6e88 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 116e6e8e je 0x116e6ea2 */
  if (C.zf) goto L_116e6ea2;
  /* 116e6e90 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 116e6e96 je 0x116e6e9a */
  if (C.zf) goto L_116e6e9a;
  /* 116e6e98 jmp 0x116e6e61 */
  goto L_116e6e61;
L_116e6e9a:;
  /* 116e6e9a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 116e6e9c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 116e6ea0 pop edi */
  EDI = (pop32());
  /* 116e6ea1 ret  */
  ESPCHK(0x116e6de0u, _esp0);
  ESP += 4; return;
L_116e6ea2:;
  /* 116e6ea2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 116e6ea5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 116e6ea9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 116e6ead pop edi */
  EDI = (pop32());
  /* 116e6eae ret  */
  ESPCHK(0x116e6de0u, _esp0);
  ESP += 4; return;
L_116e6eaf:;
  /* 116e6eaf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 116e6eb2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 116e6eb6 pop edi */
  EDI = (pop32());
  /* 116e6eb7 ret  */
  ESPCHK(0x116e6de0u, _esp0);
  ESP += 4; return;
L_116e6eb8:;
  /* 116e6eb8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 116e6eba mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 116e6ebe pop edi */
  EDI = (pop32());
  /* 116e6ebf ret  */
  ESPCHK(0x116e6de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ec0 @ 0x116e6ec0 (243 bytes, 91 insns) */
void f_116e6ec0(void) {
  FTRACE(0x116e6ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e6ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e6ec1 mov ebp, esp */
  EBP = (ESP);
  /* 116e6ec3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e6ec6 push ebx */
  push32((uint32_t)(EBX));
  /* 116e6ec7 push esi */
  push32((uint32_t)(ESI));
  /* 116e6ec8 push edi */
  push32((uint32_t)(EDI));
  /* 116e6ec9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 116e6ecc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_116e6ecf:;
  /* 116e6ecf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6ed3 jne 0x116e6ef3 */
  if (!C.zf) goto L_116e6ef3;
  /* 116e6ed5 push 0x1170aeac */
  push32((uint32_t)(0x1170aeacu));
  /* 116e6eda push 0 */
  push32((uint32_t)(0x0u));
  /* 116e6edc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 116e6ede push 0x1170aebc */
  push32((uint32_t)(0x1170aebcu));
  /* 116e6ee3 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e6ee5 call 0x116e2ee0 */
  push32(0x116e6eeau); f_116e2ee0();
  /* 116e6eea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6eed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6ef0 jne 0x116e6ef3 */
  if (!C.zf) goto L_116e6ef3;
  /* 116e6ef2 int3  */
  x86_unimpl("int3 @ 0x116e6ef2");
L_116e6ef3:;
  /* 116e6ef3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e6ef5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e6ef7 jne 0x116e6ecf */
  if (!C.zf) goto L_116e6ecf;
L_116e6ef9:;
  /* 116e6ef9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6efd jne 0x116e6f1d */
  if (!C.zf) goto L_116e6f1d;
  /* 116e6eff push 0x1170ae90 */
  push32((uint32_t)(0x1170ae90u));
  /* 116e6f04 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e6f06 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 116e6f08 push 0x1170aebc */
  push32((uint32_t)(0x1170aebcu));
  /* 116e6f0d push 2 */
  push32((uint32_t)(0x2u));
  /* 116e6f0f call 0x116e2ee0 */
  push32(0x116e6f14u); f_116e2ee0();
  /* 116e6f14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6f17 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6f1a jne 0x116e6f1d */
  if (!C.zf) goto L_116e6f1d;
  /* 116e6f1c int3  */
  x86_unimpl("int3 @ 0x116e6f1c");
L_116e6f1d:;
  /* 116e6f1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e6f1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116e6f21 jne 0x116e6ef9 */
  if (!C.zf) goto L_116e6ef9;
  /* 116e6f23 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e6f26 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 116e6f2d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e6f30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e6f33 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 116e6f36 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e6f39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e6f3c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 116e6f3e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e6f41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e6f44 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 116e6f47 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116e6f4a push ecx */
  push32((uint32_t)(ECX));
  /* 116e6f4b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e6f4e push edx */
  push32((uint32_t)(EDX));
  /* 116e6f4f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e6f52 push eax */
  push32((uint32_t)(EAX));
  /* 116e6f53 call 0x116eadb0 */
  push32(0x116e6f58u); f_116eadb0();
  /* 116e6f58 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6f5b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116e6f5e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e6f61 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116e6f64 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e6f67 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e6f6a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 116e6f6d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e6f70 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6f74 jl 0x116e6f98 */
  if ((C.sf!=C.of)) goto L_116e6f98;
  /* 116e6f76 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e6f79 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116e6f7b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 116e6f7e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116e6f80 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116e6f86 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 116e6f89 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e6f8c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116e6f8e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6f91 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e6f94 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116e6f96 jmp 0x116e6fa9 */
  goto L_116e6fa9;
L_116e6f98:;
  /* 116e6f98 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116e6f9b push edx */
  push32((uint32_t)(EDX));
  /* 116e6f9c push 0 */
  push32((uint32_t)(0x0u));
  /* 116e6f9e call 0x116eab30 */
  push32(0x116e6fa3u); f_116eab30();
  /* 116e6fa3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e6fa6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_116e6fa9:;
  /* 116e6fa9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116e6fac pop edi */
  EDI = (pop32());
  /* 116e6fad pop esi */
  ESI = (pop32());
  /* 116e6fae pop ebx */
  EBX = (pop32());
  /* 116e6faf mov esp, ebp */
  ESP = (EBP);
  /* 116e6fb1 pop ebp */
  EBP = (pop32());
  /* 116e6fb2 ret  */
  ESPCHK(0x116e6ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fc0 @ 0x116e6fc0 (47 bytes, 17 insns) */
void f_116e6fc0(void) {
  FTRACE(0x116e6fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e6fc0 push ecx */
  push32((uint32_t)(ECX));
  /* 116e6fc1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6fc6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 116e6fca jb 0x116e6fe0 */
  if (C.cf) goto L_116e6fe0;
L_116e6fcc:;
  /* 116e6fcc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e6fd2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e6fd7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 116e6fd9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6fde jae 0x116e6fcc */
  if (!C.cf) goto L_116e6fcc;
L_116e6fe0:;
  /* 116e6fe0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e6fe2 mov eax, esp */
  EAX = (ESP);
  /* 116e6fe4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 116e6fe6 mov esp, ecx */
  ESP = (ECX);
  /* 116e6fe8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116e6fea mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 116e6fed push eax */
  push32((uint32_t)(EAX));
  /* 116e6fee ret  */
  ESPCHK(0x116e6fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ff0 @ 0x116e6ff0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_116e6ff0(void) {
  FTRACE(0x116e6ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e6ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e6ff1 mov ebp, esp */
  EBP = (ESP);
  /* 116e6ff3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e6ff6 push esi */
  push32((uint32_t)(ESI));
  /* 116e6ff7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e6ffb je 0x116e7003 */
  if (C.zf) goto L_116e7003;
  /* 116e6ffd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7001 jne 0x116e7008 */
  if (!C.zf) goto L_116e7008;
L_116e7003:;
  /* 116e7003 jmp 0x116e71d8 */
  goto L_116e71d8;
L_116e7008:;
  /* 116e7008 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e700c je 0x116e7024 */
  if (C.zf) goto L_116e7024;
  /* 116e700e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7012 je 0x116e7024 */
  if (C.zf) goto L_116e7024;
  /* 116e7014 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7018 je 0x116e7024 */
  if (C.zf) goto L_116e7024;
  /* 116e701a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e701e jne 0x116e7101 */
  if (!C.zf) goto L_116e7101;
L_116e7024:;
  /* 116e7024 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e7026 call 0x116e7820 */
  push32(0x116e702bu); f_116e7820();
  /* 116e702b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e702e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7032 je 0x116e703a */
  if (C.zf) goto L_116e703a;
  /* 116e7034 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7038 jne 0x116e707f */
  if (!C.zf) goto L_116e707f;
L_116e703a:;
  /* 116e703a cmp dword ptr [0x1170f7a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f7a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7041 jne 0x116e707f */
  if (!C.zf) goto L_116e707f;
  /* 116e7043 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e7045 push 0x116e7220 */
  push32((uint32_t)(0x116e7220u));
  /* 116e704a call dword ptr [0x11712324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712324))), 0x116e7050u);
  /* 116e7050 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7053 jne 0x116e7061 */
  if (!C.zf) goto L_116e7061;
  /* 116e7055 mov dword ptr [0x1170f7a4], 1 */
  w32((uint32_t)(0x1170f7a4), (0x1u));
  /* 116e705f jmp 0x116e707f */
  goto L_116e707f;
L_116e7061:;
  /* 116e7061 call dword ptr [0x11712380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712380))), 0x116e7067u);
  /* 116e7067 mov esi, eax */
  ESI = (EAX);
  /* 116e7069 call 0x116ebd00 */
  push32(0x116e706eu); f_116ebd00();
  /* 116e706e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 116e7070 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e7072 call 0x116e78c0 */
  push32(0x116e7077u); f_116e78c0();
  /* 116e7077 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e707a jmp 0x116e71d8 */
  goto L_116e71d8;
L_116e707f:;
  /* 116e707f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7082 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116e7085 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e7088 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e708b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116e708e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7092 ja 0x116e70f2 */
  if ((!C.cf&&!C.zf)) goto L_116e70f2;
  /* 116e7094 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e7097 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e7099 mov dl, byte ptr [eax + 0x116e71ff] */
  DL = (r8((uint32_t)(EAX + 0x116e71ff)));
  /* 116e709f jmp dword ptr [edx*4 + 0x116e71eb] */
  switch (EDX) {
    case 0: goto L_116e70a6;
    case 1: goto L_116e70e0;
    case 2: goto L_116e70ba;
    case 3: goto L_116e70cd;
    case 4: goto L_116e70f2;
    default: x86_unimpl("switch@0x116e709f out of table"); return;
  }
L_116e70a6:;
  /* 116e70a6 mov ecx, dword ptr [0x1170f794] */
  ECX = (r32((uint32_t)(0x1170f794)));
  /* 116e70ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116e70af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e70b2 mov dword ptr [0x1170f794], edx */
  w32((uint32_t)(0x1170f794), (EDX));
  /* 116e70b8 jmp 0x116e70f2 */
  goto L_116e70f2;
L_116e70ba:;
  /* 116e70ba mov eax, dword ptr [0x1170f798] */
  EAX = (r32((uint32_t)(0x1170f798)));
  /* 116e70bf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116e70c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e70c5 mov dword ptr [0x1170f798], ecx */
  w32((uint32_t)(0x1170f798), (ECX));
  /* 116e70cb jmp 0x116e70f2 */
  goto L_116e70f2;
L_116e70cd:;
  /* 116e70cd mov edx, dword ptr [0x1170f79c] */
  EDX = (r32((uint32_t)(0x1170f79c)));
  /* 116e70d3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116e70d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e70d9 mov dword ptr [0x1170f79c], eax */
  w32((uint32_t)(0x1170f79c), (EAX));
  /* 116e70de jmp 0x116e70f2 */
  goto L_116e70f2;
L_116e70e0:;
  /* 116e70e0 mov ecx, dword ptr [0x1170f7a0] */
  ECX = (r32((uint32_t)(0x1170f7a0)));
  /* 116e70e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116e70e9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e70ec mov dword ptr [0x1170f7a0], edx */
  w32((uint32_t)(0x1170f7a0), (EDX));
L_116e70f2:;
  /* 116e70f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e70f4 call 0x116e78c0 */
  push32(0x116e70f9u); f_116e78c0();
  /* 116e70f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e70fc jmp 0x116e71d3 */
  goto L_116e71d3;
L_116e7101:;
  /* 116e7101 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7105 je 0x116e7118 */
  if (C.zf) goto L_116e7118;
  /* 116e7107 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e710b je 0x116e7118 */
  if (C.zf) goto L_116e7118;
  /* 116e710d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7111 je 0x116e7118 */
  if (C.zf) goto L_116e7118;
  /* 116e7113 jmp 0x116e71d8 */
  goto L_116e71d8;
L_116e7118:;
  /* 116e7118 call 0x116e3860 */
  push32(0x116e711du); f_116e3860();
  /* 116e711d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e7120 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7123 cmp dword ptr [eax + 0x50], 0x1170dc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1170dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e712a jne 0x116e7175 */
  if (!C.zf) goto L_116e7175;
  /* 116e712c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 116e7131 push 0x1170aec8 */
  push32((uint32_t)(0x1170aec8u));
  /* 116e7136 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e7138 mov ecx, dword ptr [0x1170dc80] */
  ECX = (r32((uint32_t)(0x1170dc80)));
  /* 116e713e push ecx */
  push32((uint32_t)(ECX));
  /* 116e713f call 0x116e3e20 */
  push32(0x116e7144u); f_116e3e20();
  /* 116e7144 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7147 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e714a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 116e714d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7150 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7154 je 0x116e7173 */
  if (C.zf) goto L_116e7173;
  /* 116e7156 mov ecx, dword ptr [0x1170dc80] */
  ECX = (r32((uint32_t)(0x1170dc80)));
  /* 116e715c push ecx */
  push32((uint32_t)(ECX));
  /* 116e715d push 0x1170dc00 */
  push32((uint32_t)(0x1170dc00u));
  /* 116e7162 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7165 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 116e7168 push eax */
  push32((uint32_t)(EAX));
  /* 116e7169 call 0x116ea700 */
  push32(0x116e716eu); f_116ea700();
  /* 116e716e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7171 jmp 0x116e7175 */
  goto L_116e7175;
L_116e7173:;
  /* 116e7173 jmp 0x116e71d8 */
  goto L_116e71d8;
L_116e7175:;
  /* 116e7175 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7178 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 116e717b push edx */
  push32((uint32_t)(EDX));
  /* 116e717c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e717f push eax */
  push32((uint32_t)(EAX));
  /* 116e7180 call 0x116e7500 */
  push32(0x116e7185u); f_116e7500();
  /* 116e7185 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7188 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116e718b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e718f jne 0x116e7193 */
  if (!C.zf) goto L_116e7193;
  /* 116e7191 jmp 0x116e71d8 */
  goto L_116e71d8;
L_116e7193:;
  /* 116e7193 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e7196 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116e7199 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_116e719c:;
  /* 116e719c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e719f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116e71a2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e71a5 jne 0x116e71d3 */
  if (!C.zf) goto L_116e71d3;
  /* 116e71a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e71aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e71ad mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 116e71b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e71b3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e71b6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116e71b9 mov edx, dword ptr [0x1170dc84] */
  EDX = (r32((uint32_t)(0x1170dc84)));
  /* 116e71bf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e71c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e71c5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 116e71c8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e71ca cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e71cd jb 0x116e71d1 */
  if (C.cf) goto L_116e71d1;
  /* 116e71cf jmp 0x116e71d3 */
  goto L_116e71d3;
L_116e71d1:;
  /* 116e71d1 jmp 0x116e719c */
  goto L_116e719c;
L_116e71d3:;
  /* 116e71d3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e71d6 jmp 0x116e71e6 */
  goto L_116e71e6;
L_116e71d8:;
  /* 116e71d8 call 0x116ebcf0 */
  push32(0x116e71ddu); f_116ebcf0();
  /* 116e71dd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 116e71e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_116e71e6:;
  /* 116e71e6 pop esi */
  ESI = (pop32());
  /* 116e71e7 mov esp, ebp */
  ESP = (EBP);
  /* 116e71e9 pop ebp */
  EBP = (pop32());
  /* 116e71ea ret  */
  ESPCHK(0x116e6ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007220 @ 0x116e7220 (146 bytes, 45 insns) */
void f_116e7220(void) {
  FTRACE(0x116e7220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e7220 push ebp */
  push32((uint32_t)(EBP));
  /* 116e7221 mov ebp, esp */
  EBP = (ESP);
  /* 116e7223 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e7226 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e7228 call 0x116e7820 */
  push32(0x116e722du); f_116e7820();
  /* 116e722d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7230 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7234 jne 0x116e724e */
  if (!C.zf) goto L_116e724e;
  /* 116e7236 mov dword ptr [ebp - 8], 0x1170f794 */
  w32((uint32_t)(EBP + -0x8), (0x1170f794u));
  /* 116e723d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e7240 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116e7242 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116e7245 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 116e724c jmp 0x116e7264 */
  goto L_116e7264;
L_116e724e:;
  /* 116e724e mov dword ptr [ebp - 8], 0x1170f798 */
  w32((uint32_t)(EBP + -0x8), (0x1170f798u));
  /* 116e7255 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e7258 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116e725a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116e725d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_116e7264:;
  /* 116e7264 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7268 jne 0x116e7278 */
  if (!C.zf) goto L_116e7278;
  /* 116e726a push 1 */
  push32((uint32_t)(0x1u));
  /* 116e726c call 0x116e78c0 */
  push32(0x116e7271u); f_116e78c0();
  /* 116e7271 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7274 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e7276 jmp 0x116e72ac */
  goto L_116e72ac;
L_116e7278:;
  /* 116e7278 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e727c je 0x116e729d */
  if (C.zf) goto L_116e729d;
  /* 116e727e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e7281 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 116e7287 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e7289 call 0x116e78c0 */
  push32(0x116e728eu); f_116e78c0();
  /* 116e728e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7291 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7294 push edx */
  push32((uint32_t)(EDX));
  /* 116e7295 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x116e7298u);
  /* 116e7298 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e729b jmp 0x116e72a7 */
  goto L_116e72a7;
L_116e729d:;
  /* 116e729d push 1 */
  push32((uint32_t)(0x1u));
  /* 116e729f call 0x116e78c0 */
  push32(0x116e72a4u); f_116e78c0();
  /* 116e72a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e72a7:;
  /* 116e72a7 mov eax, 1 */
  EAX = (0x1u);
L_116e72ac:;
  /* 116e72ac mov esp, ebp */
  ESP = (EBP);
  /* 116e72ae pop ebp */
  EBP = (pop32());
  /* 116e72af ret 4 */
  ESPCHK(0x116e7220u, _esp0);
  ESP += 8; return;
}

/* FUN_100072c0 @ 0x116e72c0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_116e72c0(void) {
  FTRACE(0x116e72c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e72c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e72c1 mov ebp, esp */
  EBP = (ESP);
  /* 116e72c3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e72c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116e72cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e72d0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116e72d3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e72d6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e72d9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 116e72dc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e72e0 ja 0x116e738e */
  if ((!C.cf&&!C.zf)) goto L_116e738e;
  /* 116e72e6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116e72e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e72eb mov dl, byte ptr [eax + 0x116e74e2] */
  DL = (r8((uint32_t)(EAX + 0x116e74e2)));
  /* 116e72f1 jmp dword ptr [edx*4 + 0x116e74ca] */
  switch (EDX) {
    case 0: goto L_116e72f8;
    case 1: goto L_116e7363;
    case 2: goto L_116e7349;
    case 3: goto L_116e7315;
    case 4: goto L_116e732f;
    case 5: goto L_116e738e;
    default: x86_unimpl("switch@0x116e72f1 out of table"); return;
  }
L_116e72f8:;
  /* 116e72f8 mov dword ptr [ebp - 0x18], 0x1170f794 */
  w32((uint32_t)(EBP + -0x18), (0x1170f794u));
  /* 116e72ff mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e7302 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116e7304 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 116e7307 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e730a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e730d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116e7310 jmp 0x116e7396 */
  goto L_116e7396;
L_116e7315:;
  /* 116e7315 mov dword ptr [ebp - 0x18], 0x1170f798 */
  w32((uint32_t)(EBP + -0x18), (0x1170f798u));
  /* 116e731c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e731f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116e7321 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 116e7324 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e7327 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e732a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116e732d jmp 0x116e7396 */
  goto L_116e7396;
L_116e732f:;
  /* 116e732f mov dword ptr [ebp - 0x18], 0x1170f79c */
  w32((uint32_t)(EBP + -0x18), (0x1170f79cu));
  /* 116e7336 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e7339 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116e733b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 116e733e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e7341 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7344 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116e7347 jmp 0x116e7396 */
  goto L_116e7396;
L_116e7349:;
  /* 116e7349 mov dword ptr [ebp - 0x18], 0x1170f7a0 */
  w32((uint32_t)(EBP + -0x18), (0x1170f7a0u));
  /* 116e7350 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e7353 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116e7355 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 116e7358 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e735b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e735e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116e7361 jmp 0x116e7396 */
  goto L_116e7396;
L_116e7363:;
  /* 116e7363 call 0x116e3860 */
  push32(0x116e7368u); f_116e3860();
  /* 116e7368 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e736b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e736e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 116e7371 push edx */
  push32((uint32_t)(EDX));
  /* 116e7372 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7375 push eax */
  push32((uint32_t)(EAX));
  /* 116e7376 call 0x116e7500 */
  push32(0x116e737bu); f_116e7500();
  /* 116e737b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e737e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7381 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116e7384 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e7387 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116e7389 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 116e738c jmp 0x116e7396 */
  goto L_116e7396;
L_116e738e:;
  /* 116e738e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e7391 jmp 0x116e74c6 */
  goto L_116e74c6;
L_116e7396:;
  /* 116e7396 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e739a je 0x116e73a6 */
  if (C.zf) goto L_116e73a6;
  /* 116e739c push 1 */
  push32((uint32_t)(0x1u));
  /* 116e739e call 0x116e7820 */
  push32(0x116e73a3u); f_116e7820();
  /* 116e73a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e73a6:;
  /* 116e73a6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e73aa jne 0x116e73c3 */
  if (!C.zf) goto L_116e73c3;
  /* 116e73ac cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e73b0 je 0x116e73bc */
  if (C.zf) goto L_116e73bc;
  /* 116e73b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 116e73b4 call 0x116e78c0 */
  push32(0x116e73b9u); f_116e78c0();
  /* 116e73b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e73bc:;
  /* 116e73bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e73be jmp 0x116e74c6 */
  goto L_116e74c6;
L_116e73c3:;
  /* 116e73c3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e73c7 jne 0x116e73e0 */
  if (!C.zf) goto L_116e73e0;
  /* 116e73c9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e73cd je 0x116e73d9 */
  if (C.zf) goto L_116e73d9;
  /* 116e73cf push 1 */
  push32((uint32_t)(0x1u));
  /* 116e73d1 call 0x116e78c0 */
  push32(0x116e73d6u); f_116e78c0();
  /* 116e73d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e73d9:;
  /* 116e73d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 116e73db call 0x116e35e0 */
  push32(0x116e73e0u); f_116e35e0();
L_116e73e0:;
  /* 116e73e0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e73e4 je 0x116e73f2 */
  if (C.zf) goto L_116e73f2;
  /* 116e73e6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e73ea je 0x116e73f2 */
  if (C.zf) goto L_116e73f2;
  /* 116e73ec cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e73f0 jne 0x116e741e */
  if (!C.zf) goto L_116e741e;
L_116e73f2:;
  /* 116e73f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e73f5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 116e73f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116e73fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e73fe mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 116e7405 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7409 jne 0x116e741e */
  if (!C.zf) goto L_116e741e;
  /* 116e740b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e740e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 116e7411 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116e7414 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7417 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_116e741e:;
  /* 116e741e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7422 jne 0x116e7460 */
  if (!C.zf) goto L_116e7460;
  /* 116e7424 mov eax, dword ptr [0x1170dc78] */
  EAX = (r32((uint32_t)(0x1170dc78)));
  /* 116e7429 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116e742c jmp 0x116e7437 */
  goto L_116e7437;
L_116e742e:;
  /* 116e742e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e7431 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7434 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_116e7437:;
  /* 116e7437 mov edx, dword ptr [0x1170dc78] */
  EDX = (r32((uint32_t)(0x1170dc78)));
  /* 116e743d add edx, dword ptr [0x1170dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1170dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7443 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7446 jge 0x116e745e */
  if ((C.sf==C.of)) goto L_116e745e;
  /* 116e7448 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e744b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e744e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7451 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 116e7454 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 116e745c jmp 0x116e742e */
  goto L_116e742e;
L_116e745e:;
  /* 116e745e jmp 0x116e7469 */
  goto L_116e7469;
L_116e7460:;
  /* 116e7460 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e7463 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_116e7469:;
  /* 116e7469 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e746d je 0x116e7479 */
  if (C.zf) goto L_116e7479;
  /* 116e746f push 1 */
  push32((uint32_t)(0x1u));
  /* 116e7471 call 0x116e78c0 */
  push32(0x116e7476u); f_116e78c0();
  /* 116e7476 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e7479:;
  /* 116e7479 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e747d jne 0x116e7490 */
  if (!C.zf) goto L_116e7490;
  /* 116e747f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7482 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 116e7485 push edx */
  push32((uint32_t)(EDX));
  /* 116e7486 push 8 */
  push32((uint32_t)(0x8u));
  /* 116e7488 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x116e748bu);
  /* 116e748b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e748e jmp 0x116e749a */
  goto L_116e749a;
L_116e7490:;
  /* 116e7490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7493 push eax */
  push32((uint32_t)(EAX));
  /* 116e7494 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x116e7497u);
  /* 116e7497 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e749a:;
  /* 116e749a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e749e je 0x116e74ac */
  if (C.zf) goto L_116e74ac;
  /* 116e74a0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e74a4 je 0x116e74ac */
  if (C.zf) goto L_116e74ac;
  /* 116e74a6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e74aa jne 0x116e74c4 */
  if (!C.zf) goto L_116e74c4;
L_116e74ac:;
  /* 116e74ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e74af mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e74b2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 116e74b5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e74b9 jne 0x116e74c4 */
  if (!C.zf) goto L_116e74c4;
  /* 116e74bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e74be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e74c1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_116e74c4:;
  /* 116e74c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116e74c6:;
  /* 116e74c6 mov esp, ebp */
  ESP = (EBP);
  /* 116e74c8 pop ebp */
  EBP = (pop32());
  /* 116e74c9 ret  */
  ESPCHK(0x116e72c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007500 @ 0x116e7500 (91 bytes, 35 insns) */
void f_116e7500(void) {
  FTRACE(0x116e7500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e7500 push ebp */
  push32((uint32_t)(EBP));
  /* 116e7501 mov ebp, esp */
  EBP = (ESP);
  /* 116e7503 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7504 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e7507 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116e750a:;
  /* 116e750a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e750d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116e7510 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7513 je 0x116e7533 */
  if (C.zf) goto L_116e7533;
  /* 116e7515 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7518 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e751b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e751e mov ecx, dword ptr [0x1170dc84] */
  ECX = (r32((uint32_t)(0x1170dc84)));
  /* 116e7524 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e7527 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e752a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e752c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e752f jae 0x116e7533 */
  if (!C.cf) goto L_116e7533;
  /* 116e7531 jmp 0x116e750a */
  goto L_116e750a;
L_116e7533:;
  /* 116e7533 mov eax, dword ptr [0x1170dc84] */
  EAX = (r32((uint32_t)(0x1170dc84)));
  /* 116e7538 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e753b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e753e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7540 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7543 jae 0x116e7555 */
  if (!C.cf) goto L_116e7555;
  /* 116e7545 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7548 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116e754b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e754e jne 0x116e7555 */
  if (!C.zf) goto L_116e7555;
  /* 116e7550 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7553 jmp 0x116e7557 */
  goto L_116e7557;
L_116e7555:;
  /* 116e7555 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116e7557:;
  /* 116e7557 mov esp, ebp */
  ESP = (EBP);
  /* 116e7559 pop ebp */
  EBP = (pop32());
  /* 116e755a ret  */
  ESPCHK(0x116e7500u, _esp0);
  ESP += 4; return;
}

/* FUN_10007560 @ 0x116e7560 (13 bytes, 6 insns) */
void f_116e7560(void) {
  FTRACE(0x116e7560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e7560 push ebp */
  push32((uint32_t)(EBP));
  /* 116e7561 mov ebp, esp */
  EBP = (ESP);
  /* 116e7563 call 0x116e3860 */
  push32(0x116e7568u); f_116e3860();
  /* 116e7568 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e756b pop ebp */
  EBP = (pop32());
  /* 116e756c ret  */
  ESPCHK(0x116e7560u, _esp0);
  ESP += 4; return;
}

/* FUN_10007570 @ 0x116e7570 (13 bytes, 6 insns) */
void f_116e7570(void) {
  FTRACE(0x116e7570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e7570 push ebp */
  push32((uint32_t)(EBP));
  /* 116e7571 mov ebp, esp */
  EBP = (ESP);
  /* 116e7573 call 0x116e3860 */
  push32(0x116e7578u); f_116e3860();
  /* 116e7578 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e757b pop ebp */
  EBP = (pop32());
  /* 116e757c ret  */
  ESPCHK(0x116e7570u, _esp0);
  ESP += 4; return;
}

/* FUN_10007580 @ 0x116e7580 (187 bytes, 54 insns) */
void f_116e7580(void) {
  FTRACE(0x116e7580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e7580 push ebp */
  push32((uint32_t)(EBP));
  /* 116e7581 mov ebp, esp */
  EBP = (ESP);
  /* 116e7583 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e7586 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116e758d cmp dword ptr [0x1170f7a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f7a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7594 jne 0x116e75f3 */
  if (!C.zf) goto L_116e75f3;
  /* 116e7596 push 0x1170a2f4 */
  push32((uint32_t)(0x1170a2f4u));
  /* 116e759b call dword ptr [0x11712350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712350))), 0x116e75a1u);
  /* 116e75a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116e75a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e75a8 je 0x116e75c7 */
  if (C.zf) goto L_116e75c7;
  /* 116e75aa push 0x1170aef8 */
  push32((uint32_t)(0x1170aef8u));
  /* 116e75af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e75b2 push eax */
  push32((uint32_t)(EAX));
  /* 116e75b3 call dword ptr [0x1171234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171234c))), 0x116e75b9u);
  /* 116e75b9 mov dword ptr [0x1170f7a8], eax */
  w32((uint32_t)(0x1170f7a8), (EAX));
  /* 116e75be cmp dword ptr [0x1170f7a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f7a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e75c5 jne 0x116e75cb */
  if (!C.zf) goto L_116e75cb;
L_116e75c7:;
  /* 116e75c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e75c9 jmp 0x116e7637 */
  goto L_116e7637;
L_116e75cb:;
  /* 116e75cb push 0x1170aee8 */
  push32((uint32_t)(0x1170aee8u));
  /* 116e75d0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e75d3 push ecx */
  push32((uint32_t)(ECX));
  /* 116e75d4 call dword ptr [0x1171234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171234c))), 0x116e75dau);
  /* 116e75da mov dword ptr [0x1170f7ac], eax */
  w32((uint32_t)(0x1170f7ac), (EAX));
  /* 116e75df push 0x1170aed4 */
  push32((uint32_t)(0x1170aed4u));
  /* 116e75e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e75e7 push edx */
  push32((uint32_t)(EDX));
  /* 116e75e8 call dword ptr [0x1171234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171234c))), 0x116e75eeu);
  /* 116e75ee mov dword ptr [0x1170f7b0], eax */
  w32((uint32_t)(0x1170f7b0), (EAX));
L_116e75f3:;
  /* 116e75f3 cmp dword ptr [0x1170f7ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f7ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e75fa je 0x116e7605 */
  if (C.zf) goto L_116e7605;
  /* 116e75fc call dword ptr [0x1170f7ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1170f7ac))), 0x116e7602u);
  /* 116e7602 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116e7605:;
  /* 116e7605 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7609 je 0x116e7621 */
  if (C.zf) goto L_116e7621;
  /* 116e760b cmp dword ptr [0x1170f7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1170f7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7612 je 0x116e7621 */
  if (C.zf) goto L_116e7621;
  /* 116e7614 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7617 push eax */
  push32((uint32_t)(EAX));
  /* 116e7618 call dword ptr [0x1170f7b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1170f7b0))), 0x116e761eu);
  /* 116e761e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116e7621:;
  /* 116e7621 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116e7624 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7625 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e7628 push edx */
  push32((uint32_t)(EDX));
  /* 116e7629 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e762c push eax */
  push32((uint32_t)(EAX));
  /* 116e762d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7630 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7631 call dword ptr [0x1170f7a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1170f7a8))), 0x116e7637u);
L_116e7637:;
  /* 116e7637 mov esp, ebp */
  ESP = (EBP);
  /* 116e7639 pop ebp */
  EBP = (pop32());
  /* 116e763a ret  */
  ESPCHK(0x116e7580u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x116e7640 (254 bytes, 109 insns) */
void f_116e7640(void) {
  FTRACE(0x116e7640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e7640 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 116e7644 push edi */
  push32((uint32_t)(EDI));
  /* 116e7645 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116e7647 je 0x116e76c3 */
  if (C.zf) goto L_116e76c3;
  /* 116e7649 push esi */
  push32((uint32_t)(ESI));
  /* 116e764a push ebx */
  push32((uint32_t)(EBX));
  /* 116e764b mov ebx, ecx */
  EBX = (ECX);
  /* 116e764d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 116e7651 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 116e7657 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 116e765b jne 0x116e7664 */
  if (!C.zf) goto L_116e7664;
  /* 116e765d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116e7660 jne 0x116e76d1 */
  if (!C.zf) goto L_116e76d1;
  /* 116e7662 jmp 0x116e7685 */
  goto L_116e7685;
L_116e7664:;
  /* 116e7664 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116e7666 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116e7667 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116e7669 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116e766a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116e766b je 0x116e7692 */
  if (C.zf) goto L_116e7692;
  /* 116e766d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116e766f je 0x116e769a */
  if (C.zf) goto L_116e769a;
  /* 116e7671 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 116e7677 jne 0x116e7664 */
  if (!C.zf) goto L_116e7664;
  /* 116e7679 mov ebx, ecx */
  EBX = (ECX);
  /* 116e767b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116e767e jne 0x116e76d1 */
  if (!C.zf) goto L_116e76d1;
L_116e7680:;
  /* 116e7680 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 116e7683 je 0x116e7692 */
  if (C.zf) goto L_116e7692;
L_116e7685:;
  /* 116e7685 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116e7687 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116e7688 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116e768a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116e768b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116e768d je 0x116e76be */
  if (C.zf) goto L_116e76be;
  /* 116e768f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 116e7690 jne 0x116e7685 */
  if (!C.zf) goto L_116e7685;
L_116e7692:;
  /* 116e7692 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 116e7696 pop ebx */
  EBX = (pop32());
  /* 116e7697 pop esi */
  ESI = (pop32());
  /* 116e7698 pop edi */
  EDI = (pop32());
  /* 116e7699 ret  */
  ESPCHK(0x116e7640u, _esp0);
  ESP += 4; return;
L_116e769a:;
  /* 116e769a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 116e76a0 je 0x116e76b4 */
  if (C.zf) goto L_116e76b4;
L_116e76a2:;
  /* 116e76a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116e76a4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116e76a5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116e76a6 je 0x116e7736 */
  if (C.zf) goto L_116e7736;
  /* 116e76ac test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 116e76b2 jne 0x116e76a2 */
  if (!C.zf) goto L_116e76a2;
L_116e76b4:;
  /* 116e76b4 mov ebx, ecx */
  EBX = (ECX);
  /* 116e76b6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116e76b9 jne 0x116e7727 */
  if (!C.zf) goto L_116e7727;
L_116e76bb:;
  /* 116e76bb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116e76bd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_116e76be:;
  /* 116e76be dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 116e76bf jne 0x116e76bb */
  if (!C.zf) goto L_116e76bb;
  /* 116e76c1 pop ebx */
  EBX = (pop32());
  /* 116e76c2 pop esi */
  ESI = (pop32());
L_116e76c3:;
  /* 116e76c3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 116e76c7 pop edi */
  EDI = (pop32());
  /* 116e76c8 ret  */
  ESPCHK(0x116e7640u, _esp0);
  ESP += 4; return;
L_116e76c9:;
  /* 116e76c9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 116e76cb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 116e76ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116e76cf je 0x116e7680 */
  if (C.zf) goto L_116e7680;
L_116e76d1:;
  /* 116e76d1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 116e76d6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 116e76d8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e76da xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e76dd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116e76df mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 116e76e1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116e76e4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 116e76e9 je 0x116e76c9 */
  if (C.zf) goto L_116e76c9;
  /* 116e76eb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 116e76ed je 0x116e771b */
  if (C.zf) goto L_116e771b;
  /* 116e76ef test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 116e76f1 je 0x116e7711 */
  if (C.zf) goto L_116e7711;
  /* 116e76f3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 116e76f9 je 0x116e7707 */
  if (C.zf) goto L_116e7707;
  /* 116e76fb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 116e7701 jne 0x116e76c9 */
  if (!C.zf) goto L_116e76c9;
  /* 116e7703 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 116e7705 jmp 0x116e771f */
  goto L_116e771f;
L_116e7707:;
  /* 116e7707 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116e770d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 116e770f jmp 0x116e771f */
  goto L_116e771f;
L_116e7711:;
  /* 116e7711 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116e7717 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 116e7719 jmp 0x116e771f */
  goto L_116e771f;
L_116e771b:;
  /* 116e771b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116e771d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_116e771f:;
  /* 116e771f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7722 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e7724 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116e7725 je 0x116e7731 */
  if (C.zf) goto L_116e7731;
L_116e7727:;
  /* 116e7727 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116e7729:;
  /* 116e7729 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 116e772b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 116e772e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116e772f jne 0x116e7729 */
  if (!C.zf) goto L_116e7729;
L_116e7731:;
  /* 116e7731 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 116e7734 jne 0x116e76bb */
  if (!C.zf) goto L_116e76bb;
L_116e7736:;
  /* 116e7736 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 116e773a pop ebx */
  EBX = (pop32());
  /* 116e773b pop esi */
  ESI = (pop32());
  /* 116e773c pop edi */
  EDI = (pop32());
  /* 116e773d ret  */
  ESPCHK(0x116e7640u, _esp0);
  ESP += 4; return;
}

/* FUN_10007740 @ 0x116e7740 (55 bytes, 16 insns) */
void f_116e7740(void) {
  FTRACE(0x116e7740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e7740 push ebp */
  push32((uint32_t)(EBP));
  /* 116e7741 mov ebp, esp */
  EBP = (ESP);
  /* 116e7743 mov eax, dword ptr [0x1170db84] */
  EAX = (r32((uint32_t)(0x1170db84)));
  /* 116e7748 push eax */
  push32((uint32_t)(EAX));
  /* 116e7749 call dword ptr [0x1171232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171232c))), 0x116e774fu);
  /* 116e774f mov ecx, dword ptr [0x1170db74] */
  ECX = (r32((uint32_t)(0x1170db74)));
  /* 116e7755 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7756 call dword ptr [0x1171232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171232c))), 0x116e775cu);
  /* 116e775c mov edx, dword ptr [0x1170db64] */
  EDX = (r32((uint32_t)(0x1170db64)));
  /* 116e7762 push edx */
  push32((uint32_t)(EDX));
  /* 116e7763 call dword ptr [0x1171232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171232c))), 0x116e7769u);
  /* 116e7769 mov eax, dword ptr [0x1170db44] */
  EAX = (r32((uint32_t)(0x1170db44)));
  /* 116e776e push eax */
  push32((uint32_t)(EAX));
  /* 116e776f call dword ptr [0x1171232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171232c))), 0x116e7775u);
  /* 116e7775 pop ebp */
  EBP = (pop32());
  /* 116e7776 ret  */
  ESPCHK(0x116e7740u, _esp0);
  ESP += 4; return;
}

/* FUN_10007780 @ 0x116e7780 (159 bytes, 47 insns) */
void f_116e7780(void) {
  FTRACE(0x116e7780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e7780 push ebp */
  push32((uint32_t)(EBP));
  /* 116e7781 mov ebp, esp */
  EBP = (ESP);
  /* 116e7783 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7784 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116e778b jmp 0x116e7796 */
  goto L_116e7796;
L_116e778d:;
  /* 116e778d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7790 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7793 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116e7796:;
  /* 116e7796 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e779a jge 0x116e77e9 */
  if ((C.sf==C.of)) goto L_116e77e9;
  /* 116e779c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e779f cmp dword ptr [ecx*4 + 0x1170db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1170db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e77a7 je 0x116e77e7 */
  if (C.zf) goto L_116e77e7;
  /* 116e77a9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e77ad je 0x116e77e7 */
  if (C.zf) goto L_116e77e7;
  /* 116e77af cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e77b3 je 0x116e77e7 */
  if (C.zf) goto L_116e77e7;
  /* 116e77b5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e77b9 je 0x116e77e7 */
  if (C.zf) goto L_116e77e7;
  /* 116e77bb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e77bf je 0x116e77e7 */
  if (C.zf) goto L_116e77e7;
  /* 116e77c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e77c4 mov eax, dword ptr [edx*4 + 0x1170db40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1170db40)));
  /* 116e77cb push eax */
  push32((uint32_t)(EAX));
  /* 116e77cc call dword ptr [0x11712394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712394))), 0x116e77d2u);
  /* 116e77d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 116e77d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e77d7 mov edx, dword ptr [ecx*4 + 0x1170db40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1170db40)));
  /* 116e77de push edx */
  push32((uint32_t)(EDX));
  /* 116e77df call 0x116e48b0 */
  push32(0x116e77e4u); f_116e48b0();
  /* 116e77e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e77e7:;
  /* 116e77e7 jmp 0x116e778d */
  goto L_116e778d;
L_116e77e9:;
  /* 116e77e9 mov eax, dword ptr [0x1170db64] */
  EAX = (r32((uint32_t)(0x1170db64)));
  /* 116e77ee push eax */
  push32((uint32_t)(EAX));
  /* 116e77ef call dword ptr [0x11712394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712394))), 0x116e77f5u);
  /* 116e77f5 mov ecx, dword ptr [0x1170db74] */
  ECX = (r32((uint32_t)(0x1170db74)));
  /* 116e77fb push ecx */
  push32((uint32_t)(ECX));
  /* 116e77fc call dword ptr [0x11712394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712394))), 0x116e7802u);
  /* 116e7802 mov edx, dword ptr [0x1170db84] */
  EDX = (r32((uint32_t)(0x1170db84)));
  /* 116e7808 push edx */
  push32((uint32_t)(EDX));
  /* 116e7809 call dword ptr [0x11712394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712394))), 0x116e780fu);
  /* 116e780f mov eax, dword ptr [0x1170db44] */
  EAX = (r32((uint32_t)(0x1170db44)));
  /* 116e7814 push eax */
  push32((uint32_t)(EAX));
  /* 116e7815 call dword ptr [0x11712394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712394))), 0x116e781bu);
  /* 116e781b mov esp, ebp */
  ESP = (EBP);
  /* 116e781d pop ebp */
  EBP = (pop32());
  /* 116e781e ret  */
  ESPCHK(0x116e7780u, _esp0);
  ESP += 4; return;
}

/* FUN_10007820 @ 0x116e7820 (151 bytes, 46 insns) */
void f_116e7820(void) {
  FTRACE(0x116e7820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e7820 push ebp */
  push32((uint32_t)(EBP));
  /* 116e7821 mov ebp, esp */
  EBP = (ESP);
  /* 116e7823 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7827 cmp dword ptr [eax*4 + 0x1170db40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1170db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e782f jne 0x116e78a2 */
  if (!C.zf) goto L_116e78a2;
  /* 116e7831 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 116e7836 push 0x1170af04 */
  push32((uint32_t)(0x1170af04u));
  /* 116e783b push 2 */
  push32((uint32_t)(0x2u));
  /* 116e783d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 116e783f call 0x116e3e20 */
  push32(0x116e7844u); f_116e3e20();
  /* 116e7844 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7847 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e784a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e784e jne 0x116e785a */
  if (!C.zf) goto L_116e785a;
  /* 116e7850 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116e7852 call 0x116e2d90 */
  push32(0x116e7857u); f_116e2d90();
  /* 116e7857 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e785a:;
  /* 116e785a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116e785c call 0x116e7820 */
  push32(0x116e7861u); f_116e7820();
  /* 116e7861 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7864 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7867 cmp dword ptr [ecx*4 + 0x1170db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1170db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e786f jne 0x116e788a */
  if (!C.zf) goto L_116e788a;
  /* 116e7871 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7874 push edx */
  push32((uint32_t)(EDX));
  /* 116e7875 call dword ptr [0x1171232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171232c))), 0x116e787bu);
  /* 116e787b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e787e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7881 mov dword ptr [eax*4 + 0x1170db40], ecx */
  w32((uint32_t)(EAX*4 + 0x1170db40), (ECX));
  /* 116e7888 jmp 0x116e7898 */
  goto L_116e7898;
L_116e788a:;
  /* 116e788a push 2 */
  push32((uint32_t)(0x2u));
  /* 116e788c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e788f push edx */
  push32((uint32_t)(EDX));
  /* 116e7890 call 0x116e48b0 */
  push32(0x116e7895u); f_116e48b0();
  /* 116e7895 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e7898:;
  /* 116e7898 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116e789a call 0x116e78c0 */
  push32(0x116e789fu); f_116e78c0();
  /* 116e789f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e78a2:;
  /* 116e78a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e78a5 mov ecx, dword ptr [eax*4 + 0x1170db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1170db40)));
  /* 116e78ac push ecx */
  push32((uint32_t)(ECX));
  /* 116e78ad call dword ptr [0x1171231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171231c))), 0x116e78b3u);
  /* 116e78b3 mov esp, ebp */
  ESP = (EBP);
  /* 116e78b5 pop ebp */
  EBP = (pop32());
  /* 116e78b6 ret  */
  ESPCHK(0x116e7820u, _esp0);
  ESP += 4; return;
}

/* FUN_100078c0 @ 0x116e78c0 (22 bytes, 8 insns) */
void f_116e78c0(void) {
  FTRACE(0x116e78c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e78c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e78c1 mov ebp, esp */
  EBP = (ESP);
  /* 116e78c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e78c6 mov ecx, dword ptr [eax*4 + 0x1170db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1170db40)));
  /* 116e78cd push ecx */
  push32((uint32_t)(ECX));
  /* 116e78ce call dword ptr [0x11712318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712318))), 0x116e78d4u);
  /* 116e78d4 pop ebp */
  EBP = (pop32());
  /* 116e78d5 ret  */
  ESPCHK(0x116e78c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100078e0 @ 0x116e78e0 (26 bytes, 10 insns) */
void f_116e78e0(void) {
  FTRACE(0x116e78e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e78e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e78e1 mov ebp, esp */
  EBP = (ESP);
  /* 116e78e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e78e6 push eax */
  push32((uint32_t)(EAX));
  /* 116e78e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116e78e9 call dword ptr [0x11712320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712320))), 0x116e78efu);
  /* 116e78ef push 0xff */
  push32((uint32_t)(0xffu));
  /* 116e78f4 call dword ptr [0x1171235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1171235c))), 0x116e78fau);
  /* 116e78fa pop ebp */
  EBP = (pop32());
  /* 116e78fb ret  */
  ESPCHK(0x116e78e0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x116e7900 (446 bytes, 130 insns) */
void f_116e7900(void) {
  FTRACE(0x116e7900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e7900 push ebp */
  push32((uint32_t)(EBP));
  /* 116e7901 mov ebp, esp */
  EBP = (ESP);
  /* 116e7903 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116e7906 call 0x116e3860 */
  push32(0x116e790bu); f_116e3860();
  /* 116e790b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116e790e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e7911 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 116e7914 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7915 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116e7918 push edx */
  push32((uint32_t)(EDX));
  /* 116e7919 call 0x116e7ac0 */
  push32(0x116e791eu); f_116e7ac0();
  /* 116e791e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7921 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116e7924 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7928 je 0x116e7933 */
  if (C.zf) goto L_116e7933;
  /* 116e792a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e792d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7931 jne 0x116e7942 */
  if (!C.zf) goto L_116e7942;
L_116e7933:;
  /* 116e7933 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e7936 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7937 call dword ptr [0x11712310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11712310))), 0x116e793du);
  /* 116e793d jmp 0x116e7aba */
  goto L_116e7aba;
L_116e7942:;
  /* 116e7942 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e7945 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7949 jne 0x116e795f */
  if (!C.zf) goto L_116e795f;
  /* 116e794b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e794e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 116e7955 mov eax, 1 */
  EAX = (0x1u);
  /* 116e795a jmp 0x116e7aba */
  goto L_116e7aba;
L_116e795f:;
  /* 116e795f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e7962 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7966 jne 0x116e7970 */
  if (!C.zf) goto L_116e7970;
  /* 116e7968 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116e796b jmp 0x116e7aba */
  goto L_116e7aba;
L_116e7970:;
  /* 116e7970 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e7973 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116e7976 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e7979 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e797c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 116e797f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 116e7982 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e7985 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e7988 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 116e798b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e798e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7992 jne 0x116e7a97 */
  if (!C.zf) goto L_116e7a97;
  /* 116e7998 mov eax, dword ptr [0x1170dc78] */
  EAX = (r32((uint32_t)(0x1170dc78)));
  /* 116e799d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116e79a0 jmp 0x116e79ab */
  goto L_116e79ab;
L_116e79a2:;
  /* 116e79a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e79a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e79a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_116e79ab:;
  /* 116e79ab mov edx, dword ptr [0x1170dc78] */
  EDX = (r32((uint32_t)(0x1170dc78)));
  /* 116e79b1 add edx, dword ptr [0x1170dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1170dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e79b7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e79ba jge 0x116e79d2 */
  if ((C.sf==C.of)) goto L_116e79d2;
  /* 116e79bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116e79bf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e79c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e79c5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 116e79c8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 116e79d0 jmp 0x116e79a2 */
  goto L_116e79a2;
L_116e79d2:;
  /* 116e79d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e79d5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 116e79d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116e79db mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e79de cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e79e4 jne 0x116e79f5 */
  if (!C.zf) goto L_116e79f5;
  /* 116e79e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e79e9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 116e79f0 jmp 0x116e7a7d */
  goto L_116e7a7d;
L_116e79f5:;
  /* 116e79f5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e79f8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e79fe jne 0x116e7a0c */
  if (!C.zf) goto L_116e7a0c;
  /* 116e7a00 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e7a03 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 116e7a0a jmp 0x116e7a7d */
  goto L_116e7a7d;
L_116e7a0c:;
  /* 116e7a0c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e7a0f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7a15 jne 0x116e7a23 */
  if (!C.zf) goto L_116e7a23;
  /* 116e7a17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e7a1a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 116e7a21 jmp 0x116e7a7d */
  goto L_116e7a7d;
L_116e7a23:;
  /* 116e7a23 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e7a26 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7a2c jne 0x116e7a3a */
  if (!C.zf) goto L_116e7a3a;
  /* 116e7a2e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e7a31 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 116e7a38 jmp 0x116e7a7d */
  goto L_116e7a7d;
L_116e7a3a:;
  /* 116e7a3a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e7a3d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7a43 jne 0x116e7a51 */
  if (!C.zf) goto L_116e7a51;
  /* 116e7a45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e7a48 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 116e7a4f jmp 0x116e7a7d */
  goto L_116e7a7d;
L_116e7a51:;
  /* 116e7a51 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e7a54 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7a5a jne 0x116e7a68 */
  if (!C.zf) goto L_116e7a68;
  /* 116e7a5c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e7a5f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 116e7a66 jmp 0x116e7a7d */
  goto L_116e7a7d;
L_116e7a68:;
  /* 116e7a68 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e7a6b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7a71 jne 0x116e7a7d */
  if (!C.zf) goto L_116e7a7d;
  /* 116e7a73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e7a76 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_116e7a7d:;
  /* 116e7a7d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e7a80 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 116e7a83 push edx */
  push32((uint32_t)(EDX));
  /* 116e7a84 push 8 */
  push32((uint32_t)(0x8u));
  /* 116e7a86 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x116e7a89u);
  /* 116e7a89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7a8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e7a8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116e7a92 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 116e7a95 jmp 0x116e7aae */
  goto L_116e7aae;
L_116e7a97:;
  /* 116e7a97 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e7a9a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 116e7aa1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116e7aa4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116e7aa7 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7aa8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x116e7aabu);
  /* 116e7aab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116e7aae:;
  /* 116e7aae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116e7ab1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116e7ab4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 116e7ab7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_116e7aba:;
  /* 116e7aba mov esp, ebp */
  ESP = (EBP);
  /* 116e7abc pop ebp */
  EBP = (pop32());
  /* 116e7abd ret  */
  ESPCHK(0x116e7900u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ac0 @ 0x116e7ac0 (89 bytes, 35 insns) */
void f_116e7ac0(void) {
  FTRACE(0x116e7ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116e7ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 116e7ac1 mov ebp, esp */
  EBP = (ESP);
  /* 116e7ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 116e7ac4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e7ac7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116e7aca:;
  /* 116e7aca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7acd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116e7acf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7ad2 je 0x116e7af2 */
  if (C.zf) goto L_116e7af2;
  /* 116e7ad4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7ad7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7ada mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116e7add mov ecx, dword ptr [0x1170dc84] */
  ECX = (r32((uint32_t)(0x1170dc84)));
  /* 116e7ae3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e7ae6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e7ae9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7aeb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7aee jae 0x116e7af2 */
  if (!C.cf) goto L_116e7af2;
  /* 116e7af0 jmp 0x116e7aca */
  goto L_116e7aca;
L_116e7af2:;
  /* 116e7af2 mov eax, dword ptr [0x1170dc84] */
  EAX = (r32((uint32_t)(0x1170dc84)));
  /* 116e7af7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116e7afa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116e7afd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116e7aff cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7b02 jae 0x116e7b0e */
  if (!C.cf) goto L_116e7b0e;
  /* 116e7b04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116e7b07 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116e7b09 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116e7b0c je 0x116e7b12 */
  if (C.zf) goto L_116e7b12;
L_116e7b0e:;
  /* 116e7b0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116e7b10 jmp 0x116e7b15 */
  goto L_116e7b15;
L_116e7b12:;
  /* 116e7b12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116e7b15:;
  /* 116e7b15 mov esp, ebp */
  ESP = (EBP);
  /* 116e7b17 pop ebp */
  EBP = (pop32());
  /* 116e7b18 ret  */
  ESPCHK(0x116e7ac0u, _esp0);
  ESP += 4; return;
}

