#include "recomp.h"

/* thunk_FUN_100019e0 @ 0x12ea1005 (5 bytes, 1 insns) */
void f_12ea1005(void) {
  FTRACE(0x12ea1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea1005 jmp 0x12ea19e0 */
  f_12ea19e0(); return;
}

/* OnInit @ 0x12ea100a (5 bytes, 1 insns) */
void f_12ea100a(void) {
  FTRACE(0x12ea100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea100a jmp 0x12ea1a30 */
  f_12ea1a30(); return;
}

/* thunk_FUN_10001530 @ 0x12ea100f (5 bytes, 1 insns) */
void f_12ea100f(void) {
  FTRACE(0x12ea100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea100f jmp 0x12ea1530 */
  f_12ea1530(); return;
}

/* thunk_FUN_100010b0 @ 0x12ea1014 (5 bytes, 1 insns) */
void f_12ea1014(void) {
  FTRACE(0x12ea1014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea1014 jmp 0x12ea10b0 */
  f_12ea10b0(); return;
}

/* thunk_FUN_10001270 @ 0x12ea1019 (5 bytes, 1 insns) */
void f_12ea1019(void) {
  FTRACE(0x12ea1019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea1019 jmp 0x12ea1270 */
  f_12ea1270(); return;
}

/* thunk_FUN_10001630 @ 0x12ea101e (5 bytes, 1 insns) */
void f_12ea101e(void) {
  FTRACE(0x12ea101eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea101e jmp 0x12ea1630 */
  f_12ea1630(); return;
}

/* thunk_FUN_10001110 @ 0x12ea1023 (5 bytes, 1 insns) */
void f_12ea1023(void) {
  FTRACE(0x12ea1023u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea1023 jmp 0x12ea1110 */
  f_12ea1110(); return;
}

/* ProcessScenary @ 0x12ea1028 (5 bytes, 1 insns) */
void f_12ea1028(void) {
  FTRACE(0x12ea1028u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea1028 jmp 0x12ea2050 */
  f_12ea2050(); return;
}

/* thunk_FUN_100017a0 @ 0x12ea102d (5 bytes, 1 insns) */
void f_12ea102d(void) {
  FTRACE(0x12ea102du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea102d jmp 0x12ea17a0 */
  f_12ea17a0(); return;
}

/* thunk_FUN_100011b0 @ 0x12ea1032 (5 bytes, 1 insns) */
void f_12ea1032(void) {
  FTRACE(0x12ea1032u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea1032 jmp 0x12ea11b0 */
  f_12ea11b0(); return;
}

/* thunk_FUN_100018d0 @ 0x12ea1037 (5 bytes, 1 insns) */
void f_12ea1037(void) {
  FTRACE(0x12ea1037u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea1037 jmp 0x12ea18d0 */
  f_12ea18d0(); return;
}

/* thunk_FUN_100013e0 @ 0x12ea103c (5 bytes, 1 insns) */
void f_12ea103c(void) {
  FTRACE(0x12ea103cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea103c jmp 0x12ea13e0 */
  f_12ea13e0(); return;
}

/* thunk_FUN_10001470 @ 0x12ea1046 (5 bytes, 1 insns) */
void f_12ea1046(void) {
  FTRACE(0x12ea1046u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea1046 jmp 0x12ea1470 */
  f_12ea1470(); return;
}

/* FUN_100010b0 @ 0x12ea10b0 (67 bytes, 26 insns) */
void f_12ea10b0(void) {
  FTRACE(0x12ea10b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea10b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea10b1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea10b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea10b6 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea10b7 push esi */
  push32((uint32_t)(ESI));
  /* 12ea10b8 push edi */
  push32((uint32_t)(EDI));
  /* 12ea10b9 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 12ea10bc mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12ea10c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12ea10c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12ea10c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea10cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea10ce cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea10d2 je 0x12ea10d6 */
  if (C.zf) goto L_12ea10d6;
  /* 12ea10d4 jmp 0x12ea10db */
  goto L_12ea10db;
L_12ea10d6:;
  /* 12ea10d6 call 0x12ea100a */
  push32(0x12ea10dbu); f_12ea100a();
L_12ea10db:;
  /* 12ea10db mov eax, 1 */
  EAX = (0x1u);
  /* 12ea10e0 pop edi */
  EDI = (pop32());
  /* 12ea10e1 pop esi */
  ESI = (pop32());
  /* 12ea10e2 pop ebx */
  EBX = (pop32());
  /* 12ea10e3 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea10e6 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea10e8 call 0x12ea29e0 */
  push32(0x12ea10edu); f_12ea29e0();
  /* 12ea10ed mov esp, ebp */
  ESP = (EBP);
  /* 12ea10ef pop ebp */
  EBP = (pop32());
  /* 12ea10f0 ret 0xc */
  ESPCHK(0x12ea10b0u, _esp0);
  ESP += 16; return;
}

/* FUN_10001110 @ 0x12ea1110 (127 bytes, 45 insns) */
void f_12ea1110(void) {
  FTRACE(0x12ea1110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea1110 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea1111 mov ebp, esp */
  EBP = (ESP);
  /* 12ea1113 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea1116 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea1117 push esi */
  push32((uint32_t)(ESI));
  /* 12ea1118 push edi */
  push32((uint32_t)(EDI));
  /* 12ea1119 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 12ea111c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12ea1121 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12ea1126 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12ea1128 mov esi, esp */
  ESI = (ESP);
  /* 12ea112a call dword ptr [0x12ec2488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2488))), 0x12ea1130u);
  /* 12ea1130 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1132 call 0x12ea29e0 */
  push32(0x12ea1137u); f_12ea29e0();
  /* 12ea1137 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea113a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea113d cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1140 jne 0x12ea1153 */
  if (!C.zf) goto L_12ea1153;
  /* 12ea1142 mov esi, esp */
  ESI = (ESP);
  /* 12ea1144 call dword ptr [0x12ec248c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec248c))), 0x12ea114au);
  /* 12ea114a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea114c call 0x12ea29e0 */
  push32(0x12ea1151u); f_12ea29e0();
  /* 12ea1151 jmp 0x12ea1162 */
  goto L_12ea1162;
L_12ea1153:;
  /* 12ea1153 mov esi, esp */
  ESI = (ESP);
  /* 12ea1155 call dword ptr [0x12ec2490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2490))), 0x12ea115bu);
  /* 12ea115b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea115d call 0x12ea29e0 */
  push32(0x12ea1162u); f_12ea29e0();
L_12ea1162:;
  /* 12ea1162 mov esi, esp */
  ESI = (ESP);
  /* 12ea1164 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea1167 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea116a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12ea116d push eax */
  push32((uint32_t)(EAX));
  /* 12ea116e call dword ptr [0x12ec2494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2494))), 0x12ea1174u);
  /* 12ea1174 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1177 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1179 call 0x12ea29e0 */
  push32(0x12ea117eu); f_12ea29e0();
  /* 12ea117e pop edi */
  EDI = (pop32());
  /* 12ea117f pop esi */
  ESI = (pop32());
  /* 12ea1180 pop ebx */
  EBX = (pop32());
  /* 12ea1181 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1184 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1186 call 0x12ea29e0 */
  push32(0x12ea118bu); f_12ea29e0();
  /* 12ea118b mov esp, ebp */
  ESP = (EBP);
  /* 12ea118d pop ebp */
  EBP = (pop32());
  /* 12ea118e ret  */
  ESPCHK(0x12ea1110u, _esp0);
  ESP += 4; return;
}

/* FUN_100011b0 @ 0x12ea11b0 (143 bytes, 45 insns) */
void f_12ea11b0(void) {
  FTRACE(0x12ea11b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea11b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea11b1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea11b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea11b6 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea11b7 push esi */
  push32((uint32_t)(ESI));
  /* 12ea11b8 push edi */
  push32((uint32_t)(EDI));
  /* 12ea11b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12ea11bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12ea11c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12ea11c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12ea11c8 mov esi, esp */
  ESI = (ESP);
  /* 12ea11ca push 0x12eba060 */
  push32((uint32_t)(0x12eba060u));
  /* 12ea11cf push 0x12ebf4a0 */
  push32((uint32_t)(0x12ebf4a0u));
  /* 12ea11d4 call dword ptr [0x12ec2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2480))), 0x12ea11dau);
  /* 12ea11da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea11dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea11df call 0x12ea29e0 */
  push32(0x12ea11e4u); f_12ea29e0();
  /* 12ea11e4 mov esi, esp */
  ESI = (ESP);
  /* 12ea11e6 push 0x12eba058 */
  push32((uint32_t)(0x12eba058u));
  /* 12ea11eb push 0x12ebf4a8 */
  push32((uint32_t)(0x12ebf4a8u));
  /* 12ea11f0 call dword ptr [0x12ec2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2480))), 0x12ea11f6u);
  /* 12ea11f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea11f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea11fb call 0x12ea29e0 */
  push32(0x12ea1200u); f_12ea29e0();
  /* 12ea1200 mov esi, esp */
  ESI = (ESP);
  /* 12ea1202 push 0x12ebf408 */
  push32((uint32_t)(0x12ebf408u));
  /* 12ea1207 call dword ptr [0x12ec2484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2484))), 0x12ea120du);
  /* 12ea120d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1210 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1212 call 0x12ea29e0 */
  push32(0x12ea1217u); f_12ea29e0();
  /* 12ea1217 mov esi, esp */
  ESI = (ESP);
  /* 12ea1219 push 0x12ebf418 */
  push32((uint32_t)(0x12ebf418u));
  /* 12ea121e call dword ptr [0x12ec2484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2484))), 0x12ea1224u);
  /* 12ea1224 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1227 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1229 call 0x12ea29e0 */
  push32(0x12ea122eu); f_12ea29e0();
  /* 12ea122e pop edi */
  EDI = (pop32());
  /* 12ea122f pop esi */
  ESI = (pop32());
  /* 12ea1230 pop ebx */
  EBX = (pop32());
  /* 12ea1231 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1234 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1236 call 0x12ea29e0 */
  push32(0x12ea123bu); f_12ea29e0();
  /* 12ea123b mov esp, ebp */
  ESP = (EBP);
  /* 12ea123d pop ebp */
  EBP = (pop32());
  /* 12ea123e ret  */
  ESPCHK(0x12ea11b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001270 @ 0x12ea1270 (293 bytes, 99 insns) */
void f_12ea1270(void) {
  FTRACE(0x12ea1270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea1270 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea1271 mov ebp, esp */
  EBP = (ESP);
  /* 12ea1273 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea1276 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea1277 push esi */
  push32((uint32_t)(ESI));
  /* 12ea1278 push edi */
  push32((uint32_t)(EDI));
  /* 12ea1279 lea edi, [ebp - 0x74] */
  EDI = ((uint32_t)(EBP + -0x74));
  /* 12ea127c mov ecx, 0x1d */
  ECX = (0x1du);
  /* 12ea1281 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12ea1286 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12ea1288 mov esi, esp */
  ESI = (ESP);
  /* 12ea128a push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea128c push 0x12ebf418 */
  push32((uint32_t)(0x12ebf418u));
  /* 12ea1291 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 12ea1294 push eax */
  push32((uint32_t)(EAX));
  /* 12ea1295 call dword ptr [0x12ec2468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2468))), 0x12ea129bu);
  /* 12ea129b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea129e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea12a0 call 0x12ea29e0 */
  push32(0x12ea12a5u); f_12ea29e0();
  /* 12ea12a5 mov esi, esp */
  ESI = (ESP);
  /* 12ea12a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea12a9 mov cl, byte ptr [ebp + 0xc] */
  CL = (r8((uint32_t)(EBP + 0xc)));
  /* 12ea12ac push ecx */
  push32((uint32_t)(ECX));
  /* 12ea12ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea12b0 push edx */
  push32((uint32_t)(EDX));
  /* 12ea12b1 call dword ptr [0x12ec246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec246c))), 0x12ea12b7u);
  /* 12ea12b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea12ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea12bc call 0x12ea29e0 */
  push32(0x12ea12c1u); f_12ea29e0();
  /* 12ea12c1 mov esi, esp */
  ESI = (ESP);
  /* 12ea12c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea12c5 push 0x12ebf408 */
  push32((uint32_t)(0x12ebf408u));
  /* 12ea12ca mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 12ea12cd push eax */
  push32((uint32_t)(EAX));
  /* 12ea12ce call dword ptr [0x12ec2468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2468))), 0x12ea12d4u);
  /* 12ea12d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea12d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea12d9 call 0x12ea29e0 */
  push32(0x12ea12deu); f_12ea29e0();
  /* 12ea12de mov esi, esp */
  ESI = (ESP);
  /* 12ea12e0 push 0x12ebf408 */
  push32((uint32_t)(0x12ebf408u));
  /* 12ea12e5 call dword ptr [0x12ec2470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2470))), 0x12ea12ebu);
  /* 12ea12eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea12ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea12f0 call 0x12ea29e0 */
  push32(0x12ea12f5u); f_12ea29e0();
  /* 12ea12f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea12f8 mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 12ea12ff jmp 0x12ea130a */
  goto L_12ea130a;
L_12ea1301:;
  /* 12ea1301 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12ea1304 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1307 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
L_12ea130a:;
  /* 12ea130a mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12ea130d cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1310 jge 0x12ea1367 */
  if ((C.sf==C.of)) goto L_12ea1367;
  /* 12ea1312 mov esi, esp */
  ESI = (ESP);
  /* 12ea1314 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 12ea1317 push eax */
  push32((uint32_t)(EAX));
  /* 12ea1318 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12ea131b push ecx */
  push32((uint32_t)(ECX));
  /* 12ea131c push 0x12ebf408 */
  push32((uint32_t)(0x12ebf408u));
  /* 12ea1321 call dword ptr [0x12ec2474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2474))), 0x12ea1327u);
  /* 12ea1327 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea132a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea132c call 0x12ea29e0 */
  push32(0x12ea1331u); f_12ea29e0();
  /* 12ea1331 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea1334 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ea133a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea133c je 0x12ea1349 */
  if (C.zf) goto L_12ea1349;
  /* 12ea133e mov al, byte ptr [ebp - 0x28] */
  AL = (r8((uint32_t)(EBP + -0x28)));
  /* 12ea1341 add al, byte ptr [ebp + 0x10] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EBP + 0x10))),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12ea1344 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 12ea1347 jmp 0x12ea134f */
  goto L_12ea134f;
L_12ea1349:;
  /* 12ea1349 mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12ea134c mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
L_12ea134f:;
  /* 12ea134f mov esi, esp */
  ESI = (ESP);
  /* 12ea1351 lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 12ea1354 push edx */
  push32((uint32_t)(EDX));
  /* 12ea1355 call dword ptr [0x12ec2478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2478))), 0x12ea135bu);
  /* 12ea135b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea135e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1360 call 0x12ea29e0 */
  push32(0x12ea1365u); f_12ea29e0();
  /* 12ea1365 jmp 0x12ea1301 */
  goto L_12ea1301;
L_12ea1367:;
  /* 12ea1367 mov esi, esp */
  ESI = (ESP);
  /* 12ea1369 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea136b push 0x12ebf418 */
  push32((uint32_t)(0x12ebf418u));
  /* 12ea1370 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 12ea1373 push eax */
  push32((uint32_t)(EAX));
  /* 12ea1374 call dword ptr [0x12ec247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec247c))), 0x12ea137au);
  /* 12ea137a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea137d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea137f call 0x12ea29e0 */
  push32(0x12ea1384u); f_12ea29e0();
  /* 12ea1384 pop edi */
  EDI = (pop32());
  /* 12ea1385 pop esi */
  ESI = (pop32());
  /* 12ea1386 pop ebx */
  EBX = (pop32());
  /* 12ea1387 add esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea138a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea138c call 0x12ea29e0 */
  push32(0x12ea1391u); f_12ea29e0();
  /* 12ea1391 mov esp, ebp */
  ESP = (EBP);
  /* 12ea1393 pop ebp */
  EBP = (pop32());
  /* 12ea1394 ret  */
  ESPCHK(0x12ea1270u, _esp0);
  ESP += 4; return;
}

/* FUN_100013e0 @ 0x12ea13e0 (107 bytes, 40 insns) */
void f_12ea13e0(void) {
  FTRACE(0x12ea13e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea13e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea13e1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea13e3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea13e6 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea13e7 push esi */
  push32((uint32_t)(ESI));
  /* 12ea13e8 push edi */
  push32((uint32_t)(EDI));
  /* 12ea13e9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12ea13ec mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12ea13f1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12ea13f6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12ea13f8 mov esi, esp */
  ESI = (ESP);
  /* 12ea13fa push 0x4b0 */
  push32((uint32_t)(0x4b0u));
  /* 12ea13ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea1402 push eax */
  push32((uint32_t)(EAX));
  /* 12ea1403 push 0x12ebf4e0 */
  push32((uint32_t)(0x12ebf4e0u));
  /* 12ea1408 call dword ptr [0x12ec2464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2464))), 0x12ea140eu);
  /* 12ea140e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1411 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1413 call 0x12ea29e0 */
  push32(0x12ea1418u); f_12ea29e0();
  /* 12ea1418 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea141d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea141f je 0x12ea143a */
  if (C.zf) goto L_12ea143a;
  /* 12ea1421 mov cl, byte ptr [ebp + 0x14] */
  CL = (r8((uint32_t)(EBP + 0x14)));
  /* 12ea1424 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea1425 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea1428 push edx */
  push32((uint32_t)(EDX));
  /* 12ea1429 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea142c push eax */
  push32((uint32_t)(EAX));
  /* 12ea142d push 0x12ebf4e0 */
  push32((uint32_t)(0x12ebf4e0u));
  /* 12ea1432 call 0x12ea1019 */
  push32(0x12ea1437u); f_12ea1019();
  /* 12ea1437 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea143a:;
  /* 12ea143a pop edi */
  EDI = (pop32());
  /* 12ea143b pop esi */
  ESI = (pop32());
  /* 12ea143c pop ebx */
  EBX = (pop32());
  /* 12ea143d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1440 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1442 call 0x12ea29e0 */
  push32(0x12ea1447u); f_12ea29e0();
  /* 12ea1447 mov esp, ebp */
  ESP = (EBP);
  /* 12ea1449 pop ebp */
  EBP = (pop32());
  /* 12ea144a ret  */
  ESPCHK(0x12ea13e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001470 @ 0x12ea1470 (154 bytes, 56 insns) */
void f_12ea1470(void) {
  FTRACE(0x12ea1470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea1470 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea1471 mov ebp, esp */
  EBP = (ESP);
  /* 12ea1473 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea1476 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea1477 push esi */
  push32((uint32_t)(ESI));
  /* 12ea1478 push edi */
  push32((uint32_t)(EDI));
  /* 12ea1479 lea edi, [ebp - 0x74] */
  EDI = ((uint32_t)(EBP + -0x74));
  /* 12ea147c mov ecx, 0x1d */
  ECX = (0x1du);
  /* 12ea1481 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12ea1486 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12ea1488 mov esi, esp */
  ESI = (ESP);
  /* 12ea148a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea148d push eax */
  push32((uint32_t)(EAX));
  /* 12ea148e call dword ptr [0x12ec2470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2470))), 0x12ea1494u);
  /* 12ea1494 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1497 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1499 call 0x12ea29e0 */
  push32(0x12ea149eu); f_12ea29e0();
  /* 12ea149e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea14a1 mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 12ea14a8 jmp 0x12ea14b3 */
  goto L_12ea14b3;
L_12ea14aa:;
  /* 12ea14aa mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12ea14ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea14b0 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
L_12ea14b3:;
  /* 12ea14b3 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12ea14b6 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea14b9 jge 0x12ea14f9 */
  if ((C.sf==C.of)) goto L_12ea14f9;
  /* 12ea14bb mov esi, esp */
  ESI = (ESP);
  /* 12ea14bd lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 12ea14c0 push eax */
  push32((uint32_t)(EAX));
  /* 12ea14c1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12ea14c4 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea14c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea14c8 push edx */
  push32((uint32_t)(EDX));
  /* 12ea14c9 call dword ptr [0x12ec2474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2474))), 0x12ea14cfu);
  /* 12ea14cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea14d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea14d4 call 0x12ea29e0 */
  push32(0x12ea14d9u); f_12ea29e0();
  /* 12ea14d9 mov byte ptr [ebp - 0x28], 0 */
  w8((uint32_t)(EBP + -0x28), (0x0u));
  /* 12ea14dd mov byte ptr [ebp - 0x27], 0 */
  w8((uint32_t)(EBP + -0x27), (0x0u));
  /* 12ea14e1 mov esi, esp */
  ESI = (ESP);
  /* 12ea14e3 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 12ea14e6 push eax */
  push32((uint32_t)(EAX));
  /* 12ea14e7 call dword ptr [0x12ec2478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2478))), 0x12ea14edu);
  /* 12ea14ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea14f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea14f2 call 0x12ea29e0 */
  push32(0x12ea14f7u); f_12ea29e0();
  /* 12ea14f7 jmp 0x12ea14aa */
  goto L_12ea14aa;
L_12ea14f9:;
  /* 12ea14f9 pop edi */
  EDI = (pop32());
  /* 12ea14fa pop esi */
  ESI = (pop32());
  /* 12ea14fb pop ebx */
  EBX = (pop32());
  /* 12ea14fc add esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea14ff cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1501 call 0x12ea29e0 */
  push32(0x12ea1506u); f_12ea29e0();
  /* 12ea1506 mov esp, ebp */
  ESP = (EBP);
  /* 12ea1508 pop ebp */
  EBP = (pop32());
  /* 12ea1509 ret  */
  ESPCHK(0x12ea1470u, _esp0);
  ESP += 4; return;
}

/* FUN_10001530 @ 0x12ea1530 (198 bytes, 69 insns) */
void f_12ea1530(void) {
  FTRACE(0x12ea1530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea1530 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea1531 mov ebp, esp */
  EBP = (ESP);
  /* 12ea1533 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea1536 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea1537 push esi */
  push32((uint32_t)(ESI));
  /* 12ea1538 push edi */
  push32((uint32_t)(EDI));
  /* 12ea1539 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 12ea153c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12ea1541 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12ea1546 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12ea1548 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ea154f jmp 0x12ea155a */
  goto L_12ea155a;
L_12ea1551:;
  /* 12ea1551 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea1554 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1557 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ea155a:;
  /* 12ea155a cmp dword ptr [ebp - 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea155e jge 0x12ea15e5 */
  if ((C.sf==C.of)) goto L_12ea15e5;
  /* 12ea1564 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea1566 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea156a setne cl */
  CL = ((!C.zf) ? 1u : 0u);
  /* 12ea156d mov esi, esp */
  ESI = (ESP);
  /* 12ea156f push ecx */
  push32((uint32_t)(ECX));
  /* 12ea1570 push 0x12ebf418 */
  push32((uint32_t)(0x12ebf418u));
  /* 12ea1575 mov dl, byte ptr [ebp - 4] */
  DL = (r8((uint32_t)(EBP + -0x4)));
  /* 12ea1578 push edx */
  push32((uint32_t)(EDX));
  /* 12ea1579 call dword ptr [0x12ec2468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2468))), 0x12ea157fu);
  /* 12ea157f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1582 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1584 call 0x12ea29e0 */
  push32(0x12ea1589u); f_12ea29e0();
  /* 12ea1589 mov esi, esp */
  ESI = (ESP);
  /* 12ea158b push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea158d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea1590 push eax */
  push32((uint32_t)(EAX));
  /* 12ea1591 mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 12ea1594 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea1595 call dword ptr [0x12ec247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec247c))), 0x12ea159bu);
  /* 12ea159b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea159e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea15a0 call 0x12ea29e0 */
  push32(0x12ea15a5u); f_12ea29e0();
  /* 12ea15a5 mov esi, esp */
  ESI = (ESP);
  /* 12ea15a7 mov dl, byte ptr [ebp + 0x10] */
  DL = (r8((uint32_t)(EBP + 0x10)));
  /* 12ea15aa push edx */
  push32((uint32_t)(EDX));
  /* 12ea15ab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea15ae push eax */
  push32((uint32_t)(EAX));
  /* 12ea15af mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 12ea15b2 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea15b3 call dword ptr [0x12ec2468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2468))), 0x12ea15b9u);
  /* 12ea15b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea15bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea15be call 0x12ea29e0 */
  push32(0x12ea15c3u); f_12ea29e0();
  /* 12ea15c3 mov esi, esp */
  ESI = (ESP);
  /* 12ea15c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea15c7 push 0x12ebf418 */
  push32((uint32_t)(0x12ebf418u));
  /* 12ea15cc mov dl, byte ptr [ebp - 4] */
  DL = (r8((uint32_t)(EBP + -0x4)));
  /* 12ea15cf push edx */
  push32((uint32_t)(EDX));
  /* 12ea15d0 call dword ptr [0x12ec247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec247c))), 0x12ea15d6u);
  /* 12ea15d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea15d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea15db call 0x12ea29e0 */
  push32(0x12ea15e0u); f_12ea29e0();
  /* 12ea15e0 jmp 0x12ea1551 */
  goto L_12ea1551;
L_12ea15e5:;
  /* 12ea15e5 pop edi */
  EDI = (pop32());
  /* 12ea15e6 pop esi */
  ESI = (pop32());
  /* 12ea15e7 pop ebx */
  EBX = (pop32());
  /* 12ea15e8 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea15eb cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea15ed call 0x12ea29e0 */
  push32(0x12ea15f2u); f_12ea29e0();
  /* 12ea15f2 mov esp, ebp */
  ESP = (EBP);
  /* 12ea15f4 pop ebp */
  EBP = (pop32());
  /* 12ea15f5 ret  */
  ESPCHK(0x12ea1530u, _esp0);
  ESP += 4; return;
}

/* FUN_10001630 @ 0x12ea1630 (119 bytes, 44 insns) */
void f_12ea1630(void) {
  FTRACE(0x12ea1630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea1630 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea1631 mov ebp, esp */
  EBP = (ESP);
  /* 12ea1633 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea1636 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea1637 push esi */
  push32((uint32_t)(ESI));
  /* 12ea1638 push edi */
  push32((uint32_t)(EDI));
  /* 12ea1639 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 12ea163c mov ecx, 0x12 */
  ECX = (0x12u);
  /* 12ea1641 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12ea1646 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12ea1648 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ea164f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12ea1656 jmp 0x12ea1661 */
  goto L_12ea1661;
L_12ea1658:;
  /* 12ea1658 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea165b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea165e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12ea1661:;
  /* 12ea1661 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea1664 cmp ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1667 jge 0x12ea1693 */
  if ((C.sf==C.of)) goto L_12ea1693;
  /* 12ea1669 mov esi, esp */
  ESI = (ESP);
  /* 12ea166b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea166e push edx */
  push32((uint32_t)(EDX));
  /* 12ea166f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea1672 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea1675 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12ea1678 push edx */
  push32((uint32_t)(EDX));
  /* 12ea1679 call dword ptr [0x12ec2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2460))), 0x12ea167fu);
  /* 12ea167f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1682 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1684 call 0x12ea29e0 */
  push32(0x12ea1689u); f_12ea29e0();
  /* 12ea1689 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea168c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea168e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ea1691 jmp 0x12ea1658 */
  goto L_12ea1658;
L_12ea1693:;
  /* 12ea1693 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea1696 pop edi */
  EDI = (pop32());
  /* 12ea1697 pop esi */
  ESI = (pop32());
  /* 12ea1698 pop ebx */
  EBX = (pop32());
  /* 12ea1699 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea169c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea169e call 0x12ea29e0 */
  push32(0x12ea16a3u); f_12ea29e0();
  /* 12ea16a3 mov esp, ebp */
  ESP = (EBP);
  /* 12ea16a5 pop ebp */
  EBP = (pop32());
  /* 12ea16a6 ret  */
  ESPCHK(0x12ea1630u, _esp0);
  ESP += 4; return;
}

/* FUN_100016d0 @ 0x12ea16d0 (160 bytes, 56 insns) */
void f_12ea16d0(void) {
  FTRACE(0x12ea16d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea16d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea16d1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea16d3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea16d6 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea16d7 push esi */
  push32((uint32_t)(ESI));
  /* 12ea16d8 push edi */
  push32((uint32_t)(EDI));
  /* 12ea16d9 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 12ea16dc mov ecx, 0x12 */
  ECX = (0x12u);
  /* 12ea16e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12ea16e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12ea16e8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ea16ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12ea16f6 jmp 0x12ea1701 */
  goto L_12ea1701;
L_12ea16f8:;
  /* 12ea16f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea16fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea16fe mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12ea1701:;
  /* 12ea1701 cmp dword ptr [ebp - 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1705 jge 0x12ea175c */
  if ((C.sf==C.of)) goto L_12ea175c;
  /* 12ea1707 mov esi, esp */
  ESI = (ESP);
  /* 12ea1709 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12ea170c push ecx */
  push32((uint32_t)(ECX));
  /* 12ea170d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea1710 lea eax, [edx*8 + 0x12ebf468] */
  EAX = ((uint32_t)(EDX*8 + 0x12ebf468));
  /* 12ea1717 push eax */
  push32((uint32_t)(EAX));
  /* 12ea1718 call dword ptr [0x12ec245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec245c))), 0x12ea171eu);
  /* 12ea171e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1721 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1723 call 0x12ea29e0 */
  push32(0x12ea1728u); f_12ea29e0();
  /* 12ea1728 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea172a jle 0x12ea175a */
  if ((C.zf||C.sf!=C.of)) goto L_12ea175a;
  /* 12ea172c mov esi, esp */
  ESI = (ESP);
  /* 12ea172e mov cl, byte ptr [ebp + 0xc] */
  CL = (r8((uint32_t)(EBP + 0xc)));
  /* 12ea1731 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea1732 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea1735 lea eax, [edx*8 + 0x12ebf468] */
  EAX = ((uint32_t)(EDX*8 + 0x12ebf468));
  /* 12ea173c push eax */
  push32((uint32_t)(EAX));
  /* 12ea173d call dword ptr [0x12ec245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec245c))), 0x12ea1743u);
  /* 12ea1743 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1746 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1748 call 0x12ea29e0 */
  push32(0x12ea174du); f_12ea29e0();
  /* 12ea174d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea174f jne 0x12ea175a */
  if (!C.zf) goto L_12ea175a;
  /* 12ea1751 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea1754 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1757 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12ea175a:;
  /* 12ea175a jmp 0x12ea16f8 */
  goto L_12ea16f8;
L_12ea175c:;
  /* 12ea175c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea175f pop edi */
  EDI = (pop32());
  /* 12ea1760 pop esi */
  ESI = (pop32());
  /* 12ea1761 pop ebx */
  EBX = (pop32());
  /* 12ea1762 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1765 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1767 call 0x12ea29e0 */
  push32(0x12ea176cu); f_12ea29e0();
  /* 12ea176c mov esp, ebp */
  ESP = (EBP);
  /* 12ea176e pop ebp */
  EBP = (pop32());
  /* 12ea176f ret  */
  ESPCHK(0x12ea16d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100017a0 @ 0x12ea17a0 (181 bytes, 54 insns) */
void f_12ea17a0(void) {
  FTRACE(0x12ea17a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea17a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea17a1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea17a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea17a6 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea17a7 push esi */
  push32((uint32_t)(ESI));
  /* 12ea17a8 push edi */
  push32((uint32_t)(EDI));
  /* 12ea17a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12ea17ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12ea17b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12ea17b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12ea17b8 mov esi, esp */
  ESI = (ESP);
  /* 12ea17ba push 0x12eba088 */
  push32((uint32_t)(0x12eba088u));
  /* 12ea17bf push 0x12ebf468 */
  push32((uint32_t)(0x12ebf468u));
  /* 12ea17c4 call dword ptr [0x12ec2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2458))), 0x12ea17cau);
  /* 12ea17ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea17cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea17cf call 0x12ea29e0 */
  push32(0x12ea17d4u); f_12ea29e0();
  /* 12ea17d4 mov esi, esp */
  ESI = (ESP);
  /* 12ea17d6 push 0x12eba080 */
  push32((uint32_t)(0x12eba080u));
  /* 12ea17db push 0x12ebf470 */
  push32((uint32_t)(0x12ebf470u));
  /* 12ea17e0 call dword ptr [0x12ec2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2458))), 0x12ea17e6u);
  /* 12ea17e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea17e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea17eb call 0x12ea29e0 */
  push32(0x12ea17f0u); f_12ea29e0();
  /* 12ea17f0 mov esi, esp */
  ESI = (ESP);
  /* 12ea17f2 push 0x12eba078 */
  push32((uint32_t)(0x12eba078u));
  /* 12ea17f7 push 0x12ebf478 */
  push32((uint32_t)(0x12ebf478u));
  /* 12ea17fc call dword ptr [0x12ec2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2458))), 0x12ea1802u);
  /* 12ea1802 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1805 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1807 call 0x12ea29e0 */
  push32(0x12ea180cu); f_12ea29e0();
  /* 12ea180c mov esi, esp */
  ESI = (ESP);
  /* 12ea180e push 0x12eba070 */
  push32((uint32_t)(0x12eba070u));
  /* 12ea1813 push 0x12ebf480 */
  push32((uint32_t)(0x12ebf480u));
  /* 12ea1818 call dword ptr [0x12ec2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2458))), 0x12ea181eu);
  /* 12ea181e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1821 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1823 call 0x12ea29e0 */
  push32(0x12ea1828u); f_12ea29e0();
  /* 12ea1828 mov esi, esp */
  ESI = (ESP);
  /* 12ea182a push 0x12eba068 */
  push32((uint32_t)(0x12eba068u));
  /* 12ea182f push 0x12ebf488 */
  push32((uint32_t)(0x12ebf488u));
  /* 12ea1834 call dword ptr [0x12ec2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2458))), 0x12ea183au);
  /* 12ea183a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea183d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea183f call 0x12ea29e0 */
  push32(0x12ea1844u); f_12ea29e0();
  /* 12ea1844 pop edi */
  EDI = (pop32());
  /* 12ea1845 pop esi */
  ESI = (pop32());
  /* 12ea1846 pop ebx */
  EBX = (pop32());
  /* 12ea1847 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea184a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea184c call 0x12ea29e0 */
  push32(0x12ea1851u); f_12ea29e0();
  /* 12ea1851 mov esp, ebp */
  ESP = (EBP);
  /* 12ea1853 pop ebp */
  EBP = (pop32());
  /* 12ea1854 ret  */
  ESPCHK(0x12ea17a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001890 @ 0x12ea1890 (51 bytes, 21 insns) */
void f_12ea1890(void) {
  FTRACE(0x12ea1890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea1890 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea1891 mov ebp, esp */
  EBP = (ESP);
  /* 12ea1893 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea1896 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea1897 push esi */
  push32((uint32_t)(ESI));
  /* 12ea1898 push edi */
  push32((uint32_t)(EDI));
  /* 12ea1899 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12ea189c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12ea18a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12ea18a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12ea18a8 call 0x12ea1032 */
  push32(0x12ea18adu); f_12ea1032();
  /* 12ea18ad call 0x12ea102d */
  push32(0x12ea18b2u); f_12ea102d();
  /* 12ea18b2 pop edi */
  EDI = (pop32());
  /* 12ea18b3 pop esi */
  ESI = (pop32());
  /* 12ea18b4 pop ebx */
  EBX = (pop32());
  /* 12ea18b5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea18b8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea18ba call 0x12ea29e0 */
  push32(0x12ea18bfu); f_12ea29e0();
  /* 12ea18bf mov esp, ebp */
  ESP = (EBP);
  /* 12ea18c1 pop ebp */
  EBP = (pop32());
  /* 12ea18c2 ret  */
  ESPCHK(0x12ea1890u, _esp0);
  ESP += 4; return;
}

/* FUN_100018d0 @ 0x12ea18d0 (108 bytes, 41 insns) */
void f_12ea18d0(void) {
  FTRACE(0x12ea18d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea18d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea18d1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea18d3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea18d6 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea18d7 push esi */
  push32((uint32_t)(ESI));
  /* 12ea18d8 push edi */
  push32((uint32_t)(EDI));
  /* 12ea18d9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12ea18dc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12ea18e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12ea18e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12ea18e8 mov esi, esp */
  ESI = (ESP);
  /* 12ea18ea push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea18ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea18ef push eax */
  push32((uint32_t)(EAX));
  /* 12ea18f0 push 3 */
  push32((uint32_t)(0x3u));
  /* 12ea18f2 call dword ptr [0x12ec247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec247c))), 0x12ea18f8u);
  /* 12ea18f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea18fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea18fd call 0x12ea29e0 */
  push32(0x12ea1902u); f_12ea29e0();
  /* 12ea1902 mov esi, esp */
  ESI = (ESP);
  /* 12ea1904 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea1906 push 3 */
  push32((uint32_t)(0x3u));
  /* 12ea1908 call dword ptr [0x12ec2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2454))), 0x12ea190eu);
  /* 12ea190e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1911 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1913 call 0x12ea29e0 */
  push32(0x12ea1918u); f_12ea29e0();
  /* 12ea1918 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea191a push 0x12ebf490 */
  push32((uint32_t)(0x12ebf490u));
  /* 12ea191f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea1922 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea1923 call 0x12ea100f */
  push32(0x12ea1928u); f_12ea100f();
  /* 12ea1928 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea192b pop edi */
  EDI = (pop32());
  /* 12ea192c pop esi */
  ESI = (pop32());
  /* 12ea192d pop ebx */
  EBX = (pop32());
  /* 12ea192e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1931 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1933 call 0x12ea29e0 */
  push32(0x12ea1938u); f_12ea29e0();
  /* 12ea1938 mov esp, ebp */
  ESP = (EBP);
  /* 12ea193a pop ebp */
  EBP = (pop32());
  /* 12ea193b ret  */
  ESPCHK(0x12ea18d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001960 @ 0x12ea1960 (96 bytes, 37 insns) */
void f_12ea1960(void) {
  FTRACE(0x12ea1960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea1960 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea1961 mov ebp, esp */
  EBP = (ESP);
  /* 12ea1963 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea1966 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea1967 push esi */
  push32((uint32_t)(ESI));
  /* 12ea1968 push edi */
  push32((uint32_t)(EDI));
  /* 12ea1969 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 12ea196c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12ea1971 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12ea1976 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12ea1978 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ea197f jmp 0x12ea198a */
  goto L_12ea198a;
L_12ea1981:;
  /* 12ea1981 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea1984 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1987 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ea198a:;
  /* 12ea198a cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea198e jge 0x12ea19ad */
  if ((C.sf==C.of)) goto L_12ea19ad;
  /* 12ea1990 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea1993 lea edx, [ecx*8 + 0x12ebf448] */
  EDX = ((uint32_t)(ECX*8 + 0x12ebf448));
  /* 12ea199a push edx */
  push32((uint32_t)(EDX));
  /* 12ea199b call 0x12ea1005 */
  push32(0x12ea19a0u); f_12ea1005();
  /* 12ea19a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea19a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea19a5 jle 0x12ea19ab */
  if ((C.zf||C.sf!=C.of)) goto L_12ea19ab;
  /* 12ea19a7 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 12ea19a9 jmp 0x12ea19af */
  goto L_12ea19af;
L_12ea19ab:;
  /* 12ea19ab jmp 0x12ea1981 */
  goto L_12ea1981;
L_12ea19ad:;
  /* 12ea19ad mov al, 1 */
  AL = (0x1u);
L_12ea19af:;
  /* 12ea19af pop edi */
  EDI = (pop32());
  /* 12ea19b0 pop esi */
  ESI = (pop32());
  /* 12ea19b1 pop ebx */
  EBX = (pop32());
  /* 12ea19b2 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea19b5 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea19b7 call 0x12ea29e0 */
  push32(0x12ea19bcu); f_12ea29e0();
  /* 12ea19bc mov esp, ebp */
  ESP = (EBP);
  /* 12ea19be pop ebp */
  EBP = (pop32());
  /* 12ea19bf ret  */
  ESPCHK(0x12ea1960u, _esp0);
  ESP += 4; return;
}

/* FUN_100019e0 @ 0x12ea19e0 (63 bytes, 26 insns) */
void f_12ea19e0(void) {
  FTRACE(0x12ea19e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea19e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea19e1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea19e3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea19e6 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea19e7 push esi */
  push32((uint32_t)(ESI));
  /* 12ea19e8 push edi */
  push32((uint32_t)(EDI));
  /* 12ea19e9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12ea19ec mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12ea19f1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12ea19f6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12ea19f8 mov esi, esp */
  ESI = (ESP);
  /* 12ea19fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea19fd push eax */
  push32((uint32_t)(EAX));
  /* 12ea19fe call dword ptr [0x12ec2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2450))), 0x12ea1a04u);
  /* 12ea1a04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1a07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1a09 call 0x12ea29e0 */
  push32(0x12ea1a0eu); f_12ea29e0();
  /* 12ea1a0e pop edi */
  EDI = (pop32());
  /* 12ea1a0f pop esi */
  ESI = (pop32());
  /* 12ea1a10 pop ebx */
  EBX = (pop32());
  /* 12ea1a11 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1a14 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1a16 call 0x12ea29e0 */
  push32(0x12ea1a1bu); f_12ea29e0();
  /* 12ea1a1b mov esp, ebp */
  ESP = (EBP);
  /* 12ea1a1d pop ebp */
  EBP = (pop32());
  /* 12ea1a1e ret  */
  ESPCHK(0x12ea19e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a30 @ 0x12ea1a30 (1251 bytes, 331 insns) */
void f_12ea1a30(void) {
  FTRACE(0x12ea1a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea1a30 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea1a31 mov ebp, esp */
  EBP = (ESP);
  /* 12ea1a33 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea1a36 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea1a37 push esi */
  push32((uint32_t)(ESI));
  /* 12ea1a38 push edi */
  push32((uint32_t)(EDI));
  /* 12ea1a39 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 12ea1a3c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12ea1a41 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12ea1a46 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12ea1a48 mov esi, esp */
  ESI = (ESP);
  /* 12ea1a4a push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea1a4c push 0x12ebda40 */
  push32((uint32_t)(0x12ebda40u));
  /* 12ea1a51 call dword ptr [0x12ec242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec242c))), 0x12ea1a57u);
  /* 12ea1a57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1a5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1a5c call 0x12ea29e0 */
  push32(0x12ea1a61u); f_12ea29e0();
  /* 12ea1a61 mov esi, esp */
  ESI = (ESP);
  /* 12ea1a63 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea1a65 push 0x12ebf460 */
  push32((uint32_t)(0x12ebf460u));
  /* 12ea1a6a call dword ptr [0x12ec242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec242c))), 0x12ea1a70u);
  /* 12ea1a70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1a73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1a75 call 0x12ea29e0 */
  push32(0x12ea1a7au); f_12ea29e0();
  /* 12ea1a7a call 0x12ea1032 */
  push32(0x12ea1a7fu); f_12ea1032();
  /* 12ea1a7f mov esi, esp */
  ESI = (ESP);
  /* 12ea1a81 push 0x12eba260 */
  push32((uint32_t)(0x12eba260u));
  /* 12ea1a86 push 0x12ebf4b8 */
  push32((uint32_t)(0x12ebf4b8u));
  /* 12ea1a8b call dword ptr [0x12ec2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2480))), 0x12ea1a91u);
  /* 12ea1a91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1a94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1a96 call 0x12ea29e0 */
  push32(0x12ea1a9bu); f_12ea29e0();
  /* 12ea1a9b mov esi, esp */
  ESI = (ESP);
  /* 12ea1a9d push 0x12eba254 */
  push32((uint32_t)(0x12eba254u));
  /* 12ea1aa2 push 0x12ebf4c0 */
  push32((uint32_t)(0x12ebf4c0u));
  /* 12ea1aa7 call dword ptr [0x12ec2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2480))), 0x12ea1aadu);
  /* 12ea1aad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1ab0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1ab2 call 0x12ea29e0 */
  push32(0x12ea1ab7u); f_12ea29e0();
  /* 12ea1ab7 mov eax, 0x12ebf4c8 */
  EAX = (0x12ebf4c8u);
  /* 12ea1abc mov esi, esp */
  ESI = (ESP);
  /* 12ea1abe push eax */
  push32((uint32_t)(EAX));
  /* 12ea1abf call dword ptr [0x12ec2484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2484))), 0x12ea1ac5u);
  /* 12ea1ac5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1ac8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1aca call 0x12ea29e0 */
  push32(0x12ea1acfu); f_12ea29e0();
  /* 12ea1acf mov esi, esp */
  ESI = (ESP);
  /* 12ea1ad1 push 0x12eba24c */
  push32((uint32_t)(0x12eba24cu));
  /* 12ea1ad6 push 0x12ebf440 */
  push32((uint32_t)(0x12ebf440u));
  /* 12ea1adb call dword ptr [0x12ec2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2480))), 0x12ea1ae1u);
  /* 12ea1ae1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1ae4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1ae6 call 0x12ea29e0 */
  push32(0x12ea1aebu); f_12ea29e0();
  /* 12ea1aeb mov esi, esp */
  ESI = (ESP);
  /* 12ea1aed push 0x12eba244 */
  push32((uint32_t)(0x12eba244u));
  /* 12ea1af2 push 0x12ebf400 */
  push32((uint32_t)(0x12ebf400u));
  /* 12ea1af7 call dword ptr [0x12ec2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2480))), 0x12ea1afdu);
  /* 12ea1afd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1b00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1b02 call 0x12ea29e0 */
  push32(0x12ea1b07u); f_12ea29e0();
  /* 12ea1b07 mov esi, esp */
  ESI = (ESP);
  /* 12ea1b09 push 0x12eba238 */
  push32((uint32_t)(0x12eba238u));
  /* 12ea1b0e push 0x12ebf438 */
  push32((uint32_t)(0x12ebf438u));
  /* 12ea1b13 call dword ptr [0x12ec2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2480))), 0x12ea1b19u);
  /* 12ea1b19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1b1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1b1e call 0x12ea29e0 */
  push32(0x12ea1b23u); f_12ea29e0();
  /* 12ea1b23 mov esi, esp */
  ESI = (ESP);
  /* 12ea1b25 push 0x12eba22c */
  push32((uint32_t)(0x12eba22cu));
  /* 12ea1b2a push 0x12ebf430 */
  push32((uint32_t)(0x12ebf430u));
  /* 12ea1b2f call dword ptr [0x12ec2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2480))), 0x12ea1b35u);
  /* 12ea1b35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1b38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1b3a call 0x12ea29e0 */
  push32(0x12ea1b3fu); f_12ea29e0();
  /* 12ea1b3f mov esi, esp */
  ESI = (ESP);
  /* 12ea1b41 push 0x12eba224 */
  push32((uint32_t)(0x12eba224u));
  /* 12ea1b46 push 0x12ebf448 */
  push32((uint32_t)(0x12ebf448u));
  /* 12ea1b4b call dword ptr [0x12ec2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2480))), 0x12ea1b51u);
  /* 12ea1b51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1b54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1b56 call 0x12ea29e0 */
  push32(0x12ea1b5bu); f_12ea29e0();
  /* 12ea1b5b mov esi, esp */
  ESI = (ESP);
  /* 12ea1b5d push 0x12eba21c */
  push32((uint32_t)(0x12eba21cu));
  /* 12ea1b62 push 0x12ebf450 */
  push32((uint32_t)(0x12ebf450u));
  /* 12ea1b67 call dword ptr [0x12ec2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2480))), 0x12ea1b6du);
  /* 12ea1b6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1b70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1b72 call 0x12ea29e0 */
  push32(0x12ea1b77u); f_12ea29e0();
  /* 12ea1b77 mov esi, esp */
  ESI = (ESP);
  /* 12ea1b79 push 0x12eba214 */
  push32((uint32_t)(0x12eba214u));
  /* 12ea1b7e push 0x12ebf458 */
  push32((uint32_t)(0x12ebf458u));
  /* 12ea1b83 call dword ptr [0x12ec2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2480))), 0x12ea1b89u);
  /* 12ea1b89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1b8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1b8e call 0x12ea29e0 */
  push32(0x12ea1b93u); f_12ea29e0();
  /* 12ea1b93 mov esi, esp */
  ESI = (ESP);
  /* 12ea1b95 push 0x12eba204 */
  push32((uint32_t)(0x12eba204u));
  /* 12ea1b9a push 0x12ebf420 */
  push32((uint32_t)(0x12ebf420u));
  /* 12ea1b9f call dword ptr [0x12ec2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2480))), 0x12ea1ba5u);
  /* 12ea1ba5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1ba8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1baa call 0x12ea29e0 */
  push32(0x12ea1bafu); f_12ea29e0();
  /* 12ea1baf mov esi, esp */
  ESI = (ESP);
  /* 12ea1bb1 push 0x12eba1f4 */
  push32((uint32_t)(0x12eba1f4u));
  /* 12ea1bb6 push 0x12ebf428 */
  push32((uint32_t)(0x12ebf428u));
  /* 12ea1bbb call dword ptr [0x12ec2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2480))), 0x12ea1bc1u);
  /* 12ea1bc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1bc4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1bc6 call 0x12ea29e0 */
  push32(0x12ea1bcbu); f_12ea29e0();
  /* 12ea1bcb mov esi, esp */
  ESI = (ESP);
  /* 12ea1bcd push 0x12ebf490 */
  push32((uint32_t)(0x12ebf490u));
  /* 12ea1bd2 call dword ptr [0x12ec2484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2484))), 0x12ea1bd8u);
  /* 12ea1bd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1bdb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1bdd call 0x12ea29e0 */
  push32(0x12ea1be2u); f_12ea29e0();
  /* 12ea1be2 mov esi, esp */
  ESI = (ESP);
  /* 12ea1be4 push 0x12eba1e8 */
  push32((uint32_t)(0x12eba1e8u));
  /* 12ea1be9 push 0x12ebf558 */
  push32((uint32_t)(0x12ebf558u));
  /* 12ea1bee call dword ptr [0x12ec2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2480))), 0x12ea1bf4u);
  /* 12ea1bf4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1bf7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1bf9 call 0x12ea29e0 */
  push32(0x12ea1bfeu); f_12ea29e0();
  /* 12ea1bfe mov esi, esp */
  ESI = (ESP);
  /* 12ea1c00 push 0x12eba1d8 */
  push32((uint32_t)(0x12eba1d8u));
  /* 12ea1c05 push 0x12ebf530 */
  push32((uint32_t)(0x12ebf530u));
  /* 12ea1c0a call dword ptr [0x12ec2430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2430))), 0x12ea1c10u);
  /* 12ea1c10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1c13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1c15 call 0x12ea29e0 */
  push32(0x12ea1c1au); f_12ea29e0();
  /* 12ea1c1a mov esi, esp */
  ESI = (ESP);
  /* 12ea1c1c push 0x12eba1c8 */
  push32((uint32_t)(0x12eba1c8u));
  /* 12ea1c21 push 0x12ebf538 */
  push32((uint32_t)(0x12ebf538u));
  /* 12ea1c26 call dword ptr [0x12ec2430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2430))), 0x12ea1c2cu);
  /* 12ea1c2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1c2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1c31 call 0x12ea29e0 */
  push32(0x12ea1c36u); f_12ea29e0();
  /* 12ea1c36 mov esi, esp */
  ESI = (ESP);
  /* 12ea1c38 push 0x12eba1b8 */
  push32((uint32_t)(0x12eba1b8u));
  /* 12ea1c3d push 0x12ebf540 */
  push32((uint32_t)(0x12ebf540u));
  /* 12ea1c42 call dword ptr [0x12ec2430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2430))), 0x12ea1c48u);
  /* 12ea1c48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1c4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1c4d call 0x12ea29e0 */
  push32(0x12ea1c52u); f_12ea29e0();
  /* 12ea1c52 mov esi, esp */
  ESI = (ESP);
  /* 12ea1c54 push 0x12eba1a8 */
  push32((uint32_t)(0x12eba1a8u));
  /* 12ea1c59 push 0x12ebf4e8 */
  push32((uint32_t)(0x12ebf4e8u));
  /* 12ea1c5e call dword ptr [0x12ec2430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2430))), 0x12ea1c64u);
  /* 12ea1c64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1c67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1c69 call 0x12ea29e0 */
  push32(0x12ea1c6eu); f_12ea29e0();
  /* 12ea1c6e mov esi, esp */
  ESI = (ESP);
  /* 12ea1c70 push 0x12eba198 */
  push32((uint32_t)(0x12eba198u));
  /* 12ea1c75 push 0x12ebf4f0 */
  push32((uint32_t)(0x12ebf4f0u));
  /* 12ea1c7a call dword ptr [0x12ec2430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2430))), 0x12ea1c80u);
  /* 12ea1c80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1c83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1c85 call 0x12ea29e0 */
  push32(0x12ea1c8au); f_12ea29e0();
  /* 12ea1c8a mov esi, esp */
  ESI = (ESP);
  /* 12ea1c8c push 0x12eba188 */
  push32((uint32_t)(0x12eba188u));
  /* 12ea1c91 push 0x12ebf4f8 */
  push32((uint32_t)(0x12ebf4f8u));
  /* 12ea1c96 call dword ptr [0x12ec2430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2430))), 0x12ea1c9cu);
  /* 12ea1c9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1c9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1ca1 call 0x12ea29e0 */
  push32(0x12ea1ca6u); f_12ea29e0();
  /* 12ea1ca6 mov esi, esp */
  ESI = (ESP);
  /* 12ea1ca8 push 0x12eba178 */
  push32((uint32_t)(0x12eba178u));
  /* 12ea1cad push 0x12ebf500 */
  push32((uint32_t)(0x12ebf500u));
  /* 12ea1cb2 call dword ptr [0x12ec2430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2430))), 0x12ea1cb8u);
  /* 12ea1cb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1cbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1cbd call 0x12ea29e0 */
  push32(0x12ea1cc2u); f_12ea29e0();
  /* 12ea1cc2 mov esi, esp */
  ESI = (ESP);
  /* 12ea1cc4 push 0x12eba168 */
  push32((uint32_t)(0x12eba168u));
  /* 12ea1cc9 push 0x12ebf508 */
  push32((uint32_t)(0x12ebf508u));
  /* 12ea1cce call dword ptr [0x12ec2430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2430))), 0x12ea1cd4u);
  /* 12ea1cd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1cd7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1cd9 call 0x12ea29e0 */
  push32(0x12ea1cdeu); f_12ea29e0();
  /* 12ea1cde mov esi, esp */
  ESI = (ESP);
  /* 12ea1ce0 push 0x12eba158 */
  push32((uint32_t)(0x12eba158u));
  /* 12ea1ce5 push 0x12ebf510 */
  push32((uint32_t)(0x12ebf510u));
  /* 12ea1cea call dword ptr [0x12ec2430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2430))), 0x12ea1cf0u);
  /* 12ea1cf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1cf3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1cf5 call 0x12ea29e0 */
  push32(0x12ea1cfau); f_12ea29e0();
  /* 12ea1cfa mov esi, esp */
  ESI = (ESP);
  /* 12ea1cfc push 0x12eba148 */
  push32((uint32_t)(0x12eba148u));
  /* 12ea1d01 push 0x12ebf518 */
  push32((uint32_t)(0x12ebf518u));
  /* 12ea1d06 call dword ptr [0x12ec2430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2430))), 0x12ea1d0cu);
  /* 12ea1d0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1d0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1d11 call 0x12ea29e0 */
  push32(0x12ea1d16u); f_12ea29e0();
  /* 12ea1d16 mov esi, esp */
  ESI = (ESP);
  /* 12ea1d18 push 0x12eba13c */
  push32((uint32_t)(0x12eba13cu));
  /* 12ea1d1d push 0x12ebf498 */
  push32((uint32_t)(0x12ebf498u));
  /* 12ea1d22 call dword ptr [0x12ec2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2458))), 0x12ea1d28u);
  /* 12ea1d28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1d2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1d2d call 0x12ea29e0 */
  push32(0x12ea1d32u); f_12ea29e0();
  /* 12ea1d32 mov esi, esp */
  ESI = (ESP);
  /* 12ea1d34 push 0x12eba130 */
  push32((uint32_t)(0x12eba130u));
  /* 12ea1d39 push 0x12ebf4d8 */
  push32((uint32_t)(0x12ebf4d8u));
  /* 12ea1d3e call dword ptr [0x12ec2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2458))), 0x12ea1d44u);
  /* 12ea1d44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1d47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1d49 call 0x12ea29e0 */
  push32(0x12ea1d4eu); f_12ea29e0();
  /* 12ea1d4e mov esi, esp */
  ESI = (ESP);
  /* 12ea1d50 push 0x12eba11c */
  push32((uint32_t)(0x12eba11cu));
  /* 12ea1d55 push 0x12ebf4d0 */
  push32((uint32_t)(0x12ebf4d0u));
  /* 12ea1d5a call dword ptr [0x12ec2434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2434))), 0x12ea1d60u);
  /* 12ea1d60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1d63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1d65 call 0x12ea29e0 */
  push32(0x12ea1d6au); f_12ea29e0();
  /* 12ea1d6a mov esi, esp */
  ESI = (ESP);
  /* 12ea1d6c push 0x12eba114 */
  push32((uint32_t)(0x12eba114u));
  /* 12ea1d71 push 0x12ebf548 */
  push32((uint32_t)(0x12ebf548u));
  /* 12ea1d76 call dword ptr [0x12ec2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2438))), 0x12ea1d7cu);
  /* 12ea1d7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1d7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1d81 call 0x12ea29e0 */
  push32(0x12ea1d86u); f_12ea29e0();
  /* 12ea1d86 mov esi, esp */
  ESI = (ESP);
  /* 12ea1d88 push 0x12eba104 */
  push32((uint32_t)(0x12eba104u));
  /* 12ea1d8d push 0x12ebf520 */
  push32((uint32_t)(0x12ebf520u));
  /* 12ea1d92 call dword ptr [0x12ec243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec243c))), 0x12ea1d98u);
  /* 12ea1d98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1d9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1d9d call 0x12ea29e0 */
  push32(0x12ea1da2u); f_12ea29e0();
  /* 12ea1da2 mov esi, esp */
  ESI = (ESP);
  /* 12ea1da4 push 0x12eba0f8 */
  push32((uint32_t)(0x12eba0f8u));
  /* 12ea1da9 push 0x12ebf410 */
  push32((uint32_t)(0x12ebf410u));
  /* 12ea1dae call dword ptr [0x12ec243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec243c))), 0x12ea1db4u);
  /* 12ea1db4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1db7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1db9 call 0x12ea29e0 */
  push32(0x12ea1dbeu); f_12ea29e0();
  /* 12ea1dbe mov esi, esp */
  ESI = (ESP);
  /* 12ea1dc0 push 0x12eba0ec */
  push32((uint32_t)(0x12eba0ecu));
  /* 12ea1dc5 push 0x12ebf4b0 */
  push32((uint32_t)(0x12ebf4b0u));
  /* 12ea1dca call dword ptr [0x12ec243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec243c))), 0x12ea1dd0u);
  /* 12ea1dd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1dd3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1dd5 call 0x12ea29e0 */
  push32(0x12ea1ddau); f_12ea29e0();
  /* 12ea1dda mov esi, esp */
  ESI = (ESP);
  /* 12ea1ddc push 0x12eba0e0 */
  push32((uint32_t)(0x12eba0e0u));
  /* 12ea1de1 push 0x12ebf528 */
  push32((uint32_t)(0x12ebf528u));
  /* 12ea1de6 call dword ptr [0x12ec243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec243c))), 0x12ea1decu);
  /* 12ea1dec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1def cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1df1 call 0x12ea29e0 */
  push32(0x12ea1df6u); f_12ea29e0();
  /* 12ea1df6 mov esi, esp */
  ESI = (ESP);
  /* 12ea1df8 push 0x12eba0d4 */
  push32((uint32_t)(0x12eba0d4u));
  /* 12ea1dfd push 0x12ebf550 */
  push32((uint32_t)(0x12ebf550u));
  /* 12ea1e02 call dword ptr [0x12ec243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec243c))), 0x12ea1e08u);
  /* 12ea1e08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1e0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1e0d call 0x12ea29e0 */
  push32(0x12ea1e12u); f_12ea29e0();
  /* 12ea1e12 mov esi, esp */
  ESI = (ESP);
  /* 12ea1e14 push 0x12eba0c0 */
  push32((uint32_t)(0x12eba0c0u));
  /* 12ea1e19 push 3 */
  push32((uint32_t)(0x3u));
  /* 12ea1e1b call dword ptr [0x12ec2440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2440))), 0x12ea1e21u);
  /* 12ea1e21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1e24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1e26 call 0x12ea29e0 */
  push32(0x12ea1e2bu); f_12ea29e0();
  /* 12ea1e2b mov esi, esp */
  ESI = (ESP);
  /* 12ea1e2d push 8 */
  push32((uint32_t)(0x8u));
  /* 12ea1e2f push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea1e31 call dword ptr [0x12ec2444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2444))), 0x12ea1e37u);
  /* 12ea1e37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1e3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1e3c call 0x12ea29e0 */
  push32(0x12ea1e41u); f_12ea29e0();
  /* 12ea1e41 mov esi, esp */
  ESI = (ESP);
  /* 12ea1e43 push 0x12eba0b4 */
  push32((uint32_t)(0x12eba0b4u));
  /* 12ea1e48 push 0x12eba060 */
  push32((uint32_t)(0x12eba060u));
  /* 12ea1e4d call dword ptr [0x12ec2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2448))), 0x12ea1e53u);
  /* 12ea1e53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1e56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1e58 call 0x12ea29e0 */
  push32(0x12ea1e5du); f_12ea29e0();
  /* 12ea1e5d mov esi, esp */
  ESI = (ESP);
  /* 12ea1e5f push 0x12eba0a8 */
  push32((uint32_t)(0x12eba0a8u));
  /* 12ea1e64 push 0x12eba060 */
  push32((uint32_t)(0x12eba060u));
  /* 12ea1e69 call dword ptr [0x12ec2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2448))), 0x12ea1e6fu);
  /* 12ea1e6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1e72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1e74 call 0x12ea29e0 */
  push32(0x12ea1e79u); f_12ea29e0();
  /* 12ea1e79 mov esi, esp */
  ESI = (ESP);
  /* 12ea1e7b push 0x12eba09c */
  push32((uint32_t)(0x12eba09cu));
  /* 12ea1e80 push 0x12eba060 */
  push32((uint32_t)(0x12eba060u));
  /* 12ea1e85 call dword ptr [0x12ec2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2448))), 0x12ea1e8bu);
  /* 12ea1e8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1e8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1e90 call 0x12ea29e0 */
  push32(0x12ea1e95u); f_12ea29e0();
  /* 12ea1e95 mov esi, esp */
  ESI = (ESP);
  /* 12ea1e97 push 0x12eba090 */
  push32((uint32_t)(0x12eba090u));
  /* 12ea1e9c push 0x12eba060 */
  push32((uint32_t)(0x12eba060u));
  /* 12ea1ea1 call dword ptr [0x12ec2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2448))), 0x12ea1ea7u);
  /* 12ea1ea7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1eaa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1eac call 0x12ea29e0 */
  push32(0x12ea1eb1u); f_12ea29e0();
  /* 12ea1eb1 mov esi, esp */
  ESI = (ESP);
  /* 12ea1eb3 call dword ptr [0x12ec2488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2488))), 0x12ea1eb9u);
  /* 12ea1eb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1ebb call 0x12ea29e0 */
  push32(0x12ea1ec0u); f_12ea29e0();
  /* 12ea1ec0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1ec3 jne 0x12ea1f02 */
  if (!C.zf) goto L_12ea1f02;
  /* 12ea1ec5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ea1ecc jmp 0x12ea1ed7 */
  goto L_12ea1ed7;
L_12ea1ece:;
  /* 12ea1ece mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea1ed1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1ed4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12ea1ed7:;
  /* 12ea1ed7 cmp dword ptr [ebp - 4], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1edb jge 0x12ea1f02 */
  if ((C.sf==C.of)) goto L_12ea1f02;
  /* 12ea1edd mov esi, esp */
  ESI = (ESP);
  /* 12ea1edf mov dl, byte ptr [ebp - 4] */
  DL = (r8((uint32_t)(EBP + -0x4)));
  /* 12ea1ee2 push edx */
  push32((uint32_t)(EDX));
  /* 12ea1ee3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea1ee5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea1ee8 lea ecx, [eax*8 + 0x12ebf4e8] */
  ECX = ((uint32_t)(EAX*8 + 0x12ebf4e8));
  /* 12ea1eef push ecx */
  push32((uint32_t)(ECX));
  /* 12ea1ef0 call dword ptr [0x12ec244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec244c))), 0x12ea1ef6u);
  /* 12ea1ef6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1ef9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1efb call 0x12ea29e0 */
  push32(0x12ea1f00u); f_12ea29e0();
  /* 12ea1f00 jmp 0x12ea1ece */
  goto L_12ea1ece;
L_12ea1f02:;
  /* 12ea1f02 pop edi */
  EDI = (pop32());
  /* 12ea1f03 pop esi */
  ESI = (pop32());
  /* 12ea1f04 pop ebx */
  EBX = (pop32());
  /* 12ea1f05 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea1f08 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea1f0a call 0x12ea29e0 */
  push32(0x12ea1f0fu); f_12ea29e0();
  /* 12ea1f0f mov esp, ebp */
  ESP = (EBP);
  /* 12ea1f11 pop ebp */
  EBP = (pop32());
  /* 12ea1f12 ret  */
  ESPCHK(0x12ea1a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002050 @ 0x12ea2050 (1785 bytes, 514 insns) */
void f_12ea2050(void) {
  FTRACE(0x12ea2050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea2050 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea2051 mov ebp, esp */
  EBP = (ESP);
  /* 12ea2053 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea2056 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea2057 push esi */
  push32((uint32_t)(ESI));
  /* 12ea2058 push edi */
  push32((uint32_t)(EDI));
  /* 12ea2059 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 12ea205c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12ea2061 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12ea2066 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12ea2068 mov esi, esp */
  ESI = (ESP);
  /* 12ea206a push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 12ea206c call dword ptr [0x12ec2410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2410))), 0x12ea2072u);
  /* 12ea2072 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2075 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2077 call 0x12ea29e0 */
  push32(0x12ea207cu); f_12ea29e0();
  /* 12ea207c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea2081 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea2083 je 0x12ea20b7 */
  if (C.zf) goto L_12ea20b7;
  /* 12ea2085 mov esi, esp */
  ESI = (ESP);
  /* 12ea2087 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea2089 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 12ea208b call dword ptr [0x12ec2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2414))), 0x12ea2091u);
  /* 12ea2091 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2094 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2096 call 0x12ea29e0 */
  push32(0x12ea209bu); f_12ea29e0();
  /* 12ea209b mov esi, esp */
  ESI = (ESP);
  /* 12ea209d push 0x12ebf558 */
  push32((uint32_t)(0x12ebf558u));
  /* 12ea20a2 call dword ptr [0x12ec2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2450))), 0x12ea20a8u);
  /* 12ea20a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea20ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea20ad call 0x12ea29e0 */
  push32(0x12ea20b2u); f_12ea29e0();
  /* 12ea20b2 mov dword ptr [0x12ebf460], eax */
  w32((uint32_t)(0x12ebf460), (EAX));
L_12ea20b7:;
  /* 12ea20b7 mov esi, esp */
  ESI = (ESP);
  /* 12ea20b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea20bb call dword ptr [0x12ec2410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2410))), 0x12ea20c1u);
  /* 12ea20c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea20c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea20c6 call 0x12ea29e0 */
  push32(0x12ea20cbu); f_12ea29e0();
  /* 12ea20cb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea20d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea20d2 je 0x12ea2104 */
  if (C.zf) goto L_12ea2104;
  /* 12ea20d4 push 0x12ebf490 */
  push32((uint32_t)(0x12ebf490u));
  /* 12ea20d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12ea20db push 0x12ebf530 */
  push32((uint32_t)(0x12ebf530u));
  /* 12ea20e0 call 0x12ea101e */
  push32(0x12ea20e5u); f_12ea101e();
  /* 12ea20e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea20e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea20ea jg 0x12ea2121 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ea2121;
  /* 12ea20ec push 0x12ebf4a0 */
  push32((uint32_t)(0x12ebf4a0u));
  /* 12ea20f1 push 3 */
  push32((uint32_t)(0x3u));
  /* 12ea20f3 push 0x12ebf530 */
  push32((uint32_t)(0x12ebf530u));
  /* 12ea20f8 call 0x12ea101e */
  push32(0x12ea20fdu); f_12ea101e();
  /* 12ea20fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2100 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea2102 jg 0x12ea2121 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ea2121;
L_12ea2104:;
  /* 12ea2104 mov esi, esp */
  ESI = (ESP);
  /* 12ea2106 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea2108 call dword ptr [0x12ec2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2418))), 0x12ea210eu);
  /* 12ea210e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2113 call 0x12ea29e0 */
  push32(0x12ea2118u); f_12ea29e0();
  /* 12ea2118 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea211d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea211f je 0x12ea2188 */
  if (C.zf) goto L_12ea2188;
L_12ea2121:;
  /* 12ea2121 mov esi, esp */
  ESI = (ESP);
  /* 12ea2123 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea2125 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea2127 call dword ptr [0x12ec2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2414))), 0x12ea212du);
  /* 12ea212d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2130 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2132 call 0x12ea29e0 */
  push32(0x12ea2137u); f_12ea29e0();
  /* 12ea2137 mov esi, esp */
  ESI = (ESP);
  /* 12ea2139 call dword ptr [0x12ec2488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2488))), 0x12ea213fu);
  /* 12ea213f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2141 call 0x12ea29e0 */
  push32(0x12ea2146u); f_12ea29e0();
  /* 12ea2146 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2149 jne 0x12ea217b */
  if (!C.zf) goto L_12ea217b;
  /* 12ea214b mov esi, esp */
  ESI = (ESP);
  /* 12ea214d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12ea214f push 0x12ebf410 */
  push32((uint32_t)(0x12ebf410u));
  /* 12ea2154 call dword ptr [0x12ec241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec241c))), 0x12ea215au);
  /* 12ea215a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea215d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea215f call 0x12ea29e0 */
  push32(0x12ea2164u); f_12ea29e0();
  /* 12ea2164 mov esi, esp */
  ESI = (ESP);
  /* 12ea2166 push 0x12ebf498 */
  push32((uint32_t)(0x12ebf498u));
  /* 12ea216b call dword ptr [0x12ec2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2420))), 0x12ea2171u);
  /* 12ea2171 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2174 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2176 call 0x12ea29e0 */
  push32(0x12ea217bu); f_12ea29e0();
L_12ea217b:;
  /* 12ea217b push 0x12ebf440 */
  push32((uint32_t)(0x12ebf440u));
  /* 12ea2180 call 0x12ea1037 */
  push32(0x12ea2185u); f_12ea1037();
  /* 12ea2185 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea2188:;
  /* 12ea2188 mov esi, esp */
  ESI = (ESP);
  /* 12ea218a push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea218c call dword ptr [0x12ec2410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2410))), 0x12ea2192u);
  /* 12ea2192 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2195 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2197 call 0x12ea29e0 */
  push32(0x12ea219cu); f_12ea29e0();
  /* 12ea219c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea21a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea21a3 je 0x12ea2294 */
  if (C.zf) goto L_12ea2294;
  /* 12ea21a9 push 0x12ebf4a0 */
  push32((uint32_t)(0x12ebf4a0u));
  /* 12ea21ae push 7 */
  push32((uint32_t)(0x7u));
  /* 12ea21b0 push 0x12ebf4e8 */
  push32((uint32_t)(0x12ebf4e8u));
  /* 12ea21b5 call 0x12ea101e */
  push32(0x12ea21bau); f_12ea101e();
  /* 12ea21ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea21bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea21bf jg 0x12ea2201 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ea2201;
  /* 12ea21c1 mov esi, esp */
  ESI = (ESP);
  /* 12ea21c3 push 0xa */
  push32((uint32_t)(0xau));
  /* 12ea21c5 call dword ptr [0x12ec2410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2410))), 0x12ea21cbu);
  /* 12ea21cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea21ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea21d0 call 0x12ea29e0 */
  push32(0x12ea21d5u); f_12ea29e0();
  /* 12ea21d5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea21da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea21dc je 0x12ea2201 */
  if (C.zf) goto L_12ea2201;
  /* 12ea21de mov esi, esp */
  ESI = (ESP);
  /* 12ea21e0 push 0x12ebf558 */
  push32((uint32_t)(0x12ebf558u));
  /* 12ea21e5 call dword ptr [0x12ec2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2450))), 0x12ea21ebu);
  /* 12ea21eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea21ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea21f0 call 0x12ea29e0 */
  push32(0x12ea21f5u); f_12ea29e0();
  /* 12ea21f5 cmp dword ptr [0x12ebf460], eax */
  { uint32_t _a=(r32((uint32_t)(0x12ebf460))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea21fb je 0x12ea2294 */
  if (C.zf) goto L_12ea2294;
L_12ea2201:;
  /* 12ea2201 mov esi, esp */
  ESI = (ESP);
  /* 12ea2203 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea2205 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea2207 call dword ptr [0x12ec2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2414))), 0x12ea220du);
  /* 12ea220d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2210 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2212 call 0x12ea29e0 */
  push32(0x12ea2217u); f_12ea29e0();
  /* 12ea2217 mov esi, esp */
  ESI = (ESP);
  /* 12ea2219 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea221b push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea221d call dword ptr [0x12ec2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2414))), 0x12ea2223u);
  /* 12ea2223 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2226 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2228 call 0x12ea29e0 */
  push32(0x12ea222du); f_12ea29e0();
  /* 12ea222d mov esi, esp */
  ESI = (ESP);
  /* 12ea222f push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea2231 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12ea2233 call dword ptr [0x12ec2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2414))), 0x12ea2239u);
  /* 12ea2239 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea223c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea223e call 0x12ea29e0 */
  push32(0x12ea2243u); f_12ea29e0();
  /* 12ea2243 mov esi, esp */
  ESI = (ESP);
  /* 12ea2245 call dword ptr [0x12ec2488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2488))), 0x12ea224bu);
  /* 12ea224b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea224d call 0x12ea29e0 */
  push32(0x12ea2252u); f_12ea29e0();
  /* 12ea2252 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2255 jne 0x12ea2287 */
  if (!C.zf) goto L_12ea2287;
  /* 12ea2257 mov esi, esp */
  ESI = (ESP);
  /* 12ea2259 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12ea225b push 0x12ebf528 */
  push32((uint32_t)(0x12ebf528u));
  /* 12ea2260 call dword ptr [0x12ec241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec241c))), 0x12ea2266u);
  /* 12ea2266 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2269 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea226b call 0x12ea29e0 */
  push32(0x12ea2270u); f_12ea29e0();
  /* 12ea2270 mov esi, esp */
  ESI = (ESP);
  /* 12ea2272 push 0x12ebf4d8 */
  push32((uint32_t)(0x12ebf4d8u));
  /* 12ea2277 call dword ptr [0x12ec2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2420))), 0x12ea227du);
  /* 12ea227d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2280 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2282 call 0x12ea29e0 */
  push32(0x12ea2287u); f_12ea29e0();
L_12ea2287:;
  /* 12ea2287 push 0x12ebf400 */
  push32((uint32_t)(0x12ebf400u));
  /* 12ea228c call 0x12ea1037 */
  push32(0x12ea2291u); f_12ea1037();
  /* 12ea2291 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea2294:;
  /* 12ea2294 mov esi, esp */
  ESI = (ESP);
  /* 12ea2296 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea2298 call dword ptr [0x12ec2410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2410))), 0x12ea229eu);
  /* 12ea229e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea22a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea22a3 call 0x12ea29e0 */
  push32(0x12ea22a8u); f_12ea29e0();
  /* 12ea22a8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea22ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea22af je 0x12ea2330 */
  if (C.zf) goto L_12ea2330;
  /* 12ea22b1 push 0x12ebf490 */
  push32((uint32_t)(0x12ebf490u));
  /* 12ea22b6 push 7 */
  push32((uint32_t)(0x7u));
  /* 12ea22b8 push 0x12ebf4e8 */
  push32((uint32_t)(0x12ebf4e8u));
  /* 12ea22bd call 0x12ea101e */
  push32(0x12ea22c2u); f_12ea101e();
  /* 12ea22c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea22c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea22c7 jle 0x12ea2330 */
  if ((C.zf||C.sf!=C.of)) goto L_12ea2330;
  /* 12ea22c9 mov esi, esp */
  ESI = (ESP);
  /* 12ea22cb push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea22cd push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea22cf call dword ptr [0x12ec2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2414))), 0x12ea22d5u);
  /* 12ea22d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea22d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea22da call 0x12ea29e0 */
  push32(0x12ea22dfu); f_12ea29e0();
  /* 12ea22df mov esi, esp */
  ESI = (ESP);
  /* 12ea22e1 call dword ptr [0x12ec2488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2488))), 0x12ea22e7u);
  /* 12ea22e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea22e9 call 0x12ea29e0 */
  push32(0x12ea22eeu); f_12ea29e0();
  /* 12ea22ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea22f1 jne 0x12ea2323 */
  if (!C.zf) goto L_12ea2323;
  /* 12ea22f3 mov esi, esp */
  ESI = (ESP);
  /* 12ea22f5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12ea22f7 push 0x12ebf4b0 */
  push32((uint32_t)(0x12ebf4b0u));
  /* 12ea22fc call dword ptr [0x12ec241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec241c))), 0x12ea2302u);
  /* 12ea2302 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2305 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2307 call 0x12ea29e0 */
  push32(0x12ea230cu); f_12ea29e0();
  /* 12ea230c mov esi, esp */
  ESI = (ESP);
  /* 12ea230e push 0x12ebf4d8 */
  push32((uint32_t)(0x12ebf4d8u));
  /* 12ea2313 call dword ptr [0x12ec2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2420))), 0x12ea2319u);
  /* 12ea2319 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea231c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea231e call 0x12ea29e0 */
  push32(0x12ea2323u); f_12ea29e0();
L_12ea2323:;
  /* 12ea2323 push 0x12ebf420 */
  push32((uint32_t)(0x12ebf420u));
  /* 12ea2328 call 0x12ea1037 */
  push32(0x12ea232du); f_12ea1037();
  /* 12ea232d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea2330:;
  /* 12ea2330 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ea2337 jmp 0x12ea2342 */
  goto L_12ea2342;
L_12ea2339:;
  /* 12ea2339 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea233c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea233f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ea2342:;
  /* 12ea2342 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2346 jge 0x12ea2428 */
  if ((C.sf==C.of)) goto L_12ea2428;
  /* 12ea234c mov esi, esp */
  ESI = (ESP);
  /* 12ea234e push 0x4b0 */
  push32((uint32_t)(0x4b0u));
  /* 12ea2353 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea2356 lea edx, [ecx*8 + 0x12ebf448] */
  EDX = ((uint32_t)(ECX*8 + 0x12ebf448));
  /* 12ea235d push edx */
  push32((uint32_t)(EDX));
  /* 12ea235e push 0x12ebf560 */
  push32((uint32_t)(0x12ebf560u));
  /* 12ea2363 call dword ptr [0x12ec2464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2464))), 0x12ea2369u);
  /* 12ea2369 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea236c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea236e call 0x12ea29e0 */
  push32(0x12ea2373u); f_12ea29e0();
  /* 12ea2373 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea2378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea237a je 0x12ea2423 */
  if (C.zf) goto L_12ea2423;
  /* 12ea2380 mov esi, esp */
  ESI = (ESP);
  /* 12ea2382 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea2384 push 0x12ebf560 */
  push32((uint32_t)(0x12ebf560u));
  /* 12ea2389 call dword ptr [0x12ec245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec245c))), 0x12ea238fu);
  /* 12ea238f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2392 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2394 call 0x12ea29e0 */
  push32(0x12ea2399u); f_12ea29e0();
  /* 12ea2399 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea239b jg 0x12ea23bd */
  if ((!C.zf&&C.sf==C.of)) goto L_12ea23bd;
  /* 12ea239d mov esi, esp */
  ESI = (ESP);
  /* 12ea239f push 0x12ebf490 */
  push32((uint32_t)(0x12ebf490u));
  /* 12ea23a4 push 0x12ebf560 */
  push32((uint32_t)(0x12ebf560u));
  /* 12ea23a9 call dword ptr [0x12ec2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2460))), 0x12ea23afu);
  /* 12ea23af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea23b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea23b4 call 0x12ea29e0 */
  push32(0x12ea23b9u); f_12ea29e0();
  /* 12ea23b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea23bb jle 0x12ea2423 */
  if ((C.zf||C.sf!=C.of)) goto L_12ea2423;
L_12ea23bd:;
  /* 12ea23bd mov esi, esp */
  ESI = (ESP);
  /* 12ea23bf call dword ptr [0x12ec2488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2488))), 0x12ea23c5u);
  /* 12ea23c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea23c7 call 0x12ea29e0 */
  push32(0x12ea23ccu); f_12ea29e0();
  /* 12ea23cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea23cf jne 0x12ea2401 */
  if (!C.zf) goto L_12ea2401;
  /* 12ea23d1 mov esi, esp */
  ESI = (ESP);
  /* 12ea23d3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12ea23d5 push 0x12ebf520 */
  push32((uint32_t)(0x12ebf520u));
  /* 12ea23da call dword ptr [0x12ec241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec241c))), 0x12ea23e0u);
  /* 12ea23e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea23e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea23e5 call 0x12ea29e0 */
  push32(0x12ea23eau); f_12ea29e0();
  /* 12ea23ea mov esi, esp */
  ESI = (ESP);
  /* 12ea23ec push 0x12ebf560 */
  push32((uint32_t)(0x12ebf560u));
  /* 12ea23f1 call dword ptr [0x12ec2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2420))), 0x12ea23f7u);
  /* 12ea23f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea23fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea23fc call 0x12ea29e0 */
  push32(0x12ea2401u); f_12ea29e0();
L_12ea2401:;
  /* 12ea2401 mov esi, esp */
  ESI = (ESP);
  /* 12ea2403 push 0x12ebf490 */
  push32((uint32_t)(0x12ebf490u));
  /* 12ea2408 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea240b lea ecx, [eax*8 + 0x12ebf448] */
  ECX = ((uint32_t)(EAX*8 + 0x12ebf448));
  /* 12ea2412 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea2413 call dword ptr [0x12ec2424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2424))), 0x12ea2419u);
  /* 12ea2419 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea241c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea241e call 0x12ea29e0 */
  push32(0x12ea2423u); f_12ea29e0();
L_12ea2423:;
  /* 12ea2423 jmp 0x12ea2339 */
  goto L_12ea2339;
L_12ea2428:;
  /* 12ea2428 mov esi, esp */
  ESI = (ESP);
  /* 12ea242a push 0xa */
  push32((uint32_t)(0xau));
  /* 12ea242c call dword ptr [0x12ec2410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2410))), 0x12ea2432u);
  /* 12ea2432 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2435 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2437 call 0x12ea29e0 */
  push32(0x12ea243cu); f_12ea29e0();
  /* 12ea243c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea2441 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea2443 je 0x12ea253d */
  if (C.zf) goto L_12ea253d;
  /* 12ea2449 mov esi, esp */
  ESI = (ESP);
  /* 12ea244b push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea244d push 0x12ebf498 */
  push32((uint32_t)(0x12ebf498u));
  /* 12ea2452 call dword ptr [0x12ec245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec245c))), 0x12ea2458u);
  /* 12ea2458 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea245b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea245d call 0x12ea29e0 */
  push32(0x12ea2462u); f_12ea29e0();
  /* 12ea2462 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea2464 jne 0x12ea253d */
  if (!C.zf) goto L_12ea253d;
  /* 12ea246a mov esi, esp */
  ESI = (ESP);
  /* 12ea246c push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea246e push 0x12ebf498 */
  push32((uint32_t)(0x12ebf498u));
  /* 12ea2473 call dword ptr [0x12ec245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec245c))), 0x12ea2479u);
  /* 12ea2479 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea247c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea247e call 0x12ea29e0 */
  push32(0x12ea2483u); f_12ea29e0();
  /* 12ea2483 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea2485 jle 0x12ea253d */
  if ((C.zf||C.sf!=C.of)) goto L_12ea253d;
  /* 12ea248b mov esi, esp */
  ESI = (ESP);
  /* 12ea248d push 0x12ebf438 */
  push32((uint32_t)(0x12ebf438u));
  /* 12ea2492 call dword ptr [0x12ec2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2450))), 0x12ea2498u);
  /* 12ea2498 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea249b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea249d call 0x12ea29e0 */
  push32(0x12ea24a2u); f_12ea29e0();
  /* 12ea24a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea24a4 jne 0x12ea253d */
  if (!C.zf) goto L_12ea253d;
  /* 12ea24aa mov esi, esp */
  ESI = (ESP);
  /* 12ea24ac push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea24ae push 0xa */
  push32((uint32_t)(0xau));
  /* 12ea24b0 call dword ptr [0x12ec2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2414))), 0x12ea24b6u);
  /* 12ea24b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea24b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea24bb call 0x12ea29e0 */
  push32(0x12ea24c0u); f_12ea29e0();
  /* 12ea24c0 mov esi, esp */
  ESI = (ESP);
  /* 12ea24c2 call dword ptr [0x12ec2488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2488))), 0x12ea24c8u);
  /* 12ea24c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea24ca call 0x12ea29e0 */
  push32(0x12ea24cfu); f_12ea29e0();
  /* 12ea24cf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea24d2 jne 0x12ea2504 */
  if (!C.zf) goto L_12ea2504;
  /* 12ea24d4 mov esi, esp */
  ESI = (ESP);
  /* 12ea24d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12ea24d8 push 0x12ebf550 */
  push32((uint32_t)(0x12ebf550u));
  /* 12ea24dd call dword ptr [0x12ec241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec241c))), 0x12ea24e3u);
  /* 12ea24e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea24e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea24e8 call 0x12ea29e0 */
  push32(0x12ea24edu); f_12ea29e0();
  /* 12ea24ed mov esi, esp */
  ESI = (ESP);
  /* 12ea24ef push 0x12ebf498 */
  push32((uint32_t)(0x12ebf498u));
  /* 12ea24f4 call dword ptr [0x12ec2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2420))), 0x12ea24fau);
  /* 12ea24fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea24fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea24ff call 0x12ea29e0 */
  push32(0x12ea2504u); f_12ea29e0();
L_12ea2504:;
  /* 12ea2504 mov esi, esp */
  ESI = (ESP);
  /* 12ea2506 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12ea2508 push 0x12ebf498 */
  push32((uint32_t)(0x12ebf498u));
  /* 12ea250d push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea250f push 0x12ebf4d0 */
  push32((uint32_t)(0x12ebf4d0u));
  /* 12ea2514 push 0x12ebf548 */
  push32((uint32_t)(0x12ebf548u));
  /* 12ea2519 push 0x12ebf4c8 */
  push32((uint32_t)(0x12ebf4c8u));
  /* 12ea251e call dword ptr [0x12ec2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2428))), 0x12ea2524u);
  /* 12ea2524 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2527 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2529 call 0x12ea29e0 */
  push32(0x12ea252eu); f_12ea29e0();
  /* 12ea252e mov edx, dword ptr [0x12ebda40] */
  EDX = (r32((uint32_t)(0x12ebda40)));
  /* 12ea2534 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2537 mov dword ptr [0x12ebda40], edx */
  w32((uint32_t)(0x12ebda40), (EDX));
L_12ea253d:;
  /* 12ea253d mov esi, esp */
  ESI = (ESP);
  /* 12ea253f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12ea2541 call dword ptr [0x12ec2410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2410))), 0x12ea2547u);
  /* 12ea2547 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea254a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea254c call 0x12ea29e0 */
  push32(0x12ea2551u); f_12ea29e0();
  /* 12ea2551 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea2556 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea2558 je 0x12ea25d3 */
  if (C.zf) goto L_12ea25d3;
  /* 12ea255a push 0x12ebf420 */
  push32((uint32_t)(0x12ebf420u));
  /* 12ea255f call 0x12ea1005 */
  push32(0x12ea2564u); f_12ea1005();
  /* 12ea2564 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2567 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea256a jge 0x12ea25d3 */
  if ((C.sf==C.of)) goto L_12ea25d3;
  /* 12ea256c mov esi, esp */
  ESI = (ESP);
  /* 12ea256e push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea2570 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12ea2572 call dword ptr [0x12ec2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2414))), 0x12ea2578u);
  /* 12ea2578 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea257b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea257d call 0x12ea29e0 */
  push32(0x12ea2582u); f_12ea29e0();
  /* 12ea2582 mov esi, esp */
  ESI = (ESP);
  /* 12ea2584 call dword ptr [0x12ec2488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2488))), 0x12ea258au);
  /* 12ea258a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea258c call 0x12ea29e0 */
  push32(0x12ea2591u); f_12ea29e0();
  /* 12ea2591 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2594 jne 0x12ea25c6 */
  if (!C.zf) goto L_12ea25c6;
  /* 12ea2596 mov esi, esp */
  ESI = (ESP);
  /* 12ea2598 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12ea259a push 0x12ebf528 */
  push32((uint32_t)(0x12ebf528u));
  /* 12ea259f call dword ptr [0x12ec241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec241c))), 0x12ea25a5u);
  /* 12ea25a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea25a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea25aa call 0x12ea29e0 */
  push32(0x12ea25afu); f_12ea29e0();
  /* 12ea25af mov esi, esp */
  ESI = (ESP);
  /* 12ea25b1 push 0x12ebf4d8 */
  push32((uint32_t)(0x12ebf4d8u));
  /* 12ea25b6 call dword ptr [0x12ec2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2420))), 0x12ea25bcu);
  /* 12ea25bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea25bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea25c1 call 0x12ea29e0 */
  push32(0x12ea25c6u); f_12ea29e0();
L_12ea25c6:;
  /* 12ea25c6 push 0x12ebf428 */
  push32((uint32_t)(0x12ebf428u));
  /* 12ea25cb call 0x12ea1037 */
  push32(0x12ea25d0u); f_12ea1037();
  /* 12ea25d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea25d3:;
  /* 12ea25d3 push 0x12ebf4a0 */
  push32((uint32_t)(0x12ebf4a0u));
  /* 12ea25d8 call 0x12ea1046 */
  push32(0x12ea25ddu); f_12ea1046();
  /* 12ea25dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea25e0 push 0x12ebf4a8 */
  push32((uint32_t)(0x12ebf4a8u));
  /* 12ea25e5 call 0x12ea1046 */
  push32(0x12ea25eau); f_12ea1046();
  /* 12ea25ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea25ed mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ea25f4 jmp 0x12ea25ff */
  goto L_12ea25ff;
L_12ea25f6:;
  /* 12ea25f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea25f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea25fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ea25ff:;
  /* 12ea25ff cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2603 jge 0x12ea2625 */
  if ((C.sf==C.of)) goto L_12ea2625;
  /* 12ea2605 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea2607 mov ecx, dword ptr [0x12ebda40] */
  ECX = (r32((uint32_t)(0x12ebda40)));
  /* 12ea260d push ecx */
  push32((uint32_t)(ECX));
  /* 12ea260e push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea2610 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea2613 lea eax, [edx*8 + 0x12ebf4b8] */
  EAX = ((uint32_t)(EDX*8 + 0x12ebf4b8));
  /* 12ea261a push eax */
  push32((uint32_t)(EAX));
  /* 12ea261b call 0x12ea103c */
  push32(0x12ea2620u); f_12ea103c();
  /* 12ea2620 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2623 jmp 0x12ea25f6 */
  goto L_12ea25f6;
L_12ea2625:;
  /* 12ea2625 mov esi, esp */
  ESI = (ESP);
  /* 12ea2627 push 0x12ebf438 */
  push32((uint32_t)(0x12ebf438u));
  /* 12ea262c call dword ptr [0x12ec2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2450))), 0x12ea2632u);
  /* 12ea2632 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2635 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2637 call 0x12ea29e0 */
  push32(0x12ea263cu); f_12ea29e0();
  /* 12ea263c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea263e jle 0x12ea2655 */
  if ((C.zf||C.sf!=C.of)) goto L_12ea2655;
  /* 12ea2640 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea2642 push 4 */
  push32((uint32_t)(0x4u));
  /* 12ea2644 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea2646 push 0x12ebf498 */
  push32((uint32_t)(0x12ebf498u));
  /* 12ea264b call 0x12ea1019 */
  push32(0x12ea2650u); f_12ea1019();
  /* 12ea2650 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2653 jmp 0x12ea2668 */
  goto L_12ea2668;
L_12ea2655:;
  /* 12ea2655 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea2657 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea2659 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea265b push 0x12ebf498 */
  push32((uint32_t)(0x12ebf498u));
  /* 12ea2660 call 0x12ea1019 */
  push32(0x12ea2665u); f_12ea1019();
  /* 12ea2665 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea2668:;
  /* 12ea2668 mov esi, esp */
  ESI = (ESP);
  /* 12ea266a push 0x12ebf430 */
  push32((uint32_t)(0x12ebf430u));
  /* 12ea266f call dword ptr [0x12ec2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2450))), 0x12ea2675u);
  /* 12ea2675 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2678 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea267a call 0x12ea29e0 */
  push32(0x12ea267fu); f_12ea29e0();
  /* 12ea267f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea2681 jle 0x12ea2698 */
  if ((C.zf||C.sf!=C.of)) goto L_12ea2698;
  /* 12ea2683 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea2685 push 4 */
  push32((uint32_t)(0x4u));
  /* 12ea2687 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea2689 push 0x12ebf4d8 */
  push32((uint32_t)(0x12ebf4d8u));
  /* 12ea268e call 0x12ea1019 */
  push32(0x12ea2693u); f_12ea1019();
  /* 12ea2693 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2696 jmp 0x12ea26ab */
  goto L_12ea26ab;
L_12ea2698:;
  /* 12ea2698 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea269a push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea269c push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea269e push 0x12ebf4d8 */
  push32((uint32_t)(0x12ebf4d8u));
  /* 12ea26a3 call 0x12ea1019 */
  push32(0x12ea26a8u); f_12ea1019();
  /* 12ea26a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea26ab:;
  /* 12ea26ab mov ecx, 0x12ebf4a8 */
  ECX = (0x12ebf4a8u);
  /* 12ea26b0 mov esi, esp */
  ESI = (ESP);
  /* 12ea26b2 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea26b3 push 0x12ebf4d8 */
  push32((uint32_t)(0x12ebf4d8u));
  /* 12ea26b8 call dword ptr [0x12ec2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2460))), 0x12ea26beu);
  /* 12ea26be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea26c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea26c3 call 0x12ea29e0 */
  push32(0x12ea26c8u); f_12ea29e0();
  /* 12ea26c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea26ca jne 0x12ea26f6 */
  if (!C.zf) goto L_12ea26f6;
  /* 12ea26cc mov esi, esp */
  ESI = (ESP);
  /* 12ea26ce push 0x12ebf430 */
  push32((uint32_t)(0x12ebf430u));
  /* 12ea26d3 call dword ptr [0x12ec2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2450))), 0x12ea26d9u);
  /* 12ea26d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea26dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea26de call 0x12ea29e0 */
  push32(0x12ea26e3u); f_12ea29e0();
  /* 12ea26e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea26e5 jne 0x12ea26f6 */
  if (!C.zf) goto L_12ea26f6;
  /* 12ea26e7 push 0x12ebda30 */
  push32((uint32_t)(0x12ebda30u));
  /* 12ea26ec push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea26ee call 0x12ea1023 */
  push32(0x12ea26f3u); f_12ea1023();
  /* 12ea26f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea26f6:;
  /* 12ea26f6 push 0x12ebf4a8 */
  push32((uint32_t)(0x12ebf4a8u));
  /* 12ea26fb call 0x12ea1005 */
  push32(0x12ea2700u); f_12ea1005();
  /* 12ea2700 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2703 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2706 jge 0x12ea2717 */
  if ((C.sf==C.of)) goto L_12ea2717;
  /* 12ea2708 push 0x12ebda30 */
  push32((uint32_t)(0x12ebda30u));
  /* 12ea270d push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea270f call 0x12ea1023 */
  push32(0x12ea2714u); f_12ea1023();
  /* 12ea2714 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea2717:;
  /* 12ea2717 push 0x12ebf4a0 */
  push32((uint32_t)(0x12ebf4a0u));
  /* 12ea271c call 0x12ea1005 */
  push32(0x12ea2721u); f_12ea1005();
  /* 12ea2721 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2724 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2727 jge 0x12ea2738 */
  if ((C.sf==C.of)) goto L_12ea2738;
  /* 12ea2729 push 0x12ebda38 */
  push32((uint32_t)(0x12ebda38u));
  /* 12ea272e push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea2730 call 0x12ea1023 */
  push32(0x12ea2735u); f_12ea1023();
  /* 12ea2735 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea2738:;
  /* 12ea2738 pop edi */
  EDI = (pop32());
  /* 12ea2739 pop esi */
  ESI = (pop32());
  /* 12ea273a pop ebx */
  EBX = (pop32());
  /* 12ea273b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea273e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2740 call 0x12ea29e0 */
  push32(0x12ea2745u); f_12ea29e0();
  /* 12ea2745 mov esp, ebp */
  ESP = (EBP);
  /* 12ea2747 pop ebp */
  EBP = (pop32());
  /* 12ea2748 ret  */
  ESPCHK(0x12ea2050u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12ea29e0 (56 bytes, 28 insns) */
void f_12ea29e0(void) {
  FTRACE(0x12ea29e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea29e0 jne 0x12ea29e3 */
  if (!C.zf) goto L_12ea29e3;
  /* 12ea29e2 ret  */
  ESPCHK(0x12ea29e0u, _esp0);
  ESP += 4; return;
L_12ea29e3:;
  /* 12ea29e3 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea29e4 mov ebp, esp */
  EBP = (ESP);
  /* 12ea29e6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea29e9 push eax */
  push32((uint32_t)(EAX));
  /* 12ea29ea push edx */
  push32((uint32_t)(EDX));
  /* 12ea29eb push ebx */
  push32((uint32_t)(EBX));
  /* 12ea29ec push esi */
  push32((uint32_t)(ESI));
  /* 12ea29ed push edi */
  push32((uint32_t)(EDI));
  /* 12ea29ee push 0x12eba280 */
  push32((uint32_t)(0x12eba280u));
  /* 12ea29f3 push 0x12eba27c */
  push32((uint32_t)(0x12eba27cu));
  /* 12ea29f8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12ea29fa push 0x12eba26c */
  push32((uint32_t)(0x12eba26cu));
  /* 12ea29ff push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea2a01 call 0x12ea2db0 */
  push32(0x12ea2a06u); f_12ea2db0();
  /* 12ea2a06 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2a09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2a0c jne 0x12ea2a0f */
  if (!C.zf) goto L_12ea2a0f;
  /* 12ea2a0e int3  */
  x86_unimpl("int3 @ 0x12ea2a0e");
L_12ea2a0f:;
  /* 12ea2a0f pop edi */
  EDI = (pop32());
  /* 12ea2a10 pop esi */
  ESI = (pop32());
  /* 12ea2a11 pop ebx */
  EBX = (pop32());
  /* 12ea2a12 pop edx */
  EDX = (pop32());
  /* 12ea2a13 pop eax */
  EAX = (pop32());
  /* 12ea2a14 mov esp, ebp */
  ESP = (EBP);
  /* 12ea2a16 pop ebp */
  EBP = (pop32());
  /* 12ea2a17 ret  */
  ESPCHK(0x12ea29e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a20 @ 0x12ea2a20 (313 bytes, 78 insns) */
void f_12ea2a20(void) {
  FTRACE(0x12ea2a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea2a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea2a21 mov ebp, esp */
  EBP = (ESP);
  /* 12ea2a23 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2a27 jne 0x12ea2ae7 */
  if (!C.zf) goto L_12ea2ae7;
  /* 12ea2a2d call dword ptr [0x12ec2318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2318))), 0x12ea2a33u);
  /* 12ea2a33 mov dword ptr [0x12ebf5d0], eax */
  w32((uint32_t)(0x12ebf5d0), (EAX));
  /* 12ea2a38 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea2a3a call 0x12ea64e0 */
  push32(0x12ea2a3fu); f_12ea64e0();
  /* 12ea2a3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea2a44 jne 0x12ea2a4d */
  if (!C.zf) goto L_12ea2a4d;
  /* 12ea2a46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea2a48 jmp 0x12ea2b55 */
  goto L_12ea2b55;
L_12ea2a4d:;
  /* 12ea2a4d mov eax, dword ptr [0x12ebf5d0] */
  EAX = (r32((uint32_t)(0x12ebf5d0)));
  /* 12ea2a52 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12ea2a55 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea2a5a mov dword ptr [0x12ebf5dc], eax */
  w32((uint32_t)(0x12ebf5dc), (EAX));
  /* 12ea2a5f mov ecx, dword ptr [0x12ebf5d0] */
  ECX = (r32((uint32_t)(0x12ebf5d0)));
  /* 12ea2a65 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea2a6b mov dword ptr [0x12ebf5d8], ecx */
  w32((uint32_t)(0x12ebf5d8), (ECX));
  /* 12ea2a71 mov edx, dword ptr [0x12ebf5d8] */
  EDX = (r32((uint32_t)(0x12ebf5d8)));
  /* 12ea2a77 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12ea2a7a add edx, dword ptr [0x12ebf5dc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12ebf5dc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2a80 mov dword ptr [0x12ebf5d4], edx */
  w32((uint32_t)(0x12ebf5d4), (EDX));
  /* 12ea2a86 mov eax, dword ptr [0x12ebf5d0] */
  EAX = (r32((uint32_t)(0x12ebf5d0)));
  /* 12ea2a8b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12ea2a8e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea2a93 mov dword ptr [0x12ebf5d0], eax */
  w32((uint32_t)(0x12ebf5d0), (EAX));
  /* 12ea2a98 call 0x12ea3650 */
  push32(0x12ea2a9du); f_12ea3650();
  /* 12ea2a9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea2a9f jne 0x12ea2aad */
  if (!C.zf) goto L_12ea2aad;
  /* 12ea2aa1 call 0x12ea6530 */
  push32(0x12ea2aa6u); f_12ea6530();
  /* 12ea2aa6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea2aa8 jmp 0x12ea2b55 */
  goto L_12ea2b55;
L_12ea2aad:;
  /* 12ea2aad call dword ptr [0x12ec2314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2314))), 0x12ea2ab3u);
  /* 12ea2ab3 mov dword ptr [0x12ec110c], eax */
  w32((uint32_t)(0x12ec110c), (EAX));
  /* 12ea2ab8 call 0x12ea62c0 */
  push32(0x12ea2abdu); f_12ea62c0();
  /* 12ea2abd mov dword ptr [0x12ebf5b8], eax */
  w32((uint32_t)(0x12ebf5b8), (EAX));
  /* 12ea2ac2 call 0x12ea3900 */
  push32(0x12ea2ac7u); f_12ea3900();
  /* 12ea2ac7 call 0x12ea5db0 */
  push32(0x12ea2accu); f_12ea5db0();
  /* 12ea2acc call 0x12ea5c60 */
  push32(0x12ea2ad1u); f_12ea5c60();
  /* 12ea2ad1 call 0x12ea3450 */
  push32(0x12ea2ad6u); f_12ea3450();
  /* 12ea2ad6 mov ecx, dword ptr [0x12ebf5b4] */
  ECX = (r32((uint32_t)(0x12ebf5b4)));
  /* 12ea2adc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2adf mov dword ptr [0x12ebf5b4], ecx */
  w32((uint32_t)(0x12ebf5b4), (ECX));
  /* 12ea2ae5 jmp 0x12ea2b50 */
  goto L_12ea2b50;
L_12ea2ae7:;
  /* 12ea2ae7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2aeb jne 0x12ea2b40 */
  if (!C.zf) goto L_12ea2b40;
  /* 12ea2aed cmp dword ptr [0x12ebf5b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf5b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2af4 jle 0x12ea2b3a */
  if ((C.zf||C.sf!=C.of)) goto L_12ea2b3a;
  /* 12ea2af6 mov edx, dword ptr [0x12ebf5b4] */
  EDX = (r32((uint32_t)(0x12ebf5b4)));
  /* 12ea2afc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea2aff mov dword ptr [0x12ebf5b4], edx */
  w32((uint32_t)(0x12ebf5b4), (EDX));
  /* 12ea2b05 cmp dword ptr [0x12ebf608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2b0c jne 0x12ea2b13 */
  if (!C.zf) goto L_12ea2b13;
  /* 12ea2b0e call 0x12ea34d0 */
  push32(0x12ea2b13u); f_12ea34d0();
L_12ea2b13:;
  /* 12ea2b13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ea2b15 call 0x12ea5200 */
  push32(0x12ea2b1au); f_12ea5200();
  /* 12ea2b1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2b1d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12ea2b20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea2b22 je 0x12ea2b29 */
  if (C.zf) goto L_12ea2b29;
  /* 12ea2b24 call 0x12ea5b10 */
  push32(0x12ea2b29u); f_12ea5b10();
L_12ea2b29:;
  /* 12ea2b29 call 0x12ea3c30 */
  push32(0x12ea2b2eu); f_12ea3c30();
  /* 12ea2b2e call 0x12ea36e0 */
  push32(0x12ea2b33u); f_12ea36e0();
  /* 12ea2b33 call 0x12ea6530 */
  push32(0x12ea2b38u); f_12ea6530();
  /* 12ea2b38 jmp 0x12ea2b3e */
  goto L_12ea2b3e;
L_12ea2b3a:;
  /* 12ea2b3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea2b3c jmp 0x12ea2b55 */
  goto L_12ea2b55;
L_12ea2b3e:;
  /* 12ea2b3e jmp 0x12ea2b50 */
  goto L_12ea2b50;
L_12ea2b40:;
  /* 12ea2b40 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2b44 jne 0x12ea2b50 */
  if (!C.zf) goto L_12ea2b50;
  /* 12ea2b46 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea2b48 call 0x12ea37d0 */
  push32(0x12ea2b4du); f_12ea37d0();
  /* 12ea2b4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea2b50:;
  /* 12ea2b50 mov eax, 1 */
  EAX = (0x1u);
L_12ea2b55:;
  /* 12ea2b55 pop ebp */
  EBP = (pop32());
  /* 12ea2b56 ret 0xc */
  ESPCHK(0x12ea2a20u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12ea2b60 (243 bytes, 86 insns) */
void f_12ea2b60(void) {
  FTRACE(0x12ea2b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea2b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea2b61 mov ebp, esp */
  EBP = (ESP);
  /* 12ea2b63 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea2b64 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12ea2b6b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2b6f jne 0x12ea2b81 */
  if (!C.zf) goto L_12ea2b81;
  /* 12ea2b71 cmp dword ptr [0x12ebf5b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf5b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2b78 jne 0x12ea2b81 */
  if (!C.zf) goto L_12ea2b81;
  /* 12ea2b7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea2b7c jmp 0x12ea2c4d */
  goto L_12ea2c4d;
L_12ea2b81:;
  /* 12ea2b81 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2b85 je 0x12ea2b8d */
  if (C.zf) goto L_12ea2b8d;
  /* 12ea2b87 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2b8b jne 0x12ea2bcf */
  if (!C.zf) goto L_12ea2bcf;
L_12ea2b8d:;
  /* 12ea2b8d cmp dword ptr [0x12ec111c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ec111c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2b94 je 0x12ea2bab */
  if (C.zf) goto L_12ea2bab;
  /* 12ea2b96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea2b99 push eax */
  push32((uint32_t)(EAX));
  /* 12ea2b9a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea2b9d push ecx */
  push32((uint32_t)(ECX));
  /* 12ea2b9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea2ba1 push edx */
  push32((uint32_t)(EDX));
  /* 12ea2ba2 call dword ptr [0x12ec111c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec111c))), 0x12ea2ba8u);
  /* 12ea2ba8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ea2bab:;
  /* 12ea2bab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2baf je 0x12ea2bc5 */
  if (C.zf) goto L_12ea2bc5;
  /* 12ea2bb1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea2bb4 push eax */
  push32((uint32_t)(EAX));
  /* 12ea2bb5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea2bb8 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea2bb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea2bbc push edx */
  push32((uint32_t)(EDX));
  /* 12ea2bbd call 0x12ea2a20 */
  push32(0x12ea2bc2u); f_12ea2a20();
  /* 12ea2bc2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ea2bc5:;
  /* 12ea2bc5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2bc9 jne 0x12ea2bcf */
  if (!C.zf) goto L_12ea2bcf;
  /* 12ea2bcb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea2bcd jmp 0x12ea2c4d */
  goto L_12ea2c4d;
L_12ea2bcf:;
  /* 12ea2bcf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea2bd2 push eax */
  push32((uint32_t)(EAX));
  /* 12ea2bd3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea2bd6 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea2bd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea2bda push edx */
  push32((uint32_t)(EDX));
  /* 12ea2bdb call 0x12ea1014 */
  push32(0x12ea2be0u); f_12ea1014();
  /* 12ea2be0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea2be3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2be7 jne 0x12ea2bfe */
  if (!C.zf) goto L_12ea2bfe;
  /* 12ea2be9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2bed jne 0x12ea2bfe */
  if (!C.zf) goto L_12ea2bfe;
  /* 12ea2bef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea2bf2 push eax */
  push32((uint32_t)(EAX));
  /* 12ea2bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea2bf5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea2bf8 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea2bf9 call 0x12ea2a20 */
  push32(0x12ea2bfeu); f_12ea2a20();
L_12ea2bfe:;
  /* 12ea2bfe cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2c02 je 0x12ea2c0a */
  if (C.zf) goto L_12ea2c0a;
  /* 12ea2c04 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2c08 jne 0x12ea2c4a */
  if (!C.zf) goto L_12ea2c4a;
L_12ea2c0a:;
  /* 12ea2c0a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea2c0d push edx */
  push32((uint32_t)(EDX));
  /* 12ea2c0e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea2c11 push eax */
  push32((uint32_t)(EAX));
  /* 12ea2c12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea2c15 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea2c16 call 0x12ea2a20 */
  push32(0x12ea2c1bu); f_12ea2a20();
  /* 12ea2c1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea2c1d jne 0x12ea2c26 */
  if (!C.zf) goto L_12ea2c26;
  /* 12ea2c1f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12ea2c26:;
  /* 12ea2c26 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2c2a je 0x12ea2c4a */
  if (C.zf) goto L_12ea2c4a;
  /* 12ea2c2c cmp dword ptr [0x12ec111c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ec111c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2c33 je 0x12ea2c4a */
  if (C.zf) goto L_12ea2c4a;
  /* 12ea2c35 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea2c38 push edx */
  push32((uint32_t)(EDX));
  /* 12ea2c39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea2c3c push eax */
  push32((uint32_t)(EAX));
  /* 12ea2c3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea2c40 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea2c41 call dword ptr [0x12ec111c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec111c))), 0x12ea2c47u);
  /* 12ea2c47 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ea2c4a:;
  /* 12ea2c4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12ea2c4d:;
  /* 12ea2c4d mov esp, ebp */
  ESP = (EBP);
  /* 12ea2c4f pop ebp */
  EBP = (pop32());
  /* 12ea2c50 ret 0xc */
  ESPCHK(0x12ea2b60u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12ea2c60 (58 bytes, 18 insns) */
void f_12ea2c60(void) {
  FTRACE(0x12ea2c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea2c60 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea2c61 mov ebp, esp */
  EBP = (ESP);
  /* 12ea2c63 cmp dword ptr [0x12ebf5c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf5c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2c6a je 0x12ea2c7e */
  if (C.zf) goto L_12ea2c7e;
  /* 12ea2c6c cmp dword ptr [0x12ebf5c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf5c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2c73 jne 0x12ea2c83 */
  if (!C.zf) goto L_12ea2c83;
  /* 12ea2c75 cmp dword ptr [0x12ebf5c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf5c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2c7c jne 0x12ea2c83 */
  if (!C.zf) goto L_12ea2c83;
L_12ea2c7e:;
  /* 12ea2c7e call 0x12ea65d0 */
  push32(0x12ea2c83u); f_12ea65d0();
L_12ea2c83:;
  /* 12ea2c83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea2c86 push eax */
  push32((uint32_t)(EAX));
  /* 12ea2c87 call 0x12ea6620 */
  push32(0x12ea2c8cu); f_12ea6620();
  /* 12ea2c8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2c8f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12ea2c94 call dword ptr [0x12ebda48] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ebda48))), 0x12ea2c9au);
  /* 12ea2c9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2c9d pop ebp */
  EBP = (pop32());
  /* 12ea2c9e ret  */
  ESPCHK(0x12ea2c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ca0 @ 0x12ea2ca0 (11 bytes, 5 insns) */
void f_12ea2ca0(void) {
  FTRACE(0x12ea2ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea2ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea2ca1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea2ca3 call dword ptr [0x12ec231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec231c))), 0x12ea2ca9u);
  /* 12ea2ca9 pop ebp */
  EBP = (pop32());
  /* 12ea2caa ret  */
  ESPCHK(0x12ea2ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cb0 @ 0x12ea2cb0 (87 bytes, 30 insns) */
void f_12ea2cb0(void) {
  FTRACE(0x12ea2cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea2cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea2cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea2cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea2cb4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2cb8 jl 0x12ea2cc0 */
  if ((C.sf!=C.of)) goto L_12ea2cc0;
  /* 12ea2cba cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2cbe jl 0x12ea2cc5 */
  if ((C.sf!=C.of)) goto L_12ea2cc5;
L_12ea2cc0:;
  /* 12ea2cc0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea2cc3 jmp 0x12ea2d03 */
  goto L_12ea2d03;
L_12ea2cc5:;
  /* 12ea2cc5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2cc9 jne 0x12ea2cd7 */
  if (!C.zf) goto L_12ea2cd7;
  /* 12ea2ccb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea2cce mov eax, dword ptr [eax*4 + 0x12ebda50] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12ebda50)));
  /* 12ea2cd5 jmp 0x12ea2d03 */
  goto L_12ea2d03;
L_12ea2cd7:;
  /* 12ea2cd7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea2cda and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 12ea2cdd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea2cdf je 0x12ea2ce6 */
  if (C.zf) goto L_12ea2ce6;
  /* 12ea2ce1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea2ce4 jmp 0x12ea2d03 */
  goto L_12ea2d03;
L_12ea2ce6:;
  /* 12ea2ce6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea2ce9 mov eax, dword ptr [edx*4 + 0x12ebda50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12ebda50)));
  /* 12ea2cf0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea2cf3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea2cf6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea2cf9 mov dword ptr [ecx*4 + 0x12ebda50], edx */
  w32((uint32_t)(ECX*4 + 0x12ebda50), (EDX));
  /* 12ea2d00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12ea2d03:;
  /* 12ea2d03 mov esp, ebp */
  ESP = (EBP);
  /* 12ea2d05 pop ebp */
  EBP = (pop32());
  /* 12ea2d06 ret  */
  ESPCHK(0x12ea2cb0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12ea2d10 (126 bytes, 38 insns) */
void f_12ea2d10(void) {
  FTRACE(0x12ea2d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea2d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea2d11 mov ebp, esp */
  EBP = (ESP);
  /* 12ea2d13 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea2d14 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2d18 jl 0x12ea2d20 */
  if ((C.sf!=C.of)) goto L_12ea2d20;
  /* 12ea2d1a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2d1e jl 0x12ea2d27 */
  if ((C.sf!=C.of)) goto L_12ea2d27;
L_12ea2d20:;
  /* 12ea2d20 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12ea2d25 jmp 0x12ea2d8a */
  goto L_12ea2d8a;
L_12ea2d27:;
  /* 12ea2d27 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2d2b jne 0x12ea2d39 */
  if (!C.zf) goto L_12ea2d39;
  /* 12ea2d2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea2d30 mov eax, dword ptr [eax*4 + 0x12ebda5c] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12ebda5c)));
  /* 12ea2d37 jmp 0x12ea2d8a */
  goto L_12ea2d8a;
L_12ea2d39:;
  /* 12ea2d39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea2d3c mov edx, dword ptr [ecx*4 + 0x12ebda5c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ebda5c)));
  /* 12ea2d43 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ea2d46 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2d4a jne 0x12ea2d60 */
  if (!C.zf) goto L_12ea2d60;
  /* 12ea2d4c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12ea2d4e call dword ptr [0x12ec2320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2320))), 0x12ea2d54u);
  /* 12ea2d54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea2d57 mov dword ptr [ecx*4 + 0x12ebda5c], eax */
  w32((uint32_t)(ECX*4 + 0x12ebda5c), (EAX));
  /* 12ea2d5e jmp 0x12ea2d87 */
  goto L_12ea2d87;
L_12ea2d60:;
  /* 12ea2d60 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2d64 jne 0x12ea2d7a */
  if (!C.zf) goto L_12ea2d7a;
  /* 12ea2d66 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12ea2d68 call dword ptr [0x12ec2320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2320))), 0x12ea2d6eu);
  /* 12ea2d6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea2d71 mov dword ptr [edx*4 + 0x12ebda5c], eax */
  w32((uint32_t)(EDX*4 + 0x12ebda5c), (EAX));
  /* 12ea2d78 jmp 0x12ea2d87 */
  goto L_12ea2d87;
L_12ea2d7a:;
  /* 12ea2d7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea2d7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea2d80 mov dword ptr [eax*4 + 0x12ebda5c], ecx */
  w32((uint32_t)(EAX*4 + 0x12ebda5c), (ECX));
L_12ea2d87:;
  /* 12ea2d87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12ea2d8a:;
  /* 12ea2d8a mov esp, ebp */
  ESP = (EBP);
  /* 12ea2d8c pop ebp */
  EBP = (pop32());
  /* 12ea2d8d ret  */
  ESPCHK(0x12ea2d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d90 @ 0x12ea2d90 (28 bytes, 11 insns) */
void f_12ea2d90(void) {
  FTRACE(0x12ea2d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea2d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea2d91 mov ebp, esp */
  EBP = (ESP);
  /* 12ea2d93 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea2d94 mov eax, dword ptr [0x12ec1100] */
  EAX = (r32((uint32_t)(0x12ec1100)));
  /* 12ea2d99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea2d9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea2d9f mov dword ptr [0x12ec1100], ecx */
  w32((uint32_t)(0x12ec1100), (ECX));
  /* 12ea2da5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea2da8 mov esp, ebp */
  ESP = (EBP);
  /* 12ea2daa pop ebp */
  EBP = (pop32());
  /* 12ea2dab ret  */
  ESPCHK(0x12ea2d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10002db0 @ 0x12ea2db0 (912 bytes, 248 insns) */
void f_12ea2db0(void) {
  FTRACE(0x12ea2db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea2db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea2db1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea2db3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12ea2db8 call 0x12ea6e90 */
  push32(0x12ea2dbdu); f_12ea6e90();
  /* 12ea2dbd push edi */
  push32((uint32_t)(EDI));
  /* 12ea2dbe mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12ea2dc5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12ea2dca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea2dcc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12ea2dd2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12ea2dd4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12ea2dd6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12ea2dd7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 12ea2dde mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12ea2de3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea2de5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 12ea2deb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12ea2ded stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12ea2def stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12ea2df0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12ea2df7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12ea2dfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea2dfe lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12ea2e04 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12ea2e06 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12ea2e08 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12ea2e09 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 12ea2e0c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12ea2e12 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2e16 jl 0x12ea2e1e */
  if ((C.sf!=C.of)) goto L_12ea2e1e;
  /* 12ea2e18 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2e1c jl 0x12ea2e26 */
  if ((C.sf!=C.of)) goto L_12ea2e26;
L_12ea2e1e:;
  /* 12ea2e1e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea2e21 jmp 0x12ea313b */
  goto L_12ea313b;
L_12ea2e26:;
  /* 12ea2e26 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2e2a jne 0x12ea2ed0 */
  if (!C.zf) goto L_12ea2ed0;
  /* 12ea2e30 push 0x12ebda4c */
  push32((uint32_t)(0x12ebda4cu));
  /* 12ea2e35 call dword ptr [0x12ec2338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2338))), 0x12ea2e3bu);
  /* 12ea2e3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea2e3d jle 0x12ea2ed0 */
  if ((C.zf||C.sf!=C.of)) goto L_12ea2ed0;
  /* 12ea2e43 cmp dword ptr [0x12ebf5c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf5c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2e4a jne 0x12ea2e8e */
  if (!C.zf) goto L_12ea2e8e;
  /* 12ea2e4c push 0x12eba428 */
  push32((uint32_t)(0x12eba428u));
  /* 12ea2e51 call dword ptr [0x12ec2334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2334))), 0x12ea2e57u);
  /* 12ea2e57 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12ea2e5d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2e64 je 0x12ea2e86 */
  if (C.zf) goto L_12ea2e86;
  /* 12ea2e66 push 0x12eba41c */
  push32((uint32_t)(0x12eba41cu));
  /* 12ea2e6b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12ea2e71 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea2e72 call dword ptr [0x12ec2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2330))), 0x12ea2e78u);
  /* 12ea2e78 mov dword ptr [0x12ebf5c8], eax */
  w32((uint32_t)(0x12ebf5c8), (EAX));
  /* 12ea2e7d cmp dword ptr [0x12ebf5c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf5c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2e84 jne 0x12ea2e8e */
  if (!C.zf) goto L_12ea2e8e;
L_12ea2e86:;
  /* 12ea2e86 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea2e89 jmp 0x12ea313b */
  goto L_12ea313b;
L_12ea2e8e:;
  /* 12ea2e8e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea2e91 push edx */
  push32((uint32_t)(EDX));
  /* 12ea2e92 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea2e95 push eax */
  push32((uint32_t)(EAX));
  /* 12ea2e96 push 0x12eba3e8 */
  push32((uint32_t)(0x12eba3e8u));
  /* 12ea2e9b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12ea2ea1 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea2ea2 call dword ptr [0x12ebf5c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ebf5c8))), 0x12ea2ea8u);
  /* 12ea2ea8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2eab lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12ea2eb1 push edx */
  push32((uint32_t)(EDX));
  /* 12ea2eb2 call dword ptr [0x12ec232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec232c))), 0x12ea2eb8u);
  /* 12ea2eb8 push 0x12ebda4c */
  push32((uint32_t)(0x12ebda4cu));
  /* 12ea2ebd call dword ptr [0x12ec2328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2328))), 0x12ea2ec3u);
  /* 12ea2ec3 call 0x12ea2ca0 */
  push32(0x12ea2ec8u); f_12ea2ca0();
  /* 12ea2ec8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea2ecb jmp 0x12ea313b */
  goto L_12ea313b;
L_12ea2ed0:;
  /* 12ea2ed0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2ed4 je 0x12ea2f0d */
  if (C.zf) goto L_12ea2f0d;
  /* 12ea2ed6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12ea2edc push eax */
  push32((uint32_t)(EAX));
  /* 12ea2edd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea2ee0 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea2ee1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12ea2ee6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12ea2eec push edx */
  push32((uint32_t)(EDX));
  /* 12ea2eed call 0x12ea6d90 */
  push32(0x12ea2ef2u); f_12ea6d90();
  /* 12ea2ef2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2ef5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea2ef7 jge 0x12ea2f0d */
  if ((C.sf==C.of)) goto L_12ea2f0d;
  /* 12ea2ef9 push 0x12eba3bc */
  push32((uint32_t)(0x12eba3bcu));
  /* 12ea2efe lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12ea2f04 push eax */
  push32((uint32_t)(EAX));
  /* 12ea2f05 call 0x12ea6ca0 */
  push32(0x12ea2f0au); f_12ea6ca0();
  /* 12ea2f0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea2f0d:;
  /* 12ea2f0d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2f11 jne 0x12ea2f45 */
  if (!C.zf) goto L_12ea2f45;
  /* 12ea2f13 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2f17 je 0x12ea2f25 */
  if (C.zf) goto L_12ea2f25;
  /* 12ea2f19 mov dword ptr [ebp - 0x3028], 0x12eba3a8 */
  w32((uint32_t)(EBP + -0x3028), (0x12eba3a8u));
  /* 12ea2f23 jmp 0x12ea2f2f */
  goto L_12ea2f2f;
L_12ea2f25:;
  /* 12ea2f25 mov dword ptr [ebp - 0x3028], 0x12eba394 */
  w32((uint32_t)(EBP + -0x3028), (0x12eba394u));
L_12ea2f2f:;
  /* 12ea2f2f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12ea2f35 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea2f36 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12ea2f3c push edx */
  push32((uint32_t)(EDX));
  /* 12ea2f3d call 0x12ea6ca0 */
  push32(0x12ea2f42u); f_12ea6ca0();
  /* 12ea2f42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea2f45:;
  /* 12ea2f45 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12ea2f4b push eax */
  push32((uint32_t)(EAX));
  /* 12ea2f4c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12ea2f52 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea2f53 call 0x12ea6cb0 */
  push32(0x12ea2f58u); f_12ea6cb0();
  /* 12ea2f58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2f5b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2f5f jne 0x12ea2f9a */
  if (!C.zf) goto L_12ea2f9a;
  /* 12ea2f61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea2f64 mov eax, dword ptr [edx*4 + 0x12ebda50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12ebda50)));
  /* 12ea2f6b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12ea2f6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea2f70 je 0x12ea2f86 */
  if (C.zf) goto L_12ea2f86;
  /* 12ea2f72 push 0x12eba390 */
  push32((uint32_t)(0x12eba390u));
  /* 12ea2f77 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12ea2f7d push ecx */
  push32((uint32_t)(ECX));
  /* 12ea2f7e call 0x12ea6cb0 */
  push32(0x12ea2f83u); f_12ea6cb0();
  /* 12ea2f83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea2f86:;
  /* 12ea2f86 push 0x12eba38c */
  push32((uint32_t)(0x12eba38cu));
  /* 12ea2f8b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12ea2f91 push edx */
  push32((uint32_t)(EDX));
  /* 12ea2f92 call 0x12ea6cb0 */
  push32(0x12ea2f97u); f_12ea6cb0();
  /* 12ea2f97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea2f9a:;
  /* 12ea2f9a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2f9e je 0x12ea2fe2 */
  if (C.zf) goto L_12ea2fe2;
  /* 12ea2fa0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12ea2fa6 push eax */
  push32((uint32_t)(EAX));
  /* 12ea2fa7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea2faa push ecx */
  push32((uint32_t)(ECX));
  /* 12ea2fab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea2fae push edx */
  push32((uint32_t)(EDX));
  /* 12ea2faf push 0x12eba380 */
  push32((uint32_t)(0x12eba380u));
  /* 12ea2fb4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12ea2fb9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12ea2fbf push eax */
  push32((uint32_t)(EAX));
  /* 12ea2fc0 call 0x12ea6ba0 */
  push32(0x12ea2fc5u); f_12ea6ba0();
  /* 12ea2fc5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea2fc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea2fca jge 0x12ea2fe0 */
  if ((C.sf==C.of)) goto L_12ea2fe0;
  /* 12ea2fcc push 0x12eba3bc */
  push32((uint32_t)(0x12eba3bcu));
  /* 12ea2fd1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12ea2fd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea2fd8 call 0x12ea6ca0 */
  push32(0x12ea2fddu); f_12ea6ca0();
  /* 12ea2fdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea2fe0:;
  /* 12ea2fe0 jmp 0x12ea2ff8 */
  goto L_12ea2ff8;
L_12ea2fe2:;
  /* 12ea2fe2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12ea2fe8 push edx */
  push32((uint32_t)(EDX));
  /* 12ea2fe9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12ea2fef push eax */
  push32((uint32_t)(EAX));
  /* 12ea2ff0 call 0x12ea6ca0 */
  push32(0x12ea2ff5u); f_12ea6ca0();
  /* 12ea2ff5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea2ff8:;
  /* 12ea2ff8 cmp dword ptr [0x12ec1100], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ec1100))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea2fff je 0x12ea303c */
  if (C.zf) goto L_12ea303c;
  /* 12ea3001 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12ea3007 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea3008 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12ea300e push edx */
  push32((uint32_t)(EDX));
  /* 12ea300f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3012 push eax */
  push32((uint32_t)(EAX));
  /* 12ea3013 call dword ptr [0x12ec1100] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec1100))), 0x12ea3019u);
  /* 12ea3019 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea301c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea301e je 0x12ea303c */
  if (C.zf) goto L_12ea303c;
  /* 12ea3020 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3024 jne 0x12ea3031 */
  if (!C.zf) goto L_12ea3031;
  /* 12ea3026 push 0x12ebda4c */
  push32((uint32_t)(0x12ebda4cu));
  /* 12ea302b call dword ptr [0x12ec2328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2328))), 0x12ea3031u);
L_12ea3031:;
  /* 12ea3031 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12ea3037 jmp 0x12ea313b */
  goto L_12ea313b;
L_12ea303c:;
  /* 12ea303c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea303f mov edx, dword ptr [ecx*4 + 0x12ebda50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ebda50)));
  /* 12ea3046 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12ea3049 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea304b je 0x12ea308b */
  if (C.zf) goto L_12ea308b;
  /* 12ea304d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3050 cmp dword ptr [eax*4 + 0x12ebda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12ebda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3058 je 0x12ea308b */
  if (C.zf) goto L_12ea308b;
  /* 12ea305a push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea305c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12ea3062 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea3063 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12ea3069 push edx */
  push32((uint32_t)(EDX));
  /* 12ea306a call 0x12ea6b20 */
  push32(0x12ea306fu); f_12ea6b20();
  /* 12ea306f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3072 push eax */
  push32((uint32_t)(EAX));
  /* 12ea3073 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12ea3079 push eax */
  push32((uint32_t)(EAX));
  /* 12ea307a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea307d mov edx, dword ptr [ecx*4 + 0x12ebda5c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ebda5c)));
  /* 12ea3084 push edx */
  push32((uint32_t)(EDX));
  /* 12ea3085 call dword ptr [0x12ec2324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2324))), 0x12ea308bu);
L_12ea308b:;
  /* 12ea308b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea308e mov ecx, dword ptr [eax*4 + 0x12ebda50] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12ebda50)));
  /* 12ea3095 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12ea3098 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea309a je 0x12ea30a9 */
  if (C.zf) goto L_12ea30a9;
  /* 12ea309c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12ea30a2 push edx */
  push32((uint32_t)(EDX));
  /* 12ea30a3 call dword ptr [0x12ec232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec232c))), 0x12ea30a9u);
L_12ea30a9:;
  /* 12ea30a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea30ac mov ecx, dword ptr [eax*4 + 0x12ebda50] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12ebda50)));
  /* 12ea30b3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12ea30b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea30b8 je 0x12ea3128 */
  if (C.zf) goto L_12ea3128;
  /* 12ea30ba cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea30be je 0x12ea30dd */
  if (C.zf) goto L_12ea30dd;
  /* 12ea30c0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12ea30c2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12ea30c8 push edx */
  push32((uint32_t)(EDX));
  /* 12ea30c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea30cc push eax */
  push32((uint32_t)(EAX));
  /* 12ea30cd call 0x12ea6830 */
  push32(0x12ea30d2u); f_12ea6830();
  /* 12ea30d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea30d5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12ea30db jmp 0x12ea30e7 */
  goto L_12ea30e7;
L_12ea30dd:;
  /* 12ea30dd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12ea30e7:;
  /* 12ea30e7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12ea30ed push ecx */
  push32((uint32_t)(ECX));
  /* 12ea30ee mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea30f1 push edx */
  push32((uint32_t)(EDX));
  /* 12ea30f2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12ea30f8 push eax */
  push32((uint32_t)(EAX));
  /* 12ea30f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea30fc push ecx */
  push32((uint32_t)(ECX));
  /* 12ea30fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3100 push edx */
  push32((uint32_t)(EDX));
  /* 12ea3101 call 0x12ea3140 */
  push32(0x12ea3106u); f_12ea3140();
  /* 12ea3106 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3109 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12ea310f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3113 jne 0x12ea3120 */
  if (!C.zf) goto L_12ea3120;
  /* 12ea3115 push 0x12ebda4c */
  push32((uint32_t)(0x12ebda4cu));
  /* 12ea311a call dword ptr [0x12ec2328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2328))), 0x12ea3120u);
L_12ea3120:;
  /* 12ea3120 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12ea3126 jmp 0x12ea313b */
  goto L_12ea313b;
L_12ea3128:;
  /* 12ea3128 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea312c jne 0x12ea3139 */
  if (!C.zf) goto L_12ea3139;
  /* 12ea312e push 0x12ebda4c */
  push32((uint32_t)(0x12ebda4cu));
  /* 12ea3133 call dword ptr [0x12ec2328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2328))), 0x12ea3139u);
L_12ea3139:;
  /* 12ea3139 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ea313b:;
  /* 12ea313b pop edi */
  EDI = (pop32());
  /* 12ea313c mov esp, ebp */
  ESP = (EBP);
  /* 12ea313e pop ebp */
  EBP = (pop32());
  /* 12ea313f ret  */
  ESPCHK(0x12ea2db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003140 @ 0x12ea3140 (780 bytes, 197 insns) */
void f_12ea3140(void) {
  FTRACE(0x12ea3140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea3140 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea3141 mov ebp, esp */
  EBP = (ESP);
  /* 12ea3143 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12ea3148 call 0x12ea6e90 */
  push32(0x12ea314du); f_12ea6e90();
L_12ea314d:;
  /* 12ea314d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3151 jne 0x12ea3178 */
  if (!C.zf) goto L_12ea3178;
  /* 12ea3153 push 0x12eba578 */
  push32((uint32_t)(0x12eba578u));
  /* 12ea3158 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea315a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12ea315f push 0x12eba56c */
  push32((uint32_t)(0x12eba56cu));
  /* 12ea3164 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea3166 call 0x12ea2db0 */
  push32(0x12ea316bu); f_12ea2db0();
  /* 12ea316b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea316e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3171 jne 0x12ea3178 */
  if (!C.zf) goto L_12ea3178;
  /* 12ea3173 call 0x12ea2ca0 */
  push32(0x12ea3178u); f_12ea2ca0();
L_12ea3178:;
  /* 12ea3178 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea317a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea317c jne 0x12ea314d */
  if (!C.zf) goto L_12ea314d;
  /* 12ea317e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12ea3183 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12ea3189 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea318a push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea318c call dword ptr [0x12ec233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec233c))), 0x12ea3192u);
  /* 12ea3192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea3194 jne 0x12ea31aa */
  if (!C.zf) goto L_12ea31aa;
  /* 12ea3196 push 0x12eba554 */
  push32((uint32_t)(0x12eba554u));
  /* 12ea319b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12ea31a1 push edx */
  push32((uint32_t)(EDX));
  /* 12ea31a2 call 0x12ea6ca0 */
  push32(0x12ea31a7u); f_12ea6ca0();
  /* 12ea31a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea31aa:;
  /* 12ea31aa lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12ea31b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea31b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea31b6 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea31b7 call 0x12ea6b20 */
  push32(0x12ea31bcu); f_12ea6b20();
  /* 12ea31bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea31bf cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea31c2 jbe 0x12ea31ed */
  if ((C.cf||C.zf)) goto L_12ea31ed;
  /* 12ea31c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea31c7 push edx */
  push32((uint32_t)(EDX));
  /* 12ea31c8 call 0x12ea6b20 */
  push32(0x12ea31cdu); f_12ea6b20();
  /* 12ea31cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea31d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea31d3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12ea31d7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ea31da push 3 */
  push32((uint32_t)(0x3u));
  /* 12ea31dc push 0x12eba550 */
  push32((uint32_t)(0x12eba550u));
  /* 12ea31e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea31e4 push eax */
  push32((uint32_t)(EAX));
  /* 12ea31e5 call 0x12ea7510 */
  push32(0x12ea31eau); f_12ea7510();
  /* 12ea31ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea31ed:;
  /* 12ea31ed mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea31f0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12ea31f6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea31fd je 0x12ea3248 */
  if (C.zf) goto L_12ea3248;
  /* 12ea31ff mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12ea3205 push edx */
  push32((uint32_t)(EDX));
  /* 12ea3206 call 0x12ea6b20 */
  push32(0x12ea320bu); f_12ea6b20();
  /* 12ea320b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea320e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3211 jbe 0x12ea3248 */
  if ((C.cf||C.zf)) goto L_12ea3248;
  /* 12ea3213 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12ea3219 push eax */
  push32((uint32_t)(EAX));
  /* 12ea321a call 0x12ea6b20 */
  push32(0x12ea321fu); f_12ea6b20();
  /* 12ea321f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3222 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12ea3228 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12ea322c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12ea3232 push 3 */
  push32((uint32_t)(0x3u));
  /* 12ea3234 push 0x12eba550 */
  push32((uint32_t)(0x12eba550u));
  /* 12ea3239 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12ea323f push eax */
  push32((uint32_t)(EAX));
  /* 12ea3240 call 0x12ea7510 */
  push32(0x12ea3245u); f_12ea7510();
  /* 12ea3245 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea3248:;
  /* 12ea3248 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea324c jne 0x12ea325a */
  if (!C.zf) goto L_12ea325a;
  /* 12ea324e mov dword ptr [ebp - 0x1114], 0x12eba4dc */
  w32((uint32_t)(EBP + -0x1114), (0x12eba4dcu));
  /* 12ea3258 jmp 0x12ea3264 */
  goto L_12ea3264;
L_12ea325a:;
  /* 12ea325a mov dword ptr [ebp - 0x1114], 0x12eba27c */
  w32((uint32_t)(EBP + -0x1114), (0x12eba27cu));
L_12ea3264:;
  /* 12ea3264 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea3267 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12ea326a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea326c je 0x12ea3279 */
  if (C.zf) goto L_12ea3279;
  /* 12ea326e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea3271 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12ea3277 jmp 0x12ea3283 */
  goto L_12ea3283;
L_12ea3279:;
  /* 12ea3279 mov dword ptr [ebp - 0x1118], 0x12eba27c */
  w32((uint32_t)(EBP + -0x1118), (0x12eba27cu));
L_12ea3283:;
  /* 12ea3283 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea3286 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12ea3289 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea328b je 0x12ea329f */
  if (C.zf) goto L_12ea329f;
  /* 12ea328d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3291 jne 0x12ea329f */
  if (!C.zf) goto L_12ea329f;
  /* 12ea3293 mov dword ptr [ebp - 0x111c], 0x12eba4cc */
  w32((uint32_t)(EBP + -0x111c), (0x12eba4ccu));
  /* 12ea329d jmp 0x12ea32a9 */
  goto L_12ea32a9;
L_12ea329f:;
  /* 12ea329f mov dword ptr [ebp - 0x111c], 0x12eba27c */
  w32((uint32_t)(EBP + -0x111c), (0x12eba27cu));
L_12ea32a9:;
  /* 12ea32a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea32ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ea32af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea32b1 je 0x12ea32bf */
  if (C.zf) goto L_12ea32bf;
  /* 12ea32b3 mov dword ptr [ebp - 0x1120], 0x12eba4c8 */
  w32((uint32_t)(EBP + -0x1120), (0x12eba4c8u));
  /* 12ea32bd jmp 0x12ea32c9 */
  goto L_12ea32c9;
L_12ea32bf:;
  /* 12ea32bf mov dword ptr [ebp - 0x1120], 0x12eba27c */
  w32((uint32_t)(EBP + -0x1120), (0x12eba27cu));
L_12ea32c9:;
  /* 12ea32c9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea32cd je 0x12ea32da */
  if (C.zf) goto L_12ea32da;
  /* 12ea32cf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea32d2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12ea32d8 jmp 0x12ea32e4 */
  goto L_12ea32e4;
L_12ea32da:;
  /* 12ea32da mov dword ptr [ebp - 0x1124], 0x12eba27c */
  w32((uint32_t)(EBP + -0x1124), (0x12eba27cu));
L_12ea32e4:;
  /* 12ea32e4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea32e8 je 0x12ea32f6 */
  if (C.zf) goto L_12ea32f6;
  /* 12ea32ea mov dword ptr [ebp - 0x1128], 0x12eba4c0 */
  w32((uint32_t)(EBP + -0x1128), (0x12eba4c0u));
  /* 12ea32f4 jmp 0x12ea3300 */
  goto L_12ea3300;
L_12ea32f6:;
  /* 12ea32f6 mov dword ptr [ebp - 0x1128], 0x12eba27c */
  w32((uint32_t)(EBP + -0x1128), (0x12eba27cu));
L_12ea3300:;
  /* 12ea3300 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3304 je 0x12ea3311 */
  if (C.zf) goto L_12ea3311;
  /* 12ea3306 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea3309 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 12ea330f jmp 0x12ea331b */
  goto L_12ea331b;
L_12ea3311:;
  /* 12ea3311 mov dword ptr [ebp - 0x112c], 0x12eba27c */
  w32((uint32_t)(EBP + -0x112c), (0x12eba27cu));
L_12ea331b:;
  /* 12ea331b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea331f je 0x12ea332d */
  if (C.zf) goto L_12ea332d;
  /* 12ea3321 mov dword ptr [ebp - 0x1130], 0x12eba4b8 */
  w32((uint32_t)(EBP + -0x1130), (0x12eba4b8u));
  /* 12ea332b jmp 0x12ea3337 */
  goto L_12ea3337;
L_12ea332d:;
  /* 12ea332d mov dword ptr [ebp - 0x1130], 0x12eba27c */
  w32((uint32_t)(EBP + -0x1130), (0x12eba27cu));
L_12ea3337:;
  /* 12ea3337 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea333e je 0x12ea334e */
  if (C.zf) goto L_12ea334e;
  /* 12ea3340 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12ea3346 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 12ea334c jmp 0x12ea3358 */
  goto L_12ea3358;
L_12ea334e:;
  /* 12ea334e mov dword ptr [ebp - 0x1134], 0x12eba27c */
  w32((uint32_t)(EBP + -0x1134), (0x12eba27cu));
L_12ea3358:;
  /* 12ea3358 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea335f je 0x12ea336d */
  if (C.zf) goto L_12ea336d;
  /* 12ea3361 mov dword ptr [ebp - 0x1138], 0x12eba4ac */
  w32((uint32_t)(EBP + -0x1138), (0x12eba4acu));
  /* 12ea336b jmp 0x12ea3377 */
  goto L_12ea3377;
L_12ea336d:;
  /* 12ea336d mov dword ptr [ebp - 0x1138], 0x12eba27c */
  w32((uint32_t)(EBP + -0x1138), (0x12eba27cu));
L_12ea3377:;
  /* 12ea3377 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 12ea337d push edx */
  push32((uint32_t)(EDX));
  /* 12ea337e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12ea3384 push eax */
  push32((uint32_t)(EAX));
  /* 12ea3385 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 12ea338b push ecx */
  push32((uint32_t)(ECX));
  /* 12ea338c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12ea3392 push edx */
  push32((uint32_t)(EDX));
  /* 12ea3393 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12ea3399 push eax */
  push32((uint32_t)(EAX));
  /* 12ea339a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12ea33a0 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea33a1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12ea33a7 push edx */
  push32((uint32_t)(EDX));
  /* 12ea33a8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 12ea33ae push eax */
  push32((uint32_t)(EAX));
  /* 12ea33af mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12ea33b5 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea33b6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 12ea33bc push edx */
  push32((uint32_t)(EDX));
  /* 12ea33bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea33c0 push eax */
  push32((uint32_t)(EAX));
  /* 12ea33c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea33c4 mov edx, dword ptr [ecx*4 + 0x12ebda68] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ebda68)));
  /* 12ea33cb push edx */
  push32((uint32_t)(EDX));
  /* 12ea33cc push 0x12eba458 */
  push32((uint32_t)(0x12eba458u));
  /* 12ea33d1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12ea33d6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 12ea33dc push eax */
  push32((uint32_t)(EAX));
  /* 12ea33dd call 0x12ea6ba0 */
  push32(0x12ea33e2u); f_12ea6ba0();
  /* 12ea33e2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea33e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea33e7 jge 0x12ea33fd */
  if ((C.sf==C.of)) goto L_12ea33fd;
  /* 12ea33e9 push 0x12eba3bc */
  push32((uint32_t)(0x12eba3bcu));
  /* 12ea33ee lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12ea33f4 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea33f5 call 0x12ea6ca0 */
  push32(0x12ea33fau); f_12ea6ca0();
  /* 12ea33fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea33fd:;
  /* 12ea33fd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12ea3402 push 0x12eba434 */
  push32((uint32_t)(0x12eba434u));
  /* 12ea3407 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 12ea340d push edx */
  push32((uint32_t)(EDX));
  /* 12ea340e call 0x12ea7450 */
  push32(0x12ea3413u); f_12ea7450();
  /* 12ea3413 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3416 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 12ea341c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3423 jne 0x12ea3436 */
  if (!C.zf) goto L_12ea3436;
  /* 12ea3425 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12ea3427 call 0x12ea7190 */
  push32(0x12ea342cu); f_12ea7190();
  /* 12ea342c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea342f push 3 */
  push32((uint32_t)(0x3u));
  /* 12ea3431 call 0x12ea34b0 */
  push32(0x12ea3436u); f_12ea34b0();
L_12ea3436:;
  /* 12ea3436 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea343d jne 0x12ea3446 */
  if (!C.zf) goto L_12ea3446;
  /* 12ea343f mov eax, 1 */
  EAX = (0x1u);
  /* 12ea3444 jmp 0x12ea3448 */
  goto L_12ea3448;
L_12ea3446:;
  /* 12ea3446 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ea3448:;
  /* 12ea3448 mov esp, ebp */
  ESP = (EBP);
  /* 12ea344a pop ebp */
  EBP = (pop32());
  /* 12ea344b ret  */
  ESPCHK(0x12ea3140u, _esp0);
  ESP += 4; return;
}

/* FUN_10003450 @ 0x12ea3450 (56 bytes, 15 insns) */
void f_12ea3450(void) {
  FTRACE(0x12ea3450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea3450 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea3451 mov ebp, esp */
  EBP = (ESP);
  /* 12ea3453 cmp dword ptr [0x12ec10fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ec10fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea345a je 0x12ea3462 */
  if (C.zf) goto L_12ea3462;
  /* 12ea345c call dword ptr [0x12ec10fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec10fc))), 0x12ea3462u);
L_12ea3462:;
  /* 12ea3462 push 0x12ebd418 */
  push32((uint32_t)(0x12ebd418u));
  /* 12ea3467 push 0x12ebd208 */
  push32((uint32_t)(0x12ebd208u));
  /* 12ea346c call 0x12ea3620 */
  push32(0x12ea3471u); f_12ea3620();
  /* 12ea3471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3474 push 0x12ebd104 */
  push32((uint32_t)(0x12ebd104u));
  /* 12ea3479 push 0x12ebd000 */
  push32((uint32_t)(0x12ebd000u));
  /* 12ea347e call 0x12ea3620 */
  push32(0x12ea3483u); f_12ea3620();
  /* 12ea3483 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3486 pop ebp */
  EBP = (pop32());
  /* 12ea3487 ret  */
  ESPCHK(0x12ea3450u, _esp0);
  ESP += 4; return;
}

/* FUN_10003490 @ 0x12ea3490 (21 bytes, 10 insns) */
void f_12ea3490(void) {
  FTRACE(0x12ea3490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea3490 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea3491 mov ebp, esp */
  EBP = (ESP);
  /* 12ea3493 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea3495 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea3497 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea349a push eax */
  push32((uint32_t)(EAX));
  /* 12ea349b call 0x12ea3510 */
  push32(0x12ea34a0u); f_12ea3510();
  /* 12ea34a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea34a3 pop ebp */
  EBP = (pop32());
  /* 12ea34a4 ret  */
  ESPCHK(0x12ea3490u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12ea34b0 (21 bytes, 10 insns) */
void f_12ea34b0(void) {
  FTRACE(0x12ea34b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea34b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea34b1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea34b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea34b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea34b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea34ba push eax */
  push32((uint32_t)(EAX));
  /* 12ea34bb call 0x12ea3510 */
  push32(0x12ea34c0u); f_12ea3510();
  /* 12ea34c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea34c3 pop ebp */
  EBP = (pop32());
  /* 12ea34c4 ret  */
  ESPCHK(0x12ea34b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100034d0 @ 0x12ea34d0 (19 bytes, 9 insns) */
void f_12ea34d0(void) {
  FTRACE(0x12ea34d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea34d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea34d1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea34d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea34d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea34d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea34d9 call 0x12ea3510 */
  push32(0x12ea34deu); f_12ea3510();
  /* 12ea34de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea34e1 pop ebp */
  EBP = (pop32());
  /* 12ea34e2 ret  */
  ESPCHK(0x12ea34d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100034f0 @ 0x12ea34f0 (19 bytes, 9 insns) */
void f_12ea34f0(void) {
  FTRACE(0x12ea34f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea34f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea34f1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea34f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea34f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea34f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea34f9 call 0x12ea3510 */
  push32(0x12ea34feu); f_12ea3510();
  /* 12ea34fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3501 pop ebp */
  EBP = (pop32());
  /* 12ea3502 ret  */
  ESPCHK(0x12ea34f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003510 @ 0x12ea3510 (227 bytes, 61 insns) */
void f_12ea3510(void) {
  FTRACE(0x12ea3510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea3510 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea3511 mov ebp, esp */
  EBP = (ESP);
  /* 12ea3513 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea3514 call 0x12ea3600 */
  push32(0x12ea3519u); f_12ea3600();
  /* 12ea3519 cmp dword ptr [0x12ebf60c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf60c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3520 jne 0x12ea3533 */
  if (!C.zf) goto L_12ea3533;
  /* 12ea3522 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3525 push eax */
  push32((uint32_t)(EAX));
  /* 12ea3526 call dword ptr [0x12ec2348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2348))), 0x12ea352cu);
  /* 12ea352c push eax */
  push32((uint32_t)(EAX));
  /* 12ea352d call dword ptr [0x12ec2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2344))), 0x12ea3533u);
L_12ea3533:;
  /* 12ea3533 mov dword ptr [0x12ebf608], 1 */
  w32((uint32_t)(0x12ebf608), (0x1u));
  /* 12ea353d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12ea3540 mov byte ptr [0x12ebf604], cl */
  w8((uint32_t)(0x12ebf604), (CL));
  /* 12ea3546 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea354a jne 0x12ea3593 */
  if (!C.zf) goto L_12ea3593;
  /* 12ea354c cmp dword ptr [0x12ec10f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ec10f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3553 je 0x12ea3581 */
  if (C.zf) goto L_12ea3581;
  /* 12ea3555 mov edx, dword ptr [0x12ec10f4] */
  EDX = (r32((uint32_t)(0x12ec10f4)));
  /* 12ea355b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12ea355e:;
  /* 12ea355e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea3561 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea3564 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea3567 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea356a cmp ecx, dword ptr [0x12ec10f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ec10f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3570 jb 0x12ea3581 */
  if (C.cf) goto L_12ea3581;
  /* 12ea3572 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea3575 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3578 je 0x12ea357f */
  if (C.zf) goto L_12ea357f;
  /* 12ea357a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea357d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x12ea357fu);
L_12ea357f:;
  /* 12ea357f jmp 0x12ea355e */
  goto L_12ea355e;
L_12ea3581:;
  /* 12ea3581 push 0x12ebd724 */
  push32((uint32_t)(0x12ebd724u));
  /* 12ea3586 push 0x12ebd51c */
  push32((uint32_t)(0x12ebd51cu));
  /* 12ea358b call 0x12ea3620 */
  push32(0x12ea3590u); f_12ea3620();
  /* 12ea3590 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea3593:;
  /* 12ea3593 push 0x12ebd92c */
  push32((uint32_t)(0x12ebd92cu));
  /* 12ea3598 push 0x12ebd828 */
  push32((uint32_t)(0x12ebd828u));
  /* 12ea359d call 0x12ea3620 */
  push32(0x12ea35a2u); f_12ea3620();
  /* 12ea35a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea35a5 cmp dword ptr [0x12ebf610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea35ac jne 0x12ea35ce */
  if (!C.zf) goto L_12ea35ce;
  /* 12ea35ae push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12ea35b0 call 0x12ea5200 */
  push32(0x12ea35b5u); f_12ea5200();
  /* 12ea35b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea35b8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12ea35bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea35bd je 0x12ea35ce */
  if (C.zf) goto L_12ea35ce;
  /* 12ea35bf mov dword ptr [0x12ebf610], 1 */
  w32((uint32_t)(0x12ebf610), (0x1u));
  /* 12ea35c9 call 0x12ea5b10 */
  push32(0x12ea35ceu); f_12ea5b10();
L_12ea35ce:;
  /* 12ea35ce cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea35d2 je 0x12ea35db */
  if (C.zf) goto L_12ea35db;
  /* 12ea35d4 call 0x12ea3610 */
  push32(0x12ea35d9u); f_12ea3610();
  /* 12ea35d9 jmp 0x12ea35ef */
  goto L_12ea35ef;
L_12ea35db:;
  /* 12ea35db mov dword ptr [0x12ebf60c], 1 */
  w32((uint32_t)(0x12ebf60c), (0x1u));
  /* 12ea35e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea35e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea35e9 call dword ptr [0x12ec2340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2340))), 0x12ea35efu);
L_12ea35ef:;
  /* 12ea35ef mov esp, ebp */
  ESP = (EBP);
  /* 12ea35f1 pop ebp */
  EBP = (pop32());
  /* 12ea35f2 ret  */
  ESPCHK(0x12ea3510u, _esp0);
  ESP += 4; return;
}

/* FUN_10003600 @ 0x12ea3600 (15 bytes, 7 insns) */
void f_12ea3600(void) {
  FTRACE(0x12ea3600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea3600 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea3601 mov ebp, esp */
  EBP = (ESP);
  /* 12ea3603 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12ea3605 call 0x12ea76f0 */
  push32(0x12ea360au); f_12ea76f0();
  /* 12ea360a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea360d pop ebp */
  EBP = (pop32());
  /* 12ea360e ret  */
  ESPCHK(0x12ea3600u, _esp0);
  ESP += 4; return;
}

/* FUN_10003610 @ 0x12ea3610 (15 bytes, 7 insns) */
void f_12ea3610(void) {
  FTRACE(0x12ea3610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea3610 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea3611 mov ebp, esp */
  EBP = (ESP);
  /* 12ea3613 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12ea3615 call 0x12ea7790 */
  push32(0x12ea361au); f_12ea7790();
  /* 12ea361a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea361d pop ebp */
  EBP = (pop32());
  /* 12ea361e ret  */
  ESPCHK(0x12ea3610u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12ea3620 (37 bytes, 16 insns) */
void f_12ea3620(void) {
  FTRACE(0x12ea3620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea3620 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea3621 mov ebp, esp */
  EBP = (ESP);
L_12ea3623:;
  /* 12ea3623 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3626 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3629 jae 0x12ea3643 */
  if (!C.cf) goto L_12ea3643;
  /* 12ea362b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea362e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3631 je 0x12ea3638 */
  if (C.zf) goto L_12ea3638;
  /* 12ea3633 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3636 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12ea3638u);
L_12ea3638:;
  /* 12ea3638 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea363b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea363e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ea3641 jmp 0x12ea3623 */
  goto L_12ea3623;
L_12ea3643:;
  /* 12ea3643 pop ebp */
  EBP = (pop32());
  /* 12ea3644 ret  */
  ESPCHK(0x12ea3620u, _esp0);
  ESP += 4; return;
}

/* FUN_10003650 @ 0x12ea3650 (130 bytes, 42 insns) */
void f_12ea3650(void) {
  FTRACE(0x12ea3650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea3650 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea3651 mov ebp, esp */
  EBP = (ESP);
  /* 12ea3653 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea3654 call 0x12ea7610 */
  push32(0x12ea3659u); f_12ea7610();
  /* 12ea3659 call dword ptr [0x12ec2354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2354))), 0x12ea365fu);
  /* 12ea365f mov dword ptr [0x12ebda74], eax */
  w32((uint32_t)(0x12ebda74), (EAX));
  /* 12ea3664 cmp dword ptr [0x12ebda74], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebda74))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea366b jne 0x12ea3671 */
  if (!C.zf) goto L_12ea3671;
  /* 12ea366d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea366f jmp 0x12ea36ce */
  goto L_12ea36ce;
L_12ea3671:;
  /* 12ea3671 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12ea3673 push 0x12eba590 */
  push32((uint32_t)(0x12eba590u));
  /* 12ea3678 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea367a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12ea367c push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea367e call 0x12ea4100 */
  push32(0x12ea3683u); f_12ea4100();
  /* 12ea3683 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3686 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea3689 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea368d je 0x12ea36a4 */
  if (C.zf) goto L_12ea36a4;
  /* 12ea368f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea3692 push eax */
  push32((uint32_t)(EAX));
  /* 12ea3693 mov ecx, dword ptr [0x12ebda74] */
  ECX = (r32((uint32_t)(0x12ebda74)));
  /* 12ea3699 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea369a call dword ptr [0x12ec2350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2350))), 0x12ea36a0u);
  /* 12ea36a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea36a2 jne 0x12ea36a8 */
  if (!C.zf) goto L_12ea36a8;
L_12ea36a4:;
  /* 12ea36a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea36a6 jmp 0x12ea36ce */
  goto L_12ea36ce;
L_12ea36a8:;
  /* 12ea36a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea36ab push edx */
  push32((uint32_t)(EDX));
  /* 12ea36ac call 0x12ea3710 */
  push32(0x12ea36b1u); f_12ea3710();
  /* 12ea36b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea36b4 call dword ptr [0x12ec234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec234c))), 0x12ea36bau);
  /* 12ea36ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea36bd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12ea36bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea36c2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12ea36c9 mov eax, 1 */
  EAX = (0x1u);
L_12ea36ce:;
  /* 12ea36ce mov esp, ebp */
  ESP = (EBP);
  /* 12ea36d0 pop ebp */
  EBP = (pop32());
  /* 12ea36d1 ret  */
  ESPCHK(0x12ea3650u, _esp0);
  ESP += 4; return;
}

/* FUN_100036e0 @ 0x12ea36e0 (41 bytes, 11 insns) */
void f_12ea36e0(void) {
  FTRACE(0x12ea36e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea36e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea36e1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea36e3 call 0x12ea7650 */
  push32(0x12ea36e8u); f_12ea7650();
  /* 12ea36e8 cmp dword ptr [0x12ebda74], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebda74))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea36ef je 0x12ea3707 */
  if (C.zf) goto L_12ea3707;
  /* 12ea36f1 mov eax, dword ptr [0x12ebda74] */
  EAX = (r32((uint32_t)(0x12ebda74)));
  /* 12ea36f6 push eax */
  push32((uint32_t)(EAX));
  /* 12ea36f7 call dword ptr [0x12ec2358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2358))), 0x12ea36fdu);
  /* 12ea36fd mov dword ptr [0x12ebda74], 0xffffffff */
  w32((uint32_t)(0x12ebda74), (0xffffffffu));
L_12ea3707:;
  /* 12ea3707 pop ebp */
  EBP = (pop32());
  /* 12ea3708 ret  */
  ESPCHK(0x12ea36e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003710 @ 0x12ea3710 (25 bytes, 8 insns) */
void f_12ea3710(void) {
  FTRACE(0x12ea3710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea3710 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea3711 mov ebp, esp */
  EBP = (ESP);
  /* 12ea3713 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3716 mov dword ptr [eax + 0x50], 0x12ebdc20 */
  w32((uint32_t)(EAX + 0x50), (0x12ebdc20u));
  /* 12ea371d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3720 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12ea3727 pop ebp */
  EBP = (pop32());
  /* 12ea3728 ret  */
  ESPCHK(0x12ea3710u, _esp0);
  ESP += 4; return;
}

/* FUN_10003730 @ 0x12ea3730 (152 bytes, 48 insns) */
void f_12ea3730(void) {
  FTRACE(0x12ea3730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea3730 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea3731 mov ebp, esp */
  EBP = (ESP);
  /* 12ea3733 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea3736 call dword ptr [0x12ec2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2364))), 0x12ea373cu);
  /* 12ea373c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ea373f mov eax, dword ptr [0x12ebda74] */
  EAX = (r32((uint32_t)(0x12ebda74)));
  /* 12ea3744 push eax */
  push32((uint32_t)(EAX));
  /* 12ea3745 call dword ptr [0x12ec228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec228c))), 0x12ea374bu);
  /* 12ea374b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea374e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3752 jne 0x12ea37b7 */
  if (!C.zf) goto L_12ea37b7;
  /* 12ea3754 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12ea3759 push 0x12eba590 */
  push32((uint32_t)(0x12eba590u));
  /* 12ea375e push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea3760 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12ea3762 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea3764 call 0x12ea4100 */
  push32(0x12ea3769u); f_12ea4100();
  /* 12ea3769 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea376c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea376f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3773 je 0x12ea37ad */
  if (C.zf) goto L_12ea37ad;
  /* 12ea3775 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea3778 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea3779 mov edx, dword ptr [0x12ebda74] */
  EDX = (r32((uint32_t)(0x12ebda74)));
  /* 12ea377f push edx */
  push32((uint32_t)(EDX));
  /* 12ea3780 call dword ptr [0x12ec2350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2350))), 0x12ea3786u);
  /* 12ea3786 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea3788 je 0x12ea37ad */
  if (C.zf) goto L_12ea37ad;
  /* 12ea378a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea378d push eax */
  push32((uint32_t)(EAX));
  /* 12ea378e call 0x12ea3710 */
  push32(0x12ea3793u); f_12ea3710();
  /* 12ea3793 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3796 call dword ptr [0x12ec234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec234c))), 0x12ea379cu);
  /* 12ea379c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea379f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12ea37a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea37a4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12ea37ab jmp 0x12ea37b7 */
  goto L_12ea37b7;
L_12ea37ad:;
  /* 12ea37ad push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12ea37af call 0x12ea2c60 */
  push32(0x12ea37b4u); f_12ea2c60();
  /* 12ea37b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea37b7:;
  /* 12ea37b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea37ba push eax */
  push32((uint32_t)(EAX));
  /* 12ea37bb call dword ptr [0x12ec2290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2290))), 0x12ea37c1u);
  /* 12ea37c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea37c4 mov esp, ebp */
  ESP = (EBP);
  /* 12ea37c6 pop ebp */
  EBP = (pop32());
  /* 12ea37c7 ret  */
  ESPCHK(0x12ea3730u, _esp0);
  ESP += 4; return;
}

/* FUN_100037d0 @ 0x12ea37d0 (263 bytes, 86 insns) */
void f_12ea37d0(void) {
  FTRACE(0x12ea37d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea37d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea37d1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea37d3 cmp dword ptr [0x12ebda74], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebda74))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea37da je 0x12ea38d5 */
  if (C.zf) goto L_12ea38d5;
  /* 12ea37e0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea37e4 jne 0x12ea37f5 */
  if (!C.zf) goto L_12ea37f5;
  /* 12ea37e6 mov eax, dword ptr [0x12ebda74] */
  EAX = (r32((uint32_t)(0x12ebda74)));
  /* 12ea37eb push eax */
  push32((uint32_t)(EAX));
  /* 12ea37ec call dword ptr [0x12ec228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec228c))), 0x12ea37f2u);
  /* 12ea37f2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12ea37f5:;
  /* 12ea37f5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea37f9 je 0x12ea38c6 */
  if (C.zf) goto L_12ea38c6;
  /* 12ea37ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3802 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3806 je 0x12ea3819 */
  if (C.zf) goto L_12ea3819;
  /* 12ea3808 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea380a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea380d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12ea3810 push eax */
  push32((uint32_t)(EAX));
  /* 12ea3811 call 0x12ea4780 */
  push32(0x12ea3816u); f_12ea4780();
  /* 12ea3816 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea3819:;
  /* 12ea3819 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea381c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3820 je 0x12ea3833 */
  if (C.zf) goto L_12ea3833;
  /* 12ea3822 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea3824 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3827 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 12ea382a push eax */
  push32((uint32_t)(EAX));
  /* 12ea382b call 0x12ea4780 */
  push32(0x12ea3830u); f_12ea4780();
  /* 12ea3830 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea3833:;
  /* 12ea3833 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3836 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea383a je 0x12ea384d */
  if (C.zf) goto L_12ea384d;
  /* 12ea383c push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea383e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3841 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12ea3844 push eax */
  push32((uint32_t)(EAX));
  /* 12ea3845 call 0x12ea4780 */
  push32(0x12ea384au); f_12ea4780();
  /* 12ea384a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea384d:;
  /* 12ea384d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3850 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3854 je 0x12ea3867 */
  if (C.zf) goto L_12ea3867;
  /* 12ea3856 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea3858 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea385b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 12ea385e push eax */
  push32((uint32_t)(EAX));
  /* 12ea385f call 0x12ea4780 */
  push32(0x12ea3864u); f_12ea4780();
  /* 12ea3864 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea3867:;
  /* 12ea3867 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea386a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea386e je 0x12ea3881 */
  if (C.zf) goto L_12ea3881;
  /* 12ea3870 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea3872 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3875 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12ea3878 push eax */
  push32((uint32_t)(EAX));
  /* 12ea3879 call 0x12ea4780 */
  push32(0x12ea387eu); f_12ea4780();
  /* 12ea387e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea3881:;
  /* 12ea3881 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3884 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3888 je 0x12ea389b */
  if (C.zf) goto L_12ea389b;
  /* 12ea388a push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea388c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea388f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12ea3892 push eax */
  push32((uint32_t)(EAX));
  /* 12ea3893 call 0x12ea4780 */
  push32(0x12ea3898u); f_12ea4780();
  /* 12ea3898 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea389b:;
  /* 12ea389b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea389e cmp dword ptr [ecx + 0x50], 0x12ebdc20 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x12ebdc20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea38a5 je 0x12ea38b8 */
  if (C.zf) goto L_12ea38b8;
  /* 12ea38a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea38a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea38ac mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12ea38af push eax */
  push32((uint32_t)(EAX));
  /* 12ea38b0 call 0x12ea4780 */
  push32(0x12ea38b5u); f_12ea4780();
  /* 12ea38b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea38b8:;
  /* 12ea38b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea38ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea38bd push ecx */
  push32((uint32_t)(ECX));
  /* 12ea38be call 0x12ea4780 */
  push32(0x12ea38c3u); f_12ea4780();
  /* 12ea38c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea38c6:;
  /* 12ea38c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea38c8 mov edx, dword ptr [0x12ebda74] */
  EDX = (r32((uint32_t)(0x12ebda74)));
  /* 12ea38ce push edx */
  push32((uint32_t)(EDX));
  /* 12ea38cf call dword ptr [0x12ec2350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2350))), 0x12ea38d5u);
L_12ea38d5:;
  /* 12ea38d5 pop ebp */
  EBP = (pop32());
  /* 12ea38d6 ret  */
  ESPCHK(0x12ea37d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100038e0 @ 0x12ea38e0 (11 bytes, 5 insns) */
void f_12ea38e0(void) {
  FTRACE(0x12ea38e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea38e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea38e1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea38e3 call dword ptr [0x12ec234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec234c))), 0x12ea38e9u);
  /* 12ea38e9 pop ebp */
  EBP = (pop32());
  /* 12ea38ea ret  */
  ESPCHK(0x12ea38e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100038f0 @ 0x12ea38f0 (11 bytes, 5 insns) */
void f_12ea38f0(void) {
  FTRACE(0x12ea38f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea38f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea38f1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea38f3 call dword ptr [0x12ec2368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2368))), 0x12ea38f9u);
  /* 12ea38f9 pop ebp */
  EBP = (pop32());
  /* 12ea38fa ret  */
  ESPCHK(0x12ea38f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003900 @ 0x12ea3900 (804 bytes, 236 insns) */
void f_12ea3900(void) {
  FTRACE(0x12ea3900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea3900 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea3901 mov ebp, esp */
  EBP = (ESP);
  /* 12ea3903 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea3906 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 12ea390b push 0x12eba59c */
  push32((uint32_t)(0x12eba59cu));
  /* 12ea3910 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea3912 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12ea3917 call 0x12ea3cf0 */
  push32(0x12ea391cu); f_12ea3cf0();
  /* 12ea391c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea391f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12ea3922 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3926 jne 0x12ea3932 */
  if (!C.zf) goto L_12ea3932;
  /* 12ea3928 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12ea392a call 0x12ea2c60 */
  push32(0x12ea392fu); f_12ea2c60();
  /* 12ea392f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea3932:;
  /* 12ea3932 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea3935 mov dword ptr [0x12ec0fa0], eax */
  w32((uint32_t)(0x12ec0fa0), (EAX));
  /* 12ea393a mov dword ptr [0x12ec10dc], 0x20 */
  w32((uint32_t)(0x12ec10dc), (0x20u));
  /* 12ea3944 jmp 0x12ea394f */
  goto L_12ea394f;
L_12ea3946:;
  /* 12ea3946 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea3949 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea394c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_12ea394f:;
  /* 12ea394f mov edx, dword ptr [0x12ec0fa0] */
  EDX = (r32((uint32_t)(0x12ec0fa0)));
  /* 12ea3955 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea395b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea395e jae 0x12ea3983 */
  if (!C.cf) goto L_12ea3983;
  /* 12ea3960 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea3963 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12ea3967 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea396a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12ea3970 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea3973 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12ea3977 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea397a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12ea3981 jmp 0x12ea3946 */
  goto L_12ea3946;
L_12ea3983:;
  /* 12ea3983 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12ea3986 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea3987 call dword ptr [0x12ec2374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2374))), 0x12ea398du);
  /* 12ea398d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12ea3990 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ea3996 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea3998 je 0x12ea3b25 */
  if (C.zf) goto L_12ea3b25;
  /* 12ea399e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea39a2 je 0x12ea3b25 */
  if (C.zf) goto L_12ea3b25;
  /* 12ea39a8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea39ab mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ea39ad mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12ea39b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea39b3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea39b6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ea39b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea39bc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea39bf mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12ea39c2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea39c9 jge 0x12ea39d3 */
  if ((C.sf==C.of)) goto L_12ea39d3;
  /* 12ea39cb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 12ea39ce mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12ea39d1 jmp 0x12ea39da */
  goto L_12ea39da;
L_12ea39d3:;
  /* 12ea39d3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_12ea39da:;
  /* 12ea39da mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 12ea39dd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12ea39e0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12ea39e7 jmp 0x12ea39f2 */
  goto L_12ea39f2;
L_12ea39e9:;
  /* 12ea39e9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12ea39ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea39ef mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12ea39f2:;
  /* 12ea39f2 mov ecx, dword ptr [0x12ec10dc] */
  ECX = (r32((uint32_t)(0x12ec10dc)));
  /* 12ea39f8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea39fb jge 0x12ea3a92 */
  if ((C.sf==C.of)) goto L_12ea3a92;
  /* 12ea3a01 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12ea3a06 push 0x12eba59c */
  push32((uint32_t)(0x12eba59cu));
  /* 12ea3a0b push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea3a0d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12ea3a12 call 0x12ea3cf0 */
  push32(0x12ea3a17u); f_12ea3cf0();
  /* 12ea3a17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3a1a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12ea3a1d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3a21 jne 0x12ea3a2e */
  if (!C.zf) goto L_12ea3a2e;
  /* 12ea3a23 mov edx, dword ptr [0x12ec10dc] */
  EDX = (r32((uint32_t)(0x12ec10dc)));
  /* 12ea3a29 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12ea3a2c jmp 0x12ea3a92 */
  goto L_12ea3a92;
L_12ea3a2e:;
  /* 12ea3a2e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12ea3a31 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea3a34 mov dword ptr [eax*4 + 0x12ec0fa0], ecx */
  w32((uint32_t)(EAX*4 + 0x12ec0fa0), (ECX));
  /* 12ea3a3b mov edx, dword ptr [0x12ec10dc] */
  EDX = (r32((uint32_t)(0x12ec10dc)));
  /* 12ea3a41 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3a44 mov dword ptr [0x12ec10dc], edx */
  w32((uint32_t)(0x12ec10dc), (EDX));
  /* 12ea3a4a jmp 0x12ea3a55 */
  goto L_12ea3a55;
L_12ea3a4c:;
  /* 12ea3a4c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea3a4f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3a52 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12ea3a55:;
  /* 12ea3a55 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12ea3a58 mov edx, dword ptr [ecx*4 + 0x12ec0fa0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ec0fa0)));
  /* 12ea3a5f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3a65 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3a68 jae 0x12ea3a8d */
  if (!C.cf) goto L_12ea3a8d;
  /* 12ea3a6a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea3a6d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12ea3a71 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea3a74 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12ea3a7a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea3a7d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12ea3a81 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea3a84 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12ea3a8b jmp 0x12ea3a4c */
  goto L_12ea3a4c;
L_12ea3a8d:;
  /* 12ea3a8d jmp 0x12ea39e9 */
  goto L_12ea39e9;
L_12ea3a92:;
  /* 12ea3a92 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12ea3a99 jmp 0x12ea3ab6 */
  goto L_12ea3ab6;
L_12ea3a9b:;
  /* 12ea3a9b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12ea3a9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3aa1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12ea3aa4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea3aa7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3aaa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ea3aad mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12ea3ab0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3ab3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12ea3ab6:;
  /* 12ea3ab6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12ea3ab9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3abc jge 0x12ea3b25 */
  if ((C.sf==C.of)) goto L_12ea3b25;
  /* 12ea3abe mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12ea3ac1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3ac4 je 0x12ea3b20 */
  if (C.zf) goto L_12ea3b20;
  /* 12ea3ac6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea3ac9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ea3acc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12ea3acf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea3ad1 je 0x12ea3b20 */
  if (C.zf) goto L_12ea3b20;
  /* 12ea3ad3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea3ad6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12ea3ad9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12ea3adc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea3ade jne 0x12ea3af0 */
  if (!C.zf) goto L_12ea3af0;
  /* 12ea3ae0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12ea3ae3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ea3ae5 push edx */
  push32((uint32_t)(EDX));
  /* 12ea3ae6 call dword ptr [0x12ec2370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2370))), 0x12ea3aecu);
  /* 12ea3aec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea3aee je 0x12ea3b20 */
  if (C.zf) goto L_12ea3b20;
L_12ea3af0:;
  /* 12ea3af0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12ea3af3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12ea3af6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12ea3af9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea3afc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea3aff mov edx, dword ptr [eax*4 + 0x12ec0fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12ec0fa0)));
  /* 12ea3b06 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3b08 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12ea3b0b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea3b0e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12ea3b11 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ea3b13 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12ea3b15 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea3b18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea3b1b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ea3b1d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12ea3b20:;
  /* 12ea3b20 jmp 0x12ea3a9b */
  goto L_12ea3a9b;
L_12ea3b25:;
  /* 12ea3b25 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12ea3b2c jmp 0x12ea3b37 */
  goto L_12ea3b37;
L_12ea3b2e:;
  /* 12ea3b2e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12ea3b31 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3b34 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12ea3b37:;
  /* 12ea3b37 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3b3b jge 0x12ea3c14 */
  if ((C.sf==C.of)) goto L_12ea3c14;
  /* 12ea3b41 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12ea3b44 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea3b47 mov edx, dword ptr [0x12ec0fa0] */
  EDX = (r32((uint32_t)(0x12ec0fa0)));
  /* 12ea3b4d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3b4f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12ea3b52 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea3b55 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3b58 jne 0x12ea3c00 */
  if (!C.zf) goto L_12ea3c00;
  /* 12ea3b5e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea3b61 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12ea3b65 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3b69 jne 0x12ea3b74 */
  if (!C.zf) goto L_12ea3b74;
  /* 12ea3b6b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12ea3b72 jmp 0x12ea3b84 */
  goto L_12ea3b84;
L_12ea3b74:;
  /* 12ea3b74 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12ea3b77 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea3b7a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12ea3b7c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea3b7e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3b81 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12ea3b84:;
  /* 12ea3b84 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12ea3b87 push eax */
  push32((uint32_t)(EAX));
  /* 12ea3b88 call dword ptr [0x12ec2320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2320))), 0x12ea3b8eu);
  /* 12ea3b8e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12ea3b91 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3b95 je 0x12ea3bef */
  if (C.zf) goto L_12ea3bef;
  /* 12ea3b97 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12ea3b9a push ecx */
  push32((uint32_t)(ECX));
  /* 12ea3b9b call dword ptr [0x12ec2370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2370))), 0x12ea3ba1u);
  /* 12ea3ba1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12ea3ba4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3ba8 je 0x12ea3bef */
  if (C.zf) goto L_12ea3bef;
  /* 12ea3baa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea3bad mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12ea3bb0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12ea3bb2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12ea3bb5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea3bbb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3bbe jne 0x12ea3bd0 */
  if (!C.zf) goto L_12ea3bd0;
  /* 12ea3bc0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea3bc3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12ea3bc6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12ea3bc8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea3bcb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 12ea3bce jmp 0x12ea3bed */
  goto L_12ea3bed;
L_12ea3bd0:;
  /* 12ea3bd0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12ea3bd3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ea3bd9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3bdc jne 0x12ea3bed */
  if (!C.zf) goto L_12ea3bed;
  /* 12ea3bde mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea3be1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12ea3be4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12ea3be7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea3bea mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12ea3bed:;
  /* 12ea3bed jmp 0x12ea3bfe */
  goto L_12ea3bfe;
L_12ea3bef:;
  /* 12ea3bef mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea3bf2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12ea3bf5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12ea3bf8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea3bfb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12ea3bfe:;
  /* 12ea3bfe jmp 0x12ea3c0f */
  goto L_12ea3c0f;
L_12ea3c00:;
  /* 12ea3c00 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea3c03 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12ea3c06 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12ea3c09 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea3c0c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12ea3c0f:;
  /* 12ea3c0f jmp 0x12ea3b2e */
  goto L_12ea3b2e;
L_12ea3c14:;
  /* 12ea3c14 mov eax, dword ptr [0x12ec10dc] */
  EAX = (r32((uint32_t)(0x12ec10dc)));
  /* 12ea3c19 push eax */
  push32((uint32_t)(EAX));
  /* 12ea3c1a call dword ptr [0x12ec236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec236c))), 0x12ea3c20u);
  /* 12ea3c20 mov esp, ebp */
  ESP = (EBP);
  /* 12ea3c22 pop ebp */
  EBP = (pop32());
  /* 12ea3c23 ret  */
  ESPCHK(0x12ea3900u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12ea3c30 (155 bytes, 45 insns) */
void f_12ea3c30(void) {
  FTRACE(0x12ea3c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea3c30 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea3c31 mov ebp, esp */
  EBP = (ESP);
  /* 12ea3c33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea3c36 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12ea3c3d jmp 0x12ea3c48 */
  goto L_12ea3c48;
L_12ea3c3f:;
  /* 12ea3c3f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea3c42 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3c45 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12ea3c48:;
  /* 12ea3c48 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3c4c jge 0x12ea3cc7 */
  if ((C.sf==C.of)) goto L_12ea3cc7;
  /* 12ea3c4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea3c51 cmp dword ptr [ecx*4 + 0x12ec0fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12ec0fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3c59 je 0x12ea3cc2 */
  if (C.zf) goto L_12ea3cc2;
  /* 12ea3c5b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea3c5e mov eax, dword ptr [edx*4 + 0x12ec0fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12ec0fa0)));
  /* 12ea3c65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea3c68 jmp 0x12ea3c73 */
  goto L_12ea3c73;
L_12ea3c6a:;
  /* 12ea3c6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea3c6d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3c70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12ea3c73:;
  /* 12ea3c73 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea3c76 mov eax, dword ptr [edx*4 + 0x12ec0fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12ec0fa0)));
  /* 12ea3c7d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3c82 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3c85 jae 0x12ea3c9f */
  if (!C.cf) goto L_12ea3c9f;
  /* 12ea3c87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea3c8a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3c8e je 0x12ea3c9d */
  if (C.zf) goto L_12ea3c9d;
  /* 12ea3c90 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea3c93 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3c96 push edx */
  push32((uint32_t)(EDX));
  /* 12ea3c97 call dword ptr [0x12ec2378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2378))), 0x12ea3c9du);
L_12ea3c9d:;
  /* 12ea3c9d jmp 0x12ea3c6a */
  goto L_12ea3c6a;
L_12ea3c9f:;
  /* 12ea3c9f push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea3ca1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea3ca4 mov ecx, dword ptr [eax*4 + 0x12ec0fa0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12ec0fa0)));
  /* 12ea3cab push ecx */
  push32((uint32_t)(ECX));
  /* 12ea3cac call 0x12ea4780 */
  push32(0x12ea3cb1u); f_12ea4780();
  /* 12ea3cb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3cb4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea3cb7 mov dword ptr [edx*4 + 0x12ec0fa0], 0 */
  w32((uint32_t)(EDX*4 + 0x12ec0fa0), (0x0u));
L_12ea3cc2:;
  /* 12ea3cc2 jmp 0x12ea3c3f */
  goto L_12ea3c3f;
L_12ea3cc7:;
  /* 12ea3cc7 mov esp, ebp */
  ESP = (EBP);
  /* 12ea3cc9 pop ebp */
  EBP = (pop32());
  /* 12ea3cca ret  */
  ESPCHK(0x12ea3c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cd0 @ 0x12ea3cd0 (29 bytes, 13 insns) */
void f_12ea3cd0(void) {
  FTRACE(0x12ea3cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea3cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea3cd1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea3cd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea3cd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea3cd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea3cd9 mov eax, dword ptr [0x12ebf7b8] */
  EAX = (r32((uint32_t)(0x12ebf7b8)));
  /* 12ea3cde push eax */
  push32((uint32_t)(EAX));
  /* 12ea3cdf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3ce2 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea3ce3 call 0x12ea3d40 */
  push32(0x12ea3ce8u); f_12ea3d40();
  /* 12ea3ce8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3ceb pop ebp */
  EBP = (pop32());
  /* 12ea3cec ret  */
  ESPCHK(0x12ea3cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cf0 @ 0x12ea3cf0 (35 bytes, 16 insns) */
void f_12ea3cf0(void) {
  FTRACE(0x12ea3cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea3cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea3cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea3cf3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea3cf6 push eax */
  push32((uint32_t)(EAX));
  /* 12ea3cf7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea3cfa push ecx */
  push32((uint32_t)(ECX));
  /* 12ea3cfb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea3cfe push edx */
  push32((uint32_t)(EDX));
  /* 12ea3cff mov eax, dword ptr [0x12ebf7b8] */
  EAX = (r32((uint32_t)(0x12ebf7b8)));
  /* 12ea3d04 push eax */
  push32((uint32_t)(EAX));
  /* 12ea3d05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3d08 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea3d09 call 0x12ea3d40 */
  push32(0x12ea3d0eu); f_12ea3d40();
  /* 12ea3d0e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3d11 pop ebp */
  EBP = (pop32());
  /* 12ea3d12 ret  */
  ESPCHK(0x12ea3cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d20 @ 0x12ea3d20 (27 bytes, 13 insns) */
void f_12ea3d20(void) {
  FTRACE(0x12ea3d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea3d20 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea3d21 mov ebp, esp */
  EBP = (ESP);
  /* 12ea3d23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea3d25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea3d27 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea3d29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea3d2c push eax */
  push32((uint32_t)(EAX));
  /* 12ea3d2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3d30 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea3d31 call 0x12ea3d40 */
  push32(0x12ea3d36u); f_12ea3d40();
  /* 12ea3d36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3d39 pop ebp */
  EBP = (pop32());
  /* 12ea3d3a ret  */
  ESPCHK(0x12ea3d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d40 @ 0x12ea3d40 (94 bytes, 38 insns) */
void f_12ea3d40(void) {
  FTRACE(0x12ea3d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea3d40 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea3d41 mov ebp, esp */
  EBP = (ESP);
  /* 12ea3d43 push ecx */
  push32((uint32_t)(ECX));
L_12ea3d44:;
  /* 12ea3d44 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea3d46 call 0x12ea76f0 */
  push32(0x12ea3d4bu); f_12ea76f0();
  /* 12ea3d4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3d4e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea3d51 push eax */
  push32((uint32_t)(EAX));
  /* 12ea3d52 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea3d55 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea3d56 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea3d59 push edx */
  push32((uint32_t)(EDX));
  /* 12ea3d5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3d5d push eax */
  push32((uint32_t)(EAX));
  /* 12ea3d5e call 0x12ea3dc0 */
  push32(0x12ea3d63u); f_12ea3dc0();
  /* 12ea3d63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3d66 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea3d69 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea3d6b call 0x12ea7790 */
  push32(0x12ea3d70u); f_12ea7790();
  /* 12ea3d70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3d73 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3d77 jne 0x12ea3d7f */
  if (!C.zf) goto L_12ea3d7f;
  /* 12ea3d79 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3d7d jne 0x12ea3d84 */
  if (!C.zf) goto L_12ea3d84;
L_12ea3d7f:;
  /* 12ea3d7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea3d82 jmp 0x12ea3d9a */
  goto L_12ea3d9a;
L_12ea3d84:;
  /* 12ea3d84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3d87 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea3d88 call 0x12ea7a30 */
  push32(0x12ea3d8du); f_12ea7a30();
  /* 12ea3d8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3d90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea3d92 jne 0x12ea3d98 */
  if (!C.zf) goto L_12ea3d98;
  /* 12ea3d94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea3d96 jmp 0x12ea3d9a */
  goto L_12ea3d9a;
L_12ea3d98:;
  /* 12ea3d98 jmp 0x12ea3d44 */
  goto L_12ea3d44;
L_12ea3d9a:;
  /* 12ea3d9a mov esp, ebp */
  ESP = (EBP);
  /* 12ea3d9c pop ebp */
  EBP = (pop32());
  /* 12ea3d9d ret  */
  ESPCHK(0x12ea3d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003da0 @ 0x12ea3da0 (23 bytes, 11 insns) */
void f_12ea3da0(void) {
  FTRACE(0x12ea3da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea3da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea3da1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea3da3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea3da5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea3da7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea3da9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3dac push eax */
  push32((uint32_t)(EAX));
  /* 12ea3dad call 0x12ea3dc0 */
  push32(0x12ea3db2u); f_12ea3dc0();
  /* 12ea3db2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3db5 pop ebp */
  EBP = (pop32());
  /* 12ea3db6 ret  */
  ESPCHK(0x12ea3da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003dc0 @ 0x12ea3dc0 (787 bytes, 254 insns) */
void f_12ea3dc0(void) {
  FTRACE(0x12ea3dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea3dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea3dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea3dc3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea3dc6 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea3dc7 push esi */
  push32((uint32_t)(ESI));
  /* 12ea3dc8 push edi */
  push32((uint32_t)(EDI));
  /* 12ea3dc9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12ea3dd0 mov eax, dword ptr [0x12ebda9c] */
  EAX = (r32((uint32_t)(0x12ebda9c)));
  /* 12ea3dd5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12ea3dd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea3dda je 0x12ea3e0c */
  if (C.zf) goto L_12ea3e0c;
L_12ea3ddc:;
  /* 12ea3ddc call 0x12ea4e90 */
  push32(0x12ea3de1u); f_12ea4e90();
  /* 12ea3de1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea3de3 jne 0x12ea3e06 */
  if (!C.zf) goto L_12ea3e06;
  /* 12ea3de5 push 0x12eba690 */
  push32((uint32_t)(0x12eba690u));
  /* 12ea3dea push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea3dec push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12ea3df1 push 0x12eba684 */
  push32((uint32_t)(0x12eba684u));
  /* 12ea3df6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea3df8 call 0x12ea2db0 */
  push32(0x12ea3dfdu); f_12ea2db0();
  /* 12ea3dfd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3e00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3e03 jne 0x12ea3e06 */
  if (!C.zf) goto L_12ea3e06;
  /* 12ea3e05 int3  */
  x86_unimpl("int3 @ 0x12ea3e05");
L_12ea3e06:;
  /* 12ea3e06 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea3e08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea3e0a jne 0x12ea3ddc */
  if (!C.zf) goto L_12ea3ddc;
L_12ea3e0c:;
  /* 12ea3e0c mov edx, dword ptr [0x12ebdaa0] */
  EDX = (r32((uint32_t)(0x12ebdaa0)));
  /* 12ea3e12 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12ea3e15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea3e18 cmp eax, dword ptr [0x12ebdaa4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ebdaa4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3e1e jne 0x12ea3e21 */
  if (!C.zf) goto L_12ea3e21;
  /* 12ea3e20 int3  */
  x86_unimpl("int3 @ 0x12ea3e20");
L_12ea3e21:;
  /* 12ea3e21 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea3e24 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea3e25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea3e28 push edx */
  push32((uint32_t)(EDX));
  /* 12ea3e29 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea3e2c push eax */
  push32((uint32_t)(EAX));
  /* 12ea3e2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea3e30 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea3e31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3e34 push edx */
  push32((uint32_t)(EDX));
  /* 12ea3e35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea3e37 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea3e39 call dword ptr [0x12ebdcb0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ebdcb0))), 0x12ea3e3fu);
  /* 12ea3e3f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3e42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea3e44 jne 0x12ea3ea4 */
  if (!C.zf) goto L_12ea3ea4;
  /* 12ea3e46 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3e4a je 0x12ea3e77 */
  if (C.zf) goto L_12ea3e77;
L_12ea3e4c:;
  /* 12ea3e4c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea3e4f push eax */
  push32((uint32_t)(EAX));
  /* 12ea3e50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea3e53 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea3e54 push 0x12eba64c */
  push32((uint32_t)(0x12eba64cu));
  /* 12ea3e59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea3e5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea3e5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea3e5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea3e61 call 0x12ea2db0 */
  push32(0x12ea3e66u); f_12ea2db0();
  /* 12ea3e66 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3e69 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3e6c jne 0x12ea3e6f */
  if (!C.zf) goto L_12ea3e6f;
  /* 12ea3e6e int3  */
  x86_unimpl("int3 @ 0x12ea3e6e");
L_12ea3e6f:;
  /* 12ea3e6f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea3e71 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea3e73 jne 0x12ea3e4c */
  if (!C.zf) goto L_12ea3e4c;
  /* 12ea3e75 jmp 0x12ea3e9d */
  goto L_12ea3e9d;
L_12ea3e77:;
  /* 12ea3e77 push 0x12eba628 */
  push32((uint32_t)(0x12eba628u));
  /* 12ea3e7c push 0x12eba624 */
  push32((uint32_t)(0x12eba624u));
  /* 12ea3e81 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea3e83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea3e85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea3e87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea3e89 call 0x12ea2db0 */
  push32(0x12ea3e8eu); f_12ea2db0();
  /* 12ea3e8e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3e91 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3e94 jne 0x12ea3e97 */
  if (!C.zf) goto L_12ea3e97;
  /* 12ea3e96 int3  */
  x86_unimpl("int3 @ 0x12ea3e96");
L_12ea3e97:;
  /* 12ea3e97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea3e99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea3e9b jne 0x12ea3e77 */
  if (!C.zf) goto L_12ea3e77;
L_12ea3e9d:;
  /* 12ea3e9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea3e9f jmp 0x12ea40cc */
  goto L_12ea40cc;
L_12ea3ea4:;
  /* 12ea3ea4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea3ea7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea3ead cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3eb0 je 0x12ea3ec6 */
  if (C.zf) goto L_12ea3ec6;
  /* 12ea3eb2 mov edx, dword ptr [0x12ebda9c] */
  EDX = (r32((uint32_t)(0x12ebda9c)));
  /* 12ea3eb8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12ea3ebb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea3ebd jne 0x12ea3ec6 */
  if (!C.zf) goto L_12ea3ec6;
  /* 12ea3ebf mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12ea3ec6:;
  /* 12ea3ec6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3eca ja 0x12ea3ed7 */
  if ((!C.cf&&!C.zf)) goto L_12ea3ed7;
  /* 12ea3ecc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3ecf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3ed2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3ed5 jbe 0x12ea3f03 */
  if ((C.cf||C.zf)) goto L_12ea3f03;
L_12ea3ed7:;
  /* 12ea3ed7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3eda push ecx */
  push32((uint32_t)(ECX));
  /* 12ea3edb push 0x12eba600 */
  push32((uint32_t)(0x12eba600u));
  /* 12ea3ee0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea3ee2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea3ee4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea3ee6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea3ee8 call 0x12ea2db0 */
  push32(0x12ea3eedu); f_12ea2db0();
  /* 12ea3eed add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3ef0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3ef3 jne 0x12ea3ef6 */
  if (!C.zf) goto L_12ea3ef6;
  /* 12ea3ef5 int3  */
  x86_unimpl("int3 @ 0x12ea3ef5");
L_12ea3ef6:;
  /* 12ea3ef6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea3ef8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea3efa jne 0x12ea3ed7 */
  if (!C.zf) goto L_12ea3ed7;
  /* 12ea3efc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea3efe jmp 0x12ea40cc */
  goto L_12ea40cc;
L_12ea3f03:;
  /* 12ea3f03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea3f06 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea3f0b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3f0e je 0x12ea3f50 */
  if (C.zf) goto L_12ea3f50;
  /* 12ea3f10 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3f14 je 0x12ea3f50 */
  if (C.zf) goto L_12ea3f50;
  /* 12ea3f16 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea3f19 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea3f1f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3f22 je 0x12ea3f50 */
  if (C.zf) goto L_12ea3f50;
  /* 12ea3f24 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3f28 je 0x12ea3f50 */
  if (C.zf) goto L_12ea3f50;
L_12ea3f2a:;
  /* 12ea3f2a push 0x12eba5cc */
  push32((uint32_t)(0x12eba5ccu));
  /* 12ea3f2f push 0x12eba624 */
  push32((uint32_t)(0x12eba624u));
  /* 12ea3f34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea3f36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea3f38 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea3f3a push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea3f3c call 0x12ea2db0 */
  push32(0x12ea3f41u); f_12ea2db0();
  /* 12ea3f41 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3f44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3f47 jne 0x12ea3f4a */
  if (!C.zf) goto L_12ea3f4a;
  /* 12ea3f49 int3  */
  x86_unimpl("int3 @ 0x12ea3f49");
L_12ea3f4a:;
  /* 12ea3f4a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea3f4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea3f4e jne 0x12ea3f2a */
  if (!C.zf) goto L_12ea3f2a;
L_12ea3f50:;
  /* 12ea3f50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3f53 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3f56 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12ea3f59 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea3f5c push ecx */
  push32((uint32_t)(ECX));
  /* 12ea3f5d call 0x12ea7b40 */
  push32(0x12ea3f62u); f_12ea7b40();
  /* 12ea3f62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3f65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea3f68 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3f6c jne 0x12ea3f75 */
  if (!C.zf) goto L_12ea3f75;
  /* 12ea3f6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea3f70 jmp 0x12ea40cc */
  goto L_12ea40cc;
L_12ea3f75:;
  /* 12ea3f75 mov edx, dword ptr [0x12ebdaa0] */
  EDX = (r32((uint32_t)(0x12ebdaa0)));
  /* 12ea3f7b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3f7e mov dword ptr [0x12ebdaa0], edx */
  w32((uint32_t)(0x12ebdaa0), (EDX));
  /* 12ea3f84 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3f88 je 0x12ea3fd3 */
  if (C.zf) goto L_12ea3fd3;
  /* 12ea3f8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea3f8d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12ea3f93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea3f96 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12ea3f9d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea3fa0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12ea3fa7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea3faa mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12ea3fb1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea3fb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea3fb7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12ea3fba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea3fbd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12ea3fc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea3fc7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12ea3fce jmp 0x12ea4073 */
  goto L_12ea4073;
L_12ea3fd3:;
  /* 12ea3fd3 mov edx, dword ptr [0x12ebf618] */
  EDX = (r32((uint32_t)(0x12ebf618)));
  /* 12ea3fd9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3fdc mov dword ptr [0x12ebf618], edx */
  w32((uint32_t)(0x12ebf618), (EDX));
  /* 12ea3fe2 mov eax, dword ptr [0x12ebf620] */
  EAX = (r32((uint32_t)(0x12ebf620)));
  /* 12ea3fe7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea3fea mov dword ptr [0x12ebf620], eax */
  w32((uint32_t)(0x12ebf620), (EAX));
  /* 12ea3fef mov ecx, dword ptr [0x12ebf620] */
  ECX = (r32((uint32_t)(0x12ebf620)));
  /* 12ea3ff5 cmp ecx, dword ptr [0x12ebf624] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ebf624))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea3ffb jbe 0x12ea4009 */
  if ((C.cf||C.zf)) goto L_12ea4009;
  /* 12ea3ffd mov edx, dword ptr [0x12ebf620] */
  EDX = (r32((uint32_t)(0x12ebf620)));
  /* 12ea4003 mov dword ptr [0x12ebf624], edx */
  w32((uint32_t)(0x12ebf624), (EDX));
L_12ea4009:;
  /* 12ea4009 cmp dword ptr [0x12ebf61c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf61c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4010 je 0x12ea401f */
  if (C.zf) goto L_12ea401f;
  /* 12ea4012 mov eax, dword ptr [0x12ebf61c] */
  EAX = (r32((uint32_t)(0x12ebf61c)));
  /* 12ea4017 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea401a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12ea401d jmp 0x12ea4028 */
  goto L_12ea4028;
L_12ea401f:;
  /* 12ea401f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4022 mov dword ptr [0x12ebf614], edx */
  w32((uint32_t)(0x12ebf614), (EDX));
L_12ea4028:;
  /* 12ea4028 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea402b mov ecx, dword ptr [0x12ebf61c] */
  ECX = (r32((uint32_t)(0x12ebf61c)));
  /* 12ea4031 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12ea4033 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4036 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 12ea403d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4040 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea4043 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12ea4046 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4049 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea404c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 12ea404f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4052 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea4055 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12ea4058 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea405b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea405e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12ea4061 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4064 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea4067 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12ea406a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea406d mov dword ptr [0x12ebf61c], ecx */
  w32((uint32_t)(0x12ebf61c), (ECX));
L_12ea4073:;
  /* 12ea4073 push 4 */
  push32((uint32_t)(0x4u));
  /* 12ea4075 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea4077 mov dl, byte ptr [0x12ebdaa8] */
  DL = (r8((uint32_t)(0x12ebdaa8)));
  /* 12ea407d push edx */
  push32((uint32_t)(EDX));
  /* 12ea407e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4081 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4084 push eax */
  push32((uint32_t)(EAX));
  /* 12ea4085 call 0x12ea7a60 */
  push32(0x12ea408au); f_12ea7a60();
  /* 12ea408a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea408d push 4 */
  push32((uint32_t)(0x4u));
  /* 12ea408f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea4091 mov cl, byte ptr [0x12ebdaa8] */
  CL = (r8((uint32_t)(0x12ebdaa8)));
  /* 12ea4097 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea4098 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea409b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea409e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12ea40a2 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea40a3 call 0x12ea7a60 */
  push32(0x12ea40a8u); f_12ea7a60();
  /* 12ea40a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea40ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea40ae push edx */
  push32((uint32_t)(EDX));
  /* 12ea40af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea40b1 mov al, byte ptr [0x12ebdaaa] */
  AL = (r8((uint32_t)(0x12ebdaaa)));
  /* 12ea40b6 push eax */
  push32((uint32_t)(EAX));
  /* 12ea40b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea40ba add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea40bd push ecx */
  push32((uint32_t)(ECX));
  /* 12ea40be call 0x12ea7a60 */
  push32(0x12ea40c3u); f_12ea7a60();
  /* 12ea40c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea40c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea40c9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12ea40cc:;
  /* 12ea40cc pop edi */
  EDI = (pop32());
  /* 12ea40cd pop esi */
  ESI = (pop32());
  /* 12ea40ce pop ebx */
  EBX = (pop32());
  /* 12ea40cf mov esp, ebp */
  ESP = (EBP);
  /* 12ea40d1 pop ebp */
  EBP = (pop32());
  /* 12ea40d2 ret  */
  ESPCHK(0x12ea3dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_100040e0 @ 0x12ea40e0 (27 bytes, 13 insns) */
void f_12ea40e0(void) {
  FTRACE(0x12ea40e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea40e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea40e1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea40e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea40e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea40e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea40e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea40ec push eax */
  push32((uint32_t)(EAX));
  /* 12ea40ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea40f0 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea40f1 call 0x12ea4100 */
  push32(0x12ea40f6u); f_12ea4100();
  /* 12ea40f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea40f9 pop ebp */
  EBP = (pop32());
  /* 12ea40fa ret  */
  ESPCHK(0x12ea40e0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12ea4100 (96 bytes, 37 insns) */
void f_12ea4100(void) {
  FTRACE(0x12ea4100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea4100 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea4101 mov ebp, esp */
  EBP = (ESP);
  /* 12ea4103 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea4106 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea4109 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea410d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12ea4110 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea4113 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea4114 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea4117 push edx */
  push32((uint32_t)(EDX));
  /* 12ea4118 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea411b push eax */
  push32((uint32_t)(EAX));
  /* 12ea411c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea411f push ecx */
  push32((uint32_t)(ECX));
  /* 12ea4120 call 0x12ea3cf0 */
  push32(0x12ea4125u); f_12ea3cf0();
  /* 12ea4125 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4128 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ea412b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea412f je 0x12ea4159 */
  if (C.zf) goto L_12ea4159;
  /* 12ea4131 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea4134 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12ea4137 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea413a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea413d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ea4140:;
  /* 12ea4140 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea4143 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4146 jae 0x12ea4159 */
  if (!C.cf) goto L_12ea4159;
  /* 12ea4148 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea414b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12ea414e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea4151 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4154 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ea4157 jmp 0x12ea4140 */
  goto L_12ea4140;
L_12ea4159:;
  /* 12ea4159 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea415c mov esp, ebp */
  ESP = (EBP);
  /* 12ea415e pop ebp */
  EBP = (pop32());
  /* 12ea415f ret  */
  ESPCHK(0x12ea4100u, _esp0);
  ESP += 4; return;
}

/* FUN_10004160 @ 0x12ea4160 (27 bytes, 13 insns) */
void f_12ea4160(void) {
  FTRACE(0x12ea4160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea4160 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea4161 mov ebp, esp */
  EBP = (ESP);
  /* 12ea4163 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4165 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4167 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea4169 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea416c push eax */
  push32((uint32_t)(EAX));
  /* 12ea416d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea4170 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea4171 call 0x12ea4180 */
  push32(0x12ea4176u); f_12ea4180();
  /* 12ea4176 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4179 pop ebp */
  EBP = (pop32());
  /* 12ea417a ret  */
  ESPCHK(0x12ea4160u, _esp0);
  ESP += 4; return;
}

/* FUN_10004180 @ 0x12ea4180 (64 bytes, 27 insns) */
void f_12ea4180(void) {
  FTRACE(0x12ea4180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea4180 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea4181 mov ebp, esp */
  EBP = (ESP);
  /* 12ea4183 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea4184 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea4186 call 0x12ea76f0 */
  push32(0x12ea418bu); f_12ea76f0();
  /* 12ea418b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea418e push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea4190 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea4193 push eax */
  push32((uint32_t)(EAX));
  /* 12ea4194 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea4197 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea4198 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea419b push edx */
  push32((uint32_t)(EDX));
  /* 12ea419c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea419f push eax */
  push32((uint32_t)(EAX));
  /* 12ea41a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea41a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea41a4 call 0x12ea41c0 */
  push32(0x12ea41a9u); f_12ea41c0();
  /* 12ea41a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea41ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea41af push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea41b1 call 0x12ea7790 */
  push32(0x12ea41b6u); f_12ea7790();
  /* 12ea41b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea41b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea41bc mov esp, ebp */
  ESP = (EBP);
  /* 12ea41be pop ebp */
  EBP = (pop32());
  /* 12ea41bf ret  */
  ESPCHK(0x12ea4180u, _esp0);
  ESP += 4; return;
}

/* FUN_100041c0 @ 0x12ea41c0 (1297 bytes, 431 insns) */
void f_12ea41c0(void) {
  FTRACE(0x12ea41c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea41c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea41c1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea41c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea41c6 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea41c7 push esi */
  push32((uint32_t)(ESI));
  /* 12ea41c8 push edi */
  push32((uint32_t)(EDI));
  /* 12ea41c9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12ea41d0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea41d4 jne 0x12ea41f3 */
  if (!C.zf) goto L_12ea41f3;
  /* 12ea41d6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea41d9 push eax */
  push32((uint32_t)(EAX));
  /* 12ea41da mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea41dd push ecx */
  push32((uint32_t)(ECX));
  /* 12ea41de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea41e1 push edx */
  push32((uint32_t)(EDX));
  /* 12ea41e2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea41e5 push eax */
  push32((uint32_t)(EAX));
  /* 12ea41e6 call 0x12ea3cf0 */
  push32(0x12ea41ebu); f_12ea3cf0();
  /* 12ea41eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea41ee jmp 0x12ea46ca */
  goto L_12ea46ca;
L_12ea41f3:;
  /* 12ea41f3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea41f7 je 0x12ea4216 */
  if (C.zf) goto L_12ea4216;
  /* 12ea41f9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea41fd jne 0x12ea4216 */
  if (!C.zf) goto L_12ea4216;
  /* 12ea41ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea4202 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea4203 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea4206 push edx */
  push32((uint32_t)(EDX));
  /* 12ea4207 call 0x12ea4780 */
  push32(0x12ea420cu); f_12ea4780();
  /* 12ea420c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea420f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea4211 jmp 0x12ea46ca */
  goto L_12ea46ca;
L_12ea4216:;
  /* 12ea4216 mov eax, dword ptr [0x12ebda9c] */
  EAX = (r32((uint32_t)(0x12ebda9c)));
  /* 12ea421b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12ea421e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea4220 je 0x12ea4252 */
  if (C.zf) goto L_12ea4252;
L_12ea4222:;
  /* 12ea4222 call 0x12ea4e90 */
  push32(0x12ea4227u); f_12ea4e90();
  /* 12ea4227 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea4229 jne 0x12ea424c */
  if (!C.zf) goto L_12ea424c;
  /* 12ea422b push 0x12eba690 */
  push32((uint32_t)(0x12eba690u));
  /* 12ea4230 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4232 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12ea4237 push 0x12eba684 */
  push32((uint32_t)(0x12eba684u));
  /* 12ea423c push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea423e call 0x12ea2db0 */
  push32(0x12ea4243u); f_12ea2db0();
  /* 12ea4243 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4246 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4249 jne 0x12ea424c */
  if (!C.zf) goto L_12ea424c;
  /* 12ea424b int3  */
  x86_unimpl("int3 @ 0x12ea424b");
L_12ea424c:;
  /* 12ea424c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea424e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea4250 jne 0x12ea4222 */
  if (!C.zf) goto L_12ea4222;
L_12ea4252:;
  /* 12ea4252 mov edx, dword ptr [0x12ebdaa0] */
  EDX = (r32((uint32_t)(0x12ebdaa0)));
  /* 12ea4258 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12ea425b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea425e cmp eax, dword ptr [0x12ebdaa4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ebdaa4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4264 jne 0x12ea4267 */
  if (!C.zf) goto L_12ea4267;
  /* 12ea4266 int3  */
  x86_unimpl("int3 @ 0x12ea4266");
L_12ea4267:;
  /* 12ea4267 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea426a push ecx */
  push32((uint32_t)(ECX));
  /* 12ea426b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea426e push edx */
  push32((uint32_t)(EDX));
  /* 12ea426f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea4272 push eax */
  push32((uint32_t)(EAX));
  /* 12ea4273 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea4276 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea4277 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea427a push edx */
  push32((uint32_t)(EDX));
  /* 12ea427b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea427e push eax */
  push32((uint32_t)(EAX));
  /* 12ea427f push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea4281 call dword ptr [0x12ebdcb0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ebdcb0))), 0x12ea4287u);
  /* 12ea4287 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea428a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea428c jne 0x12ea42ec */
  if (!C.zf) goto L_12ea42ec;
  /* 12ea428e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4292 je 0x12ea42bf */
  if (C.zf) goto L_12ea42bf;
L_12ea4294:;
  /* 12ea4294 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea4297 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea4298 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea429b push edx */
  push32((uint32_t)(EDX));
  /* 12ea429c push 0x12eba80c */
  push32((uint32_t)(0x12eba80cu));
  /* 12ea42a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea42a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea42a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea42a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea42a9 call 0x12ea2db0 */
  push32(0x12ea42aeu); f_12ea2db0();
  /* 12ea42ae add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea42b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea42b4 jne 0x12ea42b7 */
  if (!C.zf) goto L_12ea42b7;
  /* 12ea42b6 int3  */
  x86_unimpl("int3 @ 0x12ea42b6");
L_12ea42b7:;
  /* 12ea42b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea42b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea42bb jne 0x12ea4294 */
  if (!C.zf) goto L_12ea4294;
  /* 12ea42bd jmp 0x12ea42e5 */
  goto L_12ea42e5;
L_12ea42bf:;
  /* 12ea42bf push 0x12eba7e8 */
  push32((uint32_t)(0x12eba7e8u));
  /* 12ea42c4 push 0x12eba624 */
  push32((uint32_t)(0x12eba624u));
  /* 12ea42c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea42cb push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea42cd push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea42cf push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea42d1 call 0x12ea2db0 */
  push32(0x12ea42d6u); f_12ea2db0();
  /* 12ea42d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea42d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea42dc jne 0x12ea42df */
  if (!C.zf) goto L_12ea42df;
  /* 12ea42de int3  */
  x86_unimpl("int3 @ 0x12ea42de");
L_12ea42df:;
  /* 12ea42df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea42e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea42e3 jne 0x12ea42bf */
  if (!C.zf) goto L_12ea42bf;
L_12ea42e5:;
  /* 12ea42e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea42e7 jmp 0x12ea46ca */
  goto L_12ea46ca;
L_12ea42ec:;
  /* 12ea42ec cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea42f0 jbe 0x12ea431e */
  if ((C.cf||C.zf)) goto L_12ea431e;
L_12ea42f2:;
  /* 12ea42f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea42f5 push edx */
  push32((uint32_t)(EDX));
  /* 12ea42f6 push 0x12eba7b8 */
  push32((uint32_t)(0x12eba7b8u));
  /* 12ea42fb push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea42fd push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea42ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4301 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea4303 call 0x12ea2db0 */
  push32(0x12ea4308u); f_12ea2db0();
  /* 12ea4308 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea430b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea430e jne 0x12ea4311 */
  if (!C.zf) goto L_12ea4311;
  /* 12ea4310 int3  */
  x86_unimpl("int3 @ 0x12ea4310");
L_12ea4311:;
  /* 12ea4311 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea4313 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea4315 jne 0x12ea42f2 */
  if (!C.zf) goto L_12ea42f2;
  /* 12ea4317 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea4319 jmp 0x12ea46ca */
  goto L_12ea46ca;
L_12ea431e:;
  /* 12ea431e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4322 je 0x12ea4366 */
  if (C.zf) goto L_12ea4366;
  /* 12ea4324 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea4327 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea432d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4330 je 0x12ea4366 */
  if (C.zf) goto L_12ea4366;
  /* 12ea4332 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea4335 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ea433b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea433e je 0x12ea4366 */
  if (C.zf) goto L_12ea4366;
L_12ea4340:;
  /* 12ea4340 push 0x12eba5cc */
  push32((uint32_t)(0x12eba5ccu));
  /* 12ea4345 push 0x12eba624 */
  push32((uint32_t)(0x12eba624u));
  /* 12ea434a push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea434c push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea434e push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4350 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea4352 call 0x12ea2db0 */
  push32(0x12ea4357u); f_12ea2db0();
  /* 12ea4357 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea435a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea435d jne 0x12ea4360 */
  if (!C.zf) goto L_12ea4360;
  /* 12ea435f int3  */
  x86_unimpl("int3 @ 0x12ea435f");
L_12ea4360:;
  /* 12ea4360 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea4362 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea4364 jne 0x12ea4340 */
  if (!C.zf) goto L_12ea4340;
L_12ea4366:;
  /* 12ea4366 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea4369 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea436a call 0x12ea52f0 */
  push32(0x12ea436fu); f_12ea52f0();
  /* 12ea436f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4372 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea4374 jne 0x12ea4397 */
  if (!C.zf) goto L_12ea4397;
  /* 12ea4376 push 0x12eba794 */
  push32((uint32_t)(0x12eba794u));
  /* 12ea437b push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea437d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12ea4382 push 0x12eba684 */
  push32((uint32_t)(0x12eba684u));
  /* 12ea4387 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea4389 call 0x12ea2db0 */
  push32(0x12ea438eu); f_12ea2db0();
  /* 12ea438e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4391 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4394 jne 0x12ea4397 */
  if (!C.zf) goto L_12ea4397;
  /* 12ea4396 int3  */
  x86_unimpl("int3 @ 0x12ea4396");
L_12ea4397:;
  /* 12ea4397 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea4399 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea439b jne 0x12ea4366 */
  if (!C.zf) goto L_12ea4366;
  /* 12ea439d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea43a0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea43a3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ea43a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea43a9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea43ad jne 0x12ea43b6 */
  if (!C.zf) goto L_12ea43b6;
  /* 12ea43af mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12ea43b6:;
  /* 12ea43b6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea43ba je 0x12ea43fa */
  if (C.zf) goto L_12ea43fa;
L_12ea43bc:;
  /* 12ea43bc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea43bf cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea43c6 jne 0x12ea43d1 */
  if (!C.zf) goto L_12ea43d1;
  /* 12ea43c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea43cb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea43cf je 0x12ea43f2 */
  if (C.zf) goto L_12ea43f2;
L_12ea43d1:;
  /* 12ea43d1 push 0x12eba74c */
  push32((uint32_t)(0x12eba74cu));
  /* 12ea43d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea43d8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12ea43dd push 0x12eba684 */
  push32((uint32_t)(0x12eba684u));
  /* 12ea43e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea43e4 call 0x12ea2db0 */
  push32(0x12ea43e9u); f_12ea2db0();
  /* 12ea43e9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea43ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea43ef jne 0x12ea43f2 */
  if (!C.zf) goto L_12ea43f2;
  /* 12ea43f1 int3  */
  x86_unimpl("int3 @ 0x12ea43f1");
L_12ea43f2:;
  /* 12ea43f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea43f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea43f6 jne 0x12ea43bc */
  if (!C.zf) goto L_12ea43bc;
  /* 12ea43f8 jmp 0x12ea445e */
  goto L_12ea445e;
L_12ea43fa:;
  /* 12ea43fa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea43fd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ea4400 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea4405 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4408 jne 0x12ea441f */
  if (!C.zf) goto L_12ea441f;
  /* 12ea440a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea440d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea4413 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4416 jne 0x12ea441f */
  if (!C.zf) goto L_12ea441f;
  /* 12ea4418 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12ea441f:;
  /* 12ea441f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea4422 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ea4425 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea442a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea442d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea4433 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4435 je 0x12ea4458 */
  if (C.zf) goto L_12ea4458;
  /* 12ea4437 push 0x12eba710 */
  push32((uint32_t)(0x12eba710u));
  /* 12ea443c push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea443e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12ea4443 push 0x12eba684 */
  push32((uint32_t)(0x12eba684u));
  /* 12ea4448 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea444a call 0x12ea2db0 */
  push32(0x12ea444fu); f_12ea2db0();
  /* 12ea444f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4452 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4455 jne 0x12ea4458 */
  if (!C.zf) goto L_12ea4458;
  /* 12ea4457 int3  */
  x86_unimpl("int3 @ 0x12ea4457");
L_12ea4458:;
  /* 12ea4458 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea445a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea445c jne 0x12ea441f */
  if (!C.zf) goto L_12ea441f;
L_12ea445e:;
  /* 12ea445e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4462 je 0x12ea4489 */
  if (C.zf) goto L_12ea4489;
  /* 12ea4464 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea4467 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea446a push eax */
  push32((uint32_t)(EAX));
  /* 12ea446b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea446e push ecx */
  push32((uint32_t)(ECX));
  /* 12ea446f call 0x12ea7c70 */
  push32(0x12ea4474u); f_12ea7c70();
  /* 12ea4474 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4477 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ea447a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea447e jne 0x12ea4487 */
  if (!C.zf) goto L_12ea4487;
  /* 12ea4480 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea4482 jmp 0x12ea46ca */
  goto L_12ea46ca;
L_12ea4487:;
  /* 12ea4487 jmp 0x12ea44ac */
  goto L_12ea44ac;
L_12ea4489:;
  /* 12ea4489 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea448c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea448f push edx */
  push32((uint32_t)(EDX));
  /* 12ea4490 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea4493 push eax */
  push32((uint32_t)(EAX));
  /* 12ea4494 call 0x12ea7bc0 */
  push32(0x12ea4499u); f_12ea7bc0();
  /* 12ea4499 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea449c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ea449f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea44a3 jne 0x12ea44ac */
  if (!C.zf) goto L_12ea44ac;
  /* 12ea44a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea44a7 jmp 0x12ea46ca */
  goto L_12ea46ca;
L_12ea44ac:;
  /* 12ea44ac mov ecx, dword ptr [0x12ebdaa0] */
  ECX = (r32((uint32_t)(0x12ebdaa0)));
  /* 12ea44b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea44b5 mov dword ptr [0x12ebdaa0], ecx */
  w32((uint32_t)(0x12ebdaa0), (ECX));
  /* 12ea44bb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea44bf jne 0x12ea4517 */
  if (!C.zf) goto L_12ea4517;
  /* 12ea44c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea44c4 mov eax, dword ptr [0x12ebf618] */
  EAX = (r32((uint32_t)(0x12ebf618)));
  /* 12ea44c9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea44cc mov dword ptr [0x12ebf618], eax */
  w32((uint32_t)(0x12ebf618), (EAX));
  /* 12ea44d1 mov ecx, dword ptr [0x12ebf618] */
  ECX = (r32((uint32_t)(0x12ebf618)));
  /* 12ea44d7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea44da mov dword ptr [0x12ebf618], ecx */
  w32((uint32_t)(0x12ebf618), (ECX));
  /* 12ea44e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea44e3 mov eax, dword ptr [0x12ebf620] */
  EAX = (r32((uint32_t)(0x12ebf620)));
  /* 12ea44e8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea44eb mov dword ptr [0x12ebf620], eax */
  w32((uint32_t)(0x12ebf620), (EAX));
  /* 12ea44f0 mov ecx, dword ptr [0x12ebf620] */
  ECX = (r32((uint32_t)(0x12ebf620)));
  /* 12ea44f6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea44f9 mov dword ptr [0x12ebf620], ecx */
  w32((uint32_t)(0x12ebf620), (ECX));
  /* 12ea44ff mov edx, dword ptr [0x12ebf620] */
  EDX = (r32((uint32_t)(0x12ebf620)));
  /* 12ea4505 cmp edx, dword ptr [0x12ebf624] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12ebf624))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea450b jbe 0x12ea4517 */
  if ((C.cf||C.zf)) goto L_12ea4517;
  /* 12ea450d mov eax, dword ptr [0x12ebf620] */
  EAX = (r32((uint32_t)(0x12ebf620)));
  /* 12ea4512 mov dword ptr [0x12ebf624], eax */
  w32((uint32_t)(0x12ebf624), (EAX));
L_12ea4517:;
  /* 12ea4517 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea451a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea451d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ea4520 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea4523 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea4526 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4529 jbe 0x12ea454f */
  if ((C.cf||C.zf)) goto L_12ea454f;
  /* 12ea452b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea452e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea4531 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea4534 push edx */
  push32((uint32_t)(EDX));
  /* 12ea4535 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea4537 mov al, byte ptr [0x12ebdaaa] */
  AL = (r8((uint32_t)(0x12ebdaaa)));
  /* 12ea453c push eax */
  push32((uint32_t)(EAX));
  /* 12ea453d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea4540 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4543 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4546 push edx */
  push32((uint32_t)(EDX));
  /* 12ea4547 call 0x12ea7a60 */
  push32(0x12ea454cu); f_12ea7a60();
  /* 12ea454c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea454f:;
  /* 12ea454f push 4 */
  push32((uint32_t)(0x4u));
  /* 12ea4551 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea4553 mov al, byte ptr [0x12ebdaa8] */
  AL = (r8((uint32_t)(0x12ebdaa8)));
  /* 12ea4558 push eax */
  push32((uint32_t)(EAX));
  /* 12ea4559 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea455c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea455f push ecx */
  push32((uint32_t)(ECX));
  /* 12ea4560 call 0x12ea7a60 */
  push32(0x12ea4565u); f_12ea7a60();
  /* 12ea4565 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4568 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea456c jne 0x12ea4589 */
  if (!C.zf) goto L_12ea4589;
  /* 12ea456e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea4571 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea4574 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12ea4577 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea457a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea457d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12ea4580 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea4583 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea4586 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12ea4589:;
  /* 12ea4589 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea458c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea458f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12ea4592:;
  /* 12ea4592 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4596 jne 0x12ea45c7 */
  if (!C.zf) goto L_12ea45c7;
  /* 12ea4598 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea459c jne 0x12ea45a6 */
  if (!C.zf) goto L_12ea45a6;
  /* 12ea459e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea45a1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea45a4 je 0x12ea45c7 */
  if (C.zf) goto L_12ea45c7;
L_12ea45a6:;
  /* 12ea45a6 push 0x12eba6dc */
  push32((uint32_t)(0x12eba6dcu));
  /* 12ea45ab push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea45ad push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12ea45b2 push 0x12eba684 */
  push32((uint32_t)(0x12eba684u));
  /* 12ea45b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea45b9 call 0x12ea2db0 */
  push32(0x12ea45beu); f_12ea2db0();
  /* 12ea45be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea45c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea45c4 jne 0x12ea45c7 */
  if (!C.zf) goto L_12ea45c7;
  /* 12ea45c6 int3  */
  x86_unimpl("int3 @ 0x12ea45c6");
L_12ea45c7:;
  /* 12ea45c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea45c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea45cb jne 0x12ea4592 */
  if (!C.zf) goto L_12ea4592;
  /* 12ea45cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea45d0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea45d3 je 0x12ea45db */
  if (C.zf) goto L_12ea45db;
  /* 12ea45d5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea45d9 je 0x12ea45e3 */
  if (C.zf) goto L_12ea45e3;
L_12ea45db:;
  /* 12ea45db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea45de jmp 0x12ea46ca */
  goto L_12ea46ca;
L_12ea45e3:;
  /* 12ea45e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea45e6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea45e9 je 0x12ea45fb */
  if (C.zf) goto L_12ea45fb;
  /* 12ea45eb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea45ee mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ea45f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea45f3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12ea45f6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12ea45f9 jmp 0x12ea4637 */
  goto L_12ea4637;
L_12ea45fb:;
  /* 12ea45fb mov eax, dword ptr [0x12ebf614] */
  EAX = (r32((uint32_t)(0x12ebf614)));
  /* 12ea4600 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4603 je 0x12ea4626 */
  if (C.zf) goto L_12ea4626;
  /* 12ea4605 push 0x12eba6c0 */
  push32((uint32_t)(0x12eba6c0u));
  /* 12ea460a push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea460c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12ea4611 push 0x12eba684 */
  push32((uint32_t)(0x12eba684u));
  /* 12ea4616 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea4618 call 0x12ea2db0 */
  push32(0x12ea461du); f_12ea2db0();
  /* 12ea461d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4620 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4623 jne 0x12ea4626 */
  if (!C.zf) goto L_12ea4626;
  /* 12ea4625 int3  */
  x86_unimpl("int3 @ 0x12ea4625");
L_12ea4626:;
  /* 12ea4626 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea4628 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea462a jne 0x12ea45fb */
  if (!C.zf) goto L_12ea45fb;
  /* 12ea462c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea462f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12ea4632 mov dword ptr [0x12ebf614], eax */
  w32((uint32_t)(0x12ebf614), (EAX));
L_12ea4637:;
  /* 12ea4637 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea463a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea463e je 0x12ea464f */
  if (C.zf) goto L_12ea464f;
  /* 12ea4640 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea4643 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12ea4646 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea4649 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ea464b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12ea464d jmp 0x12ea468a */
  goto L_12ea468a;
L_12ea464f:;
  /* 12ea464f mov eax, dword ptr [0x12ebf61c] */
  EAX = (r32((uint32_t)(0x12ebf61c)));
  /* 12ea4654 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4657 je 0x12ea467a */
  if (C.zf) goto L_12ea467a;
  /* 12ea4659 push 0x12eba6a4 */
  push32((uint32_t)(0x12eba6a4u));
  /* 12ea465e push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4660 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12ea4665 push 0x12eba684 */
  push32((uint32_t)(0x12eba684u));
  /* 12ea466a push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea466c call 0x12ea2db0 */
  push32(0x12ea4671u); f_12ea2db0();
  /* 12ea4671 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4674 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4677 jne 0x12ea467a */
  if (!C.zf) goto L_12ea467a;
  /* 12ea4679 int3  */
  x86_unimpl("int3 @ 0x12ea4679");
L_12ea467a:;
  /* 12ea467a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea467c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea467e jne 0x12ea464f */
  if (!C.zf) goto L_12ea464f;
  /* 12ea4680 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea4683 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ea4685 mov dword ptr [0x12ebf61c], eax */
  w32((uint32_t)(0x12ebf61c), (EAX));
L_12ea468a:;
  /* 12ea468a cmp dword ptr [0x12ebf61c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf61c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4691 je 0x12ea46a1 */
  if (C.zf) goto L_12ea46a1;
  /* 12ea4693 mov ecx, dword ptr [0x12ebf61c] */
  ECX = (r32((uint32_t)(0x12ebf61c)));
  /* 12ea4699 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea469c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12ea469f jmp 0x12ea46a9 */
  goto L_12ea46a9;
L_12ea46a1:;
  /* 12ea46a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea46a4 mov dword ptr [0x12ebf614], eax */
  w32((uint32_t)(0x12ebf614), (EAX));
L_12ea46a9:;
  /* 12ea46a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea46ac mov edx, dword ptr [0x12ebf61c] */
  EDX = (r32((uint32_t)(0x12ebf61c)));
  /* 12ea46b2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12ea46b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea46b7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12ea46be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea46c1 mov dword ptr [0x12ebf61c], ecx */
  w32((uint32_t)(0x12ebf61c), (ECX));
  /* 12ea46c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12ea46ca:;
  /* 12ea46ca pop edi */
  EDI = (pop32());
  /* 12ea46cb pop esi */
  ESI = (pop32());
  /* 12ea46cc pop ebx */
  EBX = (pop32());
  /* 12ea46cd mov esp, ebp */
  ESP = (EBP);
  /* 12ea46cf pop ebp */
  EBP = (pop32());
  /* 12ea46d0 ret  */
  ESPCHK(0x12ea41c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100046e0 @ 0x12ea46e0 (27 bytes, 13 insns) */
void f_12ea46e0(void) {
  FTRACE(0x12ea46e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea46e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea46e1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea46e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea46e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea46e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea46e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea46ec push eax */
  push32((uint32_t)(EAX));
  /* 12ea46ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea46f0 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea46f1 call 0x12ea4700 */
  push32(0x12ea46f6u); f_12ea4700();
  /* 12ea46f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea46f9 pop ebp */
  EBP = (pop32());
  /* 12ea46fa ret  */
  ESPCHK(0x12ea46e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004700 @ 0x12ea4700 (64 bytes, 27 insns) */
void f_12ea4700(void) {
  FTRACE(0x12ea4700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea4700 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea4701 mov ebp, esp */
  EBP = (ESP);
  /* 12ea4703 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea4704 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea4706 call 0x12ea76f0 */
  push32(0x12ea470bu); f_12ea76f0();
  /* 12ea470b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea470e push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4710 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea4713 push eax */
  push32((uint32_t)(EAX));
  /* 12ea4714 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea4717 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea4718 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea471b push edx */
  push32((uint32_t)(EDX));
  /* 12ea471c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea471f push eax */
  push32((uint32_t)(EAX));
  /* 12ea4720 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea4723 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea4724 call 0x12ea41c0 */
  push32(0x12ea4729u); f_12ea41c0();
  /* 12ea4729 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea472c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea472f push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea4731 call 0x12ea7790 */
  push32(0x12ea4736u); f_12ea7790();
  /* 12ea4736 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4739 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea473c mov esp, ebp */
  ESP = (EBP);
  /* 12ea473e pop ebp */
  EBP = (pop32());
  /* 12ea473f ret  */
  ESPCHK(0x12ea4700u, _esp0);
  ESP += 4; return;
}

/* FUN_10004740 @ 0x12ea4740 (19 bytes, 9 insns) */
void f_12ea4740(void) {
  FTRACE(0x12ea4740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea4740 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea4741 mov ebp, esp */
  EBP = (ESP);
  /* 12ea4743 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea4745 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea4748 push eax */
  push32((uint32_t)(EAX));
  /* 12ea4749 call 0x12ea4780 */
  push32(0x12ea474eu); f_12ea4780();
  /* 12ea474e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4751 pop ebp */
  EBP = (pop32());
  /* 12ea4752 ret  */
  ESPCHK(0x12ea4740u, _esp0);
  ESP += 4; return;
}

/* FUN_10004760 @ 0x12ea4760 (19 bytes, 9 insns) */
void f_12ea4760(void) {
  FTRACE(0x12ea4760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea4760 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea4761 mov ebp, esp */
  EBP = (ESP);
  /* 12ea4763 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea4765 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea4768 push eax */
  push32((uint32_t)(EAX));
  /* 12ea4769 call 0x12ea47b0 */
  push32(0x12ea476eu); f_12ea47b0();
  /* 12ea476e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4771 pop ebp */
  EBP = (pop32());
  /* 12ea4772 ret  */
  ESPCHK(0x12ea4760u, _esp0);
  ESP += 4; return;
}

/* FUN_10004780 @ 0x12ea4780 (41 bytes, 16 insns) */
void f_12ea4780(void) {
  FTRACE(0x12ea4780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea4780 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea4781 mov ebp, esp */
  EBP = (ESP);
  /* 12ea4783 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea4785 call 0x12ea76f0 */
  push32(0x12ea478au); f_12ea76f0();
  /* 12ea478a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea478d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea4790 push eax */
  push32((uint32_t)(EAX));
  /* 12ea4791 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea4794 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea4795 call 0x12ea47b0 */
  push32(0x12ea479au); f_12ea47b0();
  /* 12ea479a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea479d push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea479f call 0x12ea7790 */
  push32(0x12ea47a4u); f_12ea7790();
  /* 12ea47a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea47a7 pop ebp */
  EBP = (pop32());
  /* 12ea47a8 ret  */
  ESPCHK(0x12ea4780u, _esp0);
  ESP += 4; return;
}

/* FUN_100047b0 @ 0x12ea47b0 (1004 bytes, 342 insns) */
void f_12ea47b0(void) {
  FTRACE(0x12ea47b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea47b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea47b1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea47b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea47b4 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea47b5 push esi */
  push32((uint32_t)(ESI));
  /* 12ea47b6 push edi */
  push32((uint32_t)(EDI));
  /* 12ea47b7 mov eax, dword ptr [0x12ebda9c] */
  EAX = (r32((uint32_t)(0x12ebda9c)));
  /* 12ea47bc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12ea47bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea47c1 je 0x12ea47f3 */
  if (C.zf) goto L_12ea47f3;
L_12ea47c3:;
  /* 12ea47c3 call 0x12ea4e90 */
  push32(0x12ea47c8u); f_12ea4e90();
  /* 12ea47c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea47ca jne 0x12ea47ed */
  if (!C.zf) goto L_12ea47ed;
  /* 12ea47cc push 0x12eba690 */
  push32((uint32_t)(0x12eba690u));
  /* 12ea47d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea47d3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12ea47d8 push 0x12eba684 */
  push32((uint32_t)(0x12eba684u));
  /* 12ea47dd push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea47df call 0x12ea2db0 */
  push32(0x12ea47e4u); f_12ea2db0();
  /* 12ea47e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea47e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea47ea jne 0x12ea47ed */
  if (!C.zf) goto L_12ea47ed;
  /* 12ea47ec int3  */
  x86_unimpl("int3 @ 0x12ea47ec");
L_12ea47ed:;
  /* 12ea47ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea47ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea47f1 jne 0x12ea47c3 */
  if (!C.zf) goto L_12ea47c3;
L_12ea47f3:;
  /* 12ea47f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea47f7 jne 0x12ea47fe */
  if (!C.zf) goto L_12ea47fe;
  /* 12ea47f9 jmp 0x12ea4b95 */
  goto L_12ea4b95;
L_12ea47fe:;
  /* 12ea47fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4800 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4802 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4804 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea4807 push edx */
  push32((uint32_t)(EDX));
  /* 12ea4808 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea480a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea480d push eax */
  push32((uint32_t)(EAX));
  /* 12ea480e push 3 */
  push32((uint32_t)(0x3u));
  /* 12ea4810 call dword ptr [0x12ebdcb0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ebdcb0))), 0x12ea4816u);
  /* 12ea4816 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4819 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea481b jne 0x12ea4848 */
  if (!C.zf) goto L_12ea4848;
L_12ea481d:;
  /* 12ea481d push 0x12eba954 */
  push32((uint32_t)(0x12eba954u));
  /* 12ea4822 push 0x12eba624 */
  push32((uint32_t)(0x12eba624u));
  /* 12ea4827 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4829 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea482b push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea482d push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea482f call 0x12ea2db0 */
  push32(0x12ea4834u); f_12ea2db0();
  /* 12ea4834 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4837 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea483a jne 0x12ea483d */
  if (!C.zf) goto L_12ea483d;
  /* 12ea483c int3  */
  x86_unimpl("int3 @ 0x12ea483c");
L_12ea483d:;
  /* 12ea483d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea483f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea4841 jne 0x12ea481d */
  if (!C.zf) goto L_12ea481d;
  /* 12ea4843 jmp 0x12ea4b95 */
  goto L_12ea4b95;
L_12ea4848:;
  /* 12ea4848 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea484b push edx */
  push32((uint32_t)(EDX));
  /* 12ea484c call 0x12ea52f0 */
  push32(0x12ea4851u); f_12ea52f0();
  /* 12ea4851 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4854 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea4856 jne 0x12ea4879 */
  if (!C.zf) goto L_12ea4879;
  /* 12ea4858 push 0x12eba794 */
  push32((uint32_t)(0x12eba794u));
  /* 12ea485d push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea485f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12ea4864 push 0x12eba684 */
  push32((uint32_t)(0x12eba684u));
  /* 12ea4869 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea486b call 0x12ea2db0 */
  push32(0x12ea4870u); f_12ea2db0();
  /* 12ea4870 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4873 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4876 jne 0x12ea4879 */
  if (!C.zf) goto L_12ea4879;
  /* 12ea4878 int3  */
  x86_unimpl("int3 @ 0x12ea4878");
L_12ea4879:;
  /* 12ea4879 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea487b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea487d jne 0x12ea4848 */
  if (!C.zf) goto L_12ea4848;
  /* 12ea487f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea4882 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea4885 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12ea4888:;
  /* 12ea4888 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea488b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ea488e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea4893 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4896 je 0x12ea48db */
  if (C.zf) goto L_12ea48db;
  /* 12ea4898 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea489b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea489f je 0x12ea48db */
  if (C.zf) goto L_12ea48db;
  /* 12ea48a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea48a4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ea48a7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea48ac cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea48af je 0x12ea48db */
  if (C.zf) goto L_12ea48db;
  /* 12ea48b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea48b4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea48b8 je 0x12ea48db */
  if (C.zf) goto L_12ea48db;
  /* 12ea48ba push 0x12eba92c */
  push32((uint32_t)(0x12eba92cu));
  /* 12ea48bf push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea48c1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12ea48c6 push 0x12eba684 */
  push32((uint32_t)(0x12eba684u));
  /* 12ea48cb push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea48cd call 0x12ea2db0 */
  push32(0x12ea48d2u); f_12ea2db0();
  /* 12ea48d2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea48d5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea48d8 jne 0x12ea48db */
  if (!C.zf) goto L_12ea48db;
  /* 12ea48da int3  */
  x86_unimpl("int3 @ 0x12ea48da");
L_12ea48db:;
  /* 12ea48db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea48dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea48df jne 0x12ea4888 */
  if (!C.zf) goto L_12ea4888;
  /* 12ea48e1 mov eax, dword ptr [0x12ebda9c] */
  EAX = (r32((uint32_t)(0x12ebda9c)));
  /* 12ea48e6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12ea48e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea48eb jne 0x12ea49b6 */
  if (!C.zf) goto L_12ea49b6;
  /* 12ea48f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 12ea48f3 mov cl, byte ptr [0x12ebdaa8] */
  CL = (r8((uint32_t)(0x12ebdaa8)));
  /* 12ea48f9 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea48fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea48fd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4900 push edx */
  push32((uint32_t)(EDX));
  /* 12ea4901 call 0x12ea4e00 */
  push32(0x12ea4906u); f_12ea4e00();
  /* 12ea4906 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4909 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea490b jne 0x12ea4950 */
  if (!C.zf) goto L_12ea4950;
L_12ea490d:;
  /* 12ea490d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4910 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4913 push eax */
  push32((uint32_t)(EAX));
  /* 12ea4914 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4917 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12ea491a push edx */
  push32((uint32_t)(EDX));
  /* 12ea491b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea491e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12ea4921 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea4927 mov edx, dword ptr [ecx*4 + 0x12ebdaac] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ebdaac)));
  /* 12ea492e push edx */
  push32((uint32_t)(EDX));
  /* 12ea492f push 0x12eba900 */
  push32((uint32_t)(0x12eba900u));
  /* 12ea4934 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4936 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4938 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea493a push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea493c call 0x12ea2db0 */
  push32(0x12ea4941u); f_12ea2db0();
  /* 12ea4941 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4944 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4947 jne 0x12ea494a */
  if (!C.zf) goto L_12ea494a;
  /* 12ea4949 int3  */
  x86_unimpl("int3 @ 0x12ea4949");
L_12ea494a:;
  /* 12ea494a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea494c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea494e jne 0x12ea490d */
  if (!C.zf) goto L_12ea490d;
L_12ea4950:;
  /* 12ea4950 push 4 */
  push32((uint32_t)(0x4u));
  /* 12ea4952 mov cl, byte ptr [0x12ebdaa8] */
  CL = (r8((uint32_t)(0x12ebdaa8)));
  /* 12ea4958 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea4959 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea495c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12ea495f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4962 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12ea4966 push edx */
  push32((uint32_t)(EDX));
  /* 12ea4967 call 0x12ea4e00 */
  push32(0x12ea496cu); f_12ea4e00();
  /* 12ea496c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea496f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea4971 jne 0x12ea49b6 */
  if (!C.zf) goto L_12ea49b6;
L_12ea4973:;
  /* 12ea4973 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4976 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4979 push eax */
  push32((uint32_t)(EAX));
  /* 12ea497a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea497d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12ea4980 push edx */
  push32((uint32_t)(EDX));
  /* 12ea4981 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4984 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12ea4987 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea498d mov edx, dword ptr [ecx*4 + 0x12ebdaac] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ebdaac)));
  /* 12ea4994 push edx */
  push32((uint32_t)(EDX));
  /* 12ea4995 push 0x12eba8d4 */
  push32((uint32_t)(0x12eba8d4u));
  /* 12ea499a push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea499c push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea499e push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea49a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea49a2 call 0x12ea2db0 */
  push32(0x12ea49a7u); f_12ea2db0();
  /* 12ea49a7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea49aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea49ad jne 0x12ea49b0 */
  if (!C.zf) goto L_12ea49b0;
  /* 12ea49af int3  */
  x86_unimpl("int3 @ 0x12ea49af");
L_12ea49b0:;
  /* 12ea49b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea49b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea49b4 jne 0x12ea4973 */
  if (!C.zf) goto L_12ea4973;
L_12ea49b6:;
  /* 12ea49b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea49b9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea49bd jne 0x12ea4a2b */
  if (!C.zf) goto L_12ea4a2b;
L_12ea49bf:;
  /* 12ea49bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea49c2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea49c9 jne 0x12ea49d4 */
  if (!C.zf) goto L_12ea49d4;
  /* 12ea49cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea49ce cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea49d2 je 0x12ea49f5 */
  if (C.zf) goto L_12ea49f5;
L_12ea49d4:;
  /* 12ea49d4 push 0x12eba894 */
  push32((uint32_t)(0x12eba894u));
  /* 12ea49d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea49db push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12ea49e0 push 0x12eba684 */
  push32((uint32_t)(0x12eba684u));
  /* 12ea49e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea49e7 call 0x12ea2db0 */
  push32(0x12ea49ecu); f_12ea2db0();
  /* 12ea49ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea49ef cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea49f2 jne 0x12ea49f5 */
  if (!C.zf) goto L_12ea49f5;
  /* 12ea49f4 int3  */
  x86_unimpl("int3 @ 0x12ea49f4");
L_12ea49f5:;
  /* 12ea49f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea49f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea49f9 jne 0x12ea49bf */
  if (!C.zf) goto L_12ea49bf;
  /* 12ea49fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea49fe mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12ea4a01 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4a04 push eax */
  push32((uint32_t)(EAX));
  /* 12ea4a05 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea4a07 mov cl, byte ptr [0x12ebdaa9] */
  CL = (r8((uint32_t)(0x12ebdaa9)));
  /* 12ea4a0d push ecx */
  push32((uint32_t)(ECX));
  /* 12ea4a0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4a11 push edx */
  push32((uint32_t)(EDX));
  /* 12ea4a12 call 0x12ea7a60 */
  push32(0x12ea4a17u); f_12ea7a60();
  /* 12ea4a17 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4a1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4a1d push eax */
  push32((uint32_t)(EAX));
  /* 12ea4a1e call 0x12ea7e60 */
  push32(0x12ea4a23u); f_12ea7e60();
  /* 12ea4a23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4a26 jmp 0x12ea4b95 */
  goto L_12ea4b95;
L_12ea4a2b:;
  /* 12ea4a2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4a2e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4a32 jne 0x12ea4a41 */
  if (!C.zf) goto L_12ea4a41;
  /* 12ea4a34 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4a38 jne 0x12ea4a41 */
  if (!C.zf) goto L_12ea4a41;
  /* 12ea4a3a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12ea4a41:;
  /* 12ea4a41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4a44 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ea4a47 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4a4a je 0x12ea4a6d */
  if (C.zf) goto L_12ea4a6d;
  /* 12ea4a4c push 0x12eba874 */
  push32((uint32_t)(0x12eba874u));
  /* 12ea4a51 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4a53 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12ea4a58 push 0x12eba684 */
  push32((uint32_t)(0x12eba684u));
  /* 12ea4a5d push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea4a5f call 0x12ea2db0 */
  push32(0x12ea4a64u); f_12ea2db0();
  /* 12ea4a64 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4a67 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4a6a jne 0x12ea4a6d */
  if (!C.zf) goto L_12ea4a6d;
  /* 12ea4a6c int3  */
  x86_unimpl("int3 @ 0x12ea4a6c");
L_12ea4a6d:;
  /* 12ea4a6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea4a6f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea4a71 jne 0x12ea4a41 */
  if (!C.zf) goto L_12ea4a41;
  /* 12ea4a73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4a76 mov eax, dword ptr [0x12ebf620] */
  EAX = (r32((uint32_t)(0x12ebf620)));
  /* 12ea4a7b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea4a7e mov dword ptr [0x12ebf620], eax */
  w32((uint32_t)(0x12ebf620), (EAX));
  /* 12ea4a83 mov ecx, dword ptr [0x12ebda9c] */
  ECX = (r32((uint32_t)(0x12ebda9c)));
  /* 12ea4a89 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12ea4a8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea4a8e jne 0x12ea4b6c */
  if (!C.zf) goto L_12ea4b6c;
  /* 12ea4a94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4a97 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4a9a je 0x12ea4aac */
  if (C.zf) goto L_12ea4aac;
  /* 12ea4a9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4a9f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ea4aa1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4aa4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12ea4aa7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12ea4aaa jmp 0x12ea4aea */
  goto L_12ea4aea;
L_12ea4aac:;
  /* 12ea4aac mov ecx, dword ptr [0x12ebf614] */
  ECX = (r32((uint32_t)(0x12ebf614)));
  /* 12ea4ab2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4ab5 je 0x12ea4ad8 */
  if (C.zf) goto L_12ea4ad8;
  /* 12ea4ab7 push 0x12eba85c */
  push32((uint32_t)(0x12eba85cu));
  /* 12ea4abc push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4abe push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12ea4ac3 push 0x12eba684 */
  push32((uint32_t)(0x12eba684u));
  /* 12ea4ac8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea4aca call 0x12ea2db0 */
  push32(0x12ea4acfu); f_12ea2db0();
  /* 12ea4acf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4ad2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4ad5 jne 0x12ea4ad8 */
  if (!C.zf) goto L_12ea4ad8;
  /* 12ea4ad7 int3  */
  x86_unimpl("int3 @ 0x12ea4ad7");
L_12ea4ad8:;
  /* 12ea4ad8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea4ada test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea4adc jne 0x12ea4aac */
  if (!C.zf) goto L_12ea4aac;
  /* 12ea4ade mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4ae1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12ea4ae4 mov dword ptr [0x12ebf614], ecx */
  w32((uint32_t)(0x12ebf614), (ECX));
L_12ea4aea:;
  /* 12ea4aea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4aed cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4af1 je 0x12ea4b02 */
  if (C.zf) goto L_12ea4b02;
  /* 12ea4af3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4af6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12ea4af9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4afc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ea4afe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12ea4b00 jmp 0x12ea4b3f */
  goto L_12ea4b3f;
L_12ea4b02:;
  /* 12ea4b02 mov ecx, dword ptr [0x12ebf61c] */
  ECX = (r32((uint32_t)(0x12ebf61c)));
  /* 12ea4b08 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4b0b je 0x12ea4b2e */
  if (C.zf) goto L_12ea4b2e;
  /* 12ea4b0d push 0x12eba844 */
  push32((uint32_t)(0x12eba844u));
  /* 12ea4b12 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4b14 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12ea4b19 push 0x12eba684 */
  push32((uint32_t)(0x12eba684u));
  /* 12ea4b1e push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea4b20 call 0x12ea2db0 */
  push32(0x12ea4b25u); f_12ea2db0();
  /* 12ea4b25 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4b28 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4b2b jne 0x12ea4b2e */
  if (!C.zf) goto L_12ea4b2e;
  /* 12ea4b2d int3  */
  x86_unimpl("int3 @ 0x12ea4b2d");
L_12ea4b2e:;
  /* 12ea4b2e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea4b30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea4b32 jne 0x12ea4b02 */
  if (!C.zf) goto L_12ea4b02;
  /* 12ea4b34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4b37 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ea4b39 mov dword ptr [0x12ebf61c], ecx */
  w32((uint32_t)(0x12ebf61c), (ECX));
L_12ea4b3f:;
  /* 12ea4b3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4b42 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12ea4b45 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4b48 push eax */
  push32((uint32_t)(EAX));
  /* 12ea4b49 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea4b4b mov cl, byte ptr [0x12ebdaa9] */
  CL = (r8((uint32_t)(0x12ebdaa9)));
  /* 12ea4b51 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea4b52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4b55 push edx */
  push32((uint32_t)(EDX));
  /* 12ea4b56 call 0x12ea7a60 */
  push32(0x12ea4b5bu); f_12ea7a60();
  /* 12ea4b5b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4b5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4b61 push eax */
  push32((uint32_t)(EAX));
  /* 12ea4b62 call 0x12ea7e60 */
  push32(0x12ea4b67u); f_12ea7e60();
  /* 12ea4b67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4b6a jmp 0x12ea4b95 */
  goto L_12ea4b95;
L_12ea4b6c:;
  /* 12ea4b6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4b6f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12ea4b76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4b79 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12ea4b7c push eax */
  push32((uint32_t)(EAX));
  /* 12ea4b7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea4b7f mov cl, byte ptr [0x12ebdaa9] */
  CL = (r8((uint32_t)(0x12ebdaa9)));
  /* 12ea4b85 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea4b86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4b89 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4b8c push edx */
  push32((uint32_t)(EDX));
  /* 12ea4b8d call 0x12ea7a60 */
  push32(0x12ea4b92u); f_12ea7a60();
  /* 12ea4b92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea4b95:;
  /* 12ea4b95 pop edi */
  EDI = (pop32());
  /* 12ea4b96 pop esi */
  ESI = (pop32());
  /* 12ea4b97 pop ebx */
  EBX = (pop32());
  /* 12ea4b98 mov esp, ebp */
  ESP = (EBP);
  /* 12ea4b9a pop ebp */
  EBP = (pop32());
  /* 12ea4b9b ret  */
  ESPCHK(0x12ea47b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ba0 @ 0x12ea4ba0 (19 bytes, 9 insns) */
void f_12ea4ba0(void) {
  FTRACE(0x12ea4ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea4ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea4ba1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea4ba3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea4ba5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea4ba8 push eax */
  push32((uint32_t)(EAX));
  /* 12ea4ba9 call 0x12ea4bc0 */
  push32(0x12ea4baeu); f_12ea4bc0();
  /* 12ea4bae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4bb1 pop ebp */
  EBP = (pop32());
  /* 12ea4bb2 ret  */
  ESPCHK(0x12ea4ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bc0 @ 0x12ea4bc0 (342 bytes, 119 insns) */
void f_12ea4bc0(void) {
  FTRACE(0x12ea4bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea4bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea4bc1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea4bc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea4bc6 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea4bc7 push esi */
  push32((uint32_t)(ESI));
  /* 12ea4bc8 push edi */
  push32((uint32_t)(EDI));
  /* 12ea4bc9 mov eax, dword ptr [0x12ebda9c] */
  EAX = (r32((uint32_t)(0x12ebda9c)));
  /* 12ea4bce and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12ea4bd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea4bd3 je 0x12ea4c05 */
  if (C.zf) goto L_12ea4c05;
L_12ea4bd5:;
  /* 12ea4bd5 call 0x12ea4e90 */
  push32(0x12ea4bdau); f_12ea4e90();
  /* 12ea4bda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea4bdc jne 0x12ea4bff */
  if (!C.zf) goto L_12ea4bff;
  /* 12ea4bde push 0x12eba690 */
  push32((uint32_t)(0x12eba690u));
  /* 12ea4be3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4be5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 12ea4bea push 0x12eba684 */
  push32((uint32_t)(0x12eba684u));
  /* 12ea4bef push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea4bf1 call 0x12ea2db0 */
  push32(0x12ea4bf6u); f_12ea2db0();
  /* 12ea4bf6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4bf9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4bfc jne 0x12ea4bff */
  if (!C.zf) goto L_12ea4bff;
  /* 12ea4bfe int3  */
  x86_unimpl("int3 @ 0x12ea4bfe");
L_12ea4bff:;
  /* 12ea4bff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea4c01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea4c03 jne 0x12ea4bd5 */
  if (!C.zf) goto L_12ea4bd5;
L_12ea4c05:;
  /* 12ea4c05 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea4c07 call 0x12ea76f0 */
  push32(0x12ea4c0cu); f_12ea76f0();
  /* 12ea4c0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea4c0f:;
  /* 12ea4c0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea4c12 push edx */
  push32((uint32_t)(EDX));
  /* 12ea4c13 call 0x12ea52f0 */
  push32(0x12ea4c18u); f_12ea52f0();
  /* 12ea4c18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4c1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea4c1d jne 0x12ea4c40 */
  if (!C.zf) goto L_12ea4c40;
  /* 12ea4c1f push 0x12eba794 */
  push32((uint32_t)(0x12eba794u));
  /* 12ea4c24 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4c26 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 12ea4c2b push 0x12eba684 */
  push32((uint32_t)(0x12eba684u));
  /* 12ea4c30 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea4c32 call 0x12ea2db0 */
  push32(0x12ea4c37u); f_12ea2db0();
  /* 12ea4c37 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4c3a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4c3d jne 0x12ea4c40 */
  if (!C.zf) goto L_12ea4c40;
  /* 12ea4c3f int3  */
  x86_unimpl("int3 @ 0x12ea4c3f");
L_12ea4c40:;
  /* 12ea4c40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea4c42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea4c44 jne 0x12ea4c0f */
  if (!C.zf) goto L_12ea4c0f;
  /* 12ea4c46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea4c49 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea4c4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12ea4c4f:;
  /* 12ea4c4f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea4c52 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ea4c55 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea4c5a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4c5d je 0x12ea4ca2 */
  if (C.zf) goto L_12ea4ca2;
  /* 12ea4c5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea4c62 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4c66 je 0x12ea4ca2 */
  if (C.zf) goto L_12ea4ca2;
  /* 12ea4c68 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea4c6b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ea4c6e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea4c73 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4c76 je 0x12ea4ca2 */
  if (C.zf) goto L_12ea4ca2;
  /* 12ea4c78 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea4c7b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4c7f je 0x12ea4ca2 */
  if (C.zf) goto L_12ea4ca2;
  /* 12ea4c81 push 0x12eba92c */
  push32((uint32_t)(0x12eba92cu));
  /* 12ea4c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4c88 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 12ea4c8d push 0x12eba684 */
  push32((uint32_t)(0x12eba684u));
  /* 12ea4c92 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea4c94 call 0x12ea2db0 */
  push32(0x12ea4c99u); f_12ea2db0();
  /* 12ea4c99 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4c9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4c9f jne 0x12ea4ca2 */
  if (!C.zf) goto L_12ea4ca2;
  /* 12ea4ca1 int3  */
  x86_unimpl("int3 @ 0x12ea4ca1");
L_12ea4ca2:;
  /* 12ea4ca2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea4ca4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea4ca6 jne 0x12ea4c4f */
  if (!C.zf) goto L_12ea4c4f;
  /* 12ea4ca8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea4cab cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4caf jne 0x12ea4cbe */
  if (!C.zf) goto L_12ea4cbe;
  /* 12ea4cb1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4cb5 jne 0x12ea4cbe */
  if (!C.zf) goto L_12ea4cbe;
  /* 12ea4cb7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12ea4cbe:;
  /* 12ea4cbe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea4cc1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4cc5 je 0x12ea4cf9 */
  if (C.zf) goto L_12ea4cf9;
L_12ea4cc7:;
  /* 12ea4cc7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea4cca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ea4ccd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4cd0 je 0x12ea4cf3 */
  if (C.zf) goto L_12ea4cf3;
  /* 12ea4cd2 push 0x12eba874 */
  push32((uint32_t)(0x12eba874u));
  /* 12ea4cd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4cd9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12ea4cde push 0x12eba684 */
  push32((uint32_t)(0x12eba684u));
  /* 12ea4ce3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea4ce5 call 0x12ea2db0 */
  push32(0x12ea4ceau); f_12ea2db0();
  /* 12ea4cea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4ced cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4cf0 jne 0x12ea4cf3 */
  if (!C.zf) goto L_12ea4cf3;
  /* 12ea4cf2 int3  */
  x86_unimpl("int3 @ 0x12ea4cf2");
L_12ea4cf3:;
  /* 12ea4cf3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea4cf5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea4cf7 jne 0x12ea4cc7 */
  if (!C.zf) goto L_12ea4cc7;
L_12ea4cf9:;
  /* 12ea4cf9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea4cfc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12ea4cff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea4d02 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea4d04 call 0x12ea7790 */
  push32(0x12ea4d09u); f_12ea7790();
  /* 12ea4d09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4d0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4d0f pop edi */
  EDI = (pop32());
  /* 12ea4d10 pop esi */
  ESI = (pop32());
  /* 12ea4d11 pop ebx */
  EBX = (pop32());
  /* 12ea4d12 mov esp, ebp */
  ESP = (EBP);
  /* 12ea4d14 pop ebp */
  EBP = (pop32());
  /* 12ea4d15 ret  */
  ESPCHK(0x12ea4bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d20 @ 0x12ea4d20 (28 bytes, 11 insns) */
void f_12ea4d20(void) {
  FTRACE(0x12ea4d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea4d20 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea4d21 mov ebp, esp */
  EBP = (ESP);
  /* 12ea4d23 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea4d24 mov eax, dword ptr [0x12ebdaa4] */
  EAX = (r32((uint32_t)(0x12ebdaa4)));
  /* 12ea4d29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea4d2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea4d2f mov dword ptr [0x12ebdaa4], ecx */
  w32((uint32_t)(0x12ebdaa4), (ECX));
  /* 12ea4d35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4d38 mov esp, ebp */
  ESP = (EBP);
  /* 12ea4d3a pop ebp */
  EBP = (pop32());
  /* 12ea4d3b ret  */
  ESPCHK(0x12ea4d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d40 @ 0x12ea4d40 (157 bytes, 59 insns) */
void f_12ea4d40(void) {
  FTRACE(0x12ea4d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea4d40 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea4d41 mov ebp, esp */
  EBP = (ESP);
  /* 12ea4d43 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea4d44 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea4d45 push esi */
  push32((uint32_t)(ESI));
  /* 12ea4d46 push edi */
  push32((uint32_t)(EDI));
  /* 12ea4d47 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea4d49 call 0x12ea76f0 */
  push32(0x12ea4d4eu); f_12ea76f0();
  /* 12ea4d4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4d51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea4d54 push eax */
  push32((uint32_t)(EAX));
  /* 12ea4d55 call 0x12ea52f0 */
  push32(0x12ea4d5au); f_12ea52f0();
  /* 12ea4d5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4d5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea4d5f je 0x12ea4dcc */
  if (C.zf) goto L_12ea4dcc;
  /* 12ea4d61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea4d64 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea4d67 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12ea4d6a:;
  /* 12ea4d6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4d6d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ea4d70 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea4d75 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4d78 je 0x12ea4dbd */
  if (C.zf) goto L_12ea4dbd;
  /* 12ea4d7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4d7d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4d81 je 0x12ea4dbd */
  if (C.zf) goto L_12ea4dbd;
  /* 12ea4d83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4d86 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ea4d89 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea4d8e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4d91 je 0x12ea4dbd */
  if (C.zf) goto L_12ea4dbd;
  /* 12ea4d93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4d96 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4d9a je 0x12ea4dbd */
  if (C.zf) goto L_12ea4dbd;
  /* 12ea4d9c push 0x12eba92c */
  push32((uint32_t)(0x12eba92cu));
  /* 12ea4da1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4da3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12ea4da8 push 0x12eba684 */
  push32((uint32_t)(0x12eba684u));
  /* 12ea4dad push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea4daf call 0x12ea2db0 */
  push32(0x12ea4db4u); f_12ea2db0();
  /* 12ea4db4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4db7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4dba jne 0x12ea4dbd */
  if (!C.zf) goto L_12ea4dbd;
  /* 12ea4dbc int3  */
  x86_unimpl("int3 @ 0x12ea4dbc");
L_12ea4dbd:;
  /* 12ea4dbd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea4dbf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea4dc1 jne 0x12ea4d6a */
  if (!C.zf) goto L_12ea4d6a;
  /* 12ea4dc3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4dc6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea4dc9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_12ea4dcc:;
  /* 12ea4dcc push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea4dce call 0x12ea7790 */
  push32(0x12ea4dd3u); f_12ea7790();
  /* 12ea4dd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4dd6 pop edi */
  EDI = (pop32());
  /* 12ea4dd7 pop esi */
  ESI = (pop32());
  /* 12ea4dd8 pop ebx */
  EBX = (pop32());
  /* 12ea4dd9 mov esp, ebp */
  ESP = (EBP);
  /* 12ea4ddb pop ebp */
  EBP = (pop32());
  /* 12ea4ddc ret  */
  ESPCHK(0x12ea4d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004de0 @ 0x12ea4de0 (28 bytes, 11 insns) */
void f_12ea4de0(void) {
  FTRACE(0x12ea4de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea4de0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea4de1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea4de3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea4de4 mov eax, dword ptr [0x12ebdcb0] */
  EAX = (r32((uint32_t)(0x12ebdcb0)));
  /* 12ea4de9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea4dec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea4def mov dword ptr [0x12ebdcb0], ecx */
  w32((uint32_t)(0x12ebdcb0), (ECX));
  /* 12ea4df5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4df8 mov esp, ebp */
  ESP = (EBP);
  /* 12ea4dfa pop ebp */
  EBP = (pop32());
  /* 12ea4dfb ret  */
  ESPCHK(0x12ea4de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e00 @ 0x12ea4e00 (136 bytes, 55 insns) */
void f_12ea4e00(void) {
  FTRACE(0x12ea4e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea4e00 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea4e01 mov ebp, esp */
  EBP = (ESP);
  /* 12ea4e03 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea4e04 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea4e05 push esi */
  push32((uint32_t)(ESI));
  /* 12ea4e06 push edi */
  push32((uint32_t)(EDI));
  /* 12ea4e07 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12ea4e0e:;
  /* 12ea4e0e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea4e11 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea4e14 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea4e17 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12ea4e1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea4e1c je 0x12ea4e7e */
  if (C.zf) goto L_12ea4e7e;
  /* 12ea4e1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea4e21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea4e23 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ea4e25 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea4e28 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea4e2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea4e31 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4e34 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12ea4e37 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4e39 je 0x12ea4e7c */
  if (C.zf) goto L_12ea4e7c;
L_12ea4e3b:;
  /* 12ea4e3b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea4e3e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea4e43 push eax */
  push32((uint32_t)(EAX));
  /* 12ea4e44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea4e47 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea4e49 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12ea4e4c push edx */
  push32((uint32_t)(EDX));
  /* 12ea4e4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea4e50 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea4e53 push eax */
  push32((uint32_t)(EAX));
  /* 12ea4e54 push 0x12eba970 */
  push32((uint32_t)(0x12eba970u));
  /* 12ea4e59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4e5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4e5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4e5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4e61 call 0x12ea2db0 */
  push32(0x12ea4e66u); f_12ea2db0();
  /* 12ea4e66 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4e69 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4e6c jne 0x12ea4e6f */
  if (!C.zf) goto L_12ea4e6f;
  /* 12ea4e6e int3  */
  x86_unimpl("int3 @ 0x12ea4e6e");
L_12ea4e6f:;
  /* 12ea4e6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea4e71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea4e73 jne 0x12ea4e3b */
  if (!C.zf) goto L_12ea4e3b;
  /* 12ea4e75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12ea4e7c:;
  /* 12ea4e7c jmp 0x12ea4e0e */
  goto L_12ea4e0e;
L_12ea4e7e:;
  /* 12ea4e7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea4e81 pop edi */
  EDI = (pop32());
  /* 12ea4e82 pop esi */
  ESI = (pop32());
  /* 12ea4e83 pop ebx */
  EBX = (pop32());
  /* 12ea4e84 mov esp, ebp */
  ESP = (EBP);
  /* 12ea4e86 pop ebp */
  EBP = (pop32());
  /* 12ea4e87 ret  */
  ESPCHK(0x12ea4e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e90 @ 0x12ea4e90 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12ea4e90(void) {
  FTRACE(0x12ea4e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea4e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea4e91 mov ebp, esp */
  EBP = (ESP);
  /* 12ea4e93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea4e96 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea4e97 push esi */
  push32((uint32_t)(ESI));
  /* 12ea4e98 push edi */
  push32((uint32_t)(EDI));
  /* 12ea4e99 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12ea4ea0 mov eax, dword ptr [0x12ebda9c] */
  EAX = (r32((uint32_t)(0x12ebda9c)));
  /* 12ea4ea5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12ea4ea8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea4eaa jne 0x12ea4eb6 */
  if (!C.zf) goto L_12ea4eb6;
  /* 12ea4eac mov eax, 1 */
  EAX = (0x1u);
  /* 12ea4eb1 jmp 0x12ea51e8 */
  goto L_12ea51e8;
L_12ea4eb6:;
  /* 12ea4eb6 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea4eb8 call 0x12ea76f0 */
  push32(0x12ea4ebdu); f_12ea76f0();
  /* 12ea4ebd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4ec0 call 0x12ea7ed0 */
  push32(0x12ea4ec5u); f_12ea7ed0();
  /* 12ea4ec5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ea4ec8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4ecc je 0x12ea4fd9 */
  if (C.zf) goto L_12ea4fd9;
  /* 12ea4ed2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4ed6 je 0x12ea4fd9 */
  if (C.zf) goto L_12ea4fd9;
  /* 12ea4edc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea4edf mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12ea4ee2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea4ee5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4ee8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12ea4eeb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4eef ja 0x12ea4fa2 */
  if ((!C.cf&&!C.zf)) goto L_12ea4fa2;
  /* 12ea4ef5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea4ef8 jmp dword ptr [eax*4 + 0x12ea51ef] */
  switch (EAX) {
    case 0: goto L_12ea4f7a;
    case 1: goto L_12ea4f52;
    case 2: goto L_12ea4f2a;
    case 3: goto L_12ea4eff;
    default: x86_unimpl("switch@0x12ea4ef8 out of table"); return;
  }
L_12ea4eff:;
  /* 12ea4eff push 0x12ebaac4 */
  push32((uint32_t)(0x12ebaac4u));
  /* 12ea4f04 push 0x12eba624 */
  push32((uint32_t)(0x12eba624u));
  /* 12ea4f09 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4f0b push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4f0d push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4f0f push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4f11 call 0x12ea2db0 */
  push32(0x12ea4f16u); f_12ea2db0();
  /* 12ea4f16 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4f19 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4f1c jne 0x12ea4f1f */
  if (!C.zf) goto L_12ea4f1f;
  /* 12ea4f1e int3  */
  x86_unimpl("int3 @ 0x12ea4f1e");
L_12ea4f1f:;
  /* 12ea4f1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea4f21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea4f23 jne 0x12ea4eff */
  if (!C.zf) goto L_12ea4eff;
  /* 12ea4f25 jmp 0x12ea4fc8 */
  goto L_12ea4fc8;
L_12ea4f2a:;
  /* 12ea4f2a push 0x12ebaaa0 */
  push32((uint32_t)(0x12ebaaa0u));
  /* 12ea4f2f push 0x12eba624 */
  push32((uint32_t)(0x12eba624u));
  /* 12ea4f34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4f36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4f38 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4f3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4f3c call 0x12ea2db0 */
  push32(0x12ea4f41u); f_12ea2db0();
  /* 12ea4f41 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4f44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4f47 jne 0x12ea4f4a */
  if (!C.zf) goto L_12ea4f4a;
  /* 12ea4f49 int3  */
  x86_unimpl("int3 @ 0x12ea4f49");
L_12ea4f4a:;
  /* 12ea4f4a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea4f4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea4f4e jne 0x12ea4f2a */
  if (!C.zf) goto L_12ea4f2a;
  /* 12ea4f50 jmp 0x12ea4fc8 */
  goto L_12ea4fc8;
L_12ea4f52:;
  /* 12ea4f52 push 0x12ebaa7c */
  push32((uint32_t)(0x12ebaa7cu));
  /* 12ea4f57 push 0x12eba624 */
  push32((uint32_t)(0x12eba624u));
  /* 12ea4f5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4f5e push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4f60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4f62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4f64 call 0x12ea2db0 */
  push32(0x12ea4f69u); f_12ea2db0();
  /* 12ea4f69 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4f6c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4f6f jne 0x12ea4f72 */
  if (!C.zf) goto L_12ea4f72;
  /* 12ea4f71 int3  */
  x86_unimpl("int3 @ 0x12ea4f71");
L_12ea4f72:;
  /* 12ea4f72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea4f74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea4f76 jne 0x12ea4f52 */
  if (!C.zf) goto L_12ea4f52;
  /* 12ea4f78 jmp 0x12ea4fc8 */
  goto L_12ea4fc8;
L_12ea4f7a:;
  /* 12ea4f7a push 0x12ebaa58 */
  push32((uint32_t)(0x12ebaa58u));
  /* 12ea4f7f push 0x12eba624 */
  push32((uint32_t)(0x12eba624u));
  /* 12ea4f84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4f86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4f88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4f8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4f8c call 0x12ea2db0 */
  push32(0x12ea4f91u); f_12ea2db0();
  /* 12ea4f91 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4f94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4f97 jne 0x12ea4f9a */
  if (!C.zf) goto L_12ea4f9a;
  /* 12ea4f99 int3  */
  x86_unimpl("int3 @ 0x12ea4f99");
L_12ea4f9a:;
  /* 12ea4f9a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea4f9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea4f9e jne 0x12ea4f7a */
  if (!C.zf) goto L_12ea4f7a;
  /* 12ea4fa0 jmp 0x12ea4fc8 */
  goto L_12ea4fc8;
L_12ea4fa2:;
  /* 12ea4fa2 push 0x12ebaa2c */
  push32((uint32_t)(0x12ebaa2cu));
  /* 12ea4fa7 push 0x12eba624 */
  push32((uint32_t)(0x12eba624u));
  /* 12ea4fac push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4fae push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4fb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4fb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea4fb4 call 0x12ea2db0 */
  push32(0x12ea4fb9u); f_12ea2db0();
  /* 12ea4fb9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4fbc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4fbf jne 0x12ea4fc2 */
  if (!C.zf) goto L_12ea4fc2;
  /* 12ea4fc1 int3  */
  x86_unimpl("int3 @ 0x12ea4fc1");
L_12ea4fc2:;
  /* 12ea4fc2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea4fc4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea4fc6 jne 0x12ea4fa2 */
  if (!C.zf) goto L_12ea4fa2;
L_12ea4fc8:;
  /* 12ea4fc8 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea4fca call 0x12ea7790 */
  push32(0x12ea4fcfu); f_12ea7790();
  /* 12ea4fcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea4fd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea4fd4 jmp 0x12ea51e8 */
  goto L_12ea51e8;
L_12ea4fd9:;
  /* 12ea4fd9 mov eax, dword ptr [0x12ebf61c] */
  EAX = (r32((uint32_t)(0x12ebf61c)));
  /* 12ea4fde mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ea4fe1 jmp 0x12ea4feb */
  goto L_12ea4feb;
L_12ea4fe3:;
  /* 12ea4fe3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea4fe6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ea4fe8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12ea4feb:;
  /* 12ea4feb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea4fef je 0x12ea51db */
  if (C.zf) goto L_12ea51db;
  /* 12ea4ff5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12ea4ffc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea4fff mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12ea5002 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea5008 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea500b je 0x12ea5030 */
  if (C.zf) goto L_12ea5030;
  /* 12ea500d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea5010 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5014 je 0x12ea5030 */
  if (C.zf) goto L_12ea5030;
  /* 12ea5016 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea5019 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12ea501c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea5022 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5025 je 0x12ea5030 */
  if (C.zf) goto L_12ea5030;
  /* 12ea5027 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea502a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea502e jne 0x12ea5048 */
  if (!C.zf) goto L_12ea5048;
L_12ea5030:;
  /* 12ea5030 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea5033 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12ea5036 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea503c mov edx, dword ptr [ecx*4 + 0x12ebdaac] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ebdaac)));
  /* 12ea5043 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12ea5046 jmp 0x12ea504f */
  goto L_12ea504f;
L_12ea5048:;
  /* 12ea5048 mov dword ptr [ebp - 0x14], 0x12ebaa24 */
  w32((uint32_t)(EBP + -0x14), (0x12ebaa24u));
L_12ea504f:;
  /* 12ea504f push 4 */
  push32((uint32_t)(0x4u));
  /* 12ea5051 mov al, byte ptr [0x12ebdaa8] */
  AL = (r8((uint32_t)(0x12ebdaa8)));
  /* 12ea5056 push eax */
  push32((uint32_t)(EAX));
  /* 12ea5057 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea505a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea505d push ecx */
  push32((uint32_t)(ECX));
  /* 12ea505e call 0x12ea4e00 */
  push32(0x12ea5063u); f_12ea4e00();
  /* 12ea5063 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5066 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea5068 jne 0x12ea50a4 */
  if (!C.zf) goto L_12ea50a4;
L_12ea506a:;
  /* 12ea506a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea506d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5070 push edx */
  push32((uint32_t)(EDX));
  /* 12ea5071 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea5074 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12ea5077 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea5078 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea507b push edx */
  push32((uint32_t)(EDX));
  /* 12ea507c push 0x12eba900 */
  push32((uint32_t)(0x12eba900u));
  /* 12ea5081 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5083 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5085 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5087 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5089 call 0x12ea2db0 */
  push32(0x12ea508eu); f_12ea2db0();
  /* 12ea508e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5091 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5094 jne 0x12ea5097 */
  if (!C.zf) goto L_12ea5097;
  /* 12ea5096 int3  */
  x86_unimpl("int3 @ 0x12ea5096");
L_12ea5097:;
  /* 12ea5097 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea5099 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea509b jne 0x12ea506a */
  if (!C.zf) goto L_12ea506a;
  /* 12ea509d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12ea50a4:;
  /* 12ea50a4 push 4 */
  push32((uint32_t)(0x4u));
  /* 12ea50a6 mov cl, byte ptr [0x12ebdaa8] */
  CL = (r8((uint32_t)(0x12ebdaa8)));
  /* 12ea50ac push ecx */
  push32((uint32_t)(ECX));
  /* 12ea50ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea50b0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12ea50b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea50b6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12ea50ba push edx */
  push32((uint32_t)(EDX));
  /* 12ea50bb call 0x12ea4e00 */
  push32(0x12ea50c0u); f_12ea4e00();
  /* 12ea50c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea50c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea50c5 jne 0x12ea5101 */
  if (!C.zf) goto L_12ea5101;
L_12ea50c7:;
  /* 12ea50c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea50ca add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea50cd push eax */
  push32((uint32_t)(EAX));
  /* 12ea50ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea50d1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12ea50d4 push edx */
  push32((uint32_t)(EDX));
  /* 12ea50d5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea50d8 push eax */
  push32((uint32_t)(EAX));
  /* 12ea50d9 push 0x12eba8d4 */
  push32((uint32_t)(0x12eba8d4u));
  /* 12ea50de push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea50e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea50e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea50e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea50e6 call 0x12ea2db0 */
  push32(0x12ea50ebu); f_12ea2db0();
  /* 12ea50eb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea50ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea50f1 jne 0x12ea50f4 */
  if (!C.zf) goto L_12ea50f4;
  /* 12ea50f3 int3  */
  x86_unimpl("int3 @ 0x12ea50f3");
L_12ea50f4:;
  /* 12ea50f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea50f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea50f8 jne 0x12ea50c7 */
  if (!C.zf) goto L_12ea50c7;
  /* 12ea50fa mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12ea5101:;
  /* 12ea5101 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea5104 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5108 jne 0x12ea515a */
  if (!C.zf) goto L_12ea515a;
  /* 12ea510a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea510d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12ea5110 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea5111 mov dl, byte ptr [0x12ebdaa9] */
  DL = (r8((uint32_t)(0x12ebdaa9)));
  /* 12ea5117 push edx */
  push32((uint32_t)(EDX));
  /* 12ea5118 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea511b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea511e push eax */
  push32((uint32_t)(EAX));
  /* 12ea511f call 0x12ea4e00 */
  push32(0x12ea5124u); f_12ea4e00();
  /* 12ea5124 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5127 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea5129 jne 0x12ea515a */
  if (!C.zf) goto L_12ea515a;
L_12ea512b:;
  /* 12ea512b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea512e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5131 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea5132 push 0x12eba9f8 */
  push32((uint32_t)(0x12eba9f8u));
  /* 12ea5137 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5139 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea513b push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea513d push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea513f call 0x12ea2db0 */
  push32(0x12ea5144u); f_12ea2db0();
  /* 12ea5144 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5147 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea514a jne 0x12ea514d */
  if (!C.zf) goto L_12ea514d;
  /* 12ea514c int3  */
  x86_unimpl("int3 @ 0x12ea514c");
L_12ea514d:;
  /* 12ea514d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea514f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea5151 jne 0x12ea512b */
  if (!C.zf) goto L_12ea512b;
  /* 12ea5153 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12ea515a:;
  /* 12ea515a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea515e jne 0x12ea51d6 */
  if (!C.zf) goto L_12ea51d6;
  /* 12ea5160 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea5163 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5167 je 0x12ea519c */
  if (C.zf) goto L_12ea519c;
L_12ea5169:;
  /* 12ea5169 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea516c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12ea516f push edx */
  push32((uint32_t)(EDX));
  /* 12ea5170 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea5173 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12ea5176 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea5177 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea517a push edx */
  push32((uint32_t)(EDX));
  /* 12ea517b push 0x12eba9d8 */
  push32((uint32_t)(0x12eba9d8u));
  /* 12ea5180 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5182 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5184 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5186 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5188 call 0x12ea2db0 */
  push32(0x12ea518du); f_12ea2db0();
  /* 12ea518d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5190 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5193 jne 0x12ea5196 */
  if (!C.zf) goto L_12ea5196;
  /* 12ea5195 int3  */
  x86_unimpl("int3 @ 0x12ea5195");
L_12ea5196:;
  /* 12ea5196 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea5198 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea519a jne 0x12ea5169 */
  if (!C.zf) goto L_12ea5169;
L_12ea519c:;
  /* 12ea519c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea519f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12ea51a2 push edx */
  push32((uint32_t)(EDX));
  /* 12ea51a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea51a6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea51a9 push eax */
  push32((uint32_t)(EAX));
  /* 12ea51aa mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea51ad push ecx */
  push32((uint32_t)(ECX));
  /* 12ea51ae push 0x12eba9ac */
  push32((uint32_t)(0x12eba9acu));
  /* 12ea51b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea51b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea51b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea51b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea51bb call 0x12ea2db0 */
  push32(0x12ea51c0u); f_12ea2db0();
  /* 12ea51c0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea51c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea51c6 jne 0x12ea51c9 */
  if (!C.zf) goto L_12ea51c9;
  /* 12ea51c8 int3  */
  x86_unimpl("int3 @ 0x12ea51c8");
L_12ea51c9:;
  /* 12ea51c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea51cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea51cd jne 0x12ea519c */
  if (!C.zf) goto L_12ea519c;
  /* 12ea51cf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12ea51d6:;
  /* 12ea51d6 jmp 0x12ea4fe3 */
  goto L_12ea4fe3;
L_12ea51db:;
  /* 12ea51db push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea51dd call 0x12ea7790 */
  push32(0x12ea51e2u); f_12ea7790();
  /* 12ea51e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea51e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12ea51e8:;
  /* 12ea51e8 pop edi */
  EDI = (pop32());
  /* 12ea51e9 pop esi */
  ESI = (pop32());
  /* 12ea51ea pop ebx */
  EBX = (pop32());
  /* 12ea51eb mov esp, ebp */
  ESP = (EBP);
  /* 12ea51ed pop ebp */
  EBP = (pop32());
  /* 12ea51ee ret  */
  ESPCHK(0x12ea4e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005200 @ 0x12ea5200 (34 bytes, 13 insns) */
void f_12ea5200(void) {
  FTRACE(0x12ea5200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea5200 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea5201 mov ebp, esp */
  EBP = (ESP);
  /* 12ea5203 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea5204 mov eax, dword ptr [0x12ebda9c] */
  EAX = (r32((uint32_t)(0x12ebda9c)));
  /* 12ea5209 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea520c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5210 je 0x12ea521b */
  if (C.zf) goto L_12ea521b;
  /* 12ea5212 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea5215 mov dword ptr [0x12ebda9c], ecx */
  w32((uint32_t)(0x12ebda9c), (ECX));
L_12ea521b:;
  /* 12ea521b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea521e mov esp, ebp */
  ESP = (EBP);
  /* 12ea5220 pop ebp */
  EBP = (pop32());
  /* 12ea5221 ret  */
  ESPCHK(0x12ea5200u, _esp0);
  ESP += 4; return;
}

/* FUN_10005230 @ 0x12ea5230 (103 bytes, 38 insns) */
void f_12ea5230(void) {
  FTRACE(0x12ea5230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea5230 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea5231 mov ebp, esp */
  EBP = (ESP);
  /* 12ea5233 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea5234 mov eax, dword ptr [0x12ebda9c] */
  EAX = (r32((uint32_t)(0x12ebda9c)));
  /* 12ea5239 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12ea523c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea523e jne 0x12ea5242 */
  if (!C.zf) goto L_12ea5242;
  /* 12ea5240 jmp 0x12ea5293 */
  goto L_12ea5293;
L_12ea5242:;
  /* 12ea5242 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea5244 call 0x12ea76f0 */
  push32(0x12ea5249u); f_12ea76f0();
  /* 12ea5249 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea524c mov ecx, dword ptr [0x12ebf61c] */
  ECX = (r32((uint32_t)(0x12ebf61c)));
  /* 12ea5252 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ea5255 jmp 0x12ea525f */
  goto L_12ea525f;
L_12ea5257:;
  /* 12ea5257 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea525a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ea525c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ea525f:;
  /* 12ea525f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5263 je 0x12ea5289 */
  if (C.zf) goto L_12ea5289;
  /* 12ea5265 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5268 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12ea526b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ea5271 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5274 jne 0x12ea5287 */
  if (!C.zf) goto L_12ea5287;
  /* 12ea5276 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea5279 push eax */
  push32((uint32_t)(EAX));
  /* 12ea527a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea527d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5280 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea5281 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12ea5284u);
  /* 12ea5284 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea5287:;
  /* 12ea5287 jmp 0x12ea5257 */
  goto L_12ea5257;
L_12ea5289:;
  /* 12ea5289 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea528b call 0x12ea7790 */
  push32(0x12ea5290u); f_12ea7790();
  /* 12ea5290 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea5293:;
  /* 12ea5293 mov esp, ebp */
  ESP = (EBP);
  /* 12ea5295 pop ebp */
  EBP = (pop32());
  /* 12ea5296 ret  */
  ESPCHK(0x12ea5230u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12ea52a0 (75 bytes, 28 insns) */
void f_12ea52a0(void) {
  FTRACE(0x12ea52a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea52a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea52a1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea52a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea52a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea52a8 je 0x12ea52dd */
  if (C.zf) goto L_12ea52dd;
  /* 12ea52aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea52ad push eax */
  push32((uint32_t)(EAX));
  /* 12ea52ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea52b1 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea52b2 call dword ptr [0x12ec2380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2380))), 0x12ea52b8u);
  /* 12ea52b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea52ba jne 0x12ea52dd */
  if (!C.zf) goto L_12ea52dd;
  /* 12ea52bc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea52c0 je 0x12ea52d4 */
  if (C.zf) goto L_12ea52d4;
  /* 12ea52c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea52c5 push edx */
  push32((uint32_t)(EDX));
  /* 12ea52c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea52c9 push eax */
  push32((uint32_t)(EAX));
  /* 12ea52ca call dword ptr [0x12ec237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec237c))), 0x12ea52d0u);
  /* 12ea52d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea52d2 jne 0x12ea52dd */
  if (!C.zf) goto L_12ea52dd;
L_12ea52d4:;
  /* 12ea52d4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12ea52db jmp 0x12ea52e4 */
  goto L_12ea52e4;
L_12ea52dd:;
  /* 12ea52dd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12ea52e4:;
  /* 12ea52e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea52e7 mov esp, ebp */
  ESP = (EBP);
  /* 12ea52e9 pop ebp */
  EBP = (pop32());
  /* 12ea52ea ret  */
  ESPCHK(0x12ea52a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100052f0 @ 0x12ea52f0 (134 bytes, 50 insns) */
void f_12ea52f0(void) {
  FTRACE(0x12ea52f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea52f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea52f1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea52f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea52f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea52f8 jne 0x12ea52fe */
  if (!C.zf) goto L_12ea52fe;
  /* 12ea52fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea52fc jmp 0x12ea5372 */
  goto L_12ea5372;
L_12ea52fe:;
  /* 12ea52fe push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea5300 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12ea5302 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea5305 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea5308 push eax */
  push32((uint32_t)(EAX));
  /* 12ea5309 call 0x12ea52a0 */
  push32(0x12ea530eu); f_12ea52a0();
  /* 12ea530e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5311 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea5313 jne 0x12ea5319 */
  if (!C.zf) goto L_12ea5319;
  /* 12ea5315 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea5317 jmp 0x12ea5372 */
  goto L_12ea5372;
L_12ea5319:;
  /* 12ea5319 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea531c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea531f push ecx */
  push32((uint32_t)(ECX));
  /* 12ea5320 call 0x12ea7ff0 */
  push32(0x12ea5325u); f_12ea7ff0();
  /* 12ea5325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5328 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea532b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea532f je 0x12ea5346 */
  if (C.zf) goto L_12ea5346;
  /* 12ea5331 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea5334 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea5337 push edx */
  push32((uint32_t)(EDX));
  /* 12ea5338 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea533b push eax */
  push32((uint32_t)(EAX));
  /* 12ea533c call 0x12ea8050 */
  push32(0x12ea5341u); f_12ea8050();
  /* 12ea5341 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5344 jmp 0x12ea5372 */
  goto L_12ea5372;
L_12ea5346:;
  /* 12ea5346 mov ecx, dword ptr [0x12ebf5d0] */
  ECX = (r32((uint32_t)(0x12ebf5d0)));
  /* 12ea534c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12ea5352 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea5354 je 0x12ea535d */
  if (C.zf) goto L_12ea535d;
  /* 12ea5356 mov eax, 1 */
  EAX = (0x1u);
  /* 12ea535b jmp 0x12ea5372 */
  goto L_12ea5372;
L_12ea535d:;
  /* 12ea535d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea5360 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea5363 push edx */
  push32((uint32_t)(EDX));
  /* 12ea5364 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5366 mov eax, dword ptr [0x12ec0f6c] */
  EAX = (r32((uint32_t)(0x12ec0f6c)));
  /* 12ea536b push eax */
  push32((uint32_t)(EAX));
  /* 12ea536c call dword ptr [0x12ec2384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2384))), 0x12ea5372u);
L_12ea5372:;
  /* 12ea5372 mov esp, ebp */
  ESP = (EBP);
  /* 12ea5374 pop ebp */
  EBP = (pop32());
  /* 12ea5375 ret  */
  ESPCHK(0x12ea52f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005380 @ 0x12ea5380 (227 bytes, 80 insns) */
void f_12ea5380(void) {
  FTRACE(0x12ea5380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea5380 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea5381 mov ebp, esp */
  EBP = (ESP);
  /* 12ea5383 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea5384 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea5387 push eax */
  push32((uint32_t)(EAX));
  /* 12ea5388 call 0x12ea52f0 */
  push32(0x12ea538du); f_12ea52f0();
  /* 12ea538d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5390 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea5392 jne 0x12ea539b */
  if (!C.zf) goto L_12ea539b;
  /* 12ea5394 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea5396 jmp 0x12ea545f */
  goto L_12ea545f;
L_12ea539b:;
  /* 12ea539b push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea539d call 0x12ea76f0 */
  push32(0x12ea53a2u); f_12ea76f0();
  /* 12ea53a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea53a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea53a8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea53ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ea53ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea53b1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ea53b4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea53b9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea53bc je 0x12ea53e0 */
  if (C.zf) goto L_12ea53e0;
  /* 12ea53be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea53c1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea53c5 je 0x12ea53e0 */
  if (C.zf) goto L_12ea53e0;
  /* 12ea53c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea53ca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ea53cd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea53d2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea53d5 je 0x12ea53e0 */
  if (C.zf) goto L_12ea53e0;
  /* 12ea53d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea53da cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea53de jne 0x12ea5453 */
  if (!C.zf) goto L_12ea5453;
L_12ea53e0:;
  /* 12ea53e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea53e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea53e5 push edx */
  push32((uint32_t)(EDX));
  /* 12ea53e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea53e9 push eax */
  push32((uint32_t)(EAX));
  /* 12ea53ea call 0x12ea52a0 */
  push32(0x12ea53efu); f_12ea52a0();
  /* 12ea53ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea53f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea53f4 je 0x12ea5453 */
  if (C.zf) goto L_12ea5453;
  /* 12ea53f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea53f9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12ea53fc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea53ff jne 0x12ea5453 */
  if (!C.zf) goto L_12ea5453;
  /* 12ea5401 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5404 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12ea5407 cmp ecx, dword ptr [0x12ebdaa0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ebdaa0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea540d jg 0x12ea5453 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ea5453;
  /* 12ea540f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5413 je 0x12ea5420 */
  if (C.zf) goto L_12ea5420;
  /* 12ea5415 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea5418 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea541b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12ea541e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12ea5420:;
  /* 12ea5420 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5424 je 0x12ea5431 */
  if (C.zf) goto L_12ea5431;
  /* 12ea5426 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea5429 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea542c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12ea542f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12ea5431:;
  /* 12ea5431 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5435 je 0x12ea5442 */
  if (C.zf) goto L_12ea5442;
  /* 12ea5437 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea543a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea543d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12ea5440 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12ea5442:;
  /* 12ea5442 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea5444 call 0x12ea7790 */
  push32(0x12ea5449u); f_12ea7790();
  /* 12ea5449 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea544c mov eax, 1 */
  EAX = (0x1u);
  /* 12ea5451 jmp 0x12ea545f */
  goto L_12ea545f;
L_12ea5453:;
  /* 12ea5453 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea5455 call 0x12ea7790 */
  push32(0x12ea545au); f_12ea7790();
  /* 12ea545a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea545d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ea545f:;
  /* 12ea545f mov esp, ebp */
  ESP = (EBP);
  /* 12ea5461 pop ebp */
  EBP = (pop32());
  /* 12ea5462 ret  */
  ESPCHK(0x12ea5380u, _esp0);
  ESP += 4; return;
}

/* FUN_10005470 @ 0x12ea5470 (28 bytes, 11 insns) */
void f_12ea5470(void) {
  FTRACE(0x12ea5470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea5470 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea5471 mov ebp, esp */
  EBP = (ESP);
  /* 12ea5473 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea5474 mov eax, dword ptr [0x12ec0f78] */
  EAX = (r32((uint32_t)(0x12ec0f78)));
  /* 12ea5479 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea547c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea547f mov dword ptr [0x12ec0f78], ecx */
  w32((uint32_t)(0x12ec0f78), (ECX));
  /* 12ea5485 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5488 mov esp, ebp */
  ESP = (EBP);
  /* 12ea548a pop ebp */
  EBP = (pop32());
  /* 12ea548b ret  */
  ESPCHK(0x12ea5470u, _esp0);
  ESP += 4; return;
}

/* FUN_10005490 @ 0x12ea5490 (362 bytes, 116 insns) */
void f_12ea5490(void) {
  FTRACE(0x12ea5490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea5490 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea5491 mov ebp, esp */
  EBP = (ESP);
  /* 12ea5493 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea5496 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea5497 push esi */
  push32((uint32_t)(ESI));
  /* 12ea5498 push edi */
  push32((uint32_t)(EDI));
  /* 12ea5499 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea549d jne 0x12ea54ca */
  if (!C.zf) goto L_12ea54ca;
L_12ea549f:;
  /* 12ea549f push 0x12ebab0c */
  push32((uint32_t)(0x12ebab0cu));
  /* 12ea54a4 push 0x12eba624 */
  push32((uint32_t)(0x12eba624u));
  /* 12ea54a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea54ab push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea54ad push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea54af push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea54b1 call 0x12ea2db0 */
  push32(0x12ea54b6u); f_12ea2db0();
  /* 12ea54b6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea54b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea54bc jne 0x12ea54bf */
  if (!C.zf) goto L_12ea54bf;
  /* 12ea54be int3  */
  x86_unimpl("int3 @ 0x12ea54be");
L_12ea54bf:;
  /* 12ea54bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea54c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea54c3 jne 0x12ea549f */
  if (!C.zf) goto L_12ea549f;
  /* 12ea54c5 jmp 0x12ea55f3 */
  goto L_12ea55f3;
L_12ea54ca:;
  /* 12ea54ca push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea54cc call 0x12ea76f0 */
  push32(0x12ea54d1u); f_12ea76f0();
  /* 12ea54d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea54d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea54d7 mov edx, dword ptr [0x12ebf61c] */
  EDX = (r32((uint32_t)(0x12ebf61c)));
  /* 12ea54dd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12ea54df mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ea54e6 jmp 0x12ea54f1 */
  goto L_12ea54f1;
L_12ea54e8:;
  /* 12ea54e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea54eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea54ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ea54f1:;
  /* 12ea54f1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea54f5 jge 0x12ea5515 */
  if ((C.sf==C.of)) goto L_12ea5515;
  /* 12ea54f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea54fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea54fd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12ea5505 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5508 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea550b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12ea5513 jmp 0x12ea54e8 */
  goto L_12ea54e8;
L_12ea5515:;
  /* 12ea5515 mov edx, dword ptr [0x12ebf61c] */
  EDX = (r32((uint32_t)(0x12ebf61c)));
  /* 12ea551b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12ea551e jmp 0x12ea5528 */
  goto L_12ea5528;
L_12ea5520:;
  /* 12ea5520 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea5523 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ea5525 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12ea5528:;
  /* 12ea5528 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea552c je 0x12ea55d1 */
  if (C.zf) goto L_12ea55d1;
  /* 12ea5532 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea5535 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ea5538 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea553d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea553f jl 0x12ea55a7 */
  if ((C.sf!=C.of)) goto L_12ea55a7;
  /* 12ea5541 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea5544 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12ea5547 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ea554d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5550 jge 0x12ea55a7 */
  if ((C.sf==C.of)) goto L_12ea55a7;
  /* 12ea5552 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea5555 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12ea5558 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea555e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea5561 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12ea5565 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5568 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea556b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12ea556e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ea5574 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea5577 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 12ea557b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea557e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ea5581 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea5586 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea5589 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12ea558d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea5590 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5593 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea5596 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12ea5599 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea559e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea55a1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12ea55a5 jmp 0x12ea55cc */
  goto L_12ea55cc;
L_12ea55a7:;
  /* 12ea55a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea55aa push edx */
  push32((uint32_t)(EDX));
  /* 12ea55ab push 0x12ebaae8 */
  push32((uint32_t)(0x12ebaae8u));
  /* 12ea55b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea55b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea55b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea55b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea55b8 call 0x12ea2db0 */
  push32(0x12ea55bdu); f_12ea2db0();
  /* 12ea55bd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea55c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea55c3 jne 0x12ea55c6 */
  if (!C.zf) goto L_12ea55c6;
  /* 12ea55c5 int3  */
  x86_unimpl("int3 @ 0x12ea55c5");
L_12ea55c6:;
  /* 12ea55c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea55c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea55ca jne 0x12ea55a7 */
  if (!C.zf) goto L_12ea55a7;
L_12ea55cc:;
  /* 12ea55cc jmp 0x12ea5520 */
  goto L_12ea5520;
L_12ea55d1:;
  /* 12ea55d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea55d4 mov edx, dword ptr [0x12ebf624] */
  EDX = (r32((uint32_t)(0x12ebf624)));
  /* 12ea55da mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 12ea55dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea55e0 mov ecx, dword ptr [0x12ebf618] */
  ECX = (r32((uint32_t)(0x12ebf618)));
  /* 12ea55e6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12ea55e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea55eb call 0x12ea7790 */
  push32(0x12ea55f0u); f_12ea7790();
  /* 12ea55f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea55f3:;
  /* 12ea55f3 pop edi */
  EDI = (pop32());
  /* 12ea55f4 pop esi */
  ESI = (pop32());
  /* 12ea55f5 pop ebx */
  EBX = (pop32());
  /* 12ea55f6 mov esp, ebp */
  ESP = (EBP);
  /* 12ea55f8 pop ebp */
  EBP = (pop32());
  /* 12ea55f9 ret  */
  ESPCHK(0x12ea5490u, _esp0);
  ESP += 4; return;
}

/* FUN_10005600 @ 0x12ea5600 (291 bytes, 95 insns) */
void f_12ea5600(void) {
  FTRACE(0x12ea5600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea5600 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea5601 mov ebp, esp */
  EBP = (ESP);
  /* 12ea5603 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea5606 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea5607 push esi */
  push32((uint32_t)(ESI));
  /* 12ea5608 push edi */
  push32((uint32_t)(EDI));
  /* 12ea5609 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12ea5610 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5614 je 0x12ea5622 */
  if (C.zf) goto L_12ea5622;
  /* 12ea5616 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea561a je 0x12ea5622 */
  if (C.zf) goto L_12ea5622;
  /* 12ea561c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5620 jne 0x12ea5650 */
  if (!C.zf) goto L_12ea5650;
L_12ea5622:;
  /* 12ea5622 push 0x12ebab34 */
  push32((uint32_t)(0x12ebab34u));
  /* 12ea5627 push 0x12eba624 */
  push32((uint32_t)(0x12eba624u));
  /* 12ea562c push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea562e push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5630 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5632 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5634 call 0x12ea2db0 */
  push32(0x12ea5639u); f_12ea2db0();
  /* 12ea5639 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea563c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea563f jne 0x12ea5642 */
  if (!C.zf) goto L_12ea5642;
  /* 12ea5641 int3  */
  x86_unimpl("int3 @ 0x12ea5641");
L_12ea5642:;
  /* 12ea5642 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea5644 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea5646 jne 0x12ea5622 */
  if (!C.zf) goto L_12ea5622;
  /* 12ea5648 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea564b jmp 0x12ea571c */
  goto L_12ea571c;
L_12ea5650:;
  /* 12ea5650 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ea5657 jmp 0x12ea5662 */
  goto L_12ea5662;
L_12ea5659:;
  /* 12ea5659 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea565c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea565f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12ea5662:;
  /* 12ea5662 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5666 jge 0x12ea56ec */
  if ((C.sf==C.of)) goto L_12ea56ec;
  /* 12ea566c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea566f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea5672 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5675 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea5678 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 12ea567c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea5680 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5683 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea5686 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12ea568a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea568d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea5690 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5693 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea5696 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 12ea569a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea569e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea56a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea56a4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12ea56a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea56ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea56ae cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea56b3 jne 0x12ea56c2 */
  if (!C.zf) goto L_12ea56c2;
  /* 12ea56b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea56b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea56bb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea56c0 je 0x12ea56e7 */
  if (C.zf) goto L_12ea56e7;
L_12ea56c2:;
  /* 12ea56c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea56c6 je 0x12ea56e7 */
  if (C.zf) goto L_12ea56e7;
  /* 12ea56c8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea56cc jne 0x12ea56e0 */
  if (!C.zf) goto L_12ea56e0;
  /* 12ea56ce cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea56d2 jne 0x12ea56e7 */
  if (!C.zf) goto L_12ea56e7;
  /* 12ea56d4 mov eax, dword ptr [0x12ebda9c] */
  EAX = (r32((uint32_t)(0x12ebda9c)));
  /* 12ea56d9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12ea56dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea56de je 0x12ea56e7 */
  if (C.zf) goto L_12ea56e7;
L_12ea56e0:;
  /* 12ea56e0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12ea56e7:;
  /* 12ea56e7 jmp 0x12ea5659 */
  goto L_12ea5659;
L_12ea56ec:;
  /* 12ea56ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea56ef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea56f2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12ea56f5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea56f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea56fb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 12ea56fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea5701 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea5704 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12ea5707 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea570a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea570d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12ea5710 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea5713 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12ea5719 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12ea571c:;
  /* 12ea571c pop edi */
  EDI = (pop32());
  /* 12ea571d pop esi */
  ESI = (pop32());
  /* 12ea571e pop ebx */
  EBX = (pop32());
  /* 12ea571f mov esp, ebp */
  ESP = (EBP);
  /* 12ea5721 pop ebp */
  EBP = (pop32());
  /* 12ea5722 ret  */
  ESPCHK(0x12ea5600u, _esp0);
  ESP += 4; return;
}

/* FUN_10005730 @ 0x12ea5730 (697 bytes, 253 insns) */
void f_12ea5730(void) {
  FTRACE(0x12ea5730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea5730 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea5731 mov ebp, esp */
  EBP = (ESP);
  /* 12ea5733 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea5736 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea5737 push esi */
  push32((uint32_t)(ESI));
  /* 12ea5738 push edi */
  push32((uint32_t)(EDI));
  /* 12ea5739 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12ea5740 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea5742 call 0x12ea76f0 */
  push32(0x12ea5747u); f_12ea76f0();
  /* 12ea5747 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea574a:;
  /* 12ea574a push 0x12ebac2c */
  push32((uint32_t)(0x12ebac2cu));
  /* 12ea574f push 0x12eba624 */
  push32((uint32_t)(0x12eba624u));
  /* 12ea5754 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5756 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5758 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea575a push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea575c call 0x12ea2db0 */
  push32(0x12ea5761u); f_12ea2db0();
  /* 12ea5761 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5764 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5767 jne 0x12ea576a */
  if (!C.zf) goto L_12ea576a;
  /* 12ea5769 int3  */
  x86_unimpl("int3 @ 0x12ea5769");
L_12ea576a:;
  /* 12ea576a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea576c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea576e jne 0x12ea574a */
  if (!C.zf) goto L_12ea574a;
  /* 12ea5770 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5774 je 0x12ea577e */
  if (C.zf) goto L_12ea577e;
  /* 12ea5776 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea5779 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ea577b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12ea577e:;
  /* 12ea577e mov eax, dword ptr [0x12ebf61c] */
  EAX = (r32((uint32_t)(0x12ebf61c)));
  /* 12ea5783 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea5786 jmp 0x12ea5790 */
  goto L_12ea5790;
L_12ea5788:;
  /* 12ea5788 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea578b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ea578d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12ea5790:;
  /* 12ea5790 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5794 je 0x12ea59b2 */
  if (C.zf) goto L_12ea59b2;
  /* 12ea579a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea579d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea57a0 je 0x12ea59b2 */
  if (C.zf) goto L_12ea59b2;
  /* 12ea57a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea57a9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12ea57ac and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ea57b2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea57b5 je 0x12ea57e4 */
  if (C.zf) goto L_12ea57e4;
  /* 12ea57b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea57ba mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12ea57bd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea57c3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea57c5 je 0x12ea57e4 */
  if (C.zf) goto L_12ea57e4;
  /* 12ea57c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea57ca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ea57cd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea57d2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea57d5 jne 0x12ea57e9 */
  if (!C.zf) goto L_12ea57e9;
  /* 12ea57d7 mov ecx, dword ptr [0x12ebda9c] */
  ECX = (r32((uint32_t)(0x12ebda9c)));
  /* 12ea57dd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12ea57e0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea57e2 jne 0x12ea57e9 */
  if (!C.zf) goto L_12ea57e9;
L_12ea57e4:;
  /* 12ea57e4 jmp 0x12ea59ad */
  goto L_12ea59ad;
L_12ea57e9:;
  /* 12ea57e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea57ec cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea57f0 je 0x12ea5862 */
  if (C.zf) goto L_12ea5862;
  /* 12ea57f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea57f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea57f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea57f9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12ea57fc push ecx */
  push32((uint32_t)(ECX));
  /* 12ea57fd call 0x12ea52a0 */
  push32(0x12ea5802u); f_12ea52a0();
  /* 12ea5802 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5805 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea5807 jne 0x12ea5833 */
  if (!C.zf) goto L_12ea5833;
L_12ea5809:;
  /* 12ea5809 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea580c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12ea580f push eax */
  push32((uint32_t)(EAX));
  /* 12ea5810 push 0x12ebac18 */
  push32((uint32_t)(0x12ebac18u));
  /* 12ea5815 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5817 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5819 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea581b push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea581d call 0x12ea2db0 */
  push32(0x12ea5822u); f_12ea2db0();
  /* 12ea5822 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5825 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5828 jne 0x12ea582b */
  if (!C.zf) goto L_12ea582b;
  /* 12ea582a int3  */
  x86_unimpl("int3 @ 0x12ea582a");
L_12ea582b:;
  /* 12ea582b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea582d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea582f jne 0x12ea5809 */
  if (!C.zf) goto L_12ea5809;
  /* 12ea5831 jmp 0x12ea5862 */
  goto L_12ea5862;
L_12ea5833:;
  /* 12ea5833 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5836 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12ea5839 push eax */
  push32((uint32_t)(EAX));
  /* 12ea583a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea583d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12ea5840 push edx */
  push32((uint32_t)(EDX));
  /* 12ea5841 push 0x12ebac0c */
  push32((uint32_t)(0x12ebac0cu));
  /* 12ea5846 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5848 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea584a push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea584c push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea584e call 0x12ea2db0 */
  push32(0x12ea5853u); f_12ea2db0();
  /* 12ea5853 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5856 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5859 jne 0x12ea585c */
  if (!C.zf) goto L_12ea585c;
  /* 12ea585b int3  */
  x86_unimpl("int3 @ 0x12ea585b");
L_12ea585c:;
  /* 12ea585c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea585e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea5860 jne 0x12ea5833 */
  if (!C.zf) goto L_12ea5833;
L_12ea5862:;
  /* 12ea5862 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5865 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12ea5868 push edx */
  push32((uint32_t)(EDX));
  /* 12ea5869 push 0x12ebac04 */
  push32((uint32_t)(0x12ebac04u));
  /* 12ea586e push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5870 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5872 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5874 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5876 call 0x12ea2db0 */
  push32(0x12ea587bu); f_12ea2db0();
  /* 12ea587b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea587e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5881 jne 0x12ea5884 */
  if (!C.zf) goto L_12ea5884;
  /* 12ea5883 int3  */
  x86_unimpl("int3 @ 0x12ea5883");
L_12ea5884:;
  /* 12ea5884 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea5886 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea5888 jne 0x12ea5862 */
  if (!C.zf) goto L_12ea5862;
  /* 12ea588a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea588d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12ea5890 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ea5896 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5899 jne 0x12ea590c */
  if (!C.zf) goto L_12ea590c;
L_12ea589b:;
  /* 12ea589b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea589e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12ea58a1 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea58a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea58a5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ea58a8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12ea58ab and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea58b0 push eax */
  push32((uint32_t)(EAX));
  /* 12ea58b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea58b4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea58b7 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea58b8 push 0x12ebabd0 */
  push32((uint32_t)(0x12ebabd0u));
  /* 12ea58bd push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea58bf push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea58c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea58c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea58c5 call 0x12ea2db0 */
  push32(0x12ea58cau); f_12ea2db0();
  /* 12ea58ca add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea58cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea58d0 jne 0x12ea58d3 */
  if (!C.zf) goto L_12ea58d3;
  /* 12ea58d2 int3  */
  x86_unimpl("int3 @ 0x12ea58d2");
L_12ea58d3:;
  /* 12ea58d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea58d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea58d7 jne 0x12ea589b */
  if (!C.zf) goto L_12ea589b;
  /* 12ea58d9 cmp dword ptr [0x12ec0f78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ec0f78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea58e0 je 0x12ea58fb */
  if (C.zf) goto L_12ea58fb;
  /* 12ea58e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea58e5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12ea58e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea58e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea58ec add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea58ef push edx */
  push32((uint32_t)(EDX));
  /* 12ea58f0 call dword ptr [0x12ec0f78] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec0f78))), 0x12ea58f6u);
  /* 12ea58f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea58f9 jmp 0x12ea5907 */
  goto L_12ea5907;
L_12ea58fb:;
  /* 12ea58fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea58fe push eax */
  push32((uint32_t)(EAX));
  /* 12ea58ff call 0x12ea59f0 */
  push32(0x12ea5904u); f_12ea59f0();
  /* 12ea5904 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea5907:;
  /* 12ea5907 jmp 0x12ea59ad */
  goto L_12ea59ad;
L_12ea590c:;
  /* 12ea590c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea590f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5913 jne 0x12ea5952 */
  if (!C.zf) goto L_12ea5952;
L_12ea5915:;
  /* 12ea5915 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5918 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12ea591b push eax */
  push32((uint32_t)(EAX));
  /* 12ea591c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea591f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5922 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea5923 push 0x12ebaba8 */
  push32((uint32_t)(0x12ebaba8u));
  /* 12ea5928 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea592a push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea592c push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea592e push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5930 call 0x12ea2db0 */
  push32(0x12ea5935u); f_12ea2db0();
  /* 12ea5935 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5938 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea593b jne 0x12ea593e */
  if (!C.zf) goto L_12ea593e;
  /* 12ea593d int3  */
  x86_unimpl("int3 @ 0x12ea593d");
L_12ea593e:;
  /* 12ea593e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea5940 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea5942 jne 0x12ea5915 */
  if (!C.zf) goto L_12ea5915;
  /* 12ea5944 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5947 push eax */
  push32((uint32_t)(EAX));
  /* 12ea5948 call 0x12ea59f0 */
  push32(0x12ea594du); f_12ea59f0();
  /* 12ea594d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5950 jmp 0x12ea59ad */
  goto L_12ea59ad;
L_12ea5952:;
  /* 12ea5952 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5955 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12ea5958 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ea595e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5961 jne 0x12ea59ad */
  if (!C.zf) goto L_12ea59ad;
L_12ea5963:;
  /* 12ea5963 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5966 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12ea5969 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea596a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea596d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12ea5970 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12ea5973 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea5978 push eax */
  push32((uint32_t)(EAX));
  /* 12ea5979 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea597c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea597f push ecx */
  push32((uint32_t)(ECX));
  /* 12ea5980 push 0x12ebab74 */
  push32((uint32_t)(0x12ebab74u));
  /* 12ea5985 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5987 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5989 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea598b push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea598d call 0x12ea2db0 */
  push32(0x12ea5992u); f_12ea2db0();
  /* 12ea5992 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5995 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5998 jne 0x12ea599b */
  if (!C.zf) goto L_12ea599b;
  /* 12ea599a int3  */
  x86_unimpl("int3 @ 0x12ea599a");
L_12ea599b:;
  /* 12ea599b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea599d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea599f jne 0x12ea5963 */
  if (!C.zf) goto L_12ea5963;
  /* 12ea59a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea59a4 push eax */
  push32((uint32_t)(EAX));
  /* 12ea59a5 call 0x12ea59f0 */
  push32(0x12ea59aau); f_12ea59f0();
  /* 12ea59aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea59ad:;
  /* 12ea59ad jmp 0x12ea5788 */
  goto L_12ea5788;
L_12ea59b2:;
  /* 12ea59b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea59b4 call 0x12ea7790 */
  push32(0x12ea59b9u); f_12ea7790();
  /* 12ea59b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea59bc:;
  /* 12ea59bc push 0x12ebab5c */
  push32((uint32_t)(0x12ebab5cu));
  /* 12ea59c1 push 0x12eba624 */
  push32((uint32_t)(0x12eba624u));
  /* 12ea59c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea59c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea59ca push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea59cc push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea59ce call 0x12ea2db0 */
  push32(0x12ea59d3u); f_12ea2db0();
  /* 12ea59d3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea59d6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea59d9 jne 0x12ea59dc */
  if (!C.zf) goto L_12ea59dc;
  /* 12ea59db int3  */
  x86_unimpl("int3 @ 0x12ea59db");
L_12ea59dc:;
  /* 12ea59dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea59de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea59e0 jne 0x12ea59bc */
  if (!C.zf) goto L_12ea59bc;
  /* 12ea59e2 pop edi */
  EDI = (pop32());
  /* 12ea59e3 pop esi */
  ESI = (pop32());
  /* 12ea59e4 pop ebx */
  EBX = (pop32());
  /* 12ea59e5 mov esp, ebp */
  ESP = (EBP);
  /* 12ea59e7 pop ebp */
  EBP = (pop32());
  /* 12ea59e8 ret  */
  ESPCHK(0x12ea5730u, _esp0);
  ESP += 4; return;
}

/* FUN_100059f0 @ 0x12ea59f0 (276 bytes, 89 insns) */
void f_12ea59f0(void) {
  FTRACE(0x12ea59f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea59f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea59f1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea59f3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea59f6 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea59f7 push esi */
  push32((uint32_t)(ESI));
  /* 12ea59f8 push edi */
  push32((uint32_t)(EDI));
  /* 12ea59f9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12ea5a00 jmp 0x12ea5a0b */
  goto L_12ea5a0b;
L_12ea5a02:;
  /* 12ea5a02 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12ea5a05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5a08 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_12ea5a0b:;
  /* 12ea5a0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea5a0e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5a12 jge 0x12ea5a1f */
  if ((C.sf==C.of)) goto L_12ea5a1f;
  /* 12ea5a14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea5a17 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12ea5a1a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12ea5a1d jmp 0x12ea5a26 */
  goto L_12ea5a26;
L_12ea5a1f:;
  /* 12ea5a1f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12ea5a26:;
  /* 12ea5a26 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12ea5a29 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5a2c jge 0x12ea5acc */
  if ((C.sf==C.of)) goto L_12ea5acc;
  /* 12ea5a32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea5a35 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5a38 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 12ea5a3b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 12ea5a3e cmp dword ptr [0x12ebdec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebdec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5a45 jle 0x12ea5a63 */
  if ((C.zf||C.sf!=C.of)) goto L_12ea5a63;
  /* 12ea5a47 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 12ea5a4c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea5a4f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea5a55 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea5a56 call 0x12ea9d00 */
  push32(0x12ea5a5bu); f_12ea9d00();
  /* 12ea5a5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5a5e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12ea5a61 jmp 0x12ea5a80 */
  goto L_12ea5a80;
L_12ea5a63:;
  /* 12ea5a63 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea5a66 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ea5a6c mov eax, dword ptr [0x12ebdcb8] */
  EAX = (r32((uint32_t)(0x12ebdcb8)));
  /* 12ea5a71 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea5a73 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12ea5a77 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 12ea5a7d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12ea5a80:;
  /* 12ea5a80 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5a84 je 0x12ea5a94 */
  if (C.zf) goto L_12ea5a94;
  /* 12ea5a86 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea5a89 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ea5a8f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12ea5a92 jmp 0x12ea5a9b */
  goto L_12ea5a9b;
L_12ea5a94:;
  /* 12ea5a94 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_12ea5a9b:;
  /* 12ea5a9b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12ea5a9e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12ea5aa1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12ea5aa5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12ea5aa8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ea5aae push edx */
  push32((uint32_t)(EDX));
  /* 12ea5aaf push 0x12ebac50 */
  push32((uint32_t)(0x12ebac50u));
  /* 12ea5ab4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12ea5ab7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea5aba lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 12ea5abe push ecx */
  push32((uint32_t)(ECX));
  /* 12ea5abf call 0x12ea9c00 */
  push32(0x12ea5ac4u); f_12ea9c00();
  /* 12ea5ac4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5ac7 jmp 0x12ea5a02 */
  goto L_12ea5a02;
L_12ea5acc:;
  /* 12ea5acc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12ea5acf mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12ea5ad4:;
  /* 12ea5ad4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12ea5ad7 push eax */
  push32((uint32_t)(EAX));
  /* 12ea5ad8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12ea5adb push ecx */
  push32((uint32_t)(ECX));
  /* 12ea5adc push 0x12ebac40 */
  push32((uint32_t)(0x12ebac40u));
  /* 12ea5ae1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5ae3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5ae5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5ae7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5ae9 call 0x12ea2db0 */
  push32(0x12ea5aeeu); f_12ea2db0();
  /* 12ea5aee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5af1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5af4 jne 0x12ea5af7 */
  if (!C.zf) goto L_12ea5af7;
  /* 12ea5af6 int3  */
  x86_unimpl("int3 @ 0x12ea5af6");
L_12ea5af7:;
  /* 12ea5af7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea5af9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea5afb jne 0x12ea5ad4 */
  if (!C.zf) goto L_12ea5ad4;
  /* 12ea5afd pop edi */
  EDI = (pop32());
  /* 12ea5afe pop esi */
  ESI = (pop32());
  /* 12ea5aff pop ebx */
  EBX = (pop32());
  /* 12ea5b00 mov esp, ebp */
  ESP = (EBP);
  /* 12ea5b02 pop ebp */
  EBP = (pop32());
  /* 12ea5b03 ret  */
  ESPCHK(0x12ea59f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b10 @ 0x12ea5b10 (116 bytes, 46 insns) */
void f_12ea5b10(void) {
  FTRACE(0x12ea5b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea5b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea5b11 mov ebp, esp */
  EBP = (ESP);
  /* 12ea5b13 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea5b16 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea5b17 push esi */
  push32((uint32_t)(ESI));
  /* 12ea5b18 push edi */
  push32((uint32_t)(EDI));
  /* 12ea5b19 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12ea5b1c push eax */
  push32((uint32_t)(EAX));
  /* 12ea5b1d call 0x12ea5490 */
  push32(0x12ea5b22u); f_12ea5490();
  /* 12ea5b22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5b25 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5b29 jne 0x12ea5b44 */
  if (!C.zf) goto L_12ea5b44;
  /* 12ea5b2b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5b2f jne 0x12ea5b44 */
  if (!C.zf) goto L_12ea5b44;
  /* 12ea5b31 mov ecx, dword ptr [0x12ebda9c] */
  ECX = (r32((uint32_t)(0x12ebda9c)));
  /* 12ea5b37 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12ea5b3a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea5b3c je 0x12ea5b7b */
  if (C.zf) goto L_12ea5b7b;
  /* 12ea5b3e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5b42 je 0x12ea5b7b */
  if (C.zf) goto L_12ea5b7b;
L_12ea5b44:;
  /* 12ea5b44 push 0x12ebac58 */
  push32((uint32_t)(0x12ebac58u));
  /* 12ea5b49 push 0x12eba624 */
  push32((uint32_t)(0x12eba624u));
  /* 12ea5b4e push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5b50 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5b52 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5b54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5b56 call 0x12ea2db0 */
  push32(0x12ea5b5bu); f_12ea2db0();
  /* 12ea5b5b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5b5e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5b61 jne 0x12ea5b64 */
  if (!C.zf) goto L_12ea5b64;
  /* 12ea5b63 int3  */
  x86_unimpl("int3 @ 0x12ea5b63");
L_12ea5b64:;
  /* 12ea5b64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea5b66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea5b68 jne 0x12ea5b44 */
  if (!C.zf) goto L_12ea5b44;
  /* 12ea5b6a push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5b6c call 0x12ea5730 */
  push32(0x12ea5b71u); f_12ea5730();
  /* 12ea5b71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5b74 mov eax, 1 */
  EAX = (0x1u);
  /* 12ea5b79 jmp 0x12ea5b7d */
  goto L_12ea5b7d;
L_12ea5b7b:;
  /* 12ea5b7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ea5b7d:;
  /* 12ea5b7d pop edi */
  EDI = (pop32());
  /* 12ea5b7e pop esi */
  ESI = (pop32());
  /* 12ea5b7f pop ebx */
  EBX = (pop32());
  /* 12ea5b80 mov esp, ebp */
  ESP = (EBP);
  /* 12ea5b82 pop ebp */
  EBP = (pop32());
  /* 12ea5b83 ret  */
  ESPCHK(0x12ea5b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b90 @ 0x12ea5b90 (197 bytes, 79 insns) */
void f_12ea5b90(void) {
  FTRACE(0x12ea5b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea5b90 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea5b91 mov ebp, esp */
  EBP = (ESP);
  /* 12ea5b93 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea5b94 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea5b95 push esi */
  push32((uint32_t)(ESI));
  /* 12ea5b96 push edi */
  push32((uint32_t)(EDI));
  /* 12ea5b97 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5b9b jne 0x12ea5ba2 */
  if (!C.zf) goto L_12ea5ba2;
  /* 12ea5b9d jmp 0x12ea5c4e */
  goto L_12ea5c4e;
L_12ea5ba2:;
  /* 12ea5ba2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ea5ba9 jmp 0x12ea5bb4 */
  goto L_12ea5bb4;
L_12ea5bab:;
  /* 12ea5bab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5bae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5bb1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ea5bb4:;
  /* 12ea5bb4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5bb8 jge 0x12ea5bfe */
  if ((C.sf==C.of)) goto L_12ea5bfe;
L_12ea5bba:;
  /* 12ea5bba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5bbd mov edx, dword ptr [ecx*4 + 0x12ebdaac] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ebdaac)));
  /* 12ea5bc4 push edx */
  push32((uint32_t)(EDX));
  /* 12ea5bc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5bc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea5bcb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 12ea5bcf push edx */
  push32((uint32_t)(EDX));
  /* 12ea5bd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5bd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea5bd6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12ea5bda push edx */
  push32((uint32_t)(EDX));
  /* 12ea5bdb push 0x12ebacb4 */
  push32((uint32_t)(0x12ebacb4u));
  /* 12ea5be0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5be2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5be4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5be6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5be8 call 0x12ea2db0 */
  push32(0x12ea5bedu); f_12ea2db0();
  /* 12ea5bed add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5bf0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5bf3 jne 0x12ea5bf6 */
  if (!C.zf) goto L_12ea5bf6;
  /* 12ea5bf5 int3  */
  x86_unimpl("int3 @ 0x12ea5bf5");
L_12ea5bf6:;
  /* 12ea5bf6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea5bf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea5bfa jne 0x12ea5bba */
  if (!C.zf) goto L_12ea5bba;
  /* 12ea5bfc jmp 0x12ea5bab */
  goto L_12ea5bab;
L_12ea5bfe:;
  /* 12ea5bfe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea5c01 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12ea5c04 push edx */
  push32((uint32_t)(EDX));
  /* 12ea5c05 push 0x12ebac90 */
  push32((uint32_t)(0x12ebac90u));
  /* 12ea5c0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5c0c push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5c0e push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5c10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5c12 call 0x12ea2db0 */
  push32(0x12ea5c17u); f_12ea2db0();
  /* 12ea5c17 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5c1a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5c1d jne 0x12ea5c20 */
  if (!C.zf) goto L_12ea5c20;
  /* 12ea5c1f int3  */
  x86_unimpl("int3 @ 0x12ea5c1f");
L_12ea5c20:;
  /* 12ea5c20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea5c22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea5c24 jne 0x12ea5bfe */
  if (!C.zf) goto L_12ea5bfe;
L_12ea5c26:;
  /* 12ea5c26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea5c29 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12ea5c2c push edx */
  push32((uint32_t)(EDX));
  /* 12ea5c2d push 0x12ebac70 */
  push32((uint32_t)(0x12ebac70u));
  /* 12ea5c32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5c34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5c36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5c38 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5c3a call 0x12ea2db0 */
  push32(0x12ea5c3fu); f_12ea2db0();
  /* 12ea5c3f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5c42 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5c45 jne 0x12ea5c48 */
  if (!C.zf) goto L_12ea5c48;
  /* 12ea5c47 int3  */
  x86_unimpl("int3 @ 0x12ea5c47");
L_12ea5c48:;
  /* 12ea5c48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea5c4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea5c4c jne 0x12ea5c26 */
  if (!C.zf) goto L_12ea5c26;
L_12ea5c4e:;
  /* 12ea5c4e pop edi */
  EDI = (pop32());
  /* 12ea5c4f pop esi */
  ESI = (pop32());
  /* 12ea5c50 pop ebx */
  EBX = (pop32());
  /* 12ea5c51 mov esp, ebp */
  ESP = (EBP);
  /* 12ea5c53 pop ebp */
  EBP = (pop32());
  /* 12ea5c54 ret  */
  ESPCHK(0x12ea5b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c60 @ 0x12ea5c60 (329 bytes, 102 insns) */
void f_12ea5c60(void) {
  FTRACE(0x12ea5c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea5c60 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea5c61 mov ebp, esp */
  EBP = (ESP);
  /* 12ea5c63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea5c66 cmp dword ptr [0x12ec10f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ec10f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5c6d jne 0x12ea5c74 */
  if (!C.zf) goto L_12ea5c74;
  /* 12ea5c6f call 0x12eaa5a0 */
  push32(0x12ea5c74u); f_12eaa5a0();
L_12ea5c74:;
  /* 12ea5c74 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12ea5c7b mov eax, dword ptr [0x12ebf5b8] */
  EAX = (r32((uint32_t)(0x12ebf5b8)));
  /* 12ea5c80 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ea5c83:;
  /* 12ea5c83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5c86 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12ea5c89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea5c8b je 0x12ea5cb9 */
  if (C.zf) goto L_12ea5cb9;
  /* 12ea5c8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5c90 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ea5c93 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5c96 je 0x12ea5ca1 */
  if (C.zf) goto L_12ea5ca1;
  /* 12ea5c98 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea5c9b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5c9e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12ea5ca1:;
  /* 12ea5ca1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5ca4 push eax */
  push32((uint32_t)(EAX));
  /* 12ea5ca5 call 0x12ea6b20 */
  push32(0x12ea5caau); f_12ea6b20();
  /* 12ea5caa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5cad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5cb0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12ea5cb4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ea5cb7 jmp 0x12ea5c83 */
  goto L_12ea5c83;
L_12ea5cb9:;
  /* 12ea5cb9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12ea5cbb push 0x12ebacd4 */
  push32((uint32_t)(0x12ebacd4u));
  /* 12ea5cc0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea5cc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea5cc5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12ea5ccc push ecx */
  push32((uint32_t)(ECX));
  /* 12ea5ccd call 0x12ea3cf0 */
  push32(0x12ea5cd2u); f_12ea3cf0();
  /* 12ea5cd2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5cd5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ea5cd8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea5cdb mov dword ptr [0x12ebf5ec], edx */
  w32((uint32_t)(0x12ebf5ec), (EDX));
  /* 12ea5ce1 cmp dword ptr [0x12ebf5ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf5ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5ce8 jne 0x12ea5cf4 */
  if (!C.zf) goto L_12ea5cf4;
  /* 12ea5cea push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea5cec call 0x12ea2c60 */
  push32(0x12ea5cf1u); f_12ea2c60();
  /* 12ea5cf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea5cf4:;
  /* 12ea5cf4 mov eax, dword ptr [0x12ebf5b8] */
  EAX = (r32((uint32_t)(0x12ebf5b8)));
  /* 12ea5cf9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea5cfc jmp 0x12ea5d07 */
  goto L_12ea5d07;
L_12ea5cfe:;
  /* 12ea5cfe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5d01 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5d04 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12ea5d07:;
  /* 12ea5d07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5d0a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12ea5d0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea5d0f je 0x12ea5d77 */
  if (C.zf) goto L_12ea5d77;
  /* 12ea5d11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5d14 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea5d15 call 0x12ea6b20 */
  push32(0x12ea5d1au); f_12ea6b20();
  /* 12ea5d1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5d1d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5d20 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12ea5d23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5d26 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12ea5d29 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5d2c je 0x12ea5d75 */
  if (C.zf) goto L_12ea5d75;
  /* 12ea5d2e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12ea5d30 push 0x12ebacd4 */
  push32((uint32_t)(0x12ebacd4u));
  /* 12ea5d35 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea5d37 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea5d3a push ecx */
  push32((uint32_t)(ECX));
  /* 12ea5d3b call 0x12ea3cf0 */
  push32(0x12ea5d40u); f_12ea3cf0();
  /* 12ea5d40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5d43 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea5d46 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12ea5d48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea5d4b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5d4e jne 0x12ea5d5a */
  if (!C.zf) goto L_12ea5d5a;
  /* 12ea5d50 push 9 */
  push32((uint32_t)(0x9u));
  /* 12ea5d52 call 0x12ea2c60 */
  push32(0x12ea5d57u); f_12ea2c60();
  /* 12ea5d57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea5d5a:;
  /* 12ea5d5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5d5d push ecx */
  push32((uint32_t)(ECX));
  /* 12ea5d5e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea5d61 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ea5d63 push eax */
  push32((uint32_t)(EAX));
  /* 12ea5d64 call 0x12ea6ca0 */
  push32(0x12ea5d69u); f_12ea6ca0();
  /* 12ea5d69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5d6c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea5d6f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5d72 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12ea5d75:;
  /* 12ea5d75 jmp 0x12ea5cfe */
  goto L_12ea5cfe;
L_12ea5d77:;
  /* 12ea5d77 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea5d79 mov edx, dword ptr [0x12ebf5b8] */
  EDX = (r32((uint32_t)(0x12ebf5b8)));
  /* 12ea5d7f push edx */
  push32((uint32_t)(EDX));
  /* 12ea5d80 call 0x12ea4780 */
  push32(0x12ea5d85u); f_12ea4780();
  /* 12ea5d85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5d88 mov dword ptr [0x12ebf5b8], 0 */
  w32((uint32_t)(0x12ebf5b8), (0x0u));
  /* 12ea5d92 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea5d95 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12ea5d9b mov dword ptr [0x12ec10e0], 1 */
  w32((uint32_t)(0x12ec10e0), (0x1u));
  /* 12ea5da5 mov esp, ebp */
  ESP = (EBP);
  /* 12ea5da7 pop ebp */
  EBP = (pop32());
  /* 12ea5da8 ret  */
  ESPCHK(0x12ea5c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10005db0 @ 0x12ea5db0 (216 bytes, 69 insns) */
void f_12ea5db0(void) {
  FTRACE(0x12ea5db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea5db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea5db1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea5db3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea5db6 cmp dword ptr [0x12ec10f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ec10f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5dbd jne 0x12ea5dc4 */
  if (!C.zf) goto L_12ea5dc4;
  /* 12ea5dbf call 0x12eaa5a0 */
  push32(0x12ea5dc4u); f_12eaa5a0();
L_12ea5dc4:;
  /* 12ea5dc4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12ea5dc9 push 0x12ebf628 */
  push32((uint32_t)(0x12ebf628u));
  /* 12ea5dce push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5dd0 call dword ptr [0x12ec233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec233c))), 0x12ea5dd6u);
  /* 12ea5dd6 mov dword ptr [0x12ebf5fc], 0x12ebf628 */
  w32((uint32_t)(0x12ebf5fc), (0x12ebf628u));
  /* 12ea5de0 mov eax, dword ptr [0x12ec110c] */
  EAX = (r32((uint32_t)(0x12ec110c)));
  /* 12ea5de5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ea5de8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea5dea jne 0x12ea5df7 */
  if (!C.zf) goto L_12ea5df7;
  /* 12ea5dec mov edx, dword ptr [0x12ebf5fc] */
  EDX = (r32((uint32_t)(0x12ebf5fc)));
  /* 12ea5df2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12ea5df5 jmp 0x12ea5dff */
  goto L_12ea5dff;
L_12ea5df7:;
  /* 12ea5df7 mov eax, dword ptr [0x12ec110c] */
  EAX = (r32((uint32_t)(0x12ec110c)));
  /* 12ea5dfc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12ea5dff:;
  /* 12ea5dff mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea5e02 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12ea5e05 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12ea5e08 push edx */
  push32((uint32_t)(EDX));
  /* 12ea5e09 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12ea5e0c push eax */
  push32((uint32_t)(EAX));
  /* 12ea5e0d push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5e0f push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea5e11 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea5e14 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea5e15 call 0x12ea5e90 */
  push32(0x12ea5e1au); f_12ea5e90();
  /* 12ea5e1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5e1d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12ea5e22 push 0x12ebace0 */
  push32((uint32_t)(0x12ebace0u));
  /* 12ea5e27 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea5e29 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea5e2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5e2f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12ea5e32 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea5e33 call 0x12ea3cf0 */
  push32(0x12ea5e38u); f_12ea3cf0();
  /* 12ea5e38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5e3b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ea5e3e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5e42 jne 0x12ea5e4e */
  if (!C.zf) goto L_12ea5e4e;
  /* 12ea5e44 push 8 */
  push32((uint32_t)(0x8u));
  /* 12ea5e46 call 0x12ea2c60 */
  push32(0x12ea5e4bu); f_12ea2c60();
  /* 12ea5e4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea5e4e:;
  /* 12ea5e4e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12ea5e51 push edx */
  push32((uint32_t)(EDX));
  /* 12ea5e52 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12ea5e55 push eax */
  push32((uint32_t)(EAX));
  /* 12ea5e56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea5e59 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea5e5c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12ea5e5f push eax */
  push32((uint32_t)(EAX));
  /* 12ea5e60 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea5e63 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea5e64 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea5e67 push edx */
  push32((uint32_t)(EDX));
  /* 12ea5e68 call 0x12ea5e90 */
  push32(0x12ea5e6du); f_12ea5e90();
  /* 12ea5e6d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5e70 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea5e73 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea5e76 mov dword ptr [0x12ebf5e0], eax */
  w32((uint32_t)(0x12ebf5e0), (EAX));
  /* 12ea5e7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea5e7e mov dword ptr [0x12ebf5e4], ecx */
  w32((uint32_t)(0x12ebf5e4), (ECX));
  /* 12ea5e84 mov esp, ebp */
  ESP = (EBP);
  /* 12ea5e86 pop ebp */
  EBP = (pop32());
  /* 12ea5e87 ret  */
  ESPCHK(0x12ea5db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e90 @ 0x12ea5e90 (1060 bytes, 360 insns) */
void f_12ea5e90(void) {
  FTRACE(0x12ea5e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea5e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea5e91 mov ebp, esp */
  EBP = (ESP);
  /* 12ea5e93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea5e96 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea5e99 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12ea5e9f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea5ea2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12ea5ea8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea5eab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ea5eae cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5eb2 je 0x12ea5ec5 */
  if (C.zf) goto L_12ea5ec5;
  /* 12ea5eb4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea5eb7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea5eba mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12ea5ebc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea5ebf add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5ec2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12ea5ec5:;
  /* 12ea5ec5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5ec8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ea5ecb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5ece jne 0x12ea5f9d */
  if (!C.zf) goto L_12ea5f9d;
L_12ea5ed4:;
  /* 12ea5ed4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5ed7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5eda mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ea5edd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5ee0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ea5ee3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5ee6 je 0x12ea5f62 */
  if (C.zf) goto L_12ea5f62;
  /* 12ea5ee8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5eeb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12ea5eee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea5ef0 je 0x12ea5f62 */
  if (C.zf) goto L_12ea5f62;
  /* 12ea5ef2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5ef5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea5ef7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ea5ef9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea5efb mov al, byte ptr [edx + 0x12ec0e41] */
  AL = (r8((uint32_t)(EDX + 0x12ec0e41)));
  /* 12ea5f01 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12ea5f04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea5f06 je 0x12ea5f37 */
  if (C.zf) goto L_12ea5f37;
  /* 12ea5f08 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea5f0b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ea5f0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5f10 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea5f13 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12ea5f15 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5f19 je 0x12ea5f37 */
  if (C.zf) goto L_12ea5f37;
  /* 12ea5f1b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea5f1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5f21 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ea5f23 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12ea5f25 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea5f28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5f2b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12ea5f2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5f31 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5f34 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12ea5f37:;
  /* 12ea5f37 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea5f3a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ea5f3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5f3f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea5f42 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12ea5f44 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5f48 je 0x12ea5f5d */
  if (C.zf) goto L_12ea5f5d;
  /* 12ea5f4a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea5f4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5f50 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ea5f52 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12ea5f54 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea5f57 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5f5a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12ea5f5d:;
  /* 12ea5f5d jmp 0x12ea5ed4 */
  goto L_12ea5ed4;
L_12ea5f62:;
  /* 12ea5f62 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea5f65 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ea5f67 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5f6a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea5f6d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12ea5f6f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5f73 je 0x12ea5f84 */
  if (C.zf) goto L_12ea5f84;
  /* 12ea5f75 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea5f78 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12ea5f7b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea5f7e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5f81 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12ea5f84:;
  /* 12ea5f84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5f87 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ea5f8a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5f8d jne 0x12ea5f98 */
  if (!C.zf) goto L_12ea5f98;
  /* 12ea5f8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5f92 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5f95 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12ea5f98:;
  /* 12ea5f98 jmp 0x12ea606c */
  goto L_12ea606c;
L_12ea5f9d:;
  /* 12ea5f9d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea5fa0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ea5fa2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5fa5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea5fa8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12ea5faa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5fae je 0x12ea5fc3 */
  if (C.zf) goto L_12ea5fc3;
  /* 12ea5fb0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea5fb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5fb6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ea5fb8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12ea5fba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea5fbd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5fc0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12ea5fc3:;
  /* 12ea5fc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5fc6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ea5fc8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12ea5fcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea5fce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5fd1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea5fd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea5fd7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea5fdd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea5fdf mov dl, byte ptr [ecx + 0x12ec0e41] */
  DL = (r8((uint32_t)(ECX + 0x12ec0e41)));
  /* 12ea5fe5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12ea5fe8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea5fea je 0x12ea601b */
  if (C.zf) goto L_12ea601b;
  /* 12ea5fec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea5fef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ea5ff1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea5ff4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea5ff7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12ea5ff9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea5ffd je 0x12ea6012 */
  if (C.zf) goto L_12ea6012;
  /* 12ea5fff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea6002 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6005 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ea6007 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12ea6009 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea600c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea600f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12ea6012:;
  /* 12ea6012 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6015 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6018 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12ea601b:;
  /* 12ea601b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea601e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ea6024 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6027 je 0x12ea6047 */
  if (C.zf) goto L_12ea6047;
  /* 12ea6029 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea602c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea6031 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea6033 je 0x12ea6047 */
  if (C.zf) goto L_12ea6047;
  /* 12ea6035 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea6038 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea603e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6041 jne 0x12ea5f9d */
  if (!C.zf) goto L_12ea5f9d;
L_12ea6047:;
  /* 12ea6047 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea604a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ea6050 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea6052 jne 0x12ea605f */
  if (!C.zf) goto L_12ea605f;
  /* 12ea6054 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6057 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea605a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea605d jmp 0x12ea606c */
  goto L_12ea606c;
L_12ea605f:;
  /* 12ea605f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6063 je 0x12ea606c */
  if (C.zf) goto L_12ea606c;
  /* 12ea6065 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea6068 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12ea606c:;
  /* 12ea606c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12ea6073:;
  /* 12ea6073 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6076 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12ea6079 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea607b je 0x12ea609e */
  if (C.zf) goto L_12ea609e;
L_12ea607d:;
  /* 12ea607d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6080 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12ea6083 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6086 je 0x12ea6093 */
  if (C.zf) goto L_12ea6093;
  /* 12ea6088 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea608b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ea608e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6091 jne 0x12ea609e */
  if (!C.zf) goto L_12ea609e;
L_12ea6093:;
  /* 12ea6093 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6096 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6099 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ea609c jmp 0x12ea607d */
  goto L_12ea607d;
L_12ea609e:;
  /* 12ea609e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea60a1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ea60a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea60a6 jne 0x12ea60ad */
  if (!C.zf) goto L_12ea60ad;
  /* 12ea60a8 jmp 0x12ea628b */
  goto L_12ea628b;
L_12ea60ad:;
  /* 12ea60ad cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea60b1 je 0x12ea60c4 */
  if (C.zf) goto L_12ea60c4;
  /* 12ea60b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea60b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea60b9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12ea60bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea60be add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea60c1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12ea60c4:;
  /* 12ea60c4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea60c7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ea60c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea60cc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea60cf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12ea60d1:;
  /* 12ea60d1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12ea60d8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12ea60df:;
  /* 12ea60df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea60e2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12ea60e5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea60e8 jne 0x12ea60fe */
  if (!C.zf) goto L_12ea60fe;
  /* 12ea60ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea60ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea60f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ea60f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea60f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea60f9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12ea60fc jmp 0x12ea60df */
  goto L_12ea60df;
L_12ea60fe:;
  /* 12ea60fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6101 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ea6104 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6107 jne 0x12ea615a */
  if (!C.zf) goto L_12ea615a;
  /* 12ea6109 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea610c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea610e mov ecx, 2 */
  ECX = (0x2u);
  /* 12ea6113 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ea6115 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea6117 jne 0x12ea6152 */
  if (!C.zf) goto L_12ea6152;
  /* 12ea6119 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea611d je 0x12ea613f */
  if (C.zf) goto L_12ea613f;
  /* 12ea611f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6122 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12ea6126 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6129 jne 0x12ea6136 */
  if (!C.zf) goto L_12ea6136;
  /* 12ea612b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea612e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6131 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ea6134 jmp 0x12ea613d */
  goto L_12ea613d;
L_12ea6136:;
  /* 12ea6136 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12ea613d:;
  /* 12ea613d jmp 0x12ea6146 */
  goto L_12ea6146;
L_12ea613f:;
  /* 12ea613f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12ea6146:;
  /* 12ea6146 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea6148 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea614c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12ea614f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12ea6152:;
  /* 12ea6152 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea6155 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12ea6157 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12ea615a:;
  /* 12ea615a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea615d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea6160 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea6163 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12ea6166 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea6168 je 0x12ea618e */
  if (C.zf) goto L_12ea618e;
  /* 12ea616a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea616e je 0x12ea617f */
  if (C.zf) goto L_12ea617f;
  /* 12ea6170 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea6173 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12ea6176 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea6179 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea617c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12ea617f:;
  /* 12ea617f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea6182 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ea6184 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6187 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea618a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12ea618c jmp 0x12ea615a */
  goto L_12ea615a;
L_12ea618e:;
  /* 12ea618e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6191 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12ea6194 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea6196 je 0x12ea61b4 */
  if (C.zf) goto L_12ea61b4;
  /* 12ea6198 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea619c jne 0x12ea61b9 */
  if (!C.zf) goto L_12ea61b9;
  /* 12ea619e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea61a1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12ea61a4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea61a7 je 0x12ea61b4 */
  if (C.zf) goto L_12ea61b4;
  /* 12ea61a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea61ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ea61af cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea61b2 jne 0x12ea61b9 */
  if (!C.zf) goto L_12ea61b9;
L_12ea61b4:;
  /* 12ea61b4 jmp 0x12ea6264 */
  goto L_12ea6264;
L_12ea61b9:;
  /* 12ea61b9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea61bd je 0x12ea6256 */
  if (C.zf) goto L_12ea6256;
  /* 12ea61c3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea61c7 je 0x12ea621d */
  if (C.zf) goto L_12ea621d;
  /* 12ea61c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea61cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea61ce mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ea61d0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea61d2 mov cl, byte ptr [eax + 0x12ec0e41] */
  CL = (r8((uint32_t)(EAX + 0x12ec0e41)));
  /* 12ea61d8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12ea61db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea61dd je 0x12ea6208 */
  if (C.zf) goto L_12ea6208;
  /* 12ea61df mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea61e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea61e5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ea61e7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12ea61e9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea61ec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea61ef mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12ea61f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea61f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea61f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea61fb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea61fe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ea6200 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6203 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea6206 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12ea6208:;
  /* 12ea6208 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea620b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea620e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ea6210 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12ea6212 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea6215 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6218 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12ea621b jmp 0x12ea6249 */
  goto L_12ea6249;
L_12ea621d:;
  /* 12ea621d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6220 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea6222 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ea6224 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea6226 mov cl, byte ptr [eax + 0x12ec0e41] */
  CL = (r8((uint32_t)(EAX + 0x12ec0e41)));
  /* 12ea622c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12ea622f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea6231 je 0x12ea6249 */
  if (C.zf) goto L_12ea6249;
  /* 12ea6233 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6236 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6239 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ea623c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea623f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ea6241 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6244 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea6247 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12ea6249:;
  /* 12ea6249 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea624c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ea624e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6251 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea6254 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12ea6256:;
  /* 12ea6256 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6259 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea625c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea625f jmp 0x12ea60d1 */
  goto L_12ea60d1;
L_12ea6264:;
  /* 12ea6264 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6268 je 0x12ea6279 */
  if (C.zf) goto L_12ea6279;
  /* 12ea626a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea626d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12ea6270 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea6273 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6276 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12ea6279:;
  /* 12ea6279 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea627c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ea627e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6281 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12ea6284 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12ea6286 jmp 0x12ea6073 */
  goto L_12ea6073;
L_12ea628b:;
  /* 12ea628b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea628f je 0x12ea62a3 */
  if (C.zf) goto L_12ea62a3;
  /* 12ea6291 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea6294 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12ea629a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea629d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea62a0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12ea62a3:;
  /* 12ea62a3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea62a6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ea62a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea62ab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea62ae mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12ea62b0 mov esp, ebp */
  ESP = (EBP);
  /* 12ea62b2 pop ebp */
  EBP = (pop32());
  /* 12ea62b3 ret  */
  ESPCHK(0x12ea5e90u, _esp0);
  ESP += 4; return;
}

/* FUN_100062c0 @ 0x12ea62c0 (537 bytes, 173 insns) */
void f_12ea62c0(void) {
  FTRACE(0x12ea62c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea62c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea62c1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea62c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea62c6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12ea62cd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12ea62d4 cmp dword ptr [0x12ebf72c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf72c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea62db jne 0x12ea631a */
  if (!C.zf) goto L_12ea631a;
  /* 12ea62dd call dword ptr [0x12ec2398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2398))), 0x12ea62e3u);
  /* 12ea62e3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12ea62e6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea62ea je 0x12ea62f8 */
  if (C.zf) goto L_12ea62f8;
  /* 12ea62ec mov dword ptr [0x12ebf72c], 1 */
  w32((uint32_t)(0x12ebf72c), (0x1u));
  /* 12ea62f6 jmp 0x12ea631a */
  goto L_12ea631a;
L_12ea62f8:;
  /* 12ea62f8 call dword ptr [0x12ec2394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2394))), 0x12ea62feu);
  /* 12ea62fe mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12ea6301 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6305 je 0x12ea6313 */
  if (C.zf) goto L_12ea6313;
  /* 12ea6307 mov dword ptr [0x12ebf72c], 2 */
  w32((uint32_t)(0x12ebf72c), (0x2u));
  /* 12ea6311 jmp 0x12ea631a */
  goto L_12ea631a;
L_12ea6313:;
  /* 12ea6313 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea6315 jmp 0x12ea64d5 */
  goto L_12ea64d5;
L_12ea631a:;
  /* 12ea631a cmp dword ptr [0x12ebf72c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf72c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6321 jne 0x12ea641e */
  if (!C.zf) goto L_12ea641e;
  /* 12ea6327 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea632b jne 0x12ea6343 */
  if (!C.zf) goto L_12ea6343;
  /* 12ea632d call dword ptr [0x12ec2398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2398))), 0x12ea6333u);
  /* 12ea6333 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12ea6336 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea633a jne 0x12ea6343 */
  if (!C.zf) goto L_12ea6343;
  /* 12ea633c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea633e jmp 0x12ea64d5 */
  goto L_12ea64d5;
L_12ea6343:;
  /* 12ea6343 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea6346 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12ea6349:;
  /* 12ea6349 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea634c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea634e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12ea6351 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea6353 je 0x12ea6375 */
  if (C.zf) goto L_12ea6375;
  /* 12ea6355 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea6358 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea635b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ea635e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea6361 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea6363 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12ea6366 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea6368 jne 0x12ea6373 */
  if (!C.zf) goto L_12ea6373;
  /* 12ea636a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea636d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6370 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12ea6373:;
  /* 12ea6373 jmp 0x12ea6349 */
  goto L_12ea6349;
L_12ea6375:;
  /* 12ea6375 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea6378 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea637b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12ea637d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6380 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ea6383 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea6385 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea6387 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea6389 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea638b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea638e push edx */
  push32((uint32_t)(EDX));
  /* 12ea638f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea6392 push eax */
  push32((uint32_t)(EAX));
  /* 12ea6393 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea6395 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea6397 call dword ptr [0x12ec2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2390))), 0x12ea639du);
  /* 12ea639d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12ea63a0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea63a4 je 0x12ea63c4 */
  if (C.zf) goto L_12ea63c4;
  /* 12ea63a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12ea63a8 push 0x12ebacec */
  push32((uint32_t)(0x12ebacecu));
  /* 12ea63ad push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea63af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea63b2 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea63b3 call 0x12ea3cf0 */
  push32(0x12ea63b8u); f_12ea3cf0();
  /* 12ea63b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea63bb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12ea63be cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea63c2 jne 0x12ea63d5 */
  if (!C.zf) goto L_12ea63d5;
L_12ea63c4:;
  /* 12ea63c4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea63c7 push edx */
  push32((uint32_t)(EDX));
  /* 12ea63c8 call dword ptr [0x12ec238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec238c))), 0x12ea63ceu);
  /* 12ea63ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea63d0 jmp 0x12ea64d5 */
  goto L_12ea64d5;
L_12ea63d5:;
  /* 12ea63d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea63d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea63d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea63dc push eax */
  push32((uint32_t)(EAX));
  /* 12ea63dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea63e0 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea63e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea63e4 push edx */
  push32((uint32_t)(EDX));
  /* 12ea63e5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea63e8 push eax */
  push32((uint32_t)(EAX));
  /* 12ea63e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea63eb push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea63ed call dword ptr [0x12ec2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2390))), 0x12ea63f3u);
  /* 12ea63f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea63f5 jne 0x12ea640c */
  if (!C.zf) goto L_12ea640c;
  /* 12ea63f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea63f9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea63fc push ecx */
  push32((uint32_t)(ECX));
  /* 12ea63fd call 0x12ea4780 */
  push32(0x12ea6402u); f_12ea4780();
  /* 12ea6402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6405 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12ea640c:;
  /* 12ea640c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea640f push edx */
  push32((uint32_t)(EDX));
  /* 12ea6410 call dword ptr [0x12ec238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec238c))), 0x12ea6416u);
  /* 12ea6416 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea6419 jmp 0x12ea64d5 */
  goto L_12ea64d5;
L_12ea641e:;
  /* 12ea641e cmp dword ptr [0x12ebf72c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf72c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6425 jne 0x12ea64d3 */
  if (!C.zf) goto L_12ea64d3;
  /* 12ea642b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea642f jne 0x12ea6447 */
  if (!C.zf) goto L_12ea6447;
  /* 12ea6431 call dword ptr [0x12ec2394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2394))), 0x12ea6437u);
  /* 12ea6437 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12ea643a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea643e jne 0x12ea6447 */
  if (!C.zf) goto L_12ea6447;
  /* 12ea6440 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea6442 jmp 0x12ea64d5 */
  goto L_12ea64d5;
L_12ea6447:;
  /* 12ea6447 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea644a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12ea644d:;
  /* 12ea644d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea6450 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12ea6453 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea6455 je 0x12ea6475 */
  if (C.zf) goto L_12ea6475;
  /* 12ea6457 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea645a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea645d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ea6460 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea6463 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12ea6466 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea6468 jne 0x12ea6473 */
  if (!C.zf) goto L_12ea6473;
  /* 12ea646a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea646d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6470 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12ea6473:;
  /* 12ea6473 jmp 0x12ea644d */
  goto L_12ea644d;
L_12ea6475:;
  /* 12ea6475 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea6478 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea647b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea647e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12ea6481 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12ea6486 push 0x12ebacec */
  push32((uint32_t)(0x12ebacecu));
  /* 12ea648b push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea648d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea6490 push edx */
  push32((uint32_t)(EDX));
  /* 12ea6491 call 0x12ea3cf0 */
  push32(0x12ea6496u); f_12ea3cf0();
  /* 12ea6496 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6499 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ea649c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea64a0 jne 0x12ea64b0 */
  if (!C.zf) goto L_12ea64b0;
  /* 12ea64a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea64a5 push eax */
  push32((uint32_t)(EAX));
  /* 12ea64a6 call dword ptr [0x12ec2360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2360))), 0x12ea64acu);
  /* 12ea64ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea64ae jmp 0x12ea64d5 */
  goto L_12ea64d5;
L_12ea64b0:;
  /* 12ea64b0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea64b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea64b4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea64b7 push edx */
  push32((uint32_t)(EDX));
  /* 12ea64b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea64bb push eax */
  push32((uint32_t)(EAX));
  /* 12ea64bc call 0x12eaa5d0 */
  push32(0x12ea64c1u); f_12eaa5d0();
  /* 12ea64c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea64c4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea64c7 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea64c8 call dword ptr [0x12ec2360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2360))), 0x12ea64ceu);
  /* 12ea64ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea64d1 jmp 0x12ea64d5 */
  goto L_12ea64d5;
L_12ea64d3:;
  /* 12ea64d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ea64d5:;
  /* 12ea64d5 mov esp, ebp */
  ESP = (EBP);
  /* 12ea64d7 pop ebp */
  EBP = (pop32());
  /* 12ea64d8 ret  */
  ESPCHK(0x12ea62c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100064e0 @ 0x12ea64e0 (77 bytes, 25 insns) */
void f_12ea64e0(void) {
  FTRACE(0x12ea64e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea64e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea64e1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea64e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea64e5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12ea64ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea64ec cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea64f0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12ea64f3 push eax */
  push32((uint32_t)(EAX));
  /* 12ea64f4 call dword ptr [0x12ec239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec239c))), 0x12ea64fau);
  /* 12ea64fa mov dword ptr [0x12ec0f6c], eax */
  w32((uint32_t)(0x12ec0f6c), (EAX));
  /* 12ea64ff cmp dword ptr [0x12ec0f6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ec0f6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6506 jne 0x12ea650c */
  if (!C.zf) goto L_12ea650c;
  /* 12ea6508 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea650a jmp 0x12ea652b */
  goto L_12ea652b;
L_12ea650c:;
  /* 12ea650c call 0x12ea7f90 */
  push32(0x12ea6511u); f_12ea7f90();
  /* 12ea6511 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea6513 jne 0x12ea6526 */
  if (!C.zf) goto L_12ea6526;
  /* 12ea6515 mov ecx, dword ptr [0x12ec0f6c] */
  ECX = (r32((uint32_t)(0x12ec0f6c)));
  /* 12ea651b push ecx */
  push32((uint32_t)(ECX));
  /* 12ea651c call dword ptr [0x12ec2388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2388))), 0x12ea6522u);
  /* 12ea6522 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea6524 jmp 0x12ea652b */
  goto L_12ea652b;
L_12ea6526:;
  /* 12ea6526 mov eax, 1 */
  EAX = (0x1u);
L_12ea652b:;
  /* 12ea652b pop ebp */
  EBP = (pop32());
  /* 12ea652c ret  */
  ESPCHK(0x12ea64e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006530 @ 0x12ea6530 (156 bytes, 48 insns) */
void f_12ea6530(void) {
  FTRACE(0x12ea6530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea6530 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea6531 mov ebp, esp */
  EBP = (ESP);
  /* 12ea6533 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea6536 mov eax, dword ptr [0x12ec0f68] */
  EAX = (r32((uint32_t)(0x12ec0f68)));
  /* 12ea653b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ea653e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ea6545 jmp 0x12ea6550 */
  goto L_12ea6550;
L_12ea6547:;
  /* 12ea6547 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea654a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea654d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12ea6550:;
  /* 12ea6550 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6553 cmp edx, dword ptr [0x12ec0f64] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12ec0f64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6559 jge 0x12ea65a6 */
  if ((C.sf==C.of)) goto L_12ea65a6;
  /* 12ea655b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12ea6560 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12ea6565 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea6568 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12ea656b push ecx */
  push32((uint32_t)(ECX));
  /* 12ea656c call dword ptr [0x12ec23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec23a4))), 0x12ea6572u);
  /* 12ea6572 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12ea6577 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea6579 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea657c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12ea657f push eax */
  push32((uint32_t)(EAX));
  /* 12ea6580 call dword ptr [0x12ec23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec23a4))), 0x12ea6586u);
  /* 12ea6586 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea6589 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12ea658c push edx */
  push32((uint32_t)(EDX));
  /* 12ea658d push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea658f mov eax, dword ptr [0x12ec0f6c] */
  EAX = (r32((uint32_t)(0x12ec0f6c)));
  /* 12ea6594 push eax */
  push32((uint32_t)(EAX));
  /* 12ea6595 call dword ptr [0x12ec23a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec23a0))), 0x12ea659bu);
  /* 12ea659b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea659e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea65a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12ea65a4 jmp 0x12ea6547 */
  goto L_12ea6547;
L_12ea65a6:;
  /* 12ea65a6 mov edx, dword ptr [0x12ec0f68] */
  EDX = (r32((uint32_t)(0x12ec0f68)));
  /* 12ea65ac push edx */
  push32((uint32_t)(EDX));
  /* 12ea65ad push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea65af mov eax, dword ptr [0x12ec0f6c] */
  EAX = (r32((uint32_t)(0x12ec0f6c)));
  /* 12ea65b4 push eax */
  push32((uint32_t)(EAX));
  /* 12ea65b5 call dword ptr [0x12ec23a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec23a0))), 0x12ea65bbu);
  /* 12ea65bb mov ecx, dword ptr [0x12ec0f6c] */
  ECX = (r32((uint32_t)(0x12ec0f6c)));
  /* 12ea65c1 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea65c2 call dword ptr [0x12ec2388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2388))), 0x12ea65c8u);
  /* 12ea65c8 mov esp, ebp */
  ESP = (EBP);
  /* 12ea65ca pop ebp */
  EBP = (pop32());
  /* 12ea65cb ret  */
  ESPCHK(0x12ea6530u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12ea65d0 (73 bytes, 19 insns) */
void f_12ea65d0(void) {
  FTRACE(0x12ea65d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea65d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea65d1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea65d3 cmp dword ptr [0x12ebf5c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf5c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea65da je 0x12ea65ee */
  if (C.zf) goto L_12ea65ee;
  /* 12ea65dc cmp dword ptr [0x12ebf5c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf5c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea65e3 jne 0x12ea6617 */
  if (!C.zf) goto L_12ea6617;
  /* 12ea65e5 cmp dword ptr [0x12ebf5c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf5c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea65ec jne 0x12ea6617 */
  if (!C.zf) goto L_12ea6617;
L_12ea65ee:;
  /* 12ea65ee push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12ea65f3 call 0x12ea6620 */
  push32(0x12ea65f8u); f_12ea6620();
  /* 12ea65f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea65fb cmp dword ptr [0x12ebf730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6602 je 0x12ea660a */
  if (C.zf) goto L_12ea660a;
  /* 12ea6604 call dword ptr [0x12ebf730] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ebf730))), 0x12ea660au);
L_12ea660a:;
  /* 12ea660a push 0xff */
  push32((uint32_t)(0xffu));
  /* 12ea660f call 0x12ea6620 */
  push32(0x12ea6614u); f_12ea6620();
  /* 12ea6614 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea6617:;
  /* 12ea6617 pop ebp */
  EBP = (pop32());
  /* 12ea6618 ret  */
  ESPCHK(0x12ea65d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006620 @ 0x12ea6620 (447 bytes, 131 insns) */
void f_12ea6620(void) {
  FTRACE(0x12ea6620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea6620 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea6621 mov ebp, esp */
  EBP = (ESP);
  /* 12ea6623 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea6629 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea662a push esi */
  push32((uint32_t)(ESI));
  /* 12ea662b push edi */
  push32((uint32_t)(EDI));
  /* 12ea662c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12ea6633 jmp 0x12ea663e */
  goto L_12ea663e;
L_12ea6635:;
  /* 12ea6635 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea6638 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea663b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12ea663e:;
  /* 12ea663e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6642 jae 0x12ea6657 */
  if (!C.cf) goto L_12ea6657;
  /* 12ea6644 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea6647 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea664a cmp edx, dword ptr [ecx*8 + 0x12ebdac8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12ebdac8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6651 jne 0x12ea6655 */
  if (!C.zf) goto L_12ea6655;
  /* 12ea6653 jmp 0x12ea6657 */
  goto L_12ea6657;
L_12ea6655:;
  /* 12ea6655 jmp 0x12ea6635 */
  goto L_12ea6635;
L_12ea6657:;
  /* 12ea6657 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea665a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea665d cmp ecx, dword ptr [eax*8 + 0x12ebdac8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12ebdac8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6664 jne 0x12ea67d8 */
  if (!C.zf) goto L_12ea67d8;
  /* 12ea666a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6671 je 0x12ea6694 */
  if (C.zf) goto L_12ea6694;
  /* 12ea6673 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea6676 mov eax, dword ptr [edx*8 + 0x12ebdacc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12ebdacc)));
  /* 12ea667d push eax */
  push32((uint32_t)(EAX));
  /* 12ea667e push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea6680 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea6682 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea6684 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea6686 call 0x12ea2db0 */
  push32(0x12ea668bu); f_12ea2db0();
  /* 12ea668b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea668e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6691 jne 0x12ea6694 */
  if (!C.zf) goto L_12ea6694;
  /* 12ea6693 int3  */
  x86_unimpl("int3 @ 0x12ea6693");
L_12ea6694:;
  /* 12ea6694 cmp dword ptr [0x12ebf5c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf5c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea669b je 0x12ea66af */
  if (C.zf) goto L_12ea66af;
  /* 12ea669d cmp dword ptr [0x12ebf5c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf5c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea66a4 jne 0x12ea66e8 */
  if (!C.zf) goto L_12ea66e8;
  /* 12ea66a6 cmp dword ptr [0x12ebf5c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf5c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea66ad jne 0x12ea66e8 */
  if (!C.zf) goto L_12ea66e8;
L_12ea66af:;
  /* 12ea66af push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea66b1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12ea66b4 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea66b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea66b8 mov eax, dword ptr [edx*8 + 0x12ebdacc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12ebdacc)));
  /* 12ea66bf push eax */
  push32((uint32_t)(EAX));
  /* 12ea66c0 call 0x12ea6b20 */
  push32(0x12ea66c5u); f_12ea6b20();
  /* 12ea66c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea66c8 push eax */
  push32((uint32_t)(EAX));
  /* 12ea66c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea66cc mov edx, dword ptr [ecx*8 + 0x12ebdacc] */
  EDX = (r32((uint32_t)(ECX*8 + 0x12ebdacc)));
  /* 12ea66d3 push edx */
  push32((uint32_t)(EDX));
  /* 12ea66d4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12ea66d6 call dword ptr [0x12ec2320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2320))), 0x12ea66dcu);
  /* 12ea66dc push eax */
  push32((uint32_t)(EAX));
  /* 12ea66dd call dword ptr [0x12ec2324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2324))), 0x12ea66e3u);
  /* 12ea66e3 jmp 0x12ea67d8 */
  goto L_12ea67d8;
L_12ea66e8:;
  /* 12ea66e8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea66ef je 0x12ea67d8 */
  if (C.zf) goto L_12ea67d8;
  /* 12ea66f5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12ea66fa lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12ea6700 push eax */
  push32((uint32_t)(EAX));
  /* 12ea6701 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea6703 call dword ptr [0x12ec233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec233c))), 0x12ea6709u);
  /* 12ea6709 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea670b jne 0x12ea6721 */
  if (!C.zf) goto L_12ea6721;
  /* 12ea670d push 0x12eba554 */
  push32((uint32_t)(0x12eba554u));
  /* 12ea6712 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12ea6718 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea6719 call 0x12ea6ca0 */
  push32(0x12ea671eu); f_12ea6ca0();
  /* 12ea671e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea6721:;
  /* 12ea6721 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12ea6727 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12ea672a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea672d push eax */
  push32((uint32_t)(EAX));
  /* 12ea672e call 0x12ea6b20 */
  push32(0x12ea6733u); f_12ea6b20();
  /* 12ea6733 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6736 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6739 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea673c jbe 0x12ea676a */
  if ((C.cf||C.zf)) goto L_12ea676a;
  /* 12ea673e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12ea6744 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea6745 call 0x12ea6b20 */
  push32(0x12ea674au); f_12ea6b20();
  /* 12ea674a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea674d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea6750 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12ea6754 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ea6757 push 3 */
  push32((uint32_t)(0x3u));
  /* 12ea6759 push 0x12eba550 */
  push32((uint32_t)(0x12eba550u));
  /* 12ea675e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea6761 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea6762 call 0x12ea7510 */
  push32(0x12ea6767u); f_12ea7510();
  /* 12ea6767 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea676a:;
  /* 12ea676a push 0x12ebafa8 */
  push32((uint32_t)(0x12ebafa8u));
  /* 12ea676f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12ea6775 push edx */
  push32((uint32_t)(EDX));
  /* 12ea6776 call 0x12ea6ca0 */
  push32(0x12ea677bu); f_12ea6ca0();
  /* 12ea677b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea677e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea6781 push eax */
  push32((uint32_t)(EAX));
  /* 12ea6782 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12ea6788 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea6789 call 0x12ea6cb0 */
  push32(0x12ea678eu); f_12ea6cb0();
  /* 12ea678e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6791 push 0x12eba4c8 */
  push32((uint32_t)(0x12eba4c8u));
  /* 12ea6796 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12ea679c push edx */
  push32((uint32_t)(EDX));
  /* 12ea679d call 0x12ea6cb0 */
  push32(0x12ea67a2u); f_12ea6cb0();
  /* 12ea67a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea67a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea67a8 mov ecx, dword ptr [eax*8 + 0x12ebdacc] */
  ECX = (r32((uint32_t)(EAX*8 + 0x12ebdacc)));
  /* 12ea67af push ecx */
  push32((uint32_t)(ECX));
  /* 12ea67b0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12ea67b6 push edx */
  push32((uint32_t)(EDX));
  /* 12ea67b7 call 0x12ea6cb0 */
  push32(0x12ea67bcu); f_12ea6cb0();
  /* 12ea67bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea67bf push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12ea67c4 push 0x12ebaf80 */
  push32((uint32_t)(0x12ebaf80u));
  /* 12ea67c9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 12ea67cf push eax */
  push32((uint32_t)(EAX));
  /* 12ea67d0 call 0x12ea7450 */
  push32(0x12ea67d5u); f_12ea7450();
  /* 12ea67d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea67d8:;
  /* 12ea67d8 pop edi */
  EDI = (pop32());
  /* 12ea67d9 pop esi */
  ESI = (pop32());
  /* 12ea67da pop ebx */
  EBX = (pop32());
  /* 12ea67db mov esp, ebp */
  ESP = (EBP);
  /* 12ea67dd pop ebp */
  EBP = (pop32());
  /* 12ea67de ret  */
  ESPCHK(0x12ea6620u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12ea67e0 (80 bytes, 27 insns) */
void f_12ea67e0(void) {
  FTRACE(0x12ea67e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea67e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea67e1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea67e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea67e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12ea67eb jmp 0x12ea67f6 */
  goto L_12ea67f6;
L_12ea67ed:;
  /* 12ea67ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea67f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea67f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ea67f6:;
  /* 12ea67f6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea67fa jae 0x12ea680f */
  if (!C.cf) goto L_12ea680f;
  /* 12ea67fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea67ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea6802 cmp edx, dword ptr [ecx*8 + 0x12ebdac8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12ebdac8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6809 jne 0x12ea680d */
  if (!C.zf) goto L_12ea680d;
  /* 12ea680b jmp 0x12ea680f */
  goto L_12ea680f;
L_12ea680d:;
  /* 12ea680d jmp 0x12ea67ed */
  goto L_12ea67ed;
L_12ea680f:;
  /* 12ea680f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6812 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea6815 cmp ecx, dword ptr [eax*8 + 0x12ebdac8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12ebdac8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea681c jne 0x12ea682a */
  if (!C.zf) goto L_12ea682a;
  /* 12ea681e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6821 mov eax, dword ptr [edx*8 + 0x12ebdacc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12ebdacc)));
  /* 12ea6828 jmp 0x12ea682c */
  goto L_12ea682c;
L_12ea682a:;
  /* 12ea682a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ea682c:;
  /* 12ea682c mov esp, ebp */
  ESP = (EBP);
  /* 12ea682e pop ebp */
  EBP = (pop32());
  /* 12ea682f ret  */
  ESPCHK(0x12ea67e0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12ea6830 (66 bytes, 28 insns) */
void f_12ea6830(void) {
  FTRACE(0x12ea6830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea6830 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea6831 mov ebp, esp */
  EBP = (ESP);
  /* 12ea6833 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6837 jne 0x12ea6857 */
  if (!C.zf) goto L_12ea6857;
  /* 12ea6839 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea683d jge 0x12ea6857 */
  if ((C.sf==C.of)) goto L_12ea6857;
  /* 12ea683f push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea6841 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea6844 push eax */
  push32((uint32_t)(EAX));
  /* 12ea6845 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea6848 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea6849 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea684c push edx */
  push32((uint32_t)(EDX));
  /* 12ea684d call 0x12ea6880 */
  push32(0x12ea6852u); f_12ea6880();
  /* 12ea6852 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6855 jmp 0x12ea686d */
  goto L_12ea686d;
L_12ea6857:;
  /* 12ea6857 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea6859 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea685c push eax */
  push32((uint32_t)(EAX));
  /* 12ea685d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea6860 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea6861 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea6864 push edx */
  push32((uint32_t)(EDX));
  /* 12ea6865 call 0x12ea6880 */
  push32(0x12ea686au); f_12ea6880();
  /* 12ea686a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea686d:;
  /* 12ea686d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea6870 pop ebp */
  EBP = (pop32());
  /* 12ea6871 ret  */
  ESPCHK(0x12ea6830u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12ea6880 (194 bytes, 71 insns) */
void f_12ea6880(void) {
  FTRACE(0x12ea6880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea6880 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea6881 mov ebp, esp */
  EBP = (ESP);
  /* 12ea6883 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea6886 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea6889 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea688c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6890 je 0x12ea68a9 */
  if (C.zf) goto L_12ea68a9;
  /* 12ea6892 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6895 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12ea6898 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea689b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea689e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ea68a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea68a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12ea68a6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12ea68a9:;
  /* 12ea68a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea68ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12ea68af:;
  /* 12ea68af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea68b2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea68b4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ea68b7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12ea68ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea68bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea68bf div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12ea68c2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ea68c5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea68c9 jbe 0x12ea68e1 */
  if ((C.cf||C.zf)) goto L_12ea68e1;
  /* 12ea68cb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea68ce add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea68d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea68d4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12ea68d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea68d9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea68dc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ea68df jmp 0x12ea68f5 */
  goto L_12ea68f5;
L_12ea68e1:;
  /* 12ea68e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea68e4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea68e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea68ea mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12ea68ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea68ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea68f2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12ea68f5:;
  /* 12ea68f5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea68f9 ja 0x12ea68af */
  if ((!C.cf&&!C.zf)) goto L_12ea68af;
  /* 12ea68fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea68fe mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12ea6901 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6904 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea6907 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ea690a:;
  /* 12ea690a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea690d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ea690f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12ea6912 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6915 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea6918 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ea691a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12ea691c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea691f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12ea6922 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12ea6924 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6927 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea692a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ea692d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea6930 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6933 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ea6936 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea6939 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea693c jb 0x12ea690a */
  if (C.cf) goto L_12ea690a;
  /* 12ea693e mov esp, ebp */
  ESP = (EBP);
  /* 12ea6940 pop ebp */
  EBP = (pop32());
  /* 12ea6941 ret  */
  ESPCHK(0x12ea6880u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12ea6950 (63 bytes, 24 insns) */
void f_12ea6950(void) {
  FTRACE(0x12ea6950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea6950 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea6951 mov ebp, esp */
  EBP = (ESP);
  /* 12ea6953 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea6954 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6958 jne 0x12ea6969 */
  if (!C.zf) goto L_12ea6969;
  /* 12ea695a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea695e jge 0x12ea6969 */
  if ((C.sf==C.of)) goto L_12ea6969;
  /* 12ea6960 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12ea6967 jmp 0x12ea6970 */
  goto L_12ea6970;
L_12ea6969:;
  /* 12ea6969 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12ea6970:;
  /* 12ea6970 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6973 push eax */
  push32((uint32_t)(EAX));
  /* 12ea6974 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea6977 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea6978 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea697b push edx */
  push32((uint32_t)(EDX));
  /* 12ea697c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea697f push eax */
  push32((uint32_t)(EAX));
  /* 12ea6980 call 0x12ea6880 */
  push32(0x12ea6985u); f_12ea6880();
  /* 12ea6985 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6988 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea698b mov esp, ebp */
  ESP = (EBP);
  /* 12ea698d pop ebp */
  EBP = (pop32());
  /* 12ea698e ret  */
  ESPCHK(0x12ea6950u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12ea6990 (30 bytes, 14 insns) */
void f_12ea6990(void) {
  FTRACE(0x12ea6990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea6990 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea6991 mov ebp, esp */
  EBP = (ESP);
  /* 12ea6993 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea6995 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea6998 push eax */
  push32((uint32_t)(EAX));
  /* 12ea6999 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea699c push ecx */
  push32((uint32_t)(ECX));
  /* 12ea699d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea69a0 push edx */
  push32((uint32_t)(EDX));
  /* 12ea69a1 call 0x12ea6880 */
  push32(0x12ea69a6u); f_12ea6880();
  /* 12ea69a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea69a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea69ac pop ebp */
  EBP = (pop32());
  /* 12ea69ad ret  */
  ESPCHK(0x12ea6990u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12ea69b0 (72 bytes, 28 insns) */
void f_12ea69b0(void) {
  FTRACE(0x12ea69b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea69b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea69b1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea69b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea69b4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea69b8 jne 0x12ea69d1 */
  if (!C.zf) goto L_12ea69d1;
  /* 12ea69ba cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea69be jg 0x12ea69d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ea69d1;
  /* 12ea69c0 jl 0x12ea69c8 */
  if ((C.sf!=C.of)) goto L_12ea69c8;
  /* 12ea69c2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea69c6 jae 0x12ea69d1 */
  if (!C.cf) goto L_12ea69d1;
L_12ea69c8:;
  /* 12ea69c8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12ea69cf jmp 0x12ea69d8 */
  goto L_12ea69d8;
L_12ea69d1:;
  /* 12ea69d1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12ea69d8:;
  /* 12ea69d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea69db push eax */
  push32((uint32_t)(EAX));
  /* 12ea69dc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea69df push ecx */
  push32((uint32_t)(ECX));
  /* 12ea69e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea69e3 push edx */
  push32((uint32_t)(EDX));
  /* 12ea69e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea69e7 push eax */
  push32((uint32_t)(EAX));
  /* 12ea69e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea69eb push ecx */
  push32((uint32_t)(ECX));
  /* 12ea69ec call 0x12ea6a00 */
  push32(0x12ea69f1u); f_12ea6a00();
  /* 12ea69f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea69f4 mov esp, ebp */
  ESP = (EBP);
  /* 12ea69f6 pop ebp */
  EBP = (pop32());
  /* 12ea69f7 ret  */
  ESPCHK(0x12ea69b0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12ea6a00 (242 bytes, 91 insns) */
void f_12ea6a00(void) {
  FTRACE(0x12ea6a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea6a00 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea6a01 mov ebp, esp */
  EBP = (ESP);
  /* 12ea6a03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea6a06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea6a09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea6a0c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6a10 je 0x12ea6a34 */
  if (C.zf) goto L_12ea6a34;
  /* 12ea6a12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6a15 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12ea6a18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6a1b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6a1e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ea6a21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea6a24 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12ea6a26 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea6a29 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6a2c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12ea6a2e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ea6a31 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12ea6a34:;
  /* 12ea6a34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6a37 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12ea6a3a:;
  /* 12ea6a3a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea6a3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea6a3f push ecx */
  push32((uint32_t)(ECX));
  /* 12ea6a40 push eax */
  push32((uint32_t)(EAX));
  /* 12ea6a41 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea6a44 push edx */
  push32((uint32_t)(EDX));
  /* 12ea6a45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea6a48 push eax */
  push32((uint32_t)(EAX));
  /* 12ea6a49 call 0x12eaa980 */
  push32(0x12ea6a4eu); f_12eaa980();
  /* 12ea6a4e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ea6a51 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea6a54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea6a56 push edx */
  push32((uint32_t)(EDX));
  /* 12ea6a57 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea6a58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea6a5b push eax */
  push32((uint32_t)(EAX));
  /* 12ea6a5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea6a5f push ecx */
  push32((uint32_t)(ECX));
  /* 12ea6a60 call 0x12eaa910 */
  push32(0x12ea6a65u); f_12eaa910();
  /* 12ea6a65 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ea6a68 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12ea6a6b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6a6f jbe 0x12ea6a87 */
  if ((C.cf||C.zf)) goto L_12ea6a87;
  /* 12ea6a71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea6a74 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6a77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6a7a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12ea6a7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6a7f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6a82 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ea6a85 jmp 0x12ea6a9b */
  goto L_12ea6a9b;
L_12ea6a87:;
  /* 12ea6a87 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea6a8a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6a8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6a90 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12ea6a92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6a95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6a98 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12ea6a9b:;
  /* 12ea6a9b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6a9f ja 0x12ea6a3a */
  if ((!C.cf&&!C.zf)) goto L_12ea6a3a;
  /* 12ea6aa1 jb 0x12ea6aa9 */
  if (C.cf) goto L_12ea6aa9;
  /* 12ea6aa3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6aa7 ja 0x12ea6a3a */
  if ((!C.cf&&!C.zf)) goto L_12ea6a3a;
L_12ea6aa9:;
  /* 12ea6aa9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6aac mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12ea6aaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6ab2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea6ab5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ea6ab8:;
  /* 12ea6ab8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6abb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ea6abd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12ea6ac0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6ac3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea6ac6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ea6ac8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12ea6aca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea6acd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12ea6ad0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12ea6ad2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6ad5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea6ad8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12ea6adb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea6ade add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6ae1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ea6ae4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea6ae7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6aea jb 0x12ea6ab8 */
  if (C.cf) goto L_12ea6ab8;
  /* 12ea6aec mov esp, ebp */
  ESP = (EBP);
  /* 12ea6aee pop ebp */
  EBP = (pop32());
  /* 12ea6aef ret 0x14 */
  ESPCHK(0x12ea6a00u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12ea6b00 (31 bytes, 15 insns) */
void f_12ea6b00(void) {
  FTRACE(0x12ea6b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea6b00 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea6b01 mov ebp, esp */
  EBP = (ESP);
  /* 12ea6b03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea6b05 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea6b08 push eax */
  push32((uint32_t)(EAX));
  /* 12ea6b09 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea6b0c push ecx */
  push32((uint32_t)(ECX));
  /* 12ea6b0d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea6b10 push edx */
  push32((uint32_t)(EDX));
  /* 12ea6b11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea6b14 push eax */
  push32((uint32_t)(EAX));
  /* 12ea6b15 call 0x12ea6a00 */
  push32(0x12ea6b1au); f_12ea6a00();
  /* 12ea6b1a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea6b1d pop ebp */
  EBP = (pop32());
  /* 12ea6b1e ret  */
  ESPCHK(0x12ea6b00u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12ea6b20 (123 bytes, 44 insns) */
void f_12ea6b20(void) {
  FTRACE(0x12ea6b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea6b20 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12ea6b24 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12ea6b2a je 0x12ea6b40 */
  if (C.zf) goto L_12ea6b40;
L_12ea6b2c:;
  /* 12ea6b2c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12ea6b2e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12ea6b2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12ea6b31 je 0x12ea6b73 */
  if (C.zf) goto L_12ea6b73;
  /* 12ea6b33 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12ea6b39 jne 0x12ea6b2c */
  if (!C.zf) goto L_12ea6b2c;
  /* 12ea6b3b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12ea6b40:;
  /* 12ea6b40 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12ea6b42 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12ea6b47 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6b49 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea6b4c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea6b4e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6b51 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12ea6b56 je 0x12ea6b40 */
  if (C.zf) goto L_12ea6b40;
  /* 12ea6b58 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12ea6b5b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12ea6b5d je 0x12ea6b91 */
  if (C.zf) goto L_12ea6b91;
  /* 12ea6b5f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12ea6b61 je 0x12ea6b87 */
  if (C.zf) goto L_12ea6b87;
  /* 12ea6b63 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12ea6b68 je 0x12ea6b7d */
  if (C.zf) goto L_12ea6b7d;
  /* 12ea6b6a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12ea6b6f je 0x12ea6b73 */
  if (C.zf) goto L_12ea6b73;
  /* 12ea6b71 jmp 0x12ea6b40 */
  goto L_12ea6b40;
L_12ea6b73:;
  /* 12ea6b73 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12ea6b76 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12ea6b7a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea6b7c ret  */
  ESPCHK(0x12ea6b20u, _esp0);
  ESP += 4; return;
L_12ea6b7d:;
  /* 12ea6b7d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12ea6b80 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12ea6b84 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea6b86 ret  */
  ESPCHK(0x12ea6b20u, _esp0);
  ESP += 4; return;
L_12ea6b87:;
  /* 12ea6b87 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 12ea6b8a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12ea6b8e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea6b90 ret  */
  ESPCHK(0x12ea6b20u, _esp0);
  ESP += 4; return;
L_12ea6b91:;
  /* 12ea6b91 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12ea6b94 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12ea6b98 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea6b9a ret  */
  ESPCHK(0x12ea6b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ba0 @ 0x12ea6ba0 (249 bytes, 93 insns) */
void f_12ea6ba0(void) {
  FTRACE(0x12ea6ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea6ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea6ba1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea6ba3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea6ba6 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea6ba7 push esi */
  push32((uint32_t)(ESI));
  /* 12ea6ba8 push edi */
  push32((uint32_t)(EDI));
  /* 12ea6ba9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12ea6bac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12ea6baf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12ea6bb2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12ea6bb5:;
  /* 12ea6bb5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6bb9 jne 0x12ea6bd9 */
  if (!C.zf) goto L_12ea6bd9;
  /* 12ea6bbb push 0x12ebafe0 */
  push32((uint32_t)(0x12ebafe0u));
  /* 12ea6bc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea6bc2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12ea6bc4 push 0x12ebafd4 */
  push32((uint32_t)(0x12ebafd4u));
  /* 12ea6bc9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea6bcb call 0x12ea2db0 */
  push32(0x12ea6bd0u); f_12ea2db0();
  /* 12ea6bd0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6bd3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6bd6 jne 0x12ea6bd9 */
  if (!C.zf) goto L_12ea6bd9;
  /* 12ea6bd8 int3  */
  x86_unimpl("int3 @ 0x12ea6bd8");
L_12ea6bd9:;
  /* 12ea6bd9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea6bdb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea6bdd jne 0x12ea6bb5 */
  if (!C.zf) goto L_12ea6bb5;
L_12ea6bdf:;
  /* 12ea6bdf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6be3 jne 0x12ea6c03 */
  if (!C.zf) goto L_12ea6c03;
  /* 12ea6be5 push 0x12ebafc4 */
  push32((uint32_t)(0x12ebafc4u));
  /* 12ea6bea push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea6bec push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12ea6bee push 0x12ebafd4 */
  push32((uint32_t)(0x12ebafd4u));
  /* 12ea6bf3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea6bf5 call 0x12ea2db0 */
  push32(0x12ea6bfau); f_12ea2db0();
  /* 12ea6bfa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6bfd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6c00 jne 0x12ea6c03 */
  if (!C.zf) goto L_12ea6c03;
  /* 12ea6c02 int3  */
  x86_unimpl("int3 @ 0x12ea6c02");
L_12ea6c03:;
  /* 12ea6c03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea6c05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ea6c07 jne 0x12ea6bdf */
  if (!C.zf) goto L_12ea6bdf;
  /* 12ea6c09 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea6c0c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12ea6c13 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea6c16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea6c19 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12ea6c1c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea6c1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea6c22 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12ea6c24 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea6c27 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea6c2a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12ea6c2d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12ea6c30 push edx */
  push32((uint32_t)(EDX));
  /* 12ea6c31 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea6c34 push eax */
  push32((uint32_t)(EAX));
  /* 12ea6c35 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea6c38 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea6c39 call 0x12eaac80 */
  push32(0x12ea6c3eu); f_12eaac80();
  /* 12ea6c3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6c41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12ea6c44 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea6c47 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12ea6c4a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea6c4d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea6c50 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12ea6c53 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea6c56 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6c5a jl 0x12ea6c7e */
  if ((C.sf!=C.of)) goto L_12ea6c7e;
  /* 12ea6c5c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea6c5f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ea6c61 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12ea6c64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea6c66 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ea6c6c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12ea6c6f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea6c72 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ea6c74 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6c77 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea6c7a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12ea6c7c jmp 0x12ea6c8f */
  goto L_12ea6c8f;
L_12ea6c7e:;
  /* 12ea6c7e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea6c81 push eax */
  push32((uint32_t)(EAX));
  /* 12ea6c82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea6c84 call 0x12eaaa00 */
  push32(0x12ea6c89u); f_12eaaa00();
  /* 12ea6c89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6c8c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12ea6c8f:;
  /* 12ea6c8f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea6c92 pop edi */
  EDI = (pop32());
  /* 12ea6c93 pop esi */
  ESI = (pop32());
  /* 12ea6c94 pop ebx */
  EBX = (pop32());
  /* 12ea6c95 mov esp, ebp */
  ESP = (EBP);
  /* 12ea6c97 pop ebp */
  EBP = (pop32());
  /* 12ea6c98 ret  */
  ESPCHK(0x12ea6ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ca0 @ 0x12ea6ca0 (7 bytes, 3 insns) */
void f_12ea6ca0(void) {
  FTRACE(0x12ea6ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea6ca0 push edi */
  push32((uint32_t)(EDI));
  /* 12ea6ca1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12ea6ca5 jmp 0x12ea6d11 */
  jmp_ind(0x12ea6d11u); return;
}

/* FUN_10006cb0 @ 0x12ea6cb0 (224 bytes, 84 insns) */
void f_12ea6cb0(void) {
  FTRACE(0x12ea6cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea6cb0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12ea6cb4 push edi */
  push32((uint32_t)(EDI));
  /* 12ea6cb5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12ea6cbb je 0x12ea6ccc */
  if (C.zf) goto L_12ea6ccc;
L_12ea6cbd:;
  /* 12ea6cbd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12ea6cbf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12ea6cc0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12ea6cc2 je 0x12ea6cff */
  if (C.zf) goto L_12ea6cff;
  /* 12ea6cc4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12ea6cca jne 0x12ea6cbd */
  if (!C.zf) goto L_12ea6cbd;
L_12ea6ccc:;
  /* 12ea6ccc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12ea6cce mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12ea6cd3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6cd5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea6cd8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea6cda add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6cdd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12ea6ce2 je 0x12ea6ccc */
  if (C.zf) goto L_12ea6ccc;
  /* 12ea6ce4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12ea6ce7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12ea6ce9 je 0x12ea6d0e */
  if (C.zf) goto L_12ea6d0e;
  /* 12ea6ceb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12ea6ced je 0x12ea6d09 */
  if (C.zf) goto L_12ea6d09;
  /* 12ea6cef test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12ea6cf4 je 0x12ea6d04 */
  if (C.zf) goto L_12ea6d04;
  /* 12ea6cf6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12ea6cfb je 0x12ea6cff */
  if (C.zf) goto L_12ea6cff;
  /* 12ea6cfd jmp 0x12ea6ccc */
  goto L_12ea6ccc;
L_12ea6cff:;
  /* 12ea6cff lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12ea6d02 jmp 0x12ea6d11 */
  goto L_12ea6d11;
L_12ea6d04:;
  /* 12ea6d04 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12ea6d07 jmp 0x12ea6d11 */
  goto L_12ea6d11;
L_12ea6d09:;
  /* 12ea6d09 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 12ea6d0c jmp 0x12ea6d11 */
  goto L_12ea6d11;
L_12ea6d0e:;
  /* 12ea6d0e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12ea6d11:;
  /* 12ea6d11 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12ea6d15 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12ea6d1b je 0x12ea6d36 */
  if (C.zf) goto L_12ea6d36;
L_12ea6d1d:;
  /* 12ea6d1d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12ea6d1f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12ea6d20 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12ea6d22 je 0x12ea6d88 */
  if (C.zf) goto L_12ea6d88;
  /* 12ea6d24 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12ea6d26 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12ea6d27 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12ea6d2d jne 0x12ea6d1d */
  if (!C.zf) goto L_12ea6d1d;
  /* 12ea6d2f jmp 0x12ea6d36 */
  goto L_12ea6d36;
L_12ea6d31:;
  /* 12ea6d31 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12ea6d33 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12ea6d36:;
  /* 12ea6d36 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12ea6d3b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12ea6d3d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6d3f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea6d42 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea6d44 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ea6d46 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6d49 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12ea6d4e je 0x12ea6d31 */
  if (C.zf) goto L_12ea6d31;
  /* 12ea6d50 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12ea6d52 je 0x12ea6d88 */
  if (C.zf) goto L_12ea6d88;
  /* 12ea6d54 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12ea6d56 je 0x12ea6d7f */
  if (C.zf) goto L_12ea6d7f;
  /* 12ea6d58 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12ea6d5e je 0x12ea6d72 */
  if (C.zf) goto L_12ea6d72;
  /* 12ea6d60 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12ea6d66 je 0x12ea6d6a */
  if (C.zf) goto L_12ea6d6a;
  /* 12ea6d68 jmp 0x12ea6d31 */
  goto L_12ea6d31;
L_12ea6d6a:;
  /* 12ea6d6a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12ea6d6c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12ea6d70 pop edi */
  EDI = (pop32());
  /* 12ea6d71 ret  */
  ESPCHK(0x12ea6cb0u, _esp0);
  ESP += 4; return;
L_12ea6d72:;
  /* 12ea6d72 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12ea6d75 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12ea6d79 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 12ea6d7d pop edi */
  EDI = (pop32());
  /* 12ea6d7e ret  */
  ESPCHK(0x12ea6cb0u, _esp0);
  ESP += 4; return;
L_12ea6d7f:;
  /* 12ea6d7f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12ea6d82 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12ea6d86 pop edi */
  EDI = (pop32());
  /* 12ea6d87 ret  */
  ESPCHK(0x12ea6cb0u, _esp0);
  ESP += 4; return;
L_12ea6d88:;
  /* 12ea6d88 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12ea6d8a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12ea6d8e pop edi */
  EDI = (pop32());
  /* 12ea6d8f ret  */
  ESPCHK(0x12ea6cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d90 @ 0x12ea6d90 (243 bytes, 91 insns) */
void f_12ea6d90(void) {
  FTRACE(0x12ea6d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea6d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea6d91 mov ebp, esp */
  EBP = (ESP);
  /* 12ea6d93 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea6d96 push ebx */
  push32((uint32_t)(EBX));
  /* 12ea6d97 push esi */
  push32((uint32_t)(ESI));
  /* 12ea6d98 push edi */
  push32((uint32_t)(EDI));
  /* 12ea6d99 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12ea6d9c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12ea6d9f:;
  /* 12ea6d9f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6da3 jne 0x12ea6dc3 */
  if (!C.zf) goto L_12ea6dc3;
  /* 12ea6da5 push 0x12ebafe0 */
  push32((uint32_t)(0x12ebafe0u));
  /* 12ea6daa push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea6dac push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12ea6dae push 0x12ebaff0 */
  push32((uint32_t)(0x12ebaff0u));
  /* 12ea6db3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea6db5 call 0x12ea2db0 */
  push32(0x12ea6dbau); f_12ea2db0();
  /* 12ea6dba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6dbd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6dc0 jne 0x12ea6dc3 */
  if (!C.zf) goto L_12ea6dc3;
  /* 12ea6dc2 int3  */
  x86_unimpl("int3 @ 0x12ea6dc2");
L_12ea6dc3:;
  /* 12ea6dc3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea6dc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ea6dc7 jne 0x12ea6d9f */
  if (!C.zf) goto L_12ea6d9f;
L_12ea6dc9:;
  /* 12ea6dc9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6dcd jne 0x12ea6ded */
  if (!C.zf) goto L_12ea6ded;
  /* 12ea6dcf push 0x12ebafc4 */
  push32((uint32_t)(0x12ebafc4u));
  /* 12ea6dd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea6dd6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12ea6dd8 push 0x12ebaff0 */
  push32((uint32_t)(0x12ebaff0u));
  /* 12ea6ddd push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea6ddf call 0x12ea2db0 */
  push32(0x12ea6de4u); f_12ea2db0();
  /* 12ea6de4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6de7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6dea jne 0x12ea6ded */
  if (!C.zf) goto L_12ea6ded;
  /* 12ea6dec int3  */
  x86_unimpl("int3 @ 0x12ea6dec");
L_12ea6ded:;
  /* 12ea6ded xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea6def test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ea6df1 jne 0x12ea6dc9 */
  if (!C.zf) goto L_12ea6dc9;
  /* 12ea6df3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea6df6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 12ea6dfd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea6e00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea6e03 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12ea6e06 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea6e09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea6e0c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12ea6e0e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea6e11 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea6e14 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12ea6e17 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ea6e1a push ecx */
  push32((uint32_t)(ECX));
  /* 12ea6e1b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ea6e1e push edx */
  push32((uint32_t)(EDX));
  /* 12ea6e1f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea6e22 push eax */
  push32((uint32_t)(EAX));
  /* 12ea6e23 call 0x12eaac80 */
  push32(0x12ea6e28u); f_12eaac80();
  /* 12ea6e28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6e2b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12ea6e2e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea6e31 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12ea6e34 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea6e37 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea6e3a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12ea6e3d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea6e40 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6e44 jl 0x12ea6e68 */
  if ((C.sf!=C.of)) goto L_12ea6e68;
  /* 12ea6e46 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea6e49 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ea6e4b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12ea6e4e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ea6e50 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12ea6e56 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12ea6e59 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea6e5c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ea6e5e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6e61 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea6e64 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12ea6e66 jmp 0x12ea6e79 */
  goto L_12ea6e79;
L_12ea6e68:;
  /* 12ea6e68 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12ea6e6b push edx */
  push32((uint32_t)(EDX));
  /* 12ea6e6c push 0 */
  push32((uint32_t)(0x0u));
  /* 12ea6e6e call 0x12eaaa00 */
  push32(0x12ea6e73u); f_12eaaa00();
  /* 12ea6e73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6e76 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12ea6e79:;
  /* 12ea6e79 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12ea6e7c pop edi */
  EDI = (pop32());
  /* 12ea6e7d pop esi */
  ESI = (pop32());
  /* 12ea6e7e pop ebx */
  EBX = (pop32());
  /* 12ea6e7f mov esp, ebp */
  ESP = (EBP);
  /* 12ea6e81 pop ebp */
  EBP = (pop32());
  /* 12ea6e82 ret  */
  ESPCHK(0x12ea6d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e90 @ 0x12ea6e90 (47 bytes, 17 insns) */
void f_12ea6e90(void) {
  FTRACE(0x12ea6e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea6e90 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea6e91 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6e96 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12ea6e9a jb 0x12ea6eb0 */
  if (C.cf) goto L_12ea6eb0;
L_12ea6e9c:;
  /* 12ea6e9c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea6ea2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea6ea7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12ea6ea9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6eae jae 0x12ea6e9c */
  if (!C.cf) goto L_12ea6e9c;
L_12ea6eb0:;
  /* 12ea6eb0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea6eb2 mov eax, esp */
  EAX = (ESP);
  /* 12ea6eb4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12ea6eb6 mov esp, ecx */
  ESP = (ECX);
  /* 12ea6eb8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ea6eba mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12ea6ebd push eax */
  push32((uint32_t)(EAX));
  /* 12ea6ebe ret  */
  ESPCHK(0x12ea6e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ec0 @ 0x12ea6ec0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12ea6ec0(void) {
  FTRACE(0x12ea6ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea6ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea6ec1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea6ec3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea6ec6 push esi */
  push32((uint32_t)(ESI));
  /* 12ea6ec7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6ecb je 0x12ea6ed3 */
  if (C.zf) goto L_12ea6ed3;
  /* 12ea6ecd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6ed1 jne 0x12ea6ed8 */
  if (!C.zf) goto L_12ea6ed8;
L_12ea6ed3:;
  /* 12ea6ed3 jmp 0x12ea70a8 */
  goto L_12ea70a8;
L_12ea6ed8:;
  /* 12ea6ed8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6edc je 0x12ea6ef4 */
  if (C.zf) goto L_12ea6ef4;
  /* 12ea6ede cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6ee2 je 0x12ea6ef4 */
  if (C.zf) goto L_12ea6ef4;
  /* 12ea6ee4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6ee8 je 0x12ea6ef4 */
  if (C.zf) goto L_12ea6ef4;
  /* 12ea6eea cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6eee jne 0x12ea6fd1 */
  if (!C.zf) goto L_12ea6fd1;
L_12ea6ef4:;
  /* 12ea6ef4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea6ef6 call 0x12ea76f0 */
  push32(0x12ea6efbu); f_12ea76f0();
  /* 12ea6efb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6efe cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6f02 je 0x12ea6f0a */
  if (C.zf) goto L_12ea6f0a;
  /* 12ea6f04 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6f08 jne 0x12ea6f4f */
  if (!C.zf) goto L_12ea6f4f;
L_12ea6f0a:;
  /* 12ea6f0a cmp dword ptr [0x12ebf744], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf744))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6f11 jne 0x12ea6f4f */
  if (!C.zf) goto L_12ea6f4f;
  /* 12ea6f13 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea6f15 push 0x12ea70f0 */
  push32((uint32_t)(0x12ea70f0u));
  /* 12ea6f1a call dword ptr [0x12ec23a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec23a8))), 0x12ea6f20u);
  /* 12ea6f20 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6f23 jne 0x12ea6f31 */
  if (!C.zf) goto L_12ea6f31;
  /* 12ea6f25 mov dword ptr [0x12ebf744], 1 */
  w32((uint32_t)(0x12ebf744), (0x1u));
  /* 12ea6f2f jmp 0x12ea6f4f */
  goto L_12ea6f4f;
L_12ea6f31:;
  /* 12ea6f31 call dword ptr [0x12ec2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2364))), 0x12ea6f37u);
  /* 12ea6f37 mov esi, eax */
  ESI = (EAX);
  /* 12ea6f39 call 0x12eabbd0 */
  push32(0x12ea6f3eu); f_12eabbd0();
  /* 12ea6f3e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12ea6f40 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea6f42 call 0x12ea7790 */
  push32(0x12ea6f47u); f_12ea7790();
  /* 12ea6f47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6f4a jmp 0x12ea70a8 */
  goto L_12ea70a8;
L_12ea6f4f:;
  /* 12ea6f4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea6f52 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12ea6f55 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea6f58 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea6f5b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12ea6f5e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6f62 ja 0x12ea6fc2 */
  if ((!C.cf&&!C.zf)) goto L_12ea6fc2;
  /* 12ea6f64 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea6f67 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea6f69 mov dl, byte ptr [eax + 0x12ea70cf] */
  DL = (r8((uint32_t)(EAX + 0x12ea70cf)));
  /* 12ea6f6f jmp dword ptr [edx*4 + 0x12ea70bb] */
  switch (EDX) {
    case 0: goto L_12ea6f76;
    case 1: goto L_12ea6fb0;
    case 2: goto L_12ea6f8a;
    case 3: goto L_12ea6f9d;
    case 4: goto L_12ea6fc2;
    default: x86_unimpl("switch@0x12ea6f6f out of table"); return;
  }
L_12ea6f76:;
  /* 12ea6f76 mov ecx, dword ptr [0x12ebf734] */
  ECX = (r32((uint32_t)(0x12ebf734)));
  /* 12ea6f7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ea6f7f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea6f82 mov dword ptr [0x12ebf734], edx */
  w32((uint32_t)(0x12ebf734), (EDX));
  /* 12ea6f88 jmp 0x12ea6fc2 */
  goto L_12ea6fc2;
L_12ea6f8a:;
  /* 12ea6f8a mov eax, dword ptr [0x12ebf738] */
  EAX = (r32((uint32_t)(0x12ebf738)));
  /* 12ea6f8f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ea6f92 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea6f95 mov dword ptr [0x12ebf738], ecx */
  w32((uint32_t)(0x12ebf738), (ECX));
  /* 12ea6f9b jmp 0x12ea6fc2 */
  goto L_12ea6fc2;
L_12ea6f9d:;
  /* 12ea6f9d mov edx, dword ptr [0x12ebf73c] */
  EDX = (r32((uint32_t)(0x12ebf73c)));
  /* 12ea6fa3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12ea6fa6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea6fa9 mov dword ptr [0x12ebf73c], eax */
  w32((uint32_t)(0x12ebf73c), (EAX));
  /* 12ea6fae jmp 0x12ea6fc2 */
  goto L_12ea6fc2;
L_12ea6fb0:;
  /* 12ea6fb0 mov ecx, dword ptr [0x12ebf740] */
  ECX = (r32((uint32_t)(0x12ebf740)));
  /* 12ea6fb6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ea6fb9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea6fbc mov dword ptr [0x12ebf740], edx */
  w32((uint32_t)(0x12ebf740), (EDX));
L_12ea6fc2:;
  /* 12ea6fc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea6fc4 call 0x12ea7790 */
  push32(0x12ea6fc9u); f_12ea7790();
  /* 12ea6fc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea6fcc jmp 0x12ea70a3 */
  goto L_12ea70a3;
L_12ea6fd1:;
  /* 12ea6fd1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6fd5 je 0x12ea6fe8 */
  if (C.zf) goto L_12ea6fe8;
  /* 12ea6fd7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6fdb je 0x12ea6fe8 */
  if (C.zf) goto L_12ea6fe8;
  /* 12ea6fdd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6fe1 je 0x12ea6fe8 */
  if (C.zf) goto L_12ea6fe8;
  /* 12ea6fe3 jmp 0x12ea70a8 */
  goto L_12ea70a8;
L_12ea6fe8:;
  /* 12ea6fe8 call 0x12ea3730 */
  push32(0x12ea6fedu); f_12ea3730();
  /* 12ea6fed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea6ff0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea6ff3 cmp dword ptr [eax + 0x50], 0x12ebdc20 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x12ebdc20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea6ffa jne 0x12ea7045 */
  if (!C.zf) goto L_12ea7045;
  /* 12ea6ffc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12ea7001 push 0x12ebaffc */
  push32((uint32_t)(0x12ebaffcu));
  /* 12ea7006 push 2 */
  push32((uint32_t)(0x2u));
  /* 12ea7008 mov ecx, dword ptr [0x12ebdca0] */
  ECX = (r32((uint32_t)(0x12ebdca0)));
  /* 12ea700e push ecx */
  push32((uint32_t)(ECX));
  /* 12ea700f call 0x12ea3cf0 */
  push32(0x12ea7014u); f_12ea3cf0();
  /* 12ea7014 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7017 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea701a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 12ea701d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea7020 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7024 je 0x12ea7043 */
  if (C.zf) goto L_12ea7043;
  /* 12ea7026 mov ecx, dword ptr [0x12ebdca0] */
  ECX = (r32((uint32_t)(0x12ebdca0)));
  /* 12ea702c push ecx */
  push32((uint32_t)(ECX));
  /* 12ea702d push 0x12ebdc20 */
  push32((uint32_t)(0x12ebdc20u));
  /* 12ea7032 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea7035 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12ea7038 push eax */
  push32((uint32_t)(EAX));
  /* 12ea7039 call 0x12eaa5d0 */
  push32(0x12ea703eu); f_12eaa5d0();
  /* 12ea703e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7041 jmp 0x12ea7045 */
  goto L_12ea7045;
L_12ea7043:;
  /* 12ea7043 jmp 0x12ea70a8 */
  goto L_12ea70a8;
L_12ea7045:;
  /* 12ea7045 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea7048 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12ea704b push edx */
  push32((uint32_t)(EDX));
  /* 12ea704c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea704f push eax */
  push32((uint32_t)(EAX));
  /* 12ea7050 call 0x12ea73d0 */
  push32(0x12ea7055u); f_12ea73d0();
  /* 12ea7055 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7058 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ea705b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea705f jne 0x12ea7063 */
  if (!C.zf) goto L_12ea7063;
  /* 12ea7061 jmp 0x12ea70a8 */
  goto L_12ea70a8;
L_12ea7063:;
  /* 12ea7063 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea7066 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12ea7069 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12ea706c:;
  /* 12ea706c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea706f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12ea7072 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7075 jne 0x12ea70a3 */
  if (!C.zf) goto L_12ea70a3;
  /* 12ea7077 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea707a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea707d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12ea7080 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea7083 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7086 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12ea7089 mov edx, dword ptr [0x12ebdca4] */
  EDX = (r32((uint32_t)(0x12ebdca4)));
  /* 12ea708f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea7092 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea7095 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12ea7098 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea709a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea709d jb 0x12ea70a1 */
  if (C.cf) goto L_12ea70a1;
  /* 12ea709f jmp 0x12ea70a3 */
  goto L_12ea70a3;
L_12ea70a1:;
  /* 12ea70a1 jmp 0x12ea706c */
  goto L_12ea706c;
L_12ea70a3:;
  /* 12ea70a3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea70a6 jmp 0x12ea70b6 */
  goto L_12ea70b6;
L_12ea70a8:;
  /* 12ea70a8 call 0x12eabbc0 */
  push32(0x12ea70adu); f_12eabbc0();
  /* 12ea70ad mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12ea70b3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12ea70b6:;
  /* 12ea70b6 pop esi */
  ESI = (pop32());
  /* 12ea70b7 mov esp, ebp */
  ESP = (EBP);
  /* 12ea70b9 pop ebp */
  EBP = (pop32());
  /* 12ea70ba ret  */
  ESPCHK(0x12ea6ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_100070f0 @ 0x12ea70f0 (146 bytes, 45 insns) */
void f_12ea70f0(void) {
  FTRACE(0x12ea70f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea70f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea70f1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea70f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea70f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea70f8 call 0x12ea76f0 */
  push32(0x12ea70fdu); f_12ea76f0();
  /* 12ea70fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7100 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7104 jne 0x12ea711e */
  if (!C.zf) goto L_12ea711e;
  /* 12ea7106 mov dword ptr [ebp - 8], 0x12ebf734 */
  w32((uint32_t)(EBP + -0x8), (0x12ebf734u));
  /* 12ea710d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea7110 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12ea7112 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12ea7115 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12ea711c jmp 0x12ea7134 */
  goto L_12ea7134;
L_12ea711e:;
  /* 12ea711e mov dword ptr [ebp - 8], 0x12ebf738 */
  w32((uint32_t)(EBP + -0x8), (0x12ebf738u));
  /* 12ea7125 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea7128 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12ea712a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ea712d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12ea7134:;
  /* 12ea7134 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7138 jne 0x12ea7148 */
  if (!C.zf) goto L_12ea7148;
  /* 12ea713a push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea713c call 0x12ea7790 */
  push32(0x12ea7141u); f_12ea7790();
  /* 12ea7141 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7144 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea7146 jmp 0x12ea717c */
  goto L_12ea717c;
L_12ea7148:;
  /* 12ea7148 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea714c je 0x12ea716d */
  if (C.zf) goto L_12ea716d;
  /* 12ea714e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea7151 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12ea7157 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea7159 call 0x12ea7790 */
  push32(0x12ea715eu); f_12ea7790();
  /* 12ea715e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7161 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea7164 push edx */
  push32((uint32_t)(EDX));
  /* 12ea7165 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12ea7168u);
  /* 12ea7168 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea716b jmp 0x12ea7177 */
  goto L_12ea7177;
L_12ea716d:;
  /* 12ea716d push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea716f call 0x12ea7790 */
  push32(0x12ea7174u); f_12ea7790();
  /* 12ea7174 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea7177:;
  /* 12ea7177 mov eax, 1 */
  EAX = (0x1u);
L_12ea717c:;
  /* 12ea717c mov esp, ebp */
  ESP = (EBP);
  /* 12ea717e pop ebp */
  EBP = (pop32());
  /* 12ea717f ret 4 */
  ESPCHK(0x12ea70f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10007190 @ 0x12ea7190 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12ea7190(void) {
  FTRACE(0x12ea7190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7190 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea7191 mov ebp, esp */
  EBP = (ESP);
  /* 12ea7193 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea7196 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12ea719d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea71a0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12ea71a3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea71a6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ea71a9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12ea71ac cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea71b0 ja 0x12ea725e */
  if ((!C.cf&&!C.zf)) goto L_12ea725e;
  /* 12ea71b6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12ea71b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12ea71bb mov dl, byte ptr [eax + 0x12ea73b2] */
  DL = (r8((uint32_t)(EAX + 0x12ea73b2)));
  /* 12ea71c1 jmp dword ptr [edx*4 + 0x12ea739a] */
  switch (EDX) {
    case 0: goto L_12ea71c8;
    case 1: goto L_12ea7233;
    case 2: goto L_12ea7219;
    case 3: goto L_12ea71e5;
    case 4: goto L_12ea71ff;
    case 5: goto L_12ea725e;
    default: x86_unimpl("switch@0x12ea71c1 out of table"); return;
  }
L_12ea71c8:;
  /* 12ea71c8 mov dword ptr [ebp - 0x18], 0x12ebf734 */
  w32((uint32_t)(EBP + -0x18), (0x12ebf734u));
  /* 12ea71cf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea71d2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ea71d4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12ea71d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea71da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea71dd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ea71e0 jmp 0x12ea7266 */
  goto L_12ea7266;
L_12ea71e5:;
  /* 12ea71e5 mov dword ptr [ebp - 0x18], 0x12ebf738 */
  w32((uint32_t)(EBP + -0x18), (0x12ebf738u));
  /* 12ea71ec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea71ef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ea71f1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12ea71f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea71f7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea71fa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ea71fd jmp 0x12ea7266 */
  goto L_12ea7266;
L_12ea71ff:;
  /* 12ea71ff mov dword ptr [ebp - 0x18], 0x12ebf73c */
  w32((uint32_t)(EBP + -0x18), (0x12ebf73cu));
  /* 12ea7206 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea7209 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ea720b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12ea720e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea7211 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7214 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ea7217 jmp 0x12ea7266 */
  goto L_12ea7266;
L_12ea7219:;
  /* 12ea7219 mov dword ptr [ebp - 0x18], 0x12ebf740 */
  w32((uint32_t)(EBP + -0x18), (0x12ebf740u));
  /* 12ea7220 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea7223 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ea7225 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12ea7228 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ea722b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea722e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ea7231 jmp 0x12ea7266 */
  goto L_12ea7266;
L_12ea7233:;
  /* 12ea7233 call 0x12ea3730 */
  push32(0x12ea7238u); f_12ea3730();
  /* 12ea7238 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea723b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea723e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12ea7241 push edx */
  push32((uint32_t)(EDX));
  /* 12ea7242 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7245 push eax */
  push32((uint32_t)(EAX));
  /* 12ea7246 call 0x12ea73d0 */
  push32(0x12ea724bu); f_12ea73d0();
  /* 12ea724b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea724e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7251 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12ea7254 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea7257 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12ea7259 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12ea725c jmp 0x12ea7266 */
  goto L_12ea7266;
L_12ea725e:;
  /* 12ea725e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ea7261 jmp 0x12ea7396 */
  goto L_12ea7396;
L_12ea7266:;
  /* 12ea7266 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea726a je 0x12ea7276 */
  if (C.zf) goto L_12ea7276;
  /* 12ea726c push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea726e call 0x12ea76f0 */
  push32(0x12ea7273u); f_12ea76f0();
  /* 12ea7273 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea7276:;
  /* 12ea7276 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea727a jne 0x12ea7293 */
  if (!C.zf) goto L_12ea7293;
  /* 12ea727c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7280 je 0x12ea728c */
  if (C.zf) goto L_12ea728c;
  /* 12ea7282 push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea7284 call 0x12ea7790 */
  push32(0x12ea7289u); f_12ea7790();
  /* 12ea7289 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea728c:;
  /* 12ea728c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ea728e jmp 0x12ea7396 */
  goto L_12ea7396;
L_12ea7293:;
  /* 12ea7293 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7297 jne 0x12ea72b0 */
  if (!C.zf) goto L_12ea72b0;
  /* 12ea7299 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea729d je 0x12ea72a9 */
  if (C.zf) goto L_12ea72a9;
  /* 12ea729f push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea72a1 call 0x12ea7790 */
  push32(0x12ea72a6u); f_12ea7790();
  /* 12ea72a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea72a9:;
  /* 12ea72a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12ea72ab call 0x12ea34b0 */
  push32(0x12ea72b0u); f_12ea34b0();
L_12ea72b0:;
  /* 12ea72b0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea72b4 je 0x12ea72c2 */
  if (C.zf) goto L_12ea72c2;
  /* 12ea72b6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea72ba je 0x12ea72c2 */
  if (C.zf) goto L_12ea72c2;
  /* 12ea72bc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea72c0 jne 0x12ea72ee */
  if (!C.zf) goto L_12ea72ee;
L_12ea72c2:;
  /* 12ea72c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea72c5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12ea72c8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12ea72cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea72ce mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12ea72d5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea72d9 jne 0x12ea72ee */
  if (!C.zf) goto L_12ea72ee;
  /* 12ea72db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea72de mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12ea72e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12ea72e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea72e7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_12ea72ee:;
  /* 12ea72ee cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea72f2 jne 0x12ea7330 */
  if (!C.zf) goto L_12ea7330;
  /* 12ea72f4 mov eax, dword ptr [0x12ebdc98] */
  EAX = (r32((uint32_t)(0x12ebdc98)));
  /* 12ea72f9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12ea72fc jmp 0x12ea7307 */
  goto L_12ea7307;
L_12ea72fe:;
  /* 12ea72fe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea7301 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7304 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12ea7307:;
  /* 12ea7307 mov edx, dword ptr [0x12ebdc98] */
  EDX = (r32((uint32_t)(0x12ebdc98)));
  /* 12ea730d add edx, dword ptr [0x12ebdc9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12ebdc9c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7313 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7316 jge 0x12ea732e */
  if ((C.sf==C.of)) goto L_12ea732e;
  /* 12ea7318 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ea731b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea731e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea7321 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12ea7324 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12ea732c jmp 0x12ea72fe */
  goto L_12ea72fe;
L_12ea732e:;
  /* 12ea732e jmp 0x12ea7339 */
  goto L_12ea7339;
L_12ea7330:;
  /* 12ea7330 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12ea7333 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12ea7339:;
  /* 12ea7339 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea733d je 0x12ea7349 */
  if (C.zf) goto L_12ea7349;
  /* 12ea733f push 1 */
  push32((uint32_t)(0x1u));
  /* 12ea7341 call 0x12ea7790 */
  push32(0x12ea7346u); f_12ea7790();
  /* 12ea7346 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea7349:;
  /* 12ea7349 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea734d jne 0x12ea7360 */
  if (!C.zf) goto L_12ea7360;
  /* 12ea734f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea7352 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12ea7355 push edx */
  push32((uint32_t)(EDX));
  /* 12ea7356 push 8 */
  push32((uint32_t)(0x8u));
  /* 12ea7358 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12ea735bu);
  /* 12ea735b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea735e jmp 0x12ea736a */
  goto L_12ea736a;
L_12ea7360:;
  /* 12ea7360 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ea7363 push eax */
  push32((uint32_t)(EAX));
  /* 12ea7364 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12ea7367u);
  /* 12ea7367 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ea736a:;
  /* 12ea736a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea736e je 0x12ea737c */
  if (C.zf) goto L_12ea737c;
  /* 12ea7370 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7374 je 0x12ea737c */
  if (C.zf) goto L_12ea737c;
  /* 12ea7376 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea737a jne 0x12ea7394 */
  if (!C.zf) goto L_12ea7394;
L_12ea737c:;
  /* 12ea737c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea737f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12ea7382 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12ea7385 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7389 jne 0x12ea7394 */
  if (!C.zf) goto L_12ea7394;
  /* 12ea738b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea738e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ea7391 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12ea7394:;
  /* 12ea7394 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ea7396:;
  /* 12ea7396 mov esp, ebp */
  ESP = (EBP);
  /* 12ea7398 pop ebp */
  EBP = (pop32());
  /* 12ea7399 ret  */
  ESPCHK(0x12ea7190u, _esp0);
  ESP += 4; return;
}

/* FUN_100073d0 @ 0x12ea73d0 (91 bytes, 35 insns) */
void f_12ea73d0(void) {
  FTRACE(0x12ea73d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea73d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea73d1 mov ebp, esp */
  EBP = (ESP);
  /* 12ea73d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12ea73d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea73d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12ea73da:;
  /* 12ea73da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea73dd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12ea73e0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea73e3 je 0x12ea7403 */
  if (C.zf) goto L_12ea7403;
  /* 12ea73e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea73e8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea73eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ea73ee mov ecx, dword ptr [0x12ebdca4] */
  ECX = (r32((uint32_t)(0x12ebdca4)));
  /* 12ea73f4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea73f7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea73fa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea73fc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea73ff jae 0x12ea7403 */
  if (!C.cf) goto L_12ea7403;
  /* 12ea7401 jmp 0x12ea73da */
  goto L_12ea73da;
L_12ea7403:;
  /* 12ea7403 mov eax, dword ptr [0x12ebdca4] */
  EAX = (r32((uint32_t)(0x12ebdca4)));
  /* 12ea7408 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ea740b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ea740e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea7410 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea7413 jae 0x12ea7425 */
  if (!C.cf) goto L_12ea7425;
  /* 12ea7415 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea7418 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12ea741b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ea741e jne 0x12ea7425 */
  if (!C.zf) goto L_12ea7425;
  /* 12ea7420 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ea7423 jmp 0x12ea7427 */
  goto L_12ea7427;
L_12ea7425:;
  /* 12ea7425 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12ea7427:;
  /* 12ea7427 mov esp, ebp */
  ESP = (EBP);
  /* 12ea7429 pop ebp */
  EBP = (pop32());
  /* 12ea742a ret  */
  ESPCHK(0x12ea73d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007430 @ 0x12ea7430 (13 bytes, 6 insns) */
void f_12ea7430(void) {
  FTRACE(0x12ea7430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ea7430 push ebp */
  push32((uint32_t)(EBP));
  /* 12ea7431 mov ebp, esp */
  EBP = (ESP);
  /* 12ea7433 call 0x12ea3730 */
  push32(0x12ea7438u); f_12ea3730();
  /* 12ea7438 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ea743b pop ebp */
  EBP = (pop32());
  /* 12ea743c ret  */
  ESPCHK(0x12ea7430u, _esp0);
  ESP += 4; return;
}

