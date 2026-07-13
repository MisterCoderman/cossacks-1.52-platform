#include "recomp.h"

/* FUN_10010ff0 @ 0x125f0ff0 (490 bytes, 165 insns) */
void f_125f0ff0(void) {
  FTRACE(0x125f0ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f0ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f0ff1 mov ebp, esp */
  EBP = (ESP);
  /* 125f0ff3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f0ff6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f0ffa jne 0x125f100d */
  if (!C.zf) goto L_125f100d;
  /* 125f0ffc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f0fff push eax */
  push32((uint32_t)(EAX));
  /* 125f1000 call 0x125f0e40 */
  push32(0x125f1005u); f_125f0e40();
  /* 125f1005 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1008 jmp 0x125f11d6 */
  goto L_125f11d6;
L_125f100d:;
  /* 125f100d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1011 jne 0x125f1026 */
  if (!C.zf) goto L_125f1026;
  /* 125f1013 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f1016 push ecx */
  push32((uint32_t)(ECX));
  /* 125f1017 call 0x125f11e0 */
  push32(0x125f101cu); f_125f11e0();
  /* 125f101c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f101f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f1021 jmp 0x125f11d6 */
  goto L_125f11d6;
L_125f1026:;
  /* 125f1026 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125f102d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1031 ja 0x125f11a9 */
  if ((!C.cf&&!C.zf)) goto L_125f11a9;
  /* 125f1037 push 9 */
  push32((uint32_t)(0x9u));
  /* 125f1039 call 0x125f0a70 */
  push32(0x125f103eu); f_125f0a70();
  /* 125f103e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1041 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f1044 push edx */
  push32((uint32_t)(EDX));
  /* 125f1045 call 0x125f1370 */
  push32(0x125f104au); f_125f1370();
  /* 125f104a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f104d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125f1050 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1054 je 0x125f116c */
  if (C.zf) goto L_125f116c;
  /* 125f105a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f105d cmp eax, dword ptr [0x12616c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12616c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1063 ja 0x125f10e0 */
  if ((!C.cf&&!C.zf)) goto L_125f10e0;
  /* 125f1065 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f1068 push ecx */
  push32((uint32_t)(ECX));
  /* 125f1069 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f106c push edx */
  push32((uint32_t)(EDX));
  /* 125f106d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f1070 push eax */
  push32((uint32_t)(EAX));
  /* 125f1071 call 0x125f2240 */
  push32(0x125f1076u); f_125f2240();
  /* 125f1076 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1079 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f107b je 0x125f1085 */
  if (C.zf) goto L_125f1085;
  /* 125f107d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f1080 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f1083 jmp 0x125f10e0 */
  goto L_125f10e0;
L_125f1085:;
  /* 125f1085 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f1088 push edx */
  push32((uint32_t)(EDX));
  /* 125f1089 call 0x125f1a00 */
  push32(0x125f108eu); f_125f1a00();
  /* 125f108e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1091 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125f1094 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1098 je 0x125f10e0 */
  if (C.zf) goto L_125f10e0;
  /* 125f109a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f109d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 125f10a0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f10a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125f10a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f10a9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f10ac jae 0x125f10b6 */
  if (!C.cf) goto L_125f10b6;
  /* 125f10ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f10b1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125f10b4 jmp 0x125f10bc */
  goto L_125f10bc;
L_125f10b6:;
  /* 125f10b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f10b9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_125f10bc:;
  /* 125f10bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f10bf push edx */
  push32((uint32_t)(EDX));
  /* 125f10c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f10c3 push eax */
  push32((uint32_t)(EAX));
  /* 125f10c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f10c7 push ecx */
  push32((uint32_t)(ECX));
  /* 125f10c8 call 0x125f3950 */
  push32(0x125f10cdu); f_125f3950();
  /* 125f10cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f10d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f10d3 push edx */
  push32((uint32_t)(EDX));
  /* 125f10d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f10d7 push eax */
  push32((uint32_t)(EAX));
  /* 125f10d8 call 0x125f1430 */
  push32(0x125f10ddu); f_125f1430();
  /* 125f10dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f10e0:;
  /* 125f10e0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f10e4 jne 0x125f1160 */
  if (!C.zf) goto L_125f1160;
  /* 125f10e6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f10ea jne 0x125f10f3 */
  if (!C.zf) goto L_125f10f3;
  /* 125f10ec mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_125f10f3:;
  /* 125f10f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f10f6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f10f9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 125f10fc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 125f10ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f1102 push edx */
  push32((uint32_t)(EDX));
  /* 125f1103 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f1105 mov eax, dword ptr [0x1261a78c] */
  EAX = (r32((uint32_t)(0x1261a78c)));
  /* 125f110a push eax */
  push32((uint32_t)(EAX));
  /* 125f110b call dword ptr [0x1261b358] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b358))), 0x125f1111u);
  /* 125f1111 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125f1114 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1118 je 0x125f1160 */
  if (C.zf) goto L_125f1160;
  /* 125f111a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f111d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 125f1120 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f1123 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125f1126 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f1129 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f112c jae 0x125f1136 */
  if (!C.cf) goto L_125f1136;
  /* 125f112e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f1131 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125f1134 jmp 0x125f113c */
  goto L_125f113c;
L_125f1136:;
  /* 125f1136 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f1139 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_125f113c:;
  /* 125f113c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f113f push eax */
  push32((uint32_t)(EAX));
  /* 125f1140 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f1143 push ecx */
  push32((uint32_t)(ECX));
  /* 125f1144 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f1147 push edx */
  push32((uint32_t)(EDX));
  /* 125f1148 call 0x125f3950 */
  push32(0x125f114du); f_125f3950();
  /* 125f114d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1150 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f1153 push eax */
  push32((uint32_t)(EAX));
  /* 125f1154 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f1157 push ecx */
  push32((uint32_t)(ECX));
  /* 125f1158 call 0x125f1430 */
  push32(0x125f115du); f_125f1430();
  /* 125f115d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f1160:;
  /* 125f1160 push 9 */
  push32((uint32_t)(0x9u));
  /* 125f1162 call 0x125f0b10 */
  push32(0x125f1167u); f_125f0b10();
  /* 125f1167 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f116a jmp 0x125f11a9 */
  goto L_125f11a9;
L_125f116c:;
  /* 125f116c push 9 */
  push32((uint32_t)(0x9u));
  /* 125f116e call 0x125f0b10 */
  push32(0x125f1173u); f_125f0b10();
  /* 125f1173 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1176 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f117a jne 0x125f1183 */
  if (!C.zf) goto L_125f1183;
  /* 125f117c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_125f1183:;
  /* 125f1183 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f1186 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1189 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 125f118c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 125f118f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f1192 push eax */
  push32((uint32_t)(EAX));
  /* 125f1193 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f1196 push ecx */
  push32((uint32_t)(ECX));
  /* 125f1197 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f1199 mov edx, dword ptr [0x1261a78c] */
  EDX = (r32((uint32_t)(0x1261a78c)));
  /* 125f119f push edx */
  push32((uint32_t)(EDX));
  /* 125f11a0 call dword ptr [0x1261b354] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b354))), 0x125f11a6u);
  /* 125f11a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125f11a9:;
  /* 125f11a9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f11ad jne 0x125f11b8 */
  if (!C.zf) goto L_125f11b8;
  /* 125f11af cmp dword ptr [0x12618fd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12618fd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f11b6 jne 0x125f11bd */
  if (!C.zf) goto L_125f11bd;
L_125f11b8:;
  /* 125f11b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f11bb jmp 0x125f11d6 */
  goto L_125f11d6;
L_125f11bd:;
  /* 125f11bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f11c0 push eax */
  push32((uint32_t)(EAX));
  /* 125f11c1 call 0x125f0db0 */
  push32(0x125f11c6u); f_125f0db0();
  /* 125f11c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f11c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f11cb jne 0x125f11d1 */
  if (!C.zf) goto L_125f11d1;
  /* 125f11cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f11cf jmp 0x125f11d6 */
  goto L_125f11d6;
L_125f11d1:;
  /* 125f11d1 jmp 0x125f1026 */
  goto L_125f1026;
L_125f11d6:;
  /* 125f11d6 mov esp, ebp */
  ESP = (EBP);
  /* 125f11d8 pop ebp */
  EBP = (pop32());
  /* 125f11d9 ret  */
  ESPCHK(0x125f0ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_100111e0 @ 0x125f11e0 (104 bytes, 38 insns) */
void f_125f11e0(void) {
  FTRACE(0x125f11e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f11e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f11e1 mov ebp, esp */
  EBP = (ESP);
  /* 125f11e3 push ecx */
  push32((uint32_t)(ECX));
  /* 125f11e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f11e8 jne 0x125f11ec */
  if (!C.zf) goto L_125f11ec;
  /* 125f11ea jmp 0x125f1244 */
  goto L_125f1244;
L_125f11ec:;
  /* 125f11ec push 9 */
  push32((uint32_t)(0x9u));
  /* 125f11ee call 0x125f0a70 */
  push32(0x125f11f3u); f_125f0a70();
  /* 125f11f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f11f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f11f9 push eax */
  push32((uint32_t)(EAX));
  /* 125f11fa call 0x125f1370 */
  push32(0x125f11ffu); f_125f1370();
  /* 125f11ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1202 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f1205 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1209 je 0x125f1227 */
  if (C.zf) goto L_125f1227;
  /* 125f120b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f120e push ecx */
  push32((uint32_t)(ECX));
  /* 125f120f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f1212 push edx */
  push32((uint32_t)(EDX));
  /* 125f1213 call 0x125f1430 */
  push32(0x125f1218u); f_125f1430();
  /* 125f1218 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f121b push 9 */
  push32((uint32_t)(0x9u));
  /* 125f121d call 0x125f0b10 */
  push32(0x125f1222u); f_125f0b10();
  /* 125f1222 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1225 jmp 0x125f1244 */
  goto L_125f1244;
L_125f1227:;
  /* 125f1227 push 9 */
  push32((uint32_t)(0x9u));
  /* 125f1229 call 0x125f0b10 */
  push32(0x125f122eu); f_125f0b10();
  /* 125f122e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1231 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f1234 push eax */
  push32((uint32_t)(EAX));
  /* 125f1235 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f1237 mov ecx, dword ptr [0x1261a78c] */
  ECX = (r32((uint32_t)(0x1261a78c)));
  /* 125f123d push ecx */
  push32((uint32_t)(ECX));
  /* 125f123e call dword ptr [0x1261b378] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b378))), 0x125f1244u);
L_125f1244:;
  /* 125f1244 mov esp, ebp */
  ESP = (EBP);
  /* 125f1246 pop ebp */
  EBP = (pop32());
  /* 125f1247 ret  */
  ESPCHK(0x125f11e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011250 @ 0x125f1250 (116 bytes, 34 insns) */
void f_125f1250(void) {
  FTRACE(0x125f1250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f1250 push ebp */
  push32((uint32_t)(EBP));
  /* 125f1251 mov ebp, esp */
  EBP = (ESP);
  /* 125f1253 push ecx */
  push32((uint32_t)(ECX));
  /* 125f1254 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 125f125b push 9 */
  push32((uint32_t)(0x9u));
  /* 125f125d call 0x125f0a70 */
  push32(0x125f1262u); f_125f0a70();
  /* 125f1262 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1265 call 0x125f2960 */
  push32(0x125f126au); f_125f2960();
  /* 125f126a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f126c jge 0x125f1275 */
  if ((C.sf==C.of)) goto L_125f1275;
  /* 125f126e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_125f1275:;
  /* 125f1275 push 9 */
  push32((uint32_t)(0x9u));
  /* 125f1277 call 0x125f0b10 */
  push32(0x125f127cu); f_125f0b10();
  /* 125f127c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f127f push 0 */
  push32((uint32_t)(0x0u));
  /* 125f1281 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f1283 mov eax, dword ptr [0x1261a78c] */
  EAX = (r32((uint32_t)(0x1261a78c)));
  /* 125f1288 push eax */
  push32((uint32_t)(EAX));
  /* 125f1289 call dword ptr [0x1261b398] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b398))), 0x125f128fu);
  /* 125f128f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f1291 jne 0x125f12bd */
  if (!C.zf) goto L_125f12bd;
  /* 125f1293 call dword ptr [0x1261b400] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b400))), 0x125f1299u);
  /* 125f1299 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f129c jne 0x125f12b6 */
  if (!C.zf) goto L_125f12b6;
  /* 125f129e call 0x125f4f50 */
  push32(0x125f12a3u); f_125f4f50();
  /* 125f12a3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 125f12a9 call 0x125f4f40 */
  push32(0x125f12aeu); f_125f4f40();
  /* 125f12ae mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 125f12b4 jmp 0x125f12bd */
  goto L_125f12bd;
L_125f12b6:;
  /* 125f12b6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_125f12bd:;
  /* 125f12bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f12c0 mov esp, ebp */
  ESP = (EBP);
  /* 125f12c2 pop ebp */
  EBP = (pop32());
  /* 125f12c3 ret  */
  ESPCHK(0x125f1250u, _esp0);
  ESP += 4; return;
}

/* FUN_100112d0 @ 0x125f12d0 (10 bytes, 5 insns) */
void f_125f12d0(void) {
  FTRACE(0x125f12d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f12d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f12d1 mov ebp, esp */
  EBP = (ESP);
  /* 125f12d3 call 0x125f1250 */
  push32(0x125f12d8u); f_125f1250();
  /* 125f12d8 pop ebp */
  EBP = (pop32());
  /* 125f12d9 ret  */
  ESPCHK(0x125f12d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100112e0 @ 0x125f12e0 (10 bytes, 5 insns) */
void f_125f12e0(void) {
  FTRACE(0x125f12e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f12e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f12e1 mov ebp, esp */
  EBP = (ESP);
  /* 125f12e3 mov eax, dword ptr [0x12616c94] */
  EAX = (r32((uint32_t)(0x12616c94)));
  /* 125f12e8 pop ebp */
  EBP = (pop32());
  /* 125f12e9 ret  */
  ESPCHK(0x125f12e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100112f0 @ 0x125f12f0 (31 bytes, 11 insns) */
void f_125f12f0(void) {
  FTRACE(0x125f12f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f12f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f12f1 mov ebp, esp */
  EBP = (ESP);
  /* 125f12f3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f12fa jbe 0x125f1300 */
  if ((C.cf||C.zf)) goto L_125f1300;
  /* 125f12fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f12fe jmp 0x125f130d */
  goto L_125f130d;
L_125f1300:;
  /* 125f1300 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f1303 mov dword ptr [0x12616c94], eax */
  w32((uint32_t)(0x12616c94), (EAX));
  /* 125f1308 mov eax, 1 */
  EAX = (0x1u);
L_125f130d:;
  /* 125f130d pop ebp */
  EBP = (pop32());
  /* 125f130e ret  */
  ESPCHK(0x125f12f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011310 @ 0x125f1310 (89 bytes, 20 insns) */
void f_125f1310(void) {
  FTRACE(0x125f1310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f1310 push ebp */
  push32((uint32_t)(EBP));
  /* 125f1311 mov ebp, esp */
  EBP = (ESP);
  /* 125f1313 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 125f1318 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f131a mov eax, dword ptr [0x1261a78c] */
  EAX = (r32((uint32_t)(0x1261a78c)));
  /* 125f131f push eax */
  push32((uint32_t)(EAX));
  /* 125f1320 call dword ptr [0x1261b358] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b358))), 0x125f1326u);
  /* 125f1326 mov dword ptr [0x1261a788], eax */
  w32((uint32_t)(0x1261a788), (EAX));
  /* 125f132b cmp dword ptr [0x1261a788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1261a788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1332 jne 0x125f1338 */
  if (!C.zf) goto L_125f1338;
  /* 125f1334 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f1336 jmp 0x125f1367 */
  goto L_125f1367;
L_125f1338:;
  /* 125f1338 mov ecx, dword ptr [0x1261a788] */
  ECX = (r32((uint32_t)(0x1261a788)));
  /* 125f133e mov dword ptr [0x1261a77c], ecx */
  w32((uint32_t)(0x1261a77c), (ECX));
  /* 125f1344 mov dword ptr [0x1261a780], 0 */
  w32((uint32_t)(0x1261a780), (0x0u));
  /* 125f134e mov dword ptr [0x1261a784], 0 */
  w32((uint32_t)(0x1261a784), (0x0u));
  /* 125f1358 mov dword ptr [0x1261a768], 0x10 */
  w32((uint32_t)(0x1261a768), (0x10u));
  /* 125f1362 mov eax, 1 */
  EAX = (0x1u);
L_125f1367:;
  /* 125f1367 pop ebp */
  EBP = (pop32());
  /* 125f1368 ret  */
  ESPCHK(0x125f1310u, _esp0);
  ESP += 4; return;
}

/* FUN_10011370 @ 0x125f1370 (85 bytes, 29 insns) */
void f_125f1370(void) {
  FTRACE(0x125f1370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f1370 push ebp */
  push32((uint32_t)(EBP));
  /* 125f1371 mov ebp, esp */
  EBP = (ESP);
  /* 125f1373 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f1376 mov eax, dword ptr [0x1261a784] */
  EAX = (r32((uint32_t)(0x1261a784)));
  /* 125f137b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f137e mov ecx, dword ptr [0x1261a788] */
  ECX = (r32((uint32_t)(0x1261a788)));
  /* 125f1384 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1386 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f1389 mov edx, dword ptr [0x1261a788] */
  EDX = (r32((uint32_t)(0x1261a788)));
  /* 125f138f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_125f1392:;
  /* 125f1392 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f1395 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1398 jae 0x125f13bf */
  if (!C.cf) goto L_125f13bf;
  /* 125f139a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f139d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f13a0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f13a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125f13a6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f13ad jae 0x125f13b4 */
  if (!C.cf) goto L_125f13b4;
  /* 125f13af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f13b2 jmp 0x125f13c1 */
  goto L_125f13c1;
L_125f13b4:;
  /* 125f13b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f13b7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f13ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125f13bd jmp 0x125f1392 */
  goto L_125f1392;
L_125f13bf:;
  /* 125f13bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125f13c1:;
  /* 125f13c1 mov esp, ebp */
  ESP = (EBP);
  /* 125f13c3 pop ebp */
  EBP = (pop32());
  /* 125f13c4 ret  */
  ESPCHK(0x125f1370u, _esp0);
  ESP += 4; return;
}

/* FUN_100113d0 @ 0x125f13d0 (95 bytes, 33 insns) */
void f_125f13d0(void) {
  FTRACE(0x125f13d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f13d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f13d1 mov ebp, esp */
  EBP = (ESP);
  /* 125f13d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f13d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f13d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f13dc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f13df mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f13e2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f13e5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 125f13e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125f13eb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125f13f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f13f3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125f13f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f13f8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125f13fb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 125f13fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f13ff jne 0x125f1421 */
  if (!C.zf) goto L_125f1421;
  /* 125f1401 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f1404 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 125f1407 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f1409 jne 0x125f1421 */
  if (!C.zf) goto L_125f1421;
  /* 125f140b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f140e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 125f1414 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f1416 je 0x125f1421 */
  if (C.zf) goto L_125f1421;
  /* 125f1418 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 125f141f jmp 0x125f1428 */
  goto L_125f1428;
L_125f1421:;
  /* 125f1421 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_125f1428:;
  /* 125f1428 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f142b mov esp, ebp */
  ESP = (EBP);
  /* 125f142d pop ebp */
  EBP = (pop32());
  /* 125f142e ret  */
  ESPCHK(0x125f13d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011430 @ 0x125f1430 (1485 bytes, 453 insns) */
void f_125f1430(void) {
  FTRACE(0x125f1430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f1430 push ebp */
  push32((uint32_t)(EBP));
  /* 125f1431 mov ebp, esp */
  EBP = (ESP);
  /* 125f1433 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f1436 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f1439 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125f143c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 125f143f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f1442 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f1445 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f1448 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125f144b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f144e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 125f1451 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125f1454 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f1457 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f145d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f1460 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 125f1467 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f146a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f146d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f1470 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 125f1473 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f1476 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125f1478 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f147b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 125f147e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f1481 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1484 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 125f1487 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f148a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125f148c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125f148f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f1492 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 125f1495 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125f1498 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f149b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125f149e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f14a0 jne 0x125f15c8 */
  if (!C.zf) goto L_125f15c8;
  /* 125f14a6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f14a9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 125f14ac sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f14af mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 125f14b2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f14b6 jbe 0x125f14bf */
  if ((C.cf||C.zf)) goto L_125f14bf;
  /* 125f14b8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_125f14bf:;
  /* 125f14bf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f14c2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f14c5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 125f14c8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f14cb jne 0x125f15a1 */
  if (!C.zf) goto L_125f15a1;
  /* 125f14d1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f14d5 jae 0x125f1536 */
  if (!C.cf) goto L_125f1536;
  /* 125f14d7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125f14dc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f14df shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125f14e1 not eax */
  EAX = (~(EAX));
  /* 125f14e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f14e6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f14e9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 125f14ed and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f14ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f14f2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f14f5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 125f14f9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f14fc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f14ff mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 125f1502 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125f1505 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f1508 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f150b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 125f150e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f1511 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1514 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 125f1518 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f151a jne 0x125f1534 */
  if (!C.zf) goto L_125f1534;
  /* 125f151c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125f1521 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f1524 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125f1526 not eax */
  EAX = (~(EAX));
  /* 125f1528 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f152b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125f152d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 125f152f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f1532 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_125f1534:;
  /* 125f1534 jmp 0x125f15a1 */
  goto L_125f15a1;
L_125f1536:;
  /* 125f1536 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f1539 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f153c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f1541 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f1543 not edx */
  EDX = (~(EDX));
  /* 125f1545 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f1548 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f154b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 125f1552 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125f1554 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f1557 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f155a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 125f1561 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f1564 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1567 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 125f156a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125f156d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f1570 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1573 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 125f1576 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f1579 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f157c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 125f1580 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f1582 jne 0x125f15a1 */
  if (!C.zf) goto L_125f15a1;
  /* 125f1584 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f1587 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f158a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f158f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f1591 not edx */
  EDX = (~(EDX));
  /* 125f1593 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f1596 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125f1599 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 125f159b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f159e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_125f15a1:;
  /* 125f15a1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f15a4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125f15a7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f15aa mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 125f15ad mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 125f15b0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f15b3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125f15b6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f15b9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125f15bc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 125f15bf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f15c2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f15c5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_125f15c8:;
  /* 125f15c8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f15cb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 125f15ce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f15d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 125f15d4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f15d8 jbe 0x125f15e1 */
  if ((C.cf||C.zf)) goto L_125f15e1;
  /* 125f15da mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_125f15e1:;
  /* 125f15e1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f15e4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125f15e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f15e9 jne 0x125f1745 */
  if (!C.zf) goto L_125f1745;
  /* 125f15ef mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f15f2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f15f5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 125f15f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f15fb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 125f15fe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f1601 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 125f1604 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1608 jbe 0x125f1611 */
  if ((C.cf||C.zf)) goto L_125f1611;
  /* 125f160a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_125f1611:;
  /* 125f1611 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f1614 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1617 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 125f161a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f161d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 125f1620 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f1623 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 125f1626 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f162a jbe 0x125f1633 */
  if ((C.cf||C.zf)) goto L_125f1633;
  /* 125f162c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_125f1633:;
  /* 125f1633 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f1636 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1639 je 0x125f173f */
  if (C.zf) goto L_125f173f;
  /* 125f163f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 125f1642 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 125f1645 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 125f1648 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f164b jne 0x125f1721 */
  if (!C.zf) goto L_125f1721;
  /* 125f1651 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1655 jae 0x125f16b6 */
  if (!C.cf) goto L_125f16b6;
  /* 125f1657 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f165c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f165f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f1661 not edx */
  EDX = (~(EDX));
  /* 125f1663 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f1666 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f1669 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 125f166d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125f166f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f1672 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f1675 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 125f1679 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f167c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f167f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 125f1682 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125f1685 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f1688 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f168b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 125f168e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f1691 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1694 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 125f1698 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f169a jne 0x125f16b4 */
  if (!C.zf) goto L_125f16b4;
  /* 125f169c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f16a1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f16a4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f16a6 not edx */
  EDX = (~(EDX));
  /* 125f16a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f16ab mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125f16ad and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 125f16af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f16b2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_125f16b4:;
  /* 125f16b4 jmp 0x125f1721 */
  goto L_125f1721;
L_125f16b6:;
  /* 125f16b6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f16b9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f16bc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125f16c1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125f16c3 not eax */
  EAX = (~(EAX));
  /* 125f16c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f16c8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f16cb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 125f16d2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f16d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f16d7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f16da mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 125f16e1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f16e4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f16e7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 125f16ea sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125f16ed mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f16f0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f16f3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 125f16f6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f16f9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f16fc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 125f1700 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f1702 jne 0x125f1721 */
  if (!C.zf) goto L_125f1721;
  /* 125f1704 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f1707 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f170a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125f170f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125f1711 not eax */
  EAX = (~(EAX));
  /* 125f1713 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f1716 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125f1719 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 125f171b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f171e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_125f1721:;
  /* 125f1721 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 125f1724 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125f1727 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 125f172a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125f172d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 125f1730 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 125f1733 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 125f1736 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 125f1739 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125f173c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_125f173f:;
  /* 125f173f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 125f1742 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_125f1745:;
  /* 125f1745 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f1748 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125f174b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f174d jne 0x125f175b */
  if (!C.zf) goto L_125f175b;
  /* 125f174f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f1752 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1755 je 0x125f186b */
  if (C.zf) goto L_125f186b;
L_125f175b:;
  /* 125f175b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f175e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f1761 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 125f1764 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 125f1767 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f176a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f176d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125f1770 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 125f1773 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f1776 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f1779 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 125f177c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f177f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f1782 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 125f1785 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f1788 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125f178b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f178e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 125f1791 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f1794 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f1797 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 125f179a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f179d jne 0x125f186b */
  if (!C.zf) goto L_125f186b;
  /* 125f17a3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f17a7 jae 0x125f1804 */
  if (!C.cf) goto L_125f1804;
  /* 125f17a9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f17ac add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f17af movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 125f17b3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f17b6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f17b9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 125f17bc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 125f17bf mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f17c2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f17c5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 125f17c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f17ca jne 0x125f17e2 */
  if (!C.zf) goto L_125f17e2;
  /* 125f17cc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f17d1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f17d4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f17d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f17d9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125f17db or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 125f17dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f17e0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_125f17e2:;
  /* 125f17e2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125f17e7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f17ea shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125f17ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f17ef mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f17f2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 125f17f6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f17f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f17fb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f17fe mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 125f1802 jmp 0x125f186b */
  goto L_125f186b;
L_125f1804:;
  /* 125f1804 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f1807 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f180a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 125f180e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f1811 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1814 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 125f1817 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 125f181a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f181d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1820 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 125f1823 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f1825 jne 0x125f1842 */
  if (!C.zf) goto L_125f1842;
  /* 125f1827 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f182a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f182d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f1832 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f1834 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f1837 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125f183a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 125f183c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f183f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_125f1842:;
  /* 125f1842 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f1845 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f1848 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125f184d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125f184f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f1852 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f1855 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 125f185c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f185e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f1861 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 125f1864 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_125f186b:;
  /* 125f186b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f186e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f1871 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 125f1873 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f1876 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1879 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f187c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 125f187f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f1882 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125f1884 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f1887 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f188a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125f188c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f188f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1892 jne 0x125f19f9 */
  if (!C.zf) goto L_125f19f9;
  /* 125f1898 cmp dword ptr [0x1261a780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1261a780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f189f je 0x125f19e8 */
  if (C.zf) goto L_125f19e8;
  /* 125f18a5 mov eax, dword ptr [0x1261a778] */
  EAX = (r32((uint32_t)(0x1261a778)));
  /* 125f18aa shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 125f18ad mov ecx, dword ptr [0x1261a780] */
  ECX = (r32((uint32_t)(0x1261a780)));
  /* 125f18b3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125f18b6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f18b8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 125f18bb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 125f18c0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 125f18c5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f18c8 push eax */
  push32((uint32_t)(EAX));
  /* 125f18c9 call dword ptr [0x1261b374] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b374))), 0x125f18cfu);
  /* 125f18cf mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f18d4 mov ecx, dword ptr [0x1261a778] */
  ECX = (r32((uint32_t)(0x1261a778)));
  /* 125f18da shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f18dc mov eax, dword ptr [0x1261a780] */
  EAX = (r32((uint32_t)(0x1261a780)));
  /* 125f18e1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125f18e4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 125f18e6 mov edx, dword ptr [0x1261a780] */
  EDX = (r32((uint32_t)(0x1261a780)));
  /* 125f18ec mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 125f18ef mov eax, dword ptr [0x1261a780] */
  EAX = (r32((uint32_t)(0x1261a780)));
  /* 125f18f4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125f18f7 mov edx, dword ptr [0x1261a778] */
  EDX = (r32((uint32_t)(0x1261a778)));
  /* 125f18fd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 125f1908 mov eax, dword ptr [0x1261a780] */
  EAX = (r32((uint32_t)(0x1261a780)));
  /* 125f190d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125f1910 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 125f1913 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125f1916 mov eax, dword ptr [0x1261a780] */
  EAX = (r32((uint32_t)(0x1261a780)));
  /* 125f191b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125f191e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 125f1921 mov edx, dword ptr [0x1261a780] */
  EDX = (r32((uint32_t)(0x1261a780)));
  /* 125f1927 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 125f192a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 125f192e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f1930 jne 0x125f1946 */
  if (!C.zf) goto L_125f1946;
  /* 125f1932 mov edx, dword ptr [0x1261a780] */
  EDX = (r32((uint32_t)(0x1261a780)));
  /* 125f1938 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 125f193b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 125f193d mov ecx, dword ptr [0x1261a780] */
  ECX = (r32((uint32_t)(0x1261a780)));
  /* 125f1943 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_125f1946:;
  /* 125f1946 mov edx, dword ptr [0x1261a780] */
  EDX = (r32((uint32_t)(0x1261a780)));
  /* 125f194c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1950 jne 0x125f19e8 */
  if (!C.zf) goto L_125f19e8;
  /* 125f1956 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 125f195b push 0 */
  push32((uint32_t)(0x0u));
  /* 125f195d mov eax, dword ptr [0x1261a780] */
  EAX = (r32((uint32_t)(0x1261a780)));
  /* 125f1962 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125f1965 push ecx */
  push32((uint32_t)(ECX));
  /* 125f1966 call dword ptr [0x1261b374] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b374))), 0x125f196cu);
  /* 125f196c mov edx, dword ptr [0x1261a780] */
  EDX = (r32((uint32_t)(0x1261a780)));
  /* 125f1972 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 125f1975 push eax */
  push32((uint32_t)(EAX));
  /* 125f1976 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f1978 mov ecx, dword ptr [0x1261a78c] */
  ECX = (r32((uint32_t)(0x1261a78c)));
  /* 125f197e push ecx */
  push32((uint32_t)(ECX));
  /* 125f197f call dword ptr [0x1261b378] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b378))), 0x125f1985u);
  /* 125f1985 mov edx, dword ptr [0x1261a784] */
  EDX = (r32((uint32_t)(0x1261a784)));
  /* 125f198b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f198e mov eax, dword ptr [0x1261a788] */
  EAX = (r32((uint32_t)(0x1261a788)));
  /* 125f1993 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1995 mov ecx, dword ptr [0x1261a780] */
  ECX = (r32((uint32_t)(0x1261a780)));
  /* 125f199b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f199e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f19a0 push eax */
  push32((uint32_t)(EAX));
  /* 125f19a1 mov edx, dword ptr [0x1261a780] */
  EDX = (r32((uint32_t)(0x1261a780)));
  /* 125f19a7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f19aa push edx */
  push32((uint32_t)(EDX));
  /* 125f19ab mov eax, dword ptr [0x1261a780] */
  EAX = (r32((uint32_t)(0x1261a780)));
  /* 125f19b0 push eax */
  push32((uint32_t)(EAX));
  /* 125f19b1 call 0x125f4f60 */
  push32(0x125f19b6u); f_125f4f60();
  /* 125f19b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f19b9 mov ecx, dword ptr [0x1261a784] */
  ECX = (r32((uint32_t)(0x1261a784)));
  /* 125f19bf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f19c2 mov dword ptr [0x1261a784], ecx */
  w32((uint32_t)(0x1261a784), (ECX));
  /* 125f19c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f19cb cmp edx, dword ptr [0x1261a780] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1261a780))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f19d1 jbe 0x125f19dc */
  if ((C.cf||C.zf)) goto L_125f19dc;
  /* 125f19d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f19d6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f19d9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_125f19dc:;
  /* 125f19dc mov ecx, dword ptr [0x1261a788] */
  ECX = (r32((uint32_t)(0x1261a788)));
  /* 125f19e2 mov dword ptr [0x1261a77c], ecx */
  w32((uint32_t)(0x1261a77c), (ECX));
L_125f19e8:;
  /* 125f19e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f19eb mov dword ptr [0x1261a780], edx */
  w32((uint32_t)(0x1261a780), (EDX));
  /* 125f19f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f19f4 mov dword ptr [0x1261a778], eax */
  w32((uint32_t)(0x1261a778), (EAX));
L_125f19f9:;
  /* 125f19f9 mov esp, ebp */
  ESP = (EBP);
  /* 125f19fb pop ebp */
  EBP = (pop32());
  /* 125f19fc ret  */
  ESPCHK(0x125f1430u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a00 @ 0x125f1a00 (1334 bytes, 427 insns) */
void f_125f1a00(void) {
  FTRACE(0x125f1a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f1a00 push ebp */
  push32((uint32_t)(EBP));
  /* 125f1a01 mov ebp, esp */
  EBP = (ESP);
  /* 125f1a03 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f1a06 push esi */
  push32((uint32_t)(ESI));
  /* 125f1a07 mov eax, dword ptr [0x1261a784] */
  EAX = (r32((uint32_t)(0x1261a784)));
  /* 125f1a0c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f1a0f mov ecx, dword ptr [0x1261a788] */
  ECX = (r32((uint32_t)(0x1261a788)));
  /* 125f1a15 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1a17 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 125f1a1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f1a1d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1a20 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 125f1a23 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 125f1a26 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f1a29 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 125f1a2c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f1a2f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125f1a32 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1a36 jge 0x125f1a4c */
  if ((C.sf==C.of)) goto L_125f1a4c;
  /* 125f1a38 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125f1a3b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f1a3e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f1a40 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 125f1a43 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 125f1a4a jmp 0x125f1a61 */
  goto L_125f1a61;
L_125f1a4c:;
  /* 125f1a4c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 125f1a53 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f1a56 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f1a59 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f1a5c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125f1a5e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_125f1a61:;
  /* 125f1a61 mov ecx, dword ptr [0x1261a77c] */
  ECX = (r32((uint32_t)(0x1261a77c)));
  /* 125f1a67 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_125f1a6a:;
  /* 125f1a6a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1a6d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1a70 jae 0x125f1a96 */
  if (!C.cf) goto L_125f1a96;
  /* 125f1a72 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1a75 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f1a78 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 125f1a7a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1a7d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 125f1a80 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 125f1a83 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f1a85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f1a87 je 0x125f1a8b */
  if (C.zf) goto L_125f1a8b;
  /* 125f1a89 jmp 0x125f1a96 */
  goto L_125f1a96;
L_125f1a8b:;
  /* 125f1a8b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1a8e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1a91 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 125f1a94 jmp 0x125f1a6a */
  goto L_125f1a6a;
L_125f1a96:;
  /* 125f1a96 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1a99 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1a9c jne 0x125f1b7d */
  if (!C.zf) goto L_125f1b7d;
  /* 125f1aa2 mov eax, dword ptr [0x1261a788] */
  EAX = (r32((uint32_t)(0x1261a788)));
  /* 125f1aa7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_125f1aaa:;
  /* 125f1aaa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1aad cmp ecx, dword ptr [0x1261a77c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1261a77c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1ab3 jae 0x125f1ad9 */
  if (!C.cf) goto L_125f1ad9;
  /* 125f1ab5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1ab8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f1abb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 125f1abd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1ac0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 125f1ac3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 125f1ac6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125f1ac8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f1aca je 0x125f1ace */
  if (C.zf) goto L_125f1ace;
  /* 125f1acc jmp 0x125f1ad9 */
  goto L_125f1ad9;
L_125f1ace:;
  /* 125f1ace mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1ad1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1ad4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125f1ad7 jmp 0x125f1aaa */
  goto L_125f1aaa;
L_125f1ad9:;
  /* 125f1ad9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1adc cmp ecx, dword ptr [0x1261a77c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1261a77c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1ae2 jne 0x125f1b7d */
  if (!C.zf) goto L_125f1b7d;
L_125f1ae8:;
  /* 125f1ae8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1aeb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1aee jae 0x125f1b06 */
  if (!C.cf) goto L_125f1b06;
  /* 125f1af0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1af3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1af7 je 0x125f1afb */
  if (C.zf) goto L_125f1afb;
  /* 125f1af9 jmp 0x125f1b06 */
  goto L_125f1b06;
L_125f1afb:;
  /* 125f1afb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1afe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1b01 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 125f1b04 jmp 0x125f1ae8 */
  goto L_125f1ae8;
L_125f1b06:;
  /* 125f1b06 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1b09 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1b0c jne 0x125f1b57 */
  if (!C.zf) goto L_125f1b57;
  /* 125f1b0e mov eax, dword ptr [0x1261a788] */
  EAX = (r32((uint32_t)(0x1261a788)));
  /* 125f1b13 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_125f1b16:;
  /* 125f1b16 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1b19 cmp ecx, dword ptr [0x1261a77c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1261a77c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1b1f jae 0x125f1b37 */
  if (!C.cf) goto L_125f1b37;
  /* 125f1b21 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1b24 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1b28 je 0x125f1b2c */
  if (C.zf) goto L_125f1b2c;
  /* 125f1b2a jmp 0x125f1b37 */
  goto L_125f1b37;
L_125f1b2c:;
  /* 125f1b2c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1b2f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1b32 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125f1b35 jmp 0x125f1b16 */
  goto L_125f1b16;
L_125f1b37:;
  /* 125f1b37 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1b3a cmp ecx, dword ptr [0x1261a77c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1261a77c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1b40 jne 0x125f1b57 */
  if (!C.zf) goto L_125f1b57;
  /* 125f1b42 call 0x125f1f40 */
  push32(0x125f1b47u); f_125f1f40();
  /* 125f1b47 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125f1b4a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1b4e jne 0x125f1b57 */
  if (!C.zf) goto L_125f1b57;
  /* 125f1b50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f1b52 jmp 0x125f1f31 */
  goto L_125f1f31;
L_125f1b57:;
  /* 125f1b57 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1b5a push edx */
  push32((uint32_t)(EDX));
  /* 125f1b5b call 0x125f2050 */
  push32(0x125f1b60u); f_125f2050();
  /* 125f1b60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1b63 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1b66 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 125f1b69 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 125f1b6b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1b6e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125f1b71 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1b74 jne 0x125f1b7d */
  if (!C.zf) goto L_125f1b7d;
  /* 125f1b76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f1b78 jmp 0x125f1f31 */
  goto L_125f1f31;
L_125f1b7d:;
  /* 125f1b7d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1b80 mov dword ptr [0x1261a77c], edx */
  w32((uint32_t)(0x1261a77c), (EDX));
  /* 125f1b86 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1b89 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125f1b8c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 125f1b8f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1b92 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125f1b94 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 125f1b97 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1b9b je 0x125f1bc0 */
  if (C.zf) goto L_125f1bc0;
  /* 125f1b9d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f1ba0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1ba3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f1ba6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 125f1baa mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f1bad mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1bb0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 125f1bb3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 125f1bba or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 125f1bbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f1bbe jne 0x125f1bf5 */
  if (!C.zf) goto L_125f1bf5;
L_125f1bc0:;
  /* 125f1bc0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_125f1bc7:;
  /* 125f1bc7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f1bca mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1bcd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f1bd0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 125f1bd4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f1bd7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1bda mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 125f1bdd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 125f1be4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 125f1be6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f1be8 jne 0x125f1bf5 */
  if (!C.zf) goto L_125f1bf5;
  /* 125f1bea mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f1bed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1bf0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 125f1bf3 jmp 0x125f1bc7 */
  goto L_125f1bc7;
L_125f1bf5:;
  /* 125f1bf5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f1bf8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f1bfe mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1c01 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 125f1c08 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125f1c0b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 125f1c12 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f1c15 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1c18 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f1c1b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 125f1c1f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 125f1c22 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1c26 jne 0x125f1c42 */
  if (!C.zf) goto L_125f1c42;
  /* 125f1c28 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 125f1c2f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f1c32 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1c35 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 125f1c38 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 125f1c3f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_125f1c42:;
  /* 125f1c42 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1c46 jl 0x125f1c5b */
  if ((C.sf!=C.of)) goto L_125f1c5b;
  /* 125f1c48 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f1c4b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125f1c4d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 125f1c50 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f1c53 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1c56 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 125f1c59 jmp 0x125f1c42 */
  goto L_125f1c42;
L_125f1c5b:;
  /* 125f1c5b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f1c5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f1c61 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 125f1c65 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 125f1c68 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f1c6b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125f1c6d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f1c70 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125f1c73 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f1c76 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 125f1c79 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f1c7c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125f1c7f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1c83 jle 0x125f1c8c */
  if ((C.zf||C.sf!=C.of)) goto L_125f1c8c;
  /* 125f1c85 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_125f1c8c:;
  /* 125f1c8c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f1c8f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1c92 je 0x125f1eb0 */
  if (C.zf) goto L_125f1eb0;
  /* 125f1c98 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f1c9b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f1c9e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 125f1ca1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1ca4 jne 0x125f1d7a */
  if (!C.zf) goto L_125f1d7a;
  /* 125f1caa cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1cae jge 0x125f1d0f */
  if ((C.sf==C.of)) goto L_125f1d0f;
  /* 125f1cb0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125f1cb5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f1cb8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125f1cba not eax */
  EAX = (~(EAX));
  /* 125f1cbc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f1cbf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1cc2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 125f1cc6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f1cc8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f1ccb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1cce mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 125f1cd2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1cd5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1cd8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 125f1cdb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125f1cde mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1ce1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1ce4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 125f1ce7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1cea add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1ced movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 125f1cf1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f1cf3 jne 0x125f1d0d */
  if (!C.zf) goto L_125f1d0d;
  /* 125f1cf5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125f1cfa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f1cfd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125f1cff not eax */
  EAX = (~(EAX));
  /* 125f1d01 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1d04 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125f1d06 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 125f1d08 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1d0b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_125f1d0d:;
  /* 125f1d0d jmp 0x125f1d7a */
  goto L_125f1d7a;
L_125f1d0f:;
  /* 125f1d0f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f1d12 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f1d15 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f1d1a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f1d1c not edx */
  EDX = (~(EDX));
  /* 125f1d1e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f1d21 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1d24 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 125f1d2b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125f1d2d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f1d30 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1d33 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 125f1d3a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1d3d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1d40 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 125f1d43 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125f1d46 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1d49 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1d4c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 125f1d4f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1d52 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1d55 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 125f1d59 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f1d5b jne 0x125f1d7a */
  if (!C.zf) goto L_125f1d7a;
  /* 125f1d5d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f1d60 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f1d63 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f1d68 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f1d6a not edx */
  EDX = (~(EDX));
  /* 125f1d6c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1d6f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125f1d72 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 125f1d74 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1d77 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_125f1d7a:;
  /* 125f1d7a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f1d7d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125f1d80 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f1d83 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 125f1d86 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 125f1d89 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f1d8c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125f1d8f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f1d92 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125f1d95 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 125f1d98 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1d9c je 0x125f1eb0 */
  if (C.zf) goto L_125f1eb0;
  /* 125f1da2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f1da5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f1da8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 125f1dab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f1dae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f1db1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f1db4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125f1db7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 125f1dba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f1dbd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f1dc0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 125f1dc3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f1dc6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f1dc9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 125f1dcc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f1dcf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125f1dd2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f1dd5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 125f1dd8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f1ddb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f1dde mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 125f1de1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1de4 jne 0x125f1eb0 */
  if (!C.zf) goto L_125f1eb0;
  /* 125f1dea cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1dee jge 0x125f1e4a */
  if ((C.sf==C.of)) goto L_125f1e4a;
  /* 125f1df0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1df3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1df6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 125f1dfa mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1dfd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1e00 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 125f1e03 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 125f1e05 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1e08 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1e0b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 125f1e0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f1e10 jne 0x125f1e28 */
  if (!C.zf) goto L_125f1e28;
  /* 125f1e12 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125f1e17 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f1e1a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125f1e1c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1e1f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125f1e21 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 125f1e23 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1e26 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_125f1e28:;
  /* 125f1e28 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f1e2d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f1e30 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f1e32 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f1e35 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1e38 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 125f1e3c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125f1e3e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f1e41 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1e44 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 125f1e48 jmp 0x125f1eb0 */
  goto L_125f1eb0;
L_125f1e4a:;
  /* 125f1e4a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1e4d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1e50 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 125f1e54 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1e57 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1e5a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 125f1e5d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 125f1e5f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1e62 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1e65 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 125f1e68 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f1e6a jne 0x125f1e87 */
  if (!C.zf) goto L_125f1e87;
  /* 125f1e6c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f1e6f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f1e72 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125f1e77 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125f1e79 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1e7c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125f1e7f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 125f1e81 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1e84 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_125f1e87:;
  /* 125f1e87 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f1e8a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f1e8d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f1e92 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f1e94 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f1e97 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1e9a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 125f1ea1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125f1ea3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f1ea6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1ea9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_125f1eb0:;
  /* 125f1eb0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1eb4 je 0x125f1eca */
  if (C.zf) goto L_125f1eca;
  /* 125f1eb6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f1eb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f1ebc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 125f1ebe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f1ec1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1ec4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f1ec7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_125f1eca:;
  /* 125f1eca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f1ecd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1ed0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 125f1ed3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f1ed6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1ed9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f1edc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125f1ede mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f1ee1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1ee4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f1ee7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1eea mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 125f1eed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f1ef0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125f1ef2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f1ef5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125f1ef7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1efa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f1efd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 125f1eff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f1f01 jne 0x125f1f23 */
  if (!C.zf) goto L_125f1f23;
  /* 125f1f03 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f1f06 cmp eax, dword ptr [0x1261a780] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1261a780))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1f0c jne 0x125f1f23 */
  if (!C.zf) goto L_125f1f23;
  /* 125f1f0e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f1f11 cmp ecx, dword ptr [0x1261a778] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1261a778))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1f17 jne 0x125f1f23 */
  if (!C.zf) goto L_125f1f23;
  /* 125f1f19 mov dword ptr [0x1261a780], 0 */
  w32((uint32_t)(0x1261a780), (0x0u));
L_125f1f23:;
  /* 125f1f23 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 125f1f26 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f1f29 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 125f1f2b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f1f2e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_125f1f31:;
  /* 125f1f31 pop esi */
  ESI = (pop32());
  /* 125f1f32 mov esp, ebp */
  ESP = (EBP);
  /* 125f1f34 pop ebp */
  EBP = (pop32());
  /* 125f1f35 ret  */
  ESPCHK(0x125f1a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f40 @ 0x125f1f40 (271 bytes, 78 insns) */
void f_125f1f40(void) {
  FTRACE(0x125f1f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f1f40 push ebp */
  push32((uint32_t)(EBP));
  /* 125f1f41 mov ebp, esp */
  EBP = (ESP);
  /* 125f1f43 push ecx */
  push32((uint32_t)(ECX));
  /* 125f1f44 mov eax, dword ptr [0x1261a784] */
  EAX = (r32((uint32_t)(0x1261a784)));
  /* 125f1f49 cmp eax, dword ptr [0x1261a768] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1261a768))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1f4f jne 0x125f1f9b */
  if (!C.zf) goto L_125f1f9b;
  /* 125f1f51 mov ecx, dword ptr [0x1261a768] */
  ECX = (r32((uint32_t)(0x1261a768)));
  /* 125f1f57 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1f5a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f1f5d push ecx */
  push32((uint32_t)(ECX));
  /* 125f1f5e mov edx, dword ptr [0x1261a788] */
  EDX = (r32((uint32_t)(0x1261a788)));
  /* 125f1f64 push edx */
  push32((uint32_t)(EDX));
  /* 125f1f65 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f1f67 mov eax, dword ptr [0x1261a78c] */
  EAX = (r32((uint32_t)(0x1261a78c)));
  /* 125f1f6c push eax */
  push32((uint32_t)(EAX));
  /* 125f1f6d call dword ptr [0x1261b354] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b354))), 0x125f1f73u);
  /* 125f1f73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f1f76 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1f7a jne 0x125f1f83 */
  if (!C.zf) goto L_125f1f83;
  /* 125f1f7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f1f7e jmp 0x125f204b */
  goto L_125f204b;
L_125f1f83:;
  /* 125f1f83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f1f86 mov dword ptr [0x1261a788], ecx */
  w32((uint32_t)(0x1261a788), (ECX));
  /* 125f1f8c mov edx, dword ptr [0x1261a768] */
  EDX = (r32((uint32_t)(0x1261a768)));
  /* 125f1f92 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1f95 mov dword ptr [0x1261a768], edx */
  w32((uint32_t)(0x1261a768), (EDX));
L_125f1f9b:;
  /* 125f1f9b mov eax, dword ptr [0x1261a784] */
  EAX = (r32((uint32_t)(0x1261a784)));
  /* 125f1fa0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f1fa3 mov ecx, dword ptr [0x1261a788] */
  ECX = (r32((uint32_t)(0x1261a788)));
  /* 125f1fa9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f1fab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125f1fae push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 125f1fb3 push 8 */
  push32((uint32_t)(0x8u));
  /* 125f1fb5 mov edx, dword ptr [0x1261a78c] */
  EDX = (r32((uint32_t)(0x1261a78c)));
  /* 125f1fbb push edx */
  push32((uint32_t)(EDX));
  /* 125f1fbc call dword ptr [0x1261b358] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b358))), 0x125f1fc2u);
  /* 125f1fc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f1fc5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 125f1fc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f1fcb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1fcf jne 0x125f1fd5 */
  if (!C.zf) goto L_125f1fd5;
  /* 125f1fd1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f1fd3 jmp 0x125f204b */
  goto L_125f204b;
L_125f1fd5:;
  /* 125f1fd5 push 4 */
  push32((uint32_t)(0x4u));
  /* 125f1fd7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 125f1fdc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 125f1fe1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f1fe3 call dword ptr [0x1261b350] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b350))), 0x125f1fe9u);
  /* 125f1fe9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f1fec mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 125f1fef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f1ff2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f1ff6 jne 0x125f2012 */
  if (!C.zf) goto L_125f2012;
  /* 125f1ff8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f1ffb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125f1ffe push ecx */
  push32((uint32_t)(ECX));
  /* 125f1fff push 0 */
  push32((uint32_t)(0x0u));
  /* 125f2001 mov edx, dword ptr [0x1261a78c] */
  EDX = (r32((uint32_t)(0x1261a78c)));
  /* 125f2007 push edx */
  push32((uint32_t)(EDX));
  /* 125f2008 call dword ptr [0x1261b378] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b378))), 0x125f200eu);
  /* 125f200e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f2010 jmp 0x125f204b */
  goto L_125f204b;
L_125f2012:;
  /* 125f2012 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f2015 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125f201b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f201e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 125f2025 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f2028 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 125f202f mov eax, dword ptr [0x1261a784] */
  EAX = (r32((uint32_t)(0x1261a784)));
  /* 125f2034 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2037 mov dword ptr [0x1261a784], eax */
  w32((uint32_t)(0x1261a784), (EAX));
  /* 125f203c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f203f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 125f2042 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 125f2048 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125f204b:;
  /* 125f204b mov esp, ebp */
  ESP = (EBP);
  /* 125f204d pop ebp */
  EBP = (pop32());
  /* 125f204e ret  */
  ESPCHK(0x125f1f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012050 @ 0x125f2050 (494 bytes, 149 insns) */
void f_125f2050(void) {
  FTRACE(0x125f2050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f2050 push ebp */
  push32((uint32_t)(EBP));
  /* 125f2051 mov ebp, esp */
  EBP = (ESP);
  /* 125f2053 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f2056 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f2059 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125f205c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 125f205f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f2062 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125f2065 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125f2068 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_125f206f:;
  /* 125f206f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2073 jl 0x125f2088 */
  if ((C.sf!=C.of)) goto L_125f2088;
  /* 125f2075 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f2078 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 125f207a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f207d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f2080 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2083 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 125f2086 jmp 0x125f206f */
  goto L_125f206f;
L_125f2088:;
  /* 125f2088 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f208b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f2091 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f2094 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 125f209b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 125f209e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 125f20a5 jmp 0x125f20b0 */
  goto L_125f20b0;
L_125f20a7:;
  /* 125f20a7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f20aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f20ad mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_125f20b0:;
  /* 125f20b0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f20b4 jge 0x125f20d6 */
  if ((C.sf==C.of)) goto L_125f20d6;
  /* 125f20b6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f20b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f20bc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 125f20bf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125f20c2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f20c5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f20c8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 125f20cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f20ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f20d1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 125f20d4 jmp 0x125f20a7 */
  goto L_125f20a7;
L_125f20d6:;
  /* 125f20d6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f20d9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 125f20dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f20df mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125f20e2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f20e4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 125f20e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 125f20e9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 125f20ee push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 125f20f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f20f6 push edx */
  push32((uint32_t)(EDX));
  /* 125f20f7 call dword ptr [0x1261b350] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b350))), 0x125f20fdu);
  /* 125f20fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f20ff jne 0x125f2109 */
  if (!C.zf) goto L_125f2109;
  /* 125f2101 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f2104 jmp 0x125f223a */
  goto L_125f223a;
L_125f2109:;
  /* 125f2109 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f210c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2111 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 125f2114 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f2117 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125f211a jmp 0x125f2128 */
  goto L_125f2128;
L_125f211c:;
  /* 125f211c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f211f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2125 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125f2128:;
  /* 125f2128 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f212b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f212e ja 0x125f218d */
  if ((!C.cf&&!C.zf)) goto L_125f218d;
  /* 125f2130 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f2133 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 125f213a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f213d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 125f2147 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f214a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f214d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125f2150 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f2153 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 125f2159 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f215c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2162 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f2165 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 125f2168 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f216b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f2171 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f2174 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 125f2177 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f217a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f217f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 125f2182 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f2185 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 125f218b jmp 0x125f211c */
  goto L_125f211c;
L_125f218d:;
  /* 125f218d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f2190 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2196 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125f2199 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f219c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f219f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f21a2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 125f21a5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f21a8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 125f21ab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125f21ae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f21b1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f21b4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 125f21b7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f21ba add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f21bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f21c0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 125f21c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f21c6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125f21c9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125f21cc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f21cf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f21d2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 125f21d5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f21d8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f21db mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 125f21e3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f21e6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f21e9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 125f21f4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f21f7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 125f21fb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f21fe mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 125f2201 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 125f2204 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f2207 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 125f220a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f220c jne 0x125f221d */
  if (!C.zf) goto L_125f221d;
  /* 125f220e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f2211 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125f2214 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 125f2217 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f221a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_125f221d:;
  /* 125f221d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f2222 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f2225 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f2227 not edx */
  EDX = (~(EDX));
  /* 125f2229 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f222c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125f222f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 125f2231 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f2234 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 125f2237 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_125f223a:;
  /* 125f223a mov esp, ebp */
  ESP = (EBP);
  /* 125f223c pop ebp */
  EBP = (pop32());
  /* 125f223d ret  */
  ESPCHK(0x125f2050u, _esp0);
  ESP += 4; return;
}

/* FUN_10012240 @ 0x125f2240 (1515 bytes, 489 insns) */
void f_125f2240(void) {
  FTRACE(0x125f2240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f2240 push ebp */
  push32((uint32_t)(EBP));
  /* 125f2241 mov ebp, esp */
  EBP = (ESP);
  /* 125f2243 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f2246 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f2249 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f224c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 125f224e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 125f2251 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f2254 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 125f2257 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 125f225a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f225d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f2260 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f2263 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f2266 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f2269 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 125f226c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125f226f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f2272 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f2278 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f227b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 125f2282 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125f2285 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f2288 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f228b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125f228e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f2291 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125f2293 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f2296 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 125f2299 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f229c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f229f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 125f22a2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f22a5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125f22a7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 125f22aa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f22ad cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f22b0 jle 0x125f2566 */
  if ((C.zf||C.sf!=C.of)) goto L_125f2566;
  /* 125f22b6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f22b9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125f22bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f22be jne 0x125f22cb */
  if (!C.zf) goto L_125f22cb;
  /* 125f22c0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f22c3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f22c6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f22c9 jle 0x125f22d2 */
  if ((C.zf||C.sf!=C.of)) goto L_125f22d2;
L_125f22cb:;
  /* 125f22cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f22cd jmp 0x125f2827 */
  goto L_125f2827;
L_125f22d2:;
  /* 125f22d2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f22d5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 125f22d8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f22db mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125f22de cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f22e2 jbe 0x125f22eb */
  if ((C.cf||C.zf)) goto L_125f22eb;
  /* 125f22e4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_125f22eb:;
  /* 125f22eb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f22ee mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f22f1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 125f22f4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f22f7 jne 0x125f23cd */
  if (!C.zf) goto L_125f23cd;
  /* 125f22fd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2301 jae 0x125f2362 */
  if (!C.cf) goto L_125f2362;
  /* 125f2303 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f2308 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f230b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f230d not edx */
  EDX = (~(EDX));
  /* 125f230f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f2312 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f2315 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 125f2319 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125f231b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f231e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f2321 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 125f2325 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f2328 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f232b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 125f232e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125f2331 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f2334 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2337 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 125f233a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f233d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2340 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 125f2344 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f2346 jne 0x125f2360 */
  if (!C.zf) goto L_125f2360;
  /* 125f2348 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f234d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f2350 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f2352 not edx */
  EDX = (~(EDX));
  /* 125f2354 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f2357 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125f2359 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 125f235b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f235e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_125f2360:;
  /* 125f2360 jmp 0x125f23cd */
  goto L_125f23cd;
L_125f2362:;
  /* 125f2362 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f2365 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f2368 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125f236d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125f236f not eax */
  EAX = (~(EAX));
  /* 125f2371 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f2374 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f2377 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 125f237e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f2380 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f2383 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f2386 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 125f238d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f2390 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2393 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 125f2396 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125f2399 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f239c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f239f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 125f23a2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f23a5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f23a8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 125f23ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f23ae jne 0x125f23cd */
  if (!C.zf) goto L_125f23cd;
  /* 125f23b0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f23b3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f23b6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125f23bb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125f23bd not eax */
  EAX = (~(EAX));
  /* 125f23bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f23c2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125f23c5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 125f23c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f23ca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_125f23cd:;
  /* 125f23cd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f23d0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125f23d3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f23d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125f23d9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 125f23dc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f23df mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 125f23e2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f23e5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125f23e8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 125f23eb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f23ee add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f23f1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f23f4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125f23f7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f23fb jle 0x125f2547 */
  if ((C.zf||C.sf!=C.of)) goto L_125f2547;
  /* 125f2401 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f2404 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2407 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 125f240a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f240d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 125f2410 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f2413 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 125f2416 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f241a jbe 0x125f2423 */
  if ((C.cf||C.zf)) goto L_125f2423;
  /* 125f241c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_125f2423:;
  /* 125f2423 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f2426 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f2429 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 125f242c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 125f242f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f2432 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f2435 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125f2438 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 125f243b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f243e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f2441 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 125f2444 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f2447 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f244a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 125f244d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f2450 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125f2453 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f2456 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 125f2459 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f245c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f245f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 125f2462 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2465 jne 0x125f2533 */
  if (!C.zf) goto L_125f2533;
  /* 125f246b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f246f jae 0x125f24cc */
  if (!C.cf) goto L_125f24cc;
  /* 125f2471 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f2474 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2477 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 125f247b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f247e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2481 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 125f2484 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 125f2487 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f248a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f248d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 125f2490 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f2492 jne 0x125f24aa */
  if (!C.zf) goto L_125f24aa;
  /* 125f2494 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f2499 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f249c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f249e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f24a1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125f24a3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 125f24a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f24a8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_125f24aa:;
  /* 125f24aa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125f24af mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f24b2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125f24b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f24b7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f24ba mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 125f24be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f24c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f24c3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f24c6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 125f24ca jmp 0x125f2533 */
  goto L_125f2533;
L_125f24cc:;
  /* 125f24cc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f24cf add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f24d2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 125f24d6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f24d9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f24dc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 125f24df add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 125f24e2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f24e5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f24e8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 125f24eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f24ed jne 0x125f250a */
  if (!C.zf) goto L_125f250a;
  /* 125f24ef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f24f2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f24f5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f24fa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f24fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f24ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125f2502 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 125f2504 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f2507 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_125f250a:;
  /* 125f250a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f250d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f2510 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125f2515 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125f2517 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f251a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f251d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 125f2524 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f2526 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f2529 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f252c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_125f2533:;
  /* 125f2533 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f2536 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f2539 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 125f253b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f253e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2541 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f2544 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_125f2547:;
  /* 125f2547 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f254a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f254d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f2550 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125f2552 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f2555 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2558 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f255b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f255e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 125f2561 jmp 0x125f2822 */
  goto L_125f2822;
L_125f2566:;
  /* 125f2566 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f2569 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f256c jge 0x125f2822 */
  if ((C.sf==C.of)) goto L_125f2822;
  /* 125f2572 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f2575 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2578 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f257b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125f257d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f2580 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2583 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f2586 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2589 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 125f258c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f258f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2592 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125f2595 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f2598 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f259b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 125f259e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f25a1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 125f25a4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f25a7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 125f25aa cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f25ae jbe 0x125f25b7 */
  if ((C.cf||C.zf)) goto L_125f25b7;
  /* 125f25b0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_125f25b7:;
  /* 125f25b7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f25ba and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 125f25bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f25bf jne 0x125f2700 */
  if (!C.zf) goto L_125f2700;
  /* 125f25c5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f25c8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 125f25cb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f25ce mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125f25d1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f25d5 jbe 0x125f25de */
  if ((C.cf||C.zf)) goto L_125f25de;
  /* 125f25d7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_125f25de:;
  /* 125f25de mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f25e1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f25e4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 125f25e7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f25ea jne 0x125f26c0 */
  if (!C.zf) goto L_125f26c0;
  /* 125f25f0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f25f4 jae 0x125f2655 */
  if (!C.cf) goto L_125f2655;
  /* 125f25f6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f25fb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f25fe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f2600 not edx */
  EDX = (~(EDX));
  /* 125f2602 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f2605 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f2608 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 125f260c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125f260e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f2611 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f2614 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 125f2618 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f261b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f261e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 125f2621 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125f2624 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f2627 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f262a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 125f262d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f2630 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2633 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 125f2637 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f2639 jne 0x125f2653 */
  if (!C.zf) goto L_125f2653;
  /* 125f263b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f2640 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f2643 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f2645 not edx */
  EDX = (~(EDX));
  /* 125f2647 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f264a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125f264c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 125f264e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f2651 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_125f2653:;
  /* 125f2653 jmp 0x125f26c0 */
  goto L_125f26c0;
L_125f2655:;
  /* 125f2655 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f2658 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f265b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125f2660 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125f2662 not eax */
  EAX = (~(EAX));
  /* 125f2664 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f2667 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f266a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 125f2671 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f2673 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f2676 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f2679 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 125f2680 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f2683 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2686 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 125f2689 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125f268c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f268f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2692 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 125f2695 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f2698 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f269b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 125f269f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f26a1 jne 0x125f26c0 */
  if (!C.zf) goto L_125f26c0;
  /* 125f26a3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f26a6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f26a9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125f26ae shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125f26b0 not eax */
  EAX = (~(EAX));
  /* 125f26b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f26b5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125f26b8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 125f26ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f26bd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_125f26c0:;
  /* 125f26c0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f26c3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125f26c6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f26c9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125f26cc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 125f26cf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f26d2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 125f26d5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f26d8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125f26db mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 125f26de mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f26e1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f26e4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 125f26e7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f26ea sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 125f26ed sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f26f0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 125f26f3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f26f7 jbe 0x125f2700 */
  if ((C.cf||C.zf)) goto L_125f2700;
  /* 125f26f9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_125f2700:;
  /* 125f2700 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f2703 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f2706 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 125f2709 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 125f270c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f270f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f2712 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125f2715 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 125f2718 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f271b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f271e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 125f2721 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f2724 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f2727 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 125f272a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f272d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125f2730 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f2733 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 125f2736 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f2739 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f273c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 125f273f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2742 jne 0x125f280e */
  if (!C.zf) goto L_125f280e;
  /* 125f2748 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f274c jae 0x125f27a8 */
  if (!C.cf) goto L_125f27a8;
  /* 125f274e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f2751 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2754 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 125f2758 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f275b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f275e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 125f2761 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 125f2763 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f2766 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2769 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 125f276c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f276e jne 0x125f2786 */
  if (!C.zf) goto L_125f2786;
  /* 125f2770 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125f2775 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f2778 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125f277a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f277d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125f277f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 125f2781 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f2784 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_125f2786:;
  /* 125f2786 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f278b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f278e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f2790 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f2793 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f2796 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 125f279a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125f279c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f279f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f27a2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 125f27a6 jmp 0x125f280e */
  goto L_125f280e;
L_125f27a8:;
  /* 125f27a8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f27ab add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f27ae movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 125f27b2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f27b5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f27b8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 125f27bb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 125f27bd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f27c0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f27c3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 125f27c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f27c8 jne 0x125f27e5 */
  if (!C.zf) goto L_125f27e5;
  /* 125f27ca mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f27cd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f27d0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 125f27d5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 125f27d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f27da mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125f27dd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 125f27df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f27e2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_125f27e5:;
  /* 125f27e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f27e8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f27eb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f27f0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f27f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f27f5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f27f8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 125f27ff or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125f2801 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f2804 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f2807 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_125f280e:;
  /* 125f280e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f2811 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f2814 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 125f2816 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f2819 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f281c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f281f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_125f2822:;
  /* 125f2822 mov eax, 1 */
  EAX = (0x1u);
L_125f2827:;
  /* 125f2827 mov esp, ebp */
  ESP = (EBP);
  /* 125f2829 pop ebp */
  EBP = (pop32());
  /* 125f282a ret  */
  ESPCHK(0x125f2240u, _esp0);
  ESP += 4; return;
}

/* FUN_10012830 @ 0x125f2830 (304 bytes, 79 insns) */
void f_125f2830(void) {
  FTRACE(0x125f2830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f2830 push ebp */
  push32((uint32_t)(EBP));
  /* 125f2831 mov ebp, esp */
  EBP = (ESP);
  /* 125f2833 push ecx */
  push32((uint32_t)(ECX));
  /* 125f2834 cmp dword ptr [0x1261a780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1261a780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f283b je 0x125f295c */
  if (C.zf) goto L_125f295c;
  /* 125f2841 mov eax, dword ptr [0x1261a778] */
  EAX = (r32((uint32_t)(0x1261a778)));
  /* 125f2846 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 125f2849 mov ecx, dword ptr [0x1261a780] */
  ECX = (r32((uint32_t)(0x1261a780)));
  /* 125f284f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125f2852 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2854 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125f2857 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 125f285c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 125f2861 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f2864 push eax */
  push32((uint32_t)(EAX));
  /* 125f2865 call dword ptr [0x1261b374] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b374))), 0x125f286bu);
  /* 125f286b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f2870 mov ecx, dword ptr [0x1261a778] */
  ECX = (r32((uint32_t)(0x1261a778)));
  /* 125f2876 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f2878 mov eax, dword ptr [0x1261a780] */
  EAX = (r32((uint32_t)(0x1261a780)));
  /* 125f287d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125f2880 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 125f2882 mov edx, dword ptr [0x1261a780] */
  EDX = (r32((uint32_t)(0x1261a780)));
  /* 125f2888 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 125f288b mov eax, dword ptr [0x1261a780] */
  EAX = (r32((uint32_t)(0x1261a780)));
  /* 125f2890 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125f2893 mov edx, dword ptr [0x1261a778] */
  EDX = (r32((uint32_t)(0x1261a778)));
  /* 125f2899 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 125f28a4 mov eax, dword ptr [0x1261a780] */
  EAX = (r32((uint32_t)(0x1261a780)));
  /* 125f28a9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125f28ac mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 125f28af sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125f28b2 mov eax, dword ptr [0x1261a780] */
  EAX = (r32((uint32_t)(0x1261a780)));
  /* 125f28b7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125f28ba mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 125f28bd mov edx, dword ptr [0x1261a780] */
  EDX = (r32((uint32_t)(0x1261a780)));
  /* 125f28c3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 125f28c6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 125f28ca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f28cc jne 0x125f28e2 */
  if (!C.zf) goto L_125f28e2;
  /* 125f28ce mov edx, dword ptr [0x1261a780] */
  EDX = (r32((uint32_t)(0x1261a780)));
  /* 125f28d4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 125f28d7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 125f28d9 mov ecx, dword ptr [0x1261a780] */
  ECX = (r32((uint32_t)(0x1261a780)));
  /* 125f28df mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_125f28e2:;
  /* 125f28e2 mov edx, dword ptr [0x1261a780] */
  EDX = (r32((uint32_t)(0x1261a780)));
  /* 125f28e8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f28ec jne 0x125f2952 */
  if (!C.zf) goto L_125f2952;
  /* 125f28ee cmp dword ptr [0x1261a784], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1261a784))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f28f5 jle 0x125f2952 */
  if ((C.zf||C.sf!=C.of)) goto L_125f2952;
  /* 125f28f7 mov eax, dword ptr [0x1261a780] */
  EAX = (r32((uint32_t)(0x1261a780)));
  /* 125f28fc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125f28ff push ecx */
  push32((uint32_t)(ECX));
  /* 125f2900 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f2902 mov edx, dword ptr [0x1261a78c] */
  EDX = (r32((uint32_t)(0x1261a78c)));
  /* 125f2908 push edx */
  push32((uint32_t)(EDX));
  /* 125f2909 call dword ptr [0x1261b378] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b378))), 0x125f290fu);
  /* 125f290f mov eax, dword ptr [0x1261a784] */
  EAX = (r32((uint32_t)(0x1261a784)));
  /* 125f2914 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f2917 mov ecx, dword ptr [0x1261a788] */
  ECX = (r32((uint32_t)(0x1261a788)));
  /* 125f291d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f291f mov edx, dword ptr [0x1261a780] */
  EDX = (r32((uint32_t)(0x1261a780)));
  /* 125f2925 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2928 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f292a push ecx */
  push32((uint32_t)(ECX));
  /* 125f292b mov eax, dword ptr [0x1261a780] */
  EAX = (r32((uint32_t)(0x1261a780)));
  /* 125f2930 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2933 push eax */
  push32((uint32_t)(EAX));
  /* 125f2934 mov ecx, dword ptr [0x1261a780] */
  ECX = (r32((uint32_t)(0x1261a780)));
  /* 125f293a push ecx */
  push32((uint32_t)(ECX));
  /* 125f293b call 0x125f4f60 */
  push32(0x125f2940u); f_125f4f60();
  /* 125f2940 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2943 mov edx, dword ptr [0x1261a784] */
  EDX = (r32((uint32_t)(0x1261a784)));
  /* 125f2949 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f294c mov dword ptr [0x1261a784], edx */
  w32((uint32_t)(0x1261a784), (EDX));
L_125f2952:;
  /* 125f2952 mov dword ptr [0x1261a780], 0 */
  w32((uint32_t)(0x1261a780), (0x0u));
L_125f295c:;
  /* 125f295c mov esp, ebp */
  ESP = (EBP);
  /* 125f295e pop ebp */
  EBP = (pop32());
  /* 125f295f ret  */
  ESPCHK(0x125f2830u, _esp0);
  ESP += 4; return;
}

/* FUN_10012960 @ 0x125f2960 (1565 bytes, 343 insns) */
void f_125f2960(void) {
  FTRACE(0x125f2960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f2960 push ebp */
  push32((uint32_t)(EBP));
  /* 125f2961 mov ebp, esp */
  EBP = (ESP);
  /* 125f2963 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f2969 mov eax, dword ptr [0x1261a784] */
  EAX = (r32((uint32_t)(0x1261a784)));
  /* 125f296e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f2971 push eax */
  push32((uint32_t)(EAX));
  /* 125f2972 mov ecx, dword ptr [0x1261a788] */
  ECX = (r32((uint32_t)(0x1261a788)));
  /* 125f2978 push ecx */
  push32((uint32_t)(ECX));
  /* 125f2979 call dword ptr [0x1261b3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b3a0))), 0x125f297fu);
  /* 125f297f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f2981 je 0x125f298b */
  if (C.zf) goto L_125f298b;
  /* 125f2983 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f2986 jmp 0x125f2f79 */
  goto L_125f2f79;
L_125f298b:;
  /* 125f298b mov edx, dword ptr [0x1261a788] */
  EDX = (r32((uint32_t)(0x1261a788)));
  /* 125f2991 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 125f2997 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 125f29a1 jmp 0x125f29b2 */
  goto L_125f29b2;
L_125f29a3:;
  /* 125f29a3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 125f29a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f29ac mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_125f29b2:;
  /* 125f29b2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 125f29b8 cmp ecx, dword ptr [0x1261a784] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1261a784))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f29be jge 0x125f2f77 */
  if ((C.sf==C.of)) goto L_125f2f77;
  /* 125f29c4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 125f29ca mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 125f29cd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 125f29d3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 125f29d8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 125f29de push ecx */
  push32((uint32_t)(ECX));
  /* 125f29df call dword ptr [0x1261b3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b3a0))), 0x125f29e5u);
  /* 125f29e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f29e7 je 0x125f29f3 */
  if (C.zf) goto L_125f29f3;
  /* 125f29e9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 125f29ee jmp 0x125f2f79 */
  goto L_125f2f79;
L_125f29f3:;
  /* 125f29f3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 125f29f9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 125f29fc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 125f2a02 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 125f2a08 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2a0e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 125f2a11 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 125f2a17 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125f2a1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f2a1d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 125f2a27 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 125f2a31 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125f2a38 jmp 0x125f2a43 */
  goto L_125f2a43;
L_125f2a3a:;
  /* 125f2a3a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f2a3d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2a40 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_125f2a43:;
  /* 125f2a43 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2a47 jge 0x125f2f3b */
  if ((C.sf==C.of)) goto L_125f2f3b;
  /* 125f2a4d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 125f2a57 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 125f2a61 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 125f2a6b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 125f2a75 jmp 0x125f2a86 */
  goto L_125f2a86;
L_125f2a77:;
  /* 125f2a77 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 125f2a7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2a80 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_125f2a86:;
  /* 125f2a86 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2a8d jge 0x125f2aa2 */
  if ((C.sf==C.of)) goto L_125f2aa2;
  /* 125f2a8f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 125f2a95 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 125f2aa0 jmp 0x125f2a77 */
  goto L_125f2a77;
L_125f2aa2:;
  /* 125f2aa2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2aa6 jl 0x125f2edd */
  if ((C.sf!=C.of)) goto L_125f2edd;
  /* 125f2aac push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 125f2ab1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 125f2ab7 push ecx */
  push32((uint32_t)(ECX));
  /* 125f2ab8 call dword ptr [0x1261b3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b3a0))), 0x125f2abeu);
  /* 125f2abe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f2ac0 je 0x125f2acc */
  if (C.zf) goto L_125f2acc;
  /* 125f2ac2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 125f2ac7 jmp 0x125f2f79 */
  goto L_125f2f79;
L_125f2acc:;
  /* 125f2acc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 125f2ad2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125f2ad5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 125f2adf jmp 0x125f2af0 */
  goto L_125f2af0;
L_125f2ae1:;
  /* 125f2ae1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 125f2ae7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2aea mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_125f2af0:;
  /* 125f2af0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2af7 jge 0x125f2c74 */
  if ((C.sf==C.of)) goto L_125f2c74;
  /* 125f2afd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f2b00 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2b03 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 125f2b09 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 125f2b0f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2b15 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 125f2b1b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 125f2b21 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2b25 jne 0x125f2b32 */
  if (!C.zf) goto L_125f2b32;
  /* 125f2b27 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 125f2b2d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2b30 je 0x125f2b3c */
  if (C.zf) goto L_125f2b3c;
L_125f2b32:;
  /* 125f2b32 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 125f2b37 jmp 0x125f2f79 */
  goto L_125f2f79;
L_125f2b3c:;
  /* 125f2b3c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 125f2b42 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125f2b44 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 125f2b4a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 125f2b50 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 125f2b56 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 125f2b5c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 125f2b5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f2b61 je 0x125f2b99 */
  if (C.zf) goto L_125f2b99;
  /* 125f2b63 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 125f2b69 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f2b6c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 125f2b72 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2b7c jle 0x125f2b88 */
  if ((C.zf||C.sf!=C.of)) goto L_125f2b88;
  /* 125f2b7e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 125f2b83 jmp 0x125f2f79 */
  goto L_125f2f79;
L_125f2b88:;
  /* 125f2b88 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 125f2b8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2b91 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 125f2b97 jmp 0x125f2bdb */
  goto L_125f2bdb;
L_125f2b99:;
  /* 125f2b99 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 125f2b9f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 125f2ba2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f2ba5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 125f2bab cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2bb2 jle 0x125f2bbe */
  if ((C.zf||C.sf!=C.of)) goto L_125f2bbe;
  /* 125f2bb4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_125f2bbe:;
  /* 125f2bbe mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 125f2bc4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 125f2bcb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2bce mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 125f2bd4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_125f2bdb:;
  /* 125f2bdb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2be2 jl 0x125f2bfd */
  if ((C.sf!=C.of)) goto L_125f2bfd;
  /* 125f2be4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 125f2bea and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 125f2bed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f2bef jne 0x125f2bfd */
  if (!C.zf) goto L_125f2bfd;
  /* 125f2bf1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2bfb jle 0x125f2c07 */
  if ((C.zf||C.sf!=C.of)) goto L_125f2c07;
L_125f2bfd:;
  /* 125f2bfd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 125f2c02 jmp 0x125f2f79 */
  goto L_125f2f79;
L_125f2c07:;
  /* 125f2c07 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 125f2c0d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2c13 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 125f2c16 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2c1c je 0x125f2c28 */
  if (C.zf) goto L_125f2c28;
  /* 125f2c1e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 125f2c23 jmp 0x125f2f79 */
  goto L_125f2f79;
L_125f2c28:;
  /* 125f2c28 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 125f2c2e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2c34 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 125f2c3a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 125f2c40 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2c46 jb 0x125f2b3c */
  if (C.cf) goto L_125f2b3c;
  /* 125f2c4c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 125f2c52 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2c58 je 0x125f2c64 */
  if (C.zf) goto L_125f2c64;
  /* 125f2c5a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 125f2c5f jmp 0x125f2f79 */
  goto L_125f2f79;
L_125f2c64:;
  /* 125f2c64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f2c67 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2c6c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125f2c6f jmp 0x125f2ae1 */
  goto L_125f2ae1;
L_125f2c74:;
  /* 125f2c74 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f2c77 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125f2c79 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2c7f je 0x125f2c8b */
  if (C.zf) goto L_125f2c8b;
  /* 125f2c81 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 125f2c86 jmp 0x125f2f79 */
  goto L_125f2f79;
L_125f2c8b:;
  /* 125f2c8b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f2c8e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 125f2c94 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 125f2c9b jmp 0x125f2ca6 */
  goto L_125f2ca6;
L_125f2c9d:;
  /* 125f2c9d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f2ca0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2ca3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_125f2ca6:;
  /* 125f2ca6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2caa jge 0x125f2edd */
  if ((C.sf==C.of)) goto L_125f2edd;
  /* 125f2cb0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 125f2cba mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 125f2cc0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_125f2cc6:;
  /* 125f2cc6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 125f2ccc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125f2ccf mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 125f2cd5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 125f2cdb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2ce1 je 0x125f2e0a */
  if (C.zf) goto L_125f2e0a;
  /* 125f2ce7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f2cea mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 125f2cf0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2cf7 je 0x125f2e0a */
  if (C.zf) goto L_125f2e0a;
  /* 125f2cfd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 125f2d03 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2d09 jb 0x125f2d1e */
  if (C.cf) goto L_125f2d1e;
  /* 125f2d0b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 125f2d11 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2d16 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2d1c jb 0x125f2d28 */
  if (C.cf) goto L_125f2d28;
L_125f2d1e:;
  /* 125f2d1e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 125f2d23 jmp 0x125f2f79 */
  goto L_125f2f79;
L_125f2d28:;
  /* 125f2d28 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 125f2d2e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 125f2d34 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 125f2d3a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 125f2d40 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2d43 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 125f2d46 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f2d49 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2d4e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_125f2d54:;
  /* 125f2d54 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f2d57 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2d5d je 0x125f2d7e */
  if (C.zf) goto L_125f2d7e;
  /* 125f2d5f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f2d62 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2d68 jne 0x125f2d6c */
  if (!C.zf) goto L_125f2d6c;
  /* 125f2d6a jmp 0x125f2d7e */
  goto L_125f2d7e;
L_125f2d6c:;
  /* 125f2d6c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f2d6f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125f2d71 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 125f2d74 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f2d77 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2d79 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 125f2d7c jmp 0x125f2d54 */
  goto L_125f2d54;
L_125f2d7e:;
  /* 125f2d7e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f2d81 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2d87 jne 0x125f2d93 */
  if (!C.zf) goto L_125f2d93;
  /* 125f2d89 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 125f2d8e jmp 0x125f2f79 */
  goto L_125f2f79;
L_125f2d93:;
  /* 125f2d93 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 125f2d99 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125f2d9b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 125f2d9e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f2da1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 125f2da7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2dae jle 0x125f2dba */
  if ((C.zf||C.sf!=C.of)) goto L_125f2dba;
  /* 125f2db0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_125f2dba:;
  /* 125f2dba mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 125f2dc0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2dc3 je 0x125f2dcf */
  if (C.zf) goto L_125f2dcf;
  /* 125f2dc5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 125f2dca jmp 0x125f2f79 */
  goto L_125f2f79;
L_125f2dcf:;
  /* 125f2dcf mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 125f2dd5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125f2dd8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2dde je 0x125f2dea */
  if (C.zf) goto L_125f2dea;
  /* 125f2de0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 125f2de5 jmp 0x125f2f79 */
  goto L_125f2f79;
L_125f2dea:;
  /* 125f2dea mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 125f2df0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 125f2df6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 125f2dfc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2dff mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 125f2e05 jmp 0x125f2cc6 */
  goto L_125f2cc6;
L_125f2e0a:;
  /* 125f2e0a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2e11 je 0x125f2e81 */
  if (C.zf) goto L_125f2e81;
  /* 125f2e13 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2e17 jge 0x125f2e4b */
  if ((C.sf==C.of)) goto L_125f2e4b;
  /* 125f2e19 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f2e1e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f2e21 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f2e23 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 125f2e29 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125f2e2b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 125f2e31 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f2e36 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f2e39 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f2e3b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 125f2e41 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125f2e43 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 125f2e49 jmp 0x125f2e81 */
  goto L_125f2e81;
L_125f2e4b:;
  /* 125f2e4b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f2e4e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f2e51 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f2e56 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f2e58 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 125f2e5e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125f2e60 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 125f2e66 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f2e69 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f2e6c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 125f2e71 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 125f2e73 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 125f2e79 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125f2e7b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_125f2e81:;
  /* 125f2e81 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 125f2e87 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125f2e8a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2e90 jne 0x125f2ea4 */
  if (!C.zf) goto L_125f2ea4;
  /* 125f2e92 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f2e95 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 125f2e9b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2ea2 je 0x125f2eae */
  if (C.zf) goto L_125f2eae;
L_125f2ea4:;
  /* 125f2ea4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 125f2ea9 jmp 0x125f2f79 */
  goto L_125f2f79;
L_125f2eae:;
  /* 125f2eae mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 125f2eb4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125f2eb7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2ebd je 0x125f2ec9 */
  if (C.zf) goto L_125f2ec9;
  /* 125f2ebf mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 125f2ec4 jmp 0x125f2f79 */
  goto L_125f2f79;
L_125f2ec9:;
  /* 125f2ec9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 125f2ecf add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2ed2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 125f2ed8 jmp 0x125f2c9d */
  goto L_125f2c9d;
L_125f2edd:;
  /* 125f2edd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f2ee0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 125f2ee6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 125f2eec cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2ef0 jne 0x125f2f0a */
  if (!C.zf) goto L_125f2f0a;
  /* 125f2ef2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f2ef5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 125f2efb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 125f2f01 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2f08 je 0x125f2f11 */
  if (C.zf) goto L_125f2f11;
L_125f2f0a:;
  /* 125f2f0a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 125f2f0f jmp 0x125f2f79 */
  goto L_125f2f79;
L_125f2f11:;
  /* 125f2f11 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 125f2f17 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2f1d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 125f2f23 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f2f26 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2f2b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125f2f2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f2f31 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 125f2f33 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125f2f36 jmp 0x125f2a3a */
  goto L_125f2a3a;
L_125f2f3b:;
  /* 125f2f3b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 125f2f41 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 125f2f47 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2f49 jne 0x125f2f5c */
  if (!C.zf) goto L_125f2f5c;
  /* 125f2f4b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 125f2f51 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 125f2f57 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2f5a je 0x125f2f63 */
  if (C.zf) goto L_125f2f63;
L_125f2f5c:;
  /* 125f2f5c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 125f2f61 jmp 0x125f2f79 */
  goto L_125f2f79;
L_125f2f63:;
  /* 125f2f63 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 125f2f69 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2f6c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 125f2f72 jmp 0x125f29a3 */
  goto L_125f29a3;
L_125f2f77:;
  /* 125f2f77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125f2f79:;
  /* 125f2f79 mov esp, ebp */
  ESP = (EBP);
  /* 125f2f7b pop ebp */
  EBP = (pop32());
  /* 125f2f7c ret  */
  ESPCHK(0x125f2960u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f80 @ 0x125f2f80 (250 bytes, 92 insns) */
void f_125f2f80(void) {
  FTRACE(0x125f2f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f2f80 push ebp */
  push32((uint32_t)(EBP));
  /* 125f2f81 mov ebp, esp */
  EBP = (ESP);
  /* 125f2f83 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f2f86 push ebx */
  push32((uint32_t)(EBX));
  /* 125f2f87 push esi */
  push32((uint32_t)(ESI));
  /* 125f2f88 push edi */
  push32((uint32_t)(EDI));
  /* 125f2f89 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 125f2f8c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 125f2f8f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 125f2f92 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_125f2f95:;
  /* 125f2f95 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2f99 jne 0x125f2fb9 */
  if (!C.zf) goto L_125f2fb9;
  /* 125f2f9b push 0x12614934 */
  push32((uint32_t)(0x12614934u));
  /* 125f2fa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f2fa2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 125f2fa4 push 0x12614928 */
  push32((uint32_t)(0x12614928u));
  /* 125f2fa9 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f2fab call 0x125ec130 */
  push32(0x125f2fb0u); f_125ec130();
  /* 125f2fb0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2fb3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2fb6 jne 0x125f2fb9 */
  if (!C.zf) goto L_125f2fb9;
  /* 125f2fb8 int3  */
  x86_unimpl("int3 @ 0x125f2fb8");
L_125f2fb9:;
  /* 125f2fb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125f2fbb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f2fbd jne 0x125f2f95 */
  if (!C.zf) goto L_125f2f95;
L_125f2fbf:;
  /* 125f2fbf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2fc3 jne 0x125f2fe3 */
  if (!C.zf) goto L_125f2fe3;
  /* 125f2fc5 push 0x12614918 */
  push32((uint32_t)(0x12614918u));
  /* 125f2fca push 0 */
  push32((uint32_t)(0x0u));
  /* 125f2fcc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 125f2fce push 0x12614928 */
  push32((uint32_t)(0x12614928u));
  /* 125f2fd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f2fd5 call 0x125ec130 */
  push32(0x125f2fdau); f_125ec130();
  /* 125f2fda add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f2fdd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f2fe0 jne 0x125f2fe3 */
  if (!C.zf) goto L_125f2fe3;
  /* 125f2fe2 int3  */
  x86_unimpl("int3 @ 0x125f2fe2");
L_125f2fe3:;
  /* 125f2fe3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f2fe5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f2fe7 jne 0x125f2fbf */
  if (!C.zf) goto L_125f2fbf;
  /* 125f2fe9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f2fec mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 125f2ff3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f2ff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f2ff9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 125f2ffc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f2fff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f3002 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 125f3004 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f3007 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 125f300e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f3011 push ecx */
  push32((uint32_t)(ECX));
  /* 125f3012 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f3015 push edx */
  push32((uint32_t)(EDX));
  /* 125f3016 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f3019 push eax */
  push32((uint32_t)(EAX));
  /* 125f301a call 0x125f4000 */
  push32(0x125f301fu); f_125f4000();
  /* 125f301f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3022 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 125f3025 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f3028 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125f302b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f302e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f3031 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 125f3034 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f3037 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f303b jl 0x125f305f */
  if ((C.sf!=C.of)) goto L_125f305f;
  /* 125f303d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f3040 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125f3042 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 125f3045 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125f3047 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 125f304d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 125f3050 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f3053 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125f3055 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3058 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f305b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125f305d jmp 0x125f3070 */
  goto L_125f3070;
L_125f305f:;
  /* 125f305f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f3062 push edx */
  push32((uint32_t)(EDX));
  /* 125f3063 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f3065 call 0x125f3d80 */
  push32(0x125f306au); f_125f3d80();
  /* 125f306a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f306d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_125f3070:;
  /* 125f3070 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f3073 pop edi */
  EDI = (pop32());
  /* 125f3074 pop esi */
  ESI = (pop32());
  /* 125f3075 pop ebx */
  EBX = (pop32());
  /* 125f3076 mov esp, ebp */
  ESP = (EBP);
  /* 125f3078 pop ebp */
  EBP = (pop32());
  /* 125f3079 ret  */
  ESPCHK(0x125f2f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013080 @ 0x125f3080 (183 bytes, 58 insns) */
void f_125f3080(void) {
  FTRACE(0x125f3080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f3080 push ebp */
  push32((uint32_t)(EBP));
  /* 125f3081 mov ebp, esp */
  EBP = (ESP);
  /* 125f3083 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f3086 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f3089 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f308c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3091 ja 0x125f30aa */
  if ((!C.cf&&!C.zf)) goto L_125f30aa;
  /* 125f3093 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f3096 mov edx, dword ptr [0x12616c98] */
  EDX = (r32((uint32_t)(0x12616c98)));
  /* 125f309c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f309e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 125f30a2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 125f30a5 jmp 0x125f3133 */
  goto L_125f3133;
L_125f30aa:;
  /* 125f30aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f30ad sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 125f30b0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 125f30b6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 125f30bc mov edx, dword ptr [0x12616c98] */
  EDX = (r32((uint32_t)(0x12616c98)));
  /* 125f30c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f30c4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 125f30c8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 125f30cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f30cf je 0x125f30f3 */
  if (C.zf) goto L_125f30f3;
  /* 125f30d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f30d4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 125f30d7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 125f30dd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 125f30e0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 125f30e3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 125f30e6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 125f30ea mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 125f30f1 jmp 0x125f3104 */
  goto L_125f3104;
L_125f30f3:;
  /* 125f30f3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 125f30f6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 125f30f9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 125f30fd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_125f3104:;
  /* 125f3104 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f3106 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f3108 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f310a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 125f310d push ecx */
  push32((uint32_t)(ECX));
  /* 125f310e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3111 push edx */
  push32((uint32_t)(EDX));
  /* 125f3112 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 125f3115 push eax */
  push32((uint32_t)(EAX));
  /* 125f3116 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f3118 call 0x125f52a0 */
  push32(0x125f311du); f_125f52a0();
  /* 125f311d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3120 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f3122 jne 0x125f3128 */
  if (!C.zf) goto L_125f3128;
  /* 125f3124 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f3126 jmp 0x125f3133 */
  goto L_125f3133;
L_125f3128:;
  /* 125f3128 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f312b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f3130 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_125f3133:;
  /* 125f3133 mov esp, ebp */
  ESP = (EBP);
  /* 125f3135 pop ebp */
  EBP = (pop32());
  /* 125f3136 ret  */
  ESPCHK(0x125f3080u, _esp0);
  ESP += 4; return;
}

/* FUN_10013140 @ 0x125f3140 (836 bytes, 238 insns) */
void f_125f3140(void) {
  FTRACE(0x125f3140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f3140 push ebp */
  push32((uint32_t)(EBP));
  /* 125f3141 mov ebp, esp */
  EBP = (ESP);
  /* 125f3143 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f3146 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125f3148 call 0x125f0a70 */
  push32(0x125f314du); f_125f0a70();
  /* 125f314d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3150 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f3153 push eax */
  push32((uint32_t)(EAX));
  /* 125f3154 call 0x125f3490 */
  push32(0x125f3159u); f_125f3490();
  /* 125f3159 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f315c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125f315f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f3162 cmp ecx, dword ptr [0x1261a4c4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1261a4c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3168 jne 0x125f317b */
  if (!C.zf) goto L_125f317b;
  /* 125f316a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125f316c call 0x125f0b10 */
  push32(0x125f3171u); f_125f0b10();
  /* 125f3171 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3174 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f3176 jmp 0x125f3480 */
  goto L_125f3480;
L_125f317b:;
  /* 125f317b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f317f jne 0x125f319c */
  if (!C.zf) goto L_125f319c;
  /* 125f3181 call 0x125f3570 */
  push32(0x125f3186u); f_125f3570();
  /* 125f3186 call 0x125f35f0 */
  push32(0x125f318bu); f_125f35f0();
  /* 125f318b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125f318d call 0x125f0b10 */
  push32(0x125f3192u); f_125f0b10();
  /* 125f3192 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3195 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f3197 jmp 0x125f3480 */
  goto L_125f3480;
L_125f319c:;
  /* 125f319c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125f31a3 jmp 0x125f31ae */
  goto L_125f31ae;
L_125f31a5:;
  /* 125f31a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f31a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f31ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125f31ae:;
  /* 125f31ae cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f31b2 jae 0x125f32ff */
  if (!C.cf) goto L_125f32ff;
  /* 125f31b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f31bb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f31be mov ecx, dword ptr [eax + 0x12616eb8] */
  ECX = (r32((uint32_t)(EAX + 0x12616eb8)));
  /* 125f31c4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f31c7 jne 0x125f32fa */
  if (!C.zf) goto L_125f32fa;
  /* 125f31cd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 125f31d4 jmp 0x125f31df */
  goto L_125f31df;
L_125f31d6:;
  /* 125f31d6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f31d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f31dc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_125f31df:;
  /* 125f31df cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f31e6 jae 0x125f31f4 */
  if (!C.cf) goto L_125f31f4;
  /* 125f31e8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f31eb mov byte ptr [eax + 0x1261a660], 0 */
  w8((uint32_t)(EAX + 0x1261a660), (0x0u));
  /* 125f31f2 jmp 0x125f31d6 */
  goto L_125f31d6;
L_125f31f4:;
  /* 125f31f4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125f31fb jmp 0x125f3206 */
  goto L_125f3206;
L_125f31fd:;
  /* 125f31fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f3200 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3203 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_125f3206:;
  /* 125f3206 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f320a jae 0x125f3287 */
  if (!C.cf) goto L_125f3287;
  /* 125f320c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f320f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f3212 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f3215 lea ecx, [edx + eax*8 + 0x12616ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12616ec8));
  /* 125f321c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f321f jmp 0x125f322a */
  goto L_125f322a;
L_125f3221:;
  /* 125f3221 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3224 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3227 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_125f322a:;
  /* 125f322a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f322d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125f322f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125f3231 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f3233 je 0x125f3282 */
  if (C.zf) goto L_125f3282;
  /* 125f3235 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3238 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f323a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 125f323d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f323f je 0x125f3282 */
  if (C.zf) goto L_125f3282;
  /* 125f3241 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3244 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125f3246 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125f3248 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 125f324b jmp 0x125f3256 */
  goto L_125f3256;
L_125f324d:;
  /* 125f324d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f3250 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3253 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_125f3256:;
  /* 125f3256 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3259 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125f325b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 125f325e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3261 ja 0x125f3280 */
  if ((!C.cf&&!C.zf)) goto L_125f3280;
  /* 125f3263 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f3266 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f3269 mov dl, byte ptr [eax + 0x1261a661] */
  DL = (r8((uint32_t)(EAX + 0x1261a661)));
  /* 125f326f or dl, byte ptr [ecx + 0x12616eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12616eb0))); DL = (_r); fl_logic(_r,8); }
  /* 125f3275 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f3278 mov byte ptr [eax + 0x1261a661], dl */
  w8((uint32_t)(EAX + 0x1261a661), (DL));
  /* 125f327e jmp 0x125f324d */
  goto L_125f324d;
L_125f3280:;
  /* 125f3280 jmp 0x125f3221 */
  goto L_125f3221;
L_125f3282:;
  /* 125f3282 jmp 0x125f31fd */
  goto L_125f31fd;
L_125f3287:;
  /* 125f3287 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f328a mov dword ptr [0x1261a4c4], ecx */
  w32((uint32_t)(0x1261a4c4), (ECX));
  /* 125f3290 mov dword ptr [0x1261a54c], 1 */
  w32((uint32_t)(0x1261a54c), (0x1u));
  /* 125f329a mov edx, dword ptr [0x1261a4c4] */
  EDX = (r32((uint32_t)(0x1261a4c4)));
  /* 125f32a0 push edx */
  push32((uint32_t)(EDX));
  /* 125f32a1 call 0x125f34f0 */
  push32(0x125f32a6u); f_125f34f0();
  /* 125f32a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f32a9 mov dword ptr [0x1261a764], eax */
  w32((uint32_t)(0x1261a764), (EAX));
  /* 125f32ae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125f32b5 jmp 0x125f32c0 */
  goto L_125f32c0;
L_125f32b7:;
  /* 125f32b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f32ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f32bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_125f32c0:;
  /* 125f32c0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f32c4 jae 0x125f32e4 */
  if (!C.cf) goto L_125f32e4;
  /* 125f32c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f32c9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f32cc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f32cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f32d2 mov cx, word ptr [ecx + eax*2 + 0x12616ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12616ebc)));
  /* 125f32da mov word ptr [edx*2 + 0x1261a540], cx */
  w16((uint32_t)(EDX*2 + 0x1261a540), (CX));
  /* 125f32e2 jmp 0x125f32b7 */
  goto L_125f32b7;
L_125f32e4:;
  /* 125f32e4 call 0x125f35f0 */
  push32(0x125f32e9u); f_125f35f0();
  /* 125f32e9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125f32eb call 0x125f0b10 */
  push32(0x125f32f0u); f_125f0b10();
  /* 125f32f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f32f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f32f5 jmp 0x125f3480 */
  goto L_125f3480;
L_125f32fa:;
  /* 125f32fa jmp 0x125f31a5 */
  goto L_125f31a5;
L_125f32ff:;
  /* 125f32ff lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 125f3302 push edx */
  push32((uint32_t)(EDX));
  /* 125f3303 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f3306 push eax */
  push32((uint32_t)(EAX));
  /* 125f3307 call dword ptr [0x1261b34c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b34c))), 0x125f330du);
  /* 125f330d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3310 jne 0x125f3452 */
  if (!C.zf) goto L_125f3452;
  /* 125f3316 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 125f331d jmp 0x125f3328 */
  goto L_125f3328;
L_125f331f:;
  /* 125f331f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f3322 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3325 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_125f3328:;
  /* 125f3328 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f332f jae 0x125f333d */
  if (!C.cf) goto L_125f333d;
  /* 125f3331 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f3334 mov byte ptr [edx + 0x1261a660], 0 */
  w8((uint32_t)(EDX + 0x1261a660), (0x0u));
  /* 125f333b jmp 0x125f331f */
  goto L_125f331f;
L_125f333d:;
  /* 125f333d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f3340 mov dword ptr [0x1261a4c4], eax */
  w32((uint32_t)(0x1261a4c4), (EAX));
  /* 125f3345 mov dword ptr [0x1261a764], 0 */
  w32((uint32_t)(0x1261a764), (0x0u));
  /* 125f334f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3353 jbe 0x125f340e */
  if ((C.cf||C.zf)) goto L_125f340e;
  /* 125f3359 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 125f335c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 125f335f jmp 0x125f336a */
  goto L_125f336a;
L_125f3361:;
  /* 125f3361 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f3364 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3367 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_125f336a:;
  /* 125f336a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f336d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125f336f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125f3371 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f3373 je 0x125f33bc */
  if (C.zf) goto L_125f33bc;
  /* 125f3375 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f3378 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f337a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 125f337d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f337f je 0x125f33bc */
  if (C.zf) goto L_125f33bc;
  /* 125f3381 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f3384 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125f3386 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125f3388 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 125f338b jmp 0x125f3396 */
  goto L_125f3396;
L_125f338d:;
  /* 125f338d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f3390 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3393 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_125f3396:;
  /* 125f3396 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f3399 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125f339b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 125f339e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f33a1 ja 0x125f33ba */
  if ((!C.cf&&!C.zf)) goto L_125f33ba;
  /* 125f33a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f33a6 mov cl, byte ptr [eax + 0x1261a661] */
  CL = (r8((uint32_t)(EAX + 0x1261a661)));
  /* 125f33ac or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 125f33af mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f33b2 mov byte ptr [edx + 0x1261a661], cl */
  w8((uint32_t)(EDX + 0x1261a661), (CL));
  /* 125f33b8 jmp 0x125f338d */
  goto L_125f338d;
L_125f33ba:;
  /* 125f33ba jmp 0x125f3361 */
  goto L_125f3361;
L_125f33bc:;
  /* 125f33bc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 125f33c3 jmp 0x125f33ce */
  goto L_125f33ce;
L_125f33c5:;
  /* 125f33c5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f33c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f33cb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_125f33ce:;
  /* 125f33ce cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f33d5 jae 0x125f33ee */
  if (!C.cf) goto L_125f33ee;
  /* 125f33d7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f33da mov dl, byte ptr [ecx + 0x1261a661] */
  DL = (r8((uint32_t)(ECX + 0x1261a661)));
  /* 125f33e0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 125f33e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f33e6 mov byte ptr [eax + 0x1261a661], dl */
  w8((uint32_t)(EAX + 0x1261a661), (DL));
  /* 125f33ec jmp 0x125f33c5 */
  goto L_125f33c5;
L_125f33ee:;
  /* 125f33ee mov ecx, dword ptr [0x1261a4c4] */
  ECX = (r32((uint32_t)(0x1261a4c4)));
  /* 125f33f4 push ecx */
  push32((uint32_t)(ECX));
  /* 125f33f5 call 0x125f34f0 */
  push32(0x125f33fau); f_125f34f0();
  /* 125f33fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f33fd mov dword ptr [0x1261a764], eax */
  w32((uint32_t)(0x1261a764), (EAX));
  /* 125f3402 mov dword ptr [0x1261a54c], 1 */
  w32((uint32_t)(0x1261a54c), (0x1u));
  /* 125f340c jmp 0x125f3418 */
  goto L_125f3418;
L_125f340e:;
  /* 125f340e mov dword ptr [0x1261a54c], 0 */
  w32((uint32_t)(0x1261a54c), (0x0u));
L_125f3418:;
  /* 125f3418 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125f341f jmp 0x125f342a */
  goto L_125f342a;
L_125f3421:;
  /* 125f3421 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f3424 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3427 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_125f342a:;
  /* 125f342a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f342e jae 0x125f343f */
  if (!C.cf) goto L_125f343f;
  /* 125f3430 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f3433 mov word ptr [eax*2 + 0x1261a540], 0 */
  w16((uint32_t)(EAX*2 + 0x1261a540), (0x0u));
  /* 125f343d jmp 0x125f3421 */
  goto L_125f3421;
L_125f343f:;
  /* 125f343f call 0x125f35f0 */
  push32(0x125f3444u); f_125f35f0();
  /* 125f3444 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125f3446 call 0x125f0b10 */
  push32(0x125f344bu); f_125f0b10();
  /* 125f344b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f344e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f3450 jmp 0x125f3480 */
  goto L_125f3480;
L_125f3452:;
  /* 125f3452 cmp dword ptr [0x12618fe0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12618fe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3459 je 0x125f3473 */
  if (C.zf) goto L_125f3473;
  /* 125f345b call 0x125f3570 */
  push32(0x125f3460u); f_125f3570();
  /* 125f3460 call 0x125f35f0 */
  push32(0x125f3465u); f_125f35f0();
  /* 125f3465 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125f3467 call 0x125f0b10 */
  push32(0x125f346cu); f_125f0b10();
  /* 125f346c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f346f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f3471 jmp 0x125f3480 */
  goto L_125f3480;
L_125f3473:;
  /* 125f3473 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125f3475 call 0x125f0b10 */
  push32(0x125f347au); f_125f0b10();
  /* 125f347a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f347d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_125f3480:;
  /* 125f3480 mov esp, ebp */
  ESP = (EBP);
  /* 125f3482 pop ebp */
  EBP = (pop32());
  /* 125f3483 ret  */
  ESPCHK(0x125f3140u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x125f3490 (89 bytes, 21 insns) */
void f_125f3490(void) {
  FTRACE(0x125f3490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f3490 push ebp */
  push32((uint32_t)(EBP));
  /* 125f3491 mov ebp, esp */
  EBP = (ESP);
  /* 125f3493 mov dword ptr [0x12618fe0], 0 */
  w32((uint32_t)(0x12618fe0), (0x0u));
  /* 125f349d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f34a1 jne 0x125f34b5 */
  if (!C.zf) goto L_125f34b5;
  /* 125f34a3 mov dword ptr [0x12618fe0], 1 */
  w32((uint32_t)(0x12618fe0), (0x1u));
  /* 125f34ad call dword ptr [0x1261b344] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b344))), 0x125f34b3u);
  /* 125f34b3 jmp 0x125f34e7 */
  goto L_125f34e7;
L_125f34b5:;
  /* 125f34b5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f34b9 jne 0x125f34cd */
  if (!C.zf) goto L_125f34cd;
  /* 125f34bb mov dword ptr [0x12618fe0], 1 */
  w32((uint32_t)(0x12618fe0), (0x1u));
  /* 125f34c5 call dword ptr [0x1261b348] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b348))), 0x125f34cbu);
  /* 125f34cb jmp 0x125f34e7 */
  goto L_125f34e7;
L_125f34cd:;
  /* 125f34cd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f34d1 jne 0x125f34e4 */
  if (!C.zf) goto L_125f34e4;
  /* 125f34d3 mov dword ptr [0x12618fe0], 1 */
  w32((uint32_t)(0x12618fe0), (0x1u));
  /* 125f34dd mov eax, dword ptr [0x12619000] */
  EAX = (r32((uint32_t)(0x12619000)));
  /* 125f34e2 jmp 0x125f34e7 */
  goto L_125f34e7;
L_125f34e4:;
  /* 125f34e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_125f34e7:;
  /* 125f34e7 pop ebp */
  EBP = (pop32());
  /* 125f34e8 ret  */
  ESPCHK(0x125f3490u, _esp0);
  ESP += 4; return;
}

/* FUN_100134f0 @ 0x125f34f0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_125f34f0(void) {
  FTRACE(0x125f34f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f34f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f34f1 mov ebp, esp */
  EBP = (ESP);
  /* 125f34f3 push ecx */
  push32((uint32_t)(ECX));
  /* 125f34f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f34f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f34fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f34fd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f3503 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125f3506 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f350a ja 0x125f353a */
  if ((!C.cf&&!C.zf)) goto L_125f353a;
  /* 125f350c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f350f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125f3511 mov dl, byte ptr [eax + 0x125f3554] */
  DL = (r8((uint32_t)(EAX + 0x125f3554)));
  /* 125f3517 jmp dword ptr [edx*4 + 0x125f3540] */
  switch (EDX) {
    case 0: goto L_125f351e;
    case 1: goto L_125f3525;
    case 2: goto L_125f352c;
    case 3: goto L_125f3533;
    case 4: goto L_125f353a;
    default: x86_unimpl("switch@0x125f3517 out of table"); return;
  }
L_125f351e:;
  /* 125f351e mov eax, 0x411 */
  EAX = (0x411u);
  /* 125f3523 jmp 0x125f353c */
  goto L_125f353c;
L_125f3525:;
  /* 125f3525 mov eax, 0x804 */
  EAX = (0x804u);
  /* 125f352a jmp 0x125f353c */
  goto L_125f353c;
L_125f352c:;
  /* 125f352c mov eax, 0x412 */
  EAX = (0x412u);
  /* 125f3531 jmp 0x125f353c */
  goto L_125f353c;
L_125f3533:;
  /* 125f3533 mov eax, 0x404 */
  EAX = (0x404u);
  /* 125f3538 jmp 0x125f353c */
  goto L_125f353c;
L_125f353a:;
  /* 125f353a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125f353c:;
  /* 125f353c mov esp, ebp */
  ESP = (EBP);
  /* 125f353e pop ebp */
  EBP = (pop32());
  /* 125f353f ret  */
  ESPCHK(0x125f34f0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x125f3570 (116 bytes, 29 insns) */
void f_125f3570(void) {
  FTRACE(0x125f3570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f3570 push ebp */
  push32((uint32_t)(EBP));
  /* 125f3571 mov ebp, esp */
  EBP = (ESP);
  /* 125f3573 push ecx */
  push32((uint32_t)(ECX));
  /* 125f3574 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125f357b jmp 0x125f3586 */
  goto L_125f3586;
L_125f357d:;
  /* 125f357d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f3580 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3583 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125f3586:;
  /* 125f3586 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f358d jge 0x125f359b */
  if ((C.sf==C.of)) goto L_125f359b;
  /* 125f358f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f3592 mov byte ptr [ecx + 0x1261a660], 0 */
  w8((uint32_t)(ECX + 0x1261a660), (0x0u));
  /* 125f3599 jmp 0x125f357d */
  goto L_125f357d;
L_125f359b:;
  /* 125f359b mov dword ptr [0x1261a4c4], 0 */
  w32((uint32_t)(0x1261a4c4), (0x0u));
  /* 125f35a5 mov dword ptr [0x1261a54c], 0 */
  w32((uint32_t)(0x1261a54c), (0x0u));
  /* 125f35af mov dword ptr [0x1261a764], 0 */
  w32((uint32_t)(0x1261a764), (0x0u));
  /* 125f35b9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125f35c0 jmp 0x125f35cb */
  goto L_125f35cb;
L_125f35c2:;
  /* 125f35c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f35c5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f35c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125f35cb:;
  /* 125f35cb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f35cf jge 0x125f35e0 */
  if ((C.sf==C.of)) goto L_125f35e0;
  /* 125f35d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f35d4 mov word ptr [eax*2 + 0x1261a540], 0 */
  w16((uint32_t)(EAX*2 + 0x1261a540), (0x0u));
  /* 125f35de jmp 0x125f35c2 */
  goto L_125f35c2;
L_125f35e0:;
  /* 125f35e0 mov esp, ebp */
  ESP = (EBP);
  /* 125f35e2 pop ebp */
  EBP = (pop32());
  /* 125f35e3 ret  */
  ESPCHK(0x125f3570u, _esp0);
  ESP += 4; return;
}

/* FUN_100135f0 @ 0x125f35f0 (770 bytes, 175 insns) */
void f_125f35f0(void) {
  FTRACE(0x125f35f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f35f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f35f1 mov ebp, esp */
  EBP = (ESP);
  /* 125f35f3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f35f9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 125f35ff push eax */
  push32((uint32_t)(EAX));
  /* 125f3600 mov ecx, dword ptr [0x1261a4c4] */
  ECX = (r32((uint32_t)(0x1261a4c4)));
  /* 125f3606 push ecx */
  push32((uint32_t)(ECX));
  /* 125f3607 call dword ptr [0x1261b34c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b34c))), 0x125f360du);
  /* 125f360d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3610 jne 0x125f3829 */
  if (!C.zf) goto L_125f3829;
  /* 125f3616 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 125f3620 jmp 0x125f3631 */
  goto L_125f3631;
L_125f3622:;
  /* 125f3622 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f3628 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f362b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_125f3631:;
  /* 125f3631 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f363b jae 0x125f3652 */
  if (!C.cf) goto L_125f3652;
  /* 125f363d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f3643 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 125f3649 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 125f3650 jmp 0x125f3622 */
  goto L_125f3622;
L_125f3652:;
  /* 125f3652 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 125f3659 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 125f365f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125f3662 jmp 0x125f366d */
  goto L_125f366d;
L_125f3664:;
  /* 125f3664 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f3667 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f366a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125f366d:;
  /* 125f366d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f3670 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125f3672 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125f3674 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f3676 je 0x125f36b8 */
  if (C.zf) goto L_125f36b8;
  /* 125f3678 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f367b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125f367d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125f367f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 125f3685 jmp 0x125f3696 */
  goto L_125f3696;
L_125f3687:;
  /* 125f3687 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f368d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3690 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_125f3696:;
  /* 125f3696 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f3699 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125f369b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 125f369e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f36a4 ja 0x125f36b6 */
  if ((!C.cf&&!C.zf)) goto L_125f36b6;
  /* 125f36a6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f36ac mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 125f36b4 jmp 0x125f3687 */
  goto L_125f3687;
L_125f36b6:;
  /* 125f36b6 jmp 0x125f3664 */
  goto L_125f3664;
L_125f36b8:;
  /* 125f36b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f36ba mov eax, dword ptr [0x1261a764] */
  EAX = (r32((uint32_t)(0x1261a764)));
  /* 125f36bf push eax */
  push32((uint32_t)(EAX));
  /* 125f36c0 mov ecx, dword ptr [0x1261a4c4] */
  ECX = (r32((uint32_t)(0x1261a4c4)));
  /* 125f36c6 push ecx */
  push32((uint32_t)(ECX));
  /* 125f36c7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 125f36cd push edx */
  push32((uint32_t)(EDX));
  /* 125f36ce push 0x100 */
  push32((uint32_t)(0x100u));
  /* 125f36d3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 125f36d9 push eax */
  push32((uint32_t)(EAX));
  /* 125f36da push 1 */
  push32((uint32_t)(0x1u));
  /* 125f36dc call 0x125f52a0 */
  push32(0x125f36e1u); f_125f52a0();
  /* 125f36e1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f36e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f36e6 mov ecx, dword ptr [0x1261a4c4] */
  ECX = (r32((uint32_t)(0x1261a4c4)));
  /* 125f36ec push ecx */
  push32((uint32_t)(ECX));
  /* 125f36ed push 0x100 */
  push32((uint32_t)(0x100u));
  /* 125f36f2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 125f36f8 push edx */
  push32((uint32_t)(EDX));
  /* 125f36f9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 125f36fe lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 125f3704 push eax */
  push32((uint32_t)(EAX));
  /* 125f3705 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 125f370a mov ecx, dword ptr [0x1261a764] */
  ECX = (r32((uint32_t)(0x1261a764)));
  /* 125f3710 push ecx */
  push32((uint32_t)(ECX));
  /* 125f3711 call 0x125f5460 */
  push32(0x125f3716u); f_125f5460();
  /* 125f3716 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3719 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f371b mov edx, dword ptr [0x1261a4c4] */
  EDX = (r32((uint32_t)(0x1261a4c4)));
  /* 125f3721 push edx */
  push32((uint32_t)(EDX));
  /* 125f3722 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 125f3727 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 125f372d push eax */
  push32((uint32_t)(EAX));
  /* 125f372e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 125f3733 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 125f3739 push ecx */
  push32((uint32_t)(ECX));
  /* 125f373a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 125f373f mov edx, dword ptr [0x1261a764] */
  EDX = (r32((uint32_t)(0x1261a764)));
  /* 125f3745 push edx */
  push32((uint32_t)(EDX));
  /* 125f3746 call 0x125f5460 */
  push32(0x125f374bu); f_125f5460();
  /* 125f374b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f374e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 125f3758 jmp 0x125f3769 */
  goto L_125f3769;
L_125f375a:;
  /* 125f375a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f3760 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3763 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_125f3769:;
  /* 125f3769 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3773 jae 0x125f3824 */
  if (!C.cf) goto L_125f3824;
  /* 125f3779 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f377f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125f3781 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 125f3789 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 125f378c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f378e je 0x125f37c6 */
  if (C.zf) goto L_125f37c6;
  /* 125f3790 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f3796 mov cl, byte ptr [eax + 0x1261a661] */
  CL = (r8((uint32_t)(EAX + 0x1261a661)));
  /* 125f379c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 125f379f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f37a5 mov byte ptr [edx + 0x1261a661], cl */
  w8((uint32_t)(EDX + 0x1261a661), (CL));
  /* 125f37ab mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f37b1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f37b7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 125f37be mov byte ptr [eax + 0x1261a560], dl */
  w8((uint32_t)(EAX + 0x1261a560), (DL));
  /* 125f37c4 jmp 0x125f381f */
  goto L_125f381f;
L_125f37c6:;
  /* 125f37c6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f37cc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125f37ce mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 125f37d6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 125f37d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f37db je 0x125f3812 */
  if (C.zf) goto L_125f3812;
  /* 125f37dd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f37e3 mov al, byte ptr [edx + 0x1261a661] */
  AL = (r8((uint32_t)(EDX + 0x1261a661)));
  /* 125f37e9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 125f37eb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f37f1 mov byte ptr [ecx + 0x1261a661], al */
  w8((uint32_t)(ECX + 0x1261a661), (AL));
  /* 125f37f7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f37fd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f3803 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 125f380a mov byte ptr [edx + 0x1261a560], cl */
  w8((uint32_t)(EDX + 0x1261a560), (CL));
  /* 125f3810 jmp 0x125f381f */
  goto L_125f381f;
L_125f3812:;
  /* 125f3812 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f3818 mov byte ptr [edx + 0x1261a560], 0 */
  w8((uint32_t)(EDX + 0x1261a560), (0x0u));
L_125f381f:;
  /* 125f381f jmp 0x125f375a */
  goto L_125f375a;
L_125f3824:;
  /* 125f3824 jmp 0x125f38ee */
  goto L_125f38ee;
L_125f3829:;
  /* 125f3829 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 125f3833 jmp 0x125f3844 */
  goto L_125f3844;
L_125f3835:;
  /* 125f3835 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f383b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f383e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_125f3844:;
  /* 125f3844 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f384e jae 0x125f38ee */
  if (!C.cf) goto L_125f38ee;
  /* 125f3854 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f385b jb 0x125f3898 */
  if (C.cf) goto L_125f3898;
  /* 125f385d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3864 ja 0x125f3898 */
  if ((!C.cf&&!C.zf)) goto L_125f3898;
  /* 125f3866 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f386c mov dl, byte ptr [ecx + 0x1261a661] */
  DL = (r8((uint32_t)(ECX + 0x1261a661)));
  /* 125f3872 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 125f3875 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f387b mov byte ptr [eax + 0x1261a661], dl */
  w8((uint32_t)(EAX + 0x1261a661), (DL));
  /* 125f3881 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f3887 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f388a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f3890 mov byte ptr [edx + 0x1261a560], cl */
  w8((uint32_t)(EDX + 0x1261a560), (CL));
  /* 125f3896 jmp 0x125f38e9 */
  goto L_125f38e9;
L_125f3898:;
  /* 125f3898 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f389f jb 0x125f38dc */
  if (C.cf) goto L_125f38dc;
  /* 125f38a1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f38a8 ja 0x125f38dc */
  if ((!C.cf&&!C.zf)) goto L_125f38dc;
  /* 125f38aa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f38b0 mov cl, byte ptr [eax + 0x1261a661] */
  CL = (r8((uint32_t)(EAX + 0x1261a661)));
  /* 125f38b6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 125f38b9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f38bf mov byte ptr [edx + 0x1261a661], cl */
  w8((uint32_t)(EDX + 0x1261a661), (CL));
  /* 125f38c5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f38cb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f38ce mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f38d4 mov byte ptr [ecx + 0x1261a560], al */
  w8((uint32_t)(ECX + 0x1261a560), (AL));
  /* 125f38da jmp 0x125f38e9 */
  goto L_125f38e9;
L_125f38dc:;
  /* 125f38dc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 125f38e2 mov byte ptr [edx + 0x1261a560], 0 */
  w8((uint32_t)(EDX + 0x1261a560), (0x0u));
L_125f38e9:;
  /* 125f38e9 jmp 0x125f3835 */
  goto L_125f3835;
L_125f38ee:;
  /* 125f38ee mov esp, ebp */
  ESP = (EBP);
  /* 125f38f0 pop ebp */
  EBP = (pop32());
  /* 125f38f1 ret  */
  ESPCHK(0x125f35f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013900 @ 0x125f3900 (23 bytes, 9 insns) */
void f_125f3900(void) {
  FTRACE(0x125f3900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f3900 push ebp */
  push32((uint32_t)(EBP));
  /* 125f3901 mov ebp, esp */
  EBP = (ESP);
  /* 125f3903 cmp dword ptr [0x1261a54c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1261a54c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f390a je 0x125f3913 */
  if (C.zf) goto L_125f3913;
  /* 125f390c mov eax, dword ptr [0x1261a4c4] */
  EAX = (r32((uint32_t)(0x1261a4c4)));
  /* 125f3911 jmp 0x125f3915 */
  goto L_125f3915;
L_125f3913:;
  /* 125f3913 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125f3915:;
  /* 125f3915 pop ebp */
  EBP = (pop32());
  /* 125f3916 ret  */
  ESPCHK(0x125f3900u, _esp0);
  ESP += 4; return;
}

/* FUN_10013920 @ 0x125f3920 (34 bytes, 10 insns) */
void f_125f3920(void) {
  FTRACE(0x125f3920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f3920 push ebp */
  push32((uint32_t)(EBP));
  /* 125f3921 mov ebp, esp */
  EBP = (ESP);
  /* 125f3923 cmp dword ptr [0x1261a910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1261a910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f392a jne 0x125f3940 */
  if (!C.zf) goto L_125f3940;
  /* 125f392c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 125f392e call 0x125f3140 */
  push32(0x125f3933u); f_125f3140();
  /* 125f3933 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3936 mov dword ptr [0x1261a910], 1 */
  w32((uint32_t)(0x1261a910), (0x1u));
L_125f3940:;
  /* 125f3940 pop ebp */
  EBP = (pop32());
  /* 125f3941 ret  */
  ESPCHK(0x125f3920u, _esp0);
  ESP += 4; return;
}

/* FUN_10013950 @ 0x125f3950 (664 bytes, 265 insns) [15 switch table(s)] */
void f_125f3950(void) {
  FTRACE(0x125f3950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f3950 push ebp */
  push32((uint32_t)(EBP));
  /* 125f3951 mov ebp, esp */
  EBP = (ESP);
  /* 125f3953 push edi */
  push32((uint32_t)(EDI));
  /* 125f3954 push esi */
  push32((uint32_t)(ESI));
  /* 125f3955 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 125f3958 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f395b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 125f395e mov eax, ecx */
  EAX = (ECX);
  /* 125f3960 mov edx, ecx */
  EDX = (ECX);
  /* 125f3962 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3964 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3966 jbe 0x125f3970 */
  if ((C.cf||C.zf)) goto L_125f3970;
  /* 125f3968 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f396a jb 0x125f3ae8 */
  if (C.cf) goto L_125f3ae8;
L_125f3970:;
  /* 125f3970 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 125f3976 jne 0x125f398c */
  if (!C.zf) goto L_125f398c;
  /* 125f3978 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125f397b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 125f397e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3981 jb 0x125f39ac */
  if (C.cf) goto L_125f39ac;
  /* 125f3983 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125f3985 jmp dword ptr [edx*4 + 0x125f3a98] */
  switch (EDX) {
    case 0: goto L_125f3aa8;
    case 1: goto L_125f3ab0;
    case 2: goto L_125f3abc;
    case 3: goto L_125f3ad0;
    default: x86_unimpl("switch@0x125f3985 out of table"); return;
  }
L_125f398c:;
  /* 125f398c mov eax, edi */
  EAX = (EDI);
  /* 125f398e mov edx, 3 */
  EDX = (0x3u);
  /* 125f3993 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f3996 jb 0x125f39a4 */
  if (C.cf) goto L_125f39a4;
  /* 125f3998 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 125f399b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f399d jmp dword ptr [eax*4 + 0x125f39b0] */
  switch (EAX) {
    case 1: goto L_125f39c0;
    case 2: goto L_125f39ec;
    case 3: goto L_125f3a10;
    default: x86_unimpl("switch@0x125f399d out of table"); return;
  }
L_125f39a4:;
  /* 125f39a4 jmp dword ptr [ecx*4 + 0x125f3aa8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x125f3aa8)))); return;
  /* 125f39ab nop  */
  /* nop */
L_125f39ac:;
  /* 125f39ac jmp dword ptr [ecx*4 + 0x125f3a2c] */
  switch (ECX) {
    case 0: goto L_125f3a8f;
    case 1: goto L_125f3a7c;
    case 2: goto L_125f3a74;
    case 3: goto L_125f3a6c;
    case 4: goto L_125f3a64;
    case 5: goto L_125f3a5c;
    case 6: goto L_125f3a54;
    case 7: goto L_125f3a4c;
    default: x86_unimpl("switch@0x125f39ac out of table"); return;
  }
  /* 125f39b3 nop  */
  /* nop */
L_125f39c0:;
  /* 125f39c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125f39c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125f39c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125f39c6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125f39c9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125f39cc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125f39cf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125f39d2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125f39d5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125f39d8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 125f39db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f39de jb 0x125f39ac */
  if (C.cf) goto L_125f39ac;
  /* 125f39e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125f39e2 jmp dword ptr [edx*4 + 0x125f3a98] */
  switch (EDX) {
    case 0: goto L_125f3aa8;
    case 1: goto L_125f3ab0;
    case 2: goto L_125f3abc;
    case 3: goto L_125f3ad0;
    default: x86_unimpl("switch@0x125f39e2 out of table"); return;
  }
  /* 125f39e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125f39ec:;
  /* 125f39ec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125f39ee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125f39f0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125f39f2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125f39f5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125f39f8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125f39fb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125f39fe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3a01 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3a04 jb 0x125f39ac */
  if (C.cf) goto L_125f39ac;
  /* 125f3a06 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125f3a08 jmp dword ptr [edx*4 + 0x125f3a98] */
  switch (EDX) {
    case 0: goto L_125f3aa8;
    case 1: goto L_125f3ab0;
    case 2: goto L_125f3abc;
    case 3: goto L_125f3ad0;
    default: x86_unimpl("switch@0x125f3a08 out of table"); return;
  }
  /* 125f3a0f nop  */
  /* nop */
L_125f3a10:;
  /* 125f3a10 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125f3a12 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125f3a14 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125f3a16 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 125f3a17 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125f3a1a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 125f3a1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3a1e jb 0x125f39ac */
  if (C.cf) goto L_125f39ac;
  /* 125f3a20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125f3a22 jmp dword ptr [edx*4 + 0x125f3a98] */
  switch (EDX) {
    case 0: goto L_125f3aa8;
    case 1: goto L_125f3ab0;
    case 2: goto L_125f3abc;
    case 3: goto L_125f3ad0;
    default: x86_unimpl("switch@0x125f3a22 out of table"); return;
  }
  /* 125f3a29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125f3a4c:;
  /* 125f3a4c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 125f3a50 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_125f3a54:;
  /* 125f3a54 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 125f3a58 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_125f3a5c:;
  /* 125f3a5c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 125f3a60 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_125f3a64:;
  /* 125f3a64 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 125f3a68 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_125f3a6c:;
  /* 125f3a6c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 125f3a70 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_125f3a74:;
  /* 125f3a74 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 125f3a78 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_125f3a7c:;
  /* 125f3a7c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 125f3a80 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 125f3a84 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 125f3a8b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3a8d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_125f3a8f:;
  /* 125f3a8f jmp dword ptr [edx*4 + 0x125f3a98] */
  switch (EDX) {
    case 0: goto L_125f3aa8;
    case 1: goto L_125f3ab0;
    case 2: goto L_125f3abc;
    case 3: goto L_125f3ad0;
    default: x86_unimpl("switch@0x125f3a8f out of table"); return;
  }
  /* 125f3a96 mov edi, edi */
  EDI = (EDI);
L_125f3aa8:;
  /* 125f3aa8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f3aab pop esi */
  ESI = (pop32());
  /* 125f3aac pop edi */
  EDI = (pop32());
  /* 125f3aad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125f3aae ret  */
  ESPCHK(0x125f3950u, _esp0);
  ESP += 4; return;
  /* 125f3aaf nop  */
  /* nop */
L_125f3ab0:;
  /* 125f3ab0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125f3ab2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125f3ab4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f3ab7 pop esi */
  ESI = (pop32());
  /* 125f3ab8 pop edi */
  EDI = (pop32());
  /* 125f3ab9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125f3aba ret  */
  ESPCHK(0x125f3950u, _esp0);
  ESP += 4; return;
  /* 125f3abb nop  */
  /* nop */
L_125f3abc:;
  /* 125f3abc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125f3abe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125f3ac0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125f3ac3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125f3ac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f3ac9 pop esi */
  ESI = (pop32());
  /* 125f3aca pop edi */
  EDI = (pop32());
  /* 125f3acb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125f3acc ret  */
  ESPCHK(0x125f3950u, _esp0);
  ESP += 4; return;
  /* 125f3acd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125f3ad0:;
  /* 125f3ad0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125f3ad2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125f3ad4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125f3ad7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125f3ada mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125f3add mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125f3ae0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f3ae3 pop esi */
  ESI = (pop32());
  /* 125f3ae4 pop edi */
  EDI = (pop32());
  /* 125f3ae5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125f3ae6 ret  */
  ESPCHK(0x125f3950u, _esp0);
  ESP += 4; return;
  /* 125f3ae7 nop  */
  /* nop */
L_125f3ae8:;
  /* 125f3ae8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 125f3aec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 125f3af0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 125f3af6 jne 0x125f3b1c */
  if (!C.zf) goto L_125f3b1c;
  /* 125f3af8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125f3afb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 125f3afe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3b01 jb 0x125f3b10 */
  if (C.cf) goto L_125f3b10;
  /* 125f3b03 std  */
  C.df=1;
  /* 125f3b04 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125f3b06 cld  */
  C.df=0;
  /* 125f3b07 jmp dword ptr [edx*4 + 0x125f3c30] */
  switch (EDX) {
    case 0: goto L_125f3c40;
    case 1: goto L_125f3c48;
    case 2: goto L_125f3c58;
    case 3: goto L_125f3c6c;
    default: x86_unimpl("switch@0x125f3b07 out of table"); return;
  }
  /* 125f3b0e mov edi, edi */
  EDI = (EDI);
L_125f3b10:;
  /* 125f3b10 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 125f3b12 jmp dword ptr [ecx*4 + 0x125f3be0] */
  switch (ECX) {
    case 0: goto L_125f3c27;
    default: x86_unimpl("switch@0x125f3b12 out of table"); return;
  }
  /* 125f3b19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125f3b1c:;
  /* 125f3b1c mov eax, edi */
  EAX = (EDI);
  /* 125f3b1e mov edx, 3 */
  EDX = (0x3u);
  /* 125f3b23 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3b26 jb 0x125f3b34 */
  if (C.cf) goto L_125f3b34;
  /* 125f3b28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 125f3b2b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f3b2d jmp dword ptr [eax*4 + 0x125f3b38] */
  switch (EAX) {
    case 1: goto L_125f3b48;
    case 2: goto L_125f3b68;
    case 3: goto L_125f3b90;
    default: x86_unimpl("switch@0x125f3b2d out of table"); return;
  }
L_125f3b34:;
  /* 125f3b34 jmp dword ptr [ecx*4 + 0x125f3c30] */
  switch (ECX) {
    case 0: goto L_125f3c40;
    case 1: goto L_125f3c48;
    case 2: goto L_125f3c58;
    case 3: goto L_125f3c6c;
    default: x86_unimpl("switch@0x125f3b34 out of table"); return;
  }
  /* 125f3b3b nop  */
  /* nop */
L_125f3b48:;
  /* 125f3b48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125f3b4b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125f3b4d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125f3b50 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 125f3b51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125f3b54 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 125f3b55 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3b58 jb 0x125f3b10 */
  if (C.cf) goto L_125f3b10;
  /* 125f3b5a std  */
  C.df=1;
  /* 125f3b5b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125f3b5d cld  */
  C.df=0;
  /* 125f3b5e jmp dword ptr [edx*4 + 0x125f3c30] */
  switch (EDX) {
    case 0: goto L_125f3c40;
    case 1: goto L_125f3c48;
    case 2: goto L_125f3c58;
    case 3: goto L_125f3c6c;
    default: x86_unimpl("switch@0x125f3b5e out of table"); return;
  }
  /* 125f3b65 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125f3b68:;
  /* 125f3b68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125f3b6b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125f3b6d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125f3b70 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125f3b73 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125f3b76 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125f3b79 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f3b7c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f3b7f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3b82 jb 0x125f3b10 */
  if (C.cf) goto L_125f3b10;
  /* 125f3b84 std  */
  C.df=1;
  /* 125f3b85 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125f3b87 cld  */
  C.df=0;
  /* 125f3b88 jmp dword ptr [edx*4 + 0x125f3c30] */
  switch (EDX) {
    case 0: goto L_125f3c40;
    case 1: goto L_125f3c48;
    case 2: goto L_125f3c58;
    case 3: goto L_125f3c6c;
    default: x86_unimpl("switch@0x125f3b88 out of table"); return;
  }
  /* 125f3b8f nop  */
  /* nop */
L_125f3b90:;
  /* 125f3b90 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125f3b93 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125f3b95 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125f3b98 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125f3b9b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125f3b9e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125f3ba1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125f3ba4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125f3ba7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f3baa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f3bad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3bb0 jb 0x125f3b10 */
  if (C.cf) goto L_125f3b10;
  /* 125f3bb6 std  */
  C.df=1;
  /* 125f3bb7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125f3bb9 cld  */
  C.df=0;
  /* 125f3bba jmp dword ptr [edx*4 + 0x125f3c30] */
  switch (EDX) {
    case 0: goto L_125f3c40;
    case 1: goto L_125f3c48;
    case 2: goto L_125f3c58;
    case 3: goto L_125f3c6c;
    default: x86_unimpl("switch@0x125f3bba out of table"); return;
  }
  /* 125f3bc1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 125f3bc4 in al, 0x3b */
  x86_unimpl("in @ 0x125f3bc4");
  /* 125f3bc6 pop edi */
  EDI = (pop32());
  /* 125f3bc7 adc ch, ah */
  { uint32_t _a=(C.c.b.h),_b=(AH),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 125f3bc9 cmp ebx, dword ptr [edi + 0x12] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI + 0x12))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3bcc hlt  */
  x86_unimpl("hlt @ 0x125f3bcc");
  /* 125f3bcd cmp ebx, dword ptr [edi + 0x12] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI + 0x12))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3bd0 cld  */
  C.df=0;
  /* 125f3bd1 cmp ebx, dword ptr [edi + 0x12] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI + 0x12))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3bd4 add al, 0x3c */
  { uint32_t _a=(AL),_b=(0x3cu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 125f3bd6 pop edi */
  EDI = (pop32());
  /* 125f3bd7 adc cl, byte ptr [esp + edi] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(ESP + EDI*1))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 125f3bda pop edi */
  EDI = (pop32());
  /* 125f3bdb adc dl, byte ptr [esp + edi] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ESP + EDI*1))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 125f3bde pop edi */
  EDI = (pop32());
  /* 125f3be4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 125f3be8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 125f3bec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 125f3bf0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 125f3bf4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 125f3bf8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 125f3bfc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 125f3c00 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 125f3c04 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 125f3c08 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 125f3c0c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 125f3c10 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 125f3c14 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 125f3c18 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 125f3c1c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 125f3c23 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3c25 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_125f3c27:;
  /* 125f3c27 jmp dword ptr [edx*4 + 0x125f3c30] */
  switch (EDX) {
    case 0: goto L_125f3c40;
    case 1: goto L_125f3c48;
    case 2: goto L_125f3c58;
    case 3: goto L_125f3c6c;
    default: x86_unimpl("switch@0x125f3c27 out of table"); return;
  }
  /* 125f3c2e mov edi, edi */
  EDI = (EDI);
L_125f3c40:;
  /* 125f3c40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f3c43 pop esi */
  ESI = (pop32());
  /* 125f3c44 pop edi */
  EDI = (pop32());
  /* 125f3c45 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125f3c46 ret  */
  ESPCHK(0x125f3950u, _esp0);
  ESP += 4; return;
  /* 125f3c47 nop  */
  /* nop */
L_125f3c48:;
  /* 125f3c48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125f3c4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125f3c4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f3c51 pop esi */
  ESI = (pop32());
  /* 125f3c52 pop edi */
  EDI = (pop32());
  /* 125f3c53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125f3c54 ret  */
  ESPCHK(0x125f3950u, _esp0);
  ESP += 4; return;
  /* 125f3c55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125f3c58:;
  /* 125f3c58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125f3c5b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125f3c5e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125f3c61 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125f3c64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f3c67 pop esi */
  ESI = (pop32());
  /* 125f3c68 pop edi */
  EDI = (pop32());
  /* 125f3c69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125f3c6a ret  */
  ESPCHK(0x125f3950u, _esp0);
  ESP += 4; return;
  /* 125f3c6b nop  */
  /* nop */
L_125f3c6c:;
  /* 125f3c6c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125f3c6f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125f3c72 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125f3c75 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125f3c78 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125f3c7b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125f3c7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f3c81 pop esi */
  ESI = (pop32());
  /* 125f3c82 pop edi */
  EDI = (pop32());
  /* 125f3c83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125f3c84 ret  */
  ESPCHK(0x125f3950u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x125f3c90 (104 bytes, 43 insns) */
void f_125f3c90(void) {
  FTRACE(0x125f3c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f3c90 push ebx */
  push32((uint32_t)(EBX));
  /* 125f3c91 push esi */
  push32((uint32_t)(ESI));
  /* 125f3c92 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 125f3c96 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f3c98 jne 0x125f3cb2 */
  if (!C.zf) goto L_125f3cb2;
  /* 125f3c9a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 125f3c9e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 125f3ca2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125f3ca4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125f3ca6 mov ebx, eax */
  EBX = (EAX);
  /* 125f3ca8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 125f3cac div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125f3cae mov edx, ebx */
  EDX = (EBX);
  /* 125f3cb0 jmp 0x125f3cf3 */
  goto L_125f3cf3;
L_125f3cb2:;
  /* 125f3cb2 mov ecx, eax */
  ECX = (EAX);
  /* 125f3cb4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 125f3cb8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 125f3cbc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_125f3cc0:;
  /* 125f3cc0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 125f3cc2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 125f3cc4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 125f3cc6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 125f3cc8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125f3cca jne 0x125f3cc0 */
  if (!C.zf) goto L_125f3cc0;
  /* 125f3ccc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125f3cce mov esi, eax */
  ESI = (EAX);
  /* 125f3cd0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 125f3cd4 mov ecx, eax */
  ECX = (EAX);
  /* 125f3cd6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 125f3cda mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 125f3cdc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3cde jb 0x125f3cee */
  if (C.cf) goto L_125f3cee;
  /* 125f3ce0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3ce4 ja 0x125f3cee */
  if ((!C.cf&&!C.zf)) goto L_125f3cee;
  /* 125f3ce6 jb 0x125f3cef */
  if (C.cf) goto L_125f3cef;
  /* 125f3ce8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3cec jbe 0x125f3cef */
  if ((C.cf||C.zf)) goto L_125f3cef;
L_125f3cee:;
  /* 125f3cee dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_125f3cef:;
  /* 125f3cef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125f3cf1 mov eax, esi */
  EAX = (ESI);
L_125f3cf3:;
  /* 125f3cf3 pop esi */
  ESI = (pop32());
  /* 125f3cf4 pop ebx */
  EBX = (pop32());
  /* 125f3cf5 ret 0x10 */
  ESPCHK(0x125f3c90u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x125f3d00 (117 bytes, 44 insns) */
void f_125f3d00(void) {
  FTRACE(0x125f3d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f3d00 push ebx */
  push32((uint32_t)(EBX));
  /* 125f3d01 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 125f3d05 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f3d07 jne 0x125f3d21 */
  if (!C.zf) goto L_125f3d21;
  /* 125f3d09 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 125f3d0d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 125f3d11 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125f3d13 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125f3d15 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 125f3d19 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125f3d1b mov eax, edx */
  EAX = (EDX);
  /* 125f3d1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125f3d1f jmp 0x125f3d71 */
  goto L_125f3d71;
L_125f3d21:;
  /* 125f3d21 mov ecx, eax */
  ECX = (EAX);
  /* 125f3d23 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 125f3d27 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 125f3d2b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_125f3d2f:;
  /* 125f3d2f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 125f3d31 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 125f3d33 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 125f3d35 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 125f3d37 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125f3d39 jne 0x125f3d2f */
  if (!C.zf) goto L_125f3d2f;
  /* 125f3d3b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125f3d3d mov ecx, eax */
  ECX = (EAX);
  /* 125f3d3f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 125f3d43 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 125f3d44 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 125f3d48 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3d4a jb 0x125f3d5a */
  if (C.cf) goto L_125f3d5a;
  /* 125f3d4c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3d50 ja 0x125f3d5a */
  if ((!C.cf&&!C.zf)) goto L_125f3d5a;
  /* 125f3d52 jb 0x125f3d62 */
  if (C.cf) goto L_125f3d62;
  /* 125f3d54 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3d58 jbe 0x125f3d62 */
  if ((C.cf||C.zf)) goto L_125f3d62;
L_125f3d5a:;
  /* 125f3d5a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f3d5e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_125f3d62:;
  /* 125f3d62 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f3d66 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f3d6a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 125f3d6c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 125f3d6e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_125f3d71:;
  /* 125f3d71 pop ebx */
  EBX = (pop32());
  /* 125f3d72 ret 0x10 */
  ESPCHK(0x125f3d00u, _esp0);
  ESP += 20; return;
}

/* FUN_10013d80 @ 0x125f3d80 (628 bytes, 214 insns) */
void f_125f3d80(void) {
  FTRACE(0x125f3d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f3d80 push ebp */
  push32((uint32_t)(EBP));
  /* 125f3d81 mov ebp, esp */
  EBP = (ESP);
  /* 125f3d83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f3d86 push ebx */
  push32((uint32_t)(EBX));
  /* 125f3d87 push esi */
  push32((uint32_t)(ESI));
  /* 125f3d88 push edi */
  push32((uint32_t)(EDI));
L_125f3d89:;
  /* 125f3d89 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3d8d jne 0x125f3dad */
  if (!C.zf) goto L_125f3dad;
  /* 125f3d8f push 0x126149e0 */
  push32((uint32_t)(0x126149e0u));
  /* 125f3d94 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f3d96 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 125f3d98 push 0x126149d4 */
  push32((uint32_t)(0x126149d4u));
  /* 125f3d9d push 2 */
  push32((uint32_t)(0x2u));
  /* 125f3d9f call 0x125ec130 */
  push32(0x125f3da4u); f_125ec130();
  /* 125f3da4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3da7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3daa jne 0x125f3dad */
  if (!C.zf) goto L_125f3dad;
  /* 125f3dac int3  */
  x86_unimpl("int3 @ 0x125f3dac");
L_125f3dad:;
  /* 125f3dad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f3daf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f3db1 jne 0x125f3d89 */
  if (!C.zf) goto L_125f3d89;
  /* 125f3db3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f3db6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f3db9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3dbc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 125f3dbf mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125f3dc2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3dc5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125f3dc8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 125f3dce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f3dd0 je 0x125f3ddf */
  if (C.zf) goto L_125f3ddf;
  /* 125f3dd2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3dd5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125f3dd8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 125f3ddb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f3ddd je 0x125f3df5 */
  if (C.zf) goto L_125f3df5;
L_125f3ddf:;
  /* 125f3ddf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3de2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 125f3de5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 125f3de7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3dea mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 125f3ded or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f3df0 jmp 0x125f3fed */
  goto L_125f3fed;
L_125f3df5:;
  /* 125f3df5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3df8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 125f3dfb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 125f3dfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f3e00 je 0x125f3e4c */
  if (C.zf) goto L_125f3e4c;
  /* 125f3e02 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3e05 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 125f3e0c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3e0f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 125f3e12 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 125f3e15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f3e17 je 0x125f3e35 */
  if (C.zf) goto L_125f3e35;
  /* 125f3e19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3e1c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3e1f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125f3e22 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125f3e24 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3e27 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125f3e2a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 125f3e2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3e30 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 125f3e33 jmp 0x125f3e4c */
  goto L_125f3e4c;
L_125f3e35:;
  /* 125f3e35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3e38 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125f3e3b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 125f3e3e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3e41 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 125f3e44 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f3e47 jmp 0x125f3fed */
  goto L_125f3fed;
L_125f3e4c:;
  /* 125f3e4c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3e4f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125f3e52 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 125f3e55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3e58 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 125f3e5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3e5e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125f3e61 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 125f3e64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3e67 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 125f3e6a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3e6d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 125f3e74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125f3e7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f3e7e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 125f3e81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3e84 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125f3e87 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 125f3e8d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f3e8f jne 0x125f3ebf */
  if (!C.zf) goto L_125f3ebf;
  /* 125f3e91 cmp dword ptr [ebp - 8], 0x12617140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12617140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3e98 je 0x125f3ea3 */
  if (C.zf) goto L_125f3ea3;
  /* 125f3e9a cmp dword ptr [ebp - 8], 0x12617160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12617160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3ea1 jne 0x125f3eb3 */
  if (!C.zf) goto L_125f3eb3;
L_125f3ea3:;
  /* 125f3ea3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f3ea6 push edx */
  push32((uint32_t)(EDX));
  /* 125f3ea7 call 0x125f5cf0 */
  push32(0x125f3eacu); f_125f5cf0();
  /* 125f3eac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3eaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f3eb1 jne 0x125f3ebf */
  if (!C.zf) goto L_125f3ebf;
L_125f3eb3:;
  /* 125f3eb3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3eb6 push eax */
  push32((uint32_t)(EAX));
  /* 125f3eb7 call 0x125f5c20 */
  push32(0x125f3ebcu); f_125f5c20();
  /* 125f3ebc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f3ebf:;
  /* 125f3ebf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3ec2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125f3ec5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 125f3ecb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f3ecd je 0x125f3fab */
  if (C.zf) goto L_125f3fab;
L_125f3ed3:;
  /* 125f3ed3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3ed6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3ed9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 125f3edb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f3ede test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f3ee0 jge 0x125f3f03 */
  if ((C.sf==C.of)) goto L_125f3f03;
  /* 125f3ee2 push 0x12614994 */
  push32((uint32_t)(0x12614994u));
  /* 125f3ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f3ee9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 125f3eee push 0x126149d4 */
  push32((uint32_t)(0x126149d4u));
  /* 125f3ef3 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f3ef5 call 0x125ec130 */
  push32(0x125f3efau); f_125ec130();
  /* 125f3efa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3efd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3f00 jne 0x125f3f03 */
  if (!C.zf) goto L_125f3f03;
  /* 125f3f02 int3  */
  x86_unimpl("int3 @ 0x125f3f02");
L_125f3f03:;
  /* 125f3f03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f3f05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f3f07 jne 0x125f3ed3 */
  if (!C.zf) goto L_125f3ed3;
  /* 125f3f09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3f0c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3f0f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 125f3f11 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f3f14 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f3f17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3f1a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125f3f1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3f20 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3f23 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125f3f25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3f28 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 125f3f2b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f3f2e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3f31 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 125f3f34 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3f38 jle 0x125f3f56 */
  if ((C.zf||C.sf!=C.of)) goto L_125f3f56;
  /* 125f3f3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f3f3d push ecx */
  push32((uint32_t)(ECX));
  /* 125f3f3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3f41 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125f3f44 push eax */
  push32((uint32_t)(EAX));
  /* 125f3f45 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f3f48 push ecx */
  push32((uint32_t)(ECX));
  /* 125f3f49 call 0x125f5910 */
  push32(0x125f3f4eu); f_125f5910();
  /* 125f3f4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3f51 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125f3f54 jmp 0x125f3f9e */
  goto L_125f3f9e;
L_125f3f56:;
  /* 125f3f56 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3f5a je 0x125f3f79 */
  if (C.zf) goto L_125f3f79;
  /* 125f3f5c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f3f5f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 125f3f62 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f3f65 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 125f3f68 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f3f6b mov ecx, dword ptr [edx*4 + 0x1261a7c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1261a7c0)));
  /* 125f3f72 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3f74 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125f3f77 jmp 0x125f3f80 */
  goto L_125f3f80;
L_125f3f79:;
  /* 125f3f79 mov dword ptr [ebp - 0x14], 0x12616a60 */
  w32((uint32_t)(EBP + -0x14), (0x12616a60u));
L_125f3f80:;
  /* 125f3f80 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f3f83 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 125f3f87 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 125f3f8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f3f8c je 0x125f3f9e */
  if (C.zf) goto L_125f3f9e;
  /* 125f3f8e push 2 */
  push32((uint32_t)(0x2u));
  /* 125f3f90 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f3f92 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f3f95 push ecx */
  push32((uint32_t)(ECX));
  /* 125f3f96 call 0x125f57c0 */
  push32(0x125f3f9bu); f_125f57c0();
  /* 125f3f9b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f3f9e:;
  /* 125f3f9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3fa1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125f3fa4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 125f3fa7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 125f3fa9 jmp 0x125f3fc9 */
  goto L_125f3fc9;
L_125f3fab:;
  /* 125f3fab mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125f3fb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f3fb5 push edx */
  push32((uint32_t)(EDX));
  /* 125f3fb6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 125f3fb9 push eax */
  push32((uint32_t)(EAX));
  /* 125f3fba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f3fbd push ecx */
  push32((uint32_t)(ECX));
  /* 125f3fbe call 0x125f5910 */
  push32(0x125f3fc3u); f_125f5910();
  /* 125f3fc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f3fc6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_125f3fc9:;
  /* 125f3fc9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f3fcc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f3fcf je 0x125f3fe5 */
  if (C.zf) goto L_125f3fe5;
  /* 125f3fd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3fd4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125f3fd7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 125f3fda mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f3fdd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 125f3fe0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f3fe3 jmp 0x125f3fed */
  goto L_125f3fed;
L_125f3fe5:;
  /* 125f3fe5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f3fe8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_125f3fed:;
  /* 125f3fed pop edi */
  EDI = (pop32());
  /* 125f3fee pop esi */
  ESI = (pop32());
  /* 125f3fef pop ebx */
  EBX = (pop32());
  /* 125f3ff0 mov esp, ebp */
  ESP = (EBP);
  /* 125f3ff2 pop ebp */
  EBP = (pop32());
  /* 125f3ff3 ret  */
  ESPCHK(0x125f3d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10014000 @ 0x125f4000 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_125f4000(void) {
  FTRACE(0x125f4000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f4000 push ebp */
  push32((uint32_t)(EBP));
  /* 125f4001 mov ebp, esp */
  EBP = (ESP);
  /* 125f4003 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f4009 push ebx */
  push32((uint32_t)(EBX));
  /* 125f400a push esi */
  push32((uint32_t)(ESI));
  /* 125f400b push edi */
  push32((uint32_t)(EDI));
  /* 125f400c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 125f4013 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 125f401d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_125f4024:;
  /* 125f4024 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f4027 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125f4029 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 125f402c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125f4030 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f4033 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4036 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 125f4039 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f403b je 0x125f4c17 */
  if (C.zf) goto L_125f4c17;
  /* 125f4041 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4048 jl 0x125f4c17 */
  if ((C.sf!=C.of)) goto L_125f4c17;
  /* 125f404e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125f4052 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4055 jl 0x125f4076 */
  if ((C.sf!=C.of)) goto L_125f4076;
  /* 125f4057 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125f405b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f405e jg 0x125f4076 */
  if ((!C.zf&&C.sf==C.of)) goto L_125f4076;
  /* 125f4060 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125f4064 movsx ecx, byte ptr [eax + 0x126149cc] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x126149cc))));
  /* 125f406b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 125f406e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 125f4074 jmp 0x125f4080 */
  goto L_125f4080;
L_125f4076:;
  /* 125f4076 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_125f4080:;
  /* 125f4080 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 125f4086 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 125f4089 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f408c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f408f movsx edx, byte ptr [ecx + eax*8 + 0x126149ec] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x126149ec))));
  /* 125f4097 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 125f409a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 125f409d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f40a0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 125f40a6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f40ad ja 0x125f4c12 */
  if ((!C.cf&&!C.zf)) goto L_125f4c12;
  /* 125f40b3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 125f40b9 jmp dword ptr [ecx*4 + 0x125f4c24] */
  switch (ECX) {
    case 0: goto L_125f40c0;
    case 1: goto L_125f415a;
    case 2: goto L_125f419c;
    case 3: goto L_125f420b;
    case 4: goto L_125f4263;
    case 5: goto L_125f4272;
    case 6: goto L_125f42be;
    case 7: goto L_125f4351;
    case 8: goto L_125f41e8;
    case 9: goto L_125f41f3;
    case 10: goto L_125f41de;
    case 11: goto L_125f41d3;
    case 12: goto L_125f41fe;
    case 13: goto L_125f4206;
    default: x86_unimpl("switch@0x125f40b9 out of table"); return;
  }
L_125f40c0:;
  /* 125f40c0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 125f40c7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f40ca and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 125f40d0 mov eax, dword ptr [0x12616c98] */
  EAX = (r32((uint32_t)(0x12616c98)));
  /* 125f40d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125f40d7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 125f40db and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 125f40e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f40e3 je 0x125f413d */
  if (C.zf) goto L_125f413d;
  /* 125f40e5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 125f40eb push edx */
  push32((uint32_t)(EDX));
  /* 125f40ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f40ef push eax */
  push32((uint32_t)(EAX));
  /* 125f40f0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125f40f4 push ecx */
  push32((uint32_t)(ECX));
  /* 125f40f5 call 0x125f4d30 */
  push32(0x125f40fau); f_125f4d30();
  /* 125f40fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f40fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f4100 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125f4102 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 125f4105 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f4108 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f410b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_125f410e:;
  /* 125f410e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125f4112 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f4114 jne 0x125f4137 */
  if (!C.zf) goto L_125f4137;
  /* 125f4116 push 0x12614a6c */
  push32((uint32_t)(0x12614a6cu));
  /* 125f411b push 0 */
  push32((uint32_t)(0x0u));
  /* 125f411d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 125f4122 push 0x12614a60 */
  push32((uint32_t)(0x12614a60u));
  /* 125f4127 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f4129 call 0x125ec130 */
  push32(0x125f412eu); f_125ec130();
  /* 125f412e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4131 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4134 jne 0x125f4137 */
  if (!C.zf) goto L_125f4137;
  /* 125f4136 int3  */
  x86_unimpl("int3 @ 0x125f4136");
L_125f4137:;
  /* 125f4137 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f4139 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f413b jne 0x125f410e */
  if (!C.zf) goto L_125f410e;
L_125f413d:;
  /* 125f413d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 125f4143 push ecx */
  push32((uint32_t)(ECX));
  /* 125f4144 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f4147 push edx */
  push32((uint32_t)(EDX));
  /* 125f4148 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125f414c push eax */
  push32((uint32_t)(EAX));
  /* 125f414d call 0x125f4d30 */
  push32(0x125f4152u); f_125f4d30();
  /* 125f4152 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4155 jmp 0x125f4c12 */
  goto L_125f4c12;
L_125f415a:;
  /* 125f415a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125f4161 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f4164 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 125f416a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 125f4170 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 125f4176 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 125f417c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125f417f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125f4186 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 125f4190 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 125f4197 jmp 0x125f4c12 */
  goto L_125f4c12;
L_125f419c:;
  /* 125f419c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125f41a0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 125f41a6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 125f41ac sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f41af mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 125f41b5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f41bc ja 0x125f4206 */
  if ((!C.cf&&!C.zf)) goto L_125f4206;
  /* 125f41be mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 125f41c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f41c6 mov al, byte ptr [ecx + 0x125f4c5c] */
  AL = (r8((uint32_t)(ECX + 0x125f4c5c)));
  /* 125f41cc jmp dword ptr [eax*4 + 0x125f4c44] */
  switch (EAX) {
    case 0: goto L_125f41e8;
    case 1: goto L_125f41f3;
    case 2: goto L_125f41de;
    case 3: goto L_125f41d3;
    case 4: goto L_125f41fe;
    case 5: goto L_125f4206;
    default: x86_unimpl("switch@0x125f41cc out of table"); return;
  }
L_125f41d3:;
  /* 125f41d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f41d6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 125f41d9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125f41dc jmp 0x125f4206 */
  goto L_125f4206;
L_125f41de:;
  /* 125f41de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f41e1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 125f41e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f41e6 jmp 0x125f4206 */
  goto L_125f4206;
L_125f41e8:;
  /* 125f41e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f41eb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 125f41ee mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125f41f1 jmp 0x125f4206 */
  goto L_125f4206;
L_125f41f3:;
  /* 125f41f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f41f6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 125f41f9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125f41fc jmp 0x125f4206 */
  goto L_125f4206;
L_125f41fe:;
  /* 125f41fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f4201 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 125f4203 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125f4206:;
  /* 125f4206 jmp 0x125f4c12 */
  goto L_125f4c12;
L_125f420b:;
  /* 125f420b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125f420f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4212 jne 0x125f4247 */
  if (!C.zf) goto L_125f4247;
  /* 125f4214 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 125f4217 push edx */
  push32((uint32_t)(EDX));
  /* 125f4218 call 0x125f4e40 */
  push32(0x125f421du); f_125f4e40();
  /* 125f421d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4220 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 125f4226 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f422d jge 0x125f4245 */
  if ((C.sf==C.of)) goto L_125f4245;
  /* 125f422f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f4232 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 125f4234 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f4237 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 125f423d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 125f423f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_125f4245:;
  /* 125f4245 jmp 0x125f425e */
  goto L_125f425e;
L_125f4247:;
  /* 125f4247 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 125f424d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f4250 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125f4254 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 125f4258 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_125f425e:;
  /* 125f425e jmp 0x125f4c12 */
  goto L_125f4c12;
L_125f4263:;
  /* 125f4263 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 125f426d jmp 0x125f4c12 */
  goto L_125f4c12;
L_125f4272:;
  /* 125f4272 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125f4276 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4279 jne 0x125f42a2 */
  if (!C.zf) goto L_125f42a2;
  /* 125f427b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 125f427e push eax */
  push32((uint32_t)(EAX));
  /* 125f427f call 0x125f4e40 */
  push32(0x125f4284u); f_125f4e40();
  /* 125f4284 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4287 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 125f428d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4294 jge 0x125f42a0 */
  if ((C.sf==C.of)) goto L_125f42a0;
  /* 125f4296 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_125f42a0:;
  /* 125f42a0 jmp 0x125f42b9 */
  goto L_125f42b9;
L_125f42a2:;
  /* 125f42a2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 125f42a8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f42ab movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125f42af lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 125f42b3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_125f42b9:;
  /* 125f42b9 jmp 0x125f4c12 */
  goto L_125f4c12;
L_125f42be:;
  /* 125f42be movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125f42c2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 125f42c8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 125f42ce sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f42d1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 125f42d7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f42de ja 0x125f434c */
  if ((!C.cf&&!C.zf)) goto L_125f434c;
  /* 125f42e0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 125f42e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f42e8 mov al, byte ptr [ecx + 0x125f4c81] */
  AL = (r8((uint32_t)(ECX + 0x125f4c81)));
  /* 125f42ee jmp dword ptr [eax*4 + 0x125f4c6d] */
  switch (EAX) {
    case 0: goto L_125f4300;
    case 1: goto L_125f4339;
    case 2: goto L_125f42f5;
    case 3: goto L_125f4343;
    case 4: goto L_125f434c;
    default: x86_unimpl("switch@0x125f42ee out of table"); return;
  }
L_125f42f5:;
  /* 125f42f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f42f8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 125f42fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125f42fe jmp 0x125f434c */
  goto L_125f434c;
L_125f4300:;
  /* 125f4300 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f4303 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125f4306 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4309 jne 0x125f432b */
  if (!C.zf) goto L_125f432b;
  /* 125f430b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f430e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 125f4312 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4315 jne 0x125f432b */
  if (!C.zf) goto L_125f432b;
  /* 125f4317 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f431a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f431d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 125f4320 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f4323 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 125f4326 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125f4329 jmp 0x125f4337 */
  goto L_125f4337;
L_125f432b:;
  /* 125f432b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 125f4332 jmp 0x125f40c0 */
  goto L_125f40c0;
L_125f4337:;
  /* 125f4337 jmp 0x125f434c */
  goto L_125f434c;
L_125f4339:;
  /* 125f4339 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f433c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 125f433e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f4341 jmp 0x125f434c */
  goto L_125f434c;
L_125f4343:;
  /* 125f4343 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f4346 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 125f4349 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125f434c:;
  /* 125f434c jmp 0x125f4c12 */
  goto L_125f4c12;
L_125f4351:;
  /* 125f4351 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125f4355 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 125f435b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 125f4361 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f4364 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 125f436a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4371 ja 0x125f4a37 */
  if ((!C.cf&&!C.zf)) goto L_125f4a37;
  /* 125f4377 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 125f437d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125f437f mov cl, byte ptr [edx + 0x125f4cec] */
  CL = (r8((uint32_t)(EDX + 0x125f4cec)));
  /* 125f4385 jmp dword ptr [ecx*4 + 0x125f4cb0] */
  switch (ECX) {
    case 0: goto L_125f438c;
    case 1: goto L_125f4620;
    case 2: goto L_125f44b0;
    case 3: goto L_125f4759;
    case 4: goto L_125f441b;
    case 5: goto L_125f43a1;
    case 6: goto L_125f472b;
    case 7: goto L_125f4630;
    case 8: goto L_125f45d5;
    case 9: goto L_125f47a5;
    case 10: goto L_125f474f;
    case 11: goto L_125f44c6;
    case 12: goto L_125f4743;
    case 13: goto L_125f4765;
    case 14: goto L_125f4a37;
    default: x86_unimpl("switch@0x125f4385 out of table"); return;
  }
L_125f438c:;
  /* 125f438c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f438f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 125f4394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f4396 jne 0x125f43a1 */
  if (!C.zf) goto L_125f43a1;
  /* 125f4398 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f439b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 125f439e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125f43a1:;
  /* 125f43a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f43a4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 125f43aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f43ac je 0x125f43e7 */
  if (C.zf) goto L_125f43e7;
  /* 125f43ae lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 125f43b1 push eax */
  push32((uint32_t)(EAX));
  /* 125f43b2 call 0x125f4e80 */
  push32(0x125f43b7u); f_125f4e80();
  /* 125f43b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f43ba mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 125f43be mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 125f43c2 push ecx */
  push32((uint32_t)(ECX));
  /* 125f43c3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 125f43c9 push edx */
  push32((uint32_t)(EDX));
  /* 125f43ca call 0x125f5f60 */
  push32(0x125f43cfu); f_125f5f60();
  /* 125f43cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f43d2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 125f43d5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f43d9 jge 0x125f43e5 */
  if ((C.sf==C.of)) goto L_125f43e5;
  /* 125f43db mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_125f43e5:;
  /* 125f43e5 jmp 0x125f440d */
  goto L_125f440d;
L_125f43e7:;
  /* 125f43e7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 125f43ea push eax */
  push32((uint32_t)(EAX));
  /* 125f43eb call 0x125f4e40 */
  push32(0x125f43f0u); f_125f4e40();
  /* 125f43f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f43f3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 125f43fa mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 125f4400 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 125f4406 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_125f440d:;
  /* 125f440d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 125f4413 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 125f4416 jmp 0x125f4a37 */
  goto L_125f4a37;
L_125f441b:;
  /* 125f441b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 125f441e push eax */
  push32((uint32_t)(EAX));
  /* 125f441f call 0x125f4e40 */
  push32(0x125f4424u); f_125f4e40();
  /* 125f4424 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4427 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 125f442d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4434 je 0x125f4442 */
  if (C.zf) goto L_125f4442;
  /* 125f4436 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 125f443c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4440 jne 0x125f445c */
  if (!C.zf) goto L_125f445c;
L_125f4442:;
  /* 125f4442 mov edx, dword ptr [0x12616fb0] */
  EDX = (r32((uint32_t)(0x12616fb0)));
  /* 125f4448 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 125f444b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f444e push eax */
  push32((uint32_t)(EAX));
  /* 125f444f call 0x125efea0 */
  push32(0x125f4454u); f_125efea0();
  /* 125f4454 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4457 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 125f445a jmp 0x125f44ab */
  goto L_125f44ab;
L_125f445c:;
  /* 125f445c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f445f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 125f4465 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f4467 je 0x125f448c */
  if (C.zf) goto L_125f448c;
  /* 125f4469 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 125f446f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 125f4472 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125f4475 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 125f447b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 125f447e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 125f4480 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 125f4483 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 125f448a jmp 0x125f44ab */
  goto L_125f44ab;
L_125f448c:;
  /* 125f448c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 125f4493 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 125f4499 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125f449c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 125f449f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 125f44a5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 125f44a8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_125f44ab:;
  /* 125f44ab jmp 0x125f4a37 */
  goto L_125f4a37;
L_125f44b0:;
  /* 125f44b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f44b3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 125f44b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f44bb jne 0x125f44c6 */
  if (!C.zf) goto L_125f44c6;
  /* 125f44bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f44c0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 125f44c3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125f44c6:;
  /* 125f44c6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f44cd jne 0x125f44db */
  if (!C.zf) goto L_125f44db;
  /* 125f44cf mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 125f44d9 jmp 0x125f44e7 */
  goto L_125f44e7;
L_125f44db:;
  /* 125f44db mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 125f44e1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_125f44e7:;
  /* 125f44e7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 125f44ed mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 125f44f3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 125f44f6 push edx */
  push32((uint32_t)(EDX));
  /* 125f44f7 call 0x125f4e40 */
  push32(0x125f44fcu); f_125f4e40();
  /* 125f44fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f44ff mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125f4502 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f4505 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 125f450a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f450c je 0x125f4576 */
  if (C.zf) goto L_125f4576;
  /* 125f450e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4512 jne 0x125f451d */
  if (!C.zf) goto L_125f451d;
  /* 125f4514 mov ecx, dword ptr [0x12616fb4] */
  ECX = (r32((uint32_t)(0x12616fb4)));
  /* 125f451a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_125f451d:;
  /* 125f451d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 125f4524 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f4527 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_125f452d:;
  /* 125f452d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 125f4533 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 125f4539 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f453c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 125f4542 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f4544 je 0x125f4566 */
  if (C.zf) goto L_125f4566;
  /* 125f4546 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 125f454c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f454e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 125f4551 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f4553 je 0x125f4566 */
  if (C.zf) goto L_125f4566;
  /* 125f4555 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 125f455b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f455e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 125f4564 jmp 0x125f452d */
  goto L_125f452d;
L_125f4566:;
  /* 125f4566 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 125f456c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f456f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 125f4571 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 125f4574 jmp 0x125f45d0 */
  goto L_125f45d0;
L_125f4576:;
  /* 125f4576 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f457a jne 0x125f4584 */
  if (!C.zf) goto L_125f4584;
  /* 125f457c mov eax, dword ptr [0x12616fb0] */
  EAX = (r32((uint32_t)(0x12616fb0)));
  /* 125f4581 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_125f4584:;
  /* 125f4584 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f4587 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_125f458d:;
  /* 125f458d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 125f4593 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 125f4599 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f459c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 125f45a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f45a4 je 0x125f45c4 */
  if (C.zf) goto L_125f45c4;
  /* 125f45a6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 125f45ac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125f45af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f45b1 je 0x125f45c4 */
  if (C.zf) goto L_125f45c4;
  /* 125f45b3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 125f45b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f45bc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 125f45c2 jmp 0x125f458d */
  goto L_125f458d;
L_125f45c4:;
  /* 125f45c4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 125f45ca sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f45cd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_125f45d0:;
  /* 125f45d0 jmp 0x125f4a37 */
  goto L_125f4a37;
L_125f45d5:;
  /* 125f45d5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 125f45d8 push edx */
  push32((uint32_t)(EDX));
  /* 125f45d9 call 0x125f4e40 */
  push32(0x125f45deu); f_125f4e40();
  /* 125f45de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f45e1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 125f45e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f45ea and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 125f45ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f45ef je 0x125f4603 */
  if (C.zf) goto L_125f4603;
  /* 125f45f1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 125f45f7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 125f45fe mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 125f4601 jmp 0x125f4611 */
  goto L_125f4611;
L_125f4603:;
  /* 125f4603 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 125f4609 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 125f460f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_125f4611:;
  /* 125f4611 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 125f461b jmp 0x125f4a37 */
  goto L_125f4a37;
L_125f4620:;
  /* 125f4620 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 125f4627 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 125f462a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 125f462d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_125f4630:;
  /* 125f4630 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f4633 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 125f4635 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f4638 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 125f463e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 125f4641 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4648 jge 0x125f4656 */
  if ((C.sf==C.of)) goto L_125f4656;
  /* 125f464a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 125f4654 jmp 0x125f4672 */
  goto L_125f4672;
L_125f4656:;
  /* 125f4656 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f465d jne 0x125f4672 */
  if (!C.zf) goto L_125f4672;
  /* 125f465f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125f4663 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4666 jne 0x125f4672 */
  if (!C.zf) goto L_125f4672;
  /* 125f4668 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_125f4672:;
  /* 125f4672 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f4675 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4678 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 125f467b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f467e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f4681 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125f4683 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 125f4686 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 125f468c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 125f4692 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f4695 push ecx */
  push32((uint32_t)(ECX));
  /* 125f4696 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 125f469c push edx */
  push32((uint32_t)(EDX));
  /* 125f469d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125f46a1 push eax */
  push32((uint32_t)(EAX));
  /* 125f46a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f46a5 push ecx */
  push32((uint32_t)(ECX));
  /* 125f46a6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 125f46ac push edx */
  push32((uint32_t)(EDX));
  /* 125f46ad call dword ptr [0x126173a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126173a0))), 0x125f46b3u);
  /* 125f46b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f46b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f46b9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 125f46be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f46c0 je 0x125f46d8 */
  if (C.zf) goto L_125f46d8;
  /* 125f46c2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f46c9 jne 0x125f46d8 */
  if (!C.zf) goto L_125f46d8;
  /* 125f46cb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f46ce push ecx */
  push32((uint32_t)(ECX));
  /* 125f46cf call dword ptr [0x126173ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x126173ac))), 0x125f46d5u);
  /* 125f46d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f46d8:;
  /* 125f46d8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 125f46dc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f46df jne 0x125f46fa */
  if (!C.zf) goto L_125f46fa;
  /* 125f46e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f46e4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 125f46e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f46eb jne 0x125f46fa */
  if (!C.zf) goto L_125f46fa;
  /* 125f46ed mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f46f0 push ecx */
  push32((uint32_t)(ECX));
  /* 125f46f1 call dword ptr [0x126173a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126173a4))), 0x125f46f7u);
  /* 125f46f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f46fa:;
  /* 125f46fa mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f46fd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125f4700 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4703 jne 0x125f4717 */
  if (!C.zf) goto L_125f4717;
  /* 125f4705 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f4708 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 125f470b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125f470e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f4711 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4714 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_125f4717:;
  /* 125f4717 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f471a push eax */
  push32((uint32_t)(EAX));
  /* 125f471b call 0x125efea0 */
  push32(0x125f4720u); f_125efea0();
  /* 125f4720 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4723 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 125f4726 jmp 0x125f4a37 */
  goto L_125f4a37;
L_125f472b:;
  /* 125f472b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f472e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 125f4731 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125f4734 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 125f473e jmp 0x125f47c5 */
  goto L_125f47c5;
L_125f4743:;
  /* 125f4743 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 125f474d jmp 0x125f47c5 */
  goto L_125f47c5;
L_125f474f:;
  /* 125f474f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_125f4759:;
  /* 125f4759 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 125f4763 jmp 0x125f476f */
  goto L_125f476f;
L_125f4765:;
  /* 125f4765 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_125f476f:;
  /* 125f476f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 125f4779 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f477c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 125f4782 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f4784 je 0x125f47a3 */
  if (C.zf) goto L_125f47a3;
  /* 125f4786 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 125f478d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 125f4793 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4796 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 125f479c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_125f47a3:;
  /* 125f47a3 jmp 0x125f47c5 */
  goto L_125f47c5;
L_125f47a5:;
  /* 125f47a5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 125f47af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f47b2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 125f47b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f47ba je 0x125f47c5 */
  if (C.zf) goto L_125f47c5;
  /* 125f47bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f47bf or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 125f47c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125f47c5:;
  /* 125f47c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f47c8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 125f47cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f47cf je 0x125f47ee */
  if (C.zf) goto L_125f47ee;
  /* 125f47d1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 125f47d4 push ecx */
  push32((uint32_t)(ECX));
  /* 125f47d5 call 0x125f4e60 */
  push32(0x125f47dau); f_125f4e60();
  /* 125f47da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f47dd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 125f47e3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 125f47e9 jmp 0x125f487f */
  goto L_125f487f;
L_125f47ee:;
  /* 125f47ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f47f1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 125f47f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f47f6 je 0x125f4840 */
  if (C.zf) goto L_125f4840;
  /* 125f47f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f47fb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 125f47fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f4800 je 0x125f4820 */
  if (C.zf) goto L_125f4820;
  /* 125f4802 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 125f4805 push ecx */
  push32((uint32_t)(ECX));
  /* 125f4806 call 0x125f4e40 */
  push32(0x125f480bu); f_125f4e40();
  /* 125f480b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f480e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 125f4811 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125f4812 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 125f4818 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 125f481e jmp 0x125f483e */
  goto L_125f483e;
L_125f4820:;
  /* 125f4820 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 125f4823 push edx */
  push32((uint32_t)(EDX));
  /* 125f4824 call 0x125f4e40 */
  push32(0x125f4829u); f_125f4e40();
  /* 125f4829 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f482c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f4831 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125f4832 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 125f4838 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_125f483e:;
  /* 125f483e jmp 0x125f487f */
  goto L_125f487f;
L_125f4840:;
  /* 125f4840 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f4843 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 125f4846 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f4848 je 0x125f4865 */
  if (C.zf) goto L_125f4865;
  /* 125f484a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 125f484d push ecx */
  push32((uint32_t)(ECX));
  /* 125f484e call 0x125f4e40 */
  push32(0x125f4853u); f_125f4e40();
  /* 125f4853 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4856 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125f4857 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 125f485d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 125f4863 jmp 0x125f487f */
  goto L_125f487f;
L_125f4865:;
  /* 125f4865 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 125f4868 push edx */
  push32((uint32_t)(EDX));
  /* 125f4869 call 0x125f4e40 */
  push32(0x125f486eu); f_125f4e40();
  /* 125f486e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4871 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125f4873 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 125f4879 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_125f487f:;
  /* 125f487f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f4882 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 125f4885 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f4887 je 0x125f48c7 */
  if (C.zf) goto L_125f48c7;
  /* 125f4889 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4890 jg 0x125f48c7 */
  if ((!C.zf&&C.sf==C.of)) goto L_125f48c7;
  /* 125f4892 jl 0x125f489d */
  if ((C.sf!=C.of)) goto L_125f489d;
  /* 125f4894 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f489b jae 0x125f48c7 */
  if (!C.cf) goto L_125f48c7;
L_125f489d:;
  /* 125f489d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 125f48a3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 125f48a5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 125f48ab adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f48ae neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 125f48b0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 125f48b6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 125f48bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f48bf or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 125f48c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125f48c5 jmp 0x125f48df */
  goto L_125f48df;
L_125f48c7:;
  /* 125f48c7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 125f48cd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 125f48d3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 125f48d9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_125f48df:;
  /* 125f48df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f48e2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 125f48e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f48ea jne 0x125f4907 */
  if (!C.zf) goto L_125f4907;
  /* 125f48ec mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 125f48f2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 125f48f8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 125f48fb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 125f4901 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_125f4907:;
  /* 125f4907 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f490e jge 0x125f491c */
  if ((C.sf==C.of)) goto L_125f491c;
  /* 125f4910 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 125f491a jmp 0x125f4925 */
  goto L_125f4925;
L_125f491c:;
  /* 125f491c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f491f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 125f4922 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125f4925:;
  /* 125f4925 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 125f492b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 125f4931 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f4933 jne 0x125f493c */
  if (!C.zf) goto L_125f493c;
  /* 125f4935 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_125f493c:;
  /* 125f493c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 125f493f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_125f4942:;
  /* 125f4942 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 125f4948 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 125f494e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f4951 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 125f4957 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f4959 jg 0x125f496f */
  if ((!C.zf&&C.sf==C.of)) goto L_125f496f;
  /* 125f495b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 125f4961 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 125f4967 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f4969 je 0x125f49f0 */
  if (C.zf) goto L_125f49f0;
L_125f496f:;
  /* 125f496f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 125f4975 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125f4976 push edx */
  push32((uint32_t)(EDX));
  /* 125f4977 push eax */
  push32((uint32_t)(EAX));
  /* 125f4978 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 125f497e push edx */
  push32((uint32_t)(EDX));
  /* 125f497f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 125f4985 push eax */
  push32((uint32_t)(EAX));
  /* 125f4986 call 0x125f3d00 */
  push32(0x125f498bu); f_125f3d00();
  /* 125f498b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f498e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 125f4994 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 125f499a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125f499b push edx */
  push32((uint32_t)(EDX));
  /* 125f499c push eax */
  push32((uint32_t)(EAX));
  /* 125f499d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 125f49a3 push ecx */
  push32((uint32_t)(ECX));
  /* 125f49a4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 125f49aa push edx */
  push32((uint32_t)(EDX));
  /* 125f49ab call 0x125f3c90 */
  push32(0x125f49b0u); f_125f3c90();
  /* 125f49b0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 125f49b6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 125f49bc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f49c3 jle 0x125f49d7 */
  if ((C.zf||C.sf!=C.of)) goto L_125f49d7;
  /* 125f49c5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 125f49cb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f49d1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_125f49d7:;
  /* 125f49d7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f49da mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 125f49e0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 125f49e2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f49e5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f49e8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125f49eb jmp 0x125f4942 */
  goto L_125f4942;
L_125f49f0:;
  /* 125f49f0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 125f49f3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f49f6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 125f49f9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f49fc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f49ff mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 125f4a02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f4a05 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 125f4a0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f4a0c je 0x125f4a37 */
  if (C.zf) goto L_125f4a37;
  /* 125f4a0e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f4a11 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125f4a14 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4a17 jne 0x125f4a1f */
  if (!C.zf) goto L_125f4a1f;
  /* 125f4a19 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4a1d jne 0x125f4a37 */
  if (!C.zf) goto L_125f4a37;
L_125f4a1f:;
  /* 125f4a1f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f4a22 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f4a25 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125f4a28 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f4a2b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 125f4a2e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f4a31 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4a34 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_125f4a37:;
  /* 125f4a37 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4a3e jne 0x125f4c12 */
  if (!C.zf) goto L_125f4c12;
  /* 125f4a44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f4a47 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 125f4a4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f4a4c je 0x125f4a9d */
  if (C.zf) goto L_125f4a9d;
  /* 125f4a4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f4a51 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 125f4a57 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f4a59 je 0x125f4a6b */
  if (C.zf) goto L_125f4a6b;
  /* 125f4a5b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 125f4a62 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 125f4a69 jmp 0x125f4a9d */
  goto L_125f4a9d;
L_125f4a6b:;
  /* 125f4a6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f4a6e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 125f4a71 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f4a73 je 0x125f4a85 */
  if (C.zf) goto L_125f4a85;
  /* 125f4a75 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 125f4a7c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 125f4a83 jmp 0x125f4a9d */
  goto L_125f4a9d;
L_125f4a85:;
  /* 125f4a85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f4a88 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 125f4a8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f4a8d je 0x125f4a9d */
  if (C.zf) goto L_125f4a9d;
  /* 125f4a8f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 125f4a96 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_125f4a9d:;
  /* 125f4a9d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 125f4aa3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f4aa6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f4aa9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 125f4aaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f4ab2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 125f4ab5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f4ab7 jne 0x125f4ad5 */
  if (!C.zf) goto L_125f4ad5;
  /* 125f4ab9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 125f4abf push eax */
  push32((uint32_t)(EAX));
  /* 125f4ac0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f4ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 125f4ac4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 125f4aca push edx */
  push32((uint32_t)(EDX));
  /* 125f4acb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 125f4acd call 0x125f4db0 */
  push32(0x125f4ad2u); f_125f4db0();
  /* 125f4ad2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f4ad5:;
  /* 125f4ad5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 125f4adb push eax */
  push32((uint32_t)(EAX));
  /* 125f4adc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f4adf push ecx */
  push32((uint32_t)(ECX));
  /* 125f4ae0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f4ae3 push edx */
  push32((uint32_t)(EDX));
  /* 125f4ae4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 125f4aea push eax */
  push32((uint32_t)(EAX));
  /* 125f4aeb call 0x125f4df0 */
  push32(0x125f4af0u); f_125f4df0();
  /* 125f4af0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4af3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f4af6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 125f4af9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f4afb je 0x125f4b23 */
  if (C.zf) goto L_125f4b23;
  /* 125f4afd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f4b00 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 125f4b03 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f4b05 jne 0x125f4b23 */
  if (!C.zf) goto L_125f4b23;
  /* 125f4b07 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 125f4b0d push eax */
  push32((uint32_t)(EAX));
  /* 125f4b0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f4b11 push ecx */
  push32((uint32_t)(ECX));
  /* 125f4b12 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 125f4b18 push edx */
  push32((uint32_t)(EDX));
  /* 125f4b19 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 125f4b1b call 0x125f4db0 */
  push32(0x125f4b20u); f_125f4db0();
  /* 125f4b20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f4b23:;
  /* 125f4b23 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4b27 je 0x125f4bd1 */
  if (C.zf) goto L_125f4bd1;
  /* 125f4b2d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4b31 jle 0x125f4bd1 */
  if ((C.zf||C.sf!=C.of)) goto L_125f4bd1;
  /* 125f4b37 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f4b3a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 125f4b40 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f4b43 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_125f4b49:;
  /* 125f4b49 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 125f4b4f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 125f4b55 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f4b58 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 125f4b5e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f4b60 je 0x125f4bcf */
  if (C.zf) goto L_125f4bcf;
  /* 125f4b62 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 125f4b68 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 125f4b6b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 125f4b72 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 125f4b79 push eax */
  push32((uint32_t)(EAX));
  /* 125f4b7a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 125f4b80 push ecx */
  push32((uint32_t)(ECX));
  /* 125f4b81 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 125f4b87 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4b8a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 125f4b90 call 0x125f5f60 */
  push32(0x125f4b95u); f_125f5f60();
  /* 125f4b95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4b98 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 125f4b9e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4ba5 jg 0x125f4ba9 */
  if ((!C.zf&&C.sf==C.of)) goto L_125f4ba9;
  /* 125f4ba7 jmp 0x125f4bcf */
  goto L_125f4bcf;
L_125f4ba9:;
  /* 125f4ba9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 125f4baf push eax */
  push32((uint32_t)(EAX));
  /* 125f4bb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f4bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 125f4bb4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 125f4bba push edx */
  push32((uint32_t)(EDX));
  /* 125f4bbb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 125f4bc1 push eax */
  push32((uint32_t)(EAX));
  /* 125f4bc2 call 0x125f4df0 */
  push32(0x125f4bc7u); f_125f4df0();
  /* 125f4bc7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4bca jmp 0x125f4b49 */
  goto L_125f4b49;
L_125f4bcf:;
  /* 125f4bcf jmp 0x125f4bec */
  goto L_125f4bec;
L_125f4bd1:;
  /* 125f4bd1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 125f4bd7 push ecx */
  push32((uint32_t)(ECX));
  /* 125f4bd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f4bdb push edx */
  push32((uint32_t)(EDX));
  /* 125f4bdc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f4bdf push eax */
  push32((uint32_t)(EAX));
  /* 125f4be0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f4be3 push ecx */
  push32((uint32_t)(ECX));
  /* 125f4be4 call 0x125f4df0 */
  push32(0x125f4be9u); f_125f4df0();
  /* 125f4be9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f4bec:;
  /* 125f4bec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f4bef and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 125f4bf2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f4bf4 je 0x125f4c12 */
  if (C.zf) goto L_125f4c12;
  /* 125f4bf6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 125f4bfc push eax */
  push32((uint32_t)(EAX));
  /* 125f4bfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f4c00 push ecx */
  push32((uint32_t)(ECX));
  /* 125f4c01 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 125f4c07 push edx */
  push32((uint32_t)(EDX));
  /* 125f4c08 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 125f4c0a call 0x125f4db0 */
  push32(0x125f4c0fu); f_125f4db0();
  /* 125f4c0f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f4c12:;
  /* 125f4c12 jmp 0x125f4024 */
  goto L_125f4024;
L_125f4c17:;
  /* 125f4c17 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 125f4c1d pop edi */
  EDI = (pop32());
  /* 125f4c1e pop esi */
  ESI = (pop32());
  /* 125f4c1f pop ebx */
  EBX = (pop32());
  /* 125f4c20 mov esp, ebp */
  ESP = (EBP);
  /* 125f4c22 pop ebp */
  EBP = (pop32());
  /* 125f4c23 ret  */
  ESPCHK(0x125f4000u, _esp0);
  ESP += 4; return;
}

/* FUN_10014d30 @ 0x125f4d30 (119 bytes, 44 insns) */
void f_125f4d30(void) {
  FTRACE(0x125f4d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f4d30 push ebp */
  push32((uint32_t)(EBP));
  /* 125f4d31 mov ebp, esp */
  EBP = (ESP);
  /* 125f4d33 push ecx */
  push32((uint32_t)(ECX));
  /* 125f4d34 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f4d37 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125f4d3a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f4d3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f4d40 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 125f4d43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f4d46 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4d4a jl 0x125f4d72 */
  if ((C.sf!=C.of)) goto L_125f4d72;
  /* 125f4d4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f4d4f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125f4d51 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 125f4d54 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 125f4d56 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 125f4d5a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 125f4d60 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125f4d63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f4d66 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125f4d68 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4d6b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f4d6e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125f4d70 jmp 0x125f4d85 */
  goto L_125f4d85;
L_125f4d72:;
  /* 125f4d72 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f4d75 push edx */
  push32((uint32_t)(EDX));
  /* 125f4d76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f4d79 push eax */
  push32((uint32_t)(EAX));
  /* 125f4d7a call 0x125f3d80 */
  push32(0x125f4d7fu); f_125f3d80();
  /* 125f4d7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4d82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125f4d85:;
  /* 125f4d85 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4d89 jne 0x125f4d96 */
  if (!C.zf) goto L_125f4d96;
  /* 125f4d8b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f4d8e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 125f4d94 jmp 0x125f4da3 */
  goto L_125f4da3;
L_125f4d96:;
  /* 125f4d96 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f4d99 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125f4d9b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4d9e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f4da1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_125f4da3:;
  /* 125f4da3 mov esp, ebp */
  ESP = (EBP);
  /* 125f4da5 pop ebp */
  EBP = (pop32());
  /* 125f4da6 ret  */
  ESPCHK(0x125f4d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10014db0 @ 0x125f4db0 (53 bytes, 23 insns) */
void f_125f4db0(void) {
  FTRACE(0x125f4db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f4db0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f4db1 mov ebp, esp */
  EBP = (ESP);
L_125f4db3:;
  /* 125f4db3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f4db6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f4db9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f4dbc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 125f4dbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f4dc1 jle 0x125f4de3 */
  if ((C.zf||C.sf!=C.of)) goto L_125f4de3;
  /* 125f4dc3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125f4dc6 push edx */
  push32((uint32_t)(EDX));
  /* 125f4dc7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f4dca push eax */
  push32((uint32_t)(EAX));
  /* 125f4dcb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f4dce push ecx */
  push32((uint32_t)(ECX));
  /* 125f4dcf call 0x125f4d30 */
  push32(0x125f4dd4u); f_125f4d30();
  /* 125f4dd4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4dd7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125f4dda cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4ddd jne 0x125f4de1 */
  if (!C.zf) goto L_125f4de1;
  /* 125f4ddf jmp 0x125f4de3 */
  goto L_125f4de3;
L_125f4de1:;
  /* 125f4de1 jmp 0x125f4db3 */
  goto L_125f4db3;
L_125f4de3:;
  /* 125f4de3 pop ebp */
  EBP = (pop32());
  /* 125f4de4 ret  */
  ESPCHK(0x125f4db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014df0 @ 0x125f4df0 (74 bytes, 31 insns) */
void f_125f4df0(void) {
  FTRACE(0x125f4df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f4df0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f4df1 mov ebp, esp */
  EBP = (ESP);
  /* 125f4df3 push ecx */
  push32((uint32_t)(ECX));
L_125f4df4:;
  /* 125f4df4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f4df7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f4dfa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f4dfd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 125f4e00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f4e02 jle 0x125f4e36 */
  if ((C.zf||C.sf!=C.of)) goto L_125f4e36;
  /* 125f4e04 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125f4e07 push edx */
  push32((uint32_t)(EDX));
  /* 125f4e08 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f4e0b push eax */
  push32((uint32_t)(EAX));
  /* 125f4e0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f4e0f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125f4e12 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125f4e15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f4e18 push eax */
  push32((uint32_t)(EAX));
  /* 125f4e19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f4e1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4e1f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 125f4e22 call 0x125f4d30 */
  push32(0x125f4e27u); f_125f4d30();
  /* 125f4e27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4e2a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125f4e2d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4e30 jne 0x125f4e34 */
  if (!C.zf) goto L_125f4e34;
  /* 125f4e32 jmp 0x125f4e36 */
  goto L_125f4e36;
L_125f4e34:;
  /* 125f4e34 jmp 0x125f4df4 */
  goto L_125f4df4;
L_125f4e36:;
  /* 125f4e36 mov esp, ebp */
  ESP = (EBP);
  /* 125f4e38 pop ebp */
  EBP = (pop32());
  /* 125f4e39 ret  */
  ESPCHK(0x125f4df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e40 @ 0x125f4e40 (26 bytes, 12 insns) */
void f_125f4e40(void) {
  FTRACE(0x125f4e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f4e40 push ebp */
  push32((uint32_t)(EBP));
  /* 125f4e41 mov ebp, esp */
  EBP = (ESP);
  /* 125f4e43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f4e46 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125f4e48 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4e4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f4e4e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125f4e50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f4e53 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125f4e55 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 125f4e58 pop ebp */
  EBP = (pop32());
  /* 125f4e59 ret  */
  ESPCHK(0x125f4e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e60 @ 0x125f4e60 (31 bytes, 14 insns) */
void f_125f4e60(void) {
  FTRACE(0x125f4e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f4e60 push ebp */
  push32((uint32_t)(EBP));
  /* 125f4e61 mov ebp, esp */
  EBP = (ESP);
  /* 125f4e63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f4e66 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125f4e68 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4e6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f4e6e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125f4e70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f4e73 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125f4e75 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f4e78 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 125f4e7a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125f4e7d pop ebp */
  EBP = (pop32());
  /* 125f4e7e ret  */
  ESPCHK(0x125f4e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e80 @ 0x125f4e80 (27 bytes, 12 insns) */
void f_125f4e80(void) {
  FTRACE(0x125f4e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f4e80 push ebp */
  push32((uint32_t)(EBP));
  /* 125f4e81 mov ebp, esp */
  EBP = (ESP);
  /* 125f4e83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f4e86 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125f4e88 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4e8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f4e8e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125f4e90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f4e93 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125f4e95 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 125f4e99 pop ebp */
  EBP = (pop32());
  /* 125f4e9a ret  */
  ESPCHK(0x125f4e80u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x125f4ea0 (145 bytes, 42 insns) */
void f_125f4ea0(void) {
  FTRACE(0x125f4ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f4ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f4ea1 mov ebp, esp */
  EBP = (ESP);
  /* 125f4ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 125f4ea4 call 0x125f4f50 */
  push32(0x125f4ea9u); f_125f4f50();
  /* 125f4ea9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f4eac mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 125f4eae mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125f4eb5 jmp 0x125f4ec0 */
  goto L_125f4ec0;
L_125f4eb7:;
  /* 125f4eb7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f4eba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4ebd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125f4ec0:;
  /* 125f4ec0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4ec4 jae 0x125f4eea */
  if (!C.cf) goto L_125f4eea;
  /* 125f4ec6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f4ec9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f4ecc cmp ecx, dword ptr [eax*8 + 0x12616fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12616fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4ed3 jne 0x125f4ee8 */
  if (!C.zf) goto L_125f4ee8;
  /* 125f4ed5 call 0x125f4f40 */
  push32(0x125f4edau); f_125f4f40();
  /* 125f4eda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f4edd mov ecx, dword ptr [edx*8 + 0x12616fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12616fbc)));
  /* 125f4ee4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 125f4ee6 jmp 0x125f4f2d */
  goto L_125f4f2d;
L_125f4ee8:;
  /* 125f4ee8 jmp 0x125f4eb7 */
  goto L_125f4eb7;
L_125f4eea:;
  /* 125f4eea cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4eee jb 0x125f4f03 */
  if (C.cf) goto L_125f4f03;
  /* 125f4ef0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4ef4 ja 0x125f4f03 */
  if ((!C.cf&&!C.zf)) goto L_125f4f03;
  /* 125f4ef6 call 0x125f4f40 */
  push32(0x125f4efbu); f_125f4f40();
  /* 125f4efb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 125f4f01 jmp 0x125f4f2d */
  goto L_125f4f2d;
L_125f4f03:;
  /* 125f4f03 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4f0a jb 0x125f4f22 */
  if (C.cf) goto L_125f4f22;
  /* 125f4f0c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4f13 ja 0x125f4f22 */
  if ((!C.cf&&!C.zf)) goto L_125f4f22;
  /* 125f4f15 call 0x125f4f40 */
  push32(0x125f4f1au); f_125f4f40();
  /* 125f4f1a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 125f4f20 jmp 0x125f4f2d */
  goto L_125f4f2d;
L_125f4f22:;
  /* 125f4f22 call 0x125f4f40 */
  push32(0x125f4f27u); f_125f4f40();
  /* 125f4f27 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_125f4f2d:;
  /* 125f4f2d mov esp, ebp */
  ESP = (EBP);
  /* 125f4f2f pop ebp */
  EBP = (pop32());
  /* 125f4f30 ret  */
  ESPCHK(0x125f4ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f40 @ 0x125f4f40 (13 bytes, 6 insns) */
void f_125f4f40(void) {
  FTRACE(0x125f4f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f4f40 push ebp */
  push32((uint32_t)(EBP));
  /* 125f4f41 mov ebp, esp */
  EBP = (ESP);
  /* 125f4f43 call 0x125ecab0 */
  push32(0x125f4f48u); f_125ecab0();
  /* 125f4f48 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4f4b pop ebp */
  EBP = (pop32());
  /* 125f4f4c ret  */
  ESPCHK(0x125f4f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f50 @ 0x125f4f50 (13 bytes, 6 insns) */
void f_125f4f50(void) {
  FTRACE(0x125f4f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f4f50 push ebp */
  push32((uint32_t)(EBP));
  /* 125f4f51 mov ebp, esp */
  EBP = (ESP);
  /* 125f4f53 call 0x125ecab0 */
  push32(0x125f4f58u); f_125ecab0();
  /* 125f4f58 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4f5b pop ebp */
  EBP = (pop32());
  /* 125f4f5c ret  */
  ESPCHK(0x125f4f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f60 @ 0x125f4f60 (664 bytes, 267 insns) [15 switch table(s)] */
void f_125f4f60(void) {
  FTRACE(0x125f4f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f4f60 push ebp */
  push32((uint32_t)(EBP));
  /* 125f4f61 mov ebp, esp */
  EBP = (ESP);
  /* 125f4f63 push edi */
  push32((uint32_t)(EDI));
  /* 125f4f64 push esi */
  push32((uint32_t)(ESI));
  /* 125f4f65 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 125f4f68 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f4f6b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 125f4f6e mov eax, ecx */
  EAX = (ECX);
  /* 125f4f70 mov edx, ecx */
  EDX = (ECX);
  /* 125f4f72 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4f74 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4f76 jbe 0x125f4f80 */
  if ((C.cf||C.zf)) goto L_125f4f80;
  /* 125f4f78 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4f7a jb 0x125f50f8 */
  if (C.cf) goto L_125f50f8;
L_125f4f80:;
  /* 125f4f80 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 125f4f86 jne 0x125f4f9c */
  if (!C.zf) goto L_125f4f9c;
  /* 125f4f88 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125f4f8b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 125f4f8e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4f91 jb 0x125f4fbc */
  if (C.cf) goto L_125f4fbc;
  /* 125f4f93 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125f4f95 jmp dword ptr [edx*4 + 0x125f50a8] */
  switch (EDX) {
    case 0: goto L_125f50b8;
    case 1: goto L_125f50c0;
    case 2: goto L_125f50cc;
    case 3: goto L_125f50e0;
    default: x86_unimpl("switch@0x125f4f95 out of table"); return;
  }
L_125f4f9c:;
  /* 125f4f9c mov eax, edi */
  EAX = (EDI);
  /* 125f4f9e mov edx, 3 */
  EDX = (0x3u);
  /* 125f4fa3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f4fa6 jb 0x125f4fb4 */
  if (C.cf) goto L_125f4fb4;
  /* 125f4fa8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 125f4fab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4fad jmp dword ptr [eax*4 + 0x125f4fc0] */
  switch (EAX) {
    case 1: goto L_125f4fd0;
    case 2: goto L_125f4ffc;
    case 3: goto L_125f5020;
    default: x86_unimpl("switch@0x125f4fad out of table"); return;
  }
L_125f4fb4:;
  /* 125f4fb4 jmp dword ptr [ecx*4 + 0x125f50b8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x125f50b8)))); return;
  /* 125f4fbb nop  */
  /* nop */
L_125f4fbc:;
  /* 125f4fbc jmp dword ptr [ecx*4 + 0x125f503c] */
  switch (ECX) {
    case 0: goto L_125f509f;
    case 1: goto L_125f508c;
    case 2: goto L_125f5084;
    case 3: goto L_125f507c;
    case 4: goto L_125f5074;
    case 5: goto L_125f506c;
    case 6: goto L_125f5064;
    case 7: goto L_125f505c;
    default: x86_unimpl("switch@0x125f4fbc out of table"); return;
  }
  /* 125f4fc3 nop  */
  /* nop */
L_125f4fd0:;
  /* 125f4fd0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125f4fd2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125f4fd4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125f4fd6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125f4fd9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125f4fdc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125f4fdf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125f4fe2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125f4fe5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4fe8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 125f4feb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f4fee jb 0x125f4fbc */
  if (C.cf) goto L_125f4fbc;
  /* 125f4ff0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125f4ff2 jmp dword ptr [edx*4 + 0x125f50a8] */
  switch (EDX) {
    case 0: goto L_125f50b8;
    case 1: goto L_125f50c0;
    case 2: goto L_125f50cc;
    case 3: goto L_125f50e0;
    default: x86_unimpl("switch@0x125f4ff2 out of table"); return;
  }
  /* 125f4ff9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125f4ffc:;
  /* 125f4ffc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125f4ffe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125f5000 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125f5002 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125f5005 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125f5008 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125f500b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125f500e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5011 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5014 jb 0x125f4fbc */
  if (C.cf) goto L_125f4fbc;
  /* 125f5016 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125f5018 jmp dword ptr [edx*4 + 0x125f50a8] */
  switch (EDX) {
    case 0: goto L_125f50b8;
    case 1: goto L_125f50c0;
    case 2: goto L_125f50cc;
    case 3: goto L_125f50e0;
    default: x86_unimpl("switch@0x125f5018 out of table"); return;
  }
  /* 125f501f nop  */
  /* nop */
L_125f5020:;
  /* 125f5020 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125f5022 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125f5024 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125f5026 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 125f5027 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125f502a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 125f502b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f502e jb 0x125f4fbc */
  if (C.cf) goto L_125f4fbc;
  /* 125f5030 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125f5032 jmp dword ptr [edx*4 + 0x125f50a8] */
  switch (EDX) {
    case 0: goto L_125f50b8;
    case 1: goto L_125f50c0;
    case 2: goto L_125f50cc;
    case 3: goto L_125f50e0;
    default: x86_unimpl("switch@0x125f5032 out of table"); return;
  }
  /* 125f5039 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125f505c:;
  /* 125f505c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 125f5060 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_125f5064:;
  /* 125f5064 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 125f5068 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_125f506c:;
  /* 125f506c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 125f5070 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_125f5074:;
  /* 125f5074 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 125f5078 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_125f507c:;
  /* 125f507c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 125f5080 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_125f5084:;
  /* 125f5084 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 125f5088 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_125f508c:;
  /* 125f508c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 125f5090 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 125f5094 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 125f509b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125f509d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_125f509f:;
  /* 125f509f jmp dword ptr [edx*4 + 0x125f50a8] */
  switch (EDX) {
    case 0: goto L_125f50b8;
    case 1: goto L_125f50c0;
    case 2: goto L_125f50cc;
    case 3: goto L_125f50e0;
    default: x86_unimpl("switch@0x125f509f out of table"); return;
  }
  /* 125f50a6 mov edi, edi */
  EDI = (EDI);
L_125f50b8:;
  /* 125f50b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f50bb pop esi */
  ESI = (pop32());
  /* 125f50bc pop edi */
  EDI = (pop32());
  /* 125f50bd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125f50be ret  */
  ESPCHK(0x125f4f60u, _esp0);
  ESP += 4; return;
  /* 125f50bf nop  */
  /* nop */
L_125f50c0:;
  /* 125f50c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125f50c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125f50c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f50c7 pop esi */
  ESI = (pop32());
  /* 125f50c8 pop edi */
  EDI = (pop32());
  /* 125f50c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125f50ca ret  */
  ESPCHK(0x125f4f60u, _esp0);
  ESP += 4; return;
  /* 125f50cb nop  */
  /* nop */
L_125f50cc:;
  /* 125f50cc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125f50ce mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125f50d0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125f50d3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125f50d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f50d9 pop esi */
  ESI = (pop32());
  /* 125f50da pop edi */
  EDI = (pop32());
  /* 125f50db leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125f50dc ret  */
  ESPCHK(0x125f4f60u, _esp0);
  ESP += 4; return;
  /* 125f50dd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125f50e0:;
  /* 125f50e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125f50e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125f50e4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125f50e7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125f50ea mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125f50ed mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125f50f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f50f3 pop esi */
  ESI = (pop32());
  /* 125f50f4 pop edi */
  EDI = (pop32());
  /* 125f50f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125f50f6 ret  */
  ESPCHK(0x125f4f60u, _esp0);
  ESP += 4; return;
  /* 125f50f7 nop  */
  /* nop */
L_125f50f8:;
  /* 125f50f8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 125f50fc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 125f5100 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 125f5106 jne 0x125f512c */
  if (!C.zf) goto L_125f512c;
  /* 125f5108 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125f510b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 125f510e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5111 jb 0x125f5120 */
  if (C.cf) goto L_125f5120;
  /* 125f5113 std  */
  C.df=1;
  /* 125f5114 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125f5116 cld  */
  C.df=0;
  /* 125f5117 jmp dword ptr [edx*4 + 0x125f5240] */
  switch (EDX) {
    case 0: goto L_125f5250;
    case 1: goto L_125f5258;
    case 2: goto L_125f5268;
    case 3: goto L_125f527c;
    default: x86_unimpl("switch@0x125f5117 out of table"); return;
  }
  /* 125f511e mov edi, edi */
  EDI = (EDI);
L_125f5120:;
  /* 125f5120 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 125f5122 jmp dword ptr [ecx*4 + 0x125f51f0] */
  switch (ECX) {
    case 0: goto L_125f5237;
    default: x86_unimpl("switch@0x125f5122 out of table"); return;
  }
  /* 125f5129 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125f512c:;
  /* 125f512c mov eax, edi */
  EAX = (EDI);
  /* 125f512e mov edx, 3 */
  EDX = (0x3u);
  /* 125f5133 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5136 jb 0x125f5144 */
  if (C.cf) goto L_125f5144;
  /* 125f5138 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 125f513b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f513d jmp dword ptr [eax*4 + 0x125f5148] */
  switch (EAX) {
    case 1: goto L_125f5158;
    case 2: goto L_125f5178;
    case 3: goto L_125f51a0;
    default: x86_unimpl("switch@0x125f513d out of table"); return;
  }
L_125f5144:;
  /* 125f5144 jmp dword ptr [ecx*4 + 0x125f5240] */
  switch (ECX) {
    case 0: goto L_125f5250;
    case 1: goto L_125f5258;
    case 2: goto L_125f5268;
    case 3: goto L_125f527c;
    default: x86_unimpl("switch@0x125f5144 out of table"); return;
  }
  /* 125f514b nop  */
  /* nop */
L_125f5158:;
  /* 125f5158 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125f515b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125f515d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125f5160 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 125f5161 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125f5164 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 125f5165 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5168 jb 0x125f5120 */
  if (C.cf) goto L_125f5120;
  /* 125f516a std  */
  C.df=1;
  /* 125f516b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125f516d cld  */
  C.df=0;
  /* 125f516e jmp dword ptr [edx*4 + 0x125f5240] */
  switch (EDX) {
    case 0: goto L_125f5250;
    case 1: goto L_125f5258;
    case 2: goto L_125f5268;
    case 3: goto L_125f527c;
    default: x86_unimpl("switch@0x125f516e out of table"); return;
  }
  /* 125f5175 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125f5178:;
  /* 125f5178 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125f517b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125f517d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125f5180 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125f5183 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125f5186 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125f5189 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f518c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f518f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5192 jb 0x125f5120 */
  if (C.cf) goto L_125f5120;
  /* 125f5194 std  */
  C.df=1;
  /* 125f5195 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125f5197 cld  */
  C.df=0;
  /* 125f5198 jmp dword ptr [edx*4 + 0x125f5240] */
  switch (EDX) {
    case 0: goto L_125f5250;
    case 1: goto L_125f5258;
    case 2: goto L_125f5268;
    case 3: goto L_125f527c;
    default: x86_unimpl("switch@0x125f5198 out of table"); return;
  }
  /* 125f519f nop  */
  /* nop */
L_125f51a0:;
  /* 125f51a0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125f51a3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125f51a5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125f51a8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125f51ab mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125f51ae mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125f51b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125f51b4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125f51b7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f51ba sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f51bd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f51c0 jb 0x125f5120 */
  if (C.cf) goto L_125f5120;
  /* 125f51c6 std  */
  C.df=1;
  /* 125f51c7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 125f51c9 cld  */
  C.df=0;
  /* 125f51ca jmp dword ptr [edx*4 + 0x125f5240] */
  switch (EDX) {
    case 0: goto L_125f5250;
    case 1: goto L_125f5258;
    case 2: goto L_125f5268;
    case 3: goto L_125f527c;
    default: x86_unimpl("switch@0x125f51ca out of table"); return;
  }
  /* 125f51d1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 125f51d4 hlt  */
  x86_unimpl("hlt @ 0x125f51d4");
  /* 125f51d5 push ecx */
  push32((uint32_t)(ECX));
  /* 125f51d6 pop edi */
  EDI = (pop32());
  /* 125f51d7 adc bh, ah */
  { uint32_t _a=(C.b.b.h),_b=(AH),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 125f51d9 push ecx */
  push32((uint32_t)(ECX));
  /* 125f51da pop edi */
  EDI = (pop32());
  /* 125f51db adc al, byte ptr [edx + edx*2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDX + EDX*2))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 125f51de pop edi */
  EDI = (pop32());
  /* 125f51df adc cl, byte ptr [edx + edx*2] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EDX + EDX*2))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 125f51e2 pop edi */
  EDI = (pop32());
  /* 125f51e3 adc dl, byte ptr [edx + edx*2] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EDX + EDX*2))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 125f51e6 pop edi */
  EDI = (pop32());
  /* 125f51e7 adc bl, byte ptr [edx + edx*2] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EDX + EDX*2))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 125f51ea pop edi */
  EDI = (pop32());
  /* 125f51eb adc ah, byte ptr [edx + edx*2] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(EDX + EDX*2))),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 125f51ee pop edi */
  EDI = (pop32());
  /* 125f51f4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 125f51f8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 125f51fc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 125f5200 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 125f5204 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 125f5208 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 125f520c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 125f5210 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 125f5214 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 125f5218 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 125f521c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 125f5220 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 125f5224 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 125f5228 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 125f522c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 125f5233 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5235 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_125f5237:;
  /* 125f5237 jmp dword ptr [edx*4 + 0x125f5240] */
  switch (EDX) {
    case 0: goto L_125f5250;
    case 1: goto L_125f5258;
    case 2: goto L_125f5268;
    case 3: goto L_125f527c;
    default: x86_unimpl("switch@0x125f5237 out of table"); return;
  }
  /* 125f523e mov edi, edi */
  EDI = (EDI);
L_125f5250:;
  /* 125f5250 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5253 pop esi */
  ESI = (pop32());
  /* 125f5254 pop edi */
  EDI = (pop32());
  /* 125f5255 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125f5256 ret  */
  ESPCHK(0x125f4f60u, _esp0);
  ESP += 4; return;
  /* 125f5257 nop  */
  /* nop */
L_125f5258:;
  /* 125f5258 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125f525b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125f525e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5261 pop esi */
  ESI = (pop32());
  /* 125f5262 pop edi */
  EDI = (pop32());
  /* 125f5263 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125f5264 ret  */
  ESPCHK(0x125f4f60u, _esp0);
  ESP += 4; return;
  /* 125f5265 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125f5268:;
  /* 125f5268 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125f526b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125f526e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125f5271 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125f5274 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5277 pop esi */
  ESI = (pop32());
  /* 125f5278 pop edi */
  EDI = (pop32());
  /* 125f5279 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125f527a ret  */
  ESPCHK(0x125f4f60u, _esp0);
  ESP += 4; return;
  /* 125f527b nop  */
  /* nop */
L_125f527c:;
  /* 125f527c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 125f527f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 125f5282 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 125f5285 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 125f5288 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 125f528b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 125f528e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5291 pop esi */
  ESI = (pop32());
  /* 125f5292 pop edi */
  EDI = (pop32());
  /* 125f5293 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125f5294 ret  */
  ESPCHK(0x125f4f60u, _esp0);
  ESP += 4; return;
}

/* FUN_100152a0 @ 0x125f52a0 (421 bytes, 148 insns) */
void f_125f52a0(void) {
  FTRACE(0x125f52a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f52a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f52a1 mov ebp, esp */
  EBP = (ESP);
  /* 125f52a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125f52a5 push 0x12614a88 */
  push32((uint32_t)(0x12614a88u));
  /* 125f52aa push 0x125f6178 */
  push32((uint32_t)(0x125f6178u));
  /* 125f52af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 125f52b5 push eax */
  push32((uint32_t)(EAX));
  /* 125f52b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 125f52bd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f52c0 push ebx */
  push32((uint32_t)(EBX));
  /* 125f52c1 push esi */
  push32((uint32_t)(ESI));
  /* 125f52c2 push edi */
  push32((uint32_t)(EDI));
  /* 125f52c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125f52c6 cmp dword ptr [0x12618fe4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12618fe4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f52cd jne 0x125f531e */
  if (!C.zf) goto L_125f531e;
  /* 125f52cf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 125f52d2 push eax */
  push32((uint32_t)(EAX));
  /* 125f52d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f52d5 push 0x12614a80 */
  push32((uint32_t)(0x12614a80u));
  /* 125f52da push 1 */
  push32((uint32_t)(0x1u));
  /* 125f52dc call dword ptr [0x1261b338] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b338))), 0x125f52e2u);
  /* 125f52e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f52e4 je 0x125f52f2 */
  if (C.zf) goto L_125f52f2;
  /* 125f52e6 mov dword ptr [0x12618fe4], 1 */
  w32((uint32_t)(0x12618fe4), (0x1u));
  /* 125f52f0 jmp 0x125f531e */
  goto L_125f531e;
L_125f52f2:;
  /* 125f52f2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 125f52f5 push ecx */
  push32((uint32_t)(ECX));
  /* 125f52f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f52f8 push 0x12614a7c */
  push32((uint32_t)(0x12614a7cu));
  /* 125f52fd push 1 */
  push32((uint32_t)(0x1u));
  /* 125f52ff push 0 */
  push32((uint32_t)(0x0u));
  /* 125f5301 call dword ptr [0x1261b33c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b33c))), 0x125f5307u);
  /* 125f5307 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f5309 je 0x125f5317 */
  if (C.zf) goto L_125f5317;
  /* 125f530b mov dword ptr [0x12618fe4], 2 */
  w32((uint32_t)(0x12618fe4), (0x2u));
  /* 125f5315 jmp 0x125f531e */
  goto L_125f531e;
L_125f5317:;
  /* 125f5317 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f5319 jmp 0x125f5448 */
  goto L_125f5448;
L_125f531e:;
  /* 125f531e cmp dword ptr [0x12618fe4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12618fe4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5325 jne 0x125f5355 */
  if (!C.zf) goto L_125f5355;
  /* 125f5327 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f532b jne 0x125f5336 */
  if (!C.zf) goto L_125f5336;
  /* 125f532d mov edx, dword ptr [0x12618ff0] */
  EDX = (r32((uint32_t)(0x12618ff0)));
  /* 125f5333 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_125f5336:;
  /* 125f5336 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125f5339 push eax */
  push32((uint32_t)(EAX));
  /* 125f533a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f533d push ecx */
  push32((uint32_t)(ECX));
  /* 125f533e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f5341 push edx */
  push32((uint32_t)(EDX));
  /* 125f5342 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5345 push eax */
  push32((uint32_t)(EAX));
  /* 125f5346 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 125f5349 push ecx */
  push32((uint32_t)(ECX));
  /* 125f534a call dword ptr [0x1261b33c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b33c))), 0x125f5350u);
  /* 125f5350 jmp 0x125f5448 */
  goto L_125f5448;
L_125f5355:;
  /* 125f5355 cmp dword ptr [0x12618fe4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12618fe4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f535c jne 0x125f5446 */
  if (!C.zf) goto L_125f5446;
  /* 125f5362 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5366 jne 0x125f5371 */
  if (!C.zf) goto L_125f5371;
  /* 125f5368 mov edx, dword ptr [0x12619000] */
  EDX = (r32((uint32_t)(0x12619000)));
  /* 125f536e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_125f5371:;
  /* 125f5371 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f5373 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f5375 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f5378 push eax */
  push32((uint32_t)(EAX));
  /* 125f5379 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f537c push ecx */
  push32((uint32_t)(ECX));
  /* 125f537d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 125f5380 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 125f5382 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f5384 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 125f5387 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f538a push edx */
  push32((uint32_t)(EDX));
  /* 125f538b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125f538e push eax */
  push32((uint32_t)(EAX));
  /* 125f538f call dword ptr [0x1261b340] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b340))), 0x125f5395u);
  /* 125f5395 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125f5398 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f539c jne 0x125f53a5 */
  if (!C.zf) goto L_125f53a5;
  /* 125f539e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f53a0 jmp 0x125f5448 */
  goto L_125f5448;
L_125f53a5:;
  /* 125f53a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125f53ac mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f53af shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125f53b1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f53b4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125f53b6 call 0x125f0210 */
  push32(0x125f53bbu); f_125f0210();
  /* 125f53bb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 125f53be mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125f53c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f53c4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 125f53c7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f53ca shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 125f53cc push edx */
  push32((uint32_t)(EDX));
  /* 125f53cd push 0 */
  push32((uint32_t)(0x0u));
  /* 125f53cf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f53d2 push eax */
  push32((uint32_t)(EAX));
  /* 125f53d3 call 0x125f0de0 */
  push32(0x125f53d8u); f_125f0de0();
  /* 125f53d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f53db mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125f53e2 jmp 0x125f53fb */
  goto L_125f53fb;
  /* 125f53e4 mov eax, 1 */
  EAX = (0x1u);
  /* 125f53e9 ret  */
  ESPCHK(0x125f52a0u, _esp0);
  ESP += 4; return;
  /* 125f53ea mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 125f53ed mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 125f53f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125f53fb:;
  /* 125f53fb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f53ff jne 0x125f5405 */
  if (!C.zf) goto L_125f5405;
  /* 125f5401 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f5403 jmp 0x125f5448 */
  goto L_125f5448;
L_125f5405:;
  /* 125f5405 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f5408 push ecx */
  push32((uint32_t)(ECX));
  /* 125f5409 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f540c push edx */
  push32((uint32_t)(EDX));
  /* 125f540d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f5410 push eax */
  push32((uint32_t)(EAX));
  /* 125f5411 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f5414 push ecx */
  push32((uint32_t)(ECX));
  /* 125f5415 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f5417 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125f541a push edx */
  push32((uint32_t)(EDX));
  /* 125f541b call dword ptr [0x1261b340] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b340))), 0x125f5421u);
  /* 125f5421 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 125f5424 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5428 jne 0x125f542e */
  if (!C.zf) goto L_125f542e;
  /* 125f542a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f542c jmp 0x125f5448 */
  goto L_125f5448;
L_125f542e:;
  /* 125f542e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125f5431 push eax */
  push32((uint32_t)(EAX));
  /* 125f5432 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f5435 push ecx */
  push32((uint32_t)(ECX));
  /* 125f5436 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f5439 push edx */
  push32((uint32_t)(EDX));
  /* 125f543a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f543d push eax */
  push32((uint32_t)(EAX));
  /* 125f543e call dword ptr [0x1261b338] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b338))), 0x125f5444u);
  /* 125f5444 jmp 0x125f5448 */
  goto L_125f5448;
L_125f5446:;
  /* 125f5446 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125f5448:;
  /* 125f5448 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 125f544b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f544e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 125f5455 pop edi */
  EDI = (pop32());
  /* 125f5456 pop esi */
  ESI = (pop32());
  /* 125f5457 pop ebx */
  EBX = (pop32());
  /* 125f5458 mov esp, ebp */
  ESP = (EBP);
  /* 125f545a pop ebp */
  EBP = (pop32());
  /* 125f545b ret  */
  ESPCHK(0x125f52a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015460 @ 0x125f5460 (727 bytes, 263 insns) */
void f_125f5460(void) {
  FTRACE(0x125f5460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f5460 push ebp */
  push32((uint32_t)(EBP));
  /* 125f5461 mov ebp, esp */
  EBP = (ESP);
  /* 125f5463 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125f5465 push 0x12614a98 */
  push32((uint32_t)(0x12614a98u));
  /* 125f546a push 0x125f6178 */
  push32((uint32_t)(0x125f6178u));
  /* 125f546f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 125f5475 push eax */
  push32((uint32_t)(EAX));
  /* 125f5476 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 125f547d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5480 push ebx */
  push32((uint32_t)(EBX));
  /* 125f5481 push esi */
  push32((uint32_t)(ESI));
  /* 125f5482 push edi */
  push32((uint32_t)(EDI));
  /* 125f5483 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125f5486 cmp dword ptr [0x12619008], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619008))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f548d jne 0x125f54e6 */
  if (!C.zf) goto L_125f54e6;
  /* 125f548f push 0 */
  push32((uint32_t)(0x0u));
  /* 125f5491 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f5493 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f5495 push 0x12614a80 */
  push32((uint32_t)(0x12614a80u));
  /* 125f549a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 125f549f push 0 */
  push32((uint32_t)(0x0u));
  /* 125f54a1 call dword ptr [0x1261b330] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b330))), 0x125f54a7u);
  /* 125f54a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f54a9 je 0x125f54b7 */
  if (C.zf) goto L_125f54b7;
  /* 125f54ab mov dword ptr [0x12619008], 1 */
  w32((uint32_t)(0x12619008), (0x1u));
  /* 125f54b5 jmp 0x125f54e6 */
  goto L_125f54e6;
L_125f54b7:;
  /* 125f54b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f54b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f54bb push 1 */
  push32((uint32_t)(0x1u));
  /* 125f54bd push 0x12614a7c */
  push32((uint32_t)(0x12614a7cu));
  /* 125f54c2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 125f54c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f54c9 call dword ptr [0x1261b334] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b334))), 0x125f54cfu);
  /* 125f54cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f54d1 je 0x125f54df */
  if (C.zf) goto L_125f54df;
  /* 125f54d3 mov dword ptr [0x12619008], 2 */
  w32((uint32_t)(0x12619008), (0x2u));
  /* 125f54dd jmp 0x125f54e6 */
  goto L_125f54e6;
L_125f54df:;
  /* 125f54df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f54e1 jmp 0x125f5751 */
  goto L_125f5751;
L_125f54e6:;
  /* 125f54e6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f54ea jle 0x125f54ff */
  if ((C.zf||C.sf!=C.of)) goto L_125f54ff;
  /* 125f54ec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125f54ef push eax */
  push32((uint32_t)(EAX));
  /* 125f54f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f54f3 push ecx */
  push32((uint32_t)(ECX));
  /* 125f54f4 call 0x125f5770 */
  push32(0x125f54f9u); f_125f5770();
  /* 125f54f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f54fc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_125f54ff:;
  /* 125f54ff cmp dword ptr [0x12619008], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12619008))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5506 jne 0x125f552b */
  if (!C.zf) goto L_125f552b;
  /* 125f5508 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 125f550b push edx */
  push32((uint32_t)(EDX));
  /* 125f550c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125f550f push eax */
  push32((uint32_t)(EAX));
  /* 125f5510 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125f5513 push ecx */
  push32((uint32_t)(ECX));
  /* 125f5514 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f5517 push edx */
  push32((uint32_t)(EDX));
  /* 125f5518 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f551b push eax */
  push32((uint32_t)(EAX));
  /* 125f551c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f551f push ecx */
  push32((uint32_t)(ECX));
  /* 125f5520 call dword ptr [0x1261b334] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b334))), 0x125f5526u);
  /* 125f5526 jmp 0x125f5751 */
  goto L_125f5751;
L_125f552b:;
  /* 125f552b cmp dword ptr [0x12619008], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12619008))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5532 jne 0x125f574f */
  if (!C.zf) goto L_125f574f;
  /* 125f5538 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f553c jne 0x125f5547 */
  if (!C.zf) goto L_125f5547;
  /* 125f553e mov edx, dword ptr [0x12619000] */
  EDX = (r32((uint32_t)(0x12619000)));
  /* 125f5544 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_125f5547:;
  /* 125f5547 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f5549 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f554b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125f554e push eax */
  push32((uint32_t)(EAX));
  /* 125f554f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f5552 push ecx */
  push32((uint32_t)(ECX));
  /* 125f5553 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 125f5556 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 125f5558 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f555a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 125f555d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5560 push edx */
  push32((uint32_t)(EDX));
  /* 125f5561 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 125f5564 push eax */
  push32((uint32_t)(EAX));
  /* 125f5565 call dword ptr [0x1261b340] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b340))), 0x125f556bu);
  /* 125f556b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 125f556e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5572 jne 0x125f557b */
  if (!C.zf) goto L_125f557b;
  /* 125f5574 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f5576 jmp 0x125f5751 */
  goto L_125f5751;
L_125f557b:;
  /* 125f557b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125f5582 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f5585 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125f5587 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f558a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125f558c call 0x125f0210 */
  push32(0x125f5591u); f_125f0210();
  /* 125f5591 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 125f5594 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125f5597 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f559a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 125f559d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125f55a4 jmp 0x125f55bd */
  goto L_125f55bd;
  /* 125f55a6 mov eax, 1 */
  EAX = (0x1u);
  /* 125f55ab ret  */
  ESPCHK(0x125f5460u, _esp0);
  ESP += 4; return;
  /* 125f55ac mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 125f55af mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 125f55b6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125f55bd:;
  /* 125f55bd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f55c1 jne 0x125f55ca */
  if (!C.zf) goto L_125f55ca;
  /* 125f55c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f55c5 jmp 0x125f5751 */
  goto L_125f5751;
L_125f55ca:;
  /* 125f55ca mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f55cd push edx */
  push32((uint32_t)(EDX));
  /* 125f55ce mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f55d1 push eax */
  push32((uint32_t)(EAX));
  /* 125f55d2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125f55d5 push ecx */
  push32((uint32_t)(ECX));
  /* 125f55d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f55d9 push edx */
  push32((uint32_t)(EDX));
  /* 125f55da push 1 */
  push32((uint32_t)(0x1u));
  /* 125f55dc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 125f55df push eax */
  push32((uint32_t)(EAX));
  /* 125f55e0 call dword ptr [0x1261b340] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b340))), 0x125f55e6u);
  /* 125f55e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f55e8 jne 0x125f55f1 */
  if (!C.zf) goto L_125f55f1;
  /* 125f55ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f55ec jmp 0x125f5751 */
  goto L_125f5751;
L_125f55f1:;
  /* 125f55f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f55f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f55f5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f55f8 push ecx */
  push32((uint32_t)(ECX));
  /* 125f55f9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f55fc push edx */
  push32((uint32_t)(EDX));
  /* 125f55fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f5600 push eax */
  push32((uint32_t)(EAX));
  /* 125f5601 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5604 push ecx */
  push32((uint32_t)(ECX));
  /* 125f5605 call dword ptr [0x1261b330] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b330))), 0x125f560bu);
  /* 125f560b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 125f560e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5612 jne 0x125f561b */
  if (!C.zf) goto L_125f561b;
  /* 125f5614 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f5616 jmp 0x125f5751 */
  goto L_125f5751;
L_125f561b:;
  /* 125f561b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f561e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 125f5624 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f5626 je 0x125f566b */
  if (C.zf) goto L_125f566b;
  /* 125f5628 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f562c je 0x125f5666 */
  if (C.zf) goto L_125f5666;
  /* 125f562e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f5631 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5634 jle 0x125f563d */
  if ((C.zf||C.sf!=C.of)) goto L_125f563d;
  /* 125f5636 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f5638 jmp 0x125f5751 */
  goto L_125f5751;
L_125f563d:;
  /* 125f563d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 125f5640 push ecx */
  push32((uint32_t)(ECX));
  /* 125f5641 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125f5644 push edx */
  push32((uint32_t)(EDX));
  /* 125f5645 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f5648 push eax */
  push32((uint32_t)(EAX));
  /* 125f5649 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f564c push ecx */
  push32((uint32_t)(ECX));
  /* 125f564d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f5650 push edx */
  push32((uint32_t)(EDX));
  /* 125f5651 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5654 push eax */
  push32((uint32_t)(EAX));
  /* 125f5655 call dword ptr [0x1261b330] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b330))), 0x125f565bu);
  /* 125f565b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f565d jne 0x125f5666 */
  if (!C.zf) goto L_125f5666;
  /* 125f565f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f5661 jmp 0x125f5751 */
  goto L_125f5751;
L_125f5666:;
  /* 125f5666 jmp 0x125f574a */
  goto L_125f574a;
L_125f566b:;
  /* 125f566b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f566e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 125f5671 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125f5678 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f567b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125f567d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5680 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125f5682 call 0x125f0210 */
  push32(0x125f5687u); f_125f0210();
  /* 125f5687 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 125f568a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125f568d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 125f5690 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 125f5693 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125f569a jmp 0x125f56b3 */
  goto L_125f56b3;
  /* 125f569c mov eax, 1 */
  EAX = (0x1u);
  /* 125f56a1 ret  */
  ESPCHK(0x125f5460u, _esp0);
  ESP += 4; return;
  /* 125f56a2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 125f56a5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 125f56ac mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125f56b3:;
  /* 125f56b3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f56b7 jne 0x125f56c0 */
  if (!C.zf) goto L_125f56c0;
  /* 125f56b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f56bb jmp 0x125f5751 */
  goto L_125f5751;
L_125f56c0:;
  /* 125f56c0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f56c3 push eax */
  push32((uint32_t)(EAX));
  /* 125f56c4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f56c7 push ecx */
  push32((uint32_t)(ECX));
  /* 125f56c8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f56cb push edx */
  push32((uint32_t)(EDX));
  /* 125f56cc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f56cf push eax */
  push32((uint32_t)(EAX));
  /* 125f56d0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f56d3 push ecx */
  push32((uint32_t)(ECX));
  /* 125f56d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f56d7 push edx */
  push32((uint32_t)(EDX));
  /* 125f56d8 call dword ptr [0x1261b330] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b330))), 0x125f56deu);
  /* 125f56de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f56e0 jne 0x125f56e6 */
  if (!C.zf) goto L_125f56e6;
  /* 125f56e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f56e4 jmp 0x125f5751 */
  goto L_125f5751;
L_125f56e6:;
  /* 125f56e6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f56ea jne 0x125f571a */
  if (!C.zf) goto L_125f571a;
  /* 125f56ec push 0 */
  push32((uint32_t)(0x0u));
  /* 125f56ee push 0 */
  push32((uint32_t)(0x0u));
  /* 125f56f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f56f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f56f4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f56f7 push eax */
  push32((uint32_t)(EAX));
  /* 125f56f8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f56fb push ecx */
  push32((uint32_t)(ECX));
  /* 125f56fc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 125f5701 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 125f5704 push edx */
  push32((uint32_t)(EDX));
  /* 125f5705 call dword ptr [0x1261b38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b38c))), 0x125f570bu);
  /* 125f570b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 125f570e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5712 jne 0x125f5718 */
  if (!C.zf) goto L_125f5718;
  /* 125f5714 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f5716 jmp 0x125f5751 */
  goto L_125f5751;
L_125f5718:;
  /* 125f5718 jmp 0x125f574a */
  goto L_125f574a;
L_125f571a:;
  /* 125f571a push 0 */
  push32((uint32_t)(0x0u));
  /* 125f571c push 0 */
  push32((uint32_t)(0x0u));
  /* 125f571e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 125f5721 push eax */
  push32((uint32_t)(EAX));
  /* 125f5722 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125f5725 push ecx */
  push32((uint32_t)(ECX));
  /* 125f5726 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f5729 push edx */
  push32((uint32_t)(EDX));
  /* 125f572a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f572d push eax */
  push32((uint32_t)(EAX));
  /* 125f572e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 125f5733 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 125f5736 push ecx */
  push32((uint32_t)(ECX));
  /* 125f5737 call dword ptr [0x1261b38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b38c))), 0x125f573du);
  /* 125f573d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 125f5740 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5744 jne 0x125f574a */
  if (!C.zf) goto L_125f574a;
  /* 125f5746 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f5748 jmp 0x125f5751 */
  goto L_125f5751;
L_125f574a:;
  /* 125f574a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f574d jmp 0x125f5751 */
  goto L_125f5751;
L_125f574f:;
  /* 125f574f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125f5751:;
  /* 125f5751 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 125f5754 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f5757 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 125f575e pop edi */
  EDI = (pop32());
  /* 125f575f pop esi */
  ESI = (pop32());
  /* 125f5760 pop ebx */
  EBX = (pop32());
  /* 125f5761 mov esp, ebp */
  ESP = (EBP);
  /* 125f5763 pop ebp */
  EBP = (pop32());
  /* 125f5764 ret  */
  ESPCHK(0x125f5460u, _esp0);
  ESP += 4; return;
}

/* FUN_10015770 @ 0x125f5770 (80 bytes, 32 insns) */
void f_125f5770(void) {
  FTRACE(0x125f5770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f5770 push ebp */
  push32((uint32_t)(EBP));
  /* 125f5771 mov ebp, esp */
  EBP = (ESP);
  /* 125f5773 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f5776 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f5779 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125f577c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f577f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125f5782:;
  /* 125f5782 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f5785 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f5788 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f578b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125f578e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f5790 je 0x125f57a7 */
  if (C.zf) goto L_125f57a7;
  /* 125f5792 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5795 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125f5798 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f579a je 0x125f57a7 */
  if (C.zf) goto L_125f57a7;
  /* 125f579c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f579f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f57a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f57a5 jmp 0x125f5782 */
  goto L_125f5782;
L_125f57a7:;
  /* 125f57a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f57aa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125f57ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f57af jne 0x125f57b9 */
  if (!C.zf) goto L_125f57b9;
  /* 125f57b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f57b4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f57b7 jmp 0x125f57bc */
  goto L_125f57bc;
L_125f57b9:;
  /* 125f57b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_125f57bc:;
  /* 125f57bc mov esp, ebp */
  ESP = (EBP);
  /* 125f57be pop ebp */
  EBP = (pop32());
  /* 125f57bf ret  */
  ESPCHK(0x125f5770u, _esp0);
  ESP += 4; return;
}

/* FUN_100157c0 @ 0x125f57c0 (130 bytes, 43 insns) */
void f_125f57c0(void) {
  FTRACE(0x125f57c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f57c0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f57c1 mov ebp, esp */
  EBP = (ESP);
  /* 125f57c3 push ecx */
  push32((uint32_t)(ECX));
  /* 125f57c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f57c7 cmp eax, dword ptr [0x1261a8fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1261a8fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f57cd jae 0x125f57f1 */
  if (!C.cf) goto L_125f57f1;
  /* 125f57cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f57d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125f57d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f57d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 125f57db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f57de mov eax, dword ptr [ecx*4 + 0x1261a7c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1261a7c0)));
  /* 125f57e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 125f57ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125f57ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f57ef jne 0x125f580c */
  if (!C.zf) goto L_125f580c;
L_125f57f1:;
  /* 125f57f1 call 0x125f4f40 */
  push32(0x125f57f6u); f_125f4f40();
  /* 125f57f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 125f57fc call 0x125f4f50 */
  push32(0x125f5801u); f_125f4f50();
  /* 125f5801 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125f5807 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f580a jmp 0x125f583e */
  goto L_125f583e;
L_125f580c:;
  /* 125f580c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f580f push edx */
  push32((uint32_t)(EDX));
  /* 125f5810 call 0x125f6760 */
  push32(0x125f5815u); f_125f6760();
  /* 125f5815 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5818 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f581b push eax */
  push32((uint32_t)(EAX));
  /* 125f581c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f581f push ecx */
  push32((uint32_t)(ECX));
  /* 125f5820 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5823 push edx */
  push32((uint32_t)(EDX));
  /* 125f5824 call 0x125f5850 */
  push32(0x125f5829u); f_125f5850();
  /* 125f5829 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f582c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f582f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5832 push eax */
  push32((uint32_t)(EAX));
  /* 125f5833 call 0x125f67f0 */
  push32(0x125f5838u); f_125f67f0();
  /* 125f5838 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f583b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125f583e:;
  /* 125f583e mov esp, ebp */
  ESP = (EBP);
  /* 125f5840 pop ebp */
  EBP = (pop32());
  /* 125f5841 ret  */
  ESPCHK(0x125f57c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015850 @ 0x125f5850 (178 bytes, 56 insns) */
void f_125f5850(void) {
  FTRACE(0x125f5850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f5850 push ebp */
  push32((uint32_t)(EBP));
  /* 125f5851 mov ebp, esp */
  EBP = (ESP);
  /* 125f5853 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f5856 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5859 push eax */
  push32((uint32_t)(EAX));
  /* 125f585a call 0x125f65e0 */
  push32(0x125f585fu); f_125f65e0();
  /* 125f585f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5862 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125f5865 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5869 jne 0x125f587e */
  if (!C.zf) goto L_125f587e;
  /* 125f586b call 0x125f4f40 */
  push32(0x125f5870u); f_125f4f40();
  /* 125f5870 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 125f5876 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f5879 jmp 0x125f58fe */
  goto L_125f58fe;
L_125f587e:;
  /* 125f587e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f5881 push ecx */
  push32((uint32_t)(ECX));
  /* 125f5882 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f5884 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f5887 push edx */
  push32((uint32_t)(EDX));
  /* 125f5888 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f588b push eax */
  push32((uint32_t)(EAX));
  /* 125f588c call dword ptr [0x1261b32c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b32c))), 0x125f5892u);
  /* 125f5892 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125f5895 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5899 jne 0x125f58a6 */
  if (!C.zf) goto L_125f58a6;
  /* 125f589b call dword ptr [0x1261b400] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b400))), 0x125f58a1u);
  /* 125f58a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f58a4 jmp 0x125f58ad */
  goto L_125f58ad;
L_125f58a6:;
  /* 125f58a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_125f58ad:;
  /* 125f58ad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f58b1 je 0x125f58c4 */
  if (C.zf) goto L_125f58c4;
  /* 125f58b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f58b6 push ecx */
  push32((uint32_t)(ECX));
  /* 125f58b7 call 0x125f4ea0 */
  push32(0x125f58bcu); f_125f4ea0();
  /* 125f58bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f58bf or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f58c2 jmp 0x125f58fe */
  goto L_125f58fe;
L_125f58c4:;
  /* 125f58c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f58c7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 125f58ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f58cd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 125f58d0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f58d3 mov ecx, dword ptr [edx*4 + 0x1261a7c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1261a7c0)));
  /* 125f58da mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 125f58de and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 125f58e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f58e4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125f58e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f58ea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125f58ed imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f58f0 mov eax, dword ptr [eax*4 + 0x1261a7c0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1261a7c0)));
  /* 125f58f7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 125f58fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_125f58fe:;
  /* 125f58fe mov esp, ebp */
  ESP = (EBP);
  /* 125f5900 pop ebp */
  EBP = (pop32());
  /* 125f5901 ret  */
  ESPCHK(0x125f5850u, _esp0);
  ESP += 4; return;
}

/* FUN_10015910 @ 0x125f5910 (130 bytes, 43 insns) */
void f_125f5910(void) {
  FTRACE(0x125f5910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f5910 push ebp */
  push32((uint32_t)(EBP));
  /* 125f5911 mov ebp, esp */
  EBP = (ESP);
  /* 125f5913 push ecx */
  push32((uint32_t)(ECX));
  /* 125f5914 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5917 cmp eax, dword ptr [0x1261a8fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1261a8fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f591d jae 0x125f5941 */
  if (!C.cf) goto L_125f5941;
  /* 125f591f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5922 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125f5925 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5928 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 125f592b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f592e mov eax, dword ptr [ecx*4 + 0x1261a7c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1261a7c0)));
  /* 125f5935 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 125f593a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125f593d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f593f jne 0x125f595c */
  if (!C.zf) goto L_125f595c;
L_125f5941:;
  /* 125f5941 call 0x125f4f40 */
  push32(0x125f5946u); f_125f4f40();
  /* 125f5946 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 125f594c call 0x125f4f50 */
  push32(0x125f5951u); f_125f4f50();
  /* 125f5951 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125f5957 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f595a jmp 0x125f598e */
  goto L_125f598e;
L_125f595c:;
  /* 125f595c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f595f push edx */
  push32((uint32_t)(EDX));
  /* 125f5960 call 0x125f6760 */
  push32(0x125f5965u); f_125f6760();
  /* 125f5965 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5968 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f596b push eax */
  push32((uint32_t)(EAX));
  /* 125f596c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f596f push ecx */
  push32((uint32_t)(ECX));
  /* 125f5970 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5973 push edx */
  push32((uint32_t)(EDX));
  /* 125f5974 call 0x125f59a0 */
  push32(0x125f5979u); f_125f59a0();
  /* 125f5979 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f597c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f597f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5982 push eax */
  push32((uint32_t)(EAX));
  /* 125f5983 call 0x125f67f0 */
  push32(0x125f5988u); f_125f67f0();
  /* 125f5988 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f598b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125f598e:;
  /* 125f598e mov esp, ebp */
  ESP = (EBP);
  /* 125f5990 pop ebp */
  EBP = (pop32());
  /* 125f5991 ret  */
  ESPCHK(0x125f5910u, _esp0);
  ESP += 4; return;
}

/* FUN_100159a0 @ 0x125f59a0 (627 bytes, 182 insns) */
void f_125f59a0(void) {
  FTRACE(0x125f59a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f59a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f59a1 mov ebp, esp */
  EBP = (ESP);
  /* 125f59a3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f59a9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125f59b0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f59b3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 125f59b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f59bd jne 0x125f59c6 */
  if (!C.zf) goto L_125f59c6;
  /* 125f59bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f59c1 jmp 0x125f5c0f */
  goto L_125f5c0f;
L_125f59c6:;
  /* 125f59c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f59c9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125f59cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f59cf and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 125f59d2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f59d5 mov eax, dword ptr [ecx*4 + 0x1261a7c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1261a7c0)));
  /* 125f59dc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 125f59e1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 125f59e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f59e6 je 0x125f59f8 */
  if (C.zf) goto L_125f59f8;
  /* 125f59e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f59ea push 0 */
  push32((uint32_t)(0x0u));
  /* 125f59ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f59ef push edx */
  push32((uint32_t)(EDX));
  /* 125f59f0 call 0x125f5850 */
  push32(0x125f59f5u); f_125f5850();
  /* 125f59f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f59f8:;
  /* 125f59f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f59fb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125f59fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5a01 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125f5a04 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f5a07 mov edx, dword ptr [eax*4 + 0x1261a7c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1261a7c0)));
  /* 125f5a0e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 125f5a13 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 125f5a18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f5a1a je 0x125f5b2c */
  if (C.zf) goto L_125f5b2c;
  /* 125f5a20 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f5a23 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125f5a26 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_125f5a2d:;
  /* 125f5a2d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5a30 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f5a33 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5a36 jae 0x125f5b2a */
  if (!C.cf) goto L_125f5b2a;
  /* 125f5a3c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 125f5a42 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125f5a45:;
  /* 125f5a45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f5a48 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 125f5a4e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f5a50 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5a56 jge 0x125f5ab7 */
  if ((C.sf==C.of)) goto L_125f5ab7;
  /* 125f5a58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5a5b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f5a5e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5a61 jae 0x125f5ab7 */
  if (!C.cf) goto L_125f5ab7;
  /* 125f5a63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5a66 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125f5a68 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 125f5a6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5a71 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5a74 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f5a77 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 125f5a7e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5a81 jne 0x125f5aa1 */
  if (!C.zf) goto L_125f5aa1;
  /* 125f5a83 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 125f5a89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5a8c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 125f5a92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f5a95 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 125f5a98 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f5a9b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5a9e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_125f5aa1:;
  /* 125f5aa1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f5aa4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 125f5aaa mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 125f5aac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f5aaf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5ab2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f5ab5 jmp 0x125f5a45 */
  goto L_125f5a45;
L_125f5ab7:;
  /* 125f5ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f5ab9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 125f5abf push edx */
  push32((uint32_t)(EDX));
  /* 125f5ac0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f5ac3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 125f5ac9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f5acb push eax */
  push32((uint32_t)(EAX));
  /* 125f5acc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 125f5ad2 push edx */
  push32((uint32_t)(EDX));
  /* 125f5ad3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5ad6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125f5ad9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5adc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125f5adf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f5ae2 mov edx, dword ptr [eax*4 + 0x1261a7c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1261a7c0)));
  /* 125f5ae9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 125f5aec push eax */
  push32((uint32_t)(EAX));
  /* 125f5aed call dword ptr [0x1261b3c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b3c4))), 0x125f5af3u);
  /* 125f5af3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f5af5 je 0x125f5b1a */
  if (C.zf) goto L_125f5b1a;
  /* 125f5af7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f5afa add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5b00 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 125f5b03 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f5b06 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 125f5b0c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f5b0e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5b14 jge 0x125f5b18 */
  if ((C.sf==C.of)) goto L_125f5b18;
  /* 125f5b16 jmp 0x125f5b2a */
  goto L_125f5b2a;
L_125f5b18:;
  /* 125f5b18 jmp 0x125f5b25 */
  goto L_125f5b25;
L_125f5b1a:;
  /* 125f5b1a call dword ptr [0x1261b400] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b400))), 0x125f5b20u);
  /* 125f5b20 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125f5b23 jmp 0x125f5b2a */
  goto L_125f5b2a;
L_125f5b25:;
  /* 125f5b25 jmp 0x125f5a2d */
  goto L_125f5a2d;
L_125f5b2a:;
  /* 125f5b2a jmp 0x125f5b7c */
  goto L_125f5b7c;
L_125f5b2c:;
  /* 125f5b2c push 0 */
  push32((uint32_t)(0x0u));
  /* 125f5b2e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 125f5b34 push ecx */
  push32((uint32_t)(ECX));
  /* 125f5b35 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f5b38 push edx */
  push32((uint32_t)(EDX));
  /* 125f5b39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f5b3c push eax */
  push32((uint32_t)(EAX));
  /* 125f5b3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5b40 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125f5b43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5b46 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 125f5b49 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f5b4c mov eax, dword ptr [ecx*4 + 0x1261a7c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1261a7c0)));
  /* 125f5b53 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 125f5b56 push ecx */
  push32((uint32_t)(ECX));
  /* 125f5b57 call dword ptr [0x1261b3c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b3c4))), 0x125f5b5du);
  /* 125f5b5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f5b5f je 0x125f5b73 */
  if (C.zf) goto L_125f5b73;
  /* 125f5b61 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125f5b68 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 125f5b6e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 125f5b71 jmp 0x125f5b7c */
  goto L_125f5b7c;
L_125f5b73:;
  /* 125f5b73 call dword ptr [0x1261b400] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b400))), 0x125f5b79u);
  /* 125f5b79 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_125f5b7c:;
  /* 125f5b7c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5b80 jne 0x125f5c06 */
  if (!C.zf) goto L_125f5c06;
  /* 125f5b86 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5b8a je 0x125f5bba */
  if (C.zf) goto L_125f5bba;
  /* 125f5b8c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5b90 jne 0x125f5ba9 */
  if (!C.zf) goto L_125f5ba9;
  /* 125f5b92 call 0x125f4f40 */
  push32(0x125f5b97u); f_125f4f40();
  /* 125f5b97 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 125f5b9d call 0x125f4f50 */
  push32(0x125f5ba2u); f_125f4f50();
  /* 125f5ba2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f5ba5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 125f5ba7 jmp 0x125f5bb5 */
  goto L_125f5bb5;
L_125f5ba9:;
  /* 125f5ba9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f5bac push edx */
  push32((uint32_t)(EDX));
  /* 125f5bad call 0x125f4ea0 */
  push32(0x125f5bb2u); f_125f4ea0();
  /* 125f5bb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f5bb5:;
  /* 125f5bb5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f5bb8 jmp 0x125f5c0f */
  goto L_125f5c0f;
L_125f5bba:;
  /* 125f5bba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5bbd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125f5bc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5bc3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125f5bc6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f5bc9 mov edx, dword ptr [eax*4 + 0x1261a7c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1261a7c0)));
  /* 125f5bd0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 125f5bd5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 125f5bd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f5bda je 0x125f5beb */
  if (C.zf) goto L_125f5beb;
  /* 125f5bdc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f5bdf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125f5be2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5be5 jne 0x125f5beb */
  if (!C.zf) goto L_125f5beb;
  /* 125f5be7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f5be9 jmp 0x125f5c0f */
  goto L_125f5c0f;
L_125f5beb:;
  /* 125f5beb call 0x125f4f40 */
  push32(0x125f5bf0u); f_125f4f40();
  /* 125f5bf0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 125f5bf6 call 0x125f4f50 */
  push32(0x125f5bfbu); f_125f4f50();
  /* 125f5bfb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125f5c01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f5c04 jmp 0x125f5c0f */
  goto L_125f5c0f;
L_125f5c06:;
  /* 125f5c06 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f5c09 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_125f5c0f:;
  /* 125f5c0f mov esp, ebp */
  ESP = (EBP);
  /* 125f5c11 pop ebp */
  EBP = (pop32());
  /* 125f5c12 ret  */
  ESPCHK(0x125f59a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015c20 @ 0x125f5c20 (199 bytes, 68 insns) */
void f_125f5c20(void) {
  FTRACE(0x125f5c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f5c20 push ebp */
  push32((uint32_t)(EBP));
  /* 125f5c21 mov ebp, esp */
  EBP = (ESP);
  /* 125f5c23 push ecx */
  push32((uint32_t)(ECX));
  /* 125f5c24 push ebx */
  push32((uint32_t)(EBX));
  /* 125f5c25 push esi */
  push32((uint32_t)(ESI));
  /* 125f5c26 push edi */
  push32((uint32_t)(EDI));
L_125f5c27:;
  /* 125f5c27 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5c2b jne 0x125f5c4b */
  if (!C.zf) goto L_125f5c4b;
  /* 125f5c2d push 0x126149e0 */
  push32((uint32_t)(0x126149e0u));
  /* 125f5c32 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f5c34 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 125f5c36 push 0x12614ab0 */
  push32((uint32_t)(0x12614ab0u));
  /* 125f5c3b push 2 */
  push32((uint32_t)(0x2u));
  /* 125f5c3d call 0x125ec130 */
  push32(0x125f5c42u); f_125ec130();
  /* 125f5c42 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5c45 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5c48 jne 0x125f5c4b */
  if (!C.zf) goto L_125f5c4b;
  /* 125f5c4a int3  */
  x86_unimpl("int3 @ 0x125f5c4a");
L_125f5c4b:;
  /* 125f5c4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f5c4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f5c4f jne 0x125f5c27 */
  if (!C.zf) goto L_125f5c27;
  /* 125f5c51 mov ecx, dword ptr [0x1261900c] */
  ECX = (r32((uint32_t)(0x1261900c)));
  /* 125f5c57 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5c5a mov dword ptr [0x1261900c], ecx */
  w32((uint32_t)(0x1261900c), (ECX));
  /* 125f5c60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5c63 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125f5c66 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 125f5c68 push 0x12614ab0 */
  push32((uint32_t)(0x12614ab0u));
  /* 125f5c6d push 2 */
  push32((uint32_t)(0x2u));
  /* 125f5c6f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 125f5c74 call 0x125ed070 */
  push32(0x125f5c79u); f_125ed070();
  /* 125f5c79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5c7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5c7f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 125f5c82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5c85 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5c89 je 0x125f5ca6 */
  if (C.zf) goto L_125f5ca6;
  /* 125f5c8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5c8e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125f5c91 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 125f5c94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5c97 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 125f5c9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5c9d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 125f5ca4 jmp 0x125f5ccb */
  goto L_125f5ccb;
L_125f5ca6:;
  /* 125f5ca6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5ca9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125f5cac or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 125f5caf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5cb2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 125f5cb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5cb8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5cbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5cbe mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 125f5cc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5cc4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_125f5ccb:;
  /* 125f5ccb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5cce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5cd1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125f5cd4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125f5cd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5cd9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 125f5ce0 pop edi */
  EDI = (pop32());
  /* 125f5ce1 pop esi */
  ESI = (pop32());
  /* 125f5ce2 pop ebx */
  EBX = (pop32());
  /* 125f5ce3 mov esp, ebp */
  ESP = (EBP);
  /* 125f5ce5 pop ebp */
  EBP = (pop32());
  /* 125f5ce6 ret  */
  ESPCHK(0x125f5c20u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x125f5cf0 (50 bytes, 17 insns) */
void f_125f5cf0(void) {
  FTRACE(0x125f5cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f5cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f5cf1 mov ebp, esp */
  EBP = (ESP);
  /* 125f5cf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5cf6 cmp eax, dword ptr [0x1261a8fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1261a8fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5cfc jb 0x125f5d02 */
  if (C.cf) goto L_125f5d02;
  /* 125f5cfe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f5d00 jmp 0x125f5d20 */
  goto L_125f5d20;
L_125f5d02:;
  /* 125f5d02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5d05 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125f5d08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5d0b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 125f5d0e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f5d11 mov eax, dword ptr [ecx*4 + 0x1261a7c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1261a7c0)));
  /* 125f5d18 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 125f5d1d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_125f5d20:;
  /* 125f5d20 pop ebp */
  EBP = (pop32());
  /* 125f5d21 ret  */
  ESPCHK(0x125f5cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015d30 @ 0x125f5d30 (300 bytes, 80 insns) */
void f_125f5d30(void) {
  FTRACE(0x125f5d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f5d30 push ebp */
  push32((uint32_t)(EBP));
  /* 125f5d31 mov ebp, esp */
  EBP = (ESP);
  /* 125f5d33 push ecx */
  push32((uint32_t)(ECX));
  /* 125f5d34 cmp dword ptr [0x1261a4c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1261a4c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5d3b jne 0x125f5d49 */
  if (!C.zf) goto L_125f5d49;
  /* 125f5d3d mov dword ptr [0x1261a4c0], 0x200 */
  w32((uint32_t)(0x1261a4c0), (0x200u));
  /* 125f5d47 jmp 0x125f5d5c */
  goto L_125f5d5c;
L_125f5d49:;
  /* 125f5d49 cmp dword ptr [0x1261a4c0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x1261a4c0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5d50 jge 0x125f5d5c */
  if ((C.sf==C.of)) goto L_125f5d5c;
  /* 125f5d52 mov dword ptr [0x1261a4c0], 0x14 */
  w32((uint32_t)(0x1261a4c0), (0x14u));
L_125f5d5c:;
  /* 125f5d5c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 125f5d61 push 0x12614abc */
  push32((uint32_t)(0x12614abcu));
  /* 125f5d66 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f5d68 push 4 */
  push32((uint32_t)(0x4u));
  /* 125f5d6a mov eax, dword ptr [0x1261a4c0] */
  EAX = (r32((uint32_t)(0x1261a4c0)));
  /* 125f5d6f push eax */
  push32((uint32_t)(EAX));
  /* 125f5d70 call 0x125ed480 */
  push32(0x125f5d75u); f_125ed480();
  /* 125f5d75 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5d78 mov dword ptr [0x12619180], eax */
  w32((uint32_t)(0x12619180), (EAX));
  /* 125f5d7d cmp dword ptr [0x12619180], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619180))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5d84 jne 0x125f5dc5 */
  if (!C.zf) goto L_125f5dc5;
  /* 125f5d86 mov dword ptr [0x1261a4c0], 0x14 */
  w32((uint32_t)(0x1261a4c0), (0x14u));
  /* 125f5d90 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 125f5d95 push 0x12614abc */
  push32((uint32_t)(0x12614abcu));
  /* 125f5d9a push 2 */
  push32((uint32_t)(0x2u));
  /* 125f5d9c push 4 */
  push32((uint32_t)(0x4u));
  /* 125f5d9e mov ecx, dword ptr [0x1261a4c0] */
  ECX = (r32((uint32_t)(0x1261a4c0)));
  /* 125f5da4 push ecx */
  push32((uint32_t)(ECX));
  /* 125f5da5 call 0x125ed480 */
  push32(0x125f5daau); f_125ed480();
  /* 125f5daa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5dad mov dword ptr [0x12619180], eax */
  w32((uint32_t)(0x12619180), (EAX));
  /* 125f5db2 cmp dword ptr [0x12619180], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619180))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5db9 jne 0x125f5dc5 */
  if (!C.zf) goto L_125f5dc5;
  /* 125f5dbb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 125f5dbd call 0x125ebfe0 */
  push32(0x125f5dc2u); f_125ebfe0();
  /* 125f5dc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f5dc5:;
  /* 125f5dc5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125f5dcc jmp 0x125f5dd7 */
  goto L_125f5dd7;
L_125f5dce:;
  /* 125f5dce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5dd1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5dd4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125f5dd7:;
  /* 125f5dd7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5ddb jge 0x125f5df6 */
  if ((C.sf==C.of)) goto L_125f5df6;
  /* 125f5ddd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5de0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125f5de3 add eax, 0x12617120 */
  { uint32_t _a=(EAX),_b=(0x12617120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5de8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5deb mov edx, dword ptr [0x12619180] */
  EDX = (r32((uint32_t)(0x12619180)));
  /* 125f5df1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 125f5df4 jmp 0x125f5dce */
  goto L_125f5dce;
L_125f5df6:;
  /* 125f5df6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125f5dfd jmp 0x125f5e08 */
  goto L_125f5e08;
L_125f5dff:;
  /* 125f5dff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5e02 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5e05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125f5e08:;
  /* 125f5e08 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5e0c jge 0x125f5e58 */
  if ((C.sf==C.of)) goto L_125f5e58;
  /* 125f5e0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5e11 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125f5e14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5e17 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 125f5e1a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f5e1d mov eax, dword ptr [ecx*4 + 0x1261a7c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1261a7c0)));
  /* 125f5e24 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5e28 je 0x125f5e46 */
  if (C.zf) goto L_125f5e46;
  /* 125f5e2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5e2d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125f5e30 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5e33 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 125f5e36 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f5e39 mov eax, dword ptr [ecx*4 + 0x1261a7c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1261a7c0)));
  /* 125f5e40 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5e44 jne 0x125f5e56 */
  if (!C.zf) goto L_125f5e56;
L_125f5e46:;
  /* 125f5e46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f5e49 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125f5e4c mov dword ptr [ecx + 0x12617130], 0xffffffff */
  w32((uint32_t)(ECX + 0x12617130), (0xffffffffu));
L_125f5e56:;
  /* 125f5e56 jmp 0x125f5dff */
  goto L_125f5dff;
L_125f5e58:;
  /* 125f5e58 mov esp, ebp */
  ESP = (EBP);
  /* 125f5e5a pop ebp */
  EBP = (pop32());
  /* 125f5e5b ret  */
  ESPCHK(0x125f5d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10015e60 @ 0x125f5e60 (26 bytes, 9 insns) */
void f_125f5e60(void) {
  FTRACE(0x125f5e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f5e60 push ebp */
  push32((uint32_t)(EBP));
  /* 125f5e61 mov ebp, esp */
  EBP = (ESP);
  /* 125f5e63 call 0x125f6a60 */
  push32(0x125f5e68u); f_125f6a60();
  /* 125f5e68 movsx eax, byte ptr [0x12618e24] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12618e24))));
  /* 125f5e6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f5e71 je 0x125f5e78 */
  if (C.zf) goto L_125f5e78;
  /* 125f5e73 call 0x125f6820 */
  push32(0x125f5e78u); f_125f6820();
L_125f5e78:;
  /* 125f5e78 pop ebp */
  EBP = (pop32());
  /* 125f5e79 ret  */
  ESPCHK(0x125f5e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10015e80 @ 0x125f5e80 (61 bytes, 20 insns) */
void f_125f5e80(void) {
  FTRACE(0x125f5e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f5e80 push ebp */
  push32((uint32_t)(EBP));
  /* 125f5e81 mov ebp, esp */
  EBP = (ESP);
  /* 125f5e83 cmp dword ptr [ebp + 8], 0x12617120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12617120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5e8a jb 0x125f5eae */
  if (C.cf) goto L_125f5eae;
  /* 125f5e8c cmp dword ptr [ebp + 8], 0x12617380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12617380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5e93 ja 0x125f5eae */
  if ((!C.cf&&!C.zf)) goto L_125f5eae;
  /* 125f5e95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5e98 sub eax, 0x12617120 */
  { uint32_t _a=(EAX),_b=(0x12617120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f5e9d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125f5ea0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5ea3 push eax */
  push32((uint32_t)(EAX));
  /* 125f5ea4 call 0x125f0a70 */
  push32(0x125f5ea9u); f_125f0a70();
  /* 125f5ea9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5eac jmp 0x125f5ebb */
  goto L_125f5ebb;
L_125f5eae:;
  /* 125f5eae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5eb1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5eb4 push ecx */
  push32((uint32_t)(ECX));
  /* 125f5eb5 call dword ptr [0x1261b368] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b368))), 0x125f5ebbu);
L_125f5ebb:;
  /* 125f5ebb pop ebp */
  EBP = (pop32());
  /* 125f5ebc ret  */
  ESPCHK(0x125f5e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ec0 @ 0x125f5ec0 (41 bytes, 16 insns) */
void f_125f5ec0(void) {
  FTRACE(0x125f5ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f5ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f5ec1 mov ebp, esp */
  EBP = (ESP);
  /* 125f5ec3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5ec7 jge 0x125f5eda */
  if ((C.sf==C.of)) goto L_125f5eda;
  /* 125f5ec9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5ecc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5ecf push eax */
  push32((uint32_t)(EAX));
  /* 125f5ed0 call 0x125f0a70 */
  push32(0x125f5ed5u); f_125f0a70();
  /* 125f5ed5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5ed8 jmp 0x125f5ee7 */
  goto L_125f5ee7;
L_125f5eda:;
  /* 125f5eda mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f5edd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5ee0 push ecx */
  push32((uint32_t)(ECX));
  /* 125f5ee1 call dword ptr [0x1261b368] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b368))), 0x125f5ee7u);
L_125f5ee7:;
  /* 125f5ee7 pop ebp */
  EBP = (pop32());
  /* 125f5ee8 ret  */
  ESPCHK(0x125f5ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ef0 @ 0x125f5ef0 (61 bytes, 20 insns) */
void f_125f5ef0(void) {
  FTRACE(0x125f5ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f5ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f5ef1 mov ebp, esp */
  EBP = (ESP);
  /* 125f5ef3 cmp dword ptr [ebp + 8], 0x12617120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12617120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5efa jb 0x125f5f1e */
  if (C.cf) goto L_125f5f1e;
  /* 125f5efc cmp dword ptr [ebp + 8], 0x12617380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12617380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5f03 ja 0x125f5f1e */
  if ((!C.cf&&!C.zf)) goto L_125f5f1e;
  /* 125f5f05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5f08 sub eax, 0x12617120 */
  { uint32_t _a=(EAX),_b=(0x12617120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f5f0d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125f5f10 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5f13 push eax */
  push32((uint32_t)(EAX));
  /* 125f5f14 call 0x125f0b10 */
  push32(0x125f5f19u); f_125f0b10();
  /* 125f5f19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5f1c jmp 0x125f5f2b */
  goto L_125f5f2b;
L_125f5f1e:;
  /* 125f5f1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5f21 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5f24 push ecx */
  push32((uint32_t)(ECX));
  /* 125f5f25 call dword ptr [0x1261b364] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b364))), 0x125f5f2bu);
L_125f5f2b:;
  /* 125f5f2b pop ebp */
  EBP = (pop32());
  /* 125f5f2c ret  */
  ESPCHK(0x125f5ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015f30 @ 0x125f5f30 (41 bytes, 16 insns) */
void f_125f5f30(void) {
  FTRACE(0x125f5f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f5f30 push ebp */
  push32((uint32_t)(EBP));
  /* 125f5f31 mov ebp, esp */
  EBP = (ESP);
  /* 125f5f33 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5f37 jge 0x125f5f4a */
  if ((C.sf==C.of)) goto L_125f5f4a;
  /* 125f5f39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5f3c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5f3f push eax */
  push32((uint32_t)(EAX));
  /* 125f5f40 call 0x125f0b10 */
  push32(0x125f5f45u); f_125f0b10();
  /* 125f5f45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5f48 jmp 0x125f5f57 */
  goto L_125f5f57;
L_125f5f4a:;
  /* 125f5f4a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f5f4d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5f50 push ecx */
  push32((uint32_t)(ECX));
  /* 125f5f51 call dword ptr [0x1261b364] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b364))), 0x125f5f57u);
L_125f5f57:;
  /* 125f5f57 pop ebp */
  EBP = (pop32());
  /* 125f5f58 ret  */
  ESPCHK(0x125f5f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10015f60 @ 0x125f5f60 (119 bytes, 34 insns) */
void f_125f5f60(void) {
  FTRACE(0x125f5f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f5f60 push ebp */
  push32((uint32_t)(EBP));
  /* 125f5f61 mov ebp, esp */
  EBP = (ESP);
  /* 125f5f63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f5f66 push 0x1261917c */
  push32((uint32_t)(0x1261917cu));
  /* 125f5f6b call dword ptr [0x1261b2e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b2e8))), 0x125f5f71u);
  /* 125f5f71 cmp dword ptr [0x1261916c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1261916c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5f78 je 0x125f5f98 */
  if (C.zf) goto L_125f5f98;
  /* 125f5f7a push 0x1261917c */
  push32((uint32_t)(0x1261917cu));
  /* 125f5f7f call dword ptr [0x1261b3c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b3c8))), 0x125f5f85u);
  /* 125f5f85 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125f5f87 call 0x125f0a70 */
  push32(0x125f5f8cu); f_125f0a70();
  /* 125f5f8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5f8f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125f5f96 jmp 0x125f5f9f */
  goto L_125f5f9f;
L_125f5f98:;
  /* 125f5f98 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_125f5f9f:;
  /* 125f5f9f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 125f5fa3 push eax */
  push32((uint32_t)(EAX));
  /* 125f5fa4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f5fa7 push ecx */
  push32((uint32_t)(ECX));
  /* 125f5fa8 call 0x125f5fe0 */
  push32(0x125f5fadu); f_125f5fe0();
  /* 125f5fad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5fb0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125f5fb3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5fb7 je 0x125f5fc5 */
  if (C.zf) goto L_125f5fc5;
  /* 125f5fb9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125f5fbb call 0x125f0b10 */
  push32(0x125f5fc0u); f_125f0b10();
  /* 125f5fc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f5fc3 jmp 0x125f5fd0 */
  goto L_125f5fd0;
L_125f5fc5:;
  /* 125f5fc5 push 0x1261917c */
  push32((uint32_t)(0x1261917cu));
  /* 125f5fca call dword ptr [0x1261b3c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b3c8))), 0x125f5fd0u);
L_125f5fd0:;
  /* 125f5fd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f5fd3 mov esp, ebp */
  ESP = (EBP);
  /* 125f5fd5 pop ebp */
  EBP = (pop32());
  /* 125f5fd6 ret  */
  ESPCHK(0x125f5f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10015fe0 @ 0x125f5fe0 (160 bytes, 50 insns) */
void f_125f5fe0(void) {
  FTRACE(0x125f5fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f5fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f5fe1 mov ebp, esp */
  EBP = (ESP);
  /* 125f5fe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f5fe6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5fea jne 0x125f5ff3 */
  if (!C.zf) goto L_125f5ff3;
  /* 125f5fec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f5fee jmp 0x125f607c */
  goto L_125f607c;
L_125f5ff3:;
  /* 125f5ff3 cmp dword ptr [0x12618ff0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12618ff0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f5ffa jne 0x125f602a */
  if (!C.zf) goto L_125f602a;
  /* 125f5ffc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f5fff and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f6004 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6009 jle 0x125f601b */
  if ((C.zf||C.sf!=C.of)) goto L_125f601b;
  /* 125f600b call 0x125f4f40 */
  push32(0x125f6010u); f_125f4f40();
  /* 125f6010 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 125f6016 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f6019 jmp 0x125f607c */
  goto L_125f607c;
L_125f601b:;
  /* 125f601b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f601e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 125f6021 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 125f6023 mov eax, 1 */
  EAX = (0x1u);
  /* 125f6028 jmp 0x125f607c */
  goto L_125f607c;
L_125f602a:;
  /* 125f602a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125f6031 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 125f6034 push eax */
  push32((uint32_t)(EAX));
  /* 125f6035 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f6037 mov ecx, dword ptr [0x12616ea4] */
  ECX = (r32((uint32_t)(0x12616ea4)));
  /* 125f603d push ecx */
  push32((uint32_t)(ECX));
  /* 125f603e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f6041 push edx */
  push32((uint32_t)(EDX));
  /* 125f6042 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f6044 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 125f6047 push eax */
  push32((uint32_t)(EAX));
  /* 125f6048 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 125f604d mov ecx, dword ptr [0x12619000] */
  ECX = (r32((uint32_t)(0x12619000)));
  /* 125f6053 push ecx */
  push32((uint32_t)(ECX));
  /* 125f6054 call dword ptr [0x1261b38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b38c))), 0x125f605au);
  /* 125f605a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f605d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6061 je 0x125f6069 */
  if (C.zf) goto L_125f6069;
  /* 125f6063 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6067 je 0x125f6079 */
  if (C.zf) goto L_125f6079;
L_125f6069:;
  /* 125f6069 call 0x125f4f40 */
  push32(0x125f606eu); f_125f4f40();
  /* 125f606e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 125f6074 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f6077 jmp 0x125f607c */
  goto L_125f607c;
L_125f6079:;
  /* 125f6079 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125f607c:;
  /* 125f607c mov esp, ebp */
  ESP = (EBP);
  /* 125f607e pop ebp */
  EBP = (pop32());
  /* 125f607f ret  */
  ESPCHK(0x125f5fe0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x125f6080 (32 bytes, 18 insns) */
void f_125f6080(void) {
  FTRACE(0x125f6080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f6080 push ebp */
  push32((uint32_t)(EBP));
  /* 125f6081 mov ebp, esp */
  EBP = (ESP);
  /* 125f6083 push ebx */
  push32((uint32_t)(EBX));
  /* 125f6084 push esi */
  push32((uint32_t)(ESI));
  /* 125f6085 push edi */
  push32((uint32_t)(EDI));
  /* 125f6086 push ebp */
  push32((uint32_t)(EBP));
  /* 125f6087 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f6089 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f608b push 0x125f6098 */
  push32((uint32_t)(0x125f6098u));
  /* 125f6090 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 125f6093 call 0x125fd7cc */
  push32(0x125f6098u); f_125fd7cc();
  /* 125f6098 pop ebp */
  EBP = (pop32());
  /* 125f6099 pop edi */
  EDI = (pop32());
  /* 125f609a pop esi */
  ESI = (pop32());
  /* 125f609b pop ebx */
  EBX = (pop32());
  /* 125f609c mov esp, ebp */
  ESP = (EBP);
  /* 125f609e pop ebp */
  EBP = (pop32());
  /* 125f609f ret  */
  ESPCHK(0x125f6080u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x125f60c2 (104 bytes, 33 insns) */
void f_125f60c2(void) {
  FTRACE(0x125f60c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f60c2 push ebx */
  push32((uint32_t)(EBX));
  /* 125f60c3 push esi */
  push32((uint32_t)(ESI));
  /* 125f60c4 push edi */
  push32((uint32_t)(EDI));
  /* 125f60c5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 125f60c9 push eax */
  push32((uint32_t)(EAX));
  /* 125f60ca push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 125f60cc push 0x125f60a0 */
  push32((uint32_t)(0x125f60a0u));
  /* 125f60d1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 125f60d8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_125f60df:;
  /* 125f60df mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 125f60e3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 125f60e6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 125f60e9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f60ec je 0x125f611c */
  if (C.zf) goto L_125f611c;
  /* 125f60ee cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f60f2 je 0x125f611c */
  if (C.zf) goto L_125f611c;
  /* 125f60f4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 125f60f7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 125f60fa mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 125f60fe mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 125f6101 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6106 jne 0x125f611a */
  if (!C.zf) goto L_125f611a;
  /* 125f6108 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 125f610d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 125f6111 call 0x125f6156 */
  push32(0x125f6116u); f_125f6156();
  /* 125f6116 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x125f611au);
L_125f611a:;
  /* 125f611a jmp 0x125f60df */
  goto L_125f60df;
L_125f611c:;
  /* 125f611c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 125f6123 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6126 pop edi */
  EDI = (pop32());
  /* 125f6127 pop esi */
  ESI = (pop32());
  /* 125f6128 pop ebx */
  EBX = (pop32());
  /* 125f6129 ret  */
  ESPCHK(0x125f60c2u, _esp0);
  ESP += 4; return;
}

/* FUN_10016156 @ 0x125f6156 (24 bytes, 10 insns) */
void f_125f6156(void) {
  FTRACE(0x125f6156u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f6156 push ebx */
  push32((uint32_t)(EBX));
  /* 125f6157 push ecx */
  push32((uint32_t)(ECX));
  /* 125f6158 mov ebx, 0x126173b8 */
  EBX = (0x126173b8u);
  /* 125f615d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f6160 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 125f6163 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 125f6166 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 125f6169 pop ecx */
  ECX = (pop32());
  /* 125f616a pop ebx */
  EBX = (pop32());
  /* 125f616b ret 4 */
  ESPCHK(0x125f6156u, _esp0);
  ESP += 8; return;
}

/* FUN_10016235 @ 0x125f6235 (27 bytes, 11 insns) */
void f_125f6235(void) {
  FTRACE(0x125f6235u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f6235 push ebp */
  push32((uint32_t)(EBP));
  /* 125f6236 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 125f623a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 125f623c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 125f623f push eax */
  push32((uint32_t)(EAX));
  /* 125f6240 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 125f6243 push eax */
  push32((uint32_t)(EAX));
  /* 125f6244 call 0x125f60c2 */
  push32(0x125f6249u); f_125f60c2();
  /* 125f6249 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f624c pop ebp */
  EBP = (pop32());
  /* 125f624d ret 4 */
  ESPCHK(0x125f6235u, _esp0);
  ESP += 8; return;
}

/* FUN_10016250 @ 0x125f6250 (482 bytes, 138 insns) */
void f_125f6250(void) {
  FTRACE(0x125f6250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f6250 push ebp */
  push32((uint32_t)(EBP));
  /* 125f6251 mov ebp, esp */
  EBP = (ESP);
  /* 125f6253 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f6256 push esi */
  push32((uint32_t)(ESI));
  /* 125f6257 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 125f625e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 125f6260 call 0x125f0a70 */
  push32(0x125f6265u); f_125f0a70();
  /* 125f6265 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6268 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125f626f jmp 0x125f627a */
  goto L_125f627a;
L_125f6271:;
  /* 125f6271 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f6274 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6277 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_125f627a:;
  /* 125f627a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f627e jge 0x125f6420 */
  if ((C.sf==C.of)) goto L_125f6420;
  /* 125f6284 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f6287 cmp dword ptr [ecx*4 + 0x1261a7c0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1261a7c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f628f je 0x125f6386 */
  if (C.zf) goto L_125f6386;
  /* 125f6295 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f6298 mov eax, dword ptr [edx*4 + 0x1261a7c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1261a7c0)));
  /* 125f629f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f62a2 jmp 0x125f62ad */
  goto L_125f62ad;
L_125f62a4:;
  /* 125f62a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f62a7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f62aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125f62ad:;
  /* 125f62ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f62b0 mov eax, dword ptr [edx*4 + 0x1261a7c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1261a7c0)));
  /* 125f62b7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f62bc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f62bf jae 0x125f6376 */
  if (!C.cf) goto L_125f6376;
  /* 125f62c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f62c8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 125f62cc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 125f62cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f62d1 jne 0x125f6371 */
  if (!C.zf) goto L_125f6371;
  /* 125f62d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f62da cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f62de jne 0x125f6319 */
  if (!C.zf) goto L_125f6319;
  /* 125f62e0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 125f62e2 call 0x125f0a70 */
  push32(0x125f62e7u); f_125f0a70();
  /* 125f62e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f62ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f62ed cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f62f1 jne 0x125f630f */
  if (!C.zf) goto L_125f630f;
  /* 125f62f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f62f6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f62f9 push edx */
  push32((uint32_t)(EDX));
  /* 125f62fa call dword ptr [0x1261b36c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b36c))), 0x125f6300u);
  /* 125f6300 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f6303 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125f6306 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6309 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f630c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_125f630f:;
  /* 125f630f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 125f6311 call 0x125f0b10 */
  push32(0x125f6316u); f_125f0b10();
  /* 125f6316 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f6319:;
  /* 125f6319 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f631c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f631f push eax */
  push32((uint32_t)(EAX));
  /* 125f6320 call dword ptr [0x1261b368] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b368))), 0x125f6326u);
  /* 125f6326 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f6329 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 125f632d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 125f6330 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f6332 je 0x125f6346 */
  if (C.zf) goto L_125f6346;
  /* 125f6334 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f6337 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f633a push eax */
  push32((uint32_t)(EAX));
  /* 125f633b call dword ptr [0x1261b364] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b364))), 0x125f6341u);
  /* 125f6341 jmp 0x125f62a4 */
  goto L_125f62a4;
L_125f6346:;
  /* 125f6346 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f6349 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 125f634f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f6352 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125f6355 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f6358 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f635b sub eax, dword ptr [edx*4 + 0x1261a7c0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x1261a7c0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f6362 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125f6363 mov esi, 0x24 */
  ESI = (0x24u);
  /* 125f6368 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125f636a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f636c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f636f jmp 0x125f6376 */
  goto L_125f6376;
L_125f6371:;
  /* 125f6371 jmp 0x125f62a4 */
  goto L_125f62a4;
L_125f6376:;
  /* 125f6376 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f637a je 0x125f6381 */
  if (C.zf) goto L_125f6381;
  /* 125f637c jmp 0x125f6420 */
  goto L_125f6420;
L_125f6381:;
  /* 125f6381 jmp 0x125f641b */
  goto L_125f641b;
L_125f6386:;
  /* 125f6386 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 125f6388 push 0x12614ac4 */
  push32((uint32_t)(0x12614ac4u));
  /* 125f638d push 2 */
  push32((uint32_t)(0x2u));
  /* 125f638f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 125f6394 call 0x125ed070 */
  push32(0x125f6399u); f_125ed070();
  /* 125f6399 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f639c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f639f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f63a3 je 0x125f6419 */
  if (C.zf) goto L_125f6419;
  /* 125f63a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f63a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f63ab mov dword ptr [eax*4 + 0x1261a7c0], ecx */
  w32((uint32_t)(EAX*4 + 0x1261a7c0), (ECX));
  /* 125f63b2 mov edx, dword ptr [0x1261a8fc] */
  EDX = (r32((uint32_t)(0x1261a8fc)));
  /* 125f63b8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f63bb mov dword ptr [0x1261a8fc], edx */
  w32((uint32_t)(0x1261a8fc), (EDX));
  /* 125f63c1 jmp 0x125f63cc */
  goto L_125f63cc;
L_125f63c3:;
  /* 125f63c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f63c6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f63c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125f63cc:;
  /* 125f63cc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f63cf mov edx, dword ptr [ecx*4 + 0x1261a7c0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1261a7c0)));
  /* 125f63d6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f63dc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f63df jae 0x125f6404 */
  if (!C.cf) goto L_125f6404;
  /* 125f63e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f63e4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 125f63e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f63eb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 125f63f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f63f4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 125f63f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f63fb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 125f6402 jmp 0x125f63c3 */
  goto L_125f63c3;
L_125f6404:;
  /* 125f6404 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f6407 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125f640a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f640d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f6410 push edx */
  push32((uint32_t)(EDX));
  /* 125f6411 call 0x125f6760 */
  push32(0x125f6416u); f_125f6760();
  /* 125f6416 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f6419:;
  /* 125f6419 jmp 0x125f6420 */
  goto L_125f6420;
L_125f641b:;
  /* 125f641b jmp 0x125f6271 */
  goto L_125f6271;
L_125f6420:;
  /* 125f6420 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 125f6422 call 0x125f0b10 */
  push32(0x125f6427u); f_125f0b10();
  /* 125f6427 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f642a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f642d pop esi */
  ESI = (pop32());
  /* 125f642e mov esp, ebp */
  ESP = (EBP);
  /* 125f6430 pop ebp */
  EBP = (pop32());
  /* 125f6431 ret  */
  ESPCHK(0x125f6250u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x125f6440 (183 bytes, 57 insns) */
void f_125f6440(void) {
  FTRACE(0x125f6440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f6440 push ebp */
  push32((uint32_t)(EBP));
  /* 125f6441 mov ebp, esp */
  EBP = (ESP);
  /* 125f6443 push ecx */
  push32((uint32_t)(ECX));
  /* 125f6444 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f6447 cmp eax, dword ptr [0x1261a8fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1261a8fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f644d jae 0x125f64da */
  if (!C.cf) goto L_125f64da;
  /* 125f6453 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f6456 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125f6459 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f645c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 125f645f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f6462 mov eax, dword ptr [ecx*4 + 0x1261a7c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1261a7c0)));
  /* 125f6469 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f646d jne 0x125f64da */
  if (!C.zf) goto L_125f64da;
  /* 125f646f cmp dword ptr [0x12618de4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12618de4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6476 jne 0x125f64ba */
  if (!C.zf) goto L_125f64ba;
  /* 125f6478 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f647b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125f647e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6482 je 0x125f6492 */
  if (C.zf) goto L_125f6492;
  /* 125f6484 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6488 je 0x125f64a0 */
  if (C.zf) goto L_125f64a0;
  /* 125f648a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f648e je 0x125f64ae */
  if (C.zf) goto L_125f64ae;
  /* 125f6490 jmp 0x125f64ba */
  goto L_125f64ba;
L_125f6492:;
  /* 125f6492 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f6495 push edx */
  push32((uint32_t)(EDX));
  /* 125f6496 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 125f6498 call dword ptr [0x1261b324] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b324))), 0x125f649eu);
  /* 125f649e jmp 0x125f64ba */
  goto L_125f64ba;
L_125f64a0:;
  /* 125f64a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f64a3 push eax */
  push32((uint32_t)(EAX));
  /* 125f64a4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 125f64a6 call dword ptr [0x1261b324] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b324))), 0x125f64acu);
  /* 125f64ac jmp 0x125f64ba */
  goto L_125f64ba;
L_125f64ae:;
  /* 125f64ae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f64b1 push ecx */
  push32((uint32_t)(ECX));
  /* 125f64b2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 125f64b4 call dword ptr [0x1261b324] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b324))), 0x125f64bau);
L_125f64ba:;
  /* 125f64ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f64bd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 125f64c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f64c3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 125f64c6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f64c9 mov ecx, dword ptr [edx*4 + 0x1261a7c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1261a7c0)));
  /* 125f64d0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f64d3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 125f64d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f64d8 jmp 0x125f64f3 */
  goto L_125f64f3;
L_125f64da:;
  /* 125f64da call 0x125f4f40 */
  push32(0x125f64dfu); f_125f4f40();
  /* 125f64df mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 125f64e5 call 0x125f4f50 */
  push32(0x125f64eau); f_125f4f50();
  /* 125f64ea mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125f64f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_125f64f3:;
  /* 125f64f3 mov esp, ebp */
  ESP = (EBP);
  /* 125f64f5 pop ebp */
  EBP = (pop32());
  /* 125f64f6 ret  */
  ESPCHK(0x125f6440u, _esp0);
  ESP += 4; return;
}

/* FUN_10016500 @ 0x125f6500 (216 bytes, 63 insns) */
void f_125f6500(void) {
  FTRACE(0x125f6500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f6500 push ebp */
  push32((uint32_t)(EBP));
  /* 125f6501 mov ebp, esp */
  EBP = (ESP);
  /* 125f6503 push ecx */
  push32((uint32_t)(ECX));
  /* 125f6504 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f6507 cmp eax, dword ptr [0x1261a8fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1261a8fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f650d jae 0x125f65bb */
  if (!C.cf) goto L_125f65bb;
  /* 125f6513 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f6516 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125f6519 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f651c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 125f651f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f6522 mov eax, dword ptr [ecx*4 + 0x1261a7c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1261a7c0)));
  /* 125f6529 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 125f652e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125f6531 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f6533 je 0x125f65bb */
  if (C.zf) goto L_125f65bb;
  /* 125f6539 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f653c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 125f653f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f6542 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 125f6545 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f6548 mov ecx, dword ptr [edx*4 + 0x1261a7c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1261a7c0)));
  /* 125f654f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6553 je 0x125f65bb */
  if (C.zf) goto L_125f65bb;
  /* 125f6555 cmp dword ptr [0x12618de4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12618de4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f655c jne 0x125f659a */
  if (!C.zf) goto L_125f659a;
  /* 125f655e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f6561 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125f6564 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6568 je 0x125f6578 */
  if (C.zf) goto L_125f6578;
  /* 125f656a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f656e je 0x125f6584 */
  if (C.zf) goto L_125f6584;
  /* 125f6570 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6574 je 0x125f6590 */
  if (C.zf) goto L_125f6590;
  /* 125f6576 jmp 0x125f659a */
  goto L_125f659a;
L_125f6578:;
  /* 125f6578 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f657a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 125f657c call dword ptr [0x1261b324] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b324))), 0x125f6582u);
  /* 125f6582 jmp 0x125f659a */
  goto L_125f659a;
L_125f6584:;
  /* 125f6584 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f6586 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 125f6588 call dword ptr [0x1261b324] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b324))), 0x125f658eu);
  /* 125f658e jmp 0x125f659a */
  goto L_125f659a;
L_125f6590:;
  /* 125f6590 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f6592 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 125f6594 call dword ptr [0x1261b324] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b324))), 0x125f659au);
L_125f659a:;
  /* 125f659a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f659d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125f65a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f65a3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125f65a6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f65a9 mov edx, dword ptr [eax*4 + 0x1261a7c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1261a7c0)));
  /* 125f65b0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 125f65b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f65b9 jmp 0x125f65d4 */
  goto L_125f65d4;
L_125f65bb:;
  /* 125f65bb call 0x125f4f40 */
  push32(0x125f65c0u); f_125f4f40();
  /* 125f65c0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 125f65c6 call 0x125f4f50 */
  push32(0x125f65cbu); f_125f4f50();
  /* 125f65cb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125f65d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_125f65d4:;
  /* 125f65d4 mov esp, ebp */
  ESP = (EBP);
  /* 125f65d6 pop ebp */
  EBP = (pop32());
  /* 125f65d7 ret  */
  ESPCHK(0x125f6500u, _esp0);
  ESP += 4; return;
}

/* FUN_100165e0 @ 0x125f65e0 (102 bytes, 30 insns) */
void f_125f65e0(void) {
  FTRACE(0x125f65e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f65e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f65e1 mov ebp, esp */
  EBP = (ESP);
  /* 125f65e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f65e6 cmp eax, dword ptr [0x1261a8fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1261a8fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f65ec jae 0x125f662b */
  if (!C.cf) goto L_125f662b;
  /* 125f65ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f65f1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125f65f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f65f7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 125f65fa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f65fd mov eax, dword ptr [ecx*4 + 0x1261a7c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1261a7c0)));
  /* 125f6604 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 125f6609 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125f660c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f660e je 0x125f662b */
  if (C.zf) goto L_125f662b;
  /* 125f6610 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f6613 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 125f6616 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f6619 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 125f661c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f661f mov ecx, dword ptr [edx*4 + 0x1261a7c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1261a7c0)));
  /* 125f6626 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 125f6629 jmp 0x125f6644 */
  goto L_125f6644;
L_125f662b:;
  /* 125f662b call 0x125f4f40 */
  push32(0x125f6630u); f_125f4f40();
  /* 125f6630 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 125f6636 call 0x125f4f50 */
  push32(0x125f663bu); f_125f4f50();
  /* 125f663b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125f6641 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_125f6644:;
  /* 125f6644 pop ebp */
  EBP = (pop32());
  /* 125f6645 ret  */
  ESPCHK(0x125f65e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016650 @ 0x125f6650 (260 bytes, 83 insns) */
void f_125f6650(void) {
  FTRACE(0x125f6650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f6650 push ebp */
  push32((uint32_t)(EBP));
  /* 125f6651 mov ebp, esp */
  EBP = (ESP);
  /* 125f6653 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f6656 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 125f665a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f665d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 125f6660 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f6662 je 0x125f666d */
  if (C.zf) goto L_125f666d;
  /* 125f6664 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 125f6667 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 125f666a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_125f666d:;
  /* 125f666d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f6670 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 125f6676 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f6678 je 0x125f6682 */
  if (C.zf) goto L_125f6682;
  /* 125f667a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 125f667d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 125f667f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_125f6682:;
  /* 125f6682 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f6685 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 125f668b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f668d je 0x125f6698 */
  if (C.zf) goto L_125f6698;
  /* 125f668f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 125f6692 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 125f6695 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_125f6698:;
  /* 125f6698 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f669b push eax */
  push32((uint32_t)(EAX));
  /* 125f669c call dword ptr [0x1261b3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b3ac))), 0x125f66a2u);
  /* 125f66a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f66a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f66a9 jne 0x125f66c2 */
  if (!C.zf) goto L_125f66c2;
  /* 125f66ab call dword ptr [0x1261b400] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b400))), 0x125f66b1u);
  /* 125f66b1 push eax */
  push32((uint32_t)(EAX));
  /* 125f66b2 call 0x125f4ea0 */
  push32(0x125f66b7u); f_125f4ea0();
  /* 125f66b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f66ba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f66bd jmp 0x125f6750 */
  goto L_125f6750;
L_125f66c2:;
  /* 125f66c2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f66c6 jne 0x125f66d3 */
  if (!C.zf) goto L_125f66d3;
  /* 125f66c8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 125f66cb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 125f66ce mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 125f66d1 jmp 0x125f66e2 */
  goto L_125f66e2;
L_125f66d3:;
  /* 125f66d3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f66d7 jne 0x125f66e2 */
  if (!C.zf) goto L_125f66e2;
  /* 125f66d9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 125f66dc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 125f66df mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_125f66e2:;
  /* 125f66e2 call 0x125f6250 */
  push32(0x125f66e7u); f_125f6250();
  /* 125f66e7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125f66ea cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f66ee jne 0x125f670b */
  if (!C.zf) goto L_125f670b;
  /* 125f66f0 call 0x125f4f40 */
  push32(0x125f66f5u); f_125f4f40();
  /* 125f66f5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 125f66fb call 0x125f4f50 */
  push32(0x125f6700u); f_125f4f50();
  /* 125f6700 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125f6706 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f6709 jmp 0x125f6750 */
  goto L_125f6750;
L_125f670b:;
  /* 125f670b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f670e push eax */
  push32((uint32_t)(EAX));
  /* 125f670f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f6712 push ecx */
  push32((uint32_t)(ECX));
  /* 125f6713 call 0x125f6440 */
  push32(0x125f6718u); f_125f6440();
  /* 125f6718 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f671b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 125f671e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 125f6721 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 125f6724 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f6727 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125f672a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f672d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125f6730 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f6733 mov edx, dword ptr [eax*4 + 0x1261a7c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1261a7c0)));
  /* 125f673a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 125f673d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 125f6741 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f6744 push ecx */
  push32((uint32_t)(ECX));
  /* 125f6745 call 0x125f67f0 */
  push32(0x125f674au); f_125f67f0();
  /* 125f674a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f674d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_125f6750:;
  /* 125f6750 mov esp, ebp */
  ESP = (EBP);
  /* 125f6752 pop ebp */
  EBP = (pop32());
  /* 125f6753 ret  */
  ESPCHK(0x125f6650u, _esp0);
  ESP += 4; return;
}

/* FUN_10016760 @ 0x125f6760 (134 bytes, 44 insns) */
void f_125f6760(void) {
  FTRACE(0x125f6760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f6760 push ebp */
  push32((uint32_t)(EBP));
  /* 125f6761 mov ebp, esp */
  EBP = (ESP);
  /* 125f6763 push ecx */
  push32((uint32_t)(ECX));
  /* 125f6764 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f6767 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125f676a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f676d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125f6770 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f6773 mov edx, dword ptr [eax*4 + 0x1261a7c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1261a7c0)));
  /* 125f677a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f677c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125f677f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f6782 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6786 jne 0x125f67c1 */
  if (!C.zf) goto L_125f67c1;
  /* 125f6788 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 125f678a call 0x125f0a70 */
  push32(0x125f678fu); f_125f0a70();
  /* 125f678f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6792 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f6795 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6799 jne 0x125f67b7 */
  if (!C.zf) goto L_125f67b7;
  /* 125f679b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f679e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f67a1 push edx */
  push32((uint32_t)(EDX));
  /* 125f67a2 call dword ptr [0x1261b36c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b36c))), 0x125f67a8u);
  /* 125f67a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f67ab mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125f67ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f67b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f67b4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_125f67b7:;
  /* 125f67b7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 125f67b9 call 0x125f0b10 */
  push32(0x125f67beu); f_125f0b10();
  /* 125f67be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f67c1:;
  /* 125f67c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f67c4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125f67c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f67ca and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125f67cd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f67d0 mov edx, dword ptr [eax*4 + 0x1261a7c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1261a7c0)));
  /* 125f67d7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 125f67db push eax */
  push32((uint32_t)(EAX));
  /* 125f67dc call dword ptr [0x1261b368] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b368))), 0x125f67e2u);
  /* 125f67e2 mov esp, ebp */
  ESP = (EBP);
  /* 125f67e4 pop ebp */
  EBP = (pop32());
  /* 125f67e5 ret  */
  ESPCHK(0x125f6760u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x125f67f0 (38 bytes, 13 insns) */
void f_125f67f0(void) {
  FTRACE(0x125f67f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f67f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f67f1 mov ebp, esp */
  EBP = (ESP);
  /* 125f67f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f67f6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125f67f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f67fc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125f67ff imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f6802 mov edx, dword ptr [eax*4 + 0x1261a7c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1261a7c0)));
  /* 125f6809 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 125f680d push eax */
  push32((uint32_t)(EAX));
  /* 125f680e call dword ptr [0x1261b364] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b364))), 0x125f6814u);
  /* 125f6814 pop ebp */
  EBP = (pop32());
  /* 125f6815 ret  */
  ESPCHK(0x125f67f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016820 @ 0x125f6820 (218 bytes, 63 insns) */
void f_125f6820(void) {
  FTRACE(0x125f6820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f6820 push ebp */
  push32((uint32_t)(EBP));
  /* 125f6821 mov ebp, esp */
  EBP = (ESP);
  /* 125f6823 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f6826 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125f682d push 2 */
  push32((uint32_t)(0x2u));
  /* 125f682f call 0x125f0a70 */
  push32(0x125f6834u); f_125f0a70();
  /* 125f6834 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6837 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 125f683e jmp 0x125f6849 */
  goto L_125f6849;
L_125f6840:;
  /* 125f6840 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f6843 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6846 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125f6849:;
  /* 125f6849 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f684c cmp ecx, dword ptr [0x1261a4c0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1261a4c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6852 jge 0x125f68e9 */
  if ((C.sf==C.of)) goto L_125f68e9;
  /* 125f6858 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f685b mov eax, dword ptr [0x12619180] */
  EAX = (r32((uint32_t)(0x12619180)));
  /* 125f6860 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6864 je 0x125f68e4 */
  if (C.zf) goto L_125f68e4;
  /* 125f6866 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f6869 mov edx, dword ptr [0x12619180] */
  EDX = (r32((uint32_t)(0x12619180)));
  /* 125f686f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 125f6872 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125f6875 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 125f687b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f687d je 0x125f68a1 */
  if (C.zf) goto L_125f68a1;
  /* 125f687f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f6882 mov eax, dword ptr [0x12619180] */
  EAX = (r32((uint32_t)(0x12619180)));
  /* 125f6887 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 125f688a push ecx */
  push32((uint32_t)(ECX));
  /* 125f688b call 0x125f7610 */
  push32(0x125f6890u); f_125f7610();
  /* 125f6890 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6893 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6896 je 0x125f68a1 */
  if (C.zf) goto L_125f68a1;
  /* 125f6898 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f689b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f689e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125f68a1:;
  /* 125f68a1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f68a5 jl 0x125f68e4 */
  if ((C.sf!=C.of)) goto L_125f68e4;
  /* 125f68a7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f68aa mov ecx, dword ptr [0x12619180] */
  ECX = (r32((uint32_t)(0x12619180)));
  /* 125f68b0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 125f68b3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f68b6 push edx */
  push32((uint32_t)(EDX));
  /* 125f68b7 call dword ptr [0x1261b3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b3a4))), 0x125f68bdu);
  /* 125f68bd push 2 */
  push32((uint32_t)(0x2u));
  /* 125f68bf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f68c2 mov ecx, dword ptr [0x12619180] */
  ECX = (r32((uint32_t)(0x12619180)));
  /* 125f68c8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 125f68cb push edx */
  push32((uint32_t)(EDX));
  /* 125f68cc call 0x125edb00 */
  push32(0x125f68d1u); f_125edb00();
  /* 125f68d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f68d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f68d7 mov ecx, dword ptr [0x12619180] */
  ECX = (r32((uint32_t)(0x12619180)));
  /* 125f68dd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_125f68e4:;
  /* 125f68e4 jmp 0x125f6840 */
  goto L_125f6840;
L_125f68e9:;
  /* 125f68e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f68eb call 0x125f0b10 */
  push32(0x125f68f0u); f_125f0b10();
  /* 125f68f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f68f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f68f6 mov esp, ebp */
  ESP = (EBP);
  /* 125f68f8 pop ebp */
  EBP = (pop32());
  /* 125f68f9 ret  */
  ESPCHK(0x125f6820u, _esp0);
  ESP += 4; return;
}

/* FUN_10016900 @ 0x125f6900 (68 bytes, 26 insns) */
void f_125f6900(void) {
  FTRACE(0x125f6900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f6900 push ebp */
  push32((uint32_t)(EBP));
  /* 125f6901 mov ebp, esp */
  EBP = (ESP);
  /* 125f6903 push ecx */
  push32((uint32_t)(ECX));
  /* 125f6904 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6908 jne 0x125f6916 */
  if (!C.zf) goto L_125f6916;
  /* 125f690a push 0 */
  push32((uint32_t)(0x0u));
  /* 125f690c call 0x125f6a70 */
  push32(0x125f6911u); f_125f6a70();
  /* 125f6911 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6914 jmp 0x125f6940 */
  goto L_125f6940;
L_125f6916:;
  /* 125f6916 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f6919 push eax */
  push32((uint32_t)(EAX));
  /* 125f691a call 0x125f5e80 */
  push32(0x125f691fu); f_125f5e80();
  /* 125f691f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6922 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f6925 push ecx */
  push32((uint32_t)(ECX));
  /* 125f6926 call 0x125f6950 */
  push32(0x125f692bu); f_125f6950();
  /* 125f692b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f692e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f6931 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f6934 push edx */
  push32((uint32_t)(EDX));
  /* 125f6935 call 0x125f5ef0 */
  push32(0x125f693au); f_125f5ef0();
  /* 125f693a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f693d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125f6940:;
  /* 125f6940 mov esp, ebp */
  ESP = (EBP);
  /* 125f6942 pop ebp */
  EBP = (pop32());
  /* 125f6943 ret  */
  ESPCHK(0x125f6900u, _esp0);
  ESP += 4; return;
}

/* FUN_10016950 @ 0x125f6950 (65 bytes, 26 insns) */
void f_125f6950(void) {
  FTRACE(0x125f6950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f6950 push ebp */
  push32((uint32_t)(EBP));
  /* 125f6951 mov ebp, esp */
  EBP = (ESP);
  /* 125f6953 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f6956 push eax */
  push32((uint32_t)(EAX));
  /* 125f6957 call 0x125f69a0 */
  push32(0x125f695cu); f_125f69a0();
  /* 125f695c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f695f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f6961 je 0x125f6968 */
  if (C.zf) goto L_125f6968;
  /* 125f6963 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f6966 jmp 0x125f698f */
  goto L_125f698f;
L_125f6968:;
  /* 125f6968 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f696b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125f696e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 125f6974 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f6976 je 0x125f698d */
  if (C.zf) goto L_125f698d;
  /* 125f6978 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f697b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125f697e push ecx */
  push32((uint32_t)(ECX));
  /* 125f697f call 0x125f7760 */
  push32(0x125f6984u); f_125f7760();
  /* 125f6984 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6987 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 125f6989 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f698b jmp 0x125f698f */
  goto L_125f698f;
L_125f698d:;
  /* 125f698d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125f698f:;
  /* 125f698f pop ebp */
  EBP = (pop32());
  /* 125f6990 ret  */
  ESPCHK(0x125f6950u, _esp0);
  ESP += 4; return;
}

/* FUN_100169a0 @ 0x125f69a0 (183 bytes, 62 insns) */
void f_125f69a0(void) {
  FTRACE(0x125f69a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f69a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f69a1 mov ebp, esp */
  EBP = (ESP);
  /* 125f69a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f69a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125f69ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f69b0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125f69b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f69b6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125f69b9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 125f69bc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f69bf jne 0x125f6a3b */
  if (!C.zf) goto L_125f6a3b;
  /* 125f69c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f69c4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125f69c7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 125f69cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f69cf je 0x125f6a3b */
  if (C.zf) goto L_125f6a3b;
  /* 125f69d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f69d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f69d7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 125f69d9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f69dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f69df cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f69e3 jle 0x125f6a3b */
  if ((C.zf||C.sf!=C.of)) goto L_125f6a3b;
  /* 125f69e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f69e8 push edx */
  push32((uint32_t)(EDX));
  /* 125f69e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f69ec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125f69ef push ecx */
  push32((uint32_t)(ECX));
  /* 125f69f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f69f3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 125f69f6 push eax */
  push32((uint32_t)(EAX));
  /* 125f69f7 call 0x125f5910 */
  push32(0x125f69fcu); f_125f5910();
  /* 125f69fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f69ff cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6a02 jne 0x125f6a25 */
  if (!C.zf) goto L_125f6a25;
  /* 125f6a04 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f6a07 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125f6a0a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 125f6a10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f6a12 je 0x125f6a23 */
  if (C.zf) goto L_125f6a23;
  /* 125f6a14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f6a17 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125f6a1a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 125f6a1d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f6a20 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_125f6a23:;
  /* 125f6a23 jmp 0x125f6a3b */
  goto L_125f6a3b;
L_125f6a25:;
  /* 125f6a25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f6a28 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125f6a2b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 125f6a2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f6a31 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 125f6a34 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125f6a3b:;
  /* 125f6a3b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f6a3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f6a41 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125f6a44 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125f6a46 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f6a49 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 125f6a50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f6a53 mov esp, ebp */
  ESP = (EBP);
  /* 125f6a55 pop ebp */
  EBP = (pop32());
  /* 125f6a56 ret  */
  ESPCHK(0x125f69a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016a60 @ 0x125f6a60 (15 bytes, 7 insns) */
void f_125f6a60(void) {
  FTRACE(0x125f6a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f6a60 push ebp */
  push32((uint32_t)(EBP));
  /* 125f6a61 mov ebp, esp */
  EBP = (ESP);
  /* 125f6a63 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f6a65 call 0x125f6a70 */
  push32(0x125f6a6au); f_125f6a70();
  /* 125f6a6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6a6d pop ebp */
  EBP = (pop32());
  /* 125f6a6e ret  */
  ESPCHK(0x125f6a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10016a70 @ 0x125f6a70 (319 bytes, 94 insns) */
void f_125f6a70(void) {
  FTRACE(0x125f6a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f6a70 push ebp */
  push32((uint32_t)(EBP));
  /* 125f6a71 mov ebp, esp */
  EBP = (ESP);
  /* 125f6a73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f6a76 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125f6a7d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125f6a84 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f6a86 call 0x125f0a70 */
  push32(0x125f6a8bu); f_125f0a70();
  /* 125f6a8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6a8e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125f6a95 jmp 0x125f6aa0 */
  goto L_125f6aa0;
L_125f6a97:;
  /* 125f6a97 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f6a9a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6a9d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_125f6aa0:;
  /* 125f6aa0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f6aa3 cmp ecx, dword ptr [0x1261a4c0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1261a4c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6aa9 jge 0x125f6b93 */
  if ((C.sf==C.of)) goto L_125f6b93;
  /* 125f6aaf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f6ab2 mov eax, dword ptr [0x12619180] */
  EAX = (r32((uint32_t)(0x12619180)));
  /* 125f6ab7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6abb je 0x125f6b8e */
  if (C.zf) goto L_125f6b8e;
  /* 125f6ac1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f6ac4 mov edx, dword ptr [0x12619180] */
  EDX = (r32((uint32_t)(0x12619180)));
  /* 125f6aca mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 125f6acd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125f6ad0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 125f6ad6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f6ad8 je 0x125f6b8e */
  if (C.zf) goto L_125f6b8e;
  /* 125f6ade mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f6ae1 mov eax, dword ptr [0x12619180] */
  EAX = (r32((uint32_t)(0x12619180)));
  /* 125f6ae6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 125f6ae9 push ecx */
  push32((uint32_t)(ECX));
  /* 125f6aea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f6aed push edx */
  push32((uint32_t)(EDX));
  /* 125f6aee call 0x125f5ec0 */
  push32(0x125f6af3u); f_125f5ec0();
  /* 125f6af3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6af6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f6af9 mov ecx, dword ptr [0x12619180] */
  ECX = (r32((uint32_t)(0x12619180)));
  /* 125f6aff mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 125f6b02 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 125f6b05 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 125f6b0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f6b0c je 0x125f6b75 */
  if (C.zf) goto L_125f6b75;
  /* 125f6b0e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6b12 jne 0x125f6b39 */
  if (!C.zf) goto L_125f6b39;
  /* 125f6b14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f6b17 mov edx, dword ptr [0x12619180] */
  EDX = (r32((uint32_t)(0x12619180)));
  /* 125f6b1d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 125f6b20 push eax */
  push32((uint32_t)(EAX));
  /* 125f6b21 call 0x125f6950 */
  push32(0x125f6b26u); f_125f6950();
  /* 125f6b26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6b29 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6b2c je 0x125f6b37 */
  if (C.zf) goto L_125f6b37;
  /* 125f6b2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f6b31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6b34 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125f6b37:;
  /* 125f6b37 jmp 0x125f6b75 */
  goto L_125f6b75;
L_125f6b39:;
  /* 125f6b39 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6b3d jne 0x125f6b75 */
  if (!C.zf) goto L_125f6b75;
  /* 125f6b3f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f6b42 mov eax, dword ptr [0x12619180] */
  EAX = (r32((uint32_t)(0x12619180)));
  /* 125f6b47 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 125f6b4a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125f6b4d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 125f6b50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f6b52 je 0x125f6b75 */
  if (C.zf) goto L_125f6b75;
  /* 125f6b54 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f6b57 mov ecx, dword ptr [0x12619180] */
  ECX = (r32((uint32_t)(0x12619180)));
  /* 125f6b5d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 125f6b60 push edx */
  push32((uint32_t)(EDX));
  /* 125f6b61 call 0x125f6950 */
  push32(0x125f6b66u); f_125f6950();
  /* 125f6b66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6b69 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6b6c jne 0x125f6b75 */
  if (!C.zf) goto L_125f6b75;
  /* 125f6b6e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_125f6b75:;
  /* 125f6b75 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f6b78 mov ecx, dword ptr [0x12619180] */
  ECX = (r32((uint32_t)(0x12619180)));
  /* 125f6b7e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 125f6b81 push edx */
  push32((uint32_t)(EDX));
  /* 125f6b82 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f6b85 push eax */
  push32((uint32_t)(EAX));
  /* 125f6b86 call 0x125f5f30 */
  push32(0x125f6b8bu); f_125f5f30();
  /* 125f6b8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f6b8e:;
  /* 125f6b8e jmp 0x125f6a97 */
  goto L_125f6a97;
L_125f6b93:;
  /* 125f6b93 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f6b95 call 0x125f0b10 */
  push32(0x125f6b9au); f_125f0b10();
  /* 125f6b9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6b9d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6ba1 jne 0x125f6ba8 */
  if (!C.zf) goto L_125f6ba8;
  /* 125f6ba3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f6ba6 jmp 0x125f6bab */
  goto L_125f6bab;
L_125f6ba8:;
  /* 125f6ba8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_125f6bab:;
  /* 125f6bab mov esp, ebp */
  ESP = (EBP);
  /* 125f6bad pop ebp */
  EBP = (pop32());
  /* 125f6bae ret  */
  ESPCHK(0x125f6a70u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x125f6bb0 (15 bytes, 7 insns) */
void f_125f6bb0(void) {
  FTRACE(0x125f6bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f6bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f6bb1 mov ebp, esp */
  EBP = (ESP);
  /* 125f6bb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f6bb5 call 0x125ebfe0 */
  push32(0x125f6bbau); f_125ebfe0();
  /* 125f6bba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6bbd pop ebp */
  EBP = (pop32());
  /* 125f6bbe ret  */
  ESPCHK(0x125f6bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016bc0 @ 0x125f6bc0 (1007 bytes, 269 insns) */
void f_125f6bc0(void) {
  FTRACE(0x125f6bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f6bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f6bc1 mov ebp, esp */
  EBP = (ESP);
  /* 125f6bc3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f6bc9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6bcd jl 0x125f6bd5 */
  if ((C.sf!=C.of)) goto L_125f6bd5;
  /* 125f6bcf cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6bd3 jle 0x125f6bdc */
  if ((C.zf||C.sf!=C.of)) goto L_125f6bdc;
L_125f6bd5:;
  /* 125f6bd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f6bd7 jmp 0x125f6fab */
  goto L_125f6fab;
L_125f6bdc:;
  /* 125f6bdc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125f6bde call 0x125f0a70 */
  push32(0x125f6be3u); f_125f0a70();
  /* 125f6be3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6be6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125f6bed mov eax, dword ptr [0x1261916c] */
  EAX = (r32((uint32_t)(0x1261916c)));
  /* 125f6bf2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6bf5 mov dword ptr [0x1261916c], eax */
  w32((uint32_t)(0x1261916c), (EAX));
L_125f6bfa:;
  /* 125f6bfa cmp dword ptr [0x1261917c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1261917c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6c01 je 0x125f6c0d */
  if (C.zf) goto L_125f6c0d;
  /* 125f6c03 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f6c05 call dword ptr [0x1261b320] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b320))), 0x125f6c0bu);
  /* 125f6c0b jmp 0x125f6bfa */
  goto L_125f6bfa;
L_125f6c0d:;
  /* 125f6c0d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6c11 je 0x125f6c51 */
  if (C.zf) goto L_125f6c51;
  /* 125f6c13 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6c17 je 0x125f6c31 */
  if (C.zf) goto L_125f6c31;
  /* 125f6c19 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f6c1c push ecx */
  push32((uint32_t)(ECX));
  /* 125f6c1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f6c20 push edx */
  push32((uint32_t)(EDX));
  /* 125f6c21 call 0x125f6fb0 */
  push32(0x125f6c26u); f_125f6fb0();
  /* 125f6c26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6c29 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 125f6c2f jmp 0x125f6c43 */
  goto L_125f6c43;
L_125f6c31:;
  /* 125f6c31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f6c34 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f6c37 mov ecx, dword ptr [eax + 0x126174dc] */
  ECX = (r32((uint32_t)(EAX + 0x126174dc)));
  /* 125f6c3d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_125f6c43:;
  /* 125f6c43 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 125f6c49 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125f6c4c jmp 0x125f6f8b */
  goto L_125f6f8b;
L_125f6c51:;
  /* 125f6c51 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 125f6c58 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125f6c5f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6c63 je 0x125f6f83 */
  if (C.zf) goto L_125f6f83;
  /* 125f6c69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f6c6c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125f6c6f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6c72 jne 0x125f6e94 */
  if (!C.zf) goto L_125f6e94;
  /* 125f6c78 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f6c7b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 125f6c7f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6c82 jne 0x125f6e94 */
  if (!C.zf) goto L_125f6e94;
  /* 125f6c88 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f6c8b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 125f6c8f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6c92 jne 0x125f6e94 */
  if (!C.zf) goto L_125f6e94;
  /* 125f6c98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f6c9b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_125f6ca1:;
  /* 125f6ca1 push 0x12614b14 */
  push32((uint32_t)(0x12614b14u));
  /* 125f6ca6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 125f6cac push ecx */
  push32((uint32_t)(ECX));
  /* 125f6cad call 0x125f8e10 */
  push32(0x125f6cb2u); f_125f8e10();
  /* 125f6cb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6cb5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 125f6cbb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6cc2 je 0x125f6ced */
  if (C.zf) goto L_125f6ced;
  /* 125f6cc4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125f6cca sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f6cd0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 125f6cd6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6cdd je 0x125f6ced */
  if (C.zf) goto L_125f6ced;
  /* 125f6cdf mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125f6ce5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125f6ce8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6ceb jne 0x125f6d13 */
  if (!C.zf) goto L_125f6d13;
L_125f6ced:;
  /* 125f6ced cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6cf1 je 0x125f6d0c */
  if (C.zf) goto L_125f6d0c;
  /* 125f6cf3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125f6cf5 call 0x125f0b10 */
  push32(0x125f6cfau); f_125f0b10();
  /* 125f6cfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6cfd mov edx, dword ptr [0x1261916c] */
  EDX = (r32((uint32_t)(0x1261916c)));
  /* 125f6d03 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f6d06 mov dword ptr [0x1261916c], edx */
  w32((uint32_t)(0x1261916c), (EDX));
L_125f6d0c:;
  /* 125f6d0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f6d0e jmp 0x125f6fab */
  goto L_125f6fab;
L_125f6d13:;
  /* 125f6d13 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 125f6d1a jmp 0x125f6d25 */
  goto L_125f6d25;
L_125f6d1c:;
  /* 125f6d1c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f6d1f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6d22 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_125f6d25:;
  /* 125f6d25 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6d29 jg 0x125f6d73 */
  if ((!C.zf&&C.sf==C.of)) goto L_125f6d73;
  /* 125f6d2b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 125f6d31 push ecx */
  push32((uint32_t)(ECX));
  /* 125f6d32 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 125f6d38 push edx */
  push32((uint32_t)(EDX));
  /* 125f6d39 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f6d3c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f6d3f mov ecx, dword ptr [eax + 0x126174d8] */
  ECX = (r32((uint32_t)(EAX + 0x126174d8)));
  /* 125f6d45 push ecx */
  push32((uint32_t)(ECX));
  /* 125f6d46 call 0x125f8dd0 */
  push32(0x125f6d4bu); f_125f8dd0();
  /* 125f6d4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6d4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f6d50 jne 0x125f6d71 */
  if (!C.zf) goto L_125f6d71;
  /* 125f6d52 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f6d55 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f6d58 mov eax, dword ptr [edx + 0x126174d8] */
  EAX = (r32((uint32_t)(EDX + 0x126174d8)));
  /* 125f6d5e push eax */
  push32((uint32_t)(EAX));
  /* 125f6d5f call 0x125efea0 */
  push32(0x125f6d64u); f_125efea0();
  /* 125f6d64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6d67 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6d6d jne 0x125f6d71 */
  if (!C.zf) goto L_125f6d71;
  /* 125f6d6f jmp 0x125f6d73 */
  goto L_125f6d73;
L_125f6d71:;
  /* 125f6d71 jmp 0x125f6d1c */
  goto L_125f6d1c;
L_125f6d73:;
  /* 125f6d73 push 0x12614b10 */
  push32((uint32_t)(0x12614b10u));
  /* 125f6d78 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125f6d7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6d81 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 125f6d87 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125f6d8d push edx */
  push32((uint32_t)(EDX));
  /* 125f6d8e call 0x125f8d90 */
  push32(0x125f6d93u); f_125f8d90();
  /* 125f6d93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6d96 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 125f6d9c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6da3 jne 0x125f6dd9 */
  if (!C.zf) goto L_125f6dd9;
  /* 125f6da5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125f6dab movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125f6dae cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6db1 je 0x125f6dd9 */
  if (C.zf) goto L_125f6dd9;
  /* 125f6db3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6db7 je 0x125f6dd2 */
  if (C.zf) goto L_125f6dd2;
  /* 125f6db9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125f6dbb call 0x125f0b10 */
  push32(0x125f6dc0u); f_125f0b10();
  /* 125f6dc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6dc3 mov edx, dword ptr [0x1261916c] */
  EDX = (r32((uint32_t)(0x1261916c)));
  /* 125f6dc9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f6dcc mov dword ptr [0x1261916c], edx */
  w32((uint32_t)(0x1261916c), (EDX));
L_125f6dd2:;
  /* 125f6dd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f6dd4 jmp 0x125f6fab */
  goto L_125f6fab;
L_125f6dd9:;
  /* 125f6dd9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6ddd jg 0x125f6e2a */
  if ((!C.zf&&C.sf==C.of)) goto L_125f6e2a;
  /* 125f6ddf mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 125f6de5 push eax */
  push32((uint32_t)(EAX));
  /* 125f6de6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125f6dec push ecx */
  push32((uint32_t)(ECX));
  /* 125f6ded lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 125f6df3 push edx */
  push32((uint32_t)(EDX));
  /* 125f6df4 call 0x125f0890 */
  push32(0x125f6df9u); f_125f0890();
  /* 125f6df9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6dfc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 125f6e02 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 125f6e0a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 125f6e10 push ecx */
  push32((uint32_t)(ECX));
  /* 125f6e11 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f6e14 push edx */
  push32((uint32_t)(EDX));
  /* 125f6e15 call 0x125f6fb0 */
  push32(0x125f6e1au); f_125f6fb0();
  /* 125f6e1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6e1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f6e1f je 0x125f6e2a */
  if (C.zf) goto L_125f6e2a;
  /* 125f6e21 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f6e24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6e27 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_125f6e2a:;
  /* 125f6e2a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125f6e30 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6e36 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 125f6e3c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 125f6e42 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125f6e45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f6e47 je 0x125f6e58 */
  if (C.zf) goto L_125f6e58;
  /* 125f6e49 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 125f6e4f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6e52 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_125f6e58:;
  /* 125f6e58 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 125f6e5e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125f6e61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f6e63 jne 0x125f6ca1 */
  if (!C.zf) goto L_125f6ca1;
  /* 125f6e69 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6e6d je 0x125f6e7c */
  if (C.zf) goto L_125f6e7c;
  /* 125f6e6f call 0x125f7150 */
  push32(0x125f6e74u); f_125f7150();
  /* 125f6e74 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 125f6e7a jmp 0x125f6e86 */
  goto L_125f6e86;
L_125f6e7c:;
  /* 125f6e7c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_125f6e86:;
  /* 125f6e86 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 125f6e8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f6e8f jmp 0x125f6f81 */
  goto L_125f6f81;
L_125f6e94:;
  /* 125f6e94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f6e97 push edx */
  push32((uint32_t)(EDX));
  /* 125f6e98 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f6e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 125f6e9c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 125f6ea2 push eax */
  push32((uint32_t)(EAX));
  /* 125f6ea3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f6ea6 push ecx */
  push32((uint32_t)(ECX));
  /* 125f6ea7 call 0x125f7250 */
  push32(0x125f6eacu); f_125f7250();
  /* 125f6eac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6eaf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125f6eb2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6eb6 je 0x125f6f81 */
  if (C.zf) goto L_125f6f81;
  /* 125f6ebc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125f6ec3 jmp 0x125f6ece */
  goto L_125f6ece;
L_125f6ec5:;
  /* 125f6ec5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f6ec8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6ecb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_125f6ece:;
  /* 125f6ece cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6ed2 jg 0x125f6f30 */
  if ((!C.zf&&C.sf==C.of)) goto L_125f6f30;
  /* 125f6ed4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6ed8 je 0x125f6f2e */
  if (C.zf) goto L_125f6f2e;
  /* 125f6eda mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f6edd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f6ee0 mov ecx, dword ptr [eax + 0x126174dc] */
  ECX = (r32((uint32_t)(EAX + 0x126174dc)));
  /* 125f6ee6 push ecx */
  push32((uint32_t)(ECX));
  /* 125f6ee7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 125f6eed push edx */
  push32((uint32_t)(EDX));
  /* 125f6eee call 0x125f8d00 */
  push32(0x125f6ef3u); f_125f8d00();
  /* 125f6ef3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6ef6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f6ef8 je 0x125f6f25 */
  if (C.zf) goto L_125f6f25;
  /* 125f6efa lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 125f6f00 push eax */
  push32((uint32_t)(EAX));
  /* 125f6f01 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f6f04 push ecx */
  push32((uint32_t)(ECX));
  /* 125f6f05 call 0x125f6fb0 */
  push32(0x125f6f0au); f_125f6fb0();
  /* 125f6f0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6f0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f6f0f je 0x125f6f1c */
  if (C.zf) goto L_125f6f1c;
  /* 125f6f11 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f6f14 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6f17 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 125f6f1a jmp 0x125f6f23 */
  goto L_125f6f23;
L_125f6f1c:;
  /* 125f6f1c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_125f6f23:;
  /* 125f6f23 jmp 0x125f6f2e */
  goto L_125f6f2e;
L_125f6f25:;
  /* 125f6f25 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f6f28 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6f2b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_125f6f2e:;
  /* 125f6f2e jmp 0x125f6ec5 */
  goto L_125f6ec5;
L_125f6f30:;
  /* 125f6f30 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6f34 je 0x125f6f5b */
  if (C.zf) goto L_125f6f5b;
  /* 125f6f36 call 0x125f7150 */
  push32(0x125f6f3bu); f_125f7150();
  /* 125f6f3b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125f6f3e push 2 */
  push32((uint32_t)(0x2u));
  /* 125f6f40 mov ecx, dword ptr [0x126174dc] */
  ECX = (r32((uint32_t)(0x126174dc)));
  /* 125f6f46 push ecx */
  push32((uint32_t)(ECX));
  /* 125f6f47 call 0x125edb00 */
  push32(0x125f6f4cu); f_125edb00();
  /* 125f6f4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6f4f mov dword ptr [0x126174dc], 0 */
  w32((uint32_t)(0x126174dc), (0x0u));
  /* 125f6f59 jmp 0x125f6f81 */
  goto L_125f6f81;
L_125f6f5b:;
  /* 125f6f5b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6f5f je 0x125f6f6e */
  if (C.zf) goto L_125f6f6e;
  /* 125f6f61 call 0x125f7150 */
  push32(0x125f6f66u); f_125f7150();
  /* 125f6f66 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 125f6f6c jmp 0x125f6f78 */
  goto L_125f6f78;
L_125f6f6e:;
  /* 125f6f6e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_125f6f78:;
  /* 125f6f78 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 125f6f7e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_125f6f81:;
  /* 125f6f81 jmp 0x125f6f8b */
  goto L_125f6f8b;
L_125f6f83:;
  /* 125f6f83 call 0x125f7150 */
  push32(0x125f6f88u); f_125f7150();
  /* 125f6f88 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125f6f8b:;
  /* 125f6f8b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f6f8f je 0x125f6fa8 */
  if (C.zf) goto L_125f6fa8;
  /* 125f6f91 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125f6f93 call 0x125f0b10 */
  push32(0x125f6f98u); f_125f0b10();
  /* 125f6f98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6f9b mov eax, dword ptr [0x1261916c] */
  EAX = (r32((uint32_t)(0x1261916c)));
  /* 125f6fa0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f6fa3 mov dword ptr [0x1261916c], eax */
  w32((uint32_t)(0x1261916c), (EAX));
L_125f6fa8:;
  /* 125f6fa8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_125f6fab:;
  /* 125f6fab mov esp, ebp */
  ESP = (EBP);
  /* 125f6fad pop ebp */
  EBP = (pop32());
  /* 125f6fae ret  */
  ESPCHK(0x125f6bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016fb0 @ 0x125f6fb0 (403 bytes, 117 insns) */
void f_125f6fb0(void) {
  FTRACE(0x125f6fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f6fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f6fb1 mov ebp, esp */
  EBP = (ESP);
  /* 125f6fb3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f6fb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f6fbc push eax */
  push32((uint32_t)(EAX));
  /* 125f6fbd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 125f6fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 125f6fc4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 125f6fca push edx */
  push32((uint32_t)(EDX));
  /* 125f6fcb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 125f6fd1 push eax */
  push32((uint32_t)(EAX));
  /* 125f6fd2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f6fd5 push ecx */
  push32((uint32_t)(ECX));
  /* 125f6fd6 call 0x125f7250 */
  push32(0x125f6fdbu); f_125f7250();
  /* 125f6fdb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f6fde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f6fe0 jne 0x125f6fe9 */
  if (!C.zf) goto L_125f6fe9;
  /* 125f6fe2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f6fe4 jmp 0x125f713f */
  goto L_125f713f;
L_125f6fe9:;
  /* 125f6fe9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 125f6fee push 0x12614b18 */
  push32((uint32_t)(0x12614b18u));
  /* 125f6ff3 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f6ff5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 125f6ffb push edx */
  push32((uint32_t)(EDX));
  /* 125f6ffc call 0x125efea0 */
  push32(0x125f7001u); f_125efea0();
  /* 125f7001 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7004 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7007 push eax */
  push32((uint32_t)(EAX));
  /* 125f7008 call 0x125ed070 */
  push32(0x125f700du); f_125ed070();
  /* 125f700d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7010 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125f7013 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f7017 jne 0x125f7020 */
  if (!C.zf) goto L_125f7020;
  /* 125f7019 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f701b jmp 0x125f713f */
  goto L_125f713f;
L_125f7020:;
  /* 125f7020 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7023 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f7026 mov ecx, dword ptr [eax + 0x126174dc] */
  ECX = (r32((uint32_t)(EAX + 0x126174dc)));
  /* 125f702c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f702f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7032 mov eax, dword ptr [edx*4 + 0x12618fe8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12618fe8)));
  /* 125f7039 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f703c push 6 */
  push32((uint32_t)(0x6u));
  /* 125f703e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7041 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f7044 add ecx, 0x12619038 */
  { uint32_t _a=(ECX),_b=(0x12619038u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f704a push ecx */
  push32((uint32_t)(ECX));
  /* 125f704b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 125f704e push edx */
  push32((uint32_t)(EDX));
  /* 125f704f call 0x125f3950 */
  push32(0x125f7054u); f_125f3950();
  /* 125f7054 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7057 mov eax, dword ptr [0x12619000] */
  EAX = (r32((uint32_t)(0x12619000)));
  /* 125f705c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125f705f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 125f7065 push ecx */
  push32((uint32_t)(ECX));
  /* 125f7066 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f7069 push edx */
  push32((uint32_t)(EDX));
  /* 125f706a call 0x125f0020 */
  push32(0x125f706fu); f_125f0020();
  /* 125f706f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7072 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7075 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f7078 mov dword ptr [ecx + 0x126174dc], eax */
  w32((uint32_t)(ECX + 0x126174dc), (EAX));
  /* 125f707e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 125f7084 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125f708a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f708d mov dword ptr [eax*4 + 0x12618fe8], edx */
  w32((uint32_t)(EAX*4 + 0x12618fe8), (EDX));
  /* 125f7094 push 6 */
  push32((uint32_t)(0x6u));
  /* 125f7096 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 125f709c push ecx */
  push32((uint32_t)(ECX));
  /* 125f709d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f70a0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f70a3 add edx, 0x12619038 */
  { uint32_t _a=(EDX),_b=(0x12619038u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f70a9 push edx */
  push32((uint32_t)(EDX));
  /* 125f70aa call 0x125f3950 */
  push32(0x125f70afu); f_125f3950();
  /* 125f70af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f70b2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f70b6 jne 0x125f70c3 */
  if (!C.zf) goto L_125f70c3;
  /* 125f70b8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125f70be mov dword ptr [0x12619000], eax */
  w32((uint32_t)(0x12619000), (EAX));
L_125f70c3:;
  /* 125f70c3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f70c7 jne 0x125f70d5 */
  if (!C.zf) goto L_125f70d5;
  /* 125f70c9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125f70cf mov dword ptr [0x12619004], ecx */
  w32((uint32_t)(0x12619004), (ECX));
L_125f70d5:;
  /* 125f70d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f70d8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f70db call dword ptr [edx + 0x126174e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x126174e0))), 0x125f70e1u);
  /* 125f70e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f70e3 je 0x125f711c */
  if (C.zf) goto L_125f711c;
  /* 125f70e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f70e8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f70eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f70ee mov dword ptr [eax + 0x126174dc], ecx */
  w32((uint32_t)(EAX + 0x126174dc), (ECX));
  /* 125f70f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f70f6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f70f9 push edx */
  push32((uint32_t)(EDX));
  /* 125f70fa call 0x125edb00 */
  push32(0x125f70ffu); f_125edb00();
  /* 125f70ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7102 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7105 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7108 mov dword ptr [eax*4 + 0x12618fe8], ecx */
  w32((uint32_t)(EAX*4 + 0x12618fe8), (ECX));
  /* 125f710f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f7112 mov dword ptr [0x12619000], edx */
  w32((uint32_t)(0x12619000), (EDX));
  /* 125f7118 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f711a jmp 0x125f713f */
  goto L_125f713f;
L_125f711c:;
  /* 125f711c cmp dword ptr [ebp - 0xc], 0x126173c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x126173c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f7123 je 0x125f7133 */
  if (C.zf) goto L_125f7133;
  /* 125f7125 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f7127 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f712a push eax */
  push32((uint32_t)(EAX));
  /* 125f712b call 0x125edb00 */
  push32(0x125f7130u); f_125edb00();
  /* 125f7130 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f7133:;
  /* 125f7133 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7136 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f7139 mov eax, dword ptr [ecx + 0x126174dc] */
  EAX = (r32((uint32_t)(ECX + 0x126174dc)));
L_125f713f:;
  /* 125f713f mov esp, ebp */
  ESP = (EBP);
  /* 125f7141 pop ebp */
  EBP = (pop32());
  /* 125f7142 ret  */
  ESPCHK(0x125f6fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017150 @ 0x125f7150 (256 bytes, 72 insns) */
void f_125f7150(void) {
  FTRACE(0x125f7150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f7150 push ebp */
  push32((uint32_t)(EBP));
  /* 125f7151 mov ebp, esp */
  EBP = (ESP);
  /* 125f7153 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f7156 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 125f715d cmp dword ptr [0x126174dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126174dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f7164 jne 0x125f7184 */
  if (!C.zf) goto L_125f7184;
  /* 125f7166 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 125f716b push 0x12614b18 */
  push32((uint32_t)(0x12614b18u));
  /* 125f7170 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f7172 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 125f7177 call 0x125ed070 */
  push32(0x125f717cu); f_125ed070();
  /* 125f717c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f717f mov dword ptr [0x126174dc], eax */
  w32((uint32_t)(0x126174dc), (EAX));
L_125f7184:;
  /* 125f7184 mov eax, dword ptr [0x126174dc] */
  EAX = (r32((uint32_t)(0x126174dc)));
  /* 125f7189 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 125f718c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125f7193 jmp 0x125f719e */
  goto L_125f719e;
L_125f7195:;
  /* 125f7195 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7198 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f719b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125f719e:;
  /* 125f719e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f71a1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f71a4 mov eax, dword ptr [edx + 0x126174dc] */
  EAX = (r32((uint32_t)(EDX + 0x126174dc)));
  /* 125f71aa push eax */
  push32((uint32_t)(EAX));
  /* 125f71ab push 0x12614b24 */
  push32((uint32_t)(0x12614b24u));
  /* 125f71b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f71b3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f71b6 mov edx, dword ptr [ecx + 0x126174d8] */
  EDX = (r32((uint32_t)(ECX + 0x126174d8)));
  /* 125f71bc push edx */
  push32((uint32_t)(EDX));
  /* 125f71bd push 3 */
  push32((uint32_t)(0x3u));
  /* 125f71bf mov eax, dword ptr [0x126174dc] */
  EAX = (r32((uint32_t)(0x126174dc)));
  /* 125f71c4 push eax */
  push32((uint32_t)(EAX));
  /* 125f71c5 call 0x125f73f0 */
  push32(0x125f71cau); f_125f73f0();
  /* 125f71ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f71cd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f71d1 jge 0x125f7219 */
  if ((C.sf==C.of)) goto L_125f7219;
  /* 125f71d3 push 0x12614b10 */
  push32((uint32_t)(0x12614b10u));
  /* 125f71d8 mov ecx, dword ptr [0x126174dc] */
  ECX = (r32((uint32_t)(0x126174dc)));
  /* 125f71de push ecx */
  push32((uint32_t)(ECX));
  /* 125f71df call 0x125f0030 */
  push32(0x125f71e4u); f_125f0030();
  /* 125f71e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f71e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f71ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f71ed imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f71f0 mov eax, dword ptr [edx + 0x126174dc] */
  EAX = (r32((uint32_t)(EDX + 0x126174dc)));
  /* 125f71f6 push eax */
  push32((uint32_t)(EAX));
  /* 125f71f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f71fa imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f71fd mov edx, dword ptr [ecx + 0x126174dc] */
  EDX = (r32((uint32_t)(ECX + 0x126174dc)));
  /* 125f7203 push edx */
  push32((uint32_t)(EDX));
  /* 125f7204 call 0x125f8d00 */
  push32(0x125f7209u); f_125f8d00();
  /* 125f7209 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f720c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f720e je 0x125f7217 */
  if (C.zf) goto L_125f7217;
  /* 125f7210 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_125f7217:;
  /* 125f7217 jmp 0x125f7247 */
  goto L_125f7247;
L_125f7219:;
  /* 125f7219 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f721d jne 0x125f7226 */
  if (!C.zf) goto L_125f7226;
  /* 125f721f mov eax, dword ptr [0x126174dc] */
  EAX = (r32((uint32_t)(0x126174dc)));
  /* 125f7224 jmp 0x125f724c */
  goto L_125f724c;
L_125f7226:;
  /* 125f7226 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f7228 mov eax, dword ptr [0x126174dc] */
  EAX = (r32((uint32_t)(0x126174dc)));
  /* 125f722d push eax */
  push32((uint32_t)(EAX));
  /* 125f722e call 0x125edb00 */
  push32(0x125f7233u); f_125edb00();
  /* 125f7233 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7236 mov dword ptr [0x126174dc], 0 */
  w32((uint32_t)(0x126174dc), (0x0u));
  /* 125f7240 mov eax, dword ptr [0x126174f4] */
  EAX = (r32((uint32_t)(0x126174f4)));
  /* 125f7245 jmp 0x125f724c */
  goto L_125f724c;
L_125f7247:;
  /* 125f7247 jmp 0x125f7195 */
  goto L_125f7195;
L_125f724c:;
  /* 125f724c mov esp, ebp */
  ESP = (EBP);
  /* 125f724e pop ebp */
  EBP = (pop32());
  /* 125f724f ret  */
  ESPCHK(0x125f7150u, _esp0);
  ESP += 4; return;
}

/* FUN_10017250 @ 0x125f7250 (388 bytes, 115 insns) */
void f_125f7250(void) {
  FTRACE(0x125f7250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f7250 push ebp */
  push32((uint32_t)(EBP));
  /* 125f7251 mov ebp, esp */
  EBP = (ESP);
  /* 125f7253 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f7259 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f725d jne 0x125f7266 */
  if (!C.zf) goto L_125f7266;
  /* 125f725f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f7261 jmp 0x125f73d0 */
  goto L_125f73d0;
L_125f7266:;
  /* 125f7266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7269 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125f726c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f726f jne 0x125f72c0 */
  if (!C.zf) goto L_125f72c0;
  /* 125f7271 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7274 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 125f7278 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f727a jne 0x125f72c0 */
  if (!C.zf) goto L_125f72c0;
  /* 125f727c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f727f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 125f7282 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f7285 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 125f7289 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f728d je 0x125f72a9 */
  if (C.zf) goto L_125f72a9;
  /* 125f728f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f7292 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 125f7297 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f729a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 125f72a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f72a3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_125f72a9:;
  /* 125f72a9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f72ad je 0x125f72b8 */
  if (C.zf) goto L_125f72b8;
  /* 125f72af mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125f72b2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_125f72b8:;
  /* 125f72b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f72bb jmp 0x125f73d0 */
  goto L_125f73d0;
L_125f72c0:;
  /* 125f72c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f72c3 push ecx */
  push32((uint32_t)(ECX));
  /* 125f72c4 push 0x12617450 */
  push32((uint32_t)(0x12617450u));
  /* 125f72c9 call 0x125f8d00 */
  push32(0x125f72ceu); f_125f8d00();
  /* 125f72ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f72d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f72d3 je 0x125f7388 */
  if (C.zf) goto L_125f7388;
  /* 125f72d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f72dc push edx */
  push32((uint32_t)(EDX));
  /* 125f72dd push 0x126173cc */
  push32((uint32_t)(0x126173ccu));
  /* 125f72e2 call 0x125f8d00 */
  push32(0x125f72e7u); f_125f8d00();
  /* 125f72e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f72ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f72ec je 0x125f7388 */
  if (C.zf) goto L_125f7388;
  /* 125f72f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f72f5 push eax */
  push32((uint32_t)(EAX));
  /* 125f72f6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 125f72fc push ecx */
  push32((uint32_t)(ECX));
  /* 125f72fd call 0x125f7440 */
  push32(0x125f7302u); f_125f7440();
  /* 125f7302 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7305 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f7307 je 0x125f7310 */
  if (C.zf) goto L_125f7310;
  /* 125f7309 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f730b jmp 0x125f73d0 */
  goto L_125f73d0;
L_125f7310:;
  /* 125f7310 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 125f7316 push edx */
  push32((uint32_t)(EDX));
  /* 125f7317 push 0x12619010 */
  push32((uint32_t)(0x12619010u));
  /* 125f731c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 125f7322 push eax */
  push32((uint32_t)(EAX));
  /* 125f7323 call 0x125f8e50 */
  push32(0x125f7328u); f_125f8e50();
  /* 125f7328 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f732b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f732d jne 0x125f7336 */
  if (!C.zf) goto L_125f7336;
  /* 125f732f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f7331 jmp 0x125f73d0 */
  goto L_125f73d0;
L_125f7336:;
  /* 125f7336 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7338 mov cx, word ptr [0x12619014] */
  CX = (r16((uint32_t)(0x12619014)));
  /* 125f733f mov dword ptr [0x12619018], ecx */
  w32((uint32_t)(0x12619018), (ECX));
  /* 125f7345 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 125f734b push edx */
  push32((uint32_t)(EDX));
  /* 125f734c push 0x12617450 */
  push32((uint32_t)(0x12617450u));
  /* 125f7351 call 0x125f75a0 */
  push32(0x125f7356u); f_125f75a0();
  /* 125f7356 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7359 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f735c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125f735f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f7361 je 0x125f7376 */
  if (C.zf) goto L_125f7376;
  /* 125f7363 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7366 push edx */
  push32((uint32_t)(EDX));
  /* 125f7367 push 0x126173cc */
  push32((uint32_t)(0x126173ccu));
  /* 125f736c call 0x125f0020 */
  push32(0x125f7371u); f_125f0020();
  /* 125f7371 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7374 jmp 0x125f7388 */
  goto L_125f7388;
L_125f7376:;
  /* 125f7376 push 0x12617450 */
  push32((uint32_t)(0x12617450u));
  /* 125f737b push 0x126173cc */
  push32((uint32_t)(0x126173ccu));
  /* 125f7380 call 0x125f0020 */
  push32(0x125f7385u); f_125f0020();
  /* 125f7385 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f7388:;
  /* 125f7388 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f738c je 0x125f73a1 */
  if (C.zf) goto L_125f73a1;
  /* 125f738e push 6 */
  push32((uint32_t)(0x6u));
  /* 125f7390 push 0x12619010 */
  push32((uint32_t)(0x12619010u));
  /* 125f7395 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f7398 push eax */
  push32((uint32_t)(EAX));
  /* 125f7399 call 0x125f3950 */
  push32(0x125f739eu); f_125f3950();
  /* 125f739e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f73a1:;
  /* 125f73a1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f73a5 je 0x125f73ba */
  if (C.zf) goto L_125f73ba;
  /* 125f73a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 125f73a9 push 0x12619018 */
  push32((uint32_t)(0x12619018u));
  /* 125f73ae mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125f73b1 push ecx */
  push32((uint32_t)(ECX));
  /* 125f73b2 call 0x125f3950 */
  push32(0x125f73b7u); f_125f3950();
  /* 125f73b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f73ba:;
  /* 125f73ba push 0x12617450 */
  push32((uint32_t)(0x12617450u));
  /* 125f73bf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f73c2 push edx */
  push32((uint32_t)(EDX));
  /* 125f73c3 call 0x125f0020 */
  push32(0x125f73c8u); f_125f0020();
  /* 125f73c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f73cb mov eax, 0x12617450 */
  EAX = (0x12617450u);
L_125f73d0:;
  /* 125f73d0 mov esp, ebp */
  ESP = (EBP);
  /* 125f73d2 pop ebp */
  EBP = (pop32());
  /* 125f73d3 ret  */
  ESPCHK(0x125f7250u, _esp0);
  ESP += 4; return;
}

/* FUN_100173e0 @ 0x125f73e0 (7 bytes, 5 insns) */
void f_125f73e0(void) {
  FTRACE(0x125f73e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f73e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f73e1 mov ebp, esp */
  EBP = (ESP);
  /* 125f73e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f73e5 pop ebp */
  EBP = (pop32());
  /* 125f73e6 ret  */
  ESPCHK(0x125f73e0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x125f73f0 (79 bytes, 28 insns) */
void f_125f73f0(void) {
  FTRACE(0x125f73f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f73f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f73f1 mov ebp, esp */
  EBP = (ESP);
  /* 125f73f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f73f6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 125f73f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f73fc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125f7403 jmp 0x125f740e */
  goto L_125f740e;
L_125f7405:;
  /* 125f7405 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f7408 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f740b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_125f740e:;
  /* 125f740e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f7411 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f7414 jge 0x125f7434 */
  if ((C.sf==C.of)) goto L_125f7434;
  /* 125f7416 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7419 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f741c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f741f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7422 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 125f7425 push edx */
  push32((uint32_t)(EDX));
  /* 125f7426 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7429 push eax */
  push32((uint32_t)(EAX));
  /* 125f742a call 0x125f0030 */
  push32(0x125f742fu); f_125f0030();
  /* 125f742f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7432 jmp 0x125f7405 */
  goto L_125f7405;
L_125f7434:;
  /* 125f7434 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125f743b mov esp, ebp */
  ESP = (EBP);
  /* 125f743d pop ebp */
  EBP = (pop32());
  /* 125f743e ret  */
  ESPCHK(0x125f73f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017440 @ 0x125f7440 (349 bytes, 122 insns) */
void f_125f7440(void) {
  FTRACE(0x125f7440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f7440 push ebp */
  push32((uint32_t)(EBP));
  /* 125f7441 mov ebp, esp */
  EBP = (ESP);
  /* 125f7443 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f7446 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 125f744b push 0 */
  push32((uint32_t)(0x0u));
  /* 125f744d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7450 push eax */
  push32((uint32_t)(EAX));
  /* 125f7451 call 0x125f0de0 */
  push32(0x125f7456u); f_125f0de0();
  /* 125f7456 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7459 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f745c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125f745f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f7461 jne 0x125f746a */
  if (!C.zf) goto L_125f746a;
  /* 125f7463 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f7465 jmp 0x125f7599 */
  goto L_125f7599;
L_125f746a:;
  /* 125f746a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f746d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125f7470 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f7473 jne 0x125f74a0 */
  if (!C.zf) goto L_125f74a0;
  /* 125f7475 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f7478 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 125f747c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f747e je 0x125f74a0 */
  if (C.zf) goto L_125f74a0;
  /* 125f7480 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f7483 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7486 push ecx */
  push32((uint32_t)(ECX));
  /* 125f7487 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f748a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7490 push edx */
  push32((uint32_t)(EDX));
  /* 125f7491 call 0x125f0020 */
  push32(0x125f7496u); f_125f0020();
  /* 125f7496 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7499 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f749b jmp 0x125f7599 */
  goto L_125f7599;
L_125f74a0:;
  /* 125f74a0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125f74a7 jmp 0x125f74b2 */
  goto L_125f74b2;
L_125f74a9:;
  /* 125f74a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f74ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f74af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125f74b2:;
  /* 125f74b2 push 0x12614b28 */
  push32((uint32_t)(0x12614b28u));
  /* 125f74b7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f74ba push ecx */
  push32((uint32_t)(ECX));
  /* 125f74bb call 0x125f8d90 */
  push32(0x125f74c0u); f_125f8d90();
  /* 125f74c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f74c3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125f74c6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f74ca jne 0x125f74d4 */
  if (!C.zf) goto L_125f74d4;
  /* 125f74cc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f74cf jmp 0x125f7599 */
  goto L_125f7599;
L_125f74d4:;
  /* 125f74d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f74d7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f74da mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125f74dc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 125f74df cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f74e3 jne 0x125f750a */
  if (!C.zf) goto L_125f750a;
  /* 125f74e5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f74e9 jge 0x125f750a */
  if ((C.sf==C.of)) goto L_125f750a;
  /* 125f74eb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125f74ef cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f74f2 je 0x125f750a */
  if (C.zf) goto L_125f750a;
  /* 125f74f4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f74f7 push edx */
  push32((uint32_t)(EDX));
  /* 125f74f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f74fb push eax */
  push32((uint32_t)(EAX));
  /* 125f74fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f74ff push ecx */
  push32((uint32_t)(ECX));
  /* 125f7500 call 0x125f0890 */
  push32(0x125f7505u); f_125f0890();
  /* 125f7505 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7508 jmp 0x125f7570 */
  goto L_125f7570;
L_125f750a:;
  /* 125f750a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f750e jne 0x125f7538 */
  if (!C.zf) goto L_125f7538;
  /* 125f7510 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f7514 jge 0x125f7538 */
  if ((C.sf==C.of)) goto L_125f7538;
  /* 125f7516 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125f751a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f751d je 0x125f7538 */
  if (C.zf) goto L_125f7538;
  /* 125f751f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7522 push eax */
  push32((uint32_t)(EAX));
  /* 125f7523 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f7526 push ecx */
  push32((uint32_t)(ECX));
  /* 125f7527 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f752a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f752d push edx */
  push32((uint32_t)(EDX));
  /* 125f752e call 0x125f0890 */
  push32(0x125f7533u); f_125f0890();
  /* 125f7533 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7536 jmp 0x125f7570 */
  goto L_125f7570;
L_125f7538:;
  /* 125f7538 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f753c jne 0x125f756b */
  if (!C.zf) goto L_125f756b;
  /* 125f753e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125f7542 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f7544 je 0x125f754f */
  if (C.zf) goto L_125f754f;
  /* 125f7546 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125f754a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f754d jne 0x125f756b */
  if (!C.zf) goto L_125f756b;
L_125f754f:;
  /* 125f754f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7552 push edx */
  push32((uint32_t)(EDX));
  /* 125f7553 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f7556 push eax */
  push32((uint32_t)(EAX));
  /* 125f7557 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f755a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7560 push ecx */
  push32((uint32_t)(ECX));
  /* 125f7561 call 0x125f0890 */
  push32(0x125f7566u); f_125f0890();
  /* 125f7566 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7569 jmp 0x125f7570 */
  goto L_125f7570;
L_125f756b:;
  /* 125f756b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f756e jmp 0x125f7599 */
  goto L_125f7599;
L_125f7570:;
  /* 125f7570 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125f7574 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f7577 jne 0x125f757b */
  if (!C.zf) goto L_125f757b;
  /* 125f7579 jmp 0x125f7597 */
  goto L_125f7597;
L_125f757b:;
  /* 125f757b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125f757f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f7581 jne 0x125f7585 */
  if (!C.zf) goto L_125f7585;
  /* 125f7583 jmp 0x125f7597 */
  goto L_125f7597;
L_125f7585:;
  /* 125f7585 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7588 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f758b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 125f758f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 125f7592 jmp 0x125f74a9 */
  goto L_125f74a9;
L_125f7597:;
  /* 125f7597 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125f7599:;
  /* 125f7599 mov esp, ebp */
  ESP = (EBP);
  /* 125f759b pop ebp */
  EBP = (pop32());
  /* 125f759c ret  */
  ESPCHK(0x125f7440u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x125f75a0 (101 bytes, 36 insns) */
void f_125f75a0(void) {
  FTRACE(0x125f75a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f75a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f75a1 mov ebp, esp */
  EBP = (ESP);
  /* 125f75a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f75a6 push eax */
  push32((uint32_t)(EAX));
  /* 125f75a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f75aa push ecx */
  push32((uint32_t)(ECX));
  /* 125f75ab call 0x125f0020 */
  push32(0x125f75b0u); f_125f0020();
  /* 125f75b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f75b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f75b6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 125f75ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f75bc je 0x125f75d8 */
  if (C.zf) goto L_125f75d8;
  /* 125f75be mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f75c1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f75c4 push ecx */
  push32((uint32_t)(ECX));
  /* 125f75c5 push 0x12614b30 */
  push32((uint32_t)(0x12614b30u));
  /* 125f75ca push 2 */
  push32((uint32_t)(0x2u));
  /* 125f75cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f75cf push edx */
  push32((uint32_t)(EDX));
  /* 125f75d0 call 0x125f73f0 */
  push32(0x125f75d5u); f_125f73f0();
  /* 125f75d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f75d8:;
  /* 125f75d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f75db movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 125f75e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f75e4 je 0x125f7603 */
  if (C.zf) goto L_125f7603;
  /* 125f75e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f75e9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f75ef push edx */
  push32((uint32_t)(EDX));
  /* 125f75f0 push 0x12614b2c */
  push32((uint32_t)(0x12614b2cu));
  /* 125f75f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f75f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f75fa push eax */
  push32((uint32_t)(EAX));
  /* 125f75fb call 0x125f73f0 */
  push32(0x125f7600u); f_125f73f0();
  /* 125f7600 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f7603:;
  /* 125f7603 pop ebp */
  EBP = (pop32());
  /* 125f7604 ret  */
  ESPCHK(0x125f75a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017610 @ 0x125f7610 (130 bytes, 50 insns) */
void f_125f7610(void) {
  FTRACE(0x125f7610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f7610 push ebp */
  push32((uint32_t)(EBP));
  /* 125f7611 mov ebp, esp */
  EBP = (ESP);
  /* 125f7613 push ecx */
  push32((uint32_t)(ECX));
  /* 125f7614 push ebx */
  push32((uint32_t)(EBX));
  /* 125f7615 push esi */
  push32((uint32_t)(ESI));
  /* 125f7616 push edi */
  push32((uint32_t)(EDI));
  /* 125f7617 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125f761e:;
  /* 125f761e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f7622 jne 0x125f7642 */
  if (!C.zf) goto L_125f7642;
  /* 125f7624 push 0x12614b40 */
  push32((uint32_t)(0x12614b40u));
  /* 125f7629 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f762b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 125f762d push 0x12614b34 */
  push32((uint32_t)(0x12614b34u));
  /* 125f7632 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f7634 call 0x125ec130 */
  push32(0x125f7639u); f_125ec130();
  /* 125f7639 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f763c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f763f jne 0x125f7642 */
  if (!C.zf) goto L_125f7642;
  /* 125f7641 int3  */
  x86_unimpl("int3 @ 0x125f7641");
L_125f7642:;
  /* 125f7642 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f7644 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f7646 jne 0x125f761e */
  if (!C.zf) goto L_125f761e;
  /* 125f7648 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f764b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125f764e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 125f7651 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f7653 je 0x125f7661 */
  if (C.zf) goto L_125f7661;
  /* 125f7655 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7658 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 125f765f jmp 0x125f7688 */
  goto L_125f7688;
L_125f7661:;
  /* 125f7661 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7664 push ecx */
  push32((uint32_t)(ECX));
  /* 125f7665 call 0x125f5e80 */
  push32(0x125f766au); f_125f5e80();
  /* 125f766a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f766d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7670 push edx */
  push32((uint32_t)(EDX));
  /* 125f7671 call 0x125f76a0 */
  push32(0x125f7676u); f_125f76a0();
  /* 125f7676 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7679 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f767c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f767f push eax */
  push32((uint32_t)(EAX));
  /* 125f7680 call 0x125f5ef0 */
  push32(0x125f7685u); f_125f5ef0();
  /* 125f7685 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f7688:;
  /* 125f7688 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f768b pop edi */
  EDI = (pop32());
  /* 125f768c pop esi */
  ESI = (pop32());
  /* 125f768d pop ebx */
  EBX = (pop32());
  /* 125f768e mov esp, ebp */
  ESP = (EBP);
  /* 125f7690 pop ebp */
  EBP = (pop32());
  /* 125f7691 ret  */
  ESPCHK(0x125f7610u, _esp0);
  ESP += 4; return;
}

/* FUN_100176a0 @ 0x125f76a0 (190 bytes, 67 insns) */
void f_125f76a0(void) {
  FTRACE(0x125f76a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f76a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f76a1 mov ebp, esp */
  EBP = (ESP);
  /* 125f76a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f76a6 push ebx */
  push32((uint32_t)(EBX));
  /* 125f76a7 push esi */
  push32((uint32_t)(ESI));
  /* 125f76a8 push edi */
  push32((uint32_t)(EDI));
  /* 125f76a9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125f76b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f76b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125f76b6:;
  /* 125f76b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f76ba jne 0x125f76da */
  if (!C.zf) goto L_125f76da;
  /* 125f76bc push 0x126149e0 */
  push32((uint32_t)(0x126149e0u));
  /* 125f76c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f76c3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 125f76c5 push 0x12614b34 */
  push32((uint32_t)(0x12614b34u));
  /* 125f76ca push 2 */
  push32((uint32_t)(0x2u));
  /* 125f76cc call 0x125ec130 */
  push32(0x125f76d1u); f_125ec130();
  /* 125f76d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f76d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f76d7 jne 0x125f76da */
  if (!C.zf) goto L_125f76da;
  /* 125f76d9 int3  */
  x86_unimpl("int3 @ 0x125f76d9");
L_125f76da:;
  /* 125f76da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125f76dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f76de jne 0x125f76b6 */
  if (!C.zf) goto L_125f76b6;
  /* 125f76e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f76e3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 125f76e6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 125f76eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f76ed je 0x125f774a */
  if (C.zf) goto L_125f774a;
  /* 125f76ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f76f2 push ecx */
  push32((uint32_t)(ECX));
  /* 125f76f3 call 0x125f69a0 */
  push32(0x125f76f8u); f_125f69a0();
  /* 125f76f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f76fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f76fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f7701 push edx */
  push32((uint32_t)(EDX));
  /* 125f7702 call 0x125f9d20 */
  push32(0x125f7707u); f_125f9d20();
  /* 125f7707 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f770a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f770d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125f7710 push ecx */
  push32((uint32_t)(ECX));
  /* 125f7711 call 0x125f9bf0 */
  push32(0x125f7716u); f_125f9bf0();
  /* 125f7716 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7719 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f771b jge 0x125f7726 */
  if ((C.sf==C.of)) goto L_125f7726;
  /* 125f771d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125f7724 jmp 0x125f774a */
  goto L_125f774a;
L_125f7726:;
  /* 125f7726 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f7729 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f772d je 0x125f774a */
  if (C.zf) goto L_125f774a;
  /* 125f772f push 2 */
  push32((uint32_t)(0x2u));
  /* 125f7731 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f7734 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 125f7737 push ecx */
  push32((uint32_t)(ECX));
  /* 125f7738 call 0x125edb00 */
  push32(0x125f773du); f_125edb00();
  /* 125f773d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7740 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f7743 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_125f774a:;
  /* 125f774a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f774d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 125f7754 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7757 pop edi */
  EDI = (pop32());
  /* 125f7758 pop esi */
  ESI = (pop32());
  /* 125f7759 pop ebx */
  EBX = (pop32());
  /* 125f775a mov esp, ebp */
  ESP = (EBP);
  /* 125f775c pop ebp */
  EBP = (pop32());
  /* 125f775d ret  */
  ESPCHK(0x125f76a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017760 @ 0x125f7760 (210 bytes, 63 insns) */
void f_125f7760(void) {
  FTRACE(0x125f7760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f7760 push ebp */
  push32((uint32_t)(EBP));
  /* 125f7761 mov ebp, esp */
  EBP = (ESP);
  /* 125f7763 push ecx */
  push32((uint32_t)(ECX));
  /* 125f7764 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7767 cmp eax, dword ptr [0x1261a8fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1261a8fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f776d jae 0x125f7791 */
  if (!C.cf) goto L_125f7791;
  /* 125f776f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7772 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125f7775 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7778 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 125f777b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f777e mov eax, dword ptr [ecx*4 + 0x1261a7c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1261a7c0)));
  /* 125f7785 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 125f778a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125f778d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f778f jne 0x125f77a4 */
  if (!C.zf) goto L_125f77a4;
L_125f7791:;
  /* 125f7791 call 0x125f4f40 */
  push32(0x125f7796u); f_125f4f40();
  /* 125f7796 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 125f779c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f779f jmp 0x125f782e */
  goto L_125f782e;
L_125f77a4:;
  /* 125f77a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f77a7 push edx */
  push32((uint32_t)(EDX));
  /* 125f77a8 call 0x125f6760 */
  push32(0x125f77adu); f_125f6760();
  /* 125f77ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f77b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f77b3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125f77b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f77b9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125f77bc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f77bf mov edx, dword ptr [eax*4 + 0x1261a7c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1261a7c0)));
  /* 125f77c6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 125f77cb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 125f77ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f77d0 je 0x125f780d */
  if (C.zf) goto L_125f780d;
  /* 125f77d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f77d5 push ecx */
  push32((uint32_t)(ECX));
  /* 125f77d6 call 0x125f65e0 */
  push32(0x125f77dbu); f_125f65e0();
  /* 125f77db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f77de push eax */
  push32((uint32_t)(EAX));
  /* 125f77df call dword ptr [0x1261b31c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b31c))), 0x125f77e5u);
  /* 125f77e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f77e7 jne 0x125f77f4 */
  if (!C.zf) goto L_125f77f4;
  /* 125f77e9 call dword ptr [0x1261b400] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b400))), 0x125f77efu);
  /* 125f77ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f77f2 jmp 0x125f77fb */
  goto L_125f77fb;
L_125f77f4:;
  /* 125f77f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_125f77fb:;
  /* 125f77fb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f77ff jne 0x125f7803 */
  if (!C.zf) goto L_125f7803;
  /* 125f7801 jmp 0x125f781f */
  goto L_125f781f;
L_125f7803:;
  /* 125f7803 call 0x125f4f50 */
  push32(0x125f7808u); f_125f4f50();
  /* 125f7808 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f780b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_125f780d:;
  /* 125f780d call 0x125f4f40 */
  push32(0x125f7812u); f_125f4f40();
  /* 125f7812 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 125f7818 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125f781f:;
  /* 125f781f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7822 push eax */
  push32((uint32_t)(EAX));
  /* 125f7823 call 0x125f67f0 */
  push32(0x125f7828u); f_125f67f0();
  /* 125f7828 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f782b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125f782e:;
  /* 125f782e mov esp, ebp */
  ESP = (EBP);
  /* 125f7830 pop ebp */
  EBP = (pop32());
  /* 125f7831 ret  */
  ESPCHK(0x125f7760u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x125f7840 (219 bytes, 64 insns) */
void f_125f7840(void) {
  FTRACE(0x125f7840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f7840 push ebp */
  push32((uint32_t)(EBP));
  /* 125f7841 mov ebp, esp */
  EBP = (ESP);
  /* 125f7843 push ecx */
  push32((uint32_t)(ECX));
  /* 125f7844 cmp dword ptr [0x12618ffc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12618ffc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f784b je 0x125f78e1 */
  if (C.zf) goto L_125f78e1;
  /* 125f7851 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 125f7853 push 0x12614b50 */
  push32((uint32_t)(0x12614b50u));
  /* 125f7858 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f785a push 0xac */
  push32((uint32_t)(0xacu));
  /* 125f785f push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7861 call 0x125ed480 */
  push32(0x125f7866u); f_125ed480();
  /* 125f7866 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7869 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f786c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f7870 jne 0x125f787c */
  if (!C.zf) goto L_125f787c;
  /* 125f7872 mov eax, 1 */
  EAX = (0x1u);
  /* 125f7877 jmp 0x125f7917 */
  goto L_125f7917;
L_125f787c:;
  /* 125f787c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f787f push eax */
  push32((uint32_t)(EAX));
  /* 125f7880 call 0x125f7920 */
  push32(0x125f7885u); f_125f7920();
  /* 125f7885 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7888 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f788a je 0x125f78ad */
  if (C.zf) goto L_125f78ad;
  /* 125f788c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f788f push ecx */
  push32((uint32_t)(ECX));
  /* 125f7890 call 0x125f7eb0 */
  push32(0x125f7895u); f_125f7eb0();
  /* 125f7895 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7898 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f789a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f789d push edx */
  push32((uint32_t)(EDX));
  /* 125f789e call 0x125edb00 */
  push32(0x125f78a3u); f_125edb00();
  /* 125f78a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f78a6 mov eax, 1 */
  EAX = (0x1u);
  /* 125f78ab jmp 0x125f7917 */
  goto L_125f7917;
L_125f78ad:;
  /* 125f78ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f78b0 mov dword ptr [0x12617c98], eax */
  w32((uint32_t)(0x12617c98), (EAX));
  /* 125f78b5 mov ecx, dword ptr [0x1261901c] */
  ECX = (r32((uint32_t)(0x1261901c)));
  /* 125f78bb push ecx */
  push32((uint32_t)(ECX));
  /* 125f78bc call 0x125f7eb0 */
  push32(0x125f78c1u); f_125f7eb0();
  /* 125f78c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f78c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f78c6 mov edx, dword ptr [0x1261901c] */
  EDX = (r32((uint32_t)(0x1261901c)));
  /* 125f78cc push edx */
  push32((uint32_t)(EDX));
  /* 125f78cd call 0x125edb00 */
  push32(0x125f78d2u); f_125edb00();
  /* 125f78d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f78d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f78d8 mov dword ptr [0x1261901c], eax */
  w32((uint32_t)(0x1261901c), (EAX));
  /* 125f78dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f78df jmp 0x125f7917 */
  goto L_125f7917;
L_125f78e1:;
  /* 125f78e1 mov dword ptr [0x12617c98], 0x12617ca0 */
  w32((uint32_t)(0x12617c98), (0x12617ca0u));
  /* 125f78eb mov ecx, dword ptr [0x1261901c] */
  ECX = (r32((uint32_t)(0x1261901c)));
  /* 125f78f1 push ecx */
  push32((uint32_t)(ECX));
  /* 125f78f2 call 0x125f7eb0 */
  push32(0x125f78f7u); f_125f7eb0();
  /* 125f78f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f78fa push 2 */
  push32((uint32_t)(0x2u));
  /* 125f78fc mov edx, dword ptr [0x1261901c] */
  EDX = (r32((uint32_t)(0x1261901c)));
  /* 125f7902 push edx */
  push32((uint32_t)(EDX));
  /* 125f7903 call 0x125edb00 */
  push32(0x125f7908u); f_125edb00();
  /* 125f7908 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f790b mov dword ptr [0x1261901c], 0 */
  w32((uint32_t)(0x1261901c), (0x0u));
  /* 125f7915 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125f7917:;
  /* 125f7917 mov esp, ebp */
  ESP = (EBP);
  /* 125f7919 pop ebp */
  EBP = (pop32());
  /* 125f791a ret  */
  ESPCHK(0x125f7840u, _esp0);
  ESP += 4; return;
}

/* FUN_10017920 @ 0x125f7920 (1423 bytes, 533 insns) */
void f_125f7920(void) {
  FTRACE(0x125f7920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f7920 push ebp */
  push32((uint32_t)(EBP));
  /* 125f7921 mov ebp, esp */
  EBP = (ESP);
  /* 125f7923 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f7926 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125f792d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f792f mov ax, word ptr [0x12619056] */
  AX = (r16((uint32_t)(0x12619056)));
  /* 125f7935 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f7938 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125f793a mov cx, word ptr [0x12619058] */
  CX = (r16((uint32_t)(0x12619058)));
  /* 125f7941 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f7944 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f7948 jne 0x125f7952 */
  if (!C.zf) goto L_125f7952;
  /* 125f794a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f794d jmp 0x125f7eab */
  goto L_125f7eab;
L_125f7952:;
  /* 125f7952 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7955 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7958 push edx */
  push32((uint32_t)(EDX));
  /* 125f7959 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 125f795b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f795e push eax */
  push32((uint32_t)(EAX));
  /* 125f795f push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7961 call 0x125fb230 */
  push32(0x125f7966u); f_125fb230();
  /* 125f7966 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7969 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f796c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f796e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7971 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7974 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7977 push edx */
  push32((uint32_t)(EDX));
  /* 125f7978 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 125f797a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f797d push eax */
  push32((uint32_t)(EAX));
  /* 125f797e push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7980 call 0x125fb230 */
  push32(0x125f7985u); f_125fb230();
  /* 125f7985 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7988 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f798b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f798d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7990 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7993 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7996 push edx */
  push32((uint32_t)(EDX));
  /* 125f7997 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 125f7999 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f799c push eax */
  push32((uint32_t)(EAX));
  /* 125f799d push 1 */
  push32((uint32_t)(0x1u));
  /* 125f799f call 0x125fb230 */
  push32(0x125f79a4u); f_125fb230();
  /* 125f79a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f79a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f79aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f79ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f79af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f79b2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f79b5 push edx */
  push32((uint32_t)(EDX));
  /* 125f79b6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 125f79b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f79bb push eax */
  push32((uint32_t)(EAX));
  /* 125f79bc push 1 */
  push32((uint32_t)(0x1u));
  /* 125f79be call 0x125fb230 */
  push32(0x125f79c3u); f_125fb230();
  /* 125f79c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f79c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f79c9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f79cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f79ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f79d1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f79d4 push edx */
  push32((uint32_t)(EDX));
  /* 125f79d5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 125f79d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f79da push eax */
  push32((uint32_t)(EAX));
  /* 125f79db push 1 */
  push32((uint32_t)(0x1u));
  /* 125f79dd call 0x125fb230 */
  push32(0x125f79e2u); f_125fb230();
  /* 125f79e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f79e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f79e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f79ea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f79ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f79f0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f79f3 push edx */
  push32((uint32_t)(EDX));
  /* 125f79f4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 125f79f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f79f9 push eax */
  push32((uint32_t)(EAX));
  /* 125f79fa push 1 */
  push32((uint32_t)(0x1u));
  /* 125f79fc call 0x125fb230 */
  push32(0x125f7a01u); f_125fb230();
  /* 125f7a01 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7a04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7a07 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7a09 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7a0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7a0f push edx */
  push32((uint32_t)(EDX));
  /* 125f7a10 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 125f7a12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7a15 push eax */
  push32((uint32_t)(EAX));
  /* 125f7a16 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7a18 call 0x125fb230 */
  push32(0x125f7a1du); f_125fb230();
  /* 125f7a1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7a20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7a23 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7a25 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7a28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7a2b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7a2e push edx */
  push32((uint32_t)(EDX));
  /* 125f7a2f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 125f7a31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7a34 push eax */
  push32((uint32_t)(EAX));
  /* 125f7a35 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7a37 call 0x125fb230 */
  push32(0x125f7a3cu); f_125fb230();
  /* 125f7a3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7a3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7a42 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7a44 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7a47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7a4a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7a4d push edx */
  push32((uint32_t)(EDX));
  /* 125f7a4e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 125f7a50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7a53 push eax */
  push32((uint32_t)(EAX));
  /* 125f7a54 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7a56 call 0x125fb230 */
  push32(0x125f7a5bu); f_125fb230();
  /* 125f7a5b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7a5e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7a61 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7a63 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7a66 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7a69 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7a6c push edx */
  push32((uint32_t)(EDX));
  /* 125f7a6d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 125f7a6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7a72 push eax */
  push32((uint32_t)(EAX));
  /* 125f7a73 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7a75 call 0x125fb230 */
  push32(0x125f7a7au); f_125fb230();
  /* 125f7a7a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7a7d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7a80 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7a82 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7a85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7a88 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7a8b push edx */
  push32((uint32_t)(EDX));
  /* 125f7a8c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 125f7a8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7a91 push eax */
  push32((uint32_t)(EAX));
  /* 125f7a92 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7a94 call 0x125fb230 */
  push32(0x125f7a99u); f_125fb230();
  /* 125f7a99 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7a9c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7a9f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7aa1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7aa4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7aa7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7aaa push edx */
  push32((uint32_t)(EDX));
  /* 125f7aab push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 125f7aad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7ab0 push eax */
  push32((uint32_t)(EAX));
  /* 125f7ab1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7ab3 call 0x125fb230 */
  push32(0x125f7ab8u); f_125fb230();
  /* 125f7ab8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7abb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7abe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7ac0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7ac3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7ac6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7ac9 push edx */
  push32((uint32_t)(EDX));
  /* 125f7aca push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 125f7acc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7acf push eax */
  push32((uint32_t)(EAX));
  /* 125f7ad0 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7ad2 call 0x125fb230 */
  push32(0x125f7ad7u); f_125fb230();
  /* 125f7ad7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7ada mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7add or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7adf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7ae2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7ae5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7ae8 push edx */
  push32((uint32_t)(EDX));
  /* 125f7ae9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 125f7aeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7aee push eax */
  push32((uint32_t)(EAX));
  /* 125f7aef push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7af1 call 0x125fb230 */
  push32(0x125f7af6u); f_125fb230();
  /* 125f7af6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7af9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7afc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7afe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7b01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7b04 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7b07 push edx */
  push32((uint32_t)(EDX));
  /* 125f7b08 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 125f7b0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7b0d push eax */
  push32((uint32_t)(EAX));
  /* 125f7b0e push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7b10 call 0x125fb230 */
  push32(0x125f7b15u); f_125fb230();
  /* 125f7b15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7b18 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7b1b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7b1d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7b20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7b23 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7b26 push edx */
  push32((uint32_t)(EDX));
  /* 125f7b27 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 125f7b29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7b2c push eax */
  push32((uint32_t)(EAX));
  /* 125f7b2d push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7b2f call 0x125fb230 */
  push32(0x125f7b34u); f_125fb230();
  /* 125f7b34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7b37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7b3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7b3c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7b3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7b42 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7b45 push edx */
  push32((uint32_t)(EDX));
  /* 125f7b46 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 125f7b48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7b4b push eax */
  push32((uint32_t)(EAX));
  /* 125f7b4c push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7b4e call 0x125fb230 */
  push32(0x125f7b53u); f_125fb230();
  /* 125f7b53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7b56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7b59 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7b5b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7b5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7b61 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7b64 push edx */
  push32((uint32_t)(EDX));
  /* 125f7b65 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 125f7b67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7b6a push eax */
  push32((uint32_t)(EAX));
  /* 125f7b6b push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7b6d call 0x125fb230 */
  push32(0x125f7b72u); f_125fb230();
  /* 125f7b72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7b75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7b78 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7b7a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7b7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7b80 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7b83 push edx */
  push32((uint32_t)(EDX));
  /* 125f7b84 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 125f7b86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7b89 push eax */
  push32((uint32_t)(EAX));
  /* 125f7b8a push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7b8c call 0x125fb230 */
  push32(0x125f7b91u); f_125fb230();
  /* 125f7b91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7b94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7b97 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7b99 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7b9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7b9f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7ba2 push edx */
  push32((uint32_t)(EDX));
  /* 125f7ba3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 125f7ba5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7ba8 push eax */
  push32((uint32_t)(EAX));
  /* 125f7ba9 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7bab call 0x125fb230 */
  push32(0x125f7bb0u); f_125fb230();
  /* 125f7bb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7bb3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7bb6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7bb8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7bbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7bbe add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7bc1 push edx */
  push32((uint32_t)(EDX));
  /* 125f7bc2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 125f7bc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7bc7 push eax */
  push32((uint32_t)(EAX));
  /* 125f7bc8 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7bca call 0x125fb230 */
  push32(0x125f7bcfu); f_125fb230();
  /* 125f7bcf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7bd2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7bd5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7bd7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7bda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7bdd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7be0 push edx */
  push32((uint32_t)(EDX));
  /* 125f7be1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 125f7be3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7be6 push eax */
  push32((uint32_t)(EAX));
  /* 125f7be7 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7be9 call 0x125fb230 */
  push32(0x125f7beeu); f_125fb230();
  /* 125f7bee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7bf1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7bf4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7bf6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7bf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7bfc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7bff push edx */
  push32((uint32_t)(EDX));
  /* 125f7c00 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 125f7c02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7c05 push eax */
  push32((uint32_t)(EAX));
  /* 125f7c06 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7c08 call 0x125fb230 */
  push32(0x125f7c0du); f_125fb230();
  /* 125f7c0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7c10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7c13 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7c15 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7c18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7c1b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7c1e push edx */
  push32((uint32_t)(EDX));
  /* 125f7c1f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 125f7c21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7c24 push eax */
  push32((uint32_t)(EAX));
  /* 125f7c25 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7c27 call 0x125fb230 */
  push32(0x125f7c2cu); f_125fb230();
  /* 125f7c2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7c2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7c32 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7c34 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7c37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7c3a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7c3d push edx */
  push32((uint32_t)(EDX));
  /* 125f7c3e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 125f7c40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7c43 push eax */
  push32((uint32_t)(EAX));
  /* 125f7c44 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7c46 call 0x125fb230 */
  push32(0x125f7c4bu); f_125fb230();
  /* 125f7c4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7c4e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7c51 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7c53 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7c56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7c59 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7c5c push edx */
  push32((uint32_t)(EDX));
  /* 125f7c5d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 125f7c5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7c62 push eax */
  push32((uint32_t)(EAX));
  /* 125f7c63 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7c65 call 0x125fb230 */
  push32(0x125f7c6au); f_125fb230();
  /* 125f7c6a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7c6d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7c70 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7c72 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7c75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7c78 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7c7b push edx */
  push32((uint32_t)(EDX));
  /* 125f7c7c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 125f7c7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7c81 push eax */
  push32((uint32_t)(EAX));
  /* 125f7c82 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7c84 call 0x125fb230 */
  push32(0x125f7c89u); f_125fb230();
  /* 125f7c89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7c8c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7c8f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7c91 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7c94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7c97 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7c9a push edx */
  push32((uint32_t)(EDX));
  /* 125f7c9b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 125f7c9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7ca0 push eax */
  push32((uint32_t)(EAX));
  /* 125f7ca1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7ca3 call 0x125fb230 */
  push32(0x125f7ca8u); f_125fb230();
  /* 125f7ca8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7cab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7cae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7cb0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7cb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7cb6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7cb9 push edx */
  push32((uint32_t)(EDX));
  /* 125f7cba push 0x3a */
  push32((uint32_t)(0x3au));
  /* 125f7cbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7cbf push eax */
  push32((uint32_t)(EAX));
  /* 125f7cc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7cc2 call 0x125fb230 */
  push32(0x125f7cc7u); f_125fb230();
  /* 125f7cc7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7cca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7ccd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7ccf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7cd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7cd5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7cd8 push edx */
  push32((uint32_t)(EDX));
  /* 125f7cd9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 125f7cdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7cde push eax */
  push32((uint32_t)(EAX));
  /* 125f7cdf push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7ce1 call 0x125fb230 */
  push32(0x125f7ce6u); f_125fb230();
  /* 125f7ce6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7ce9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7cec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7cee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7cf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7cf4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7cf7 push edx */
  push32((uint32_t)(EDX));
  /* 125f7cf8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 125f7cfa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7cfd push eax */
  push32((uint32_t)(EAX));
  /* 125f7cfe push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7d00 call 0x125fb230 */
  push32(0x125f7d05u); f_125fb230();
  /* 125f7d05 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7d08 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7d0b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7d0d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7d10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7d13 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7d16 push edx */
  push32((uint32_t)(EDX));
  /* 125f7d17 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 125f7d19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7d1c push eax */
  push32((uint32_t)(EAX));
  /* 125f7d1d push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7d1f call 0x125fb230 */
  push32(0x125f7d24u); f_125fb230();
  /* 125f7d24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7d27 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7d2a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7d2c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7d2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7d32 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7d38 push edx */
  push32((uint32_t)(EDX));
  /* 125f7d39 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 125f7d3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7d3e push eax */
  push32((uint32_t)(EAX));
  /* 125f7d3f push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7d41 call 0x125fb230 */
  push32(0x125f7d46u); f_125fb230();
  /* 125f7d46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7d49 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7d4c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7d4e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7d51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7d54 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7d5a push edx */
  push32((uint32_t)(EDX));
  /* 125f7d5b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 125f7d5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7d60 push eax */
  push32((uint32_t)(EAX));
  /* 125f7d61 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7d63 call 0x125fb230 */
  push32(0x125f7d68u); f_125fb230();
  /* 125f7d68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7d6b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7d6e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7d70 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7d73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7d76 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7d7c push edx */
  push32((uint32_t)(EDX));
  /* 125f7d7d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 125f7d7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7d82 push eax */
  push32((uint32_t)(EAX));
  /* 125f7d83 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7d85 call 0x125fb230 */
  push32(0x125f7d8au); f_125fb230();
  /* 125f7d8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7d8d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7d90 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7d92 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7d95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7d98 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7d9e push edx */
  push32((uint32_t)(EDX));
  /* 125f7d9f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 125f7da1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7da4 push eax */
  push32((uint32_t)(EAX));
  /* 125f7da5 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7da7 call 0x125fb230 */
  push32(0x125f7dacu); f_125fb230();
  /* 125f7dac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7daf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7db2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7db4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7db7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7dba add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7dc0 push edx */
  push32((uint32_t)(EDX));
  /* 125f7dc1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 125f7dc3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7dc6 push eax */
  push32((uint32_t)(EAX));
  /* 125f7dc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7dc9 call 0x125fb230 */
  push32(0x125f7dceu); f_125fb230();
  /* 125f7dce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7dd1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7dd4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7dd6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7dd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7ddc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7de2 push edx */
  push32((uint32_t)(EDX));
  /* 125f7de3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 125f7de5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7de8 push eax */
  push32((uint32_t)(EAX));
  /* 125f7de9 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7deb call 0x125fb230 */
  push32(0x125f7df0u); f_125fb230();
  /* 125f7df0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7df3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7df6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7df8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7dfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7dfe add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7e04 push edx */
  push32((uint32_t)(EDX));
  /* 125f7e05 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 125f7e07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7e0a push eax */
  push32((uint32_t)(EAX));
  /* 125f7e0b push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7e0d call 0x125fb230 */
  push32(0x125f7e12u); f_125fb230();
  /* 125f7e12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7e15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7e18 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7e1a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7e1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7e20 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7e26 push edx */
  push32((uint32_t)(EDX));
  /* 125f7e27 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 125f7e29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f7e2c push eax */
  push32((uint32_t)(EAX));
  /* 125f7e2d push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7e2f call 0x125fb230 */
  push32(0x125f7e34u); f_125fb230();
  /* 125f7e34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7e37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7e3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7e3c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7e3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7e42 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7e48 push edx */
  push32((uint32_t)(EDX));
  /* 125f7e49 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 125f7e4b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f7e4e push eax */
  push32((uint32_t)(EAX));
  /* 125f7e4f push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7e51 call 0x125fb230 */
  push32(0x125f7e56u); f_125fb230();
  /* 125f7e56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7e59 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7e5c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7e5e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7e61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7e64 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7e6a push edx */
  push32((uint32_t)(EDX));
  /* 125f7e6b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 125f7e6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f7e70 push eax */
  push32((uint32_t)(EAX));
  /* 125f7e71 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7e73 call 0x125fb230 */
  push32(0x125f7e78u); f_125fb230();
  /* 125f7e78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7e7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7e7e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7e80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7e83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7e86 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7e8c push edx */
  push32((uint32_t)(EDX));
  /* 125f7e8d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 125f7e92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f7e95 push eax */
  push32((uint32_t)(EAX));
  /* 125f7e96 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f7e98 call 0x125fb230 */
  push32(0x125f7e9du); f_125fb230();
  /* 125f7e9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7ea0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f7ea3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f7ea5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125f7ea8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_125f7eab:;
  /* 125f7eab mov esp, ebp */
  ESP = (EBP);
  /* 125f7ead pop ebp */
  EBP = (pop32());
  /* 125f7eae ret  */
  ESPCHK(0x125f7920u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x125f7eb0 (779 bytes, 265 insns) */
void f_125f7eb0(void) {
  FTRACE(0x125f7eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f7eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f7eb1 mov ebp, esp */
  EBP = (ESP);
  /* 125f7eb3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f7eb7 jne 0x125f7ebe */
  if (!C.zf) goto L_125f7ebe;
  /* 125f7eb9 jmp 0x125f81b9 */
  goto L_125f81b9;
L_125f7ebe:;
  /* 125f7ebe push 2 */
  push32((uint32_t)(0x2u));
  /* 125f7ec0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7ec3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125f7ec6 push ecx */
  push32((uint32_t)(ECX));
  /* 125f7ec7 call 0x125edb00 */
  push32(0x125f7eccu); f_125edb00();
  /* 125f7ecc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7ecf push 2 */
  push32((uint32_t)(0x2u));
  /* 125f7ed1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7ed4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125f7ed7 push eax */
  push32((uint32_t)(EAX));
  /* 125f7ed8 call 0x125edb00 */
  push32(0x125f7eddu); f_125edb00();
  /* 125f7edd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7ee0 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f7ee2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7ee5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125f7ee8 push edx */
  push32((uint32_t)(EDX));
  /* 125f7ee9 call 0x125edb00 */
  push32(0x125f7eeeu); f_125edb00();
  /* 125f7eee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7ef1 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f7ef3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7ef6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125f7ef9 push ecx */
  push32((uint32_t)(ECX));
  /* 125f7efa call 0x125edb00 */
  push32(0x125f7effu); f_125edb00();
  /* 125f7eff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7f02 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f7f04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7f07 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125f7f0a push eax */
  push32((uint32_t)(EAX));
  /* 125f7f0b call 0x125edb00 */
  push32(0x125f7f10u); f_125edb00();
  /* 125f7f10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7f13 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f7f15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7f18 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 125f7f1b push edx */
  push32((uint32_t)(EDX));
  /* 125f7f1c call 0x125edb00 */
  push32(0x125f7f21u); f_125edb00();
  /* 125f7f21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7f24 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f7f26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7f29 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125f7f2b push ecx */
  push32((uint32_t)(ECX));
  /* 125f7f2c call 0x125edb00 */
  push32(0x125f7f31u); f_125edb00();
  /* 125f7f31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7f34 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f7f36 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7f39 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 125f7f3c push eax */
  push32((uint32_t)(EAX));
  /* 125f7f3d call 0x125edb00 */
  push32(0x125f7f42u); f_125edb00();
  /* 125f7f42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7f45 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f7f47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7f4a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 125f7f4d push edx */
  push32((uint32_t)(EDX));
  /* 125f7f4e call 0x125edb00 */
  push32(0x125f7f53u); f_125edb00();
  /* 125f7f53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7f56 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f7f58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7f5b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 125f7f5e push ecx */
  push32((uint32_t)(ECX));
  /* 125f7f5f call 0x125edb00 */
  push32(0x125f7f64u); f_125edb00();
  /* 125f7f64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7f67 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f7f69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7f6c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 125f7f6f push eax */
  push32((uint32_t)(EAX));
  /* 125f7f70 call 0x125edb00 */
  push32(0x125f7f75u); f_125edb00();
  /* 125f7f75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7f78 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f7f7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7f7d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 125f7f80 push edx */
  push32((uint32_t)(EDX));
  /* 125f7f81 call 0x125edb00 */
  push32(0x125f7f86u); f_125edb00();
  /* 125f7f86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7f89 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f7f8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7f8e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 125f7f91 push ecx */
  push32((uint32_t)(ECX));
  /* 125f7f92 call 0x125edb00 */
  push32(0x125f7f97u); f_125edb00();
  /* 125f7f97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7f9a push 2 */
  push32((uint32_t)(0x2u));
  /* 125f7f9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7f9f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 125f7fa2 push eax */
  push32((uint32_t)(EAX));
  /* 125f7fa3 call 0x125edb00 */
  push32(0x125f7fa8u); f_125edb00();
  /* 125f7fa8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7fab push 2 */
  push32((uint32_t)(0x2u));
  /* 125f7fad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7fb0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 125f7fb3 push edx */
  push32((uint32_t)(EDX));
  /* 125f7fb4 call 0x125edb00 */
  push32(0x125f7fb9u); f_125edb00();
  /* 125f7fb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7fbc push 2 */
  push32((uint32_t)(0x2u));
  /* 125f7fbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7fc1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 125f7fc4 push ecx */
  push32((uint32_t)(ECX));
  /* 125f7fc5 call 0x125edb00 */
  push32(0x125f7fcau); f_125edb00();
  /* 125f7fca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7fcd push 2 */
  push32((uint32_t)(0x2u));
  /* 125f7fcf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7fd2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 125f7fd5 push eax */
  push32((uint32_t)(EAX));
  /* 125f7fd6 call 0x125edb00 */
  push32(0x125f7fdbu); f_125edb00();
  /* 125f7fdb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7fde push 2 */
  push32((uint32_t)(0x2u));
  /* 125f7fe0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7fe3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 125f7fe6 push edx */
  push32((uint32_t)(EDX));
  /* 125f7fe7 call 0x125edb00 */
  push32(0x125f7fecu); f_125edb00();
  /* 125f7fec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f7fef push 2 */
  push32((uint32_t)(0x2u));
  /* 125f7ff1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f7ff4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 125f7ff7 push ecx */
  push32((uint32_t)(ECX));
  /* 125f7ff8 call 0x125edb00 */
  push32(0x125f7ffdu); f_125edb00();
  /* 125f7ffd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8000 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8002 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8005 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 125f8008 push eax */
  push32((uint32_t)(EAX));
  /* 125f8009 call 0x125edb00 */
  push32(0x125f800eu); f_125edb00();
  /* 125f800e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8011 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8013 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8016 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 125f8019 push edx */
  push32((uint32_t)(EDX));
  /* 125f801a call 0x125edb00 */
  push32(0x125f801fu); f_125edb00();
  /* 125f801f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8022 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8027 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 125f802a push ecx */
  push32((uint32_t)(ECX));
  /* 125f802b call 0x125edb00 */
  push32(0x125f8030u); f_125edb00();
  /* 125f8030 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8033 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8035 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8038 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 125f803b push eax */
  push32((uint32_t)(EAX));
  /* 125f803c call 0x125edb00 */
  push32(0x125f8041u); f_125edb00();
  /* 125f8041 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8044 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8046 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8049 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 125f804c push edx */
  push32((uint32_t)(EDX));
  /* 125f804d call 0x125edb00 */
  push32(0x125f8052u); f_125edb00();
  /* 125f8052 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8055 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8057 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f805a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 125f805d push ecx */
  push32((uint32_t)(ECX));
  /* 125f805e call 0x125edb00 */
  push32(0x125f8063u); f_125edb00();
  /* 125f8063 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8066 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8068 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f806b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 125f806e push eax */
  push32((uint32_t)(EAX));
  /* 125f806f call 0x125edb00 */
  push32(0x125f8074u); f_125edb00();
  /* 125f8074 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8077 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8079 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f807c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 125f807f push edx */
  push32((uint32_t)(EDX));
  /* 125f8080 call 0x125edb00 */
  push32(0x125f8085u); f_125edb00();
  /* 125f8085 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8088 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f808a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f808d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 125f8090 push ecx */
  push32((uint32_t)(ECX));
  /* 125f8091 call 0x125edb00 */
  push32(0x125f8096u); f_125edb00();
  /* 125f8096 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8099 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f809b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f809e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 125f80a1 push eax */
  push32((uint32_t)(EAX));
  /* 125f80a2 call 0x125edb00 */
  push32(0x125f80a7u); f_125edb00();
  /* 125f80a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f80aa push 2 */
  push32((uint32_t)(0x2u));
  /* 125f80ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f80af mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 125f80b2 push edx */
  push32((uint32_t)(EDX));
  /* 125f80b3 call 0x125edb00 */
  push32(0x125f80b8u); f_125edb00();
  /* 125f80b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f80bb push 2 */
  push32((uint32_t)(0x2u));
  /* 125f80bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f80c0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 125f80c3 push ecx */
  push32((uint32_t)(ECX));
  /* 125f80c4 call 0x125edb00 */
  push32(0x125f80c9u); f_125edb00();
  /* 125f80c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f80cc push 2 */
  push32((uint32_t)(0x2u));
  /* 125f80ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f80d1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 125f80d4 push eax */
  push32((uint32_t)(EAX));
  /* 125f80d5 call 0x125edb00 */
  push32(0x125f80dau); f_125edb00();
  /* 125f80da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f80dd push 2 */
  push32((uint32_t)(0x2u));
  /* 125f80df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f80e2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 125f80e8 push edx */
  push32((uint32_t)(EDX));
  /* 125f80e9 call 0x125edb00 */
  push32(0x125f80eeu); f_125edb00();
  /* 125f80ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f80f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f80f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f80f6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 125f80fc push ecx */
  push32((uint32_t)(ECX));
  /* 125f80fd call 0x125edb00 */
  push32(0x125f8102u); f_125edb00();
  /* 125f8102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8105 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8107 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f810a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 125f8110 push eax */
  push32((uint32_t)(EAX));
  /* 125f8111 call 0x125edb00 */
  push32(0x125f8116u); f_125edb00();
  /* 125f8116 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8119 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f811b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f811e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 125f8124 push edx */
  push32((uint32_t)(EDX));
  /* 125f8125 call 0x125edb00 */
  push32(0x125f812au); f_125edb00();
  /* 125f812a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f812d push 2 */
  push32((uint32_t)(0x2u));
  /* 125f812f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8132 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 125f8138 push ecx */
  push32((uint32_t)(ECX));
  /* 125f8139 call 0x125edb00 */
  push32(0x125f813eu); f_125edb00();
  /* 125f813e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8141 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8143 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8146 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 125f814c push eax */
  push32((uint32_t)(EAX));
  /* 125f814d call 0x125edb00 */
  push32(0x125f8152u); f_125edb00();
  /* 125f8152 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8155 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8157 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f815a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 125f8160 push edx */
  push32((uint32_t)(EDX));
  /* 125f8161 call 0x125edb00 */
  push32(0x125f8166u); f_125edb00();
  /* 125f8166 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8169 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f816b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f816e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 125f8174 push ecx */
  push32((uint32_t)(ECX));
  /* 125f8175 call 0x125edb00 */
  push32(0x125f817au); f_125edb00();
  /* 125f817a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f817d push 2 */
  push32((uint32_t)(0x2u));
  /* 125f817f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8182 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 125f8188 push eax */
  push32((uint32_t)(EAX));
  /* 125f8189 call 0x125edb00 */
  push32(0x125f818eu); f_125edb00();
  /* 125f818e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8191 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8193 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8196 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 125f819c push edx */
  push32((uint32_t)(EDX));
  /* 125f819d call 0x125edb00 */
  push32(0x125f81a2u); f_125edb00();
  /* 125f81a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f81a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f81a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f81aa mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 125f81b0 push ecx */
  push32((uint32_t)(ECX));
  /* 125f81b1 call 0x125edb00 */
  push32(0x125f81b6u); f_125edb00();
  /* 125f81b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f81b9:;
  /* 125f81b9 pop ebp */
  EBP = (pop32());
  /* 125f81ba ret  */
  ESPCHK(0x125f7eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100181c0 @ 0x125f81c0 (678 bytes, 180 insns) */
void f_125f81c0(void) {
  FTRACE(0x125f81c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f81c0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f81c1 mov ebp, esp */
  EBP = (ESP);
  /* 125f81c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f81c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125f81cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f81cf mov ax, word ptr [0x12619052] */
  AX = (r16((uint32_t)(0x12619052)));
  /* 125f81d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f81d8 cmp dword ptr [0x12618ff8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12618ff8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f81df je 0x125f833a */
  if (C.zf) goto L_125f833a;
  /* 125f81e5 push 0x12619020 */
  push32((uint32_t)(0x12619020u));
  /* 125f81ea push 0xe */
  push32((uint32_t)(0xeu));
  /* 125f81ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f81ef push ecx */
  push32((uint32_t)(ECX));
  /* 125f81f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f81f2 call 0x125fb230 */
  push32(0x125f81f7u); f_125fb230();
  /* 125f81f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f81fa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f81fd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 125f81ff mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125f8202 push 0x12619024 */
  push32((uint32_t)(0x12619024u));
  /* 125f8207 push 0xf */
  push32((uint32_t)(0xfu));
  /* 125f8209 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f820c push eax */
  push32((uint32_t)(EAX));
  /* 125f820d push 1 */
  push32((uint32_t)(0x1u));
  /* 125f820f call 0x125fb230 */
  push32(0x125f8214u); f_125fb230();
  /* 125f8214 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8217 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f821a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f821c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f821f push 0x12619028 */
  push32((uint32_t)(0x12619028u));
  /* 125f8224 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 125f8226 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f8229 push edx */
  push32((uint32_t)(EDX));
  /* 125f822a push 1 */
  push32((uint32_t)(0x1u));
  /* 125f822c call 0x125fb230 */
  push32(0x125f8231u); f_125fb230();
  /* 125f8231 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8234 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f8237 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f8239 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f823c mov edx, dword ptr [0x12619028] */
  EDX = (r32((uint32_t)(0x12619028)));
  /* 125f8242 push edx */
  push32((uint32_t)(EDX));
  /* 125f8243 call 0x125f8470 */
  push32(0x125f8248u); f_125f8470();
  /* 125f8248 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f824b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f824f je 0x125f82a9 */
  if (C.zf) goto L_125f82a9;
  /* 125f8251 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8253 mov eax, dword ptr [0x12619020] */
  EAX = (r32((uint32_t)(0x12619020)));
  /* 125f8258 push eax */
  push32((uint32_t)(EAX));
  /* 125f8259 call 0x125edb00 */
  push32(0x125f825eu); f_125edb00();
  /* 125f825e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8261 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8263 mov ecx, dword ptr [0x12619024] */
  ECX = (r32((uint32_t)(0x12619024)));
  /* 125f8269 push ecx */
  push32((uint32_t)(ECX));
  /* 125f826a call 0x125edb00 */
  push32(0x125f826fu); f_125edb00();
  /* 125f826f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8272 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8274 mov edx, dword ptr [0x12619028] */
  EDX = (r32((uint32_t)(0x12619028)));
  /* 125f827a push edx */
  push32((uint32_t)(EDX));
  /* 125f827b call 0x125edb00 */
  push32(0x125f8280u); f_125edb00();
  /* 125f8280 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8283 mov dword ptr [0x12619020], 0 */
  w32((uint32_t)(0x12619020), (0x0u));
  /* 125f828d mov dword ptr [0x12619024], 0 */
  w32((uint32_t)(0x12619024), (0x0u));
  /* 125f8297 mov dword ptr [0x12619028], 0 */
  w32((uint32_t)(0x12619028), (0x0u));
  /* 125f82a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f82a4 jmp 0x125f8462 */
  goto L_125f8462;
L_125f82a9:;
  /* 125f82a9 mov eax, dword ptr [0x12617d88] */
  EAX = (r32((uint32_t)(0x12617d88)));
  /* 125f82ae cmp dword ptr [eax], 0x12617d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12617d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f82b4 je 0x125f82f0 */
  if (C.zf) goto L_125f82f0;
  /* 125f82b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f82b8 mov ecx, dword ptr [0x12617d88] */
  ECX = (r32((uint32_t)(0x12617d88)));
  /* 125f82be mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125f82c0 push edx */
  push32((uint32_t)(EDX));
  /* 125f82c1 call 0x125edb00 */
  push32(0x125f82c6u); f_125edb00();
  /* 125f82c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f82c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f82cb mov eax, dword ptr [0x12617d88] */
  EAX = (r32((uint32_t)(0x12617d88)));
  /* 125f82d0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125f82d3 push ecx */
  push32((uint32_t)(ECX));
  /* 125f82d4 call 0x125edb00 */
  push32(0x125f82d9u); f_125edb00();
  /* 125f82d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f82dc push 2 */
  push32((uint32_t)(0x2u));
  /* 125f82de mov edx, dword ptr [0x12617d88] */
  EDX = (r32((uint32_t)(0x12617d88)));
  /* 125f82e4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125f82e7 push eax */
  push32((uint32_t)(EAX));
  /* 125f82e8 call 0x125edb00 */
  push32(0x125f82edu); f_125edb00();
  /* 125f82ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f82f0:;
  /* 125f82f0 mov ecx, dword ptr [0x12617d88] */
  ECX = (r32((uint32_t)(0x12617d88)));
  /* 125f82f6 mov edx, dword ptr [0x12619020] */
  EDX = (r32((uint32_t)(0x12619020)));
  /* 125f82fc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 125f82fe mov eax, dword ptr [0x12617d88] */
  EAX = (r32((uint32_t)(0x12617d88)));
  /* 125f8303 mov ecx, dword ptr [0x12619024] */
  ECX = (r32((uint32_t)(0x12619024)));
  /* 125f8309 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 125f830c mov edx, dword ptr [0x12617d88] */
  EDX = (r32((uint32_t)(0x12617d88)));
  /* 125f8312 mov eax, dword ptr [0x12619028] */
  EAX = (r32((uint32_t)(0x12619028)));
  /* 125f8317 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 125f831a mov ecx, dword ptr [0x12617d88] */
  ECX = (r32((uint32_t)(0x12617d88)));
  /* 125f8320 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125f8322 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125f8324 mov byte ptr [0x12616ea8], al */
  w8((uint32_t)(0x12616ea8), (AL));
  /* 125f8329 mov dword ptr [0x12616eac], 1 */
  w32((uint32_t)(0x12616eac), (0x1u));
  /* 125f8333 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f8335 jmp 0x125f8462 */
  goto L_125f8462;
L_125f833a:;
  /* 125f833a push 2 */
  push32((uint32_t)(0x2u));
  /* 125f833c mov ecx, dword ptr [0x12619020] */
  ECX = (r32((uint32_t)(0x12619020)));
  /* 125f8342 push ecx */
  push32((uint32_t)(ECX));
  /* 125f8343 call 0x125edb00 */
  push32(0x125f8348u); f_125edb00();
  /* 125f8348 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f834b push 2 */
  push32((uint32_t)(0x2u));
  /* 125f834d mov edx, dword ptr [0x12619024] */
  EDX = (r32((uint32_t)(0x12619024)));
  /* 125f8353 push edx */
  push32((uint32_t)(EDX));
  /* 125f8354 call 0x125edb00 */
  push32(0x125f8359u); f_125edb00();
  /* 125f8359 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f835c push 2 */
  push32((uint32_t)(0x2u));
  /* 125f835e mov eax, dword ptr [0x12619028] */
  EAX = (r32((uint32_t)(0x12619028)));
  /* 125f8363 push eax */
  push32((uint32_t)(EAX));
  /* 125f8364 call 0x125edb00 */
  push32(0x125f8369u); f_125edb00();
  /* 125f8369 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f836c mov dword ptr [0x12619020], 0 */
  w32((uint32_t)(0x12619020), (0x0u));
  /* 125f8376 mov dword ptr [0x12619024], 0 */
  w32((uint32_t)(0x12619024), (0x0u));
  /* 125f8380 mov dword ptr [0x12619028], 0 */
  w32((uint32_t)(0x12619028), (0x0u));
  /* 125f838a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 125f838f push 0x12614b5c */
  push32((uint32_t)(0x12614b5cu));
  /* 125f8394 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8396 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8398 call 0x125ed070 */
  push32(0x125f839du); f_125ed070();
  /* 125f839d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f83a0 mov ecx, dword ptr [0x12617d88] */
  ECX = (r32((uint32_t)(0x12617d88)));
  /* 125f83a6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125f83a8 mov edx, dword ptr [0x12617d88] */
  EDX = (r32((uint32_t)(0x12617d88)));
  /* 125f83ae cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f83b1 jne 0x125f83bb */
  if (!C.zf) goto L_125f83bb;
  /* 125f83b3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f83b6 jmp 0x125f8462 */
  goto L_125f8462;
L_125f83bb:;
  /* 125f83bb push 0x12614b2c */
  push32((uint32_t)(0x12614b2cu));
  /* 125f83c0 mov eax, dword ptr [0x12617d88] */
  EAX = (r32((uint32_t)(0x12617d88)));
  /* 125f83c5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125f83c7 push ecx */
  push32((uint32_t)(ECX));
  /* 125f83c8 call 0x125f0020 */
  push32(0x125f83cdu); f_125f0020();
  /* 125f83cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f83d0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 125f83d5 push 0x12614b5c */
  push32((uint32_t)(0x12614b5cu));
  /* 125f83da push 2 */
  push32((uint32_t)(0x2u));
  /* 125f83dc push 2 */
  push32((uint32_t)(0x2u));
  /* 125f83de call 0x125ed070 */
  push32(0x125f83e3u); f_125ed070();
  /* 125f83e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f83e6 mov edx, dword ptr [0x12617d88] */
  EDX = (r32((uint32_t)(0x12617d88)));
  /* 125f83ec mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 125f83ef mov eax, dword ptr [0x12617d88] */
  EAX = (r32((uint32_t)(0x12617d88)));
  /* 125f83f4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f83f8 jne 0x125f83ff */
  if (!C.zf) goto L_125f83ff;
  /* 125f83fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f83fd jmp 0x125f8462 */
  goto L_125f8462;
L_125f83ff:;
  /* 125f83ff mov ecx, dword ptr [0x12617d88] */
  ECX = (r32((uint32_t)(0x12617d88)));
  /* 125f8405 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125f8408 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 125f840b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 125f8410 push 0x12614b5c */
  push32((uint32_t)(0x12614b5cu));
  /* 125f8415 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8417 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8419 call 0x125ed070 */
  push32(0x125f841eu); f_125ed070();
  /* 125f841e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8421 mov ecx, dword ptr [0x12617d88] */
  ECX = (r32((uint32_t)(0x12617d88)));
  /* 125f8427 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 125f842a mov edx, dword ptr [0x12617d88] */
  EDX = (r32((uint32_t)(0x12617d88)));
  /* 125f8430 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8434 jne 0x125f843b */
  if (!C.zf) goto L_125f843b;
  /* 125f8436 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f8439 jmp 0x125f8462 */
  goto L_125f8462;
L_125f843b:;
  /* 125f843b mov eax, dword ptr [0x12617d88] */
  EAX = (r32((uint32_t)(0x12617d88)));
  /* 125f8440 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125f8443 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 125f8446 mov edx, dword ptr [0x12617d88] */
  EDX = (r32((uint32_t)(0x12617d88)));
  /* 125f844c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125f844e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125f8450 mov byte ptr [0x12616ea8], cl */
  w8((uint32_t)(0x12616ea8), (CL));
  /* 125f8456 mov dword ptr [0x12616eac], 1 */
  w32((uint32_t)(0x12616eac), (0x1u));
  /* 125f8460 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125f8462:;
  /* 125f8462 mov esp, ebp */
  ESP = (EBP);
  /* 125f8464 pop ebp */
  EBP = (pop32());
  /* 125f8465 ret  */
  ESPCHK(0x125f81c0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x125f8470 (125 bytes, 49 insns) */
void f_125f8470(void) {
  FTRACE(0x125f8470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f8470 push ebp */
  push32((uint32_t)(EBP));
  /* 125f8471 mov ebp, esp */
  EBP = (ESP);
  /* 125f8473 push ecx */
  push32((uint32_t)(ECX));
L_125f8474:;
  /* 125f8474 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8477 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125f847a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f847c je 0x125f84e9 */
  if (C.zf) goto L_125f84e9;
  /* 125f847e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8481 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125f8484 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8487 jl 0x125f84ad */
  if ((C.sf!=C.of)) goto L_125f84ad;
  /* 125f8489 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f848c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125f848f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8492 jg 0x125f84ad */
  if ((!C.zf&&C.sf==C.of)) goto L_125f84ad;
  /* 125f8494 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8497 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125f849a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f849d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f84a0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 125f84a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f84a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f84a8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125f84ab jmp 0x125f84e7 */
  goto L_125f84e7;
L_125f84ad:;
  /* 125f84ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f84b0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125f84b3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f84b6 jne 0x125f84de */
  if (!C.zf) goto L_125f84de;
  /* 125f84b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f84bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125f84be:;
  /* 125f84be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f84c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f84c4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 125f84c7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 125f84c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f84cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f84cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125f84d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f84d5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125f84d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f84da jne 0x125f84be */
  if (!C.zf) goto L_125f84be;
  /* 125f84dc jmp 0x125f84e7 */
  goto L_125f84e7;
L_125f84de:;
  /* 125f84de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f84e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f84e4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_125f84e7:;
  /* 125f84e7 jmp 0x125f8474 */
  goto L_125f8474;
L_125f84e9:;
  /* 125f84e9 mov esp, ebp */
  ESP = (EBP);
  /* 125f84eb pop ebp */
  EBP = (pop32());
  /* 125f84ec ret  */
  ESPCHK(0x125f8470u, _esp0);
  ESP += 4; return;
}

/* FUN_100184f0 @ 0x125f84f0 (304 bytes, 85 insns) */
void f_125f84f0(void) {
  FTRACE(0x125f84f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f84f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f84f1 mov ebp, esp */
  EBP = (ESP);
  /* 125f84f3 push ecx */
  push32((uint32_t)(ECX));
  /* 125f84f4 cmp dword ptr [0x12618ff4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12618ff4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f84fb je 0x125f85bc */
  if (C.zf) goto L_125f85bc;
  /* 125f8501 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 125f8503 push 0x12614b68 */
  push32((uint32_t)(0x12614b68u));
  /* 125f8508 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f850a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 125f850c push 1 */
  push32((uint32_t)(0x1u));
  /* 125f850e call 0x125ed480 */
  push32(0x125f8513u); f_125ed480();
  /* 125f8513 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8516 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f8519 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f851d jne 0x125f8529 */
  if (!C.zf) goto L_125f8529;
  /* 125f851f mov eax, 1 */
  EAX = (0x1u);
  /* 125f8524 jmp 0x125f861c */
  goto L_125f861c;
L_125f8529:;
  /* 125f8529 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f852c push eax */
  push32((uint32_t)(EAX));
  /* 125f852d call 0x125f8620 */
  push32(0x125f8532u); f_125f8620();
  /* 125f8532 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8535 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f8537 je 0x125f855d */
  if (C.zf) goto L_125f855d;
  /* 125f8539 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f853c push ecx */
  push32((uint32_t)(ECX));
  /* 125f853d call 0x125f88b0 */
  push32(0x125f8542u); f_125f88b0();
  /* 125f8542 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8545 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8547 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f854a push edx */
  push32((uint32_t)(EDX));
  /* 125f854b call 0x125edb00 */
  push32(0x125f8550u); f_125edb00();
  /* 125f8550 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8553 mov eax, 1 */
  EAX = (0x1u);
  /* 125f8558 jmp 0x125f861c */
  goto L_125f861c;
L_125f855d:;
  /* 125f855d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f8560 mov ecx, dword ptr [0x12617d88] */
  ECX = (r32((uint32_t)(0x12617d88)));
  /* 125f8566 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125f8568 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125f856a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f856d mov ecx, dword ptr [0x12617d88] */
  ECX = (r32((uint32_t)(0x12617d88)));
  /* 125f8573 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125f8576 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 125f8579 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f857c mov ecx, dword ptr [0x12617d88] */
  ECX = (r32((uint32_t)(0x12617d88)));
  /* 125f8582 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125f8585 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 125f8588 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f858b mov dword ptr [0x12617d88], eax */
  w32((uint32_t)(0x12617d88), (EAX));
  /* 125f8590 mov ecx, dword ptr [0x1261902c] */
  ECX = (r32((uint32_t)(0x1261902c)));
  /* 125f8596 push ecx */
  push32((uint32_t)(ECX));
  /* 125f8597 call 0x125f88b0 */
  push32(0x125f859cu); f_125f88b0();
  /* 125f859c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f859f push 2 */
  push32((uint32_t)(0x2u));
  /* 125f85a1 mov edx, dword ptr [0x1261902c] */
  EDX = (r32((uint32_t)(0x1261902c)));
  /* 125f85a7 push edx */
  push32((uint32_t)(EDX));
  /* 125f85a8 call 0x125edb00 */
  push32(0x125f85adu); f_125edb00();
  /* 125f85ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f85b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f85b3 mov dword ptr [0x1261902c], eax */
  w32((uint32_t)(0x1261902c), (EAX));
  /* 125f85b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f85ba jmp 0x125f861c */
  goto L_125f861c;
L_125f85bc:;
  /* 125f85bc mov ecx, dword ptr [0x12617d88] */
  ECX = (r32((uint32_t)(0x12617d88)));
  /* 125f85c2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125f85c4 mov dword ptr [0x12617d58], edx */
  w32((uint32_t)(0x12617d58), (EDX));
  /* 125f85ca mov eax, dword ptr [0x12617d88] */
  EAX = (r32((uint32_t)(0x12617d88)));
  /* 125f85cf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125f85d2 mov dword ptr [0x12617d5c], ecx */
  w32((uint32_t)(0x12617d5c), (ECX));
  /* 125f85d8 mov edx, dword ptr [0x12617d88] */
  EDX = (r32((uint32_t)(0x12617d88)));
  /* 125f85de mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125f85e1 mov dword ptr [0x12617d60], eax */
  w32((uint32_t)(0x12617d60), (EAX));
  /* 125f85e6 mov dword ptr [0x12617d88], 0x12617d58 */
  w32((uint32_t)(0x12617d88), (0x12617d58u));
  /* 125f85f0 mov ecx, dword ptr [0x1261902c] */
  ECX = (r32((uint32_t)(0x1261902c)));
  /* 125f85f6 push ecx */
  push32((uint32_t)(ECX));
  /* 125f85f7 call 0x125f88b0 */
  push32(0x125f85fcu); f_125f88b0();
  /* 125f85fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f85ff push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8601 mov edx, dword ptr [0x1261902c] */
  EDX = (r32((uint32_t)(0x1261902c)));
  /* 125f8607 push edx */
  push32((uint32_t)(EDX));
  /* 125f8608 call 0x125edb00 */
  push32(0x125f860du); f_125edb00();
  /* 125f860d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8610 mov dword ptr [0x1261902c], 0 */
  w32((uint32_t)(0x1261902c), (0x0u));
  /* 125f861a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125f861c:;
  /* 125f861c mov esp, ebp */
  ESP = (EBP);
  /* 125f861e pop ebp */
  EBP = (pop32());
  /* 125f861f ret  */
  ESPCHK(0x125f84f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018620 @ 0x125f8620 (525 bytes, 200 insns) */
void f_125f8620(void) {
  FTRACE(0x125f8620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f8620 push ebp */
  push32((uint32_t)(EBP));
  /* 125f8621 mov ebp, esp */
  EBP = (ESP);
  /* 125f8623 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f8626 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125f862d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f862f mov ax, word ptr [0x1261904c] */
  AX = (r16((uint32_t)(0x1261904c)));
  /* 125f8635 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f8638 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f863c jne 0x125f8646 */
  if (!C.zf) goto L_125f8646;
  /* 125f863e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f8641 jmp 0x125f8829 */
  goto L_125f8829;
L_125f8646:;
  /* 125f8646 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8649 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f864c push ecx */
  push32((uint32_t)(ECX));
  /* 125f864d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 125f864f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f8652 push edx */
  push32((uint32_t)(EDX));
  /* 125f8653 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f8655 call 0x125fb230 */
  push32(0x125f865au); f_125fb230();
  /* 125f865a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f865d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f8660 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f8662 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f8665 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8668 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f866b push edx */
  push32((uint32_t)(EDX));
  /* 125f866c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 125f866e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f8671 push eax */
  push32((uint32_t)(EAX));
  /* 125f8672 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f8674 call 0x125fb230 */
  push32(0x125f8679u); f_125fb230();
  /* 125f8679 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f867c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f867f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f8681 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f8684 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8687 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f868a push edx */
  push32((uint32_t)(EDX));
  /* 125f868b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 125f868d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f8690 push eax */
  push32((uint32_t)(EAX));
  /* 125f8691 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f8693 call 0x125fb230 */
  push32(0x125f8698u); f_125fb230();
  /* 125f8698 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f869b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f869e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f86a0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f86a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f86a6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f86a9 push edx */
  push32((uint32_t)(EDX));
  /* 125f86aa push 0x17 */
  push32((uint32_t)(0x17u));
  /* 125f86ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f86af push eax */
  push32((uint32_t)(EAX));
  /* 125f86b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f86b2 call 0x125fb230 */
  push32(0x125f86b7u); f_125fb230();
  /* 125f86b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f86ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f86bd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f86bf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f86c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f86c5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f86c8 push edx */
  push32((uint32_t)(EDX));
  /* 125f86c9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 125f86cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f86ce push eax */
  push32((uint32_t)(EAX));
  /* 125f86cf push 1 */
  push32((uint32_t)(0x1u));
  /* 125f86d1 call 0x125fb230 */
  push32(0x125f86d6u); f_125fb230();
  /* 125f86d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f86d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f86dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f86de mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f86e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f86e4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 125f86e7 push eax */
  push32((uint32_t)(EAX));
  /* 125f86e8 call 0x125f8830 */
  push32(0x125f86edu); f_125f8830();
  /* 125f86ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f86f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f86f3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f86f6 push ecx */
  push32((uint32_t)(ECX));
  /* 125f86f7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 125f86f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f86fc push edx */
  push32((uint32_t)(EDX));
  /* 125f86fd push 1 */
  push32((uint32_t)(0x1u));
  /* 125f86ff call 0x125fb230 */
  push32(0x125f8704u); f_125fb230();
  /* 125f8704 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8707 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f870a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f870c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f870f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8712 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8715 push edx */
  push32((uint32_t)(EDX));
  /* 125f8716 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 125f8718 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f871b push eax */
  push32((uint32_t)(EAX));
  /* 125f871c push 1 */
  push32((uint32_t)(0x1u));
  /* 125f871e call 0x125fb230 */
  push32(0x125f8723u); f_125fb230();
  /* 125f8723 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8726 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f8729 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f872b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f872e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8731 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8734 push edx */
  push32((uint32_t)(EDX));
  /* 125f8735 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 125f8737 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f873a push eax */
  push32((uint32_t)(EAX));
  /* 125f873b push 0 */
  push32((uint32_t)(0x0u));
  /* 125f873d call 0x125fb230 */
  push32(0x125f8742u); f_125fb230();
  /* 125f8742 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8745 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f8748 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f874a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f874d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8750 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8753 push edx */
  push32((uint32_t)(EDX));
  /* 125f8754 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125f8756 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f8759 push eax */
  push32((uint32_t)(EAX));
  /* 125f875a push 0 */
  push32((uint32_t)(0x0u));
  /* 125f875c call 0x125fb230 */
  push32(0x125f8761u); f_125fb230();
  /* 125f8761 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8764 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f8767 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f8769 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f876c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f876f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8772 push edx */
  push32((uint32_t)(EDX));
  /* 125f8773 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 125f8775 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f8778 push eax */
  push32((uint32_t)(EAX));
  /* 125f8779 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f877b call 0x125fb230 */
  push32(0x125f8780u); f_125fb230();
  /* 125f8780 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8783 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f8786 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f8788 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f878b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f878e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8791 push edx */
  push32((uint32_t)(EDX));
  /* 125f8792 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 125f8794 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f8797 push eax */
  push32((uint32_t)(EAX));
  /* 125f8798 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f879a call 0x125fb230 */
  push32(0x125f879fu); f_125fb230();
  /* 125f879f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f87a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f87a5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f87a7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f87aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f87ad add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f87b0 push edx */
  push32((uint32_t)(EDX));
  /* 125f87b1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 125f87b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f87b6 push eax */
  push32((uint32_t)(EAX));
  /* 125f87b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f87b9 call 0x125fb230 */
  push32(0x125f87beu); f_125fb230();
  /* 125f87be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f87c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f87c4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f87c6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f87c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f87cc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f87cf push edx */
  push32((uint32_t)(EDX));
  /* 125f87d0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 125f87d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f87d5 push eax */
  push32((uint32_t)(EAX));
  /* 125f87d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f87d8 call 0x125fb230 */
  push32(0x125f87ddu); f_125fb230();
  /* 125f87dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f87e0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f87e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f87e5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f87e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f87eb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f87ee push edx */
  push32((uint32_t)(EDX));
  /* 125f87ef push 0x52 */
  push32((uint32_t)(0x52u));
  /* 125f87f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f87f4 push eax */
  push32((uint32_t)(EAX));
  /* 125f87f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f87f7 call 0x125fb230 */
  push32(0x125f87fcu); f_125fb230();
  /* 125f87fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f87ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f8802 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f8804 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f8807 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f880a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f880d push edx */
  push32((uint32_t)(EDX));
  /* 125f880e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 125f8810 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f8813 push eax */
  push32((uint32_t)(EAX));
  /* 125f8814 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f8816 call 0x125fb230 */
  push32(0x125f881bu); f_125fb230();
  /* 125f881b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f881e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f8821 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125f8823 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f8826 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_125f8829:;
  /* 125f8829 mov esp, ebp */
  ESP = (EBP);
  /* 125f882b pop ebp */
  EBP = (pop32());
  /* 125f882c ret  */
  ESPCHK(0x125f8620u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x125f8830 (125 bytes, 49 insns) */
void f_125f8830(void) {
  FTRACE(0x125f8830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f8830 push ebp */
  push32((uint32_t)(EBP));
  /* 125f8831 mov ebp, esp */
  EBP = (ESP);
  /* 125f8833 push ecx */
  push32((uint32_t)(ECX));
L_125f8834:;
  /* 125f8834 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8837 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125f883a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f883c je 0x125f88a9 */
  if (C.zf) goto L_125f88a9;
  /* 125f883e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8841 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125f8844 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8847 jl 0x125f886d */
  if ((C.sf!=C.of)) goto L_125f886d;
  /* 125f8849 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f884c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125f884f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8852 jg 0x125f886d */
  if ((!C.zf&&C.sf==C.of)) goto L_125f886d;
  /* 125f8854 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8857 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125f885a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f885d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8860 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 125f8862 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8865 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8868 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125f886b jmp 0x125f88a7 */
  goto L_125f88a7;
L_125f886d:;
  /* 125f886d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8870 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125f8873 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8876 jne 0x125f889e */
  if (!C.zf) goto L_125f889e;
  /* 125f8878 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f887b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125f887e:;
  /* 125f887e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f8881 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f8884 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 125f8887 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 125f8889 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f888c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f888f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125f8892 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f8895 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125f8898 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f889a jne 0x125f887e */
  if (!C.zf) goto L_125f887e;
  /* 125f889c jmp 0x125f88a7 */
  goto L_125f88a7;
L_125f889e:;
  /* 125f889e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f88a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f88a4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_125f88a7:;
  /* 125f88a7 jmp 0x125f8834 */
  goto L_125f8834;
L_125f88a9:;
  /* 125f88a9 mov esp, ebp */
  ESP = (EBP);
  /* 125f88ab pop ebp */
  EBP = (pop32());
  /* 125f88ac ret  */
  ESPCHK(0x125f8830u, _esp0);
  ESP += 4; return;
}

/* FUN_100188b0 @ 0x125f88b0 (147 bytes, 52 insns) */
void f_125f88b0(void) {
  FTRACE(0x125f88b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f88b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f88b1 mov ebp, esp */
  EBP = (ESP);
  /* 125f88b3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f88b7 jne 0x125f88be */
  if (!C.zf) goto L_125f88be;
  /* 125f88b9 jmp 0x125f8941 */
  goto L_125f8941;
L_125f88be:;
  /* 125f88be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f88c1 cmp dword ptr [eax + 0xc], 0x12619088 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12619088u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f88c8 je 0x125f8941 */
  if (C.zf) goto L_125f8941;
  /* 125f88ca push 2 */
  push32((uint32_t)(0x2u));
  /* 125f88cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f88cf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125f88d2 push edx */
  push32((uint32_t)(EDX));
  /* 125f88d3 call 0x125edb00 */
  push32(0x125f88d8u); f_125edb00();
  /* 125f88d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f88db push 2 */
  push32((uint32_t)(0x2u));
  /* 125f88dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f88e0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125f88e3 push ecx */
  push32((uint32_t)(ECX));
  /* 125f88e4 call 0x125edb00 */
  push32(0x125f88e9u); f_125edb00();
  /* 125f88e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f88ec push 2 */
  push32((uint32_t)(0x2u));
  /* 125f88ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f88f1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125f88f4 push eax */
  push32((uint32_t)(EAX));
  /* 125f88f5 call 0x125edb00 */
  push32(0x125f88fau); f_125edb00();
  /* 125f88fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f88fd push 2 */
  push32((uint32_t)(0x2u));
  /* 125f88ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8902 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 125f8905 push edx */
  push32((uint32_t)(EDX));
  /* 125f8906 call 0x125edb00 */
  push32(0x125f890bu); f_125edb00();
  /* 125f890b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f890e push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8910 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8913 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 125f8916 push ecx */
  push32((uint32_t)(ECX));
  /* 125f8917 call 0x125edb00 */
  push32(0x125f891cu); f_125edb00();
  /* 125f891c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f891f push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8921 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8924 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 125f8927 push eax */
  push32((uint32_t)(EAX));
  /* 125f8928 call 0x125edb00 */
  push32(0x125f892du); f_125edb00();
  /* 125f892d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8930 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8932 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8935 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 125f8938 push edx */
  push32((uint32_t)(EDX));
  /* 125f8939 call 0x125edb00 */
  push32(0x125f893eu); f_125edb00();
  /* 125f893e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f8941:;
  /* 125f8941 pop ebp */
  EBP = (pop32());
  /* 125f8942 ret  */
  ESPCHK(0x125f88b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018950 @ 0x125f8950 (928 bytes, 284 insns) */
void f_125f8950(void) {
  FTRACE(0x125f8950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f8950 push ebp */
  push32((uint32_t)(EBP));
  /* 125f8951 mov ebp, esp */
  EBP = (ESP);
  /* 125f8953 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f8956 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 125f895d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 125f8964 cmp dword ptr [0x12618ff0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12618ff0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f896b je 0x125f8ca1 */
  if (C.zf) goto L_125f8ca1;
  /* 125f8971 cmp dword ptr [0x12619000], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8978 jne 0x125f89a0 */
  if (!C.zf) goto L_125f89a0;
  /* 125f897a push 0x12619000 */
  push32((uint32_t)(0x12619000u));
  /* 125f897f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 125f8984 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f8986 mov ax, word ptr [0x12619044] */
  AX = (r16((uint32_t)(0x12619044)));
  /* 125f898c push eax */
  push32((uint32_t)(EAX));
  /* 125f898d push 0 */
  push32((uint32_t)(0x0u));
  /* 125f898f call 0x125fb230 */
  push32(0x125f8994u); f_125fb230();
  /* 125f8994 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8997 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f8999 je 0x125f89a0 */
  if (C.zf) goto L_125f89a0;
  /* 125f899b jmp 0x125f8c62 */
  goto L_125f8c62;
L_125f89a0:;
  /* 125f89a0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 125f89a2 push 0x12614b74 */
  push32((uint32_t)(0x12614b74u));
  /* 125f89a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f89a9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 125f89ae call 0x125ed070 */
  push32(0x125f89b3u); f_125ed070();
  /* 125f89b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f89b6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 125f89b9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 125f89bb push 0x12614b74 */
  push32((uint32_t)(0x12614b74u));
  /* 125f89c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f89c2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 125f89c7 call 0x125ed070 */
  push32(0x125f89ccu); f_125ed070();
  /* 125f89cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f89cf mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 125f89d2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 125f89d4 push 0x12614b74 */
  push32((uint32_t)(0x12614b74u));
  /* 125f89d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f89db push 0x101 */
  push32((uint32_t)(0x101u));
  /* 125f89e0 call 0x125ed070 */
  push32(0x125f89e5u); f_125ed070();
  /* 125f89e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f89e8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 125f89eb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 125f89ed push 0x12614b74 */
  push32((uint32_t)(0x12614b74u));
  /* 125f89f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f89f4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 125f89f9 call 0x125ed070 */
  push32(0x125f89feu); f_125ed070();
  /* 125f89fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8a01 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 125f8a04 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8a08 je 0x125f8a1c */
  if (C.zf) goto L_125f8a1c;
  /* 125f8a0a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8a0e je 0x125f8a1c */
  if (C.zf) goto L_125f8a1c;
  /* 125f8a10 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8a14 je 0x125f8a1c */
  if (C.zf) goto L_125f8a1c;
  /* 125f8a16 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8a1a jne 0x125f8a21 */
  if (!C.zf) goto L_125f8a21;
L_125f8a1c:;
  /* 125f8a1c jmp 0x125f8c62 */
  goto L_125f8c62;
L_125f8a21:;
  /* 125f8a21 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f8a24 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 125f8a27 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 125f8a2e jmp 0x125f8a39 */
  goto L_125f8a39;
L_125f8a30:;
  /* 125f8a30 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f8a33 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8a36 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_125f8a39:;
  /* 125f8a39 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8a40 jge 0x125f8a55 */
  if ((C.sf==C.of)) goto L_125f8a55;
  /* 125f8a42 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f8a45 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 125f8a48 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 125f8a4a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f8a4d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8a50 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 125f8a53 jmp 0x125f8a30 */
  goto L_125f8a30;
L_125f8a55:;
  /* 125f8a55 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 125f8a58 push eax */
  push32((uint32_t)(EAX));
  /* 125f8a59 mov ecx, dword ptr [0x12619000] */
  ECX = (r32((uint32_t)(0x12619000)));
  /* 125f8a5f push ecx */
  push32((uint32_t)(ECX));
  /* 125f8a60 call dword ptr [0x1261b34c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b34c))), 0x125f8a66u);
  /* 125f8a66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f8a68 jne 0x125f8a6f */
  if (!C.zf) goto L_125f8a6f;
  /* 125f8a6a jmp 0x125f8c62 */
  goto L_125f8c62;
L_125f8a6f:;
  /* 125f8a6f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8a73 jbe 0x125f8a7a */
  if ((C.cf||C.zf)) goto L_125f8a7a;
  /* 125f8a75 jmp 0x125f8c62 */
  goto L_125f8c62;
L_125f8a7a:;
  /* 125f8a7a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125f8a7d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125f8a83 mov dword ptr [0x12616ea4], edx */
  w32((uint32_t)(0x12616ea4), (EDX));
  /* 125f8a89 cmp dword ptr [0x12616ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12616ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8a90 jle 0x125f8ae9 */
  if ((C.zf||C.sf!=C.of)) goto L_125f8ae9;
  /* 125f8a92 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 125f8a95 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125f8a98 jmp 0x125f8aa3 */
  goto L_125f8aa3;
L_125f8a9a:;
  /* 125f8a9a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f8a9d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8aa0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_125f8aa3:;
  /* 125f8aa3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f8aa6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f8aa8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125f8aaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f8aac je 0x125f8ae9 */
  if (C.zf) goto L_125f8ae9;
  /* 125f8aae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f8ab1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125f8ab3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 125f8ab6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f8ab8 je 0x125f8ae9 */
  if (C.zf) goto L_125f8ae9;
  /* 125f8aba mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f8abd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125f8abf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125f8ac1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 125f8ac4 jmp 0x125f8acf */
  goto L_125f8acf;
L_125f8ac6:;
  /* 125f8ac6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f8ac9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8acc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_125f8acf:;
  /* 125f8acf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f8ad2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125f8ad4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 125f8ad7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8ada jg 0x125f8ae7 */
  if ((!C.zf&&C.sf==C.of)) goto L_125f8ae7;
  /* 125f8adc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f8adf add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8ae2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 125f8ae5 jmp 0x125f8ac6 */
  goto L_125f8ac6;
L_125f8ae7:;
  /* 125f8ae7 jmp 0x125f8a9a */
  goto L_125f8a9a;
L_125f8ae9:;
  /* 125f8ae9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f8aeb push 0 */
  push32((uint32_t)(0x0u));
  /* 125f8aed push 0 */
  push32((uint32_t)(0x0u));
  /* 125f8aef mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f8af2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8af5 push eax */
  push32((uint32_t)(EAX));
  /* 125f8af6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 125f8afb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f8afe push ecx */
  push32((uint32_t)(ECX));
  /* 125f8aff push 1 */
  push32((uint32_t)(0x1u));
  /* 125f8b01 call 0x125f52a0 */
  push32(0x125f8b06u); f_125f52a0();
  /* 125f8b06 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8b09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f8b0b jne 0x125f8b12 */
  if (!C.zf) goto L_125f8b12;
  /* 125f8b0d jmp 0x125f8c62 */
  goto L_125f8c62;
L_125f8b12:;
  /* 125f8b12 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f8b15 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 125f8b1a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f8b1d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 125f8b20 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 125f8b27 jmp 0x125f8b32 */
  goto L_125f8b32;
L_125f8b29:;
  /* 125f8b29 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f8b2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8b2f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_125f8b32:;
  /* 125f8b32 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8b39 jge 0x125f8b50 */
  if ((C.sf==C.of)) goto L_125f8b50;
  /* 125f8b3b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f8b3e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 125f8b42 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 125f8b45 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125f8b48 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8b4b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 125f8b4e jmp 0x125f8b29 */
  goto L_125f8b29;
L_125f8b50:;
  /* 125f8b50 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f8b52 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f8b54 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f8b57 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8b5a push edx */
  push32((uint32_t)(EDX));
  /* 125f8b5b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 125f8b60 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f8b63 push eax */
  push32((uint32_t)(EAX));
  /* 125f8b64 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f8b66 call 0x125fb4d0 */
  push32(0x125f8b6bu); f_125fb4d0();
  /* 125f8b6b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8b6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f8b70 jne 0x125f8b77 */
  if (!C.zf) goto L_125f8b77;
  /* 125f8b72 jmp 0x125f8c62 */
  goto L_125f8c62;
L_125f8b77:;
  /* 125f8b77 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f8b7a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 125f8b7f cmp dword ptr [0x12616ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12616ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8b86 jle 0x125f8be3 */
  if ((C.zf||C.sf!=C.of)) goto L_125f8be3;
  /* 125f8b88 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 125f8b8b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 125f8b8e jmp 0x125f8b99 */
  goto L_125f8b99;
L_125f8b90:;
  /* 125f8b90 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f8b93 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8b96 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_125f8b99:;
  /* 125f8b99 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f8b9c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125f8b9e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125f8ba0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f8ba2 je 0x125f8be3 */
  if (C.zf) goto L_125f8be3;
  /* 125f8ba4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f8ba7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125f8ba9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 125f8bac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f8bae je 0x125f8be3 */
  if (C.zf) goto L_125f8be3;
  /* 125f8bb0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f8bb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f8bb5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125f8bb7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125f8bba jmp 0x125f8bc5 */
  goto L_125f8bc5;
L_125f8bbc:;
  /* 125f8bbc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f8bbf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8bc2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_125f8bc5:;
  /* 125f8bc5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125f8bc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f8bca mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 125f8bcd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8bd0 jg 0x125f8be1 */
  if ((!C.zf&&C.sf==C.of)) goto L_125f8be1;
  /* 125f8bd2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125f8bd5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f8bd8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 125f8bdf jmp 0x125f8bbc */
  goto L_125f8bbc;
L_125f8be1:;
  /* 125f8be1 jmp 0x125f8b90 */
  goto L_125f8b90;
L_125f8be3:;
  /* 125f8be3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f8be6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8be9 mov dword ptr [0x12616c98], eax */
  w32((uint32_t)(0x12616c98), (EAX));
  /* 125f8bee mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f8bf1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8bf4 mov dword ptr [0x12616c9c], ecx */
  w32((uint32_t)(0x12616c9c), (ECX));
  /* 125f8bfa cmp dword ptr [0x12619030], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619030))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8c01 je 0x125f8c14 */
  if (C.zf) goto L_125f8c14;
  /* 125f8c03 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8c05 mov edx, dword ptr [0x12619030] */
  EDX = (r32((uint32_t)(0x12619030)));
  /* 125f8c0b push edx */
  push32((uint32_t)(EDX));
  /* 125f8c0c call 0x125edb00 */
  push32(0x125f8c11u); f_125edb00();
  /* 125f8c11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f8c14:;
  /* 125f8c14 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f8c17 mov dword ptr [0x12619030], eax */
  w32((uint32_t)(0x12619030), (EAX));
  /* 125f8c1c cmp dword ptr [0x12619034], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619034))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8c23 je 0x125f8c36 */
  if (C.zf) goto L_125f8c36;
  /* 125f8c25 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8c27 mov ecx, dword ptr [0x12619034] */
  ECX = (r32((uint32_t)(0x12619034)));
  /* 125f8c2d push ecx */
  push32((uint32_t)(ECX));
  /* 125f8c2e call 0x125edb00 */
  push32(0x125f8c33u); f_125edb00();
  /* 125f8c33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f8c36:;
  /* 125f8c36 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f8c39 mov dword ptr [0x12619034], edx */
  w32((uint32_t)(0x12619034), (EDX));
  /* 125f8c3f push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8c41 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f8c44 push eax */
  push32((uint32_t)(EAX));
  /* 125f8c45 call 0x125edb00 */
  push32(0x125f8c4au); f_125edb00();
  /* 125f8c4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8c4d push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8c4f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f8c52 push ecx */
  push32((uint32_t)(ECX));
  /* 125f8c53 call 0x125edb00 */
  push32(0x125f8c58u); f_125edb00();
  /* 125f8c58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8c5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f8c5d jmp 0x125f8cec */
  goto L_125f8cec;
L_125f8c62:;
  /* 125f8c62 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8c64 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 125f8c67 push edx */
  push32((uint32_t)(EDX));
  /* 125f8c68 call 0x125edb00 */
  push32(0x125f8c6du); f_125edb00();
  /* 125f8c6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8c70 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8c72 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125f8c75 push eax */
  push32((uint32_t)(EAX));
  /* 125f8c76 call 0x125edb00 */
  push32(0x125f8c7bu); f_125edb00();
  /* 125f8c7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8c7e push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8c80 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125f8c83 push ecx */
  push32((uint32_t)(ECX));
  /* 125f8c84 call 0x125edb00 */
  push32(0x125f8c89u); f_125edb00();
  /* 125f8c89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8c8c push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8c8e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125f8c91 push edx */
  push32((uint32_t)(EDX));
  /* 125f8c92 call 0x125edb00 */
  push32(0x125f8c97u); f_125edb00();
  /* 125f8c97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8c9a mov eax, 1 */
  EAX = (0x1u);
  /* 125f8c9f jmp 0x125f8cec */
  goto L_125f8cec;
L_125f8ca1:;
  /* 125f8ca1 mov dword ptr [0x12616c98], 0x12616ca2 */
  w32((uint32_t)(0x12616c98), (0x12616ca2u));
  /* 125f8cab mov dword ptr [0x12616c9c], 0x12616ca2 */
  w32((uint32_t)(0x12616c9c), (0x12616ca2u));
  /* 125f8cb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8cb7 mov eax, dword ptr [0x12619030] */
  EAX = (r32((uint32_t)(0x12619030)));
  /* 125f8cbc push eax */
  push32((uint32_t)(EAX));
  /* 125f8cbd call 0x125edb00 */
  push32(0x125f8cc2u); f_125edb00();
  /* 125f8cc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8cc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 125f8cc7 mov ecx, dword ptr [0x12619034] */
  ECX = (r32((uint32_t)(0x12619034)));
  /* 125f8ccd push ecx */
  push32((uint32_t)(ECX));
  /* 125f8cce call 0x125edb00 */
  push32(0x125f8cd3u); f_125edb00();
  /* 125f8cd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8cd6 mov dword ptr [0x12619030], 0 */
  w32((uint32_t)(0x12619030), (0x0u));
  /* 125f8ce0 mov dword ptr [0x12619034], 0 */
  w32((uint32_t)(0x12619034), (0x0u));
  /* 125f8cea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125f8cec:;
  /* 125f8cec mov esp, ebp */
  ESP = (EBP);
  /* 125f8cee pop ebp */
  EBP = (pop32());
  /* 125f8cef ret  */
  ESPCHK(0x125f8950u, _esp0);
  ESP += 4; return;
}

/* FUN_10018cf0 @ 0x125f8cf0 (7 bytes, 5 insns) */
void f_125f8cf0(void) {
  FTRACE(0x125f8cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f8cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f8cf1 mov ebp, esp */
  EBP = (ESP);
  /* 125f8cf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f8cf5 pop ebp */
  EBP = (pop32());
  /* 125f8cf6 ret  */
  ESPCHK(0x125f8cf0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x125f8d00 (129 bytes, 56 insns) */
void f_125f8d00(void) {
  FTRACE(0x125f8d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f8d00 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 125f8d04 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 125f8d08 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 125f8d0e jne 0x125f8d4c */
  if (!C.zf) goto L_125f8d4c;
L_125f8d10:;
  /* 125f8d10 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125f8d12 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125f8d14 jne 0x125f8d44 */
  if (!C.zf) goto L_125f8d44;
  /* 125f8d16 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125f8d18 je 0x125f8d40 */
  if (C.zf) goto L_125f8d40;
  /* 125f8d1a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125f8d1d jne 0x125f8d44 */
  if (!C.zf) goto L_125f8d44;
  /* 125f8d1f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 125f8d21 je 0x125f8d40 */
  if (C.zf) goto L_125f8d40;
  /* 125f8d23 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 125f8d26 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125f8d29 jne 0x125f8d44 */
  if (!C.zf) goto L_125f8d44;
  /* 125f8d2b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125f8d2d je 0x125f8d40 */
  if (C.zf) goto L_125f8d40;
  /* 125f8d2f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125f8d32 jne 0x125f8d44 */
  if (!C.zf) goto L_125f8d44;
  /* 125f8d34 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8d37 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8d3a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 125f8d3c jne 0x125f8d10 */
  if (!C.zf) goto L_125f8d10;
  /* 125f8d3e mov edi, edi */
  EDI = (EDI);
L_125f8d40:;
  /* 125f8d40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f8d42 ret  */
  ESPCHK(0x125f8d00u, _esp0);
  ESP += 4; return;
  /* 125f8d43 nop  */
  /* nop */
L_125f8d44:;
  /* 125f8d44 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f8d46 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125f8d48 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 125f8d49 ret  */
  ESPCHK(0x125f8d00u, _esp0);
  ESP += 4; return;
  /* 125f8d4a mov edi, edi */
  EDI = (EDI);
L_125f8d4c:;
  /* 125f8d4c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 125f8d52 je 0x125f8d68 */
  if (C.zf) goto L_125f8d68;
  /* 125f8d54 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125f8d56 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 125f8d57 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125f8d59 jne 0x125f8d44 */
  if (!C.zf) goto L_125f8d44;
  /* 125f8d5b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 125f8d5c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125f8d5e je 0x125f8d40 */
  if (C.zf) goto L_125f8d40;
  /* 125f8d60 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 125f8d66 je 0x125f8d10 */
  if (C.zf) goto L_125f8d10;
L_125f8d68:;
  /* 125f8d68 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 125f8d6b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8d6e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125f8d70 jne 0x125f8d44 */
  if (!C.zf) goto L_125f8d44;
  /* 125f8d72 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125f8d74 je 0x125f8d40 */
  if (C.zf) goto L_125f8d40;
  /* 125f8d76 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125f8d79 jne 0x125f8d44 */
  if (!C.zf) goto L_125f8d44;
  /* 125f8d7b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 125f8d7d je 0x125f8d40 */
  if (C.zf) goto L_125f8d40;
  /* 125f8d7f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8d82 jmp 0x125f8d10 */
  goto L_125f8d10;
}

/* FUN_10018d90 @ 0x125f8d90 (62 bytes, 35 insns) */
void f_125f8d90(void) {
  FTRACE(0x125f8d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f8d90 push ebp */
  push32((uint32_t)(EBP));
  /* 125f8d91 mov ebp, esp */
  EBP = (ESP);
  /* 125f8d93 push esi */
  push32((uint32_t)(ESI));
  /* 125f8d94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f8d96 push eax */
  push32((uint32_t)(EAX));
  /* 125f8d97 push eax */
  push32((uint32_t)(EAX));
  /* 125f8d98 push eax */
  push32((uint32_t)(EAX));
  /* 125f8d99 push eax */
  push32((uint32_t)(EAX));
  /* 125f8d9a push eax */
  push32((uint32_t)(EAX));
  /* 125f8d9b push eax */
  push32((uint32_t)(EAX));
  /* 125f8d9c push eax */
  push32((uint32_t)(EAX));
  /* 125f8d9d push eax */
  push32((uint32_t)(EAX));
  /* 125f8d9e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f8da1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125f8da4:;
  /* 125f8da4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125f8da6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125f8da8 je 0x125f8db1 */
  if (C.zf) goto L_125f8db1;
  /* 125f8daa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 125f8dab bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x125f8dab");
  /* 125f8daf jmp 0x125f8da4 */
  goto L_125f8da4;
L_125f8db1:;
  /* 125f8db1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8db4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 125f8db7 nop  */
  /* nop */
L_125f8db8:;
  /* 125f8db8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 125f8db9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125f8dbb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125f8dbd je 0x125f8dc6 */
  if (C.zf) goto L_125f8dc6;
  /* 125f8dbf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 125f8dc0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x125f8dc0");
  /* 125f8dc4 jae 0x125f8db8 */
  if (!C.cf) goto L_125f8db8;
L_125f8dc6:;
  /* 125f8dc6 mov eax, ecx */
  EAX = (ECX);
  /* 125f8dc8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8dcb pop esi */
  ESI = (pop32());
  /* 125f8dcc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125f8dcd ret  */
  ESPCHK(0x125f8d90u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x125f8dd0 (56 bytes, 31 insns) */
void f_125f8dd0(void) {
  FTRACE(0x125f8dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f8dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f8dd1 mov ebp, esp */
  EBP = (ESP);
  /* 125f8dd3 push edi */
  push32((uint32_t)(EDI));
  /* 125f8dd4 push esi */
  push32((uint32_t)(ESI));
  /* 125f8dd5 push ebx */
  push32((uint32_t)(EBX));
  /* 125f8dd6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f8dd9 jecxz 0x125f8e01 */
  x86_unimpl("jecxz @ 0x125f8dd9");
  /* 125f8ddb mov ebx, ecx */
  EBX = (ECX);
  /* 125f8ddd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8de0 mov esi, edi */
  ESI = (EDI);
  /* 125f8de2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f8de4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 125f8de6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 125f8de8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8dea mov edi, esi */
  EDI = (ESI);
  /* 125f8dec mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 125f8def repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 125f8df1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 125f8df4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125f8df6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125f8df9 ja 0x125f8dff */
  if ((!C.cf&&!C.zf)) goto L_125f8dff;
  /* 125f8dfb je 0x125f8e01 */
  if (C.zf) goto L_125f8e01;
  /* 125f8dfd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 125f8dfe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_125f8dff:;
  /* 125f8dff not ecx */
  ECX = (~(ECX));
L_125f8e01:;
  /* 125f8e01 mov eax, ecx */
  EAX = (ECX);
  /* 125f8e03 pop ebx */
  EBX = (pop32());
  /* 125f8e04 pop esi */
  ESI = (pop32());
  /* 125f8e05 pop edi */
  EDI = (pop32());
  /* 125f8e06 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125f8e07 ret  */
  ESPCHK(0x125f8dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018e10 @ 0x125f8e10 (58 bytes, 32 insns) */
void f_125f8e10(void) {
  FTRACE(0x125f8e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f8e10 push ebp */
  push32((uint32_t)(EBP));
  /* 125f8e11 mov ebp, esp */
  EBP = (ESP);
  /* 125f8e13 push esi */
  push32((uint32_t)(ESI));
  /* 125f8e14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f8e16 push eax */
  push32((uint32_t)(EAX));
  /* 125f8e17 push eax */
  push32((uint32_t)(EAX));
  /* 125f8e18 push eax */
  push32((uint32_t)(EAX));
  /* 125f8e19 push eax */
  push32((uint32_t)(EAX));
  /* 125f8e1a push eax */
  push32((uint32_t)(EAX));
  /* 125f8e1b push eax */
  push32((uint32_t)(EAX));
  /* 125f8e1c push eax */
  push32((uint32_t)(EAX));
  /* 125f8e1d push eax */
  push32((uint32_t)(EAX));
  /* 125f8e1e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f8e21 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125f8e24:;
  /* 125f8e24 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125f8e26 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125f8e28 je 0x125f8e31 */
  if (C.zf) goto L_125f8e31;
  /* 125f8e2a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 125f8e2b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x125f8e2b");
  /* 125f8e2f jmp 0x125f8e24 */
  goto L_125f8e24;
L_125f8e31:;
  /* 125f8e31 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_125f8e34:;
  /* 125f8e34 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125f8e36 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125f8e38 je 0x125f8e44 */
  if (C.zf) goto L_125f8e44;
  /* 125f8e3a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 125f8e3b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x125f8e3b");
  /* 125f8e3f jae 0x125f8e34 */
  if (!C.cf) goto L_125f8e34;
  /* 125f8e41 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_125f8e44:;
  /* 125f8e44 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8e47 pop esi */
  ESI = (pop32());
  /* 125f8e48 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125f8e49 ret  */
  ESPCHK(0x125f8e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10018e50 @ 0x125f8e50 (512 bytes, 147 insns) */
void f_125f8e50(void) {
  FTRACE(0x125f8e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f8e50 push ebp */
  push32((uint32_t)(EBP));
  /* 125f8e51 mov ebp, esp */
  EBP = (ESP);
  /* 125f8e53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f8e56 cmp dword ptr [0x1261907c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1261907c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8e5d jne 0x125f8e82 */
  if (!C.zf) goto L_125f8e82;
  /* 125f8e5f call 0x125f9920 */
  push32(0x125f8e64u); f_125f9920();
  /* 125f8e64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f8e66 je 0x125f8e72 */
  if (C.zf) goto L_125f8e72;
  /* 125f8e68 mov eax, dword ptr [0x1261b310] */
  EAX = (r32((uint32_t)(0x1261b310)));
  /* 125f8e6d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125f8e70 jmp 0x125f8e79 */
  goto L_125f8e79;
L_125f8e72:;
  /* 125f8e72 mov dword ptr [ebp - 8], 0x125f9970 */
  w32((uint32_t)(EBP + -0x8), (0x125f9970u));
L_125f8e79:;
  /* 125f8e79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f8e7c mov dword ptr [0x1261907c], ecx */
  w32((uint32_t)(0x1261907c), (ECX));
L_125f8e82:;
  /* 125f8e82 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8e86 jne 0x125f8e92 */
  if (!C.zf) goto L_125f8e92;
  /* 125f8e88 call 0x125f9770 */
  push32(0x125f8e8du); f_125f9770();
  /* 125f8e8d jmp 0x125f8f5e */
  goto L_125f8f5e;
L_125f8e92:;
  /* 125f8e92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8e95 mov dword ptr [0x1261906c], edx */
  w32((uint32_t)(0x1261906c), (EDX));
  /* 125f8e9b cmp dword ptr [0x1261906c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1261906c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8ea2 je 0x125f8ec4 */
  if (C.zf) goto L_125f8ec4;
  /* 125f8ea4 mov eax, dword ptr [0x1261906c] */
  EAX = (r32((uint32_t)(0x1261906c)));
  /* 125f8ea9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125f8eac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f8eae je 0x125f8ec4 */
  if (C.zf) goto L_125f8ec4;
  /* 125f8eb0 push 0x1261906c */
  push32((uint32_t)(0x1261906cu));
  /* 125f8eb5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 125f8eb7 push 0x12617a90 */
  push32((uint32_t)(0x12617a90u));
  /* 125f8ebc call 0x125f9050 */
  push32(0x125f8ec1u); f_125f9050();
  /* 125f8ec1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f8ec4:;
  /* 125f8ec4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8ec7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8eca mov dword ptr [0x12619070], edx */
  w32((uint32_t)(0x12619070), (EDX));
  /* 125f8ed0 cmp dword ptr [0x12619070], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619070))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8ed7 je 0x125f8ef9 */
  if (C.zf) goto L_125f8ef9;
  /* 125f8ed9 mov eax, dword ptr [0x12619070] */
  EAX = (r32((uint32_t)(0x12619070)));
  /* 125f8ede movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125f8ee1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f8ee3 je 0x125f8ef9 */
  if (C.zf) goto L_125f8ef9;
  /* 125f8ee5 push 0x12619070 */
  push32((uint32_t)(0x12619070u));
  /* 125f8eea push 0x16 */
  push32((uint32_t)(0x16u));
  /* 125f8eec push 0x126179d8 */
  push32((uint32_t)(0x126179d8u));
  /* 125f8ef1 call 0x125f9050 */
  push32(0x125f8ef6u); f_125f9050();
  /* 125f8ef6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f8ef9:;
  /* 125f8ef9 mov dword ptr [0x12619074], 0 */
  w32((uint32_t)(0x12619074), (0x0u));
  /* 125f8f03 cmp dword ptr [0x1261906c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1261906c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8f0a je 0x125f8f3d */
  if (C.zf) goto L_125f8f3d;
  /* 125f8f0c mov edx, dword ptr [0x1261906c] */
  EDX = (r32((uint32_t)(0x1261906c)));
  /* 125f8f12 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125f8f15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f8f17 je 0x125f8f3d */
  if (C.zf) goto L_125f8f3d;
  /* 125f8f19 cmp dword ptr [0x12619070], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619070))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8f20 je 0x125f8f36 */
  if (C.zf) goto L_125f8f36;
  /* 125f8f22 mov ecx, dword ptr [0x12619070] */
  ECX = (r32((uint32_t)(0x12619070)));
  /* 125f8f28 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125f8f2b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f8f2d je 0x125f8f36 */
  if (C.zf) goto L_125f8f36;
  /* 125f8f2f call 0x125f90e0 */
  push32(0x125f8f34u); f_125f90e0();
  /* 125f8f34 jmp 0x125f8f3b */
  goto L_125f8f3b;
L_125f8f36:;
  /* 125f8f36 call 0x125f94d0 */
  push32(0x125f8f3bu); f_125f94d0();
L_125f8f3b:;
  /* 125f8f3b jmp 0x125f8f5e */
  goto L_125f8f5e;
L_125f8f3d:;
  /* 125f8f3d cmp dword ptr [0x12619070], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619070))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8f44 je 0x125f8f59 */
  if (C.zf) goto L_125f8f59;
  /* 125f8f46 mov eax, dword ptr [0x12619070] */
  EAX = (r32((uint32_t)(0x12619070)));
  /* 125f8f4b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125f8f4e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f8f50 je 0x125f8f59 */
  if (C.zf) goto L_125f8f59;
  /* 125f8f52 call 0x125f9670 */
  push32(0x125f8f57u); f_125f9670();
  /* 125f8f57 jmp 0x125f8f5e */
  goto L_125f8f5e;
L_125f8f59:;
  /* 125f8f59 call 0x125f9770 */
  push32(0x125f8f5eu); f_125f9770();
L_125f8f5e:;
  /* 125f8f5e cmp dword ptr [0x12619074], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619074))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8f65 jne 0x125f8f6e */
  if (!C.zf) goto L_125f8f6e;
  /* 125f8f67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f8f69 jmp 0x125f904c */
  goto L_125f904c;
L_125f8f6e:;
  /* 125f8f6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f8f71 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8f77 push edx */
  push32((uint32_t)(EDX));
  /* 125f8f78 call 0x125f97a0 */
  push32(0x125f8f7du); f_125f97a0();
  /* 125f8f7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f8f80 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f8f83 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8f87 je 0x125f8f9c */
  if (C.zf) goto L_125f8f9c;
  /* 125f8f89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f8f8c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f8f91 push eax */
  push32((uint32_t)(EAX));
  /* 125f8f92 call dword ptr [0x1261b314] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b314))), 0x125f8f98u);
  /* 125f8f98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f8f9a jne 0x125f8fa3 */
  if (!C.zf) goto L_125f8fa3;
L_125f8f9c:;
  /* 125f8f9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f8f9e jmp 0x125f904c */
  goto L_125f904c;
L_125f8fa3:;
  /* 125f8fa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f8fa5 mov ecx, dword ptr [0x1261905c] */
  ECX = (r32((uint32_t)(0x1261905c)));
  /* 125f8fab push ecx */
  push32((uint32_t)(ECX));
  /* 125f8fac call dword ptr [0x1261b318] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b318))), 0x125f8fb2u);
  /* 125f8fb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f8fb4 jne 0x125f8fbd */
  if (!C.zf) goto L_125f8fbd;
  /* 125f8fb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f8fb8 jmp 0x125f904c */
  goto L_125f904c;
L_125f8fbd:;
  /* 125f8fbd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8fc1 je 0x125f8fe8 */
  if (C.zf) goto L_125f8fe8;
  /* 125f8fc3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f8fc6 mov ax, word ptr [0x1261905c] */
  AX = (r16((uint32_t)(0x1261905c)));
  /* 125f8fcc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 125f8fcf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f8fd2 mov dx, word ptr [0x12619078] */
  DX = (r16((uint32_t)(0x12619078)));
  /* 125f8fd9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 125f8fdd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f8fe0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 125f8fe4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_125f8fe8:;
  /* 125f8fe8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f8fec je 0x125f9047 */
  if (C.zf) goto L_125f9047;
  /* 125f8fee push 0x40 */
  push32((uint32_t)(0x40u));
  /* 125f8ff0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f8ff3 push edx */
  push32((uint32_t)(EDX));
  /* 125f8ff4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 125f8ff9 mov eax, dword ptr [0x1261905c] */
  EAX = (r32((uint32_t)(0x1261905c)));
  /* 125f8ffe push eax */
  push32((uint32_t)(EAX));
  /* 125f8fff call dword ptr [0x1261907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261907c))), 0x125f9005u);
  /* 125f9005 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f9007 jne 0x125f900d */
  if (!C.zf) goto L_125f900d;
  /* 125f9009 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f900b jmp 0x125f904c */
  goto L_125f904c;
L_125f900d:;
  /* 125f900d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 125f900f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f9012 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9015 push ecx */
  push32((uint32_t)(ECX));
  /* 125f9016 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 125f901b mov edx, dword ptr [0x12619078] */
  EDX = (r32((uint32_t)(0x12619078)));
  /* 125f9021 push edx */
  push32((uint32_t)(EDX));
  /* 125f9022 call dword ptr [0x1261907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261907c))), 0x125f9028u);
  /* 125f9028 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f902a jne 0x125f9030 */
  if (!C.zf) goto L_125f9030;
  /* 125f902c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f902e jmp 0x125f904c */
  goto L_125f904c;
L_125f9030:;
  /* 125f9030 push 0xa */
  push32((uint32_t)(0xau));
  /* 125f9032 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f9035 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f903a push eax */
  push32((uint32_t)(EAX));
  /* 125f903b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f903e push ecx */
  push32((uint32_t)(ECX));
  /* 125f903f call 0x125efbb0 */
  push32(0x125f9044u); f_125efbb0();
  /* 125f9044 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f9047:;
  /* 125f9047 mov eax, 1 */
  EAX = (0x1u);
L_125f904c:;
  /* 125f904c mov esp, ebp */
  ESP = (EBP);
  /* 125f904e pop ebp */
  EBP = (pop32());
  /* 125f904f ret  */
  ESPCHK(0x125f8e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10019050 @ 0x125f9050 (130 bytes, 47 insns) */
void f_125f9050(void) {
  FTRACE(0x125f9050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f9050 push ebp */
  push32((uint32_t)(EBP));
  /* 125f9051 mov ebp, esp */
  EBP = (ESP);
  /* 125f9053 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f9056 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 125f905d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_125f9064:;
  /* 125f9064 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f9067 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f906a jg 0x125f90ce */
  if ((!C.zf&&C.sf==C.of)) goto L_125f90ce;
  /* 125f906c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9070 je 0x125f90ce */
  if (C.zf) goto L_125f90ce;
  /* 125f9072 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f9075 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9078 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125f9079 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f907b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125f907d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f9080 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f9083 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9086 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 125f9089 push eax */
  push32((uint32_t)(EAX));
  /* 125f908a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f908d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125f908f push edx */
  push32((uint32_t)(EDX));
  /* 125f9090 call 0x125fb740 */
  push32(0x125f9095u); f_125fb740();
  /* 125f9095 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9098 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125f909b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f909f jne 0x125f90b2 */
  if (!C.zf) goto L_125f90b2;
  /* 125f90a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f90a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f90a7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 125f90ab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f90ae mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125f90b0 jmp 0x125f90cc */
  goto L_125f90cc;
L_125f90b2:;
  /* 125f90b2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f90b6 jge 0x125f90c3 */
  if ((C.sf==C.of)) goto L_125f90c3;
  /* 125f90b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f90bb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f90be mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 125f90c1 jmp 0x125f90cc */
  goto L_125f90cc;
L_125f90c3:;
  /* 125f90c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f90c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f90c9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_125f90cc:;
  /* 125f90cc jmp 0x125f9064 */
  goto L_125f9064;
L_125f90ce:;
  /* 125f90ce mov esp, ebp */
  ESP = (EBP);
  /* 125f90d0 pop ebp */
  EBP = (pop32());
  /* 125f90d1 ret  */
  ESPCHK(0x125f9050u, _esp0);
  ESP += 4; return;
}

/* FUN_100190e0 @ 0x125f90e0 (186 bytes, 50 insns) */
void f_125f90e0(void) {
  FTRACE(0x125f90e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f90e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f90e1 mov ebp, esp */
  EBP = (ESP);
  /* 125f90e3 push ecx */
  push32((uint32_t)(ECX));
  /* 125f90e4 mov eax, dword ptr [0x1261906c] */
  EAX = (r32((uint32_t)(0x1261906c)));
  /* 125f90e9 push eax */
  push32((uint32_t)(EAX));
  /* 125f90ea call 0x125efea0 */
  push32(0x125f90efu); f_125efea0();
  /* 125f90ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f90f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125f90f4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f90f7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 125f90fa mov dword ptr [0x12619068], ecx */
  w32((uint32_t)(0x12619068), (ECX));
  /* 125f9100 mov edx, dword ptr [0x12619070] */
  EDX = (r32((uint32_t)(0x12619070)));
  /* 125f9106 push edx */
  push32((uint32_t)(EDX));
  /* 125f9107 call 0x125efea0 */
  push32(0x125f910cu); f_125efea0();
  /* 125f910c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f910f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125f9111 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9114 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 125f9117 mov dword ptr [0x12619060], ecx */
  w32((uint32_t)(0x12619060), (ECX));
  /* 125f911d mov dword ptr [0x1261905c], 0 */
  w32((uint32_t)(0x1261905c), (0x0u));
  /* 125f9127 cmp dword ptr [0x12619068], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619068))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f912e je 0x125f9139 */
  if (C.zf) goto L_125f9139;
  /* 125f9130 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 125f9137 jmp 0x125f914b */
  goto L_125f914b;
L_125f9139:;
  /* 125f9139 mov edx, dword ptr [0x1261906c] */
  EDX = (r32((uint32_t)(0x1261906c)));
  /* 125f913f push edx */
  push32((uint32_t)(EDX));
  /* 125f9140 call 0x125f9b80 */
  push32(0x125f9145u); f_125f9b80();
  /* 125f9145 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9148 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125f914b:;
  /* 125f914b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f914e mov dword ptr [0x12619064], eax */
  w32((uint32_t)(0x12619064), (EAX));
  /* 125f9153 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f9155 push 0x125f91a0 */
  push32((uint32_t)(0x125f91a0u));
  /* 125f915a call dword ptr [0x1261b30c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b30c))), 0x125f9160u);
  /* 125f9160 mov ecx, dword ptr [0x12619074] */
  ECX = (r32((uint32_t)(0x12619074)));
  /* 125f9166 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 125f916c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f916e je 0x125f918c */
  if (C.zf) goto L_125f918c;
  /* 125f9170 mov edx, dword ptr [0x12619074] */
  EDX = (r32((uint32_t)(0x12619074)));
  /* 125f9176 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 125f917c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f917e je 0x125f918c */
  if (C.zf) goto L_125f918c;
  /* 125f9180 mov eax, dword ptr [0x12619074] */
  EAX = (r32((uint32_t)(0x12619074)));
  /* 125f9185 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 125f9188 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f918a jne 0x125f9196 */
  if (!C.zf) goto L_125f9196;
L_125f918c:;
  /* 125f918c mov dword ptr [0x12619074], 0 */
  w32((uint32_t)(0x12619074), (0x0u));
L_125f9196:;
  /* 125f9196 mov esp, ebp */
  ESP = (EBP);
  /* 125f9198 pop ebp */
  EBP = (pop32());
  /* 125f9199 ret  */
  ESPCHK(0x125f90e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100191a0 @ 0x125f91a0 (804 bytes, 220 insns) */
void f_125f91a0(void) {
  FTRACE(0x125f91a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f91a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f91a1 mov ebp, esp */
  EBP = (ESP);
  /* 125f91a3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f91a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f91a9 push eax */
  push32((uint32_t)(EAX));
  /* 125f91aa call 0x125f9b00 */
  push32(0x125f91afu); f_125f9b00();
  /* 125f91af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f91b2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 125f91b5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 125f91b7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 125f91ba push ecx */
  push32((uint32_t)(ECX));
  /* 125f91bb mov edx, dword ptr [0x12619060] */
  EDX = (r32((uint32_t)(0x12619060)));
  /* 125f91c1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 125f91c3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f91c5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 125f91cb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f91d1 push edx */
  push32((uint32_t)(EDX));
  /* 125f91d2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125f91d5 push eax */
  push32((uint32_t)(EAX));
  /* 125f91d6 call dword ptr [0x1261907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261907c))), 0x125f91dcu);
  /* 125f91dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f91de jne 0x125f91f4 */
  if (!C.zf) goto L_125f91f4;
  /* 125f91e0 mov dword ptr [0x12619074], 0 */
  w32((uint32_t)(0x12619074), (0x0u));
  /* 125f91ea mov eax, 1 */
  EAX = (0x1u);
  /* 125f91ef jmp 0x125f94be */
  goto L_125f94be;
L_125f91f4:;
  /* 125f91f4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 125f91f7 push ecx */
  push32((uint32_t)(ECX));
  /* 125f91f8 mov edx, dword ptr [0x12619070] */
  EDX = (r32((uint32_t)(0x12619070)));
  /* 125f91fe push edx */
  push32((uint32_t)(EDX));
  /* 125f91ff call 0x125fb740 */
  push32(0x125f9204u); f_125fb740();
  /* 125f9204 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9207 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f9209 jne 0x125f932f */
  if (!C.zf) goto L_125f932f;
  /* 125f920f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 125f9211 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 125f9214 push eax */
  push32((uint32_t)(EAX));
  /* 125f9215 mov ecx, dword ptr [0x12619068] */
  ECX = (r32((uint32_t)(0x12619068)));
  /* 125f921b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 125f921d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f921f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 125f9225 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f922b push ecx */
  push32((uint32_t)(ECX));
  /* 125f922c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125f922f push edx */
  push32((uint32_t)(EDX));
  /* 125f9230 call dword ptr [0x1261907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261907c))), 0x125f9236u);
  /* 125f9236 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f9238 jne 0x125f924e */
  if (!C.zf) goto L_125f924e;
  /* 125f923a mov dword ptr [0x12619074], 0 */
  w32((uint32_t)(0x12619074), (0x0u));
  /* 125f9244 mov eax, 1 */
  EAX = (0x1u);
  /* 125f9249 jmp 0x125f94be */
  goto L_125f94be;
L_125f924e:;
  /* 125f924e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 125f9251 push eax */
  push32((uint32_t)(EAX));
  /* 125f9252 mov ecx, dword ptr [0x1261906c] */
  ECX = (r32((uint32_t)(0x1261906c)));
  /* 125f9258 push ecx */
  push32((uint32_t)(ECX));
  /* 125f9259 call 0x125fb740 */
  push32(0x125f925eu); f_125fb740();
  /* 125f925e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f9263 jne 0x125f9290 */
  if (!C.zf) goto L_125f9290;
  /* 125f9265 mov edx, dword ptr [0x12619074] */
  EDX = (r32((uint32_t)(0x12619074)));
  /* 125f926b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 125f9271 mov dword ptr [0x12619074], edx */
  w32((uint32_t)(0x12619074), (EDX));
  /* 125f9277 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125f927a mov dword ptr [0x12619078], eax */
  w32((uint32_t)(0x12619078), (EAX));
  /* 125f927f mov ecx, dword ptr [0x12619078] */
  ECX = (r32((uint32_t)(0x12619078)));
  /* 125f9285 mov dword ptr [0x1261905c], ecx */
  w32((uint32_t)(0x1261905c), (ECX));
  /* 125f928b jmp 0x125f932f */
  goto L_125f932f;
L_125f9290:;
  /* 125f9290 mov edx, dword ptr [0x12619074] */
  EDX = (r32((uint32_t)(0x12619074)));
  /* 125f9296 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 125f9299 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f929b jne 0x125f932f */
  if (!C.zf) goto L_125f932f;
  /* 125f92a1 cmp dword ptr [0x12619064], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619064))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f92a8 je 0x125f92fd */
  if (C.zf) goto L_125f92fd;
  /* 125f92aa mov eax, dword ptr [0x12619064] */
  EAX = (r32((uint32_t)(0x12619064)));
  /* 125f92af push eax */
  push32((uint32_t)(EAX));
  /* 125f92b0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 125f92b3 push ecx */
  push32((uint32_t)(ECX));
  /* 125f92b4 mov edx, dword ptr [0x1261906c] */
  EDX = (r32((uint32_t)(0x1261906c)));
  /* 125f92ba push edx */
  push32((uint32_t)(EDX));
  /* 125f92bb call 0x125fb810 */
  push32(0x125f92c0u); f_125fb810();
  /* 125f92c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f92c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f92c5 jne 0x125f92fd */
  if (!C.zf) goto L_125f92fd;
  /* 125f92c7 mov eax, dword ptr [0x12619074] */
  EAX = (r32((uint32_t)(0x12619074)));
  /* 125f92cc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 125f92ce mov dword ptr [0x12619074], eax */
  w32((uint32_t)(0x12619074), (EAX));
  /* 125f92d3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125f92d6 mov dword ptr [0x12619078], ecx */
  w32((uint32_t)(0x12619078), (ECX));
  /* 125f92dc mov edx, dword ptr [0x1261906c] */
  EDX = (r32((uint32_t)(0x1261906c)));
  /* 125f92e2 push edx */
  push32((uint32_t)(EDX));
  /* 125f92e3 call 0x125efea0 */
  push32(0x125f92e8u); f_125efea0();
  /* 125f92e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f92eb cmp eax, dword ptr [0x12619064] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12619064))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f92f1 jne 0x125f92fb */
  if (!C.zf) goto L_125f92fb;
  /* 125f92f3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125f92f6 mov dword ptr [0x1261905c], eax */
  w32((uint32_t)(0x1261905c), (EAX));
L_125f92fb:;
  /* 125f92fb jmp 0x125f932f */
  goto L_125f932f;
L_125f92fd:;
  /* 125f92fd mov ecx, dword ptr [0x12619074] */
  ECX = (r32((uint32_t)(0x12619074)));
  /* 125f9303 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125f9306 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f9308 jne 0x125f932f */
  if (!C.zf) goto L_125f932f;
  /* 125f930a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125f930d push edx */
  push32((uint32_t)(EDX));
  /* 125f930e call 0x125f9840 */
  push32(0x125f9313u); f_125f9840();
  /* 125f9313 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9316 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f9318 je 0x125f932f */
  if (C.zf) goto L_125f932f;
  /* 125f931a mov eax, dword ptr [0x12619074] */
  EAX = (r32((uint32_t)(0x12619074)));
  /* 125f931f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 125f9321 mov dword ptr [0x12619074], eax */
  w32((uint32_t)(0x12619074), (EAX));
  /* 125f9326 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125f9329 mov dword ptr [0x12619078], ecx */
  w32((uint32_t)(0x12619078), (ECX));
L_125f932f:;
  /* 125f932f mov edx, dword ptr [0x12619074] */
  EDX = (r32((uint32_t)(0x12619074)));
  /* 125f9335 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 125f933b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9341 je 0x125f94b1 */
  if (C.zf) goto L_125f94b1;
  /* 125f9347 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 125f9349 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 125f934c push eax */
  push32((uint32_t)(EAX));
  /* 125f934d mov ecx, dword ptr [0x12619068] */
  ECX = (r32((uint32_t)(0x12619068)));
  /* 125f9353 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 125f9355 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f9357 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 125f935d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9363 push ecx */
  push32((uint32_t)(ECX));
  /* 125f9364 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125f9367 push edx */
  push32((uint32_t)(EDX));
  /* 125f9368 call dword ptr [0x1261907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261907c))), 0x125f936eu);
  /* 125f936e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f9370 jne 0x125f9386 */
  if (!C.zf) goto L_125f9386;
  /* 125f9372 mov dword ptr [0x12619074], 0 */
  w32((uint32_t)(0x12619074), (0x0u));
  /* 125f937c mov eax, 1 */
  EAX = (0x1u);
  /* 125f9381 jmp 0x125f94be */
  goto L_125f94be;
L_125f9386:;
  /* 125f9386 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 125f9389 push eax */
  push32((uint32_t)(EAX));
  /* 125f938a mov ecx, dword ptr [0x1261906c] */
  ECX = (r32((uint32_t)(0x1261906c)));
  /* 125f9390 push ecx */
  push32((uint32_t)(ECX));
  /* 125f9391 call 0x125fb740 */
  push32(0x125f9396u); f_125fb740();
  /* 125f9396 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9399 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f939b jne 0x125f9450 */
  if (!C.zf) goto L_125f9450;
  /* 125f93a1 mov edx, dword ptr [0x12619074] */
  EDX = (r32((uint32_t)(0x12619074)));
  /* 125f93a7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 125f93aa mov dword ptr [0x12619074], edx */
  w32((uint32_t)(0x12619074), (EDX));
  /* 125f93b0 cmp dword ptr [0x12619068], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619068))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f93b7 je 0x125f93da */
  if (C.zf) goto L_125f93da;
  /* 125f93b9 mov eax, dword ptr [0x12619074] */
  EAX = (r32((uint32_t)(0x12619074)));
  /* 125f93be or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 125f93c1 mov dword ptr [0x12619074], eax */
  w32((uint32_t)(0x12619074), (EAX));
  /* 125f93c6 cmp dword ptr [0x1261905c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1261905c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f93cd jne 0x125f93d8 */
  if (!C.zf) goto L_125f93d8;
  /* 125f93cf mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125f93d2 mov dword ptr [0x1261905c], ecx */
  w32((uint32_t)(0x1261905c), (ECX));
L_125f93d8:;
  /* 125f93d8 jmp 0x125f944e */
  goto L_125f944e;
L_125f93da:;
  /* 125f93da cmp dword ptr [0x12619064], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619064))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f93e1 je 0x125f942f */
  if (C.zf) goto L_125f942f;
  /* 125f93e3 mov edx, dword ptr [0x1261906c] */
  EDX = (r32((uint32_t)(0x1261906c)));
  /* 125f93e9 push edx */
  push32((uint32_t)(EDX));
  /* 125f93ea call 0x125efea0 */
  push32(0x125f93efu); f_125efea0();
  /* 125f93ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f93f2 cmp eax, dword ptr [0x12619064] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12619064))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f93f8 jne 0x125f942f */
  if (!C.zf) goto L_125f942f;
  /* 125f93fa push 1 */
  push32((uint32_t)(0x1u));
  /* 125f93fc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125f93ff push eax */
  push32((uint32_t)(EAX));
  /* 125f9400 call 0x125f9890 */
  push32(0x125f9405u); f_125f9890();
  /* 125f9405 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9408 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f940a je 0x125f942d */
  if (C.zf) goto L_125f942d;
  /* 125f940c mov ecx, dword ptr [0x12619074] */
  ECX = (r32((uint32_t)(0x12619074)));
  /* 125f9412 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 125f9415 mov dword ptr [0x12619074], ecx */
  w32((uint32_t)(0x12619074), (ECX));
  /* 125f941b cmp dword ptr [0x1261905c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1261905c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9422 jne 0x125f942d */
  if (!C.zf) goto L_125f942d;
  /* 125f9424 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125f9427 mov dword ptr [0x1261905c], edx */
  w32((uint32_t)(0x1261905c), (EDX));
L_125f942d:;
  /* 125f942d jmp 0x125f944e */
  goto L_125f944e;
L_125f942f:;
  /* 125f942f mov eax, dword ptr [0x12619074] */
  EAX = (r32((uint32_t)(0x12619074)));
  /* 125f9434 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 125f9437 mov dword ptr [0x12619074], eax */
  w32((uint32_t)(0x12619074), (EAX));
  /* 125f943c cmp dword ptr [0x1261905c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1261905c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9443 jne 0x125f944e */
  if (!C.zf) goto L_125f944e;
  /* 125f9445 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125f9448 mov dword ptr [0x1261905c], ecx */
  w32((uint32_t)(0x1261905c), (ECX));
L_125f944e:;
  /* 125f944e jmp 0x125f94b1 */
  goto L_125f94b1;
L_125f9450:;
  /* 125f9450 cmp dword ptr [0x12619068], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619068))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9457 jne 0x125f94b1 */
  if (!C.zf) goto L_125f94b1;
  /* 125f9459 cmp dword ptr [0x12619064], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619064))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9460 je 0x125f94b1 */
  if (C.zf) goto L_125f94b1;
  /* 125f9462 mov edx, dword ptr [0x12619064] */
  EDX = (r32((uint32_t)(0x12619064)));
  /* 125f9468 push edx */
  push32((uint32_t)(EDX));
  /* 125f9469 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 125f946c push eax */
  push32((uint32_t)(EAX));
  /* 125f946d mov ecx, dword ptr [0x1261906c] */
  ECX = (r32((uint32_t)(0x1261906c)));
  /* 125f9473 push ecx */
  push32((uint32_t)(ECX));
  /* 125f9474 call 0x125fb810 */
  push32(0x125f9479u); f_125fb810();
  /* 125f9479 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f947c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f947e jne 0x125f94b1 */
  if (!C.zf) goto L_125f94b1;
  /* 125f9480 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f9482 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125f9485 push edx */
  push32((uint32_t)(EDX));
  /* 125f9486 call 0x125f9890 */
  push32(0x125f948bu); f_125f9890();
  /* 125f948b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f948e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f9490 je 0x125f94b1 */
  if (C.zf) goto L_125f94b1;
  /* 125f9492 mov eax, dword ptr [0x12619074] */
  EAX = (r32((uint32_t)(0x12619074)));
  /* 125f9497 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 125f949a mov dword ptr [0x12619074], eax */
  w32((uint32_t)(0x12619074), (EAX));
  /* 125f949f cmp dword ptr [0x1261905c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1261905c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f94a6 jne 0x125f94b1 */
  if (!C.zf) goto L_125f94b1;
  /* 125f94a8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125f94ab mov dword ptr [0x1261905c], ecx */
  w32((uint32_t)(0x1261905c), (ECX));
L_125f94b1:;
  /* 125f94b1 mov eax, dword ptr [0x12619074] */
  EAX = (r32((uint32_t)(0x12619074)));
  /* 125f94b6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 125f94b9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 125f94bb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f94bd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_125f94be:;
  /* 125f94be mov esp, ebp */
  ESP = (EBP);
  /* 125f94c0 pop ebp */
  EBP = (pop32());
  /* 125f94c1 ret 4 */
  ESPCHK(0x125f91a0u, _esp0);
  ESP += 8; return;
}

/* FUN_100194d0 @ 0x125f94d0 (116 bytes, 33 insns) */
void f_125f94d0(void) {
  FTRACE(0x125f94d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f94d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f94d1 mov ebp, esp */
  EBP = (ESP);
  /* 125f94d3 push ecx */
  push32((uint32_t)(ECX));
  /* 125f94d4 mov eax, dword ptr [0x1261906c] */
  EAX = (r32((uint32_t)(0x1261906c)));
  /* 125f94d9 push eax */
  push32((uint32_t)(EAX));
  /* 125f94da call 0x125efea0 */
  push32(0x125f94dfu); f_125efea0();
  /* 125f94df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f94e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125f94e4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f94e7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 125f94ea mov dword ptr [0x12619068], ecx */
  w32((uint32_t)(0x12619068), (ECX));
  /* 125f94f0 cmp dword ptr [0x12619068], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619068))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f94f7 je 0x125f9502 */
  if (C.zf) goto L_125f9502;
  /* 125f94f9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 125f9500 jmp 0x125f9514 */
  goto L_125f9514;
L_125f9502:;
  /* 125f9502 mov edx, dword ptr [0x1261906c] */
  EDX = (r32((uint32_t)(0x1261906c)));
  /* 125f9508 push edx */
  push32((uint32_t)(EDX));
  /* 125f9509 call 0x125f9b80 */
  push32(0x125f950eu); f_125f9b80();
  /* 125f950e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9511 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125f9514:;
  /* 125f9514 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f9517 mov dword ptr [0x12619064], eax */
  w32((uint32_t)(0x12619064), (EAX));
  /* 125f951c push 1 */
  push32((uint32_t)(0x1u));
  /* 125f951e push 0x125f9550 */
  push32((uint32_t)(0x125f9550u));
  /* 125f9523 call dword ptr [0x1261b30c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b30c))), 0x125f9529u);
  /* 125f9529 mov ecx, dword ptr [0x12619074] */
  ECX = (r32((uint32_t)(0x12619074)));
  /* 125f952f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 125f9532 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f9534 jne 0x125f9540 */
  if (!C.zf) goto L_125f9540;
  /* 125f9536 mov dword ptr [0x12619074], 0 */
  w32((uint32_t)(0x12619074), (0x0u));
L_125f9540:;
  /* 125f9540 mov esp, ebp */
  ESP = (EBP);
  /* 125f9542 pop ebp */
  EBP = (pop32());
  /* 125f9543 ret  */
  ESPCHK(0x125f94d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019550 @ 0x125f9550 (287 bytes, 86 insns) */
void f_125f9550(void) {
  FTRACE(0x125f9550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f9550 push ebp */
  push32((uint32_t)(EBP));
  /* 125f9551 mov ebp, esp */
  EBP = (ESP);
  /* 125f9553 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f9556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9559 push eax */
  push32((uint32_t)(EAX));
  /* 125f955a call 0x125f9b00 */
  push32(0x125f955fu); f_125f9b00();
  /* 125f955f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9562 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 125f9565 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 125f9567 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 125f956a push ecx */
  push32((uint32_t)(ECX));
  /* 125f956b mov edx, dword ptr [0x12619068] */
  EDX = (r32((uint32_t)(0x12619068)));
  /* 125f9571 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 125f9573 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f9575 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 125f957b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9581 push edx */
  push32((uint32_t)(EDX));
  /* 125f9582 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125f9585 push eax */
  push32((uint32_t)(EAX));
  /* 125f9586 call dword ptr [0x1261907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261907c))), 0x125f958cu);
  /* 125f958c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f958e jne 0x125f95a4 */
  if (!C.zf) goto L_125f95a4;
  /* 125f9590 mov dword ptr [0x12619074], 0 */
  w32((uint32_t)(0x12619074), (0x0u));
  /* 125f959a mov eax, 1 */
  EAX = (0x1u);
  /* 125f959f jmp 0x125f9669 */
  goto L_125f9669;
L_125f95a4:;
  /* 125f95a4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 125f95a7 push ecx */
  push32((uint32_t)(ECX));
  /* 125f95a8 mov edx, dword ptr [0x1261906c] */
  EDX = (r32((uint32_t)(0x1261906c)));
  /* 125f95ae push edx */
  push32((uint32_t)(EDX));
  /* 125f95af call 0x125fb740 */
  push32(0x125f95b4u); f_125fb740();
  /* 125f95b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f95b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f95b9 jne 0x125f95f9 */
  if (!C.zf) goto L_125f95f9;
  /* 125f95bb cmp dword ptr [0x12619068], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619068))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f95c2 jne 0x125f95d6 */
  if (!C.zf) goto L_125f95d6;
  /* 125f95c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f95c6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125f95c9 push eax */
  push32((uint32_t)(EAX));
  /* 125f95ca call 0x125f9890 */
  push32(0x125f95cfu); f_125f9890();
  /* 125f95cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f95d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f95d4 je 0x125f95f7 */
  if (C.zf) goto L_125f95f7;
L_125f95d6:;
  /* 125f95d6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125f95d9 mov dword ptr [0x12619078], ecx */
  w32((uint32_t)(0x12619078), (ECX));
  /* 125f95df mov edx, dword ptr [0x12619078] */
  EDX = (r32((uint32_t)(0x12619078)));
  /* 125f95e5 mov dword ptr [0x1261905c], edx */
  w32((uint32_t)(0x1261905c), (EDX));
  /* 125f95eb mov eax, dword ptr [0x12619074] */
  EAX = (r32((uint32_t)(0x12619074)));
  /* 125f95f0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 125f95f2 mov dword ptr [0x12619074], eax */
  w32((uint32_t)(0x12619074), (EAX));
L_125f95f7:;
  /* 125f95f7 jmp 0x125f965c */
  goto L_125f965c;
L_125f95f9:;
  /* 125f95f9 cmp dword ptr [0x12619068], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619068))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9600 jne 0x125f965c */
  if (!C.zf) goto L_125f965c;
  /* 125f9602 cmp dword ptr [0x12619064], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12619064))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9609 je 0x125f965c */
  if (C.zf) goto L_125f965c;
  /* 125f960b mov ecx, dword ptr [0x12619064] */
  ECX = (r32((uint32_t)(0x12619064)));
  /* 125f9611 push ecx */
  push32((uint32_t)(ECX));
  /* 125f9612 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 125f9615 push edx */
  push32((uint32_t)(EDX));
  /* 125f9616 mov eax, dword ptr [0x1261906c] */
  EAX = (r32((uint32_t)(0x1261906c)));
  /* 125f961b push eax */
  push32((uint32_t)(EAX));
  /* 125f961c call 0x125fb810 */
  push32(0x125f9621u); f_125fb810();
  /* 125f9621 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9624 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f9626 jne 0x125f965c */
  if (!C.zf) goto L_125f965c;
  /* 125f9628 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f962a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125f962d push ecx */
  push32((uint32_t)(ECX));
  /* 125f962e call 0x125f9890 */
  push32(0x125f9633u); f_125f9890();
  /* 125f9633 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9636 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f9638 je 0x125f965c */
  if (C.zf) goto L_125f965c;
  /* 125f963a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125f963d mov dword ptr [0x12619078], edx */
  w32((uint32_t)(0x12619078), (EDX));
  /* 125f9643 mov eax, dword ptr [0x12619078] */
  EAX = (r32((uint32_t)(0x12619078)));
  /* 125f9648 mov dword ptr [0x1261905c], eax */
  w32((uint32_t)(0x1261905c), (EAX));
  /* 125f964d mov ecx, dword ptr [0x12619074] */
  ECX = (r32((uint32_t)(0x12619074)));
  /* 125f9653 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 125f9656 mov dword ptr [0x12619074], ecx */
  w32((uint32_t)(0x12619074), (ECX));
L_125f965c:;
  /* 125f965c mov eax, dword ptr [0x12619074] */
  EAX = (r32((uint32_t)(0x12619074)));
  /* 125f9661 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 125f9664 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 125f9666 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f9668 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_125f9669:;
  /* 125f9669 mov esp, ebp */
  ESP = (EBP);
  /* 125f966b pop ebp */
  EBP = (pop32());
  /* 125f966c ret 4 */
  ESPCHK(0x125f9550u, _esp0);
  ESP += 8; return;
}

/* FUN_10019670 @ 0x125f9670 (69 bytes, 20 insns) */
void f_125f9670(void) {
  FTRACE(0x125f9670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f9670 push ebp */
  push32((uint32_t)(EBP));
  /* 125f9671 mov ebp, esp */
  EBP = (ESP);
  /* 125f9673 mov eax, dword ptr [0x12619070] */
  EAX = (r32((uint32_t)(0x12619070)));
  /* 125f9678 push eax */
  push32((uint32_t)(EAX));
  /* 125f9679 call 0x125efea0 */
  push32(0x125f967eu); f_125efea0();
  /* 125f967e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9681 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125f9683 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9686 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 125f9689 mov dword ptr [0x12619060], ecx */
  w32((uint32_t)(0x12619060), (ECX));
  /* 125f968f push 1 */
  push32((uint32_t)(0x1u));
  /* 125f9691 push 0x125f96c0 */
  push32((uint32_t)(0x125f96c0u));
  /* 125f9696 call dword ptr [0x1261b30c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b30c))), 0x125f969cu);
  /* 125f969c mov edx, dword ptr [0x12619074] */
  EDX = (r32((uint32_t)(0x12619074)));
  /* 125f96a2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 125f96a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f96a7 jne 0x125f96b3 */
  if (!C.zf) goto L_125f96b3;
  /* 125f96a9 mov dword ptr [0x12619074], 0 */
  w32((uint32_t)(0x12619074), (0x0u));
L_125f96b3:;
  /* 125f96b3 pop ebp */
  EBP = (pop32());
  /* 125f96b4 ret  */
  ESPCHK(0x125f9670u, _esp0);
  ESP += 4; return;
}

/* FUN_100196c0 @ 0x125f96c0 (172 bytes, 54 insns) */
void f_125f96c0(void) {
  FTRACE(0x125f96c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f96c0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f96c1 mov ebp, esp */
  EBP = (ESP);
  /* 125f96c3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f96c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f96c9 push eax */
  push32((uint32_t)(EAX));
  /* 125f96ca call 0x125f9b00 */
  push32(0x125f96cfu); f_125f9b00();
  /* 125f96cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f96d2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 125f96d5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 125f96d7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 125f96da push ecx */
  push32((uint32_t)(ECX));
  /* 125f96db mov edx, dword ptr [0x12619060] */
  EDX = (r32((uint32_t)(0x12619060)));
  /* 125f96e1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 125f96e3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f96e5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 125f96eb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f96f1 push edx */
  push32((uint32_t)(EDX));
  /* 125f96f2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125f96f5 push eax */
  push32((uint32_t)(EAX));
  /* 125f96f6 call dword ptr [0x1261907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261907c))), 0x125f96fcu);
  /* 125f96fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f96fe jne 0x125f9711 */
  if (!C.zf) goto L_125f9711;
  /* 125f9700 mov dword ptr [0x12619074], 0 */
  w32((uint32_t)(0x12619074), (0x0u));
  /* 125f970a mov eax, 1 */
  EAX = (0x1u);
  /* 125f970f jmp 0x125f9766 */
  goto L_125f9766;
L_125f9711:;
  /* 125f9711 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 125f9714 push ecx */
  push32((uint32_t)(ECX));
  /* 125f9715 mov edx, dword ptr [0x12619070] */
  EDX = (r32((uint32_t)(0x12619070)));
  /* 125f971b push edx */
  push32((uint32_t)(EDX));
  /* 125f971c call 0x125fb740 */
  push32(0x125f9721u); f_125fb740();
  /* 125f9721 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9724 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f9726 jne 0x125f9759 */
  if (!C.zf) goto L_125f9759;
  /* 125f9728 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125f972b push eax */
  push32((uint32_t)(EAX));
  /* 125f972c call 0x125f9840 */
  push32(0x125f9731u); f_125f9840();
  /* 125f9731 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9734 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f9736 je 0x125f9759 */
  if (C.zf) goto L_125f9759;
  /* 125f9738 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 125f973b mov dword ptr [0x12619078], ecx */
  w32((uint32_t)(0x12619078), (ECX));
  /* 125f9741 mov edx, dword ptr [0x12619078] */
  EDX = (r32((uint32_t)(0x12619078)));
  /* 125f9747 mov dword ptr [0x1261905c], edx */
  w32((uint32_t)(0x1261905c), (EDX));
  /* 125f974d mov eax, dword ptr [0x12619074] */
  EAX = (r32((uint32_t)(0x12619074)));
  /* 125f9752 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 125f9754 mov dword ptr [0x12619074], eax */
  w32((uint32_t)(0x12619074), (EAX));
L_125f9759:;
  /* 125f9759 mov eax, dword ptr [0x12619074] */
  EAX = (r32((uint32_t)(0x12619074)));
  /* 125f975e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 125f9761 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 125f9763 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f9765 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_125f9766:;
  /* 125f9766 mov esp, ebp */
  ESP = (EBP);
  /* 125f9768 pop ebp */
  EBP = (pop32());
  /* 125f9769 ret 4 */
  ESPCHK(0x125f96c0u, _esp0);
  ESP += 8; return;
}

/* FUN_10019770 @ 0x125f9770 (43 bytes, 11 insns) */
void f_125f9770(void) {
  FTRACE(0x125f9770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f9770 push ebp */
  push32((uint32_t)(EBP));
  /* 125f9771 mov ebp, esp */
  EBP = (ESP);
  /* 125f9773 mov eax, dword ptr [0x12619074] */
  EAX = (r32((uint32_t)(0x12619074)));
  /* 125f9778 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 125f977d mov dword ptr [0x12619074], eax */
  w32((uint32_t)(0x12619074), (EAX));
  /* 125f9782 call dword ptr [0x1261b308] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b308))), 0x125f9788u);
  /* 125f9788 mov dword ptr [0x12619078], eax */
  w32((uint32_t)(0x12619078), (EAX));
  /* 125f978d mov ecx, dword ptr [0x12619078] */
  ECX = (r32((uint32_t)(0x12619078)));
  /* 125f9793 mov dword ptr [0x1261905c], ecx */
  w32((uint32_t)(0x1261905c), (ECX));
  /* 125f9799 pop ebp */
  EBP = (pop32());
  /* 125f979a ret  */
  ESPCHK(0x125f9770u, _esp0);
  ESP += 4; return;
}

/* FUN_100197a0 @ 0x125f97a0 (155 bytes, 57 insns) */
void f_125f97a0(void) {
  FTRACE(0x125f97a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f97a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f97a1 mov ebp, esp */
  EBP = (ESP);
  /* 125f97a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f97a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f97aa je 0x125f97cb */
  if (C.zf) goto L_125f97cb;
  /* 125f97ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f97af movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125f97b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f97b4 je 0x125f97cb */
  if (C.zf) goto L_125f97cb;
  /* 125f97b6 push 0x12615204 */
  push32((uint32_t)(0x12615204u));
  /* 125f97bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f97be push edx */
  push32((uint32_t)(EDX));
  /* 125f97bf call 0x125f8d00 */
  push32(0x125f97c4u); f_125f8d00();
  /* 125f97c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f97c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f97c9 jne 0x125f97f3 */
  if (!C.zf) goto L_125f97f3;
L_125f97cb:;
  /* 125f97cb push 8 */
  push32((uint32_t)(0x8u));
  /* 125f97cd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 125f97d0 push eax */
  push32((uint32_t)(EAX));
  /* 125f97d1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 125f97d6 mov ecx, dword ptr [0x12619078] */
  ECX = (r32((uint32_t)(0x12619078)));
  /* 125f97dc push ecx */
  push32((uint32_t)(ECX));
  /* 125f97dd call dword ptr [0x1261907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261907c))), 0x125f97e3u);
  /* 125f97e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f97e5 jne 0x125f97eb */
  if (!C.zf) goto L_125f97eb;
  /* 125f97e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f97e9 jmp 0x125f9837 */
  goto L_125f9837;
L_125f97eb:;
  /* 125f97eb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 125f97ee mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 125f97f1 jmp 0x125f982b */
  goto L_125f982b;
L_125f97f3:;
  /* 125f97f3 push 0x12615200 */
  push32((uint32_t)(0x12615200u));
  /* 125f97f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f97fb push eax */
  push32((uint32_t)(EAX));
  /* 125f97fc call 0x125f8d00 */
  push32(0x125f9801u); f_125f8d00();
  /* 125f9801 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9804 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f9806 jne 0x125f982b */
  if (!C.zf) goto L_125f982b;
  /* 125f9808 push 8 */
  push32((uint32_t)(0x8u));
  /* 125f980a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 125f980d push ecx */
  push32((uint32_t)(ECX));
  /* 125f980e push 0xb */
  push32((uint32_t)(0xbu));
  /* 125f9810 mov edx, dword ptr [0x12619078] */
  EDX = (r32((uint32_t)(0x12619078)));
  /* 125f9816 push edx */
  push32((uint32_t)(EDX));
  /* 125f9817 call dword ptr [0x1261907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261907c))), 0x125f981du);
  /* 125f981d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f981f jne 0x125f9825 */
  if (!C.zf) goto L_125f9825;
  /* 125f9821 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f9823 jmp 0x125f9837 */
  goto L_125f9837;
L_125f9825:;
  /* 125f9825 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 125f9828 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_125f982b:;
  /* 125f982b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f982e push ecx */
  push32((uint32_t)(ECX));
  /* 125f982f call 0x125fb920 */
  push32(0x125f9834u); f_125fb920();
  /* 125f9834 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125f9837:;
  /* 125f9837 mov esp, ebp */
  ESP = (EBP);
  /* 125f9839 pop ebp */
  EBP = (pop32());
  /* 125f983a ret  */
  ESPCHK(0x125f97a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019840 @ 0x125f9840 (79 bytes, 26 insns) */
void f_125f9840(void) {
  FTRACE(0x125f9840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f9840 push ebp */
  push32((uint32_t)(EBP));
  /* 125f9841 mov ebp, esp */
  EBP = (ESP);
  /* 125f9843 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f9846 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 125f984a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 125f984e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125f9855 jmp 0x125f9860 */
  goto L_125f9860;
L_125f9857:;
  /* 125f9857 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f985a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f985d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_125f9860:;
  /* 125f9860 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9864 jae 0x125f9886 */
  if (!C.cf) goto L_125f9886;
  /* 125f9866 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f9869 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125f986f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f9872 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125f9874 mov cx, word ptr [eax*2 + 0x126179c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x126179c4)));
  /* 125f987c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f987e jne 0x125f9884 */
  if (!C.zf) goto L_125f9884;
  /* 125f9880 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f9882 jmp 0x125f988b */
  goto L_125f988b;
L_125f9884:;
  /* 125f9884 jmp 0x125f9857 */
  goto L_125f9857;
L_125f9886:;
  /* 125f9886 mov eax, 1 */
  EAX = (0x1u);
L_125f988b:;
  /* 125f988b mov esp, ebp */
  ESP = (EBP);
  /* 125f988d pop ebp */
  EBP = (pop32());
  /* 125f988e ret  */
  ESPCHK(0x125f9840u, _esp0);
  ESP += 4; return;
}

/* FUN_10019890 @ 0x125f9890 (135 bytes, 48 insns) */
void f_125f9890(void) {
  FTRACE(0x125f9890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f9890 push ebp */
  push32((uint32_t)(EBP));
  /* 125f9891 mov ebp, esp */
  EBP = (ESP);
  /* 125f9893 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f9896 push esi */
  push32((uint32_t)(ESI));
  /* 125f9897 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f989a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f989f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f98a4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f98a9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 125f98ac and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f98b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f98b4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 125f98b6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 125f98b9 push ecx */
  push32((uint32_t)(ECX));
  /* 125f98ba push 1 */
  push32((uint32_t)(0x1u));
  /* 125f98bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f98bf push edx */
  push32((uint32_t)(EDX));
  /* 125f98c0 call dword ptr [0x1261907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261907c))), 0x125f98c6u);
  /* 125f98c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f98c8 jne 0x125f98ce */
  if (!C.zf) goto L_125f98ce;
  /* 125f98ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f98cc jmp 0x125f9912 */
  goto L_125f9912;
L_125f98ce:;
  /* 125f98ce lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 125f98d1 push eax */
  push32((uint32_t)(EAX));
  /* 125f98d2 call 0x125f9b00 */
  push32(0x125f98d7u); f_125f9b00();
  /* 125f98d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f98da cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f98dd je 0x125f990d */
  if (C.zf) goto L_125f990d;
  /* 125f98df cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f98e3 je 0x125f990d */
  if (C.zf) goto L_125f990d;
  /* 125f98e5 mov ecx, dword ptr [0x1261906c] */
  ECX = (r32((uint32_t)(0x1261906c)));
  /* 125f98eb push ecx */
  push32((uint32_t)(ECX));
  /* 125f98ec call 0x125f9b80 */
  push32(0x125f98f1u); f_125f9b80();
  /* 125f98f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f98f4 mov esi, eax */
  ESI = (EAX);
  /* 125f98f6 mov edx, dword ptr [0x1261906c] */
  EDX = (r32((uint32_t)(0x1261906c)));
  /* 125f98fc push edx */
  push32((uint32_t)(EDX));
  /* 125f98fd call 0x125efea0 */
  push32(0x125f9902u); f_125efea0();
  /* 125f9902 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9905 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9907 jne 0x125f990d */
  if (!C.zf) goto L_125f990d;
  /* 125f9909 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f990b jmp 0x125f9912 */
  goto L_125f9912;
L_125f990d:;
  /* 125f990d mov eax, 1 */
  EAX = (0x1u);
L_125f9912:;
  /* 125f9912 pop esi */
  ESI = (pop32());
  /* 125f9913 mov esp, ebp */
  ESP = (EBP);
  /* 125f9915 pop ebp */
  EBP = (pop32());
  /* 125f9916 ret  */
  ESPCHK(0x125f9890u, _esp0);
  ESP += 4; return;
}

/* FUN_10019920 @ 0x125f9920 (77 bytes, 18 insns) */
void f_125f9920(void) {
  FTRACE(0x125f9920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f9920 push ebp */
  push32((uint32_t)(EBP));
  /* 125f9921 mov ebp, esp */
  EBP = (ESP);
  /* 125f9923 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f9929 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 125f9933 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 125f9939 push eax */
  push32((uint32_t)(EAX));
  /* 125f993a call dword ptr [0x1261b304] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b304))), 0x125f9940u);
  /* 125f9940 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f9942 je 0x125f9959 */
  if (C.zf) goto L_125f9959;
  /* 125f9944 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f994b jne 0x125f9959 */
  if (!C.zf) goto L_125f9959;
  /* 125f994d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 125f9957 jmp 0x125f9963 */
  goto L_125f9963;
L_125f9959:;
  /* 125f9959 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_125f9963:;
  /* 125f9963 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 125f9969 mov esp, ebp */
  ESP = (EBP);
  /* 125f996b pop ebp */
  EBP = (pop32());
  /* 125f996c ret  */
  ESPCHK(0x125f9920u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x125f9970 (388 bytes, 118 insns) */
void f_125f9970(void) {
  FTRACE(0x125f9970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f9970 push ebp */
  push32((uint32_t)(EBP));
  /* 125f9971 mov ebp, esp */
  EBP = (ESP);
  /* 125f9973 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f9976 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125f997d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 125f9984 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_125f998b:;
  /* 125f998b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f998e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9991 jg 0x125f9ad8 */
  if ((!C.zf&&C.sf==C.of)) goto L_125f9ad8;
  /* 125f9997 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125f999a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f999d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125f999e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f99a0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125f99a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125f99a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f99a8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f99ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f99ae cmp edx, dword ptr [ecx + 0x12617520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12617520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f99b4 jne 0x125f9aae */
  if (!C.zf) goto L_125f9aae;
  /* 125f99ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f99bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125f99c0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f99c4 ja 0x125f99e7 */
  if ((!C.cf&&!C.zf)) goto L_125f99e7;
  /* 125f99c6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f99ca je 0x125f9a59 */
  if (C.zf) goto L_125f9a59;
  /* 125f99d0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f99d4 je 0x125f9a04 */
  if (C.zf) goto L_125f9a04;
  /* 125f99d6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f99da je 0x125f9a26 */
  if (C.zf) goto L_125f9a26;
  /* 125f99dc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f99e0 je 0x125f9a48 */
  if (C.zf) goto L_125f9a48;
  /* 125f99e2 jmp 0x125f9a78 */
  goto L_125f9a78;
L_125f99e7:;
  /* 125f99e7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f99ee je 0x125f9a15 */
  if (C.zf) goto L_125f9a15;
  /* 125f99f0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f99f7 je 0x125f9a37 */
  if (C.zf) goto L_125f9a37;
  /* 125f99f9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9a00 je 0x125f9a6a */
  if (C.zf) goto L_125f9a6a;
  /* 125f9a02 jmp 0x125f9a78 */
  goto L_125f9a78;
L_125f9a04:;
  /* 125f9a04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f9a07 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f9a0a add ecx, 0x12617524 */
  { uint32_t _a=(ECX),_b=(0x12617524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9a10 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f9a13 jmp 0x125f9a78 */
  goto L_125f9a78;
L_125f9a15:;
  /* 125f9a15 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f9a18 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f9a1b mov eax, dword ptr [edx + 0x1261752c] */
  EAX = (r32((uint32_t)(EDX + 0x1261752c)));
  /* 125f9a21 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125f9a24 jmp 0x125f9a78 */
  goto L_125f9a78;
L_125f9a26:;
  /* 125f9a26 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f9a29 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f9a2c add ecx, 0x12617530 */
  { uint32_t _a=(ECX),_b=(0x12617530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9a32 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f9a35 jmp 0x125f9a78 */
  goto L_125f9a78;
L_125f9a37:;
  /* 125f9a37 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f9a3a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f9a3d mov eax, dword ptr [edx + 0x12617534] */
  EAX = (r32((uint32_t)(EDX + 0x12617534)));
  /* 125f9a43 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125f9a46 jmp 0x125f9a78 */
  goto L_125f9a78;
L_125f9a48:;
  /* 125f9a48 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f9a4b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f9a4e add ecx, 0x12617538 */
  { uint32_t _a=(ECX),_b=(0x12617538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9a54 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f9a57 jmp 0x125f9a78 */
  goto L_125f9a78;
L_125f9a59:;
  /* 125f9a59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f9a5c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f9a5f add edx, 0x1261753c */
  { uint32_t _a=(EDX),_b=(0x1261753cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9a65 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125f9a68 jmp 0x125f9a78 */
  goto L_125f9a78;
L_125f9a6a:;
  /* 125f9a6a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f9a6d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f9a70 add eax, 0x12617544 */
  { uint32_t _a=(EAX),_b=(0x12617544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9a75 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125f9a78:;
  /* 125f9a78 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9a7c je 0x125f9a84 */
  if (C.zf) goto L_125f9a84;
  /* 125f9a7e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9a82 jge 0x125f9a86 */
  if ((C.sf==C.of)) goto L_125f9a86;
L_125f9a84:;
  /* 125f9a84 jmp 0x125f9ad8 */
  goto L_125f9ad8;
L_125f9a86:;
  /* 125f9a86 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125f9a89 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f9a8c push ecx */
  push32((uint32_t)(ECX));
  /* 125f9a8d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f9a90 push edx */
  push32((uint32_t)(EDX));
  /* 125f9a91 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f9a94 push eax */
  push32((uint32_t)(EAX));
  /* 125f9a95 call 0x125f0890 */
  push32(0x125f9a9au); f_125f0890();
  /* 125f9a9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9a9d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f9aa0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9aa3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 125f9aa7 mov eax, 1 */
  EAX = (0x1u);
  /* 125f9aac jmp 0x125f9aee */
  goto L_125f9aee;
L_125f9aae:;
  /* 125f9aae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f9ab1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f9ab4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9ab7 cmp eax, dword ptr [edx + 0x12617520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12617520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9abd jae 0x125f9aca */
  if (!C.cf) goto L_125f9aca;
  /* 125f9abf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f9ac2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f9ac5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125f9ac8 jmp 0x125f9ad3 */
  goto L_125f9ad3;
L_125f9aca:;
  /* 125f9aca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125f9acd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9ad0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_125f9ad3:;
  /* 125f9ad3 jmp 0x125f998b */
  goto L_125f998b;
L_125f9ad8:;
  /* 125f9ad8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125f9adb push eax */
  push32((uint32_t)(EAX));
  /* 125f9adc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125f9adf push ecx */
  push32((uint32_t)(ECX));
  /* 125f9ae0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125f9ae3 push edx */
  push32((uint32_t)(EDX));
  /* 125f9ae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9ae7 push eax */
  push32((uint32_t)(EAX));
  /* 125f9ae8 call dword ptr [0x1261b310] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b310))), 0x125f9aeeu);
L_125f9aee:;
  /* 125f9aee mov esp, ebp */
  ESP = (EBP);
  /* 125f9af0 pop ebp */
  EBP = (pop32());
  /* 125f9af1 ret 0x10 */
  ESPCHK(0x125f9970u, _esp0);
  ESP += 20; return;
}

/* FUN_10019b00 @ 0x125f9b00 (118 bytes, 42 insns) */
void f_125f9b00(void) {
  FTRACE(0x125f9b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f9b00 push ebp */
  push32((uint32_t)(EBP));
  /* 125f9b01 mov ebp, esp */
  EBP = (ESP);
  /* 125f9b03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f9b06 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_125f9b0d:;
  /* 125f9b0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9b10 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125f9b12 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 125f9b15 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125f9b19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9b1c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9b1f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125f9b22 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f9b24 je 0x125f9b6f */
  if (C.zf) goto L_125f9b6f;
  /* 125f9b26 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125f9b2a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9b2d jl 0x125f9b42 */
  if ((C.sf!=C.of)) goto L_125f9b42;
  /* 125f9b2f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125f9b33 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9b36 jg 0x125f9b42 */
  if ((!C.zf&&C.sf==C.of)) goto L_125f9b42;
  /* 125f9b38 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 125f9b3b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 125f9b3d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 125f9b40 jmp 0x125f9b5c */
  goto L_125f9b5c;
L_125f9b42:;
  /* 125f9b42 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125f9b46 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9b49 jl 0x125f9b5c */
  if ((C.sf!=C.of)) goto L_125f9b5c;
  /* 125f9b4b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125f9b4f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9b52 jg 0x125f9b5c */
  if ((!C.zf&&C.sf==C.of)) goto L_125f9b5c;
  /* 125f9b54 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 125f9b57 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 125f9b59 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_125f9b5c:;
  /* 125f9b5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f9b5f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 125f9b62 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125f9b66 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 125f9b6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f9b6d jmp 0x125f9b0d */
  goto L_125f9b0d;
L_125f9b6f:;
  /* 125f9b6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f9b72 mov esp, ebp */
  ESP = (EBP);
  /* 125f9b74 pop ebp */
  EBP = (pop32());
  /* 125f9b75 ret  */
  ESPCHK(0x125f9b00u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x125f9b80 (101 bytes, 36 insns) */
void f_125f9b80(void) {
  FTRACE(0x125f9b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f9b80 push ebp */
  push32((uint32_t)(EBP));
  /* 125f9b81 mov ebp, esp */
  EBP = (ESP);
  /* 125f9b83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125f9b86 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125f9b8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9b90 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125f9b92 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 125f9b95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9b98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9b9b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_125f9b9e:;
  /* 125f9b9e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 125f9ba2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9ba5 jl 0x125f9bb0 */
  if ((C.sf!=C.of)) goto L_125f9bb0;
  /* 125f9ba7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 125f9bab cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9bae jle 0x125f9bc2 */
  if ((C.zf||C.sf!=C.of)) goto L_125f9bc2;
L_125f9bb0:;
  /* 125f9bb0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 125f9bb4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9bb7 jl 0x125f9bde */
  if ((C.sf!=C.of)) goto L_125f9bde;
  /* 125f9bb9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 125f9bbd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9bc0 jg 0x125f9bde */
  if ((!C.zf&&C.sf==C.of)) goto L_125f9bde;
L_125f9bc2:;
  /* 125f9bc2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f9bc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9bc8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125f9bcb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9bce mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125f9bd0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 125f9bd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9bd6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9bd9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 125f9bdc jmp 0x125f9b9e */
  goto L_125f9b9e;
L_125f9bde:;
  /* 125f9bde mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125f9be1 mov esp, ebp */
  ESP = (EBP);
  /* 125f9be3 pop ebp */
  EBP = (pop32());
  /* 125f9be4 ret  */
  ESPCHK(0x125f9b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10019bf0 @ 0x125f9bf0 (122 bytes, 39 insns) */
void f_125f9bf0(void) {
  FTRACE(0x125f9bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f9bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 125f9bf1 mov ebp, esp */
  EBP = (ESP);
  /* 125f9bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 125f9bf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9bf7 cmp eax, dword ptr [0x1261a8fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1261a8fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9bfd jae 0x125f9c21 */
  if (!C.cf) goto L_125f9c21;
  /* 125f9bff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9c02 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 125f9c05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9c08 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 125f9c0b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f9c0e mov eax, dword ptr [ecx*4 + 0x1261a7c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1261a7c0)));
  /* 125f9c15 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 125f9c1a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125f9c1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f9c1f jne 0x125f9c3c */
  if (!C.zf) goto L_125f9c3c;
L_125f9c21:;
  /* 125f9c21 call 0x125f4f40 */
  push32(0x125f9c26u); f_125f4f40();
  /* 125f9c26 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 125f9c2c call 0x125f4f50 */
  push32(0x125f9c31u); f_125f4f50();
  /* 125f9c31 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125f9c37 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f9c3a jmp 0x125f9c66 */
  goto L_125f9c66;
L_125f9c3c:;
  /* 125f9c3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9c3f push edx */
  push32((uint32_t)(EDX));
  /* 125f9c40 call 0x125f6760 */
  push32(0x125f9c45u); f_125f6760();
  /* 125f9c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9c48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9c4b push eax */
  push32((uint32_t)(EAX));
  /* 125f9c4c call 0x125f9c70 */
  push32(0x125f9c51u); f_125f9c70();
  /* 125f9c51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9c54 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125f9c57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9c5a push ecx */
  push32((uint32_t)(ECX));
  /* 125f9c5b call 0x125f67f0 */
  push32(0x125f9c60u); f_125f67f0();
  /* 125f9c60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9c63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125f9c66:;
  /* 125f9c66 mov esp, ebp */
  ESP = (EBP);
  /* 125f9c68 pop ebp */
  EBP = (pop32());
  /* 125f9c69 ret  */
  ESPCHK(0x125f9bf0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x125f9c70 (170 bytes, 59 insns) */
void f_125f9c70(void) {
  FTRACE(0x125f9c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f9c70 push ebp */
  push32((uint32_t)(EBP));
  /* 125f9c71 mov ebp, esp */
  EBP = (ESP);
  /* 125f9c73 push ecx */
  push32((uint32_t)(ECX));
  /* 125f9c74 push esi */
  push32((uint32_t)(ESI));
  /* 125f9c75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9c78 push eax */
  push32((uint32_t)(EAX));
  /* 125f9c79 call 0x125f65e0 */
  push32(0x125f9c7eu); f_125f65e0();
  /* 125f9c7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9c81 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9c84 je 0x125f9cc3 */
  if (C.zf) goto L_125f9cc3;
  /* 125f9c86 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9c8a je 0x125f9c92 */
  if (C.zf) goto L_125f9c92;
  /* 125f9c8c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9c90 jne 0x125f9cac */
  if (!C.zf) goto L_125f9cac;
L_125f9c92:;
  /* 125f9c92 push 1 */
  push32((uint32_t)(0x1u));
  /* 125f9c94 call 0x125f65e0 */
  push32(0x125f9c99u); f_125f65e0();
  /* 125f9c99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9c9c mov esi, eax */
  ESI = (EAX);
  /* 125f9c9e push 2 */
  push32((uint32_t)(0x2u));
  /* 125f9ca0 call 0x125f65e0 */
  push32(0x125f9ca5u); f_125f65e0();
  /* 125f9ca5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9ca8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9caa je 0x125f9cc3 */
  if (C.zf) goto L_125f9cc3;
L_125f9cac:;
  /* 125f9cac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9caf push ecx */
  push32((uint32_t)(ECX));
  /* 125f9cb0 call 0x125f65e0 */
  push32(0x125f9cb5u); f_125f65e0();
  /* 125f9cb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9cb8 push eax */
  push32((uint32_t)(EAX));
  /* 125f9cb9 call dword ptr [0x1261b300] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b300))), 0x125f9cbfu);
  /* 125f9cbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f9cc1 je 0x125f9ccc */
  if (C.zf) goto L_125f9ccc;
L_125f9cc3:;
  /* 125f9cc3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125f9cca jmp 0x125f9cd5 */
  goto L_125f9cd5;
L_125f9ccc:;
  /* 125f9ccc call dword ptr [0x1261b400] */
  call_ind((uint32_t)(r32((uint32_t)(0x1261b400))), 0x125f9cd2u);
  /* 125f9cd2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125f9cd5:;
  /* 125f9cd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9cd8 push edx */
  push32((uint32_t)(EDX));
  /* 125f9cd9 call 0x125f6500 */
  push32(0x125f9cdeu); f_125f6500();
  /* 125f9cde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9ce1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9ce4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125f9ce7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9cea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125f9ced imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125f9cf0 mov edx, dword ptr [eax*4 + 0x1261a7c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1261a7c0)));
  /* 125f9cf7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 125f9cfc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9d00 je 0x125f9d13 */
  if (C.zf) goto L_125f9d13;
  /* 125f9d02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125f9d05 push eax */
  push32((uint32_t)(EAX));
  /* 125f9d06 call 0x125f4ea0 */
  push32(0x125f9d0bu); f_125f4ea0();
  /* 125f9d0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9d0e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125f9d11 jmp 0x125f9d15 */
  goto L_125f9d15;
L_125f9d13:;
  /* 125f9d13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125f9d15:;
  /* 125f9d15 pop esi */
  ESI = (pop32());
  /* 125f9d16 mov esp, ebp */
  ESP = (EBP);
  /* 125f9d18 pop ebp */
  EBP = (pop32());
  /* 125f9d19 ret  */
  ESPCHK(0x125f9c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10019d20 @ 0x125f9d20 (146 bytes, 52 insns) */
void f_125f9d20(void) {
  FTRACE(0x125f9d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125f9d20 push ebp */
  push32((uint32_t)(EBP));
  /* 125f9d21 mov ebp, esp */
  EBP = (ESP);
  /* 125f9d23 push ebx */
  push32((uint32_t)(EBX));
  /* 125f9d24 push esi */
  push32((uint32_t)(ESI));
  /* 125f9d25 push edi */
  push32((uint32_t)(EDI));
L_125f9d26:;
  /* 125f9d26 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9d2a jne 0x125f9d4a */
  if (!C.zf) goto L_125f9d4a;
  /* 125f9d2c push 0x12614b40 */
  push32((uint32_t)(0x12614b40u));
  /* 125f9d31 push 0 */
  push32((uint32_t)(0x0u));
  /* 125f9d33 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 125f9d35 push 0x12615208 */
  push32((uint32_t)(0x12615208u));
  /* 125f9d3a push 2 */
  push32((uint32_t)(0x2u));
  /* 125f9d3c call 0x125ec130 */
  push32(0x125f9d41u); f_125ec130();
  /* 125f9d41 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9d44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125f9d47 jne 0x125f9d4a */
  if (!C.zf) goto L_125f9d4a;
  /* 125f9d49 int3  */
  x86_unimpl("int3 @ 0x125f9d49");
L_125f9d4a:;
  /* 125f9d4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125f9d4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125f9d4e jne 0x125f9d26 */
  if (!C.zf) goto L_125f9d26;
  /* 125f9d50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9d53 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125f9d56 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 125f9d5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125f9d5e je 0x125f9dad */
  if (C.zf) goto L_125f9dad;
  /* 125f9d60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9d63 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125f9d66 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 125f9d69 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125f9d6b je 0x125f9dad */
  if (C.zf) goto L_125f9dad;
  /* 125f9d6d push 2 */
  push32((uint32_t)(0x2u));
  /* 125f9d6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9d72 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125f9d75 push eax */
  push32((uint32_t)(EAX));
  /* 125f9d76 call 0x125edb00 */
  push32(0x125f9d7bu); f_125edb00();
  /* 125f9d7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125f9d7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9d81 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125f9d84 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 125f9d8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9d8d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 125f9d90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9d93 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 125f9d99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9d9c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 125f9da3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125f9da6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_125f9dad:;
  /* 125f9dad pop edi */
  EDI = (pop32());
  /* 125f9dae pop esi */
  ESI = (pop32());
  /* 125f9daf pop ebx */
  EBX = (pop32());
  /* 125f9db0 pop ebp */
  EBP = (pop32());
  /* 125f9db1 ret  */
  ESPCHK(0x125f9d20u, _esp0);
  ESP += 4; return;
}

