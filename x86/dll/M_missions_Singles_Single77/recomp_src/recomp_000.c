#include "recomp.h"

/* FUN_10001000 @ 0x11cb1000 (18 bytes, 7 insns) */
void f_11cb1000(void) {
  FTRACE(0x11cb1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb1000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11cb1004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11cb1005 jne 0x11cb100c */
  if (!C.zf) goto L_11cb100c;
  /* 11cb1007 call 0x11cb11fb */
  push32(0x11cb100cu); f_11cb11fb();
L_11cb100c:;
  /* 11cb100c push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb100e pop eax */
  EAX = (pop32());
  /* 11cb100f ret 0xc */
  ESPCHK(0x11cb1000u, _esp0);
  ESP += 16; return;
}

/* FUN_10001012 @ 0x11cb1012 (30 bytes, 15 insns) */
void f_11cb1012(void) {
  FTRACE(0x11cb1012u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb1012 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1013 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11cb1015:;
  /* 11cb1015 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1016 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11cb101a call dword ptr [0x11cb5150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5150))), 0x11cb1020u);
  /* 11cb1020 pop ecx */
  ECX = (pop32());
  /* 11cb1021 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb1023 pop ecx */
  ECX = (pop32());
  /* 11cb1024 jg 0x11cb102c */
  if ((!C.zf&&C.sf==C.of)) goto L_11cb102c;
  /* 11cb1026 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11cb1027 cmp esi, 7 */
  { uint32_t _a=(ESI),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb102a jl 0x11cb1015 */
  if ((C.sf!=C.of)) goto L_11cb1015;
L_11cb102c:;
  /* 11cb102c mov eax, esi */
  EAX = (ESI);
  /* 11cb102e pop esi */
  ESI = (pop32());
  /* 11cb102f ret  */
  ESPCHK(0x11cb1012u, _esp0);
  ESP += 4; return;
}

/* FUN_10001030 @ 0x11cb1030 (58 bytes, 22 insns) */
void f_11cb1030(void) {
  FTRACE(0x11cb1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb1030 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1031 mov ebp, esp */
  EBP = (ESP);
  /* 11cb1033 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1034 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11cb1037 call 0x11cb1012 */
  push32(0x11cb103cu); f_11cb1012();
  /* 11cb103c push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb103e mov esi, eax */
  ESI = (EAX);
  /* 11cb1040 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11cb1043 call dword ptr [0x11cb5144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5144))), 0x11cb1049u);
  /* 11cb1049 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb104b push esi */
  push32((uint32_t)(ESI));
  /* 11cb104c call dword ptr [0x11cb5148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5148))), 0x11cb1052u);
  /* 11cb1052 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11cb1055 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11cb1058 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11cb105b push esi */
  push32((uint32_t)(ESI));
  /* 11cb105c call dword ptr [0x11cb514c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb514c))), 0x11cb1062u);
  /* 11cb1062 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1065 mov eax, esi */
  EAX = (ESI);
  /* 11cb1067 pop esi */
  ESI = (pop32());
  /* 11cb1068 pop ebp */
  EBP = (pop32());
  /* 11cb1069 ret  */
  ESPCHK(0x11cb1030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000106a @ 0x11cb106a (24 bytes, 7 insns) */
void f_11cb106a(void) {
  FTRACE(0x11cb106au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb106a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb106c push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11cb1071 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11cb1075 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11cb1079 call 0x11cb1030 */
  push32(0x11cb107eu); f_11cb1030();
  /* 11cb107e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1081 ret  */
  ESPCHK(0x11cb106au, _esp0);
  ESP += 4; return;
}

/* FUN_10001082 @ 0x11cb1082 (23 bytes, 7 insns) */
void f_11cb1082(void) {
  FTRACE(0x11cb1082u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb1082 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1084 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11cb1088 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11cb108c push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11cb1090 call 0x11cb1030 */
  push32(0x11cb1095u); f_11cb1030();
  /* 11cb1095 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1098 ret  */
  ESPCHK(0x11cb1082u, _esp0);
  ESP += 4; return;
}

/* FUN_10001099 @ 0x11cb1099 (39 bytes, 13 insns) */
void f_11cb1099(void) {
  FTRACE(0x11cb1099u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb1099 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb109a mov ebp, esp */
  EBP = (ESP);
  /* 11cb109c push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11cb10a1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11cb10a4 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11cb10a7 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11cb10aa push 0x11cb6790 */
  push32((uint32_t)(0x11cb6790u));
  /* 11cb10af push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11cb10b2 call dword ptr [0x11cb5140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5140))), 0x11cb10b8u);
  /* 11cb10b8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cb10bb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb10be pop ebp */
  EBP = (pop32());
  /* 11cb10bf ret  */
  ESPCHK(0x11cb1099u, _esp0);
  ESP += 4; return;
}

/* FUN_100010c0 @ 0x11cb10c0 (74 bytes, 28 insns) */
void f_11cb10c0(void) {
  FTRACE(0x11cb10c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb10c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb10c1 push edi */
  push32((uint32_t)(EDI));
  /* 11cb10c2 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11cb10c6 call 0x11cb1012 */
  push32(0x11cb10cbu); f_11cb1012();
  /* 11cb10cb xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11cb10cd pop ecx */
  ECX = (pop32());
  /* 11cb10ce cmp dword ptr [0x11cb6868], edi */
  { uint32_t _a=(r32((uint32_t)(0x11cb6868))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb10d4 mov ebx, eax */
  EBX = (EAX);
  /* 11cb10d6 jle 0x11cb1105 */
  if ((C.zf||C.sf!=C.of)) goto L_11cb1105;
  /* 11cb10d8 push esi */
  push32((uint32_t)(ESI));
  /* 11cb10d9 mov esi, 0x11cb6740 */
  ESI = (0x11cb6740u);
L_11cb10de:;
  /* 11cb10de push ebx */
  push32((uint32_t)(EBX));
  /* 11cb10df push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 11cb10e3 push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 11cb10e7 push esi */
  push32((uint32_t)(ESI));
  /* 11cb10e8 call 0x11cb1099 */
  push32(0x11cb10edu); f_11cb1099();
  /* 11cb10ed push dword ptr [esp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x20))));
  /* 11cb10f1 push esi */
  push32((uint32_t)(ESI));
  /* 11cb10f2 call dword ptr [0x11cb513c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb513c))), 0x11cb10f8u);
  /* 11cb10f8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb10fb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11cb10fc cmp edi, dword ptr [0x11cb6868] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x11cb6868))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb1102 jl 0x11cb10de */
  if ((C.sf!=C.of)) goto L_11cb10de;
  /* 11cb1104 pop esi */
  ESI = (pop32());
L_11cb1105:;
  /* 11cb1105 mov eax, ebx */
  EAX = (EBX);
  /* 11cb1107 pop edi */
  EDI = (pop32());
  /* 11cb1108 pop ebx */
  EBX = (pop32());
  /* 11cb1109 ret  */
  ESPCHK(0x11cb10c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000110a @ 0x11cb110a (241 bytes, 106 insns) */
void f_11cb110a(void) {
  FTRACE(0x11cb110au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb110a push ebx */
  push32((uint32_t)(EBX));
  /* 11cb110b push ebp */
  push32((uint32_t)(EBP));
  /* 11cb110c push esi */
  push32((uint32_t)(ESI));
  /* 11cb110d push edi */
  push32((uint32_t)(EDI));
  /* 11cb110e push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11cb1112 call 0x11cb1012 */
  push32(0x11cb1117u); f_11cb1012();
  /* 11cb1117 mov edi, dword ptr [0x11cb512c] */
  EDI = (r32((uint32_t)(0x11cb512c)));
  /* 11cb111d mov esi, eax */
  ESI = (EAX);
  /* 11cb111f push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1121 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1122 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1124u);
  /* 11cb1124 mov ebp, dword ptr [0x11cb5130] */
  EBP = (r32((uint32_t)(0x11cb5130)));
  /* 11cb112a mov ebx, 0x2710 */
  EBX = (0x2710u);
  /* 11cb112f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1132 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb1134 jge 0x11cb1143 */
  if ((C.sf==C.of)) goto L_11cb1143;
  /* 11cb1136 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 11cb113b push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb113d push esi */
  push32((uint32_t)(ESI));
  /* 11cb113e call ebp */
  call_ind((uint32_t)(EBP), 0x11cb1140u);
  /* 11cb1140 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb1143:;
  /* 11cb1143 push 3 */
  push32((uint32_t)(0x3u));
  /* 11cb1145 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1146 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1148u);
  /* 11cb1148 pop ecx */
  ECX = (pop32());
  /* 11cb1149 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb114b pop ecx */
  ECX = (pop32());
  /* 11cb114c jge 0x11cb115b */
  if ((C.sf==C.of)) goto L_11cb115b;
  /* 11cb114e push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 11cb1153 push 3 */
  push32((uint32_t)(0x3u));
  /* 11cb1155 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1156 call ebp */
  call_ind((uint32_t)(EBP), 0x11cb1158u);
  /* 11cb1158 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb115b:;
  /* 11cb115b push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb115d push esi */
  push32((uint32_t)(ESI));
  /* 11cb115e call edi */
  call_ind((uint32_t)(EDI), 0x11cb1160u);
  /* 11cb1160 pop ecx */
  ECX = (pop32());
  /* 11cb1161 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb1163 pop ecx */
  ECX = (pop32());
  /* 11cb1164 jge 0x11cb1173 */
  if ((C.sf==C.of)) goto L_11cb1173;
  /* 11cb1166 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 11cb116b push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb116d push esi */
  push32((uint32_t)(ESI));
  /* 11cb116e call ebp */
  call_ind((uint32_t)(EBP), 0x11cb1170u);
  /* 11cb1170 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb1173:;
  /* 11cb1173 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb1175 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1176 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1178u);
  /* 11cb1178 pop ecx */
  ECX = (pop32());
  /* 11cb1179 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb117b pop ecx */
  ECX = (pop32());
  /* 11cb117c jge 0x11cb118b */
  if ((C.sf==C.of)) goto L_11cb118b;
  /* 11cb117e push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 11cb1183 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb1185 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1186 call ebp */
  call_ind((uint32_t)(EBP), 0x11cb1188u);
  /* 11cb1188 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb118b:;
  /* 11cb118b push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb118d push esi */
  push32((uint32_t)(ESI));
  /* 11cb118e call edi */
  call_ind((uint32_t)(EDI), 0x11cb1190u);
  /* 11cb1190 pop ecx */
  ECX = (pop32());
  /* 11cb1191 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb1193 pop ecx */
  ECX = (pop32());
  /* 11cb1194 jge 0x11cb11a3 */
  if ((C.sf==C.of)) goto L_11cb11a3;
  /* 11cb1196 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 11cb119b push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb119d push esi */
  push32((uint32_t)(ESI));
  /* 11cb119e call ebp */
  call_ind((uint32_t)(EBP), 0x11cb11a0u);
  /* 11cb11a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb11a3:;
  /* 11cb11a3 push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb11a5 push esi */
  push32((uint32_t)(ESI));
  /* 11cb11a6 call edi */
  call_ind((uint32_t)(EDI), 0x11cb11a8u);
  /* 11cb11a8 pop ecx */
  ECX = (pop32());
  /* 11cb11a9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb11ab pop ecx */
  ECX = (pop32());
  /* 11cb11ac jge 0x11cb11bb */
  if ((C.sf==C.of)) goto L_11cb11bb;
  /* 11cb11ae push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 11cb11b3 push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb11b5 push esi */
  push32((uint32_t)(ESI));
  /* 11cb11b6 call ebp */
  call_ind((uint32_t)(EBP), 0x11cb11b8u);
  /* 11cb11b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb11bb:;
  /* 11cb11bb mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11cb11bf push esi */
  push32((uint32_t)(ESI));
  /* 11cb11c0 call dword ptr [0x11cb5134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5134))), 0x11cb11c6u);
  /* 11cb11c6 cmp eax, dword ptr [esp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb11ca pop ecx */
  ECX = (pop32());
  /* 11cb11cb jge 0x11cb11f4 */
  if ((C.sf==C.of)) goto L_11cb11f4;
  /* 11cb11cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb11cf push esi */
  push32((uint32_t)(ESI));
  /* 11cb11d0 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11cb11d4 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11cb11d8 call dword ptr [0x11cb5138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5138))), 0x11cb11deu);
  /* 11cb11de push dword ptr [esp + 0x34] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x34))));
  /* 11cb11e2 push dword ptr [esp + 0x34] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x34))));
  /* 11cb11e6 push esi */
  push32((uint32_t)(ESI));
  /* 11cb11e7 call 0x11cb1082 */
  push32(0x11cb11ecu); f_11cb1082();
  /* 11cb11ec add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb11ef push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb11f1 pop eax */
  EAX = (pop32());
  /* 11cb11f2 jmp 0x11cb11f6 */
  goto L_11cb11f6;
L_11cb11f4:;
  /* 11cb11f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cb11f6:;
  /* 11cb11f6 pop edi */
  EDI = (pop32());
  /* 11cb11f7 pop esi */
  ESI = (pop32());
  /* 11cb11f8 pop ebp */
  EBP = (pop32());
  /* 11cb11f9 pop ebx */
  EBX = (pop32());
  /* 11cb11fa ret  */
  ESPCHK(0x11cb110au, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x11cb11fb (1132 bytes, 324 insns) */
void f_11cb11fb(void) {
  FTRACE(0x11cb11fbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb11fb push ebx */
  push32((uint32_t)(EBX));
  /* 11cb11fc push ebp */
  push32((uint32_t)(EBP));
  /* 11cb11fd push esi */
  push32((uint32_t)(ESI));
  /* 11cb11fe push edi */
  push32((uint32_t)(EDI));
  /* 11cb11ff mov edi, dword ptr [0x11cb5110] */
  EDI = (r32((uint32_t)(0x11cb5110)));
  /* 11cb1205 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb1207 pop ebp */
  EBP = (pop32());
  /* 11cb1208 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1209 push 0x11cb66d0 */
  push32((uint32_t)(0x11cb66d0u));
  /* 11cb120e call edi */
  call_ind((uint32_t)(EDI), 0x11cb1210u);
  /* 11cb1210 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1211 push 0x11cb6868 */
  push32((uint32_t)(0x11cb6868u));
  /* 11cb1216 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1218u);
  /* 11cb1218 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1219 push 0x11cb68f8 */
  push32((uint32_t)(0x11cb68f8u));
  /* 11cb121e call edi */
  call_ind((uint32_t)(EDI), 0x11cb1220u);
  /* 11cb1220 mov esi, dword ptr [0x11cb5114] */
  ESI = (r32((uint32_t)(0x11cb5114)));
  /* 11cb1226 mov ebx, 0x11cb61e8 */
  EBX = (0x11cb61e8u);
  /* 11cb122b push ebx */
  push32((uint32_t)(EBX));
  /* 11cb122c push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb122e call esi */
  call_ind((uint32_t)(ESI), 0x11cb1230u);
  /* 11cb1230 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb1231 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb1233 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1235u);
  /* 11cb1235 push 0x11cb61dc */
  push32((uint32_t)(0x11cb61dcu));
  /* 11cb123a push ebp */
  push32((uint32_t)(EBP));
  /* 11cb123b call esi */
  call_ind((uint32_t)(ESI), 0x11cb123du);
  /* 11cb123d push ebx */
  push32((uint32_t)(EBX));
  /* 11cb123e push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb1240 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1242u);
  /* 11cb1242 mov esi, dword ptr [0x11cb5118] */
  ESI = (r32((uint32_t)(0x11cb5118)));
  /* 11cb1248 push 0x11cb61d4 */
  push32((uint32_t)(0x11cb61d4u));
  /* 11cb124d push 0x11cb68f0 */
  push32((uint32_t)(0x11cb68f0u));
  /* 11cb1252 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1254u);
  /* 11cb1254 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1257 push 0x11cb61d0 */
  push32((uint32_t)(0x11cb61d0u));
  /* 11cb125c push 0x11cb6870 */
  push32((uint32_t)(0x11cb6870u));
  /* 11cb1261 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1263u);
  /* 11cb1263 push 0x11cb61cc */
  push32((uint32_t)(0x11cb61ccu));
  /* 11cb1268 push 0x11cb6878 */
  push32((uint32_t)(0x11cb6878u));
  /* 11cb126d call esi */
  call_ind((uint32_t)(ESI), 0x11cb126fu);
  /* 11cb126f push 0x11cb61c8 */
  push32((uint32_t)(0x11cb61c8u));
  /* 11cb1274 push 0x11cb6778 */
  push32((uint32_t)(0x11cb6778u));
  /* 11cb1279 call esi */
  call_ind((uint32_t)(ESI), 0x11cb127bu);
  /* 11cb127b push 0x11cb61c4 */
  push32((uint32_t)(0x11cb61c4u));
  /* 11cb1280 push 0x11cb6780 */
  push32((uint32_t)(0x11cb6780u));
  /* 11cb1285 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1287u);
  /* 11cb1287 push 0x11cb61c0 */
  push32((uint32_t)(0x11cb61c0u));
  /* 11cb128c push 0x11cb6788 */
  push32((uint32_t)(0x11cb6788u));
  /* 11cb1291 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1293u);
  /* 11cb1293 push 0x11cb61bc */
  push32((uint32_t)(0x11cb61bcu));
  /* 11cb1298 push 0x11cb6798 */
  push32((uint32_t)(0x11cb6798u));
  /* 11cb129d call esi */
  call_ind((uint32_t)(ESI), 0x11cb129fu);
  /* 11cb129f push 0x11cb61b8 */
  push32((uint32_t)(0x11cb61b8u));
  /* 11cb12a4 push 0x11cb67a0 */
  push32((uint32_t)(0x11cb67a0u));
  /* 11cb12a9 call esi */
  call_ind((uint32_t)(ESI), 0x11cb12abu);
  /* 11cb12ab push 0x11cb61b4 */
  push32((uint32_t)(0x11cb61b4u));
  /* 11cb12b0 push 0x11cb67a8 */
  push32((uint32_t)(0x11cb67a8u));
  /* 11cb12b5 call esi */
  call_ind((uint32_t)(ESI), 0x11cb12b7u);
  /* 11cb12b7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb12ba push 0x11cb61b0 */
  push32((uint32_t)(0x11cb61b0u));
  /* 11cb12bf push 0x11cb67b0 */
  push32((uint32_t)(0x11cb67b0u));
  /* 11cb12c4 call esi */
  call_ind((uint32_t)(ESI), 0x11cb12c6u);
  /* 11cb12c6 push 0x11cb61ac */
  push32((uint32_t)(0x11cb61acu));
  /* 11cb12cb push 0x11cb67b8 */
  push32((uint32_t)(0x11cb67b8u));
  /* 11cb12d0 call esi */
  call_ind((uint32_t)(ESI), 0x11cb12d2u);
  /* 11cb12d2 push 0x11cb61a8 */
  push32((uint32_t)(0x11cb61a8u));
  /* 11cb12d7 push 0x11cb67c0 */
  push32((uint32_t)(0x11cb67c0u));
  /* 11cb12dc call esi */
  call_ind((uint32_t)(ESI), 0x11cb12deu);
  /* 11cb12de push 0x11cb61a4 */
  push32((uint32_t)(0x11cb61a4u));
  /* 11cb12e3 push 0x11cb67c8 */
  push32((uint32_t)(0x11cb67c8u));
  /* 11cb12e8 call esi */
  call_ind((uint32_t)(ESI), 0x11cb12eau);
  /* 11cb12ea push 0x11cb61a0 */
  push32((uint32_t)(0x11cb61a0u));
  /* 11cb12ef push 0x11cb6880 */
  push32((uint32_t)(0x11cb6880u));
  /* 11cb12f4 call esi */
  call_ind((uint32_t)(ESI), 0x11cb12f6u);
  /* 11cb12f6 push 0x11cb619c */
  push32((uint32_t)(0x11cb619cu));
  /* 11cb12fb push 0x11cb6888 */
  push32((uint32_t)(0x11cb6888u));
  /* 11cb1300 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1302u);
  /* 11cb1302 push 0x11cb6198 */
  push32((uint32_t)(0x11cb6198u));
  /* 11cb1307 push 0x11cb6890 */
  push32((uint32_t)(0x11cb6890u));
  /* 11cb130c call esi */
  call_ind((uint32_t)(ESI), 0x11cb130eu);
  /* 11cb130e push 0x11cb6194 */
  push32((uint32_t)(0x11cb6194u));
  /* 11cb1313 push 0x11cb6898 */
  push32((uint32_t)(0x11cb6898u));
  /* 11cb1318 call esi */
  call_ind((uint32_t)(ESI), 0x11cb131au);
  /* 11cb131a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb131d push 0x11cb6190 */
  push32((uint32_t)(0x11cb6190u));
  /* 11cb1322 push 0x11cb68a0 */
  push32((uint32_t)(0x11cb68a0u));
  /* 11cb1327 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1329u);
  /* 11cb1329 push 0x11cb618c */
  push32((uint32_t)(0x11cb618cu));
  /* 11cb132e push 0x11cb68a8 */
  push32((uint32_t)(0x11cb68a8u));
  /* 11cb1333 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1335u);
  /* 11cb1335 push 0x11cb6188 */
  push32((uint32_t)(0x11cb6188u));
  /* 11cb133a push 0x11cb68b0 */
  push32((uint32_t)(0x11cb68b0u));
  /* 11cb133f call esi */
  call_ind((uint32_t)(ESI), 0x11cb1341u);
  /* 11cb1341 push 0x11cb6184 */
  push32((uint32_t)(0x11cb6184u));
  /* 11cb1346 push 0x11cb68b8 */
  push32((uint32_t)(0x11cb68b8u));
  /* 11cb134b call esi */
  call_ind((uint32_t)(ESI), 0x11cb134du);
  /* 11cb134d push 0x11cb6180 */
  push32((uint32_t)(0x11cb6180u));
  /* 11cb1352 push 0x11cb68c0 */
  push32((uint32_t)(0x11cb68c0u));
  /* 11cb1357 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1359u);
  /* 11cb1359 push 0x11cb617c */
  push32((uint32_t)(0x11cb617cu));
  /* 11cb135e push 0x11cb68c8 */
  push32((uint32_t)(0x11cb68c8u));
  /* 11cb1363 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1365u);
  /* 11cb1365 push 0x11cb6178 */
  push32((uint32_t)(0x11cb6178u));
  /* 11cb136a push 0x11cb68d0 */
  push32((uint32_t)(0x11cb68d0u));
  /* 11cb136f call esi */
  call_ind((uint32_t)(ESI), 0x11cb1371u);
  /* 11cb1371 push 0x11cb6174 */
  push32((uint32_t)(0x11cb6174u));
  /* 11cb1376 push 0x11cb68d8 */
  push32((uint32_t)(0x11cb68d8u));
  /* 11cb137b call esi */
  call_ind((uint32_t)(ESI), 0x11cb137du);
  /* 11cb137d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1380 push 0x11cb616c */
  push32((uint32_t)(0x11cb616cu));
  /* 11cb1385 push 0x11cb6708 */
  push32((uint32_t)(0x11cb6708u));
  /* 11cb138a call esi */
  call_ind((uint32_t)(ESI), 0x11cb138cu);
  /* 11cb138c push 0x11cb6164 */
  push32((uint32_t)(0x11cb6164u));
  /* 11cb1391 push 0x11cb6710 */
  push32((uint32_t)(0x11cb6710u));
  /* 11cb1396 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1398u);
  /* 11cb1398 push 0x11cb615c */
  push32((uint32_t)(0x11cb615cu));
  /* 11cb139d push 0x11cb6718 */
  push32((uint32_t)(0x11cb6718u));
  /* 11cb13a2 call esi */
  call_ind((uint32_t)(ESI), 0x11cb13a4u);
  /* 11cb13a4 push 0x11cb6154 */
  push32((uint32_t)(0x11cb6154u));
  /* 11cb13a9 push 0x11cb6720 */
  push32((uint32_t)(0x11cb6720u));
  /* 11cb13ae call esi */
  call_ind((uint32_t)(ESI), 0x11cb13b0u);
  /* 11cb13b0 push 0x11cb614c */
  push32((uint32_t)(0x11cb614cu));
  /* 11cb13b5 push 0x11cb6728 */
  push32((uint32_t)(0x11cb6728u));
  /* 11cb13ba call esi */
  call_ind((uint32_t)(ESI), 0x11cb13bcu);
  /* 11cb13bc push 0x11cb6144 */
  push32((uint32_t)(0x11cb6144u));
  /* 11cb13c1 push 0x11cb6730 */
  push32((uint32_t)(0x11cb6730u));
  /* 11cb13c6 call esi */
  call_ind((uint32_t)(ESI), 0x11cb13c8u);
  /* 11cb13c8 push 0x11cb613c */
  push32((uint32_t)(0x11cb613cu));
  /* 11cb13cd push 0x11cb6738 */
  push32((uint32_t)(0x11cb6738u));
  /* 11cb13d2 call esi */
  call_ind((uint32_t)(ESI), 0x11cb13d4u);
  /* 11cb13d4 push 0x11cb6134 */
  push32((uint32_t)(0x11cb6134u));
  /* 11cb13d9 push 0x11cb66c8 */
  push32((uint32_t)(0x11cb66c8u));
  /* 11cb13de call esi */
  call_ind((uint32_t)(ESI), 0x11cb13e0u);
  /* 11cb13e0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb13e3 push 0x11cb612c */
  push32((uint32_t)(0x11cb612cu));
  /* 11cb13e8 push 0x11cb66c0 */
  push32((uint32_t)(0x11cb66c0u));
  /* 11cb13ed call esi */
  call_ind((uint32_t)(ESI), 0x11cb13efu);
  /* 11cb13ef mov esi, dword ptr [0x11cb511c] */
  ESI = (r32((uint32_t)(0x11cb511c)));
  /* 11cb13f5 push 0x11cb6128 */
  push32((uint32_t)(0x11cb6128u));
  /* 11cb13fa push 0x11cb6770 */
  push32((uint32_t)(0x11cb6770u));
  /* 11cb13ff call esi */
  call_ind((uint32_t)(ESI), 0x11cb1401u);
  /* 11cb1401 push 0x11cb6124 */
  push32((uint32_t)(0x11cb6124u));
  /* 11cb1406 push 0x11cb6768 */
  push32((uint32_t)(0x11cb6768u));
  /* 11cb140b call esi */
  call_ind((uint32_t)(ESI), 0x11cb140du);
  /* 11cb140d push 0x11cb611c */
  push32((uint32_t)(0x11cb611cu));
  /* 11cb1412 push 0x11cb6838 */
  push32((uint32_t)(0x11cb6838u));
  /* 11cb1417 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1419u);
  /* 11cb1419 push 0x11cb6118 */
  push32((uint32_t)(0x11cb6118u));
  /* 11cb141e push 0x11cb67e0 */
  push32((uint32_t)(0x11cb67e0u));
  /* 11cb1423 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1425u);
  /* 11cb1425 push 0x11cb6110 */
  push32((uint32_t)(0x11cb6110u));
  /* 11cb142a push 0x11cb66e0 */
  push32((uint32_t)(0x11cb66e0u));
  /* 11cb142f call esi */
  call_ind((uint32_t)(ESI), 0x11cb1431u);
  /* 11cb1431 push 0x11cb6108 */
  push32((uint32_t)(0x11cb6108u));
  /* 11cb1436 push 0x11cb66d8 */
  push32((uint32_t)(0x11cb66d8u));
  /* 11cb143b call esi */
  call_ind((uint32_t)(ESI), 0x11cb143du);
  /* 11cb143d push 0x11cb6100 */
  push32((uint32_t)(0x11cb6100u));
  /* 11cb1442 push 0x11cb66f8 */
  push32((uint32_t)(0x11cb66f8u));
  /* 11cb1447 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1449u);
  /* 11cb1449 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb144c push 0x11cb60f8 */
  push32((uint32_t)(0x11cb60f8u));
  /* 11cb1451 push 0x11cb6700 */
  push32((uint32_t)(0x11cb6700u));
  /* 11cb1456 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1458u);
  /* 11cb1458 mov ebx, dword ptr [0x11cb5120] */
  EBX = (r32((uint32_t)(0x11cb5120)));
  /* 11cb145e push 0x11cb60e8 */
  push32((uint32_t)(0x11cb60e8u));
  /* 11cb1463 push 0x11cb68e0 */
  push32((uint32_t)(0x11cb68e0u));
  /* 11cb1468 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb146au);
  /* 11cb146a push 0x11cb60d4 */
  push32((uint32_t)(0x11cb60d4u));
  /* 11cb146f push 0x11cb66a8 */
  push32((uint32_t)(0x11cb66a8u));
  /* 11cb1474 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb1476u);
  /* 11cb1476 push 0x11cb60c0 */
  push32((uint32_t)(0x11cb60c0u));
  /* 11cb147b push 0x11cb6840 */
  push32((uint32_t)(0x11cb6840u));
  /* 11cb1480 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb1482u);
  /* 11cb1482 push 0x11cb60a8 */
  push32((uint32_t)(0x11cb60a8u));
  /* 11cb1487 push 0x11cb6830 */
  push32((uint32_t)(0x11cb6830u));
  /* 11cb148c call ebx */
  call_ind((uint32_t)(EBX), 0x11cb148eu);
  /* 11cb148e push 0x11cb6094 */
  push32((uint32_t)(0x11cb6094u));
  /* 11cb1493 push 0x11cb68e8 */
  push32((uint32_t)(0x11cb68e8u));
  /* 11cb1498 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb149au);
  /* 11cb149a mov esi, dword ptr [0x11cb5124] */
  ESI = (r32((uint32_t)(0x11cb5124)));
  /* 11cb14a0 push 0x11cb67e8 */
  push32((uint32_t)(0x11cb67e8u));
  /* 11cb14a5 call esi */
  call_ind((uint32_t)(ESI), 0x11cb14a7u);
  /* 11cb14a7 push 0x11cb67f0 */
  push32((uint32_t)(0x11cb67f0u));
  /* 11cb14ac call esi */
  call_ind((uint32_t)(ESI), 0x11cb14aeu);
  /* 11cb14ae push 0x11cb67f8 */
  push32((uint32_t)(0x11cb67f8u));
  /* 11cb14b3 call esi */
  call_ind((uint32_t)(ESI), 0x11cb14b5u);
  /* 11cb14b5 push 0x11cb6800 */
  push32((uint32_t)(0x11cb6800u));
  /* 11cb14ba call esi */
  call_ind((uint32_t)(ESI), 0x11cb14bcu);
  /* 11cb14bc add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb14bf push 0x11cb6808 */
  push32((uint32_t)(0x11cb6808u));
  /* 11cb14c4 call esi */
  call_ind((uint32_t)(ESI), 0x11cb14c6u);
  /* 11cb14c6 mov dword ptr [esp], 0x11cb6810 */
  w32((uint32_t)(ESP), (0x11cb6810u));
  /* 11cb14cd call esi */
  call_ind((uint32_t)(ESI), 0x11cb14cfu);
  /* 11cb14cf mov dword ptr [esp], 0x11cb6818 */
  w32((uint32_t)(ESP), (0x11cb6818u));
  /* 11cb14d6 call esi */
  call_ind((uint32_t)(ESI), 0x11cb14d8u);
  /* 11cb14d8 mov dword ptr [esp], 0x11cb6820 */
  w32((uint32_t)(ESP), (0x11cb6820u));
  /* 11cb14df call esi */
  call_ind((uint32_t)(ESI), 0x11cb14e1u);
  /* 11cb14e1 mov dword ptr [esp], 0x11cb6828 */
  w32((uint32_t)(ESP), (0x11cb6828u));
  /* 11cb14e8 call esi */
  call_ind((uint32_t)(ESI), 0x11cb14eau);
  /* 11cb14ea mov dword ptr [esp], 0x11cb6680 */
  w32((uint32_t)(ESP), (0x11cb6680u));
  /* 11cb14f1 call esi */
  call_ind((uint32_t)(ESI), 0x11cb14f3u);
  /* 11cb14f3 mov dword ptr [esp], 0x11cb6688 */
  w32((uint32_t)(ESP), (0x11cb6688u));
  /* 11cb14fa call esi */
  call_ind((uint32_t)(ESI), 0x11cb14fcu);
  /* 11cb14fc mov dword ptr [esp], 0x11cb6690 */
  w32((uint32_t)(ESP), (0x11cb6690u));
  /* 11cb1503 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1505u);
  /* 11cb1505 mov dword ptr [esp], 0x11cb6698 */
  w32((uint32_t)(ESP), (0x11cb6698u));
  /* 11cb150c call esi */
  call_ind((uint32_t)(ESI), 0x11cb150eu);
  /* 11cb150e mov dword ptr [esp], 0x11cb66a0 */
  w32((uint32_t)(ESP), (0x11cb66a0u));
  /* 11cb1515 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1517u);
  /* 11cb1517 mov dword ptr [esp], 0x11cb66b0 */
  w32((uint32_t)(ESP), (0x11cb66b0u));
  /* 11cb151e call esi */
  call_ind((uint32_t)(ESI), 0x11cb1520u);
  /* 11cb1520 mov dword ptr [esp], 0x11cb66b8 */
  w32((uint32_t)(ESP), (0x11cb66b8u));
  /* 11cb1527 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1529u);
  /* 11cb1529 push 8 */
  push32((uint32_t)(0x8u));
  /* 11cb152b pop ebp */
  EBP = (pop32());
  /* 11cb152c push ebp */
  push32((uint32_t)(EBP));
  /* 11cb152d push 0x11cb67e8 */
  push32((uint32_t)(0x11cb67e8u));
  /* 11cb1532 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1534u);
  /* 11cb1534 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1535 push 0x11cb67f0 */
  push32((uint32_t)(0x11cb67f0u));
  /* 11cb153a call edi */
  call_ind((uint32_t)(EDI), 0x11cb153cu);
  /* 11cb153c push ebp */
  push32((uint32_t)(EBP));
  /* 11cb153d push 0x11cb67f8 */
  push32((uint32_t)(0x11cb67f8u));
  /* 11cb1542 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1544u);
  /* 11cb1544 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1545 push 0x11cb6800 */
  push32((uint32_t)(0x11cb6800u));
  /* 11cb154a call edi */
  call_ind((uint32_t)(EDI), 0x11cb154cu);
  /* 11cb154c push ebp */
  push32((uint32_t)(EBP));
  /* 11cb154d push 0x11cb6808 */
  push32((uint32_t)(0x11cb6808u));
  /* 11cb1552 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1554u);
  /* 11cb1554 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1555 push 0x11cb6810 */
  push32((uint32_t)(0x11cb6810u));
  /* 11cb155a call edi */
  call_ind((uint32_t)(EDI), 0x11cb155cu);
  /* 11cb155c push ebp */
  push32((uint32_t)(EBP));
  /* 11cb155d push 0x11cb6818 */
  push32((uint32_t)(0x11cb6818u));
  /* 11cb1562 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1564u);
  /* 11cb1564 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1565 push 0x11cb6820 */
  push32((uint32_t)(0x11cb6820u));
  /* 11cb156a call edi */
  call_ind((uint32_t)(EDI), 0x11cb156cu);
  /* 11cb156c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb156f push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1570 push 0x11cb6828 */
  push32((uint32_t)(0x11cb6828u));
  /* 11cb1575 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1577u);
  /* 11cb1577 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1578 push 0x11cb6680 */
  push32((uint32_t)(0x11cb6680u));
  /* 11cb157d call edi */
  call_ind((uint32_t)(EDI), 0x11cb157fu);
  /* 11cb157f push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1580 push 0x11cb6688 */
  push32((uint32_t)(0x11cb6688u));
  /* 11cb1585 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1587u);
  /* 11cb1587 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1588 push 0x11cb6690 */
  push32((uint32_t)(0x11cb6690u));
  /* 11cb158d call edi */
  call_ind((uint32_t)(EDI), 0x11cb158fu);
  /* 11cb158f push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1590 push 0x11cb6698 */
  push32((uint32_t)(0x11cb6698u));
  /* 11cb1595 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1597u);
  /* 11cb1597 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1598 push 0x11cb66a0 */
  push32((uint32_t)(0x11cb66a0u));
  /* 11cb159d call edi */
  call_ind((uint32_t)(EDI), 0x11cb159fu);
  /* 11cb159f push ebp */
  push32((uint32_t)(EBP));
  /* 11cb15a0 push 0x11cb66b0 */
  push32((uint32_t)(0x11cb66b0u));
  /* 11cb15a5 call edi */
  call_ind((uint32_t)(EDI), 0x11cb15a7u);
  /* 11cb15a7 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb15a8 push 0x11cb66b8 */
  push32((uint32_t)(0x11cb66b8u));
  /* 11cb15ad call edi */
  call_ind((uint32_t)(EDI), 0x11cb15afu);
  /* 11cb15af add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb15b2 push 0x11cb6080 */
  push32((uint32_t)(0x11cb6080u));
  /* 11cb15b7 push 0x11cb66e8 */
  push32((uint32_t)(0x11cb66e8u));
  /* 11cb15bc call ebx */
  call_ind((uint32_t)(EBX), 0x11cb15beu);
  /* 11cb15be push 0x11cb606c */
  push32((uint32_t)(0x11cb606cu));
  /* 11cb15c3 push 0x11cb67d8 */
  push32((uint32_t)(0x11cb67d8u));
  /* 11cb15c8 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb15cau);
  /* 11cb15ca push 0x11cb6058 */
  push32((uint32_t)(0x11cb6058u));
  /* 11cb15cf push 0x11cb6848 */
  push32((uint32_t)(0x11cb6848u));
  /* 11cb15d4 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb15d6u);
  /* 11cb15d6 push 0x11cb6048 */
  push32((uint32_t)(0x11cb6048u));
  /* 11cb15db push 0x11cb6858 */
  push32((uint32_t)(0x11cb6858u));
  /* 11cb15e0 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb15e2u);
  /* 11cb15e2 push 0x11cb6038 */
  push32((uint32_t)(0x11cb6038u));
  /* 11cb15e7 push 0x11cb6850 */
  push32((uint32_t)(0x11cb6850u));
  /* 11cb15ec call ebx */
  call_ind((uint32_t)(EBX), 0x11cb15eeu);
  /* 11cb15ee push 0x11cb6740 */
  push32((uint32_t)(0x11cb6740u));
  /* 11cb15f3 call esi */
  call_ind((uint32_t)(ESI), 0x11cb15f5u);
  /* 11cb15f5 push 0x11cb6748 */
  push32((uint32_t)(0x11cb6748u));
  /* 11cb15fa call esi */
  call_ind((uint32_t)(ESI), 0x11cb15fcu);
  /* 11cb15fc push 0x11cb6750 */
  push32((uint32_t)(0x11cb6750u));
  /* 11cb1601 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1603u);
  /* 11cb1603 push 0x11cb6758 */
  push32((uint32_t)(0x11cb6758u));
  /* 11cb1608 call esi */
  call_ind((uint32_t)(ESI), 0x11cb160au);
  /* 11cb160a push 0x11cb6760 */
  push32((uint32_t)(0x11cb6760u));
  /* 11cb160f call esi */
  call_ind((uint32_t)(ESI), 0x11cb1611u);
  /* 11cb1611 push 0x11cb67d0 */
  push32((uint32_t)(0x11cb67d0u));
  /* 11cb1616 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1618u);
  /* 11cb1618 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb161b mov ebx, 0x11cb66f0 */
  EBX = (0x11cb66f0u);
  /* 11cb1620 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb1621 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1623u);
  /* 11cb1623 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1624 push 0x11cb6740 */
  push32((uint32_t)(0x11cb6740u));
  /* 11cb1629 call edi */
  call_ind((uint32_t)(EDI), 0x11cb162bu);
  /* 11cb162b push ebp */
  push32((uint32_t)(EBP));
  /* 11cb162c push 0x11cb6748 */
  push32((uint32_t)(0x11cb6748u));
  /* 11cb1631 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1633u);
  /* 11cb1633 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1634 push 0x11cb6750 */
  push32((uint32_t)(0x11cb6750u));
  /* 11cb1639 call edi */
  call_ind((uint32_t)(EDI), 0x11cb163bu);
  /* 11cb163b push ebp */
  push32((uint32_t)(EBP));
  /* 11cb163c push 0x11cb6758 */
  push32((uint32_t)(0x11cb6758u));
  /* 11cb1641 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1643u);
  /* 11cb1643 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1644 push 0x11cb6760 */
  push32((uint32_t)(0x11cb6760u));
  /* 11cb1649 call edi */
  call_ind((uint32_t)(EDI), 0x11cb164bu);
  /* 11cb164b push ebp */
  push32((uint32_t)(EBP));
  /* 11cb164c push ebx */
  push32((uint32_t)(EBX));
  /* 11cb164d call edi */
  call_ind((uint32_t)(EDI), 0x11cb164fu);
  /* 11cb164f push 0x11cb6030 */
  push32((uint32_t)(0x11cb6030u));
  /* 11cb1654 push 0x11cb6790 */
  push32((uint32_t)(0x11cb6790u));
  /* 11cb1659 call dword ptr [0x11cb5128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5128))), 0x11cb165fu);
  /* 11cb165f add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1662 pop edi */
  EDI = (pop32());
  /* 11cb1663 pop esi */
  ESI = (pop32());
  /* 11cb1664 pop ebp */
  EBP = (pop32());
  /* 11cb1665 pop ebx */
  EBX = (pop32());
  /* 11cb1666 ret  */
  ESPCHK(0x11cb11fbu, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11cb1667 (3294 bytes, 1247 insns) */
void f_11cb1667(void) {
  FTRACE(0x11cb1667u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb1667 push ecx */
  push32((uint32_t)(ECX));
  /* 11cb1668 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb1669 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb166a push esi */
  push32((uint32_t)(ESI));
  /* 11cb166b push edi */
  push32((uint32_t)(EDI));
  /* 11cb166c push 0xa */
  push32((uint32_t)(0xau));
  /* 11cb166e call dword ptr [0x11cb50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50b0))), 0x11cb1674u);
  /* 11cb1674 mov ebx, dword ptr [0x11cb512c] */
  EBX = (r32((uint32_t)(0x11cb512c)));
  /* 11cb167a pop ecx */
  ECX = (pop32());
  /* 11cb167b push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb167d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb167f pop ebp */
  EBP = (pop32());
  /* 11cb1680 je 0x11cb17e1 */
  if (C.zf) goto L_11cb17e1;
  /* 11cb1686 push 3 */
  push32((uint32_t)(0x3u));
  /* 11cb1688 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1689 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb168bu);
  /* 11cb168b mov edi, dword ptr [0x11cb50b4] */
  EDI = (r32((uint32_t)(0x11cb50b4)));
  /* 11cb1691 mov esi, 0x3e8 */
  ESI = (0x3e8u);
  /* 11cb1696 pop ecx */
  ECX = (pop32());
  /* 11cb1697 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb1699 pop ecx */
  ECX = (pop32());
  /* 11cb169a jge 0x11cb16a5 */
  if ((C.sf==C.of)) goto L_11cb16a5;
  /* 11cb169c push esi */
  push32((uint32_t)(ESI));
  /* 11cb169d push 3 */
  push32((uint32_t)(0x3u));
  /* 11cb169f push ebp */
  push32((uint32_t)(EBP));
  /* 11cb16a0 call edi */
  call_ind((uint32_t)(EDI), 0x11cb16a2u);
  /* 11cb16a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb16a5:;
  /* 11cb16a5 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb16a6 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb16a7 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb16a9u);
  /* 11cb16a9 pop ecx */
  ECX = (pop32());
  /* 11cb16aa cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb16ac pop ecx */
  ECX = (pop32());
  /* 11cb16ad jge 0x11cb16b7 */
  if ((C.sf==C.of)) goto L_11cb16b7;
  /* 11cb16af push esi */
  push32((uint32_t)(ESI));
  /* 11cb16b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb16b1 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb16b2 call edi */
  call_ind((uint32_t)(EDI), 0x11cb16b4u);
  /* 11cb16b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb16b7:;
  /* 11cb16b7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb16b9 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb16ba call ebx */
  call_ind((uint32_t)(EBX), 0x11cb16bcu);
  /* 11cb16bc pop ecx */
  ECX = (pop32());
  /* 11cb16bd cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb16bf pop ecx */
  ECX = (pop32());
  /* 11cb16c0 jge 0x11cb16cb */
  if ((C.sf==C.of)) goto L_11cb16cb;
  /* 11cb16c2 push esi */
  push32((uint32_t)(ESI));
  /* 11cb16c3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb16c5 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb16c6 call edi */
  call_ind((uint32_t)(EDI), 0x11cb16c8u);
  /* 11cb16c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb16cb:;
  /* 11cb16cb push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb16cd push ebp */
  push32((uint32_t)(EBP));
  /* 11cb16ce call ebx */
  call_ind((uint32_t)(EBX), 0x11cb16d0u);
  /* 11cb16d0 pop ecx */
  ECX = (pop32());
  /* 11cb16d1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb16d3 pop ecx */
  ECX = (pop32());
  /* 11cb16d4 jge 0x11cb16df */
  if ((C.sf==C.of)) goto L_11cb16df;
  /* 11cb16d6 push esi */
  push32((uint32_t)(ESI));
  /* 11cb16d7 push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb16d9 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb16da call edi */
  call_ind((uint32_t)(EDI), 0x11cb16dcu);
  /* 11cb16dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb16df:;
  /* 11cb16df push 3 */
  push32((uint32_t)(0x3u));
  /* 11cb16e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb16e3 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb16e5u);
  /* 11cb16e5 pop ecx */
  ECX = (pop32());
  /* 11cb16e6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb16e8 pop ecx */
  ECX = (pop32());
  /* 11cb16e9 jge 0x11cb16f5 */
  if ((C.sf==C.of)) goto L_11cb16f5;
  /* 11cb16eb push esi */
  push32((uint32_t)(ESI));
  /* 11cb16ec push 3 */
  push32((uint32_t)(0x3u));
  /* 11cb16ee push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb16f0 call edi */
  call_ind((uint32_t)(EDI), 0x11cb16f2u);
  /* 11cb16f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb16f5:;
  /* 11cb16f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb16f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb16f9 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb16fbu);
  /* 11cb16fb pop ecx */
  ECX = (pop32());
  /* 11cb16fc cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb16fe pop ecx */
  ECX = (pop32());
  /* 11cb16ff mov ebp, 0xf4240 */
  EBP = (0xf4240u);
  /* 11cb1704 jge 0x11cb1710 */
  if ((C.sf==C.of)) goto L_11cb1710;
  /* 11cb1706 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1707 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb1709 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb170b call edi */
  call_ind((uint32_t)(EDI), 0x11cb170du);
  /* 11cb170d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb1710:;
  /* 11cb1710 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb1712 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb1714 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb1716u);
  /* 11cb1716 pop ecx */
  ECX = (pop32());
  /* 11cb1717 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb1719 pop ecx */
  ECX = (pop32());
  /* 11cb171a jge 0x11cb1726 */
  if ((C.sf==C.of)) goto L_11cb1726;
  /* 11cb171c push ebp */
  push32((uint32_t)(EBP));
  /* 11cb171d push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb171f push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb1721 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1723u);
  /* 11cb1723 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb1726:;
  /* 11cb1726 push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb1728 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb172a call ebx */
  call_ind((uint32_t)(EBX), 0x11cb172cu);
  /* 11cb172c pop ecx */
  ECX = (pop32());
  /* 11cb172d cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb172f pop ecx */
  ECX = (pop32());
  /* 11cb1730 jge 0x11cb173c */
  if ((C.sf==C.of)) goto L_11cb173c;
  /* 11cb1732 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1733 push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb1735 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb1737 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1739u);
  /* 11cb1739 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb173c:;
  /* 11cb173c push 3 */
  push32((uint32_t)(0x3u));
  /* 11cb173e push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb1740 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb1742u);
  /* 11cb1742 pop ecx */
  ECX = (pop32());
  /* 11cb1743 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb1745 pop ecx */
  ECX = (pop32());
  /* 11cb1746 jge 0x11cb1752 */
  if ((C.sf==C.of)) goto L_11cb1752;
  /* 11cb1748 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1749 push 3 */
  push32((uint32_t)(0x3u));
  /* 11cb174b push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb174d call edi */
  call_ind((uint32_t)(EDI), 0x11cb174fu);
  /* 11cb174f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb1752:;
  /* 11cb1752 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb1754 push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb1756 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb1758u);
  /* 11cb1758 pop ecx */
  ECX = (pop32());
  /* 11cb1759 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb175b pop ecx */
  ECX = (pop32());
  /* 11cb175c jge 0x11cb1768 */
  if ((C.sf==C.of)) goto L_11cb1768;
  /* 11cb175e push ebp */
  push32((uint32_t)(EBP));
  /* 11cb175f push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb1761 push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb1763 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1765u);
  /* 11cb1765 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb1768:;
  /* 11cb1768 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb176a push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb176c call ebx */
  call_ind((uint32_t)(EBX), 0x11cb176eu);
  /* 11cb176e pop ecx */
  ECX = (pop32());
  /* 11cb176f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb1771 pop ecx */
  ECX = (pop32());
  /* 11cb1772 jge 0x11cb177e */
  if ((C.sf==C.of)) goto L_11cb177e;
  /* 11cb1774 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1775 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb1777 push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb1779 call edi */
  call_ind((uint32_t)(EDI), 0x11cb177bu);
  /* 11cb177b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb177e:;
  /* 11cb177e push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb1780 push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb1782 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb1784u);
  /* 11cb1784 pop ecx */
  ECX = (pop32());
  /* 11cb1785 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb1787 pop ecx */
  ECX = (pop32());
  /* 11cb1788 jge 0x11cb1794 */
  if ((C.sf==C.of)) goto L_11cb1794;
  /* 11cb178a push ebp */
  push32((uint32_t)(EBP));
  /* 11cb178b push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb178d push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb178f call edi */
  call_ind((uint32_t)(EDI), 0x11cb1791u);
  /* 11cb1791 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb1794:;
  /* 11cb1794 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb1796 push 7 */
  push32((uint32_t)(0x7u));
  /* 11cb1798 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb179au);
  /* 11cb179a pop ecx */
  ECX = (pop32());
  /* 11cb179b cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb179d pop ecx */
  ECX = (pop32());
  /* 11cb179e jge 0x11cb17aa */
  if ((C.sf==C.of)) goto L_11cb17aa;
  /* 11cb17a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb17a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb17a3 push 7 */
  push32((uint32_t)(0x7u));
  /* 11cb17a5 call edi */
  call_ind((uint32_t)(EDI), 0x11cb17a7u);
  /* 11cb17a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb17aa:;
  /* 11cb17aa push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb17ac push 7 */
  push32((uint32_t)(0x7u));
  /* 11cb17ae call ebx */
  call_ind((uint32_t)(EBX), 0x11cb17b0u);
  /* 11cb17b0 pop ecx */
  ECX = (pop32());
  /* 11cb17b1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb17b3 pop ecx */
  ECX = (pop32());
  /* 11cb17b4 jge 0x11cb17c0 */
  if ((C.sf==C.of)) goto L_11cb17c0;
  /* 11cb17b6 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb17b7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb17b9 push 7 */
  push32((uint32_t)(0x7u));
  /* 11cb17bb call edi */
  call_ind((uint32_t)(EDI), 0x11cb17bdu);
  /* 11cb17bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb17c0:;
  /* 11cb17c0 push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb17c2 push 7 */
  push32((uint32_t)(0x7u));
  /* 11cb17c4 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb17c6u);
  /* 11cb17c6 pop ecx */
  ECX = (pop32());
  /* 11cb17c7 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb17c9 pop ecx */
  ECX = (pop32());
  /* 11cb17ca jge 0x11cb17d6 */
  if ((C.sf==C.of)) goto L_11cb17d6;
  /* 11cb17cc push ebp */
  push32((uint32_t)(EBP));
  /* 11cb17cd push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb17cf push 7 */
  push32((uint32_t)(0x7u));
  /* 11cb17d1 call edi */
  call_ind((uint32_t)(EDI), 0x11cb17d3u);
  /* 11cb17d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb17d6:;
  /* 11cb17d6 push esi */
  push32((uint32_t)(ESI));
  /* 11cb17d7 push 0xa */
  push32((uint32_t)(0xau));
  /* 11cb17d9 call dword ptr [0x11cb50b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50b8))), 0x11cb17dfu);
  /* 11cb17df pop ecx */
  ECX = (pop32());
  /* 11cb17e0 pop ecx */
  ECX = (pop32());
L_11cb17e1:;
  /* 11cb17e1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11cb17e3 call dword ptr [0x11cb50bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50bc))), 0x11cb17e9u);
  /* 11cb17e9 mov ebp, dword ptr [0x11cb5130] */
  EBP = (r32((uint32_t)(0x11cb5130)));
  /* 11cb17ef mov esi, dword ptr [0x11cb50c0] */
  ESI = (r32((uint32_t)(0x11cb50c0)));
  /* 11cb17f5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb17f7 pop ecx */
  ECX = (pop32());
  /* 11cb17f8 mov edi, 0x11cb6100 */
  EDI = (0x11cb6100u);
  /* 11cb17fd je 0x11cb1b55 */
  if (C.zf) goto L_11cb1b55;
  /* 11cb1803 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1805 call dword ptr [0x11cb50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50c4))), 0x11cb180bu);
  /* 11cb180b and dword ptr [0x11cb68f8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11cb68f8)))&(0x0u); w32((uint32_t)(0x11cb68f8), (_r)); fl_logic(_r,32); }
  /* 11cb1812 mov dword ptr [0x11cb66d0], eax */
  w32((uint32_t)(0x11cb66d0), (EAX));
  /* 11cb1817 lea eax, [eax + eax + 5] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x5));
  /* 11cb181b push 0xe */
  push32((uint32_t)(0xeu));
  /* 11cb181d push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb181f mov dword ptr [0x11cb6868], eax */
  w32((uint32_t)(0x11cb6868), (EAX));
  /* 11cb1824 call dword ptr [0x11cb50c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50c8))), 0x11cb182au);
  /* 11cb182a push 0xe */
  push32((uint32_t)(0xeu));
  /* 11cb182c push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb182e call dword ptr [0x11cb50c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50c8))), 0x11cb1834u);
  /* 11cb1834 push 0x7f */
  push32((uint32_t)(0x7fu));
  /* 11cb1836 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb1838 call dword ptr [0x11cb50c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50c8))), 0x11cb183eu);
  /* 11cb183e push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11cb1840 push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb1842 call dword ptr [0x11cb50c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50c8))), 0x11cb1848u);
  /* 11cb1848 push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb184a pop eax */
  EAX = (pop32());
  /* 11cb184b sub eax, dword ptr [0x11cb66d0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11cb66d0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb1851 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cb1857 push eax */
  push32((uint32_t)(EAX));
  /* 11cb1858 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb185a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb185c call ebp */
  call_ind((uint32_t)(EBP), 0x11cb185eu);
  /* 11cb185e push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1860 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1862 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb1864u);
  /* 11cb1864 push eax */
  push32((uint32_t)(EAX));
  /* 11cb1865 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb1867 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1869 call ebp */
  call_ind((uint32_t)(EBP), 0x11cb186bu);
  /* 11cb186b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb186e push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1870 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1872 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb1874u);
  /* 11cb1874 push eax */
  push32((uint32_t)(EAX));
  /* 11cb1875 push 3 */
  push32((uint32_t)(0x3u));
  /* 11cb1877 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1879 call ebp */
  call_ind((uint32_t)(EBP), 0x11cb187bu);
  /* 11cb187b push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb187d push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb187f call ebx */
  call_ind((uint32_t)(EBX), 0x11cb1881u);
  /* 11cb1881 push eax */
  push32((uint32_t)(EAX));
  /* 11cb1882 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb1884 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1886 call ebp */
  call_ind((uint32_t)(EBP), 0x11cb1888u);
  /* 11cb1888 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb188a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb188c call ebx */
  call_ind((uint32_t)(EBX), 0x11cb188eu);
  /* 11cb188e push eax */
  push32((uint32_t)(EAX));
  /* 11cb188f push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb1891 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1893 call ebp */
  call_ind((uint32_t)(EBP), 0x11cb1895u);
  /* 11cb1895 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1897 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1899 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb189bu);
  /* 11cb189b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb189e push eax */
  push32((uint32_t)(EAX));
  /* 11cb189f push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb18a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb18a3 call ebp */
  call_ind((uint32_t)(EBP), 0x11cb18a5u);
  /* 11cb18a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb18a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb18a9 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb18abu);
  /* 11cb18ab shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11cb18ad push eax */
  push32((uint32_t)(EAX));
  /* 11cb18ae push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb18b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb18b2 call ebp */
  call_ind((uint32_t)(EBP), 0x11cb18b4u);
  /* 11cb18b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb18b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb18b8 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb18bau);
  /* 11cb18ba push eax */
  push32((uint32_t)(EAX));
  /* 11cb18bb push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb18bd push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb18bf call ebp */
  call_ind((uint32_t)(EBP), 0x11cb18c1u);
  /* 11cb18c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb18c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb18c5 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb18c7u);
  /* 11cb18c7 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11cb18c9 push eax */
  push32((uint32_t)(EAX));
  /* 11cb18ca push 3 */
  push32((uint32_t)(0x3u));
  /* 11cb18cc push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb18ce call ebp */
  call_ind((uint32_t)(EBP), 0x11cb18d0u);
  /* 11cb18d0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb18d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb18d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb18d7 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb18d9u);
  /* 11cb18d9 push eax */
  push32((uint32_t)(EAX));
  /* 11cb18da push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb18dc push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb18de call ebp */
  call_ind((uint32_t)(EBP), 0x11cb18e0u);
  /* 11cb18e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb18e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb18e4 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb18e6u);
  /* 11cb18e6 push eax */
  push32((uint32_t)(EAX));
  /* 11cb18e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb18e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb18eb call ebp */
  call_ind((uint32_t)(EBP), 0x11cb18edu);
  /* 11cb18ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb18ef push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb18f1 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb18f3u);
  /* 11cb18f3 push eax */
  push32((uint32_t)(EAX));
  /* 11cb18f4 push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb18f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb18f8 call ebp */
  call_ind((uint32_t)(EBP), 0x11cb18fau);
  /* 11cb18fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb18fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb18fe call ebx */
  call_ind((uint32_t)(EBX), 0x11cb1900u);
  /* 11cb1900 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1903 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11cb1905 push eax */
  push32((uint32_t)(EAX));
  /* 11cb1906 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1908 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb190a call ebp */
  call_ind((uint32_t)(EBP), 0x11cb190cu);
  /* 11cb190c push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb190e push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb1910 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb1912u);
  /* 11cb1912 push eax */
  push32((uint32_t)(EAX));
  /* 11cb1913 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb1915 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb1917 call ebp */
  call_ind((uint32_t)(EBP), 0x11cb1919u);
  /* 11cb1919 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb191b push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb191d call ebx */
  call_ind((uint32_t)(EBX), 0x11cb191fu);
  /* 11cb191f push eax */
  push32((uint32_t)(EAX));
  /* 11cb1920 push 3 */
  push32((uint32_t)(0x3u));
  /* 11cb1922 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb1924 call ebp */
  call_ind((uint32_t)(EBP), 0x11cb1926u);
  /* 11cb1926 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1928 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb192a call ebx */
  call_ind((uint32_t)(EBX), 0x11cb192cu);
  /* 11cb192c push eax */
  push32((uint32_t)(EAX));
  /* 11cb192d push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb192f push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb1931 call ebp */
  call_ind((uint32_t)(EBP), 0x11cb1933u);
  /* 11cb1933 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1936 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1938 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb193a call ebx */
  call_ind((uint32_t)(EBX), 0x11cb193cu);
  /* 11cb193c push eax */
  push32((uint32_t)(EAX));
  /* 11cb193d push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb193f push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb1941 call ebp */
  call_ind((uint32_t)(EBP), 0x11cb1943u);
  /* 11cb1943 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1945 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb1947 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb1949u);
  /* 11cb1949 push eax */
  push32((uint32_t)(EAX));
  /* 11cb194a push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb194c push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb194e call ebp */
  call_ind((uint32_t)(EBP), 0x11cb1950u);
  /* 11cb1950 mov eax, dword ptr [0x11cb66d0] */
  EAX = (r32((uint32_t)(0x11cb66d0)));
  /* 11cb1955 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1958 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11cb1959 je 0x11cb1a59 */
  if (C.zf) goto L_11cb1a59;
  /* 11cb195f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11cb1960 je 0x11cb19eb */
  if (C.zf) goto L_11cb19eb;
  /* 11cb1966 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11cb1967 jne 0x11cb1a74 */
  if (!C.zf) goto L_11cb1a74;
  /* 11cb196d push 0x11cb6348 */
  push32((uint32_t)(0x11cb6348u));
  /* 11cb1972 push edi */
  push32((uint32_t)(EDI));
  /* 11cb1973 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1975u);
  /* 11cb1975 push 0x11cb6340 */
  push32((uint32_t)(0x11cb6340u));
  /* 11cb197a push edi */
  push32((uint32_t)(EDI));
  /* 11cb197b call esi */
  call_ind((uint32_t)(ESI), 0x11cb197du);
  /* 11cb197d push 0x11cb6338 */
  push32((uint32_t)(0x11cb6338u));
  /* 11cb1982 push edi */
  push32((uint32_t)(EDI));
  /* 11cb1983 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1985u);
  /* 11cb1985 push 0x11cb6330 */
  push32((uint32_t)(0x11cb6330u));
  /* 11cb198a push edi */
  push32((uint32_t)(EDI));
  /* 11cb198b call esi */
  call_ind((uint32_t)(ESI), 0x11cb198du);
  /* 11cb198d push 0x11cb6328 */
  push32((uint32_t)(0x11cb6328u));
  /* 11cb1992 push edi */
  push32((uint32_t)(EDI));
  /* 11cb1993 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1995u);
  /* 11cb1995 push 0x11cb6320 */
  push32((uint32_t)(0x11cb6320u));
  /* 11cb199a push edi */
  push32((uint32_t)(EDI));
  /* 11cb199b call esi */
  call_ind((uint32_t)(ESI), 0x11cb199du);
  /* 11cb199d push 0x11cb6318 */
  push32((uint32_t)(0x11cb6318u));
  /* 11cb19a2 push edi */
  push32((uint32_t)(EDI));
  /* 11cb19a3 call esi */
  call_ind((uint32_t)(ESI), 0x11cb19a5u);
  /* 11cb19a5 push 0x11cb6310 */
  push32((uint32_t)(0x11cb6310u));
  /* 11cb19aa push edi */
  push32((uint32_t)(EDI));
  /* 11cb19ab call esi */
  call_ind((uint32_t)(ESI), 0x11cb19adu);
  /* 11cb19ad add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb19b0 push 0x11cb6308 */
  push32((uint32_t)(0x11cb6308u));
  /* 11cb19b5 push edi */
  push32((uint32_t)(EDI));
  /* 11cb19b6 call esi */
  call_ind((uint32_t)(ESI), 0x11cb19b8u);
  /* 11cb19b8 push 0x11cb6300 */
  push32((uint32_t)(0x11cb6300u));
  /* 11cb19bd push edi */
  push32((uint32_t)(EDI));
  /* 11cb19be call esi */
  call_ind((uint32_t)(ESI), 0x11cb19c0u);
  /* 11cb19c0 push 0x11cb62f8 */
  push32((uint32_t)(0x11cb62f8u));
  /* 11cb19c5 push edi */
  push32((uint32_t)(EDI));
  /* 11cb19c6 call esi */
  call_ind((uint32_t)(ESI), 0x11cb19c8u);
  /* 11cb19c8 push 0x11cb62e0 */
  push32((uint32_t)(0x11cb62e0u));
  /* 11cb19cd push edi */
  push32((uint32_t)(EDI));
  /* 11cb19ce call esi */
  call_ind((uint32_t)(ESI), 0x11cb19d0u);
  /* 11cb19d0 push 0x11cb62c8 */
  push32((uint32_t)(0x11cb62c8u));
  /* 11cb19d5 push edi */
  push32((uint32_t)(EDI));
  /* 11cb19d6 call esi */
  call_ind((uint32_t)(ESI), 0x11cb19d8u);
  /* 11cb19d8 push 0x11cb62b0 */
  push32((uint32_t)(0x11cb62b0u));
  /* 11cb19dd push edi */
  push32((uint32_t)(EDI));
  /* 11cb19de call esi */
  call_ind((uint32_t)(ESI), 0x11cb19e0u);
  /* 11cb19e0 push 0x11cb62b0 */
  push32((uint32_t)(0x11cb62b0u));
  /* 11cb19e5 push edi */
  push32((uint32_t)(EDI));
  /* 11cb19e6 call esi */
  call_ind((uint32_t)(ESI), 0x11cb19e8u);
  /* 11cb19e8 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb19eb:;
  /* 11cb19eb push 0x11cb62a8 */
  push32((uint32_t)(0x11cb62a8u));
  /* 11cb19f0 push edi */
  push32((uint32_t)(EDI));
  /* 11cb19f1 call esi */
  call_ind((uint32_t)(ESI), 0x11cb19f3u);
  /* 11cb19f3 push 0x11cb62a0 */
  push32((uint32_t)(0x11cb62a0u));
  /* 11cb19f8 push edi */
  push32((uint32_t)(EDI));
  /* 11cb19f9 call esi */
  call_ind((uint32_t)(ESI), 0x11cb19fbu);
  /* 11cb19fb push 0x11cb6348 */
  push32((uint32_t)(0x11cb6348u));
  /* 11cb1a00 push edi */
  push32((uint32_t)(EDI));
  /* 11cb1a01 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1a03u);
  /* 11cb1a03 push 0x11cb6340 */
  push32((uint32_t)(0x11cb6340u));
  /* 11cb1a08 push edi */
  push32((uint32_t)(EDI));
  /* 11cb1a09 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1a0bu);
  /* 11cb1a0b push 0x11cb6328 */
  push32((uint32_t)(0x11cb6328u));
  /* 11cb1a10 push edi */
  push32((uint32_t)(EDI));
  /* 11cb1a11 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1a13u);
  /* 11cb1a13 push 0x11cb6320 */
  push32((uint32_t)(0x11cb6320u));
  /* 11cb1a18 push edi */
  push32((uint32_t)(EDI));
  /* 11cb1a19 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1a1bu);
  /* 11cb1a1b push 0x11cb6318 */
  push32((uint32_t)(0x11cb6318u));
  /* 11cb1a20 push edi */
  push32((uint32_t)(EDI));
  /* 11cb1a21 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1a23u);
  /* 11cb1a23 push 0x11cb6298 */
  push32((uint32_t)(0x11cb6298u));
  /* 11cb1a28 push edi */
  push32((uint32_t)(EDI));
  /* 11cb1a29 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1a2bu);
  /* 11cb1a2b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1a2e push 0x11cb6290 */
  push32((uint32_t)(0x11cb6290u));
  /* 11cb1a33 push edi */
  push32((uint32_t)(EDI));
  /* 11cb1a34 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1a36u);
  /* 11cb1a36 push 0x11cb6278 */
  push32((uint32_t)(0x11cb6278u));
  /* 11cb1a3b push edi */
  push32((uint32_t)(EDI));
  /* 11cb1a3c call esi */
  call_ind((uint32_t)(ESI), 0x11cb1a3eu);
  /* 11cb1a3e push 0x11cb62e0 */
  push32((uint32_t)(0x11cb62e0u));
  /* 11cb1a43 push edi */
  push32((uint32_t)(EDI));
  /* 11cb1a44 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1a46u);
  /* 11cb1a46 push 0x11cb62c8 */
  push32((uint32_t)(0x11cb62c8u));
  /* 11cb1a4b push edi */
  push32((uint32_t)(EDI));
  /* 11cb1a4c call esi */
  call_ind((uint32_t)(ESI), 0x11cb1a4eu);
  /* 11cb1a4e push 0x11cb62b0 */
  push32((uint32_t)(0x11cb62b0u));
  /* 11cb1a53 push edi */
  push32((uint32_t)(EDI));
  /* 11cb1a54 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1a56u);
  /* 11cb1a56 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb1a59:;
  /* 11cb1a59 push 0x11cb6270 */
  push32((uint32_t)(0x11cb6270u));
  /* 11cb1a5e push edi */
  push32((uint32_t)(EDI));
  /* 11cb1a5f call esi */
  call_ind((uint32_t)(ESI), 0x11cb1a61u);
  /* 11cb1a61 push 0x11cb6278 */
  push32((uint32_t)(0x11cb6278u));
  /* 11cb1a66 push edi */
  push32((uint32_t)(EDI));
  /* 11cb1a67 call esi */
  call_ind((uint32_t)(ESI), 0x11cb1a69u);
  /* 11cb1a69 push 0x11cb62c8 */
  push32((uint32_t)(0x11cb62c8u));
  /* 11cb1a6e push edi */
  push32((uint32_t)(EDI));
  /* 11cb1a6f call esi */
  call_ind((uint32_t)(ESI), 0x11cb1a71u);
  /* 11cb1a71 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb1a74:;
  /* 11cb1a74 cmp dword ptr [0x11cb66d0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11cb66d0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb1a7b jge 0x11cb1aa5 */
  if ((C.sf==C.of)) goto L_11cb1aa5;
  /* 11cb1a7d push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb1a7f call dword ptr [0x11cb50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50cc))), 0x11cb1a85u);
  /* 11cb1a85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1a87 push 0x11cb6838 */
  push32((uint32_t)(0x11cb6838u));
  /* 11cb1a8c call dword ptr [0x11cb5144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5144))), 0x11cb1a92u);
  /* 11cb1a92 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb1a94 call dword ptr [0x11cb50d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50d0))), 0x11cb1a9au);
  /* 11cb1a9a push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb1a9c call dword ptr [0x11cb50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50cc))), 0x11cb1aa2u);
  /* 11cb1aa2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb1aa5:;
  /* 11cb1aa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1aa7 push 0x11cb66e0 */
  push32((uint32_t)(0x11cb66e0u));
  /* 11cb1aac call dword ptr [0x11cb5144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5144))), 0x11cb1ab2u);
  /* 11cb1ab2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb1ab4 push 0x11cb66d8 */
  push32((uint32_t)(0x11cb66d8u));
  /* 11cb1ab9 call dword ptr [0x11cb5144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5144))), 0x11cb1abfu);
  /* 11cb1abf push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb1ac1 call dword ptr [0x11cb50d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50d4))), 0x11cb1ac7u);
  /* 11cb1ac7 push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb1ac9 call dword ptr [0x11cb50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50cc))), 0x11cb1acfu);
  /* 11cb1acf push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb1ad1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb1ad3 push 0x11cb6778 */
  push32((uint32_t)(0x11cb6778u));
  /* 11cb1ad8 call dword ptr [0x11cb50d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50d8))), 0x11cb1adeu);
  /* 11cb1ade push dword ptr [0x11cb66d0] */
  push32((uint32_t)(r32((uint32_t)(0x11cb66d0))));
  /* 11cb1ae4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb1ae6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1ae8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb1aea push 0x11cb6264 */
  push32((uint32_t)(0x11cb6264u));
  /* 11cb1aef push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb1af1 call dword ptr [0x11cb50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50dc))), 0x11cb1af7u);
  /* 11cb1af7 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11cb1af9 call dword ptr [0x11cb50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50e0))), 0x11cb1affu);
  /* 11cb1aff add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1b02 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11cb1b04 call dword ptr [0x11cb50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50e4))), 0x11cb1b0au);
  /* 11cb1b0a push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11cb1b0c call dword ptr [0x11cb50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50e0))), 0x11cb1b12u);
  /* 11cb1b12 push 0x11cb625c */
  push32((uint32_t)(0x11cb625cu));
  /* 11cb1b17 call dword ptr [0x11cb50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50e8))), 0x11cb1b1du);
  /* 11cb1b1d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11cb1b22 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb1b24 call dword ptr [0x11cb50b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50b8))), 0x11cb1b2au);
  /* 11cb1b2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1b2c push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb1b2e call dword ptr [0x11cb50b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50b8))), 0x11cb1b34u);
  /* 11cb1b34 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11cb1b36 push 6 */
  push32((uint32_t)(0x6u));
  /* 11cb1b38 call dword ptr [0x11cb50b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50b8))), 0x11cb1b3eu);
  /* 11cb1b3e push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1b40 push 0xa */
  push32((uint32_t)(0xau));
  /* 11cb1b42 call dword ptr [0x11cb50b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50b8))), 0x11cb1b48u);
  /* 11cb1b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1b4a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11cb1b4c call dword ptr [0x11cb50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50ec))), 0x11cb1b52u);
  /* 11cb1b52 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb1b55:;
  /* 11cb1b55 cmp dword ptr [0x11cb66d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cb66d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb1b5c jle 0x11cb1bb2 */
  if ((C.zf||C.sf!=C.of)) goto L_11cb1bb2;
  /* 11cb1b5e push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb1b60 call dword ptr [0x11cb50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50b0))), 0x11cb1b66u);
  /* 11cb1b66 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb1b68 pop ecx */
  ECX = (pop32());
  /* 11cb1b69 je 0x11cb1bb2 */
  if (C.zf) goto L_11cb1bb2;
  /* 11cb1b6b mov eax, dword ptr [0x11cb66d0] */
  EAX = (r32((uint32_t)(0x11cb66d0)));
  /* 11cb1b70 mov ecx, dword ptr [0x11cb6868] */
  ECX = (r32((uint32_t)(0x11cb6868)));
  /* 11cb1b76 and dword ptr [esp + 0x10], 0 */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))&(0x0u); w32((uint32_t)(ESP + 0x10), (_r)); fl_logic(_r,32); }
  /* 11cb1b7b lea ecx, [ecx + eax + 1] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11cb1b7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb1b81 mov dword ptr [0x11cb6868], ecx */
  w32((uint32_t)(0x11cb6868), (ECX));
  /* 11cb1b87 jle 0x11cb1ba3 */
  if ((C.zf||C.sf!=C.of)) goto L_11cb1ba3;
L_11cb1b89:;
  /* 11cb1b89 push 0x11cb6254 */
  push32((uint32_t)(0x11cb6254u));
  /* 11cb1b8e push edi */
  push32((uint32_t)(EDI));
  /* 11cb1b8f call esi */
  call_ind((uint32_t)(ESI), 0x11cb1b91u);
  /* 11cb1b91 inc dword ptr [esp + 0x18] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x18)))+1; w32((uint32_t)(ESP + 0x18), (_r)); fl_inc(_r,32); }
  /* 11cb1b95 pop ecx */
  ECX = (pop32());
  /* 11cb1b96 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11cb1b9a pop ecx */
  ECX = (pop32());
  /* 11cb1b9b cmp eax, dword ptr [0x11cb66d0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11cb66d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb1ba1 jl 0x11cb1b89 */
  if ((C.sf!=C.of)) goto L_11cb1b89;
L_11cb1ba3:;
  /* 11cb1ba3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11cb1ba8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb1baa call dword ptr [0x11cb50b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50b8))), 0x11cb1bb0u);
  /* 11cb1bb0 pop ecx */
  ECX = (pop32());
  /* 11cb1bb1 pop ecx */
  ECX = (pop32());
L_11cb1bb2:;
  /* 11cb1bb2 mov edi, dword ptr [0x11cb50bc] */
  EDI = (r32((uint32_t)(0x11cb50bc)));
  /* 11cb1bb8 push 8 */
  push32((uint32_t)(0x8u));
  /* 11cb1bba call edi */
  call_ind((uint32_t)(EDI), 0x11cb1bbcu);
  /* 11cb1bbc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb1bbe pop ecx */
  ECX = (pop32());
  /* 11cb1bbf je 0x11cb1bee */
  if (C.zf) goto L_11cb1bee;
  /* 11cb1bc1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11cb1bc3 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1bc4 push 0x11cb6870 */
  push32((uint32_t)(0x11cb6870u));
  /* 11cb1bc9 call dword ptr [0x11cb50f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50f0))), 0x11cb1bcfu);
  /* 11cb1bcf pop ecx */
  ECX = (pop32());
  /* 11cb1bd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb1bd2 pop ecx */
  ECX = (pop32());
  /* 11cb1bd3 jle 0x11cb1bf0 */
  if ((C.zf||C.sf!=C.of)) goto L_11cb1bf0;
  /* 11cb1bd5 push 0x11cb624c */
  push32((uint32_t)(0x11cb624cu));
  /* 11cb1bda call dword ptr [0x11cb50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50e8))), 0x11cb1be0u);
  /* 11cb1be0 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1be1 push 8 */
  push32((uint32_t)(0x8u));
  /* 11cb1be3 call dword ptr [0x11cb50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50ec))), 0x11cb1be9u);
  /* 11cb1be9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1bec jmp 0x11cb1bf0 */
  goto L_11cb1bf0;
L_11cb1bee:;
  /* 11cb1bee xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11cb1bf0:;
  /* 11cb1bf0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb1bf2 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1bf4u);
  /* 11cb1bf4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb1bf6 pop ecx */
  ECX = (pop32());
  /* 11cb1bf7 je 0x11cb1d3c */
  if (C.zf) goto L_11cb1d3c;
  /* 11cb1bfd push esi */
  push32((uint32_t)(ESI));
  /* 11cb1bfe push 0x11cb6878 */
  push32((uint32_t)(0x11cb6878u));
  /* 11cb1c03 call dword ptr [0x11cb50f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50f0))), 0x11cb1c09u);
  /* 11cb1c09 mov edx, eax */
  EDX = (EAX);
  /* 11cb1c0b push esi */
  push32((uint32_t)(ESI));
  /* 11cb1c0c push 0x11cb6780 */
  push32((uint32_t)(0x11cb6780u));
  /* 11cb1c11 mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 11cb1c15 call dword ptr [0x11cb50f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50f0))), 0x11cb1c1bu);
  /* 11cb1c1b mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 11cb1c1f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1c22 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1c24 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cb1c26 jle 0x11cb1d3a */
  if ((C.zf||C.sf!=C.of)) goto L_11cb1d3a;
  /* 11cb1c2c mov edi, 0x11cb68e8 */
  EDI = (0x11cb68e8u);
  /* 11cb1c31 push 0x11cb6778 */
  push32((uint32_t)(0x11cb6778u));
  /* 11cb1c36 mov esi, 0x11cb66f0 */
  ESI = (0x11cb66f0u);
  /* 11cb1c3b push edi */
  push32((uint32_t)(EDI));
  /* 11cb1c3c push esi */
  push32((uint32_t)(ESI));
  /* 11cb1c3d call 0x11cb10c0 */
  push32(0x11cb1c42u); f_11cb10c0();
  /* 11cb1c42 push 0x11cb6778 */
  push32((uint32_t)(0x11cb6778u));
  /* 11cb1c47 push edi */
  push32((uint32_t)(EDI));
  /* 11cb1c48 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1c49 call 0x11cb10c0 */
  push32(0x11cb1c4eu); f_11cb10c0();
  /* 11cb1c4e push 0x11cb6788 */
  push32((uint32_t)(0x11cb6788u));
  /* 11cb1c53 push edi */
  push32((uint32_t)(EDI));
  /* 11cb1c54 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1c55 call 0x11cb10c0 */
  push32(0x11cb1c5au); f_11cb10c0();
  /* 11cb1c5a push 0x11cb6798 */
  push32((uint32_t)(0x11cb6798u));
  /* 11cb1c5f push edi */
  push32((uint32_t)(EDI));
  /* 11cb1c60 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1c61 call 0x11cb10c0 */
  push32(0x11cb1c66u); f_11cb10c0();
  /* 11cb1c66 push 0x11cb67a0 */
  push32((uint32_t)(0x11cb67a0u));
  /* 11cb1c6b push edi */
  push32((uint32_t)(EDI));
  /* 11cb1c6c push esi */
  push32((uint32_t)(ESI));
  /* 11cb1c6d call 0x11cb10c0 */
  push32(0x11cb1c72u); f_11cb10c0();
  /* 11cb1c72 push 0x11cb67a8 */
  push32((uint32_t)(0x11cb67a8u));
  /* 11cb1c77 push edi */
  push32((uint32_t)(EDI));
  /* 11cb1c78 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1c79 call 0x11cb10c0 */
  push32(0x11cb1c7eu); f_11cb10c0();
  /* 11cb1c7e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1c81 push 0x11cb67b0 */
  push32((uint32_t)(0x11cb67b0u));
  /* 11cb1c86 push edi */
  push32((uint32_t)(EDI));
  /* 11cb1c87 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1c88 call 0x11cb10c0 */
  push32(0x11cb1c8du); f_11cb10c0();
  /* 11cb1c8d push 0x11cb67b8 */
  push32((uint32_t)(0x11cb67b8u));
  /* 11cb1c92 push edi */
  push32((uint32_t)(EDI));
  /* 11cb1c93 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1c94 call 0x11cb10c0 */
  push32(0x11cb1c99u); f_11cb10c0();
  /* 11cb1c99 push 0x11cb67c0 */
  push32((uint32_t)(0x11cb67c0u));
  /* 11cb1c9e push edi */
  push32((uint32_t)(EDI));
  /* 11cb1c9f push esi */
  push32((uint32_t)(ESI));
  /* 11cb1ca0 call 0x11cb10c0 */
  push32(0x11cb1ca5u); f_11cb10c0();
  /* 11cb1ca5 push 0x11cb67c8 */
  push32((uint32_t)(0x11cb67c8u));
  /* 11cb1caa push edi */
  push32((uint32_t)(EDI));
  /* 11cb1cab push esi */
  push32((uint32_t)(ESI));
  /* 11cb1cac call 0x11cb10c0 */
  push32(0x11cb1cb1u); f_11cb10c0();
  /* 11cb1cb1 and dword ptr [esp + 0x40], 0 */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x40)))&(0x0u); w32((uint32_t)(ESP + 0x40), (_r)); fl_logic(_r,32); }
  /* 11cb1cb6 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1cb9 cmp dword ptr [0x11cb66d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cb66d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb1cc0 jle 0x11cb1d05 */
  if ((C.zf||C.sf!=C.of)) goto L_11cb1d05;
L_11cb1cc2:;
  /* 11cb1cc2 push 0x11cb6778 */
  push32((uint32_t)(0x11cb6778u));
  /* 11cb1cc7 push edi */
  push32((uint32_t)(EDI));
  /* 11cb1cc8 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1cc9 call 0x11cb10c0 */
  push32(0x11cb1cceu); f_11cb10c0();
  /* 11cb1cce push 0x11cb6880 */
  push32((uint32_t)(0x11cb6880u));
  /* 11cb1cd3 push edi */
  push32((uint32_t)(EDI));
  /* 11cb1cd4 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1cd5 call 0x11cb10c0 */
  push32(0x11cb1cdau); f_11cb10c0();
  /* 11cb1cda push 0x11cb6888 */
  push32((uint32_t)(0x11cb6888u));
  /* 11cb1cdf push edi */
  push32((uint32_t)(EDI));
  /* 11cb1ce0 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1ce1 call 0x11cb10c0 */
  push32(0x11cb1ce6u); f_11cb10c0();
  /* 11cb1ce6 push 0x11cb6890 */
  push32((uint32_t)(0x11cb6890u));
  /* 11cb1ceb push edi */
  push32((uint32_t)(EDI));
  /* 11cb1cec push esi */
  push32((uint32_t)(ESI));
  /* 11cb1ced call 0x11cb10c0 */
  push32(0x11cb1cf2u); f_11cb10c0();
  /* 11cb1cf2 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1cf5 inc dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))+1; w32((uint32_t)(ESP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11cb1cf9 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11cb1cfd cmp eax, dword ptr [0x11cb66d0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11cb66d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb1d03 jl 0x11cb1cc2 */
  if ((C.sf!=C.of)) goto L_11cb1cc2;
L_11cb1d05:;
  /* 11cb1d05 mov edi, 0x11cb6778 */
  EDI = (0x11cb6778u);
  /* 11cb1d0a push edi */
  push32((uint32_t)(EDI));
  /* 11cb1d0b push 0x11cb6770 */
  push32((uint32_t)(0x11cb6770u));
  /* 11cb1d10 call 0x11cb106a */
  push32(0x11cb1d15u); f_11cb106a();
  /* 11cb1d15 push edi */
  push32((uint32_t)(EDI));
  /* 11cb1d16 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1d17 call 0x11cb106a */
  push32(0x11cb1d1cu); f_11cb106a();
  /* 11cb1d1c push 0x11cb6244 */
  push32((uint32_t)(0x11cb6244u));
  /* 11cb1d21 call dword ptr [0x11cb50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50e8))), 0x11cb1d27u);
  /* 11cb1d27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1d29 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb1d2b call dword ptr [0x11cb50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50ec))), 0x11cb1d31u);
  /* 11cb1d31 mov edi, dword ptr [0x11cb50bc] */
  EDI = (r32((uint32_t)(0x11cb50bc)));
  /* 11cb1d37 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb1d3a:;
  /* 11cb1d3a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11cb1d3c:;
  /* 11cb1d3c push 3 */
  push32((uint32_t)(0x3u));
  /* 11cb1d3e call edi */
  call_ind((uint32_t)(EDI), 0x11cb1d40u);
  /* 11cb1d40 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb1d42 pop ecx */
  ECX = (pop32());
  /* 11cb1d43 je 0x11cb1d55 */
  if (C.zf) goto L_11cb1d55;
  /* 11cb1d45 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1d46 push 0x11cb6850 */
  push32((uint32_t)(0x11cb6850u));
  /* 11cb1d4b push esi */
  push32((uint32_t)(ESI));
  /* 11cb1d4c call dword ptr [0x11cb50f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50f4))), 0x11cb1d52u);
  /* 11cb1d52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb1d55:;
  /* 11cb1d55 push 3 */
  push32((uint32_t)(0x3u));
  /* 11cb1d57 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1d59u);
  /* 11cb1d59 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb1d5b pop ecx */
  ECX = (pop32());
  /* 11cb1d5c je 0x11cb1d90 */
  if (C.zf) goto L_11cb1d90;
  /* 11cb1d5e push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb1d60 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1d62u);
  /* 11cb1d62 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb1d64 pop ecx */
  ECX = (pop32());
  /* 11cb1d65 je 0x11cb1d90 */
  if (C.zf) goto L_11cb1d90;
  /* 11cb1d67 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1d68 push 0x11cb6780 */
  push32((uint32_t)(0x11cb6780u));
  /* 11cb1d6d call dword ptr [0x11cb50f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50f0))), 0x11cb1d73u);
  /* 11cb1d73 pop ecx */
  ECX = (pop32());
  /* 11cb1d74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb1d76 pop ecx */
  ECX = (pop32());
  /* 11cb1d77 jle 0x11cb1d90 */
  if ((C.zf||C.sf!=C.of)) goto L_11cb1d90;
  /* 11cb1d79 push 0x11cb623c */
  push32((uint32_t)(0x11cb623cu));
  /* 11cb1d7e call dword ptr [0x11cb50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50e8))), 0x11cb1d84u);
  /* 11cb1d84 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1d85 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb1d87 call dword ptr [0x11cb50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50ec))), 0x11cb1d8du);
  /* 11cb1d8d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb1d90:;
  /* 11cb1d90 push 3 */
  push32((uint32_t)(0x3u));
  /* 11cb1d92 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1d94u);
  /* 11cb1d94 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb1d96 pop ecx */
  ECX = (pop32());
  /* 11cb1d97 je 0x11cb1dcc */
  if (C.zf) goto L_11cb1dcc;
  /* 11cb1d99 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb1d9b call edi */
  call_ind((uint32_t)(EDI), 0x11cb1d9du);
  /* 11cb1d9d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb1d9f pop ecx */
  ECX = (pop32());
  /* 11cb1da0 jne 0x11cb1dcc */
  if (!C.zf) goto L_11cb1dcc;
  /* 11cb1da2 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1da3 push 0x11cb6780 */
  push32((uint32_t)(0x11cb6780u));
  /* 11cb1da8 call dword ptr [0x11cb50f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50f0))), 0x11cb1daeu);
  /* 11cb1dae pop ecx */
  ECX = (pop32());
  /* 11cb1daf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb1db1 pop ecx */
  ECX = (pop32());
  /* 11cb1db2 jne 0x11cb1dcc */
  if (!C.zf) goto L_11cb1dcc;
  /* 11cb1db4 push 0x11cb6234 */
  push32((uint32_t)(0x11cb6234u));
  /* 11cb1db9 call dword ptr [0x11cb50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50e8))), 0x11cb1dbfu);
  /* 11cb1dbf push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb1dc1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb1dc3 call dword ptr [0x11cb50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50ec))), 0x11cb1dc9u);
  /* 11cb1dc9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb1dcc:;
  /* 11cb1dcc push 3 */
  push32((uint32_t)(0x3u));
  /* 11cb1dce call edi */
  call_ind((uint32_t)(EDI), 0x11cb1dd0u);
  /* 11cb1dd0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb1dd2 pop ecx */
  ECX = (pop32());
  /* 11cb1dd3 je 0x11cb1de4 */
  if (C.zf) goto L_11cb1de4;
  /* 11cb1dd5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb1dd7 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1dd9u);
  /* 11cb1dd9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb1ddb pop ecx */
  ECX = (pop32());
  /* 11cb1ddc jne 0x11cb1de4 */
  if (!C.zf) goto L_11cb1de4;
  /* 11cb1dde inc dword ptr [0x11cb68f8] */
  { uint32_t _r=(r32((uint32_t)(0x11cb68f8)))+1; w32((uint32_t)(0x11cb68f8), (_r)); fl_inc(_r,32); }
L_11cb1de4:;
  /* 11cb1de4 push 3 */
  push32((uint32_t)(0x3u));
  /* 11cb1de6 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1de8u);
  /* 11cb1de8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb1dea pop ecx */
  ECX = (pop32());
  /* 11cb1deb je 0x11cb1e7e */
  if (C.zf) goto L_11cb1e7e;
  /* 11cb1df1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb1df3 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1df5u);
  /* 11cb1df5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb1df7 pop ecx */
  ECX = (pop32());
  /* 11cb1df8 jne 0x11cb1e7e */
  if (!C.zf) goto L_11cb1e7e;
  /* 11cb1dfe mov eax, dword ptr [0x11cb66d0] */
  EAX = (r32((uint32_t)(0x11cb66d0)));
  /* 11cb1e03 lea eax, [eax + eax*4 + 0xa] */
  EAX = ((uint32_t)(EAX + EAX*4 + 0xa));
  /* 11cb1e07 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11cb1e09 cmp dword ptr [0x11cb68f8], eax */
  { uint32_t _a=(r32((uint32_t)(0x11cb68f8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb1e0f jle 0x11cb1e7e */
  if ((C.zf||C.sf!=C.of)) goto L_11cb1e7e;
  /* 11cb1e11 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb1e13 push 0x11cb6850 */
  push32((uint32_t)(0x11cb6850u));
  /* 11cb1e18 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1e19 call dword ptr [0x11cb50f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50f4))), 0x11cb1e1fu);
  /* 11cb1e1f push esi */
  push32((uint32_t)(ESI));
  /* 11cb1e20 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb1e22 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb1e24u);
  /* 11cb1e24 push eax */
  push32((uint32_t)(EAX));
  /* 11cb1e25 push 3 */
  push32((uint32_t)(0x3u));
  /* 11cb1e27 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb1e29 call ebp */
  call_ind((uint32_t)(EBP), 0x11cb1e2bu);
  /* 11cb1e2b push esi */
  push32((uint32_t)(ESI));
  /* 11cb1e2c push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb1e2e call ebx */
  call_ind((uint32_t)(EBX), 0x11cb1e30u);
  /* 11cb1e30 push eax */
  push32((uint32_t)(EAX));
  /* 11cb1e31 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb1e33 pop ebx */
  EBX = (pop32());
  /* 11cb1e34 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb1e35 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb1e36 call ebp */
  call_ind((uint32_t)(EBP), 0x11cb1e38u);
  /* 11cb1e38 push dword ptr [0x11cb66d0] */
  push32((uint32_t)(r32((uint32_t)(0x11cb66d0))));
  /* 11cb1e3e push ebx */
  push32((uint32_t)(EBX));
  /* 11cb1e3f push esi */
  push32((uint32_t)(ESI));
  /* 11cb1e40 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb1e41 push 0x11cb6228 */
  push32((uint32_t)(0x11cb6228u));
  /* 11cb1e46 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb1e47 call dword ptr [0x11cb50dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50dc))), 0x11cb1e4du);
  /* 11cb1e4d add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1e50 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb1e51 call dword ptr [0x11cb50f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50f8))), 0x11cb1e57u);
  /* 11cb1e57 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11cb1e59 call dword ptr [0x11cb50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50e4))), 0x11cb1e5fu);
  /* 11cb1e5f push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11cb1e61 call dword ptr [0x11cb50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50e0))), 0x11cb1e67u);
  /* 11cb1e67 push 0x11cb6220 */
  push32((uint32_t)(0x11cb6220u));
  /* 11cb1e6c call dword ptr [0x11cb50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50e8))), 0x11cb1e72u);
  /* 11cb1e72 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1e73 push 3 */
  push32((uint32_t)(0x3u));
  /* 11cb1e75 call dword ptr [0x11cb50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50ec))), 0x11cb1e7bu);
  /* 11cb1e7b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb1e7e:;
  /* 11cb1e7e push 7 */
  push32((uint32_t)(0x7u));
  /* 11cb1e80 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1e82u);
  /* 11cb1e82 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb1e84 pop ecx */
  ECX = (pop32());
  /* 11cb1e85 je 0x11cb1edc */
  if (C.zf) goto L_11cb1edc;
  /* 11cb1e87 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb1e89 call edi */
  call_ind((uint32_t)(EDI), 0x11cb1e8bu);
  /* 11cb1e8b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb1e8d pop ecx */
  ECX = (pop32());
  /* 11cb1e8e jne 0x11cb1edc */
  if (!C.zf) goto L_11cb1edc;
  /* 11cb1e90 mov ebx, dword ptr [0x11cb50f0] */
  EBX = (r32((uint32_t)(0x11cb50f0)));
  /* 11cb1e96 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1e97 push 0x11cb6870 */
  push32((uint32_t)(0x11cb6870u));
  /* 11cb1e9c call ebx */
  call_ind((uint32_t)(EBX), 0x11cb1e9eu);
  /* 11cb1e9e pop ecx */
  ECX = (pop32());
  /* 11cb1e9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb1ea1 pop ecx */
  ECX = (pop32());
  /* 11cb1ea2 jne 0x11cb1edc */
  if (!C.zf) goto L_11cb1edc;
  /* 11cb1ea4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb1ea6 push 0x11cb6870 */
  push32((uint32_t)(0x11cb6870u));
  /* 11cb1eab call ebx */
  call_ind((uint32_t)(EBX), 0x11cb1eadu);
  /* 11cb1ead mov edx, eax */
  EDX = (EAX);
  /* 11cb1eaf push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb1eb1 push 0x11cb6870 */
  push32((uint32_t)(0x11cb6870u));
  /* 11cb1eb6 mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 11cb1eba call ebx */
  call_ind((uint32_t)(EBX), 0x11cb1ebcu);
  /* 11cb1ebc mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 11cb1ec0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1ec3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1ec5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cb1ec7 jle 0x11cb1edc */
  if ((C.zf||C.sf!=C.of)) goto L_11cb1edc;
  /* 11cb1ec9 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1eca push 3 */
  push32((uint32_t)(0x3u));
  /* 11cb1ecc push 7 */
  push32((uint32_t)(0x7u));
  /* 11cb1ece call ebp */
  call_ind((uint32_t)(EBP), 0x11cb1ed0u);
  /* 11cb1ed0 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1ed1 push 7 */
  push32((uint32_t)(0x7u));
  /* 11cb1ed3 call dword ptr [0x11cb50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50ec))), 0x11cb1ed9u);
  /* 11cb1ed9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb1edc:;
  /* 11cb1edc push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11cb1ede call edi */
  call_ind((uint32_t)(EDI), 0x11cb1ee0u);
  /* 11cb1ee0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb1ee2 pop ecx */
  ECX = (pop32());
  /* 11cb1ee3 mov ebx, 0xc4 */
  EBX = (0xc4u);
  /* 11cb1ee8 mov esi, 0x11cb68e0 */
  ESI = (0x11cb68e0u);
  /* 11cb1eed je 0x11cb1ffb */
  if (C.zf) goto L_11cb1ffb;
  /* 11cb1ef3 push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb1ef5 call dword ptr [0x11cb50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50b0))), 0x11cb1efbu);
  /* 11cb1efb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb1efd pop ecx */
  ECX = (pop32());
  /* 11cb1efe je 0x11cb1ffb */
  if (C.zf) goto L_11cb1ffb;
  /* 11cb1f04 push dword ptr [0x11cb6868] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6868))));
  /* 11cb1f0a mov ebp, 0x11cb66f8 */
  EBP = (0x11cb66f8u);
  /* 11cb1f0f push ebx */
  push32((uint32_t)(EBX));
  /* 11cb1f10 push 0x11cb68a0 */
  push32((uint32_t)(0x11cb68a0u));
  /* 11cb1f15 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1f16 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1f17 push 0x11cb67f0 */
  push32((uint32_t)(0x11cb67f0u));
  /* 11cb1f1c call 0x11cb110a */
  push32(0x11cb1f21u); f_11cb110a();
  /* 11cb1f21 push dword ptr [0x11cb6868] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6868))));
  /* 11cb1f27 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb1f28 push 0x11cb68c8 */
  push32((uint32_t)(0x11cb68c8u));
  /* 11cb1f2d push esi */
  push32((uint32_t)(ESI));
  /* 11cb1f2e push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1f2f push 0x11cb6818 */
  push32((uint32_t)(0x11cb6818u));
  /* 11cb1f34 call 0x11cb110a */
  push32(0x11cb1f39u); f_11cb110a();
  /* 11cb1f39 push dword ptr [0x11cb6868] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6868))));
  /* 11cb1f3f push ebx */
  push32((uint32_t)(EBX));
  /* 11cb1f40 push 0x11cb6708 */
  push32((uint32_t)(0x11cb6708u));
  /* 11cb1f45 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1f46 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1f47 push 0x11cb6680 */
  push32((uint32_t)(0x11cb6680u));
  /* 11cb1f4c call 0x11cb110a */
  push32(0x11cb1f51u); f_11cb110a();
  /* 11cb1f51 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1f54 push dword ptr [0x11cb6868] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6868))));
  /* 11cb1f5a push ebx */
  push32((uint32_t)(EBX));
  /* 11cb1f5b push 0x11cb68a8 */
  push32((uint32_t)(0x11cb68a8u));
  /* 11cb1f60 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1f61 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1f62 push 0x11cb67f8 */
  push32((uint32_t)(0x11cb67f8u));
  /* 11cb1f67 call 0x11cb110a */
  push32(0x11cb1f6cu); f_11cb110a();
  /* 11cb1f6c push dword ptr [0x11cb6868] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6868))));
  /* 11cb1f72 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb1f73 push 0x11cb68c0 */
  push32((uint32_t)(0x11cb68c0u));
  /* 11cb1f78 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1f79 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1f7a push 0x11cb6810 */
  push32((uint32_t)(0x11cb6810u));
  /* 11cb1f7f call 0x11cb110a */
  push32(0x11cb1f84u); f_11cb110a();
  /* 11cb1f84 push dword ptr [0x11cb6868] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6868))));
  /* 11cb1f8a push ebx */
  push32((uint32_t)(EBX));
  /* 11cb1f8b push 0x11cb6710 */
  push32((uint32_t)(0x11cb6710u));
  /* 11cb1f90 push esi */
  push32((uint32_t)(ESI));
  /* 11cb1f91 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1f92 push 0x11cb6688 */
  push32((uint32_t)(0x11cb6688u));
  /* 11cb1f97 call 0x11cb110a */
  push32(0x11cb1f9cu); f_11cb110a();
  /* 11cb1f9c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1f9f push dword ptr [0x11cb6868] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6868))));
  /* 11cb1fa5 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb1fa6 push 0x11cb6738 */
  push32((uint32_t)(0x11cb6738u));
  /* 11cb1fab push esi */
  push32((uint32_t)(ESI));
  /* 11cb1fac push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1fad push 0x11cb66b8 */
  push32((uint32_t)(0x11cb66b8u));
  /* 11cb1fb2 call 0x11cb110a */
  push32(0x11cb1fb7u); f_11cb110a();
  /* 11cb1fb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb1fb9 push 0x11cb66c8 */
  push32((uint32_t)(0x11cb66c8u));
  /* 11cb1fbe call dword ptr [0x11cb50f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50f0))), 0x11cb1fc4u);
  /* 11cb1fc4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1fc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb1fc9 jle 0x11cb1fec */
  if ((C.zf||C.sf!=C.of)) goto L_11cb1fec;
  /* 11cb1fcb mov eax, dword ptr [0x11cb6868] */
  EAX = (r32((uint32_t)(0x11cb6868)));
  /* 11cb1fd0 add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb1fd2 push eax */
  push32((uint32_t)(EAX));
  /* 11cb1fd3 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11cb1fd8 push 0x11cb66c8 */
  push32((uint32_t)(0x11cb66c8u));
  /* 11cb1fdd push esi */
  push32((uint32_t)(ESI));
  /* 11cb1fde push ebp */
  push32((uint32_t)(EBP));
  /* 11cb1fdf push 0x11cb67f8 */
  push32((uint32_t)(0x11cb67f8u));
  /* 11cb1fe4 call 0x11cb110a */
  push32(0x11cb1fe9u); f_11cb110a();
  /* 11cb1fe9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb1fec:;
  /* 11cb1fec push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 11cb1ff1 push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb1ff3 call dword ptr [0x11cb50b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50b8))), 0x11cb1ff9u);
  /* 11cb1ff9 pop ecx */
  ECX = (pop32());
  /* 11cb1ffa pop ecx */
  ECX = (pop32());
L_11cb1ffb:;
  /* 11cb1ffb push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11cb1ffd call edi */
  call_ind((uint32_t)(EDI), 0x11cb1fffu);
  /* 11cb1fff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb2001 pop ecx */
  ECX = (pop32());
  /* 11cb2002 je 0x11cb213f */
  if (C.zf) goto L_11cb213f;
  /* 11cb2008 push 6 */
  push32((uint32_t)(0x6u));
  /* 11cb200a call dword ptr [0x11cb50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50b0))), 0x11cb2010u);
  /* 11cb2010 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb2012 pop ecx */
  ECX = (pop32());
  /* 11cb2013 je 0x11cb213f */
  if (C.zf) goto L_11cb213f;
  /* 11cb2019 push dword ptr [0x11cb6868] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6868))));
  /* 11cb201f mov ebp, 0x11cb6700 */
  EBP = (0x11cb6700u);
  /* 11cb2024 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2025 push 0x11cb6898 */
  push32((uint32_t)(0x11cb6898u));
  /* 11cb202a push esi */
  push32((uint32_t)(ESI));
  /* 11cb202b push ebp */
  push32((uint32_t)(EBP));
  /* 11cb202c push 0x11cb67e8 */
  push32((uint32_t)(0x11cb67e8u));
  /* 11cb2031 call 0x11cb110a */
  push32(0x11cb2036u); f_11cb110a();
  /* 11cb2036 push dword ptr [0x11cb6868] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6868))));
  /* 11cb203c push ebx */
  push32((uint32_t)(EBX));
  /* 11cb203d push 0x11cb68b0 */
  push32((uint32_t)(0x11cb68b0u));
  /* 11cb2042 push esi */
  push32((uint32_t)(ESI));
  /* 11cb2043 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb2044 push 0x11cb6800 */
  push32((uint32_t)(0x11cb6800u));
  /* 11cb2049 call 0x11cb110a */
  push32(0x11cb204eu); f_11cb110a();
  /* 11cb204e push dword ptr [0x11cb6868] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6868))));
  /* 11cb2054 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2055 push 0x11cb68b8 */
  push32((uint32_t)(0x11cb68b8u));
  /* 11cb205a push esi */
  push32((uint32_t)(ESI));
  /* 11cb205b push ebp */
  push32((uint32_t)(EBP));
  /* 11cb205c push 0x11cb6808 */
  push32((uint32_t)(0x11cb6808u));
  /* 11cb2061 call 0x11cb110a */
  push32(0x11cb2066u); f_11cb110a();
  /* 11cb2066 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb2069 push dword ptr [0x11cb6868] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6868))));
  /* 11cb206f push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2070 push 0x11cb68d0 */
  push32((uint32_t)(0x11cb68d0u));
  /* 11cb2075 push esi */
  push32((uint32_t)(ESI));
  /* 11cb2076 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb2077 push 0x11cb6820 */
  push32((uint32_t)(0x11cb6820u));
  /* 11cb207c call 0x11cb110a */
  push32(0x11cb2081u); f_11cb110a();
  /* 11cb2081 push dword ptr [0x11cb6868] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6868))));
  /* 11cb2087 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2088 push 0x11cb68d8 */
  push32((uint32_t)(0x11cb68d8u));
  /* 11cb208d push esi */
  push32((uint32_t)(ESI));
  /* 11cb208e push ebp */
  push32((uint32_t)(EBP));
  /* 11cb208f push 0x11cb6828 */
  push32((uint32_t)(0x11cb6828u));
  /* 11cb2094 call 0x11cb110a */
  push32(0x11cb2099u); f_11cb110a();
  /* 11cb2099 push dword ptr [0x11cb6868] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6868))));
  /* 11cb209f push ebx */
  push32((uint32_t)(EBX));
  /* 11cb20a0 push 0x11cb6718 */
  push32((uint32_t)(0x11cb6718u));
  /* 11cb20a5 push esi */
  push32((uint32_t)(ESI));
  /* 11cb20a6 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb20a7 push 0x11cb6690 */
  push32((uint32_t)(0x11cb6690u));
  /* 11cb20ac call 0x11cb110a */
  push32(0x11cb20b1u); f_11cb110a();
  /* 11cb20b1 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb20b4 push dword ptr [0x11cb6868] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6868))));
  /* 11cb20ba push ebx */
  push32((uint32_t)(EBX));
  /* 11cb20bb push 0x11cb6720 */
  push32((uint32_t)(0x11cb6720u));
  /* 11cb20c0 push esi */
  push32((uint32_t)(ESI));
  /* 11cb20c1 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb20c2 push 0x11cb6698 */
  push32((uint32_t)(0x11cb6698u));
  /* 11cb20c7 call 0x11cb110a */
  push32(0x11cb20ccu); f_11cb110a();
  /* 11cb20cc push dword ptr [0x11cb6868] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6868))));
  /* 11cb20d2 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb20d3 push 0x11cb6728 */
  push32((uint32_t)(0x11cb6728u));
  /* 11cb20d8 push esi */
  push32((uint32_t)(ESI));
  /* 11cb20d9 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb20da push 0x11cb66a0 */
  push32((uint32_t)(0x11cb66a0u));
  /* 11cb20df call 0x11cb110a */
  push32(0x11cb20e4u); f_11cb110a();
  /* 11cb20e4 push dword ptr [0x11cb6868] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6868))));
  /* 11cb20ea push ebx */
  push32((uint32_t)(EBX));
  /* 11cb20eb push 0x11cb6730 */
  push32((uint32_t)(0x11cb6730u));
  /* 11cb20f0 push esi */
  push32((uint32_t)(ESI));
  /* 11cb20f1 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb20f2 push 0x11cb66b0 */
  push32((uint32_t)(0x11cb66b0u));
  /* 11cb20f7 call 0x11cb110a */
  push32(0x11cb20fcu); f_11cb110a();
  /* 11cb20fc add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb20ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb2101 push 0x11cb66c0 */
  push32((uint32_t)(0x11cb66c0u));
  /* 11cb2106 call dword ptr [0x11cb50f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50f0))), 0x11cb210cu);
  /* 11cb210c pop ecx */
  ECX = (pop32());
  /* 11cb210d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb210f pop ecx */
  ECX = (pop32());
  /* 11cb2110 jle 0x11cb2130 */
  if ((C.zf||C.sf!=C.of)) goto L_11cb2130;
  /* 11cb2112 mov eax, dword ptr [0x11cb6868] */
  EAX = (r32((uint32_t)(0x11cb6868)));
  /* 11cb2117 add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb2119 push eax */
  push32((uint32_t)(EAX));
  /* 11cb211a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb211c push 0x11cb66c0 */
  push32((uint32_t)(0x11cb66c0u));
  /* 11cb2121 push esi */
  push32((uint32_t)(ESI));
  /* 11cb2122 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb2123 push 0x11cb6800 */
  push32((uint32_t)(0x11cb6800u));
  /* 11cb2128 call 0x11cb110a */
  push32(0x11cb212du); f_11cb110a();
  /* 11cb212d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb2130:;
  /* 11cb2130 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 11cb2135 push 6 */
  push32((uint32_t)(0x6u));
  /* 11cb2137 call dword ptr [0x11cb50b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50b8))), 0x11cb213du);
  /* 11cb213d pop ecx */
  ECX = (pop32());
  /* 11cb213e pop ecx */
  ECX = (pop32());
L_11cb213f:;
  /* 11cb213f push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11cb2141 call edi */
  call_ind((uint32_t)(EDI), 0x11cb2143u);
  /* 11cb2143 mov ebp, dword ptr [0x11cb50fc] */
  EBP = (r32((uint32_t)(0x11cb50fc)));
  /* 11cb2149 pop ecx */
  ECX = (pop32());
  /* 11cb214a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb214c je 0x11cb21b6 */
  if (C.zf) goto L_11cb21b6;
  /* 11cb214e mov ebx, dword ptr [0x11cb50f0] */
  EBX = (r32((uint32_t)(0x11cb50f0)));
  /* 11cb2154 push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb2156 push 0x11cb66c8 */
  push32((uint32_t)(0x11cb66c8u));
  /* 11cb215b call ebx */
  call_ind((uint32_t)(EBX), 0x11cb215du);
  /* 11cb215d pop ecx */
  ECX = (pop32());
  /* 11cb215e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2161 pop ecx */
  ECX = (pop32());
  /* 11cb2162 jge 0x11cb21bc */
  if ((C.sf==C.of)) goto L_11cb21bc;
  /* 11cb2164 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb2166 push 0x11cb66c8 */
  push32((uint32_t)(0x11cb66c8u));
  /* 11cb216b call ebx */
  call_ind((uint32_t)(EBX), 0x11cb216du);
  /* 11cb216d pop ecx */
  ECX = (pop32());
  /* 11cb216e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2171 pop ecx */
  ECX = (pop32());
  /* 11cb2172 jle 0x11cb21bc */
  if ((C.zf||C.sf!=C.of)) goto L_11cb21bc;
  /* 11cb2174 push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb2176 push 0x11cb6858 */
  push32((uint32_t)(0x11cb6858u));
  /* 11cb217b call ebp */
  call_ind((uint32_t)(EBP), 0x11cb217du);
  /* 11cb217d pop ecx */
  ECX = (pop32());
  /* 11cb217e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2181 pop ecx */
  ECX = (pop32());
  /* 11cb2182 jl 0x11cb219c */
  if ((C.sf!=C.of)) goto L_11cb219c;
  /* 11cb2184 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11cb2186 call edi */
  call_ind((uint32_t)(EDI), 0x11cb2188u);
  /* 11cb2188 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb218a pop ecx */
  ECX = (pop32());
  /* 11cb218b jne 0x11cb21bc */
  if (!C.zf) goto L_11cb21bc;
  /* 11cb218d push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb218f push 0x11cb6858 */
  push32((uint32_t)(0x11cb6858u));
  /* 11cb2194 call ebp */
  call_ind((uint32_t)(EBP), 0x11cb2196u);
  /* 11cb2196 pop ecx */
  ECX = (pop32());
  /* 11cb2197 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb2199 pop ecx */
  ECX = (pop32());
  /* 11cb219a jne 0x11cb21bc */
  if (!C.zf) goto L_11cb21bc;
L_11cb219c:;
  /* 11cb219c push 0x11cb6218 */
  push32((uint32_t)(0x11cb6218u));
  /* 11cb21a1 call dword ptr [0x11cb50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50e8))), 0x11cb21a7u);
  /* 11cb21a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb21a9 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11cb21ab call dword ptr [0x11cb50ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50ec))), 0x11cb21b1u);
  /* 11cb21b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb21b4 jmp 0x11cb21bc */
  goto L_11cb21bc;
L_11cb21b6:;
  /* 11cb21b6 mov ebx, dword ptr [0x11cb50f0] */
  EBX = (r32((uint32_t)(0x11cb50f0)));
L_11cb21bc:;
  /* 11cb21bc push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11cb21be call edi */
  call_ind((uint32_t)(EDI), 0x11cb21c0u);
  /* 11cb21c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb21c2 pop ecx */
  ECX = (pop32());
  /* 11cb21c3 je 0x11cb2226 */
  if (C.zf) goto L_11cb2226;
  /* 11cb21c5 push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb21c7 push 0x11cb66c0 */
  push32((uint32_t)(0x11cb66c0u));
  /* 11cb21cc call ebx */
  call_ind((uint32_t)(EBX), 0x11cb21ceu);
  /* 11cb21ce pop ecx */
  ECX = (pop32());
  /* 11cb21cf cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb21d2 pop ecx */
  ECX = (pop32());
  /* 11cb21d3 jge 0x11cb2226 */
  if ((C.sf==C.of)) goto L_11cb2226;
  /* 11cb21d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb21d7 push 0x11cb66c0 */
  push32((uint32_t)(0x11cb66c0u));
  /* 11cb21dc call ebx */
  call_ind((uint32_t)(EBX), 0x11cb21deu);
  /* 11cb21de pop ecx */
  ECX = (pop32());
  /* 11cb21df cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb21e2 pop ecx */
  ECX = (pop32());
  /* 11cb21e3 jle 0x11cb2226 */
  if ((C.zf||C.sf!=C.of)) goto L_11cb2226;
  /* 11cb21e5 mov ebx, 0x11cb6858 */
  EBX = (0x11cb6858u);
  /* 11cb21ea push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb21ec push ebx */
  push32((uint32_t)(EBX));
  /* 11cb21ed call ebp */
  call_ind((uint32_t)(EBP), 0x11cb21efu);
  /* 11cb21ef pop ecx */
  ECX = (pop32());
  /* 11cb21f0 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb21f3 pop ecx */
  ECX = (pop32());
  /* 11cb21f4 jl 0x11cb220a */
  if ((C.sf!=C.of)) goto L_11cb220a;
  /* 11cb21f6 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11cb21f8 call edi */
  call_ind((uint32_t)(EDI), 0x11cb21fau);
  /* 11cb21fa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb21fc pop ecx */
  ECX = (pop32());
  /* 11cb21fd jne 0x11cb2226 */
  if (!C.zf) goto L_11cb2226;
  /* 11cb21ff push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb2201 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2202 call ebp */
  call_ind((uint32_t)(EBP), 0x11cb2204u);
  /* 11cb2204 pop ecx */
  ECX = (pop32());
  /* 11cb2205 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb2207 pop ecx */
  ECX = (pop32());
  /* 11cb2208 jne 0x11cb2226 */
  if (!C.zf) goto L_11cb2226;
L_11cb220a:;
  /* 11cb220a push 0x11cb6218 */
  push32((uint32_t)(0x11cb6218u));
  /* 11cb220f call dword ptr [0x11cb50e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50e8))), 0x11cb2215u);
  /* 11cb2215 mov ebx, dword ptr [0x11cb50ec] */
  EBX = (r32((uint32_t)(0x11cb50ec)));
  /* 11cb221b push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb221d push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11cb221f call ebx */
  call_ind((uint32_t)(EBX), 0x11cb2221u);
  /* 11cb2221 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb2224 jmp 0x11cb222c */
  goto L_11cb222c;
L_11cb2226:;
  /* 11cb2226 mov ebx, dword ptr [0x11cb50ec] */
  EBX = (r32((uint32_t)(0x11cb50ec)));
L_11cb222c:;
  /* 11cb222c push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11cb222e call edi */
  call_ind((uint32_t)(EDI), 0x11cb2230u);
  /* 11cb2230 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb2232 pop ecx */
  ECX = (pop32());
  /* 11cb2233 je 0x11cb226a */
  if (C.zf) goto L_11cb226a;
  /* 11cb2235 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11cb2237 call edi */
  call_ind((uint32_t)(EDI), 0x11cb2239u);
  /* 11cb2239 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb223b pop ecx */
  ECX = (pop32());
  /* 11cb223c jne 0x11cb226a */
  if (!C.zf) goto L_11cb226a;
  /* 11cb223e push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11cb2240 call edi */
  call_ind((uint32_t)(EDI), 0x11cb2242u);
  /* 11cb2242 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb2244 pop ecx */
  ECX = (pop32());
  /* 11cb2245 jne 0x11cb226a */
  if (!C.zf) goto L_11cb226a;
  /* 11cb2247 push 5 */
  push32((uint32_t)(0x5u));
  /* 11cb2249 push esi */
  push32((uint32_t)(ESI));
  /* 11cb224a call ebp */
  call_ind((uint32_t)(EBP), 0x11cb224cu);
  /* 11cb224c pop ecx */
  ECX = (pop32());
  /* 11cb224d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb224f pop ecx */
  ECX = (pop32());
  /* 11cb2250 jne 0x11cb226a */
  if (!C.zf) goto L_11cb226a;
  /* 11cb2252 mov esi, dword ptr [0x11cb50e8] */
  ESI = (r32((uint32_t)(0x11cb50e8)));
  /* 11cb2258 push 0x11cb6210 */
  push32((uint32_t)(0x11cb6210u));
  /* 11cb225d call esi */
  call_ind((uint32_t)(ESI), 0x11cb225fu);
  /* 11cb225f push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb2261 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11cb2263 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb2265u);
  /* 11cb2265 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb2268 jmp 0x11cb2270 */
  goto L_11cb2270;
L_11cb226a:;
  /* 11cb226a mov esi, dword ptr [0x11cb50e8] */
  ESI = (r32((uint32_t)(0x11cb50e8)));
L_11cb2270:;
  /* 11cb2270 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11cb2272 call edi */
  call_ind((uint32_t)(EDI), 0x11cb2274u);
  /* 11cb2274 mov ebp, dword ptr [0x11cb5100] */
  EBP = (r32((uint32_t)(0x11cb5100)));
  /* 11cb227a pop ecx */
  ECX = (pop32());
  /* 11cb227b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb227d je 0x11cb2298 */
  if (C.zf) goto L_11cb2298;
  /* 11cb227f push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb2281 call ebp */
  call_ind((uint32_t)(EBP), 0x11cb2283u);
  /* 11cb2283 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb2285 pop ecx */
  ECX = (pop32());
  /* 11cb2286 je 0x11cb2298 */
  if (C.zf) goto L_11cb2298;
  /* 11cb2288 push 0x11cb6208 */
  push32((uint32_t)(0x11cb6208u));
  /* 11cb228d call esi */
  call_ind((uint32_t)(ESI), 0x11cb228fu);
  /* 11cb228f push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb2291 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11cb2293 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb2295u);
  /* 11cb2295 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb2298:;
  /* 11cb2298 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11cb229a call edi */
  call_ind((uint32_t)(EDI), 0x11cb229cu);
  /* 11cb229c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb229e pop ecx */
  ECX = (pop32());
  /* 11cb229f je 0x11cb22ba */
  if (C.zf) goto L_11cb22ba;
  /* 11cb22a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb22a3 call ebp */
  call_ind((uint32_t)(EBP), 0x11cb22a5u);
  /* 11cb22a5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb22a7 pop ecx */
  ECX = (pop32());
  /* 11cb22a8 je 0x11cb22ba */
  if (C.zf) goto L_11cb22ba;
  /* 11cb22aa push 0x11cb6200 */
  push32((uint32_t)(0x11cb6200u));
  /* 11cb22af call esi */
  call_ind((uint32_t)(ESI), 0x11cb22b1u);
  /* 11cb22b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb22b3 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11cb22b5 call ebx */
  call_ind((uint32_t)(EBX), 0x11cb22b7u);
  /* 11cb22b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb22ba:;
  /* 11cb22ba push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11cb22bc call edi */
  call_ind((uint32_t)(EDI), 0x11cb22beu);
  /* 11cb22be test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb22c0 pop ecx */
  ECX = (pop32());
  /* 11cb22c1 je 0x11cb2302 */
  if (C.zf) goto L_11cb2302;
  /* 11cb22c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb22c5 call ebp */
  call_ind((uint32_t)(EBP), 0x11cb22c7u);
  /* 11cb22c7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb22c9 pop ecx */
  ECX = (pop32());
  /* 11cb22ca je 0x11cb2302 */
  if (C.zf) goto L_11cb2302;
  /* 11cb22cc push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb22ce pop ebp */
  EBP = (pop32());
L_11cb22cf:;
  /* 11cb22cf push ebp */
  push32((uint32_t)(EBP));
  /* 11cb22d0 call dword ptr [0x11cb50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50b0))), 0x11cb22d6u);
  /* 11cb22d6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb22d8 pop ecx */
  ECX = (pop32());
  /* 11cb22d9 jne 0x11cb22e6 */
  if (!C.zf) goto L_11cb22e6;
  /* 11cb22db push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb22dd push ebp */
  push32((uint32_t)(EBP));
  /* 11cb22de call dword ptr [0x11cb50b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50b8))), 0x11cb22e4u);
  /* 11cb22e4 pop ecx */
  ECX = (pop32());
  /* 11cb22e5 pop ecx */
  ECX = (pop32());
L_11cb22e6:;
  /* 11cb22e6 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11cb22e7 cmp ebp, 0x1e */
  { uint32_t _a=(EBP),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb22ea jl 0x11cb22cf */
  if ((C.sf!=C.of)) goto L_11cb22cf;
  /* 11cb22ec push 0x11cb61f8 */
  push32((uint32_t)(0x11cb61f8u));
  /* 11cb22f1 call esi */
  call_ind((uint32_t)(ESI), 0x11cb22f3u);
  /* 11cb22f3 call dword ptr [0x11cb5104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5104))), 0x11cb22f9u);
  /* 11cb22f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb22fb push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11cb22fd call ebx */
  call_ind((uint32_t)(EBX), 0x11cb22ffu);
  /* 11cb22ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb2302:;
  /* 11cb2302 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11cb2304 call edi */
  call_ind((uint32_t)(EDI), 0x11cb2306u);
  /* 11cb2306 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb2308 pop ecx */
  ECX = (pop32());
  /* 11cb2309 jne 0x11cb233f */
  if (!C.zf) goto L_11cb233f;
  /* 11cb230b push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11cb230d call edi */
  call_ind((uint32_t)(EDI), 0x11cb230fu);
  /* 11cb230f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb2311 pop ecx */
  ECX = (pop32());
  /* 11cb2312 jne 0x11cb233f */
  if (!C.zf) goto L_11cb233f;
  /* 11cb2314 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb2316 pop edi */
  EDI = (pop32());
L_11cb2317:;
  /* 11cb2317 push edi */
  push32((uint32_t)(EDI));
  /* 11cb2318 call dword ptr [0x11cb50b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50b0))), 0x11cb231eu);
  /* 11cb231e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb2320 pop ecx */
  ECX = (pop32());
  /* 11cb2321 jne 0x11cb232b */
  if (!C.zf) goto L_11cb232b;
  /* 11cb2323 push edi */
  push32((uint32_t)(EDI));
  /* 11cb2324 call dword ptr [0x11cb5108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5108))), 0x11cb232au);
  /* 11cb232a pop ecx */
  ECX = (pop32());
L_11cb232b:;
  /* 11cb232b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11cb232c cmp edi, 0x1e */
  { uint32_t _a=(EDI),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb232f jl 0x11cb2317 */
  if ((C.sf!=C.of)) goto L_11cb2317;
  /* 11cb2331 push 0x11cb61f0 */
  push32((uint32_t)(0x11cb61f0u));
  /* 11cb2336 call esi */
  call_ind((uint32_t)(ESI), 0x11cb2338u);
  /* 11cb2338 pop ecx */
  ECX = (pop32());
  /* 11cb2339 call dword ptr [0x11cb510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb510c))), 0x11cb233fu);
L_11cb233f:;
  /* 11cb233f pop edi */
  EDI = (pop32());
  /* 11cb2340 pop esi */
  ESI = (pop32());
  /* 11cb2341 pop ebp */
  EBP = (pop32());
  /* 11cb2342 pop ebx */
  EBX = (pop32());
  /* 11cb2343 pop ecx */
  ECX = (pop32());
  /* 11cb2344 ret  */
  ESPCHK(0x11cb1667u, _esp0);
  ESP += 4; return;
}

/* FUN_10002345 @ 0x11cb2345 (217 bytes, 57 insns) */
void f_11cb2345(void) {
  FTRACE(0x11cb2345u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb2345 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11cb2349 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb234c jne 0x11cb23da */
  if (!C.zf) goto L_11cb23da;
  /* 11cb2352 call dword ptr [0x11cb5094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5094))), 0x11cb2358u);
  /* 11cb2358 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb235a mov dword ptr [0x11cb6918], eax */
  w32((uint32_t)(0x11cb6918), (EAX));
  /* 11cb235f call 0x11cb2d79 */
  push32(0x11cb2364u); f_11cb2d79();
  /* 11cb2364 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb2366 pop ecx */
  ECX = (pop32());
  /* 11cb2367 je 0x11cb23a5 */
  if (C.zf) goto L_11cb23a5;
  /* 11cb2369 mov eax, dword ptr [0x11cb6918] */
  EAX = (r32((uint32_t)(0x11cb6918)));
  /* 11cb236e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cb2370 mov cl, byte ptr [0x11cb6919] */
  CL = (r8((uint32_t)(0x11cb6919)));
  /* 11cb2376 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cb237b shr dword ptr [0x11cb6918], 0x10 */
  w32((uint32_t)(0x11cb6918), (sh_shr((uint32_t)(r32((uint32_t)(0x11cb6918))), (0x10u)&0x1f, 32)));
  /* 11cb2382 mov dword ptr [0x11cb6920], eax */
  w32((uint32_t)(0x11cb6920), (EAX));
  /* 11cb2387 mov dword ptr [0x11cb6924], ecx */
  w32((uint32_t)(0x11cb6924), (ECX));
  /* 11cb238d shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11cb2390 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb2392 mov dword ptr [0x11cb691c], eax */
  w32((uint32_t)(0x11cb691c), (EAX));
  /* 11cb2397 call 0x11cb260c */
  push32(0x11cb239cu); f_11cb260c();
  /* 11cb239c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb239e jne 0x11cb23a9 */
  if (!C.zf) goto L_11cb23a9;
  /* 11cb23a0 call 0x11cb2db5 */
  push32(0x11cb23a5u); f_11cb2db5();
L_11cb23a5:;
  /* 11cb23a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb23a7 jmp 0x11cb241b */
  goto L_11cb241b;
L_11cb23a9:;
  /* 11cb23a9 call dword ptr [0x11cb5090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5090))), 0x11cb23afu);
  /* 11cb23af mov dword ptr [0x11cb6e78], eax */
  w32((uint32_t)(0x11cb6e78), (EAX));
  /* 11cb23b4 call 0x11cb2c47 */
  push32(0x11cb23b9u); f_11cb2c47();
  /* 11cb23b9 mov dword ptr [0x11cb6904], eax */
  w32((uint32_t)(0x11cb6904), (EAX));
  /* 11cb23be call 0x11cb2731 */
  push32(0x11cb23c3u); f_11cb2731();
  /* 11cb23c3 call 0x11cb29fa */
  push32(0x11cb23c8u); f_11cb29fa();
  /* 11cb23c8 call 0x11cb2941 */
  push32(0x11cb23cdu); f_11cb2941();
  /* 11cb23cd call 0x11cb24ee */
  push32(0x11cb23d2u); f_11cb24ee();
  /* 11cb23d2 inc dword ptr [0x11cb6900] */
  { uint32_t _r=(r32((uint32_t)(0x11cb6900)))+1; w32((uint32_t)(0x11cb6900), (_r)); fl_inc(_r,32); }
  /* 11cb23d8 jmp 0x11cb2418 */
  goto L_11cb2418;
L_11cb23da:;
  /* 11cb23da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cb23dc cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb23de jne 0x11cb240c */
  if (!C.zf) goto L_11cb240c;
  /* 11cb23e0 cmp dword ptr [0x11cb6900], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11cb6900))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb23e6 jle 0x11cb23a5 */
  if ((C.zf||C.sf!=C.of)) goto L_11cb23a5;
  /* 11cb23e8 dec dword ptr [0x11cb6900] */
  { uint32_t _r=(r32((uint32_t)(0x11cb6900)))-1; w32((uint32_t)(0x11cb6900), (_r)); fl_dec(_r,32); }
  /* 11cb23ee cmp dword ptr [0x11cb6950], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11cb6950))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb23f4 jne 0x11cb23fb */
  if (!C.zf) goto L_11cb23fb;
  /* 11cb23f6 call 0x11cb252c */
  push32(0x11cb23fbu); f_11cb252c();
L_11cb23fb:;
  /* 11cb23fb call 0x11cb28ed */
  push32(0x11cb2400u); f_11cb28ed();
  /* 11cb2400 call 0x11cb2660 */
  push32(0x11cb2405u); f_11cb2660();
  /* 11cb2405 call 0x11cb2db5 */
  push32(0x11cb240au); f_11cb2db5();
  /* 11cb240a jmp 0x11cb2418 */
  goto L_11cb2418;
L_11cb240c:;
  /* 11cb240c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb240f jne 0x11cb2418 */
  if (!C.zf) goto L_11cb2418;
  /* 11cb2411 push ecx */
  push32((uint32_t)(ECX));
  /* 11cb2412 call 0x11cb2691 */
  push32(0x11cb2417u); f_11cb2691();
  /* 11cb2417 pop ecx */
  ECX = (pop32());
L_11cb2418:;
  /* 11cb2418 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb241a pop eax */
  EAX = (pop32());
L_11cb241b:;
  /* 11cb241b ret 0xc */
  ESPCHK(0x11cb2345u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11cb241e (157 bytes, 73 insns) */
void f_11cb241e(void) {
  FTRACE(0x11cb241eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb241e push ebp */
  push32((uint32_t)(EBP));
  /* 11cb241f mov ebp, esp */
  EBP = (ESP);
  /* 11cb2421 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2422 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb2425 push esi */
  push32((uint32_t)(ESI));
  /* 11cb2426 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11cb2429 push edi */
  push32((uint32_t)(EDI));
  /* 11cb242a mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11cb242d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11cb242f jne 0x11cb243a */
  if (!C.zf) goto L_11cb243a;
  /* 11cb2431 cmp dword ptr [0x11cb6900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cb6900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2438 jmp 0x11cb2460 */
  goto L_11cb2460;
L_11cb243a:;
  /* 11cb243a cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb243d je 0x11cb2444 */
  if (C.zf) goto L_11cb2444;
  /* 11cb243f cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2442 jne 0x11cb2466 */
  if (!C.zf) goto L_11cb2466;
L_11cb2444:;
  /* 11cb2444 mov eax, dword ptr [0x11cb6e7c] */
  EAX = (r32((uint32_t)(0x11cb6e7c)));
  /* 11cb2449 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb244b je 0x11cb2456 */
  if (C.zf) goto L_11cb2456;
  /* 11cb244d push edi */
  push32((uint32_t)(EDI));
  /* 11cb244e push esi */
  push32((uint32_t)(ESI));
  /* 11cb244f push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2450 call eax */
  call_ind((uint32_t)(EAX), 0x11cb2452u);
  /* 11cb2452 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb2454 je 0x11cb2462 */
  if (C.zf) goto L_11cb2462;
L_11cb2456:;
  /* 11cb2456 push edi */
  push32((uint32_t)(EDI));
  /* 11cb2457 push esi */
  push32((uint32_t)(ESI));
  /* 11cb2458 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2459 call 0x11cb2345 */
  push32(0x11cb245eu); f_11cb2345();
  /* 11cb245e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11cb2460:;
  /* 11cb2460 jne 0x11cb2466 */
  if (!C.zf) goto L_11cb2466;
L_11cb2462:;
  /* 11cb2462 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb2464 jmp 0x11cb24b4 */
  goto L_11cb24b4;
L_11cb2466:;
  /* 11cb2466 push edi */
  push32((uint32_t)(EDI));
  /* 11cb2467 push esi */
  push32((uint32_t)(ESI));
  /* 11cb2468 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2469 call 0x11cb1000 */
  push32(0x11cb246eu); f_11cb1000();
  /* 11cb246e cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2471 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11cb2474 jne 0x11cb2482 */
  if (!C.zf) goto L_11cb2482;
  /* 11cb2476 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb2478 jne 0x11cb24b1 */
  if (!C.zf) goto L_11cb24b1;
  /* 11cb247a push edi */
  push32((uint32_t)(EDI));
  /* 11cb247b push eax */
  push32((uint32_t)(EAX));
  /* 11cb247c push ebx */
  push32((uint32_t)(EBX));
  /* 11cb247d call 0x11cb2345 */
  push32(0x11cb2482u); f_11cb2345();
L_11cb2482:;
  /* 11cb2482 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11cb2484 je 0x11cb248b */
  if (C.zf) goto L_11cb248b;
  /* 11cb2486 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2489 jne 0x11cb24b1 */
  if (!C.zf) goto L_11cb24b1;
L_11cb248b:;
  /* 11cb248b push edi */
  push32((uint32_t)(EDI));
  /* 11cb248c push esi */
  push32((uint32_t)(ESI));
  /* 11cb248d push ebx */
  push32((uint32_t)(EBX));
  /* 11cb248e call 0x11cb2345 */
  push32(0x11cb2493u); f_11cb2345();
  /* 11cb2493 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb2495 jne 0x11cb249a */
  if (!C.zf) goto L_11cb249a;
  /* 11cb2497 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11cb249a:;
  /* 11cb249a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb249e je 0x11cb24b1 */
  if (C.zf) goto L_11cb24b1;
  /* 11cb24a0 mov eax, dword ptr [0x11cb6e7c] */
  EAX = (r32((uint32_t)(0x11cb6e7c)));
  /* 11cb24a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb24a7 je 0x11cb24b1 */
  if (C.zf) goto L_11cb24b1;
  /* 11cb24a9 push edi */
  push32((uint32_t)(EDI));
  /* 11cb24aa push esi */
  push32((uint32_t)(ESI));
  /* 11cb24ab push ebx */
  push32((uint32_t)(EBX));
  /* 11cb24ac call eax */
  call_ind((uint32_t)(EAX), 0x11cb24aeu);
  /* 11cb24ae mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11cb24b1:;
  /* 11cb24b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11cb24b4:;
  /* 11cb24b4 pop edi */
  EDI = (pop32());
  /* 11cb24b5 pop esi */
  ESI = (pop32());
  /* 11cb24b6 pop ebx */
  EBX = (pop32());
  /* 11cb24b7 pop ebp */
  EBP = (pop32());
  /* 11cb24b8 ret 0xc */
  ESPCHK(0x11cb241eu, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11cb24bb (48 bytes, 15 insns) */
void f_11cb24bb(void) {
  FTRACE(0x11cb24bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb24bb mov eax, dword ptr [0x11cb690c] */
  EAX = (r32((uint32_t)(0x11cb690c)));
  /* 11cb24c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb24c3 je 0x11cb24d2 */
  if (C.zf) goto L_11cb24d2;
  /* 11cb24c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb24c7 jne 0x11cb24d7 */
  if (!C.zf) goto L_11cb24d7;
  /* 11cb24c9 cmp dword ptr [0x11cb6910], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cb6910))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb24d0 jne 0x11cb24d7 */
  if (!C.zf) goto L_11cb24d7;
L_11cb24d2:;
  /* 11cb24d2 call 0x11cb2e2a */
  push32(0x11cb24d7u); f_11cb2e2a();
L_11cb24d7:;
  /* 11cb24d7 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11cb24db call 0x11cb2e63 */
  push32(0x11cb24e0u); f_11cb2e63();
  /* 11cb24e0 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11cb24e5 call dword ptr [0x11cb6350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb6350))), 0x11cb24ebu);
  /* 11cb24eb pop ecx */
  ECX = (pop32());
  /* 11cb24ec pop ecx */
  ECX = (pop32());
  /* 11cb24ed ret  */
  ESPCHK(0x11cb24bbu, _esp0);
  ESP += 4; return;
}

/* FUN_100024ee @ 0x11cb24ee (45 bytes, 12 insns) */
void f_11cb24ee(void) {
  FTRACE(0x11cb24eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb24ee mov eax, dword ptr [0x11cb6e74] */
  EAX = (r32((uint32_t)(0x11cb6e74)));
  /* 11cb24f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb24f5 je 0x11cb24f9 */
  if (C.zf) goto L_11cb24f9;
  /* 11cb24f7 call eax */
  call_ind((uint32_t)(EAX), 0x11cb24f9u);
L_11cb24f9:;
  /* 11cb24f9 push 0x11cb6010 */
  push32((uint32_t)(0x11cb6010u));
  /* 11cb24fe push 0x11cb6008 */
  push32((uint32_t)(0x11cb6008u));
  /* 11cb2503 call 0x11cb25f2 */
  push32(0x11cb2508u); f_11cb25f2();
  /* 11cb2508 push 0x11cb6004 */
  push32((uint32_t)(0x11cb6004u));
  /* 11cb250d push 0x11cb6000 */
  push32((uint32_t)(0x11cb6000u));
  /* 11cb2512 call 0x11cb25f2 */
  push32(0x11cb2517u); f_11cb25f2();
  /* 11cb2517 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb251a ret  */
  ESPCHK(0x11cb24eeu, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11cb251b (17 bytes, 6 insns) */
void f_11cb251b(void) {
  FTRACE(0x11cb251bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb251b push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb251d push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb251f push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11cb2523 call 0x11cb253b */
  push32(0x11cb2528u); f_11cb253b();
  /* 11cb2528 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb252b ret  */
  ESPCHK(0x11cb251bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000252c @ 0x11cb252c (15 bytes, 6 insns) */
void f_11cb252c(void) {
  FTRACE(0x11cb252cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb252c push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb252e push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb2530 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb2532 call 0x11cb253b */
  push32(0x11cb2537u); f_11cb253b();
  /* 11cb2537 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb253a ret  */
  ESPCHK(0x11cb252cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000253b @ 0x11cb253b (163 bytes, 53 insns) */
void f_11cb253b(void) {
  FTRACE(0x11cb253bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb253b push edi */
  push32((uint32_t)(EDI));
  /* 11cb253c call 0x11cb25e0 */
  push32(0x11cb2541u); f_11cb25e0();
  /* 11cb2541 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb2543 pop edi */
  EDI = (pop32());
  /* 11cb2544 cmp dword ptr [0x11cb6954], edi */
  { uint32_t _a=(r32((uint32_t)(0x11cb6954))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb254a jne 0x11cb255d */
  if (!C.zf) goto L_11cb255d;
  /* 11cb254c push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11cb2550 call dword ptr [0x11cb5000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5000))), 0x11cb2556u);
  /* 11cb2556 push eax */
  push32((uint32_t)(EAX));
  /* 11cb2557 call dword ptr [0x11cb5004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5004))), 0x11cb255du);
L_11cb255d:;
  /* 11cb255d cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2562 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2563 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11cb2567 mov dword ptr [0x11cb6950], edi */
  w32((uint32_t)(0x11cb6950), (EDI));
  /* 11cb256d mov byte ptr [0x11cb694c], bl */
  w8((uint32_t)(0x11cb694c), (BL));
  /* 11cb2573 jne 0x11cb25b1 */
  if (!C.zf) goto L_11cb25b1;
  /* 11cb2575 mov eax, dword ptr [0x11cb6e70] */
  EAX = (r32((uint32_t)(0x11cb6e70)));
  /* 11cb257a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb257c je 0x11cb25a0 */
  if (C.zf) goto L_11cb25a0;
  /* 11cb257e mov ecx, dword ptr [0x11cb6e6c] */
  ECX = (r32((uint32_t)(0x11cb6e6c)));
  /* 11cb2584 push esi */
  push32((uint32_t)(ESI));
  /* 11cb2585 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11cb2588 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb258a jb 0x11cb259f */
  if (C.cf) goto L_11cb259f;
L_11cb258c:;
  /* 11cb258c mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11cb258e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb2590 je 0x11cb2594 */
  if (C.zf) goto L_11cb2594;
  /* 11cb2592 call eax */
  call_ind((uint32_t)(EAX), 0x11cb2594u);
L_11cb2594:;
  /* 11cb2594 sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb2597 cmp esi, dword ptr [0x11cb6e70] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11cb6e70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb259d jae 0x11cb258c */
  if (!C.cf) goto L_11cb258c;
L_11cb259f:;
  /* 11cb259f pop esi */
  ESI = (pop32());
L_11cb25a0:;
  /* 11cb25a0 push 0x11cb6018 */
  push32((uint32_t)(0x11cb6018u));
  /* 11cb25a5 push 0x11cb6014 */
  push32((uint32_t)(0x11cb6014u));
  /* 11cb25aa call 0x11cb25f2 */
  push32(0x11cb25afu); f_11cb25f2();
  /* 11cb25af pop ecx */
  ECX = (pop32());
  /* 11cb25b0 pop ecx */
  ECX = (pop32());
L_11cb25b1:;
  /* 11cb25b1 push 0x11cb6020 */
  push32((uint32_t)(0x11cb6020u));
  /* 11cb25b6 push 0x11cb601c */
  push32((uint32_t)(0x11cb601cu));
  /* 11cb25bb call 0x11cb25f2 */
  push32(0x11cb25c0u); f_11cb25f2();
  /* 11cb25c0 pop ecx */
  ECX = (pop32());
  /* 11cb25c1 pop ecx */
  ECX = (pop32());
  /* 11cb25c2 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11cb25c4 pop ebx */
  EBX = (pop32());
  /* 11cb25c5 je 0x11cb25ce */
  if (C.zf) goto L_11cb25ce;
  /* 11cb25c7 call 0x11cb25e9 */
  push32(0x11cb25ccu); f_11cb25e9();
  /* 11cb25cc pop edi */
  EDI = (pop32());
  /* 11cb25cd ret  */
  ESPCHK(0x11cb253bu, _esp0);
  ESP += 4; return;
L_11cb25ce:;
  /* 11cb25ce push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11cb25d2 mov dword ptr [0x11cb6954], edi */
  w32((uint32_t)(0x11cb6954), (EDI));
  /* 11cb25d8 call dword ptr [0x11cb5098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5098))), 0x11cb25deu);
  /* 11cb25de pop edi */
  EDI = (pop32());
  /* 11cb25df ret  */
  ESPCHK(0x11cb253bu, _esp0);
  ESP += 4; return;
}

/* FUN_100025e0 @ 0x11cb25e0 (9 bytes, 4 insns) */
void f_11cb25e0(void) {
  FTRACE(0x11cb25e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb25e0 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11cb25e2 call 0x11cb304b */
  push32(0x11cb25e7u); f_11cb304b();
  /* 11cb25e7 pop ecx */
  ECX = (pop32());
  /* 11cb25e8 ret  */
  ESPCHK(0x11cb25e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100025e9 @ 0x11cb25e9 (9 bytes, 4 insns) */
void f_11cb25e9(void) {
  FTRACE(0x11cb25e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb25e9 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11cb25eb call 0x11cb30ac */
  push32(0x11cb25f0u); f_11cb30ac();
  /* 11cb25f0 pop ecx */
  ECX = (pop32());
  /* 11cb25f1 ret  */
  ESPCHK(0x11cb25e9u, _esp0);
  ESP += 4; return;
}

/* FUN_100025f2 @ 0x11cb25f2 (26 bytes, 12 insns) */
void f_11cb25f2(void) {
  FTRACE(0x11cb25f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb25f2 push esi */
  push32((uint32_t)(ESI));
  /* 11cb25f3 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11cb25f7:;
  /* 11cb25f7 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb25fb jae 0x11cb260a */
  if (!C.cf) goto L_11cb260a;
  /* 11cb25fd mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11cb25ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb2601 je 0x11cb2605 */
  if (C.zf) goto L_11cb2605;
  /* 11cb2603 call eax */
  call_ind((uint32_t)(EAX), 0x11cb2605u);
L_11cb2605:;
  /* 11cb2605 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb2608 jmp 0x11cb25f7 */
  goto L_11cb25f7;
L_11cb260a:;
  /* 11cb260a pop esi */
  ESI = (pop32());
  /* 11cb260b ret  */
  ESPCHK(0x11cb25f2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000260c @ 0x11cb260c (84 bytes, 32 insns) */
void f_11cb260c(void) {
  FTRACE(0x11cb260cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb260c push esi */
  push32((uint32_t)(ESI));
  /* 11cb260d call 0x11cb2fb6 */
  push32(0x11cb2612u); f_11cb2fb6();
  /* 11cb2612 call dword ptr [0x11cb50a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50a8))), 0x11cb2618u);
  /* 11cb2618 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb261b mov dword ptr [0x11cb6354], eax */
  w32((uint32_t)(0x11cb6354), (EAX));
  /* 11cb2620 je 0x11cb265c */
  if (C.zf) goto L_11cb265c;
  /* 11cb2622 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11cb2624 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb2626 call 0x11cb30c1 */
  push32(0x11cb262bu); f_11cb30c1();
  /* 11cb262b mov esi, eax */
  ESI = (EAX);
  /* 11cb262d pop ecx */
  ECX = (pop32());
  /* 11cb262e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11cb2630 pop ecx */
  ECX = (pop32());
  /* 11cb2631 je 0x11cb265c */
  if (C.zf) goto L_11cb265c;
  /* 11cb2633 push esi */
  push32((uint32_t)(ESI));
  /* 11cb2634 push dword ptr [0x11cb6354] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6354))));
  /* 11cb263a call dword ptr [0x11cb50a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50a4))), 0x11cb2640u);
  /* 11cb2640 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb2642 je 0x11cb265c */
  if (C.zf) goto L_11cb265c;
  /* 11cb2644 push esi */
  push32((uint32_t)(ESI));
  /* 11cb2645 call 0x11cb267e */
  push32(0x11cb264au); f_11cb267e();
  /* 11cb264a pop ecx */
  ECX = (pop32());
  /* 11cb264b call dword ptr [0x11cb50a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50a0))), 0x11cb2651u);
  /* 11cb2651 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11cb2655 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb2657 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11cb2659 pop eax */
  EAX = (pop32());
  /* 11cb265a pop esi */
  ESI = (pop32());
  /* 11cb265b ret  */
  ESPCHK(0x11cb260cu, _esp0);
  ESP += 4; return;
L_11cb265c:;
  /* 11cb265c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb265e pop esi */
  ESI = (pop32());
  /* 11cb265f ret  */
  ESPCHK(0x11cb260cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002660 @ 0x11cb2660 (30 bytes, 8 insns) */
void f_11cb2660(void) {
  FTRACE(0x11cb2660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb2660 call 0x11cb2fdf */
  push32(0x11cb2665u); f_11cb2fdf();
  /* 11cb2665 mov eax, dword ptr [0x11cb6354] */
  EAX = (r32((uint32_t)(0x11cb6354)));
  /* 11cb266a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb266d je 0x11cb267d */
  if (C.zf) goto L_11cb267d;
  /* 11cb266f push eax */
  push32((uint32_t)(EAX));
  /* 11cb2670 call dword ptr [0x11cb509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb509c))), 0x11cb2676u);
  /* 11cb2676 or dword ptr [0x11cb6354], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11cb6354)))|(0xffffffffu); w32((uint32_t)(0x11cb6354), (_r)); fl_logic(_r,32); }
L_11cb267d:;
  /* 11cb267d ret  */
  ESPCHK(0x11cb2660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000267e @ 0x11cb267e (19 bytes, 4 insns) */
void f_11cb267e(void) {
  FTRACE(0x11cb267eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb267e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11cb2682 mov dword ptr [eax + 0x50], 0x11cb64d0 */
  w32((uint32_t)(EAX + 0x50), (0x11cb64d0u));
  /* 11cb2689 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11cb2690 ret  */
  ESPCHK(0x11cb267eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002691 @ 0x11cb2691 (160 bytes, 62 insns) */
void f_11cb2691(void) {
  FTRACE(0x11cb2691u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb2691 mov eax, dword ptr [0x11cb6354] */
  EAX = (r32((uint32_t)(0x11cb6354)));
  /* 11cb2696 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2699 je 0x11cb2730 */
  if (C.zf) goto L_11cb2730;
  /* 11cb269f push esi */
  push32((uint32_t)(ESI));
  /* 11cb26a0 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11cb26a4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11cb26a6 jne 0x11cb26b5 */
  if (!C.zf) goto L_11cb26b5;
  /* 11cb26a8 push eax */
  push32((uint32_t)(EAX));
  /* 11cb26a9 call dword ptr [0x11cb508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb508c))), 0x11cb26afu);
  /* 11cb26af mov esi, eax */
  ESI = (EAX);
  /* 11cb26b1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11cb26b3 je 0x11cb2721 */
  if (C.zf) goto L_11cb2721;
L_11cb26b5:;
  /* 11cb26b5 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11cb26b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb26ba je 0x11cb26c3 */
  if (C.zf) goto L_11cb26c3;
  /* 11cb26bc push eax */
  push32((uint32_t)(EAX));
  /* 11cb26bd call 0x11cb314e */
  push32(0x11cb26c2u); f_11cb314e();
  /* 11cb26c2 pop ecx */
  ECX = (pop32());
L_11cb26c3:;
  /* 11cb26c3 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11cb26c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb26c8 je 0x11cb26d1 */
  if (C.zf) goto L_11cb26d1;
  /* 11cb26ca push eax */
  push32((uint32_t)(EAX));
  /* 11cb26cb call 0x11cb314e */
  push32(0x11cb26d0u); f_11cb314e();
  /* 11cb26d0 pop ecx */
  ECX = (pop32());
L_11cb26d1:;
  /* 11cb26d1 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11cb26d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb26d6 je 0x11cb26df */
  if (C.zf) goto L_11cb26df;
  /* 11cb26d8 push eax */
  push32((uint32_t)(EAX));
  /* 11cb26d9 call 0x11cb314e */
  push32(0x11cb26deu); f_11cb314e();
  /* 11cb26de pop ecx */
  ECX = (pop32());
L_11cb26df:;
  /* 11cb26df mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11cb26e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb26e4 je 0x11cb26ed */
  if (C.zf) goto L_11cb26ed;
  /* 11cb26e6 push eax */
  push32((uint32_t)(EAX));
  /* 11cb26e7 call 0x11cb314e */
  push32(0x11cb26ecu); f_11cb314e();
  /* 11cb26ec pop ecx */
  ECX = (pop32());
L_11cb26ed:;
  /* 11cb26ed mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11cb26f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb26f2 je 0x11cb26fb */
  if (C.zf) goto L_11cb26fb;
  /* 11cb26f4 push eax */
  push32((uint32_t)(EAX));
  /* 11cb26f5 call 0x11cb314e */
  push32(0x11cb26fau); f_11cb314e();
  /* 11cb26fa pop ecx */
  ECX = (pop32());
L_11cb26fb:;
  /* 11cb26fb mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11cb26fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb2700 je 0x11cb2709 */
  if (C.zf) goto L_11cb2709;
  /* 11cb2702 push eax */
  push32((uint32_t)(EAX));
  /* 11cb2703 call 0x11cb314e */
  push32(0x11cb2708u); f_11cb314e();
  /* 11cb2708 pop ecx */
  ECX = (pop32());
L_11cb2709:;
  /* 11cb2709 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11cb270c cmp eax, 0x11cb64d0 */
  { uint32_t _a=(EAX),_b=(0x11cb64d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2711 je 0x11cb271a */
  if (C.zf) goto L_11cb271a;
  /* 11cb2713 push eax */
  push32((uint32_t)(EAX));
  /* 11cb2714 call 0x11cb314e */
  push32(0x11cb2719u); f_11cb314e();
  /* 11cb2719 pop ecx */
  ECX = (pop32());
L_11cb271a:;
  /* 11cb271a push esi */
  push32((uint32_t)(ESI));
  /* 11cb271b call 0x11cb314e */
  push32(0x11cb2720u); f_11cb314e();
  /* 11cb2720 pop ecx */
  ECX = (pop32());
L_11cb2721:;
  /* 11cb2721 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb2723 push dword ptr [0x11cb6354] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6354))));
  /* 11cb2729 call dword ptr [0x11cb50a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb50a4))), 0x11cb272fu);
  /* 11cb272f pop esi */
  ESI = (pop32());
L_11cb2730:;
  /* 11cb2730 ret  */
  ESPCHK(0x11cb2691u, _esp0);
  ESP += 4; return;
}

/* FUN_10002731 @ 0x11cb2731 (444 bytes, 150 insns) */
void f_11cb2731(void) {
  FTRACE(0x11cb2731u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb2731 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb2732 mov ebp, esp */
  EBP = (ESP);
  /* 11cb2734 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb2737 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2738 push esi */
  push32((uint32_t)(ESI));
  /* 11cb2739 push edi */
  push32((uint32_t)(EDI));
  /* 11cb273a push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11cb273f call 0x11cb3196 */
  push32(0x11cb2744u); f_11cb3196();
  /* 11cb2744 mov esi, eax */
  ESI = (EAX);
  /* 11cb2746 pop ecx */
  ECX = (pop32());
  /* 11cb2747 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11cb2749 jne 0x11cb2753 */
  if (!C.zf) goto L_11cb2753;
  /* 11cb274b push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11cb274d call 0x11cb24bb */
  push32(0x11cb2752u); f_11cb24bb();
  /* 11cb2752 pop ecx */
  ECX = (pop32());
L_11cb2753:;
  /* 11cb2753 mov dword ptr [0x11cb6d60], esi */
  w32((uint32_t)(0x11cb6d60), (ESI));
  /* 11cb2759 mov dword ptr [0x11cb6e60], 0x20 */
  w32((uint32_t)(0x11cb6e60), (0x20u));
  /* 11cb2763 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11cb2769:;
  /* 11cb2769 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb276b jae 0x11cb278b */
  if (!C.cf) goto L_11cb278b;
  /* 11cb276d and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11cb2771 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11cb2774 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11cb2778 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11cb277c mov eax, dword ptr [0x11cb6d60] */
  EAX = (r32((uint32_t)(0x11cb6d60)));
  /* 11cb2781 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb2784 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb2789 jmp 0x11cb2769 */
  goto L_11cb2769;
L_11cb278b:;
  /* 11cb278b lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11cb278e push eax */
  push32((uint32_t)(EAX));
  /* 11cb278f call dword ptr [0x11cb507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb507c))), 0x11cb2795u);
  /* 11cb2795 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11cb279a je 0x11cb2871 */
  if (C.zf) goto L_11cb2871;
  /* 11cb27a0 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cb27a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb27a5 je 0x11cb2871 */
  if (C.zf) goto L_11cb2871;
  /* 11cb27ab mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11cb27ad lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11cb27b0 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11cb27b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cb27b6 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11cb27bb cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb27bd jl 0x11cb27c1 */
  if ((C.sf!=C.of)) goto L_11cb27c1;
  /* 11cb27bf mov edi, eax */
  EDI = (EAX);
L_11cb27c1:;
  /* 11cb27c1 cmp dword ptr [0x11cb6e60], edi */
  { uint32_t _a=(r32((uint32_t)(0x11cb6e60))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb27c7 jge 0x11cb281f */
  if ((C.sf==C.of)) goto L_11cb281f;
  /* 11cb27c9 mov esi, 0x11cb6d64 */
  ESI = (0x11cb6d64u);
L_11cb27ce:;
  /* 11cb27ce push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11cb27d3 call 0x11cb3196 */
  push32(0x11cb27d8u); f_11cb3196();
  /* 11cb27d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb27da pop ecx */
  ECX = (pop32());
  /* 11cb27db je 0x11cb2819 */
  if (C.zf) goto L_11cb2819;
  /* 11cb27dd add dword ptr [0x11cb6e60], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11cb6e60))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11cb6e60), (_r)); fl_add(_a,_b,_r,32); }
  /* 11cb27e4 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11cb27e6 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11cb27ec:;
  /* 11cb27ec cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb27ee jae 0x11cb280c */
  if (!C.cf) goto L_11cb280c;
  /* 11cb27f0 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11cb27f4 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11cb27f7 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11cb27fb mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11cb27ff mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11cb2801 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb2804 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb280a jmp 0x11cb27ec */
  goto L_11cb27ec;
L_11cb280c:;
  /* 11cb280c add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb280f cmp dword ptr [0x11cb6e60], edi */
  { uint32_t _a=(r32((uint32_t)(0x11cb6e60))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2815 jl 0x11cb27ce */
  if ((C.sf!=C.of)) goto L_11cb27ce;
  /* 11cb2817 jmp 0x11cb281f */
  goto L_11cb281f;
L_11cb2819:;
  /* 11cb2819 mov edi, dword ptr [0x11cb6e60] */
  EDI = (r32((uint32_t)(0x11cb6e60)));
L_11cb281f:;
  /* 11cb281f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11cb2821 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11cb2823 jle 0x11cb2871 */
  if ((C.zf||C.sf!=C.of)) goto L_11cb2871;
L_11cb2825:;
  /* 11cb2825 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cb2828 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cb282a cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb282d je 0x11cb2867 */
  if (C.zf) goto L_11cb2867;
  /* 11cb282f mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11cb2831 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11cb2833 je 0x11cb2867 */
  if (C.zf) goto L_11cb2867;
  /* 11cb2835 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11cb2837 jne 0x11cb2844 */
  if (!C.zf) goto L_11cb2844;
  /* 11cb2839 push ecx */
  push32((uint32_t)(ECX));
  /* 11cb283a call dword ptr [0x11cb5080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5080))), 0x11cb2840u);
  /* 11cb2840 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb2842 je 0x11cb2867 */
  if (C.zf) goto L_11cb2867;
L_11cb2844:;
  /* 11cb2844 mov ecx, esi */
  ECX = (ESI);
  /* 11cb2846 mov eax, esi */
  EAX = (ESI);
  /* 11cb2848 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11cb284b and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11cb284e mov ecx, dword ptr [ecx*4 + 0x11cb6d60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11cb6d60)));
  /* 11cb2855 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11cb2858 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11cb285b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cb285e mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11cb2860 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11cb2862 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11cb2864 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11cb2867:;
  /* 11cb2867 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11cb286b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11cb286c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11cb286d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb286f jl 0x11cb2825 */
  if ((C.sf!=C.of)) goto L_11cb2825;
L_11cb2871:;
  /* 11cb2871 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11cb2873:;
  /* 11cb2873 mov ecx, dword ptr [0x11cb6d60] */
  ECX = (r32((uint32_t)(0x11cb6d60)));
  /* 11cb2879 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11cb287c cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2880 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11cb2883 jne 0x11cb28d2 */
  if (!C.zf) goto L_11cb28d2;
  /* 11cb2885 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11cb2887 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11cb288b jne 0x11cb2892 */
  if (!C.zf) goto L_11cb2892;
  /* 11cb288d push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11cb288f pop eax */
  EAX = (pop32());
  /* 11cb2890 jmp 0x11cb289c */
  goto L_11cb289c;
L_11cb2892:;
  /* 11cb2892 mov eax, ebx */
  EAX = (EBX);
  /* 11cb2894 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11cb2895 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cb2897 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb2899 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11cb289c:;
  /* 11cb289c push eax */
  push32((uint32_t)(EAX));
  /* 11cb289d call dword ptr [0x11cb5084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5084))), 0x11cb28a3u);
  /* 11cb28a3 mov edi, eax */
  EDI = (EAX);
  /* 11cb28a5 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb28a8 je 0x11cb28c1 */
  if (C.zf) goto L_11cb28c1;
  /* 11cb28aa push edi */
  push32((uint32_t)(EDI));
  /* 11cb28ab call dword ptr [0x11cb5080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5080))), 0x11cb28b1u);
  /* 11cb28b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb28b3 je 0x11cb28c1 */
  if (C.zf) goto L_11cb28c1;
  /* 11cb28b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cb28ba mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11cb28bc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb28bf jne 0x11cb28c7 */
  if (!C.zf) goto L_11cb28c7;
L_11cb28c1:;
  /* 11cb28c1 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11cb28c5 jmp 0x11cb28d6 */
  goto L_11cb28d6;
L_11cb28c7:;
  /* 11cb28c7 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb28ca jne 0x11cb28d6 */
  if (!C.zf) goto L_11cb28d6;
  /* 11cb28cc or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11cb28d0 jmp 0x11cb28d6 */
  goto L_11cb28d6;
L_11cb28d2:;
  /* 11cb28d2 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11cb28d6:;
  /* 11cb28d6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11cb28d7 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb28da jl 0x11cb2873 */
  if ((C.sf!=C.of)) goto L_11cb2873;
  /* 11cb28dc push dword ptr [0x11cb6e60] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6e60))));
  /* 11cb28e2 call dword ptr [0x11cb5088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5088))), 0x11cb28e8u);
  /* 11cb28e8 pop edi */
  EDI = (pop32());
  /* 11cb28e9 pop esi */
  ESI = (pop32());
  /* 11cb28ea pop ebx */
  EBX = (pop32());
  /* 11cb28eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb28ec ret  */
  ESPCHK(0x11cb2731u, _esp0);
  ESP += 4; return;
}

/* FUN_100028ed @ 0x11cb28ed (84 bytes, 33 insns) */
void f_11cb28ed(void) {
  FTRACE(0x11cb28edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb28ed push ebx */
  push32((uint32_t)(EBX));
  /* 11cb28ee push esi */
  push32((uint32_t)(ESI));
  /* 11cb28ef push edi */
  push32((uint32_t)(EDI));
  /* 11cb28f0 mov esi, 0x11cb6d60 */
  ESI = (0x11cb6d60u);
L_11cb28f5:;
  /* 11cb28f5 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11cb28f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb28f9 je 0x11cb2932 */
  if (C.zf) goto L_11cb2932;
  /* 11cb28fb mov edi, eax */
  EDI = (EAX);
  /* 11cb28fd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb2902 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2904 jae 0x11cb2927 */
  if (!C.cf) goto L_11cb2927;
  /* 11cb2906 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11cb2909:;
  /* 11cb2909 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb290d je 0x11cb2916 */
  if (C.zf) goto L_11cb2916;
  /* 11cb290f push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2910 call dword ptr [0x11cb5078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5078))), 0x11cb2916u);
L_11cb2916:;
  /* 11cb2916 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11cb2918 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb291b add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb2920 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb2923 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2925 jb 0x11cb2909 */
  if (C.cf) goto L_11cb2909;
L_11cb2927:;
  /* 11cb2927 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11cb2929 call 0x11cb314e */
  push32(0x11cb292eu); f_11cb314e();
  /* 11cb292e and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11cb2931 pop ecx */
  ECX = (pop32());
L_11cb2932:;
  /* 11cb2932 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb2935 cmp esi, 0x11cb6e60 */
  { uint32_t _a=(ESI),_b=(0x11cb6e60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb293b jl 0x11cb28f5 */
  if ((C.sf!=C.of)) goto L_11cb28f5;
  /* 11cb293d pop edi */
  EDI = (pop32());
  /* 11cb293e pop esi */
  ESI = (pop32());
  /* 11cb293f pop ebx */
  EBX = (pop32());
  /* 11cb2940 ret  */
  ESPCHK(0x11cb28edu, _esp0);
  ESP += 4; return;
}

/* FUN_10002941 @ 0x11cb2941 (185 bytes, 71 insns) */
void f_11cb2941(void) {
  FTRACE(0x11cb2941u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb2941 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2942 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11cb2944 cmp dword ptr [0x11cb6e68], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11cb6e68))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb294a push esi */
  push32((uint32_t)(ESI));
  /* 11cb294b push edi */
  push32((uint32_t)(EDI));
  /* 11cb294c jne 0x11cb2953 */
  if (!C.zf) goto L_11cb2953;
  /* 11cb294e call 0x11cb3773 */
  push32(0x11cb2953u); f_11cb3773();
L_11cb2953:;
  /* 11cb2953 mov esi, dword ptr [0x11cb6904] */
  ESI = (r32((uint32_t)(0x11cb6904)));
  /* 11cb2959 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11cb295b:;
  /* 11cb295b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cb295d cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb295f je 0x11cb2973 */
  if (C.zf) goto L_11cb2973;
  /* 11cb2961 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb2963 je 0x11cb2966 */
  if (C.zf) goto L_11cb2966;
  /* 11cb2965 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11cb2966:;
  /* 11cb2966 push esi */
  push32((uint32_t)(ESI));
  /* 11cb2967 call 0x11cb3320 */
  push32(0x11cb296cu); f_11cb3320();
  /* 11cb296c pop ecx */
  ECX = (pop32());
  /* 11cb296d lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11cb2971 jmp 0x11cb295b */
  goto L_11cb295b;
L_11cb2973:;
  /* 11cb2973 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11cb297a push eax */
  push32((uint32_t)(EAX));
  /* 11cb297b call 0x11cb3196 */
  push32(0x11cb2980u); f_11cb3196();
  /* 11cb2980 mov esi, eax */
  ESI = (EAX);
  /* 11cb2982 pop ecx */
  ECX = (pop32());
  /* 11cb2983 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2985 mov dword ptr [0x11cb6934], esi */
  w32((uint32_t)(0x11cb6934), (ESI));
  /* 11cb298b jne 0x11cb2995 */
  if (!C.zf) goto L_11cb2995;
  /* 11cb298d push 9 */
  push32((uint32_t)(0x9u));
  /* 11cb298f call 0x11cb24bb */
  push32(0x11cb2994u); f_11cb24bb();
  /* 11cb2994 pop ecx */
  ECX = (pop32());
L_11cb2995:;
  /* 11cb2995 mov edi, dword ptr [0x11cb6904] */
  EDI = (r32((uint32_t)(0x11cb6904)));
  /* 11cb299b cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb299d je 0x11cb29d8 */
  if (C.zf) goto L_11cb29d8;
  /* 11cb299f push ebp */
  push32((uint32_t)(EBP));
L_11cb29a0:;
  /* 11cb29a0 push edi */
  push32((uint32_t)(EDI));
  /* 11cb29a1 call 0x11cb3320 */
  push32(0x11cb29a6u); f_11cb3320();
  /* 11cb29a6 mov ebp, eax */
  EBP = (EAX);
  /* 11cb29a8 pop ecx */
  ECX = (pop32());
  /* 11cb29a9 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11cb29aa cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb29ad je 0x11cb29d1 */
  if (C.zf) goto L_11cb29d1;
  /* 11cb29af push ebp */
  push32((uint32_t)(EBP));
  /* 11cb29b0 call 0x11cb3196 */
  push32(0x11cb29b5u); f_11cb3196();
  /* 11cb29b5 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb29b7 pop ecx */
  ECX = (pop32());
  /* 11cb29b8 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11cb29ba jne 0x11cb29c4 */
  if (!C.zf) goto L_11cb29c4;
  /* 11cb29bc push 9 */
  push32((uint32_t)(0x9u));
  /* 11cb29be call 0x11cb24bb */
  push32(0x11cb29c3u); f_11cb24bb();
  /* 11cb29c3 pop ecx */
  ECX = (pop32());
L_11cb29c4:;
  /* 11cb29c4 push edi */
  push32((uint32_t)(EDI));
  /* 11cb29c5 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11cb29c7 call 0x11cb3230 */
  push32(0x11cb29ccu); f_11cb3230();
  /* 11cb29cc pop ecx */
  ECX = (pop32());
  /* 11cb29cd add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb29d0 pop ecx */
  ECX = (pop32());
L_11cb29d1:;
  /* 11cb29d1 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb29d3 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb29d5 jne 0x11cb29a0 */
  if (!C.zf) goto L_11cb29a0;
  /* 11cb29d7 pop ebp */
  EBP = (pop32());
L_11cb29d8:;
  /* 11cb29d8 push dword ptr [0x11cb6904] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6904))));
  /* 11cb29de call 0x11cb314e */
  push32(0x11cb29e3u); f_11cb314e();
  /* 11cb29e3 pop ecx */
  ECX = (pop32());
  /* 11cb29e4 mov dword ptr [0x11cb6904], ebx */
  w32((uint32_t)(0x11cb6904), (EBX));
  /* 11cb29ea mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11cb29ec pop edi */
  EDI = (pop32());
  /* 11cb29ed pop esi */
  ESI = (pop32());
  /* 11cb29ee mov dword ptr [0x11cb6e64], 1 */
  w32((uint32_t)(0x11cb6e64), (0x1u));
  /* 11cb29f8 pop ebx */
  EBX = (pop32());
  /* 11cb29f9 ret  */
  ESPCHK(0x11cb2941u, _esp0);
  ESP += 4; return;
}

/* FUN_100029fa @ 0x11cb29fa (153 bytes, 62 insns) */
void f_11cb29fa(void) {
  FTRACE(0x11cb29fau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb29fa push ebp */
  push32((uint32_t)(EBP));
  /* 11cb29fb mov ebp, esp */
  EBP = (ESP);
  /* 11cb29fd push ecx */
  push32((uint32_t)(ECX));
  /* 11cb29fe push ecx */
  push32((uint32_t)(ECX));
  /* 11cb29ff push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2a00 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11cb2a02 cmp dword ptr [0x11cb6e68], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11cb6e68))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2a08 push esi */
  push32((uint32_t)(ESI));
  /* 11cb2a09 push edi */
  push32((uint32_t)(EDI));
  /* 11cb2a0a jne 0x11cb2a11 */
  if (!C.zf) goto L_11cb2a11;
  /* 11cb2a0c call 0x11cb3773 */
  push32(0x11cb2a11u); f_11cb3773();
L_11cb2a11:;
  /* 11cb2a11 mov esi, 0x11cb6958 */
  ESI = (0x11cb6958u);
  /* 11cb2a16 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11cb2a1b push esi */
  push32((uint32_t)(ESI));
  /* 11cb2a1c push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2a1d call dword ptr [0x11cb5074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5074))), 0x11cb2a23u);
  /* 11cb2a23 mov eax, dword ptr [0x11cb6e78] */
  EAX = (r32((uint32_t)(0x11cb6e78)));
  /* 11cb2a28 mov dword ptr [0x11cb6944], esi */
  w32((uint32_t)(0x11cb6944), (ESI));
  /* 11cb2a2e mov edi, esi */
  EDI = (ESI);
  /* 11cb2a30 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb2a32 je 0x11cb2a36 */
  if (C.zf) goto L_11cb2a36;
  /* 11cb2a34 mov edi, eax */
  EDI = (EAX);
L_11cb2a36:;
  /* 11cb2a36 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11cb2a39 push eax */
  push32((uint32_t)(EAX));
  /* 11cb2a3a lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11cb2a3d push eax */
  push32((uint32_t)(EAX));
  /* 11cb2a3e push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2a3f push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2a40 push edi */
  push32((uint32_t)(EDI));
  /* 11cb2a41 call 0x11cb2a93 */
  push32(0x11cb2a46u); f_11cb2a93();
  /* 11cb2a46 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cb2a49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cb2a4c lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11cb2a4f push eax */
  push32((uint32_t)(EAX));
  /* 11cb2a50 call 0x11cb3196 */
  push32(0x11cb2a55u); f_11cb3196();
  /* 11cb2a55 mov esi, eax */
  ESI = (EAX);
  /* 11cb2a57 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb2a5a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2a5c jne 0x11cb2a66 */
  if (!C.zf) goto L_11cb2a66;
  /* 11cb2a5e push 8 */
  push32((uint32_t)(0x8u));
  /* 11cb2a60 call 0x11cb24bb */
  push32(0x11cb2a65u); f_11cb24bb();
  /* 11cb2a65 pop ecx */
  ECX = (pop32());
L_11cb2a66:;
  /* 11cb2a66 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11cb2a69 push eax */
  push32((uint32_t)(EAX));
  /* 11cb2a6a lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11cb2a6d push eax */
  push32((uint32_t)(EAX));
  /* 11cb2a6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cb2a71 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11cb2a74 push eax */
  push32((uint32_t)(EAX));
  /* 11cb2a75 push esi */
  push32((uint32_t)(ESI));
  /* 11cb2a76 push edi */
  push32((uint32_t)(EDI));
  /* 11cb2a77 call 0x11cb2a93 */
  push32(0x11cb2a7cu); f_11cb2a93();
  /* 11cb2a7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cb2a7f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb2a82 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11cb2a83 mov dword ptr [0x11cb692c], esi */
  w32((uint32_t)(0x11cb692c), (ESI));
  /* 11cb2a89 pop edi */
  EDI = (pop32());
  /* 11cb2a8a pop esi */
  ESI = (pop32());
  /* 11cb2a8b mov dword ptr [0x11cb6928], eax */
  w32((uint32_t)(0x11cb6928), (EAX));
  /* 11cb2a90 pop ebx */
  EBX = (pop32());
  /* 11cb2a91 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb2a92 ret  */
  ESPCHK(0x11cb29fau, _esp0);
  ESP += 4; return;
}

/* FUN_10002a93 @ 0x11cb2a93 (436 bytes, 187 insns) */
void f_11cb2a93(void) {
  FTRACE(0x11cb2a93u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb2a93 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb2a94 mov ebp, esp */
  EBP = (ESP);
  /* 11cb2a96 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cb2a99 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cb2a9c push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2a9d push esi */
  push32((uint32_t)(ESI));
  /* 11cb2a9e and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11cb2aa1 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11cb2aa4 push edi */
  push32((uint32_t)(EDI));
  /* 11cb2aa5 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11cb2aa8 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11cb2aae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb2ab1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11cb2ab3 je 0x11cb2abd */
  if (C.zf) goto L_11cb2abd;
  /* 11cb2ab5 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11cb2ab7 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb2aba mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11cb2abd:;
  /* 11cb2abd cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb2ac0 jne 0x11cb2b06 */
  if (!C.zf) goto L_11cb2b06;
L_11cb2ac2:;
  /* 11cb2ac2 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11cb2ac5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb2ac6 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb2ac9 je 0x11cb2af4 */
  if (C.zf) goto L_11cb2af4;
  /* 11cb2acb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11cb2acd je 0x11cb2af4 */
  if (C.zf) goto L_11cb2af4;
  /* 11cb2acf movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11cb2ad2 test byte ptr [edx + 0x11cb6c41], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11cb6c41)))&(0x4u); fl_logic(_r,8); }
  /* 11cb2ad9 je 0x11cb2ae7 */
  if (C.zf) goto L_11cb2ae7;
  /* 11cb2adb inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11cb2add test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11cb2adf je 0x11cb2ae7 */
  if (C.zf) goto L_11cb2ae7;
  /* 11cb2ae1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11cb2ae3 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11cb2ae5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11cb2ae6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11cb2ae7:;
  /* 11cb2ae7 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11cb2ae9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11cb2aeb je 0x11cb2ac2 */
  if (C.zf) goto L_11cb2ac2;
  /* 11cb2aed mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11cb2aef mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11cb2af1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11cb2af2 jmp 0x11cb2ac2 */
  goto L_11cb2ac2;
L_11cb2af4:;
  /* 11cb2af4 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11cb2af6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11cb2af8 je 0x11cb2afe */
  if (C.zf) goto L_11cb2afe;
  /* 11cb2afa and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11cb2afd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11cb2afe:;
  /* 11cb2afe cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb2b01 jne 0x11cb2b49 */
  if (!C.zf) goto L_11cb2b49;
  /* 11cb2b03 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb2b04 jmp 0x11cb2b49 */
  goto L_11cb2b49;
L_11cb2b06:;
  /* 11cb2b06 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11cb2b08 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11cb2b0a je 0x11cb2b11 */
  if (C.zf) goto L_11cb2b11;
  /* 11cb2b0c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11cb2b0e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11cb2b10 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11cb2b11:;
  /* 11cb2b11 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11cb2b13 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb2b14 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11cb2b17 test byte ptr [ebx + 0x11cb6c41], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11cb6c41)))&(0x4u); fl_logic(_r,8); }
  /* 11cb2b1e je 0x11cb2b2c */
  if (C.zf) goto L_11cb2b2c;
  /* 11cb2b20 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11cb2b22 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11cb2b24 je 0x11cb2b2b */
  if (C.zf) goto L_11cb2b2b;
  /* 11cb2b26 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11cb2b28 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11cb2b2a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11cb2b2b:;
  /* 11cb2b2b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11cb2b2c:;
  /* 11cb2b2c cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb2b2f je 0x11cb2b3a */
  if (C.zf) goto L_11cb2b3a;
  /* 11cb2b31 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11cb2b33 je 0x11cb2b3e */
  if (C.zf) goto L_11cb2b3e;
  /* 11cb2b35 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb2b38 jne 0x11cb2b06 */
  if (!C.zf) goto L_11cb2b06;
L_11cb2b3a:;
  /* 11cb2b3a test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11cb2b3c jne 0x11cb2b41 */
  if (!C.zf) goto L_11cb2b41;
L_11cb2b3e:;
  /* 11cb2b3e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11cb2b3f jmp 0x11cb2b49 */
  goto L_11cb2b49;
L_11cb2b41:;
  /* 11cb2b41 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11cb2b43 je 0x11cb2b49 */
  if (C.zf) goto L_11cb2b49;
  /* 11cb2b45 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11cb2b49:;
  /* 11cb2b49 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11cb2b4d:;
  /* 11cb2b4d cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb2b50 je 0x11cb2c36 */
  if (C.zf) goto L_11cb2c36;
L_11cb2b56:;
  /* 11cb2b56 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11cb2b58 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb2b5b je 0x11cb2b62 */
  if (C.zf) goto L_11cb2b62;
  /* 11cb2b5d cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb2b60 jne 0x11cb2b65 */
  if (!C.zf) goto L_11cb2b65;
L_11cb2b62:;
  /* 11cb2b62 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb2b63 jmp 0x11cb2b56 */
  goto L_11cb2b56;
L_11cb2b65:;
  /* 11cb2b65 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb2b68 je 0x11cb2c36 */
  if (C.zf) goto L_11cb2c36;
  /* 11cb2b6e test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11cb2b70 je 0x11cb2b7a */
  if (C.zf) goto L_11cb2b7a;
  /* 11cb2b72 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11cb2b74 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb2b77 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11cb2b7a:;
  /* 11cb2b7a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cb2b7d inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11cb2b7f:;
  /* 11cb2b7f mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11cb2b86 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11cb2b88:;
  /* 11cb2b88 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb2b8b jne 0x11cb2b91 */
  if (!C.zf) goto L_11cb2b91;
  /* 11cb2b8d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb2b8e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11cb2b8f jmp 0x11cb2b88 */
  goto L_11cb2b88;
L_11cb2b91:;
  /* 11cb2b91 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb2b94 jne 0x11cb2bc2 */
  if (!C.zf) goto L_11cb2bc2;
  /* 11cb2b96 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11cb2b99 jne 0x11cb2bc0 */
  if (!C.zf) goto L_11cb2bc0;
  /* 11cb2b9b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11cb2b9d cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2ba0 je 0x11cb2baf */
  if (C.zf) goto L_11cb2baf;
  /* 11cb2ba2 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb2ba6 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11cb2ba9 jne 0x11cb2baf */
  if (!C.zf) goto L_11cb2baf;
  /* 11cb2bab mov eax, edx */
  EAX = (EDX);
  /* 11cb2bad jmp 0x11cb2bb2 */
  goto L_11cb2bb2;
L_11cb2baf:;
  /* 11cb2baf mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11cb2bb2:;
  /* 11cb2bb2 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11cb2bb5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cb2bb7 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2bba sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11cb2bbd mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11cb2bc0:;
  /* 11cb2bc0 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11cb2bc2:;
  /* 11cb2bc2 mov edx, ebx */
  EDX = (EBX);
  /* 11cb2bc4 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11cb2bc5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cb2bc7 je 0x11cb2bd7 */
  if (C.zf) goto L_11cb2bd7;
  /* 11cb2bc9 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11cb2bca:;
  /* 11cb2bca test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11cb2bcc je 0x11cb2bd2 */
  if (C.zf) goto L_11cb2bd2;
  /* 11cb2bce mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11cb2bd1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11cb2bd2:;
  /* 11cb2bd2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11cb2bd4 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11cb2bd5 jne 0x11cb2bca */
  if (!C.zf) goto L_11cb2bca;
L_11cb2bd7:;
  /* 11cb2bd7 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11cb2bd9 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11cb2bdb je 0x11cb2c27 */
  if (C.zf) goto L_11cb2c27;
  /* 11cb2bdd cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2be1 jne 0x11cb2bed */
  if (!C.zf) goto L_11cb2bed;
  /* 11cb2be3 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb2be6 je 0x11cb2c27 */
  if (C.zf) goto L_11cb2c27;
  /* 11cb2be8 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb2beb je 0x11cb2c27 */
  if (C.zf) goto L_11cb2c27;
L_11cb2bed:;
  /* 11cb2bed cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2bf1 je 0x11cb2c21 */
  if (C.zf) goto L_11cb2c21;
  /* 11cb2bf3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11cb2bf5 je 0x11cb2c10 */
  if (C.zf) goto L_11cb2c10;
  /* 11cb2bf7 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11cb2bfa test byte ptr [ebx + 0x11cb6c41], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11cb6c41)))&(0x4u); fl_logic(_r,8); }
  /* 11cb2c01 je 0x11cb2c09 */
  if (C.zf) goto L_11cb2c09;
  /* 11cb2c03 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11cb2c05 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11cb2c06 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb2c07 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11cb2c09:;
  /* 11cb2c09 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11cb2c0b mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11cb2c0d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11cb2c0e jmp 0x11cb2c1f */
  goto L_11cb2c1f;
L_11cb2c10:;
  /* 11cb2c10 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11cb2c13 test byte ptr [edx + 0x11cb6c41], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11cb6c41)))&(0x4u); fl_logic(_r,8); }
  /* 11cb2c1a je 0x11cb2c1f */
  if (C.zf) goto L_11cb2c1f;
  /* 11cb2c1c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb2c1d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11cb2c1f:;
  /* 11cb2c1f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11cb2c21:;
  /* 11cb2c21 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb2c22 jmp 0x11cb2b7f */
  goto L_11cb2b7f;
L_11cb2c27:;
  /* 11cb2c27 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11cb2c29 je 0x11cb2c2f */
  if (C.zf) goto L_11cb2c2f;
  /* 11cb2c2b and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11cb2c2e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11cb2c2f:;
  /* 11cb2c2f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11cb2c31 jmp 0x11cb2b4d */
  goto L_11cb2b4d;
L_11cb2c36:;
  /* 11cb2c36 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11cb2c38 je 0x11cb2c3d */
  if (C.zf) goto L_11cb2c3d;
  /* 11cb2c3a and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11cb2c3d:;
  /* 11cb2c3d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cb2c40 pop edi */
  EDI = (pop32());
  /* 11cb2c41 pop esi */
  ESI = (pop32());
  /* 11cb2c42 pop ebx */
  EBX = (pop32());
  /* 11cb2c43 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11cb2c45 pop ebp */
  EBP = (pop32());
  /* 11cb2c46 ret  */
  ESPCHK(0x11cb2a93u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c47 @ 0x11cb2c47 (306 bytes, 132 insns) */
void f_11cb2c47(void) {
  FTRACE(0x11cb2c47u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb2c47 push ecx */
  push32((uint32_t)(ECX));
  /* 11cb2c48 push ecx */
  push32((uint32_t)(ECX));
  /* 11cb2c49 mov eax, dword ptr [0x11cb6a5c] */
  EAX = (r32((uint32_t)(0x11cb6a5c)));
  /* 11cb2c4e push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2c4f push ebp */
  push32((uint32_t)(EBP));
  /* 11cb2c50 mov ebp, dword ptr [0x11cb5060] */
  EBP = (r32((uint32_t)(0x11cb5060)));
  /* 11cb2c56 push esi */
  push32((uint32_t)(ESI));
  /* 11cb2c57 push edi */
  push32((uint32_t)(EDI));
  /* 11cb2c58 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11cb2c5a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11cb2c5c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11cb2c5e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2c60 jne 0x11cb2c95 */
  if (!C.zf) goto L_11cb2c95;
  /* 11cb2c62 call ebp */
  call_ind((uint32_t)(EBP), 0x11cb2c64u);
  /* 11cb2c64 mov esi, eax */
  ESI = (EAX);
  /* 11cb2c66 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2c68 je 0x11cb2c76 */
  if (C.zf) goto L_11cb2c76;
  /* 11cb2c6a mov dword ptr [0x11cb6a5c], 1 */
  w32((uint32_t)(0x11cb6a5c), (0x1u));
  /* 11cb2c74 jmp 0x11cb2c9e */
  goto L_11cb2c9e;
L_11cb2c76:;
  /* 11cb2c76 call dword ptr [0x11cb5064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5064))), 0x11cb2c7cu);
  /* 11cb2c7c mov edi, eax */
  EDI = (EAX);
  /* 11cb2c7e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2c80 je 0x11cb2d70 */
  if (C.zf) goto L_11cb2d70;
  /* 11cb2c86 mov dword ptr [0x11cb6a5c], 2 */
  w32((uint32_t)(0x11cb6a5c), (0x2u));
  /* 11cb2c90 jmp 0x11cb2d24 */
  goto L_11cb2d24;
L_11cb2c95:;
  /* 11cb2c95 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2c98 jne 0x11cb2d1f */
  if (!C.zf) goto L_11cb2d1f;
L_11cb2c9e:;
  /* 11cb2c9e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2ca0 jne 0x11cb2cae */
  if (!C.zf) goto L_11cb2cae;
  /* 11cb2ca2 call ebp */
  call_ind((uint32_t)(EBP), 0x11cb2ca4u);
  /* 11cb2ca4 mov esi, eax */
  ESI = (EAX);
  /* 11cb2ca6 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2ca8 je 0x11cb2d70 */
  if (C.zf) goto L_11cb2d70;
L_11cb2cae:;
  /* 11cb2cae cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11cb2cb1 mov eax, esi */
  EAX = (ESI);
  /* 11cb2cb3 je 0x11cb2cc3 */
  if (C.zf) goto L_11cb2cc3;
L_11cb2cb5:;
  /* 11cb2cb5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb2cb6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb2cb7 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11cb2cba jne 0x11cb2cb5 */
  if (!C.zf) goto L_11cb2cb5;
  /* 11cb2cbc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb2cbd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb2cbe cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11cb2cc1 jne 0x11cb2cb5 */
  if (!C.zf) goto L_11cb2cb5;
L_11cb2cc3:;
  /* 11cb2cc3 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb2cc5 mov edi, dword ptr [0x11cb5068] */
  EDI = (r32((uint32_t)(0x11cb5068)));
  /* 11cb2ccb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11cb2ccd push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2cce push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2ccf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb2cd0 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2cd1 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2cd2 push eax */
  push32((uint32_t)(EAX));
  /* 11cb2cd3 push esi */
  push32((uint32_t)(ESI));
  /* 11cb2cd4 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2cd5 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2cd6 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11cb2cda call edi */
  call_ind((uint32_t)(EDI), 0x11cb2cdcu);
  /* 11cb2cdc mov ebp, eax */
  EBP = (EAX);
  /* 11cb2cde cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2ce0 je 0x11cb2d14 */
  if (C.zf) goto L_11cb2d14;
  /* 11cb2ce2 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb2ce3 call 0x11cb3196 */
  push32(0x11cb2ce8u); f_11cb3196();
  /* 11cb2ce8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2cea pop ecx */
  ECX = (pop32());
  /* 11cb2ceb mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11cb2cef je 0x11cb2d14 */
  if (C.zf) goto L_11cb2d14;
  /* 11cb2cf1 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2cf2 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2cf3 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb2cf4 push eax */
  push32((uint32_t)(EAX));
  /* 11cb2cf5 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11cb2cf9 push esi */
  push32((uint32_t)(ESI));
  /* 11cb2cfa push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2cfb push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2cfc call edi */
  call_ind((uint32_t)(EDI), 0x11cb2cfeu);
  /* 11cb2cfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb2d00 jne 0x11cb2d10 */
  if (!C.zf) goto L_11cb2d10;
  /* 11cb2d02 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11cb2d06 call 0x11cb314e */
  push32(0x11cb2d0bu); f_11cb314e();
  /* 11cb2d0b pop ecx */
  ECX = (pop32());
  /* 11cb2d0c mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11cb2d10:;
  /* 11cb2d10 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11cb2d14:;
  /* 11cb2d14 push esi */
  push32((uint32_t)(ESI));
  /* 11cb2d15 call dword ptr [0x11cb506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb506c))), 0x11cb2d1bu);
  /* 11cb2d1b mov eax, ebx */
  EAX = (EBX);
  /* 11cb2d1d jmp 0x11cb2d72 */
  goto L_11cb2d72;
L_11cb2d1f:;
  /* 11cb2d1f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2d22 jne 0x11cb2d70 */
  if (!C.zf) goto L_11cb2d70;
L_11cb2d24:;
  /* 11cb2d24 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2d26 jne 0x11cb2d34 */
  if (!C.zf) goto L_11cb2d34;
  /* 11cb2d28 call dword ptr [0x11cb5064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5064))), 0x11cb2d2eu);
  /* 11cb2d2e mov edi, eax */
  EDI = (EAX);
  /* 11cb2d30 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2d32 je 0x11cb2d70 */
  if (C.zf) goto L_11cb2d70;
L_11cb2d34:;
  /* 11cb2d34 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb2d36 mov eax, edi */
  EAX = (EDI);
  /* 11cb2d38 je 0x11cb2d44 */
  if (C.zf) goto L_11cb2d44;
L_11cb2d3a:;
  /* 11cb2d3a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb2d3b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb2d3d jne 0x11cb2d3a */
  if (!C.zf) goto L_11cb2d3a;
  /* 11cb2d3f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb2d40 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb2d42 jne 0x11cb2d3a */
  if (!C.zf) goto L_11cb2d3a;
L_11cb2d44:;
  /* 11cb2d44 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb2d46 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb2d47 mov ebp, eax */
  EBP = (EAX);
  /* 11cb2d49 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb2d4a call 0x11cb3196 */
  push32(0x11cb2d4fu); f_11cb3196();
  /* 11cb2d4f mov esi, eax */
  ESI = (EAX);
  /* 11cb2d51 pop ecx */
  ECX = (pop32());
  /* 11cb2d52 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2d54 jne 0x11cb2d5a */
  if (!C.zf) goto L_11cb2d5a;
  /* 11cb2d56 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11cb2d58 jmp 0x11cb2d65 */
  goto L_11cb2d65;
L_11cb2d5a:;
  /* 11cb2d5a push ebp */
  push32((uint32_t)(EBP));
  /* 11cb2d5b push edi */
  push32((uint32_t)(EDI));
  /* 11cb2d5c push esi */
  push32((uint32_t)(ESI));
  /* 11cb2d5d call 0x11cb3790 */
  push32(0x11cb2d62u); f_11cb3790();
  /* 11cb2d62 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb2d65:;
  /* 11cb2d65 push edi */
  push32((uint32_t)(EDI));
  /* 11cb2d66 call dword ptr [0x11cb5070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5070))), 0x11cb2d6cu);
  /* 11cb2d6c mov eax, esi */
  EAX = (ESI);
  /* 11cb2d6e jmp 0x11cb2d72 */
  goto L_11cb2d72;
L_11cb2d70:;
  /* 11cb2d70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cb2d72:;
  /* 11cb2d72 pop edi */
  EDI = (pop32());
  /* 11cb2d73 pop esi */
  ESI = (pop32());
  /* 11cb2d74 pop ebp */
  EBP = (pop32());
  /* 11cb2d75 pop ebx */
  EBX = (pop32());
  /* 11cb2d76 pop ecx */
  ECX = (pop32());
  /* 11cb2d77 pop ecx */
  ECX = (pop32());
  /* 11cb2d78 ret  */
  ESPCHK(0x11cb2c47u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d79 @ 0x11cb2d79 (60 bytes, 20 insns) */
void f_11cb2d79(void) {
  FTRACE(0x11cb2d79u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb2d79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb2d7b push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb2d7d cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2d81 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11cb2d86 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11cb2d89 push eax */
  push32((uint32_t)(EAX));
  /* 11cb2d8a call dword ptr [0x11cb5058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5058))), 0x11cb2d90u);
  /* 11cb2d90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb2d92 mov dword ptr [0x11cb6d48], eax */
  w32((uint32_t)(0x11cb6d48), (EAX));
  /* 11cb2d97 je 0x11cb2dae */
  if (C.zf) goto L_11cb2dae;
  /* 11cb2d99 call 0x11cb3ac5 */
  push32(0x11cb2d9eu); f_11cb3ac5();
  /* 11cb2d9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb2da0 jne 0x11cb2db1 */
  if (!C.zf) goto L_11cb2db1;
  /* 11cb2da2 push dword ptr [0x11cb6d48] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6d48))));
  /* 11cb2da8 call dword ptr [0x11cb505c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb505c))), 0x11cb2daeu);
L_11cb2dae:;
  /* 11cb2dae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb2db0 ret  */
  ESPCHK(0x11cb2d79u, _esp0);
  ESP += 4; return;
L_11cb2db1:;
  /* 11cb2db1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb2db3 pop eax */
  EAX = (pop32());
  /* 11cb2db4 ret  */
  ESPCHK(0x11cb2d79u, _esp0);
  ESP += 4; return;
}

/* FUN_10002db5 @ 0x11cb2db5 (117 bytes, 38 insns) */
void f_11cb2db5(void) {
  FTRACE(0x11cb2db5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb2db5 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb2db6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11cb2db8 cmp dword ptr [0x11cb6b18], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11cb6b18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2dbe push ebp */
  push32((uint32_t)(EBP));
  /* 11cb2dbf mov ebp, dword ptr [0x11cb5050] */
  EBP = (r32((uint32_t)(0x11cb5050)));
  /* 11cb2dc5 jle 0x11cb2e0b */
  if ((C.zf||C.sf!=C.of)) goto L_11cb2e0b;
  /* 11cb2dc7 mov eax, dword ptr [0x11cb6b1c] */
  EAX = (r32((uint32_t)(0x11cb6b1c)));
  /* 11cb2dcc push esi */
  push32((uint32_t)(ESI));
  /* 11cb2dcd push edi */
  push32((uint32_t)(EDI));
  /* 11cb2dce mov edi, dword ptr [0x11cb5054] */
  EDI = (r32((uint32_t)(0x11cb5054)));
  /* 11cb2dd4 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11cb2dd7:;
  /* 11cb2dd7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11cb2ddc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11cb2de1 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11cb2de3 call edi */
  call_ind((uint32_t)(EDI), 0x11cb2de5u);
  /* 11cb2de5 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11cb2dea push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb2dec push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11cb2dee call edi */
  call_ind((uint32_t)(EDI), 0x11cb2df0u);
  /* 11cb2df0 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11cb2df3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb2df5 push dword ptr [0x11cb6d48] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6d48))));
  /* 11cb2dfb call ebp */
  call_ind((uint32_t)(EBP), 0x11cb2dfdu);
  /* 11cb2dfd add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb2e00 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11cb2e01 cmp ebx, dword ptr [0x11cb6b18] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11cb6b18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2e07 jl 0x11cb2dd7 */
  if ((C.sf!=C.of)) goto L_11cb2dd7;
  /* 11cb2e09 pop edi */
  EDI = (pop32());
  /* 11cb2e0a pop esi */
  ESI = (pop32());
L_11cb2e0b:;
  /* 11cb2e0b push dword ptr [0x11cb6b1c] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6b1c))));
  /* 11cb2e11 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb2e13 push dword ptr [0x11cb6d48] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6d48))));
  /* 11cb2e19 call ebp */
  call_ind((uint32_t)(EBP), 0x11cb2e1bu);
  /* 11cb2e1b push dword ptr [0x11cb6d48] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6d48))));
  /* 11cb2e21 call dword ptr [0x11cb505c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb505c))), 0x11cb2e27u);
  /* 11cb2e27 pop ebp */
  EBP = (pop32());
  /* 11cb2e28 pop ebx */
  EBX = (pop32());
  /* 11cb2e29 ret  */
  ESPCHK(0x11cb2db5u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e2a @ 0x11cb2e2a (57 bytes, 18 insns) */
void f_11cb2e2a(void) {
  FTRACE(0x11cb2e2au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb2e2a mov eax, dword ptr [0x11cb690c] */
  EAX = (r32((uint32_t)(0x11cb690c)));
  /* 11cb2e2f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2e32 je 0x11cb2e41 */
  if (C.zf) goto L_11cb2e41;
  /* 11cb2e34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb2e36 jne 0x11cb2e62 */
  if (!C.zf) goto L_11cb2e62;
  /* 11cb2e38 cmp dword ptr [0x11cb6910], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cb6910))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2e3f jne 0x11cb2e62 */
  if (!C.zf) goto L_11cb2e62;
L_11cb2e41:;
  /* 11cb2e41 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11cb2e46 call 0x11cb2e63 */
  push32(0x11cb2e4bu); f_11cb2e63();
  /* 11cb2e4b mov eax, dword ptr [0x11cb6a60] */
  EAX = (r32((uint32_t)(0x11cb6a60)));
  /* 11cb2e50 pop ecx */
  ECX = (pop32());
  /* 11cb2e51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb2e53 je 0x11cb2e57 */
  if (C.zf) goto L_11cb2e57;
  /* 11cb2e55 call eax */
  call_ind((uint32_t)(EAX), 0x11cb2e57u);
L_11cb2e57:;
  /* 11cb2e57 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11cb2e5c call 0x11cb2e63 */
  push32(0x11cb2e61u); f_11cb2e63();
  /* 11cb2e61 pop ecx */
  ECX = (pop32());
L_11cb2e62:;
  /* 11cb2e62 ret  */
  ESPCHK(0x11cb2e2au, _esp0);
  ESP += 4; return;
}

/* FUN_10002e63 @ 0x11cb2e63 (339 bytes, 100 insns) */
void f_11cb2e63(void) {
  FTRACE(0x11cb2e63u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb2e63 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb2e64 mov ebp, esp */
  EBP = (ESP);
  /* 11cb2e66 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb2e6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb2e6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cb2e71 mov eax, 0x11cb6380 */
  EAX = (0x11cb6380u);
L_11cb2e76:;
  /* 11cb2e76 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2e78 je 0x11cb2e85 */
  if (C.zf) goto L_11cb2e85;
  /* 11cb2e7a add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb2e7d inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11cb2e7e cmp eax, 0x11cb6410 */
  { uint32_t _a=(EAX),_b=(0x11cb6410u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2e83 jl 0x11cb2e76 */
  if ((C.sf!=C.of)) goto L_11cb2e76;
L_11cb2e85:;
  /* 11cb2e85 push esi */
  push32((uint32_t)(ESI));
  /* 11cb2e86 mov esi, ecx */
  ESI = (ECX);
  /* 11cb2e88 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11cb2e8b cmp edx, dword ptr [esi + 0x11cb6380] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11cb6380))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2e91 jne 0x11cb2fb3 */
  if (!C.zf) goto L_11cb2fb3;
  /* 11cb2e97 mov eax, dword ptr [0x11cb690c] */
  EAX = (r32((uint32_t)(0x11cb690c)));
  /* 11cb2e9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2e9f je 0x11cb2f8d */
  if (C.zf) goto L_11cb2f8d;
  /* 11cb2ea5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb2ea7 jne 0x11cb2eb6 */
  if (!C.zf) goto L_11cb2eb6;
  /* 11cb2ea9 cmp dword ptr [0x11cb6910], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cb6910))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2eb0 je 0x11cb2f8d */
  if (C.zf) goto L_11cb2f8d;
L_11cb2eb6:;
  /* 11cb2eb6 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2ebc je 0x11cb2fb3 */
  if (C.zf) goto L_11cb2fb3;
  /* 11cb2ec2 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11cb2ec8 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11cb2ecd push eax */
  push32((uint32_t)(EAX));
  /* 11cb2ece push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb2ed0 call dword ptr [0x11cb5074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5074))), 0x11cb2ed6u);
  /* 11cb2ed6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb2ed8 jne 0x11cb2eed */
  if (!C.zf) goto L_11cb2eed;
  /* 11cb2eda lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11cb2ee0 push 0x11cb5430 */
  push32((uint32_t)(0x11cb5430u));
  /* 11cb2ee5 push eax */
  push32((uint32_t)(EAX));
  /* 11cb2ee6 call 0x11cb3230 */
  push32(0x11cb2eebu); f_11cb3230();
  /* 11cb2eeb pop ecx */
  ECX = (pop32());
  /* 11cb2eec pop ecx */
  ECX = (pop32());
L_11cb2eed:;
  /* 11cb2eed lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11cb2ef3 push edi */
  push32((uint32_t)(EDI));
  /* 11cb2ef4 push eax */
  push32((uint32_t)(EAX));
  /* 11cb2ef5 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11cb2efb call 0x11cb3320 */
  push32(0x11cb2f00u); f_11cb3320();
  /* 11cb2f00 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb2f01 pop ecx */
  ECX = (pop32());
  /* 11cb2f02 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2f05 jbe 0x11cb2f30 */
  if ((C.cf||C.zf)) goto L_11cb2f30;
  /* 11cb2f07 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11cb2f0d push eax */
  push32((uint32_t)(EAX));
  /* 11cb2f0e call 0x11cb3320 */
  push32(0x11cb2f13u); f_11cb3320();
  /* 11cb2f13 mov edi, eax */
  EDI = (EAX);
  /* 11cb2f15 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11cb2f1b sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb2f1e push 3 */
  push32((uint32_t)(0x3u));
  /* 11cb2f20 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb2f22 push 0x11cb542c */
  push32((uint32_t)(0x11cb542cu));
  /* 11cb2f27 push edi */
  push32((uint32_t)(EDI));
  /* 11cb2f28 call 0x11cb43a0 */
  push32(0x11cb2f2du); f_11cb43a0();
  /* 11cb2f2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb2f30:;
  /* 11cb2f30 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11cb2f36 push 0x11cb5410 */
  push32((uint32_t)(0x11cb5410u));
  /* 11cb2f3b push eax */
  push32((uint32_t)(EAX));
  /* 11cb2f3c call 0x11cb3230 */
  push32(0x11cb2f41u); f_11cb3230();
  /* 11cb2f41 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11cb2f47 push edi */
  push32((uint32_t)(EDI));
  /* 11cb2f48 push eax */
  push32((uint32_t)(EAX));
  /* 11cb2f49 call 0x11cb3240 */
  push32(0x11cb2f4eu); f_11cb3240();
  /* 11cb2f4e lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11cb2f54 push 0x11cb540c */
  push32((uint32_t)(0x11cb540cu));
  /* 11cb2f59 push eax */
  push32((uint32_t)(EAX));
  /* 11cb2f5a call 0x11cb3240 */
  push32(0x11cb2f5fu); f_11cb3240();
  /* 11cb2f5f push dword ptr [esi + 0x11cb6384] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11cb6384))));
  /* 11cb2f65 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11cb2f6b push eax */
  push32((uint32_t)(EAX));
  /* 11cb2f6c call 0x11cb3240 */
  push32(0x11cb2f71u); f_11cb3240();
  /* 11cb2f71 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11cb2f76 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11cb2f7c push 0x11cb53e4 */
  push32((uint32_t)(0x11cb53e4u));
  /* 11cb2f81 push eax */
  push32((uint32_t)(EAX));
  /* 11cb2f82 call 0x11cb430e */
  push32(0x11cb2f87u); f_11cb430e();
  /* 11cb2f87 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb2f8a pop edi */
  EDI = (pop32());
  /* 11cb2f8b jmp 0x11cb2fb3 */
  goto L_11cb2fb3;
L_11cb2f8d:;
  /* 11cb2f8d lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11cb2f90 lea esi, [esi + 0x11cb6384] */
  ESI = ((uint32_t)(ESI + 0x11cb6384));
  /* 11cb2f96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb2f98 push eax */
  push32((uint32_t)(EAX));
  /* 11cb2f99 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11cb2f9b call 0x11cb3320 */
  push32(0x11cb2fa0u); f_11cb3320();
  /* 11cb2fa0 pop ecx */
  ECX = (pop32());
  /* 11cb2fa1 push eax */
  push32((uint32_t)(EAX));
  /* 11cb2fa2 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11cb2fa4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11cb2fa6 call dword ptr [0x11cb5084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5084))), 0x11cb2facu);
  /* 11cb2fac push eax */
  push32((uint32_t)(EAX));
  /* 11cb2fad call dword ptr [0x11cb504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb504c))), 0x11cb2fb3u);
L_11cb2fb3:;
  /* 11cb2fb3 pop esi */
  ESI = (pop32());
  /* 11cb2fb4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb2fb5 ret  */
  ESPCHK(0x11cb2e63u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fb6 @ 0x11cb2fb6 (41 bytes, 12 insns) */
void f_11cb2fb6(void) {
  FTRACE(0x11cb2fb6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb2fb6 push esi */
  push32((uint32_t)(ESI));
  /* 11cb2fb7 mov esi, dword ptr [0x11cb5048] */
  ESI = (r32((uint32_t)(0x11cb5048)));
  /* 11cb2fbd push dword ptr [0x11cb6454] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6454))));
  /* 11cb2fc3 call esi */
  call_ind((uint32_t)(ESI), 0x11cb2fc5u);
  /* 11cb2fc5 push dword ptr [0x11cb6444] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6444))));
  /* 11cb2fcb call esi */
  call_ind((uint32_t)(ESI), 0x11cb2fcdu);
  /* 11cb2fcd push dword ptr [0x11cb6434] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6434))));
  /* 11cb2fd3 call esi */
  call_ind((uint32_t)(ESI), 0x11cb2fd5u);
  /* 11cb2fd5 push dword ptr [0x11cb6414] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6414))));
  /* 11cb2fdb call esi */
  call_ind((uint32_t)(ESI), 0x11cb2fddu);
  /* 11cb2fdd pop esi */
  ESI = (pop32());
  /* 11cb2fde ret  */
  ESPCHK(0x11cb2fb6u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fdf @ 0x11cb2fdf (108 bytes, 34 insns) */
void f_11cb2fdf(void) {
  FTRACE(0x11cb2fdfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb2fdf push esi */
  push32((uint32_t)(ESI));
  /* 11cb2fe0 push edi */
  push32((uint32_t)(EDI));
  /* 11cb2fe1 mov edi, dword ptr [0x11cb5078] */
  EDI = (r32((uint32_t)(0x11cb5078)));
  /* 11cb2fe7 mov esi, 0x11cb6410 */
  ESI = (0x11cb6410u);
L_11cb2fec:;
  /* 11cb2fec mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11cb2fee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb2ff0 je 0x11cb301d */
  if (C.zf) goto L_11cb301d;
  /* 11cb2ff2 cmp esi, 0x11cb6454 */
  { uint32_t _a=(ESI),_b=(0x11cb6454u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb2ff8 je 0x11cb301d */
  if (C.zf) goto L_11cb301d;
  /* 11cb2ffa cmp esi, 0x11cb6444 */
  { uint32_t _a=(ESI),_b=(0x11cb6444u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3000 je 0x11cb301d */
  if (C.zf) goto L_11cb301d;
  /* 11cb3002 cmp esi, 0x11cb6434 */
  { uint32_t _a=(ESI),_b=(0x11cb6434u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3008 je 0x11cb301d */
  if (C.zf) goto L_11cb301d;
  /* 11cb300a cmp esi, 0x11cb6414 */
  { uint32_t _a=(ESI),_b=(0x11cb6414u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3010 je 0x11cb301d */
  if (C.zf) goto L_11cb301d;
  /* 11cb3012 push eax */
  push32((uint32_t)(EAX));
  /* 11cb3013 call edi */
  call_ind((uint32_t)(EDI), 0x11cb3015u);
  /* 11cb3015 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11cb3017 call 0x11cb314e */
  push32(0x11cb301cu); f_11cb314e();
  /* 11cb301c pop ecx */
  ECX = (pop32());
L_11cb301d:;
  /* 11cb301d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb3020 cmp esi, 0x11cb64d0 */
  { uint32_t _a=(ESI),_b=(0x11cb64d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3026 jl 0x11cb2fec */
  if ((C.sf!=C.of)) goto L_11cb2fec;
  /* 11cb3028 push dword ptr [0x11cb6434] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6434))));
  /* 11cb302e call edi */
  call_ind((uint32_t)(EDI), 0x11cb3030u);
  /* 11cb3030 push dword ptr [0x11cb6444] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6444))));
  /* 11cb3036 call edi */
  call_ind((uint32_t)(EDI), 0x11cb3038u);
  /* 11cb3038 push dword ptr [0x11cb6454] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6454))));
  /* 11cb303e call edi */
  call_ind((uint32_t)(EDI), 0x11cb3040u);
  /* 11cb3040 push dword ptr [0x11cb6414] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6414))));
  /* 11cb3046 call edi */
  call_ind((uint32_t)(EDI), 0x11cb3048u);
  /* 11cb3048 pop edi */
  EDI = (pop32());
  /* 11cb3049 pop esi */
  ESI = (pop32());
  /* 11cb304a ret  */
  ESPCHK(0x11cb2fdfu, _esp0);
  ESP += 4; return;
}

/* FUN_1000304b @ 0x11cb304b (97 bytes, 37 insns) */
void f_11cb304b(void) {
  FTRACE(0x11cb304bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb304b push ebp */
  push32((uint32_t)(EBP));
  /* 11cb304c mov ebp, esp */
  EBP = (ESP);
  /* 11cb304e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb3051 push esi */
  push32((uint32_t)(ESI));
  /* 11cb3052 cmp dword ptr [eax*4 + 0x11cb6410], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11cb6410))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb305a lea esi, [eax*4 + 0x11cb6410] */
  ESI = ((uint32_t)(EAX*4 + 0x11cb6410));
  /* 11cb3061 jne 0x11cb30a1 */
  if (!C.zf) goto L_11cb30a1;
  /* 11cb3063 push edi */
  push32((uint32_t)(EDI));
  /* 11cb3064 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11cb3066 call 0x11cb3196 */
  push32(0x11cb306bu); f_11cb3196();
  /* 11cb306b mov edi, eax */
  EDI = (EAX);
  /* 11cb306d pop ecx */
  ECX = (pop32());
  /* 11cb306e test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11cb3070 jne 0x11cb307a */
  if (!C.zf) goto L_11cb307a;
  /* 11cb3072 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11cb3074 call 0x11cb24bb */
  push32(0x11cb3079u); f_11cb24bb();
  /* 11cb3079 pop ecx */
  ECX = (pop32());
L_11cb307a:;
  /* 11cb307a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11cb307c call 0x11cb304b */
  push32(0x11cb3081u); f_11cb304b();
  /* 11cb3081 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3084 pop ecx */
  ECX = (pop32());
  /* 11cb3085 push edi */
  push32((uint32_t)(EDI));
  /* 11cb3086 jne 0x11cb3092 */
  if (!C.zf) goto L_11cb3092;
  /* 11cb3088 call dword ptr [0x11cb5048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5048))), 0x11cb308eu);
  /* 11cb308e mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11cb3090 jmp 0x11cb3098 */
  goto L_11cb3098;
L_11cb3092:;
  /* 11cb3092 call 0x11cb314e */
  push32(0x11cb3097u); f_11cb314e();
  /* 11cb3097 pop ecx */
  ECX = (pop32());
L_11cb3098:;
  /* 11cb3098 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11cb309a call 0x11cb30ac */
  push32(0x11cb309fu); f_11cb30ac();
  /* 11cb309f pop ecx */
  ECX = (pop32());
  /* 11cb30a0 pop edi */
  EDI = (pop32());
L_11cb30a1:;
  /* 11cb30a1 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11cb30a3 call dword ptr [0x11cb5044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5044))), 0x11cb30a9u);
  /* 11cb30a9 pop esi */
  ESI = (pop32());
  /* 11cb30aa pop ebp */
  EBP = (pop32());
  /* 11cb30ab ret  */
  ESPCHK(0x11cb304bu, _esp0);
  ESP += 4; return;
}

/* FUN_100030ac @ 0x11cb30ac (21 bytes, 7 insns) */
void f_11cb30ac(void) {
  FTRACE(0x11cb30acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb30ac push ebp */
  push32((uint32_t)(EBP));
  /* 11cb30ad mov ebp, esp */
  EBP = (ESP);
  /* 11cb30af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb30b2 push dword ptr [eax*4 + 0x11cb6410] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11cb6410))));
  /* 11cb30b9 call dword ptr [0x11cb5040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5040))), 0x11cb30bfu);
  /* 11cb30bf pop ebp */
  EBP = (pop32());
  /* 11cb30c0 ret  */
  ESPCHK(0x11cb30acu, _esp0);
  ESP += 4; return;
}

/* FUN_100030c1 @ 0x11cb30c1 (141 bytes, 56 insns) */
void f_11cb30c1(void) {
  FTRACE(0x11cb30c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb30c1 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb30c2 push esi */
  push32((uint32_t)(ESI));
  /* 11cb30c3 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11cb30c7 push edi */
  push32((uint32_t)(EDI));
  /* 11cb30c8 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cb30cd cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb30d0 mov ebx, esi */
  EBX = (ESI);
  /* 11cb30d2 ja 0x11cb30e1 */
  if ((!C.cf&&!C.zf)) goto L_11cb30e1;
  /* 11cb30d4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11cb30d6 jne 0x11cb30db */
  if (!C.zf) goto L_11cb30db;
  /* 11cb30d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb30da pop esi */
  ESI = (pop32());
L_11cb30db:;
  /* 11cb30db add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb30de and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_11cb30e1:;
  /* 11cb30e1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11cb30e3 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb30e6 ja 0x11cb3122 */
  if ((!C.cf&&!C.zf)) goto L_11cb3122;
  /* 11cb30e8 cmp ebx, dword ptr [0x11cb6660] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11cb6660))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb30ee ja 0x11cb310d */
  if ((!C.cf&&!C.zf)) goto L_11cb310d;
  /* 11cb30f0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11cb30f2 call 0x11cb304b */
  push32(0x11cb30f7u); f_11cb304b();
  /* 11cb30f7 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb30f8 call 0x11cb3e59 */
  push32(0x11cb30fdu); f_11cb3e59();
  /* 11cb30fd push 9 */
  push32((uint32_t)(0x9u));
  /* 11cb30ff mov edi, eax */
  EDI = (EAX);
  /* 11cb3101 call 0x11cb30ac */
  push32(0x11cb3106u); f_11cb30ac();
  /* 11cb3106 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb3109 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11cb310b jne 0x11cb3138 */
  if (!C.zf) goto L_11cb3138;
L_11cb310d:;
  /* 11cb310d push esi */
  push32((uint32_t)(ESI));
  /* 11cb310e push 8 */
  push32((uint32_t)(0x8u));
  /* 11cb3110 push dword ptr [0x11cb6d48] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6d48))));
  /* 11cb3116 call dword ptr [0x11cb503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb503c))), 0x11cb311cu);
  /* 11cb311c mov edi, eax */
  EDI = (EAX);
  /* 11cb311e test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11cb3120 jne 0x11cb3144 */
  if (!C.zf) goto L_11cb3144;
L_11cb3122:;
  /* 11cb3122 cmp dword ptr [0x11cb6adc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cb6adc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3129 je 0x11cb3144 */
  if (C.zf) goto L_11cb3144;
  /* 11cb312b push esi */
  push32((uint32_t)(ESI));
  /* 11cb312c call 0x11cb44f8 */
  push32(0x11cb3131u); f_11cb44f8();
  /* 11cb3131 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb3133 pop ecx */
  ECX = (pop32());
  /* 11cb3134 je 0x11cb314a */
  if (C.zf) goto L_11cb314a;
  /* 11cb3136 jmp 0x11cb30e1 */
  goto L_11cb30e1;
L_11cb3138:;
  /* 11cb3138 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb3139 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb313b push edi */
  push32((uint32_t)(EDI));
  /* 11cb313c call 0x11cb44a0 */
  push32(0x11cb3141u); f_11cb44a0();
  /* 11cb3141 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cb3144:;
  /* 11cb3144 mov eax, edi */
  EAX = (EDI);
L_11cb3146:;
  /* 11cb3146 pop edi */
  EDI = (pop32());
  /* 11cb3147 pop esi */
  ESI = (pop32());
  /* 11cb3148 pop ebx */
  EBX = (pop32());
  /* 11cb3149 ret  */
  ESPCHK(0x11cb30c1u, _esp0);
  ESP += 4; return;
L_11cb314a:;
  /* 11cb314a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb314c jmp 0x11cb3146 */
  goto L_11cb3146;
}

/* FUN_1000314e @ 0x11cb314e (72 bytes, 29 insns) */
void f_11cb314e(void) {
  FTRACE(0x11cb314eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb314e push esi */
  push32((uint32_t)(ESI));
  /* 11cb314f mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11cb3153 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11cb3155 je 0x11cb3194 */
  if (C.zf) goto L_11cb3194;
  /* 11cb3157 push 9 */
  push32((uint32_t)(0x9u));
  /* 11cb3159 call 0x11cb304b */
  push32(0x11cb315eu); f_11cb304b();
  /* 11cb315e push esi */
  push32((uint32_t)(ESI));
  /* 11cb315f call 0x11cb3b03 */
  push32(0x11cb3164u); f_11cb3b03();
  /* 11cb3164 pop ecx */
  ECX = (pop32());
  /* 11cb3165 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb3167 pop ecx */
  ECX = (pop32());
  /* 11cb3168 je 0x11cb317d */
  if (C.zf) goto L_11cb317d;
  /* 11cb316a push esi */
  push32((uint32_t)(ESI));
  /* 11cb316b push eax */
  push32((uint32_t)(EAX));
  /* 11cb316c call 0x11cb3b2e */
  push32(0x11cb3171u); f_11cb3b2e();
  /* 11cb3171 push 9 */
  push32((uint32_t)(0x9u));
  /* 11cb3173 call 0x11cb30ac */
  push32(0x11cb3178u); f_11cb30ac();
  /* 11cb3178 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb317b pop esi */
  ESI = (pop32());
  /* 11cb317c ret  */
  ESPCHK(0x11cb314eu, _esp0);
  ESP += 4; return;
L_11cb317d:;
  /* 11cb317d push 9 */
  push32((uint32_t)(0x9u));
  /* 11cb317f call 0x11cb30ac */
  push32(0x11cb3184u); f_11cb30ac();
  /* 11cb3184 pop ecx */
  ECX = (pop32());
  /* 11cb3185 push esi */
  push32((uint32_t)(ESI));
  /* 11cb3186 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb3188 push dword ptr [0x11cb6d48] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6d48))));
  /* 11cb318e call dword ptr [0x11cb5050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5050))), 0x11cb3194u);
L_11cb3194:;
  /* 11cb3194 pop esi */
  ESI = (pop32());
  /* 11cb3195 ret  */
  ESPCHK(0x11cb314eu, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11cb3196 (18 bytes, 6 insns) */
void f_11cb3196(void) {
  FTRACE(0x11cb3196u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb3196 push dword ptr [0x11cb6adc] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6adc))));
  /* 11cb319c push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11cb31a0 call 0x11cb31a8 */
  push32(0x11cb31a5u); f_11cb31a8();
  /* 11cb31a5 pop ecx */
  ECX = (pop32());
  /* 11cb31a6 pop ecx */
  ECX = (pop32());
  /* 11cb31a7 ret  */
  ESPCHK(0x11cb3196u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11cb31a8 (44 bytes, 16 insns) */
void f_11cb31a8(void) {
  FTRACE(0x11cb31a8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb31a8 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb31ad ja 0x11cb31d1 */
  if ((!C.cf&&!C.zf)) goto L_11cb31d1;
L_11cb31af:;
  /* 11cb31af push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11cb31b3 call 0x11cb31d4 */
  push32(0x11cb31b8u); f_11cb31d4();
  /* 11cb31b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb31ba pop ecx */
  ECX = (pop32());
  /* 11cb31bb jne 0x11cb31d3 */
  if (!C.zf) goto L_11cb31d3;
  /* 11cb31bd cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb31c1 je 0x11cb31d3 */
  if (C.zf) goto L_11cb31d3;
  /* 11cb31c3 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11cb31c7 call 0x11cb44f8 */
  push32(0x11cb31ccu); f_11cb44f8();
  /* 11cb31cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb31ce pop ecx */
  ECX = (pop32());
  /* 11cb31cf jne 0x11cb31af */
  if (!C.zf) goto L_11cb31af;
L_11cb31d1:;
  /* 11cb31d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cb31d3:;
  /* 11cb31d3 ret  */
  ESPCHK(0x11cb31a8u, _esp0);
  ESP += 4; return;
}

/* FUN_100031d4 @ 0x11cb31d4 (78 bytes, 30 insns) */
void f_11cb31d4(void) {
  FTRACE(0x11cb31d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb31d4 push esi */
  push32((uint32_t)(ESI));
  /* 11cb31d5 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11cb31d9 cmp esi, dword ptr [0x11cb6660] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11cb6660))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb31df push edi */
  push32((uint32_t)(EDI));
  /* 11cb31e0 ja 0x11cb3203 */
  if ((!C.cf&&!C.zf)) goto L_11cb3203;
  /* 11cb31e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11cb31e4 call 0x11cb304b */
  push32(0x11cb31e9u); f_11cb304b();
  /* 11cb31e9 push esi */
  push32((uint32_t)(ESI));
  /* 11cb31ea call 0x11cb3e59 */
  push32(0x11cb31efu); f_11cb3e59();
  /* 11cb31ef push 9 */
  push32((uint32_t)(0x9u));
  /* 11cb31f1 mov edi, eax */
  EDI = (EAX);
  /* 11cb31f3 call 0x11cb30ac */
  push32(0x11cb31f8u); f_11cb30ac();
  /* 11cb31f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb31fb test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11cb31fd je 0x11cb3203 */
  if (C.zf) goto L_11cb3203;
  /* 11cb31ff mov eax, edi */
  EAX = (EDI);
  /* 11cb3201 jmp 0x11cb321f */
  goto L_11cb321f;
L_11cb3203:;
  /* 11cb3203 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11cb3205 jne 0x11cb320a */
  if (!C.zf) goto L_11cb320a;
  /* 11cb3207 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb3209 pop esi */
  ESI = (pop32());
L_11cb320a:;
  /* 11cb320a add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb320d and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11cb3210 push esi */
  push32((uint32_t)(ESI));
  /* 11cb3211 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb3213 push dword ptr [0x11cb6d48] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6d48))));
  /* 11cb3219 call dword ptr [0x11cb503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb503c))), 0x11cb321fu);
L_11cb321f:;
  /* 11cb321f pop edi */
  EDI = (pop32());
  /* 11cb3220 pop esi */
  ESI = (pop32());
  /* 11cb3221 ret  */
  ESPCHK(0x11cb31d4u, _esp0);
  ESP += 4; return;
}

/* FUN_10003230 @ 0x11cb3230 (7 bytes, 3 insns) */
void f_11cb3230(void) {
  FTRACE(0x11cb3230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb3230 push edi */
  push32((uint32_t)(EDI));
  /* 11cb3231 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11cb3235 jmp 0x11cb32a1 */
  jmp_ind(0x11cb32a1u); return;
}

/* FUN_10003240 @ 0x11cb3240 (224 bytes, 84 insns) */
void f_11cb3240(void) {
  FTRACE(0x11cb3240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb3240 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11cb3244 push edi */
  push32((uint32_t)(EDI));
  /* 11cb3245 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11cb324b je 0x11cb325c */
  if (C.zf) goto L_11cb325c;
L_11cb324d:;
  /* 11cb324d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11cb324f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11cb3250 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb3252 je 0x11cb328f */
  if (C.zf) goto L_11cb328f;
  /* 11cb3254 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11cb325a jne 0x11cb324d */
  if (!C.zf) goto L_11cb324d;
L_11cb325c:;
  /* 11cb325c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11cb325e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11cb3263 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb3265 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cb3268 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb326a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb326d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11cb3272 je 0x11cb325c */
  if (C.zf) goto L_11cb325c;
  /* 11cb3274 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11cb3277 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb3279 je 0x11cb329e */
  if (C.zf) goto L_11cb329e;
  /* 11cb327b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11cb327d je 0x11cb3299 */
  if (C.zf) goto L_11cb3299;
  /* 11cb327f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11cb3284 je 0x11cb3294 */
  if (C.zf) goto L_11cb3294;
  /* 11cb3286 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11cb328b je 0x11cb328f */
  if (C.zf) goto L_11cb328f;
  /* 11cb328d jmp 0x11cb325c */
  goto L_11cb325c;
L_11cb328f:;
  /* 11cb328f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11cb3292 jmp 0x11cb32a1 */
  goto L_11cb32a1;
L_11cb3294:;
  /* 11cb3294 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11cb3297 jmp 0x11cb32a1 */
  goto L_11cb32a1;
L_11cb3299:;
  /* 11cb3299 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11cb329c jmp 0x11cb32a1 */
  goto L_11cb32a1;
L_11cb329e:;
  /* 11cb329e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11cb32a1:;
  /* 11cb32a1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11cb32a5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11cb32ab je 0x11cb32c6 */
  if (C.zf) goto L_11cb32c6;
L_11cb32ad:;
  /* 11cb32ad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cb32af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11cb32b0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11cb32b2 je 0x11cb3318 */
  if (C.zf) goto L_11cb3318;
  /* 11cb32b4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11cb32b6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11cb32b7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11cb32bd jne 0x11cb32ad */
  if (!C.zf) goto L_11cb32ad;
  /* 11cb32bf jmp 0x11cb32c6 */
  goto L_11cb32c6;
L_11cb32c1:;
  /* 11cb32c1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11cb32c3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11cb32c6:;
  /* 11cb32c6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11cb32cb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11cb32cd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb32cf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cb32d2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb32d4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cb32d6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb32d9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11cb32de je 0x11cb32c1 */
  if (C.zf) goto L_11cb32c1;
  /* 11cb32e0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11cb32e2 je 0x11cb3318 */
  if (C.zf) goto L_11cb3318;
  /* 11cb32e4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11cb32e6 je 0x11cb330f */
  if (C.zf) goto L_11cb330f;
  /* 11cb32e8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11cb32ee je 0x11cb3302 */
  if (C.zf) goto L_11cb3302;
  /* 11cb32f0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11cb32f6 je 0x11cb32fa */
  if (C.zf) goto L_11cb32fa;
  /* 11cb32f8 jmp 0x11cb32c1 */
  goto L_11cb32c1;
L_11cb32fa:;
  /* 11cb32fa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11cb32fc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11cb3300 pop edi */
  EDI = (pop32());
  /* 11cb3301 ret  */
  ESPCHK(0x11cb3240u, _esp0);
  ESP += 4; return;
L_11cb3302:;
  /* 11cb3302 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11cb3305 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11cb3309 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11cb330d pop edi */
  EDI = (pop32());
  /* 11cb330e ret  */
  ESPCHK(0x11cb3240u, _esp0);
  ESP += 4; return;
L_11cb330f:;
  /* 11cb330f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11cb3312 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11cb3316 pop edi */
  EDI = (pop32());
  /* 11cb3317 ret  */
  ESPCHK(0x11cb3240u, _esp0);
  ESP += 4; return;
L_11cb3318:;
  /* 11cb3318 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11cb331a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11cb331e pop edi */
  EDI = (pop32());
  /* 11cb331f ret  */
  ESPCHK(0x11cb3240u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11cb3320 (123 bytes, 44 insns) */
void f_11cb3320(void) {
  FTRACE(0x11cb3320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb3320 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11cb3324 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11cb332a je 0x11cb3340 */
  if (C.zf) goto L_11cb3340;
L_11cb332c:;
  /* 11cb332c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11cb332e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11cb332f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb3331 je 0x11cb3373 */
  if (C.zf) goto L_11cb3373;
  /* 11cb3333 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11cb3339 jne 0x11cb332c */
  if (!C.zf) goto L_11cb332c;
  /* 11cb333b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11cb3340:;
  /* 11cb3340 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11cb3342 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11cb3347 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb3349 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cb334c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb334e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb3351 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11cb3356 je 0x11cb3340 */
  if (C.zf) goto L_11cb3340;
  /* 11cb3358 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11cb335b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb335d je 0x11cb3391 */
  if (C.zf) goto L_11cb3391;
  /* 11cb335f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11cb3361 je 0x11cb3387 */
  if (C.zf) goto L_11cb3387;
  /* 11cb3363 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11cb3368 je 0x11cb337d */
  if (C.zf) goto L_11cb337d;
  /* 11cb336a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11cb336f je 0x11cb3373 */
  if (C.zf) goto L_11cb3373;
  /* 11cb3371 jmp 0x11cb3340 */
  goto L_11cb3340;
L_11cb3373:;
  /* 11cb3373 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11cb3376 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11cb337a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb337c ret  */
  ESPCHK(0x11cb3320u, _esp0);
  ESP += 4; return;
L_11cb337d:;
  /* 11cb337d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11cb3380 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11cb3384 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb3386 ret  */
  ESPCHK(0x11cb3320u, _esp0);
  ESP += 4; return;
L_11cb3387:;
  /* 11cb3387 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11cb338a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11cb338e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb3390 ret  */
  ESPCHK(0x11cb3320u, _esp0);
  ESP += 4; return;
L_11cb3391:;
  /* 11cb3391 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11cb3394 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11cb3398 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb339a ret  */
  ESPCHK(0x11cb3320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000339b @ 0x11cb339b (429 bytes, 143 insns) */
void f_11cb339b(void) {
  FTRACE(0x11cb339bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb339b push ebp */
  push32((uint32_t)(EBP));
  /* 11cb339c mov ebp, esp */
  EBP = (ESP);
  /* 11cb339e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb33a1 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb33a2 push esi */
  push32((uint32_t)(ESI));
  /* 11cb33a3 push edi */
  push32((uint32_t)(EDI));
  /* 11cb33a4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11cb33a6 call 0x11cb304b */
  push32(0x11cb33abu); f_11cb304b();
  /* 11cb33ab push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11cb33ae call 0x11cb3548 */
  push32(0x11cb33b3u); f_11cb3548();
  /* 11cb33b3 mov ebx, eax */
  EBX = (EAX);
  /* 11cb33b5 pop ecx */
  ECX = (pop32());
  /* 11cb33b6 cmp ebx, dword ptr [0x11cb6b20] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11cb6b20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb33bc pop ecx */
  ECX = (pop32());
  /* 11cb33bd mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11cb33c0 jne 0x11cb33c9 */
  if (!C.zf) goto L_11cb33c9;
L_11cb33c2:;
  /* 11cb33c2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11cb33c4 jmp 0x11cb3539 */
  goto L_11cb3539;
L_11cb33c9:;
  /* 11cb33c9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11cb33cb je 0x11cb3527 */
  if (C.zf) goto L_11cb3527;
  /* 11cb33d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cb33d3 mov eax, 0x11cb6568 */
  EAX = (0x11cb6568u);
L_11cb33d8:;
  /* 11cb33d8 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb33da je 0x11cb3450 */
  if (C.zf) goto L_11cb3450;
  /* 11cb33dc add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb33df inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11cb33e0 cmp eax, 0x11cb6658 */
  { uint32_t _a=(EAX),_b=(0x11cb6658u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb33e5 jl 0x11cb33d8 */
  if ((C.sf!=C.of)) goto L_11cb33d8;
  /* 11cb33e7 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11cb33ea push eax */
  push32((uint32_t)(EAX));
  /* 11cb33eb push ebx */
  push32((uint32_t)(EBX));
  /* 11cb33ec call dword ptr [0x11cb5038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5038))), 0x11cb33f2u);
  /* 11cb33f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb33f4 pop esi */
  ESI = (pop32());
  /* 11cb33f5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb33f7 jne 0x11cb351e */
  if (!C.zf) goto L_11cb351e;
  /* 11cb33fd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11cb33ff and dword ptr [0x11cb6d44], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11cb6d44)))&(0x0u); w32((uint32_t)(0x11cb6d44), (_r)); fl_logic(_r,32); }
  /* 11cb3406 pop ecx */
  ECX = (pop32());
  /* 11cb3407 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb3409 mov edi, 0x11cb6c40 */
  EDI = (0x11cb6c40u);
  /* 11cb340e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3411 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cb3413 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11cb3414 mov dword ptr [0x11cb6b20], ebx */
  w32((uint32_t)(0x11cb6b20), (EBX));
  /* 11cb341a jbe 0x11cb350b */
  if ((C.cf||C.zf)) goto L_11cb350b;
  /* 11cb3420 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb3424 je 0x11cb34e6 */
  if (C.zf) goto L_11cb34e6;
  /* 11cb342a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11cb342d:;
  /* 11cb342d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cb342f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11cb3431 je 0x11cb34e6 */
  if (C.zf) goto L_11cb34e6;
  /* 11cb3437 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11cb343b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11cb343e:;
  /* 11cb343e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3440 ja 0x11cb34da */
  if ((!C.cf&&!C.zf)) goto L_11cb34da;
  /* 11cb3446 or byte ptr [eax + 0x11cb6c41], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11cb6c41)))|(0x4u); w8((uint32_t)(EAX + 0x11cb6c41), (_r)); fl_logic(_r,8); }
  /* 11cb344d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb344e jmp 0x11cb343e */
  goto L_11cb343e;
L_11cb3450:;
  /* 11cb3450 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11cb3454 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11cb3456 pop ecx */
  ECX = (pop32());
  /* 11cb3457 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb3459 mov edi, 0x11cb6c40 */
  EDI = (0x11cb6c40u);
  /* 11cb345e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11cb3461 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cb3463 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11cb3466 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11cb3467 lea ebx, [esi + 0x11cb6578] */
  EBX = ((uint32_t)(ESI + 0x11cb6578));
L_11cb346d:;
  /* 11cb346d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb3470 mov ecx, ebx */
  ECX = (EBX);
  /* 11cb3472 je 0x11cb34a0 */
  if (C.zf) goto L_11cb34a0;
L_11cb3474:;
  /* 11cb3474 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11cb3477 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11cb3479 je 0x11cb34a0 */
  if (C.zf) goto L_11cb34a0;
  /* 11cb347b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11cb347e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11cb3481 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3483 ja 0x11cb3499 */
  if ((!C.cf&&!C.zf)) goto L_11cb3499;
  /* 11cb3485 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cb3488 mov dl, byte ptr [edx + 0x11cb6560] */
  DL = (r8((uint32_t)(EDX + 0x11cb6560)));
L_11cb348e:;
  /* 11cb348e or byte ptr [eax + 0x11cb6c41], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11cb6c41)))|(DL); w8((uint32_t)(EAX + 0x11cb6c41), (_r)); fl_logic(_r,8); }
  /* 11cb3494 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb3495 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3497 jbe 0x11cb348e */
  if ((C.cf||C.zf)) goto L_11cb348e;
L_11cb3499:;
  /* 11cb3499 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11cb349a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11cb349b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb349e jne 0x11cb3474 */
  if (!C.zf) goto L_11cb3474;
L_11cb34a0:;
  /* 11cb34a0 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11cb34a3 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb34a6 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb34aa jb 0x11cb346d */
  if (C.cf) goto L_11cb346d;
  /* 11cb34ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb34af mov dword ptr [0x11cb6b3c], 1 */
  w32((uint32_t)(0x11cb6b3c), (0x1u));
  /* 11cb34b9 push eax */
  push32((uint32_t)(EAX));
  /* 11cb34ba mov dword ptr [0x11cb6b20], eax */
  w32((uint32_t)(0x11cb6b20), (EAX));
  /* 11cb34bf call 0x11cb3592 */
  push32(0x11cb34c4u); f_11cb3592();
  /* 11cb34c4 lea esi, [esi + 0x11cb656c] */
  ESI = ((uint32_t)(ESI + 0x11cb656c));
  /* 11cb34ca mov edi, 0x11cb6b30 */
  EDI = (0x11cb6b30u);
  /* 11cb34cf movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11cb34d0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11cb34d1 pop ecx */
  ECX = (pop32());
  /* 11cb34d2 mov dword ptr [0x11cb6d44], eax */
  w32((uint32_t)(0x11cb6d44), (EAX));
  /* 11cb34d7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11cb34d8 jmp 0x11cb352c */
  goto L_11cb352c;
L_11cb34da:;
  /* 11cb34da inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11cb34db inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11cb34dc cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb34e0 jne 0x11cb342d */
  if (!C.zf) goto L_11cb342d;
L_11cb34e6:;
  /* 11cb34e6 mov eax, esi */
  EAX = (ESI);
L_11cb34e8:;
  /* 11cb34e8 or byte ptr [eax + 0x11cb6c41], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11cb6c41)))|(0x8u); w8((uint32_t)(EAX + 0x11cb6c41), (_r)); fl_logic(_r,8); }
  /* 11cb34ef inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb34f0 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb34f5 jb 0x11cb34e8 */
  if (C.cf) goto L_11cb34e8;
  /* 11cb34f7 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb34f8 call 0x11cb3592 */
  push32(0x11cb34fdu); f_11cb3592();
  /* 11cb34fd pop ecx */
  ECX = (pop32());
  /* 11cb34fe mov dword ptr [0x11cb6d44], eax */
  w32((uint32_t)(0x11cb6d44), (EAX));
  /* 11cb3503 mov dword ptr [0x11cb6b3c], esi */
  w32((uint32_t)(0x11cb6b3c), (ESI));
  /* 11cb3509 jmp 0x11cb3512 */
  goto L_11cb3512;
L_11cb350b:;
  /* 11cb350b and dword ptr [0x11cb6b3c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11cb6b3c)))&(0x0u); w32((uint32_t)(0x11cb6b3c), (_r)); fl_logic(_r,32); }
L_11cb3512:;
  /* 11cb3512 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb3514 mov edi, 0x11cb6b30 */
  EDI = (0x11cb6b30u);
  /* 11cb3519 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11cb351a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11cb351b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11cb351c jmp 0x11cb352c */
  goto L_11cb352c;
L_11cb351e:;
  /* 11cb351e cmp dword ptr [0x11cb6ac8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cb6ac8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3525 je 0x11cb3536 */
  if (C.zf) goto L_11cb3536;
L_11cb3527:;
  /* 11cb3527 call 0x11cb35c5 */
  push32(0x11cb352cu); f_11cb35c5();
L_11cb352c:;
  /* 11cb352c call 0x11cb35ee */
  push32(0x11cb3531u); f_11cb35ee();
  /* 11cb3531 jmp 0x11cb33c2 */
  goto L_11cb33c2;
L_11cb3536:;
  /* 11cb3536 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11cb3539:;
  /* 11cb3539 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11cb353b call 0x11cb30ac */
  push32(0x11cb3540u); f_11cb30ac();
  /* 11cb3540 pop ecx */
  ECX = (pop32());
  /* 11cb3541 mov eax, esi */
  EAX = (ESI);
  /* 11cb3543 pop edi */
  EDI = (pop32());
  /* 11cb3544 pop esi */
  ESI = (pop32());
  /* 11cb3545 pop ebx */
  EBX = (pop32());
  /* 11cb3546 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb3547 ret  */
  ESPCHK(0x11cb339bu, _esp0);
  ESP += 4; return;
}

/* FUN_10003548 @ 0x11cb3548 (74 bytes, 15 insns) */
void f_11cb3548(void) {
  FTRACE(0x11cb3548u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb3548 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11cb354c and dword ptr [0x11cb6ac8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11cb6ac8)))&(0x0u); w32((uint32_t)(0x11cb6ac8), (_r)); fl_logic(_r,32); }
  /* 11cb3553 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3556 jne 0x11cb3568 */
  if (!C.zf) goto L_11cb3568;
  /* 11cb3558 mov dword ptr [0x11cb6ac8], 1 */
  w32((uint32_t)(0x11cb6ac8), (0x1u));
  /* 11cb3562 jmp dword ptr [0x11cb5030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11cb5030)))); return;
L_11cb3568:;
  /* 11cb3568 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb356b jne 0x11cb357d */
  if (!C.zf) goto L_11cb357d;
  /* 11cb356d mov dword ptr [0x11cb6ac8], 1 */
  w32((uint32_t)(0x11cb6ac8), (0x1u));
  /* 11cb3577 jmp dword ptr [0x11cb5034] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11cb5034)))); return;
L_11cb357d:;
  /* 11cb357d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3580 jne 0x11cb3591 */
  if (!C.zf) goto L_11cb3591;
  /* 11cb3582 mov eax, dword ptr [0x11cb6af8] */
  EAX = (r32((uint32_t)(0x11cb6af8)));
  /* 11cb3587 mov dword ptr [0x11cb6ac8], 1 */
  w32((uint32_t)(0x11cb6ac8), (0x1u));
L_11cb3591:;
  /* 11cb3591 ret  */
  ESPCHK(0x11cb3548u, _esp0);
  ESP += 4; return;
}

/* FUN_10003592 @ 0x11cb3592 (51 bytes, 19 insns) */
void f_11cb3592(void) {
  FTRACE(0x11cb3592u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb3592 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11cb3596 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb359b je 0x11cb35bf */
  if (C.zf) goto L_11cb35bf;
  /* 11cb359d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb35a0 je 0x11cb35b9 */
  if (C.zf) goto L_11cb35b9;
  /* 11cb35a2 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb35a5 je 0x11cb35b3 */
  if (C.zf) goto L_11cb35b3;
  /* 11cb35a7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11cb35a8 je 0x11cb35ad */
  if (C.zf) goto L_11cb35ad;
  /* 11cb35aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb35ac ret  */
  ESPCHK(0x11cb3592u, _esp0);
  ESP += 4; return;
L_11cb35ad:;
  /* 11cb35ad mov eax, 0x404 */
  EAX = (0x404u);
  /* 11cb35b2 ret  */
  ESPCHK(0x11cb3592u, _esp0);
  ESP += 4; return;
L_11cb35b3:;
  /* 11cb35b3 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11cb35b8 ret  */
  ESPCHK(0x11cb3592u, _esp0);
  ESP += 4; return;
L_11cb35b9:;
  /* 11cb35b9 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11cb35be ret  */
  ESPCHK(0x11cb3592u, _esp0);
  ESP += 4; return;
L_11cb35bf:;
  /* 11cb35bf mov eax, 0x411 */
  EAX = (0x411u);
  /* 11cb35c4 ret  */
  ESPCHK(0x11cb3592u, _esp0);
  ESP += 4; return;
}

/* FUN_100035c5 @ 0x11cb35c5 (41 bytes, 17 insns) */
void f_11cb35c5(void) {
  FTRACE(0x11cb35c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb35c5 push edi */
  push32((uint32_t)(EDI));
  /* 11cb35c6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11cb35c8 pop ecx */
  ECX = (pop32());
  /* 11cb35c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb35cb mov edi, 0x11cb6c40 */
  EDI = (0x11cb6c40u);
  /* 11cb35d0 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cb35d2 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11cb35d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb35d5 mov edi, 0x11cb6b30 */
  EDI = (0x11cb6b30u);
  /* 11cb35da mov dword ptr [0x11cb6b20], eax */
  w32((uint32_t)(0x11cb6b20), (EAX));
  /* 11cb35df mov dword ptr [0x11cb6b3c], eax */
  w32((uint32_t)(0x11cb6b3c), (EAX));
  /* 11cb35e4 mov dword ptr [0x11cb6d44], eax */
  w32((uint32_t)(0x11cb6d44), (EAX));
  /* 11cb35e9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11cb35ea stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11cb35eb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11cb35ec pop edi */
  EDI = (pop32());
  /* 11cb35ed ret  */
  ESPCHK(0x11cb35c5u, _esp0);
  ESP += 4; return;
}

/* FUN_100035ee @ 0x11cb35ee (389 bytes, 124 insns) */
void f_11cb35ee(void) {
  FTRACE(0x11cb35eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb35ee push ebp */
  push32((uint32_t)(EBP));
  /* 11cb35ef mov ebp, esp */
  EBP = (ESP);
  /* 11cb35f1 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb35f7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11cb35fa push esi */
  push32((uint32_t)(ESI));
  /* 11cb35fb push eax */
  push32((uint32_t)(EAX));
  /* 11cb35fc push dword ptr [0x11cb6b20] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6b20))));
  /* 11cb3602 call dword ptr [0x11cb5038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5038))), 0x11cb3608u);
  /* 11cb3608 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb360b jne 0x11cb3727 */
  if (!C.zf) goto L_11cb3727;
  /* 11cb3611 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb3613 mov esi, 0x100 */
  ESI = (0x100u);
L_11cb3618:;
  /* 11cb3618 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11cb361f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb3620 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3622 jb 0x11cb3618 */
  if (C.cf) goto L_11cb3618;
  /* 11cb3624 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11cb3627 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11cb362e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb3630 je 0x11cb3669 */
  if (C.zf) goto L_11cb3669;
  /* 11cb3632 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb3633 push edi */
  push32((uint32_t)(EDI));
  /* 11cb3634 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11cb3637:;
  /* 11cb3637 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11cb363a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11cb363d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb363f ja 0x11cb365e */
  if ((!C.cf&&!C.zf)) goto L_11cb365e;
  /* 11cb3641 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb3643 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11cb364a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11cb364b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11cb3650 mov ebx, ecx */
  EBX = (ECX);
  /* 11cb3652 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cb3655 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cb3657 mov ecx, ebx */
  ECX = (EBX);
  /* 11cb3659 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11cb365c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11cb365e:;
  /* 11cb365e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11cb365f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11cb3660 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11cb3663 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb3665 jne 0x11cb3637 */
  if (!C.zf) goto L_11cb3637;
  /* 11cb3667 pop edi */
  EDI = (pop32());
  /* 11cb3668 pop ebx */
  EBX = (pop32());
L_11cb3669:;
  /* 11cb3669 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb366b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11cb3671 push dword ptr [0x11cb6d44] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6d44))));
  /* 11cb3677 push dword ptr [0x11cb6b20] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6b20))));
  /* 11cb367d push eax */
  push32((uint32_t)(EAX));
  /* 11cb367e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11cb3684 push esi */
  push32((uint32_t)(ESI));
  /* 11cb3685 push eax */
  push32((uint32_t)(EAX));
  /* 11cb3686 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb3688 call 0x11cb4762 */
  push32(0x11cb368du); f_11cb4762();
  /* 11cb368d push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb368f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11cb3695 push dword ptr [0x11cb6b20] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6b20))));
  /* 11cb369b push esi */
  push32((uint32_t)(ESI));
  /* 11cb369c push eax */
  push32((uint32_t)(EAX));
  /* 11cb369d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11cb36a3 push esi */
  push32((uint32_t)(ESI));
  /* 11cb36a4 push eax */
  push32((uint32_t)(EAX));
  /* 11cb36a5 push esi */
  push32((uint32_t)(ESI));
  /* 11cb36a6 push dword ptr [0x11cb6d44] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6d44))));
  /* 11cb36ac call 0x11cb4513 */
  push32(0x11cb36b1u); f_11cb4513();
  /* 11cb36b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb36b3 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11cb36b9 push dword ptr [0x11cb6b20] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6b20))));
  /* 11cb36bf push esi */
  push32((uint32_t)(ESI));
  /* 11cb36c0 push eax */
  push32((uint32_t)(EAX));
  /* 11cb36c1 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11cb36c7 push esi */
  push32((uint32_t)(ESI));
  /* 11cb36c8 push eax */
  push32((uint32_t)(EAX));
  /* 11cb36c9 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11cb36ce push dword ptr [0x11cb6d44] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6d44))));
  /* 11cb36d4 call 0x11cb4513 */
  push32(0x11cb36d9u); f_11cb4513();
  /* 11cb36d9 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb36dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb36de lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11cb36e4:;
  /* 11cb36e4 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11cb36e7 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11cb36ea je 0x11cb3702 */
  if (C.zf) goto L_11cb3702;
  /* 11cb36ec or byte ptr [eax + 0x11cb6c41], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11cb6c41)))|(0x10u); w8((uint32_t)(EAX + 0x11cb6c41), (_r)); fl_logic(_r,8); }
  /* 11cb36f3 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11cb36fa:;
  /* 11cb36fa mov byte ptr [eax + 0x11cb6b40], dl */
  w8((uint32_t)(EAX + 0x11cb6b40), (DL));
  /* 11cb3700 jmp 0x11cb371e */
  goto L_11cb371e;
L_11cb3702:;
  /* 11cb3702 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11cb3705 je 0x11cb3717 */
  if (C.zf) goto L_11cb3717;
  /* 11cb3707 or byte ptr [eax + 0x11cb6c41], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11cb6c41)))|(0x20u); w8((uint32_t)(EAX + 0x11cb6c41), (_r)); fl_logic(_r,8); }
  /* 11cb370e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11cb3715 jmp 0x11cb36fa */
  goto L_11cb36fa;
L_11cb3717:;
  /* 11cb3717 and byte ptr [eax + 0x11cb6b40], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11cb6b40)))&(0x0u); w8((uint32_t)(EAX + 0x11cb6b40), (_r)); fl_logic(_r,8); }
L_11cb371e:;
  /* 11cb371e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb371f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11cb3720 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11cb3721 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3723 jb 0x11cb36e4 */
  if (C.cf) goto L_11cb36e4;
  /* 11cb3725 jmp 0x11cb3770 */
  goto L_11cb3770;
L_11cb3727:;
  /* 11cb3727 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb3729 mov esi, 0x100 */
  ESI = (0x100u);
L_11cb372e:;
  /* 11cb372e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3731 jb 0x11cb374c */
  if (C.cf) goto L_11cb374c;
  /* 11cb3733 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3736 ja 0x11cb374c */
  if ((!C.cf&&!C.zf)) goto L_11cb374c;
  /* 11cb3738 or byte ptr [eax + 0x11cb6c41], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11cb6c41)))|(0x10u); w8((uint32_t)(EAX + 0x11cb6c41), (_r)); fl_logic(_r,8); }
  /* 11cb373f mov cl, al */
  CL = (AL);
  /* 11cb3741 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11cb3744:;
  /* 11cb3744 mov byte ptr [eax + 0x11cb6b40], cl */
  w8((uint32_t)(EAX + 0x11cb6b40), (CL));
  /* 11cb374a jmp 0x11cb376b */
  goto L_11cb376b;
L_11cb374c:;
  /* 11cb374c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb374f jb 0x11cb3764 */
  if (C.cf) goto L_11cb3764;
  /* 11cb3751 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3754 ja 0x11cb3764 */
  if ((!C.cf&&!C.zf)) goto L_11cb3764;
  /* 11cb3756 or byte ptr [eax + 0x11cb6c41], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11cb6c41)))|(0x20u); w8((uint32_t)(EAX + 0x11cb6c41), (_r)); fl_logic(_r,8); }
  /* 11cb375d mov cl, al */
  CL = (AL);
  /* 11cb375f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11cb3762 jmp 0x11cb3744 */
  goto L_11cb3744;
L_11cb3764:;
  /* 11cb3764 and byte ptr [eax + 0x11cb6b40], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11cb6b40)))&(0x0u); w8((uint32_t)(EAX + 0x11cb6b40), (_r)); fl_logic(_r,8); }
L_11cb376b:;
  /* 11cb376b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb376c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb376e jb 0x11cb372e */
  if (C.cf) goto L_11cb372e;
L_11cb3770:;
  /* 11cb3770 pop esi */
  ESI = (pop32());
  /* 11cb3771 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb3772 ret  */
  ESPCHK(0x11cb35eeu, _esp0);
  ESP += 4; return;
}

/* FUN_10003773 @ 0x11cb3773 (28 bytes, 7 insns) */
void f_11cb3773(void) {
  FTRACE(0x11cb3773u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb3773 cmp dword ptr [0x11cb6e68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cb6e68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb377a jne 0x11cb378e */
  if (!C.zf) goto L_11cb378e;
  /* 11cb377c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11cb377e call 0x11cb339b */
  push32(0x11cb3783u); f_11cb339b();
  /* 11cb3783 pop ecx */
  ECX = (pop32());
  /* 11cb3784 mov dword ptr [0x11cb6e68], 1 */
  w32((uint32_t)(0x11cb6e68), (0x1u));
L_11cb378e:;
  /* 11cb378e ret  */
  ESPCHK(0x11cb3773u, _esp0);
  ESP += 4; return;
}

/* FUN_10003790 @ 0x11cb3790 (664 bytes, 262 insns) [15 switch table(s)] */
void f_11cb3790(void) {
  FTRACE(0x11cb3790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb3790 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb3791 mov ebp, esp */
  EBP = (ESP);
  /* 11cb3793 push edi */
  push32((uint32_t)(EDI));
  /* 11cb3794 push esi */
  push32((uint32_t)(ESI));
  /* 11cb3795 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11cb3798 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cb379b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb379e mov eax, ecx */
  EAX = (ECX);
  /* 11cb37a0 mov edx, ecx */
  EDX = (ECX);
  /* 11cb37a2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb37a4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb37a6 jbe 0x11cb37b0 */
  if ((C.cf||C.zf)) goto L_11cb37b0;
  /* 11cb37a8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb37aa jb 0x11cb3928 */
  if (C.cf) goto L_11cb3928;
L_11cb37b0:;
  /* 11cb37b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11cb37b6 jne 0x11cb37cc */
  if (!C.zf) goto L_11cb37cc;
  /* 11cb37b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cb37bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11cb37be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb37c1 jb 0x11cb37ec */
  if (C.cf) goto L_11cb37ec;
  /* 11cb37c3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cb37c5 jmp dword ptr [edx*4 + 0x11cb38d8] */
  switch (EDX) {
    case 0: goto L_11cb38e8;
    case 1: goto L_11cb38f0;
    case 2: goto L_11cb38fc;
    case 3: goto L_11cb3910;
    default: x86_unimpl("switch@0x11cb37c5 out of table"); return;
  }
L_11cb37cc:;
  /* 11cb37cc mov eax, edi */
  EAX = (EDI);
  /* 11cb37ce mov edx, 3 */
  EDX = (0x3u);
  /* 11cb37d3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb37d6 jb 0x11cb37e4 */
  if (C.cf) goto L_11cb37e4;
  /* 11cb37d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11cb37db add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb37dd jmp dword ptr [eax*4 + 0x11cb37f0] */
  switch (EAX) {
    case 1: goto L_11cb3800;
    case 2: goto L_11cb382c;
    case 3: goto L_11cb3850;
    default: x86_unimpl("switch@0x11cb37dd out of table"); return;
  }
L_11cb37e4:;
  /* 11cb37e4 jmp dword ptr [ecx*4 + 0x11cb38e8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11cb38e8)))); return;
  /* 11cb37eb nop  */
  /* nop */
L_11cb37ec:;
  /* 11cb37ec jmp dword ptr [ecx*4 + 0x11cb386c] */
  switch (ECX) {
    case 0: goto L_11cb38cf;
    case 1: goto L_11cb38bc;
    case 2: goto L_11cb38b4;
    case 3: goto L_11cb38ac;
    case 4: goto L_11cb38a4;
    case 5: goto L_11cb389c;
    case 6: goto L_11cb3894;
    case 7: goto L_11cb388c;
    default: x86_unimpl("switch@0x11cb37ec out of table"); return;
  }
  /* 11cb37f3 nop  */
  /* nop */
L_11cb3800:;
  /* 11cb3800 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cb3802 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cb3804 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cb3806 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11cb3809 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11cb380c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11cb380f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cb3812 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11cb3815 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb3818 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb381b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb381e jb 0x11cb37ec */
  if (C.cf) goto L_11cb37ec;
  /* 11cb3820 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cb3822 jmp dword ptr [edx*4 + 0x11cb38d8] */
  switch (EDX) {
    case 0: goto L_11cb38e8;
    case 1: goto L_11cb38f0;
    case 2: goto L_11cb38fc;
    case 3: goto L_11cb3910;
    default: x86_unimpl("switch@0x11cb3822 out of table"); return;
  }
  /* 11cb3829 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cb382c:;
  /* 11cb382c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cb382e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cb3830 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cb3832 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11cb3835 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cb3838 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11cb383b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb383e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb3841 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3844 jb 0x11cb37ec */
  if (C.cf) goto L_11cb37ec;
  /* 11cb3846 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cb3848 jmp dword ptr [edx*4 + 0x11cb38d8] */
  switch (EDX) {
    case 0: goto L_11cb38e8;
    case 1: goto L_11cb38f0;
    case 2: goto L_11cb38fc;
    case 3: goto L_11cb3910;
    default: x86_unimpl("switch@0x11cb3848 out of table"); return;
  }
  /* 11cb384f nop  */
  /* nop */
L_11cb3850:;
  /* 11cb3850 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cb3852 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cb3854 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cb3856 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11cb3857 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cb385a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11cb385b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb385e jb 0x11cb37ec */
  if (C.cf) goto L_11cb37ec;
  /* 11cb3860 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cb3862 jmp dword ptr [edx*4 + 0x11cb38d8] */
  switch (EDX) {
    case 0: goto L_11cb38e8;
    case 1: goto L_11cb38f0;
    case 2: goto L_11cb38fc;
    case 3: goto L_11cb3910;
    default: x86_unimpl("switch@0x11cb3862 out of table"); return;
  }
  /* 11cb3869 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cb388c:;
  /* 11cb388c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11cb3890 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11cb3894:;
  /* 11cb3894 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11cb3898 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11cb389c:;
  /* 11cb389c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11cb38a0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11cb38a4:;
  /* 11cb38a4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11cb38a8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11cb38ac:;
  /* 11cb38ac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11cb38b0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11cb38b4:;
  /* 11cb38b4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11cb38b8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11cb38bc:;
  /* 11cb38bc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11cb38c0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11cb38c4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11cb38cb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb38cd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11cb38cf:;
  /* 11cb38cf jmp dword ptr [edx*4 + 0x11cb38d8] */
  switch (EDX) {
    case 0: goto L_11cb38e8;
    case 1: goto L_11cb38f0;
    case 2: goto L_11cb38fc;
    case 3: goto L_11cb3910;
    default: x86_unimpl("switch@0x11cb38cf out of table"); return;
  }
  /* 11cb38d6 mov edi, edi */
  EDI = (EDI);
L_11cb38e8:;
  /* 11cb38e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb38eb pop esi */
  ESI = (pop32());
  /* 11cb38ec pop edi */
  EDI = (pop32());
  /* 11cb38ed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb38ee ret  */
  ESPCHK(0x11cb3790u, _esp0);
  ESP += 4; return;
  /* 11cb38ef nop  */
  /* nop */
L_11cb38f0:;
  /* 11cb38f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cb38f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cb38f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb38f7 pop esi */
  ESI = (pop32());
  /* 11cb38f8 pop edi */
  EDI = (pop32());
  /* 11cb38f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb38fa ret  */
  ESPCHK(0x11cb3790u, _esp0);
  ESP += 4; return;
  /* 11cb38fb nop  */
  /* nop */
L_11cb38fc:;
  /* 11cb38fc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cb38fe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cb3900 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11cb3903 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11cb3906 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb3909 pop esi */
  ESI = (pop32());
  /* 11cb390a pop edi */
  EDI = (pop32());
  /* 11cb390b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb390c ret  */
  ESPCHK(0x11cb3790u, _esp0);
  ESP += 4; return;
  /* 11cb390d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cb3910:;
  /* 11cb3910 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cb3912 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cb3914 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11cb3917 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11cb391a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11cb391d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11cb3920 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb3923 pop esi */
  ESI = (pop32());
  /* 11cb3924 pop edi */
  EDI = (pop32());
  /* 11cb3925 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb3926 ret  */
  ESPCHK(0x11cb3790u, _esp0);
  ESP += 4; return;
  /* 11cb3927 nop  */
  /* nop */
L_11cb3928:;
  /* 11cb3928 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11cb392c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11cb3930 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11cb3936 jne 0x11cb395c */
  if (!C.zf) goto L_11cb395c;
  /* 11cb3938 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cb393b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11cb393e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3941 jb 0x11cb3950 */
  if (C.cf) goto L_11cb3950;
  /* 11cb3943 std  */
  C.df=1;
  /* 11cb3944 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cb3946 cld  */
  C.df=0;
  /* 11cb3947 jmp dword ptr [edx*4 + 0x11cb3a70] */
  switch (EDX) {
    case 0: goto L_11cb3a80;
    case 1: goto L_11cb3a88;
    case 2: goto L_11cb3a98;
    case 3: goto L_11cb3aac;
    default: x86_unimpl("switch@0x11cb3947 out of table"); return;
  }
  /* 11cb394e mov edi, edi */
  EDI = (EDI);
L_11cb3950:;
  /* 11cb3950 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cb3952 jmp dword ptr [ecx*4 + 0x11cb3a20] */
  switch (ECX) {
    case 0: goto L_11cb3a67;
    default: x86_unimpl("switch@0x11cb3952 out of table"); return;
  }
  /* 11cb3959 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cb395c:;
  /* 11cb395c mov eax, edi */
  EAX = (EDI);
  /* 11cb395e mov edx, 3 */
  EDX = (0x3u);
  /* 11cb3963 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3966 jb 0x11cb3974 */
  if (C.cf) goto L_11cb3974;
  /* 11cb3968 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11cb396b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb396d jmp dword ptr [eax*4 + 0x11cb3978] */
  switch (EAX) {
    case 1: goto L_11cb3988;
    case 2: goto L_11cb39a8;
    case 3: goto L_11cb39d0;
    default: x86_unimpl("switch@0x11cb396d out of table"); return;
  }
L_11cb3974:;
  /* 11cb3974 jmp dword ptr [ecx*4 + 0x11cb3a70] */
  switch (ECX) {
    case 0: goto L_11cb3a80;
    case 1: goto L_11cb3a88;
    case 2: goto L_11cb3a98;
    case 3: goto L_11cb3aac;
    default: x86_unimpl("switch@0x11cb3974 out of table"); return;
  }
  /* 11cb397b nop  */
  /* nop */
L_11cb3988:;
  /* 11cb3988 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11cb398b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cb398d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11cb3990 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11cb3991 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cb3994 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11cb3995 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3998 jb 0x11cb3950 */
  if (C.cf) goto L_11cb3950;
  /* 11cb399a std  */
  C.df=1;
  /* 11cb399b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cb399d cld  */
  C.df=0;
  /* 11cb399e jmp dword ptr [edx*4 + 0x11cb3a70] */
  switch (EDX) {
    case 0: goto L_11cb3a80;
    case 1: goto L_11cb3a88;
    case 2: goto L_11cb3a98;
    case 3: goto L_11cb3aac;
    default: x86_unimpl("switch@0x11cb399e out of table"); return;
  }
  /* 11cb39a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cb39a8:;
  /* 11cb39a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11cb39ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cb39ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11cb39b0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11cb39b3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cb39b6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11cb39b9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb39bc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb39bf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb39c2 jb 0x11cb3950 */
  if (C.cf) goto L_11cb3950;
  /* 11cb39c4 std  */
  C.df=1;
  /* 11cb39c5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cb39c7 cld  */
  C.df=0;
  /* 11cb39c8 jmp dword ptr [edx*4 + 0x11cb3a70] */
  switch (EDX) {
    case 0: goto L_11cb3a80;
    case 1: goto L_11cb3a88;
    case 2: goto L_11cb3a98;
    case 3: goto L_11cb3aac;
    default: x86_unimpl("switch@0x11cb39c8 out of table"); return;
  }
  /* 11cb39cf nop  */
  /* nop */
L_11cb39d0:;
  /* 11cb39d0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11cb39d3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cb39d5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11cb39d8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11cb39db mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11cb39de mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11cb39e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cb39e4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11cb39e7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb39ea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb39ed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb39f0 jb 0x11cb3950 */
  if (C.cf) goto L_11cb3950;
  /* 11cb39f6 std  */
  C.df=1;
  /* 11cb39f7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cb39f9 cld  */
  C.df=0;
  /* 11cb39fa jmp dword ptr [edx*4 + 0x11cb3a70] */
  switch (EDX) {
    case 0: goto L_11cb3a80;
    case 1: goto L_11cb3a88;
    case 2: goto L_11cb3a98;
    case 3: goto L_11cb3aac;
    default: x86_unimpl("switch@0x11cb39fa out of table"); return;
  }
  /* 11cb3a01 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11cb3a04 and al, 0x3a */
  { uint32_t _r=(AL)&(0x3au); AL = (_r); fl_logic(_r,8); }
  /* 11cb3a06 retf  */
  x86_unimpl("retf @ 0x11cb3a06");
  /* 11cb3a07 adc dword ptr [edx + edi], ebp */
  { uint32_t _a=(r32((uint32_t)(EDX + EDI*1))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDI*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 11cb3a0a retf  */
  x86_unimpl("retf @ 0x11cb3a0a");
  /* 11cb3a0b adc dword ptr [edx + edi], esi */
  { uint32_t _a=(r32((uint32_t)(EDX + EDI*1))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDI*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 11cb3a0e retf  */
  x86_unimpl("retf @ 0x11cb3a0e");
  /* 11cb3a0f adc dword ptr [edx + edi], edi */
  { uint32_t _a=(r32((uint32_t)(EDX + EDI*1))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDI*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 11cb3a12 retf  */
  x86_unimpl("retf @ 0x11cb3a12");
  /* 11cb3a13 adc dword ptr [edx + edi - 0x35], eax */
  { uint32_t _a=(r32((uint32_t)(EDX + EDI*1 + -0x35))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDI*1 + -0x35), (_r)); fl_add(_a,_b,_r,32); }
  /* 11cb3a17 adc dword ptr [edx + edi - 0x35], ecx */
  { uint32_t _a=(r32((uint32_t)(EDX + EDI*1 + -0x35))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDI*1 + -0x35), (_r)); fl_add(_a,_b,_r,32); }
  /* 11cb3a1b adc dword ptr [edx + edi - 0x35], edx */
  { uint32_t _a=(r32((uint32_t)(EDX + EDI*1 + -0x35))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDI*1 + -0x35), (_r)); fl_add(_a,_b,_r,32); }
  /* 11cb3a24 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11cb3a28 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11cb3a2c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11cb3a30 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11cb3a34 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11cb3a38 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11cb3a3c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11cb3a40 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11cb3a44 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11cb3a48 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11cb3a4c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11cb3a50 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11cb3a54 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11cb3a58 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11cb3a5c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11cb3a63 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb3a65 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11cb3a67:;
  /* 11cb3a67 jmp dword ptr [edx*4 + 0x11cb3a70] */
  switch (EDX) {
    case 0: goto L_11cb3a80;
    case 1: goto L_11cb3a88;
    case 2: goto L_11cb3a98;
    case 3: goto L_11cb3aac;
    default: x86_unimpl("switch@0x11cb3a67 out of table"); return;
  }
  /* 11cb3a6e mov edi, edi */
  EDI = (EDI);
L_11cb3a80:;
  /* 11cb3a80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb3a83 pop esi */
  ESI = (pop32());
  /* 11cb3a84 pop edi */
  EDI = (pop32());
  /* 11cb3a85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb3a86 ret  */
  ESPCHK(0x11cb3790u, _esp0);
  ESP += 4; return;
  /* 11cb3a87 nop  */
  /* nop */
L_11cb3a88:;
  /* 11cb3a88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11cb3a8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11cb3a8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb3a91 pop esi */
  ESI = (pop32());
  /* 11cb3a92 pop edi */
  EDI = (pop32());
  /* 11cb3a93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb3a94 ret  */
  ESPCHK(0x11cb3790u, _esp0);
  ESP += 4; return;
  /* 11cb3a95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cb3a98:;
  /* 11cb3a98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11cb3a9b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11cb3a9e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11cb3aa1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11cb3aa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb3aa7 pop esi */
  ESI = (pop32());
  /* 11cb3aa8 pop edi */
  EDI = (pop32());
  /* 11cb3aa9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb3aaa ret  */
  ESPCHK(0x11cb3790u, _esp0);
  ESP += 4; return;
  /* 11cb3aab nop  */
  /* nop */
L_11cb3aac:;
  /* 11cb3aac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11cb3aaf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11cb3ab2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11cb3ab5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11cb3ab8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11cb3abb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11cb3abe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb3ac1 pop esi */
  ESI = (pop32());
  /* 11cb3ac2 pop edi */
  EDI = (pop32());
  /* 11cb3ac3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb3ac4 ret  */
  ESPCHK(0x11cb3790u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ac5 @ 0x11cb3ac5 (62 bytes, 15 insns) */
void f_11cb3ac5(void) {
  FTRACE(0x11cb3ac5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb3ac5 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11cb3aca push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb3acc push dword ptr [0x11cb6d48] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6d48))));
  /* 11cb3ad2 call dword ptr [0x11cb503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb503c))), 0x11cb3ad8u);
  /* 11cb3ad8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb3ada mov dword ptr [0x11cb6b1c], eax */
  w32((uint32_t)(0x11cb6b1c), (EAX));
  /* 11cb3adf jne 0x11cb3ae2 */
  if (!C.zf) goto L_11cb3ae2;
  /* 11cb3ae1 ret  */
  ESPCHK(0x11cb3ac5u, _esp0);
  ESP += 4; return;
L_11cb3ae2:;
  /* 11cb3ae2 and dword ptr [0x11cb6b14], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11cb6b14)))&(0x0u); w32((uint32_t)(0x11cb6b14), (_r)); fl_logic(_r,32); }
  /* 11cb3ae9 and dword ptr [0x11cb6b18], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11cb6b18)))&(0x0u); w32((uint32_t)(0x11cb6b18), (_r)); fl_logic(_r,32); }
  /* 11cb3af0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb3af2 mov dword ptr [0x11cb6b10], eax */
  w32((uint32_t)(0x11cb6b10), (EAX));
  /* 11cb3af7 mov dword ptr [0x11cb6b08], 0x10 */
  w32((uint32_t)(0x11cb6b08), (0x10u));
  /* 11cb3b01 pop eax */
  EAX = (pop32());
  /* 11cb3b02 ret  */
  ESPCHK(0x11cb3ac5u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b03 @ 0x11cb3b03 (43 bytes, 14 insns) */
void f_11cb3b03(void) {
  FTRACE(0x11cb3b03u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb3b03 mov eax, dword ptr [0x11cb6b18] */
  EAX = (r32((uint32_t)(0x11cb6b18)));
  /* 11cb3b08 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11cb3b0b mov eax, dword ptr [0x11cb6b1c] */
  EAX = (r32((uint32_t)(0x11cb6b1c)));
  /* 11cb3b10 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11cb3b13:;
  /* 11cb3b13 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3b15 jae 0x11cb3b2b */
  if (!C.cf) goto L_11cb3b2b;
  /* 11cb3b17 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11cb3b1b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb3b1e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3b24 jb 0x11cb3b2d */
  if (C.cf) goto L_11cb3b2d;
  /* 11cb3b26 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb3b29 jmp 0x11cb3b13 */
  goto L_11cb3b13;
L_11cb3b2b:;
  /* 11cb3b2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cb3b2d:;
  /* 11cb3b2d ret  */
  ESPCHK(0x11cb3b03u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b2e @ 0x11cb3b2e (811 bytes, 264 insns) */
void f_11cb3b2e(void) {
  FTRACE(0x11cb3b2eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb3b2e push ebp */
  push32((uint32_t)(EBP));
  /* 11cb3b2f mov ebp, esp */
  EBP = (ESP);
  /* 11cb3b31 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb3b34 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cb3b37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb3b3a push ebx */
  push32((uint32_t)(EBX));
  /* 11cb3b3b push esi */
  push32((uint32_t)(ESI));
  /* 11cb3b3c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11cb3b3f mov esi, edx */
  ESI = (EDX);
  /* 11cb3b41 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb3b44 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 11cb3b47 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb3b4a push edi */
  push32((uint32_t)(EDI));
  /* 11cb3b4b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 11cb3b4e mov ecx, esi */
  ECX = (ESI);
  /* 11cb3b50 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 11cb3b53 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cb3b59 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11cb3b5a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11cb3b5d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11cb3b64 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11cb3b67 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11cb3b6a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 11cb3b6d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11cb3b70 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cb3b73 jne 0x11cb3bf4 */
  if (!C.zf) goto L_11cb3bf4;
  /* 11cb3b75 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11cb3b78 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11cb3b7a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11cb3b7b pop edi */
  EDI = (pop32());
  /* 11cb3b7c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11cb3b7f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3b81 jbe 0x11cb3b86 */
  if ((C.cf||C.zf)) goto L_11cb3b86;
  /* 11cb3b83 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11cb3b86:;
  /* 11cb3b86 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11cb3b8a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3b8e jne 0x11cb3bd8 */
  if (!C.zf) goto L_11cb3bd8;
  /* 11cb3b90 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cb3b93 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3b96 jae 0x11cb3bb4 */
  if (!C.cf) goto L_11cb3bb4;
  /* 11cb3b98 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11cb3b9d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11cb3b9f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11cb3ba3 not edi */
  EDI = (~(EDI));
  /* 11cb3ba5 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11cb3ba9 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11cb3bab jne 0x11cb3bd8 */
  if (!C.zf) goto L_11cb3bd8;
  /* 11cb3bad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb3bb0 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11cb3bb2 jmp 0x11cb3bd8 */
  goto L_11cb3bd8;
L_11cb3bb4:;
  /* 11cb3bb4 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb3bb7 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11cb3bbc shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11cb3bbe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cb3bc1 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11cb3bc5 not edi */
  EDI = (~(EDI));
  /* 11cb3bc7 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11cb3bce dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11cb3bd0 jne 0x11cb3bd8 */
  if (!C.zf) goto L_11cb3bd8;
  /* 11cb3bd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb3bd5 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11cb3bd8:;
  /* 11cb3bd8 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11cb3bdc mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11cb3be0 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11cb3be3 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11cb3be7 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11cb3beb add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb3bee mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11cb3bf1 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_11cb3bf4:;
  /* 11cb3bf4 mov edi, ebx */
  EDI = (EBX);
  /* 11cb3bf6 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11cb3bf9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11cb3bfa cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3bfd jbe 0x11cb3c02 */
  if ((C.cf||C.zf)) goto L_11cb3c02;
  /* 11cb3bff push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11cb3c01 pop edi */
  EDI = (pop32());
L_11cb3c02:;
  /* 11cb3c02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cb3c05 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cb3c08 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11cb3c0b jne 0x11cb3cb1 */
  if (!C.zf) goto L_11cb3cb1;
  /* 11cb3c11 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb3c14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cb3c17 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11cb3c1a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11cb3c1c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cb3c1f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11cb3c20 pop edx */
  EDX = (pop32());
  /* 11cb3c21 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3c23 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11cb3c26 jbe 0x11cb3c2d */
  if ((C.cf||C.zf)) goto L_11cb3c2d;
  /* 11cb3c28 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11cb3c2b mov ecx, edx */
  ECX = (EDX);
L_11cb3c2d:;
  /* 11cb3c2d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb3c30 mov edi, ebx */
  EDI = (EBX);
  /* 11cb3c32 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11cb3c35 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11cb3c38 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11cb3c39 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3c3b jbe 0x11cb3c3f */
  if ((C.cf||C.zf)) goto L_11cb3c3f;
  /* 11cb3c3d mov edi, edx */
  EDI = (EDX);
L_11cb3c3f:;
  /* 11cb3c3f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3c41 je 0x11cb3cae */
  if (C.zf) goto L_11cb3cae;
  /* 11cb3c43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cb3c46 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cb3c49 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3c4c jne 0x11cb3c96 */
  if (!C.zf) goto L_11cb3c96;
  /* 11cb3c4e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cb3c51 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3c54 jae 0x11cb3c72 */
  if (!C.cf) goto L_11cb3c72;
  /* 11cb3c56 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cb3c5b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cb3c5d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11cb3c61 not edx */
  EDX = (~(EDX));
  /* 11cb3c63 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11cb3c67 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11cb3c69 jne 0x11cb3c96 */
  if (!C.zf) goto L_11cb3c96;
  /* 11cb3c6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb3c6e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11cb3c70 jmp 0x11cb3c96 */
  goto L_11cb3c96;
L_11cb3c72:;
  /* 11cb3c72 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb3c75 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cb3c7a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cb3c7c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cb3c7f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11cb3c83 not edx */
  EDX = (~(EDX));
  /* 11cb3c85 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11cb3c8c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11cb3c8e jne 0x11cb3c96 */
  if (!C.zf) goto L_11cb3c96;
  /* 11cb3c90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb3c93 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11cb3c96:;
  /* 11cb3c96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cb3c99 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cb3c9c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cb3c9f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11cb3ca2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cb3ca5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cb3ca8 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cb3cab mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11cb3cae:;
  /* 11cb3cae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11cb3cb1:;
  /* 11cb3cb1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3cb5 jne 0x11cb3cc0 */
  if (!C.zf) goto L_11cb3cc0;
  /* 11cb3cb7 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3cba je 0x11cb3d49 */
  if (C.zf) goto L_11cb3d49;
L_11cb3cc0:;
  /* 11cb3cc0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cb3cc3 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11cb3cc6 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cb3cc9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11cb3ccc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cb3ccf lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11cb3cd2 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11cb3cd5 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11cb3cd8 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cb3cdb mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11cb3cde mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cb3ce1 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3ce4 jne 0x11cb3d49 */
  if (!C.zf) goto L_11cb3d49;
  /* 11cb3ce6 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11cb3cea cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3ced mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11cb3cf0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11cb3cf2 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11cb3cf6 jae 0x11cb3d1d */
  if (!C.cf) goto L_11cb3d1d;
  /* 11cb3cf8 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb3cfc jne 0x11cb3d0c */
  if (!C.zf) goto L_11cb3d0c;
  /* 11cb3cfe mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11cb3d03 mov ecx, edi */
  ECX = (EDI);
  /* 11cb3d05 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11cb3d07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb3d0a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11cb3d0c:;
  /* 11cb3d0c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11cb3d11 mov ecx, edi */
  ECX = (EDI);
  /* 11cb3d13 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11cb3d15 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 11cb3d19 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11cb3d1b jmp 0x11cb3d46 */
  goto L_11cb3d46;
L_11cb3d1d:;
  /* 11cb3d1d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb3d21 jne 0x11cb3d33 */
  if (!C.zf) goto L_11cb3d33;
  /* 11cb3d23 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11cb3d26 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11cb3d2b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11cb3d2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb3d30 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11cb3d33:;
  /* 11cb3d33 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11cb3d36 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11cb3d3b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11cb3d3d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 11cb3d44 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11cb3d46:;
  /* 11cb3d46 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_11cb3d49:;
  /* 11cb3d49 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cb3d4c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 11cb3d4e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 11cb3d52 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11cb3d54 jne 0x11cb3e54 */
  if (!C.zf) goto L_11cb3e54;
  /* 11cb3d5a mov eax, dword ptr [0x11cb6b14] */
  EAX = (r32((uint32_t)(0x11cb6b14)));
  /* 11cb3d5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb3d61 je 0x11cb3e46 */
  if (C.zf) goto L_11cb3e46;
  /* 11cb3d67 mov ecx, dword ptr [0x11cb6b0c] */
  ECX = (r32((uint32_t)(0x11cb6b0c)));
  /* 11cb3d6d mov edi, dword ptr [0x11cb5054] */
  EDI = (r32((uint32_t)(0x11cb5054)));
  /* 11cb3d73 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11cb3d76 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb3d79 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11cb3d7e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11cb3d83 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb3d84 push ecx */
  push32((uint32_t)(ECX));
  /* 11cb3d85 call edi */
  call_ind((uint32_t)(EDI), 0x11cb3d87u);
  /* 11cb3d87 mov ecx, dword ptr [0x11cb6b0c] */
  ECX = (r32((uint32_t)(0x11cb6b0c)));
  /* 11cb3d8d mov eax, dword ptr [0x11cb6b14] */
  EAX = (r32((uint32_t)(0x11cb6b14)));
  /* 11cb3d92 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cb3d97 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cb3d99 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11cb3d9c mov eax, dword ptr [0x11cb6b14] */
  EAX = (r32((uint32_t)(0x11cb6b14)));
  /* 11cb3da1 mov ecx, dword ptr [0x11cb6b0c] */
  ECX = (r32((uint32_t)(0x11cb6b0c)));
  /* 11cb3da7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11cb3daa and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11cb3db2 mov eax, dword ptr [0x11cb6b14] */
  EAX = (r32((uint32_t)(0x11cb6b14)));
  /* 11cb3db7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11cb3dba dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11cb3dbd mov eax, dword ptr [0x11cb6b14] */
  EAX = (r32((uint32_t)(0x11cb6b14)));
  /* 11cb3dc2 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11cb3dc5 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb3dc9 jne 0x11cb3dd4 */
  if (!C.zf) goto L_11cb3dd4;
  /* 11cb3dcb and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11cb3dcf mov eax, dword ptr [0x11cb6b14] */
  EAX = (r32((uint32_t)(0x11cb6b14)));
L_11cb3dd4:;
  /* 11cb3dd4 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3dd8 jne 0x11cb3e46 */
  if (!C.zf) goto L_11cb3e46;
  /* 11cb3dda push ebx */
  push32((uint32_t)(EBX));
  /* 11cb3ddb push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb3ddd push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11cb3de0 call edi */
  call_ind((uint32_t)(EDI), 0x11cb3de2u);
  /* 11cb3de2 mov eax, dword ptr [0x11cb6b14] */
  EAX = (r32((uint32_t)(0x11cb6b14)));
  /* 11cb3de7 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11cb3dea push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb3dec push dword ptr [0x11cb6d48] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6d48))));
  /* 11cb3df2 call dword ptr [0x11cb5050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5050))), 0x11cb3df8u);
  /* 11cb3df8 mov eax, dword ptr [0x11cb6b18] */
  EAX = (r32((uint32_t)(0x11cb6b18)));
  /* 11cb3dfd mov edx, dword ptr [0x11cb6b1c] */
  EDX = (r32((uint32_t)(0x11cb6b1c)));
  /* 11cb3e03 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11cb3e06 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11cb3e09 mov ecx, eax */
  ECX = (EAX);
  /* 11cb3e0b mov eax, dword ptr [0x11cb6b14] */
  EAX = (r32((uint32_t)(0x11cb6b14)));
  /* 11cb3e10 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb3e12 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11cb3e16 push ecx */
  push32((uint32_t)(ECX));
  /* 11cb3e17 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11cb3e1a push ecx */
  push32((uint32_t)(ECX));
  /* 11cb3e1b push eax */
  push32((uint32_t)(EAX));
  /* 11cb3e1c call 0x11cb48b0 */
  push32(0x11cb3e21u); f_11cb48b0();
  /* 11cb3e21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb3e24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb3e27 dec dword ptr [0x11cb6b18] */
  { uint32_t _r=(r32((uint32_t)(0x11cb6b18)))-1; w32((uint32_t)(0x11cb6b18), (_r)); fl_dec(_r,32); }
  /* 11cb3e2d cmp eax, dword ptr [0x11cb6b14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11cb6b14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3e33 jbe 0x11cb3e38 */
  if ((C.cf||C.zf)) goto L_11cb3e38;
  /* 11cb3e35 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11cb3e38:;
  /* 11cb3e38 mov ecx, dword ptr [0x11cb6b1c] */
  ECX = (r32((uint32_t)(0x11cb6b1c)));
  /* 11cb3e3e mov dword ptr [0x11cb6b10], ecx */
  w32((uint32_t)(0x11cb6b10), (ECX));
  /* 11cb3e44 jmp 0x11cb3e49 */
  goto L_11cb3e49;
L_11cb3e46:;
  /* 11cb3e46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11cb3e49:;
  /* 11cb3e49 mov dword ptr [0x11cb6b14], eax */
  w32((uint32_t)(0x11cb6b14), (EAX));
  /* 11cb3e4e mov dword ptr [0x11cb6b0c], esi */
  w32((uint32_t)(0x11cb6b0c), (ESI));
L_11cb3e54:;
  /* 11cb3e54 pop edi */
  EDI = (pop32());
  /* 11cb3e55 pop esi */
  ESI = (pop32());
  /* 11cb3e56 pop ebx */
  EBX = (pop32());
  /* 11cb3e57 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb3e58 ret  */
  ESPCHK(0x11cb3b2eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003e59 @ 0x11cb3e59 (777 bytes, 275 insns) */
void f_11cb3e59(void) {
  FTRACE(0x11cb3e59u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb3e59 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb3e5a mov ebp, esp */
  EBP = (ESP);
  /* 11cb3e5c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb3e5f mov eax, dword ptr [0x11cb6b18] */
  EAX = (r32((uint32_t)(0x11cb6b18)));
  /* 11cb3e64 mov edx, dword ptr [0x11cb6b1c] */
  EDX = (r32((uint32_t)(0x11cb6b1c)));
  /* 11cb3e6a push ebx */
  push32((uint32_t)(EBX));
  /* 11cb3e6b push esi */
  push32((uint32_t)(ESI));
  /* 11cb3e6c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11cb3e6f push edi */
  push32((uint32_t)(EDI));
  /* 11cb3e70 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11cb3e73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb3e76 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11cb3e79 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11cb3e7c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11cb3e7f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11cb3e82 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11cb3e85 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11cb3e86 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3e89 jge 0x11cb3e99 */
  if ((C.sf==C.of)) goto L_11cb3e99;
  /* 11cb3e8b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11cb3e8e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11cb3e90 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11cb3e94 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11cb3e97 jmp 0x11cb3ea9 */
  goto L_11cb3ea9;
L_11cb3e99:;
  /* 11cb3e99 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb3e9c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cb3e9f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11cb3ea1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11cb3ea3 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11cb3ea6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11cb3ea9:;
  /* 11cb3ea9 mov eax, dword ptr [0x11cb6b10] */
  EAX = (r32((uint32_t)(0x11cb6b10)));
  /* 11cb3eae mov ebx, eax */
  EBX = (EAX);
  /* 11cb3eb0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3eb2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11cb3eb5 jae 0x11cb3ed0 */
  if (!C.cf) goto L_11cb3ed0;
L_11cb3eb7:;
  /* 11cb3eb7 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11cb3eba mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11cb3ebc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11cb3ebf and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11cb3ec1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11cb3ec3 jne 0x11cb3ed0 */
  if (!C.zf) goto L_11cb3ed0;
  /* 11cb3ec5 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb3ec8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3ecb mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11cb3ece jb 0x11cb3eb7 */
  if (C.cf) goto L_11cb3eb7;
L_11cb3ed0:;
  /* 11cb3ed0 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3ed3 jne 0x11cb3f4e */
  if (!C.zf) goto L_11cb3f4e;
  /* 11cb3ed5 mov ebx, edx */
  EBX = (EDX);
L_11cb3ed7:;
  /* 11cb3ed7 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3ed9 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11cb3edc jae 0x11cb3ef3 */
  if (!C.cf) goto L_11cb3ef3;
  /* 11cb3ede mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11cb3ee1 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11cb3ee3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11cb3ee6 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11cb3ee8 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11cb3eea jne 0x11cb3ef1 */
  if (!C.zf) goto L_11cb3ef1;
  /* 11cb3eec add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb3eef jmp 0x11cb3ed7 */
  goto L_11cb3ed7;
L_11cb3ef1:;
  /* 11cb3ef1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11cb3ef3:;
  /* 11cb3ef3 jne 0x11cb3f4e */
  if (!C.zf) goto L_11cb3f4e;
L_11cb3ef5:;
  /* 11cb3ef5 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3ef8 jae 0x11cb3f0b */
  if (!C.cf) goto L_11cb3f0b;
  /* 11cb3efa cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3efe jne 0x11cb3f08 */
  if (!C.zf) goto L_11cb3f08;
  /* 11cb3f00 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb3f03 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11cb3f06 jmp 0x11cb3ef5 */
  goto L_11cb3ef5;
L_11cb3f08:;
  /* 11cb3f08 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11cb3f0b:;
  /* 11cb3f0b jne 0x11cb3f33 */
  if (!C.zf) goto L_11cb3f33;
  /* 11cb3f0d mov ebx, edx */
  EBX = (EDX);
L_11cb3f0f:;
  /* 11cb3f0f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3f11 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11cb3f14 jae 0x11cb3f23 */
  if (!C.cf) goto L_11cb3f23;
  /* 11cb3f16 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3f1a jne 0x11cb3f21 */
  if (!C.zf) goto L_11cb3f21;
  /* 11cb3f1c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb3f1f jmp 0x11cb3f0f */
  goto L_11cb3f0f;
L_11cb3f21:;
  /* 11cb3f21 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11cb3f23:;
  /* 11cb3f23 jne 0x11cb3f33 */
  if (!C.zf) goto L_11cb3f33;
  /* 11cb3f25 call 0x11cb4162 */
  push32(0x11cb3f2au); f_11cb4162();
  /* 11cb3f2a mov ebx, eax */
  EBX = (EAX);
  /* 11cb3f2c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11cb3f2e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11cb3f31 je 0x11cb3f47 */
  if (C.zf) goto L_11cb3f47;
L_11cb3f33:;
  /* 11cb3f33 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb3f34 call 0x11cb4213 */
  push32(0x11cb3f39u); f_11cb4213();
  /* 11cb3f39 pop ecx */
  ECX = (pop32());
  /* 11cb3f3a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11cb3f3d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11cb3f3f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11cb3f42 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3f45 jne 0x11cb3f4e */
  if (!C.zf) goto L_11cb3f4e;
L_11cb3f47:;
  /* 11cb3f47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb3f49 jmp 0x11cb415d */
  goto L_11cb415d;
L_11cb3f4e:;
  /* 11cb3f4e mov dword ptr [0x11cb6b10], ebx */
  w32((uint32_t)(0x11cb6b10), (EBX));
  /* 11cb3f54 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11cb3f57 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11cb3f59 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3f5c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cb3f5f je 0x11cb3f75 */
  if (C.zf) goto L_11cb3f75;
  /* 11cb3f61 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11cb3f68 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11cb3f6c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11cb3f6f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11cb3f71 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11cb3f73 jne 0x11cb3fac */
  if (!C.zf) goto L_11cb3fac;
L_11cb3f75:;
  /* 11cb3f75 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11cb3f7b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11cb3f7e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11cb3f81 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11cb3f84 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11cb3f88 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11cb3f8b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11cb3f8d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11cb3f90 jne 0x11cb3fa9 */
  if (!C.zf) goto L_11cb3fa9;
L_11cb3f92:;
  /* 11cb3f92 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11cb3f98 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11cb3f9b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11cb3f9e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb3fa1 mov edi, esi */
  EDI = (ESI);
  /* 11cb3fa3 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11cb3fa5 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11cb3fa7 je 0x11cb3f92 */
  if (C.zf) goto L_11cb3f92;
L_11cb3fa9:;
  /* 11cb3fa9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11cb3fac:;
  /* 11cb3fac mov ecx, edx */
  ECX = (EDX);
  /* 11cb3fae xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11cb3fb0 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cb3fb6 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11cb3fbd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cb3fc0 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11cb3fc4 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11cb3fc6 jne 0x11cb3fd5 */
  if (!C.zf) goto L_11cb3fd5;
  /* 11cb3fc8 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11cb3fcf push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11cb3fd1 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11cb3fd4 pop edi */
  EDI = (pop32());
L_11cb3fd5:;
  /* 11cb3fd5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cb3fd7 jl 0x11cb3fde */
  if ((C.sf!=C.of)) goto L_11cb3fde;
  /* 11cb3fd9 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11cb3fdb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11cb3fdc jmp 0x11cb3fd5 */
  goto L_11cb3fd5;
L_11cb3fde:;
  /* 11cb3fde mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cb3fe1 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11cb3fe5 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11cb3fe7 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb3fea mov esi, ecx */
  ESI = (ECX);
  /* 11cb3fec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cb3fef sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11cb3ff2 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11cb3ff3 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3ff6 jle 0x11cb3ffb */
  if ((C.zf||C.sf!=C.of)) goto L_11cb3ffb;
  /* 11cb3ff8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11cb3ffa pop esi */
  ESI = (pop32());
L_11cb3ffb:;
  /* 11cb3ffb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb3ffd je 0x11cb4110 */
  if (C.zf) goto L_11cb4110;
  /* 11cb4003 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cb4006 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4009 jne 0x11cb406c */
  if (!C.zf) goto L_11cb406c;
  /* 11cb400b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb400e jge 0x11cb403b */
  if ((C.sf==C.of)) goto L_11cb403b;
  /* 11cb4010 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11cb4015 mov ecx, edi */
  ECX = (EDI);
  /* 11cb4017 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11cb4019 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cb401c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11cb4020 not ebx */
  EBX = (~(EBX));
  /* 11cb4022 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11cb4025 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11cb4029 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11cb402d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11cb402f jne 0x11cb4069 */
  if (!C.zf) goto L_11cb4069;
  /* 11cb4031 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb4034 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cb4037 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11cb4039 jmp 0x11cb406c */
  goto L_11cb406c;
L_11cb403b:;
  /* 11cb403b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11cb403e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11cb4043 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11cb4045 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cb4048 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11cb404c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11cb4053 not ebx */
  EBX = (~(EBX));
  /* 11cb4055 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11cb4057 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11cb4059 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11cb405c jne 0x11cb4069 */
  if (!C.zf) goto L_11cb4069;
  /* 11cb405e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb4061 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cb4064 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11cb4067 jmp 0x11cb406c */
  goto L_11cb406c;
L_11cb4069:;
  /* 11cb4069 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11cb406c:;
  /* 11cb406c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11cb406f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11cb4072 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4076 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11cb4079 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cb407c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11cb407f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11cb4082 je 0x11cb411c */
  if (C.zf) goto L_11cb411c;
  /* 11cb4088 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cb408b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11cb408f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11cb4092 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11cb4095 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11cb4098 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11cb409b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cb409e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11cb40a1 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cb40a4 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb40a7 jne 0x11cb410d */
  if (!C.zf) goto L_11cb410d;
  /* 11cb40a9 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11cb40ad cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb40b0 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11cb40b3 jge 0x11cb40de */
  if ((C.sf==C.of)) goto L_11cb40de;
  /* 11cb40b5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11cb40b7 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb40bb mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11cb40bf jne 0x11cb40cc */
  if (!C.zf) goto L_11cb40cc;
  /* 11cb40c1 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11cb40c6 mov ecx, esi */
  ECX = (ESI);
  /* 11cb40c8 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11cb40ca or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11cb40cc:;
  /* 11cb40cc mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11cb40d1 mov ecx, esi */
  ECX = (ESI);
  /* 11cb40d3 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11cb40d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cb40d8 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11cb40dc jmp 0x11cb410d */
  goto L_11cb410d;
L_11cb40de:;
  /* 11cb40de inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11cb40e0 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb40e4 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11cb40e8 jne 0x11cb40f7 */
  if (!C.zf) goto L_11cb40f7;
  /* 11cb40ea lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11cb40ed mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11cb40f2 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11cb40f4 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11cb40f7:;
  /* 11cb40f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cb40fa lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11cb4101 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11cb4104 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11cb4109 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11cb410b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11cb410d:;
  /* 11cb410d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11cb4110:;
  /* 11cb4110 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cb4112 je 0x11cb411f */
  if (C.zf) goto L_11cb411f;
  /* 11cb4114 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11cb4116 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11cb411a jmp 0x11cb411f */
  goto L_11cb411f;
L_11cb411c:;
  /* 11cb411c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11cb411f:;
  /* 11cb411f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11cb4122 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb4124 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11cb4127 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11cb4129 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11cb412d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11cb4130 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11cb4132 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cb4134 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11cb4137 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11cb4139 jne 0x11cb4155 */
  if (!C.zf) goto L_11cb4155;
  /* 11cb413b cmp ebx, dword ptr [0x11cb6b14] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11cb6b14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4141 jne 0x11cb4155 */
  if (!C.zf) goto L_11cb4155;
  /* 11cb4143 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cb4146 cmp ecx, dword ptr [0x11cb6b0c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11cb6b0c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb414c jne 0x11cb4155 */
  if (!C.zf) goto L_11cb4155;
  /* 11cb414e and dword ptr [0x11cb6b14], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11cb6b14)))&(0x0u); w32((uint32_t)(0x11cb6b14), (_r)); fl_logic(_r,32); }
L_11cb4155:;
  /* 11cb4155 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cb4158 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11cb415a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11cb415d:;
  /* 11cb415d pop edi */
  EDI = (pop32());
  /* 11cb415e pop esi */
  ESI = (pop32());
  /* 11cb415f pop ebx */
  EBX = (pop32());
  /* 11cb4160 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb4161 ret  */
  ESPCHK(0x11cb3e59u, _esp0);
  ESP += 4; return;
}

/* FUN_10004162 @ 0x11cb4162 (177 bytes, 53 insns) */
void f_11cb4162(void) {
  FTRACE(0x11cb4162u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb4162 mov eax, dword ptr [0x11cb6b18] */
  EAX = (r32((uint32_t)(0x11cb6b18)));
  /* 11cb4167 mov ecx, dword ptr [0x11cb6b08] */
  ECX = (r32((uint32_t)(0x11cb6b08)));
  /* 11cb416d push esi */
  push32((uint32_t)(ESI));
  /* 11cb416e push edi */
  push32((uint32_t)(EDI));
  /* 11cb416f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11cb4171 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4173 jne 0x11cb41a5 */
  if (!C.zf) goto L_11cb41a5;
  /* 11cb4175 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11cb4179 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11cb417c push eax */
  push32((uint32_t)(EAX));
  /* 11cb417d push dword ptr [0x11cb6b1c] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6b1c))));
  /* 11cb4183 push edi */
  push32((uint32_t)(EDI));
  /* 11cb4184 push dword ptr [0x11cb6d48] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6d48))));
  /* 11cb418a call dword ptr [0x11cb5028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5028))), 0x11cb4190u);
  /* 11cb4190 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4192 je 0x11cb41f5 */
  if (C.zf) goto L_11cb41f5;
  /* 11cb4194 add dword ptr [0x11cb6b08], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11cb6b08))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11cb6b08), (_r)); fl_add(_a,_b,_r,32); }
  /* 11cb419b mov dword ptr [0x11cb6b1c], eax */
  w32((uint32_t)(0x11cb6b1c), (EAX));
  /* 11cb41a0 mov eax, dword ptr [0x11cb6b18] */
  EAX = (r32((uint32_t)(0x11cb6b18)));
L_11cb41a5:;
  /* 11cb41a5 mov ecx, dword ptr [0x11cb6b1c] */
  ECX = (r32((uint32_t)(0x11cb6b1c)));
  /* 11cb41ab push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11cb41b0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11cb41b2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11cb41b5 push dword ptr [0x11cb6d48] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6d48))));
  /* 11cb41bb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11cb41be call dword ptr [0x11cb503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb503c))), 0x11cb41c4u);
  /* 11cb41c4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb41c6 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11cb41c9 je 0x11cb41f5 */
  if (C.zf) goto L_11cb41f5;
  /* 11cb41cb push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb41cd push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11cb41d2 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11cb41d7 push edi */
  push32((uint32_t)(EDI));
  /* 11cb41d8 call dword ptr [0x11cb502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb502c))), 0x11cb41deu);
  /* 11cb41de cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb41e0 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11cb41e3 jne 0x11cb41f9 */
  if (!C.zf) goto L_11cb41f9;
  /* 11cb41e5 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11cb41e8 push edi */
  push32((uint32_t)(EDI));
  /* 11cb41e9 push dword ptr [0x11cb6d48] */
  push32((uint32_t)(r32((uint32_t)(0x11cb6d48))));
  /* 11cb41ef call dword ptr [0x11cb5050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5050))), 0x11cb41f5u);
L_11cb41f5:;
  /* 11cb41f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb41f7 jmp 0x11cb4210 */
  goto L_11cb4210;
L_11cb41f9:;
  /* 11cb41f9 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11cb41fd mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11cb41ff mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11cb4202 inc dword ptr [0x11cb6b18] */
  { uint32_t _r=(r32((uint32_t)(0x11cb6b18)))+1; w32((uint32_t)(0x11cb6b18), (_r)); fl_inc(_r,32); }
  /* 11cb4208 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11cb420b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11cb420e mov eax, esi */
  EAX = (ESI);
L_11cb4210:;
  /* 11cb4210 pop edi */
  EDI = (pop32());
  /* 11cb4211 pop esi */
  ESI = (pop32());
  /* 11cb4212 ret  */
  ESPCHK(0x11cb4162u, _esp0);
  ESP += 4; return;
}

/* FUN_10004213 @ 0x11cb4213 (251 bytes, 85 insns) */
void f_11cb4213(void) {
  FTRACE(0x11cb4213u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb4213 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb4214 mov ebp, esp */
  EBP = (ESP);
  /* 11cb4216 push ecx */
  push32((uint32_t)(ECX));
  /* 11cb4217 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb421a push ebx */
  push32((uint32_t)(EBX));
  /* 11cb421b push esi */
  push32((uint32_t)(ESI));
  /* 11cb421c push edi */
  push32((uint32_t)(EDI));
  /* 11cb421d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11cb4220 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cb4223 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11cb4225:;
  /* 11cb4225 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb4227 jl 0x11cb422e */
  if ((C.sf!=C.of)) goto L_11cb422e;
  /* 11cb4229 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11cb422b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11cb422c jmp 0x11cb4225 */
  goto L_11cb4225;
L_11cb422e:;
  /* 11cb422e mov eax, ebx */
  EAX = (EBX);
  /* 11cb4230 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11cb4232 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cb4238 pop edx */
  EDX = (pop32());
  /* 11cb4239 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11cb4240 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cb4243:;
  /* 11cb4243 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11cb4246 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11cb4249 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb424c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11cb424d jne 0x11cb4243 */
  if (!C.zf) goto L_11cb4243;
  /* 11cb424f mov edi, ebx */
  EDI = (EBX);
  /* 11cb4251 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cb4253 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11cb4256 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb4259 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11cb425e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11cb4263 push edi */
  push32((uint32_t)(EDI));
  /* 11cb4264 call dword ptr [0x11cb502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb502c))), 0x11cb426au);
  /* 11cb426a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb426c jne 0x11cb4276 */
  if (!C.zf) goto L_11cb4276;
  /* 11cb426e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cb4271 jmp 0x11cb4309 */
  goto L_11cb4309;
L_11cb4276:;
  /* 11cb4276 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11cb427c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb427e ja 0x11cb42bc */
  if ((!C.cf&&!C.zf)) goto L_11cb42bc;
  /* 11cb4280 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11cb4283:;
  /* 11cb4283 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11cb4287 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11cb428e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11cb4294 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11cb429b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11cb429d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11cb42a3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11cb42a6 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11cb42b0 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb42b5 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11cb42b8 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb42ba jbe 0x11cb4283 */
  if ((C.cf||C.zf)) goto L_11cb4283;
L_11cb42bc:;
  /* 11cb42bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cb42bf lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11cb42c2 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb42c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb42c9 pop edi */
  EDI = (pop32());
  /* 11cb42ca mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11cb42cd mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11cb42d0 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11cb42d3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11cb42d6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11cb42d9 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11cb42de mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11cb42e5 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11cb42e8 mov cl, al */
  CL = (AL);
  /* 11cb42ea inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11cb42ec test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb42ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb42f1 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11cb42f4 jne 0x11cb42f9 */
  if (!C.zf) goto L_11cb42f9;
  /* 11cb42f6 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11cb42f9:;
  /* 11cb42f9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cb42fe mov ecx, ebx */
  ECX = (EBX);
  /* 11cb4300 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cb4302 not edx */
  EDX = (~(EDX));
  /* 11cb4304 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11cb4307 mov eax, ebx */
  EAX = (EBX);
L_11cb4309:;
  /* 11cb4309 pop edi */
  EDI = (pop32());
  /* 11cb430a pop esi */
  ESI = (pop32());
  /* 11cb430b pop ebx */
  EBX = (pop32());
  /* 11cb430c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb430d ret  */
  ESPCHK(0x11cb4213u, _esp0);
  ESP += 4; return;
}

/* FUN_1000430e @ 0x11cb430e (137 bytes, 50 insns) */
void f_11cb430e(void) {
  FTRACE(0x11cb430eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb430e push ebx */
  push32((uint32_t)(EBX));
  /* 11cb430f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11cb4311 cmp dword ptr [0x11cb6acc], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11cb6acc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4317 push esi */
  push32((uint32_t)(ESI));
  /* 11cb4318 push edi */
  push32((uint32_t)(EDI));
  /* 11cb4319 jne 0x11cb435d */
  if (!C.zf) goto L_11cb435d;
  /* 11cb431b push 0x11cb5478 */
  push32((uint32_t)(0x11cb5478u));
  /* 11cb4320 call dword ptr [0x11cb5020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5020))), 0x11cb4326u);
  /* 11cb4326 mov edi, eax */
  EDI = (EAX);
  /* 11cb4328 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb432a je 0x11cb4393 */
  if (C.zf) goto L_11cb4393;
  /* 11cb432c mov esi, dword ptr [0x11cb5024] */
  ESI = (r32((uint32_t)(0x11cb5024)));
  /* 11cb4332 push 0x11cb546c */
  push32((uint32_t)(0x11cb546cu));
  /* 11cb4337 push edi */
  push32((uint32_t)(EDI));
  /* 11cb4338 call esi */
  call_ind((uint32_t)(ESI), 0x11cb433au);
  /* 11cb433a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb433c mov dword ptr [0x11cb6acc], eax */
  w32((uint32_t)(0x11cb6acc), (EAX));
  /* 11cb4341 je 0x11cb4393 */
  if (C.zf) goto L_11cb4393;
  /* 11cb4343 push 0x11cb545c */
  push32((uint32_t)(0x11cb545cu));
  /* 11cb4348 push edi */
  push32((uint32_t)(EDI));
  /* 11cb4349 call esi */
  call_ind((uint32_t)(ESI), 0x11cb434bu);
  /* 11cb434b push 0x11cb5448 */
  push32((uint32_t)(0x11cb5448u));
  /* 11cb4350 push edi */
  push32((uint32_t)(EDI));
  /* 11cb4351 mov dword ptr [0x11cb6ad0], eax */
  w32((uint32_t)(0x11cb6ad0), (EAX));
  /* 11cb4356 call esi */
  call_ind((uint32_t)(ESI), 0x11cb4358u);
  /* 11cb4358 mov dword ptr [0x11cb6ad4], eax */
  w32((uint32_t)(0x11cb6ad4), (EAX));
L_11cb435d:;
  /* 11cb435d mov eax, dword ptr [0x11cb6ad0] */
  EAX = (r32((uint32_t)(0x11cb6ad0)));
  /* 11cb4362 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb4364 je 0x11cb437c */
  if (C.zf) goto L_11cb437c;
  /* 11cb4366 call eax */
  call_ind((uint32_t)(EAX), 0x11cb4368u);
  /* 11cb4368 mov ebx, eax */
  EBX = (EAX);
  /* 11cb436a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11cb436c je 0x11cb437c */
  if (C.zf) goto L_11cb437c;
  /* 11cb436e mov eax, dword ptr [0x11cb6ad4] */
  EAX = (r32((uint32_t)(0x11cb6ad4)));
  /* 11cb4373 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb4375 je 0x11cb437c */
  if (C.zf) goto L_11cb437c;
  /* 11cb4377 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb4378 call eax */
  call_ind((uint32_t)(EAX), 0x11cb437au);
  /* 11cb437a mov ebx, eax */
  EBX = (EAX);
L_11cb437c:;
  /* 11cb437c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11cb4380 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11cb4384 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11cb4388 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb4389 call dword ptr [0x11cb6acc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb6acc))), 0x11cb438fu);
L_11cb438f:;
  /* 11cb438f pop edi */
  EDI = (pop32());
  /* 11cb4390 pop esi */
  ESI = (pop32());
  /* 11cb4391 pop ebx */
  EBX = (pop32());
  /* 11cb4392 ret  */
  ESPCHK(0x11cb430eu, _esp0);
  ESP += 4; return;
L_11cb4393:;
  /* 11cb4393 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb4395 jmp 0x11cb438f */
  goto L_11cb438f;
}

/* _strncpy @ 0x11cb43a0 (254 bytes, 109 insns) */
void f_11cb43a0(void) {
  FTRACE(0x11cb43a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb43a0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11cb43a4 push edi */
  push32((uint32_t)(EDI));
  /* 11cb43a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cb43a7 je 0x11cb4423 */
  if (C.zf) goto L_11cb4423;
  /* 11cb43a9 push esi */
  push32((uint32_t)(ESI));
  /* 11cb43aa push ebx */
  push32((uint32_t)(EBX));
  /* 11cb43ab mov ebx, ecx */
  EBX = (ECX);
  /* 11cb43ad mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11cb43b1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11cb43b7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11cb43bb jne 0x11cb43c4 */
  if (!C.zf) goto L_11cb43c4;
  /* 11cb43bd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cb43c0 jne 0x11cb4431 */
  if (!C.zf) goto L_11cb4431;
  /* 11cb43c2 jmp 0x11cb43e5 */
  goto L_11cb43e5;
L_11cb43c4:;
  /* 11cb43c4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cb43c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11cb43c7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cb43c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11cb43ca dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11cb43cb je 0x11cb43f2 */
  if (C.zf) goto L_11cb43f2;
  /* 11cb43cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb43cf je 0x11cb43fa */
  if (C.zf) goto L_11cb43fa;
  /* 11cb43d1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11cb43d7 jne 0x11cb43c4 */
  if (!C.zf) goto L_11cb43c4;
  /* 11cb43d9 mov ebx, ecx */
  EBX = (ECX);
  /* 11cb43db shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cb43de jne 0x11cb4431 */
  if (!C.zf) goto L_11cb4431;
L_11cb43e0:;
  /* 11cb43e0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11cb43e3 je 0x11cb43f2 */
  if (C.zf) goto L_11cb43f2;
L_11cb43e5:;
  /* 11cb43e5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cb43e7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11cb43e8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cb43ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11cb43eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cb43ed je 0x11cb441e */
  if (C.zf) goto L_11cb441e;
  /* 11cb43ef dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11cb43f0 jne 0x11cb43e5 */
  if (!C.zf) goto L_11cb43e5;
L_11cb43f2:;
  /* 11cb43f2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11cb43f6 pop ebx */
  EBX = (pop32());
  /* 11cb43f7 pop esi */
  ESI = (pop32());
  /* 11cb43f8 pop edi */
  EDI = (pop32());
  /* 11cb43f9 ret  */
  ESPCHK(0x11cb43a0u, _esp0);
  ESP += 4; return;
L_11cb43fa:;
  /* 11cb43fa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11cb4400 je 0x11cb4414 */
  if (C.zf) goto L_11cb4414;
L_11cb4402:;
  /* 11cb4402 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cb4404 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11cb4405 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11cb4406 je 0x11cb4496 */
  if (C.zf) goto L_11cb4496;
  /* 11cb440c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11cb4412 jne 0x11cb4402 */
  if (!C.zf) goto L_11cb4402;
L_11cb4414:;
  /* 11cb4414 mov ebx, ecx */
  EBX = (ECX);
  /* 11cb4416 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cb4419 jne 0x11cb4487 */
  if (!C.zf) goto L_11cb4487;
L_11cb441b:;
  /* 11cb441b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cb441d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11cb441e:;
  /* 11cb441e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11cb441f jne 0x11cb441b */
  if (!C.zf) goto L_11cb441b;
  /* 11cb4421 pop ebx */
  EBX = (pop32());
  /* 11cb4422 pop esi */
  ESI = (pop32());
L_11cb4423:;
  /* 11cb4423 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11cb4427 pop edi */
  EDI = (pop32());
  /* 11cb4428 ret  */
  ESPCHK(0x11cb43a0u, _esp0);
  ESP += 4; return;
L_11cb4429:;
  /* 11cb4429 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11cb442b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb442e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11cb442f je 0x11cb43e0 */
  if (C.zf) goto L_11cb43e0;
L_11cb4431:;
  /* 11cb4431 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11cb4436 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11cb4438 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb443a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cb443d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb443f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11cb4441 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb4444 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11cb4449 je 0x11cb4429 */
  if (C.zf) goto L_11cb4429;
  /* 11cb444b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11cb444d je 0x11cb447b */
  if (C.zf) goto L_11cb447b;
  /* 11cb444f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11cb4451 je 0x11cb4471 */
  if (C.zf) goto L_11cb4471;
  /* 11cb4453 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11cb4459 je 0x11cb4467 */
  if (C.zf) goto L_11cb4467;
  /* 11cb445b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11cb4461 jne 0x11cb4429 */
  if (!C.zf) goto L_11cb4429;
  /* 11cb4463 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11cb4465 jmp 0x11cb447f */
  goto L_11cb447f;
L_11cb4467:;
  /* 11cb4467 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cb446d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11cb446f jmp 0x11cb447f */
  goto L_11cb447f;
L_11cb4471:;
  /* 11cb4471 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cb4477 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11cb4479 jmp 0x11cb447f */
  goto L_11cb447f;
L_11cb447b:;
  /* 11cb447b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cb447d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11cb447f:;
  /* 11cb447f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb4482 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb4484 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11cb4485 je 0x11cb4491 */
  if (C.zf) goto L_11cb4491;
L_11cb4487:;
  /* 11cb4487 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cb4489:;
  /* 11cb4489 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11cb448b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb448e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11cb448f jne 0x11cb4489 */
  if (!C.zf) goto L_11cb4489;
L_11cb4491:;
  /* 11cb4491 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11cb4494 jne 0x11cb441b */
  if (!C.zf) goto L_11cb441b;
L_11cb4496:;
  /* 11cb4496 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11cb449a pop ebx */
  EBX = (pop32());
  /* 11cb449b pop esi */
  ESI = (pop32());
  /* 11cb449c pop edi */
  EDI = (pop32());
  /* 11cb449d ret  */
  ESPCHK(0x11cb43a0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11cb44a0 (88 bytes, 40 insns) */
void f_11cb44a0(void) {
  FTRACE(0x11cb44a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb44a0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11cb44a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11cb44a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cb44aa je 0x11cb44f3 */
  if (C.zf) goto L_11cb44f3;
  /* 11cb44ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb44ae mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11cb44b2 push edi */
  push32((uint32_t)(EDI));
  /* 11cb44b3 mov edi, ecx */
  EDI = (ECX);
  /* 11cb44b5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb44b8 jb 0x11cb44e7 */
  if (C.cf) goto L_11cb44e7;
  /* 11cb44ba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cb44bc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11cb44bf je 0x11cb44c9 */
  if (C.zf) goto L_11cb44c9;
  /* 11cb44c1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11cb44c3:;
  /* 11cb44c3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cb44c5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11cb44c6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11cb44c7 jne 0x11cb44c3 */
  if (!C.zf) goto L_11cb44c3;
L_11cb44c9:;
  /* 11cb44c9 mov ecx, eax */
  ECX = (EAX);
  /* 11cb44cb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11cb44ce add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb44d0 mov ecx, eax */
  ECX = (EAX);
  /* 11cb44d2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11cb44d5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb44d7 mov ecx, edx */
  ECX = (EDX);
  /* 11cb44d9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11cb44dc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cb44df je 0x11cb44e7 */
  if (C.zf) goto L_11cb44e7;
  /* 11cb44e1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cb44e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cb44e5 je 0x11cb44ed */
  if (C.zf) goto L_11cb44ed;
L_11cb44e7:;
  /* 11cb44e7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cb44e9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11cb44ea dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11cb44eb jne 0x11cb44e7 */
  if (!C.zf) goto L_11cb44e7;
L_11cb44ed:;
  /* 11cb44ed mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11cb44f1 pop edi */
  EDI = (pop32());
  /* 11cb44f2 ret  */
  ESPCHK(0x11cb44a0u, _esp0);
  ESP += 4; return;
L_11cb44f3:;
  /* 11cb44f3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11cb44f7 ret  */
  ESPCHK(0x11cb44a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100044f8 @ 0x11cb44f8 (27 bytes, 13 insns) */
void f_11cb44f8(void) {
  FTRACE(0x11cb44f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb44f8 mov eax, dword ptr [0x11cb6ad8] */
  EAX = (r32((uint32_t)(0x11cb6ad8)));
  /* 11cb44fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb44ff je 0x11cb4510 */
  if (C.zf) goto L_11cb4510;
  /* 11cb4501 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11cb4505 call eax */
  call_ind((uint32_t)(EAX), 0x11cb4507u);
  /* 11cb4507 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb4509 pop ecx */
  ECX = (pop32());
  /* 11cb450a je 0x11cb4510 */
  if (C.zf) goto L_11cb4510;
  /* 11cb450c push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb450e pop eax */
  EAX = (pop32());
  /* 11cb450f ret  */
  ESPCHK(0x11cb44f8u, _esp0);
  ESP += 4; return;
L_11cb4510:;
  /* 11cb4510 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cb4512 ret  */
  ESPCHK(0x11cb44f8u, _esp0);
  ESP += 4; return;
}

/* FUN_10004513 @ 0x11cb4513 (511 bytes, 193 insns) */
void f_11cb4513(void) {
  FTRACE(0x11cb4513u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb4513 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb4514 mov ebp, esp */
  EBP = (ESP);
  /* 11cb4516 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11cb4518 push 0x11cb5490 */
  push32((uint32_t)(0x11cb5490u));
  /* 11cb451d push 0x11cb4ce0 */
  push32((uint32_t)(0x11cb4ce0u));
  /* 11cb4522 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11cb4528 push eax */
  push32((uint32_t)(EAX));
  /* 11cb4529 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11cb4530 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb4533 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb4534 push esi */
  push32((uint32_t)(ESI));
  /* 11cb4535 push edi */
  push32((uint32_t)(EDI));
  /* 11cb4536 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11cb4539 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11cb453b cmp dword ptr [0x11cb6b00], edi */
  { uint32_t _a=(r32((uint32_t)(0x11cb6b00))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4541 jne 0x11cb4589 */
  if (!C.zf) goto L_11cb4589;
  /* 11cb4543 push edi */
  push32((uint32_t)(EDI));
  /* 11cb4544 push edi */
  push32((uint32_t)(EDI));
  /* 11cb4545 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb4547 pop ebx */
  EBX = (pop32());
  /* 11cb4548 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb4549 push 0x11cb5488 */
  push32((uint32_t)(0x11cb5488u));
  /* 11cb454e mov esi, 0x100 */
  ESI = (0x100u);
  /* 11cb4553 push esi */
  push32((uint32_t)(ESI));
  /* 11cb4554 push edi */
  push32((uint32_t)(EDI));
  /* 11cb4555 call dword ptr [0x11cb5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5014))), 0x11cb455bu);
  /* 11cb455b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb455d je 0x11cb4567 */
  if (C.zf) goto L_11cb4567;
  /* 11cb455f mov dword ptr [0x11cb6b00], ebx */
  w32((uint32_t)(0x11cb6b00), (EBX));
  /* 11cb4565 jmp 0x11cb4589 */
  goto L_11cb4589;
L_11cb4567:;
  /* 11cb4567 push edi */
  push32((uint32_t)(EDI));
  /* 11cb4568 push edi */
  push32((uint32_t)(EDI));
  /* 11cb4569 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb456a push 0x11cb5484 */
  push32((uint32_t)(0x11cb5484u));
  /* 11cb456f push esi */
  push32((uint32_t)(ESI));
  /* 11cb4570 push edi */
  push32((uint32_t)(EDI));
  /* 11cb4571 call dword ptr [0x11cb5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5018))), 0x11cb4577u);
  /* 11cb4577 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb4579 je 0x11cb46a1 */
  if (C.zf) goto L_11cb46a1;
  /* 11cb457f mov dword ptr [0x11cb6b00], 2 */
  w32((uint32_t)(0x11cb6b00), (0x2u));
L_11cb4589:;
  /* 11cb4589 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb458c jle 0x11cb459e */
  if ((C.zf||C.sf!=C.of)) goto L_11cb459e;
  /* 11cb458e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11cb4591 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11cb4594 call 0x11cb4737 */
  push32(0x11cb4599u); f_11cb4737();
  /* 11cb4599 pop ecx */
  ECX = (pop32());
  /* 11cb459a pop ecx */
  ECX = (pop32());
  /* 11cb459b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11cb459e:;
  /* 11cb459e mov eax, dword ptr [0x11cb6b00] */
  EAX = (r32((uint32_t)(0x11cb6b00)));
  /* 11cb45a3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb45a6 jne 0x11cb45c5 */
  if (!C.zf) goto L_11cb45c5;
  /* 11cb45a8 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11cb45ab push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11cb45ae push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11cb45b1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11cb45b4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11cb45b7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11cb45ba call dword ptr [0x11cb5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5018))), 0x11cb45c0u);
  /* 11cb45c0 jmp 0x11cb46a3 */
  goto L_11cb46a3;
L_11cb45c5:;
  /* 11cb45c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb45c8 jne 0x11cb46a1 */
  if (!C.zf) goto L_11cb46a1;
  /* 11cb45ce cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb45d1 jne 0x11cb45db */
  if (!C.zf) goto L_11cb45db;
  /* 11cb45d3 mov eax, dword ptr [0x11cb6af8] */
  EAX = (r32((uint32_t)(0x11cb6af8)));
  /* 11cb45d8 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11cb45db:;
  /* 11cb45db push edi */
  push32((uint32_t)(EDI));
  /* 11cb45dc push edi */
  push32((uint32_t)(EDI));
  /* 11cb45dd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11cb45e0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11cb45e3 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11cb45e6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cb45e8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb45ea and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11cb45ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb45ee push eax */
  push32((uint32_t)(EAX));
  /* 11cb45ef push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11cb45f2 call dword ptr [0x11cb501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb501c))), 0x11cb45f8u);
  /* 11cb45f8 mov ebx, eax */
  EBX = (EAX);
  /* 11cb45fa mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11cb45fd cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb45ff je 0x11cb46a1 */
  if (C.zf) goto L_11cb46a1;
  /* 11cb4605 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11cb4608 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11cb460b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb460e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11cb4610 call 0x11cb4dc0 */
  push32(0x11cb4615u); f_11cb4dc0();
  /* 11cb4615 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11cb4618 mov eax, esp */
  EAX = (ESP);
  /* 11cb461a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11cb461d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11cb4621 jmp 0x11cb4636 */
  goto L_11cb4636;
  /* 11cb4623 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb4625 pop eax */
  EAX = (pop32());
  /* 11cb4626 ret  */
  ESPCHK(0x11cb4513u, _esp0);
  ESP += 4; return;
  /* 11cb4627 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11cb462a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11cb462c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11cb462f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11cb4633 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11cb4636:;
  /* 11cb4636 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4639 je 0x11cb46a1 */
  if (C.zf) goto L_11cb46a1;
  /* 11cb463b push ebx */
  push32((uint32_t)(EBX));
  /* 11cb463c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11cb463f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11cb4642 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11cb4645 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb4647 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11cb464a call dword ptr [0x11cb501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb501c))), 0x11cb4650u);
  /* 11cb4650 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb4652 je 0x11cb46a1 */
  if (C.zf) goto L_11cb46a1;
  /* 11cb4654 push edi */
  push32((uint32_t)(EDI));
  /* 11cb4655 push edi */
  push32((uint32_t)(EDI));
  /* 11cb4656 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb4657 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11cb465a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11cb465d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11cb4660 call dword ptr [0x11cb5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5014))), 0x11cb4666u);
  /* 11cb4666 mov esi, eax */
  ESI = (EAX);
  /* 11cb4668 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11cb466b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb466d je 0x11cb46a1 */
  if (C.zf) goto L_11cb46a1;
  /* 11cb466f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11cb4673 je 0x11cb46b5 */
  if (C.zf) goto L_11cb46b5;
  /* 11cb4675 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4678 je 0x11cb4730 */
  if (C.zf) goto L_11cb4730;
  /* 11cb467e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4681 jg 0x11cb46a1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cb46a1;
  /* 11cb4683 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11cb4686 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11cb4689 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb468a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11cb468d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11cb4690 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11cb4693 call dword ptr [0x11cb5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5014))), 0x11cb4699u);
  /* 11cb4699 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb469b jne 0x11cb4730 */
  if (!C.zf) goto L_11cb4730;
L_11cb46a1:;
  /* 11cb46a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cb46a3:;
  /* 11cb46a3 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11cb46a6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cb46a9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11cb46b0 pop edi */
  EDI = (pop32());
  /* 11cb46b1 pop esi */
  ESI = (pop32());
  /* 11cb46b2 pop ebx */
  EBX = (pop32());
  /* 11cb46b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb46b4 ret  */
  ESPCHK(0x11cb4513u, _esp0);
  ESP += 4; return;
L_11cb46b5:;
  /* 11cb46b5 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11cb46bc lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11cb46bf add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb46c2 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11cb46c4 call 0x11cb4dc0 */
  push32(0x11cb46c9u); f_11cb4dc0();
  /* 11cb46c9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11cb46cc mov ebx, esp */
  EBX = (ESP);
  /* 11cb46ce mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11cb46d1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11cb46d5 jmp 0x11cb46e9 */
  goto L_11cb46e9;
  /* 11cb46d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb46d9 pop eax */
  EAX = (pop32());
  /* 11cb46da ret  */
  ESPCHK(0x11cb4513u, _esp0);
  ESP += 4; return;
  /* 11cb46db mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11cb46de xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11cb46e0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11cb46e2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11cb46e6 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11cb46e9:;
  /* 11cb46e9 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb46eb je 0x11cb46a1 */
  if (C.zf) goto L_11cb46a1;
  /* 11cb46ed push esi */
  push32((uint32_t)(ESI));
  /* 11cb46ee push ebx */
  push32((uint32_t)(EBX));
  /* 11cb46ef push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11cb46f2 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11cb46f5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11cb46f8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11cb46fb call dword ptr [0x11cb5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5014))), 0x11cb4701u);
  /* 11cb4701 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb4703 je 0x11cb46a1 */
  if (C.zf) goto L_11cb46a1;
  /* 11cb4705 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4708 push edi */
  push32((uint32_t)(EDI));
  /* 11cb4709 push edi */
  push32((uint32_t)(EDI));
  /* 11cb470a jne 0x11cb4710 */
  if (!C.zf) goto L_11cb4710;
  /* 11cb470c push edi */
  push32((uint32_t)(EDI));
  /* 11cb470d push edi */
  push32((uint32_t)(EDI));
  /* 11cb470e jmp 0x11cb4716 */
  goto L_11cb4716;
L_11cb4710:;
  /* 11cb4710 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11cb4713 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11cb4716:;
  /* 11cb4716 push esi */
  push32((uint32_t)(ESI));
  /* 11cb4717 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb4718 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11cb471d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11cb4720 call dword ptr [0x11cb5068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5068))), 0x11cb4726u);
  /* 11cb4726 mov esi, eax */
  ESI = (EAX);
  /* 11cb4728 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb472a je 0x11cb46a1 */
  if (C.zf) goto L_11cb46a1;
L_11cb4730:;
  /* 11cb4730 mov eax, esi */
  EAX = (ESI);
  /* 11cb4732 jmp 0x11cb46a3 */
  goto L_11cb46a3;
}

/* FUN_10004737 @ 0x11cb4737 (43 bytes, 20 insns) */
void f_11cb4737(void) {
  FTRACE(0x11cb4737u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb4737 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11cb473b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11cb473f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cb4741 push esi */
  push32((uint32_t)(ESI));
  /* 11cb4742 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11cb4745 je 0x11cb4754 */
  if (C.zf) goto L_11cb4754;
L_11cb4747:;
  /* 11cb4747 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb474a je 0x11cb4754 */
  if (C.zf) goto L_11cb4754;
  /* 11cb474c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb474d mov esi, ecx */
  ESI = (ECX);
  /* 11cb474f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11cb4750 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11cb4752 jne 0x11cb4747 */
  if (!C.zf) goto L_11cb4747;
L_11cb4754:;
  /* 11cb4754 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cb4757 pop esi */
  ESI = (pop32());
  /* 11cb4758 jne 0x11cb475f */
  if (!C.zf) goto L_11cb475f;
  /* 11cb475a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb475e ret  */
  ESPCHK(0x11cb4737u, _esp0);
  ESP += 4; return;
L_11cb475f:;
  /* 11cb475f mov eax, edx */
  EAX = (EDX);
  /* 11cb4761 ret  */
  ESPCHK(0x11cb4737u, _esp0);
  ESP += 4; return;
}

/* FUN_10004762 @ 0x11cb4762 (318 bytes, 123 insns) */
void f_11cb4762(void) {
  FTRACE(0x11cb4762u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb4762 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb4763 mov ebp, esp */
  EBP = (ESP);
  /* 11cb4765 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11cb4767 push 0x11cb54a8 */
  push32((uint32_t)(0x11cb54a8u));
  /* 11cb476c push 0x11cb4ce0 */
  push32((uint32_t)(0x11cb4ce0u));
  /* 11cb4771 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11cb4777 push eax */
  push32((uint32_t)(EAX));
  /* 11cb4778 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11cb477f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb4782 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb4783 push esi */
  push32((uint32_t)(ESI));
  /* 11cb4784 push edi */
  push32((uint32_t)(EDI));
  /* 11cb4785 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11cb4788 mov eax, dword ptr [0x11cb6b04] */
  EAX = (r32((uint32_t)(0x11cb6b04)));
  /* 11cb478d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11cb478f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4791 jne 0x11cb47d1 */
  if (!C.zf) goto L_11cb47d1;
  /* 11cb4793 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11cb4796 push eax */
  push32((uint32_t)(EAX));
  /* 11cb4797 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb4799 pop esi */
  ESI = (pop32());
  /* 11cb479a push esi */
  push32((uint32_t)(ESI));
  /* 11cb479b push 0x11cb5488 */
  push32((uint32_t)(0x11cb5488u));
  /* 11cb47a0 push esi */
  push32((uint32_t)(ESI));
  /* 11cb47a1 call dword ptr [0x11cb500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb500c))), 0x11cb47a7u);
  /* 11cb47a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb47a9 je 0x11cb47af */
  if (C.zf) goto L_11cb47af;
  /* 11cb47ab mov eax, esi */
  EAX = (ESI);
  /* 11cb47ad jmp 0x11cb47cc */
  goto L_11cb47cc;
L_11cb47af:;
  /* 11cb47af lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11cb47b2 push eax */
  push32((uint32_t)(EAX));
  /* 11cb47b3 push esi */
  push32((uint32_t)(ESI));
  /* 11cb47b4 push 0x11cb5484 */
  push32((uint32_t)(0x11cb5484u));
  /* 11cb47b9 push esi */
  push32((uint32_t)(ESI));
  /* 11cb47ba push ebx */
  push32((uint32_t)(EBX));
  /* 11cb47bb call dword ptr [0x11cb5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5010))), 0x11cb47c1u);
  /* 11cb47c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cb47c3 je 0x11cb4897 */
  if (C.zf) goto L_11cb4897;
  /* 11cb47c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cb47cb pop eax */
  EAX = (pop32());
L_11cb47cc:;
  /* 11cb47cc mov dword ptr [0x11cb6b04], eax */
  w32((uint32_t)(0x11cb6b04), (EAX));
L_11cb47d1:;
  /* 11cb47d1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb47d4 jne 0x11cb47fa */
  if (!C.zf) goto L_11cb47fa;
  /* 11cb47d6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cb47d9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb47db jne 0x11cb47e2 */
  if (!C.zf) goto L_11cb47e2;
  /* 11cb47dd mov eax, dword ptr [0x11cb6ae8] */
  EAX = (r32((uint32_t)(0x11cb6ae8)));
L_11cb47e2:;
  /* 11cb47e2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11cb47e5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11cb47e8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11cb47eb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11cb47ee push eax */
  push32((uint32_t)(EAX));
  /* 11cb47ef call dword ptr [0x11cb5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb5010))), 0x11cb47f5u);
  /* 11cb47f5 jmp 0x11cb4899 */
  goto L_11cb4899;
L_11cb47fa:;
  /* 11cb47fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb47fd jne 0x11cb4897 */
  if (!C.zf) goto L_11cb4897;
  /* 11cb4803 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4806 jne 0x11cb4810 */
  if (!C.zf) goto L_11cb4810;
  /* 11cb4808 mov eax, dword ptr [0x11cb6af8] */
  EAX = (r32((uint32_t)(0x11cb6af8)));
  /* 11cb480d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11cb4810:;
  /* 11cb4810 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb4811 push ebx */
  push32((uint32_t)(EBX));
  /* 11cb4812 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11cb4815 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11cb4818 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11cb481b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cb481d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb481f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11cb4822 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cb4823 push eax */
  push32((uint32_t)(EAX));
  /* 11cb4824 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11cb4827 call dword ptr [0x11cb501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb501c))), 0x11cb482du);
  /* 11cb482d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11cb4830 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4832 je 0x11cb4897 */
  if (C.zf) goto L_11cb4897;
  /* 11cb4834 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11cb4837 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11cb483a mov eax, edi */
  EAX = (EDI);
  /* 11cb483c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb483f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11cb4841 call 0x11cb4dc0 */
  push32(0x11cb4846u); f_11cb4dc0();
  /* 11cb4846 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11cb4849 mov esi, esp */
  ESI = (ESP);
  /* 11cb484b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11cb484e push edi */
  push32((uint32_t)(EDI));
  /* 11cb484f push ebx */
  push32((uint32_t)(EBX));
  /* 11cb4850 push esi */
  push32((uint32_t)(ESI));
  /* 11cb4851 call 0x11cb44a0 */
  push32(0x11cb4856u); f_11cb44a0();
  /* 11cb4856 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb4859 jmp 0x11cb4866 */
  goto L_11cb4866;
  /* 11cb485b push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb485d pop eax */
  EAX = (pop32());
  /* 11cb485e ret  */
  ESPCHK(0x11cb4762u, _esp0);
  ESP += 4; return;
  /* 11cb485f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11cb4862 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11cb4864 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11cb4866:;
  /* 11cb4866 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11cb486a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb486c je 0x11cb4897 */
  if (C.zf) goto L_11cb4897;
  /* 11cb486e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11cb4871 push esi */
  push32((uint32_t)(ESI));
  /* 11cb4872 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11cb4875 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11cb4878 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cb487a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11cb487d call dword ptr [0x11cb501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb501c))), 0x11cb4883u);
  /* 11cb4883 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4885 je 0x11cb4897 */
  if (C.zf) goto L_11cb4897;
  /* 11cb4887 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11cb488a push eax */
  push32((uint32_t)(EAX));
  /* 11cb488b push esi */
  push32((uint32_t)(ESI));
  /* 11cb488c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11cb488f call dword ptr [0x11cb500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cb500c))), 0x11cb4895u);
  /* 11cb4895 jmp 0x11cb4899 */
  goto L_11cb4899;
L_11cb4897:;
  /* 11cb4897 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cb4899:;
  /* 11cb4899 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11cb489c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cb489f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11cb48a6 pop edi */
  EDI = (pop32());
  /* 11cb48a7 pop esi */
  ESI = (pop32());
  /* 11cb48a8 pop ebx */
  EBX = (pop32());
  /* 11cb48a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb48aa ret  */
  ESPCHK(0x11cb4762u, _esp0);
  ESP += 4; return;
}

/* FUN_100048b0 @ 0x11cb48b0 (664 bytes, 260 insns) [15 switch table(s)] */
void f_11cb48b0(void) {
  FTRACE(0x11cb48b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb48b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb48b1 mov ebp, esp */
  EBP = (ESP);
  /* 11cb48b3 push edi */
  push32((uint32_t)(EDI));
  /* 11cb48b4 push esi */
  push32((uint32_t)(ESI));
  /* 11cb48b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11cb48b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cb48bb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb48be mov eax, ecx */
  EAX = (ECX);
  /* 11cb48c0 mov edx, ecx */
  EDX = (ECX);
  /* 11cb48c2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb48c4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb48c6 jbe 0x11cb48d0 */
  if ((C.cf||C.zf)) goto L_11cb48d0;
  /* 11cb48c8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb48ca jb 0x11cb4a48 */
  if (C.cf) goto L_11cb4a48;
L_11cb48d0:;
  /* 11cb48d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11cb48d6 jne 0x11cb48ec */
  if (!C.zf) goto L_11cb48ec;
  /* 11cb48d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cb48db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11cb48de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb48e1 jb 0x11cb490c */
  if (C.cf) goto L_11cb490c;
  /* 11cb48e3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cb48e5 jmp dword ptr [edx*4 + 0x11cb49f8] */
  switch (EDX) {
    case 0: goto L_11cb4a08;
    case 1: goto L_11cb4a10;
    case 2: goto L_11cb4a1c;
    case 3: goto L_11cb4a30;
    default: x86_unimpl("switch@0x11cb48e5 out of table"); return;
  }
L_11cb48ec:;
  /* 11cb48ec mov eax, edi */
  EAX = (EDI);
  /* 11cb48ee mov edx, 3 */
  EDX = (0x3u);
  /* 11cb48f3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb48f6 jb 0x11cb4904 */
  if (C.cf) goto L_11cb4904;
  /* 11cb48f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11cb48fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb48fd jmp dword ptr [eax*4 + 0x11cb4910] */
  switch (EAX) {
    case 1: goto L_11cb4920;
    case 2: goto L_11cb494c;
    case 3: goto L_11cb4970;
    default: x86_unimpl("switch@0x11cb48fd out of table"); return;
  }
L_11cb4904:;
  /* 11cb4904 jmp dword ptr [ecx*4 + 0x11cb4a08] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11cb4a08)))); return;
  /* 11cb490b nop  */
  /* nop */
L_11cb490c:;
  /* 11cb490c jmp dword ptr [ecx*4 + 0x11cb498c] */
  switch (ECX) {
    case 0: goto L_11cb49ef;
    case 1: goto L_11cb49dc;
    case 2: goto L_11cb49d4;
    case 3: goto L_11cb49cc;
    case 4: goto L_11cb49c4;
    case 5: goto L_11cb49bc;
    case 6: goto L_11cb49b4;
    case 7: goto L_11cb49ac;
    default: x86_unimpl("switch@0x11cb490c out of table"); return;
  }
  /* 11cb4913 nop  */
  /* nop */
L_11cb4920:;
  /* 11cb4920 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cb4922 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cb4924 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cb4926 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11cb4929 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11cb492c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11cb492f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cb4932 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11cb4935 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb4938 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb493b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb493e jb 0x11cb490c */
  if (C.cf) goto L_11cb490c;
  /* 11cb4940 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cb4942 jmp dword ptr [edx*4 + 0x11cb49f8] */
  switch (EDX) {
    case 0: goto L_11cb4a08;
    case 1: goto L_11cb4a10;
    case 2: goto L_11cb4a1c;
    case 3: goto L_11cb4a30;
    default: x86_unimpl("switch@0x11cb4942 out of table"); return;
  }
  /* 11cb4949 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cb494c:;
  /* 11cb494c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cb494e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cb4950 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cb4952 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11cb4955 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cb4958 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11cb495b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb495e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb4961 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4964 jb 0x11cb490c */
  if (C.cf) goto L_11cb490c;
  /* 11cb4966 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cb4968 jmp dword ptr [edx*4 + 0x11cb49f8] */
  switch (EDX) {
    case 0: goto L_11cb4a08;
    case 1: goto L_11cb4a10;
    case 2: goto L_11cb4a1c;
    case 3: goto L_11cb4a30;
    default: x86_unimpl("switch@0x11cb4968 out of table"); return;
  }
  /* 11cb496f nop  */
  /* nop */
L_11cb4970:;
  /* 11cb4970 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cb4972 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cb4974 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cb4976 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11cb4977 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cb497a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11cb497b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb497e jb 0x11cb490c */
  if (C.cf) goto L_11cb490c;
  /* 11cb4980 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cb4982 jmp dword ptr [edx*4 + 0x11cb49f8] */
  switch (EDX) {
    case 0: goto L_11cb4a08;
    case 1: goto L_11cb4a10;
    case 2: goto L_11cb4a1c;
    case 3: goto L_11cb4a30;
    default: x86_unimpl("switch@0x11cb4982 out of table"); return;
  }
  /* 11cb4989 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cb49ac:;
  /* 11cb49ac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11cb49b0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11cb49b4:;
  /* 11cb49b4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11cb49b8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11cb49bc:;
  /* 11cb49bc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11cb49c0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11cb49c4:;
  /* 11cb49c4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11cb49c8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11cb49cc:;
  /* 11cb49cc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11cb49d0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11cb49d4:;
  /* 11cb49d4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11cb49d8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11cb49dc:;
  /* 11cb49dc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11cb49e0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11cb49e4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11cb49eb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb49ed add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11cb49ef:;
  /* 11cb49ef jmp dword ptr [edx*4 + 0x11cb49f8] */
  switch (EDX) {
    case 0: goto L_11cb4a08;
    case 1: goto L_11cb4a10;
    case 2: goto L_11cb4a1c;
    case 3: goto L_11cb4a30;
    default: x86_unimpl("switch@0x11cb49ef out of table"); return;
  }
  /* 11cb49f6 mov edi, edi */
  EDI = (EDI);
L_11cb4a08:;
  /* 11cb4a08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb4a0b pop esi */
  ESI = (pop32());
  /* 11cb4a0c pop edi */
  EDI = (pop32());
  /* 11cb4a0d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb4a0e ret  */
  ESPCHK(0x11cb48b0u, _esp0);
  ESP += 4; return;
  /* 11cb4a0f nop  */
  /* nop */
L_11cb4a10:;
  /* 11cb4a10 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cb4a12 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cb4a14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb4a17 pop esi */
  ESI = (pop32());
  /* 11cb4a18 pop edi */
  EDI = (pop32());
  /* 11cb4a19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb4a1a ret  */
  ESPCHK(0x11cb48b0u, _esp0);
  ESP += 4; return;
  /* 11cb4a1b nop  */
  /* nop */
L_11cb4a1c:;
  /* 11cb4a1c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cb4a1e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cb4a20 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11cb4a23 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11cb4a26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb4a29 pop esi */
  ESI = (pop32());
  /* 11cb4a2a pop edi */
  EDI = (pop32());
  /* 11cb4a2b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb4a2c ret  */
  ESPCHK(0x11cb48b0u, _esp0);
  ESP += 4; return;
  /* 11cb4a2d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cb4a30:;
  /* 11cb4a30 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cb4a32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cb4a34 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11cb4a37 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11cb4a3a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11cb4a3d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11cb4a40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb4a43 pop esi */
  ESI = (pop32());
  /* 11cb4a44 pop edi */
  EDI = (pop32());
  /* 11cb4a45 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb4a46 ret  */
  ESPCHK(0x11cb48b0u, _esp0);
  ESP += 4; return;
  /* 11cb4a47 nop  */
  /* nop */
L_11cb4a48:;
  /* 11cb4a48 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11cb4a4c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11cb4a50 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11cb4a56 jne 0x11cb4a7c */
  if (!C.zf) goto L_11cb4a7c;
  /* 11cb4a58 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cb4a5b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11cb4a5e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4a61 jb 0x11cb4a70 */
  if (C.cf) goto L_11cb4a70;
  /* 11cb4a63 std  */
  C.df=1;
  /* 11cb4a64 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cb4a66 cld  */
  C.df=0;
  /* 11cb4a67 jmp dword ptr [edx*4 + 0x11cb4b90] */
  switch (EDX) {
    case 0: goto L_11cb4ba0;
    case 1: goto L_11cb4ba8;
    case 2: goto L_11cb4bb8;
    case 3: goto L_11cb4bcc;
    default: x86_unimpl("switch@0x11cb4a67 out of table"); return;
  }
  /* 11cb4a6e mov edi, edi */
  EDI = (EDI);
L_11cb4a70:;
  /* 11cb4a70 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cb4a72 jmp dword ptr [ecx*4 + 0x11cb4b40] */
  switch (ECX) {
    case 0: goto L_11cb4b87;
    default: x86_unimpl("switch@0x11cb4a72 out of table"); return;
  }
  /* 11cb4a79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cb4a7c:;
  /* 11cb4a7c mov eax, edi */
  EAX = (EDI);
  /* 11cb4a7e mov edx, 3 */
  EDX = (0x3u);
  /* 11cb4a83 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4a86 jb 0x11cb4a94 */
  if (C.cf) goto L_11cb4a94;
  /* 11cb4a88 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11cb4a8b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb4a8d jmp dword ptr [eax*4 + 0x11cb4a98] */
  switch (EAX) {
    case 1: goto L_11cb4aa8;
    case 2: goto L_11cb4ac8;
    case 3: goto L_11cb4af0;
    default: x86_unimpl("switch@0x11cb4a8d out of table"); return;
  }
L_11cb4a94:;
  /* 11cb4a94 jmp dword ptr [ecx*4 + 0x11cb4b90] */
  switch (ECX) {
    case 0: goto L_11cb4ba0;
    case 1: goto L_11cb4ba8;
    case 2: goto L_11cb4bb8;
    case 3: goto L_11cb4bcc;
    default: x86_unimpl("switch@0x11cb4a94 out of table"); return;
  }
  /* 11cb4a9b nop  */
  /* nop */
L_11cb4aa8:;
  /* 11cb4aa8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11cb4aab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cb4aad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11cb4ab0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11cb4ab1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cb4ab4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11cb4ab5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4ab8 jb 0x11cb4a70 */
  if (C.cf) goto L_11cb4a70;
  /* 11cb4aba std  */
  C.df=1;
  /* 11cb4abb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cb4abd cld  */
  C.df=0;
  /* 11cb4abe jmp dword ptr [edx*4 + 0x11cb4b90] */
  switch (EDX) {
    case 0: goto L_11cb4ba0;
    case 1: goto L_11cb4ba8;
    case 2: goto L_11cb4bb8;
    case 3: goto L_11cb4bcc;
    default: x86_unimpl("switch@0x11cb4abe out of table"); return;
  }
  /* 11cb4ac5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cb4ac8:;
  /* 11cb4ac8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11cb4acb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cb4acd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11cb4ad0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11cb4ad3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cb4ad6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11cb4ad9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb4adc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb4adf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4ae2 jb 0x11cb4a70 */
  if (C.cf) goto L_11cb4a70;
  /* 11cb4ae4 std  */
  C.df=1;
  /* 11cb4ae5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cb4ae7 cld  */
  C.df=0;
  /* 11cb4ae8 jmp dword ptr [edx*4 + 0x11cb4b90] */
  switch (EDX) {
    case 0: goto L_11cb4ba0;
    case 1: goto L_11cb4ba8;
    case 2: goto L_11cb4bb8;
    case 3: goto L_11cb4bcc;
    default: x86_unimpl("switch@0x11cb4ae8 out of table"); return;
  }
  /* 11cb4aef nop  */
  /* nop */
L_11cb4af0:;
  /* 11cb4af0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11cb4af3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cb4af5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11cb4af8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11cb4afb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11cb4afe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11cb4b01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cb4b04 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11cb4b07 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb4b0a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb4b0d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4b10 jb 0x11cb4a70 */
  if (C.cf) goto L_11cb4a70;
  /* 11cb4b16 std  */
  C.df=1;
  /* 11cb4b17 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cb4b19 cld  */
  C.df=0;
  /* 11cb4b1a jmp dword ptr [edx*4 + 0x11cb4b90] */
  switch (EDX) {
    case 0: goto L_11cb4ba0;
    case 1: goto L_11cb4ba8;
    case 2: goto L_11cb4bb8;
    case 3: goto L_11cb4bcc;
    default: x86_unimpl("switch@0x11cb4b1a out of table"); return;
  }
  /* 11cb4b21 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11cb4b24 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 11cb4b25 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11cb4b26 retf  */
  x86_unimpl("retf @ 0x11cb4b26");
  /* 11cb4b27 adc dword ptr [ebx + ecx*2 - 0x35], ecx */
  { uint32_t _a=(r32((uint32_t)(EBX + ECX*2 + -0x35))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EBX + ECX*2 + -0x35), (_r)); fl_add(_a,_b,_r,32); }
  /* 11cb4b2b adc dword ptr [ebx + ecx*2 - 0x35], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + ECX*2 + -0x35))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EBX + ECX*2 + -0x35), (_r)); fl_add(_a,_b,_r,32); }
  /* 11cb4b2f adc dword ptr [ebx + ecx*2 - 0x35], ebx */
  { uint32_t _a=(r32((uint32_t)(EBX + ECX*2 + -0x35))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(EBX + ECX*2 + -0x35), (_r)); fl_add(_a,_b,_r,32); }
  /* 11cb4b33 adc dword ptr [ebx + ecx*2 - 0x35], esp */
  { uint32_t _a=(r32((uint32_t)(EBX + ECX*2 + -0x35))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(EBX + ECX*2 + -0x35), (_r)); fl_add(_a,_b,_r,32); }
  /* 11cb4b37 adc dword ptr [ebx + ecx*2 - 0x35], ebp */
  { uint32_t _a=(r32((uint32_t)(EBX + ECX*2 + -0x35))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EBX + ECX*2 + -0x35), (_r)); fl_add(_a,_b,_r,32); }
  /* 11cb4b3b adc dword ptr [ebx + ecx*2 - 0x35], esi */
  { uint32_t _a=(r32((uint32_t)(EBX + ECX*2 + -0x35))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(EBX + ECX*2 + -0x35), (_r)); fl_add(_a,_b,_r,32); }
  /* 11cb4b44 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11cb4b48 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11cb4b4c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11cb4b50 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11cb4b54 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11cb4b58 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11cb4b5c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11cb4b60 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11cb4b64 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11cb4b68 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11cb4b6c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11cb4b70 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11cb4b74 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11cb4b78 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11cb4b7c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11cb4b83 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb4b85 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11cb4b87:;
  /* 11cb4b87 jmp dword ptr [edx*4 + 0x11cb4b90] */
  switch (EDX) {
    case 0: goto L_11cb4ba0;
    case 1: goto L_11cb4ba8;
    case 2: goto L_11cb4bb8;
    case 3: goto L_11cb4bcc;
    default: x86_unimpl("switch@0x11cb4b87 out of table"); return;
  }
  /* 11cb4b8e mov edi, edi */
  EDI = (EDI);
L_11cb4ba0:;
  /* 11cb4ba0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb4ba3 pop esi */
  ESI = (pop32());
  /* 11cb4ba4 pop edi */
  EDI = (pop32());
  /* 11cb4ba5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb4ba6 ret  */
  ESPCHK(0x11cb48b0u, _esp0);
  ESP += 4; return;
  /* 11cb4ba7 nop  */
  /* nop */
L_11cb4ba8:;
  /* 11cb4ba8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11cb4bab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11cb4bae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb4bb1 pop esi */
  ESI = (pop32());
  /* 11cb4bb2 pop edi */
  EDI = (pop32());
  /* 11cb4bb3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb4bb4 ret  */
  ESPCHK(0x11cb48b0u, _esp0);
  ESP += 4; return;
  /* 11cb4bb5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cb4bb8:;
  /* 11cb4bb8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11cb4bbb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11cb4bbe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11cb4bc1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11cb4bc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb4bc7 pop esi */
  ESI = (pop32());
  /* 11cb4bc8 pop edi */
  EDI = (pop32());
  /* 11cb4bc9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb4bca ret  */
  ESPCHK(0x11cb48b0u, _esp0);
  ESP += 4; return;
  /* 11cb4bcb nop  */
  /* nop */
L_11cb4bcc:;
  /* 11cb4bcc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11cb4bcf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11cb4bd2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11cb4bd5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11cb4bd8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11cb4bdb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11cb4bde mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb4be1 pop esi */
  ESI = (pop32());
  /* 11cb4be2 pop edi */
  EDI = (pop32());
  /* 11cb4be3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cb4be4 ret  */
  ESPCHK(0x11cb48b0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11cb4be8 (32 bytes, 18 insns) */
void f_11cb4be8(void) {
  FTRACE(0x11cb4be8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb4be8 push ebp */
  push32((uint32_t)(EBP));
  /* 11cb4be9 mov ebp, esp */
  EBP = (ESP);
  /* 11cb4beb push ebx */
  push32((uint32_t)(EBX));
  /* 11cb4bec push esi */
  push32((uint32_t)(ESI));
  /* 11cb4bed push edi */
  push32((uint32_t)(EDI));
  /* 11cb4bee push ebp */
  push32((uint32_t)(EBP));
  /* 11cb4bef push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb4bf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cb4bf3 push 0x11cb4c00 */
  push32((uint32_t)(0x11cb4c00u));
  /* 11cb4bf8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11cb4bfb call 0x11cb4df0 */
  push32(0x11cb4c00u); f_11cb4df0();
  /* 11cb4c00 pop ebp */
  EBP = (pop32());
  /* 11cb4c01 pop edi */
  EDI = (pop32());
  /* 11cb4c02 pop esi */
  ESI = (pop32());
  /* 11cb4c03 pop ebx */
  EBX = (pop32());
  /* 11cb4c04 mov esp, ebp */
  ESP = (EBP);
  /* 11cb4c06 pop ebp */
  EBP = (pop32());
  /* 11cb4c07 ret  */
  ESPCHK(0x11cb4be8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11cb4c2a (104 bytes, 33 insns) */
void f_11cb4c2a(void) {
  FTRACE(0x11cb4c2au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb4c2a push ebx */
  push32((uint32_t)(EBX));
  /* 11cb4c2b push esi */
  push32((uint32_t)(ESI));
  /* 11cb4c2c push edi */
  push32((uint32_t)(EDI));
  /* 11cb4c2d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11cb4c31 push eax */
  push32((uint32_t)(EAX));
  /* 11cb4c32 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11cb4c34 push 0x11cb4c08 */
  push32((uint32_t)(0x11cb4c08u));
  /* 11cb4c39 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11cb4c40 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11cb4c47:;
  /* 11cb4c47 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11cb4c4b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cb4c4e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11cb4c51 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4c54 je 0x11cb4c84 */
  if (C.zf) goto L_11cb4c84;
  /* 11cb4c56 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4c5a je 0x11cb4c84 */
  if (C.zf) goto L_11cb4c84;
  /* 11cb4c5c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11cb4c5f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11cb4c62 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11cb4c66 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11cb4c69 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4c6e jne 0x11cb4c82 */
  if (!C.zf) goto L_11cb4c82;
  /* 11cb4c70 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11cb4c75 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11cb4c79 call 0x11cb4cbe */
  push32(0x11cb4c7eu); f_11cb4cbe();
  /* 11cb4c7e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11cb4c82u);
L_11cb4c82:;
  /* 11cb4c82 jmp 0x11cb4c47 */
  goto L_11cb4c47;
L_11cb4c84:;
  /* 11cb4c84 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11cb4c8b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb4c8e pop edi */
  EDI = (pop32());
  /* 11cb4c8f pop esi */
  ESI = (pop32());
  /* 11cb4c90 pop ebx */
  EBX = (pop32());
  /* 11cb4c91 ret  */
  ESPCHK(0x11cb4c2au, _esp0);
  ESP += 4; return;
}

/* FUN_10004cbe @ 0x11cb4cbe (24 bytes, 10 insns) */
void f_11cb4cbe(void) {
  FTRACE(0x11cb4cbeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb4cbe push ebx */
  push32((uint32_t)(EBX));
  /* 11cb4cbf push ecx */
  push32((uint32_t)(ECX));
  /* 11cb4cc0 mov ebx, 0x11cb6670 */
  EBX = (0x11cb6670u);
  /* 11cb4cc5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cb4cc8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11cb4ccb mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11cb4cce mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11cb4cd1 pop ecx */
  ECX = (pop32());
  /* 11cb4cd2 pop ebx */
  EBX = (pop32());
  /* 11cb4cd3 ret 4 */
  ESPCHK(0x11cb4cbeu, _esp0);
  ESP += 8; return;
}

/* FUN_10004d9d @ 0x11cb4d9d (27 bytes, 11 insns) */
void f_11cb4d9d(void) {
  FTRACE(0x11cb4d9du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb4d9d push ebp */
  push32((uint32_t)(EBP));
  /* 11cb4d9e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11cb4da2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11cb4da4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11cb4da7 push eax */
  push32((uint32_t)(EAX));
  /* 11cb4da8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11cb4dab push eax */
  push32((uint32_t)(EAX));
  /* 11cb4dac call 0x11cb4c2a */
  push32(0x11cb4db1u); f_11cb4c2a();
  /* 11cb4db1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cb4db4 pop ebp */
  EBP = (pop32());
  /* 11cb4db5 ret 4 */
  ESPCHK(0x11cb4d9du, _esp0);
  ESP += 8; return;
}

/* FUN_10004dc0 @ 0x11cb4dc0 (47 bytes, 17 insns) */
void f_11cb4dc0(void) {
  FTRACE(0x11cb4dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb4dc0 push ecx */
  push32((uint32_t)(ECX));
  /* 11cb4dc1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4dc6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11cb4dca jb 0x11cb4de0 */
  if (C.cf) goto L_11cb4de0;
L_11cb4dcc:;
  /* 11cb4dcc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb4dd2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb4dd7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11cb4dd9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cb4dde jae 0x11cb4dcc */
  if (!C.cf) goto L_11cb4dcc;
L_11cb4de0:;
  /* 11cb4de0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cb4de2 mov eax, esp */
  EAX = (ESP);
  /* 11cb4de4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11cb4de6 mov esp, ecx */
  ESP = (ECX);
  /* 11cb4de8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cb4dea mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cb4ded push eax */
  push32((uint32_t)(EAX));
  /* 11cb4dee ret  */
  ESPCHK(0x11cb4dc0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11cb4df0 (6 bytes, 1 insns) */
void f_11cb4df0(void) {
  FTRACE(0x11cb4df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cb4df0 jmp dword ptr [0x11cb5008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11cb5008)))); return;
}

